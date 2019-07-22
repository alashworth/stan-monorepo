#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2000> AgradCcdfLogSkewNormal_fd_2000;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2001> AgradCcdfLogSkewNormal_fd_2001;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2002> AgradCcdfLogSkewNormal_fd_2002;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2003> AgradCcdfLogSkewNormal_fd_2003;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2004> AgradCcdfLogSkewNormal_fd_2004;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2005> AgradCcdfLogSkewNormal_fd_2005;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2006> AgradCcdfLogSkewNormal_fd_2006;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2007> AgradCcdfLogSkewNormal_fd_2007;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2008> AgradCcdfLogSkewNormal_fd_2008;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2009> AgradCcdfLogSkewNormal_fd_2009;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2010> AgradCcdfLogSkewNormal_fd_2010;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2011> AgradCcdfLogSkewNormal_fd_2011;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2012> AgradCcdfLogSkewNormal_fd_2012;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2013> AgradCcdfLogSkewNormal_fd_2013;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2014> AgradCcdfLogSkewNormal_fd_2014;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2015> AgradCcdfLogSkewNormal_fd_2015;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2016> AgradCcdfLogSkewNormal_fd_2016;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2017> AgradCcdfLogSkewNormal_fd_2017;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2018> AgradCcdfLogSkewNormal_fd_2018;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2019> AgradCcdfLogSkewNormal_fd_2019;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2020> AgradCcdfLogSkewNormal_fd_2020;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2021> AgradCcdfLogSkewNormal_fd_2021;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2022> AgradCcdfLogSkewNormal_fd_2022;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2023> AgradCcdfLogSkewNormal_fd_2023;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2024> AgradCcdfLogSkewNormal_fd_2024;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2025> AgradCcdfLogSkewNormal_fd_2025;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2026> AgradCcdfLogSkewNormal_fd_2026;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2027> AgradCcdfLogSkewNormal_fd_2027;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2028> AgradCcdfLogSkewNormal_fd_2028;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2029> AgradCcdfLogSkewNormal_fd_2029;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2030> AgradCcdfLogSkewNormal_fd_2030;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2031> AgradCcdfLogSkewNormal_fd_2031;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2032> AgradCcdfLogSkewNormal_fd_2032;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2033> AgradCcdfLogSkewNormal_fd_2033;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2034> AgradCcdfLogSkewNormal_fd_2034;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2035> AgradCcdfLogSkewNormal_fd_2035;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2036> AgradCcdfLogSkewNormal_fd_2036;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2037> AgradCcdfLogSkewNormal_fd_2037;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2038> AgradCcdfLogSkewNormal_fd_2038;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2039> AgradCcdfLogSkewNormal_fd_2039;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2040> AgradCcdfLogSkewNormal_fd_2040;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2041> AgradCcdfLogSkewNormal_fd_2041;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2042> AgradCcdfLogSkewNormal_fd_2042;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2043> AgradCcdfLogSkewNormal_fd_2043;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2044> AgradCcdfLogSkewNormal_fd_2044;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2045> AgradCcdfLogSkewNormal_fd_2045;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2046> AgradCcdfLogSkewNormal_fd_2046;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2047> AgradCcdfLogSkewNormal_fd_2047;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2048> AgradCcdfLogSkewNormal_fd_2048;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2049> AgradCcdfLogSkewNormal_fd_2049;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2050> AgradCcdfLogSkewNormal_fd_2050;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2051> AgradCcdfLogSkewNormal_fd_2051;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2052> AgradCcdfLogSkewNormal_fd_2052;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2053> AgradCcdfLogSkewNormal_fd_2053;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2054> AgradCcdfLogSkewNormal_fd_2054;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2055> AgradCcdfLogSkewNormal_fd_2055;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2056> AgradCcdfLogSkewNormal_fd_2056;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2057> AgradCcdfLogSkewNormal_fd_2057;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2058> AgradCcdfLogSkewNormal_fd_2058;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2059> AgradCcdfLogSkewNormal_fd_2059;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2060> AgradCcdfLogSkewNormal_fd_2060;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2061> AgradCcdfLogSkewNormal_fd_2061;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2062> AgradCcdfLogSkewNormal_fd_2062;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2063> AgradCcdfLogSkewNormal_fd_2063;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2064> AgradCcdfLogSkewNormal_fd_2064;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2065> AgradCcdfLogSkewNormal_fd_2065;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2066> AgradCcdfLogSkewNormal_fd_2066;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2067> AgradCcdfLogSkewNormal_fd_2067;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2068> AgradCcdfLogSkewNormal_fd_2068;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2069> AgradCcdfLogSkewNormal_fd_2069;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2070> AgradCcdfLogSkewNormal_fd_2070;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2071> AgradCcdfLogSkewNormal_fd_2071;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2072> AgradCcdfLogSkewNormal_fd_2072;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2073> AgradCcdfLogSkewNormal_fd_2073;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2074> AgradCcdfLogSkewNormal_fd_2074;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2075> AgradCcdfLogSkewNormal_fd_2075;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2076> AgradCcdfLogSkewNormal_fd_2076;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2077> AgradCcdfLogSkewNormal_fd_2077;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2078> AgradCcdfLogSkewNormal_fd_2078;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2079> AgradCcdfLogSkewNormal_fd_2079;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2080> AgradCcdfLogSkewNormal_fd_2080;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2081> AgradCcdfLogSkewNormal_fd_2081;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2082> AgradCcdfLogSkewNormal_fd_2082;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2083> AgradCcdfLogSkewNormal_fd_2083;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2084> AgradCcdfLogSkewNormal_fd_2084;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2085> AgradCcdfLogSkewNormal_fd_2085;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2086> AgradCcdfLogSkewNormal_fd_2086;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2087> AgradCcdfLogSkewNormal_fd_2087;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2088> AgradCcdfLogSkewNormal_fd_2088;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2089> AgradCcdfLogSkewNormal_fd_2089;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2090> AgradCcdfLogSkewNormal_fd_2090;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2091> AgradCcdfLogSkewNormal_fd_2091;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2092> AgradCcdfLogSkewNormal_fd_2092;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2093> AgradCcdfLogSkewNormal_fd_2093;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2094> AgradCcdfLogSkewNormal_fd_2094;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2095> AgradCcdfLogSkewNormal_fd_2095;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2096> AgradCcdfLogSkewNormal_fd_2096;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2097> AgradCcdfLogSkewNormal_fd_2097;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2098> AgradCcdfLogSkewNormal_fd_2098;
typedef boost::mpl::vector<AgradCcdfLogSkewNormal, type_fd_2099> AgradCcdfLogSkewNormal_fd_2099;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2000, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2000);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2001, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2001);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2002, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2002);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2003, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2003);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2004, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2004);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2005, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2005);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2006, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2006);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2007, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2007);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2008, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2008);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2009, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2009);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2010, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2010);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2011, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2011);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2012, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2012);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2013, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2013);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2014, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2014);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2015, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2015);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2016, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2016);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2017, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2017);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2018, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2018);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2019, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2019);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2020, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2020);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2021, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2021);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2022, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2022);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2023, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2023);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2024, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2024);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2025, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2025);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2026, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2026);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2027, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2027);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2028, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2028);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2029, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2029);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2030, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2030);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2031, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2031);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2032, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2032);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2033, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2033);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2034, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2034);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2035, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2035);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2036, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2036);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2037, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2037);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2038, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2038);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2039, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2039);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2040, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2040);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2041, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2041);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2042, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2042);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2043, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2043);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2044, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2044);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2045, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2045);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2046, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2046);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2047, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2047);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2048, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2048);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2049, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2049);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2050, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2050);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2051, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2051);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2052, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2052);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2053, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2053);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2054, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2054);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2055, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2055);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2056, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2056);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2057, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2057);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2058, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2058);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2059, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2059);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2060, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2060);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2061, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2061);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2062, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2062);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2063, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2063);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2064, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2064);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2065, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2065);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2066, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2066);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2067, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2067);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2068, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2068);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2069, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2069);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2070, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2070);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2071, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2071);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2072, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2072);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2073, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2073);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2074, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2074);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2075, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2075);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2076, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2076);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2077, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2077);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2078, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2078);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2079, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2079);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2080, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2080);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2081, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2081);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2082, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2082);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2083, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2083);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2084, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2084);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2085, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2085);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2086, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2086);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2087, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2087);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2088, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2088);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2089, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2089);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2090, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2090);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2091, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2091);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2092, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2092);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2093, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2093);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2094, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2094);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2095, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2095);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2096, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2096);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2097, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2097);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2098, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2098);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogSkewNormal_fd_2099, AgradCcdfLogTestFixture, AgradCcdfLogSkewNormal_fd_2099);

