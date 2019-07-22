#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, double, empty, empty> type_fd_400;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, std::vector<double>, empty, empty> type_fd_401;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_402;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_403;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, fvar<double>, empty, empty> type_fd_404;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_405;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_406;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_407;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, double, empty, empty> type_fd_408;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_409;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_410;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_411;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_412;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_413;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_414;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_415;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_416;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_417;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_418;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_419;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_420;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_421;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_422;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_423;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_424;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_425;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_426;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_427;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_428;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_429;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_430;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_431;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, fvar<double>, empty, empty> type_fd_432;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, std::vector<fvar<double>>, empty, empty> type_fd_433;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_434;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_435;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, fvar<double>, empty, empty> type_fd_436;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_437;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_438;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_439;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_440;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_441;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_442;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_443;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_444;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_445;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_446;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_447;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, double, empty, empty> type_fd_448;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, std::vector<double>, empty, empty> type_fd_449;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_450;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_451;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, fvar<double>, empty, empty> type_fd_452;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_453;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_454;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_455;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, double, empty, empty> type_fd_456;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_457;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_458;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_459;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_460;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_461;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_462;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_463;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_464;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_465;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_466;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_467;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_468;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_469;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_470;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_471;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_472;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_473;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_474;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_475;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_476;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_477;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_478;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_479;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, fvar<double>, empty, empty> type_fd_480;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, std::vector<fvar<double>>, empty, empty> type_fd_481;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_482;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_483;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, fvar<double>, empty, empty> type_fd_484;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_485;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_486;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_487;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_488;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_489;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_490;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_491;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_492;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_493;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_494;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_495;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, double, empty, empty> type_fd_496;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, std::vector<double>, empty, empty> type_fd_497;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_498;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_499;

typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_400> AgradCdfLogBetaBinomial_fd_400;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_401> AgradCdfLogBetaBinomial_fd_401;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_402> AgradCdfLogBetaBinomial_fd_402;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_403> AgradCdfLogBetaBinomial_fd_403;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_404> AgradCdfLogBetaBinomial_fd_404;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_405> AgradCdfLogBetaBinomial_fd_405;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_406> AgradCdfLogBetaBinomial_fd_406;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_407> AgradCdfLogBetaBinomial_fd_407;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_408> AgradCdfLogBetaBinomial_fd_408;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_409> AgradCdfLogBetaBinomial_fd_409;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_410> AgradCdfLogBetaBinomial_fd_410;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_411> AgradCdfLogBetaBinomial_fd_411;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_412> AgradCdfLogBetaBinomial_fd_412;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_413> AgradCdfLogBetaBinomial_fd_413;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_414> AgradCdfLogBetaBinomial_fd_414;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_415> AgradCdfLogBetaBinomial_fd_415;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_416> AgradCdfLogBetaBinomial_fd_416;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_417> AgradCdfLogBetaBinomial_fd_417;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_418> AgradCdfLogBetaBinomial_fd_418;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_419> AgradCdfLogBetaBinomial_fd_419;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_420> AgradCdfLogBetaBinomial_fd_420;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_421> AgradCdfLogBetaBinomial_fd_421;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_422> AgradCdfLogBetaBinomial_fd_422;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_423> AgradCdfLogBetaBinomial_fd_423;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_424> AgradCdfLogBetaBinomial_fd_424;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_425> AgradCdfLogBetaBinomial_fd_425;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_426> AgradCdfLogBetaBinomial_fd_426;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_427> AgradCdfLogBetaBinomial_fd_427;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_428> AgradCdfLogBetaBinomial_fd_428;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_429> AgradCdfLogBetaBinomial_fd_429;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_430> AgradCdfLogBetaBinomial_fd_430;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_431> AgradCdfLogBetaBinomial_fd_431;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_432> AgradCdfLogBetaBinomial_fd_432;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_433> AgradCdfLogBetaBinomial_fd_433;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_434> AgradCdfLogBetaBinomial_fd_434;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_435> AgradCdfLogBetaBinomial_fd_435;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_436> AgradCdfLogBetaBinomial_fd_436;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_437> AgradCdfLogBetaBinomial_fd_437;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_438> AgradCdfLogBetaBinomial_fd_438;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_439> AgradCdfLogBetaBinomial_fd_439;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_440> AgradCdfLogBetaBinomial_fd_440;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_441> AgradCdfLogBetaBinomial_fd_441;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_442> AgradCdfLogBetaBinomial_fd_442;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_443> AgradCdfLogBetaBinomial_fd_443;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_444> AgradCdfLogBetaBinomial_fd_444;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_445> AgradCdfLogBetaBinomial_fd_445;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_446> AgradCdfLogBetaBinomial_fd_446;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_447> AgradCdfLogBetaBinomial_fd_447;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_448> AgradCdfLogBetaBinomial_fd_448;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_449> AgradCdfLogBetaBinomial_fd_449;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_450> AgradCdfLogBetaBinomial_fd_450;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_451> AgradCdfLogBetaBinomial_fd_451;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_452> AgradCdfLogBetaBinomial_fd_452;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_453> AgradCdfLogBetaBinomial_fd_453;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_454> AgradCdfLogBetaBinomial_fd_454;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_455> AgradCdfLogBetaBinomial_fd_455;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_456> AgradCdfLogBetaBinomial_fd_456;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_457> AgradCdfLogBetaBinomial_fd_457;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_458> AgradCdfLogBetaBinomial_fd_458;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_459> AgradCdfLogBetaBinomial_fd_459;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_460> AgradCdfLogBetaBinomial_fd_460;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_461> AgradCdfLogBetaBinomial_fd_461;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_462> AgradCdfLogBetaBinomial_fd_462;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_463> AgradCdfLogBetaBinomial_fd_463;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_464> AgradCdfLogBetaBinomial_fd_464;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_465> AgradCdfLogBetaBinomial_fd_465;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_466> AgradCdfLogBetaBinomial_fd_466;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_467> AgradCdfLogBetaBinomial_fd_467;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_468> AgradCdfLogBetaBinomial_fd_468;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_469> AgradCdfLogBetaBinomial_fd_469;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_470> AgradCdfLogBetaBinomial_fd_470;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_471> AgradCdfLogBetaBinomial_fd_471;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_472> AgradCdfLogBetaBinomial_fd_472;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_473> AgradCdfLogBetaBinomial_fd_473;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_474> AgradCdfLogBetaBinomial_fd_474;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_475> AgradCdfLogBetaBinomial_fd_475;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_476> AgradCdfLogBetaBinomial_fd_476;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_477> AgradCdfLogBetaBinomial_fd_477;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_478> AgradCdfLogBetaBinomial_fd_478;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_479> AgradCdfLogBetaBinomial_fd_479;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_480> AgradCdfLogBetaBinomial_fd_480;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_481> AgradCdfLogBetaBinomial_fd_481;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_482> AgradCdfLogBetaBinomial_fd_482;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_483> AgradCdfLogBetaBinomial_fd_483;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_484> AgradCdfLogBetaBinomial_fd_484;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_485> AgradCdfLogBetaBinomial_fd_485;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_486> AgradCdfLogBetaBinomial_fd_486;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_487> AgradCdfLogBetaBinomial_fd_487;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_488> AgradCdfLogBetaBinomial_fd_488;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_489> AgradCdfLogBetaBinomial_fd_489;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_490> AgradCdfLogBetaBinomial_fd_490;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_491> AgradCdfLogBetaBinomial_fd_491;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_492> AgradCdfLogBetaBinomial_fd_492;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_493> AgradCdfLogBetaBinomial_fd_493;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_494> AgradCdfLogBetaBinomial_fd_494;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_495> AgradCdfLogBetaBinomial_fd_495;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_496> AgradCdfLogBetaBinomial_fd_496;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_497> AgradCdfLogBetaBinomial_fd_497;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_498> AgradCdfLogBetaBinomial_fd_498;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_499> AgradCdfLogBetaBinomial_fd_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_400, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_401, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_402, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_403, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_404, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_405, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_406, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_407, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_408, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_409, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_410, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_411, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_412, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_413, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_414, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_415, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_416, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_417, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_418, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_419, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_420, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_421, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_422, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_423, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_424, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_425, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_426, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_427, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_428, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_429, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_430, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_431, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_432, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_433, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_434, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_435, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_436, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_437, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_438, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_439, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_440, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_441, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_442, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_443, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_444, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_445, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_446, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_447, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_448, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_449, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_450, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_451, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_452, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_453, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_454, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_455, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_456, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_457, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_458, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_459, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_460, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_461, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_462, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_463, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_464, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_465, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_466, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_467, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_468, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_469, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_470, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_471, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_472, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_473, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_474, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_475, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_476, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_477, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_478, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_479, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_480, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_481, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_482, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_483, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_484, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_485, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_486, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_487, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_488, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_489, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_490, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_491, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_492, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_493, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_494, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_495, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_496, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_497, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_498, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_499, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_499);

