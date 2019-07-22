#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_0> AgradCcdfLogPoisson_ffd_0;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_1> AgradCcdfLogPoisson_ffd_1;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_2> AgradCcdfLogPoisson_ffd_2;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_3> AgradCcdfLogPoisson_ffd_3;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_4> AgradCcdfLogPoisson_ffd_4;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_5> AgradCcdfLogPoisson_ffd_5;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_6> AgradCcdfLogPoisson_ffd_6;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_7> AgradCcdfLogPoisson_ffd_7;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_8> AgradCcdfLogPoisson_ffd_8;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_9> AgradCcdfLogPoisson_ffd_9;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_10> AgradCcdfLogPoisson_ffd_10;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_11> AgradCcdfLogPoisson_ffd_11;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_12> AgradCcdfLogPoisson_ffd_12;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_13> AgradCcdfLogPoisson_ffd_13;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_14> AgradCcdfLogPoisson_ffd_14;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffd_15> AgradCcdfLogPoisson_ffd_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_0, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_1, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_2, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_3, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_4, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_5, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_6, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_7, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_8, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_9, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_10, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_11, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_12, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_13, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_14, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffd_15, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffd_15);

