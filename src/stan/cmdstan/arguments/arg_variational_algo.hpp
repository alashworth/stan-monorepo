#ifndef CMDSTAN_ARGUMENTS_VARIATIONAL_ALGO_HPP
#define CMDSTAN_ARGUMENTS_VARIATIONAL_ALGO_HPP

#include "arg_variational_fullrank.hpp"
#include "arg_variational_meanfield.hpp"
#include "list_argument.hpp"

namespace cmdstan {

class arg_variational_algo : public list_argument {
 public:
  arg_variational_algo() {
    _name = "algorithm";
    _description = "Variational inference algorithm";

    _values.push_back(new arg_variational_meanfield());
    _values.push_back(new arg_variational_fullrank());

    _default_cursor = 0;
    _cursor = _default_cursor;
  }
};
}  // namespace cmdstan
#endif
