#include <stan/math/mix/scal.hpp>
#include <gtest/gtest.h>
#include <tests/math_unit/math/rev/scal/fun/util.hpp>
#include <tests/math_unit/math/mix/scal/fun/nan_util.hpp>

TEST(AgradFwdCeil, FvarVar_1stDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::ceil;

  fvar<var> x(1.5, 1.3);
  fvar<var> a = ceil(x);

  EXPECT_FLOAT_EQ(ceil(1.5), a.val_.val());
  EXPECT_FLOAT_EQ(0, a.d_.val());

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.val_.grad(y, g);
  EXPECT_FLOAT_EQ(0, g[0]);
}

TEST(AgradFwdCeil, FvarVar_2ndDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::ceil;

  fvar<var> x(1.5, 1.3);
  fvar<var> a = ceil(x);

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.d_.grad(y, g);
  EXPECT_FLOAT_EQ(0, g[0]);
}

TEST(AgradFwdCeil, FvarFvarVar_1stDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::ceil;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 2.0;

  fvar<fvar<var> > a = ceil(x);

  EXPECT_FLOAT_EQ(ceil(1.5), a.val_.val_.val());
  EXPECT_FLOAT_EQ(0, a.val_.d_.val());
  EXPECT_FLOAT_EQ(0, a.d_.val_.val());
  EXPECT_FLOAT_EQ(0, a.d_.d_.val());

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.val_.grad(p, g);
  EXPECT_FLOAT_EQ(0.0, g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 1.5;
  y.d_.val_ = 2.0;

  fvar<fvar<var> > b = ceil(y);
  EXPECT_FLOAT_EQ(ceil(1.5), b.val_.val_.val());
  EXPECT_FLOAT_EQ(0, b.val_.d_.val());
  EXPECT_FLOAT_EQ(0, b.d_.val_.val());
  EXPECT_FLOAT_EQ(0, b.d_.d_.val());

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.val_.val_.grad(q, r);
  EXPECT_FLOAT_EQ(0.0, r[0]);
}

TEST(AgradFwdCeil, FvarFvarVar_2ndDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::ceil;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 2.0;

  fvar<fvar<var> > a = ceil(x);

  EXPECT_FLOAT_EQ(ceil(1.5), a.val_.val_.val());
  EXPECT_FLOAT_EQ(0, a.val_.d_.val());
  EXPECT_FLOAT_EQ(0, a.d_.val_.val());
  EXPECT_FLOAT_EQ(0, a.d_.d_.val());

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.d_.grad(p, g);
  EXPECT_FLOAT_EQ(0.0, g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 1.5;
  y.d_.val_ = 2.0;

  fvar<fvar<var> > b = ceil(y);
  EXPECT_FLOAT_EQ(ceil(1.5), b.val_.val_.val());
  EXPECT_FLOAT_EQ(0, b.val_.d_.val());
  EXPECT_FLOAT_EQ(0, b.d_.val_.val());
  EXPECT_FLOAT_EQ(0, b.d_.d_.val());

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.d_.val_.grad(q, r);
  EXPECT_FLOAT_EQ(0.0, r[0]);
}
TEST(AgradFwdCeil, FvarFvarVar_3rdDeriv) {
  using stan::math::fvar;
  using stan::math::var;
  using std::ceil;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.5;
  x.val_.d_ = 2.0;
  x.d_.val_ = 2.0;

  fvar<fvar<var> > a = ceil(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.d_.d_.grad(p, g);
  EXPECT_FLOAT_EQ(0.0, g[0]);
}

struct ceil_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return ceil(arg1);
  }
};

TEST(AgradFwdCeil, ceil_NaN) {
  ceil_fun ceil_;
  test_nan_mix(ceil_, false);
}
