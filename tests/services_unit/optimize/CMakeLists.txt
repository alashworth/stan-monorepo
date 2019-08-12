target_sources(stan_services_unit_tests PRIVATE
        bfgs_test.cpp
        defaults_test.cpp
        lbfgs_test.cpp
        newton_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/rosenbrock.hpp
        )