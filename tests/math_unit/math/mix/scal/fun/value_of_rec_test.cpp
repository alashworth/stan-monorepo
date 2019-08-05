#include <stan/math/mix/scal.hpp>
#include <gtest/gtest.h>
#include <math/rev/scal/util.hpp>

TEST(AgradRev, value_of_rec_0) {
  using stan::math::fvar;
  using stan::math::value_of_rec;
  using stan::math::var;

  fvar<var> fv_a(5.0);
  fvar<fvar<var> > ffv_a(5.0);
  fvar<fvar<fvar<fvar<fvar<var> > > > > fffffv_a(5.0);

  EXPECT_FLOAT_EQ(5.0, value_of_rec(fv_a));
  EXPECT_FLOAT_EQ(5.0, value_of_rec(ffv_a));
  EXPECT_FLOAT_EQ(5.0, value_of_rec(fffffv_a));
}
