#ifndef CMDSTAN_ARGUMENTS_ARG_METHOD_HPP
#define CMDSTAN_ARGUMENTS_ARG_METHOD_HPP

#include "arg_diagnose.hpp"
#include "arg_generate_quantities.hpp"
#include "arg_optimize.hpp"
#include "arg_sample.hpp"
#include "arg_variational.hpp"
#include "list_argument.hpp"

namespace cmdstan {

class arg_method : public list_argument {
 public:
  arg_method() {
    _name = "method";
    _description = "Analysis method (Note that method= is optional)";

    _values.push_back(new arg_sample());
    _values.push_back(new arg_optimize());
    _values.push_back(new arg_variational());
    _values.push_back(new arg_diagnose());
    _values.push_back(new arg_generate_quantities());

    _default_cursor = 0;
    _cursor = _default_cursor;
  }
};

}  // namespace cmdstan
#endif
