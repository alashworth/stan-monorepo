#ifndef STAN_LANG_GENERATOR_GENERATE_INCLUDES_HPP
#define STAN_LANG_GENERATOR_GENERATE_INCLUDES_HPP

#include "constants.hpp"
#include "generate_include.hpp"
#include "stan/language/ast.hpp"
#include <ostream>

namespace stan {
namespace lang {

/**
 * Generate include statements for a Stan model class to the
 * specified stream.
 *
 * @param o stream for generating
 */
void generate_includes(std::ostream& o) {
  generate_include("stan/language/model/model_header.hpp", o);
  o << EOL;
}

}  // namespace lang
}  // namespace stan
#endif
