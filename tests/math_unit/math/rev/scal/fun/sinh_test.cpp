#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>
#include <limits>

TEST(AgradRev, sinh_var) {
  AVAR a = 0.68;
  AVAR f = sinh(a);
  EXPECT_FLOAT_EQ(0.73363036, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_FLOAT_EQ(cosh(0.68), g[0]);
}

TEST(AgradRev, sinh_neg_var) {
  AVAR a = -.68;
  AVAR f = sinh(a);
  EXPECT_FLOAT_EQ(-0.73363036, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_FLOAT_EQ(cosh(-.68), g[0]);
}

TEST(AgradRev, sinh_inf) {
  double inf = std::numeric_limits<double>::infinity();
  AVAR a = inf;
  AVAR f = sinh(a);
  EXPECT_FLOAT_EQ(inf, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_FLOAT_EQ(inf, g[0]);
}

TEST(AgradRev, sinh_neg_inf) {
  double inf = std::numeric_limits<double>::infinity();
  AVAR a = -inf;
  AVAR f = sinh(a);
  EXPECT_FLOAT_EQ(-inf, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_FLOAT_EQ(inf, g[0]);
}

namespace {
struct sinh_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return sinh(arg1);
  }
};
}  // namespace

TEST(AgradRev, sinh_NaN) {
  sinh_fun sinh_;
  test_nan(sinh_, false, true);
}

TEST(AgradRev, check_varis_on_stack_60) {
  AVAR a = 0.68;
  test::check_varis_on_stack(stan::math::sinh(a));
}
