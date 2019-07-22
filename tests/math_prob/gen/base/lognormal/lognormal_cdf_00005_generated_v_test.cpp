#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/lognormal/lognormal_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLognormal, type_v_500> AgradCdfLognormal_v_500;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_501> AgradCdfLognormal_v_501;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_502> AgradCdfLognormal_v_502;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_503> AgradCdfLognormal_v_503;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_504> AgradCdfLognormal_v_504;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_505> AgradCdfLognormal_v_505;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_506> AgradCdfLognormal_v_506;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_507> AgradCdfLognormal_v_507;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_508> AgradCdfLognormal_v_508;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_509> AgradCdfLognormal_v_509;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_510> AgradCdfLognormal_v_510;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_511> AgradCdfLognormal_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_500, AgradCdfTestFixture, AgradCdfLognormal_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_501, AgradCdfTestFixture, AgradCdfLognormal_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_502, AgradCdfTestFixture, AgradCdfLognormal_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_503, AgradCdfTestFixture, AgradCdfLognormal_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_504, AgradCdfTestFixture, AgradCdfLognormal_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_505, AgradCdfTestFixture, AgradCdfLognormal_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_506, AgradCdfTestFixture, AgradCdfLognormal_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_507, AgradCdfTestFixture, AgradCdfLognormal_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_508, AgradCdfTestFixture, AgradCdfLognormal_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_509, AgradCdfTestFixture, AgradCdfLognormal_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_510, AgradCdfTestFixture, AgradCdfLognormal_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_511, AgradCdfTestFixture, AgradCdfLognormal_v_511);

