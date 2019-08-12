message(STATUS "Configuring Stan utility library...")
file(GLOB_RECURSE srcs *.hpp)

add_library(stan_util INTERFACE)
add_library(Stan::Util ALIAS stan_util)
set_property(TARGET stan_util PROPERTY EXPORT_NAME Util)

target_sources(stan_util INTERFACE ${srcs})

target_include_directories(stan_util INTERFACE
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
		$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>)

target_link_libraries(stan_util INTERFACE
		Stan::Math Boost::headers Eigen3::Eigen)
message(STATUS "Configuring Stan utility library... [DONE]")
