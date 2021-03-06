#ifndef TEST_UNIT_MATH_REV_ARR_FUN_UTIL_HPP
#define TEST_UNIT_MATH_REV_ARR_FUN_UTIL_HPP

#include <math/rev/scal/util.hpp>
#include <math/rev/arr/util.hpp>
#include <vector>

using AVEC = std::vector<AVAR>;

inline std::vector<double> cgradvec(AVAR f, AVEC x) {
  VEC g;
  f.grad(x, g);
  return g;
}

#endif
