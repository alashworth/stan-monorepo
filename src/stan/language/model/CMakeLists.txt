target_sources(stan_language PUBLIC
        finite_diff_grad.hpp
        grad_hess_log_prob.hpp
        grad_tr_mat_times_hessian.hpp
        gradient.hpp
        gradient_dot_vector.hpp
        hessian.hpp
        hessian_times_vector.hpp
        indexing.hpp
        log_prob_grad.hpp
        log_prob_propto.hpp
        model_base.hpp
        model_base_crtp.hpp
        model_functional.hpp
        model_header.hpp
        prob_grad.hpp
        standalone_functions_header.hpp
        test_gradients.hpp
        )

add_subdirectory(indexing)