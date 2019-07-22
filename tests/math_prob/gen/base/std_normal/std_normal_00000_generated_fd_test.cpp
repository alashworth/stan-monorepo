#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <std_normal/std_normal_test.hpp>

typedef boost::mpl::vector<fvar<double>, empty, empty, empty, empty, empty> type_fd_0;
typedef boost::mpl::vector<std::vector<fvar<double>>, empty, empty, empty, empty, empty> type_fd_1;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty, empty> type_fd_2;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty, empty> type_fd_3;

typedef boost::mpl::vector<AgradDistributionStdNormal, type_fd_0> AgradDistributionStdNormal_fd_0;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_fd_1> AgradDistributionStdNormal_fd_1;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_fd_2> AgradDistributionStdNormal_fd_2;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_fd_3> AgradDistributionStdNormal_fd_3;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fd_0, AgradDistributionTestFixture, AgradDistributionStdNormal_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fd_1, AgradDistributionTestFixture, AgradDistributionStdNormal_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fd_2, AgradDistributionTestFixture, AgradDistributionStdNormal_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_fd_3, AgradDistributionTestFixture, AgradDistributionStdNormal_fd_3);

