#include <gtest/gtest.h>
#include <stan/util/io/util.hpp>

TEST(ioUtil, utcTimeString) {
  std::string s = stan::io::utc_time_string();
  EXPECT_TRUE(s.size() > 0);
}
