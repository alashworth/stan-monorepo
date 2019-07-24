#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <inv_chi_square/inv_chi_square_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_0> AgradCdfInvChiSquare_fd_0;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_1> AgradCdfInvChiSquare_fd_1;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_2> AgradCdfInvChiSquare_fd_2;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_3> AgradCdfInvChiSquare_fd_3;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_4> AgradCdfInvChiSquare_fd_4;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_5> AgradCdfInvChiSquare_fd_5;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_6> AgradCdfInvChiSquare_fd_6;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_7> AgradCdfInvChiSquare_fd_7;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_8> AgradCdfInvChiSquare_fd_8;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_9> AgradCdfInvChiSquare_fd_9;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_10> AgradCdfInvChiSquare_fd_10;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_11> AgradCdfInvChiSquare_fd_11;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_12> AgradCdfInvChiSquare_fd_12;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_13> AgradCdfInvChiSquare_fd_13;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_14> AgradCdfInvChiSquare_fd_14;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_15> AgradCdfInvChiSquare_fd_15;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_16> AgradCdfInvChiSquare_fd_16;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_17> AgradCdfInvChiSquare_fd_17;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_18> AgradCdfInvChiSquare_fd_18;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_19> AgradCdfInvChiSquare_fd_19;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_20> AgradCdfInvChiSquare_fd_20;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_21> AgradCdfInvChiSquare_fd_21;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_22> AgradCdfInvChiSquare_fd_22;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_23> AgradCdfInvChiSquare_fd_23;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_24> AgradCdfInvChiSquare_fd_24;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_25> AgradCdfInvChiSquare_fd_25;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_26> AgradCdfInvChiSquare_fd_26;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_27> AgradCdfInvChiSquare_fd_27;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_28> AgradCdfInvChiSquare_fd_28;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_29> AgradCdfInvChiSquare_fd_29;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_30> AgradCdfInvChiSquare_fd_30;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_31> AgradCdfInvChiSquare_fd_31;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_32> AgradCdfInvChiSquare_fd_32;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_33> AgradCdfInvChiSquare_fd_33;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_34> AgradCdfInvChiSquare_fd_34;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_35> AgradCdfInvChiSquare_fd_35;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_36> AgradCdfInvChiSquare_fd_36;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_37> AgradCdfInvChiSquare_fd_37;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_38> AgradCdfInvChiSquare_fd_38;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_39> AgradCdfInvChiSquare_fd_39;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_40> AgradCdfInvChiSquare_fd_40;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_41> AgradCdfInvChiSquare_fd_41;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_42> AgradCdfInvChiSquare_fd_42;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_43> AgradCdfInvChiSquare_fd_43;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_44> AgradCdfInvChiSquare_fd_44;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_45> AgradCdfInvChiSquare_fd_45;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_46> AgradCdfInvChiSquare_fd_46;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_fd_47> AgradCdfInvChiSquare_fd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_0, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_1, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_2, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_3, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_4, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_5, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_6, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_7, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_8, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_9, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_10, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_11, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_12, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_13, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_14, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_15, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_16, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_17, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_18, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_19, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_20, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_21, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_22, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_23, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_24, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_25, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_26, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_27, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_28, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_29, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_30, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_31, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_32, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_33, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_34, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_35, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_36, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_37, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_38, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_39, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_40, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_41, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_42, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_43, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_44, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_45, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_46, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_fd_47, AgradCdfTestFixture, AgradCdfInvChiSquare_fd_47);
