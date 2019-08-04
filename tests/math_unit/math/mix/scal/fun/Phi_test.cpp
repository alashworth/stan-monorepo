#include <stan/math/mix/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/util.hpp>
#include <math/mix/scal/fun/nan_util.hpp>

TEST(AgradFwdPhi, FvarVar_1stDeriv) {
  using stan::math::Phi;
  using stan::math::fvar;
  using stan::math::var;

  fvar<var> x(1.0, 1.3);
  fvar<var> a = Phi(x);

  EXPECT_DOUBLE_EQ(Phi(1.0), a.val_.val());
  EXPECT_DOUBLE_EQ(1.3 * exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)),
                   a.d_.val());

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.val_.grad(y, g);
  EXPECT_DOUBLE_EQ(exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)), g[0]);
}
TEST(AgradFwdPhi, FvarVar_2ndDeriv) {
  using stan::math::Phi;
  using stan::math::fvar;
  using stan::math::var;

  fvar<var> x(1.0, 1.3);
  fvar<var> a = Phi(x);

  AVEC y = createAVEC(x.val_);
  VEC g;
  a.d_.grad(y, g);
  EXPECT_DOUBLE_EQ(-1.3 * exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)),
                   g[0]);
}

TEST(AgradFwdPhi, FvarFvarVar_1stDeriv) {
  using stan::math::Phi;
  using stan::math::fvar;
  using stan::math::var;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.0;
  x.val_.d_ = 1.0;

  fvar<fvar<var> > a = Phi(x);

  EXPECT_DOUBLE_EQ(Phi(1.0), a.val_.val_.val());
  EXPECT_DOUBLE_EQ(exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)),
                   a.val_.d_.val());
  EXPECT_DOUBLE_EQ(0, a.d_.val_.val());
  EXPECT_DOUBLE_EQ(0, a.d_.d_.val());

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.val_.grad(p, g);
  EXPECT_DOUBLE_EQ(exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)), g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 1.0;
  y.d_.val_ = 1.0;

  fvar<fvar<var> > b = Phi(y);
  EXPECT_DOUBLE_EQ(Phi(1.0), b.val_.val_.val());
  EXPECT_DOUBLE_EQ(0, b.val_.d_.val());
  EXPECT_DOUBLE_EQ(exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)),
                   b.d_.val_.val());
  EXPECT_DOUBLE_EQ(0, b.d_.d_.val());

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.val_.val_.grad(q, r);
  EXPECT_DOUBLE_EQ(exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)), r[0]);
}

TEST(AgradFwdPhi, FvarFvarVar_2ndDeriv) {
  using stan::math::Phi;
  using stan::math::fvar;
  using stan::math::var;

  fvar<fvar<var> > x;
  x.val_.val_ = 1.0;
  x.val_.d_ = 1.0;

  fvar<fvar<var> > a = Phi(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.val_.d_.grad(p, g);
  EXPECT_DOUBLE_EQ(-exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)), g[0]);

  fvar<fvar<var> > y;
  y.val_.val_ = 1.0;
  y.d_.val_ = 1.0;

  fvar<fvar<var> > b = Phi(y);

  AVEC q = createAVEC(y.val_.val_);
  VEC r;
  b.d_.val_.grad(q, r);
  EXPECT_DOUBLE_EQ(-exp(stan::math::normal_log<false>(1.0, 0.0, 1.0)), r[0]);
}
TEST(AgradFwdPhi, FvarFvarVar_3rdDeriv) {
  using stan::math::Phi;
  using stan::math::fvar;
  using stan::math::var;

  fvar<fvar<var> > x;
  x.val_.val_ = 2.0;
  x.val_.d_ = 1.0;
  x.d_.val_ = 1.0;

  fvar<fvar<var> > a = Phi(x);

  AVEC p = createAVEC(x.val_.val_);
  VEC g;
  a.d_.d_.grad(p, g);
  EXPECT_DOUBLE_EQ(0.1619729, g[0]);
}

struct Phi_fun {
  template <typename T0>
  inline T0 operator()(const T0& arg1) const {
    return Phi(arg1);
  }
};

TEST(AgradFwdPhi, Phi_NaN_1) {
  Phi_fun Phi_;
  test_nan_mix(Phi_, true);
}
