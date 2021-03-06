#include <stan/math/mix/mat.hpp>
#include <gtest/gtest.h>
#include <test/unit/math/rev/mat/fun/util.hpp>

TEST(AgradMixMatrixRowsDotSelf, fd) {
  using stan::math::columns_dot_self;
  using stan::math::fvar;

  Eigen::Matrix<fvar<double>, Eigen::Dynamic, Eigen::Dynamic> m1(1, 1);
  m1 << 2.0;
  m1(0).d_ = 1.0;
  EXPECT_NEAR(4.0, rows_dot_self(m1)(0, 0).val_, 1E-12);
  EXPECT_NEAR(4.0, rows_dot_self(m1)(0, 0).d_, 1E-12);

  Eigen::Matrix<fvar<double>, Eigen::Dynamic, Eigen::Dynamic> m2(1, 2);
  m2 << 2.0, 3.0;
  m2(0).d_ = 1.0;
  m2(1).d_ = 1.0;
  Eigen::Matrix<fvar<double>, Eigen::Dynamic, Eigen::Dynamic> x;
  x = rows_dot_self(m2);
  EXPECT_NEAR(13.0, x(0, 0).val_, 1E-12);
  EXPECT_NEAR(10.0, x(0, 0).d_, 1E-12);

  Eigen::Matrix<fvar<double>, Eigen::Dynamic, Eigen::Dynamic> m3(2, 2);
  m3 << 2.0, 3.0, 4.0, 5.0;
  m3(0, 0).d_ = 1.0;
  m3(0, 1).d_ = 1.0;
  m3(1, 0).d_ = 1.0;
  m3(1, 1).d_ = 1.0;
  x = rows_dot_self(m3);
  EXPECT_NEAR(13.0, x(0, 0).val_, 1E-12);
  EXPECT_NEAR(41.0, x(1, 0).val_, 1E-12);
  EXPECT_NEAR(10.0, x(0, 0).d_, 1E-12);
  EXPECT_NEAR(18.0, x(1, 0).d_, 1E-12);
}
TEST(AgradMixMatrixRowsDotSelf, ffd) {
  using stan::math::columns_dot_self;
  using stan::math::fvar;

  Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, Eigen::Dynamic> m1(1, 1);
  m1 << 2.0;
  m1(0).d_ = 1.0;
  EXPECT_NEAR(4.0, rows_dot_self(m1)(0, 0).val_.val(), 1E-12);
  EXPECT_NEAR(4.0, rows_dot_self(m1)(0, 0).d_.val(), 1E-12);

  Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, Eigen::Dynamic> m2(1, 2);
  m2 << 2.0, 3.0;
  m2(0).d_ = 1.0;
  m2(1).d_ = 1.0;
  Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, Eigen::Dynamic> x;
  x = rows_dot_self(m2);
  EXPECT_NEAR(13.0, x(0, 0).val_.val(), 1E-12);
  EXPECT_NEAR(10.0, x(0, 0).d_.val(), 1E-12);

  Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, Eigen::Dynamic> m3(2, 2);
  m3 << 2.0, 3.0, 4.0, 5.0;
  m3(0, 0).d_ = 1.0;
  m3(0, 1).d_ = 1.0;
  m3(1, 0).d_ = 1.0;
  m3(1, 1).d_ = 1.0;
  x = rows_dot_self(m3);
  EXPECT_NEAR(13.0, x(0, 0).val_.val(), 1E-12);
  EXPECT_NEAR(41.0, x(1, 0).val_.val(), 1E-12);
  EXPECT_NEAR(10.0, x(0, 0).d_.val(), 1E-12);
  EXPECT_NEAR(18.0, x(1, 0).d_.val(), 1E-12);
}
