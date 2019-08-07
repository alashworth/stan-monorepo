#ifndef CMDSTAN_ARGUMENTS_ARG_XHMC_HPP
#define CMDSTAN_ARGUMENTS_ARG_XHMC_HPP

#include "arg_max_depth.hpp"
#include "arg_x_delta.hpp"
#include "categorical_argument.hpp"

namespace cmdstan {

class arg_xhmc : public categorical_argument {
 public:
  arg_xhmc() {
    _name = "xhmc";
    _description = "Exhaustive Hamiltonian Monte Carlo";

    _subarguments.push_back(new arg_max_depth());
    _subarguments.push_back(new arg_x_delta());
  }
};

}  // namespace cmdstan
#endif
