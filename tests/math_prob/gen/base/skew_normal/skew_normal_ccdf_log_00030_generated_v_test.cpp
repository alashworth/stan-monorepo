#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3000> AgradCcdfLogSkewNormal_v_3000;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3001> AgradCcdfLogSkewNormal_v_3001;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3002> AgradCcdfLogSkewNormal_v_3002;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3003> AgradCcdfLogSkewNormal_v_3003;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3004> AgradCcdfLogSkewNormal_v_3004;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3005> AgradCcdfLogSkewNormal_v_3005;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3006> AgradCcdfLogSkewNormal_v_3006;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3007> AgradCcdfLogSkewNormal_v_3007;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3008> AgradCcdfLogSkewNormal_v_3008;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3009> AgradCcdfLogSkewNormal_v_3009;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3010> AgradCcdfLogSkewNormal_v_3010;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3011> AgradCcdfLogSkewNormal_v_3011;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3012> AgradCcdfLogSkewNormal_v_3012;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3013> AgradCcdfLogSkewNormal_v_3013;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3014> AgradCcdfLogSkewNormal_v_3014;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3015> AgradCcdfLogSkewNormal_v_3015;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3016> AgradCcdfLogSkewNormal_v_3016;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3017> AgradCcdfLogSkewNormal_v_3017;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3018> AgradCcdfLogSkewNormal_v_3018;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3019> AgradCcdfLogSkewNormal_v_3019;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3020> AgradCcdfLogSkewNormal_v_3020;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3021> AgradCcdfLogSkewNormal_v_3021;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3022> AgradCcdfLogSkewNormal_v_3022;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3023> AgradCcdfLogSkewNormal_v_3023;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3024> AgradCcdfLogSkewNormal_v_3024;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3025> AgradCcdfLogSkewNormal_v_3025;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3026> AgradCcdfLogSkewNormal_v_3026;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3027> AgradCcdfLogSkewNormal_v_3027;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3028> AgradCcdfLogSkewNormal_v_3028;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3029> AgradCcdfLogSkewNormal_v_3029;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3030> AgradCcdfLogSkewNormal_v_3030;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3031> AgradCcdfLogSkewNormal_v_3031;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3032> AgradCcdfLogSkewNormal_v_3032;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3033> AgradCcdfLogSkewNormal_v_3033;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3034> AgradCcdfLogSkewNormal_v_3034;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3035> AgradCcdfLogSkewNormal_v_3035;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3036> AgradCcdfLogSkewNormal_v_3036;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3037> AgradCcdfLogSkewNormal_v_3037;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3038> AgradCcdfLogSkewNormal_v_3038;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3039> AgradCcdfLogSkewNormal_v_3039;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3040> AgradCcdfLogSkewNormal_v_3040;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3041> AgradCcdfLogSkewNormal_v_3041;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3042> AgradCcdfLogSkewNormal_v_3042;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3043> AgradCcdfLogSkewNormal_v_3043;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3044> AgradCcdfLogSkewNormal_v_3044;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3045> AgradCcdfLogSkewNormal_v_3045;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3046> AgradCcdfLogSkewNormal_v_3046;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3047> AgradCcdfLogSkewNormal_v_3047;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3048> AgradCcdfLogSkewNormal_v_3048;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3049> AgradCcdfLogSkewNormal_v_3049;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3050> AgradCcdfLogSkewNormal_v_3050;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3051> AgradCcdfLogSkewNormal_v_3051;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3052> AgradCcdfLogSkewNormal_v_3052;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3053> AgradCcdfLogSkewNormal_v_3053;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3054> AgradCcdfLogSkewNormal_v_3054;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3055> AgradCcdfLogSkewNormal_v_3055;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3056> AgradCcdfLogSkewNormal_v_3056;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3057> AgradCcdfLogSkewNormal_v_3057;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3058> AgradCcdfLogSkewNormal_v_3058;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3059> AgradCcdfLogSkewNormal_v_3059;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3060> AgradCcdfLogSkewNormal_v_3060;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3061> AgradCcdfLogSkewNormal_v_3061;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3062> AgradCcdfLogSkewNormal_v_3062;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3063> AgradCcdfLogSkewNormal_v_3063;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3064> AgradCcdfLogSkewNormal_v_3064;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3065> AgradCcdfLogSkewNormal_v_3065;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3066> AgradCcdfLogSkewNormal_v_3066;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3067> AgradCcdfLogSkewNormal_v_3067;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3068> AgradCcdfLogSkewNormal_v_3068;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3069> AgradCcdfLogSkewNormal_v_3069;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3070> AgradCcdfLogSkewNormal_v_3070;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3071> AgradCcdfLogSkewNormal_v_3071;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3072> AgradCcdfLogSkewNormal_v_3072;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3073> AgradCcdfLogSkewNormal_v_3073;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3074> AgradCcdfLogSkewNormal_v_3074;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3075> AgradCcdfLogSkewNormal_v_3075;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3076> AgradCcdfLogSkewNormal_v_3076;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3077> AgradCcdfLogSkewNormal_v_3077;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3078> AgradCcdfLogSkewNormal_v_3078;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3079> AgradCcdfLogSkewNormal_v_3079;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3080> AgradCcdfLogSkewNormal_v_3080;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3081> AgradCcdfLogSkewNormal_v_3081;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3082> AgradCcdfLogSkewNormal_v_3082;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3083> AgradCcdfLogSkewNormal_v_3083;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3084> AgradCcdfLogSkewNormal_v_3084;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3085> AgradCcdfLogSkewNormal_v_3085;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3086> AgradCcdfLogSkewNormal_v_3086;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3087> AgradCcdfLogSkewNormal_v_3087;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3088> AgradCcdfLogSkewNormal_v_3088;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3089> AgradCcdfLogSkewNormal_v_3089;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3090> AgradCcdfLogSkewNormal_v_3090;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3091> AgradCcdfLogSkewNormal_v_3091;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3092> AgradCcdfLogSkewNormal_v_3092;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3093> AgradCcdfLogSkewNormal_v_3093;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3094> AgradCcdfLogSkewNormal_v_3094;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3095> AgradCcdfLogSkewNormal_v_3095;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3096> AgradCcdfLogSkewNormal_v_3096;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3097> AgradCcdfLogSkewNormal_v_3097;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3098> AgradCcdfLogSkewNormal_v_3098;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_3099> AgradCcdfLogSkewNormal_v_3099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3000, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3001, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3002, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3003, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3004, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3005, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3006, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3007, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3008, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3009, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3010, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3011, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3012, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3013, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3014, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3015, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3016, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3017, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3018, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3019, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3020, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3021, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3022, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3023, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3024, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3025, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3026, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3027, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3028, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3029, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3030, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3031, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3032, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3033, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3034, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3035, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3036, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3037, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3038, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3039, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3040, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3041, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3042, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3043, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3044, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3045, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3046, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3047, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3048, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3049, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3050, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3051, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3052, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3053, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3054, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3055, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3056, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3057, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3058, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3059, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3060, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3061, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3062, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3063, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3064, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3065, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3066, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3067, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3068, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3069, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3070, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3071, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3072, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3073, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3074, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3075, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3076, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3077, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3078, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3079, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3080, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3081, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3082, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3083, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3084, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3085, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3086, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3087, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3088, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3089, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3090, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3091, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3092, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3093, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3094, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3095, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3096, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3097, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3098, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_3099, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_3099);

