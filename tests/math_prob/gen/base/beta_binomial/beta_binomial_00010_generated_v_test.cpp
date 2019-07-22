#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty> type_v_1000;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty> type_v_1001;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_1002;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_1003;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty> type_v_1004;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty> type_v_1005;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_1006;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_1007;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_1008;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_1009;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_1010;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_1011;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_1012;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_1013;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_1014;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_1015;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_1016;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_1017;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_1018;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_1019;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_1020;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_1021;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_1022;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_1023;

typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1000> AgradDistributionsBetaBinomial_v_1000;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1001> AgradDistributionsBetaBinomial_v_1001;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1002> AgradDistributionsBetaBinomial_v_1002;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1003> AgradDistributionsBetaBinomial_v_1003;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1004> AgradDistributionsBetaBinomial_v_1004;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1005> AgradDistributionsBetaBinomial_v_1005;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1006> AgradDistributionsBetaBinomial_v_1006;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1007> AgradDistributionsBetaBinomial_v_1007;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1008> AgradDistributionsBetaBinomial_v_1008;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1009> AgradDistributionsBetaBinomial_v_1009;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1010> AgradDistributionsBetaBinomial_v_1010;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1011> AgradDistributionsBetaBinomial_v_1011;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1012> AgradDistributionsBetaBinomial_v_1012;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1013> AgradDistributionsBetaBinomial_v_1013;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1014> AgradDistributionsBetaBinomial_v_1014;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1015> AgradDistributionsBetaBinomial_v_1015;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1016> AgradDistributionsBetaBinomial_v_1016;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1017> AgradDistributionsBetaBinomial_v_1017;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1018> AgradDistributionsBetaBinomial_v_1018;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1019> AgradDistributionsBetaBinomial_v_1019;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1020> AgradDistributionsBetaBinomial_v_1020;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1021> AgradDistributionsBetaBinomial_v_1021;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1022> AgradDistributionsBetaBinomial_v_1022;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_v_1023> AgradDistributionsBetaBinomial_v_1023;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1000, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1001, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1002, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1003, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1004, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1005, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1006, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1007, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1008, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1009, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1010, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1011, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1012, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1013, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1014, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1015, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1016, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1017, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1018, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1019, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1020, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1021, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1022, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_v_1023, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_v_1023);

