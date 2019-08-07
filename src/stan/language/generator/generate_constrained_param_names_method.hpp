#ifndef STAN_LANG_GENERATOR_GENERATE_CONSTRAINED_PARAM_NAMES_METHOD_HPP
#define STAN_LANG_GENERATOR_GENERATE_CONSTRAINED_PARAM_NAMES_METHOD_HPP

#include "constants.hpp"
#include "generate_param_names_array.hpp"
#include "stan/language/ast.hpp"
#include <ostream>
#include <vector>

namespace stan {
namespace lang {

/**
 * Generate the <code>constrained_param_names</code> method for
 * the specified program on the specified stream.
 *
 * @param[in] prog program from which to generate
 * @param[in,out] o stream for generating
 */
void generate_constrained_param_names_method(const program& prog,
                                             std::ostream& o) {
  o << EOL << INDENT << "void constrained_param_names("
    << "std::vector<std::string>& param_names__," << EOL << INDENT
    << "                             bool include_tparams__ = true," << EOL
    << INDENT
    << "                             bool include_gqs__ = true) const {" << EOL
    << INDENT2 << "std::stringstream param_name_stream__;" << EOL;
  for (size_t i = 0; i < prog.parameter_decl_.size(); ++i)
    generate_param_names_array(2, o, prog.parameter_decl_[i]);
  o << EOL << INDENT2 << "if (!include_gqs__ && !include_tparams__) return;"
    << EOL;

  o << EOL << INDENT2 << "if (include_tparams__) {" << EOL;
  for (size_t i = 0; i < prog.derived_decl_.first.size(); ++i)
    generate_param_names_array(3, o, prog.derived_decl_.first[i]);
  o << INDENT2 << "}" << EOL;

  o << EOL << INDENT2 << "if (!include_gqs__) return;" << EOL;
  for (size_t i = 0; i < prog.generated_decl_.first.size(); ++i)
    generate_param_names_array(2, o, prog.generated_decl_.first[i]);
  o << INDENT << "}" << EOL2;
}

}  // namespace lang
}  // namespace stan
#endif
