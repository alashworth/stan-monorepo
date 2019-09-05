message(DEBUG "Configuring Stan algorithms unit tests...")

CONFIGURE_FILE(test_csv_files/blocker.1.csv blocker.1.csv COPYONLY)
CONFIGURE_FILE(test_csv_files/blocker.2.csv blocker.2.csv COPYONLY)
CONFIGURE_FILE(test_csv_files/epil.1.csv epil.1.csv COPYONLY)
CONFIGURE_FILE(test_csv_files/epil.2.csv epil.2.csv COPYONLY)

add_executable(stan_algorithms_unit_tests
        base_adapter_test.cpp
        chains_test.cpp
        covar_adaptation_test.cpp
        sample_test.cpp
        stepsize_adaptation_test.cpp
        var_adaptation_test.cpp
        windowed_adaptation_test.cpp
        instrumented_callbacks.hpp
        util.cpp
        util.hpp
        )

gtest_discover_tests(stan_algorithms_unit_tests)

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
add_subdirectory(optimization)
add_subdirectory(variational)

# This is a workaround for https://gitlab.kitware.com/cmake/cmake/issues/18399
# Once fixed, we can locate this in the CMakeLists file adjacent to the source
add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/hmc/hamiltonians/funnel.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/hmc/hamiltonians/funnel.hpp
            ${CMAKE_CURRENT_SOURCE_DIR}/hmc/hamiltonians/funnel.stan
        DEPENDS stanc VERBATIM)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/hmc/integrators/gauss.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/hmc/integrators/gauss.hpp
            ${CMAKE_CURRENT_SOURCE_DIR}/hmc/integrators/gauss.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/hmc/integrators/command.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/hmc/integrators/command.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/hmc/integrators/command.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/hmc/nuts/gauss3D.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/hmc/nuts/gauss3D.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/hmc/nuts/gauss3D.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/optimization/exponential_boundary.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/optimization/exponential_boundary.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/optimization/exponential_boundary.stan
        DEPENDS stanc VERBATIM
)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/optimization/rosenbrock.hpp
        COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/optimization/rosenbrock.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/optimization/rosenbrock.stan
        DEPENDS stanc VERBATIM
)

set(variational_models
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/eta_should_be_big.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/eta_should_be_small.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/eta_should_fail.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/gradient_warn.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/hier_logistic.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/hier_logistic_cp.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/multivariate_no_constraint.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/multivariate_with_constraint.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/univariate_no_constraint.stan
        ${CMAKE_CURRENT_SOURCE_DIR}/variational/models/univariate_with_constraint.stan)

foreach(model IN LISTS variational_models)
    get_filename_component(name ${model} NAME_WLE)
    add_custom_command(
            OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/variational/models/${name}.hpp
            COMMAND stanc --o=${CMAKE_CURRENT_BINARY_DIR}/variational/models/${name}.hpp ${model}
            DEPENDS stanc VERBATIM)
endforeach()

message(DEBUG "Configuring Stan algorithms unit tests... [DONE]")