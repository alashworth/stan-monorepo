#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <chi_square/chi_square_cdf_log_test.hpp>

typedef boost::mpl::vector<double, fvar<var>, empty, empty, empty, empty> type_fv_0;
typedef boost::mpl::vector<double, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_1;
typedef boost::mpl::vector<double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_2;
typedef boost::mpl::vector<double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_3;
typedef boost::mpl::vector<std::vector<double>, fvar<var>, empty, empty, empty, empty> type_fv_4;
typedef boost::mpl::vector<std::vector<double>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_5;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_6;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_7;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty, empty> type_fv_8;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_9;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_10;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_11;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty, empty> type_fv_12;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_13;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_14;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_15;
typedef boost::mpl::vector<fvar<var>, double, empty, empty, empty, empty> type_fv_16;
typedef boost::mpl::vector<fvar<var>, std::vector<double>, empty, empty, empty, empty> type_fv_17;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_18;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_19;
typedef boost::mpl::vector<fvar<var>, fvar<var>, empty, empty, empty, empty> type_fv_20;
typedef boost::mpl::vector<fvar<var>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_21;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_22;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_23;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, empty, empty, empty, empty> type_fv_24;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, empty, empty, empty, empty> type_fv_25;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_26;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_27;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, empty, empty, empty, empty> type_fv_28;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_29;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_30;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_31;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty, empty> type_fv_32;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty, empty> type_fv_33;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_34;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_35;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty, empty> type_fv_36;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_37;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_38;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_39;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty, empty> type_fv_40;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty, empty> type_fv_41;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_42;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_43;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty, empty> type_fv_44;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty, empty> type_fv_45;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_fv_46;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_fv_47;

typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_0> AgradCdfLogChiSquare_fv_0;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_1> AgradCdfLogChiSquare_fv_1;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_2> AgradCdfLogChiSquare_fv_2;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_3> AgradCdfLogChiSquare_fv_3;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_4> AgradCdfLogChiSquare_fv_4;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_5> AgradCdfLogChiSquare_fv_5;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_6> AgradCdfLogChiSquare_fv_6;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_7> AgradCdfLogChiSquare_fv_7;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_8> AgradCdfLogChiSquare_fv_8;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_9> AgradCdfLogChiSquare_fv_9;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_10> AgradCdfLogChiSquare_fv_10;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_11> AgradCdfLogChiSquare_fv_11;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_12> AgradCdfLogChiSquare_fv_12;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_13> AgradCdfLogChiSquare_fv_13;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_14> AgradCdfLogChiSquare_fv_14;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_15> AgradCdfLogChiSquare_fv_15;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_16> AgradCdfLogChiSquare_fv_16;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_17> AgradCdfLogChiSquare_fv_17;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_18> AgradCdfLogChiSquare_fv_18;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_19> AgradCdfLogChiSquare_fv_19;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_20> AgradCdfLogChiSquare_fv_20;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_21> AgradCdfLogChiSquare_fv_21;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_22> AgradCdfLogChiSquare_fv_22;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_23> AgradCdfLogChiSquare_fv_23;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_24> AgradCdfLogChiSquare_fv_24;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_25> AgradCdfLogChiSquare_fv_25;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_26> AgradCdfLogChiSquare_fv_26;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_27> AgradCdfLogChiSquare_fv_27;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_28> AgradCdfLogChiSquare_fv_28;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_29> AgradCdfLogChiSquare_fv_29;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_30> AgradCdfLogChiSquare_fv_30;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_31> AgradCdfLogChiSquare_fv_31;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_32> AgradCdfLogChiSquare_fv_32;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_33> AgradCdfLogChiSquare_fv_33;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_34> AgradCdfLogChiSquare_fv_34;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_35> AgradCdfLogChiSquare_fv_35;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_36> AgradCdfLogChiSquare_fv_36;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_37> AgradCdfLogChiSquare_fv_37;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_38> AgradCdfLogChiSquare_fv_38;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_39> AgradCdfLogChiSquare_fv_39;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_40> AgradCdfLogChiSquare_fv_40;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_41> AgradCdfLogChiSquare_fv_41;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_42> AgradCdfLogChiSquare_fv_42;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_43> AgradCdfLogChiSquare_fv_43;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_44> AgradCdfLogChiSquare_fv_44;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_45> AgradCdfLogChiSquare_fv_45;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_46> AgradCdfLogChiSquare_fv_46;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fv_47> AgradCdfLogChiSquare_fv_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_0, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_1, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_2, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_3, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_4, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_5, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_6, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_7, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_8, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_9, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_10, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_11, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_12, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_13, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_14, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_15, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_16, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_17, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_18, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_19, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_20, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_21, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_22, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_23, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_24, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_25, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_26, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_27, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_28, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_29, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_30, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_31, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_32, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_33, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_34, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_35, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_36, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_37, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_38, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_39, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_40, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_41, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_42, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_43, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_44, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_45, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_46, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fv_47, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fv_47);

