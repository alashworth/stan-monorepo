#include "vector_rng_test_helper.hpp"

void assign_parameter_values(std::vector<double>& params,
                             const std::vector<double>& values) {
  if (values.size() == 0)
    return;

  for (size_t i = 0; i < params.size(); i++) {
    params[i] = values[i % values.size()];
  }
}

void assign_parameter_values(std::vector<int>& params,
                             const std::vector<int>& values) {
  if (values.size() == 0)
    return;

  for (size_t i = 0; i < params.size(); i++) {
    params[i] = values[i % values.size()];
  }
}

void assign_parameter_values(double& param, const std::vector<double>& values) {
  if (values.size() == 0)
    return;

  param = values[0];
}

void assign_parameter_values(int& param, const std::vector<int>& values) {
  if (values.size() == 0)
    return;

  param = values[0];
}
