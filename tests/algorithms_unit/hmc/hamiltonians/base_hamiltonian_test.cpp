#include "hmc/hamiltonians/funnel.hpp"
#include "hmc/mock_hmc.hpp"
#include <stan/algorithms/hmc/hamiltonians/base_hamiltonian.hpp>
#include <stan/algorithms/hmc/hamiltonians/ps_point.hpp>
#include <stan/services/callbacks/stream_logger.hpp>
#include <stan/services/callbacks/stream_writer.hpp>
#include <boost/random/additive_combine.hpp>
#include <gtest/gtest.h>

typedef boost::ecuyer1988 rng_t;

TEST(BaseHamiltonian, update_potential_gradient) {
  std::fstream data_stream(std::string("").c_str(), std::fstream::in);
  stan::io::dump data_var_context(data_stream);
  data_stream.close();

  std::stringstream model_output;
  funnel_model_namespace::funnel_model model(data_var_context, &model_output);

  stan::mcmc::mock_hamiltonian<funnel_model_namespace::funnel_model, rng_t>
      metric(model);
  stan::mcmc::ps_point z(11);
  z.q.setOnes();

  std::stringstream debug, info, warn, error, fatal;
  stan::callbacks::stream_logger logger(debug, info, warn, error, fatal);

  metric.update_potential_gradient(z, logger);

  EXPECT_FLOAT_EQ(10.73223197, z.V);

  EXPECT_FLOAT_EQ(8.757758279, z.g(0));
  for (int i = 1; i < z.q.size(); ++i)
    EXPECT_FLOAT_EQ(0.1353352832, z.g(i));

  EXPECT_EQ("", model_output.str());
  EXPECT_EQ("", debug.str());
  EXPECT_EQ("", info.str());
  EXPECT_EQ("", warn.str());
  EXPECT_EQ("", error.str());
  EXPECT_EQ("", fatal.str());
}

namespace {
  struct capture_std_stream {
   public:
    capture_std_stream() {
      oldout = std::cout.rdbuf(buffer1.rdbuf());
      olderr = std::cerr.rdbuf(buffer2.rdbuf());
    }
    ~capture_std_stream() {
      std::cout.rdbuf(oldout);
      std::cerr.rdbuf(olderr);
    }

   private:
    std::stringstream buffer1;
    std::stringstream buffer2;
    std::streambuf *oldout;
    std::streambuf *olderr;
  };
};

TEST(BaseHamiltonian, streams) {
  std::fstream data_stream(std::string("").c_str(), std::fstream::in);
  stan::io::dump data_var_context(data_stream);
  data_stream.close();

  EXPECT_NO_THROW(funnel_model_namespace::funnel_model model(
      data_var_context, 0, static_cast<std::stringstream *>(0)));
  std::stringstream output;
  EXPECT_NO_THROW(
      funnel_model_namespace::funnel_model model(data_var_context, &output));
  EXPECT_EQ("", output.str());
}
