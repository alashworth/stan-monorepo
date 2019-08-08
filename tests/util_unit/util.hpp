#pragma once

#include <stan/util/io/stan_csv_reader.hpp>
#include <Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>

#define EXPECT_THROW_MSG(expr, T_e, msg)                  \
  try {                                                   \
    expr;                                                 \
  } catch (const T_e& e) {                                \
    EXPECT_EQ(1, count_matches(msg, e.what()))            \
        << "expected message: " << msg << std::endl       \
        << "found message:    " << e.what();              \
  } catch (...) {                                         \
    FAIL() << "Wrong exception type thrown" << std::endl; \
  }

static inline int count_matches(const std::string& target,
                                const std::string& s) {
  if (target.size() == 0)
    return -1;  // error
  int count = 0;
  for (size_t pos = 0; (pos = s.find(target, pos)) != std::string::npos;
       pos += target.size())
    ++count;
  return count;
}

static inline void match_csv_columns(const Eigen::MatrixXd& samples,
                                     const std::string& raw_output,
                                     size_t num_rows, size_t num_columns,
                                     size_t col_offset) {
  std::stringstream cell_ss;
  std::vector<std::string> cells;
  std::string line;
  std::istringstream f(raw_output);
  size_t row = 0;
  while (std::getline(f, line)) {
    if (row == 0) {
      ++row;
      continue;
    }
    if (row == num_rows + 1) {
      break;
    }
    cells.clear();
    boost::algorithm::split(cells, line, boost::is_any_of(","));
    for (size_t i = 0; i < num_columns; ++i) {
      cell_ss.str(std::string());
      cell_ss.clear();
      cell_ss << samples(row - 1, i + col_offset);
      EXPECT_EQ(cells[i], cell_ss.str());
    }
    ++row;
  }
}