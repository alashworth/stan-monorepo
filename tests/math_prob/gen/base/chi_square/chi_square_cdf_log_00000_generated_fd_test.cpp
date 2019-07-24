#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <chi_square/chi_square_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_0> AgradCdfLogChiSquare_fd_0;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_1> AgradCdfLogChiSquare_fd_1;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_2> AgradCdfLogChiSquare_fd_2;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_3> AgradCdfLogChiSquare_fd_3;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_4> AgradCdfLogChiSquare_fd_4;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_5> AgradCdfLogChiSquare_fd_5;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_6> AgradCdfLogChiSquare_fd_6;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_7> AgradCdfLogChiSquare_fd_7;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_8> AgradCdfLogChiSquare_fd_8;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_9> AgradCdfLogChiSquare_fd_9;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_10> AgradCdfLogChiSquare_fd_10;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_11> AgradCdfLogChiSquare_fd_11;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_12> AgradCdfLogChiSquare_fd_12;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_13> AgradCdfLogChiSquare_fd_13;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_14> AgradCdfLogChiSquare_fd_14;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_15> AgradCdfLogChiSquare_fd_15;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_16> AgradCdfLogChiSquare_fd_16;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_17> AgradCdfLogChiSquare_fd_17;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_18> AgradCdfLogChiSquare_fd_18;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_19> AgradCdfLogChiSquare_fd_19;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_20> AgradCdfLogChiSquare_fd_20;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_21> AgradCdfLogChiSquare_fd_21;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_22> AgradCdfLogChiSquare_fd_22;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_23> AgradCdfLogChiSquare_fd_23;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_24> AgradCdfLogChiSquare_fd_24;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_25> AgradCdfLogChiSquare_fd_25;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_26> AgradCdfLogChiSquare_fd_26;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_27> AgradCdfLogChiSquare_fd_27;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_28> AgradCdfLogChiSquare_fd_28;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_29> AgradCdfLogChiSquare_fd_29;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_30> AgradCdfLogChiSquare_fd_30;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_31> AgradCdfLogChiSquare_fd_31;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_32> AgradCdfLogChiSquare_fd_32;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_33> AgradCdfLogChiSquare_fd_33;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_34> AgradCdfLogChiSquare_fd_34;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_35> AgradCdfLogChiSquare_fd_35;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_36> AgradCdfLogChiSquare_fd_36;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_37> AgradCdfLogChiSquare_fd_37;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_38> AgradCdfLogChiSquare_fd_38;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_39> AgradCdfLogChiSquare_fd_39;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_40> AgradCdfLogChiSquare_fd_40;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_41> AgradCdfLogChiSquare_fd_41;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_42> AgradCdfLogChiSquare_fd_42;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_43> AgradCdfLogChiSquare_fd_43;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_44> AgradCdfLogChiSquare_fd_44;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_45> AgradCdfLogChiSquare_fd_45;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_46> AgradCdfLogChiSquare_fd_46;
typedef boost::mpl::vector<AgradCdfLogChiSquare, type_fd_47> AgradCdfLogChiSquare_fd_47;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_0, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_0);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_1, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_1);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_2, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_2);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_3, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_3);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_4, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_4);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_5, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_5);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_6, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_6);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_7, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_7);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_8, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_8);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_9, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_9);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_10, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_10);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_11, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_11);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_12, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_12);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_13, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_13);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_14, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_14);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_15, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_15);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_16, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_16);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_17, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_17);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_18, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_18);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_19, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_19);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_20, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_20);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_21, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_21);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_22, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_22);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_23, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_23);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_24, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_24);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_25, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_25);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_26, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_26);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_27, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_27);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_28, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_28);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_29, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_29);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_30, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_30);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_31, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_31);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_32, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_32);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_33, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_33);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_34, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_34);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_35, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_35);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_36, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_36);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_37, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_37);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_38, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_38);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_39, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_39);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_40, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_40);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_41, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_41);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_42, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_42);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_43, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_43);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_44, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_44);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_45, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_45);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_46, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_46);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogChiSquare_fd_47, AgradCdfLogTestFixture, AgradCdfLogChiSquare_fd_47);
