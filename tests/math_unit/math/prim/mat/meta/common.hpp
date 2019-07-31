#pragma once

template <typename... Ts>
void expect_is_const() {
  using stan::is_constant_all;
  bool temp = is_constant_all<Ts...>::value;
  EXPECT_TRUE(temp);
}