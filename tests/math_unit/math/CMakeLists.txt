target_sources(stan_math_misc_unit_tests PRIVATE
        ad_tolerances.hpp
        expect_near_rel.hpp
        expect_near_rel_test.cpp
        is_finite.hpp
        serializer.hpp
        serializer_test.cpp
        test_ad.hpp
        test_ad_test.cpp
        util.hpp
        util_test.cpp)

add_subdirectory(prim/arr)
add_subdirectory(prim/mat)
add_subdirectory(prim/scal)
add_subdirectory(fwd/arr)
add_subdirectory(fwd/core)
add_subdirectory(fwd/mat)
add_subdirectory(fwd/scal)
add_subdirectory(rev/arr)
add_subdirectory(rev/core)
add_subdirectory(rev/mat)
add_subdirectory(rev/scal)
add_subdirectory(mix/arr)
add_subdirectory(mix/core)
add_subdirectory(mix/mat)
add_subdirectory(mix/scal)
add_subdirectory(memory)