file(GLOB_RECURSE srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

message(STATUS "Configuring Stan math distribution tests...")
foreach(src IN LISTS srcs)
	get_filename_component(src_fn ${src} NAME_WE)
	string(MAKE_C_IDENTIFIER ${src_fn} src_fn)
	add_executable(${src_fn} ${src})
	target_link_libraries(${src_fn} PRIVATE
			Stan::Math GTest::GTest GTest::Main )
	target_include_directories(${src_fn} PRIVATE
			$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/tests/math_prob>)
	add_test(NAME ${src_fn} COMMAND ${src_fn})
	set_property(TEST ${src_fn} PROPERTY LABELS "DistTest")
endforeach()
message(STATUS "Configuring Stan math distribution tests... [DONE]")