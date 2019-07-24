#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_cdf_log_test.hpp>

typedef boost::mpl::vector<var, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2100;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2101;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2102;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2103;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2104;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2105;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2106;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2107;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2108;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2109;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2110;
typedef boost::mpl::vector<var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2111;
typedef boost::mpl::vector<var, std::vector<double>, double, double, empty, empty> type_v_2112;
typedef boost::mpl::vector<var, std::vector<double>, double, std::vector<double>, empty, empty> type_v_2113;
typedef boost::mpl::vector<var, std::vector<double>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2114;
typedef boost::mpl::vector<var, std::vector<double>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2115;
typedef boost::mpl::vector<var, std::vector<double>, double, var, empty, empty> type_v_2116;
typedef boost::mpl::vector<var, std::vector<double>, double, std::vector<var>, empty, empty> type_v_2117;
typedef boost::mpl::vector<var, std::vector<double>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2118;
typedef boost::mpl::vector<var, std::vector<double>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2119;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, double, empty, empty> type_v_2120;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, std::vector<double>, empty, empty> type_v_2121;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2122;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2123;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, var, empty, empty> type_v_2124;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, std::vector<var>, empty, empty> type_v_2125;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2126;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2127;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_2128;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2129;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2130;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2131;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_2132;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2133;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2134;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2135;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_2136;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2137;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2138;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2139;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_2140;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2141;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2142;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2143;
typedef boost::mpl::vector<var, std::vector<double>, var, double, empty, empty> type_v_2144;
typedef boost::mpl::vector<var, std::vector<double>, var, std::vector<double>, empty, empty> type_v_2145;
typedef boost::mpl::vector<var, std::vector<double>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2146;
typedef boost::mpl::vector<var, std::vector<double>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2147;
typedef boost::mpl::vector<var, std::vector<double>, var, var, empty, empty> type_v_2148;
typedef boost::mpl::vector<var, std::vector<double>, var, std::vector<var>, empty, empty> type_v_2149;
typedef boost::mpl::vector<var, std::vector<double>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2150;
typedef boost::mpl::vector<var, std::vector<double>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2151;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, double, empty, empty> type_v_2152;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, std::vector<double>, empty, empty> type_v_2153;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2154;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2155;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, var, empty, empty> type_v_2156;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, std::vector<var>, empty, empty> type_v_2157;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2158;
typedef boost::mpl::vector<var, std::vector<double>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2159;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_2160;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2161;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2162;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2163;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_2164;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2165;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2166;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2167;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_2168;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_2169;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2170;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2171;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_2172;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_2173;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2174;
typedef boost::mpl::vector<var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2175;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, double, empty, empty> type_v_2176;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty> type_v_2177;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2178;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2179;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, var, empty, empty> type_v_2180;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, std::vector<var>, empty, empty> type_v_2181;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2182;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2183;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty> type_v_2184;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty> type_v_2185;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2186;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2187;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, var, empty, empty> type_v_2188;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, empty, empty> type_v_2189;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2190;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2191;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_2192;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_2193;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_2194;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_2195;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_2196;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_2197;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_2198;
typedef boost::mpl::vector<var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_2199;

typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2100> AgradCdfLogParetoType2_v_2100;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2101> AgradCdfLogParetoType2_v_2101;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2102> AgradCdfLogParetoType2_v_2102;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2103> AgradCdfLogParetoType2_v_2103;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2104> AgradCdfLogParetoType2_v_2104;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2105> AgradCdfLogParetoType2_v_2105;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2106> AgradCdfLogParetoType2_v_2106;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2107> AgradCdfLogParetoType2_v_2107;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2108> AgradCdfLogParetoType2_v_2108;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2109> AgradCdfLogParetoType2_v_2109;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2110> AgradCdfLogParetoType2_v_2110;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2111> AgradCdfLogParetoType2_v_2111;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2112> AgradCdfLogParetoType2_v_2112;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2113> AgradCdfLogParetoType2_v_2113;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2114> AgradCdfLogParetoType2_v_2114;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2115> AgradCdfLogParetoType2_v_2115;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2116> AgradCdfLogParetoType2_v_2116;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2117> AgradCdfLogParetoType2_v_2117;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2118> AgradCdfLogParetoType2_v_2118;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2119> AgradCdfLogParetoType2_v_2119;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2120> AgradCdfLogParetoType2_v_2120;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2121> AgradCdfLogParetoType2_v_2121;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2122> AgradCdfLogParetoType2_v_2122;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2123> AgradCdfLogParetoType2_v_2123;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2124> AgradCdfLogParetoType2_v_2124;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2125> AgradCdfLogParetoType2_v_2125;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2126> AgradCdfLogParetoType2_v_2126;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2127> AgradCdfLogParetoType2_v_2127;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2128> AgradCdfLogParetoType2_v_2128;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2129> AgradCdfLogParetoType2_v_2129;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2130> AgradCdfLogParetoType2_v_2130;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2131> AgradCdfLogParetoType2_v_2131;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2132> AgradCdfLogParetoType2_v_2132;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2133> AgradCdfLogParetoType2_v_2133;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2134> AgradCdfLogParetoType2_v_2134;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2135> AgradCdfLogParetoType2_v_2135;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2136> AgradCdfLogParetoType2_v_2136;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2137> AgradCdfLogParetoType2_v_2137;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2138> AgradCdfLogParetoType2_v_2138;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2139> AgradCdfLogParetoType2_v_2139;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2140> AgradCdfLogParetoType2_v_2140;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2141> AgradCdfLogParetoType2_v_2141;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2142> AgradCdfLogParetoType2_v_2142;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2143> AgradCdfLogParetoType2_v_2143;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2144> AgradCdfLogParetoType2_v_2144;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2145> AgradCdfLogParetoType2_v_2145;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2146> AgradCdfLogParetoType2_v_2146;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2147> AgradCdfLogParetoType2_v_2147;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2148> AgradCdfLogParetoType2_v_2148;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2149> AgradCdfLogParetoType2_v_2149;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2150> AgradCdfLogParetoType2_v_2150;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2151> AgradCdfLogParetoType2_v_2151;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2152> AgradCdfLogParetoType2_v_2152;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2153> AgradCdfLogParetoType2_v_2153;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2154> AgradCdfLogParetoType2_v_2154;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2155> AgradCdfLogParetoType2_v_2155;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2156> AgradCdfLogParetoType2_v_2156;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2157> AgradCdfLogParetoType2_v_2157;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2158> AgradCdfLogParetoType2_v_2158;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2159> AgradCdfLogParetoType2_v_2159;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2160> AgradCdfLogParetoType2_v_2160;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2161> AgradCdfLogParetoType2_v_2161;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2162> AgradCdfLogParetoType2_v_2162;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2163> AgradCdfLogParetoType2_v_2163;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2164> AgradCdfLogParetoType2_v_2164;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2165> AgradCdfLogParetoType2_v_2165;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2166> AgradCdfLogParetoType2_v_2166;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2167> AgradCdfLogParetoType2_v_2167;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2168> AgradCdfLogParetoType2_v_2168;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2169> AgradCdfLogParetoType2_v_2169;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2170> AgradCdfLogParetoType2_v_2170;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2171> AgradCdfLogParetoType2_v_2171;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2172> AgradCdfLogParetoType2_v_2172;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2173> AgradCdfLogParetoType2_v_2173;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2174> AgradCdfLogParetoType2_v_2174;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2175> AgradCdfLogParetoType2_v_2175;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2176> AgradCdfLogParetoType2_v_2176;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2177> AgradCdfLogParetoType2_v_2177;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2178> AgradCdfLogParetoType2_v_2178;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2179> AgradCdfLogParetoType2_v_2179;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2180> AgradCdfLogParetoType2_v_2180;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2181> AgradCdfLogParetoType2_v_2181;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2182> AgradCdfLogParetoType2_v_2182;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2183> AgradCdfLogParetoType2_v_2183;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2184> AgradCdfLogParetoType2_v_2184;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2185> AgradCdfLogParetoType2_v_2185;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2186> AgradCdfLogParetoType2_v_2186;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2187> AgradCdfLogParetoType2_v_2187;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2188> AgradCdfLogParetoType2_v_2188;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2189> AgradCdfLogParetoType2_v_2189;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2190> AgradCdfLogParetoType2_v_2190;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2191> AgradCdfLogParetoType2_v_2191;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2192> AgradCdfLogParetoType2_v_2192;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2193> AgradCdfLogParetoType2_v_2193;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2194> AgradCdfLogParetoType2_v_2194;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2195> AgradCdfLogParetoType2_v_2195;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2196> AgradCdfLogParetoType2_v_2196;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2197> AgradCdfLogParetoType2_v_2197;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2198> AgradCdfLogParetoType2_v_2198;
typedef boost::mpl::vector<AgradCdfLogParetoType2, type_v_2199> AgradCdfLogParetoType2_v_2199;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2100, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2101, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2102, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2103, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2104, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2105, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2106, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2107, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2108, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2109, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2110, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2111, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2112, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2113, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2114, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2115, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2116, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2117, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2118, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2119, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2120, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2121, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2122, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2123, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2124, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2125, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2126, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2127, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2127);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2128, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2128);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2129, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2129);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2130, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2130);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2131, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2131);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2132, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2132);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2133, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2133);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2134, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2134);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2135, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2135);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2136, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2136);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2137, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2137);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2138, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2138);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2139, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2139);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2140, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2140);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2141, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2141);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2142, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2142);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2143, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2143);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2144, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2144);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2145, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2145);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2146, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2146);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2147, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2147);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2148, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2148);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2149, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2149);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2150, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2150);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2151, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2151);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2152, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2152);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2153, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2153);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2154, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2154);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2155, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2155);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2156, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2156);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2157, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2157);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2158, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2158);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2159, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2159);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2160, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2160);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2161, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2161);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2162, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2162);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2163, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2163);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2164, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2164);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2165, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2165);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2166, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2166);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2167, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2167);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2168, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2168);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2169, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2169);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2170, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2170);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2171, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2171);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2172, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2172);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2173, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2173);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2174, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2174);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2175, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2175);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2176, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2176);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2177, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2177);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2178, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2178);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2179, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2179);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2180, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2180);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2181, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2181);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2182, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2182);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2183, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2183);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2184, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2184);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2185, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2185);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2186, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2186);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2187, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2187);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2188, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2188);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2189, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2189);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2190, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2190);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2191, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2191);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2192, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2192);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2193, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2193);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2194, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2194);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2195, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2195);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2196, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2196);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2197, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2197);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2198, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2198);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogParetoType2_v_2199, AgradCdfLogTestFixture, AgradCdfLogParetoType2_v_2199);
