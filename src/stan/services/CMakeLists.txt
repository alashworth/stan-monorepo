message(STATUS "Configuring Stan services library...")

add_library(stan_services INTERFACE)

file(GLOB_RECURSE srcs *.hpp)
target_sources(stan_services INTERFACE ${srcs})

target_link_libraries(stan_services INTERFACE
        Stan::Math
        Stan::Algorithms
        Stan::Util)

add_library(Stan::Services ALIAS stan_services)
set_property(TARGET stan_services PROPERTY EXPORT_NAME Services)

message(STATUS "Configuring Stan services library... [DONE]")