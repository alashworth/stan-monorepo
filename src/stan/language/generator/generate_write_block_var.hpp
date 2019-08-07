#ifndef STAN_LANG_GENERATOR_GENERATE_WRITE_BLOCK_VAR_HPP
#define STAN_LANG_GENERATOR_GENERATE_WRITE_BLOCK_VAR_HPP

#include "constants.hpp"
#include "generate_indent.hpp"
#include "write_begin_all_dims_col_maj_loop.hpp"
#include "write_end_loop.hpp"
#include "write_var_idx_all_dims.hpp"
#include "stan/language/ast.hpp"
#include <ostream>

namespace stan {
namespace lang {

/**
 * Generate validation statements for bounded or specialized block variables.
 *
 * @param[in] var_decl block variable
 * @param[in] indent indentation level
 * @param[in,out] o stream for generating
 */
void generate_write_block_var(const block_var_decl& var_decl, int indent,
                              std::ostream& o) {
  write_begin_all_dims_col_maj_loop(var_decl, true, indent, o);
  generate_indent(indent + var_decl.type().num_dims(), o);
  o << "vars__.push_back(" << var_decl.name();
  write_var_idx_all_dims(
      var_decl.type().array_dims(),
      var_decl.type().num_dims() - var_decl.type().array_dims(), o);
  o << ");" << EOL;
  write_end_loop(var_decl.type().num_dims(), indent, o);
}

}  // namespace lang
}  // namespace stan
#endif
