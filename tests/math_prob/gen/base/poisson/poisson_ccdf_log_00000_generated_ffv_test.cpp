#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_0> AgradCcdfLogPoisson_ffv_0;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_1> AgradCcdfLogPoisson_ffv_1;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_2> AgradCcdfLogPoisson_ffv_2;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_3> AgradCcdfLogPoisson_ffv_3;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_4> AgradCcdfLogPoisson_ffv_4;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_5> AgradCcdfLogPoisson_ffv_5;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_6> AgradCcdfLogPoisson_ffv_6;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_7> AgradCcdfLogPoisson_ffv_7;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_8> AgradCcdfLogPoisson_ffv_8;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_9> AgradCcdfLogPoisson_ffv_9;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_10> AgradCcdfLogPoisson_ffv_10;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_11> AgradCcdfLogPoisson_ffv_11;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_12> AgradCcdfLogPoisson_ffv_12;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_13> AgradCcdfLogPoisson_ffv_13;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_14> AgradCcdfLogPoisson_ffv_14;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_ffv_15> AgradCcdfLogPoisson_ffv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_0, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_1, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_2, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_3, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_4, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_5, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_6, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_7, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_8, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_9, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_10, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_11, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_12, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_13, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_14, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_ffv_15, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_ffv_15);

