configure_file(test_csv_files/adaptation1.csv test_csv_files/adaptation1.csv COPYONLY)
configure_file(test_csv_files/blocker.0.csv test_csv_files/blocker.0.csv COPYONLY)
configure_file(test_csv_files/eight_schools.csv test_csv_files/eight_schools.csv COPYONLY)
configure_file(test_csv_files/header1.csv test_csv_files/header1.csv COPYONLY)
configure_file(test_csv_files/metadata1.csv test_csv_files/metadata1.csv COPYONLY)
configure_file(test_csv_files/metadata3.csv test_csv_files/metadata3.csv COPYONLY)
configure_file(test_csv_files/samples1.csv test_csv_files/samples1.csv COPYONLY)

target_sources(stan_util_unit_tests PRIVATE
        json/json_data_handler_test.cpp
        json/json_data_test.cpp
        json/json_parser_test.cpp
        array_var_context_test.cpp
        chained_var_context_test.cpp
        cmd_line_test.cpp
        dump_test.cpp
        empty_var_context_test.cpp
        ends_with_test.cpp
        program_reader_test.cpp  # FIXME: this depends on a hardcoded representation of the folder structure
        random_var_context_test.cpp
        read_line_test.cpp
        reader_test.cpp
        stan_csv_reader_test.cpp
        starts_with_test.cpp
        trim_spaces_test.cpp
        util_test.cpp
        validate_zero_buf_test.cpp
        writer_test.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/test_lp.hpp
        )