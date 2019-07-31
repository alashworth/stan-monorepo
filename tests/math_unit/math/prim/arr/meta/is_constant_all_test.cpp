#include <stan/math/prim/arr.hpp>
#include <gtest/gtest.h>
#include <vector>
#include <math/prim/mat/meta/common.hpp>

TEST(MetaTraits, isConstantStruct_0) {
  using std::vector;
  expect_is_const<vector<double>>();
  expect_is_const<vector<vector<double>>>();
  expect_is_const<vector<vector<vector<double>>>>();
  expect_is_const<vector<double>, vector<double>, vector<double>>();
  expect_is_const<vector<double>, vector<vector<double>>, vector<double>,
                  vector<vector<double>>, vector<vector<vector<double>>>>();
}
