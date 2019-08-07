#ifndef CMDSTAN_ARGUMENTS_ARG_OPTIMIZE_ALGO_HPP
#define CMDSTAN_ARGUMENTS_ARG_OPTIMIZE_ALGO_HPP

#include "arg_bfgs.hpp"
#include "arg_lbfgs.hpp"
#include "arg_newton.hpp"
#include "list_argument.hpp"

namespace cmdstan {

class arg_optimize_algo : public list_argument {
 public:
  arg_optimize_algo() {
    _name = "algorithm";
    _description = "Optimization algorithm";

    _values.push_back(new arg_bfgs());
    _values.push_back(new arg_lbfgs());
    _values.push_back(new arg_newton());

    _default_cursor = 1;
    _cursor = _default_cursor;
  }
};

}  // namespace cmdstan
#endif
