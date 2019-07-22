#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <std_normal/std_normal_test.hpp>

typedef boost::mpl::vector<fvar<fvar<double> >, empty, empty, empty, empty, empty> type_ffd_0;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, empty, empty, empty, empty, empty> type_ffd_1;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty, empty> type_ffd_2;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty, empty> type_ffd_3;

typedef boost::mpl::vector<AgradDistributionStdNormal, type_ffd_0> AgradDistributionStdNormal_ffd_0;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_ffd_1> AgradDistributionStdNormal_ffd_1;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_ffd_2> AgradDistributionStdNormal_ffd_2;
typedef boost::mpl::vector<AgradDistributionStdNormal, type_ffd_3> AgradDistributionStdNormal_ffd_3;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_ffd_0, AgradDistributionTestFixture, AgradDistributionStdNormal_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_ffd_1, AgradDistributionTestFixture, AgradDistributionStdNormal_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_ffd_2, AgradDistributionTestFixture, AgradDistributionStdNormal_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionStdNormal_ffd_3, AgradDistributionTestFixture, AgradDistributionStdNormal_ffd_3);

