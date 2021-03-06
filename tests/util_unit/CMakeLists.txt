add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/io/test_lp.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/io/test_lp.hpp ${CMAKE_CURRENT_SOURCE_DIR}/io/test_lp.stan
        DEPENDS stanc
        VERBATIM)

add_executable(stan_util_unit_tests util.hpp)
gtest_discover_tests(stan_util_unit_tests)

target_link_libraries(stan_util_unit_tests PRIVATE
        Stan::Math
        GTest::GTest
        GTest::Main
        Stan::Util
        Stan::Language)

target_include_directories(stan_util_unit_tests PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>)

add_subdirectory(analyze/mcmc)
add_subdirectory(io)