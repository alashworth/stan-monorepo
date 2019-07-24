#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <rayleigh/rayleigh_ccdf_log_test.hpp>

typedef boost::mpl::vector<double, fvar<double>, empty, empty, empty, empty> type_fd_0;
typedef boost::mpl::vector<double, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_1;
typedef boost::mpl::vector<double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_2;
typedef boost::mpl::vector<double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_3;
typedef boost::mpl::vector<std::vector<double>, fvar<double>, empty, empty, empty, empty> type_fd_4;
typedef boost::mpl::vector<std::vector<double>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_5;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_6;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_7;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty, empty> type_fd_8;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_9;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_10;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_11;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty, empty> type_fd_12;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_13;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_14;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_15;
typedef boost::mpl::vector<fvar<double>, double, empty, empty, empty, empty> type_fd_16;
typedef boost::mpl::vector<fvar<double>, std::vector<double>, empty, empty, empty, empty> type_fd_17;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_18;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_19;
typedef boost::mpl::vector<fvar<double>, fvar<double>, empty, empty, empty, empty> type_fd_20;
typedef boost::mpl::vector<fvar<double>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_21;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_22;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_23;
typedef boost::mpl::vector<std::vector<fvar<double>>, double, empty, empty, empty, empty> type_fd_24;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<double>, empty, empty, empty, empty> type_fd_25;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_26;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_27;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, empty, empty, empty, empty> type_fd_28;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_29;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_30;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_31;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty, empty> type_fd_32;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty, empty> type_fd_33;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_34;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_35;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty, empty> type_fd_36;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_37;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_38;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_39;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty, empty> type_fd_40;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty, empty> type_fd_41;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_42;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_43;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty, empty> type_fd_44;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty, empty> type_fd_45;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fd_46;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fd_47;

typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_0> AgradCcdfLogRayleigh_fd_0;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_1> AgradCcdfLogRayleigh_fd_1;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_2> AgradCcdfLogRayleigh_fd_2;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_3> AgradCcdfLogRayleigh_fd_3;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_4> AgradCcdfLogRayleigh_fd_4;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_5> AgradCcdfLogRayleigh_fd_5;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_6> AgradCcdfLogRayleigh_fd_6;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_7> AgradCcdfLogRayleigh_fd_7;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_8> AgradCcdfLogRayleigh_fd_8;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_9> AgradCcdfLogRayleigh_fd_9;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_10> AgradCcdfLogRayleigh_fd_10;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_11> AgradCcdfLogRayleigh_fd_11;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_12> AgradCcdfLogRayleigh_fd_12;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_13> AgradCcdfLogRayleigh_fd_13;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_14> AgradCcdfLogRayleigh_fd_14;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_15> AgradCcdfLogRayleigh_fd_15;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_16> AgradCcdfLogRayleigh_fd_16;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_17> AgradCcdfLogRayleigh_fd_17;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_18> AgradCcdfLogRayleigh_fd_18;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_19> AgradCcdfLogRayleigh_fd_19;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_20> AgradCcdfLogRayleigh_fd_20;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_21> AgradCcdfLogRayleigh_fd_21;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_22> AgradCcdfLogRayleigh_fd_22;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_23> AgradCcdfLogRayleigh_fd_23;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_24> AgradCcdfLogRayleigh_fd_24;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_25> AgradCcdfLogRayleigh_fd_25;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_26> AgradCcdfLogRayleigh_fd_26;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_27> AgradCcdfLogRayleigh_fd_27;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_28> AgradCcdfLogRayleigh_fd_28;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_29> AgradCcdfLogRayleigh_fd_29;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_30> AgradCcdfLogRayleigh_fd_30;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_31> AgradCcdfLogRayleigh_fd_31;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_32> AgradCcdfLogRayleigh_fd_32;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_33> AgradCcdfLogRayleigh_fd_33;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_34> AgradCcdfLogRayleigh_fd_34;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_35> AgradCcdfLogRayleigh_fd_35;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_36> AgradCcdfLogRayleigh_fd_36;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_37> AgradCcdfLogRayleigh_fd_37;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_38> AgradCcdfLogRayleigh_fd_38;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_39> AgradCcdfLogRayleigh_fd_39;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_40> AgradCcdfLogRayleigh_fd_40;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_41> AgradCcdfLogRayleigh_fd_41;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_42> AgradCcdfLogRayleigh_fd_42;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_43> AgradCcdfLogRayleigh_fd_43;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_44> AgradCcdfLogRayleigh_fd_44;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_45> AgradCcdfLogRayleigh_fd_45;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_46> AgradCcdfLogRayleigh_fd_46;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_fd_47> AgradCcdfLogRayleigh_fd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_0, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_1, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_2, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_3, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_4, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_5, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_6, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_7, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_8, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_9, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_10, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_11, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_12, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_13, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_14, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_15, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_16, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_17, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_18, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_19, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_20, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_21, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_22, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_23, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_24, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_25, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_26, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_27, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_28, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_29, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_30, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_31, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_32, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_33, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_34, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_35, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_36, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_37, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_38, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_39, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_40, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_41, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_42, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_43, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_44, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_45, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_46, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_fd_47, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_fd_47);
