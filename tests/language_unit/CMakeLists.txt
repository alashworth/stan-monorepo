# FIXME: Paths are all broken. I need to review every source file by hand.
message(WARNING "Skipping language unit tests... FIXME.")
return()

# FIXME: argh, why does nothing in Stan::Lang have a header definition?
check_cxx_compiler_flag("-Wl,--allow-multiple-definition" STAN_FLAGS_MULDEF)
if(NOT STAN_FLAGS_MULDEF)
    return()
endif()

set(TEST_MODEL_DIR ${PROJECT_SOURCE_DIR}/tests/test_models)
configure_file(util.hpp.in util.hpp @ONLY)

add_executable(stan_language_unit_tests
        compiler_test.cpp
        parser_generator_test.cpp
        rethrow_located_test.cpp
        utility.hpp
        utility.cpp
        instrumented_callbacks.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/util.hpp
        )

set(compiled_models
        generator/deep-copy-warning.stan
        generator/multidim_var_data_ar45_mat23.stan
        generator/test_lp.stan
        model/valid.stan
        parser/basic.stanfuncs
        parser/special_functions.stanfuncs
        parser/integrate.stanfuncs
        reject/print_reject_function_gq.stan
        reject/print_reject_function_model.stan
        reject/print_reject_function_tdata.stan
        reject/print_reject_function_tparams.stan
        reject/print_reject_gq_block.stan
        reject/print_reject_model_block.stan
        reject/print_reject_tdata_block.stan
        reject/print_reject_tparams_block.stan
        reject/reject_func_call_generated_quantities.stan
        reject/reject_func_call_model.stan
        reject/reject_func_call_transformed_data.stan
        reject/reject_func_call_transformed_parameters.stan
        reject/reject_generated_quantities.stan
        reject/reject_model.stan
        reject/reject_mult_args.stan
        reject/reject_transformed_data.stan
        reject/reject_transformed_parameters.stan)

foreach(model IN LISTS compiled_models)
    string(REGEX REPLACE "(.*)(.stan|.stanfuncs)$" "\\1.hpp" name ${model})
    add_custom_command(
            OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${name}
            COMMAND stan_stanc --o=${CMAKE_CURRENT_BINARY_DIR}/${name}
            ${CMAKE_CURRENT_SOURCE_DIR}/${model}
            DEPENDS stan_stanc VERBATIM
    )
    target_sources(stan_language_unit_tests PRIVATE
            ${CMAKE_CURRENT_BINARY_DIR}/${name})
endforeach()

add_subdirectory(ast)
add_subdirectory(generator)
add_subdirectory(model)
add_subdirectory(parser)
add_subdirectory(reject)

target_include_directories(stan_language_unit_tests PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(stan_language_unit_tests
        Stan::Language
        Boost::headers
        Stan::Util
        GTest::GTest
        GTest::Main)

target_link_options(stan_language_unit_tests PRIVATE "LINKER:--allow-multiple-definition")

gtest_discover_tests(stan_language_unit_tests
        PROPERTIES WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/tests/test_models)