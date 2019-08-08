configure_file(ar1.csv ar1.csv COPYONLY)
configure_file(blocker.1.csv blocker.1.csv COPYONLY)
configure_file(blocker.2.csv blocker.2.csv COPYONLY)

target_sources(stan_util_unit_tests PRIVATE
        autocovariance_test.cpp
        compute_effective_sample_size_test.cpp
        split_chains_test.cpp
        )