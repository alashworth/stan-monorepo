#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_0> AgradCdfLogPoisson_ffd_0;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_1> AgradCdfLogPoisson_ffd_1;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_2> AgradCdfLogPoisson_ffd_2;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_3> AgradCdfLogPoisson_ffd_3;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_4> AgradCdfLogPoisson_ffd_4;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_5> AgradCdfLogPoisson_ffd_5;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_6> AgradCdfLogPoisson_ffd_6;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_7> AgradCdfLogPoisson_ffd_7;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_8> AgradCdfLogPoisson_ffd_8;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_9> AgradCdfLogPoisson_ffd_9;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_10> AgradCdfLogPoisson_ffd_10;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_11> AgradCdfLogPoisson_ffd_11;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_12> AgradCdfLogPoisson_ffd_12;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_13> AgradCdfLogPoisson_ffd_13;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_14> AgradCdfLogPoisson_ffd_14;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffd_15> AgradCdfLogPoisson_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_0, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_1, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_2, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_3, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_4, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_5, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_6, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_7, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_8, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_9, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_10, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_11, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_12, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_13, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_14, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffd_15, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffd_15);

