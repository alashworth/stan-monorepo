#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <rayleigh/rayleigh_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_0> AgradCcdfLogRayleigh_ffd_0;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_1> AgradCcdfLogRayleigh_ffd_1;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_2> AgradCcdfLogRayleigh_ffd_2;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_3> AgradCcdfLogRayleigh_ffd_3;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_4> AgradCcdfLogRayleigh_ffd_4;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_5> AgradCcdfLogRayleigh_ffd_5;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_6> AgradCcdfLogRayleigh_ffd_6;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_7> AgradCcdfLogRayleigh_ffd_7;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_8> AgradCcdfLogRayleigh_ffd_8;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_9> AgradCcdfLogRayleigh_ffd_9;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_10> AgradCcdfLogRayleigh_ffd_10;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_11> AgradCcdfLogRayleigh_ffd_11;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_12> AgradCcdfLogRayleigh_ffd_12;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_13> AgradCcdfLogRayleigh_ffd_13;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_14> AgradCcdfLogRayleigh_ffd_14;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_15> AgradCcdfLogRayleigh_ffd_15;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_16> AgradCcdfLogRayleigh_ffd_16;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_17> AgradCcdfLogRayleigh_ffd_17;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_18> AgradCcdfLogRayleigh_ffd_18;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_19> AgradCcdfLogRayleigh_ffd_19;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_20> AgradCcdfLogRayleigh_ffd_20;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_21> AgradCcdfLogRayleigh_ffd_21;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_22> AgradCcdfLogRayleigh_ffd_22;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_23> AgradCcdfLogRayleigh_ffd_23;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_24> AgradCcdfLogRayleigh_ffd_24;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_25> AgradCcdfLogRayleigh_ffd_25;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_26> AgradCcdfLogRayleigh_ffd_26;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_27> AgradCcdfLogRayleigh_ffd_27;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_28> AgradCcdfLogRayleigh_ffd_28;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_29> AgradCcdfLogRayleigh_ffd_29;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_30> AgradCcdfLogRayleigh_ffd_30;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_31> AgradCcdfLogRayleigh_ffd_31;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_32> AgradCcdfLogRayleigh_ffd_32;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_33> AgradCcdfLogRayleigh_ffd_33;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_34> AgradCcdfLogRayleigh_ffd_34;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_35> AgradCcdfLogRayleigh_ffd_35;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_36> AgradCcdfLogRayleigh_ffd_36;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_37> AgradCcdfLogRayleigh_ffd_37;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_38> AgradCcdfLogRayleigh_ffd_38;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_39> AgradCcdfLogRayleigh_ffd_39;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_40> AgradCcdfLogRayleigh_ffd_40;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_41> AgradCcdfLogRayleigh_ffd_41;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_42> AgradCcdfLogRayleigh_ffd_42;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_43> AgradCcdfLogRayleigh_ffd_43;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_44> AgradCcdfLogRayleigh_ffd_44;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_45> AgradCcdfLogRayleigh_ffd_45;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_46> AgradCcdfLogRayleigh_ffd_46;
typedef boost::mpl::vector<AgradCcdfLogRayleigh, type_ffd_47> AgradCcdfLogRayleigh_ffd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_0, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_1, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_2, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_3, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_4, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_5, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_6, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_7, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_8, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_9, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_10, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_11, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_12, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_13, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_14, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_15, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_16, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_17, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_18, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_19, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_20, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_21, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_22, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_23, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_24, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_25, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_26, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_27, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_28, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_29, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_30, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_31, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_32, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_33, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_34, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_35, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_36, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_37, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_38, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_39, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_40, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_41, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_42, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_43, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_44, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_45, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_46, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogRayleigh_ffd_47, AgradCcdfLogTestFixture, AgradCcdfLogRayleigh_ffd_47);
