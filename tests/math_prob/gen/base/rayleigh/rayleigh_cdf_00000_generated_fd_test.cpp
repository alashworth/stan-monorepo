#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <rayleigh/rayleigh_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_0> AgradCdfRayleigh_fd_0;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_1> AgradCdfRayleigh_fd_1;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_2> AgradCdfRayleigh_fd_2;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_3> AgradCdfRayleigh_fd_3;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_4> AgradCdfRayleigh_fd_4;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_5> AgradCdfRayleigh_fd_5;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_6> AgradCdfRayleigh_fd_6;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_7> AgradCdfRayleigh_fd_7;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_8> AgradCdfRayleigh_fd_8;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_9> AgradCdfRayleigh_fd_9;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_10> AgradCdfRayleigh_fd_10;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_11> AgradCdfRayleigh_fd_11;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_12> AgradCdfRayleigh_fd_12;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_13> AgradCdfRayleigh_fd_13;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_14> AgradCdfRayleigh_fd_14;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_15> AgradCdfRayleigh_fd_15;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_16> AgradCdfRayleigh_fd_16;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_17> AgradCdfRayleigh_fd_17;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_18> AgradCdfRayleigh_fd_18;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_19> AgradCdfRayleigh_fd_19;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_20> AgradCdfRayleigh_fd_20;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_21> AgradCdfRayleigh_fd_21;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_22> AgradCdfRayleigh_fd_22;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_23> AgradCdfRayleigh_fd_23;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_24> AgradCdfRayleigh_fd_24;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_25> AgradCdfRayleigh_fd_25;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_26> AgradCdfRayleigh_fd_26;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_27> AgradCdfRayleigh_fd_27;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_28> AgradCdfRayleigh_fd_28;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_29> AgradCdfRayleigh_fd_29;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_30> AgradCdfRayleigh_fd_30;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_31> AgradCdfRayleigh_fd_31;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_32> AgradCdfRayleigh_fd_32;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_33> AgradCdfRayleigh_fd_33;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_34> AgradCdfRayleigh_fd_34;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_35> AgradCdfRayleigh_fd_35;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_36> AgradCdfRayleigh_fd_36;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_37> AgradCdfRayleigh_fd_37;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_38> AgradCdfRayleigh_fd_38;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_39> AgradCdfRayleigh_fd_39;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_40> AgradCdfRayleigh_fd_40;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_41> AgradCdfRayleigh_fd_41;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_42> AgradCdfRayleigh_fd_42;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_43> AgradCdfRayleigh_fd_43;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_44> AgradCdfRayleigh_fd_44;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_45> AgradCdfRayleigh_fd_45;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_46> AgradCdfRayleigh_fd_46;
typedef boost::mpl::vector<AgradCdfRayleigh, type_fd_47> AgradCdfRayleigh_fd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_0, AgradCdfTestFixture, AgradCdfRayleigh_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_1, AgradCdfTestFixture, AgradCdfRayleigh_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_2, AgradCdfTestFixture, AgradCdfRayleigh_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_3, AgradCdfTestFixture, AgradCdfRayleigh_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_4, AgradCdfTestFixture, AgradCdfRayleigh_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_5, AgradCdfTestFixture, AgradCdfRayleigh_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_6, AgradCdfTestFixture, AgradCdfRayleigh_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_7, AgradCdfTestFixture, AgradCdfRayleigh_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_8, AgradCdfTestFixture, AgradCdfRayleigh_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_9, AgradCdfTestFixture, AgradCdfRayleigh_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_10, AgradCdfTestFixture, AgradCdfRayleigh_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_11, AgradCdfTestFixture, AgradCdfRayleigh_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_12, AgradCdfTestFixture, AgradCdfRayleigh_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_13, AgradCdfTestFixture, AgradCdfRayleigh_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_14, AgradCdfTestFixture, AgradCdfRayleigh_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_15, AgradCdfTestFixture, AgradCdfRayleigh_fd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_16, AgradCdfTestFixture, AgradCdfRayleigh_fd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_17, AgradCdfTestFixture, AgradCdfRayleigh_fd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_18, AgradCdfTestFixture, AgradCdfRayleigh_fd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_19, AgradCdfTestFixture, AgradCdfRayleigh_fd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_20, AgradCdfTestFixture, AgradCdfRayleigh_fd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_21, AgradCdfTestFixture, AgradCdfRayleigh_fd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_22, AgradCdfTestFixture, AgradCdfRayleigh_fd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_23, AgradCdfTestFixture, AgradCdfRayleigh_fd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_24, AgradCdfTestFixture, AgradCdfRayleigh_fd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_25, AgradCdfTestFixture, AgradCdfRayleigh_fd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_26, AgradCdfTestFixture, AgradCdfRayleigh_fd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_27, AgradCdfTestFixture, AgradCdfRayleigh_fd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_28, AgradCdfTestFixture, AgradCdfRayleigh_fd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_29, AgradCdfTestFixture, AgradCdfRayleigh_fd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_30, AgradCdfTestFixture, AgradCdfRayleigh_fd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_31, AgradCdfTestFixture, AgradCdfRayleigh_fd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_32, AgradCdfTestFixture, AgradCdfRayleigh_fd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_33, AgradCdfTestFixture, AgradCdfRayleigh_fd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_34, AgradCdfTestFixture, AgradCdfRayleigh_fd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_35, AgradCdfTestFixture, AgradCdfRayleigh_fd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_36, AgradCdfTestFixture, AgradCdfRayleigh_fd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_37, AgradCdfTestFixture, AgradCdfRayleigh_fd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_38, AgradCdfTestFixture, AgradCdfRayleigh_fd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_39, AgradCdfTestFixture, AgradCdfRayleigh_fd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_40, AgradCdfTestFixture, AgradCdfRayleigh_fd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_41, AgradCdfTestFixture, AgradCdfRayleigh_fd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_42, AgradCdfTestFixture, AgradCdfRayleigh_fd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_43, AgradCdfTestFixture, AgradCdfRayleigh_fd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_44, AgradCdfTestFixture, AgradCdfRayleigh_fd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_45, AgradCdfTestFixture, AgradCdfRayleigh_fd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_46, AgradCdfTestFixture, AgradCdfRayleigh_fd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfRayleigh_fd_47, AgradCdfTestFixture, AgradCdfRayleigh_fd_47);

