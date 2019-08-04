add_math_unit_test(stan_math_rev_mat_unit_tests util.hpp eigen_plugins_test.cpp)

add_subdirectory(err)
add_subdirectory(fun)
add_subdirectory(functor)
add_subdirectory(meta)
add_subdirectory(prob)
add_subdirectory(vectorize)

target_link_libraries(stan_math_rev_mat_unit_tests
        PRIVATE
        stan_math_rev_scal_utils)