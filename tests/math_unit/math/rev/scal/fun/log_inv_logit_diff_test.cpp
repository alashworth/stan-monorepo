#include <stan/math/rev/scal.hpp>
#include <math/rev/scal/util.hpp>
#include <math/rev/mat/fun/util.hpp>
#include <gtest/gtest.h>

TEST(AgradRev, log_inv_logit_diff) {
  AVAR x = 1.2;
  AVAR y = 0.6;

  AVAR z = stan::math::log_inv_logit_diff(x, y);

  z.grad();

  EXPECT_DOUBLE_EQ(-2.09664078617, z.val());
  EXPECT_DOUBLE_EQ(1.44784443166, x.adj());
  EXPECT_DOUBLE_EQ(-1.86202552139, y.adj());
}
