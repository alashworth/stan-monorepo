#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_cdf_log_test.hpp>

typedef boost::mpl::vector<int, double, empty, empty, empty, empty> type_v_0;
typedef boost::mpl::vector<int, std::vector<double>, empty, empty, empty, empty> type_v_1;
typedef boost::mpl::vector<int, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_2;
typedef boost::mpl::vector<int, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_3;
typedef boost::mpl::vector<int, var, empty, empty, empty, empty> type_v_4;
typedef boost::mpl::vector<int, std::vector<var>, empty, empty, empty, empty> type_v_5;
typedef boost::mpl::vector<int, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_6;
typedef boost::mpl::vector<int, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_7;
typedef boost::mpl::vector<std::vector<int>, double, empty, empty, empty, empty> type_v_8;
typedef boost::mpl::vector<std::vector<int>, std::vector<double>, empty, empty, empty, empty> type_v_9;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_10;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_11;
typedef boost::mpl::vector<std::vector<int>, var, empty, empty, empty, empty> type_v_12;
typedef boost::mpl::vector<std::vector<int>, std::vector<var>, empty, empty, empty, empty> type_v_13;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_14;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_15;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, double, empty, empty, empty, empty> type_v_16;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty, empty> type_v_17;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_18;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_19;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, var, empty, empty, empty, empty> type_v_20;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty, empty> type_v_21;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_22;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_23;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, double, empty, empty, empty, empty> type_v_24;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty, empty> type_v_25;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_26;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_27;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, empty, empty, empty, empty> type_v_28;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty, empty> type_v_29;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_30;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_31;

typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_0> AgradCdfLogBernoulli_v_0;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_1> AgradCdfLogBernoulli_v_1;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_2> AgradCdfLogBernoulli_v_2;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_3> AgradCdfLogBernoulli_v_3;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_4> AgradCdfLogBernoulli_v_4;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_5> AgradCdfLogBernoulli_v_5;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_6> AgradCdfLogBernoulli_v_6;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_7> AgradCdfLogBernoulli_v_7;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_8> AgradCdfLogBernoulli_v_8;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_9> AgradCdfLogBernoulli_v_9;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_10> AgradCdfLogBernoulli_v_10;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_11> AgradCdfLogBernoulli_v_11;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_12> AgradCdfLogBernoulli_v_12;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_13> AgradCdfLogBernoulli_v_13;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_14> AgradCdfLogBernoulli_v_14;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_15> AgradCdfLogBernoulli_v_15;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_16> AgradCdfLogBernoulli_v_16;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_17> AgradCdfLogBernoulli_v_17;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_18> AgradCdfLogBernoulli_v_18;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_19> AgradCdfLogBernoulli_v_19;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_20> AgradCdfLogBernoulli_v_20;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_21> AgradCdfLogBernoulli_v_21;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_22> AgradCdfLogBernoulli_v_22;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_23> AgradCdfLogBernoulli_v_23;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_24> AgradCdfLogBernoulli_v_24;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_25> AgradCdfLogBernoulli_v_25;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_26> AgradCdfLogBernoulli_v_26;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_27> AgradCdfLogBernoulli_v_27;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_28> AgradCdfLogBernoulli_v_28;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_29> AgradCdfLogBernoulli_v_29;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_30> AgradCdfLogBernoulli_v_30;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_v_31> AgradCdfLogBernoulli_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_0, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_1, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_2, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_3, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_4, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_5, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_6, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_7, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_8, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_9, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_10, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_11, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_12, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_13, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_14, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_15, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_16, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_17, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_18, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_19, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_20, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_21, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_22, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_23, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_24, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_25, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_26, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_27, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_28, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_29, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_30, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_v_31, AgradCdfLogTestFixture, AgradCdfLogBernoulli_v_31);

