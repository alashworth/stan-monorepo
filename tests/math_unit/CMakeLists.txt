message(STATUS "Configuring Stan math unit tests...")

# convenience method since the base stan math configuration holds
# the majority of all unit tests
function(add_math_unit_test name)
    add_executable(${name} ${ARGN})
    set_target_properties(${name} PROPERTIES LINKER_LANGUAGE CXX)
    target_link_libraries(${name} PRIVATE Stan::Math GTest::GTest GTest::Main)
    target_include_directories(${name} PRIVATE
            $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/tests/math_unit>
            $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/tests/math_unit>)
    gtest_discover_tests(${name})
endfunction()

add_math_unit_test(stan_math_misc_unit_tests math_include_test.cpp util.hpp)

if (MPI_CXX_FOUND)
    add_executable(stan_math_mpi_unit_tests)
    target_include_directories(stan_math_mpi_unit_tests PRIVATE
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR})
    target_link_libraries(stan_math_unit_tests PRIVATE
            Stan::MathMpi)
endif()

add_subdirectory(math)

message(STATUS "Configuring Stan math unit tests... [DONE]")

#set(mpi_test_srcs
#		math/prim/arr/functor/mpi_cluster_test.cpp
#		math/prim/mat/functor/mpi_parallel_call_test.cpp
#		math/rev/mat/functor/map_rect_mpi_prim_test.cpp
#		math/rev/mat/functor/map_rect_mpi_test.cpp
#		)
#
#set(opencl_test_srcs
#		math/opencl/add_test.cpp
#		math/opencl/assign_event_test.cpp
#		math/opencl/async_test.cpp
#		math/opencl/check_opencl_test.cpp
#		math/opencl/check_test.cpp
#		math/opencl/cholesky_decompose_test.cpp
#		math/opencl/copy_test.cpp
#		math/opencl/copy_triangular_test.cpp
#		math/opencl/diagonal_multiply_test.cpp
#		math/opencl/identity_test.cpp
#		math/opencl/kernel_cl_test.cpp
#		math/opencl/multiply_test.cpp
#		math/opencl/multiply_transpose_test.cpp
#		math/opencl/opencl_context_test.cpp
#		math/opencl/opencl_matrix_test.cpp
#		math/opencl/subtract_test.cpp
#		math/opencl/sub_block_test.cpp
#		math/opencl/transpose_test.cpp
#		math/opencl/triangular_transpose_test.cpp
#		math/opencl/tri_inverse_test.cpp
#		math/opencl/zeros_test.cpp
#		math/prim/mat/fun/mdivide_left_tri_test.cpp
#		math/rev/mat/fun/cholesky_decompose_test.cpp
#		)
#
#set(threads_test_srcs
#		math/prim/mat/functor/num_threads_test.cpp
#		math/rev/core/thread_stack_instance_test.cpp
#		math/rev/mat/functor/gradient_test.cpp
#		math/rev/mat/functor/map_rect_concurrent_threads_test.cpp
#		)
#
#message(STATUS "Configuring Stan math unit tests...")
#foreach(src IN LISTS base_test_srcs)
#	string(REPLACE ".cpp" "" src_fn ${src})
#	string(MAKE_C_IDENTIFIER ${src_fn} src_fn)
#	add_executable(${src_fn} ${src})
#	target_link_libraries(${src_fn} PRIVATE
#			Stan::Math GTest::GTest GTest::Main)
#	target_include_directories(${src_fn} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
#	# gtest_discover_tests(${src_fn})
#	add_test(NAME ${src_fn} COMMAND ${src_fn})
#endforeach()
#message(STATUS "Configuring Stan math unit tests... [DONE]")
#
#if(TARGET Stan::MathOpenCL)
#	message(STATUS "Configuring Stan math OpenCL unit tests...")
#	foreach(src IN LISTS opencl_test_srcs)
#		string(REPLACE ".cpp" ".opencl" src_fn ${src})
#		string(MAKE_C_IDENTIFIER ${src_fn} src_fn)
#		add_executable(${src_fn} ${src})
#		target_link_libraries(${src_fn} Stan::MathOpenCL GTest::GTest GTest::Main)
#		target_include_directories(${src_fn} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
#		add_test(NAME ${src_fn} COMMAND ${src_fn})
#	endforeach()
#	message(STATUS "Configuring Stan math OpenCL unit tests... [DONE]")
#else()
#	message(STATUS "Configuring Stan math OpenCL unit tests... [SKIPPED]")
#endif()
#
#if(Boost_mpi_FOUND)
#	message(STATUS "Configuring Stan math MPI unit tests...")
#	foreach(src IN LISTS mpi_test_srcs)
#		string(REPLACE ".cpp" ".mpi" src_fn ${src})
#		string(MAKE_C_IDENTIFIER ${src_fn} src_fn)
#		add_executable(${src_fn} ${src})
#		target_link_libraries(${src_fn} Stan::MathMPI
#				GTest::GTest GTest::Main MPI::MPI_CXX)
#		add_test(NAME ${src_fn}
#				COMMAND ${MPIEXEC_EXECUTABLE}
#				${MPIEXEC_NUMPROC_FLAG}
#				2
#				${MPIEXEC_PREFLAGS}
#				${CMAKE_CURRENT_BINARY_DIR}/${src_fn}
#				${MPIEXEC_POSTFLAGS})
#		message(STATUS "Configuring Stan math MPI unit tests... [DONE]")
#else()
#	message(STATUS "Configuring Stan math MPI unit tests... [SKIPPED]")
#endif()