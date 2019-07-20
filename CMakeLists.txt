# Preamble
cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(Stan
		VERSION 2.19.1
		DESCRIPTION "State-of-the-art package for statistical inference."
		HOMEPAGE_URL "https://github.com/stan-dev/stan"
		LANGUAGES CXX)
include(CTest)

# Project setup
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

if(NOT WIN32)
	include(CheckPIESupported)
	check_pie_supported(OUTPUT_VARIABLE output LANGUAGES CXX)
	if(NOT CMAKE_CXX_LINK_PIE_SUPPORTED)
		message(FATAL_ERROR "PIE is not supported at link time: ${output}.\n"
				"PIE link options will not be passed to linker.")
	endif()
	set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

# set(CMAKE_FIND_DEBUG_MODE ON)
if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/conan_paths.cmake)
	include(${CMAKE_CURRENT_BINARY_DIR}/conan_paths.cmake)
endif()

# Set a default build type if none was specified
# Release is the safest since certain Stan libraries won't link successfully
# if debug symbols are enabled due to template bloat.
set(default_build_type "Release")
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
option(STAN_BUILD_TESTS "Enable project tests." ${BUILD_TESTING})
option(STAN_BUILD_RVECTESTS "Enable generation of extended row-vector tests." OFF)
set(STAN_OPENCL_DEVICEID "0" CACHE STRING "Desired device to run OpenCL-accelerated functions on.")
set(STAN_OPENCL_PLATFORM_ID "0" CACHE STRING "Desired OpenCL platform to run OpenCL-accelerated functions on.")

# External project dependencies
include(FeatureSummary)
find_package(Boost 1.69 QUIET OPTIONAL_COMPONENTS serialization mpi)
set_package_properties(Boost PROPERTIES
		DESCRIPTION "Free peer-reviewed portable C++ source libraries"
		URL "https://www.boost.org/"
		TYPE REQUIRED)

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

find_package(OpenCL QUIET)
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
		DESCRIPTION "System threading library.")

feature_summary(INCLUDE_QUIET_PACKAGES
		WHAT ALL
		FATAL_ON_MISSING_REQUIRED_PACKAGES)

# Configuring our found dependencies
target_compile_definitions(Boost::boost INTERFACE
		BOOST_RESULT_OF_USE_TR1
		BOOST_NO_DECLTYPE
		BOOST_DISABLE_ASSERTS
		BOOST_PHOENIX_NO_VARIADIC_EXPRESSION)

#if(TARGET GTest::GTest)
#	target_compile_definitions(GTest::GTest INTERFACE
#			GTEST_USE_OWN_TR1_TUPLE
#			)
#endif()


# Main targets built by this project
include(GNUInstallDirs)
add_subdirectory(src/stan/math)

if(STAN_BUILD_TESTS)
	include(GoogleTest)
	add_subdirectory(tests/math_unit)
	#add_subdirectory(tests/math_prob)
endif()