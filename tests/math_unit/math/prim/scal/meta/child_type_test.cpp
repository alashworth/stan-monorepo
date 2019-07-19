#include <stan/math/prim/scal.hpp>
#include <math/prim/scal/fun/promote_type_test_util.hpp>
#include <gtest/gtest.h>

TEST(MathMeta, value_type) {
  using stan::math::child_type;

  expect_same_type<double, child_type<double>::type>();
}
