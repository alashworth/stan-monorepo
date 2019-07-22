#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <std_normal/std_normal_test.hpp>

typedef boost::mpl::vector<fvar<var>, empty, empty, empty, empty, empty> type_fv_0;
typedef boost::mpl::vector<std::vector<fvar<var>>, empty, empty, empty, empty, empty> type_fv_1;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty, empty> type_fv_2;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty, empty> type_fv_3;

typedef boost::mpl::vector<AgradDistributionStdNormal, type_fv_0> AgradDistributionStdNormal_fv_0;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_fv_1> AgradDistributionStdNormal_fv_1;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_fv_2> AgradDistributionStdNormal_fv_2;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_fv_3> AgradDistributionStdNormal_fv_3;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fv_0, AgradDistributionTestFixture, AgradDistributionStdNormal_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fv_1, AgradDistributionTestFixture, AgradDistributionStdNormal_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fv_2, AgradDistributionTestFixture, AgradDistributionStdNormal_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fv_3, AgradDistributionTestFixture, AgradDistributionStdNormal_fv_3);

