CONFIGURE_FILE(test_csv_files/blocker.1.csv blocker.1.csv COPYONLY)
CONFIGURE_FILE(test_csv_files/blocker.2.csv blocker.2.csv COPYONLY)
CONFIGURE_FILE(test_csv_files/epil.1.csv epil.1.csv COPYONLY)
CONFIGURE_FILE(test_csv_files/epil.2.csv epil.2.csv COPYONLY)

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/funnel.hpp
        COMMAND stan_stanc --o=${CMAKE_CURRENT_BINARY_DIR}/funnel.hpp
            ${CMAKE_CURRENT_SOURCE_DIR}/hmc/hamiltonians/funnel.stan)

add_executable(stan_algorithms_unit_tests
        base_adapter_test.cpp
        chains_test.cpp
        covar_adaptation_test.cpp
        sample_test.cpp
        stepsize_adaptation_test.cpp
        var_adaptation_test.cpp
        windowed_adaptation_test.cpp
        instrumented_callbacks.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/funnel.hpp
        )

target_link_libraries(stan_algorithms_unit_tests PRIVATE
        Stan::Algorithms
        Stan::Util
        Stan::Services
        GTest::GTest
        GTest::Main)

target_include_directories(stan_algorithms_unit_tests PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(hmc)