file(GLOB_RECURSE math_sources CONFIGURE_DEPENDS *.[hc]pp )
configure_file(version.hpp.in version.hpp @ONLY)
list(APPEND math_sources
		../math.hpp
		${CMAKE_CURRENT_BINARY_DIR}/version.hpp)

# Base math configuration
add_library(stan_math INTERFACE)
add_library(Stan::Math ALIAS stan_math)
set_property(TARGET stan_math PROPERTY EXPORT_NAME Math)

target_include_directories(stan_math INTERFACE
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
		$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>)

target_link_libraries(stan_math INTERFACE
		Boost::boost
		Eigen3::Eigen
		Sundials::Cvodes
		Sundials::Idas)

target_compile_definitions(stan_math INTERFACE _USE_MATH_DEFINES)

# OpenCL
if(OpenCL_FOUND)
	add_library(stan_math_opencl INTERFACE)
	add_library(Stan::MathOpenCL ALIAS stan_math_opencl)
	set_property(TARGET stan_math_opencl PROPERTY EXPORT_NAME MathOpenCL)

	target_link_libraries(stan_math_opencl INTERFACE
			stan_math ${OpenCL_LIBRARIES})

	target_include_directories(stan_math_opencl INTERFACE
			${OpenCL_INCLUDE_DIRS})

	target_compile_definitions(stan_math_opencl INTERFACE
			STAN_OPENCL
			OPENCL_DEVICE_ID=${STAN_OPENCL_DEVICEID}
			OPENCL_PLATFORM_ID=${STAN_OPENCL_PLATFORM_ID}
			CL_USE_DEPRECATED_OPENCL_1_2_APIS
			__CL_ENABLE_EXCEPTIONS
			CL_TARGET_OPENCL_VERSION=128
			)
endif()

# MPI
if(MPI_CXX_FOUND)
	add_library(stan_math_mpi INTERFACE)
	add_library(Stan::MathMPI ALIAS stan_math_mpi)
	set_property(TARGET stan_math_mpi PROPERTY EXPORT_NAME MathMPI)

	target_link_libraries(stan_math_mpi INTERFACE MPI::MPI_CXX)
	target_compile_definitions(stan_math_mpi INTERFACE STAN_MPI)
endif()

# Multithreaded
if(TARGET Threads::Threads)
	add_library(stan_math_mt INTERFACE)
	add_library(Stan::MathMT ALIAS stan_math_mt)
	set_property(TARGET stan_math_mt PROPERTY EXPORT_NAME MathMT)

	target_link_libraries(stan_math_mt INTERFACE Threads::Threads)
	target_compile_definitions(stan_math_mt INTERFACE STAN_THREADS)
endif()


