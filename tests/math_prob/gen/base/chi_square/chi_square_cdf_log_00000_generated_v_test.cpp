#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <chi_square/chi_square_cdf_log_test.hpp>

typedef boost::mpl::vector<double, double, empty, empty, empty, empty> type_v_0;
typedef boost::mpl::vector<double, std::vector<double>, empty, empty, empty, empty> type_v_1;
typedef boost::mpl::vector<double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_2;
typedef boost::mpl::vector<double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_3;
typedef boost::mpl::vector<double, var, empty, empty, empty, empty> type_v_4;
typedef boost::mpl::vector<double, std::vector<var>, empty, empty, empty, empty> type_v_5;
typedef boost::mpl::vector<double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_6;
typedef boost::mpl::vector<double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_7;
typedef boost::mpl::vector<std::vector<double>, double, empty, empty, empty, empty> type_v_8;
typedef boost::mpl::vector<std::vector<double>, std::vector<double>, empty, empty, empty, empty> type_v_9;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_10;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_11;
typedef boost::mpl::vector<std::vector<double>, var, empty, empty, empty, empty> type_v_12;
typedef boost::mpl::vector<std::vector<double>, std::vector<var>, empty, empty, empty, empty> type_v_13;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_14;
typedef boost::mpl::vector<std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_15;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty, empty> type_v_16;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty, empty> type_v_17;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_18;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_19;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty, empty, empty> type_v_20;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty, empty> type_v_21;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_22;
typedef boost::mpl::vector<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_23;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty, empty> type_v_24;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty, empty> type_v_25;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_26;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_27;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty, empty, empty> type_v_28;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty, empty> type_v_29;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_30;
typedef boost::mpl::vector<Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_31;
typedef boost::mpl::vector<var, double, empty, empty, empty, empty> type_v_32;
typedef boost::mpl::vector<var, std::vector<double>, empty, empty, empty, empty> type_v_33;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_34;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_35;
typedef boost::mpl::vector<var, var, empty, empty, empty, empty> type_v_36;
typedef boost::mpl::vector<var, std::vector<var>, empty, empty, empty, empty> type_v_37;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_38;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_39;
typedef boost::mpl::vector<std::vector<var>, double, empty, empty, empty, empty> type_v_40;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, empty, empty, empty, empty> type_v_41;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_42;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_43;
typedef boost::mpl::vector<std::vector<var>, var, empty, empty, empty, empty> type_v_44;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, empty, empty, empty, empty> type_v_45;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_46;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_47;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty, empty, empty> type_v_48;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty, empty> type_v_49;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_50;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_51;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty, empty> type_v_52;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty, empty> type_v_53;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_54;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_55;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty, empty> type_v_56;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty, empty> type_v_57;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_58;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_59;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty, empty> type_v_60;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty, empty> type_v_61;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty, empty> type_v_62;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty, empty> type_v_63;

typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_0> AgradCdfLogChiSquare_v_0;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_1> AgradCdfLogChiSquare_v_1;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_2> AgradCdfLogChiSquare_v_2;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_3> AgradCdfLogChiSquare_v_3;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_4> AgradCdfLogChiSquare_v_4;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_5> AgradCdfLogChiSquare_v_5;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_6> AgradCdfLogChiSquare_v_6;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_7> AgradCdfLogChiSquare_v_7;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_8> AgradCdfLogChiSquare_v_8;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_9> AgradCdfLogChiSquare_v_9;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_10> AgradCdfLogChiSquare_v_10;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_11> AgradCdfLogChiSquare_v_11;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_12> AgradCdfLogChiSquare_v_12;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_13> AgradCdfLogChiSquare_v_13;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_14> AgradCdfLogChiSquare_v_14;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_15> AgradCdfLogChiSquare_v_15;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_16> AgradCdfLogChiSquare_v_16;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_17> AgradCdfLogChiSquare_v_17;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_18> AgradCdfLogChiSquare_v_18;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_19> AgradCdfLogChiSquare_v_19;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_20> AgradCdfLogChiSquare_v_20;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_21> AgradCdfLogChiSquare_v_21;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_22> AgradCdfLogChiSquare_v_22;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_23> AgradCdfLogChiSquare_v_23;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_24> AgradCdfLogChiSquare_v_24;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_25> AgradCdfLogChiSquare_v_25;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_26> AgradCdfLogChiSquare_v_26;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_27> AgradCdfLogChiSquare_v_27;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_28> AgradCdfLogChiSquare_v_28;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_29> AgradCdfLogChiSquare_v_29;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_30> AgradCdfLogChiSquare_v_30;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_31> AgradCdfLogChiSquare_v_31;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_32> AgradCdfLogChiSquare_v_32;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_33> AgradCdfLogChiSquare_v_33;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_34> AgradCdfLogChiSquare_v_34;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_35> AgradCdfLogChiSquare_v_35;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_36> AgradCdfLogChiSquare_v_36;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_37> AgradCdfLogChiSquare_v_37;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_38> AgradCdfLogChiSquare_v_38;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_39> AgradCdfLogChiSquare_v_39;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_40> AgradCdfLogChiSquare_v_40;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_41> AgradCdfLogChiSquare_v_41;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_42> AgradCdfLogChiSquare_v_42;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_43> AgradCdfLogChiSquare_v_43;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_44> AgradCdfLogChiSquare_v_44;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_45> AgradCdfLogChiSquare_v_45;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_46> AgradCdfLogChiSquare_v_46;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_47> AgradCdfLogChiSquare_v_47;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_48> AgradCdfLogChiSquare_v_48;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_49> AgradCdfLogChiSquare_v_49;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_50> AgradCdfLogChiSquare_v_50;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_51> AgradCdfLogChiSquare_v_51;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_52> AgradCdfLogChiSquare_v_52;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_53> AgradCdfLogChiSquare_v_53;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_54> AgradCdfLogChiSquare_v_54;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_55> AgradCdfLogChiSquare_v_55;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_56> AgradCdfLogChiSquare_v_56;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_57> AgradCdfLogChiSquare_v_57;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_58> AgradCdfLogChiSquare_v_58;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_59> AgradCdfLogChiSquare_v_59;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_60> AgradCdfLogChiSquare_v_60;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_61> AgradCdfLogChiSquare_v_61;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_62> AgradCdfLogChiSquare_v_62;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_v_63> AgradCdfLogChiSquare_v_63;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_0, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_1, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_2, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_3, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_4, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_5, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_6, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_7, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_8, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_9, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_10, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_11, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_12, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_13, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_14, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_15, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_16, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_17, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_18, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_19, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_20, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_21, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_22, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_23, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_24, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_25, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_26, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_27, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_28, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_29, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_30, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_31, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_32, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_33, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_34, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_35, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_36, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_37, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_38, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_39, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_40, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_41, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_42, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_43, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_44, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_45, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_46, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_47, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_47);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_48, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_48);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_49, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_49);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_50, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_50);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_51, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_51);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_52, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_52);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_53, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_53);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_54, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_54);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_55, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_55);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_56, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_56);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_57, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_57);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_58, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_58);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_59, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_59);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_60, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_60);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_61, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_61);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_62, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_62);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_v_63, AgradCdfLogTestFixture, AgradCdfLogChiSquare_v_63);

