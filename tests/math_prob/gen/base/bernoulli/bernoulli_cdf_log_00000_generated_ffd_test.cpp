#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_cdf_log_test.hpp>

typedef boost::mpl::vector<int, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_0;
typedef boost::mpl::vector<int, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_1;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_2;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_3;
typedef boost::mpl::vector<std::vector<int>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_4;
typedef boost::mpl::vector<std::vector<int>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_5;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_6;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_7;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_8;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_9;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_10;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_11;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_12;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_13;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_14;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_15;

typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_0> AgradCdfLogBernoulli_ffd_0;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_1> AgradCdfLogBernoulli_ffd_1;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_2> AgradCdfLogBernoulli_ffd_2;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_3> AgradCdfLogBernoulli_ffd_3;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_4> AgradCdfLogBernoulli_ffd_4;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_5> AgradCdfLogBernoulli_ffd_5;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_6> AgradCdfLogBernoulli_ffd_6;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_7> AgradCdfLogBernoulli_ffd_7;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_8> AgradCdfLogBernoulli_ffd_8;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_9> AgradCdfLogBernoulli_ffd_9;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_10> AgradCdfLogBernoulli_ffd_10;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_11> AgradCdfLogBernoulli_ffd_11;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_12> AgradCdfLogBernoulli_ffd_12;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_13> AgradCdfLogBernoulli_ffd_13;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_14> AgradCdfLogBernoulli_ffd_14;
typedef boost::mpl::vector<AgradCdfLogBernoulli, type_ffd_15> AgradCdfLogBernoulli_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_0, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_1, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_2, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_3, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_4, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_5, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_6, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_7, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_8, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_9, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_10, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_11, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_12, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_13, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_14, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBernoulli_ffd_15, AgradCdfLogTestFixture, AgradCdfLogBernoulli_ffd_15);

