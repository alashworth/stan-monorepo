#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <inv_chi_square/inv_chi_square_cdf_test.hpp>

typedef boost::mpl::vector<double, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_0;
typedef boost::mpl::vector<double, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_1;
typedef boost::mpl::vector<double, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_2;
typedef boost::mpl::vector<double, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_3;
typedef boost::mpl::vector<std::vector<double>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_4;
typedef boost::mpl::vector<std::vector<double>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_5;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_6;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_7;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_8;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_9;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_10;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_11;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_12;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_13;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_14;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_15;
typedef boost::mpl::vector<fvar<fvar<double> >, double, empty, empty, empty, empty> type_ffd_16;
typedef boost::mpl::vector<fvar<fvar<double> >, std::vector<double>, empty, empty, empty, empty> type_ffd_17;
typedef boost::mpl::vector<fvar<fvar<double> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_18;
typedef boost::mpl::vector<fvar<fvar<double> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_19;
typedef boost::mpl::vector<fvar<fvar<double> >, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_20;
typedef boost::mpl::vector<fvar<fvar<double> >, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_21;
typedef boost::mpl::vector<fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_22;
typedef boost::mpl::vector<fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_23;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, double, empty, empty, empty, empty> type_ffd_24;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<double>, empty, empty, empty, empty> type_ffd_25;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_26;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_27;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_28;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_29;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_30;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_31;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty, empty, empty> type_ffd_32;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty, empty> type_ffd_33;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_34;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_35;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_36;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_37;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_38;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_39;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty, empty, empty> type_ffd_40;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty, empty> type_ffd_41;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_42;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_43;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty, empty> type_ffd_44;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty, empty> type_ffd_45;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_ffd_46;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_ffd_47;

typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_0> AgradCdfInvChiSquare_ffd_0;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_1> AgradCdfInvChiSquare_ffd_1;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_2> AgradCdfInvChiSquare_ffd_2;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_3> AgradCdfInvChiSquare_ffd_3;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_4> AgradCdfInvChiSquare_ffd_4;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_5> AgradCdfInvChiSquare_ffd_5;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_6> AgradCdfInvChiSquare_ffd_6;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_7> AgradCdfInvChiSquare_ffd_7;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_8> AgradCdfInvChiSquare_ffd_8;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_9> AgradCdfInvChiSquare_ffd_9;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_10> AgradCdfInvChiSquare_ffd_10;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_11> AgradCdfInvChiSquare_ffd_11;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_12> AgradCdfInvChiSquare_ffd_12;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_13> AgradCdfInvChiSquare_ffd_13;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_14> AgradCdfInvChiSquare_ffd_14;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_15> AgradCdfInvChiSquare_ffd_15;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_16> AgradCdfInvChiSquare_ffd_16;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_17> AgradCdfInvChiSquare_ffd_17;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_18> AgradCdfInvChiSquare_ffd_18;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_19> AgradCdfInvChiSquare_ffd_19;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_20> AgradCdfInvChiSquare_ffd_20;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_21> AgradCdfInvChiSquare_ffd_21;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_22> AgradCdfInvChiSquare_ffd_22;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_23> AgradCdfInvChiSquare_ffd_23;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_24> AgradCdfInvChiSquare_ffd_24;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_25> AgradCdfInvChiSquare_ffd_25;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_26> AgradCdfInvChiSquare_ffd_26;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_27> AgradCdfInvChiSquare_ffd_27;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_28> AgradCdfInvChiSquare_ffd_28;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_29> AgradCdfInvChiSquare_ffd_29;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_30> AgradCdfInvChiSquare_ffd_30;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_31> AgradCdfInvChiSquare_ffd_31;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_32> AgradCdfInvChiSquare_ffd_32;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_33> AgradCdfInvChiSquare_ffd_33;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_34> AgradCdfInvChiSquare_ffd_34;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_35> AgradCdfInvChiSquare_ffd_35;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_36> AgradCdfInvChiSquare_ffd_36;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_37> AgradCdfInvChiSquare_ffd_37;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_38> AgradCdfInvChiSquare_ffd_38;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_39> AgradCdfInvChiSquare_ffd_39;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_40> AgradCdfInvChiSquare_ffd_40;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_41> AgradCdfInvChiSquare_ffd_41;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_42> AgradCdfInvChiSquare_ffd_42;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_43> AgradCdfInvChiSquare_ffd_43;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_44> AgradCdfInvChiSquare_ffd_44;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_45> AgradCdfInvChiSquare_ffd_45;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_46> AgradCdfInvChiSquare_ffd_46;
typedef boost::mpl::vector<AgradCdfInvChiSquare, type_ffd_47> AgradCdfInvChiSquare_ffd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_0, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_1, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_2, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_3, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_4, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_5, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_6, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_7, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_8, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_9, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_10, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_11, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_12, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_13, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_14, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_15, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_16, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_17, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_18, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_19, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_20, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_21, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_22, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_23, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_24, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_25, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_26, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_27, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_28, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_29, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_30, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_31, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_32, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_33, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_34, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_35, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_36, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_37, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_38, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_39, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_40, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_41, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_42, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_43, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_44, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_45, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_46, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvChiSquare_ffd_47, AgradCdfTestFixture, AgradCdfInvChiSquare_ffd_47);

