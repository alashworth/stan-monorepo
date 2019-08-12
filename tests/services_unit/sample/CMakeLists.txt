configure_file(gq_test_multidim_fit.csv gq_test_multidim_fit.csv COPYONLY)
configure_file(bernoulli_fit.csv bernoulli_fit.csv COPYONLY)
configure_file(gq_test_multidim_fit.csv gq_test_multidim_fit.csv COPYONLY)
configure_file(bernoulli.data.R bernoulli.data.R COPYONLY)

target_sources(stan_services_unit_tests PRIVATE
        defaults_test.cpp
        fixed_param_test.cpp
        hmc_nuts_dense_e_adapt_test.cpp
        hmc_nuts_dense_e_test.cpp
        hmc_nuts_dense_inv_metric_test.cpp
        hmc_nuts_diag_e_adapt_test.cpp
        hmc_nuts_diag_e_test.cpp
        hmc_nuts_diag_inv_metric_test.cpp
        hmc_nuts_unit_e_adapt_test.cpp
        hmc_nuts_unit_e_test.cpp
        hmc_static_dense_e_adapt_test.cpp
        hmc_static_dense_e_test.cpp
        hmc_static_dense_inv_metric_test.cpp
        hmc_static_diag_e_adapt_test.cpp
        hmc_static_diag_e_test.cpp
        hmc_static_diag_inv_metric_test.cpp
        hmc_static_unit_e_adapt_test.cpp
        standalone_gqs_bad_test.cpp
        standalone_gqs_multidim_test.cpp
        standalone_gqs_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/gauss3D.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/bernoulli.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/gq_test_multidim.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/test_gq2.hpp
        )