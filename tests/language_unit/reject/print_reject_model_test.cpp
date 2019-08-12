#include <stdexcept>
#include "reject/print_reject_model_block.hpp"
#include "reject/reject_helper.hpp"
#include <gtest/gtest.h>

TEST(StanCommon, printRejectModel) {
  typedef 
    print_reject_model_block_model_namespace::print_reject_model_block_model
    model_t;
  print_reject_test<model_t,std::domain_error>("quitting time");
}
