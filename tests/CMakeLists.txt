if (NOT TARGET GTest::GTest)
    message(FATAL_ERROR "GTest is a required dependency if you want to run tests.")
endif ()
include(GoogleTest)

add_subdirectory(math_unit)
if(STAN_BUILD_DIST_TESTS)
    add_subdirectory(math_prob)
endif()
add_subdirectory(util_unit)
add_subdirectory(algorithms_unit)
add_subdirectory(language_unit)
add_subdirectory(services_unit)
add_subdirectory(cmdstan)