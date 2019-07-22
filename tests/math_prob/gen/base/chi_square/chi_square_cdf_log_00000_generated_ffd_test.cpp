#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <chi_square/chi_square_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_0> AgradCdfLogChiSquare_ffd_0;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_1> AgradCdfLogChiSquare_ffd_1;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_2> AgradCdfLogChiSquare_ffd_2;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_3> AgradCdfLogChiSquare_ffd_3;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_4> AgradCdfLogChiSquare_ffd_4;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_5> AgradCdfLogChiSquare_ffd_5;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_6> AgradCdfLogChiSquare_ffd_6;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_7> AgradCdfLogChiSquare_ffd_7;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_8> AgradCdfLogChiSquare_ffd_8;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_9> AgradCdfLogChiSquare_ffd_9;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_10> AgradCdfLogChiSquare_ffd_10;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_11> AgradCdfLogChiSquare_ffd_11;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_12> AgradCdfLogChiSquare_ffd_12;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_13> AgradCdfLogChiSquare_ffd_13;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_14> AgradCdfLogChiSquare_ffd_14;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_15> AgradCdfLogChiSquare_ffd_15;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_16> AgradCdfLogChiSquare_ffd_16;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_17> AgradCdfLogChiSquare_ffd_17;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_18> AgradCdfLogChiSquare_ffd_18;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_19> AgradCdfLogChiSquare_ffd_19;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_20> AgradCdfLogChiSquare_ffd_20;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_21> AgradCdfLogChiSquare_ffd_21;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_22> AgradCdfLogChiSquare_ffd_22;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_23> AgradCdfLogChiSquare_ffd_23;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_24> AgradCdfLogChiSquare_ffd_24;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_25> AgradCdfLogChiSquare_ffd_25;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_26> AgradCdfLogChiSquare_ffd_26;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_27> AgradCdfLogChiSquare_ffd_27;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_28> AgradCdfLogChiSquare_ffd_28;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_29> AgradCdfLogChiSquare_ffd_29;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_30> AgradCdfLogChiSquare_ffd_30;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_31> AgradCdfLogChiSquare_ffd_31;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_32> AgradCdfLogChiSquare_ffd_32;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_33> AgradCdfLogChiSquare_ffd_33;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_34> AgradCdfLogChiSquare_ffd_34;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_35> AgradCdfLogChiSquare_ffd_35;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_36> AgradCdfLogChiSquare_ffd_36;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_37> AgradCdfLogChiSquare_ffd_37;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_38> AgradCdfLogChiSquare_ffd_38;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_39> AgradCdfLogChiSquare_ffd_39;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_40> AgradCdfLogChiSquare_ffd_40;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_41> AgradCdfLogChiSquare_ffd_41;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_42> AgradCdfLogChiSquare_ffd_42;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_43> AgradCdfLogChiSquare_ffd_43;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_44> AgradCdfLogChiSquare_ffd_44;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_45> AgradCdfLogChiSquare_ffd_45;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_46> AgradCdfLogChiSquare_ffd_46;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_ffd_47> AgradCdfLogChiSquare_ffd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_0, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_1, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_2, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_3, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_4, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_5, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_6, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_7, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_8, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_9, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_10, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_11, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_12, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_13, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_14, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_15, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_16, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_17, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_18, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_19, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_20, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_21, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_22, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_23, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_24, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_25, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_26, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_27, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_28, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_29, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_30, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_31, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_32, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_33, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_34, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_35, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_36, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_37, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_38, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_39, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_40, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_41, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_42, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_43, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_44, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_45, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_46, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_ffd_47, AgradCdfLogTestFixture, AgradCdfLogChiSquare_ffd_47);

