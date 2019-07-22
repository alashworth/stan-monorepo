#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_log_test.hpp>

typedef boost::mpl::vector<int, fvar<var>, empty, empty, empty, empty> type_fv_0;
typedef boost::mpl::vector<int, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_1;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_2;
typedef boost::mpl::vector<int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_3;
typedef boost::mpl::vector<std::vector<int>, fvar<var>, empty, empty, empty, empty> type_fv_4;
typedef boost::mpl::vector<std::vector<int>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_5;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_6;
typedef boost::mpl::vector<std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_7;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty, empty> type_fv_8;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_9;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_10;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_11;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty, empty> type_fv_12;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_13;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_14;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_15;

typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_0> AgradDistributionsPoisson_fv_0;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_1> AgradDistributionsPoisson_fv_1;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_2> AgradDistributionsPoisson_fv_2;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_3> AgradDistributionsPoisson_fv_3;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_4> AgradDistributionsPoisson_fv_4;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_5> AgradDistributionsPoisson_fv_5;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_6> AgradDistributionsPoisson_fv_6;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_7> AgradDistributionsPoisson_fv_7;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_8> AgradDistributionsPoisson_fv_8;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_9> AgradDistributionsPoisson_fv_9;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_10> AgradDistributionsPoisson_fv_10;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_11> AgradDistributionsPoisson_fv_11;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_12> AgradDistributionsPoisson_fv_12;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_13> AgradDistributionsPoisson_fv_13;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_14> AgradDistributionsPoisson_fv_14;
typedef boost::mpl::vector<AgradDistributionsPoisson, type_fv_15> AgradDistributionsPoisson_fv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_0, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_1, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_2, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_3, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_4, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_5, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_6, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_7, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_8, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_9, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_10, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_11, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_12, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_13, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_14, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsPoisson_fv_15, AgradDistributionTestFixture, AgradDistributionsPoisson_fv_15);

