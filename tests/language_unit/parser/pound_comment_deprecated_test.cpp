#include <gtest/gtest.h>
#include "utility.hpp"

TEST(langParser, poundCommentDeprecated) {
  test_warning("pound-comment-deprecated",
               "Comments beginning with # are deprecated."
               "  Please use //");
}

