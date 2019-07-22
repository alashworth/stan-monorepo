#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <pareto_type_2/pareto_type_2_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4000> AgradCdfLogParetoType2_v_4000;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4001> AgradCdfLogParetoType2_v_4001;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4002> AgradCdfLogParetoType2_v_4002;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4003> AgradCdfLogParetoType2_v_4003;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4004> AgradCdfLogParetoType2_v_4004;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4005> AgradCdfLogParetoType2_v_4005;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4006> AgradCdfLogParetoType2_v_4006;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4007> AgradCdfLogParetoType2_v_4007;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4008> AgradCdfLogParetoType2_v_4008;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4009> AgradCdfLogParetoType2_v_4009;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4010> AgradCdfLogParetoType2_v_4010;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4011> AgradCdfLogParetoType2_v_4011;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4012> AgradCdfLogParetoType2_v_4012;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4013> AgradCdfLogParetoType2_v_4013;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4014> AgradCdfLogParetoType2_v_4014;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4015> AgradCdfLogParetoType2_v_4015;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4016> AgradCdfLogParetoType2_v_4016;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4017> AgradCdfLogParetoType2_v_4017;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4018> AgradCdfLogParetoType2_v_4018;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4019> AgradCdfLogParetoType2_v_4019;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4020> AgradCdfLogParetoType2_v_4020;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4021> AgradCdfLogParetoType2_v_4021;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4022> AgradCdfLogParetoType2_v_4022;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4023> AgradCdfLogParetoType2_v_4023;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4024> AgradCdfLogParetoType2_v_4024;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4025> AgradCdfLogParetoType2_v_4025;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4026> AgradCdfLogParetoType2_v_4026;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4027> AgradCdfLogParetoType2_v_4027;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4028> AgradCdfLogParetoType2_v_4028;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4029> AgradCdfLogParetoType2_v_4029;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4030> AgradCdfLogParetoType2_v_4030;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4031> AgradCdfLogParetoType2_v_4031;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4032> AgradCdfLogParetoType2_v_4032;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4033> AgradCdfLogParetoType2_v_4033;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4034> AgradCdfLogParetoType2_v_4034;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4035> AgradCdfLogParetoType2_v_4035;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4036> AgradCdfLogParetoType2_v_4036;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4037> AgradCdfLogParetoType2_v_4037;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4038> AgradCdfLogParetoType2_v_4038;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4039> AgradCdfLogParetoType2_v_4039;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4040> AgradCdfLogParetoType2_v_4040;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4041> AgradCdfLogParetoType2_v_4041;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4042> AgradCdfLogParetoType2_v_4042;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4043> AgradCdfLogParetoType2_v_4043;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4044> AgradCdfLogParetoType2_v_4044;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4045> AgradCdfLogParetoType2_v_4045;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4046> AgradCdfLogParetoType2_v_4046;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4047> AgradCdfLogParetoType2_v_4047;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4048> AgradCdfLogParetoType2_v_4048;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4049> AgradCdfLogParetoType2_v_4049;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4050> AgradCdfLogParetoType2_v_4050;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4051> AgradCdfLogParetoType2_v_4051;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4052> AgradCdfLogParetoType2_v_4052;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4053> AgradCdfLogParetoType2_v_4053;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4054> AgradCdfLogParetoType2_v_4054;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4055> AgradCdfLogParetoType2_v_4055;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4056> AgradCdfLogParetoType2_v_4056;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4057> AgradCdfLogParetoType2_v_4057;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4058> AgradCdfLogParetoType2_v_4058;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4059> AgradCdfLogParetoType2_v_4059;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4060> AgradCdfLogParetoType2_v_4060;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4061> AgradCdfLogParetoType2_v_4061;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4062> AgradCdfLogParetoType2_v_4062;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4063> AgradCdfLogParetoType2_v_4063;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4064> AgradCdfLogParetoType2_v_4064;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4065> AgradCdfLogParetoType2_v_4065;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4066> AgradCdfLogParetoType2_v_4066;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4067> AgradCdfLogParetoType2_v_4067;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4068> AgradCdfLogParetoType2_v_4068;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4069> AgradCdfLogParetoType2_v_4069;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4070> AgradCdfLogParetoType2_v_4070;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4071> AgradCdfLogParetoType2_v_4071;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4072> AgradCdfLogParetoType2_v_4072;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4073> AgradCdfLogParetoType2_v_4073;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4074> AgradCdfLogParetoType2_v_4074;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4075> AgradCdfLogParetoType2_v_4075;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4076> AgradCdfLogParetoType2_v_4076;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4077> AgradCdfLogParetoType2_v_4077;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4078> AgradCdfLogParetoType2_v_4078;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4079> AgradCdfLogParetoType2_v_4079;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4080> AgradCdfLogParetoType2_v_4080;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4081> AgradCdfLogParetoType2_v_4081;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4082> AgradCdfLogParetoType2_v_4082;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4083> AgradCdfLogParetoType2_v_4083;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4084> AgradCdfLogParetoType2_v_4084;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4085> AgradCdfLogParetoType2_v_4085;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4086> AgradCdfLogParetoType2_v_4086;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4087> AgradCdfLogParetoType2_v_4087;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4088> AgradCdfLogParetoType2_v_4088;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4089> AgradCdfLogParetoType2_v_4089;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4090> AgradCdfLogParetoType2_v_4090;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4091> AgradCdfLogParetoType2_v_4091;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4092> AgradCdfLogParetoType2_v_4092;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4093> AgradCdfLogParetoType2_v_4093;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4094> AgradCdfLogParetoType2_v_4094;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_4095> AgradCdfLogParetoType2_v_4095;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4000, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4001, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4002, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4003, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4004, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4005, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4006, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4007, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4008, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4009, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4010, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4011, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4012, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4013, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4014, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4015, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4016, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4017, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4018, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4019, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4020, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4021, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4022, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4023, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4024, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4025, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4026, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4027, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4028, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4029, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4030, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4031, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4032, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4033, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4034, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4035, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4036, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4037, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4038, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4039, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4040, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4041, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4042, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4043, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4044, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4045, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4046, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4047, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4048, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4049, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4050, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4051, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4052, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4053, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4054, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4055, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4056, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4057, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4058, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4059, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4060, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4061, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4062, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4063, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4064, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4065, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4066, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4067, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4068, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4069, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4070, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4071, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4072, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4073, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4074, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4075, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4076, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4077, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4078, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4079, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4080, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4081, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4082, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4083, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4084, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4085, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4086, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4087, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4088, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4089, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4090, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4091, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4092, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4093, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4094, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_4095, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_4095);

