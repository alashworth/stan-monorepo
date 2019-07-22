#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_0> AgradDistributionsPoisson_ffd_0;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_1> AgradDistributionsPoisson_ffd_1;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_2> AgradDistributionsPoisson_ffd_2;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_3> AgradDistributionsPoisson_ffd_3;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_4> AgradDistributionsPoisson_ffd_4;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_5> AgradDistributionsPoisson_ffd_5;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_6> AgradDistributionsPoisson_ffd_6;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_7> AgradDistributionsPoisson_ffd_7;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_8> AgradDistributionsPoisson_ffd_8;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_9> AgradDistributionsPoisson_ffd_9;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_10> AgradDistributionsPoisson_ffd_10;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_11> AgradDistributionsPoisson_ffd_11;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_12> AgradDistributionsPoisson_ffd_12;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_13> AgradDistributionsPoisson_ffd_13;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_14> AgradDistributionsPoisson_ffd_14;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffd_15> AgradDistributionsPoisson_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_0, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_1, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_2, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_3, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_4, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_5, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_6, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_7, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_8, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_9, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_10, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_11, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_12, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_13, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_14, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffd_15, AgradDistributionTestFixture, AgradDistributionsPoisson_ffd_15);

