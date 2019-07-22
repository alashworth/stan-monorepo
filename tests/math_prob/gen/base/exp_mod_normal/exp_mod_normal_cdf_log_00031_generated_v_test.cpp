#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3100;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3101;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3102;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3103;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, double, empty, empty> type_v_3104;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, std::vector<double>, empty, empty> type_v_3105;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3106;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3107;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, var, empty, empty> type_v_3108;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, std::vector<var>, empty, empty> type_v_3109;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3110;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3111;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, double, empty, empty> type_v_3112;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, std::vector<double>, empty, empty> type_v_3113;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3114;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3115;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, var, empty, empty> type_v_3116;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, std::vector<var>, empty, empty> type_v_3117;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3118;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3119;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3120;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3121;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3122;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3123;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_3124;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3125;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3126;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3127;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3128;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3129;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3130;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3131;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_3132;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3133;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3134;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3135;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, double, empty, empty> type_v_3136;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, std::vector<double>, empty, empty> type_v_3137;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3138;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3139;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, var, empty, empty> type_v_3140;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, std::vector<var>, empty, empty> type_v_3141;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3142;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3143;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, double, empty, empty> type_v_3144;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, std::vector<double>, empty, empty> type_v_3145;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3146;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3147;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, var, empty, empty> type_v_3148;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, std::vector<var>, empty, empty> type_v_3149;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3150;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3151;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_3152;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3153;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3154;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3155;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_3156;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3157;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3158;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3159;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3160;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3161;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3162;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3163;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3164;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3165;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3166;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3167;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, double, empty, empty> type_v_3168;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, std::vector<double>, empty, empty> type_v_3169;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3170;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3171;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, var, empty, empty> type_v_3172;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, std::vector<var>, empty, empty> type_v_3173;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3174;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3175;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, double, empty, empty> type_v_3176;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, std::vector<double>, empty, empty> type_v_3177;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3178;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3179;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, var, empty, empty> type_v_3180;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, std::vector<var>, empty, empty> type_v_3181;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3182;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3183;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3184;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3185;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3186;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3187;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_3188;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3189;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3190;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3191;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3192;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3193;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3194;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3195;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_3196;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3197;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3198;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3199;

typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3100> AgradCdfLogExpModNormal_v_3100;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3101> AgradCdfLogExpModNormal_v_3101;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3102> AgradCdfLogExpModNormal_v_3102;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3103> AgradCdfLogExpModNormal_v_3103;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3104> AgradCdfLogExpModNormal_v_3104;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3105> AgradCdfLogExpModNormal_v_3105;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3106> AgradCdfLogExpModNormal_v_3106;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3107> AgradCdfLogExpModNormal_v_3107;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3108> AgradCdfLogExpModNormal_v_3108;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3109> AgradCdfLogExpModNormal_v_3109;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3110> AgradCdfLogExpModNormal_v_3110;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3111> AgradCdfLogExpModNormal_v_3111;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3112> AgradCdfLogExpModNormal_v_3112;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3113> AgradCdfLogExpModNormal_v_3113;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3114> AgradCdfLogExpModNormal_v_3114;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3115> AgradCdfLogExpModNormal_v_3115;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3116> AgradCdfLogExpModNormal_v_3116;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3117> AgradCdfLogExpModNormal_v_3117;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3118> AgradCdfLogExpModNormal_v_3118;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3119> AgradCdfLogExpModNormal_v_3119;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3120> AgradCdfLogExpModNormal_v_3120;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3121> AgradCdfLogExpModNormal_v_3121;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3122> AgradCdfLogExpModNormal_v_3122;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3123> AgradCdfLogExpModNormal_v_3123;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3124> AgradCdfLogExpModNormal_v_3124;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3125> AgradCdfLogExpModNormal_v_3125;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3126> AgradCdfLogExpModNormal_v_3126;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3127> AgradCdfLogExpModNormal_v_3127;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3128> AgradCdfLogExpModNormal_v_3128;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3129> AgradCdfLogExpModNormal_v_3129;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3130> AgradCdfLogExpModNormal_v_3130;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3131> AgradCdfLogExpModNormal_v_3131;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3132> AgradCdfLogExpModNormal_v_3132;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3133> AgradCdfLogExpModNormal_v_3133;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3134> AgradCdfLogExpModNormal_v_3134;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3135> AgradCdfLogExpModNormal_v_3135;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3136> AgradCdfLogExpModNormal_v_3136;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3137> AgradCdfLogExpModNormal_v_3137;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3138> AgradCdfLogExpModNormal_v_3138;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3139> AgradCdfLogExpModNormal_v_3139;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3140> AgradCdfLogExpModNormal_v_3140;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3141> AgradCdfLogExpModNormal_v_3141;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3142> AgradCdfLogExpModNormal_v_3142;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3143> AgradCdfLogExpModNormal_v_3143;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3144> AgradCdfLogExpModNormal_v_3144;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3145> AgradCdfLogExpModNormal_v_3145;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3146> AgradCdfLogExpModNormal_v_3146;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3147> AgradCdfLogExpModNormal_v_3147;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3148> AgradCdfLogExpModNormal_v_3148;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3149> AgradCdfLogExpModNormal_v_3149;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3150> AgradCdfLogExpModNormal_v_3150;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3151> AgradCdfLogExpModNormal_v_3151;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3152> AgradCdfLogExpModNormal_v_3152;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3153> AgradCdfLogExpModNormal_v_3153;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3154> AgradCdfLogExpModNormal_v_3154;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3155> AgradCdfLogExpModNormal_v_3155;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3156> AgradCdfLogExpModNormal_v_3156;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3157> AgradCdfLogExpModNormal_v_3157;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3158> AgradCdfLogExpModNormal_v_3158;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3159> AgradCdfLogExpModNormal_v_3159;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3160> AgradCdfLogExpModNormal_v_3160;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3161> AgradCdfLogExpModNormal_v_3161;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3162> AgradCdfLogExpModNormal_v_3162;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3163> AgradCdfLogExpModNormal_v_3163;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3164> AgradCdfLogExpModNormal_v_3164;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3165> AgradCdfLogExpModNormal_v_3165;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3166> AgradCdfLogExpModNormal_v_3166;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3167> AgradCdfLogExpModNormal_v_3167;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3168> AgradCdfLogExpModNormal_v_3168;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3169> AgradCdfLogExpModNormal_v_3169;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3170> AgradCdfLogExpModNormal_v_3170;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3171> AgradCdfLogExpModNormal_v_3171;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3172> AgradCdfLogExpModNormal_v_3172;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3173> AgradCdfLogExpModNormal_v_3173;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3174> AgradCdfLogExpModNormal_v_3174;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3175> AgradCdfLogExpModNormal_v_3175;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3176> AgradCdfLogExpModNormal_v_3176;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3177> AgradCdfLogExpModNormal_v_3177;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3178> AgradCdfLogExpModNormal_v_3178;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3179> AgradCdfLogExpModNormal_v_3179;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3180> AgradCdfLogExpModNormal_v_3180;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3181> AgradCdfLogExpModNormal_v_3181;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3182> AgradCdfLogExpModNormal_v_3182;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3183> AgradCdfLogExpModNormal_v_3183;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3184> AgradCdfLogExpModNormal_v_3184;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3185> AgradCdfLogExpModNormal_v_3185;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3186> AgradCdfLogExpModNormal_v_3186;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3187> AgradCdfLogExpModNormal_v_3187;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3188> AgradCdfLogExpModNormal_v_3188;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3189> AgradCdfLogExpModNormal_v_3189;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3190> AgradCdfLogExpModNormal_v_3190;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3191> AgradCdfLogExpModNormal_v_3191;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3192> AgradCdfLogExpModNormal_v_3192;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3193> AgradCdfLogExpModNormal_v_3193;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3194> AgradCdfLogExpModNormal_v_3194;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3195> AgradCdfLogExpModNormal_v_3195;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3196> AgradCdfLogExpModNormal_v_3196;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3197> AgradCdfLogExpModNormal_v_3197;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3198> AgradCdfLogExpModNormal_v_3198;
typedef boost::mpl::vector<AgradCdfLogExpModNormal, type_v_3199> AgradCdfLogExpModNormal_v_3199;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3100, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3101, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3102, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3103, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3104, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3105, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3106, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3107, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3108, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3109, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3110, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3111, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3112, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3113, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3114, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3115, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3116, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3117, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3118, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3119, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3120, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3121, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3122, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3123, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3124, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3125, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3126, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3127, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3127);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3128, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3128);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3129, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3129);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3130, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3130);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3131, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3131);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3132, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3132);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3133, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3133);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3134, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3134);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3135, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3135);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3136, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3136);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3137, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3137);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3138, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3138);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3139, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3139);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3140, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3140);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3141, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3141);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3142, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3142);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3143, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3143);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3144, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3144);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3145, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3145);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3146, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3146);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3147, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3147);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3148, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3148);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3149, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3149);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3150, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3150);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3151, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3151);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3152, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3152);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3153, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3153);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3154, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3154);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3155, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3155);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3156, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3156);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3157, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3157);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3158, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3158);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3159, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3159);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3160, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3160);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3161, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3161);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3162, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3162);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3163, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3163);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3164, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3164);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3165, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3165);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3166, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3166);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3167, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3167);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3168, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3168);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3169, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3169);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3170, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3170);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3171, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3171);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3172, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3172);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3173, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3173);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3174, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3174);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3175, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3175);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3176, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3176);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3177, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3177);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3178, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3178);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3179, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3179);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3180, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3180);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3181, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3181);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3182, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3182);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3183, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3183);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3184, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3184);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3185, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3185);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3186, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3186);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3187, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3187);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3188, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3188);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3189, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3189);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3190, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3190);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3191, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3191);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3192, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3192);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3193, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3193);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3194, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3194);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3195, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3195);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3196, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3196);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3197, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3197);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3198, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3198);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogExpModNormal_v_3199, AgradCdfLogTestFixture, AgradCdfLogExpModNormal_v_3199);

