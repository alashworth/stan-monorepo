#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_0> AgradCdfBernoulli_ffd_0;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_1> AgradCdfBernoulli_ffd_1;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_2> AgradCdfBernoulli_ffd_2;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_3> AgradCdfBernoulli_ffd_3;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_4> AgradCdfBernoulli_ffd_4;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_5> AgradCdfBernoulli_ffd_5;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_6> AgradCdfBernoulli_ffd_6;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_7> AgradCdfBernoulli_ffd_7;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_8> AgradCdfBernoulli_ffd_8;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_9> AgradCdfBernoulli_ffd_9;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_10> AgradCdfBernoulli_ffd_10;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_11> AgradCdfBernoulli_ffd_11;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_12> AgradCdfBernoulli_ffd_12;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_13> AgradCdfBernoulli_ffd_13;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_14> AgradCdfBernoulli_ffd_14;
typedef boost::mpl::vector<AgradCdfBernoulli, type_ffd_15> AgradCdfBernoulli_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_0, AgradCdfTestFixture, AgradCdfBernoulli_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_1, AgradCdfTestFixture, AgradCdfBernoulli_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_2, AgradCdfTestFixture, AgradCdfBernoulli_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_3, AgradCdfTestFixture, AgradCdfBernoulli_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_4, AgradCdfTestFixture, AgradCdfBernoulli_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_5, AgradCdfTestFixture, AgradCdfBernoulli_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_6, AgradCdfTestFixture, AgradCdfBernoulli_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_7, AgradCdfTestFixture, AgradCdfBernoulli_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_8, AgradCdfTestFixture, AgradCdfBernoulli_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_9, AgradCdfTestFixture, AgradCdfBernoulli_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_10, AgradCdfTestFixture, AgradCdfBernoulli_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_11, AgradCdfTestFixture, AgradCdfBernoulli_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_12, AgradCdfTestFixture, AgradCdfBernoulli_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_13, AgradCdfTestFixture, AgradCdfBernoulli_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_14, AgradCdfTestFixture, AgradCdfBernoulli_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_ffd_15, AgradCdfTestFixture, AgradCdfBernoulli_ffd_15);

