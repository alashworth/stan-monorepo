#include <math/test_ad.hpp>

TEST(mathMixCore, operatorUnaryMinus) {
  auto f = [](const auto& x1) { return -x1; };
  stan::test::expect_common_unary(f);
}
