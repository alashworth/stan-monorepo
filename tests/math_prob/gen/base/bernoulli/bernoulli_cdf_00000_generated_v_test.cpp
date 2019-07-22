#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBernoulli, type_v_0> AgradCdfBernoulli_v_0;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_1> AgradCdfBernoulli_v_1;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_2> AgradCdfBernoulli_v_2;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_3> AgradCdfBernoulli_v_3;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_4> AgradCdfBernoulli_v_4;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_5> AgradCdfBernoulli_v_5;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_6> AgradCdfBernoulli_v_6;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_7> AgradCdfBernoulli_v_7;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_8> AgradCdfBernoulli_v_8;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_9> AgradCdfBernoulli_v_9;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_10> AgradCdfBernoulli_v_10;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_11> AgradCdfBernoulli_v_11;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_12> AgradCdfBernoulli_v_12;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_13> AgradCdfBernoulli_v_13;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_14> AgradCdfBernoulli_v_14;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_15> AgradCdfBernoulli_v_15;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_16> AgradCdfBernoulli_v_16;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_17> AgradCdfBernoulli_v_17;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_18> AgradCdfBernoulli_v_18;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_19> AgradCdfBernoulli_v_19;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_20> AgradCdfBernoulli_v_20;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_21> AgradCdfBernoulli_v_21;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_22> AgradCdfBernoulli_v_22;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_23> AgradCdfBernoulli_v_23;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_24> AgradCdfBernoulli_v_24;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_25> AgradCdfBernoulli_v_25;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_26> AgradCdfBernoulli_v_26;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_27> AgradCdfBernoulli_v_27;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_28> AgradCdfBernoulli_v_28;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_29> AgradCdfBernoulli_v_29;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_30> AgradCdfBernoulli_v_30;
typedef boost::mpl::vector<AgradCdfBernoulli, type_v_31> AgradCdfBernoulli_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_0, AgradCdfTestFixture, AgradCdfBernoulli_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_1, AgradCdfTestFixture, AgradCdfBernoulli_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_2, AgradCdfTestFixture, AgradCdfBernoulli_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_3, AgradCdfTestFixture, AgradCdfBernoulli_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_4, AgradCdfTestFixture, AgradCdfBernoulli_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_5, AgradCdfTestFixture, AgradCdfBernoulli_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_6, AgradCdfTestFixture, AgradCdfBernoulli_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_7, AgradCdfTestFixture, AgradCdfBernoulli_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_8, AgradCdfTestFixture, AgradCdfBernoulli_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_9, AgradCdfTestFixture, AgradCdfBernoulli_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_10, AgradCdfTestFixture, AgradCdfBernoulli_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_11, AgradCdfTestFixture, AgradCdfBernoulli_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_12, AgradCdfTestFixture, AgradCdfBernoulli_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_13, AgradCdfTestFixture, AgradCdfBernoulli_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_14, AgradCdfTestFixture, AgradCdfBernoulli_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_15, AgradCdfTestFixture, AgradCdfBernoulli_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_16, AgradCdfTestFixture, AgradCdfBernoulli_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_17, AgradCdfTestFixture, AgradCdfBernoulli_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_18, AgradCdfTestFixture, AgradCdfBernoulli_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_19, AgradCdfTestFixture, AgradCdfBernoulli_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_20, AgradCdfTestFixture, AgradCdfBernoulli_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_21, AgradCdfTestFixture, AgradCdfBernoulli_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_22, AgradCdfTestFixture, AgradCdfBernoulli_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_23, AgradCdfTestFixture, AgradCdfBernoulli_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_24, AgradCdfTestFixture, AgradCdfBernoulli_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_25, AgradCdfTestFixture, AgradCdfBernoulli_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_26, AgradCdfTestFixture, AgradCdfBernoulli_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_27, AgradCdfTestFixture, AgradCdfBernoulli_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_28, AgradCdfTestFixture, AgradCdfBernoulli_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_29, AgradCdfTestFixture, AgradCdfBernoulli_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_30, AgradCdfTestFixture, AgradCdfBernoulli_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_v_31, AgradCdfTestFixture, AgradCdfBernoulli_v_31);

