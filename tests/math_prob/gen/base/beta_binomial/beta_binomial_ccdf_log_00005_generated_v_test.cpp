#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <beta_binomial/beta_binomial_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1000> AgradCcdfLogBetaBinomial_v_1000;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1001> AgradCcdfLogBetaBinomial_v_1001;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1002> AgradCcdfLogBetaBinomial_v_1002;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1003> AgradCcdfLogBetaBinomial_v_1003;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1004> AgradCcdfLogBetaBinomial_v_1004;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1005> AgradCcdfLogBetaBinomial_v_1005;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1006> AgradCcdfLogBetaBinomial_v_1006;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1007> AgradCcdfLogBetaBinomial_v_1007;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1008> AgradCcdfLogBetaBinomial_v_1008;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1009> AgradCcdfLogBetaBinomial_v_1009;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1010> AgradCcdfLogBetaBinomial_v_1010;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1011> AgradCcdfLogBetaBinomial_v_1011;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1012> AgradCcdfLogBetaBinomial_v_1012;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1013> AgradCcdfLogBetaBinomial_v_1013;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1014> AgradCcdfLogBetaBinomial_v_1014;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1015> AgradCcdfLogBetaBinomial_v_1015;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1016> AgradCcdfLogBetaBinomial_v_1016;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1017> AgradCcdfLogBetaBinomial_v_1017;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1018> AgradCcdfLogBetaBinomial_v_1018;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1019> AgradCcdfLogBetaBinomial_v_1019;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1020> AgradCcdfLogBetaBinomial_v_1020;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1021> AgradCcdfLogBetaBinomial_v_1021;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1022> AgradCcdfLogBetaBinomial_v_1022;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_1023> AgradCcdfLogBetaBinomial_v_1023;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1000, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1001, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1002, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1003, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1004, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1005, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1006, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1007, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1008, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1009, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1010, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1011, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1012, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1013, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1014, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1015, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1016, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1017, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1018, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1019, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1020, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1021, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1022, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_1023, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_1023);

