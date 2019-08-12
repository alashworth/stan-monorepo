target_sources(stan_services_unit_tests PRIVATE
        defaults_test.cpp
        diagnose_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/test_lp.hpp
        )