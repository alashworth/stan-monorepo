#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_0> AgradDistributionsPoisson_fd_0;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_1> AgradDistributionsPoisson_fd_1;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_2> AgradDistributionsPoisson_fd_2;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_3> AgradDistributionsPoisson_fd_3;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_4> AgradDistributionsPoisson_fd_4;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_5> AgradDistributionsPoisson_fd_5;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_6> AgradDistributionsPoisson_fd_6;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_7> AgradDistributionsPoisson_fd_7;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_8> AgradDistributionsPoisson_fd_8;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_9> AgradDistributionsPoisson_fd_9;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_10> AgradDistributionsPoisson_fd_10;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_11> AgradDistributionsPoisson_fd_11;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_12> AgradDistributionsPoisson_fd_12;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_13> AgradDistributionsPoisson_fd_13;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_14> AgradDistributionsPoisson_fd_14;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fd_15> AgradDistributionsPoisson_fd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_0, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_1, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_2, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_3, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_4, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_5, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_6, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_7, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_8, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_9, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_10, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_11, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_12, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_13, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_14, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fd_15, AgradDistributionTestFixture, AgradDistributionsPoisson_fd_15);

