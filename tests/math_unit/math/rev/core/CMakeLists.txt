add_math_unit_test(stan_math_rev_core_unit_tests
        precomp_v_vari_test.cpp
        vd_vari_test.cpp
        vdd_vari_test.cpp
        dvv_vari_test.cpp
        std_numeric_limits_test.cpp
        precomputed_gradients_test.cpp
        vvv_vari_test.cpp
        var_test.cpp
        print_stack_test.cpp
        operator_logical_or_test.cpp
        var_stack_test.cpp
        vari_test.cpp
        precomp_vvv_vari_test.cpp
        v_vari_test.cpp
        ddv_vari_test.cpp
        dv_vari_test.cpp
        vdv_vari_test.cpp
        build_vari_array_test.cpp
        vv_vari_test.cpp
        operator_unary_not_test.cpp
        precomp_vv_vari_test.cpp
        agrad_test.cpp
        operator_logical_and_test.cpp
        dvd_vari_test.cpp
        )

if (TARGET Stan::MathMt)
    target_sources(stan_math_mt_unit_tests PRIVATE
            thread_stack_instance_test.cpp)
endif ()


target_link_libraries(stan_math_rev_core_unit_tests
        PRIVATE stan_math_rev_scal_utils)