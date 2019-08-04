#include <stan/math/rev/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/fun/nan_util.hpp>
#include <math/rev/scal/util.hpp>

TEST(AgradRev, floor_var) {
  AVAR a = 1.2;
  AVAR f = floor(a);
  EXPECT_DOUBLE_EQ(1.0, f.val());

  AVEC x = createAVEC(a);
  VEC g;
  f.grad(x, g);
  EXPECT_DOUBLE_EQ(0.0, g[0]);
}

namespace {
struct floor_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return floor(arg1);
  }
};
}  // namespace

TEST(AgradRev, floor_NaN) {
  floor_fun floor_;
  test_nan(floor_, false, true);
}

TEST(AgradRev, check_varis_on_stack_19) {
  AVAR a = 1.2;
  test::check_varis_on_stack(stan::math::floor(a));
}
