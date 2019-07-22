#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

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
