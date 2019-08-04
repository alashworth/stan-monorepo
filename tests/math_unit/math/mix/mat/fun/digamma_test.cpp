#include <stan/math/mix/mat.hpp>
#include <gtest/gtest.h>
#include <math/prim/mat/vectorize/prim_scalar_unary_test.hpp>
#include <math/rev/mat/vectorize/rev_scalar_unary_test.hpp>
#include <math/fwd/mat/vectorize/fwd_scalar_unary_test.hpp>
#include <math/mix/mat/vectorize/mix_scalar_unary_test.hpp>
#include <stan/math/prim/mat/fun/digamma.hpp>
#include <math/prim/mat/vectorize/vector_builder.hpp>
#include <vector>

namespace {
/**
 * This is the structure for testing vectorized digamma (defined in the
 * testing framework).
 */
struct digamma_test {
  /**
   * Redefinition of function brought in from stan::math.  The reason
   * to do this is that it wraps it up in this static template class.
   *
   * This is the version that's being tested.
   *
   * WARNING:  assumes that the scalar values for all instantiations
   * (prim, rev, fwd, mix) ***have already been tested***.
   *
   * @tparam R Return type.
   * @tparam T Argument type.
   */
  template <typename R, typename T>
  static R apply(const T& x) {
    using stan::math::digamma;
    return digamma(x);
  }

  /**
   * This defines the truth against which we're testing.
   *
   * Because this is *not an independent test*, this function just
   * delegates to the actual function defined in stan::math.
   *
   * Redundant definition of function from stan::math to apply to an
   * integer and return a double.
   *
   * This function delegates to apply(), defined above, directly.
   *
   * WARNING:  this is *not an independent test*.
   */
  static double apply_base(int x) { return apply<double>(x); }

  /**
   * This is the generic version of the integer version defined
   * above.  For every other type, the return type is the same as the
   * reference type.
   *
   * WARNING:  this is *not an independent test of the underlying function*.
   */
  template <typename T>
  static T apply_base(const T& x) {
    return apply<T>(x);
  }

  /**
   * Return sequence of valid double-valued inputs.
   */
  static std::vector<double> valid_inputs() {
    return test::math::vector_builder<double>()
        .add(2.3)
        .add(5.7)
        .add(-10.2)
        .add(-1.2)
        .build();
  }

  /**
   * Return sequence of invalid double-valued inputs.
   */
  static std::vector<double> invalid_inputs() {
    return test::math::vector_builder<double>().build();
  }

  /**
   * Return sequence of valid integer inputs.
   */
  static std::vector<int> int_valid_inputs() {
    return test::math::vector_builder<int>().build();
  }

  /**
   * Return sequence of invalid integer inputs.
   */
  static std::vector<int> int_invalid_inputs() {
    return test::math::vector_builder<int>().add(-1).add(-12).add(-25).build();
  }
};
}  // namespace

INSTANTIATE_TYPED_TEST_CASE_P(digamma, prim_scalar_unary_test, digamma_test);
INSTANTIATE_TYPED_TEST_CASE_P(digamma, rev_scalar_unary_test, digamma_test);
INSTANTIATE_TYPED_TEST_CASE_P(digamma, fwd_scalar_unary_test, digamma_test);
INSTANTIATE_TYPED_TEST_CASE_P(digamma, mix_scalar_unary_test, digamma_test);
