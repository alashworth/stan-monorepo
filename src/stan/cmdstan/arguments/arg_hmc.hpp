#ifndef CMDSTAN_ARGUMENTS_ARG_HMC_HPP
#define CMDSTAN_ARGUMENTS_ARG_HMC_HPP

#include "arg_engine.hpp"
#include "arg_metric.hpp"
#include "arg_metric_file.hpp"
#include "arg_stepsize.hpp"
#include "arg_stepsize_jitter.hpp"
#include "categorical_argument.hpp"

namespace cmdstan {

class arg_hmc : public categorical_argument {
 public:
  arg_hmc() {
    _name = "hmc";
    _description = "Hamiltonian Monte Carlo";

    _subarguments.push_back(new arg_engine());
    _subarguments.push_back(new arg_metric());
    _subarguments.push_back(new arg_metric_file());
    _subarguments.push_back(new arg_stepsize());
    _subarguments.push_back(new arg_stepsize_jitter());
  }
};

}  // namespace cmdstan
#endif
