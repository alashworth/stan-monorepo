#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3000;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3001;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3002;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3003;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_3004;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3005;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3006;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3007;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, double, empty, empty> type_v_3008;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_v_3009;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3010;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3011;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, empty, empty> type_v_3012;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, empty, empty> type_v_3013;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3014;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3015;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_v_3016;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_v_3017;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3018;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3019;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, empty, empty> type_v_3020;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, empty, empty> type_v_3021;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3022;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3023;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_3024;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3025;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3026;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3027;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_3028;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3029;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3030;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3031;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3032;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3033;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3034;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3035;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3036;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3037;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3038;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3039;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, empty, empty> type_v_3040;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty> type_v_3041;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3042;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3043;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, empty, empty> type_v_3044;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty> type_v_3045;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3046;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3047;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty> type_v_3048;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty> type_v_3049;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3050;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3051;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty> type_v_3052;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty> type_v_3053;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3054;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3055;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3056;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3057;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3058;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3059;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_3060;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3061;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3062;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3063;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3064;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3065;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3066;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3067;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_3068;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3069;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3070;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3071;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, double, empty, empty> type_v_3072;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, std::vector<double>, empty, empty> type_v_3073;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3074;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3075;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, var, empty, empty> type_v_3076;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, std::vector<var>, empty, empty> type_v_3077;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3078;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3079;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, double, empty, empty> type_v_3080;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, std::vector<double>, empty, empty> type_v_3081;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3082;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3083;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, var, empty, empty> type_v_3084;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, std::vector<var>, empty, empty> type_v_3085;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3086;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3087;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_3088;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3089;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3090;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3091;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_3092;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3093;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3094;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3095;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3096;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3097;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3098;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3099;

typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3000> AgradCdfLogExpModNormal_v_3000;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3001> AgradCdfLogExpModNormal_v_3001;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3002> AgradCdfLogExpModNormal_v_3002;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3003> AgradCdfLogExpModNormal_v_3003;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3004> AgradCdfLogExpModNormal_v_3004;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3005> AgradCdfLogExpModNormal_v_3005;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3006> AgradCdfLogExpModNormal_v_3006;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3007> AgradCdfLogExpModNormal_v_3007;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3008> AgradCdfLogExpModNormal_v_3008;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3009> AgradCdfLogExpModNormal_v_3009;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3010> AgradCdfLogExpModNormal_v_3010;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3011> AgradCdfLogExpModNormal_v_3011;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3012> AgradCdfLogExpModNormal_v_3012;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3013> AgradCdfLogExpModNormal_v_3013;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3014> AgradCdfLogExpModNormal_v_3014;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3015> AgradCdfLogExpModNormal_v_3015;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3016> AgradCdfLogExpModNormal_v_3016;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3017> AgradCdfLogExpModNormal_v_3017;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3018> AgradCdfLogExpModNormal_v_3018;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3019> AgradCdfLogExpModNormal_v_3019;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3020> AgradCdfLogExpModNormal_v_3020;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3021> AgradCdfLogExpModNormal_v_3021;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3022> AgradCdfLogExpModNormal_v_3022;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3023> AgradCdfLogExpModNormal_v_3023;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3024> AgradCdfLogExpModNormal_v_3024;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3025> AgradCdfLogExpModNormal_v_3025;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3026> AgradCdfLogExpModNormal_v_3026;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3027> AgradCdfLogExpModNormal_v_3027;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3028> AgradCdfLogExpModNormal_v_3028;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3029> AgradCdfLogExpModNormal_v_3029;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3030> AgradCdfLogExpModNormal_v_3030;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3031> AgradCdfLogExpModNormal_v_3031;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3032> AgradCdfLogExpModNormal_v_3032;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3033> AgradCdfLogExpModNormal_v_3033;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3034> AgradCdfLogExpModNormal_v_3034;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3035> AgradCdfLogExpModNormal_v_3035;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3036> AgradCdfLogExpModNormal_v_3036;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3037> AgradCdfLogExpModNormal_v_3037;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3038> AgradCdfLogExpModNormal_v_3038;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3039> AgradCdfLogExpModNormal_v_3039;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3040> AgradCdfLogExpModNormal_v_3040;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3041> AgradCdfLogExpModNormal_v_3041;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3042> AgradCdfLogExpModNormal_v_3042;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3043> AgradCdfLogExpModNormal_v_3043;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3044> AgradCdfLogExpModNormal_v_3044;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3045> AgradCdfLogExpModNormal_v_3045;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3046> AgradCdfLogExpModNormal_v_3046;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3047> AgradCdfLogExpModNormal_v_3047;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3048> AgradCdfLogExpModNormal_v_3048;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3049> AgradCdfLogExpModNormal_v_3049;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3050> AgradCdfLogExpModNormal_v_3050;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3051> AgradCdfLogExpModNormal_v_3051;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3052> AgradCdfLogExpModNormal_v_3052;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3053> AgradCdfLogExpModNormal_v_3053;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3054> AgradCdfLogExpModNormal_v_3054;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3055> AgradCdfLogExpModNormal_v_3055;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3056> AgradCdfLogExpModNormal_v_3056;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3057> AgradCdfLogExpModNormal_v_3057;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3058> AgradCdfLogExpModNormal_v_3058;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3059> AgradCdfLogExpModNormal_v_3059;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3060> AgradCdfLogExpModNormal_v_3060;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3061> AgradCdfLogExpModNormal_v_3061;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3062> AgradCdfLogExpModNormal_v_3062;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3063> AgradCdfLogExpModNormal_v_3063;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3064> AgradCdfLogExpModNormal_v_3064;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3065> AgradCdfLogExpModNormal_v_3065;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3066> AgradCdfLogExpModNormal_v_3066;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3067> AgradCdfLogExpModNormal_v_3067;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3068> AgradCdfLogExpModNormal_v_3068;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3069> AgradCdfLogExpModNormal_v_3069;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3070> AgradCdfLogExpModNormal_v_3070;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3071> AgradCdfLogExpModNormal_v_3071;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3072> AgradCdfLogExpModNormal_v_3072;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3073> AgradCdfLogExpModNormal_v_3073;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3074> AgradCdfLogExpModNormal_v_3074;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3075> AgradCdfLogExpModNormal_v_3075;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3076> AgradCdfLogExpModNormal_v_3076;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3077> AgradCdfLogExpModNormal_v_3077;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3078> AgradCdfLogExpModNormal_v_3078;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3079> AgradCdfLogExpModNormal_v_3079;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3080> AgradCdfLogExpModNormal_v_3080;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3081> AgradCdfLogExpModNormal_v_3081;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3082> AgradCdfLogExpModNormal_v_3082;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3083> AgradCdfLogExpModNormal_v_3083;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3084> AgradCdfLogExpModNormal_v_3084;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3085> AgradCdfLogExpModNormal_v_3085;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3086> AgradCdfLogExpModNormal_v_3086;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3087> AgradCdfLogExpModNormal_v_3087;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3088> AgradCdfLogExpModNormal_v_3088;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3089> AgradCdfLogExpModNormal_v_3089;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3090> AgradCdfLogExpModNormal_v_3090;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3091> AgradCdfLogExpModNormal_v_3091;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3092> AgradCdfLogExpModNormal_v_3092;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3093> AgradCdfLogExpModNormal_v_3093;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3094> AgradCdfLogExpModNormal_v_3094;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3095> AgradCdfLogExpModNormal_v_3095;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3096> AgradCdfLogExpModNormal_v_3096;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3097> AgradCdfLogExpModNormal_v_3097;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3098> AgradCdfLogExpModNormal_v_3098;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3099> AgradCdfLogExpModNormal_v_3099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3000, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3001, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3002, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3003, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3004, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3005, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3006, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3007, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3008, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3009, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3010, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3011, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3012, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3013, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3014, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3015, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3016, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3017, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3018, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3019, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3020, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3021, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3022, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3023, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3024, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3025, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3026, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3027, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3028, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3029, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3030, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3031, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3032, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3033, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3034, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3035, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3036, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3037, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3038, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3039, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3040, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3041, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3042, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3043, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3044, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3045, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3046, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3047, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3048, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3049, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3050, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3051, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3052, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3053, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3054, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3055, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3056, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3057, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3058, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3059, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3060, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3061, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3062, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3063, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3064, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3065, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3066, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3067, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3068, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3069, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3070, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3071, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3072, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3073, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3074, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3075, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3076, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3077, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3078, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3079, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3080, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3081, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3082, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3083, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3084, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3085, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3086, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3087, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3088, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3089, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3090, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3091, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3092, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3093, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3094, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3095, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3096, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3097, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3098, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3099, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3099);

