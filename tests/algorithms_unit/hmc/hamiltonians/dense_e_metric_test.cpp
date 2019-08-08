#include "hmc/hamiltonians/funnel.hpp"
#include "hmc/mock_hmc.hpp"
#include <stan/algorithms/hmc/hamiltonians/dense_e_metric.hpp>
#include <stan/services/callbacks/stream_logger.hpp>
#include <stan/util/io/dump.hpp>
#include <boost/random/additive_combine.hpp>
#include <gtest/gtest.h>
#include <string>

typedef boost::ecuyer1988 rng_t;

TEST(McmcDenseEMetric, sample_p) {
  rng_t base_rng(0);

  Eigen::Matrix2d  m(2,2);
  m(0, 0) = 3.0;
  m(1, 0) = -2.0;
  m(0, 1) = -2.0;
  m(1, 1) = 4.0;

  Eigen::Matrix2d  m_inv = m.inverse();

  stan::mcmc::mock_model model(2);

  stan::mcmc::dense_e_metric<stan::mcmc::mock_model, rng_t> metric(model);
  stan::mcmc::dense_e_point z(2);
  z.set_metric(m_inv);

  int n_samples = 1000;

  Eigen::Matrix2d sample_cov(2,2);
  sample_cov(0, 0) = 0.0;
  sample_cov(0, 1) = 0.0;
  sample_cov(1, 0) = 0.0;
  sample_cov(1, 1) = 0.0;

  for (int i = 0; i < n_samples; ++i) {
    metric.sample_p(z, base_rng);
    sample_cov(0, 0) += z.p[0] * z.p[0] / n_samples;
    sample_cov(0, 1) += z.p[0] * z.p[1] / n_samples;
    sample_cov(1, 0) += z.p[1] * z.p[0] / n_samples;
    sample_cov(1, 1) += z.p[1] * z.p[1] / n_samples;
  }

  Eigen::Matrix2d var(2,2);
  var(0, 0) = 2 * m(0, 0);
  var(1, 0) = m(1, 0) * m(1, 0) + m(1, 1) * m(0, 0);
  var(0, 1) = m(0, 1) * m(0, 1) + m(1, 1) * m(0, 0);
  var(1, 1) = 2 * m(1, 1);

  // Covariance matrix within 5sigma of expected value (comes from a Wishart distribution)
  EXPECT_TRUE(std::fabs(m(0, 0)   - sample_cov(0, 0)) < 5.0 * sqrt(var(0, 0) / n_samples));
  EXPECT_TRUE(std::fabs(m(1, 0)   - sample_cov(1, 0)) < 5.0 * sqrt(var(1, 0) / n_samples));
  EXPECT_TRUE(std::fabs(m(0, 1)   - sample_cov(0, 1)) < 5.0 * sqrt(var(0, 1) / n_samples));
  EXPECT_TRUE(std::fabs(m(1, 1)   - sample_cov(1, 1)) < 5.0 * sqrt(var(1, 1) / n_samples));
}


TEST(McmcDenseEMetric, gradients) {
  rng_t base_rng(0);

  Eigen::VectorXd q = Eigen::VectorXd::Ones(11);

  stan::mcmc::dense_e_point z(q.size());
  z.q = q;
  z.p.setOnes();

  std::fstream data_stream(std::string("").c_str(), std::fstream::in);
  stan::io::dump data_var_context(data_stream);
  data_stream.close();


  std::stringstream model_output;
  std::stringstream debug, info, warn, error, fatal;
  stan::callbacks::stream_logger logger(debug, info, warn, error, fatal);

  funnel_model_namespace::funnel_model model(data_var_context, &model_output);

  stan::mcmc::dense_e_metric<funnel_model_namespace::funnel_model, rng_t> metric(model);

  double epsilon = 1e-6;

  metric.init(z, logger);
  Eigen::VectorXd g1 = metric.dtau_dq(z, logger);

  for (int i = 0; i < z.q.size(); ++i) {

    double delta = 0;

    z.q(i) += epsilon;
    metric.update_potential(z, logger);
    delta += metric.tau(z);

    z.q(i) -= 2 * epsilon;
    metric.update_potential(z, logger);
    delta -= metric.tau(z);

    z.q(i) += epsilon;
    metric.update_potential(z, logger);

    delta /= 2 * epsilon;

    EXPECT_NEAR(delta, g1(i), epsilon);
  }

  Eigen::VectorXd g2 = metric.dtau_dp(z);

  for (int i = 0; i < z.q.size(); ++i) {

    double delta = 0;

    z.p(i) += epsilon;
    delta += metric.tau(z);

    z.p(i) -= 2 * epsilon;
    delta -= metric.tau(z);

    z.p(i) += epsilon;

    delta /= 2 * epsilon;

    EXPECT_NEAR(delta, g2(i), epsilon);
  }

  Eigen::VectorXd g3 = metric.dphi_dq(z, logger);

  for (int i = 0; i < z.q.size(); ++i) {

    double delta = 0;

    z.q(i) += epsilon;
    metric.update_potential(z, logger);
    delta += metric.phi(z);

    z.q(i) -= 2 * epsilon;
    metric.update_potential(z, logger);
    delta -= metric.phi(z);

    z.q(i) += epsilon;
    metric.update_potential(z, logger);

    delta /= 2 * epsilon;

    EXPECT_NEAR(delta, g3(i), epsilon);

  }

  EXPECT_EQ("", model_output.str());
  EXPECT_EQ("", debug.str());
  EXPECT_EQ("", info.str());
  EXPECT_EQ("", warn.str());
  EXPECT_EQ("", error.str());
  EXPECT_EQ("", fatal.str());
}

TEST(McmcDenseEMetric, streams) {
  rng_t base_rng(0);

  Eigen::VectorXd q(2);
  q(0) = 5;
  q(1) = 1;

  stan::mcmc::mock_model model(q.size());

  // typedef to use within Google Test macros
  typedef stan::mcmc::dense_e_metric<stan::mcmc::mock_model, rng_t> dense_e;

  EXPECT_NO_THROW(dense_e metric(model));
}
