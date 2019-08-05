add_math_unit_test(stan_math_prim_mat_unit_tests util.hpp)

add_custom_command(TARGET stan_math_prim_mat_unit_tests POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_CURRENT_SOURCE_DIR}/fun/ar1.csv
        $<TARGET_FILE_DIR:stan_math_prim_mat_unit_tests>/ar1.csv)

add_subdirectory(err)
add_subdirectory(fun)
add_subdirectory(functor)
add_subdirectory(meta)
add_subdirectory(prob)
add_subdirectory(vectorize)

target_link_libraries(stan_math_prim_mat_unit_tests PRIVATE stan_math_prim_scal_utils)

