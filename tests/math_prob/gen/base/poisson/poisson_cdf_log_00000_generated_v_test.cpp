#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_0> AgradCdfLogPoisson_v_0;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_1> AgradCdfLogPoisson_v_1;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_2> AgradCdfLogPoisson_v_2;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_3> AgradCdfLogPoisson_v_3;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_4> AgradCdfLogPoisson_v_4;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_5> AgradCdfLogPoisson_v_5;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_6> AgradCdfLogPoisson_v_6;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_7> AgradCdfLogPoisson_v_7;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_8> AgradCdfLogPoisson_v_8;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_9> AgradCdfLogPoisson_v_9;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_10> AgradCdfLogPoisson_v_10;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_11> AgradCdfLogPoisson_v_11;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_12> AgradCdfLogPoisson_v_12;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_13> AgradCdfLogPoisson_v_13;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_14> AgradCdfLogPoisson_v_14;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_15> AgradCdfLogPoisson_v_15;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_16> AgradCdfLogPoisson_v_16;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_17> AgradCdfLogPoisson_v_17;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_18> AgradCdfLogPoisson_v_18;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_19> AgradCdfLogPoisson_v_19;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_20> AgradCdfLogPoisson_v_20;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_21> AgradCdfLogPoisson_v_21;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_22> AgradCdfLogPoisson_v_22;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_23> AgradCdfLogPoisson_v_23;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_24> AgradCdfLogPoisson_v_24;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_25> AgradCdfLogPoisson_v_25;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_26> AgradCdfLogPoisson_v_26;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_27> AgradCdfLogPoisson_v_27;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_28> AgradCdfLogPoisson_v_28;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_29> AgradCdfLogPoisson_v_29;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_30> AgradCdfLogPoisson_v_30;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_v_31> AgradCdfLogPoisson_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_0, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_1, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_2, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_3, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_4, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_5, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_6, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_7, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_8, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_9, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_10, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_11, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_12, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_13, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_14, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_15, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_16, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_17, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_18, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_19, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_20, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_21, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_22, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_23, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_24, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_25, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_26, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_27, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_28, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_29, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_30, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_v_31, AgradCdfLogTestFixture, AgradCdfLogPoisson_v_31);

