target_sources(stan_math_rev_mat_unit_tests PRIVATE
        integrate_ode_bdf_prim_test.cpp
        idas_system_test.cpp
        integrate_ode_adams_prim_test.cpp
        integrate_dae_test.cpp
        cvodes_ode_data_rev_test.cpp
        map_rect_mpi_prim_test.cpp
        cvodes_ode_data_prim_test.cpp
        idas_integrator_test.cpp
        util_cvodes_adams.hpp
        util_algebra_solver.hpp
        map_rect_mpi_test.cpp
        algebra_solver_test.cpp
        integrate_ode_bdf_rev_test.cpp
        adj_jac_apply_test.cpp
        util_cvodes_bdf.hpp
        integrate_ode_adams_rev_test.cpp
        integrate_ode_cvodes_grad_rev_test.cpp
        )

if (TARGET Stan::MathMpi)
    target_sources(stan_math_mpi_unit_tests PRIVATE
            map_rect_mpi_prim_test.cpp
            map_rect_mpi_test.cpp
            )
endif ()

if (TARGET Stan::MathMt)
    target_sources(stan_math_mt_unit_tests PRIVATE
            map_rect_prim_test.cpp
            gradient_test.cpp
            map_rect_concurrent_test.cpp
            map_rect_concurrent_threads_test.cpp
            map_rect_concurrent_prim_test.cpp
            )
endif ()