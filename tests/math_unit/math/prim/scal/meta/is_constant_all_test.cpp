#include <stan/math/prim/scal.hpp>
#include <gtest/gtest.h>
#include <math/prim/mat/meta/common.hpp>

TEST(MetaTraits, isConstantStruct_2) {
  expect_is_const<>();
  expect_is_const<int>();
  expect_is_const<double>();
  expect_is_const<float>();
  expect_is_const<unsigned int>();
  expect_is_const<int32_t>();
  expect_is_const<int, int>();
  expect_is_const<double, double, double>();
  expect_is_const<float, float, float, float>();
  expect_is_const<int32_t, int32_t, int32_t, int32_t>();
}
