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
        algebra_solver_test.cpp
        integrate_ode_bdf_rev_test.cpp
        adj_jac_apply_test.cpp
        util_cvodes_bdf.hpp
        integrate_ode_adams_rev_test.cpp
        integrate_ode_cvodes_grad_rev_test.cpp
        )