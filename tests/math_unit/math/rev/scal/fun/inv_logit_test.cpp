#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>

TEST(AgradRev, inv_logit) {
  AVAR a = 2.0;
  AVAR f = inv_logit(a);
  EXPECT_FLOAT_EQ(1.0 / (1.0 + exp(-2.0)), f.val());

  AVEC x = createAVEC(a);
  VEC grad_f;
  f.grad(x, grad_f);
  EXPECT_FLOAT_EQ(exp(-2.0) / pow(1 + exp(-2.0), 2.0), grad_f[0]);
}

namespace {
struct inv_logit_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return inv_logit(arg1);
  }
};
}  // namespace

TEST(AgradRev, inv_logit_NaN_0) {
  inv_logit_fun inv_logit_;
  test_nan(inv_logit_, false, true);
}

TEST(AgradRev, check_varis_on_stack_29) {
  AVAR a = 2.0;
  test::check_varis_on_stack(stan::math::inv_logit(a));
}
