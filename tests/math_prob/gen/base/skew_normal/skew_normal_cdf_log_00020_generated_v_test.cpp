#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <skew_normal/skew_normal_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4000> AgradCdfLogSkewNormal_v_4000;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4001> AgradCdfLogSkewNormal_v_4001;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4002> AgradCdfLogSkewNormal_v_4002;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4003> AgradCdfLogSkewNormal_v_4003;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4004> AgradCdfLogSkewNormal_v_4004;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4005> AgradCdfLogSkewNormal_v_4005;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4006> AgradCdfLogSkewNormal_v_4006;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4007> AgradCdfLogSkewNormal_v_4007;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4008> AgradCdfLogSkewNormal_v_4008;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4009> AgradCdfLogSkewNormal_v_4009;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4010> AgradCdfLogSkewNormal_v_4010;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4011> AgradCdfLogSkewNormal_v_4011;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4012> AgradCdfLogSkewNormal_v_4012;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4013> AgradCdfLogSkewNormal_v_4013;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4014> AgradCdfLogSkewNormal_v_4014;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4015> AgradCdfLogSkewNormal_v_4015;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4016> AgradCdfLogSkewNormal_v_4016;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4017> AgradCdfLogSkewNormal_v_4017;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4018> AgradCdfLogSkewNormal_v_4018;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4019> AgradCdfLogSkewNormal_v_4019;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4020> AgradCdfLogSkewNormal_v_4020;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4021> AgradCdfLogSkewNormal_v_4021;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4022> AgradCdfLogSkewNormal_v_4022;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4023> AgradCdfLogSkewNormal_v_4023;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4024> AgradCdfLogSkewNormal_v_4024;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4025> AgradCdfLogSkewNormal_v_4025;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4026> AgradCdfLogSkewNormal_v_4026;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4027> AgradCdfLogSkewNormal_v_4027;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4028> AgradCdfLogSkewNormal_v_4028;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4029> AgradCdfLogSkewNormal_v_4029;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4030> AgradCdfLogSkewNormal_v_4030;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4031> AgradCdfLogSkewNormal_v_4031;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4032> AgradCdfLogSkewNormal_v_4032;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4033> AgradCdfLogSkewNormal_v_4033;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4034> AgradCdfLogSkewNormal_v_4034;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4035> AgradCdfLogSkewNormal_v_4035;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4036> AgradCdfLogSkewNormal_v_4036;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4037> AgradCdfLogSkewNormal_v_4037;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4038> AgradCdfLogSkewNormal_v_4038;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4039> AgradCdfLogSkewNormal_v_4039;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4040> AgradCdfLogSkewNormal_v_4040;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4041> AgradCdfLogSkewNormal_v_4041;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4042> AgradCdfLogSkewNormal_v_4042;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4043> AgradCdfLogSkewNormal_v_4043;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4044> AgradCdfLogSkewNormal_v_4044;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4045> AgradCdfLogSkewNormal_v_4045;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4046> AgradCdfLogSkewNormal_v_4046;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4047> AgradCdfLogSkewNormal_v_4047;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4048> AgradCdfLogSkewNormal_v_4048;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4049> AgradCdfLogSkewNormal_v_4049;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4050> AgradCdfLogSkewNormal_v_4050;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4051> AgradCdfLogSkewNormal_v_4051;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4052> AgradCdfLogSkewNormal_v_4052;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4053> AgradCdfLogSkewNormal_v_4053;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4054> AgradCdfLogSkewNormal_v_4054;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4055> AgradCdfLogSkewNormal_v_4055;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4056> AgradCdfLogSkewNormal_v_4056;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4057> AgradCdfLogSkewNormal_v_4057;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4058> AgradCdfLogSkewNormal_v_4058;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4059> AgradCdfLogSkewNormal_v_4059;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4060> AgradCdfLogSkewNormal_v_4060;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4061> AgradCdfLogSkewNormal_v_4061;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4062> AgradCdfLogSkewNormal_v_4062;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4063> AgradCdfLogSkewNormal_v_4063;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4064> AgradCdfLogSkewNormal_v_4064;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4065> AgradCdfLogSkewNormal_v_4065;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4066> AgradCdfLogSkewNormal_v_4066;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4067> AgradCdfLogSkewNormal_v_4067;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4068> AgradCdfLogSkewNormal_v_4068;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4069> AgradCdfLogSkewNormal_v_4069;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4070> AgradCdfLogSkewNormal_v_4070;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4071> AgradCdfLogSkewNormal_v_4071;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4072> AgradCdfLogSkewNormal_v_4072;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4073> AgradCdfLogSkewNormal_v_4073;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4074> AgradCdfLogSkewNormal_v_4074;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4075> AgradCdfLogSkewNormal_v_4075;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4076> AgradCdfLogSkewNormal_v_4076;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4077> AgradCdfLogSkewNormal_v_4077;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4078> AgradCdfLogSkewNormal_v_4078;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4079> AgradCdfLogSkewNormal_v_4079;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4080> AgradCdfLogSkewNormal_v_4080;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4081> AgradCdfLogSkewNormal_v_4081;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4082> AgradCdfLogSkewNormal_v_4082;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4083> AgradCdfLogSkewNormal_v_4083;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4084> AgradCdfLogSkewNormal_v_4084;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4085> AgradCdfLogSkewNormal_v_4085;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4086> AgradCdfLogSkewNormal_v_4086;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4087> AgradCdfLogSkewNormal_v_4087;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4088> AgradCdfLogSkewNormal_v_4088;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4089> AgradCdfLogSkewNormal_v_4089;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4090> AgradCdfLogSkewNormal_v_4090;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4091> AgradCdfLogSkewNormal_v_4091;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4092> AgradCdfLogSkewNormal_v_4092;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4093> AgradCdfLogSkewNormal_v_4093;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4094> AgradCdfLogSkewNormal_v_4094;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_4095> AgradCdfLogSkewNormal_v_4095;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4000, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4001, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4002, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4003, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4004, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4005, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4006, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4007, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4008, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4009, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4010, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4011, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4012, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4013, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4014, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4015, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4016, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4017, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4018, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4019, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4020, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4021, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4022, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4023, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4024, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4025, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4026, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4027, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4028, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4029, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4030, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4031, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4032, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4033, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4034, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4035, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4036, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4037, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4038, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4039, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4040, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4041, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4042, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4043, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4044, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4045, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4046, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4047, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4048, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4049, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4050, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4051, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4052, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4053, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4054, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4055, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4056, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4057, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4058, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4059, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4060, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4061, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4062, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4063, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4064, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4065, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4066, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4067, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4068, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4069, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4070, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4071, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4072, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4073, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4074, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4075, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4076, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4077, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4078, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4079, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4080, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4081, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4082, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4083, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4084, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4085, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4086, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4087, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4088, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4089, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4090, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4091, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4092, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4093, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4094, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_4095, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_4095);

