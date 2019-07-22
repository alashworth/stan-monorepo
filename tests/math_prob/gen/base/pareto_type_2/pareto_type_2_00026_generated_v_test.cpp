#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_test.hpp>

typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, double, empty, empty> type_v_2600;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, std::vector<double>, empty, empty> type_v_2601;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2602;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2603;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, var, empty, empty> type_v_2604;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, std::vector<var>, empty, empty> type_v_2605;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2606;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2607;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2608;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2609;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2610;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2611;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2612;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2613;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2614;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2615;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2616;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2617;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2618;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2619;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2620;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2621;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2622;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2623;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, double, empty, empty> type_v_2624;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, std::vector<double>, empty, empty> type_v_2625;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2626;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2627;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, var, empty, empty> type_v_2628;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, std::vector<var>, empty, empty> type_v_2629;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2630;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2631;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, double, empty, empty> type_v_2632;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, std::vector<double>, empty, empty> type_v_2633;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2634;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2635;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, var, empty, empty> type_v_2636;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, std::vector<var>, empty, empty> type_v_2637;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2638;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2639;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_2640;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2641;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2642;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2643;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_2644;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2645;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2646;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2647;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_2648;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2649;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2650;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2651;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_2652;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2653;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2654;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2655;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, double, empty, empty> type_v_2656;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, std::vector<double>, empty, empty> type_v_2657;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2658;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2659;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, var, empty, empty> type_v_2660;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, std::vector<var>, empty, empty> type_v_2661;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2662;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2663;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, double, empty, empty> type_v_2664;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, std::vector<double>, empty, empty> type_v_2665;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2666;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2667;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, var, empty, empty> type_v_2668;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, std::vector<var>, empty, empty> type_v_2669;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2670;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2671;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2672;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2673;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2674;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2675;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2676;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2677;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2678;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2679;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2680;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2681;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2682;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2683;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2684;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2685;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2686;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2687;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, double, empty, empty> type_v_2688;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty> type_v_2689;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2690;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2691;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, var, empty, empty> type_v_2692;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, std::vector<var>, empty, empty> type_v_2693;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2694;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2695;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty> type_v_2696;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty> type_v_2697;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2698;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2699;

typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2600> AgradDistributionParetoType2_v_2600;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2601> AgradDistributionParetoType2_v_2601;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2602> AgradDistributionParetoType2_v_2602;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2603> AgradDistributionParetoType2_v_2603;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2604> AgradDistributionParetoType2_v_2604;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2605> AgradDistributionParetoType2_v_2605;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2606> AgradDistributionParetoType2_v_2606;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2607> AgradDistributionParetoType2_v_2607;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2608> AgradDistributionParetoType2_v_2608;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2609> AgradDistributionParetoType2_v_2609;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2610> AgradDistributionParetoType2_v_2610;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2611> AgradDistributionParetoType2_v_2611;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2612> AgradDistributionParetoType2_v_2612;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2613> AgradDistributionParetoType2_v_2613;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2614> AgradDistributionParetoType2_v_2614;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2615> AgradDistributionParetoType2_v_2615;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2616> AgradDistributionParetoType2_v_2616;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2617> AgradDistributionParetoType2_v_2617;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2618> AgradDistributionParetoType2_v_2618;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2619> AgradDistributionParetoType2_v_2619;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2620> AgradDistributionParetoType2_v_2620;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2621> AgradDistributionParetoType2_v_2621;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2622> AgradDistributionParetoType2_v_2622;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2623> AgradDistributionParetoType2_v_2623;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2624> AgradDistributionParetoType2_v_2624;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2625> AgradDistributionParetoType2_v_2625;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2626> AgradDistributionParetoType2_v_2626;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2627> AgradDistributionParetoType2_v_2627;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2628> AgradDistributionParetoType2_v_2628;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2629> AgradDistributionParetoType2_v_2629;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2630> AgradDistributionParetoType2_v_2630;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2631> AgradDistributionParetoType2_v_2631;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2632> AgradDistributionParetoType2_v_2632;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2633> AgradDistributionParetoType2_v_2633;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2634> AgradDistributionParetoType2_v_2634;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2635> AgradDistributionParetoType2_v_2635;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2636> AgradDistributionParetoType2_v_2636;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2637> AgradDistributionParetoType2_v_2637;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2638> AgradDistributionParetoType2_v_2638;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2639> AgradDistributionParetoType2_v_2639;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2640> AgradDistributionParetoType2_v_2640;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2641> AgradDistributionParetoType2_v_2641;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2642> AgradDistributionParetoType2_v_2642;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2643> AgradDistributionParetoType2_v_2643;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2644> AgradDistributionParetoType2_v_2644;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2645> AgradDistributionParetoType2_v_2645;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2646> AgradDistributionParetoType2_v_2646;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2647> AgradDistributionParetoType2_v_2647;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2648> AgradDistributionParetoType2_v_2648;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2649> AgradDistributionParetoType2_v_2649;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2650> AgradDistributionParetoType2_v_2650;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2651> AgradDistributionParetoType2_v_2651;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2652> AgradDistributionParetoType2_v_2652;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2653> AgradDistributionParetoType2_v_2653;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2654> AgradDistributionParetoType2_v_2654;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2655> AgradDistributionParetoType2_v_2655;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2656> AgradDistributionParetoType2_v_2656;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2657> AgradDistributionParetoType2_v_2657;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2658> AgradDistributionParetoType2_v_2658;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2659> AgradDistributionParetoType2_v_2659;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2660> AgradDistributionParetoType2_v_2660;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2661> AgradDistributionParetoType2_v_2661;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2662> AgradDistributionParetoType2_v_2662;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2663> AgradDistributionParetoType2_v_2663;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2664> AgradDistributionParetoType2_v_2664;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2665> AgradDistributionParetoType2_v_2665;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2666> AgradDistributionParetoType2_v_2666;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2667> AgradDistributionParetoType2_v_2667;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2668> AgradDistributionParetoType2_v_2668;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2669> AgradDistributionParetoType2_v_2669;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2670> AgradDistributionParetoType2_v_2670;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2671> AgradDistributionParetoType2_v_2671;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2672> AgradDistributionParetoType2_v_2672;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2673> AgradDistributionParetoType2_v_2673;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2674> AgradDistributionParetoType2_v_2674;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2675> AgradDistributionParetoType2_v_2675;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2676> AgradDistributionParetoType2_v_2676;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2677> AgradDistributionParetoType2_v_2677;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2678> AgradDistributionParetoType2_v_2678;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2679> AgradDistributionParetoType2_v_2679;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2680> AgradDistributionParetoType2_v_2680;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2681> AgradDistributionParetoType2_v_2681;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2682> AgradDistributionParetoType2_v_2682;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2683> AgradDistributionParetoType2_v_2683;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2684> AgradDistributionParetoType2_v_2684;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2685> AgradDistributionParetoType2_v_2685;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2686> AgradDistributionParetoType2_v_2686;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2687> AgradDistributionParetoType2_v_2687;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2688> AgradDistributionParetoType2_v_2688;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2689> AgradDistributionParetoType2_v_2689;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2690> AgradDistributionParetoType2_v_2690;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2691> AgradDistributionParetoType2_v_2691;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2692> AgradDistributionParetoType2_v_2692;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2693> AgradDistributionParetoType2_v_2693;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2694> AgradDistributionParetoType2_v_2694;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2695> AgradDistributionParetoType2_v_2695;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2696> AgradDistributionParetoType2_v_2696;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2697> AgradDistributionParetoType2_v_2697;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2698> AgradDistributionParetoType2_v_2698;
typedef boost::mpl::vector<AgradDistributionParetoType2, type_v_2699> AgradDistributionParetoType2_v_2699;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2600, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2600);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2601, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2601);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2602, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2602);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2603, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2603);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2604, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2604);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2605, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2605);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2606, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2606);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2607, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2607);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2608, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2608);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2609, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2609);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2610, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2610);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2611, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2611);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2612, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2612);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2613, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2613);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2614, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2614);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2615, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2615);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2616, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2616);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2617, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2617);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2618, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2618);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2619, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2619);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2620, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2620);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2621, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2621);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2622, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2622);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2623, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2623);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2624, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2624);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2625, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2625);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2626, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2626);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2627, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2627);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2628, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2628);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2629, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2629);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2630, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2630);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2631, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2631);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2632, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2632);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2633, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2633);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2634, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2634);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2635, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2635);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2636, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2636);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2637, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2637);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2638, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2638);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2639, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2639);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2640, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2640);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2641, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2641);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2642, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2642);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2643, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2643);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2644, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2644);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2645, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2645);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2646, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2646);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2647, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2647);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2648, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2648);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2649, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2649);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2650, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2650);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2651, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2651);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2652, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2652);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2653, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2653);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2654, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2654);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2655, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2655);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2656, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2656);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2657, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2657);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2658, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2658);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2659, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2659);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2660, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2660);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2661, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2661);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2662, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2662);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2663, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2663);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2664, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2664);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2665, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2665);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2666, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2666);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2667, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2667);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2668, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2668);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2669, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2669);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2670, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2670);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2671, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2671);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2672, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2672);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2673, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2673);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2674, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2674);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2675, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2675);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2676, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2676);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2677, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2677);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2678, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2678);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2679, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2679);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2680, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2680);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2681, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2681);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2682, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2682);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2683, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2683);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2684, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2684);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2685, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2685);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2686, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2686);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2687, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2687);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2688, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2688);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2689, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2689);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2690, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2690);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2691, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2691);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2692, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2692);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2693, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2693);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2694, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2694);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2695, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2695);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2696, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2696);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2697, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2697);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2698, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2698);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionParetoType2_v_2699, AgradDistributionTestFixture, AgradDistributionParetoType2_v_2699);

