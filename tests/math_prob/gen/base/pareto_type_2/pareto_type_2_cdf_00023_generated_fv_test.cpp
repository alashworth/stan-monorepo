#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2300> AgradCdfParetoType2_fv_2300;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2301> AgradCdfParetoType2_fv_2301;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2302> AgradCdfParetoType2_fv_2302;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2303> AgradCdfParetoType2_fv_2303;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2304> AgradCdfParetoType2_fv_2304;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2305> AgradCdfParetoType2_fv_2305;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2306> AgradCdfParetoType2_fv_2306;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2307> AgradCdfParetoType2_fv_2307;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2308> AgradCdfParetoType2_fv_2308;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2309> AgradCdfParetoType2_fv_2309;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2310> AgradCdfParetoType2_fv_2310;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2311> AgradCdfParetoType2_fv_2311;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2312> AgradCdfParetoType2_fv_2312;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2313> AgradCdfParetoType2_fv_2313;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2314> AgradCdfParetoType2_fv_2314;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2315> AgradCdfParetoType2_fv_2315;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2316> AgradCdfParetoType2_fv_2316;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2317> AgradCdfParetoType2_fv_2317;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2318> AgradCdfParetoType2_fv_2318;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2319> AgradCdfParetoType2_fv_2319;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2320> AgradCdfParetoType2_fv_2320;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2321> AgradCdfParetoType2_fv_2321;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2322> AgradCdfParetoType2_fv_2322;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2323> AgradCdfParetoType2_fv_2323;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2324> AgradCdfParetoType2_fv_2324;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2325> AgradCdfParetoType2_fv_2325;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2326> AgradCdfParetoType2_fv_2326;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2327> AgradCdfParetoType2_fv_2327;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2328> AgradCdfParetoType2_fv_2328;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2329> AgradCdfParetoType2_fv_2329;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2330> AgradCdfParetoType2_fv_2330;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2331> AgradCdfParetoType2_fv_2331;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2332> AgradCdfParetoType2_fv_2332;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2333> AgradCdfParetoType2_fv_2333;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2334> AgradCdfParetoType2_fv_2334;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2335> AgradCdfParetoType2_fv_2335;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2336> AgradCdfParetoType2_fv_2336;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2337> AgradCdfParetoType2_fv_2337;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2338> AgradCdfParetoType2_fv_2338;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2339> AgradCdfParetoType2_fv_2339;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2340> AgradCdfParetoType2_fv_2340;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2341> AgradCdfParetoType2_fv_2341;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2342> AgradCdfParetoType2_fv_2342;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2343> AgradCdfParetoType2_fv_2343;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2344> AgradCdfParetoType2_fv_2344;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2345> AgradCdfParetoType2_fv_2345;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2346> AgradCdfParetoType2_fv_2346;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2347> AgradCdfParetoType2_fv_2347;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2348> AgradCdfParetoType2_fv_2348;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2349> AgradCdfParetoType2_fv_2349;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2350> AgradCdfParetoType2_fv_2350;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2351> AgradCdfParetoType2_fv_2351;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2352> AgradCdfParetoType2_fv_2352;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2353> AgradCdfParetoType2_fv_2353;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2354> AgradCdfParetoType2_fv_2354;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2355> AgradCdfParetoType2_fv_2355;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2356> AgradCdfParetoType2_fv_2356;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2357> AgradCdfParetoType2_fv_2357;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2358> AgradCdfParetoType2_fv_2358;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2359> AgradCdfParetoType2_fv_2359;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2360> AgradCdfParetoType2_fv_2360;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2361> AgradCdfParetoType2_fv_2361;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2362> AgradCdfParetoType2_fv_2362;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2363> AgradCdfParetoType2_fv_2363;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2364> AgradCdfParetoType2_fv_2364;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2365> AgradCdfParetoType2_fv_2365;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2366> AgradCdfParetoType2_fv_2366;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2367> AgradCdfParetoType2_fv_2367;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2368> AgradCdfParetoType2_fv_2368;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2369> AgradCdfParetoType2_fv_2369;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2370> AgradCdfParetoType2_fv_2370;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2371> AgradCdfParetoType2_fv_2371;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2372> AgradCdfParetoType2_fv_2372;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2373> AgradCdfParetoType2_fv_2373;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2374> AgradCdfParetoType2_fv_2374;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2375> AgradCdfParetoType2_fv_2375;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2376> AgradCdfParetoType2_fv_2376;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2377> AgradCdfParetoType2_fv_2377;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2378> AgradCdfParetoType2_fv_2378;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2379> AgradCdfParetoType2_fv_2379;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2380> AgradCdfParetoType2_fv_2380;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2381> AgradCdfParetoType2_fv_2381;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2382> AgradCdfParetoType2_fv_2382;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2383> AgradCdfParetoType2_fv_2383;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2384> AgradCdfParetoType2_fv_2384;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2385> AgradCdfParetoType2_fv_2385;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2386> AgradCdfParetoType2_fv_2386;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2387> AgradCdfParetoType2_fv_2387;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2388> AgradCdfParetoType2_fv_2388;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2389> AgradCdfParetoType2_fv_2389;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2390> AgradCdfParetoType2_fv_2390;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2391> AgradCdfParetoType2_fv_2391;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2392> AgradCdfParetoType2_fv_2392;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2393> AgradCdfParetoType2_fv_2393;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2394> AgradCdfParetoType2_fv_2394;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2395> AgradCdfParetoType2_fv_2395;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2396> AgradCdfParetoType2_fv_2396;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2397> AgradCdfParetoType2_fv_2397;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2398> AgradCdfParetoType2_fv_2398;
typedef boost::mpl::vector<AgradCdfParetoType2, type_fv_2399> AgradCdfParetoType2_fv_2399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2300, AgradCdfTestFixture, AgradCdfParetoType2_fv_2300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2301, AgradCdfTestFixture, AgradCdfParetoType2_fv_2301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2302, AgradCdfTestFixture, AgradCdfParetoType2_fv_2302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2303, AgradCdfTestFixture, AgradCdfParetoType2_fv_2303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2304, AgradCdfTestFixture, AgradCdfParetoType2_fv_2304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2305, AgradCdfTestFixture, AgradCdfParetoType2_fv_2305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2306, AgradCdfTestFixture, AgradCdfParetoType2_fv_2306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2307, AgradCdfTestFixture, AgradCdfParetoType2_fv_2307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2308, AgradCdfTestFixture, AgradCdfParetoType2_fv_2308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2309, AgradCdfTestFixture, AgradCdfParetoType2_fv_2309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2310, AgradCdfTestFixture, AgradCdfParetoType2_fv_2310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2311, AgradCdfTestFixture, AgradCdfParetoType2_fv_2311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2312, AgradCdfTestFixture, AgradCdfParetoType2_fv_2312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2313, AgradCdfTestFixture, AgradCdfParetoType2_fv_2313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2314, AgradCdfTestFixture, AgradCdfParetoType2_fv_2314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2315, AgradCdfTestFixture, AgradCdfParetoType2_fv_2315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2316, AgradCdfTestFixture, AgradCdfParetoType2_fv_2316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2317, AgradCdfTestFixture, AgradCdfParetoType2_fv_2317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2318, AgradCdfTestFixture, AgradCdfParetoType2_fv_2318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2319, AgradCdfTestFixture, AgradCdfParetoType2_fv_2319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2320, AgradCdfTestFixture, AgradCdfParetoType2_fv_2320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2321, AgradCdfTestFixture, AgradCdfParetoType2_fv_2321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2322, AgradCdfTestFixture, AgradCdfParetoType2_fv_2322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2323, AgradCdfTestFixture, AgradCdfParetoType2_fv_2323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2324, AgradCdfTestFixture, AgradCdfParetoType2_fv_2324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2325, AgradCdfTestFixture, AgradCdfParetoType2_fv_2325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2326, AgradCdfTestFixture, AgradCdfParetoType2_fv_2326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2327, AgradCdfTestFixture, AgradCdfParetoType2_fv_2327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2328, AgradCdfTestFixture, AgradCdfParetoType2_fv_2328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2329, AgradCdfTestFixture, AgradCdfParetoType2_fv_2329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2330, AgradCdfTestFixture, AgradCdfParetoType2_fv_2330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2331, AgradCdfTestFixture, AgradCdfParetoType2_fv_2331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2332, AgradCdfTestFixture, AgradCdfParetoType2_fv_2332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2333, AgradCdfTestFixture, AgradCdfParetoType2_fv_2333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2334, AgradCdfTestFixture, AgradCdfParetoType2_fv_2334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2335, AgradCdfTestFixture, AgradCdfParetoType2_fv_2335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2336, AgradCdfTestFixture, AgradCdfParetoType2_fv_2336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2337, AgradCdfTestFixture, AgradCdfParetoType2_fv_2337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2338, AgradCdfTestFixture, AgradCdfParetoType2_fv_2338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2339, AgradCdfTestFixture, AgradCdfParetoType2_fv_2339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2340, AgradCdfTestFixture, AgradCdfParetoType2_fv_2340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2341, AgradCdfTestFixture, AgradCdfParetoType2_fv_2341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2342, AgradCdfTestFixture, AgradCdfParetoType2_fv_2342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2343, AgradCdfTestFixture, AgradCdfParetoType2_fv_2343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2344, AgradCdfTestFixture, AgradCdfParetoType2_fv_2344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2345, AgradCdfTestFixture, AgradCdfParetoType2_fv_2345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2346, AgradCdfTestFixture, AgradCdfParetoType2_fv_2346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2347, AgradCdfTestFixture, AgradCdfParetoType2_fv_2347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2348, AgradCdfTestFixture, AgradCdfParetoType2_fv_2348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2349, AgradCdfTestFixture, AgradCdfParetoType2_fv_2349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2350, AgradCdfTestFixture, AgradCdfParetoType2_fv_2350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2351, AgradCdfTestFixture, AgradCdfParetoType2_fv_2351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2352, AgradCdfTestFixture, AgradCdfParetoType2_fv_2352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2353, AgradCdfTestFixture, AgradCdfParetoType2_fv_2353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2354, AgradCdfTestFixture, AgradCdfParetoType2_fv_2354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2355, AgradCdfTestFixture, AgradCdfParetoType2_fv_2355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2356, AgradCdfTestFixture, AgradCdfParetoType2_fv_2356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2357, AgradCdfTestFixture, AgradCdfParetoType2_fv_2357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2358, AgradCdfTestFixture, AgradCdfParetoType2_fv_2358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2359, AgradCdfTestFixture, AgradCdfParetoType2_fv_2359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2360, AgradCdfTestFixture, AgradCdfParetoType2_fv_2360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2361, AgradCdfTestFixture, AgradCdfParetoType2_fv_2361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2362, AgradCdfTestFixture, AgradCdfParetoType2_fv_2362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2363, AgradCdfTestFixture, AgradCdfParetoType2_fv_2363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2364, AgradCdfTestFixture, AgradCdfParetoType2_fv_2364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2365, AgradCdfTestFixture, AgradCdfParetoType2_fv_2365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2366, AgradCdfTestFixture, AgradCdfParetoType2_fv_2366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2367, AgradCdfTestFixture, AgradCdfParetoType2_fv_2367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2368, AgradCdfTestFixture, AgradCdfParetoType2_fv_2368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2369, AgradCdfTestFixture, AgradCdfParetoType2_fv_2369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2370, AgradCdfTestFixture, AgradCdfParetoType2_fv_2370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2371, AgradCdfTestFixture, AgradCdfParetoType2_fv_2371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2372, AgradCdfTestFixture, AgradCdfParetoType2_fv_2372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2373, AgradCdfTestFixture, AgradCdfParetoType2_fv_2373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2374, AgradCdfTestFixture, AgradCdfParetoType2_fv_2374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2375, AgradCdfTestFixture, AgradCdfParetoType2_fv_2375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2376, AgradCdfTestFixture, AgradCdfParetoType2_fv_2376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2377, AgradCdfTestFixture, AgradCdfParetoType2_fv_2377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2378, AgradCdfTestFixture, AgradCdfParetoType2_fv_2378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2379, AgradCdfTestFixture, AgradCdfParetoType2_fv_2379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2380, AgradCdfTestFixture, AgradCdfParetoType2_fv_2380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2381, AgradCdfTestFixture, AgradCdfParetoType2_fv_2381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2382, AgradCdfTestFixture, AgradCdfParetoType2_fv_2382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2383, AgradCdfTestFixture, AgradCdfParetoType2_fv_2383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2384, AgradCdfTestFixture, AgradCdfParetoType2_fv_2384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2385, AgradCdfTestFixture, AgradCdfParetoType2_fv_2385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2386, AgradCdfTestFixture, AgradCdfParetoType2_fv_2386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2387, AgradCdfTestFixture, AgradCdfParetoType2_fv_2387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2388, AgradCdfTestFixture, AgradCdfParetoType2_fv_2388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2389, AgradCdfTestFixture, AgradCdfParetoType2_fv_2389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2390, AgradCdfTestFixture, AgradCdfParetoType2_fv_2390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2391, AgradCdfTestFixture, AgradCdfParetoType2_fv_2391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2392, AgradCdfTestFixture, AgradCdfParetoType2_fv_2392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2393, AgradCdfTestFixture, AgradCdfParetoType2_fv_2393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2394, AgradCdfTestFixture, AgradCdfParetoType2_fv_2394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2395, AgradCdfTestFixture, AgradCdfParetoType2_fv_2395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2396, AgradCdfTestFixture, AgradCdfParetoType2_fv_2396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2397, AgradCdfTestFixture, AgradCdfParetoType2_fv_2397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2398, AgradCdfTestFixture, AgradCdfParetoType2_fv_2398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_fv_2399, AgradCdfTestFixture, AgradCdfParetoType2_fv_2399);
