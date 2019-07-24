#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_ccdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2800;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2801;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2802;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2803;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2804;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2805;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2806;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2807;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2808;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2809;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2810;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2811;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2812;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2813;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2814;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2815;
typedef boost::mpl::vector<std::vector<var>, var, double, double, empty, empty> type_v_2816;
typedef boost::mpl::vector<std::vector<var>, var, double, std::vector<double>, empty, empty> type_v_2817;
typedef boost::mpl::vector<std::vector<var>, var, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2818;
typedef boost::mpl::vector<std::vector<var>, var, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2819;
typedef boost::mpl::vector<std::vector<var>, var, double, var, empty, empty> type_v_2820;
typedef boost::mpl::vector<std::vector<var>, var, double, std::vector<var>, empty, empty> type_v_2821;
typedef boost::mpl::vector<std::vector<var>, var, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2822;
typedef boost::mpl::vector<std::vector<var>, var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2823;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, double, empty, empty> type_v_2824;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, std::vector<double>, empty, empty> type_v_2825;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2826;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2827;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, var, empty, empty> type_v_2828;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, std::vector<var>, empty, empty> type_v_2829;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2830;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2831;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_2832;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2833;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2834;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2835;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_2836;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2837;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2838;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2839;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_2840;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2841;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2842;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2843;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_2844;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2845;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2846;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2847;
typedef boost::mpl::vector<std::vector<var>, var, var, double, empty, empty> type_v_2848;
typedef boost::mpl::vector<std::vector<var>, var, var, std::vector<double>, empty, empty> type_v_2849;
typedef boost::mpl::vector<std::vector<var>, var, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2850;
typedef boost::mpl::vector<std::vector<var>, var, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2851;
typedef boost::mpl::vector<std::vector<var>, var, var, var, empty, empty> type_v_2852;
typedef boost::mpl::vector<std::vector<var>, var, var, std::vector<var>, empty, empty> type_v_2853;
typedef boost::mpl::vector<std::vector<var>, var, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2854;
typedef boost::mpl::vector<std::vector<var>, var, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2855;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, double, empty, empty> type_v_2856;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, std::vector<double>, empty, empty> type_v_2857;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2858;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2859;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, var, empty, empty> type_v_2860;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, std::vector<var>, empty, empty> type_v_2861;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2862;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2863;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2864;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2865;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2866;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2867;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2868;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2869;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2870;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2871;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2872;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2873;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2874;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2875;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2876;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2877;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2878;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2879;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, double, empty, empty> type_v_2880;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, std::vector<double>, empty, empty> type_v_2881;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2882;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2883;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, var, empty, empty> type_v_2884;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, std::vector<var>, empty, empty> type_v_2885;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2886;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2887;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, double, empty, empty> type_v_2888;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, std::vector<double>, empty, empty> type_v_2889;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2890;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2891;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, var, empty, empty> type_v_2892;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, std::vector<var>, empty, empty> type_v_2893;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2894;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2895;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_2896;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2897;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2898;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2899;

typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2800> AgradCcdfLogExpModNormal_v_2800;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2801> AgradCcdfLogExpModNormal_v_2801;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2802> AgradCcdfLogExpModNormal_v_2802;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2803> AgradCcdfLogExpModNormal_v_2803;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2804> AgradCcdfLogExpModNormal_v_2804;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2805> AgradCcdfLogExpModNormal_v_2805;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2806> AgradCcdfLogExpModNormal_v_2806;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2807> AgradCcdfLogExpModNormal_v_2807;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2808> AgradCcdfLogExpModNormal_v_2808;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2809> AgradCcdfLogExpModNormal_v_2809;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2810> AgradCcdfLogExpModNormal_v_2810;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2811> AgradCcdfLogExpModNormal_v_2811;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2812> AgradCcdfLogExpModNormal_v_2812;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2813> AgradCcdfLogExpModNormal_v_2813;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2814> AgradCcdfLogExpModNormal_v_2814;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2815> AgradCcdfLogExpModNormal_v_2815;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2816> AgradCcdfLogExpModNormal_v_2816;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2817> AgradCcdfLogExpModNormal_v_2817;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2818> AgradCcdfLogExpModNormal_v_2818;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2819> AgradCcdfLogExpModNormal_v_2819;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2820> AgradCcdfLogExpModNormal_v_2820;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2821> AgradCcdfLogExpModNormal_v_2821;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2822> AgradCcdfLogExpModNormal_v_2822;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2823> AgradCcdfLogExpModNormal_v_2823;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2824> AgradCcdfLogExpModNormal_v_2824;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2825> AgradCcdfLogExpModNormal_v_2825;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2826> AgradCcdfLogExpModNormal_v_2826;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2827> AgradCcdfLogExpModNormal_v_2827;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2828> AgradCcdfLogExpModNormal_v_2828;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2829> AgradCcdfLogExpModNormal_v_2829;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2830> AgradCcdfLogExpModNormal_v_2830;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2831> AgradCcdfLogExpModNormal_v_2831;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2832> AgradCcdfLogExpModNormal_v_2832;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2833> AgradCcdfLogExpModNormal_v_2833;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2834> AgradCcdfLogExpModNormal_v_2834;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2835> AgradCcdfLogExpModNormal_v_2835;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2836> AgradCcdfLogExpModNormal_v_2836;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2837> AgradCcdfLogExpModNormal_v_2837;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2838> AgradCcdfLogExpModNormal_v_2838;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2839> AgradCcdfLogExpModNormal_v_2839;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2840> AgradCcdfLogExpModNormal_v_2840;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2841> AgradCcdfLogExpModNormal_v_2841;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2842> AgradCcdfLogExpModNormal_v_2842;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2843> AgradCcdfLogExpModNormal_v_2843;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2844> AgradCcdfLogExpModNormal_v_2844;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2845> AgradCcdfLogExpModNormal_v_2845;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2846> AgradCcdfLogExpModNormal_v_2846;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2847> AgradCcdfLogExpModNormal_v_2847;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2848> AgradCcdfLogExpModNormal_v_2848;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2849> AgradCcdfLogExpModNormal_v_2849;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2850> AgradCcdfLogExpModNormal_v_2850;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2851> AgradCcdfLogExpModNormal_v_2851;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2852> AgradCcdfLogExpModNormal_v_2852;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2853> AgradCcdfLogExpModNormal_v_2853;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2854> AgradCcdfLogExpModNormal_v_2854;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2855> AgradCcdfLogExpModNormal_v_2855;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2856> AgradCcdfLogExpModNormal_v_2856;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2857> AgradCcdfLogExpModNormal_v_2857;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2858> AgradCcdfLogExpModNormal_v_2858;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2859> AgradCcdfLogExpModNormal_v_2859;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2860> AgradCcdfLogExpModNormal_v_2860;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2861> AgradCcdfLogExpModNormal_v_2861;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2862> AgradCcdfLogExpModNormal_v_2862;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2863> AgradCcdfLogExpModNormal_v_2863;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2864> AgradCcdfLogExpModNormal_v_2864;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2865> AgradCcdfLogExpModNormal_v_2865;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2866> AgradCcdfLogExpModNormal_v_2866;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2867> AgradCcdfLogExpModNormal_v_2867;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2868> AgradCcdfLogExpModNormal_v_2868;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2869> AgradCcdfLogExpModNormal_v_2869;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2870> AgradCcdfLogExpModNormal_v_2870;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2871> AgradCcdfLogExpModNormal_v_2871;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2872> AgradCcdfLogExpModNormal_v_2872;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2873> AgradCcdfLogExpModNormal_v_2873;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2874> AgradCcdfLogExpModNormal_v_2874;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2875> AgradCcdfLogExpModNormal_v_2875;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2876> AgradCcdfLogExpModNormal_v_2876;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2877> AgradCcdfLogExpModNormal_v_2877;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2878> AgradCcdfLogExpModNormal_v_2878;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2879> AgradCcdfLogExpModNormal_v_2879;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2880> AgradCcdfLogExpModNormal_v_2880;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2881> AgradCcdfLogExpModNormal_v_2881;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2882> AgradCcdfLogExpModNormal_v_2882;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2883> AgradCcdfLogExpModNormal_v_2883;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2884> AgradCcdfLogExpModNormal_v_2884;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2885> AgradCcdfLogExpModNormal_v_2885;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2886> AgradCcdfLogExpModNormal_v_2886;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2887> AgradCcdfLogExpModNormal_v_2887;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2888> AgradCcdfLogExpModNormal_v_2888;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2889> AgradCcdfLogExpModNormal_v_2889;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2890> AgradCcdfLogExpModNormal_v_2890;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2891> AgradCcdfLogExpModNormal_v_2891;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2892> AgradCcdfLogExpModNormal_v_2892;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2893> AgradCcdfLogExpModNormal_v_2893;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2894> AgradCcdfLogExpModNormal_v_2894;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2895> AgradCcdfLogExpModNormal_v_2895;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2896> AgradCcdfLogExpModNormal_v_2896;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2897> AgradCcdfLogExpModNormal_v_2897;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2898> AgradCcdfLogExpModNormal_v_2898;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_2899> AgradCcdfLogExpModNormal_v_2899;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2800, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2801, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2802, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2803, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2804, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2805, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2806, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2807, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2808, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2809, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2810, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2811, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2812, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2813, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2814, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2815, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2816, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2817, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2818, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2819, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2820, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2821, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2822, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2823, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2824, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2825, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2826, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2827, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2828, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2829, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2830, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2831, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2832, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2833, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2834, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2835, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2836, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2837, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2838, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2839, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2839);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2840, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2840);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2841, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2841);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2842, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2842);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2843, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2843);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2844, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2844);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2845, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2845);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2846, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2846);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2847, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2847);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2848, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2848);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2849, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2849);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2850, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2850);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2851, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2851);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2852, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2852);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2853, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2853);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2854, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2854);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2855, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2855);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2856, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2856);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2857, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2857);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2858, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2858);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2859, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2859);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2860, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2860);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2861, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2861);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2862, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2862);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2863, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2863);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2864, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2864);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2865, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2865);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2866, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2866);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2867, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2867);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2868, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2868);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2869, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2869);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2870, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2870);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2871, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2871);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2872, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2872);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2873, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2873);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2874, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2874);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2875, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2875);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2876, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2876);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2877, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2877);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2878, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2878);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2879, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2879);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2880, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2880);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2881, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2881);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2882, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2882);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2883, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2883);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2884, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2884);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2885, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2885);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2886, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2886);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2887, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2887);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2888, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2888);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2889, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2889);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2890, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2890);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2891, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2891);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2892, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2892);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2893, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2893);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2894, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2894);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2895, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2895);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2896, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2896);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2897, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2897);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2898, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2898);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_2899, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_2899);
