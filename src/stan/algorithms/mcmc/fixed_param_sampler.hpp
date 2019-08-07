#ifndef STAN_MCMC_FIXED_PARAM_SAMPLER_HPP
#define STAN_MCMC_FIXED_PARAM_SAMPLER_HPP

#include "base_mcmc.hpp"
#include "sample.hpp"

#include <stan/services/callbacks/logger.hpp>

namespace stan {
namespace mcmc {

class fixed_param_sampler : public base_mcmc {
 public:
  fixed_param_sampler() {}

  sample transition(sample& init_sample, callbacks::logger& logger) {
    return init_sample;
  }
};

}  // namespace mcmc
}  // namespace stan
#endif
