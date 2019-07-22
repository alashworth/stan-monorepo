#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_0> AgradCcdfLogBernoulli_fd_0;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_1> AgradCcdfLogBernoulli_fd_1;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_2> AgradCcdfLogBernoulli_fd_2;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_3> AgradCcdfLogBernoulli_fd_3;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_4> AgradCcdfLogBernoulli_fd_4;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_5> AgradCcdfLogBernoulli_fd_5;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_6> AgradCcdfLogBernoulli_fd_6;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_7> AgradCcdfLogBernoulli_fd_7;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_8> AgradCcdfLogBernoulli_fd_8;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_9> AgradCcdfLogBernoulli_fd_9;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_10> AgradCcdfLogBernoulli_fd_10;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_11> AgradCcdfLogBernoulli_fd_11;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_12> AgradCcdfLogBernoulli_fd_12;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_13> AgradCcdfLogBernoulli_fd_13;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_14> AgradCcdfLogBernoulli_fd_14;
typedef boost::mpl::vector<AgradCcdfLogBernoulli, type_fd_15> AgradCcdfLogBernoulli_fd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_0, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_1, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_2, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_3, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_4, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_5, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_6, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_7, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_8, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_9, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_10, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_11, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_12, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_13, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_14, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBernoulli_fd_15, AgradCcdfLogTestFixture, AgradCcdfLogBernoulli_fd_15);

