#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_log_test.hpp>

typedef boost::mpl::vector<int, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_0;
typedef boost::mpl::vector<int, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_1;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_2;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_3;
typedef boost::mpl::vector<std::vector<int>, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_4;
typedef boost::mpl::vector<std::vector<int>, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_5;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_6;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_7;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_8;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_9;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_10;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_11;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty, empty> type_ffv_12;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty, empty> type_ffv_13;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffv_14;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffv_15;

typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_0> AgradDistributionsPoisson_ffv_0;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_1> AgradDistributionsPoisson_ffv_1;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_2> AgradDistributionsPoisson_ffv_2;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_3> AgradDistributionsPoisson_ffv_3;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_4> AgradDistributionsPoisson_ffv_4;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_5> AgradDistributionsPoisson_ffv_5;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_6> AgradDistributionsPoisson_ffv_6;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_7> AgradDistributionsPoisson_ffv_7;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_8> AgradDistributionsPoisson_ffv_8;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_9> AgradDistributionsPoisson_ffv_9;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_10> AgradDistributionsPoisson_ffv_10;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_11> AgradDistributionsPoisson_ffv_11;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_12> AgradDistributionsPoisson_ffv_12;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_13> AgradDistributionsPoisson_ffv_13;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_14> AgradDistributionsPoisson_ffv_14;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_ffv_15> AgradDistributionsPoisson_ffv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_0, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_1, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_2, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_3, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_4, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_5, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_6, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_7, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_8, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_9, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_10, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_11, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_12, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_13, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_14, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_ffv_15, AgradDistributionTestFixture, AgradDistributionsPoisson_ffv_15);

