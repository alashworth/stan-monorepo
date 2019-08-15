#include "generator/multidim_var_data_ar45_mat23.hpp"
#include <gtest/gtest.h>
#include "util.hpp"
#include <string>
#include <iostream>

//  TODO:morris run model on good/bad input data: src/test/test-models/good/parser-generator/multidim_var_data_ar45_mat23 + data file

typedef multidim_var_data_ar45_mat23_model_namespace::multidim_var_data_ar45_mat23_model stan_model;

TEST(lang, multidim_data_good) {
  std::stringstream out;
  // Create mock data_var_context
  std::fstream data_stream(TEST_MODEL_DIR + "/good/parser-generator/multidim_var_data_ar45_mat23_good.data.R",
                           std::fstream::in);
  stan::io::dump data_var_context(data_stream);
  data_stream.close();

  // Instantiate model
  try {
    stan_model my_model(data_var_context, &out);
  } catch (std::exception& e) {
    FAIL();
  }
}

TEST(lang, multidim_data_bad) {
  std::stringstream out;
  // Create mock data_var_context
  std::fstream data_stream(TEST_MODEL_DIR + "/good/parser-generator/multidim_var_data_ar45_mat23_bad.data.R",
                           std::fstream::in);
  stan::io::dump data_var_context(data_stream);
  data_stream.close();

  // Instantiate model
  try {
    stan_model my_model(data_var_context, &out);
  } catch (std::exception& e) {
    EXPECT_EQ(1, count_matches("is 9.95238, but must be less than or equal to 1  (in 'src/test/test-models/good/parser-generator/multidim_var_data_ar45_mat23.stan' at line 2)",
                               e.what()));
    SUCCEED();
    return;
  }
  FAIL();
}
