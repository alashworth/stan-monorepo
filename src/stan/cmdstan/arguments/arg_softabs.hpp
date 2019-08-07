#ifndef CMDSTAN_ARGUMENTS_ARG_SOFTABS_HPP
#define CMDSTAN_ARGUMENTS_ARG_SOFTABS_HPP

#include "arg_softabs_alpha.hpp"
#include "categorical_argument.hpp"

namespace cmdstan {

class arg_softabs : public categorical_argument {
 public:
  arg_softabs() {
    _name = "softabs";
    _description = "Riemannian manifold with SoftAbs metric";

    _subarguments.push_back(new arg_softabs_alpha());
  }
};

}  // namespace cmdstan
#endif
