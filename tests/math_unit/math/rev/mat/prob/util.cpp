#include "util.hpp"
#include <gtest/gtest.h>

double double_from_var(stan::math::var var_) { return var_.val(); }

double double_from_var(double var_) { return var_; }

std::vector<stan::math::var> get_vvar(std::vector<double> vd) {
  size_t size = vd.size();
  std::vector<stan::math::var> vv;
  vv.reserve(size);
  for (size_t i = 0; i < size; i++)
    vv.push_back(vd[i]);
  return vv;
}

std::vector<double> vdouble_from_vvar(std::vector<stan::math::var> vv) {
  size_t size = vv.size();
  std::vector<double> vd;
  vd.reserve(size);
  for (size_t i = 0; i < size; i++)
    vd.push_back(vv[i].val());
  return vd;
}

std::vector<double> vdouble_from_vvar(std::vector<double> vv) { return vv; }

void test_grad_eq(Eigen::Matrix<double, -1, 1> grad_1,
                  Eigen::Matrix<double, -1, 1> grad_2) {
  ASSERT_EQ(grad_1.size(), grad_2.size());
  for (int i = 0; i < grad_1.size(); ++i)
    EXPECT_FLOAT_EQ(grad_1(i), grad_2(i));
}
