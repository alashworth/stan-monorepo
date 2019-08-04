#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>

TEST(AgradRev, hypot_vv) {
  AVAR a = 3.0;
  AVAR b = 4.0;
  AVAR f = hypot(a, b);
  EXPECT_DOUBLE_EQ(5.0, f.val());

  AVEC x = createAVEC(a, b);
  VEC grad_f;
  f.grad(x, grad_f);
  // arbitrary, but doc this way
  EXPECT_DOUBLE_EQ(3.0 / 5.0, grad_f[0]);
  EXPECT_DOUBLE_EQ(4.0 / 5.0, grad_f[1]);
}

TEST(AgradRev, hypot_vd) {
  AVAR a = 3.0;
  double b = 4.0;
  AVAR f = hypot(a, b);
  EXPECT_DOUBLE_EQ(5.0, f.val());

  AVEC x = createAVEC(a);
  VEC grad_f;
  f.grad(x, grad_f);
  // arbitrary, but doc this way
  EXPECT_DOUBLE_EQ(3.0 / 5.0, grad_f[0]);
}

TEST(AgradRev, hypot_dv) {
  double a = 3.0;
  AVAR b = 4.0;
  AVAR f = hypot(a, b);
  EXPECT_DOUBLE_EQ(5.0, f.val());

  AVEC x = createAVEC(b);
  VEC grad_f;
  f.grad(x, grad_f);
  // arbitrary, but doc this way
  EXPECT_DOUBLE_EQ(4.0 / 5.0, grad_f[0]);
}

namespace {
struct hypot_fun {
  template <typename T0, typename T1>
  inline typename stan::return_type<T0, T1>::type operator()(
      const T0& arg1, const T1& arg2) const {
    return hypot(arg1, arg2);
  }
};
}  // namespace

TEST(AgradRev, hypot_nan) {
  hypot_fun hypot_;
  test_nan(hypot_, 3.0, 5.0, false, true);
}

TEST(AgradRev, check_varis_on_stack_25) {
  AVAR a = 3.0;
  AVAR b = 4.0;
  test::check_varis_on_stack(stan::math::hypot(a, b));
  test::check_varis_on_stack(stan::math::hypot(a, 4.0));
  test::check_varis_on_stack(stan::math::hypot(3.0, b));
}
