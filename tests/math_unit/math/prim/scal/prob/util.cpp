#include "util.hpp"
#include <gtest/gtest.h>
#include <boost/math/distributions.hpp>
#include <algorithm>

void assert_chi_squared(const std::vector<int>& counts,
                        const std::vector<double>& expected, double tolerance) {
  int bins = counts.size();
  EXPECT_EQ(bins, expected.size());

  double chi = 0;
  for (int i = 0; i < bins; ++i) {
    double discrepancy = expected[i] - counts[i];
    chi += discrepancy * discrepancy / expected[i];
  }
  boost::math::chi_squared dist(bins - 1);
  double chi_threshold = quantile(complement(dist, tolerance));

  EXPECT_TRUE(chi < chi_threshold);
}
void assert_matches_bins(const std::vector<double>& samples,
                         const std::vector<double>& bin_boundaries,
                         const std::vector<double>& proportions,
                         double tolerance) {
  ASSERT_GT(samples.size(), 0);
  int N = samples.size();
  std::vector<double> mysamples = samples;
  std::sort(mysamples.begin(), mysamples.end());

  ASSERT_GT(bin_boundaries.size(), 0);
  ASSERT_TRUE(bin_boundaries.size() == proportions.size());
  int K = bin_boundaries.size();
  std::vector<double> expected;
  for (int i = 0; i < K; i++) {
    ASSERT_TRUE(proportions[i] >= 0 && proportions[i] <= 1);
    expected.push_back(proportions[i] * N);
  }

  std::vector<int> counts(K);
  size_t current_index = 0;
  for (int i = 0; i < N; ++i) {
    while (mysamples[i] >= bin_boundaries[current_index]) {
      ++current_index;
      EXPECT_TRUE(current_index < bin_boundaries.size());
    }
    ++counts[current_index];
  }
  assert_chi_squared(counts, expected, tolerance);
}
void assert_matches_quantiles(const std::vector<double>& samples,
                              const std::vector<double>& quantiles,
                              double tolerance) {
  int K = quantiles.size();
  std::vector<double> proportions;
  for (int i = 0; i < K; ++i)
    proportions.push_back(1.0 / K);

  assert_matches_bins(samples, quantiles, proportions, tolerance);
}
