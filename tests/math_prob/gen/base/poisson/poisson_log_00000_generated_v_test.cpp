#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_log_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_0> AgradDistributionsPoisson_v_0;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_1> AgradDistributionsPoisson_v_1;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_2> AgradDistributionsPoisson_v_2;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_3> AgradDistributionsPoisson_v_3;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_4> AgradDistributionsPoisson_v_4;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_5> AgradDistributionsPoisson_v_5;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_6> AgradDistributionsPoisson_v_6;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_7> AgradDistributionsPoisson_v_7;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_8> AgradDistributionsPoisson_v_8;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_9> AgradDistributionsPoisson_v_9;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_10> AgradDistributionsPoisson_v_10;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_11> AgradDistributionsPoisson_v_11;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_12> AgradDistributionsPoisson_v_12;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_13> AgradDistributionsPoisson_v_13;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_14> AgradDistributionsPoisson_v_14;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_15> AgradDistributionsPoisson_v_15;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_16> AgradDistributionsPoisson_v_16;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_17> AgradDistributionsPoisson_v_17;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_18> AgradDistributionsPoisson_v_18;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_19> AgradDistributionsPoisson_v_19;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_20> AgradDistributionsPoisson_v_20;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_21> AgradDistributionsPoisson_v_21;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_22> AgradDistributionsPoisson_v_22;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_23> AgradDistributionsPoisson_v_23;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_24> AgradDistributionsPoisson_v_24;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_25> AgradDistributionsPoisson_v_25;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_26> AgradDistributionsPoisson_v_26;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_27> AgradDistributionsPoisson_v_27;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_28> AgradDistributionsPoisson_v_28;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_29> AgradDistributionsPoisson_v_29;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_30> AgradDistributionsPoisson_v_30;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_v_31> AgradDistributionsPoisson_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_0, AgradDistributionTestFixture, AgradDistributionsPoisson_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_1, AgradDistributionTestFixture, AgradDistributionsPoisson_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_2, AgradDistributionTestFixture, AgradDistributionsPoisson_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_3, AgradDistributionTestFixture, AgradDistributionsPoisson_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_4, AgradDistributionTestFixture, AgradDistributionsPoisson_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_5, AgradDistributionTestFixture, AgradDistributionsPoisson_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_6, AgradDistributionTestFixture, AgradDistributionsPoisson_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_7, AgradDistributionTestFixture, AgradDistributionsPoisson_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_8, AgradDistributionTestFixture, AgradDistributionsPoisson_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_9, AgradDistributionTestFixture, AgradDistributionsPoisson_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_10, AgradDistributionTestFixture, AgradDistributionsPoisson_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_11, AgradDistributionTestFixture, AgradDistributionsPoisson_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_12, AgradDistributionTestFixture, AgradDistributionsPoisson_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_13, AgradDistributionTestFixture, AgradDistributionsPoisson_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_14, AgradDistributionTestFixture, AgradDistributionsPoisson_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_15, AgradDistributionTestFixture, AgradDistributionsPoisson_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_16, AgradDistributionTestFixture, AgradDistributionsPoisson_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_17, AgradDistributionTestFixture, AgradDistributionsPoisson_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_18, AgradDistributionTestFixture, AgradDistributionsPoisson_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_19, AgradDistributionTestFixture, AgradDistributionsPoisson_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_20, AgradDistributionTestFixture, AgradDistributionsPoisson_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_21, AgradDistributionTestFixture, AgradDistributionsPoisson_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_22, AgradDistributionTestFixture, AgradDistributionsPoisson_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_23, AgradDistributionTestFixture, AgradDistributionsPoisson_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_24, AgradDistributionTestFixture, AgradDistributionsPoisson_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_25, AgradDistributionTestFixture, AgradDistributionsPoisson_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_26, AgradDistributionTestFixture, AgradDistributionsPoisson_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_27, AgradDistributionTestFixture, AgradDistributionsPoisson_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_28, AgradDistributionTestFixture, AgradDistributionsPoisson_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_29, AgradDistributionTestFixture, AgradDistributionsPoisson_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_30, AgradDistributionTestFixture, AgradDistributionsPoisson_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_v_31, AgradDistributionTestFixture, AgradDistributionsPoisson_v_31);

