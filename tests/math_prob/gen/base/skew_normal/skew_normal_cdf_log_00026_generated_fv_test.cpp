#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, double, empty, empty> type_fv_2600;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2601;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2602;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2603;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2604;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2605;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2606;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2607;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2608;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2609;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2610;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2611;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2612;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2613;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2614;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2615;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2616;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2617;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2618;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2619;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2620;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2621;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2622;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2623;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, double, empty, empty> type_fv_2624;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, std::vector<double>, empty, empty> type_fv_2625;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2626;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2627;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, fvar<var>, empty, empty> type_fv_2628;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, std::vector<fvar<var>>, empty, empty> type_fv_2629;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2630;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2631;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, double, empty, empty> type_fv_2632;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2633;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2634;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2635;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, fvar<var>, empty, empty> type_fv_2636;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2637;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2638;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2639;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2640;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2641;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2642;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2643;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2644;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2645;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2646;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2647;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2648;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2649;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2650;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2651;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2652;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2653;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2654;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2655;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, double, empty, empty> type_fv_2656;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, std::vector<double>, empty, empty> type_fv_2657;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2658;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2659;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, fvar<var>, empty, empty> type_fv_2660;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2661;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2662;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2663;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, double, empty, empty> type_fv_2664;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2665;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2666;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2667;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2668;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2669;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2670;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2671;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2672;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2673;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2674;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2675;
