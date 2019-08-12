#include <stdexcept>
#include "reject/print_reject_function_gq.hpp"
#include "reject/reject_helper.hpp"

#include <gtest/gtest.h>


// test print statement captured before reject
// in generated quantities block through a function call
TEST(StanCommon, printRejectFuncGQ) {
  typedef 
    print_reject_function_gq_model_namespace
    ::print_reject_function_gq_model 
    model_t;
  print_reject_test<model_t, std::domain_error>("quitting time");
}
