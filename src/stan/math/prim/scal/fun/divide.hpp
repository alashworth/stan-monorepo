#ifndef STAN_MATH_PRIM_SCAL_FUN_DIVIDE_HPP
#define STAN_MATH_PRIM_SCAL_FUN_DIVIDE_HPP

#include <stan/math/prim/meta.hpp>
#include <stan/math/prim/scal/err/domain_error.hpp>
#include <cstddef>
#include <cstdlib>

namespace stan {
namespace math {

/**
 * Return the division of the first scalar by
 * the second scalar.
 * @param[in] x Specified vector.
 * @param[in] y Specified scalar.
 * @return Vector divided by the scalar.
 */
template <typename T1, typename T2>
inline return_type_t<T1, T2> divide(const T1& x, const T2& y) {
  return x / y;
}

inline int divide(int x, int y) {
  if (unlikely(y == 0))
    domain_error("divide", "denominator is", y, "");
  return x / y;
}

}  // namespace math
}  // namespace stan
#endif
