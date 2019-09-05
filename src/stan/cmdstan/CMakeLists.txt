##############################################################################
# CMDSTAN                                                                    #
##############################################################################

configure_file(${PROJECT_SOURCE_DIR}/src/stan/version.hpp.in
        ${PROJECT_BINARY_DIR}/src/stan/version.hpp @ONLY)

add_library(cmdstan
        main.cpp
        ${PROJECT_BINARY_DIR}/src/stan/version.hpp
        )

add_subdirectory(arguments)

target_link_libraries(cmdstan PRIVATE
        Stan::Services
        Stan::Language
        Stan::Util
        Boost::headers)

##############################################################################
# CMDSTAN WITH MPI                                                           #
##############################################################################

if (TARGET Stan::MathMpi)
    add_library(cmdstan_mpi
            main.cpp
            command.hpp)

    target_link_libraries(cmdstan_mpi PRIVATE
            Stan::Algorithms
            Stan::Services
            Stan::MathMpi
            Boost::headers)
endif ()

##############################################################################
# STANC                                                                      #
##############################################################################

add_executable(stanc
        stanc.cpp
        stanc_helper.hpp)

target_link_libraries(stanc PRIVATE
        Stan::Language
        Stan::Algorithms
        Stan::Services
        Boost::headers)


##############################################################################
# STAN DIAGNOSE                                                              #
##############################################################################

add_executable(stan_diagnose
        diagnose.cpp)

target_link_libraries(stan_diagnose PRIVATE
        Stan::Algorithms
        Stan::Services)

set_target_properties(stan_diagnose PROPERTIES OUTPUT_NAME "diagnose")

##############################################################################
# STAN PRINT                                                                 #
##############################################################################

add_executable(stan_print
        print.cpp
        print_helper.hpp)

target_link_libraries(stan_print PRIVATE
        Stan::Algorithms)

set_target_properties(stan_print PROPERTIES OUTPUT_NAME "print")

##############################################################################
# STAN SUMMARY                                                               #
##############################################################################

add_executable(stan_summary
        stansummary.cpp
        stansummary_helper.hpp)

target_link_libraries(stan_summary PRIVATE
        Stan::Algorithms)

set_target_properties(stan_summary PROPERTIES OUTPUT_NAME "summary")