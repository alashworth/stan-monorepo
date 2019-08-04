#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>
#include <limits>

TEST(AgradRev, fmax_vv) {
  AVAR a = 1.3;
  AVAR b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.0, f.val());

  AVEC x = createAVEC(a, b);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(0.0, grad_f[0]);
  EXPECT_DOUBLE_EQ(1.0, grad_f[1]);
}

TEST(AgradRev, fmax_vv_2) {
  AVAR a = 2.3;
  AVAR b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.3, f.val());

  AVEC x = createAVEC(a, b);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(1.0, grad_f[0]);
  EXPECT_DOUBLE_EQ(0.0, grad_f[1]);
}

TEST(AgradRev, fmax_vv_3) {
  AVAR a = 2.0;
  AVAR b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.0, f.val());

  AVEC x = createAVEC(a, b);
  VEC grad_f;
  f.grad(x, grad_f);
  // arbitrary, but documented this way
  EXPECT_DOUBLE_EQ(0.0, grad_f[0]);
  EXPECT_DOUBLE_EQ(1.0, grad_f[1]);
}

TEST(AgradRev, fmax_vd) {
  AVAR a = 1.3;
  double b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.0, f.val());

  AVEC x = createAVEC(a);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(0.0, grad_f[0]);
}

TEST(AgradRev, fmax_vd_2) {
  AVAR a = 2.3;
  double b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.3, f.val());

  AVEC x = createAVEC(a);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(1.0, grad_f[0]);
}

TEST(AgradRev, fmax_vd_3) {
  AVAR a = 2.0;
  double b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.0, f.val());

  AVEC x = createAVEC(a);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(1.0, grad_f[0]);
}

TEST(AgradRev, fmax_dv) {
  double a = 1.3;
  AVAR b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.0, f.val());

  AVEC x = createAVEC(b);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(1.0, grad_f[0]);
}

TEST(AgradRev, fmax_dv_2) {
  double a = 2.3;
  AVAR b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.3, f.val());

  AVEC x = createAVEC(b);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_DOUBLE_EQ(0.0, grad_f[0]);
}

TEST(AgradRev, fmax_dv_3) {
  double a = 2.0;
  AVAR b = 2.0;
  AVAR f = fmax(a, b);
  EXPECT_DOUBLE_EQ(2.0, f.val());

  AVEC x = createAVEC(b);
  VEC grad_f;
  f.grad(x, grad_f);
  // arbitrary, but doc this way
  EXPECT_DOUBLE_EQ(1.0, grad_f[0]);
}

namespace {
struct fmax_fun {
  template <typename T0, typename T1>
  inline typename stan::return_type<T0, T1>::type operator()(
      const T0& arg1, const T1& arg2) const {
    return fmax(arg1, arg2);
  }
};
}  // namespace

TEST(AgradRev, fmax_nan) {
  fmax_fun fmax_;
  double nan = std::numeric_limits<double>::quiet_NaN();
  test_nan_vv(fmax_, nan, nan, false, true);
  test_nan_dv(fmax_, nan, nan, false, true);
  test_nan_vd(fmax_, nan, nan, false, true);
}

TEST(AgradRev, check_varis_on_stack_20) {
  AVAR a = 1.3;
  AVAR b = 2.0;
  test::check_varis_on_stack(stan::math::fmax(a, b));
  test::check_varis_on_stack(stan::math::fmax(a, 2.0));
  test::check_varis_on_stack(stan::math::fmax(1.3, b));
}
