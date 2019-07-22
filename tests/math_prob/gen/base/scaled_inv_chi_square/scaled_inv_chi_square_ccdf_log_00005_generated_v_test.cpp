#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/scaled_inv_chi_square/scaled_inv_chi_square_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_500> AgradCcdfLogScaledInvChiSquare_v_500;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_501> AgradCcdfLogScaledInvChiSquare_v_501;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_502> AgradCcdfLogScaledInvChiSquare_v_502;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_503> AgradCcdfLogScaledInvChiSquare_v_503;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_504> AgradCcdfLogScaledInvChiSquare_v_504;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_505> AgradCcdfLogScaledInvChiSquare_v_505;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_506> AgradCcdfLogScaledInvChiSquare_v_506;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_507> AgradCcdfLogScaledInvChiSquare_v_507;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_508> AgradCcdfLogScaledInvChiSquare_v_508;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_509> AgradCcdfLogScaledInvChiSquare_v_509;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_510> AgradCcdfLogScaledInvChiSquare_v_510;
typedef boost::mpl::vector<AgradCcdfLogScaledInvChiSquare, type_v_511> AgradCcdfLogScaledInvChiSquare_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_500, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_501, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_502, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_503, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_504, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_505, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_506, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_507, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_508, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_509, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_510, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogScaledInvChiSquare_v_511, AgradCcdfLogTestFixture, AgradCcdfLogScaledInvChiSquare_v_511);

