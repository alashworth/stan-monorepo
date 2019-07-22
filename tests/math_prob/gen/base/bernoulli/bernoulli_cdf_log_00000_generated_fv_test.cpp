#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_cdf_log_test.hpp>

typedef boost::mpl::vector<int, fvar<var>, empty, empty, empty, empty> type_fv_0;
typedef boost::mpl::vector<int, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_1;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_2;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_3;
typedef boost::mpl::vector<std::vector<int>, fvar<var>, empty, empty, empty, empty> type_fv_4;
typedef boost::mpl::vector<std::vector<int>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_5;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_6;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_7;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty, empty> type_fv_8;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_9;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_10;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_11;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty, empty> type_fv_12;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_13;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_14;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_15;

typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_0> AgradCdfLogBernoulli_fv_0;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_1> AgradCdfLogBernoulli_fv_1;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_2> AgradCdfLogBernoulli_fv_2;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_3> AgradCdfLogBernoulli_fv_3;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_4> AgradCdfLogBernoulli_fv_4;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_5> AgradCdfLogBernoulli_fv_5;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_6> AgradCdfLogBernoulli_fv_6;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_7> AgradCdfLogBernoulli_fv_7;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_8> AgradCdfLogBernoulli_fv_8;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_9> AgradCdfLogBernoulli_fv_9;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_10> AgradCdfLogBernoulli_fv_10;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_11> AgradCdfLogBernoulli_fv_11;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_12> AgradCdfLogBernoulli_fv_12;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_13> AgradCdfLogBernoulli_fv_13;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_14> AgradCdfLogBernoulli_fv_14;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_fv_15> AgradCdfLogBernoulli_fv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_0, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_1, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_2, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_3, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_4, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_5, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_6, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_7, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_8, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_9, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_10, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_11, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_12, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_13, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_14, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_fv_15, AgradCdfLogTestFixture, AgradCdfLogBernoulli_fv_15);

