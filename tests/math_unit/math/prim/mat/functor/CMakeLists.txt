target_sources(stan_math_prim_mat_unit_tests PRIVATE
        faulty_functor.hpp
        finite_diff_hessian_helper_test.cpp
        hard_work.hpp
        )

if (TARGET stan_math_mt_unit_tests)
    target_sources(stan_math_mt_unit_tests PRIVATE
            num_threads_test.cpp
            utils_threads.hpp)
endif ()