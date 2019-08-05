file(GLOB_RECURSE math_sources *.hpp )
configure_file(version.hpp.in version.hpp @ONLY)
list(APPEND math_sources
		../math.hpp
		${CMAKE_CURRENT_BINARY_DIR}/version.hpp)

# Base math configuration. Subconfigurations inherit behavior from this target.
message(STATUS "Configuring Stan math...")
add_library(stan_math INTERFACE)
add_library(Stan::Math ALIAS stan_math)
set_property(TARGET stan_math PROPERTY EXPORT_NAME Math)

target_sources(stan_math INTERFACE ${math_sources})

target_include_directories(stan_math INTERFACE
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
		$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>)

target_link_libraries(stan_math INTERFACE
		Boost::headers
		Eigen3::Eigen
		Sundials::Cvodes
		Sundials::Idas)

target_compile_definitions(stan_math INTERFACE _USE_MATH_DEFINES)

target_compile_features(stan_math INTERFACE
        cxx_generic_lambdas
        cxx_decltype_auto)

message(STATUS "Configuring Stan math... [DONE]")

# OpenCL
if (TARGET OpenCL::OpenCL AND TARGET Threads::Threads)
	message(STATUS "Configuring Stan math with OpenCL support...")
	message(VERBOSE "Stan math using OpenCL version: ${OpenCL_VERSION_STRING}")
	message(VERBOSE "OpenCL library: ${OpenCL_LIBRARY}")
	add_library(stan_math_opencl INTERFACE)
    add_library(Stan::MathOpenCl ALIAS stan_math_opencl)
	set_property(TARGET stan_math_opencl PROPERTY EXPORT_NAME MathOpenCL)
	target_link_libraries(stan_math_opencl INTERFACE
            stan_math OpenCL::OpenCL Threads::Threads)
	target_compile_definitions(stan_math_opencl INTERFACE
            STAN_THREADS
			STAN_OPENCL
			OPENCL_DEVICE_ID=${STAN_OPENCL_DEVICE_ID}
			OPENCL_PLATFORM_ID=${STAN_OPENCL_PLATFORM_ID}
			CL_TARGET_OPENCL_VERSION=120
            __CL_ENABLE_EXCEPTIONS)
    target_compile_features(stan_math_opencl INTERFACE
            cxx_generic_lambdas
            cxx_decltype_auto)

    message(STATUS "Configuring Stan math with OpenCL support... [DONE]")
else()
	message(STATUS "Configuring Stan math with OpenCL support... [SKIPPED]")
endif()

# MPI
if(MPI_CXX_FOUND)
	add_library(stan_math_mpi)
	add_library(Stan::MathMPI ALIAS stan_math_mpi)
	set_property(TARGET stan_math_mpi PROPERTY EXPORT_NAME MathMPI)

	target_sources(stan_math_mpi PUBLIC prim/arr/functor/mpi_cluster_inst.cpp)

	target_link_libraries(stan_math_mpi INTERFACE stan_math MPI::MPI_CXX)
	target_compile_definitions(stan_math_mpi INTERFACE STAN_MPI)

    target_compile_features(stan_math_mpi INTERFACE
            cxx_generic_lambdas
            cxx_decltype_auto)
endif()

# Multithreaded
if(TARGET Threads::Threads)
	add_library(stan_math_mt INTERFACE)
	add_library(Stan::MathMT ALIAS stan_math_mt)
	set_property(TARGET stan_math_mt PROPERTY EXPORT_NAME MathMT)

	target_link_libraries(stan_math_mt INTERFACE Threads::Threads)
	target_compile_definitions(stan_math_mt INTERFACE STAN_THREADS)

    target_compile_features(stan_math_mt INTERFACE
            cxx_generic_lambdas
            cxx_decltype_auto)
endif()


