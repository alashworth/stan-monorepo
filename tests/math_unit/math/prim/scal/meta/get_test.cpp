#include <stan/math/prim/scal.hpp>
#include <gtest/gtest.h>

TEST(MetaTraits, get_2) {
  using stan::get;

  EXPECT_DOUBLE_EQ(2.0, get(2.0, 1));
}
