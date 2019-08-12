target_sources(stan_services_unit_tests PRIVATE
        create_rng_test.cpp
        experimental_message_test.cpp
        generate_transitions_test.cpp
        gq_writer_test.cpp
        initialize_test.cpp
        inv_metric_test.cpp
        mcmc_writer_test.cpp
        # FIXME: The below don't work.
#        run_adaptive_sampler_test.cpp
#        run_sampler_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/test_gq.hpp
        )