#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, double, empty, empty> type_fv_2400;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, std::vector<double>, empty, empty> type_fv_2401;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2402;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2403;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, fvar<var>, empty, empty> type_fv_2404;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2405;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2406;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2407;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, double, empty, empty> type_fv_2408;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2409;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2410;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2411;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2412;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2413;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2414;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2415;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2416;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2417;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2418;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2419;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2420;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2421;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2422;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2423;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2424;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2425;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2426;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2427;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2428;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2429;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2430;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2431;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, double, empty, empty> type_fv_2432;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty> type_fv_2433;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2434;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2435;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, fvar<var>, empty, empty> type_fv_2436;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, std::vector<fvar<var>>, empty, empty> type_fv_2437;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2438;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2439;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty> type_fv_2440;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2441;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2442;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2443;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, fvar<var>, empty, empty> type_fv_2444;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2445;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2446;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2447;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2448;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2449;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2450;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2451;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2452;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2453;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2454;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2455;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2456;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2457;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2458;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2459;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2460;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2461;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2462;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2463;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, double, empty, empty> type_fv_2464;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, std::vector<double>, empty, empty> type_fv_2465;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2466;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2467;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, fvar<var>, empty, empty> type_fv_2468;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2469;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2470;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2471;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, double, empty, empty> type_fv_2472;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2473;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2474;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2475;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2476;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2477;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2478;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2479;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2480;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2481;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2482;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2483;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2484;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2485;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2486;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2487;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2488;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2489;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2490;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2491;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2492;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2493;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2494;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2495;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, double, empty, empty> type_fv_2496;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_fv_2497;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2498;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2499;

typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2400> AgradCdfLogParetoType2_fv_2400;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2401> AgradCdfLogParetoType2_fv_2401;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2402> AgradCdfLogParetoType2_fv_2402;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2403> AgradCdfLogParetoType2_fv_2403;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2404> AgradCdfLogParetoType2_fv_2404;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2405> AgradCdfLogParetoType2_fv_2405;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2406> AgradCdfLogParetoType2_fv_2406;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2407> AgradCdfLogParetoType2_fv_2407;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2408> AgradCdfLogParetoType2_fv_2408;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2409> AgradCdfLogParetoType2_fv_2409;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2410> AgradCdfLogParetoType2_fv_2410;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2411> AgradCdfLogParetoType2_fv_2411;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2412> AgradCdfLogParetoType2_fv_2412;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2413> AgradCdfLogParetoType2_fv_2413;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2414> AgradCdfLogParetoType2_fv_2414;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2415> AgradCdfLogParetoType2_fv_2415;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2416> AgradCdfLogParetoType2_fv_2416;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2417> AgradCdfLogParetoType2_fv_2417;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2418> AgradCdfLogParetoType2_fv_2418;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2419> AgradCdfLogParetoType2_fv_2419;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2420> AgradCdfLogParetoType2_fv_2420;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2421> AgradCdfLogParetoType2_fv_2421;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2422> AgradCdfLogParetoType2_fv_2422;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2423> AgradCdfLogParetoType2_fv_2423;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2424> AgradCdfLogParetoType2_fv_2424;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2425> AgradCdfLogParetoType2_fv_2425;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2426> AgradCdfLogParetoType2_fv_2426;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2427> AgradCdfLogParetoType2_fv_2427;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2428> AgradCdfLogParetoType2_fv_2428;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2429> AgradCdfLogParetoType2_fv_2429;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2430> AgradCdfLogParetoType2_fv_2430;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2431> AgradCdfLogParetoType2_fv_2431;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2432> AgradCdfLogParetoType2_fv_2432;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2433> AgradCdfLogParetoType2_fv_2433;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2434> AgradCdfLogParetoType2_fv_2434;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2435> AgradCdfLogParetoType2_fv_2435;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2436> AgradCdfLogParetoType2_fv_2436;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2437> AgradCdfLogParetoType2_fv_2437;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2438> AgradCdfLogParetoType2_fv_2438;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2439> AgradCdfLogParetoType2_fv_2439;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2440> AgradCdfLogParetoType2_fv_2440;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2441> AgradCdfLogParetoType2_fv_2441;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2442> AgradCdfLogParetoType2_fv_2442;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2443> AgradCdfLogParetoType2_fv_2443;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2444> AgradCdfLogParetoType2_fv_2444;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2445> AgradCdfLogParetoType2_fv_2445;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2446> AgradCdfLogParetoType2_fv_2446;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2447> AgradCdfLogParetoType2_fv_2447;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2448> AgradCdfLogParetoType2_fv_2448;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2449> AgradCdfLogParetoType2_fv_2449;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2450> AgradCdfLogParetoType2_fv_2450;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2451> AgradCdfLogParetoType2_fv_2451;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2452> AgradCdfLogParetoType2_fv_2452;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2453> AgradCdfLogParetoType2_fv_2453;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2454> AgradCdfLogParetoType2_fv_2454;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2455> AgradCdfLogParetoType2_fv_2455;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2456> AgradCdfLogParetoType2_fv_2456;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2457> AgradCdfLogParetoType2_fv_2457;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2458> AgradCdfLogParetoType2_fv_2458;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2459> AgradCdfLogParetoType2_fv_2459;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2460> AgradCdfLogParetoType2_fv_2460;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2461> AgradCdfLogParetoType2_fv_2461;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2462> AgradCdfLogParetoType2_fv_2462;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2463> AgradCdfLogParetoType2_fv_2463;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2464> AgradCdfLogParetoType2_fv_2464;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2465> AgradCdfLogParetoType2_fv_2465;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2466> AgradCdfLogParetoType2_fv_2466;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2467> AgradCdfLogParetoType2_fv_2467;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2468> AgradCdfLogParetoType2_fv_2468;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2469> AgradCdfLogParetoType2_fv_2469;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2470> AgradCdfLogParetoType2_fv_2470;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2471> AgradCdfLogParetoType2_fv_2471;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2472> AgradCdfLogParetoType2_fv_2472;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2473> AgradCdfLogParetoType2_fv_2473;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2474> AgradCdfLogParetoType2_fv_2474;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2475> AgradCdfLogParetoType2_fv_2475;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2476> AgradCdfLogParetoType2_fv_2476;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2477> AgradCdfLogParetoType2_fv_2477;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2478> AgradCdfLogParetoType2_fv_2478;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2479> AgradCdfLogParetoType2_fv_2479;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2480> AgradCdfLogParetoType2_fv_2480;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2481> AgradCdfLogParetoType2_fv_2481;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2482> AgradCdfLogParetoType2_fv_2482;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2483> AgradCdfLogParetoType2_fv_2483;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2484> AgradCdfLogParetoType2_fv_2484;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2485> AgradCdfLogParetoType2_fv_2485;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2486> AgradCdfLogParetoType2_fv_2486;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2487> AgradCdfLogParetoType2_fv_2487;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2488> AgradCdfLogParetoType2_fv_2488;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2489> AgradCdfLogParetoType2_fv_2489;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2490> AgradCdfLogParetoType2_fv_2490;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2491> AgradCdfLogParetoType2_fv_2491;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2492> AgradCdfLogParetoType2_fv_2492;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2493> AgradCdfLogParetoType2_fv_2493;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2494> AgradCdfLogParetoType2_fv_2494;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2495> AgradCdfLogParetoType2_fv_2495;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2496> AgradCdfLogParetoType2_fv_2496;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2497> AgradCdfLogParetoType2_fv_2497;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2498> AgradCdfLogParetoType2_fv_2498;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_fv_2499> AgradCdfLogParetoType2_fv_2499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2400, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2401, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2402, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2403, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2404, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2405, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2406, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2407, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2408, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2409, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2410, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2411, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2412, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2413, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2414, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2415, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2416, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2417, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2418, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2419, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2420, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2421, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2422, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2423, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2424, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2425, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2426, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2427, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2428, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2429, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2430, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2431, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2432, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2433, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2434, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2435, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2436, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2437, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2438, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2439, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2440, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2441, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2442, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2443, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2444, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2445, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2446, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2447, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2448, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2449, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2450, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2451, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2452, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2453, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2454, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2455, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2456, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2457, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2458, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2459, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2460, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2461, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2462, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2463, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2464, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2465, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2466, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2467, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2468, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2469, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2470, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2471, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2472, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2473, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2474, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2475, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2476, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2477, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2478, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2479, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2480, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2481, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2482, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2483, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2484, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2485, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2486, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2487, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2488, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2489, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2490, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2491, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2492, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2493, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2494, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2495, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2496, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2497, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2498, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_fv_2499, AgradCdfLogTestFixture, AgradCdfLogParetoType2_fv_2499);

