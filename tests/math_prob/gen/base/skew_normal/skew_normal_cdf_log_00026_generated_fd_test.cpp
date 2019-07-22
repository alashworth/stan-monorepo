#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, double, empty, empty> type_fd_2600;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_2601;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2602;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2603;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_2604;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_2605;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2606;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2607;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2608;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2609;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2610;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2611;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2612;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2613;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2614;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2615;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2616;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2617;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2618;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2619;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2620;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2621;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2622;
typedef boost::mpl::vector<std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2623;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, double, empty, empty> type_fd_2624;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, std::vector<double>, empty, empty> type_fd_2625;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2626;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2627;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, fvar<double>, empty, empty> type_fd_2628;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, std::vector<fvar<double>>, empty, empty> type_fd_2629;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2630;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2631;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, double, empty, empty> type_fd_2632;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, std::vector<double>, empty, empty> type_fd_2633;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2634;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2635;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, fvar<double>, empty, empty> type_fd_2636;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_2637;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2638;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2639;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2640;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2641;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2642;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2643;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2644;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2645;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2646;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2647;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2648;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2649;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2650;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2651;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2652;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2653;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2654;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2655;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, double, empty, empty> type_fd_2656;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, std::vector<double>, empty, empty> type_fd_2657;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2658;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2659;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, fvar<double>, empty, empty> type_fd_2660;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_2661;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2662;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2663;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, double, empty, empty> type_fd_2664;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_2665;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2666;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2667;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_2668;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_2669;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2670;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2671;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2672;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2673;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2674;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2675;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2676;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2677;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2678;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2679;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2680;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2681;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2682;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2683;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2684;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2685;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2686;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2687;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, double, empty, empty> type_fd_2688;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty> type_fd_2689;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2690;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2691;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, fvar<double>, empty, empty> type_fd_2692;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, std::vector<fvar<double>>, empty, empty> type_fd_2693;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2694;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2695;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty> type_fd_2696;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty> type_fd_2697;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2698;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2699;

typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2600> AgradCdfLogSkewNormal_fd_2600;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2601> AgradCdfLogSkewNormal_fd_2601;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2602> AgradCdfLogSkewNormal_fd_2602;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2603> AgradCdfLogSkewNormal_fd_2603;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2604> AgradCdfLogSkewNormal_fd_2604;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2605> AgradCdfLogSkewNormal_fd_2605;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2606> AgradCdfLogSkewNormal_fd_2606;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2607> AgradCdfLogSkewNormal_fd_2607;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2608> AgradCdfLogSkewNormal_fd_2608;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2609> AgradCdfLogSkewNormal_fd_2609;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2610> AgradCdfLogSkewNormal_fd_2610;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2611> AgradCdfLogSkewNormal_fd_2611;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2612> AgradCdfLogSkewNormal_fd_2612;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2613> AgradCdfLogSkewNormal_fd_2613;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2614> AgradCdfLogSkewNormal_fd_2614;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2615> AgradCdfLogSkewNormal_fd_2615;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2616> AgradCdfLogSkewNormal_fd_2616;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2617> AgradCdfLogSkewNormal_fd_2617;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2618> AgradCdfLogSkewNormal_fd_2618;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2619> AgradCdfLogSkewNormal_fd_2619;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2620> AgradCdfLogSkewNormal_fd_2620;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2621> AgradCdfLogSkewNormal_fd_2621;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2622> AgradCdfLogSkewNormal_fd_2622;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2623> AgradCdfLogSkewNormal_fd_2623;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2624> AgradCdfLogSkewNormal_fd_2624;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2625> AgradCdfLogSkewNormal_fd_2625;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2626> AgradCdfLogSkewNormal_fd_2626;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2627> AgradCdfLogSkewNormal_fd_2627;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2628> AgradCdfLogSkewNormal_fd_2628;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2629> AgradCdfLogSkewNormal_fd_2629;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2630> AgradCdfLogSkewNormal_fd_2630;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2631> AgradCdfLogSkewNormal_fd_2631;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2632> AgradCdfLogSkewNormal_fd_2632;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2633> AgradCdfLogSkewNormal_fd_2633;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2634> AgradCdfLogSkewNormal_fd_2634;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2635> AgradCdfLogSkewNormal_fd_2635;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2636> AgradCdfLogSkewNormal_fd_2636;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2637> AgradCdfLogSkewNormal_fd_2637;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2638> AgradCdfLogSkewNormal_fd_2638;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2639> AgradCdfLogSkewNormal_fd_2639;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2640> AgradCdfLogSkewNormal_fd_2640;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2641> AgradCdfLogSkewNormal_fd_2641;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2642> AgradCdfLogSkewNormal_fd_2642;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2643> AgradCdfLogSkewNormal_fd_2643;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2644> AgradCdfLogSkewNormal_fd_2644;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2645> AgradCdfLogSkewNormal_fd_2645;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2646> AgradCdfLogSkewNormal_fd_2646;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2647> AgradCdfLogSkewNormal_fd_2647;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2648> AgradCdfLogSkewNormal_fd_2648;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2649> AgradCdfLogSkewNormal_fd_2649;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2650> AgradCdfLogSkewNormal_fd_2650;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2651> AgradCdfLogSkewNormal_fd_2651;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2652> AgradCdfLogSkewNormal_fd_2652;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2653> AgradCdfLogSkewNormal_fd_2653;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2654> AgradCdfLogSkewNormal_fd_2654;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2655> AgradCdfLogSkewNormal_fd_2655;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2656> AgradCdfLogSkewNormal_fd_2656;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2657> AgradCdfLogSkewNormal_fd_2657;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2658> AgradCdfLogSkewNormal_fd_2658;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2659> AgradCdfLogSkewNormal_fd_2659;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2660> AgradCdfLogSkewNormal_fd_2660;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2661> AgradCdfLogSkewNormal_fd_2661;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2662> AgradCdfLogSkewNormal_fd_2662;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2663> AgradCdfLogSkewNormal_fd_2663;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2664> AgradCdfLogSkewNormal_fd_2664;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2665> AgradCdfLogSkewNormal_fd_2665;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2666> AgradCdfLogSkewNormal_fd_2666;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2667> AgradCdfLogSkewNormal_fd_2667;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2668> AgradCdfLogSkewNormal_fd_2668;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2669> AgradCdfLogSkewNormal_fd_2669;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2670> AgradCdfLogSkewNormal_fd_2670;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2671> AgradCdfLogSkewNormal_fd_2671;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2672> AgradCdfLogSkewNormal_fd_2672;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2673> AgradCdfLogSkewNormal_fd_2673;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2674> AgradCdfLogSkewNormal_fd_2674;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2675> AgradCdfLogSkewNormal_fd_2675;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2676> AgradCdfLogSkewNormal_fd_2676;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2677> AgradCdfLogSkewNormal_fd_2677;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2678> AgradCdfLogSkewNormal_fd_2678;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2679> AgradCdfLogSkewNormal_fd_2679;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2680> AgradCdfLogSkewNormal_fd_2680;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2681> AgradCdfLogSkewNormal_fd_2681;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2682> AgradCdfLogSkewNormal_fd_2682;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2683> AgradCdfLogSkewNormal_fd_2683;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2684> AgradCdfLogSkewNormal_fd_2684;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2685> AgradCdfLogSkewNormal_fd_2685;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2686> AgradCdfLogSkewNormal_fd_2686;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2687> AgradCdfLogSkewNormal_fd_2687;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2688> AgradCdfLogSkewNormal_fd_2688;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2689> AgradCdfLogSkewNormal_fd_2689;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2690> AgradCdfLogSkewNormal_fd_2690;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2691> AgradCdfLogSkewNormal_fd_2691;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2692> AgradCdfLogSkewNormal_fd_2692;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2693> AgradCdfLogSkewNormal_fd_2693;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2694> AgradCdfLogSkewNormal_fd_2694;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2695> AgradCdfLogSkewNormal_fd_2695;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2696> AgradCdfLogSkewNormal_fd_2696;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2697> AgradCdfLogSkewNormal_fd_2697;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2698> AgradCdfLogSkewNormal_fd_2698;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2699> AgradCdfLogSkewNormal_fd_2699;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2600, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2600);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2601, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2601);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2602, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2602);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2603, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2603);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2604, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2604);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2605, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2605);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2606, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2606);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2607, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2607);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2608, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2608);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2609, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2609);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2610, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2610);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2611, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2611);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2612, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2612);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2613, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2613);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2614, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2614);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2615, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2615);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2616, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2616);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2617, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2617);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2618, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2618);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2619, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2619);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2620, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2620);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2621, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2621);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2622, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2622);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2623, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2623);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2624, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2624);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2625, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2625);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2626, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2626);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2627, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2627);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2628, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2628);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2629, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2629);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2630, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2630);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2631, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2631);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2632, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2632);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2633, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2633);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2634, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2634);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2635, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2635);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2636, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2636);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2637, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2637);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2638, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2638);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2639, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2639);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2640, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2640);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2641, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2641);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2642, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2642);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2643, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2643);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2644, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2644);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2645, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2645);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2646, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2646);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2647, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2647);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2648, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2648);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2649, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2649);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2650, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2650);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2651, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2651);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2652, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2652);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2653, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2653);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2654, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2654);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2655, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2655);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2656, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2656);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2657, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2657);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2658, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2658);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2659, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2659);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2660, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2660);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2661, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2661);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2662, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2662);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2663, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2663);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2664, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2664);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2665, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2665);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2666, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2666);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2667, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2667);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2668, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2668);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2669, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2669);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2670, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2670);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2671, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2671);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2672, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2672);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2673, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2673);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2674, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2674);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2675, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2675);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2676, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2676);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2677, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2677);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2678, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2678);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2679, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2679);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2680, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2680);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2681, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2681);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2682, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2682);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2683, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2683);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2684, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2684);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2685, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2685);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2686, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2686);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2687, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2687);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2688, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2688);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2689, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2689);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2690, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2690);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2691, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2691);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2692, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2692);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2693, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2693);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2694, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2694);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2695, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2695);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2696, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2696);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2697, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2697);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2698, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2698);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2699, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2699);

