#ifndef STAN_LANG_AST_FUN_VAR_TYPE_ARG1_VIS_HPP
#define STAN_LANG_AST_FUN_VAR_TYPE_ARG1_VIS_HPP

#include "stan/language/ast/node/expression.hpp"
#include "stan/language/ast/type/block_array_type.hpp"
#include "stan/language/ast/type/cholesky_factor_corr_block_type.hpp"
#include "stan/language/ast/type/cholesky_factor_cov_block_type.hpp"
#include "stan/language/ast/type/corr_matrix_block_type.hpp"
#include "stan/language/ast/type/cov_matrix_block_type.hpp"
#include "stan/language/ast/type/double_block_type.hpp"
#include "stan/language/ast/type/double_type.hpp"
#include "stan/language/ast/type/ill_formed_type.hpp"
#include "stan/language/ast/type/int_block_type.hpp"
#include "stan/language/ast/type/int_type.hpp"
#include "stan/language/ast/type/local_array_type.hpp"
#include "stan/language/ast/type/matrix_block_type.hpp"
#include "stan/language/ast/type/matrix_local_type.hpp"
#include "stan/language/ast/type/ordered_block_type.hpp"
#include "stan/language/ast/type/positive_ordered_block_type.hpp"
#include "stan/language/ast/type/row_vector_block_type.hpp"
#include "stan/language/ast/type/row_vector_local_type.hpp"
#include "stan/language/ast/type/simplex_block_type.hpp"
#include "stan/language/ast/type/unit_vector_block_type.hpp"
#include "stan/language/ast/type/vector_block_type.hpp"
#include "stan/language/ast/type/vector_local_type.hpp"
#include <boost/variant/static_visitor.hpp>

namespace stan {
namespace lang {

/**
 * Visitor to get vector length/num rows from vector, matrix types,
 * returns nil expression otherwise.
 */
struct var_type_arg1_vis : public boost::static_visitor<expression> {
  /**
   * Construct a visitor.
   */
  var_type_arg1_vis();

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const block_array_type& x) const;

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const local_array_type& x) const;

  /**
   * Return number of rows for matrix types.
   *
   * @param x type
   * @return expression num_rows
   */
  expression operator()(const cholesky_factor_corr_block_type& x) const;

  /**
   * Return number of rows for matrix types.
   *
   * @param x type
   * @return expression num_rows
   */
  expression operator()(const cholesky_factor_cov_block_type& x) const;

  /**
   * Return number of rows for matrix types.
   *
   * @param x type
   * @return expression num_rows
   */
  expression operator()(const corr_matrix_block_type& x) const;

  /**
   * Return number of rows for matrix types.
   *
   * @param x type
   */
  expression operator()(const cov_matrix_block_type& x) const;

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const double_block_type& x) const;

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const double_type& x) const;

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const ill_formed_type& x) const;

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const int_block_type& x) const;

  /**
   * Return nil for non-vector and non-matrix types.
   *
   * @param x type
   * @return nil expression
   */
  expression operator()(const int_type& x) const;

  /**
   * Return number of rows for matrix types.
   *
   * @param x type
   * @return expression num_rows
   */
  expression operator()(const matrix_block_type& x) const;

  /**
   * Return number of rows for matrix types.
   *
   * @param x type
   * @return expression num_rows
   */
  expression operator()(const matrix_local_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const ordered_block_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const positive_ordered_block_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const row_vector_block_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const row_vector_local_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const simplex_block_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const unit_vector_block_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const vector_block_type& x) const;

  /**
   * Return length for vector types.
   *
   * @param x type
   * @return expression length
   */
  expression operator()(const vector_local_type& x) const;
};
}  // namespace lang
}  // namespace stan
#endif
