#include <stan/math/prim/scal.hpp>
#include <boost/math/special_functions/fpclassify.hpp>
#include <gtest/gtest.h>
#include <limits>

TEST(MathFunctions, binary_log_loss) {
  EXPECT_DOUBLE_EQ(0.0, stan::math::binary_log_loss(0, 0.0));
  EXPECT_DOUBLE_EQ(0.0, stan::math::binary_log_loss(1, 1.0));
  EXPECT_DOUBLE_EQ(-log(0.5), stan::math::binary_log_loss(0, 0.5));
  EXPECT_DOUBLE_EQ(-log(0.5), stan::math::binary_log_loss(1, 0.5));
  EXPECT_DOUBLE_EQ(-log(0.75), stan::math::binary_log_loss(0, 0.25));
  EXPECT_DOUBLE_EQ(-log(0.75), stan::math::binary_log_loss(1, 0.75));
}

TEST(MathFunctions, binary_log_loss_nan) {
  double nan = std::numeric_limits<double>::quiet_NaN();

  EXPECT_PRED1(boost::math::isnan<double>, stan::math::binary_log_loss(0, nan));

  EXPECT_PRED1(boost::math::isnan<double>, stan::math::binary_log_loss(1, nan));
}
