#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_logit_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_0> AgradDistributionsBernoulliLogistic_fd_0;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_1> AgradDistributionsBernoulliLogistic_fd_1;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_2> AgradDistributionsBernoulliLogistic_fd_2;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_3> AgradDistributionsBernoulliLogistic_fd_3;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_4> AgradDistributionsBernoulliLogistic_fd_4;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_5> AgradDistributionsBernoulliLogistic_fd_5;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_6> AgradDistributionsBernoulliLogistic_fd_6;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_7> AgradDistributionsBernoulliLogistic_fd_7;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_8> AgradDistributionsBernoulliLogistic_fd_8;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_9> AgradDistributionsBernoulliLogistic_fd_9;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_10> AgradDistributionsBernoulliLogistic_fd_10;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_11> AgradDistributionsBernoulliLogistic_fd_11;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_12> AgradDistributionsBernoulliLogistic_fd_12;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_13> AgradDistributionsBernoulliLogistic_fd_13;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_14> AgradDistributionsBernoulliLogistic_fd_14;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fd_15> AgradDistributionsBernoulliLogistic_fd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_0, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_1, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_2, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_3, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_4, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_5, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_6, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_7, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_8, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_9, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_10, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_11, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_12, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_13, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_14, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fd_15, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fd_15);

