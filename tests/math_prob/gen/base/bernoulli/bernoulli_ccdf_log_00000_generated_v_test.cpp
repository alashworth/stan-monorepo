#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_0> AgradCcdfLogBernoulli_v_0;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_1> AgradCcdfLogBernoulli_v_1;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_2> AgradCcdfLogBernoulli_v_2;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_3> AgradCcdfLogBernoulli_v_3;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_4> AgradCcdfLogBernoulli_v_4;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_5> AgradCcdfLogBernoulli_v_5;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_6> AgradCcdfLogBernoulli_v_6;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_7> AgradCcdfLogBernoulli_v_7;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_8> AgradCcdfLogBernoulli_v_8;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_9> AgradCcdfLogBernoulli_v_9;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_10> AgradCcdfLogBernoulli_v_10;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_11> AgradCcdfLogBernoulli_v_11;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_12> AgradCcdfLogBernoulli_v_12;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_13> AgradCcdfLogBernoulli_v_13;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_14> AgradCcdfLogBernoulli_v_14;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_15> AgradCcdfLogBernoulli_v_15;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_16> AgradCcdfLogBernoulli_v_16;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_17> AgradCcdfLogBernoulli_v_17;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_18> AgradCcdfLogBernoulli_v_18;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_19> AgradCcdfLogBernoulli_v_19;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_20> AgradCcdfLogBernoulli_v_20;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_21> AgradCcdfLogBernoulli_v_21;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_22> AgradCcdfLogBernoulli_v_22;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_23> AgradCcdfLogBernoulli_v_23;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_24> AgradCcdfLogBernoulli_v_24;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_25> AgradCcdfLogBernoulli_v_25;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_26> AgradCcdfLogBernoulli_v_26;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_27> AgradCcdfLogBernoulli_v_27;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_28> AgradCcdfLogBernoulli_v_28;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_29> AgradCcdfLogBernoulli_v_29;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_30> AgradCcdfLogBernoulli_v_30;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_v_31> AgradCcdfLogBernoulli_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_0, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_1, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_2, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_3, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_4, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_5, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_6, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_7, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_8, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_9, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_10, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_11, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_12, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_13, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_14, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_15, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_16, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_17, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_18, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_19, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_20, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_21, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_22, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_23, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_24, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_25, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_26, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_27, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_28, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_29, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_30, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_v_31, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_v_31);

