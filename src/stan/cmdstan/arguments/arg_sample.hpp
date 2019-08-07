#ifndef CMDSTAN_ARGUMENTS_ARG_SAMPLE_HPP
#define CMDSTAN_ARGUMENTS_ARG_SAMPLE_HPP

#include "arg_adapt.hpp"
#include "arg_num_samples.hpp"
#include "arg_num_warmup.hpp"
#include "arg_sample_algo.hpp"
#include "arg_save_warmup.hpp"
#include "arg_thin.hpp"
#include "categorical_argument.hpp"

namespace cmdstan {

class arg_sample : public categorical_argument {
 public:
  arg_sample() {
    _name = "sample";
    _description = "Bayesian inference with Markov Chain Monte Carlo";

    _subarguments.push_back(new arg_num_samples());
    _subarguments.push_back(new arg_num_warmup());
    _subarguments.push_back(new arg_save_warmup());
    _subarguments.push_back(new arg_thin());
    _subarguments.push_back(new arg_adapt());
    _subarguments.push_back(new arg_sample_algo());
  }
};

}  // namespace cmdstan
#endif
