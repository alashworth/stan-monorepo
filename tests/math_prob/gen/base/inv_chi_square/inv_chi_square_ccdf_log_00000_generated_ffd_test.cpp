#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <inv_chi_square/inv_chi_square_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_0> AgradCcdfLogInvChiSquare_ffd_0;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_1> AgradCcdfLogInvChiSquare_ffd_1;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_2> AgradCcdfLogInvChiSquare_ffd_2;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_3> AgradCcdfLogInvChiSquare_ffd_3;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_4> AgradCcdfLogInvChiSquare_ffd_4;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_5> AgradCcdfLogInvChiSquare_ffd_5;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_6> AgradCcdfLogInvChiSquare_ffd_6;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_7> AgradCcdfLogInvChiSquare_ffd_7;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_8> AgradCcdfLogInvChiSquare_ffd_8;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_9> AgradCcdfLogInvChiSquare_ffd_9;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_10> AgradCcdfLogInvChiSquare_ffd_10;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_11> AgradCcdfLogInvChiSquare_ffd_11;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_12> AgradCcdfLogInvChiSquare_ffd_12;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_13> AgradCcdfLogInvChiSquare_ffd_13;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_14> AgradCcdfLogInvChiSquare_ffd_14;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_15> AgradCcdfLogInvChiSquare_ffd_15;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_16> AgradCcdfLogInvChiSquare_ffd_16;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_17> AgradCcdfLogInvChiSquare_ffd_17;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_18> AgradCcdfLogInvChiSquare_ffd_18;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_19> AgradCcdfLogInvChiSquare_ffd_19;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_20> AgradCcdfLogInvChiSquare_ffd_20;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_21> AgradCcdfLogInvChiSquare_ffd_21;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_22> AgradCcdfLogInvChiSquare_ffd_22;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_23> AgradCcdfLogInvChiSquare_ffd_23;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_24> AgradCcdfLogInvChiSquare_ffd_24;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_25> AgradCcdfLogInvChiSquare_ffd_25;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_26> AgradCcdfLogInvChiSquare_ffd_26;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_27> AgradCcdfLogInvChiSquare_ffd_27;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_28> AgradCcdfLogInvChiSquare_ffd_28;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_29> AgradCcdfLogInvChiSquare_ffd_29;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_30> AgradCcdfLogInvChiSquare_ffd_30;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_31> AgradCcdfLogInvChiSquare_ffd_31;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_32> AgradCcdfLogInvChiSquare_ffd_32;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_33> AgradCcdfLogInvChiSquare_ffd_33;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_34> AgradCcdfLogInvChiSquare_ffd_34;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_35> AgradCcdfLogInvChiSquare_ffd_35;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_36> AgradCcdfLogInvChiSquare_ffd_36;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_37> AgradCcdfLogInvChiSquare_ffd_37;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_38> AgradCcdfLogInvChiSquare_ffd_38;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_39> AgradCcdfLogInvChiSquare_ffd_39;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_40> AgradCcdfLogInvChiSquare_ffd_40;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_41> AgradCcdfLogInvChiSquare_ffd_41;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_42> AgradCcdfLogInvChiSquare_ffd_42;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_43> AgradCcdfLogInvChiSquare_ffd_43;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_44> AgradCcdfLogInvChiSquare_ffd_44;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_45> AgradCcdfLogInvChiSquare_ffd_45;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_46> AgradCcdfLogInvChiSquare_ffd_46;
typedef boost::mpl::vector<AgradCcdfLogInvChiSquare, type_ffd_47> AgradCcdfLogInvChiSquare_ffd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_0, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_1, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_2, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_3, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_4, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_5, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_6, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_7, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_8, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_9, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_10, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_11, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_12, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_13, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_14, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_15, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_16, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_17, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_18, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_19, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_20, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_21, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_22, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_23, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_24, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_25, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_26, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_27, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_28, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_29, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_30, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_31, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_32, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_33, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_34, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_35, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_36, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_37, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_38, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_39, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_40, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_41, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_42, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_43, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_44, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_45, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_46, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvChiSquare_ffd_47, AgradCcdfLogTestFixture, AgradCcdfLogInvChiSquare_ffd_47);
