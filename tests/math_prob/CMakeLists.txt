add_executable(generate_tests generate_tests.cpp)
target_link_libraries(generate_tests PRIVATE Boost::headers)
target_compile_definitions(generate_tests PRIVATE
		$<$<BOOL:STAN_BUILD_RVECTESTS>:STAN_TEST_ROW_VECTORS>)
