#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_0> AgradCdfLogPoisson_fd_0;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_1> AgradCdfLogPoisson_fd_1;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_2> AgradCdfLogPoisson_fd_2;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_3> AgradCdfLogPoisson_fd_3;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_4> AgradCdfLogPoisson_fd_4;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_5> AgradCdfLogPoisson_fd_5;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_6> AgradCdfLogPoisson_fd_6;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_7> AgradCdfLogPoisson_fd_7;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_8> AgradCdfLogPoisson_fd_8;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_9> AgradCdfLogPoisson_fd_9;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_10> AgradCdfLogPoisson_fd_10;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_11> AgradCdfLogPoisson_fd_11;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_12> AgradCdfLogPoisson_fd_12;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_13> AgradCdfLogPoisson_fd_13;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_14> AgradCdfLogPoisson_fd_14;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_fd_15> AgradCdfLogPoisson_fd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_0, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_1, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_2, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_3, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_4, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_5, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_6, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_7, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_8, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_9, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_10, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_11, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_12, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_13, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_14, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_fd_15, AgradCdfLogTestFixture, AgradCdfLogPoisson_fd_15);

