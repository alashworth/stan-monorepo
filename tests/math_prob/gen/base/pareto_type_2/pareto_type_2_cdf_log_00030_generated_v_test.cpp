#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3000> AgradCdfLogParetoType2_v_3000;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3001> AgradCdfLogParetoType2_v_3001;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3002> AgradCdfLogParetoType2_v_3002;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3003> AgradCdfLogParetoType2_v_3003;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3004> AgradCdfLogParetoType2_v_3004;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3005> AgradCdfLogParetoType2_v_3005;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3006> AgradCdfLogParetoType2_v_3006;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3007> AgradCdfLogParetoType2_v_3007;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3008> AgradCdfLogParetoType2_v_3008;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3009> AgradCdfLogParetoType2_v_3009;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3010> AgradCdfLogParetoType2_v_3010;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3011> AgradCdfLogParetoType2_v_3011;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3012> AgradCdfLogParetoType2_v_3012;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3013> AgradCdfLogParetoType2_v_3013;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3014> AgradCdfLogParetoType2_v_3014;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3015> AgradCdfLogParetoType2_v_3015;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3016> AgradCdfLogParetoType2_v_3016;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3017> AgradCdfLogParetoType2_v_3017;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3018> AgradCdfLogParetoType2_v_3018;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3019> AgradCdfLogParetoType2_v_3019;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3020> AgradCdfLogParetoType2_v_3020;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3021> AgradCdfLogParetoType2_v_3021;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3022> AgradCdfLogParetoType2_v_3022;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3023> AgradCdfLogParetoType2_v_3023;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3024> AgradCdfLogParetoType2_v_3024;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3025> AgradCdfLogParetoType2_v_3025;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3026> AgradCdfLogParetoType2_v_3026;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3027> AgradCdfLogParetoType2_v_3027;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3028> AgradCdfLogParetoType2_v_3028;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3029> AgradCdfLogParetoType2_v_3029;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3030> AgradCdfLogParetoType2_v_3030;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3031> AgradCdfLogParetoType2_v_3031;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3032> AgradCdfLogParetoType2_v_3032;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3033> AgradCdfLogParetoType2_v_3033;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3034> AgradCdfLogParetoType2_v_3034;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3035> AgradCdfLogParetoType2_v_3035;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3036> AgradCdfLogParetoType2_v_3036;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3037> AgradCdfLogParetoType2_v_3037;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3038> AgradCdfLogParetoType2_v_3038;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3039> AgradCdfLogParetoType2_v_3039;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3040> AgradCdfLogParetoType2_v_3040;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3041> AgradCdfLogParetoType2_v_3041;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3042> AgradCdfLogParetoType2_v_3042;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3043> AgradCdfLogParetoType2_v_3043;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3044> AgradCdfLogParetoType2_v_3044;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3045> AgradCdfLogParetoType2_v_3045;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3046> AgradCdfLogParetoType2_v_3046;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3047> AgradCdfLogParetoType2_v_3047;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3048> AgradCdfLogParetoType2_v_3048;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3049> AgradCdfLogParetoType2_v_3049;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3050> AgradCdfLogParetoType2_v_3050;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3051> AgradCdfLogParetoType2_v_3051;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3052> AgradCdfLogParetoType2_v_3052;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3053> AgradCdfLogParetoType2_v_3053;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3054> AgradCdfLogParetoType2_v_3054;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3055> AgradCdfLogParetoType2_v_3055;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3056> AgradCdfLogParetoType2_v_3056;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3057> AgradCdfLogParetoType2_v_3057;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3058> AgradCdfLogParetoType2_v_3058;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3059> AgradCdfLogParetoType2_v_3059;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3060> AgradCdfLogParetoType2_v_3060;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3061> AgradCdfLogParetoType2_v_3061;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3062> AgradCdfLogParetoType2_v_3062;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3063> AgradCdfLogParetoType2_v_3063;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3064> AgradCdfLogParetoType2_v_3064;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3065> AgradCdfLogParetoType2_v_3065;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3066> AgradCdfLogParetoType2_v_3066;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3067> AgradCdfLogParetoType2_v_3067;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3068> AgradCdfLogParetoType2_v_3068;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3069> AgradCdfLogParetoType2_v_3069;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3070> AgradCdfLogParetoType2_v_3070;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3071> AgradCdfLogParetoType2_v_3071;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3072> AgradCdfLogParetoType2_v_3072;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3073> AgradCdfLogParetoType2_v_3073;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3074> AgradCdfLogParetoType2_v_3074;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3075> AgradCdfLogParetoType2_v_3075;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3076> AgradCdfLogParetoType2_v_3076;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3077> AgradCdfLogParetoType2_v_3077;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3078> AgradCdfLogParetoType2_v_3078;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3079> AgradCdfLogParetoType2_v_3079;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3080> AgradCdfLogParetoType2_v_3080;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3081> AgradCdfLogParetoType2_v_3081;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3082> AgradCdfLogParetoType2_v_3082;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3083> AgradCdfLogParetoType2_v_3083;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3084> AgradCdfLogParetoType2_v_3084;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3085> AgradCdfLogParetoType2_v_3085;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3086> AgradCdfLogParetoType2_v_3086;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3087> AgradCdfLogParetoType2_v_3087;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3088> AgradCdfLogParetoType2_v_3088;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3089> AgradCdfLogParetoType2_v_3089;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3090> AgradCdfLogParetoType2_v_3090;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3091> AgradCdfLogParetoType2_v_3091;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3092> AgradCdfLogParetoType2_v_3092;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3093> AgradCdfLogParetoType2_v_3093;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3094> AgradCdfLogParetoType2_v_3094;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3095> AgradCdfLogParetoType2_v_3095;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3096> AgradCdfLogParetoType2_v_3096;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3097> AgradCdfLogParetoType2_v_3097;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3098> AgradCdfLogParetoType2_v_3098;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_3099> AgradCdfLogParetoType2_v_3099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3000, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3001, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3002, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3003, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3004, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3005, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3006, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3007, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3008, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3009, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3010, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3011, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3012, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3013, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3014, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3015, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3016, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3017, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3018, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3019, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3020, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3021, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3022, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3023, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3024, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3025, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3026, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3027, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3028, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3029, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3030, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3031, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3032, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3033, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3034, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3035, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3036, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3037, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3038, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3039, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3040, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3041, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3042, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3043, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3044, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3045, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3046, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3047, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3048, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3049, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3050, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3051, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3052, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3053, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3054, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3055, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3056, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3057, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3058, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3059, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3060, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3061, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3062, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3063, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3064, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3065, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3066, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3067, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3068, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3069, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3070, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3071, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3072, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3073, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3074, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3075, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3076, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3077, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3078, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3079, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3080, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3081, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3082, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3083, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3084, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3085, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3086, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3087, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3088, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3089, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3090, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3091, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3092, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3093, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3094, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3095, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3096, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3097, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3098, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_3099, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_3099);

