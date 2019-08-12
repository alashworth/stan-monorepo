##############################################################################
# STAN COMPILER                                                              #
##############################################################################

configure_file(${PROJECT_SOURCE_DIR}/src/stan/version.hpp.in
        ${PROJECT_BINARY_DIR}/src/stan/version.hpp @ONLY)

add_executable(stan_stanc
        stanc.cpp
        stanc_helper.hpp
        ${PROJECT_BINARY_DIR}/src/stan/version.hpp
        )

add_subdirectory(arguments)

set_target_properties(stan_stanc PROPERTIES OUTPUT_NAME "stanc")

target_include_directories(stan_stanc PRIVATE
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
        $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>
        $<INSTALL_INTERFACE:include>)

target_link_libraries(stan_stanc PRIVATE
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
# STAN LIBSTANC                                                              #
##############################################################################

#add_library(stan_libstanc
#        main.cpp # What is this for?
#        command.hpp)

add_library(stan_libstanc INTERFACE)

add_library(Stan::StanC ALIAS stan_libstanc)

target_link_libraries(stan_libstanc INTERFACE
        Stan::Algorithms
        Stan::Services
        Boost::headers)

target_include_directories(stan_libstanc INTERFACE
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>)

set_target_properties(stan_libstanc PROPERTIES EXPORT_NAME "StanC")

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


