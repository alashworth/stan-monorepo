#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_0> AgradCcdfLogPoisson_v_0;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_1> AgradCcdfLogPoisson_v_1;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_2> AgradCcdfLogPoisson_v_2;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_3> AgradCcdfLogPoisson_v_3;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_4> AgradCcdfLogPoisson_v_4;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_5> AgradCcdfLogPoisson_v_5;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_6> AgradCcdfLogPoisson_v_6;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_7> AgradCcdfLogPoisson_v_7;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_8> AgradCcdfLogPoisson_v_8;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_9> AgradCcdfLogPoisson_v_9;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_10> AgradCcdfLogPoisson_v_10;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_11> AgradCcdfLogPoisson_v_11;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_12> AgradCcdfLogPoisson_v_12;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_13> AgradCcdfLogPoisson_v_13;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_14> AgradCcdfLogPoisson_v_14;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_15> AgradCcdfLogPoisson_v_15;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_16> AgradCcdfLogPoisson_v_16;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_17> AgradCcdfLogPoisson_v_17;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_18> AgradCcdfLogPoisson_v_18;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_19> AgradCcdfLogPoisson_v_19;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_20> AgradCcdfLogPoisson_v_20;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_21> AgradCcdfLogPoisson_v_21;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_22> AgradCcdfLogPoisson_v_22;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_23> AgradCcdfLogPoisson_v_23;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_24> AgradCcdfLogPoisson_v_24;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_25> AgradCcdfLogPoisson_v_25;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_26> AgradCcdfLogPoisson_v_26;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_27> AgradCcdfLogPoisson_v_27;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_28> AgradCcdfLogPoisson_v_28;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_29> AgradCcdfLogPoisson_v_29;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_30> AgradCcdfLogPoisson_v_30;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_v_31> AgradCcdfLogPoisson_v_31;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_0, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_1, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_2, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_3, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_4, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_5, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_6, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_7, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_8, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_9, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_10, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_11, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_12, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_13, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_14, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_15, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_16, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_17, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_18, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_19, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_20, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_21, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_22, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_23, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_24, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_25, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_26, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_27, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_28, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_29, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_30, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_v_31, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_v_31);

