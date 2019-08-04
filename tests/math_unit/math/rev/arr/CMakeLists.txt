add_math_unit_test(stan_math_rev_arr_unit_tests util.hpp)

add_subdirectory(err)
add_subdirectory(fun)
add_subdirectory(functor)
add_subdirectory(meta)

target_link_libraries(stan_math_rev_arr_unit_tests
        PUBLIC stan_math_rev_scal_utils)


