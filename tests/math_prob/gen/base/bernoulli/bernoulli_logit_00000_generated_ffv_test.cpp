#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_logit_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_0> AgradDistributionsBernoulliLogistic_ffv_0;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_1> AgradDistributionsBernoulliLogistic_ffv_1;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_2> AgradDistributionsBernoulliLogistic_ffv_2;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_3> AgradDistributionsBernoulliLogistic_ffv_3;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_4> AgradDistributionsBernoulliLogistic_ffv_4;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_5> AgradDistributionsBernoulliLogistic_ffv_5;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_6> AgradDistributionsBernoulliLogistic_ffv_6;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_7> AgradDistributionsBernoulliLogistic_ffv_7;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_8> AgradDistributionsBernoulliLogistic_ffv_8;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_9> AgradDistributionsBernoulliLogistic_ffv_9;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_10> AgradDistributionsBernoulliLogistic_ffv_10;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_11> AgradDistributionsBernoulliLogistic_ffv_11;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_12> AgradDistributionsBernoulliLogistic_ffv_12;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_13> AgradDistributionsBernoulliLogistic_ffv_13;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_14> AgradDistributionsBernoulliLogistic_ffv_14;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_ffv_15> AgradDistributionsBernoulliLogistic_ffv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_0, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_1, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_2, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_3, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_4, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_5, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_6, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_7, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_8, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_9, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_10, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_11, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_12, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_13, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_14, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_ffv_15, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_ffv_15);

