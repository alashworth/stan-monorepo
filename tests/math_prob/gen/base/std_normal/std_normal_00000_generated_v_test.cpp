#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <std_normal/std_normal_test.hpp>

typedef boost::mpl::vector<double, empty, empty, empty, empty, empty> type_v_0;
typedef boost::mpl::vector<std::vector<double>, empty, empty, empty, empty, empty> type_v_1;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty, empty> type_v_2;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty, empty> type_v_3;
typedef boost::mpl::vector<var, empty, empty, empty, empty, empty> type_v_4;
typedef boost::mpl::vector<std::vector<var>, empty, empty, empty, empty, empty> type_v_5;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty, empty> type_v_6;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty, empty> type_v_7;

typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_0> AgradDistributionStdNormal_v_0;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_1> AgradDistributionStdNormal_v_1;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_2> AgradDistributionStdNormal_v_2;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_3> AgradDistributionStdNormal_v_3;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_4> AgradDistributionStdNormal_v_4;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_5> AgradDistributionStdNormal_v_5;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_6> AgradDistributionStdNormal_v_6;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_v_7> AgradDistributionStdNormal_v_7;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_0, AgradDistributionTestFixture, AgradDistributionStdNormal_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_1, AgradDistributionTestFixture, AgradDistributionStdNormal_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_2, AgradDistributionTestFixture, AgradDistributionStdNormal_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_3, AgradDistributionTestFixture, AgradDistributionStdNormal_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_4, AgradDistributionTestFixture, AgradDistributionStdNormal_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_5, AgradDistributionTestFixture, AgradDistributionStdNormal_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_6, AgradDistributionTestFixture, AgradDistributionStdNormal_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_v_7, AgradDistributionTestFixture, AgradDistributionStdNormal_v_7);

