#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>
#include <limits>

TEST(AgradRev, cos_var) {
  AVAR a = 0.49;
  AVAR f = cos(a);
  EXPECT_DOUBLE_EQ(.8823329, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_DOUBLE_EQ(-sin(0.49), g[0]);
}

TEST(AgradRev, cos_neg_var) {
  AVAR a = -0.49;
  AVAR f = cos(a);
  EXPECT_DOUBLE_EQ((.8823329), f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_DOUBLE_EQ(-sin(-0.49), g[0]);
}

TEST(AgradRev, cos_boundry) {
  double inf = std::numeric_limits<double>::infinity();
  AVAR a = inf;
  EXPECT_TRUE(std::isnan(cos(a)));

  AVAR b = -inf;
  EXPECT_TRUE(std::isnan(cos(b)));
}

namespace {
struct cos_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return cos(arg1);
  }
};
}  // namespace

TEST(AgradRev, cos_NaN) {
  cos_fun cos_;
  test_nan(cos_, false, true);
}

TEST(AgradRev, check_varis_on_stack_9) {
  AVAR a = 0.49;
  test::check_varis_on_stack(stan::math::cos(a));
}
