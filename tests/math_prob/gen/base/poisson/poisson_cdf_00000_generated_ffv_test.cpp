#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_0> AgradCdfPoisson_ffv_0;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_1> AgradCdfPoisson_ffv_1;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_2> AgradCdfPoisson_ffv_2;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_3> AgradCdfPoisson_ffv_3;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_4> AgradCdfPoisson_ffv_4;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_5> AgradCdfPoisson_ffv_5;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_6> AgradCdfPoisson_ffv_6;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_7> AgradCdfPoisson_ffv_7;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_8> AgradCdfPoisson_ffv_8;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_9> AgradCdfPoisson_ffv_9;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_10> AgradCdfPoisson_ffv_10;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_11> AgradCdfPoisson_ffv_11;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_12> AgradCdfPoisson_ffv_12;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_13> AgradCdfPoisson_ffv_13;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_14> AgradCdfPoisson_ffv_14;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffv_15> AgradCdfPoisson_ffv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_0, AgradCdfTestFixture, AgradCdfPoisson_ffv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_1, AgradCdfTestFixture, AgradCdfPoisson_ffv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_2, AgradCdfTestFixture, AgradCdfPoisson_ffv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_3, AgradCdfTestFixture, AgradCdfPoisson_ffv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_4, AgradCdfTestFixture, AgradCdfPoisson_ffv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_5, AgradCdfTestFixture, AgradCdfPoisson_ffv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_6, AgradCdfTestFixture, AgradCdfPoisson_ffv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_7, AgradCdfTestFixture, AgradCdfPoisson_ffv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_8, AgradCdfTestFixture, AgradCdfPoisson_ffv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_9, AgradCdfTestFixture, AgradCdfPoisson_ffv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_10, AgradCdfTestFixture, AgradCdfPoisson_ffv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_11, AgradCdfTestFixture, AgradCdfPoisson_ffv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_12, AgradCdfTestFixture, AgradCdfPoisson_ffv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_13, AgradCdfTestFixture, AgradCdfPoisson_ffv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_14, AgradCdfTestFixture, AgradCdfPoisson_ffv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffv_15, AgradCdfTestFixture, AgradCdfPoisson_ffv_15);

