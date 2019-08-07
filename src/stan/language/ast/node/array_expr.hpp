#ifndef STAN_LANG_AST_NODE_ARRAY_EXPR_HPP
#define STAN_LANG_AST_NODE_ARRAY_EXPR_HPP

#include "expression.hpp"
#include "stan/language/ast/scope.hpp"
#include "stan/language/ast/type/bare_expr_type.hpp"
#include <cstddef>
#include <vector>

namespace stan {
namespace lang {

struct expresssion;

/**
 * Structure to hold an array expression.
 */
struct array_expr {
  /**
   * Sequence of expressions for array values.
   */
  std::vector<expression> args_;

  /**
   * Type of array.
   */
  bare_expr_type type_;

  /**
   * True if there is a variable within any of the expressions
   * that is a parameter, transformed parameter, or non-integer
   * local variable.
   */
  bool has_var_;

  /**
   * Scope of this array expression.
   *
   */
  scope array_expr_scope_;

  /**
   * Construct a default array expression.
   */
  array_expr();
};

}  // namespace lang
}  // namespace stan
#endif
