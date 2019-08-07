#ifndef CMDSTAN_ARGUMENTS_ARG_RANDOM_HPP
#define CMDSTAN_ARGUMENTS_ARG_RANDOM_HPP

#include "arg_seed.hpp"
#include "categorical_argument.hpp"

namespace cmdstan {

class arg_random : public categorical_argument {
 public:
  arg_random() {
    _name = "random";
    _description = "Random number configuration";

    _subarguments.push_back(new arg_seed());
  }
};

}  // namespace cmdstan
#endif
