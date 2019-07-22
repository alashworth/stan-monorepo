#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_cdf_test.hpp>

typedef boost::mpl::vector<int, fvar<double>, empty, empty, empty, empty> type_fd_0;
typedef boost::mpl::vector<int, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_1;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_2;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_3;
typedef boost::mpl::vector<std::vector<int>, fvar<double>, empty, empty, empty, empty> type_fd_4;
typedef boost::mpl::vector<std::vector<int>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_5;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_6;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_7;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty, empty> type_fd_8;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_9;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_10;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_11;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty, empty> type_fd_12;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_13;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_14;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_15;

typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_0> AgradCdfBernoulli_fd_0;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_1> AgradCdfBernoulli_fd_1;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_2> AgradCdfBernoulli_fd_2;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_3> AgradCdfBernoulli_fd_3;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_4> AgradCdfBernoulli_fd_4;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_5> AgradCdfBernoulli_fd_5;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_6> AgradCdfBernoulli_fd_6;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_7> AgradCdfBernoulli_fd_7;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_8> AgradCdfBernoulli_fd_8;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_9> AgradCdfBernoulli_fd_9;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_10> AgradCdfBernoulli_fd_10;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_11> AgradCdfBernoulli_fd_11;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_12> AgradCdfBernoulli_fd_12;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_13> AgradCdfBernoulli_fd_13;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_14> AgradCdfBernoulli_fd_14;
typedef boost::mpl::vector<AgradCdfBernoulli, type_fd_15> AgradCdfBernoulli_fd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_0, AgradCdfTestFixture, AgradCdfBernoulli_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_1, AgradCdfTestFixture, AgradCdfBernoulli_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_2, AgradCdfTestFixture, AgradCdfBernoulli_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_3, AgradCdfTestFixture, AgradCdfBernoulli_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_4, AgradCdfTestFixture, AgradCdfBernoulli_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_5, AgradCdfTestFixture, AgradCdfBernoulli_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_6, AgradCdfTestFixture, AgradCdfBernoulli_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_7, AgradCdfTestFixture, AgradCdfBernoulli_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_8, AgradCdfTestFixture, AgradCdfBernoulli_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_9, AgradCdfTestFixture, AgradCdfBernoulli_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_10, AgradCdfTestFixture, AgradCdfBernoulli_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_11, AgradCdfTestFixture, AgradCdfBernoulli_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_12, AgradCdfTestFixture, AgradCdfBernoulli_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_13, AgradCdfTestFixture, AgradCdfBernoulli_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_14, AgradCdfTestFixture, AgradCdfBernoulli_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBernoulli_fd_15, AgradCdfTestFixture, AgradCdfBernoulli_fd_15);

