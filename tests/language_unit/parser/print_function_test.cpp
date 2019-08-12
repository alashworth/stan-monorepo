#include <gtest/gtest.h>
#include "utility.hpp"

TEST(langParser, printVoidBad) {
  test_throws("print-void", 
              "Error: expected printable (non-void) expression.");
}
