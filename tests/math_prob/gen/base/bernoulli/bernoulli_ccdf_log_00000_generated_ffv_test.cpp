#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_ccdf_log_test.hpp>

typedef boost::mpl::vector<int, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_0;
typedef boost::mpl::vector<int, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_1;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_2;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_3;
typedef boost::mpl::vector<std::vector<int>, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_4;
typedef boost::mpl::vector<std::vector<int>, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_5;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_6;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_7;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_8;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_9;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_10;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_11;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_12;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_13;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_14;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_15;

typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_0> AgradCcdfLogBernoulli_ffv_0;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_1> AgradCcdfLogBernoulli_ffv_1;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_2> AgradCcdfLogBernoulli_ffv_2;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_3> AgradCcdfLogBernoulli_ffv_3;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_4> AgradCcdfLogBernoulli_ffv_4;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_5> AgradCcdfLogBernoulli_ffv_5;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_6> AgradCcdfLogBernoulli_ffv_6;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_7> AgradCcdfLogBernoulli_ffv_7;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_8> AgradCcdfLogBernoulli_ffv_8;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_9> AgradCcdfLogBernoulli_ffv_9;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_10> AgradCcdfLogBernoulli_ffv_10;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_11> AgradCcdfLogBernoulli_ffv_11;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_12> AgradCcdfLogBernoulli_ffv_12;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_13> AgradCcdfLogBernoulli_ffv_13;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_14> AgradCcdfLogBernoulli_ffv_14;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffv_15> AgradCcdfLogBernoulli_ffv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_0, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_1, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_2, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_3, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_4, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_5, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_6, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_7, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_8, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_9, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_10, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_11, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_12, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_13, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_14, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffv_15, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffv_15);

