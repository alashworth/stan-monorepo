#ifndef STAN_MATH_PRIM_SCAL_META_VECTORBUILDER_HPP
#define STAN_MATH_PRIM_SCAL_META_VECTORBUILDER_HPP

#include <stan/math/prim/scal/meta/VectorBuilderHelper.hpp>
#include <stan/math/prim/scal/meta/contains_vector.hpp>

namespace stan {

/**
 *
 *  VectorBuilder allocates type T1 values to be used as
 *  intermediate values. There are 2 template parameters:
 *  - used: boolean variable indicating whether this instance
 *      is used. If this is false, there is no storage allocated
 *      and operator[] throws.
 *  - is_vec: boolean variable indicating whether this instance
 *      should allocate a vector, if it is used. If this is false,
 *      the instance will only allocate a single double value.
 *      If this is true, it will allocate the number requested.
 *      Note that this is calculated based on template parameters
 *      T2 through T7.
 *
 *  These values are mutable.
 */
template <bool used, typename T1, typename... Args>
class VectorBuilder {
 private:
  typedef VectorBuilderHelper<T1, used, contains_vector<Args...>::value> helper;

 public:
  typedef typename helper::type type;
  helper a;

  explicit VectorBuilder(size_t n) : a(n) {}

  T1& operator[](size_t i) { return a[i]; }

  inline type data() { return a.data(); }
};

}  // namespace stan
#endif
