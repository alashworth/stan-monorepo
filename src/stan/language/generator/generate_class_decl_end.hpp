#ifndef STAN_LANG_GENERATOR_GENERATE_CLASS_DECL_END_HPP
#define STAN_LANG_GENERATOR_GENERATE_CLASS_DECL_END_HPP

#include "constants.hpp"
#include "stan/language/ast.hpp"
#include <ostream>

namespace stan {
namespace lang {

void generate_class_decl_end(std::ostream& o) { o << "}; // model" << EOL2; }

}  // namespace lang
}  // namespace stan
#endif
