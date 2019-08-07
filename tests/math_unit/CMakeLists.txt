message(STATUS "Configuring Stan math unit tests...")

# convenience method for constructing "plain" math unit tests
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

if (TARGET Stan::MathMpi)
    add_executable(stan_math_mpi_unit_tests
            math/rev/mat/functor/map_rect_mpi_prim_test.cpp
            math/rev/mat/functor/map_rect_mpi_test.cpp
            math/prim/arr/functor/mpi_cluster_test.cpp
            math/prim/mat/functor/hard_work.hpp
            math/prim/mat/functor/mpi_parallel_call_test.cpp
            math/prim/mat/functor/faulty_functor.hpp
            )
    target_include_directories(stan_math_mpi_unit_tests PRIVATE
            $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/tests/math_unit>
            $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/tests/math_unit>)
    target_link_libraries(stan_math_mpi_unit_tests PRIVATE Stan::MathMpi GTest::GTest GTest::Main)
    gtest_discover_tests(stan_math_mpi_unit_tests)
endif ()

if (TARGET Stan::MathOpenCl)
    add_executable(stan_math_opencl_unit_tests
            math/opencl/add_test.cpp
            math/opencl/assign_event_test.cpp
            math/opencl/async_test.cpp
            math/opencl/check_opencl_test.cpp
            math/opencl/check_test.cpp
            math/opencl/cholesky_decompose_test.cpp
            math/opencl/copy_test.cpp
            math/opencl/copy_triangular_test.cpp
            math/opencl/diagonal_multiply_test.cpp
            math/opencl/identity_test.cpp
            math/opencl/kernel_cl_test.cpp
            math/opencl/multiply_test.cpp
            math/opencl/multiply_transpose_test.cpp
            math/opencl/opencl_context_test.cpp
            math/opencl/opencl_matrix_test.cpp
            math/opencl/subtract_test.cpp
            math/opencl/sub_block_test.cpp
            math/opencl/transpose_test.cpp
            math/opencl/triangular_transpose_test.cpp
            math/opencl/tri_inverse_test.cpp
            math/opencl/zeros_test.cpp
            math/prim/mat/fun/mdivide_left_tri_test.cpp
            math/rev/mat/fun/cholesky_decompose_test.cpp
            )
    target_include_directories(stan_math_opencl_unit_tests PRIVATE
            $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/tests/math_unit>
            $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/tests/math_unit>)
    target_link_libraries(stan_math_opencl_unit_tests PRIVATE Stan::MathOpenCl GTest::GTest GTest::Main)
    gtest_discover_tests(stan_math_opencl_unit_tests)
endif ()

if(TARGET Stan::MathMt)
    add_executable(stan_math_mt_unit_tests
            math/rev/mat/functor/map_rect_prim_test.cpp
            math/rev/mat/functor/gradient_test.cpp
            math/rev/mat/functor/map_rect_concurrent_test.cpp
            math/rev/mat/functor/map_rect_concurrent_threads_test.cpp
            math/rev/mat/functor/map_rect_mpi_prim_test.cpp
            math/rev/core/thread_stack_instance_test.cpp
            math/prim/mat/functor/utils_threads.hpp
            math/prim/mat/functor/num_threads_test.cpp
            )
    target_include_directories(stan_math_mt_unit_tests PRIVATE
            $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/tests/math_unit>
            $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/tests/math_unit>)
    target_link_libraries(stan_math_mt_unit_tests PRIVATE Stan::MathMt GTest::GTest GTest::Main)
    gtest_discover_tests(stan_math_mt_unit_tests)
endif()

set(mpi_test_srcs
        math/rev/mat/functor/map_rect_mpi_test.cpp
        math/rev/mat/functor/map_rect_prim_test.cpp
        math/rev/mat/functor/map_rect_mpi_prim_test.cpp
        prim/mat/functor/mpi_parallel_call_test.cpp
        prim/arr/functor/mpi_cluster_test.cpp
        )

if(Boost_mpi_FOUND)
	message(STATUS "Configuring Stan math MPI unit tests...")
	foreach(src IN LISTS mpi_test_srcs)
		string(REPLACE ".cpp" ".mpi" src_fn ${src})
		string(MAKE_C_IDENTIFIER ${src_fn} src_fn)
		add_executable(${src_fn} ${src})
		target_link_libraries(${src_fn} Stan::MathMPI
				GTest::GTest GTest::Main MPI::MPI_CXX)
		add_test(NAME ${src_fn}
				COMMAND ${MPIEXEC_EXECUTABLE}
				${MPIEXEC_NUMPROC_FLAG}
				2
				${MPIEXEC_PREFLAGS}
				${CMAKE_CURRENT_BINARY_DIR}/${src_fn}
				${MPIEXEC_POSTFLAGS})
		message(STATUS "Configuring Stan math MPI unit tests... [DONE]")
else()
	message(STATUS "Configuring Stan math MPI unit tests... [SKIPPED]")
endif()

add_subdirectory(math)

message(STATUS "Configuring Stan math unit tests... [DONE]")

