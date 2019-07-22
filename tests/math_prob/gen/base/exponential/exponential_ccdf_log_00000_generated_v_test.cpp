#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <exponential/exponential_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_0> AgradCcdfLogExponential_v_0;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_1> AgradCcdfLogExponential_v_1;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_2> AgradCcdfLogExponential_v_2;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_3> AgradCcdfLogExponential_v_3;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_4> AgradCcdfLogExponential_v_4;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_5> AgradCcdfLogExponential_v_5;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_6> AgradCcdfLogExponential_v_6;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_7> AgradCcdfLogExponential_v_7;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_8> AgradCcdfLogExponential_v_8;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_9> AgradCcdfLogExponential_v_9;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_10> AgradCcdfLogExponential_v_10;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_11> AgradCcdfLogExponential_v_11;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_12> AgradCcdfLogExponential_v_12;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_13> AgradCcdfLogExponential_v_13;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_14> AgradCcdfLogExponential_v_14;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_15> AgradCcdfLogExponential_v_15;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_16> AgradCcdfLogExponential_v_16;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_17> AgradCcdfLogExponential_v_17;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_18> AgradCcdfLogExponential_v_18;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_19> AgradCcdfLogExponential_v_19;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_20> AgradCcdfLogExponential_v_20;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_21> AgradCcdfLogExponential_v_21;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_22> AgradCcdfLogExponential_v_22;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_23> AgradCcdfLogExponential_v_23;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_24> AgradCcdfLogExponential_v_24;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_25> AgradCcdfLogExponential_v_25;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_26> AgradCcdfLogExponential_v_26;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_27> AgradCcdfLogExponential_v_27;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_28> AgradCcdfLogExponential_v_28;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_29> AgradCcdfLogExponential_v_29;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_30> AgradCcdfLogExponential_v_30;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_31> AgradCcdfLogExponential_v_31;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_32> AgradCcdfLogExponential_v_32;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_33> AgradCcdfLogExponential_v_33;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_34> AgradCcdfLogExponential_v_34;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_35> AgradCcdfLogExponential_v_35;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_36> AgradCcdfLogExponential_v_36;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_37> AgradCcdfLogExponential_v_37;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_38> AgradCcdfLogExponential_v_38;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_39> AgradCcdfLogExponential_v_39;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_40> AgradCcdfLogExponential_v_40;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_41> AgradCcdfLogExponential_v_41;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_42> AgradCcdfLogExponential_v_42;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_43> AgradCcdfLogExponential_v_43;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_44> AgradCcdfLogExponential_v_44;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_45> AgradCcdfLogExponential_v_45;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_46> AgradCcdfLogExponential_v_46;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_47> AgradCcdfLogExponential_v_47;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_48> AgradCcdfLogExponential_v_48;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_49> AgradCcdfLogExponential_v_49;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_50> AgradCcdfLogExponential_v_50;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_51> AgradCcdfLogExponential_v_51;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_52> AgradCcdfLogExponential_v_52;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_53> AgradCcdfLogExponential_v_53;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_54> AgradCcdfLogExponential_v_54;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_55> AgradCcdfLogExponential_v_55;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_56> AgradCcdfLogExponential_v_56;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_57> AgradCcdfLogExponential_v_57;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_58> AgradCcdfLogExponential_v_58;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_59> AgradCcdfLogExponential_v_59;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_60> AgradCcdfLogExponential_v_60;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_61> AgradCcdfLogExponential_v_61;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_62> AgradCcdfLogExponential_v_62;
typedef boost::mpl::vector<AgradCcdfLogExponential, type_v_63> AgradCcdfLogExponential_v_63;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_0, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_1, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_2, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_3, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_4, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_5, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_6, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_7, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_8, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_9, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_10, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_11, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_12, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_13, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_14, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_15, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_16, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_17, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_18, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_19, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_20, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_21, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_22, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_23, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_24, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_25, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_26, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_27, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_28, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_29, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_30, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_31, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_32, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_33, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_34, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_35, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_36, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_37, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_38, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_39, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_40, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_41, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_42, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_43, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_44, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_45, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_46, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_47, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_47);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_48, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_48);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_49, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_49);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_50, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_50);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_51, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_51);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_52, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_52);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_53, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_53);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_54, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_54);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_55, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_55);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_56, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_56);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_57, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_57);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_58, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_58);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_59, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_59);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_60, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_60);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_61, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_61);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_62, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_62);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExponential_v_63, AgradCcdfLogTestFixture, AgradCcdfLogExponential_v_63);

