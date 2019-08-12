#include "utility.hpp"
#include "util.hpp"
#include <stan/language/ast/node/program.hpp>
#include <stan/language/ast_def.cpp>
//#include <stan/language/compiler.hpp>
#include <stan/util/io/program_reader.hpp>
#include <fstream>
#include <gtest/gtest.h>

std::string file_name_to_model_name(const std::string& name) {
  std::string name_copy = name;
  size_t last_bk = name_copy.find_last_of('\\');
  if (last_bk != std::string::npos)
    name_copy.erase(0, last_bk + 1);
  size_t last_fwd = name_copy.find_last_of('/');
  if (last_fwd != std::string::npos)
    name_copy.erase(0, last_fwd + 1);

  size_t last_dot = name_copy.find_last_of('.');
  if (last_dot != std::string::npos)
    name_copy.erase(last_dot, name_copy.size());

  name_copy += "_model";
  return name_copy;
}

bool is_parsable_folder(const std::string& model_name,
                        const std::string& folder,
                        std::ostream* msgs,
                        const std::string& extension) {
  std::string path("src/test/test-models/");
  path += folder;
  path += "/";
  path += model_name;
  path += extension;
  return is_parsable(path, msgs, false);
}


namespace stan {
namespace lang {
bool parse(std::ostream* out, std::istream& in, const std::string& name,
           const io::program_reader& reader, program& prog,
           const bool allow_undefined = false);

void generate_cpp(const program& prog, const std::string& model_name,
                  const std::vector<io::preproc_event>& history,
                  std::ostream& o);

bool compile(std::ostream* msgs, std::istream& in, std::ostream& out,
             const std::string& name, const bool allow_undefined = false,
             const std::string& filename = "unknown file name",
             const std::vector<std::string>& include_paths
             = std::vector<std::string>());

}}

bool is_parsable(const std::string& file_name, std::ostream* msgs,
                 bool allow_undefined) {
  stan::lang::program prog;
  std::ifstream fs(file_name.c_str());
  if (fs.fail()) {
    *msgs << "Cannot open model file " << file_name << std::endl;
    return false;
  }
  std::string model_name = file_name_to_model_name(file_name);
  std::vector<std::string> search_path;
  stan::io::program_reader reader(fs, file_name, search_path);
  std::string s = reader.program();
  std::stringstream ss(s);
  bool parsable
      = stan::lang::parse(msgs, ss, model_name, reader, prog, allow_undefined);
  return parsable;
}

void test_parsable(const std::string& model_name) {
  bool result;
  std::stringstream msgs;
  SCOPED_TRACE("parsing: " + model_name);
  result = is_parsable_folder(model_name, "good", &msgs);
  if (!result) {
    FAIL() << std::endl
           << "*********************************" << std::endl
           << "model name=" << model_name << std::endl
           << msgs.str() << std::endl;
  }
  SUCCEED();
}

std::string test_parse_msgs(const std::string& model_name) {
  bool result;
  std::stringstream msgs;
  SCOPED_TRACE("parsing: " + model_name);
  result = is_parsable_folder(model_name, "good", &msgs);
  return msgs.str();
}

void test_parsable_standalone_functions(const std::string& model_name) {
  {
    SCOPED_TRACE("parsing standalone functions: " + model_name);
    EXPECT_TRUE(is_parsable_folder(model_name, "good-standalone-functions", 0,
                                   ".stanfuncs"));
  }
}

void test_throws(const std::string& model_name, const std::string& error_msg) {
  std::stringstream msgs;
  std::string found_lc = boost::algorithm::to_lower_copy(msgs.str());
  std::string expected_lc = boost::algorithm::to_lower_copy(error_msg);
  bool pass = false;
  try {
    is_parsable_folder(model_name, "bad", &msgs);
    if (msgs.str().length() > 0)
      FAIL() << std::endl
             << "*********************************" << std::endl
             << "model name=" << model_name << std::endl
             << "*** no exception thrown by parser" << std::endl
             << "*** parser msgs: msgs.str()=" << msgs.str() << std::endl
             << "*** expected: error_msg=" << error_msg << std::endl
             << "*********************************" << std::endl
             << std::endl;
  } catch (const std::invalid_argument& e) {
    std::string what_lc
        = boost::algorithm::to_lower_copy(std::string(e.what()));
    if (what_lc.find(expected_lc) == std::string::npos
        && found_lc.find(expected_lc) == std::string::npos) {
      FAIL() << std::endl
             << "*********************************" << std::endl
             << "model name=" << model_name << std::endl
             << "*** EXPECTED: error_msg=" << error_msg << std::endl
             << "*** FOUND: e.what()=" << e.what() << std::endl
             << "*** FOUND: msgs.str()=" << msgs.str() << std::endl
             << "*********************************" << std::endl
             << std::endl;
    }
    return;
  }
  if (!pass) {
    FAIL() << "model name=" << model_name << " not found" << std::endl;
    return;
  }
  FAIL() << "model name=" << model_name
         << " is parsable and were expecting msg=" << error_msg << std::endl;
}

void test_throws(const std::string& model_name, const std::string& error_msg1,
                 const std::string& error_msg2) {
  test_throws(model_name, error_msg1);
  test_throws(model_name, error_msg2);
}

void test_throws(const std::string& model_name, const std::string& error_msg1,
                 const std::string& error_msg2, const std::string& error_msg3) {
  test_throws(model_name, error_msg1);
  test_throws(model_name, error_msg2);
  test_throws(model_name, error_msg3);
}

void test_warning(const std::string& model_name,
                  const std::string& warning_msg) {
  std::stringstream msgs;
  EXPECT_TRUE(is_parsable_folder(model_name, "good", &msgs));
  bool found = msgs.str().find(warning_msg) != std::string::npos;
  EXPECT_TRUE(found) << std::endl
                     << "FOUND: " << msgs.str() << std::endl
                     << "EXPECTED (as substring): " << warning_msg << std::endl;
}

stan::lang::program model_to_ast(const std::string& model_name,
                                 const std::string& model_text) {
  std::stringstream ss(model_text);
  std::stringstream msgs;
  stan::lang::program prog;
  stan::io::program_reader reader;
  bool parsable = stan::lang::parse(&msgs, ss, model_name, reader, prog);
  EXPECT_TRUE(parsable);
  return prog;
}

std::string model_to_hpp(const std::string& model_name,
                         const std::string& model_text) {
  std::stringstream ss(model_text);
  std::stringstream msgs;
  stan::lang::program prog;
  stan::io::program_reader reader;
  stan::lang::parse(&msgs, ss, model_name, reader, prog);

  int lines = 0;
  for (size_t pos = 0; (pos = model_text.find('\n', pos)) != std::string::npos;
       ++pos)
    ++lines;
  reader.add_event(0, 0, "start", model_name);
  reader.add_event(lines, lines, "end", model_name);

  std::stringstream output;
  stan::lang::generate_cpp(prog, model_name, reader.history(), output);
  return output.str();
}

void expect_matches(int n, const std::string& stan_code,
                    const std::string& target) {
  std::string model_hpp = model_to_hpp("unnamed_unit_test", stan_code);
  EXPECT_EQ(n, count_matches(target, model_hpp)) << "looking for: " << target;
}
std::string get_file_name(const std::string& folder,
                          const std::string& model_name) {
  std::string path("src/test/test-models/");
  path += folder;
  path += "/";
  path += model_name;
  path += ".stan";
  return path;
}

void expect_match(const std::string& model_name, const std::string& target,
                  bool allow_undefined) {
  std::stringstream msgs;
  std::string file_name = get_file_name("good", model_name);
  std::ifstream file_stream(file_name.c_str());
  std::stringstream cpp_out_stream;
  stan::lang::compile(&msgs, file_stream, cpp_out_stream, model_name,
                      allow_undefined);
  std::string cpp_out = cpp_out_stream.str();
  file_stream.close();
  EXPECT_TRUE(count_matches(target, cpp_out) > 0)
      << "looking for: " << target << std::endl
      << "found: " << cpp_out << std::endl;
}

void test_num_warnings(const std::string& model_name,
                       const std::string& warning_msg, int n) {
  std::stringstream msgs;
  EXPECT_TRUE(is_parsable_folder(model_name, "good", &msgs));
  EXPECT_EQ(n, count_matches(warning_msg, msgs.str()))
      << "looking for: " << warning_msg;
}
