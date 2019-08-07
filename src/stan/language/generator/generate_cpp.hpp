#ifndef STAN_LANG_GENERATOR_GENERATE_CPP_HPP
#define STAN_LANG_GENERATOR_GENERATE_CPP_HPP

#include "generate_class_decl.hpp"
#include "generate_class_decl_end.hpp"
#include "generate_constrained_param_names_method.hpp"
#include "generate_constructor.hpp"
#include "generate_destructor.hpp"
#include "generate_dims_method.hpp"
#include "generate_functions.hpp"
#include "generate_globals.hpp"
#include "generate_includes.hpp"
#include "generate_log_prob.hpp"
#include "generate_member_var_decls_all.hpp"
#include "generate_model_name_method.hpp"
#include "generate_model_typedef.hpp"
#include "generate_namespace_end.hpp"
#include "generate_namespace_start.hpp"
#include "generate_param_names_method.hpp"
#include "generate_private_decl.hpp"
#include "generate_program_reader_fun.hpp"
#include "generate_public_decl.hpp"
#include "generate_register_mpi.hpp"
#include "generate_transform_inits_method.hpp"
#include "generate_typedefs.hpp"
#include "generate_unconstrained_param_names_method.hpp"
#include "generate_usings.hpp"
#include "generate_version_comment.hpp"
#include "generate_write_array_method.hpp"
#include "stan/language/ast.hpp"
#include <stan/util/io/program_reader.hpp>
#include <ostream>
#include <string>
#include <vector>

namespace stan {
namespace lang {

/**
 * Generae the C++ code for the specified program, generating it
 * in a class and namespace derived from the specified model name,
 * writing to the specified stream.
 *
 * @param[in] prog program from which to generate
 * @param[in] model_name name of model for generating namespace
 *   and class name
 * @param[in] history I/O include history for text underlying
 *   program
 * @param[in,out] o stream for generating
 */
void generate_cpp(const program& prog, const std::string& model_name,
                  const std::vector<io::preproc_event>& history,
                  std::ostream& o) {
  generate_version_comment(o);
  generate_includes(o);
  generate_namespace_start(model_name, o);
  generate_usings(o);
  generate_globals(o);
  generate_program_reader_fun(history, o);
  generate_functions(prog.function_decl_defs_, o);
  generate_class_decl(model_name, o);
  generate_private_decl(o);
  generate_member_var_decls_all(prog, o);
  generate_public_decl(o);
  generate_constructor(prog, model_name, o);
  generate_destructor(model_name, o);
  generate_transform_inits_method(prog.parameter_decl_, o);
  generate_log_prob(prog, o);
  generate_param_names_method(prog, o);
  generate_dims_method(prog, o);
  generate_write_array_method(prog, model_name, o);
  generate_model_name_method(model_name, o);
  generate_constrained_param_names_method(prog, o);
  generate_unconstrained_param_names_method(prog, o);
  generate_class_decl_end(o);
  generate_namespace_end(o);
  generate_model_typedef(model_name, o);
  generate_register_mpi(model_name, o);
}

}  // namespace lang
}  // namespace stan
#endif
