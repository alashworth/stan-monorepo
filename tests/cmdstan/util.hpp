#ifndef TEST__UNIT__UTIL_HPP
#define TEST__UNIT__UTIL_HPP

#include <stan/util/io/stan_csv_reader.hpp>

#include <boost/algorithm/string.hpp>
#include <Eigen/Dense>
#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>


#define EXPECT_THROW_MSG(expr, T_e, msg)                \
  try {                                                 \
    expr;                                               \
  } catch(const T_e& e) {                               \
    EXPECT_EQ(1, count_matches(msg, e.what()))          \
      << "expected message: " << msg << std::endl       \
      << "found message:    " << e.what();              \
  } catch(...) {                                        \
      FAIL()                                            \
        << "Wrong exception type thrown" << std::endl;  \
  }


int count_matches(const std::string& target,
                  const std::string& s);

void match_csv_columns(const Eigen::MatrixXd& samples,
                      const std::string& raw_output,
                      size_t num_rows,
                      size_t num_columns,
                      size_t col_offset);

#endif
