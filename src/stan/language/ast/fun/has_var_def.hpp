#ifndef STAN_LANG_AST_FUN_HAS_VAR_DEF_HPP
#define STAN_LANG_AST_FUN_HAS_VAR_DEF_HPP

#include "stan/language/ast.hpp"
#include <boost/variant/apply_visitor.hpp>

namespace stan {
namespace lang {

bool has_var(const expression& e, const variable_map& var_map) {
  has_var_vis vis(var_map);
  return boost::apply_visitor(vis, e.expr_);
}

}  // namespace lang
}  // namespace stan
#endif
