target_sources(stan_algorithms_unit_tests PRIVATE
        bfgs_exponential_boundary_test.cpp
        bfgs_linesearch_test.cpp
        bfgs_minimizer_test.cpp
        bfgs_test.cpp
        bfgs_update_test.cpp
        lbfgs_update_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/exponential_boundary.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/rosenbrock.hpp
        )