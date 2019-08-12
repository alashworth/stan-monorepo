add_subdirectory(indexing)

target_sources(stan_language_unit_tests PRIVATE
        finite_diff_grad_test.cpp
        grad_hess_log_prob_test.cpp
        grad_tr_mat_times_hessian_test.cpp
        gradient_dot_vector_test.cpp
        gradient_test.cpp
        hessian_test.cpp
        hessian_times_vector_test.cpp
        log_prob_grad_test.cpp
        log_prob_propto_test.cpp
        model_base_crtp_test.cpp
        model_base_test.cpp
        model_functional_test.cpp
        test_gradients_test.cpp
        test_model.hpp
        )