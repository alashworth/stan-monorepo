#pragma once

struct StanMathOde : public ::testing::Test {
  std::stringstream msgs;
  std::vector<double> x;
  std::vector<int> x_int;
};
