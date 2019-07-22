#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <bernoulli/bernoulli_logit_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_0> AgradDistributionsBernoulliLogistic_fv_0;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_1> AgradDistributionsBernoulliLogistic_fv_1;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_2> AgradDistributionsBernoulliLogistic_fv_2;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_3> AgradDistributionsBernoulliLogistic_fv_3;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_4> AgradDistributionsBernoulliLogistic_fv_4;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_5> AgradDistributionsBernoulliLogistic_fv_5;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_6> AgradDistributionsBernoulliLogistic_fv_6;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_7> AgradDistributionsBernoulliLogistic_fv_7;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_8> AgradDistributionsBernoulliLogistic_fv_8;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_9> AgradDistributionsBernoulliLogistic_fv_9;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_10> AgradDistributionsBernoulliLogistic_fv_10;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_11> AgradDistributionsBernoulliLogistic_fv_11;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_12> AgradDistributionsBernoulliLogistic_fv_12;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_13> AgradDistributionsBernoulliLogistic_fv_13;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_14> AgradDistributionsBernoulliLogistic_fv_14;
typedef boost::mpl::vector<AgradDistributionsBernoulliLogistic, type_fv_15> AgradDistributionsBernoulliLogistic_fv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_0, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_1, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_2, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_3, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_4, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_5, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_6, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_7, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_8, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_9, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_10, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_11, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_12, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_13, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_14, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBernoulliLogistic_fv_15, AgradDistributionTestFixture, AgradDistributionsBernoulliLogistic_fv_15);

