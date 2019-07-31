target_sources(stan_math_unit_tests PRIVATE
        contains_fvar_test.cpp
        include_summand_test.cpp
        ad_promotable_test.cpp
        partials_type_test.cpp
        child_type_test.cpp
        return_type_test.cpp
        operands_and_partials_test.cpp
        partials_return_type_test.cpp
        is_constant_all_test.cpp
        is_fvar_test.cpp)