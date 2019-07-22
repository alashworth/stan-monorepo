#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_500;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_501;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_502;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_503;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_504;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_505;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_506;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_507;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_508;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_509;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_510;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_511;

typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_500> AgradDistributionsInvGamma_v_500;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_501> AgradDistributionsInvGamma_v_501;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_502> AgradDistributionsInvGamma_v_502;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_503> AgradDistributionsInvGamma_v_503;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_504> AgradDistributionsInvGamma_v_504;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_505> AgradDistributionsInvGamma_v_505;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_506> AgradDistributionsInvGamma_v_506;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_507> AgradDistributionsInvGamma_v_507;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_508> AgradDistributionsInvGamma_v_508;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_509> AgradDistributionsInvGamma_v_509;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_510> AgradDistributionsInvGamma_v_510;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_v_511> AgradDistributionsInvGamma_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_500, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_501, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_502, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_503, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_504, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_505, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_506, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_507, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_508, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_509, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_510, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_v_511, AgradDistributionTestFixture, AgradDistributionsInvGamma_v_511);

