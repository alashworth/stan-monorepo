#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfPoisson, type_v_0> AgradCdfPoisson_v_0;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_1> AgradCdfPoisson_v_1;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_2> AgradCdfPoisson_v_2;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_3> AgradCdfPoisson_v_3;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_4> AgradCdfPoisson_v_4;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_5> AgradCdfPoisson_v_5;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_6> AgradCdfPoisson_v_6;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_7> AgradCdfPoisson_v_7;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_8> AgradCdfPoisson_v_8;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_9> AgradCdfPoisson_v_9;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_10> AgradCdfPoisson_v_10;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_11> AgradCdfPoisson_v_11;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_12> AgradCdfPoisson_v_12;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_13> AgradCdfPoisson_v_13;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_14> AgradCdfPoisson_v_14;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_15> AgradCdfPoisson_v_15;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_16> AgradCdfPoisson_v_16;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_17> AgradCdfPoisson_v_17;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_18> AgradCdfPoisson_v_18;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_19> AgradCdfPoisson_v_19;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_20> AgradCdfPoisson_v_20;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_21> AgradCdfPoisson_v_21;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_22> AgradCdfPoisson_v_22;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_23> AgradCdfPoisson_v_23;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_24> AgradCdfPoisson_v_24;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_25> AgradCdfPoisson_v_25;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_26> AgradCdfPoisson_v_26;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_27> AgradCdfPoisson_v_27;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_28> AgradCdfPoisson_v_28;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_29> AgradCdfPoisson_v_29;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_30> AgradCdfPoisson_v_30;
typedef boost::mpl::vector<AgradCdfPoisson, type_v_31> AgradCdfPoisson_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_0, AgradCdfTestFixture, AgradCdfPoisson_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_1, AgradCdfTestFixture, AgradCdfPoisson_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_2, AgradCdfTestFixture, AgradCdfPoisson_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_3, AgradCdfTestFixture, AgradCdfPoisson_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_4, AgradCdfTestFixture, AgradCdfPoisson_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_5, AgradCdfTestFixture, AgradCdfPoisson_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_6, AgradCdfTestFixture, AgradCdfPoisson_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_7, AgradCdfTestFixture, AgradCdfPoisson_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_8, AgradCdfTestFixture, AgradCdfPoisson_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_9, AgradCdfTestFixture, AgradCdfPoisson_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_10, AgradCdfTestFixture, AgradCdfPoisson_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_11, AgradCdfTestFixture, AgradCdfPoisson_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_12, AgradCdfTestFixture, AgradCdfPoisson_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_13, AgradCdfTestFixture, AgradCdfPoisson_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_14, AgradCdfTestFixture, AgradCdfPoisson_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_15, AgradCdfTestFixture, AgradCdfPoisson_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_16, AgradCdfTestFixture, AgradCdfPoisson_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_17, AgradCdfTestFixture, AgradCdfPoisson_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_18, AgradCdfTestFixture, AgradCdfPoisson_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_19, AgradCdfTestFixture, AgradCdfPoisson_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_20, AgradCdfTestFixture, AgradCdfPoisson_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_21, AgradCdfTestFixture, AgradCdfPoisson_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_22, AgradCdfTestFixture, AgradCdfPoisson_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_23, AgradCdfTestFixture, AgradCdfPoisson_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_24, AgradCdfTestFixture, AgradCdfPoisson_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_25, AgradCdfTestFixture, AgradCdfPoisson_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_26, AgradCdfTestFixture, AgradCdfPoisson_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_27, AgradCdfTestFixture, AgradCdfPoisson_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_28, AgradCdfTestFixture, AgradCdfPoisson_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_29, AgradCdfTestFixture, AgradCdfPoisson_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_30, AgradCdfTestFixture, AgradCdfPoisson_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_v_31, AgradCdfTestFixture, AgradCdfPoisson_v_31);

