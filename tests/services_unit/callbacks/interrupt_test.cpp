#include <gtest/gtest.h>
#include <stan/services/callbacks/interrupt.hpp>

TEST(StanCallbacks, op) {
  stan::callbacks::interrupt interrupt;

  EXPECT_NO_THROW(interrupt());
}
