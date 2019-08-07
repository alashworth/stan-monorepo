#ifndef CMDSTAN_ARGUMENTS_ARG_NUTS_HPP
#define CMDSTAN_ARGUMENTS_ARG_NUTS_HPP

#include "arg_max_depth.hpp"
#include "categorical_argument.hpp"

namespace cmdstan {

class arg_nuts : public categorical_argument {
 public:
  arg_nuts() {
    _name = "nuts";
    _description = "The No-U-Turn Sampler";

    _subarguments.push_back(new arg_max_depth());
  }
};

}  // namespace cmdstan
#endif
