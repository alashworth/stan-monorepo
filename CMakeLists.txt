# Preamble
cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

# The following causes generated makefiles to be more verbose in their output.
# set(CMAKE_VERBOSE_MAKEFILE TRUE)

# Developers who work on multiple branches should consider enabling ccache.
# find_program(CCACHE_PROGRAM ccache)
# if (CCACHE_PROGRAM)
#   set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
# endif ()

project(Stan
        VERSION 2.20.0
        DESCRIPTION "State-of-the-art package for statistical inference."
        HOMEPAGE_URL "https://github.com/stan-dev/stan"
        LANGUAGES CXX)
include(CTest)

# Project setup & global configuration
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

# Check for position-independent code linking capabilities
if (NOT MINGW) # MINGW: Always PIC, doesn't expose option to enable it.
    include(CheckPIESupported)
    check_pie_supported(OUTPUT_VARIABLE output LANGUAGES CXX)
    if (NOT CMAKE_CXX_LINK_PIE_SUPPORTED)
        message(STATUS "${output}.\n PIE link options will not be passed to linker.")
    endif ()
    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif ()

# More global compiler specific flags and options
include(CheckCXXCompilerFlag)

# Stan has many templates, so we need to enable large section support for Windows COFF
if (MINGW AND CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    check_cxx_compiler_flag("-Wa,-mbig-obj" STAN_FLAGS_BIGOBJ)
    if (STAN_FLAGS_BIGOBJ)
        add_compile_options("-Wa,-mbig-obj")
    endif ()
endif ()

# Prefer LLD since it's the fastest linker, then Gold, then default.
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    check_cxx_compiler_flag("-fuse-ld=lld" STAN_FLAGS_LLD)
    if (STAN_FLAGS_LLD)
        list(APPEND CMAKE_EXE_LINKER_FLAGS "-fuse-ld=lld")
    endif ()
endif ()

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    check_cxx_compiler_flag("-fuse-ld=gold" STAN_FLAGS_GOLD)
    # argh, why does RTools include the gold linker in its MinGW binutils when it's ELF only?
    if (STAN_FLAGS_GOLD AND NOT WIN32)
        list(APPEND CMAKE_EXE_LINKER_FLAGS "-fuse-ld=gold")
    endif ()
endif ()

# Uncomment below command to enable a debug print of dependency search directories
# set(CMAKE_FIND_DEBUG_MODE ON)

# If Conan was used to install dependencies, the following include prepends
# the Conan install directory onto CMake's search path.
if (EXISTS ${PROJECT_BINARY_DIR}/conan_paths.cmake)
    include(${PROJECT_BINARY_DIR}/conan_paths.cmake)
endif ()

# Set a default build type if none was specified
set(default_build_type "RelWithDebInfo")
if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
    set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE
            STRING "Choose the type of build." FORCE)
    # Set the possible values of build type for cmake-gui
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
            "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif ()

# Project options
option(STAN_BUILD_TESTS "Enable project tests." ${BUILD_TESTING})
option(STAN_BUILD_RVECTESTS "Enable generation of extended row-vector distribution tests." OFF)
set(STAN_OPENCL_DEVICE_ID "0" CACHE STRING "Desired device to run OpenCL-accelerated functions on.")
set(STAN_OPENCL_PLATFORM_ID "0" CACHE STRING "Desired OpenCL platform to run OpenCL-accelerated functions on.")

# External project dependencies
include(FeatureSummary)
find_package(Boost 1.69 QUIET OPTIONAL_COMPONENTS serialization mpi)
set_package_properties(Boost PROPERTIES
        DESCRIPTION "Free peer-reviewed portable C++ source libraries"
        URL "https://www.boost.org/"
        TYPE REQUIRED)

add_feature_info("MPI Support" Boost_mpi_FOUND "This requires Boost::MPI.")

find_package(Eigen3 3.3.3 QUIET)
set_package_properties(Eigen3 PROPERTIES
        DESCRIPTION "C++ template library for linear algebra"
        URL "https://eigen.tuxfamily.org"
        PURPOSE "Enables matrix support in Stan::Math"
        TYPE REQUIRED)

find_package(Sundials 4.1.0 QUIET)
set_package_properties(Sundials PROPERTIES
        DESCRIPTION "SUite of Nonlinear and DIfferential/ALgebraic equation Solvers."
        URL "https://github.com/LLNL/sundials"
        TYPE REQUIRED)

find_package(OpenCL 1.2 QUIET)
set_package_properties(OpenCL PROPERTIES
        DESCRIPTION "Framework for writing programs that execute across heterogeneous platforms"
        PURPOSE "Necessary for running OpenCL-enabled unit tests."
        TYPE OPTIONAL)

find_package(MPI QUIET)
set_package_properties(MPI PROPERTIES
        DESCRIPTION "Message passing interface implementation"
        PURPOSE "Neccessary in order to run MPI-enabled unit tests."
        TYPE RUNTIME)

find_package(Doxygen QUIET)
set_package_properties(Doxygen PROPERTIES
        DESCRIPTION "Tool for generating code documentation"
        URL "https://github.com/doxygen/doxygen"
        TYPE OPTIONAL)

find_package(GTest 1.8.0 QUIET)
set_package_properties(GTest PROPERTIES
        DESCRIPTION "C++ unit test framework"
        URL "https://github.com/google/googletest"
        TYPE OPTIONAL)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads QUIET)
set_package_properties(Threads PROPERTIES
        DESCRIPTION "POSIX-compatible system threading library."
        PURPOSE "Required to run multithreaded Stan tests."
        TYPE OPTIONAL)

feature_summary(INCLUDE_QUIET_PACKAGES WHAT ALL
        FATAL_ON_MISSING_REQUIRED_PACKAGES)

# Is this still necessary?
target_compile_definitions(Boost::headers INTERFACE
        $<$<BOOL:${UNIX}>:BOOST_PHOENIX_NO_VARIADIC_EXPRESSION>
        )

## Again, is this still necessary? https://codereview.appspot.com/6332052/ supposedly fixes.
#if (TARGET GTest::GTest)
#	target_compile_definitions(GTest::GTest INTERFACE
#            $<$<BOOL:${APPLE}>:GTEST_USE_OWN_TR1_TUPLE>)
#endif()

# Main targets built by this project
include(GNUInstallDirs)
add_subdirectory(src/stan/math)
add_subdirectory(src/stan/language)
add_subdirectory(src/stan/util)
add_subdirectory(src/stan/cmdstan)
add_subdirectory(src/stan/services)
add_subdirectory(src/stan/algorithms)
add_subdirectory(docs)

if (STAN_BUILD_TESTS)
    # Global testing options
#    check_cxx_compiler_flag("--coverage" STAN_GCOV_PRESENT)
#    if (STAN_GCOV_PRESENT AND CMAKE_BUILD_TYPE STREQUAL "Debug" AND NOT WIN32)
#        add_compile_options(--coverage)
#    endif ()
#    add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wcast-qual)
#    add_compile_options(-Wmissing-declarations -Wmissing-include-dirs)

    add_subdirectory(tests)
endif ()

