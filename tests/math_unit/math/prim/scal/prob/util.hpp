#ifndef TEST_UNIT_MATH_PRIM_SCAL_PROB_HPP
#define TEST_UNIT_MATH_PRIM_SCAL_PROB_HPP

#include <vector>

/**
 * Uses a chi-squared test to assert that a vector of observed counts
 * is consistent with a vector of expected counts. Useful for testing RNGs.
 */
void assert_chi_squared(const std::vector<int>& counts,
                        const std::vector<double>& expected, double tolerance);

/**
 * Like assert_matches_quantiles, but the bins are not necessarily
 * equiprobable. Assert that approximately proportions[i] of the
 * samples are in bin i, which has lower bound bin_boundaries[i-1] and
 * upper bound bin_boundaries[i], using a chi-squared goodness of fit
 * test. bin_boundaries is assumed sorted in increasing order.
 **/
void assert_matches_bins(const std::vector<double>& samples,
                         const std::vector<double>& bin_boundaries,
                         const std::vector<double>& proportions,
                         double tolerance);

/**
 * From a collection of samples and a list of quantiles, assumed
 * ordered, assert that the samples resemble draws from a distribution
 * with those quantiles, using a chi_squared goodness of fit
 * test. That is, assert that the samples are approximately evenly
 * distributed among the quantiles.size() equiprobable bins, who's
 * upper bounds are given in quantiles in increasing order.
 */
void assert_matches_quantiles(const std::vector<double>& samples,
                              const std::vector<double>& quantiles,
                              double tolerance);
#endif
