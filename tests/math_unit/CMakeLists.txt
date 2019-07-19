file(GLOB_RECURSE unit_test_srcs
		RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} CONFIGURE_DEPENDS  *.cpp)

message(STATUS "Configuring math unit tests...")
foreach(src IN LISTS unit_test_srcs)
	string(REPLACE ".cpp" "" src_fn ${src})
	string(MAKE_C_IDENTIFIER ${src_fn} src_fn)
	message(STATUS "SRC=${src_fn}")

	add_executable(${src_fn} ${src})
	target_link_libraries(${src_fn} PRIVATE Stan::Math GTest::Main)
	target_include_directories(${src_fn} PRIVATE ${PROJECT_SOURCE_DIR})
	gtest_discover_tests(${src_fn})
endforeach()
message(STATUS "Configuring math unit tests... [DONE]")