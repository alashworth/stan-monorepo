#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsGamma, type_v_500> AgradDistributionsGamma_v_500;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_501> AgradDistributionsGamma_v_501;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_502> AgradDistributionsGamma_v_502;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_503> AgradDistributionsGamma_v_503;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_504> AgradDistributionsGamma_v_504;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_505> AgradDistributionsGamma_v_505;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_506> AgradDistributionsGamma_v_506;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_507> AgradDistributionsGamma_v_507;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_508> AgradDistributionsGamma_v_508;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_509> AgradDistributionsGamma_v_509;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_510> AgradDistributionsGamma_v_510;
typedef boost::mpl::vector<AgradDistributionsGamma, type_v_511> AgradDistributionsGamma_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_500, AgradDistributionTestFixture, AgradDistributionsGamma_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_501, AgradDistributionTestFixture, AgradDistributionsGamma_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_502, AgradDistributionTestFixture, AgradDistributionsGamma_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_503, AgradDistributionTestFixture, AgradDistributionsGamma_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_504, AgradDistributionTestFixture, AgradDistributionsGamma_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_505, AgradDistributionTestFixture, AgradDistributionsGamma_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_506, AgradDistributionTestFixture, AgradDistributionsGamma_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_507, AgradDistributionTestFixture, AgradDistributionsGamma_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_508, AgradDistributionTestFixture, AgradDistributionsGamma_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_509, AgradDistributionTestFixture, AgradDistributionsGamma_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_510, AgradDistributionTestFixture, AgradDistributionsGamma_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_v_511, AgradDistributionTestFixture, AgradDistributionsGamma_v_511);

