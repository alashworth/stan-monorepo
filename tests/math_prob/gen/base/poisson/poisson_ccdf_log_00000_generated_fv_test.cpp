#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <poisson/poisson_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_0> AgradCcdfLogPoisson_fv_0;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_1> AgradCcdfLogPoisson_fv_1;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_2> AgradCcdfLogPoisson_fv_2;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_3> AgradCcdfLogPoisson_fv_3;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_4> AgradCcdfLogPoisson_fv_4;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_5> AgradCcdfLogPoisson_fv_5;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_6> AgradCcdfLogPoisson_fv_6;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_7> AgradCcdfLogPoisson_fv_7;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_8> AgradCcdfLogPoisson_fv_8;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_9> AgradCcdfLogPoisson_fv_9;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_10> AgradCcdfLogPoisson_fv_10;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_11> AgradCcdfLogPoisson_fv_11;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_12> AgradCcdfLogPoisson_fv_12;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_13> AgradCcdfLogPoisson_fv_13;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_14> AgradCcdfLogPoisson_fv_14;
typedef boost::mpl::vector<AgradCcdfLogPoisson, type_fv_15> AgradCcdfLogPoisson_fv_15;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_0, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_1, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_2, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_3, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_4, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_5, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_6, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_7, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_8, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_9, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_10, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_11, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_12, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_13, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_14, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPoisson_fv_15, AgradCcdfLogTestFixture, AgradCcdfLogPoisson_fv_15);

