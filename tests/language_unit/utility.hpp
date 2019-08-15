#ifndef TEST_UNIT_LANG_PARSER_UTILITY_HPP
#define TEST_UNIT_LANG_PARSER_UTILITY_HPP

#include <string>
#include <util.hpp>

/** extract model name from filepath name
 * @param file_name  Name off model file
 */
std::string file_name_to_model_name(const std::string& name);

/** test whether model with specified path name parses successfully
 * throws exception on parse fail; intended to be called from inside
 * a try/catch block (i.e., other utility functions defined here).
 *
 * @param file_name  Filepath of model file
 * @param msgs Expected error message (default: none)
 * @param allow_undefined Boolean to permit undefined functions (default: false)
 */
bool is_parsable(const std::string& file_name,
                 std::ostream* msgs = 0,
                 bool allow_undefined = false);


/** test whether model with specified name in path good parses successfully
 *
 * @param model_name Name of model to parse
 * @param folder Path to folder under src/test/test-models (default "good")
 * @param msgs Warning message
 */
bool is_parsable_folder(const std::string& model_name,
                        const std::string& folder = "/good",
                        std::ostream* msgs = 0,
                        const std::string& extension = ".stan");

/** test that model with specified name in folder "good"
 *  parses without throwing an exception
 *
 * @param model_name Name of model to parse
 */
void test_parsable(const std::string& model_name);

/** test that model with specified name in folder "good"
 *  parses without throwing an exception
 *
 * @param model_name Name of model to parse
 */
std::string test_parse_msgs(const std::string& model_name);

/** test that file with standalone functions with specified name in folder
 * "good-standalone-functions" parses without throwing an exception
 *
 * @param model_name Name of model to parse
 */
void test_parsable_standalone_functions(const std::string& model_name);

/** Test that model with specified name in folder "bad" throws
 * an exception containing the second arg as a substring
 * when model not found, will fail with misleading message.
 * Case insensitive string comparison.
 *
 * @param model_name Name of model to parse
 * @param msg Substring of error message expected.
 */
void test_throws(const std::string& model_name, const std::string& error_msg);

/**
 * Same as test_throws() but for two messages.
 */
void test_throws(const std::string& model_name,
                 const std::string& error_msg1,
                 const std::string& error_msg2);

/**
 * Same as test_throws() but for three messages.
 */
void test_throws(const std::string& model_name,
                 const std::string& error_msg1,
                 const std::string& error_msg2,
                 const std::string& error_msg3);

/** test that model with specified name in good path parses
 * and returns a warning containing the second arg as a substring
 *
 * @param model_name Name of model to parse
 * @param msg Substring of warning message expected.
 */
void test_warning(const std::string& model_name,
                  const std::string& warning_msg);

namespace stan {
namespace lang {
struct program;
}
}

stan::lang::program model_to_ast(const std::string& model_name,
                                 const std::string& model_text);

std::string model_to_hpp(const std::string& model_name,
                         const std::string& model_text);

void expect_matches(int n,
                    const std::string& stan_code,
                    const std::string& target);

std::string get_file_name(const std::string& folder,
                          const std::string& model_name);

void expect_match(const std::string& model_name,
                  const std::string& target,
                  bool allow_undefined = false);

/**
 * Test that model of specified name in test/test-models/good
 * has exactly the specified number of matches
 *
 * @param[in] model_name Name of model file.
 * @param[in] warning_msg Message to count.
 * @param[in] n Expected number of message occurrences.
 */
void test_num_warnings(const std::string& model_name,
                       const std::string& warning_msg,
                       int n);
#endif
