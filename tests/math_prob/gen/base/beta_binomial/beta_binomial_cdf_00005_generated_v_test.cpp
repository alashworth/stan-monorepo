#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <beta_binomial/beta_binomial_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1000> AgradCdfBetaBinomial_v_1000;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1001> AgradCdfBetaBinomial_v_1001;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1002> AgradCdfBetaBinomial_v_1002;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1003> AgradCdfBetaBinomial_v_1003;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1004> AgradCdfBetaBinomial_v_1004;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1005> AgradCdfBetaBinomial_v_1005;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1006> AgradCdfBetaBinomial_v_1006;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1007> AgradCdfBetaBinomial_v_1007;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1008> AgradCdfBetaBinomial_v_1008;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1009> AgradCdfBetaBinomial_v_1009;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1010> AgradCdfBetaBinomial_v_1010;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1011> AgradCdfBetaBinomial_v_1011;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1012> AgradCdfBetaBinomial_v_1012;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1013> AgradCdfBetaBinomial_v_1013;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1014> AgradCdfBetaBinomial_v_1014;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1015> AgradCdfBetaBinomial_v_1015;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1016> AgradCdfBetaBinomial_v_1016;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1017> AgradCdfBetaBinomial_v_1017;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1018> AgradCdfBetaBinomial_v_1018;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1019> AgradCdfBetaBinomial_v_1019;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1020> AgradCdfBetaBinomial_v_1020;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1021> AgradCdfBetaBinomial_v_1021;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1022> AgradCdfBetaBinomial_v_1022;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_v_1023> AgradCdfBetaBinomial_v_1023;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1000, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1001, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1002, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1003, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1004, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1005, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1006, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1007, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1008, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1009, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1010, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1011, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1012, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1013, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1014, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1015, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1016, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1017, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1018, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1019, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1020, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1021, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1022, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_v_1023, AgradCdfTestFixture, AgradCdfBetaBinomial_v_1023);

