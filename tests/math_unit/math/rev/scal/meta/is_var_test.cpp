#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>

TEST(MetaTraits, is_var_1) {
  using stan::is_var;
  EXPECT_TRUE(is_var<stan::math::var>::value);
}
