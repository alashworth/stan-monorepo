message(WARNING "Skipping cmdstan tests... FIXME")
return()

add_executable(stan_cmdstan_unit_tests
        command_test.cpp
        csv_header_consistency_test.cpp
        diagnose_test.cpp
        elapsed_time_test.cpp
        fixed_param_sampler_test.cpp
        generated_quantities_test.cpp
        metric_test.cpp
        model_output_test.cpp
        mpi_test.cpp
        opencl_test.cpp
        optimization_output_test.cpp
        print_test.cpp
        print_uninitialized_test.cpp
        stansummary_test.cpp
        variational_output_test.cpp
        stanc_helper_test.cpp
        utility.hpp
        )

set(compiled_models
        test-models/proper.stan)

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/test-models)

foreach(model IN LISTS compiled_models)
    string(REGEX REPLACE "(.*)(.stan|.stanfuncs)$" "\\1.hpp" name ${model})
    add_custom_command(
            OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${name}
            COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/${name}
            ${CMAKE_CURRENT_SOURCE_DIR}/${model}
            DEPENDS stanc VERBATIM
    )
    target_sources(stan_cmdstan_unit_tests PRIVATE
            ${CMAKE_CURRENT_BINARY_DIR}/${name})
endforeach()

target_link_libraries(stan_cmdstan_unit_tests PRIVATE
        GTest::GTest
        GTest::Main
        Stan::StanC
        Stan::Algorithms)

target_include_directories(stan_cmdstan_unit_tests PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR})

