#include <gtest/gtest.h>
#include <string>

namespace stan {
namespace lang {
bool is_binary_operator(std::string const&);
bool is_unary_operator(std::string const&);
bool is_unary_postfix_operator(std::string const&);
std::string fun_name_to_operator(std::string const&);
}
}  // namespace stan

TEST(gmAst, isBinaryOperator) {
  using stan::lang::is_binary_operator;
  EXPECT_TRUE(is_binary_operator("add"));
  EXPECT_TRUE(is_binary_operator("elt_divide"));
  EXPECT_FALSE(is_binary_operator("foo"));
}

TEST(gmAst, isUnaryOperator) {
  using stan::lang::is_unary_operator;
  EXPECT_TRUE(is_unary_operator("minus"));
  EXPECT_FALSE(is_unary_operator("foo"));
}

TEST(gmAst, isUnaryPostfix) {
  using stan::lang::is_unary_postfix_operator;
  EXPECT_TRUE(is_unary_postfix_operator("transpose"));
  EXPECT_FALSE(is_unary_postfix_operator("bar"));
}

TEST(gmAst, funNameToOperator) {
  using stan::lang::fun_name_to_operator;
  EXPECT_EQ("+", fun_name_to_operator("add"));
  EXPECT_EQ("-", fun_name_to_operator("minus"));
  EXPECT_EQ("ERROR", fun_name_to_operator("foo"));
}
