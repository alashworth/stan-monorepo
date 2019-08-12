#ifndef TEST__UNIT__CHECK_ADAPTATION_HPP
#define TEST__UNIT__CHECK_ADAPTATION_HPP

#include "instrumented_callbacks.hpp"
#include <gtest/gtest.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

namespace stan {
  namespace test {
    namespace unit {

      double stod(const std::string& val);
        
      void check_adaptation(const size_t& num_params,
                            const std::vector<double>& param_vals,
                            stan::test::unit::instrumented_writer& report,
                            const double& err_margin);

      void check_adaptation(const size_t& num_rows, const size_t& num_cols,
                            const std::vector<double>& param_vals,
                            stan::test::unit::instrumented_writer& report,
                            const double& err_margin);

      void check_different(const size_t& num_params,
                           const std::vector<double>& param_vals,
                           stan::test::unit::instrumented_writer& report,
                            const double& margin);

      void check_different(const size_t& num_rows, const size_t& num_cols,
                           const std::vector<double>& param_vals,
                           stan::test::unit::instrumented_writer& report,
                           const double& margin);

    }
  }
}

#endif
