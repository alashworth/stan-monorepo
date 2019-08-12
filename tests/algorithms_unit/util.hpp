#pragma once
#include <boost/algorithm/string.hpp>

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