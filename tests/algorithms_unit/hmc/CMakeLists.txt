target_sources(stan_algorithms_unit_tests PRIVATE
        base_hmc_test.cpp
        mock_hmc.hpp
        )

add_subdirectory(hamiltonians)
add_subdirectory(integrators)
add_subdirectory(nuts)
add_subdirectory(nuts_classic)
add_subdirectory(static)
add_subdirectory(static_uniform)
add_subdirectory(xhmc)

