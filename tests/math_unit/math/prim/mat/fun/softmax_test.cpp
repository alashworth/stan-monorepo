#include <stan/math/prim/mat.hpp>
#include <gtest/gtest.h>

TEST(MathMatrix, softmax_1) {
  using Eigen::Dynamic;
  using Eigen::Matrix;
  using stan::math::softmax;

  Matrix<double, Dynamic, 1> x(1);
  x << 0.0;

  Matrix<double, Dynamic, 1> theta = softmax(x);
  EXPECT_EQ(1, theta.size());
  EXPECT_DOUBLE_EQ(1.0, theta[0]);

  Matrix<double, Dynamic, 1> x2(2);
  x2 << -1.0, 1.0;
  Matrix<double, Dynamic, 1> theta2 = softmax(x2);
  EXPECT_EQ(2, theta2.size());
  EXPECT_DOUBLE_EQ(exp(-1) / (exp(-1) + exp(1)), theta2[0]);
  EXPECT_DOUBLE_EQ(exp(1) / (exp(-1) + exp(1)), theta2[1]);

  Matrix<double, Dynamic, 1> x3(3);
  x3 << -1.0, 1.0, 10.0;
  Matrix<double, Dynamic, 1> theta3 = softmax(x3);
  EXPECT_EQ(3, theta3.size());
  EXPECT_DOUBLE_EQ(exp(-1) / (exp(-1) + exp(1) + exp(10.0)), theta3[0]);
  EXPECT_DOUBLE_EQ(exp(1) / (exp(-1) + exp(1) + exp(10.0)), theta3[1]);
  EXPECT_DOUBLE_EQ(exp(10) / (exp(-1) + exp(1) + exp(10.0)), theta3[2]);
}
TEST(MathMatrix, softmax_exception_1) {
  using stan::math::softmax;
  stan::math::vector_d v0;

  EXPECT_THROW(softmax(v0), std::invalid_argument);
}
