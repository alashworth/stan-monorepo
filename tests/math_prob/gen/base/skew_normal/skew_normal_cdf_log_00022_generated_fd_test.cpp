#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2200;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2201;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2202;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2203;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2204;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2205;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2206;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2207;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, double, empty, empty> type_fd_2208;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, std::vector<double>, empty, empty> type_fd_2209;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2210;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2211;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, fvar<double>, empty, empty> type_fd_2212;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_2213;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2214;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2215;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, double, empty, empty> type_fd_2216;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_2217;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2218;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2219;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_2220;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_2221;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2222;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2223;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2224;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2225;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2226;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2227;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2228;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2229;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2230;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2231;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2232;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2233;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2234;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2235;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2236;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2237;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2238;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2239;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, double, empty, empty> type_fd_2240;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_fd_2241;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2242;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2243;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, fvar<double>, empty, empty> type_fd_2244;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, std::vector<fvar<double>>, empty, empty> type_fd_2245;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2246;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2247;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_fd_2248;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_fd_2249;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2250;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2251;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, fvar<double>, empty, empty> type_fd_2252;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_2253;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2254;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2255;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2256;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2257;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2258;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2259;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2260;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2261;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2262;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2263;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2264;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2265;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2266;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2267;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2268;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2269;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2270;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2271;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, double, empty, empty> type_fd_2272;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<double>, empty, empty> type_fd_2273;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2274;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2275;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, fvar<double>, empty, empty> type_fd_2276;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_2277;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2278;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2279;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, double, empty, empty> type_fd_2280;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_2281;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2282;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2283;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_2284;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_2285;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2286;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2287;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2288;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2289;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2290;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2291;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2292;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2293;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2294;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2295;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2296;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2297;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2298;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2299;

typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2200> AgradCdfLogSkewNormal_fd_2200;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2201> AgradCdfLogSkewNormal_fd_2201;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2202> AgradCdfLogSkewNormal_fd_2202;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2203> AgradCdfLogSkewNormal_fd_2203;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2204> AgradCdfLogSkewNormal_fd_2204;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2205> AgradCdfLogSkewNormal_fd_2205;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2206> AgradCdfLogSkewNormal_fd_2206;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2207> AgradCdfLogSkewNormal_fd_2207;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2208> AgradCdfLogSkewNormal_fd_2208;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2209> AgradCdfLogSkewNormal_fd_2209;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2210> AgradCdfLogSkewNormal_fd_2210;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2211> AgradCdfLogSkewNormal_fd_2211;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2212> AgradCdfLogSkewNormal_fd_2212;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2213> AgradCdfLogSkewNormal_fd_2213;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2214> AgradCdfLogSkewNormal_fd_2214;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2215> AgradCdfLogSkewNormal_fd_2215;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2216> AgradCdfLogSkewNormal_fd_2216;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2217> AgradCdfLogSkewNormal_fd_2217;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2218> AgradCdfLogSkewNormal_fd_2218;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2219> AgradCdfLogSkewNormal_fd_2219;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2220> AgradCdfLogSkewNormal_fd_2220;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2221> AgradCdfLogSkewNormal_fd_2221;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2222> AgradCdfLogSkewNormal_fd_2222;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2223> AgradCdfLogSkewNormal_fd_2223;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2224> AgradCdfLogSkewNormal_fd_2224;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2225> AgradCdfLogSkewNormal_fd_2225;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2226> AgradCdfLogSkewNormal_fd_2226;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2227> AgradCdfLogSkewNormal_fd_2227;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2228> AgradCdfLogSkewNormal_fd_2228;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2229> AgradCdfLogSkewNormal_fd_2229;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2230> AgradCdfLogSkewNormal_fd_2230;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2231> AgradCdfLogSkewNormal_fd_2231;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2232> AgradCdfLogSkewNormal_fd_2232;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2233> AgradCdfLogSkewNormal_fd_2233;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2234> AgradCdfLogSkewNormal_fd_2234;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2235> AgradCdfLogSkewNormal_fd_2235;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2236> AgradCdfLogSkewNormal_fd_2236;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2237> AgradCdfLogSkewNormal_fd_2237;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2238> AgradCdfLogSkewNormal_fd_2238;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2239> AgradCdfLogSkewNormal_fd_2239;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2240> AgradCdfLogSkewNormal_fd_2240;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2241> AgradCdfLogSkewNormal_fd_2241;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2242> AgradCdfLogSkewNormal_fd_2242;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2243> AgradCdfLogSkewNormal_fd_2243;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2244> AgradCdfLogSkewNormal_fd_2244;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2245> AgradCdfLogSkewNormal_fd_2245;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2246> AgradCdfLogSkewNormal_fd_2246;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2247> AgradCdfLogSkewNormal_fd_2247;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2248> AgradCdfLogSkewNormal_fd_2248;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2249> AgradCdfLogSkewNormal_fd_2249;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2250> AgradCdfLogSkewNormal_fd_2250;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2251> AgradCdfLogSkewNormal_fd_2251;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2252> AgradCdfLogSkewNormal_fd_2252;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2253> AgradCdfLogSkewNormal_fd_2253;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2254> AgradCdfLogSkewNormal_fd_2254;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2255> AgradCdfLogSkewNormal_fd_2255;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2256> AgradCdfLogSkewNormal_fd_2256;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2257> AgradCdfLogSkewNormal_fd_2257;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2258> AgradCdfLogSkewNormal_fd_2258;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2259> AgradCdfLogSkewNormal_fd_2259;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2260> AgradCdfLogSkewNormal_fd_2260;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2261> AgradCdfLogSkewNormal_fd_2261;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2262> AgradCdfLogSkewNormal_fd_2262;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2263> AgradCdfLogSkewNormal_fd_2263;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2264> AgradCdfLogSkewNormal_fd_2264;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2265> AgradCdfLogSkewNormal_fd_2265;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2266> AgradCdfLogSkewNormal_fd_2266;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2267> AgradCdfLogSkewNormal_fd_2267;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2268> AgradCdfLogSkewNormal_fd_2268;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2269> AgradCdfLogSkewNormal_fd_2269;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2270> AgradCdfLogSkewNormal_fd_2270;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2271> AgradCdfLogSkewNormal_fd_2271;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2272> AgradCdfLogSkewNormal_fd_2272;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2273> AgradCdfLogSkewNormal_fd_2273;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2274> AgradCdfLogSkewNormal_fd_2274;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2275> AgradCdfLogSkewNormal_fd_2275;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2276> AgradCdfLogSkewNormal_fd_2276;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2277> AgradCdfLogSkewNormal_fd_2277;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2278> AgradCdfLogSkewNormal_fd_2278;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2279> AgradCdfLogSkewNormal_fd_2279;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2280> AgradCdfLogSkewNormal_fd_2280;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2281> AgradCdfLogSkewNormal_fd_2281;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2282> AgradCdfLogSkewNormal_fd_2282;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2283> AgradCdfLogSkewNormal_fd_2283;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2284> AgradCdfLogSkewNormal_fd_2284;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2285> AgradCdfLogSkewNormal_fd_2285;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2286> AgradCdfLogSkewNormal_fd_2286;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2287> AgradCdfLogSkewNormal_fd_2287;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2288> AgradCdfLogSkewNormal_fd_2288;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2289> AgradCdfLogSkewNormal_fd_2289;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2290> AgradCdfLogSkewNormal_fd_2290;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2291> AgradCdfLogSkewNormal_fd_2291;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2292> AgradCdfLogSkewNormal_fd_2292;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2293> AgradCdfLogSkewNormal_fd_2293;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2294> AgradCdfLogSkewNormal_fd_2294;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2295> AgradCdfLogSkewNormal_fd_2295;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2296> AgradCdfLogSkewNormal_fd_2296;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2297> AgradCdfLogSkewNormal_fd_2297;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2298> AgradCdfLogSkewNormal_fd_2298;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_fd_2299> AgradCdfLogSkewNormal_fd_2299;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2200, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2200);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2201, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2201);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2202, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2202);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2203, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2203);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2204, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2204);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2205, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2205);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2206, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2206);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2207, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2207);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2208, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2208);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2209, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2209);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2210, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2210);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2211, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2211);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2212, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2212);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2213, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2213);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2214, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2214);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2215, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2215);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2216, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2216);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2217, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2217);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2218, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2218);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2219, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2219);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2220, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2220);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2221, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2221);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2222, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2222);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2223, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2223);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2224, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2224);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2225, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2225);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2226, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2226);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2227, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2227);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2228, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2228);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2229, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2229);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2230, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2230);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2231, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2231);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2232, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2232);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2233, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2233);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2234, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2234);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2235, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2235);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2236, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2236);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2237, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2237);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2238, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2238);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2239, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2239);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2240, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2240);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2241, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2241);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2242, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2242);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2243, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2243);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2244, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2244);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2245, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2245);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2246, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2246);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2247, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2247);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2248, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2248);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2249, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2249);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2250, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2250);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2251, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2251);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2252, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2252);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2253, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2253);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2254, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2254);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2255, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2255);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2256, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2256);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2257, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2257);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2258, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2258);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2259, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2259);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2260, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2260);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2261, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2261);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2262, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2262);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2263, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2263);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2264, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2264);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2265, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2265);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2266, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2266);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2267, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2267);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2268, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2268);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2269, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2269);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2270, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2270);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2271, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2271);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2272, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2272);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2273, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2273);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2274, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2274);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2275, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2275);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2276, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2276);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2277, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2277);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2278, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2278);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2279, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2279);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2280, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2280);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2281, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2281);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2282, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2282);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2283, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2283);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2284, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2284);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2285, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2285);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2286, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2286);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2287, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2287);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2288, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2288);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2289, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2289);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2290, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2290);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2291, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2291);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2292, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2292);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2293, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2293);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2294, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2294);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2295, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2295);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2296, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2296);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2297, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2297);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2298, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2298);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_fd_2299, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_fd_2299);

