#include <stan/language/ast.hpp>
#include "utility.hpp"
#include "util.hpp"
#include <gtest/gtest.h>
#include <sstream>

namespace stan {
namespace lang {
void generate_model_typedef(const std::string& model_name, std::ostream& o);
}
}

TEST(lang, generate_model_typedef) {
  std::string model_name = "name";
  std::stringstream ss;
  stan::lang::generate_model_typedef(model_name,ss);

  EXPECT_EQ(1, count_matches("typedef name_namespace::name stan_model;",
                             ss.str()));
}
