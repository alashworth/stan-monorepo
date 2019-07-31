file(GLOB_RECURSE source_files *.cpp)

link_libraries(Stan::Math GTest::GTest GTest::Main)
include_directories(${PROJECT_SOURCE_DIR}/tests/math_unit)

set(src_prefix "stan_prim_mat")

foreach (source IN LISTS source_files)
    get_filename_component(name ${source} NAME_WLE)
    add_executable(${src_prefix}_${name} ${source})
    gtest_discover_tests(${src_prefix}_${name})
endforeach ()