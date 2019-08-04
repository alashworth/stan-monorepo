#pragma once

#include <stan/math/rev/core/var.hpp>

double double_from_var(stan::math::var var_);

double double_from_var(double var_);

std::vector<double> vdouble_from_vvar(std::vector<double> vv);

std::vector<stan::math::var> get_vvar(std::vector<double> vd);

std::vector<double> vdouble_from_vvar(std::vector<stan::math::var> vv);

void test_grad_eq(Eigen::Matrix<double, -1, 1> grad_1,
                  Eigen::Matrix<double, -1, 1> grad_2);