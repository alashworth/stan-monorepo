#ifndef STAN_LANG_GENERATOR_GENERATE_QUOTED_EXPRESSION_HPP
#define STAN_LANG_GENERATOR_GENERATE_QUOTED_EXPRESSION_HPP

#include "constants.hpp"
#include "generate_expression.hpp"
#include "generate_quoted_string.hpp"
#include "stan/language/ast.hpp"
#include <sstream>

namespace stan {
namespace lang {

/**
 *
 */
void generate_quoted_expression(const expression& e, std::ostream& o) {
  std::stringstream ss;
  generate_expression(e, NOT_USER_FACING, ss);
  generate_quoted_string(ss.str(), o);
}

}  // namespace lang
}  // namespace stan
#endif
