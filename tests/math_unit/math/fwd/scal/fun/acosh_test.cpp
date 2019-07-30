#include <stan/math/fwd/scal.hpp>
#include <gtest/gtest.h>
#include <math/fwd/scal/fun/nan_util.hpp>
#include <cmath>
#include <limits>

TEST(AgradFwdAcosh, Fvar) {
  using stan::math::acosh;
  using stan::math::fvar;
  using std::isnan;
  using std::sqrt;

  fvar<double> x(1.5, 1.0);

  fvar<double> a = acosh(x);
  EXPECT_FLOAT_EQ(acosh(1.5), a.val_);
  EXPECT_FLOAT_EQ(1 / sqrt(-1 + (1.5) * (1.5)), a.d_);
}

TEST(AgradFwdAcosh, excepts) {
  using stan::math::acosh;
  using stan::math::fvar;
  EXPECT_THROW(acosh(fvar<double>(0.5)), std::domain_error);
}

TEST(MathFunctions, acosh_inf_return_0) {
  using stan::math::acosh;
  using stan::math::fvar;
  EXPECT_EQ(
      std::numeric_limits<double>::infinity(),
      stan::math::acosh(fvar<double>(std::numeric_limits<double>::infinity())));
}

TEST(AgradFwdAcosh, FvarFvarDouble) {
  using stan::math::acosh;
  using stan::math::fvar;

  fvar<fvar<double> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 2.0;

  fvar<fvar<double> > a = acosh(x);

  EXPECT_FLOAT_EQ(acosh(1.5), a.val_.val_);
  EXPECT_FLOAT_EQ(2 / sqrt(-1 + 1.5 * 1.5), a.val_.d_);
  EXPECT_FLOAT_EQ(0, a.d_.val_);
  EXPECT_FLOAT_EQ(0, a.d_.d_);

  fvar<fvar<double> > y;
  y.val_.val_ = 1.5;
  y.d_.val_ = 2.0;

  a = acosh(y);
  EXPECT_FLOAT_EQ(acosh(1.5), a.val_.val_);
  EXPECT_FLOAT_EQ(0, a.val_.d_);
  EXPECT_FLOAT_EQ(2 / sqrt(-1 + 1.5 * 1.5), a.d_.val_);
  EXPECT_FLOAT_EQ(0, a.d_.d_);
}

struct acosh_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    using stan::math::acosh;
    return acosh(arg1);
  }
};

TEST(AgradFwdAcosh, acosh_NaN_0) {
  acosh_fun acosh_;
  test_nan_fwd(acosh_, false);
}
