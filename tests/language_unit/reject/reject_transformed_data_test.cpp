#include <stdexcept>
#include "reject/reject_transformed_data.hpp"
#include "reject/reject_helper.hpp"
#include <gtest/gtest.h>

// test that reject() throws excception in transformed data
TEST(StanCommon, rejectTransformedData) {
 typedef 
   reject_transformed_data_model_namespace
   ::reject_transformed_data_model
   model_t;
  reject_test<model_t,std::domain_error>("user-specified rejection", "3");
}
