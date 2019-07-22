#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2200;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2201;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2202;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2203;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2204;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2205;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2206;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2207;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, double, empty, empty> type_fv_2208;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, std::vector<double>, empty, empty> type_fv_2209;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2210;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2211;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, fvar<var>, empty, empty> type_fv_2212;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2213;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2214;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2215;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, double, empty, empty> type_fv_2216;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2217;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2218;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2219;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2220;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2221;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2222;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2223;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2224;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2225;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2226;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2227;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2228;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2229;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2230;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2231;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2232;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2233;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2234;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2235;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2236;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2237;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2238;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2239;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, double, empty, empty> type_fv_2240;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_fv_2241;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2242;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2243;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, fvar<var>, empty, empty> type_fv_2244;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, std::vector<fvar<var>>, empty, empty> type_fv_2245;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2246;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2247;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_fv_2248;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2249;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2250;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2251;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, fvar<var>, empty, empty> type_fv_2252;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2253;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2254;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2255;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2256;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2257;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2258;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2259;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2260;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2261;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2262;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2263;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2264;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2265;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2266;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2267;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2268;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2269;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2270;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2271;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty> type_fv_2272;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty> type_fv_2273;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2274;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2275;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty> type_fv_2276;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2277;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2278;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2279;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty> type_fv_2280;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2281;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2282;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2283;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2284;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2285;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2286;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2287;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2288;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2289;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2290;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2291;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2292;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2293;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2294;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2295;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2296;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2297;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2298;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2299;
