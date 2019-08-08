target_sources(stan_algorithms_unit_tests PRIVATE
        base_nuts_test.cpp
        derived_nuts_test.cpp
        instantiation_test.cpp
        softabs_nuts_test.cpp
        unit_e_nuts_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/gauss3D.hpp
        )