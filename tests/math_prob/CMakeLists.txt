add_executable(generate_tests generate_tests.cpp)
target_compile_definitions(generate_tests PRIVATE
		$<STAN_BUILD_RVECTESTS:STAN_TEST_ROW_VECTORS)

add_custom_target(gen_tests ALL
		COMMAND generate_tests bernoulli/bernoulli_test.hpp)