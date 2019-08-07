#ifndef STAN_MCMC_HMC_STATIC_UNIFORM_SOFTABS_STATIC_UNIFORM_HPP
#define STAN_MCMC_HMC_STATIC_UNIFORM_SOFTABS_STATIC_UNIFORM_HPP

#include "stan/algorithms/hmc/static_uniform/base_static_uniform.hpp"
#include "stan/algorithms/hmc/hamiltonians/softabs_point.hpp"
#include "stan/algorithms/hmc/hamiltonians/softabs_metric.hpp"
#include "stan/algorithms/hmc/integrators/impl_leapfrog.hpp"

namespace stan {
  namespace mcmc {
    /**
     * Hamiltonian Monte Carlo implementation that uniformly samples
     * from trajectories with a static integration time with a
     * Gaussian-Riemannian disintegration and SoftAbs metric
     */
    template <typename Model, class BaseRNG>
    class softabs_static_uniform
      : public base_static_uniform<Model, softabs_metric,
                                   impl_leapfrog, BaseRNG> {
    public:
      softabs_static_uniform(const Model& model, BaseRNG& rng):
        base_static_uniform<Model, softabs_metric,
                            impl_leapfrog, BaseRNG>(model, rng) {
      }
    };
  }  // mcmc
}  // stan

#endif
