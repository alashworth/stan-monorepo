#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_0> AgradCdfLogPoisson_ffv_0;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_1> AgradCdfLogPoisson_ffv_1;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_2> AgradCdfLogPoisson_ffv_2;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_3> AgradCdfLogPoisson_ffv_3;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_4> AgradCdfLogPoisson_ffv_4;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_5> AgradCdfLogPoisson_ffv_5;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_6> AgradCdfLogPoisson_ffv_6;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_7> AgradCdfLogPoisson_ffv_7;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_8> AgradCdfLogPoisson_ffv_8;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_9> AgradCdfLogPoisson_ffv_9;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_10> AgradCdfLogPoisson_ffv_10;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_11> AgradCdfLogPoisson_ffv_11;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_12> AgradCdfLogPoisson_ffv_12;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_13> AgradCdfLogPoisson_ffv_13;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_14> AgradCdfLogPoisson_ffv_14;
typedef boost::mpl::vector<AgradCdfLogPoisson, type_ffv_15> AgradCdfLogPoisson_ffv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_0, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_1, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_2, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_3, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_4, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_5, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_6, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_7, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_8, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_9, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_10, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_11, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_12, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_13, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_14, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPoisson_ffv_15, AgradCdfLogTestFixture, AgradCdfLogPoisson_ffv_15);

