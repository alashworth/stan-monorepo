add_executable(generate_tests generate_tests.cpp)
target_link_libraries(generate_tests PRIVATE Boost::headers)
target_compile_definitions(generate_tests PRIVATE
		$<$<BOOL:STAN_BUILD_RVECTESTS>:STAN_TEST_ROW_VECTORS>)

# https://stackoverflow.com/questions/36084785/building-a-tool-immediately-so-it-can-be-used-later-in-same-cmake-run

# After profiling a bunch of different ways to to generate the dependency graph for these tests at run-time, I think
# that until the test generation exe is extended to support outputting the names of the generated files, and that we
# find some way to shrink the number of targets generated, the best way to handle this is to keep the generated
# source files in source control. Not ideal, but it's a tradeoff in terms of hard disk space vs CMake configuration
# time.
#
# The alternative is following the Stackoverflow question linked above, i.e. having generate_tests.exe built separately
# from the project.
#
# Generated source files are using 200 as the generate_tests tests per file parameter. 20 is the number that was
# used in the original Makefile configuration, due to limitations on COFF file sections with MinGW. The workaround to
# get around this appears in MinGW GCC > 6 with compile flag -Wa,-mbigobj. The way it is now, these tests won't work
# (probably) compiled with RTools 3.X. If this support is important, regenerate sources using 20.
# Andrew Ashworth (andrew@ashworth.us) 7/21/2019
if(STAN_BUILD_RVECTESTS)
	add_subdirectory(gen/rvec)
else()
	add_subdirectory(gen/base)
endif()