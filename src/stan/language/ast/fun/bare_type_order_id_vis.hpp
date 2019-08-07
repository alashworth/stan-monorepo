#ifndef STAN_LANG_AST_FUN_BARE_TYPE_ORDER_ID_VIS_HPP
#define STAN_LANG_AST_FUN_BARE_TYPE_ORDER_ID_VIS_HPP

#include "stan/language/ast/type/bare_array_type.hpp"
#include "stan/language/ast/type/double_type.hpp"
#include "stan/language/ast/type/ill_formed_type.hpp"
#include "stan/language/ast/type/int_type.hpp"
#include "stan/language/ast/type/matrix_type.hpp"
#include "stan/language/ast/type/row_vector_type.hpp"
#include "stan/language/ast/type/vector_type.hpp"
#include "stan/language/ast/type/void_type.hpp"
#include <boost/variant/static_visitor.hpp>
#include <string>
namespace stan {
namespace lang {

/**
 * Visitor to get a string which describes type wrapped by variant
 * bare_expr_type. Ordering is ill-formed < void < primitive < vector < matrix <
 * array. Array type ids constructed recursively.
 */
struct bare_type_order_id_vis : public boost::static_visitor<std::string> {
  /**
   * Construct a visitor.
   */
  bare_type_order_id_vis();

  template <typename T>
  std::string operator()(const T& x) const;
};
}  // namespace lang
}  // namespace stan
#endif
