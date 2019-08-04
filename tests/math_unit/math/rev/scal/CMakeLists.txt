add_math_unit_test(stan_math_rev_scal_unit_tests "")

add_subdirectory(err)
add_subdirectory(fun)
add_subdirectory(meta)
add_subdirectory(prob)

add_library(stan_math_rev_scal_utils
        util.hpp util.cpp)

target_link_libraries(stan_math_rev_scal_utils
        PUBLIC Stan::Math
        PRIVATE GTest::GTest)

target_link_libraries(stan_math_rev_scal_unit_tests PRIVATE
        stan_math_rev_scal_utils)