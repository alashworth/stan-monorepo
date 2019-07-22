#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_ccdf_log_test.hpp>

typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_2200;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2201;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2202;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2203;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_2204;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2205;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2206;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2207;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, double, empty, empty> type_v_2208;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, std::vector<double>, empty, empty> type_v_2209;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2210;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2211;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, var, empty, empty> type_v_2212;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, std::vector<var>, empty, empty> type_v_2213;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2214;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2215;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, double, empty, empty> type_v_2216;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, std::vector<double>, empty, empty> type_v_2217;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2218;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2219;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, var, empty, empty> type_v_2220;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, std::vector<var>, empty, empty> type_v_2221;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2222;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2223;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2224;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2225;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2226;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2227;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2228;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2229;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2230;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2231;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2232;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2233;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2234;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2235;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2236;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2237;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2238;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2239;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, double, empty, empty> type_v_2240;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_v_2241;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2242;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2243;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, var, empty, empty> type_v_2244;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, std::vector<var>, empty, empty> type_v_2245;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2246;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2247;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_v_2248;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_v_2249;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2250;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2251;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, var, empty, empty> type_v_2252;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, empty, empty> type_v_2253;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2254;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2255;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_2256;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2257;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2258;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2259;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_2260;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2261;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2262;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2263;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_2264;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2265;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2266;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2267;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_2268;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2269;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2270;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2271;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, double, empty, empty> type_v_2272;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty> type_v_2273;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2274;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2275;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, var, empty, empty> type_v_2276;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty> type_v_2277;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2278;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2279;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty> type_v_2280;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty> type_v_2281;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2282;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2283;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty> type_v_2284;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty> type_v_2285;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2286;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2287;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2288;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2289;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2290;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2291;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2292;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2293;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2294;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2295;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2296;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2297;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2298;
typedef boost::mpl::vector<var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2299;

typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2200> AgradCcdfLogSkewNormal_v_2200;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2201> AgradCcdfLogSkewNormal_v_2201;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2202> AgradCcdfLogSkewNormal_v_2202;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2203> AgradCcdfLogSkewNormal_v_2203;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2204> AgradCcdfLogSkewNormal_v_2204;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2205> AgradCcdfLogSkewNormal_v_2205;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2206> AgradCcdfLogSkewNormal_v_2206;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2207> AgradCcdfLogSkewNormal_v_2207;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2208> AgradCcdfLogSkewNormal_v_2208;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2209> AgradCcdfLogSkewNormal_v_2209;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2210> AgradCcdfLogSkewNormal_v_2210;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2211> AgradCcdfLogSkewNormal_v_2211;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2212> AgradCcdfLogSkewNormal_v_2212;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2213> AgradCcdfLogSkewNormal_v_2213;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2214> AgradCcdfLogSkewNormal_v_2214;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2215> AgradCcdfLogSkewNormal_v_2215;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2216> AgradCcdfLogSkewNormal_v_2216;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2217> AgradCcdfLogSkewNormal_v_2217;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2218> AgradCcdfLogSkewNormal_v_2218;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2219> AgradCcdfLogSkewNormal_v_2219;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2220> AgradCcdfLogSkewNormal_v_2220;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2221> AgradCcdfLogSkewNormal_v_2221;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2222> AgradCcdfLogSkewNormal_v_2222;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2223> AgradCcdfLogSkewNormal_v_2223;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2224> AgradCcdfLogSkewNormal_v_2224;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2225> AgradCcdfLogSkewNormal_v_2225;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2226> AgradCcdfLogSkewNormal_v_2226;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2227> AgradCcdfLogSkewNormal_v_2227;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2228> AgradCcdfLogSkewNormal_v_2228;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2229> AgradCcdfLogSkewNormal_v_2229;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2230> AgradCcdfLogSkewNormal_v_2230;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2231> AgradCcdfLogSkewNormal_v_2231;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2232> AgradCcdfLogSkewNormal_v_2232;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2233> AgradCcdfLogSkewNormal_v_2233;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2234> AgradCcdfLogSkewNormal_v_2234;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2235> AgradCcdfLogSkewNormal_v_2235;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2236> AgradCcdfLogSkewNormal_v_2236;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2237> AgradCcdfLogSkewNormal_v_2237;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2238> AgradCcdfLogSkewNormal_v_2238;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2239> AgradCcdfLogSkewNormal_v_2239;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2240> AgradCcdfLogSkewNormal_v_2240;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2241> AgradCcdfLogSkewNormal_v_2241;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2242> AgradCcdfLogSkewNormal_v_2242;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2243> AgradCcdfLogSkewNormal_v_2243;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2244> AgradCcdfLogSkewNormal_v_2244;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2245> AgradCcdfLogSkewNormal_v_2245;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2246> AgradCcdfLogSkewNormal_v_2246;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2247> AgradCcdfLogSkewNormal_v_2247;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2248> AgradCcdfLogSkewNormal_v_2248;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2249> AgradCcdfLogSkewNormal_v_2249;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2250> AgradCcdfLogSkewNormal_v_2250;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2251> AgradCcdfLogSkewNormal_v_2251;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2252> AgradCcdfLogSkewNormal_v_2252;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2253> AgradCcdfLogSkewNormal_v_2253;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2254> AgradCcdfLogSkewNormal_v_2254;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2255> AgradCcdfLogSkewNormal_v_2255;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2256> AgradCcdfLogSkewNormal_v_2256;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2257> AgradCcdfLogSkewNormal_v_2257;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2258> AgradCcdfLogSkewNormal_v_2258;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2259> AgradCcdfLogSkewNormal_v_2259;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2260> AgradCcdfLogSkewNormal_v_2260;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2261> AgradCcdfLogSkewNormal_v_2261;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2262> AgradCcdfLogSkewNormal_v_2262;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2263> AgradCcdfLogSkewNormal_v_2263;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2264> AgradCcdfLogSkewNormal_v_2264;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2265> AgradCcdfLogSkewNormal_v_2265;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2266> AgradCcdfLogSkewNormal_v_2266;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2267> AgradCcdfLogSkewNormal_v_2267;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2268> AgradCcdfLogSkewNormal_v_2268;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2269> AgradCcdfLogSkewNormal_v_2269;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2270> AgradCcdfLogSkewNormal_v_2270;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2271> AgradCcdfLogSkewNormal_v_2271;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2272> AgradCcdfLogSkewNormal_v_2272;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2273> AgradCcdfLogSkewNormal_v_2273;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2274> AgradCcdfLogSkewNormal_v_2274;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2275> AgradCcdfLogSkewNormal_v_2275;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2276> AgradCcdfLogSkewNormal_v_2276;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2277> AgradCcdfLogSkewNormal_v_2277;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2278> AgradCcdfLogSkewNormal_v_2278;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2279> AgradCcdfLogSkewNormal_v_2279;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2280> AgradCcdfLogSkewNormal_v_2280;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2281> AgradCcdfLogSkewNormal_v_2281;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2282> AgradCcdfLogSkewNormal_v_2282;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2283> AgradCcdfLogSkewNormal_v_2283;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2284> AgradCcdfLogSkewNormal_v_2284;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2285> AgradCcdfLogSkewNormal_v_2285;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2286> AgradCcdfLogSkewNormal_v_2286;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2287> AgradCcdfLogSkewNormal_v_2287;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2288> AgradCcdfLogSkewNormal_v_2288;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2289> AgradCcdfLogSkewNormal_v_2289;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2290> AgradCcdfLogSkewNormal_v_2290;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2291> AgradCcdfLogSkewNormal_v_2291;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2292> AgradCcdfLogSkewNormal_v_2292;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2293> AgradCcdfLogSkewNormal_v_2293;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2294> AgradCcdfLogSkewNormal_v_2294;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2295> AgradCcdfLogSkewNormal_v_2295;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2296> AgradCcdfLogSkewNormal_v_2296;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2297> AgradCcdfLogSkewNormal_v_2297;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2298> AgradCcdfLogSkewNormal_v_2298;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_v_2299> AgradCcdfLogSkewNormal_v_2299;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2200, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2200);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2201, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2201);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2202, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2202);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2203, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2203);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2204, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2204);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2205, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2205);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2206, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2206);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2207, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2207);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2208, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2208);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2209, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2209);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2210, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2210);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2211, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2211);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2212, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2212);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2213, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2213);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2214, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2214);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2215, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2215);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2216, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2216);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2217, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2217);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2218, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2218);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2219, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2219);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2220, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2220);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2221, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2221);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2222, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2222);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2223, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2223);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2224, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2224);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2225, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2225);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2226, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2226);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2227, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2227);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2228, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2228);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2229, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2229);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2230, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2230);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2231, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2231);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2232, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2232);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2233, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2233);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2234, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2234);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2235, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2235);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2236, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2236);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2237, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2237);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2238, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2238);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2239, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2239);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2240, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2240);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2241, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2241);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2242, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2242);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2243, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2243);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2244, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2244);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2245, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2245);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2246, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2246);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2247, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2247);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2248, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2248);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2249, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2249);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2250, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2250);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2251, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2251);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2252, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2252);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2253, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2253);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2254, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2254);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2255, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2255);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2256, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2256);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2257, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2257);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2258, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2258);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2259, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2259);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2260, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2260);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2261, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2261);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2262, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2262);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2263, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2263);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2264, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2264);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2265, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2265);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2266, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2266);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2267, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2267);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2268, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2268);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2269, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2269);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2270, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2270);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2271, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2271);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2272, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2272);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2273, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2273);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2274, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2274);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2275, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2275);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2276, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2276);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2277, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2277);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2278, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2278);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2279, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2279);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2280, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2280);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2281, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2281);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2282, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2282);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2283, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2283);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2284, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2284);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2285, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2285);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2286, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2286);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2287, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2287);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2288, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2288);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2289, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2289);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2290, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2290);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2291, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2291);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2292, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2292);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2293, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2293);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2294, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2294);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2295, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2295);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2296, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2296);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2297, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2297);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2298, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2298);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_v_2299, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_v_2299);

