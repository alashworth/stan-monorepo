add_math_unit_test(stan_math_prim_mat_unit_tests util.hpp)

add_subdirectory(err)
add_subdirectory(fun)
add_subdirectory(functor)
add_subdirectory(meta)
add_subdirectory(prob)
add_subdirectory(vectorize)

target_link_libraries(stan_math_prim_mat_unit_tests PRIVATE stan_math_prim_scal_utils)

