message(STATUS "Configuring Stan algorithms library...")

add_library(stan_algorithms INTERFACE)

target_include_directories(stan_algorithms INTERFACE
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
        $<INSTALL_INTERFACE:include>)

target_link_libraries(stan_algorithms INTERFACE
        Stan::Math
        Stan::Services
        Stan::Util)

add_library(Stan::Algorithms ALIAS stan_algorithms)
set_property(TARGET stan_algorithms PROPERTY EXPORT_NAME Algorithms)

add_subdirectory(hmc)
add_subdirectory(mcmc)
add_subdirectory(optimization)
add_subdirectory(variational)

message(STATUS "Configuring Stan algorithms library... [DONE]")