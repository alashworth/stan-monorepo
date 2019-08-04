#include <stan/math/prim/scal.hpp>
#include <boost/math/special_functions/fpclassify.hpp>
#include <gtest/gtest.h>
#include <limits>

TEST(MathFunctions, logit) {
  using stan::math::logit;
  EXPECT_DOUBLE_EQ(0.0, logit(0.5));
  EXPECT_DOUBLE_EQ(5.0, logit(1.0 / (1.0 + exp(-5.0))));
}

TEST(MathFunctions, logit_nan) {
  double nan = std::numeric_limits<double>::quiet_NaN();

  EXPECT_PRED1(boost::math::isnan<double>, stan::math::logit(nan));
}
