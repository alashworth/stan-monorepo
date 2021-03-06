#ifndef CMDSTAN_ARGUMENTS_ARG_METRIC_HPP
#define CMDSTAN_ARGUMENTS_ARG_METRIC_HPP

#include "arg_dense_e.hpp"
#include "arg_diag_e.hpp"
#include "arg_unit_e.hpp"
#include "list_argument.hpp"

namespace cmdstan {

class arg_metric : public list_argument {
 public:
  arg_metric() {
    _name = "metric";
    _description = "Geometry of base manifold";

    _values.push_back(new arg_unit_e());
    _values.push_back(new arg_diag_e());
    _values.push_back(new arg_dense_e());

    _default_cursor = 1;
    _cursor = _default_cursor;
  }
};

}  // namespace cmdstan
#endif
