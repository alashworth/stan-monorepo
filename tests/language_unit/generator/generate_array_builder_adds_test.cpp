#include "util.hpp"
#include <stan/language/ast.hpp>
#include <stan/language/ast/node/double_literal.hpp>
#include <gtest/gtest.h>
#include <sstream>

namespace stan {
namespace lang {
void generate_array_builder_adds(const std::vector<expression>& elements,
                                 bool user_facing, std::ostream& o);
}
}


TEST(genArrayBuilderAdds, addScalars) {
  stan::lang::expression e_d3(stan::lang::double_literal(3));
  std::vector<stan::lang::expression> elts;
  elts.push_back(e_d3);
  elts.push_back(e_d3);
  elts.push_back(e_d3);
  std::stringstream o2;
  stan::lang::generate_array_builder_adds(elts, true, o2);
  EXPECT_EQ(3, count_matches(".add(", o2.str()));
}
