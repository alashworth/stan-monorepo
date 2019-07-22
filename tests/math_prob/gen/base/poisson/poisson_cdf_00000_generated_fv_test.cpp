#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfPoisson, type_fv_0> AgradCdfPoisson_fv_0;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_1> AgradCdfPoisson_fv_1;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_2> AgradCdfPoisson_fv_2;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_3> AgradCdfPoisson_fv_3;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_4> AgradCdfPoisson_fv_4;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_5> AgradCdfPoisson_fv_5;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_6> AgradCdfPoisson_fv_6;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_7> AgradCdfPoisson_fv_7;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_8> AgradCdfPoisson_fv_8;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_9> AgradCdfPoisson_fv_9;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_10> AgradCdfPoisson_fv_10;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_11> AgradCdfPoisson_fv_11;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_12> AgradCdfPoisson_fv_12;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_13> AgradCdfPoisson_fv_13;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_14> AgradCdfPoisson_fv_14;
typedef boost::mpl::vector<AgradCdfPoisson, type_fv_15> AgradCdfPoisson_fv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_0, AgradCdfTestFixture, AgradCdfPoisson_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_1, AgradCdfTestFixture, AgradCdfPoisson_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_2, AgradCdfTestFixture, AgradCdfPoisson_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_3, AgradCdfTestFixture, AgradCdfPoisson_fv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_4, AgradCdfTestFixture, AgradCdfPoisson_fv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_5, AgradCdfTestFixture, AgradCdfPoisson_fv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_6, AgradCdfTestFixture, AgradCdfPoisson_fv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_7, AgradCdfTestFixture, AgradCdfPoisson_fv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_8, AgradCdfTestFixture, AgradCdfPoisson_fv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_9, AgradCdfTestFixture, AgradCdfPoisson_fv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_10, AgradCdfTestFixture, AgradCdfPoisson_fv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_11, AgradCdfTestFixture, AgradCdfPoisson_fv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_12, AgradCdfTestFixture, AgradCdfPoisson_fv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_13, AgradCdfTestFixture, AgradCdfPoisson_fv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_14, AgradCdfTestFixture, AgradCdfPoisson_fv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_fv_15, AgradCdfTestFixture, AgradCdfPoisson_fv_15);

