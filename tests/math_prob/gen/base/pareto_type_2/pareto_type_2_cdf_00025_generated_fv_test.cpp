#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_cdf_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, fvar<var>, empty, empty> type_fv_2500;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, std::vector<fvar<var>>, empty, empty> type_fv_2501;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2502;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2503;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_fv_2504;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2505;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2506;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2507;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, fvar<var>, empty, empty> type_fv_2508;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2509;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2510;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2511;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2512;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2513;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2514;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2515;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2516;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2517;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2518;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2519;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2520;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2521;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2522;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2523;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2524;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2525;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2526;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2527;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty> type_fv_2528;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty> type_fv_2529;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2530;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2531;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty> type_fv_2532;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2533;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2534;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2535;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty> type_fv_2536;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2537;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2538;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2539;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2540;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2541;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2542;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2543;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2544;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2545;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2546;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2547;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2548;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2549;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2550;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2551;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2552;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2553;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2554;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2555;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2556;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2557;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2558;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2559;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, double, empty, empty> type_fv_2560;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, std::vector<double>, empty, empty> type_fv_2561;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2562;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2563;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, fvar<var>, empty, empty> type_fv_2564;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, std::vector<fvar<var>>, empty, empty> type_fv_2565;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2566;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2567;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, double, empty, empty> type_fv_2568;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2569;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2570;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2571;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, fvar<var>, empty, empty> type_fv_2572;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2573;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2574;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2575;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2576;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2577;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2578;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2579;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2580;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2581;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2582;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2583;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2584;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2585;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2586;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2587;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2588;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2589;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2590;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2591;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, double, empty, empty> type_fv_2592;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, std::vector<double>, empty, empty> type_fv_2593;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2594;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2595;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, fvar<var>, empty, empty> type_fv_2596;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2597;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2598;
typedef boost::mpl::vector<std::vector<fvar<var>>, fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2599;

typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2500> AgradCdfParetoType2_fv_2500;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2501> AgradCdfParetoType2_fv_2501;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2502> AgradCdfParetoType2_fv_2502;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2503> AgradCdfParetoType2_fv_2503;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2504> AgradCdfParetoType2_fv_2504;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2505> AgradCdfParetoType2_fv_2505;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2506> AgradCdfParetoType2_fv_2506;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2507> AgradCdfParetoType2_fv_2507;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2508> AgradCdfParetoType2_fv_2508;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2509> AgradCdfParetoType2_fv_2509;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2510> AgradCdfParetoType2_fv_2510;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2511> AgradCdfParetoType2_fv_2511;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2512> AgradCdfParetoType2_fv_2512;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2513> AgradCdfParetoType2_fv_2513;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2514> AgradCdfParetoType2_fv_2514;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2515> AgradCdfParetoType2_fv_2515;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2516> AgradCdfParetoType2_fv_2516;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2517> AgradCdfParetoType2_fv_2517;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2518> AgradCdfParetoType2_fv_2518;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2519> AgradCdfParetoType2_fv_2519;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2520> AgradCdfParetoType2_fv_2520;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2521> AgradCdfParetoType2_fv_2521;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2522> AgradCdfParetoType2_fv_2522;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2523> AgradCdfParetoType2_fv_2523;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2524> AgradCdfParetoType2_fv_2524;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2525> AgradCdfParetoType2_fv_2525;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2526> AgradCdfParetoType2_fv_2526;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2527> AgradCdfParetoType2_fv_2527;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2528> AgradCdfParetoType2_fv_2528;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2529> AgradCdfParetoType2_fv_2529;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2530> AgradCdfParetoType2_fv_2530;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2531> AgradCdfParetoType2_fv_2531;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2532> AgradCdfParetoType2_fv_2532;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2533> AgradCdfParetoType2_fv_2533;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2534> AgradCdfParetoType2_fv_2534;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2535> AgradCdfParetoType2_fv_2535;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2536> AgradCdfParetoType2_fv_2536;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2537> AgradCdfParetoType2_fv_2537;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2538> AgradCdfParetoType2_fv_2538;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2539> AgradCdfParetoType2_fv_2539;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2540> AgradCdfParetoType2_fv_2540;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2541> AgradCdfParetoType2_fv_2541;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2542> AgradCdfParetoType2_fv_2542;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2543> AgradCdfParetoType2_fv_2543;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2544> AgradCdfParetoType2_fv_2544;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2545> AgradCdfParetoType2_fv_2545;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2546> AgradCdfParetoType2_fv_2546;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2547> AgradCdfParetoType2_fv_2547;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2548> AgradCdfParetoType2_fv_2548;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2549> AgradCdfParetoType2_fv_2549;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2550> AgradCdfParetoType2_fv_2550;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2551> AgradCdfParetoType2_fv_2551;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2552> AgradCdfParetoType2_fv_2552;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2553> AgradCdfParetoType2_fv_2553;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2554> AgradCdfParetoType2_fv_2554;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2555> AgradCdfParetoType2_fv_2555;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2556> AgradCdfParetoType2_fv_2556;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2557> AgradCdfParetoType2_fv_2557;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2558> AgradCdfParetoType2_fv_2558;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2559> AgradCdfParetoType2_fv_2559;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2560> AgradCdfParetoType2_fv_2560;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2561> AgradCdfParetoType2_fv_2561;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2562> AgradCdfParetoType2_fv_2562;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2563> AgradCdfParetoType2_fv_2563;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2564> AgradCdfParetoType2_fv_2564;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2565> AgradCdfParetoType2_fv_2565;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2566> AgradCdfParetoType2_fv_2566;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2567> AgradCdfParetoType2_fv_2567;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2568> AgradCdfParetoType2_fv_2568;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2569> AgradCdfParetoType2_fv_2569;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2570> AgradCdfParetoType2_fv_2570;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2571> AgradCdfParetoType2_fv_2571;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2572> AgradCdfParetoType2_fv_2572;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2573> AgradCdfParetoType2_fv_2573;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2574> AgradCdfParetoType2_fv_2574;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2575> AgradCdfParetoType2_fv_2575;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2576> AgradCdfParetoType2_fv_2576;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2577> AgradCdfParetoType2_fv_2577;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2578> AgradCdfParetoType2_fv_2578;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2579> AgradCdfParetoType2_fv_2579;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2580> AgradCdfParetoType2_fv_2580;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2581> AgradCdfParetoType2_fv_2581;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2582> AgradCdfParetoType2_fv_2582;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2583> AgradCdfParetoType2_fv_2583;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2584> AgradCdfParetoType2_fv_2584;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2585> AgradCdfParetoType2_fv_2585;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2586> AgradCdfParetoType2_fv_2586;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2587> AgradCdfParetoType2_fv_2587;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2588> AgradCdfParetoType2_fv_2588;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2589> AgradCdfParetoType2_fv_2589;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2590> AgradCdfParetoType2_fv_2590;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2591> AgradCdfParetoType2_fv_2591;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2592> AgradCdfParetoType2_fv_2592;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2593> AgradCdfParetoType2_fv_2593;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2594> AgradCdfParetoType2_fv_2594;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2595> AgradCdfParetoType2_fv_2595;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2596> AgradCdfParetoType2_fv_2596;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2597> AgradCdfParetoType2_fv_2597;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2598> AgradCdfParetoType2_fv_2598;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2599> AgradCdfParetoType2_fv_2599;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2500, AgradCdfTestFixture, AgradCdfParetoType2_fv_2500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2501, AgradCdfTestFixture, AgradCdfParetoType2_fv_2501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2502, AgradCdfTestFixture, AgradCdfParetoType2_fv_2502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2503, AgradCdfTestFixture, AgradCdfParetoType2_fv_2503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2504, AgradCdfTestFixture, AgradCdfParetoType2_fv_2504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2505, AgradCdfTestFixture, AgradCdfParetoType2_fv_2505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2506, AgradCdfTestFixture, AgradCdfParetoType2_fv_2506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2507, AgradCdfTestFixture, AgradCdfParetoType2_fv_2507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2508, AgradCdfTestFixture, AgradCdfParetoType2_fv_2508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2509, AgradCdfTestFixture, AgradCdfParetoType2_fv_2509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2510, AgradCdfTestFixture, AgradCdfParetoType2_fv_2510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2511, AgradCdfTestFixture, AgradCdfParetoType2_fv_2511);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2512, AgradCdfTestFixture, AgradCdfParetoType2_fv_2512);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2513, AgradCdfTestFixture, AgradCdfParetoType2_fv_2513);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2514, AgradCdfTestFixture, AgradCdfParetoType2_fv_2514);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2515, AgradCdfTestFixture, AgradCdfParetoType2_fv_2515);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2516, AgradCdfTestFixture, AgradCdfParetoType2_fv_2516);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2517, AgradCdfTestFixture, AgradCdfParetoType2_fv_2517);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2518, AgradCdfTestFixture, AgradCdfParetoType2_fv_2518);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2519, AgradCdfTestFixture, AgradCdfParetoType2_fv_2519);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2520, AgradCdfTestFixture, AgradCdfParetoType2_fv_2520);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2521, AgradCdfTestFixture, AgradCdfParetoType2_fv_2521);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2522, AgradCdfTestFixture, AgradCdfParetoType2_fv_2522);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2523, AgradCdfTestFixture, AgradCdfParetoType2_fv_2523);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2524, AgradCdfTestFixture, AgradCdfParetoType2_fv_2524);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2525, AgradCdfTestFixture, AgradCdfParetoType2_fv_2525);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2526, AgradCdfTestFixture, AgradCdfParetoType2_fv_2526);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2527, AgradCdfTestFixture, AgradCdfParetoType2_fv_2527);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2528, AgradCdfTestFixture, AgradCdfParetoType2_fv_2528);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2529, AgradCdfTestFixture, AgradCdfParetoType2_fv_2529);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2530, AgradCdfTestFixture, AgradCdfParetoType2_fv_2530);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2531, AgradCdfTestFixture, AgradCdfParetoType2_fv_2531);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2532, AgradCdfTestFixture, AgradCdfParetoType2_fv_2532);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2533, AgradCdfTestFixture, AgradCdfParetoType2_fv_2533);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2534, AgradCdfTestFixture, AgradCdfParetoType2_fv_2534);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2535, AgradCdfTestFixture, AgradCdfParetoType2_fv_2535);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2536, AgradCdfTestFixture, AgradCdfParetoType2_fv_2536);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2537, AgradCdfTestFixture, AgradCdfParetoType2_fv_2537);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2538, AgradCdfTestFixture, AgradCdfParetoType2_fv_2538);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2539, AgradCdfTestFixture, AgradCdfParetoType2_fv_2539);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2540, AgradCdfTestFixture, AgradCdfParetoType2_fv_2540);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2541, AgradCdfTestFixture, AgradCdfParetoType2_fv_2541);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2542, AgradCdfTestFixture, AgradCdfParetoType2_fv_2542);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2543, AgradCdfTestFixture, AgradCdfParetoType2_fv_2543);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2544, AgradCdfTestFixture, AgradCdfParetoType2_fv_2544);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2545, AgradCdfTestFixture, AgradCdfParetoType2_fv_2545);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2546, AgradCdfTestFixture, AgradCdfParetoType2_fv_2546);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2547, AgradCdfTestFixture, AgradCdfParetoType2_fv_2547);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2548, AgradCdfTestFixture, AgradCdfParetoType2_fv_2548);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2549, AgradCdfTestFixture, AgradCdfParetoType2_fv_2549);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2550, AgradCdfTestFixture, AgradCdfParetoType2_fv_2550);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2551, AgradCdfTestFixture, AgradCdfParetoType2_fv_2551);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2552, AgradCdfTestFixture, AgradCdfParetoType2_fv_2552);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2553, AgradCdfTestFixture, AgradCdfParetoType2_fv_2553);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2554, AgradCdfTestFixture, AgradCdfParetoType2_fv_2554);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2555, AgradCdfTestFixture, AgradCdfParetoType2_fv_2555);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2556, AgradCdfTestFixture, AgradCdfParetoType2_fv_2556);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2557, AgradCdfTestFixture, AgradCdfParetoType2_fv_2557);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2558, AgradCdfTestFixture, AgradCdfParetoType2_fv_2558);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2559, AgradCdfTestFixture, AgradCdfParetoType2_fv_2559);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2560, AgradCdfTestFixture, AgradCdfParetoType2_fv_2560);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2561, AgradCdfTestFixture, AgradCdfParetoType2_fv_2561);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2562, AgradCdfTestFixture, AgradCdfParetoType2_fv_2562);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2563, AgradCdfTestFixture, AgradCdfParetoType2_fv_2563);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2564, AgradCdfTestFixture, AgradCdfParetoType2_fv_2564);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2565, AgradCdfTestFixture, AgradCdfParetoType2_fv_2565);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2566, AgradCdfTestFixture, AgradCdfParetoType2_fv_2566);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2567, AgradCdfTestFixture, AgradCdfParetoType2_fv_2567);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2568, AgradCdfTestFixture, AgradCdfParetoType2_fv_2568);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2569, AgradCdfTestFixture, AgradCdfParetoType2_fv_2569);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2570, AgradCdfTestFixture, AgradCdfParetoType2_fv_2570);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2571, AgradCdfTestFixture, AgradCdfParetoType2_fv_2571);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2572, AgradCdfTestFixture, AgradCdfParetoType2_fv_2572);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2573, AgradCdfTestFixture, AgradCdfParetoType2_fv_2573);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2574, AgradCdfTestFixture, AgradCdfParetoType2_fv_2574);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2575, AgradCdfTestFixture, AgradCdfParetoType2_fv_2575);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2576, AgradCdfTestFixture, AgradCdfParetoType2_fv_2576);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2577, AgradCdfTestFixture, AgradCdfParetoType2_fv_2577);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2578, AgradCdfTestFixture, AgradCdfParetoType2_fv_2578);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2579, AgradCdfTestFixture, AgradCdfParetoType2_fv_2579);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2580, AgradCdfTestFixture, AgradCdfParetoType2_fv_2580);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2581, AgradCdfTestFixture, AgradCdfParetoType2_fv_2581);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2582, AgradCdfTestFixture, AgradCdfParetoType2_fv_2582);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2583, AgradCdfTestFixture, AgradCdfParetoType2_fv_2583);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2584, AgradCdfTestFixture, AgradCdfParetoType2_fv_2584);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2585, AgradCdfTestFixture, AgradCdfParetoType2_fv_2585);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2586, AgradCdfTestFixture, AgradCdfParetoType2_fv_2586);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2587, AgradCdfTestFixture, AgradCdfParetoType2_fv_2587);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2588, AgradCdfTestFixture, AgradCdfParetoType2_fv_2588);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2589, AgradCdfTestFixture, AgradCdfParetoType2_fv_2589);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2590, AgradCdfTestFixture, AgradCdfParetoType2_fv_2590);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2591, AgradCdfTestFixture, AgradCdfParetoType2_fv_2591);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2592, AgradCdfTestFixture, AgradCdfParetoType2_fv_2592);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2593, AgradCdfTestFixture, AgradCdfParetoType2_fv_2593);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2594, AgradCdfTestFixture, AgradCdfParetoType2_fv_2594);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2595, AgradCdfTestFixture, AgradCdfParetoType2_fv_2595);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2596, AgradCdfTestFixture, AgradCdfParetoType2_fv_2596);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2597, AgradCdfTestFixture, AgradCdfParetoType2_fv_2597);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2598, AgradCdfTestFixture, AgradCdfParetoType2_fv_2598);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2599, AgradCdfTestFixture, AgradCdfParetoType2_fv_2599);
