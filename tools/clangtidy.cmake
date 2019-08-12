# TODO: Write a helper script that finds and runs Clang-Tidy over the sources

find_program(CLANG_TIDY_PROGRAM NAMES clang-tidy)
if(CLANG_TIDY_PROGRAM)
	set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_PROGRAM};-checks=*")
endif()