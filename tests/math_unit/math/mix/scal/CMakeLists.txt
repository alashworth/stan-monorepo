add_math_unit_test(stan_math_mix_scal_unit_tests "")

add_subdirectory(fun)
add_subdirectory(meta)
add_subdirectory(prob)

target_link_libraries(stan_math_mix_scal_unit_tests PRIVATE
        stan_math_rev_scal_utils)