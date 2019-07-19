#include <stan/math/prim/scal.hpp>
#include <gtest/gtest.h>
#include <tests/math_unit/util.hpp>

TEST(MetaTraits, ScalarTypeScal) {
  test::expect_same_type<double, stan::scalar_type<double>::type>();
  test::expect_same_type<int, stan::scalar_type<int>::type>();
}
