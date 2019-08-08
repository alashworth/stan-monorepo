target_sources(stan_algorithms_unit_tests PRIVATE
        expl_leapfrog2_test.cpp
        expl_leapfrog_test.cpp
        impl_leapfrog2_test.cpp
        impl_leapfrog_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/gauss.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/command.hpp
        )