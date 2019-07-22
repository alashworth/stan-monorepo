#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_logit_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_0> AgradDistributionsBernoulliLogistic_v_0;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_1> AgradDistributionsBernoulliLogistic_v_1;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_2> AgradDistributionsBernoulliLogistic_v_2;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_3> AgradDistributionsBernoulliLogistic_v_3;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_4> AgradDistributionsBernoulliLogistic_v_4;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_5> AgradDistributionsBernoulliLogistic_v_5;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_6> AgradDistributionsBernoulliLogistic_v_6;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_7> AgradDistributionsBernoulliLogistic_v_7;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_8> AgradDistributionsBernoulliLogistic_v_8;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_9> AgradDistributionsBernoulliLogistic_v_9;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_10> AgradDistributionsBernoulliLogistic_v_10;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_11> AgradDistributionsBernoulliLogistic_v_11;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_12> AgradDistributionsBernoulliLogistic_v_12;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_13> AgradDistributionsBernoulliLogistic_v_13;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_14> AgradDistributionsBernoulliLogistic_v_14;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_15> AgradDistributionsBernoulliLogistic_v_15;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_16> AgradDistributionsBernoulliLogistic_v_16;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_17> AgradDistributionsBernoulliLogistic_v_17;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_18> AgradDistributionsBernoulliLogistic_v_18;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_19> AgradDistributionsBernoulliLogistic_v_19;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_20> AgradDistributionsBernoulliLogistic_v_20;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_21> AgradDistributionsBernoulliLogistic_v_21;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_22> AgradDistributionsBernoulliLogistic_v_22;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_23> AgradDistributionsBernoulliLogistic_v_23;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_24> AgradDistributionsBernoulliLogistic_v_24;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_25> AgradDistributionsBernoulliLogistic_v_25;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_26> AgradDistributionsBernoulliLogistic_v_26;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_27> AgradDistributionsBernoulliLogistic_v_27;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_28> AgradDistributionsBernoulliLogistic_v_28;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_29> AgradDistributionsBernoulliLogistic_v_29;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_30> AgradDistributionsBernoulliLogistic_v_30;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_v_31> AgradDistributionsBernoulliLogistic_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_0, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_1, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_2, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_3, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_4, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_5, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_6, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_7, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_8, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_9, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_10, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_11, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_12, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_13, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_14, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_15, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_16, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_17, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_18, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_19, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_20, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_21, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_22, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_23, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_24, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_25, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_26, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_27, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_28, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_29, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_30, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_v_31, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_v_31);

