#include <stdexcept>
#include "reject/reject_transformed_parameters.hpp"
#include "reject/reject_helper.hpp"
#include <gtest/gtest.h>

// test reject() throws from transformed parameters
TEST(StanCommon, rejectFuncCallTransformedParameters1) {
  typedef 
    reject_transformed_parameters_model_namespace
    ::reject_transformed_parameters_model
    model_t;
  reject_test<model_t,std::domain_error>("user-specified rejection", "6");
}
