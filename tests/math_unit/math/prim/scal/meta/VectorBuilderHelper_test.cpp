#include <stan/math/prim/scal.hpp>
#include <gtest/gtest.h>

TEST(MetaTraits, VectorBuilderHelper_false_false_2) {
  using stan::VectorBuilderHelper;
  using stan::length;

  double a_double(1);

  VectorBuilderHelper<double, false, false> dvv1(length(a_double));
  EXPECT_THROW(dvv1[0], std::logic_error);
  EXPECT_THROW(dvv1.data(), std::logic_error);
}

TEST(MetaTraits, VectorBuilderHelper_true_false_2) {
  using stan::VectorBuilderHelper;
  using stan::length;

  double a_double(1);

  VectorBuilderHelper<double, true, false> dvv1(length(a_double));
  EXPECT_DOUBLE_EQ(0.0, dvv1[0]);
  EXPECT_DOUBLE_EQ(0.0, dvv1[1]);
  EXPECT_DOUBLE_EQ(0.0, dvv1[100]);

  double data = dvv1.data();
  EXPECT_DOUBLE_EQ(0.0, data);
}
