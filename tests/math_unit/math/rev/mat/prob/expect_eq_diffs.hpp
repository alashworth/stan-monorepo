#ifndef TEST_UNIT_DISTRIBUTION_EXPECT_EQ_DIFFS_HPP
#define TEST_UNIT_DISTRIBUTION_EXPECT_EQ_DIFFS_HPP

#include <stan/math/rev/mat.hpp>
#include <cmath>
#include <string>

void expect_eq_diffs(double x1, double x2, double y1, double y2,
                     std::string message = "");

void expect_eq_diffs(const stan::math::var& x1, const stan::math::var& x2,
                     const stan::math::var& y1, const stan::math::var& y2,
                     std::string message = "");

#endif
