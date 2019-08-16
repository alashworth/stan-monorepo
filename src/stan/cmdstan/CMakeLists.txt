##############################################################################
# CMDSTAN                                                                    #
##############################################################################

configure_file(${PROJECT_SOURCE_DIR}/src/stan/version.hpp.in
        ${PROJECT_BINARY_DIR}/src/stan/version.hpp @ONLY)

add_executable(cmdstan
        stanc.cpp
        stanc_helper.hpp
        ${PROJECT_BINARY_DIR}/src/stan/version.hpp
        )

add_subdirectory(arguments)

target_include_directories(cmdstan PRIVATE
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
        $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>
        $<INSTALL_INTERFACE:include>)

target_link_libraries(cmdstan PRIVATE
        Stan::Language
        Stan::Util
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

##############################################################################
# STANC                                                                      #
##############################################################################

add_executable(stanc main.cpp)

target_link_libraries(stanc INTERFACE
        Stan::Algorithms
        Stan::Services
        Boost::headers)

target_include_directories(stanc INTERFACE
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>)

#[[###########################################################################
# STAN LIBSTANC MPI                                                          #
#]]
###########################################################################

# this is an optional configuration built if Stan::MathMpi is also present

if (TARGET Stan::MathMpi)
    add_library(stan_libstanc_mpi
            main.cpp
            command.hpp)

    add_library(Stan::StanCMpi ALIAS stan_libstanc_mpi)

    target_link_libraries(stan_libstanc_mpi PRIVATE
            Stan::Algorithms
            Stan::Services
            Stan::MathMpi
            Boost::headers)

    target_include_directories(stan_libstanc_mpi PRIVATE
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

    set_target_properties(stan_libstanc_mpi PROPERTIES EXPORT_NAME "StanCMpi")
    set_target_properties(stan_libstanc_mpi PROPERTIES OUTPUT_NAME "stanc_mpi")
endif ()


