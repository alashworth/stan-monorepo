target_sources(stan_math_unit_tests PRIVATE
        check_positive_test.cpp
        check_greater_test.cpp
        check_less_test.cpp
        out_of_range_test.cpp
        check_not_nan_test.cpp
        invalid_argument_vec_test.cpp
        check_bounded_test.cpp
        check_nonnegative_test.cpp
        check_consistent_size_test.cpp
        check_greater_or_equal_test.cpp
        check_consistent_sizes_test.cpp
        check_positive_finite_test.cpp
        domain_error_vec_test.cpp
        check_finite_test.cpp
        check_less_or_equal_test.cpp)