#include <math/test_ad.hpp>

TEST(mathMixMatFun, inv) {
  auto f = [](const auto& x1) { return stan::math::inv(x1); };
  stan::test::expect_common_unary_vectorized(f);
  stan::test::expect_unary_vectorized(f, -2.6, -2, -0.2, 1.3, 3);
}
