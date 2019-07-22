#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_0> AgradCdfPoisson_ffd_0;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_1> AgradCdfPoisson_ffd_1;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_2> AgradCdfPoisson_ffd_2;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_3> AgradCdfPoisson_ffd_3;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_4> AgradCdfPoisson_ffd_4;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_5> AgradCdfPoisson_ffd_5;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_6> AgradCdfPoisson_ffd_6;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_7> AgradCdfPoisson_ffd_7;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_8> AgradCdfPoisson_ffd_8;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_9> AgradCdfPoisson_ffd_9;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_10> AgradCdfPoisson_ffd_10;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_11> AgradCdfPoisson_ffd_11;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_12> AgradCdfPoisson_ffd_12;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_13> AgradCdfPoisson_ffd_13;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_14> AgradCdfPoisson_ffd_14;
typedef boost::mpl::vector<AgradCdfPoisson, type_ffd_15> AgradCdfPoisson_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_0, AgradCdfTestFixture, AgradCdfPoisson_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_1, AgradCdfTestFixture, AgradCdfPoisson_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_2, AgradCdfTestFixture, AgradCdfPoisson_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_3, AgradCdfTestFixture, AgradCdfPoisson_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_4, AgradCdfTestFixture, AgradCdfPoisson_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_5, AgradCdfTestFixture, AgradCdfPoisson_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_6, AgradCdfTestFixture, AgradCdfPoisson_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_7, AgradCdfTestFixture, AgradCdfPoisson_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_8, AgradCdfTestFixture, AgradCdfPoisson_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_9, AgradCdfTestFixture, AgradCdfPoisson_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_10, AgradCdfTestFixture, AgradCdfPoisson_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_11, AgradCdfTestFixture, AgradCdfPoisson_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_12, AgradCdfTestFixture, AgradCdfPoisson_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_13, AgradCdfTestFixture, AgradCdfPoisson_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_14, AgradCdfTestFixture, AgradCdfPoisson_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfPoisson_ffd_15, AgradCdfTestFixture, AgradCdfPoisson_ffd_15);

