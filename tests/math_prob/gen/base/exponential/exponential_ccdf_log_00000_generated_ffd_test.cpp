#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <exponential/exponential_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_0> AgradCcdfLogExponential_ffd_0;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_1> AgradCcdfLogExponential_ffd_1;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_2> AgradCcdfLogExponential_ffd_2;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_3> AgradCcdfLogExponential_ffd_3;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_4> AgradCcdfLogExponential_ffd_4;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_5> AgradCcdfLogExponential_ffd_5;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_6> AgradCcdfLogExponential_ffd_6;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_7> AgradCcdfLogExponential_ffd_7;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_8> AgradCcdfLogExponential_ffd_8;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_9> AgradCcdfLogExponential_ffd_9;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_10> AgradCcdfLogExponential_ffd_10;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_11> AgradCcdfLogExponential_ffd_11;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_12> AgradCcdfLogExponential_ffd_12;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_13> AgradCcdfLogExponential_ffd_13;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_14> AgradCcdfLogExponential_ffd_14;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_15> AgradCcdfLogExponential_ffd_15;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_16> AgradCcdfLogExponential_ffd_16;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_17> AgradCcdfLogExponential_ffd_17;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_18> AgradCcdfLogExponential_ffd_18;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_19> AgradCcdfLogExponential_ffd_19;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_20> AgradCcdfLogExponential_ffd_20;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_21> AgradCcdfLogExponential_ffd_21;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_22> AgradCcdfLogExponential_ffd_22;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_23> AgradCcdfLogExponential_ffd_23;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_24> AgradCcdfLogExponential_ffd_24;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_25> AgradCcdfLogExponential_ffd_25;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_26> AgradCcdfLogExponential_ffd_26;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_27> AgradCcdfLogExponential_ffd_27;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_28> AgradCcdfLogExponential_ffd_28;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_29> AgradCcdfLogExponential_ffd_29;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_30> AgradCcdfLogExponential_ffd_30;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_31> AgradCcdfLogExponential_ffd_31;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_32> AgradCcdfLogExponential_ffd_32;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_33> AgradCcdfLogExponential_ffd_33;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_34> AgradCcdfLogExponential_ffd_34;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_35> AgradCcdfLogExponential_ffd_35;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_36> AgradCcdfLogExponential_ffd_36;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_37> AgradCcdfLogExponential_ffd_37;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_38> AgradCcdfLogExponential_ffd_38;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_39> AgradCcdfLogExponential_ffd_39;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_40> AgradCcdfLogExponential_ffd_40;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_41> AgradCcdfLogExponential_ffd_41;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_42> AgradCcdfLogExponential_ffd_42;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_43> AgradCcdfLogExponential_ffd_43;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_44> AgradCcdfLogExponential_ffd_44;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_45> AgradCcdfLogExponential_ffd_45;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_46> AgradCcdfLogExponential_ffd_46;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_ffd_47> AgradCcdfLogExponential_ffd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_0, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_1, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_2, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_3, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_4, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_5, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_6, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_7, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_8, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_9, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_10, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_11, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_12, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_13, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_14, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_15, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_16, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_17, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_18, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_19, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_20, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_21, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_22, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_23, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_24, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_25, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_26, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_27, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_28, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_29, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_30, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_31, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_32, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_33, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_34, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_35, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_36, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_37, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_38, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_39, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_40, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_41, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_42, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_43, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_44, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_45, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_46, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_ffd_47, AgradCcdfLogTestFixture, AgradCcdfLogExponential_ffd_47);
