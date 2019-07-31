target_sources(stan_math_unit_tests PRIVATE
        invalid_argument_test.cpp
        check_positive_test.cpp
        check_greater_or_equal_test.cpp
        check_greater_test.cpp
        domain_error_test.cpp
        check_positive_finite_test.cpp
        check_not_nan_test.cpp
        check_finite_test.cpp
        check_nonnegative_test.cpp
        check_bounded_test.cpp
        check_less_test.cpp
        check_less_or_equal_test.cpp)