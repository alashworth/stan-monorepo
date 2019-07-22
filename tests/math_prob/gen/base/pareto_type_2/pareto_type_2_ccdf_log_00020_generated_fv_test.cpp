#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto_type_2/pareto_type_2_ccdf_log_test.hpp>

typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2000;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2001;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2002;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2003;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2004;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2005;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2006;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2007;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2008;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2009;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2010;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2011;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2012;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2013;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2014;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2015;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty> type_fv_2016;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty> type_fv_2017;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2018;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2019;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty> type_fv_2020;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2021;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2022;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2023;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty> type_fv_2024;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2025;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2026;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2027;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2028;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2029;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2030;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2031;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2032;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2033;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2034;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2035;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2036;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2037;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2038;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2039;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2040;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2041;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2042;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2043;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2044;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2045;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2046;
typedef boost::mpl::vector<fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2047;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, double, empty, empty> type_fv_2048;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, std::vector<double>, empty, empty> type_fv_2049;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2050;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2051;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, fvar<var>, empty, empty> type_fv_2052;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, std::vector<fvar<var>>, empty, empty> type_fv_2053;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2054;
typedef boost::mpl::vector<fvar<var>, fvar<var>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2055;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, double, empty, empty> type_fv_2056;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, std::vector<double>, empty, empty> type_fv_2057;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2058;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2059;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, fvar<var>, empty, empty> type_fv_2060;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_2061;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2062;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2063;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2064;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2065;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2066;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2067;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_2068;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_2069;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2070;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2071;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_2072;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_2073;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2074;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2075;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_2076;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_2077;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2078;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2079;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, double, empty, empty> type_fv_2080;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, std::vector<double>, empty, empty> type_fv_2081;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2082;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2083;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, fvar<var>, empty, empty> type_fv_2084;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_2085;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2086;
typedef boost::mpl::vector<fvar<var>, fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2087;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, double, empty, empty> type_fv_2088;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_2089;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2090;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2091;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_2092;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_2093;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_2094;
typedef boost::mpl::vector<fvar<var>, fvar<var>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_2095;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_2096;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_2097;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_2098;
typedef boost::mpl::vector<fvar<var>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_2099;

typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2000> AgradCcdfLogParetoType2_fv_2000;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2001> AgradCcdfLogParetoType2_fv_2001;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2002> AgradCcdfLogParetoType2_fv_2002;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2003> AgradCcdfLogParetoType2_fv_2003;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2004> AgradCcdfLogParetoType2_fv_2004;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2005> AgradCcdfLogParetoType2_fv_2005;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2006> AgradCcdfLogParetoType2_fv_2006;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2007> AgradCcdfLogParetoType2_fv_2007;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2008> AgradCcdfLogParetoType2_fv_2008;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2009> AgradCcdfLogParetoType2_fv_2009;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2010> AgradCcdfLogParetoType2_fv_2010;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2011> AgradCcdfLogParetoType2_fv_2011;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2012> AgradCcdfLogParetoType2_fv_2012;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2013> AgradCcdfLogParetoType2_fv_2013;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2014> AgradCcdfLogParetoType2_fv_2014;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2015> AgradCcdfLogParetoType2_fv_2015;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2016> AgradCcdfLogParetoType2_fv_2016;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2017> AgradCcdfLogParetoType2_fv_2017;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2018> AgradCcdfLogParetoType2_fv_2018;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2019> AgradCcdfLogParetoType2_fv_2019;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2020> AgradCcdfLogParetoType2_fv_2020;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2021> AgradCcdfLogParetoType2_fv_2021;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2022> AgradCcdfLogParetoType2_fv_2022;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2023> AgradCcdfLogParetoType2_fv_2023;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2024> AgradCcdfLogParetoType2_fv_2024;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2025> AgradCcdfLogParetoType2_fv_2025;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2026> AgradCcdfLogParetoType2_fv_2026;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2027> AgradCcdfLogParetoType2_fv_2027;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2028> AgradCcdfLogParetoType2_fv_2028;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2029> AgradCcdfLogParetoType2_fv_2029;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2030> AgradCcdfLogParetoType2_fv_2030;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2031> AgradCcdfLogParetoType2_fv_2031;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2032> AgradCcdfLogParetoType2_fv_2032;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2033> AgradCcdfLogParetoType2_fv_2033;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2034> AgradCcdfLogParetoType2_fv_2034;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2035> AgradCcdfLogParetoType2_fv_2035;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2036> AgradCcdfLogParetoType2_fv_2036;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2037> AgradCcdfLogParetoType2_fv_2037;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2038> AgradCcdfLogParetoType2_fv_2038;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2039> AgradCcdfLogParetoType2_fv_2039;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2040> AgradCcdfLogParetoType2_fv_2040;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2041> AgradCcdfLogParetoType2_fv_2041;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2042> AgradCcdfLogParetoType2_fv_2042;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2043> AgradCcdfLogParetoType2_fv_2043;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2044> AgradCcdfLogParetoType2_fv_2044;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2045> AgradCcdfLogParetoType2_fv_2045;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2046> AgradCcdfLogParetoType2_fv_2046;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2047> AgradCcdfLogParetoType2_fv_2047;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2048> AgradCcdfLogParetoType2_fv_2048;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2049> AgradCcdfLogParetoType2_fv_2049;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2050> AgradCcdfLogParetoType2_fv_2050;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2051> AgradCcdfLogParetoType2_fv_2051;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2052> AgradCcdfLogParetoType2_fv_2052;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2053> AgradCcdfLogParetoType2_fv_2053;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2054> AgradCcdfLogParetoType2_fv_2054;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2055> AgradCcdfLogParetoType2_fv_2055;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2056> AgradCcdfLogParetoType2_fv_2056;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2057> AgradCcdfLogParetoType2_fv_2057;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2058> AgradCcdfLogParetoType2_fv_2058;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2059> AgradCcdfLogParetoType2_fv_2059;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2060> AgradCcdfLogParetoType2_fv_2060;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2061> AgradCcdfLogParetoType2_fv_2061;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2062> AgradCcdfLogParetoType2_fv_2062;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2063> AgradCcdfLogParetoType2_fv_2063;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2064> AgradCcdfLogParetoType2_fv_2064;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2065> AgradCcdfLogParetoType2_fv_2065;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2066> AgradCcdfLogParetoType2_fv_2066;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2067> AgradCcdfLogParetoType2_fv_2067;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2068> AgradCcdfLogParetoType2_fv_2068;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2069> AgradCcdfLogParetoType2_fv_2069;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2070> AgradCcdfLogParetoType2_fv_2070;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2071> AgradCcdfLogParetoType2_fv_2071;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2072> AgradCcdfLogParetoType2_fv_2072;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2073> AgradCcdfLogParetoType2_fv_2073;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2074> AgradCcdfLogParetoType2_fv_2074;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2075> AgradCcdfLogParetoType2_fv_2075;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2076> AgradCcdfLogParetoType2_fv_2076;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2077> AgradCcdfLogParetoType2_fv_2077;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2078> AgradCcdfLogParetoType2_fv_2078;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2079> AgradCcdfLogParetoType2_fv_2079;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2080> AgradCcdfLogParetoType2_fv_2080;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2081> AgradCcdfLogParetoType2_fv_2081;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2082> AgradCcdfLogParetoType2_fv_2082;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2083> AgradCcdfLogParetoType2_fv_2083;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2084> AgradCcdfLogParetoType2_fv_2084;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2085> AgradCcdfLogParetoType2_fv_2085;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2086> AgradCcdfLogParetoType2_fv_2086;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2087> AgradCcdfLogParetoType2_fv_2087;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2088> AgradCcdfLogParetoType2_fv_2088;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2089> AgradCcdfLogParetoType2_fv_2089;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2090> AgradCcdfLogParetoType2_fv_2090;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2091> AgradCcdfLogParetoType2_fv_2091;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2092> AgradCcdfLogParetoType2_fv_2092;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2093> AgradCcdfLogParetoType2_fv_2093;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2094> AgradCcdfLogParetoType2_fv_2094;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2095> AgradCcdfLogParetoType2_fv_2095;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2096> AgradCcdfLogParetoType2_fv_2096;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2097> AgradCcdfLogParetoType2_fv_2097;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2098> AgradCcdfLogParetoType2_fv_2098;
typedef boost::mpl::vector<AgradCcdfLogParetoType2, type_fv_2099> AgradCcdfLogParetoType2_fv_2099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2000, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2001, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2002, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2003, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2004, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2005, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2006, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2007, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2008, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2009, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2010, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2011, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2012, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2013, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2014, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2015, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2016, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2017, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2018, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2019, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2020, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2021, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2022, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2023, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2024, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2025, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2026, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2027, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2028, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2029, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2030, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2031, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2032, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2033, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2034, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2035, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2036, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2037, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2038, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2039, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2040, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2041, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2042, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2043, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2044, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2045, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2046, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2047, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2048, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2049, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2050, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2051, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2052, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2053, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2054, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2055, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2056, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2057, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2058, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2059, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2060, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2061, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2062, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2063, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2064, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2065, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2066, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2067, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2068, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2069, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2070, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2071, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2072, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2073, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2074, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2075, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2076, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2077, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2078, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2079, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2080, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2081, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2082, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2083, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2084, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2085, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2086, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2087, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2088, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2089, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2090, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2091, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2092, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2093, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2094, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2095, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2096, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2097, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2098, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogParetoType2_fv_2099, AgradCcdfLogTestFixture, AgradCcdfLogParetoType2_fv_2099);

