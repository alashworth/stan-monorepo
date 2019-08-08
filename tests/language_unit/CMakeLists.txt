add_executable(stan_language_unit_tests
        compiler_test.cpp
        parser_generator_test.cpp
        rethrow_located_test.cpp
#        stanc_helper_test.cpp   # TODO: Move this into cmdstan tests
        utility.hpp
        )

add_subdirectory(ast)

target_include_directories(stan_language_unit_tests PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(stan_language_unit_tests
        Stan::Language
        Boost::headers
        Stan::Util
        GTest::GTest
        GTest::Main)

gtest_discover_tests(stan_language_unit_tests)