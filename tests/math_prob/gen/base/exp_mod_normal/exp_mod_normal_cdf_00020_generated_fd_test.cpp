#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2000> AgradCdfExpModNormal_fd_2000;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2001> AgradCdfExpModNormal_fd_2001;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2002> AgradCdfExpModNormal_fd_2002;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2003> AgradCdfExpModNormal_fd_2003;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2004> AgradCdfExpModNormal_fd_2004;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2005> AgradCdfExpModNormal_fd_2005;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2006> AgradCdfExpModNormal_fd_2006;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2007> AgradCdfExpModNormal_fd_2007;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2008> AgradCdfExpModNormal_fd_2008;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2009> AgradCdfExpModNormal_fd_2009;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2010> AgradCdfExpModNormal_fd_2010;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2011> AgradCdfExpModNormal_fd_2011;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2012> AgradCdfExpModNormal_fd_2012;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2013> AgradCdfExpModNormal_fd_2013;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2014> AgradCdfExpModNormal_fd_2014;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2015> AgradCdfExpModNormal_fd_2015;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2016> AgradCdfExpModNormal_fd_2016;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2017> AgradCdfExpModNormal_fd_2017;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2018> AgradCdfExpModNormal_fd_2018;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2019> AgradCdfExpModNormal_fd_2019;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2020> AgradCdfExpModNormal_fd_2020;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2021> AgradCdfExpModNormal_fd_2021;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2022> AgradCdfExpModNormal_fd_2022;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2023> AgradCdfExpModNormal_fd_2023;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2024> AgradCdfExpModNormal_fd_2024;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2025> AgradCdfExpModNormal_fd_2025;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2026> AgradCdfExpModNormal_fd_2026;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2027> AgradCdfExpModNormal_fd_2027;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2028> AgradCdfExpModNormal_fd_2028;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2029> AgradCdfExpModNormal_fd_2029;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2030> AgradCdfExpModNormal_fd_2030;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2031> AgradCdfExpModNormal_fd_2031;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2032> AgradCdfExpModNormal_fd_2032;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2033> AgradCdfExpModNormal_fd_2033;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2034> AgradCdfExpModNormal_fd_2034;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2035> AgradCdfExpModNormal_fd_2035;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2036> AgradCdfExpModNormal_fd_2036;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2037> AgradCdfExpModNormal_fd_2037;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2038> AgradCdfExpModNormal_fd_2038;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2039> AgradCdfExpModNormal_fd_2039;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2040> AgradCdfExpModNormal_fd_2040;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2041> AgradCdfExpModNormal_fd_2041;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2042> AgradCdfExpModNormal_fd_2042;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2043> AgradCdfExpModNormal_fd_2043;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2044> AgradCdfExpModNormal_fd_2044;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2045> AgradCdfExpModNormal_fd_2045;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2046> AgradCdfExpModNormal_fd_2046;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2047> AgradCdfExpModNormal_fd_2047;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2048> AgradCdfExpModNormal_fd_2048;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2049> AgradCdfExpModNormal_fd_2049;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2050> AgradCdfExpModNormal_fd_2050;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2051> AgradCdfExpModNormal_fd_2051;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2052> AgradCdfExpModNormal_fd_2052;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2053> AgradCdfExpModNormal_fd_2053;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2054> AgradCdfExpModNormal_fd_2054;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2055> AgradCdfExpModNormal_fd_2055;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2056> AgradCdfExpModNormal_fd_2056;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2057> AgradCdfExpModNormal_fd_2057;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2058> AgradCdfExpModNormal_fd_2058;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2059> AgradCdfExpModNormal_fd_2059;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2060> AgradCdfExpModNormal_fd_2060;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2061> AgradCdfExpModNormal_fd_2061;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2062> AgradCdfExpModNormal_fd_2062;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2063> AgradCdfExpModNormal_fd_2063;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2064> AgradCdfExpModNormal_fd_2064;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2065> AgradCdfExpModNormal_fd_2065;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2066> AgradCdfExpModNormal_fd_2066;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2067> AgradCdfExpModNormal_fd_2067;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2068> AgradCdfExpModNormal_fd_2068;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2069> AgradCdfExpModNormal_fd_2069;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2070> AgradCdfExpModNormal_fd_2070;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2071> AgradCdfExpModNormal_fd_2071;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2072> AgradCdfExpModNormal_fd_2072;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2073> AgradCdfExpModNormal_fd_2073;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2074> AgradCdfExpModNormal_fd_2074;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2075> AgradCdfExpModNormal_fd_2075;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2076> AgradCdfExpModNormal_fd_2076;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2077> AgradCdfExpModNormal_fd_2077;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2078> AgradCdfExpModNormal_fd_2078;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2079> AgradCdfExpModNormal_fd_2079;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2080> AgradCdfExpModNormal_fd_2080;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2081> AgradCdfExpModNormal_fd_2081;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2082> AgradCdfExpModNormal_fd_2082;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2083> AgradCdfExpModNormal_fd_2083;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2084> AgradCdfExpModNormal_fd_2084;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2085> AgradCdfExpModNormal_fd_2085;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2086> AgradCdfExpModNormal_fd_2086;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2087> AgradCdfExpModNormal_fd_2087;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2088> AgradCdfExpModNormal_fd_2088;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2089> AgradCdfExpModNormal_fd_2089;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2090> AgradCdfExpModNormal_fd_2090;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2091> AgradCdfExpModNormal_fd_2091;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2092> AgradCdfExpModNormal_fd_2092;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2093> AgradCdfExpModNormal_fd_2093;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2094> AgradCdfExpModNormal_fd_2094;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2095> AgradCdfExpModNormal_fd_2095;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2096> AgradCdfExpModNormal_fd_2096;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2097> AgradCdfExpModNormal_fd_2097;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2098> AgradCdfExpModNormal_fd_2098;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_fd_2099> AgradCdfExpModNormal_fd_2099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2000, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2001, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2002, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2003, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2004, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2005, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2006, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2007, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2008, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2009, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2010, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2011, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2012, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2013, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2014, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2015, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2016, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2017, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2018, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2019, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2020, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2021, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2022, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2023, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2024, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2025, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2026, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2027, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2028, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2029, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2030, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2031, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2032, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2033, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2034, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2035, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2036, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2037, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2038, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2039, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2040, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2041, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2042, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2043, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2044, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2045, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2046, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2047, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2048, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2049, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2050, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2051, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2052, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2053, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2054, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2055, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2056, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2057, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2058, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2059, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2060, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2061, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2062, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2063, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2064, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2065, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2066, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2067, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2068, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2069, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2070, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2071, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2072, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2073, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2074, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2075, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2076, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2077, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2078, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2079, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2080, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2081, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2082, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2083, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2084, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2085, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2086, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2087, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2088, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2089, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2090, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2091, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2092, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2093, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2094, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2095, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2096, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2097, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2098, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_fd_2099, AgradCdfTestFixture, AgradCdfExpModNormal_fd_2099);
