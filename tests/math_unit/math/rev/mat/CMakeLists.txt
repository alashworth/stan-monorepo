target_sources(stan_math_unit_tests PRIVATE
        util.hpp
        eigen_plugins_test.cpp
        )

add_subdirectory(err)
add_subdirectory(fun)
add_subdirectory(functor)
add_subdirectory(meta)
add_subdirectory(prob)
add_subdirectory(vectorize)