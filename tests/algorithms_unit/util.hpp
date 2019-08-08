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


static inline int count_matches(const std::string& target,
                  const std::string& s) {
  if (target.size() == 0) return -1;  // error
  int count = 0;
  for (size_t pos = 0; (pos = s.find(target,pos)) != std::string::npos; pos += target.size())
    ++count;
  return count;
}