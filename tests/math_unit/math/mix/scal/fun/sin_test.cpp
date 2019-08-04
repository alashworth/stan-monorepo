#include <stan/math/mix/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/util.hpp>
#include <math/fwd/scal/fun/nan_util.hpp>
#include <math/mix/scal/fun/nan_util.hpp>

TEST(AgradFwdSin, FvarVar_2ndDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::cos;
  using std::sin;

  fvar<var> x(1.5, 1.3);
  fvar<var> a = sin(x);

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.d_.grad(y, g);
  EXPECT_DOUBLE_EQ(-1.3 * sin(1.5), g[0]);
}

TEST(AgradFwdSin, FvarFvarVar_1stDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::cos;
  using std::sin;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 2.0;

  fvar<fvar<var> > a = sin(x);

  EXPECT_DOUBLE_EQ(sin(1.5), a.val_.val_.val());
  EXPECT_DOUBLE_EQ(2.0 * cos(1.5), a.val_.d_.val());
  EXPECT_DOUBLE_EQ(0, a.d_.val_.val());
  EXPECT_DOUBLE_EQ(0, a.d_.d_.val());

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.val_.grad(p, g);
  EXPECT_DOUBLE_EQ(cos(1.5), g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 1.5;
  y.d_.val_ = 2.0;

  fvar<fvar<var> > b = sin(y);
  EXPECT_DOUBLE_EQ(sin(1.5), b.val_.val_.val());
  EXPECT_DOUBLE_EQ(0, b.val_.d_.val());
  EXPECT_DOUBLE_EQ(2.0 * cos(1.5), b.d_.val_.val());
  EXPECT_DOUBLE_EQ(0, b.d_.d_.val());

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.val_.val_.grad(q, r);
  EXPECT_DOUBLE_EQ(cos(1.5), r[0]);
}
TEST(AgradFwdSin, FvarFvarVar_2ndDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::cos;
  using std::sin;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 2.0;

  fvar<fvar<var> > a = sin(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.d_.grad(p, g);
  EXPECT_DOUBLE_EQ(-2.0 * sin(1.5), g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 1.5;
  y.d_.val_ = 2.0;

  fvar<fvar<var> > b = sin(y);

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.d_.val_.grad(q, r);
  EXPECT_DOUBLE_EQ(-2.0 * sin(1.5), r[0]);
}
TEST(AgradFwdSin, FvarFvarVar_3rdDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::cos;
  using std::sin;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 1.0;
  x.d_.val_ = 1.0;

  fvar<fvar<var> > a = sin(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.d_.d_.grad(p, g);
  EXPECT_DOUBLE_EQ(-0.070737201667702910088189851434, g[0]);
}

struct sin_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return sin(arg1);
  }
};

TEST(AgradFwdSin, sin_NaN_1) {
  sin_fun sin_;
  test_nan_mix(sin_, false);
}
