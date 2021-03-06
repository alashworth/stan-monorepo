#include <stan/math/fwd/mat.hpp>
#include <gtest/gtest.h>

TEST(AgradFwdMatrixQrQ, fd_1) {
  using stan::math::matrix_d;
  using stan::math::matrix_fd;
  matrix_fd m0(0, 0);
  matrix_d m2(3, 2);
  matrix_fd m1(3, 2);
  m1 << 1, 2, 3, 4, 5, 6;
  m2 << 1, 2, 3, 4, 5, 6;
  m1(0, 0).d_ = 1.0;
  m1(0, 1).d_ = 1.0;
  m1(1, 0).d_ = 1.0;
  m1(1, 1).d_ = 1.0;
  m1(2, 0).d_ = 1.0;
  m1(2, 1).d_ = 1.0;

  using stan::math::qr_thin_Q;
  using stan::math::transpose;
  EXPECT_THROW(qr_thin_Q(m0), std::invalid_argument);
  EXPECT_NO_THROW(qr_thin_Q(m1));

  matrix_fd res = qr_thin_Q(m1);
  matrix_d res2 = qr_thin_Q(m2);

  for (int i = 0; i < res2.rows(); i++)
    for (int j = 0; j < res2.cols(); j++)
      EXPECT_FLOAT_EQ(res2(i, j), res(i, j).val_);

  EXPECT_FLOAT_EQ(0.12556578, res(0, 0).d_);
  EXPECT_FLOAT_EQ(-0.023659391, res(0, 1).d_);
  // EXPECT_NEAR(0, res(0, 2).d_, 1.0E-12);
  EXPECT_FLOAT_EQ(0.038635623, res(1, 0).d_);
  EXPECT_FLOAT_EQ(-0.070978172, res(1, 1).d_);
  // EXPECT_NEAR(0, res(1, 2).d_, 1.0E-12);
  EXPECT_FLOAT_EQ(-0.048294529, res(2, 0).d_);
  EXPECT_FLOAT_EQ(-0.11829695, res(2, 1).d_);
  // EXPECT_NEAR(0, res(2, 2).d_, 1.0E-12);
}

TEST(AgradFwdMatrixQrQ, ffd_1) {
  using stan::math::matrix_d;
  using stan::math::matrix_ffd;
  matrix_ffd m0(0, 0);
  matrix_d m2(3, 2);
  matrix_ffd m1(3, 2);
  m1 << 1, 2, 3, 4, 5, 6;
  m2 << 1, 2, 3, 4, 5, 6;
  m1(0, 0).d_ = 1.0;
  m1(0, 1).d_ = 1.0;
  m1(1, 0).d_ = 1.0;
  m1(1, 1).d_ = 1.0;
  m1(2, 0).d_ = 1.0;
  m1(2, 1).d_ = 1.0;

  using stan::math::qr_thin_Q;
  using stan::math::transpose;
  EXPECT_THROW(qr_thin_Q(m0), std::invalid_argument);
  EXPECT_NO_THROW(qr_thin_Q(m1));

  matrix_ffd res = qr_thin_Q(m1);
  matrix_d res2 = qr_thin_Q(m2);

  for (int i = 0; i < res2.rows(); i++)
    for (int j = 0; j < res2.cols(); j++)
      EXPECT_FLOAT_EQ(res2(i, j), res(i, j).val_.val_);

  EXPECT_FLOAT_EQ(0.12556578, res(0, 0).d_.val_);
  EXPECT_FLOAT_EQ(-0.023659391, res(0, 1).d_.val_);
  EXPECT_FLOAT_EQ(0.038635623, res(1, 0).d_.val_);
  EXPECT_FLOAT_EQ(-0.070978172, res(1, 1).d_.val_);
  EXPECT_FLOAT_EQ(-0.048294529, res(2, 0).d_.val_);
  EXPECT_FLOAT_EQ(-0.11829695, res(2, 1).d_.val_);
}
