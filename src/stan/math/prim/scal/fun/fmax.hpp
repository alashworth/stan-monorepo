#ifndef STAN_MATH_PRIM_SCAL_FUN_FMAX_HPP
#define STAN_MATH_PRIM_SCAL_FUN_FMAX_HPP

#include <stan/math/prim/meta.hpp>
#include <stan/math/prim/scal/fun/is_nan.hpp>
#include <boost/math/tools/promotion.hpp>

namespace stan {
namespace math {

/**
 * Return the greater of the two specified arguments.  If one is
 * greater than the other, return not-a-number.
 *
 * @param x First argument.
 * @param y Second argument.
 * @return maximum of x or y and if one is NaN return the other
 */
template <typename T1, typename T2>
inline typename boost::math::tools::promote_args<T1, T2>::type fmax(
    const T1& x, const T2& y) {
  if (is_nan(x))
    return y;
  if (is_nan(y))
    return x;
  return x > y ? x : y;
}

}  // namespace math
}  // namespace stan
#endif
