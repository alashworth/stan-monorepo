#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>
#include <limits>

TEST(AgradRev, sin_var) {
  AVAR a = 0.49;
  AVAR f = sin(a);
  EXPECT_DOUBLE_EQ((.470625888), f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_DOUBLE_EQ(cos(0.49), g[0]);
}

TEST(AgradRev, sin_neg_var) {
  AVAR a = -0.49;
  AVAR f = sin(a);
  EXPECT_DOUBLE_EQ((-.470625888), f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_DOUBLE_EQ(cos(-0.49), g[0]);
}

TEST(AgradRev, sin_boundry) {
  double inf = std::numeric_limits<double>::infinity();
  AVAR a = inf;
  EXPECT_TRUE(std::isnan(sin(a)));

  AVAR b = -inf;
  EXPECT_TRUE(std::isnan(sin(b)));
}

namespace {
struct sin_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return sin(arg1);
  }
};
}  // namespace

TEST(AgradRev, sin_NaN) {
  sin_fun sin_;
  test_nan(sin_, false, true);
}

TEST(AgradRev, check_varis_on_stack_61) {
  AVAR a = 0.49;
  test::check_varis_on_stack(stan::math::sin(a));
}
