target_sources(stan_math_prim_mat_unit_tests PRIVATE
        contains_std_vector_test.cpp
        contains_vector_test.cpp
        get_test.cpp
        index_type_test.cpp
        is_constant_all_test.cpp
        is_vector_like_test.cpp
        is_vector_test.cpp
        length_mvt_test.cpp
        length_test.cpp
        return_type_test.cpp
        scalar_seq_view_test.cpp
        scalar_type_test.cpp
        seq_view_test.cpp
        StdVectorBuilder_test.cpp
        value_type_test.cpp
        vector_seq_view_test.cpp
        VectorBuilder_test.cpp
        VectorBuilderHelper_test.cpp
#        boost_precompiler_options_test.cpp
        append_return_type_test.cpp
        common.hpp)