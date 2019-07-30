target_sources(stan_math_unit_tests PRIVATE
        lorenz.hpp
        harmonic_oscillator.hpp
        integrate_ode_rk45_test.cpp
        mock_ode_functor.hpp
        forced_harmonic_oscillator.hpp
        mock_throwing_ode_functor.hpp
        coupled_ode_observer_test.cpp
        integrate_1d_test.cpp
        coupled_ode_system_test.cpp)

if (TARGET stan_math_mpi_unit_tests)
    target_sources(stan_math_mpi_unit_tests PRIVATE mpi_cluster_test.cpp)
endif ()