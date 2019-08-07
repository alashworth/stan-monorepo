#ifndef STAN_LANG_GENERATOR_GENERATE_PRINTABLE_HPP
#define STAN_LANG_GENERATOR_GENERATE_PRINTABLE_HPP

#include "printable_visgen.hpp"
#include "stan/language/ast.hpp"
#include <ostream>

namespace stan {
namespace lang {

/**
 * Generate the specified printable object to the specified
 * stream.
 *
 * @param p object to print
 * @param o stream for printing
 */
void generate_printable(const printable& p, std::ostream& o) {
  printable_visgen vis(o);
  boost::apply_visitor(vis, p.printable_);
}

}  // namespace lang
}  // namespace stan
#endif
