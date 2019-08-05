# Preamble
cmake_minimum_required(VERSION 3.15.1 FATAL_ERROR)

find_program(CCACHE_PROGRAM ccache)
if (CCACHE_PROGRAM)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif ()

project(Stan
		VERSION 2.20.0
		DESCRIPTION "State-of-the-art package for statistical inference."
		HOMEPAGE_URL "https://github.com/stan-dev/stan")
enable_testing()

if (NOT CMAKE_GENERATOR MATCHES "Makefiles|Ninja" OR NOT CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
	message(WARNING "Your build system is unsupported. Consider installing GCC and Make.")
endif ()

# Project setup & global configuration
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

# Check for position-independent code linking capabilities
if(NOT MINGW)	# MINGW: Always PIC, doesn't expose option to enable it.
	include(CheckPIESupported)
	check_pie_supported(OUTPUT_VARIABLE output LANGUAGES CXX)
	if(NOT CMAKE_CXX_LINK_PIE_SUPPORTED)
		message(STATUS "${output}.\n PIE link options will not be passed to linker.")
	endif()
	set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

# More global compiler specific flags and options
include(CheckCXXCompilerFlag)

# Unfortunately RTools35 doesn't support this flag, which increases
# the maximum number of obj sections on Windows. Clang does the right thing
# and transparently enables this if it runs out of space. If VS is ever supported
# the same thing is achieved by passing /BIGOBJ.
# This flag will allow you to compile with debug symbols "most" of the time.
if (MINGW AND CMAKE_CXX_COMPILER_ID MATCHES "GNU")
	check_cxx_compiler_flag("-Wa,-mbig-obj" STAN_FLAGS_BIGOBJ)
	if (STAN_FLAGS_BIGOBJ)
		add_compile_options("-Wa,-mbig-obj")
	endif ()
endif ()

# Prefer LLD since it's the fastest linker.
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
	check_cxx_compiler_flag("-fuse-ld=lld" STAN_FLAGS_LLD)
	if (STAN_FLAGS_LLD)
		list(APPEND CMAKE_EXE_LINKER_FLAGS "-fuse-ld=lld")
	endif ()
endif()

# Uncomment below command to enable a debug print of dependency search directories
# set(CMAKE_FIND_DEBUG_MODE ON)

# If Conan was used to install dependencies, the following include prepends
# the Conan install directory onto CMake's search path.
if(EXISTS ${PROJECT_BINARY_DIR}/conan_paths.cmake)
	include(${PROJECT_BINARY_DIR}/conan_paths.cmake)
endif()

# Set a default build type if none was specified
# MinSizeRel is the safest since certain Stan libraries won't link successfully
# if debug symbols are enabled due to the number of templates.
set(default_build_type "MinSizeRel")
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
	message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
	set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE
			STRING "Choose the type of build." FORCE)
	# Set the possible values of build type for cmake-gui
	set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
			"Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

# Project options
option(STAN_BUILD_DOCS "Enable documentation building." OFF)
option(STAN_BUILD_TESTS "Enable project tests." ON)
option(STAN_BUILD_RVECTESTS "Enable generation of extended row-vector tests." OFF)
set(STAN_OPENCL_DEVICE_ID "0" CACHE STRING "Desired device to run OpenCL-accelerated functions on.")
set(STAN_OPENCL_PLATFORM_ID "0" CACHE STRING "Desired OpenCL platform to run OpenCL-accelerated functions on.")

# External project dependencies
include(FeatureSummary)
find_package(Boost 1.69 QUIET OPTIONAL_COMPONENTS serialization mpi)
set_package_properties(Boost PROPERTIES
		DESCRIPTION "Free peer-reviewed portable C++ source libraries"
		URL "https://www.boost.org/"
		TYPE REQUIRED)

add_feature_info("Boost MPI" Boost_mpi_FOUND "Necessary for enabling MPI support. Disabled if library not found.")

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

# are these still necessary?
target_compile_definitions(Boost::headers INTERFACE
		BOOST_RESULT_OF_USE_TR1
		BOOST_NO_DECLTYPE
#		BOOST_DISABLE_ASSERTS
#		BOOST_PHOENIX_NO_VARIADIC_EXPRESSION
		)

if (TARGET GTest::GTest AND APPLE) # is this still necessary?
	target_compile_definitions(GTest::GTest INTERFACE GTEST_USE_OWN_TR1_TUPLE)
endif()

# Main targets built by this project
include(GNUInstallDirs)
add_subdirectory(src/stan/math)
add_subdirectory(src/stan/util)

if(STAN_BUILD_TESTS)
	if (NOT TARGET GTest::GTest)
		message(FATAL_ERROR "GTest is a required dependency if you want to run tests.")
	endif ()

	# Diagnostic compile warnings and static analysis
    #	find_program(CLANG_TIDY_PROGRAM NAMES clang-tidy)
	#	if(CLANG_TIDY_PROGRAM)
	#		set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_PROGRAM};-checks=*")
	#	endif()
	#
    #	find_program(CPPLINT_PROGRAM NAMES cpplint)
	#	if(CPPLINT_PROGRAM)
	#		set(CMAKE_CXX_CPPLINT "${CPPLINT_PROGRAM}")
	#	endif()
	#
	#	find_program(IWYU_PROGRAM NAMES include-what-you-use iwyu
	#			HINTS D:/apps/include-what-you-use/build/bin)
	#	if(IWYU_PROGRAM)
	#		set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE "${IWYU_PROGRAM};-Xiwyu;any;-Xiwyu;iwyu;-Xiwyu;args")
	#	endif()
	#
    #	find_program(CPPCHECK_PROGRAM NAMES cppcheck)
	#	if(CPPCHECK_PROGRAM)
	#		set(CMAKE_CXX_CPPCHECK "${CPPCHECK_PROGRAM};--std=c++11")
	#	endif()

	# FIXME: Figure out why the check doesn't return false correctly.
	#	check_cxx_compiler_flag("-Wl,--no-as-needed" STAN_FLAGS_LWYU)
	#	if (STAN_FLAGS_LWYU)
	#		set(CMAKE_LINK_WHAT_YOU_USE TRUE)
	#	endif()

	# FIXME: There ought to be lots more use of boost::numeric_cast in the code.
	#	add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wcast-qual)
	#	add_compile_options(-Wmissing-declarations -Wmissing-include-dirs -Wmissing-prototypes)

	include(GoogleTest)
	add_subdirectory(tests/math_unit)
	#	add_subdirectory(tests/math_prob)
	#	add_subdirectory(tests/util_unit)
endif()