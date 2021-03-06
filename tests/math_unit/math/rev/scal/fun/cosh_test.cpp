#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/util.hpp>
#include <math/rev/scal/fun/nan_util.hpp>
#include <cmath>
#include <limits>

TEST(AgradRev, cosh_var) {
  AVAR a = 0.68;
  AVAR f = cosh(a);
  EXPECT_FLOAT_EQ(1.2402474, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_FLOAT_EQ(sinh(0.68), g[0]);
}

TEST(AgradRev, cosh_neg_var) {
  AVAR a = -.68;
  AVAR f = cosh(a);
  EXPECT_FLOAT_EQ(1.2402474, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_FLOAT_EQ(sinh(-.68), g[0]);
}

TEST(AgradRev, cosh_inf) {
  double inf = std::numeric_limits<double>::infinity();
  AVAR a = inf;
  AVAR f = cosh(a);
  EXPECT_FLOAT_EQ(inf, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_EQ(stan::math::is_inf(g[0]), (g[0] > 0));
}

TEST(AgradRev, cosh_neg_inf) {
  double inf = std::numeric_limits<double>::infinity();
  AVAR a = -inf;
  AVAR f = cosh(a);
  EXPECT_FLOAT_EQ(inf, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_EQ(stan::math::is_inf(g[0]), (g[0] < 0));
}

namespace {
struct cosh_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return cosh(arg1);
  }
};
}  // namespace

TEST(AgradRev, cosh_NaN) {
  cosh_fun cosh_;
  test_nan(cosh_, false, true);
}

TEST(AgradRev, check_varis_on_stack_8) {
  AVAR a = 0.68;
  test::check_varis_on_stack(stan::math::cosh(a));
}
