#ifndef TEST_MATH_MATRIX_EXPECT_MATRIX_EQ_HPP
#define TEST_MATH_MATRIX_EXPECT_MATRIX_EQ_HPP

#include <gtest/gtest.h>
#include <Eigen/dense>

void expect_matrix_eq(
    const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>& a,
    const Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>& b);

#endif
