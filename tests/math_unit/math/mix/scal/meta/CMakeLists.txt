target_sources(stan_math_mix_scal_unit_tests PRIVATE
        child_type_test.cpp
        include_summand_test.cpp
        ad_promotable_test.cpp
        partials_type_test.cpp
        contains_fvar_test.cpp
        broadcast_array_test.cpp
        is_constant_all_test.cpp
        partials_return_type_test.cpp
        return_type_test.cpp)