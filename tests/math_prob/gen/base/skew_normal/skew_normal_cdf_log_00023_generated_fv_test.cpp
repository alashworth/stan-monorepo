#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2300;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2301;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2302;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2303;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, double, empty, empty> type_fv_2304;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, std::vector<double>, empty, empty> type_fv_2305;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2306;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2307;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, fvar<var>, empty, empty> type_fv_2308;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, std::vector<fvar<var>>, empty, empty> type_fv_2309;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2310;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2311;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, double, empty, empty> type_fv_2312;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, std::vector<double>, empty, empty> type_fv_2313;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2314;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2315;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, fvar<var>, empty, empty> type_fv_2316;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2317;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2318;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2319;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2320;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2321;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2322;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2323;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2324;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2325;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2326;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2327;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2328;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2329;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2330;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2331;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2332;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2333;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2334;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2335;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, double, empty, empty> type_fv_2336;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, std::vector<double>, empty, empty> type_fv_2337;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2338;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2339;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, fvar<var>, empty, empty> type_fv_2340;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2341;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2342;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2343;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, double, empty, empty> type_fv_2344;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2345;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2346;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2347;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2348;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2349;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2350;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2351;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2352;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2353;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2354;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2355;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2356;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2357;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2358;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2359;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2360;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2361;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2362;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2363;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2364;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2365;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2366;
typedef boost::mpl::vector<std::vector<fvar<var>>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2367;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, double, empty, empty> type_fv_2368;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, std::vector<double>, empty, empty> type_fv_2369;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2370;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2371;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, fvar<var>, empty, empty> type_fv_2372;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, std::vector<fvar<var>>, empty, empty> type_fv_2373;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2374;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2375;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, double, empty, empty> type_fv_2376;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2377;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2378;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2379;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, fvar<var>, empty, empty> type_fv_2380;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2381;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2382;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2383;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2384;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2385;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2386;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2387;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2388;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2389;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2390;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2391;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2392;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2393;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2394;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2395;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2396;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2397;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2398;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2399;
