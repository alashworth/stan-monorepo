#include <gtest/gtest.h>
#include <boost/math/distributions.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <stan/math/prim/mat.hpp>
#include <math/prim/mat/prob/vector_rng_test_helper.hpp>
#include <limits>
#include <vector>

class ParetoTestRig : public VectorRealRNGTestRig {
 public:
  ParetoTestRig()
      : VectorRealRNGTestRig(10000, 10, {0.5, 1.0, 1.3, 2.0}, {1, 2, 3},
                             {-2.5, -1.7, -0.1, 0.0}, {-3, -2, -1, 0},
                             {0.1, 1.0, 1.7, 2.1}, {1, 2, 3, 4},
                             {-2.7, -1.5, -0.5, 0.0}, {-3, -2, -1, 0}) {}

  template <typename T1, typename T2, typename T3, typename T_rng>
  auto generate_samples(const T1& ymin, const T2& alpha, const T3&,
                        T_rng& rng) const {
    return stan::math::pareto_rng(ymin, alpha, rng);
  }

  std::vector<double> generate_quantiles(double ymin, double alpha,
                                         double) const {
    std::vector<double> quantiles;
    double K = stan::math::round(2 * std::pow(N_, 0.4));
    boost::math::pareto_distribution<> dist(ymin, alpha);

    for (int i = 1; i < K; ++i) {
      double frac = i / K;
      quantiles.push_back(quantile(dist, frac));
    }
    quantiles.push_back(std::numeric_limits<double>::max());

    return quantiles;
  }
};

TEST(ProbDistributionsPareto, errorCheck) {
  check_dist_throws_all_types(ParetoTestRig());
}

TEST(ProbDistributionsPareto, distributionTest) {
  check_quantiles_real_real(ParetoTestRig());
}
