#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_0> AgradCcdfLogBernoulli_ffd_0;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_1> AgradCcdfLogBernoulli_ffd_1;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_2> AgradCcdfLogBernoulli_ffd_2;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_3> AgradCcdfLogBernoulli_ffd_3;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_4> AgradCcdfLogBernoulli_ffd_4;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_5> AgradCcdfLogBernoulli_ffd_5;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_6> AgradCcdfLogBernoulli_ffd_6;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_7> AgradCcdfLogBernoulli_ffd_7;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_8> AgradCcdfLogBernoulli_ffd_8;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_9> AgradCcdfLogBernoulli_ffd_9;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_10> AgradCcdfLogBernoulli_ffd_10;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_11> AgradCcdfLogBernoulli_ffd_11;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_12> AgradCcdfLogBernoulli_ffd_12;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_13> AgradCcdfLogBernoulli_ffd_13;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_14> AgradCcdfLogBernoulli_ffd_14;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_ffd_15> AgradCcdfLogBernoulli_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_0, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_1, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_2, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_3, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_4, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_5, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_6, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_7, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_8, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_9, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_10, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_11, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_12, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_13, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_14, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_ffd_15, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_ffd_15);

