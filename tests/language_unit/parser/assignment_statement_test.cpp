#include <gtest/gtest.h>
#include <exception>
#include "utility.hpp"
TEST(langParserStatementGrammar, validateAssignmentTypes1) {
  test_throws("bad_var_assignment_type1",
              "mismatch in assignment");
  test_throws("bad_var_assignment_type2",
              "mismatch in assignment");
  test_throws("bad_var_assignment_vec_arr",
              "mismatch in assignment");
}

TEST(langParserStatementGrammar, assignRealToIntMessage1) {
  test_throws("assign_real_to_int",
              "Base type mismatch in assignment");
}

TEST(langParserStatementGrammar, plusEqualsGood1) {
  test_parsable("compound-assign/plus_equals_prim");
  test_parsable("compound-assign/plus_equals_container");
  test_parsable("compound-assign/plus_equals_manual");
  test_parsable("compound-assign/plus_equals_sliced");
}

TEST(langParserStatementGrammar, minusEqualsGood1) {
  test_parsable("compound-assign/minus_equals_prim");
  test_parsable("compound-assign/minus_equals_container");
  test_parsable("compound-assign/minus_equals_manual");
  test_parsable("compound-assign/minus_equals_sliced");
}

TEST(langParserStatementGrammar, multiplyEqualsGood1) {
  test_parsable("compound-assign/multiply_equals_prim");
  test_parsable("compound-assign/multiply_equals_container");
  test_parsable("compound-assign/multiply_equals_manual");
  test_parsable("compound-assign/multiply_equals_sliced");
}

TEST(langParserStatementGrammar, divideEqualsGood1) {
  test_parsable("compound-assign/divide_equals_prim");
  test_parsable("compound-assign/divide_equals_container");
  test_parsable("compound-assign/divide_equals_manual");
  test_parsable("compound-assign/divide_equals_sliced");
}

TEST(langParserStatementGrammar, eltOpEqualsGood1) {
  test_parsable("compound-assign/elt_multiply_equals");
  test_parsable("compound-assign/elt_multiply_equals_sliced");
  test_parsable("compound-assign/elt_divide_equals");
  test_parsable("compound-assign/elt_divide_equals_sliced");
}

TEST(langParserStatementGrammar, plusEqualsBad1) {
  test_throws("compound-assign/plus_equals_bad_var_lhs","does not exist");
  test_throws("compound-assign/plus_equals_bad_var_lhs2",
              "Cannot assign to variable outside of declaration block");
  test_throws("compound-assign/plus_equals_bad_lhs_idxs",
              "Too many indexes");
  test_throws("compound-assign/plus_equals_bad_var_rhs",
              "does not exist");
  test_throws("compound-assign/plus_equals_type_mismatch",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_type_mismatch2",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_matrix_array",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_matrix_array2",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_prim_array",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_row_vec_array",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_row_vec_array",
              "Cannot apply operator '+='");
  test_throws("compound-assign/plus_equals_bad_init",
              "PARSER EXPECTED: \";\"");
}

TEST(langParserStatementGrammar, timesEqualsBad1) {
  test_throws("compound-assign/times_equals_matrix_array",
              "Cannot apply operator '*='");
}

TEST(langParserStatementGrammar, eltOpEqualsBad1) {
  test_throws("compound-assign/elt_times_equals_prim",
              "Cannot apply element-wise operation to scalar");
  test_throws("compound-assign/elt_divide_equals_prim",
              "Cannot apply element-wise operation to scalar");
}

TEST(langParserStatementGrammar, slicedOpEqualsBa1) {
  test_throws("compound-assign/plus_equals_sliced",
              "left-hand side type = vector; right-hand side type=matrix");
}
