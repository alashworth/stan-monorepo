#include <math/test_ad.hpp>

TEST(mathMixCore, operatorSubtraction) {
  auto f = [](const auto& x1, const auto& x2) { return x1 - x2; };
  bool disable_lhs_int = true;
  stan::test::expect_common_binary(f, disable_lhs_int);
}
