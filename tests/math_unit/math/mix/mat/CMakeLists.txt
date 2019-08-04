add_math_unit_test(stan_math_mix_mat_unit_tests
        eigen_plugins_test.cpp
        seq_reader.hpp
        seq_writer.hpp)

add_subdirectory(fun)
add_subdirectory(functor)
add_subdirectory(meta)
add_subdirectory(prob)
add_subdirectory(util)
add_subdirectory(vectorize)

target_link_libraries(stan_math_mix_mat_unit_tests
        PRIVATE stan_math_rev_scal_utils)