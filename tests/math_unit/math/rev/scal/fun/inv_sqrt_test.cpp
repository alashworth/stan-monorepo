#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>

TEST(AgradRev, inv_sqrt) {
  AVAR a = 49.0;
  AVEC x = createAVEC(a);
  AVAR f = inv_sqrt(a);
  EXPECT_FLOAT_EQ(1 / 7.0, f.val());

  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_EQ(1U, grad_f.size());
  EXPECT_FLOAT_EQ(-0.5 / (7 * 49), grad_f[0]);

  a = 0.0;
  x = createAVEC(a);
  f = inv_sqrt(a);
  EXPECT_FLOAT_EQ(stan::math::positive_infinity(), f.val());

  f.grad(x, grad_f);
  EXPECT_FLOAT_EQ(stan::math::negative_infinity(), grad_f[0]);

  a = -50.0;
  x = createAVEC(a);
  f = inv_sqrt(a);
  std::isnan(f.val());

  f.grad(x, grad_f);
  std::isnan(grad_f[0]);
}

namespace {
struct inv_sqrt_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return inv_sqrt(arg1);
  }
};
}  // namespace

TEST(AgradRev, inv_sqrt_NaN) {
  inv_sqrt_fun inv_sqrt_;
  test_nan(inv_sqrt_, false, true);
}

TEST(AgradRev, check_varis_on_stack_31) {
  AVAR a = 49.0;
  test::check_varis_on_stack(stan::math::inv_sqrt(a));
}
