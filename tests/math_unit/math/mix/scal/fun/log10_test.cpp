#include <stan/math/mix/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/util.hpp>
#include <math/mix/scal/fun/nan_util.hpp>

TEST(AgradFwdLog10, FvarVar_1stDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::log;

  fvar<var> x(0.5, 1.3);
  fvar<var> a = log10(x);

  EXPECT_DOUBLE_EQ(log10(0.5), a.val_.val());
  EXPECT_DOUBLE_EQ(1.3 / (0.5 * log(10)), a.d_.val());

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.val_.grad(y, g);
  EXPECT_DOUBLE_EQ(1 / (0.5 * log(10)), g[0]);
}
TEST(AgradFwdLog10, FvarVar_2ndDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::log;

  fvar<var> x(0.5, 1.3);
  fvar<var> a = log10(x);

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.d_.grad(y, g);
  EXPECT_DOUBLE_EQ(-1.3 / (0.25 * log(10)), g[0]);
}
TEST(AgradFwdLog10, FvarFvarVar_1stDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::log;

  fvar<fvar<var> > x;
  x.val_.val_ = 0.5;
  x.val_.d_ = 1.0;

  fvar<fvar<var> > a = log10(x);

  EXPECT_DOUBLE_EQ(log10(0.5), a.val_.val_.val());
  EXPECT_DOUBLE_EQ(1 / (0.5 * log(10)), a.val_.d_.val());
  EXPECT_DOUBLE_EQ(0, a.d_.val_.val());
  EXPECT_DOUBLE_EQ(0, a.d_.d_.val());

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.val_.grad(p, g);
  EXPECT_DOUBLE_EQ(1.0 / (0.5 * log(10)), g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 0.5;
  y.d_.val_ = 1.0;

  fvar<fvar<var> > b = log10(y);
  EXPECT_DOUBLE_EQ(log10(0.5), b.val_.val_.val());
  EXPECT_DOUBLE_EQ(0, b.val_.d_.val());
  EXPECT_DOUBLE_EQ(1 / (0.5 * log(10)), b.d_.val_.val());
  EXPECT_DOUBLE_EQ(0, b.d_.d_.val());

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.val_.val_.grad(q, r);
  EXPECT_DOUBLE_EQ(1.0 / (0.5 * log(10)), r[0]);
}
TEST(AgradFwdLog10, FvarFvarVar_2ndDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::log;

  fvar<fvar<var> > x;
  x.val_.val_ = 0.5;
  x.val_.d_ = 1.0;

  fvar<fvar<var> > a = log10(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.d_.grad(p, g);
  EXPECT_DOUBLE_EQ(-1.0 / (0.25 * log(10)), g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 0.5;
  y.d_.val_ = 1.0;

  fvar<fvar<var> > b = log10(y);

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.d_.val_.grad(q, r);
  EXPECT_DOUBLE_EQ(-1.0 / (0.5 * 0.5 * log(10)), r[0]);
}
TEST(AgradFwdLog10, FvarFvarVar_3rdDeriv) {
  using stan::math::fvar;
  using stan::math::var;

  fvar<fvar<var> > x;
  x.val_.val_ = 0.5;
  x.val_.d_ = 1.0;
  x.d_.val_ = 1.0;

  fvar<fvar<var> > a = log10(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.d_.d_.grad(p, g);
  EXPECT_DOUBLE_EQ(6.9487117104520292424180627027, g[0]);
}

struct log10_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return log10(arg1);
  }
};

TEST(AgradFwdLog10, log10_NaN_1) {
  log10_fun log10_;
  test_nan_mix(log10_, false);
}
