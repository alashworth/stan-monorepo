#ifndef STAN_MODEL_GRADIENT_HPP
#define STAN_MODEL_GRADIENT_HPP

#include <stan/math/rev/mat.hpp>
#include "model_functional.hpp"
#include <stan/services/callbacks/logger.hpp>
#include <stan/services/callbacks/writer.hpp>
#include <sstream>
#include <stdexcept>

namespace stan {
namespace model {

template <class M>
void gradient(const M& model, const Eigen::Matrix<double, Eigen::Dynamic, 1>& x,
              double& f, Eigen::Matrix<double, Eigen::Dynamic, 1>& grad_f,
              std::ostream* msgs = 0) {
  stan::math::gradient(model_functional<M>(model, msgs), x, f, grad_f);
}

template <class M>
void gradient(const M& model, const Eigen::Matrix<double, Eigen::Dynamic, 1>& x,
              double& f, Eigen::Matrix<double, Eigen::Dynamic, 1>& grad_f,
              callbacks::logger& logger) {
  std::stringstream ss;
  try {
    stan::math::gradient(model_functional<M>(model, &ss), x, f, grad_f);
  } catch (std::exception& e) {
    if (ss.str().length() > 0)
      logger.info(ss);
    throw;
  }
  if (ss.str().length() > 0)
    logger.info(ss);
}

}  // namespace model
}  // namespace stan
#endif
