#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, double, empty, empty> type_v_4000;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, std::vector<double>, empty, empty> type_v_4001;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4002;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4003;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, var, empty, empty> type_v_4004;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, std::vector<var>, empty, empty> type_v_4005;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4006;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4007;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, double, empty, empty> type_v_4008;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, std::vector<double>, empty, empty> type_v_4009;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4010;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4011;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, var, empty, empty> type_v_4012;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, std::vector<var>, empty, empty> type_v_4013;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4014;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4015;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_4016;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_4017;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4018;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4019;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_4020;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_4021;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4022;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4023;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_4024;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_4025;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4026;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4027;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_4028;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_4029;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4030;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4031;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, double, empty, empty> type_v_4032;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_v_4033;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4034;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4035;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, empty, empty> type_v_4036;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, empty, empty> type_v_4037;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4038;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4039;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_v_4040;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_v_4041;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4042;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4043;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, empty, empty> type_v_4044;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, empty, empty> type_v_4045;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4046;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4047;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_4048;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_4049;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4050;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4051;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_4052;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_4053;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4054;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4055;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_4056;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_4057;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4058;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4059;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_4060;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_4061;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4062;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4063;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, empty, empty> type_v_4064;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty> type_v_4065;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4066;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4067;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, empty, empty> type_v_4068;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty> type_v_4069;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4070;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4071;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty> type_v_4072;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty> type_v_4073;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4074;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4075;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty> type_v_4076;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty> type_v_4077;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4078;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4079;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_4080;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_4081;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4082;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4083;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_4084;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_4085;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4086;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4087;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_4088;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_4089;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_4090;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_4091;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_4092;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_4093;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_4094;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_4095;

typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4000> AgradCdfExpModNormal_v_4000;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4001> AgradCdfExpModNormal_v_4001;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4002> AgradCdfExpModNormal_v_4002;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4003> AgradCdfExpModNormal_v_4003;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4004> AgradCdfExpModNormal_v_4004;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4005> AgradCdfExpModNormal_v_4005;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4006> AgradCdfExpModNormal_v_4006;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4007> AgradCdfExpModNormal_v_4007;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4008> AgradCdfExpModNormal_v_4008;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4009> AgradCdfExpModNormal_v_4009;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4010> AgradCdfExpModNormal_v_4010;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4011> AgradCdfExpModNormal_v_4011;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4012> AgradCdfExpModNormal_v_4012;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4013> AgradCdfExpModNormal_v_4013;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4014> AgradCdfExpModNormal_v_4014;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4015> AgradCdfExpModNormal_v_4015;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4016> AgradCdfExpModNormal_v_4016;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4017> AgradCdfExpModNormal_v_4017;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4018> AgradCdfExpModNormal_v_4018;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4019> AgradCdfExpModNormal_v_4019;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4020> AgradCdfExpModNormal_v_4020;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4021> AgradCdfExpModNormal_v_4021;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4022> AgradCdfExpModNormal_v_4022;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4023> AgradCdfExpModNormal_v_4023;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4024> AgradCdfExpModNormal_v_4024;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4025> AgradCdfExpModNormal_v_4025;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4026> AgradCdfExpModNormal_v_4026;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4027> AgradCdfExpModNormal_v_4027;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4028> AgradCdfExpModNormal_v_4028;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4029> AgradCdfExpModNormal_v_4029;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4030> AgradCdfExpModNormal_v_4030;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4031> AgradCdfExpModNormal_v_4031;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4032> AgradCdfExpModNormal_v_4032;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4033> AgradCdfExpModNormal_v_4033;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4034> AgradCdfExpModNormal_v_4034;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4035> AgradCdfExpModNormal_v_4035;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4036> AgradCdfExpModNormal_v_4036;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4037> AgradCdfExpModNormal_v_4037;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4038> AgradCdfExpModNormal_v_4038;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4039> AgradCdfExpModNormal_v_4039;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4040> AgradCdfExpModNormal_v_4040;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4041> AgradCdfExpModNormal_v_4041;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4042> AgradCdfExpModNormal_v_4042;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4043> AgradCdfExpModNormal_v_4043;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4044> AgradCdfExpModNormal_v_4044;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4045> AgradCdfExpModNormal_v_4045;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4046> AgradCdfExpModNormal_v_4046;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4047> AgradCdfExpModNormal_v_4047;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4048> AgradCdfExpModNormal_v_4048;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4049> AgradCdfExpModNormal_v_4049;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4050> AgradCdfExpModNormal_v_4050;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4051> AgradCdfExpModNormal_v_4051;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4052> AgradCdfExpModNormal_v_4052;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4053> AgradCdfExpModNormal_v_4053;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4054> AgradCdfExpModNormal_v_4054;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4055> AgradCdfExpModNormal_v_4055;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4056> AgradCdfExpModNormal_v_4056;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4057> AgradCdfExpModNormal_v_4057;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4058> AgradCdfExpModNormal_v_4058;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4059> AgradCdfExpModNormal_v_4059;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4060> AgradCdfExpModNormal_v_4060;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4061> AgradCdfExpModNormal_v_4061;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4062> AgradCdfExpModNormal_v_4062;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4063> AgradCdfExpModNormal_v_4063;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4064> AgradCdfExpModNormal_v_4064;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4065> AgradCdfExpModNormal_v_4065;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4066> AgradCdfExpModNormal_v_4066;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4067> AgradCdfExpModNormal_v_4067;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4068> AgradCdfExpModNormal_v_4068;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4069> AgradCdfExpModNormal_v_4069;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4070> AgradCdfExpModNormal_v_4070;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4071> AgradCdfExpModNormal_v_4071;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4072> AgradCdfExpModNormal_v_4072;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4073> AgradCdfExpModNormal_v_4073;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4074> AgradCdfExpModNormal_v_4074;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4075> AgradCdfExpModNormal_v_4075;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4076> AgradCdfExpModNormal_v_4076;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4077> AgradCdfExpModNormal_v_4077;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4078> AgradCdfExpModNormal_v_4078;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4079> AgradCdfExpModNormal_v_4079;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4080> AgradCdfExpModNormal_v_4080;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4081> AgradCdfExpModNormal_v_4081;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4082> AgradCdfExpModNormal_v_4082;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4083> AgradCdfExpModNormal_v_4083;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4084> AgradCdfExpModNormal_v_4084;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4085> AgradCdfExpModNormal_v_4085;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4086> AgradCdfExpModNormal_v_4086;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4087> AgradCdfExpModNormal_v_4087;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4088> AgradCdfExpModNormal_v_4088;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4089> AgradCdfExpModNormal_v_4089;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4090> AgradCdfExpModNormal_v_4090;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4091> AgradCdfExpModNormal_v_4091;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4092> AgradCdfExpModNormal_v_4092;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4093> AgradCdfExpModNormal_v_4093;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4094> AgradCdfExpModNormal_v_4094;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_v_4095> AgradCdfExpModNormal_v_4095;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4000, AgradCdfTestFixture, AgradCdfExpModNormal_v_4000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4001, AgradCdfTestFixture, AgradCdfExpModNormal_v_4001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4002, AgradCdfTestFixture, AgradCdfExpModNormal_v_4002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4003, AgradCdfTestFixture, AgradCdfExpModNormal_v_4003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4004, AgradCdfTestFixture, AgradCdfExpModNormal_v_4004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4005, AgradCdfTestFixture, AgradCdfExpModNormal_v_4005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4006, AgradCdfTestFixture, AgradCdfExpModNormal_v_4006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4007, AgradCdfTestFixture, AgradCdfExpModNormal_v_4007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4008, AgradCdfTestFixture, AgradCdfExpModNormal_v_4008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4009, AgradCdfTestFixture, AgradCdfExpModNormal_v_4009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4010, AgradCdfTestFixture, AgradCdfExpModNormal_v_4010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4011, AgradCdfTestFixture, AgradCdfExpModNormal_v_4011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4012, AgradCdfTestFixture, AgradCdfExpModNormal_v_4012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4013, AgradCdfTestFixture, AgradCdfExpModNormal_v_4013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4014, AgradCdfTestFixture, AgradCdfExpModNormal_v_4014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4015, AgradCdfTestFixture, AgradCdfExpModNormal_v_4015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4016, AgradCdfTestFixture, AgradCdfExpModNormal_v_4016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4017, AgradCdfTestFixture, AgradCdfExpModNormal_v_4017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4018, AgradCdfTestFixture, AgradCdfExpModNormal_v_4018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4019, AgradCdfTestFixture, AgradCdfExpModNormal_v_4019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4020, AgradCdfTestFixture, AgradCdfExpModNormal_v_4020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4021, AgradCdfTestFixture, AgradCdfExpModNormal_v_4021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4022, AgradCdfTestFixture, AgradCdfExpModNormal_v_4022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4023, AgradCdfTestFixture, AgradCdfExpModNormal_v_4023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4024, AgradCdfTestFixture, AgradCdfExpModNormal_v_4024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4025, AgradCdfTestFixture, AgradCdfExpModNormal_v_4025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4026, AgradCdfTestFixture, AgradCdfExpModNormal_v_4026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4027, AgradCdfTestFixture, AgradCdfExpModNormal_v_4027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4028, AgradCdfTestFixture, AgradCdfExpModNormal_v_4028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4029, AgradCdfTestFixture, AgradCdfExpModNormal_v_4029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4030, AgradCdfTestFixture, AgradCdfExpModNormal_v_4030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4031, AgradCdfTestFixture, AgradCdfExpModNormal_v_4031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4032, AgradCdfTestFixture, AgradCdfExpModNormal_v_4032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4033, AgradCdfTestFixture, AgradCdfExpModNormal_v_4033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4034, AgradCdfTestFixture, AgradCdfExpModNormal_v_4034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4035, AgradCdfTestFixture, AgradCdfExpModNormal_v_4035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4036, AgradCdfTestFixture, AgradCdfExpModNormal_v_4036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4037, AgradCdfTestFixture, AgradCdfExpModNormal_v_4037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4038, AgradCdfTestFixture, AgradCdfExpModNormal_v_4038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4039, AgradCdfTestFixture, AgradCdfExpModNormal_v_4039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4040, AgradCdfTestFixture, AgradCdfExpModNormal_v_4040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4041, AgradCdfTestFixture, AgradCdfExpModNormal_v_4041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4042, AgradCdfTestFixture, AgradCdfExpModNormal_v_4042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4043, AgradCdfTestFixture, AgradCdfExpModNormal_v_4043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4044, AgradCdfTestFixture, AgradCdfExpModNormal_v_4044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4045, AgradCdfTestFixture, AgradCdfExpModNormal_v_4045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4046, AgradCdfTestFixture, AgradCdfExpModNormal_v_4046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4047, AgradCdfTestFixture, AgradCdfExpModNormal_v_4047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4048, AgradCdfTestFixture, AgradCdfExpModNormal_v_4048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4049, AgradCdfTestFixture, AgradCdfExpModNormal_v_4049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4050, AgradCdfTestFixture, AgradCdfExpModNormal_v_4050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4051, AgradCdfTestFixture, AgradCdfExpModNormal_v_4051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4052, AgradCdfTestFixture, AgradCdfExpModNormal_v_4052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4053, AgradCdfTestFixture, AgradCdfExpModNormal_v_4053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4054, AgradCdfTestFixture, AgradCdfExpModNormal_v_4054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4055, AgradCdfTestFixture, AgradCdfExpModNormal_v_4055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4056, AgradCdfTestFixture, AgradCdfExpModNormal_v_4056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4057, AgradCdfTestFixture, AgradCdfExpModNormal_v_4057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4058, AgradCdfTestFixture, AgradCdfExpModNormal_v_4058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4059, AgradCdfTestFixture, AgradCdfExpModNormal_v_4059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4060, AgradCdfTestFixture, AgradCdfExpModNormal_v_4060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4061, AgradCdfTestFixture, AgradCdfExpModNormal_v_4061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4062, AgradCdfTestFixture, AgradCdfExpModNormal_v_4062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4063, AgradCdfTestFixture, AgradCdfExpModNormal_v_4063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4064, AgradCdfTestFixture, AgradCdfExpModNormal_v_4064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4065, AgradCdfTestFixture, AgradCdfExpModNormal_v_4065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4066, AgradCdfTestFixture, AgradCdfExpModNormal_v_4066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4067, AgradCdfTestFixture, AgradCdfExpModNormal_v_4067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4068, AgradCdfTestFixture, AgradCdfExpModNormal_v_4068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4069, AgradCdfTestFixture, AgradCdfExpModNormal_v_4069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4070, AgradCdfTestFixture, AgradCdfExpModNormal_v_4070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4071, AgradCdfTestFixture, AgradCdfExpModNormal_v_4071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4072, AgradCdfTestFixture, AgradCdfExpModNormal_v_4072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4073, AgradCdfTestFixture, AgradCdfExpModNormal_v_4073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4074, AgradCdfTestFixture, AgradCdfExpModNormal_v_4074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4075, AgradCdfTestFixture, AgradCdfExpModNormal_v_4075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4076, AgradCdfTestFixture, AgradCdfExpModNormal_v_4076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4077, AgradCdfTestFixture, AgradCdfExpModNormal_v_4077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4078, AgradCdfTestFixture, AgradCdfExpModNormal_v_4078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4079, AgradCdfTestFixture, AgradCdfExpModNormal_v_4079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4080, AgradCdfTestFixture, AgradCdfExpModNormal_v_4080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4081, AgradCdfTestFixture, AgradCdfExpModNormal_v_4081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4082, AgradCdfTestFixture, AgradCdfExpModNormal_v_4082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4083, AgradCdfTestFixture, AgradCdfExpModNormal_v_4083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4084, AgradCdfTestFixture, AgradCdfExpModNormal_v_4084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4085, AgradCdfTestFixture, AgradCdfExpModNormal_v_4085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4086, AgradCdfTestFixture, AgradCdfExpModNormal_v_4086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4087, AgradCdfTestFixture, AgradCdfExpModNormal_v_4087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4088, AgradCdfTestFixture, AgradCdfExpModNormal_v_4088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4089, AgradCdfTestFixture, AgradCdfExpModNormal_v_4089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4090, AgradCdfTestFixture, AgradCdfExpModNormal_v_4090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4091, AgradCdfTestFixture, AgradCdfExpModNormal_v_4091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4092, AgradCdfTestFixture, AgradCdfExpModNormal_v_4092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4093, AgradCdfTestFixture, AgradCdfExpModNormal_v_4093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4094, AgradCdfTestFixture, AgradCdfExpModNormal_v_4094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_v_4095, AgradCdfTestFixture, AgradCdfExpModNormal_v_4095);

