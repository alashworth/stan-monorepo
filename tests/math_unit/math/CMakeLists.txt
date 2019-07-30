target_sources(stan_math_unit_tests PRIVATE
        test_ad.hpp
        test_ad_test.cpp
        util.hpp
        util_test.cpp)

add_subdirectory(prim/arr/err)
add_subdirectory(prim/arr/fun)
add_subdirectory(prim/arr/functor)
add_subdirectory(prim/arr/meta)
add_subdirectory(prim/arr/prob)
add_subdirectory(prim/mat)