#ifndef STAN_LANG_GENERATOR_GENERATE_STATEMENT_HPP
#define STAN_LANG_GENERATOR_GENERATE_STATEMENT_HPP

#include "constants.hpp"
#include "generate_indent.hpp"
#include "is_numbered_statement_vis.hpp"
#include "statement_visgen.hpp"
#include "stan/language/ast.hpp"
#include <boost/variant/apply_visitor.hpp>
#include <ostream>

namespace stan {
namespace lang {

/**
 * Generate the specified statement with the specified indentation
 * level on the specified output stream.
 * Generated statement is preceeded by stmt updating global variable
 * `current_statement_begin__` to src file line number where stmt begins.
 *
 * @param[in] s statement to generate
 * @param[in] indent indentation level
 * @param[in,out] o stream for generating
 */
void generate_statement(const statement& s, int indent, std::ostream& o) {
  is_numbered_statement_vis vis_is_numbered;
  if (boost::apply_visitor(vis_is_numbered, s.statement_)) {
    generate_indent(indent, o);
    o << "current_statement_begin__ = " << s.begin_line_ << ";" << EOL;
  }
  statement_visgen vis(indent, o);
  boost::apply_visitor(vis, s.statement_);
}

}  // namespace lang
}  // namespace stan
#endif
