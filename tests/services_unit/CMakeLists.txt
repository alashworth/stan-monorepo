add_executable(stan_services_unit_tests
        util.hpp
        util.cpp
        check_adaptation.cpp)

add_subdirectory(callbacks)
add_subdirectory(diagnose)
add_subdirectory(experimental/advi)
add_subdirectory(optimize)
add_subdirectory(sample)
add_subdirectory(util)

target_link_libraries(stan_services_unit_tests PRIVATE
        Stan::Services
        Stan::Util
        GTest::GTest
        GTest::Main)

target_include_directories(stan_services_unit_tests PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR})

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/diagnose/test_lp.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/diagnose/test_lp.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/diagnose/test_lp.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/optimize/rosenbrock.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/optimize/rosenbrock.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/optimize/rosenbrock.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/sample/bernoulli.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/sample/bernoulli.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/sample/bernoulli.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/sample/gauss3D.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/sample/gauss3D.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/sample/gauss3D.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/sample/gq_test_multidim.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/sample/gq_test_multidim.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/sample/gq_test_multidim.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/sample/test_gq2.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/sample/test_gq2.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/sample/test_gq2.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/util/test_gq.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/util/test_gq.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/util/test_gq.stan
        DEPENDS stanc VERBATIM
)

gtest_discover_tests(stan_services_unit_tests PROPERTIES RUN_SERIAL TRUE)