#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_ccdf_log_test.hpp>

typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2000;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2001;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2002;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2003;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2004;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2005;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2006;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2007;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2008;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2009;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2010;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2011;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2012;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2013;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2014;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2015;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, double, empty, empty> type_fd_2016;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, std::vector<double>, empty, empty> type_fd_2017;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2018;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2019;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, fvar<double>, empty, empty> type_fd_2020;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_2021;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2022;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2023;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, double, empty, empty> type_fd_2024;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_2025;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2026;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2027;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_2028;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_2029;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2030;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2031;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2032;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2033;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2034;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2035;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2036;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2037;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2038;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2039;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2040;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2041;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2042;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2043;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2044;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2045;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2046;
typedef boost::mpl::vector<fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2047;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, double, empty, empty> type_fd_2048;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, std::vector<double>, empty, empty> type_fd_2049;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2050;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2051;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, fvar<double>, empty, empty> type_fd_2052;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, std::vector<fvar<double>>, empty, empty> type_fd_2053;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2054;
typedef boost::mpl::vector<fvar<double>, fvar<double>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2055;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, double, empty, empty> type_fd_2056;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, std::vector<double>, empty, empty> type_fd_2057;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2058;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2059;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, fvar<double>, empty, empty> type_fd_2060;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_2061;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2062;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2063;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2064;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2065;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2066;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2067;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_2068;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_2069;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2070;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2071;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fd_2072;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_2073;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2074;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2075;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_2076;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_2077;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2078;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2079;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, double, empty, empty> type_fd_2080;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, std::vector<double>, empty, empty> type_fd_2081;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2082;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2083;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, fvar<double>, empty, empty> type_fd_2084;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_2085;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2086;
typedef boost::mpl::vector<fvar<double>, fvar<double>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2087;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, double, empty, empty> type_fd_2088;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_2089;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2090;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2091;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_2092;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_2093;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_2094;
typedef boost::mpl::vector<fvar<double>, fvar<double>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_2095;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_2096;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_2097;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_2098;
typedef boost::mpl::vector<fvar<double>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_2099;

typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2000> AgradCcdfLogExpModNormal_fd_2000;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2001> AgradCcdfLogExpModNormal_fd_2001;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2002> AgradCcdfLogExpModNormal_fd_2002;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2003> AgradCcdfLogExpModNormal_fd_2003;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2004> AgradCcdfLogExpModNormal_fd_2004;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2005> AgradCcdfLogExpModNormal_fd_2005;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2006> AgradCcdfLogExpModNormal_fd_2006;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2007> AgradCcdfLogExpModNormal_fd_2007;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2008> AgradCcdfLogExpModNormal_fd_2008;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2009> AgradCcdfLogExpModNormal_fd_2009;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2010> AgradCcdfLogExpModNormal_fd_2010;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2011> AgradCcdfLogExpModNormal_fd_2011;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2012> AgradCcdfLogExpModNormal_fd_2012;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2013> AgradCcdfLogExpModNormal_fd_2013;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2014> AgradCcdfLogExpModNormal_fd_2014;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2015> AgradCcdfLogExpModNormal_fd_2015;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2016> AgradCcdfLogExpModNormal_fd_2016;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2017> AgradCcdfLogExpModNormal_fd_2017;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2018> AgradCcdfLogExpModNormal_fd_2018;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2019> AgradCcdfLogExpModNormal_fd_2019;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2020> AgradCcdfLogExpModNormal_fd_2020;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2021> AgradCcdfLogExpModNormal_fd_2021;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2022> AgradCcdfLogExpModNormal_fd_2022;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2023> AgradCcdfLogExpModNormal_fd_2023;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2024> AgradCcdfLogExpModNormal_fd_2024;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2025> AgradCcdfLogExpModNormal_fd_2025;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2026> AgradCcdfLogExpModNormal_fd_2026;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2027> AgradCcdfLogExpModNormal_fd_2027;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2028> AgradCcdfLogExpModNormal_fd_2028;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2029> AgradCcdfLogExpModNormal_fd_2029;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2030> AgradCcdfLogExpModNormal_fd_2030;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2031> AgradCcdfLogExpModNormal_fd_2031;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2032> AgradCcdfLogExpModNormal_fd_2032;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2033> AgradCcdfLogExpModNormal_fd_2033;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2034> AgradCcdfLogExpModNormal_fd_2034;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2035> AgradCcdfLogExpModNormal_fd_2035;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2036> AgradCcdfLogExpModNormal_fd_2036;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2037> AgradCcdfLogExpModNormal_fd_2037;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2038> AgradCcdfLogExpModNormal_fd_2038;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2039> AgradCcdfLogExpModNormal_fd_2039;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2040> AgradCcdfLogExpModNormal_fd_2040;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2041> AgradCcdfLogExpModNormal_fd_2041;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2042> AgradCcdfLogExpModNormal_fd_2042;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2043> AgradCcdfLogExpModNormal_fd_2043;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2044> AgradCcdfLogExpModNormal_fd_2044;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2045> AgradCcdfLogExpModNormal_fd_2045;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2046> AgradCcdfLogExpModNormal_fd_2046;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2047> AgradCcdfLogExpModNormal_fd_2047;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2048> AgradCcdfLogExpModNormal_fd_2048;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2049> AgradCcdfLogExpModNormal_fd_2049;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2050> AgradCcdfLogExpModNormal_fd_2050;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2051> AgradCcdfLogExpModNormal_fd_2051;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2052> AgradCcdfLogExpModNormal_fd_2052;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2053> AgradCcdfLogExpModNormal_fd_2053;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2054> AgradCcdfLogExpModNormal_fd_2054;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2055> AgradCcdfLogExpModNormal_fd_2055;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2056> AgradCcdfLogExpModNormal_fd_2056;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2057> AgradCcdfLogExpModNormal_fd_2057;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2058> AgradCcdfLogExpModNormal_fd_2058;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2059> AgradCcdfLogExpModNormal_fd_2059;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2060> AgradCcdfLogExpModNormal_fd_2060;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2061> AgradCcdfLogExpModNormal_fd_2061;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2062> AgradCcdfLogExpModNormal_fd_2062;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2063> AgradCcdfLogExpModNormal_fd_2063;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2064> AgradCcdfLogExpModNormal_fd_2064;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2065> AgradCcdfLogExpModNormal_fd_2065;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2066> AgradCcdfLogExpModNormal_fd_2066;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2067> AgradCcdfLogExpModNormal_fd_2067;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2068> AgradCcdfLogExpModNormal_fd_2068;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2069> AgradCcdfLogExpModNormal_fd_2069;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2070> AgradCcdfLogExpModNormal_fd_2070;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2071> AgradCcdfLogExpModNormal_fd_2071;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2072> AgradCcdfLogExpModNormal_fd_2072;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2073> AgradCcdfLogExpModNormal_fd_2073;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2074> AgradCcdfLogExpModNormal_fd_2074;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2075> AgradCcdfLogExpModNormal_fd_2075;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2076> AgradCcdfLogExpModNormal_fd_2076;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2077> AgradCcdfLogExpModNormal_fd_2077;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2078> AgradCcdfLogExpModNormal_fd_2078;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2079> AgradCcdfLogExpModNormal_fd_2079;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2080> AgradCcdfLogExpModNormal_fd_2080;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2081> AgradCcdfLogExpModNormal_fd_2081;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2082> AgradCcdfLogExpModNormal_fd_2082;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2083> AgradCcdfLogExpModNormal_fd_2083;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2084> AgradCcdfLogExpModNormal_fd_2084;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2085> AgradCcdfLogExpModNormal_fd_2085;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2086> AgradCcdfLogExpModNormal_fd_2086;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2087> AgradCcdfLogExpModNormal_fd_2087;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2088> AgradCcdfLogExpModNormal_fd_2088;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2089> AgradCcdfLogExpModNormal_fd_2089;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2090> AgradCcdfLogExpModNormal_fd_2090;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2091> AgradCcdfLogExpModNormal_fd_2091;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2092> AgradCcdfLogExpModNormal_fd_2092;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2093> AgradCcdfLogExpModNormal_fd_2093;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2094> AgradCcdfLogExpModNormal_fd_2094;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2095> AgradCcdfLogExpModNormal_fd_2095;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2096> AgradCcdfLogExpModNormal_fd_2096;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2097> AgradCcdfLogExpModNormal_fd_2097;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2098> AgradCcdfLogExpModNormal_fd_2098;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_fd_2099> AgradCcdfLogExpModNormal_fd_2099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2000, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2001, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2002, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2003, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2004, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2005, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2006, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2007, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2008, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2009, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2010, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2011, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2012, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2013, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2014, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2015, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2016, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2017, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2018, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2019, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2020, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2021, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2022, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2023, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2024, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2025, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2026, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2027, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2028, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2029, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2030, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2031, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2032, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2033, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2034, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2035, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2036, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2037, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2038, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2039, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2040, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2041, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2042, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2043, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2044, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2045, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2046, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2047, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2048, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2049, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2050, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2051, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2052, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2053, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2054, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2055, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2056, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2057, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2058, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2059, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2060, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2061, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2062, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2063, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2064, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2065, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2066, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2067, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2068, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2069, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2070, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2071, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2072, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2073, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2074, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2075, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2076, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2077, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2078, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2079, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2080, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2081, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2082, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2083, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2084, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2085, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2086, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2087, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2088, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2089, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2090, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2091, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2092, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2093, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2094, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2095, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2096, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2097, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2098, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_fd_2099, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_fd_2099);
