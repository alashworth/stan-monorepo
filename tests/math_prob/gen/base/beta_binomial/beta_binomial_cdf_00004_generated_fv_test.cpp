#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, double, empty, empty> type_fv_400;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, std::vector<double>, empty, empty> type_fv_401;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_402;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_403;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, fvar<var>, empty, empty> type_fv_404;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_405;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_406;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_407;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, double, empty, empty> type_fv_408;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_409;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_410;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_411;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_412;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_413;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_414;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_415;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_416;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_417;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_418;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_419;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_420;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_421;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_422;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_423;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_424;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_425;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_426;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_427;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_428;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_429;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_430;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_431;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, fvar<var>, empty, empty> type_fv_432;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, std::vector<fvar<var>>, empty, empty> type_fv_433;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_434;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_435;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, fvar<var>, empty, empty> type_fv_436;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_437;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_438;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_439;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_440;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_441;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_442;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_443;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_444;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_445;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_446;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_447;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, double, empty, empty> type_fv_448;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, std::vector<double>, empty, empty> type_fv_449;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_450;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_451;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, fvar<var>, empty, empty> type_fv_452;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_453;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_454;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_455;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, double, empty, empty> type_fv_456;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_457;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_458;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_459;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_460;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_461;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_462;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_463;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_464;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_465;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_466;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_467;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_468;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_469;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_470;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_471;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_472;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_473;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_474;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_475;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_476;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_477;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_478;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_479;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, fvar<var>, empty, empty> type_fv_480;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, std::vector<fvar<var>>, empty, empty> type_fv_481;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_482;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_483;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, fvar<var>, empty, empty> type_fv_484;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_485;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_486;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_487;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_488;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_489;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_490;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_491;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_492;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_493;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_494;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_495;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, double, empty, empty> type_fv_496;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, std::vector<double>, empty, empty> type_fv_497;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_498;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_499;

typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_400> AgradCdfBetaBinomial_fv_400;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_401> AgradCdfBetaBinomial_fv_401;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_402> AgradCdfBetaBinomial_fv_402;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_403> AgradCdfBetaBinomial_fv_403;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_404> AgradCdfBetaBinomial_fv_404;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_405> AgradCdfBetaBinomial_fv_405;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_406> AgradCdfBetaBinomial_fv_406;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_407> AgradCdfBetaBinomial_fv_407;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_408> AgradCdfBetaBinomial_fv_408;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_409> AgradCdfBetaBinomial_fv_409;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_410> AgradCdfBetaBinomial_fv_410;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_411> AgradCdfBetaBinomial_fv_411;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_412> AgradCdfBetaBinomial_fv_412;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_413> AgradCdfBetaBinomial_fv_413;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_414> AgradCdfBetaBinomial_fv_414;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_415> AgradCdfBetaBinomial_fv_415;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_416> AgradCdfBetaBinomial_fv_416;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_417> AgradCdfBetaBinomial_fv_417;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_418> AgradCdfBetaBinomial_fv_418;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_419> AgradCdfBetaBinomial_fv_419;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_420> AgradCdfBetaBinomial_fv_420;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_421> AgradCdfBetaBinomial_fv_421;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_422> AgradCdfBetaBinomial_fv_422;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_423> AgradCdfBetaBinomial_fv_423;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_424> AgradCdfBetaBinomial_fv_424;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_425> AgradCdfBetaBinomial_fv_425;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_426> AgradCdfBetaBinomial_fv_426;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_427> AgradCdfBetaBinomial_fv_427;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_428> AgradCdfBetaBinomial_fv_428;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_429> AgradCdfBetaBinomial_fv_429;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_430> AgradCdfBetaBinomial_fv_430;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_431> AgradCdfBetaBinomial_fv_431;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_432> AgradCdfBetaBinomial_fv_432;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_433> AgradCdfBetaBinomial_fv_433;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_434> AgradCdfBetaBinomial_fv_434;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_435> AgradCdfBetaBinomial_fv_435;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_436> AgradCdfBetaBinomial_fv_436;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_437> AgradCdfBetaBinomial_fv_437;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_438> AgradCdfBetaBinomial_fv_438;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_439> AgradCdfBetaBinomial_fv_439;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_440> AgradCdfBetaBinomial_fv_440;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_441> AgradCdfBetaBinomial_fv_441;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_442> AgradCdfBetaBinomial_fv_442;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_443> AgradCdfBetaBinomial_fv_443;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_444> AgradCdfBetaBinomial_fv_444;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_445> AgradCdfBetaBinomial_fv_445;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_446> AgradCdfBetaBinomial_fv_446;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_447> AgradCdfBetaBinomial_fv_447;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_448> AgradCdfBetaBinomial_fv_448;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_449> AgradCdfBetaBinomial_fv_449;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_450> AgradCdfBetaBinomial_fv_450;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_451> AgradCdfBetaBinomial_fv_451;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_452> AgradCdfBetaBinomial_fv_452;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_453> AgradCdfBetaBinomial_fv_453;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_454> AgradCdfBetaBinomial_fv_454;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_455> AgradCdfBetaBinomial_fv_455;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_456> AgradCdfBetaBinomial_fv_456;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_457> AgradCdfBetaBinomial_fv_457;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_458> AgradCdfBetaBinomial_fv_458;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_459> AgradCdfBetaBinomial_fv_459;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_460> AgradCdfBetaBinomial_fv_460;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_461> AgradCdfBetaBinomial_fv_461;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_462> AgradCdfBetaBinomial_fv_462;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_463> AgradCdfBetaBinomial_fv_463;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_464> AgradCdfBetaBinomial_fv_464;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_465> AgradCdfBetaBinomial_fv_465;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_466> AgradCdfBetaBinomial_fv_466;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_467> AgradCdfBetaBinomial_fv_467;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_468> AgradCdfBetaBinomial_fv_468;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_469> AgradCdfBetaBinomial_fv_469;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_470> AgradCdfBetaBinomial_fv_470;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_471> AgradCdfBetaBinomial_fv_471;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_472> AgradCdfBetaBinomial_fv_472;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_473> AgradCdfBetaBinomial_fv_473;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_474> AgradCdfBetaBinomial_fv_474;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_475> AgradCdfBetaBinomial_fv_475;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_476> AgradCdfBetaBinomial_fv_476;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_477> AgradCdfBetaBinomial_fv_477;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_478> AgradCdfBetaBinomial_fv_478;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_479> AgradCdfBetaBinomial_fv_479;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_480> AgradCdfBetaBinomial_fv_480;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_481> AgradCdfBetaBinomial_fv_481;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_482> AgradCdfBetaBinomial_fv_482;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_483> AgradCdfBetaBinomial_fv_483;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_484> AgradCdfBetaBinomial_fv_484;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_485> AgradCdfBetaBinomial_fv_485;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_486> AgradCdfBetaBinomial_fv_486;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_487> AgradCdfBetaBinomial_fv_487;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_488> AgradCdfBetaBinomial_fv_488;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_489> AgradCdfBetaBinomial_fv_489;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_490> AgradCdfBetaBinomial_fv_490;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_491> AgradCdfBetaBinomial_fv_491;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_492> AgradCdfBetaBinomial_fv_492;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_493> AgradCdfBetaBinomial_fv_493;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_494> AgradCdfBetaBinomial_fv_494;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_495> AgradCdfBetaBinomial_fv_495;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_496> AgradCdfBetaBinomial_fv_496;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_497> AgradCdfBetaBinomial_fv_497;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_498> AgradCdfBetaBinomial_fv_498;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fv_499> AgradCdfBetaBinomial_fv_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_400, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_401, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_402, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_403, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_404, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_405, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_406, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_407, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_408, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_409, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_410, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_411, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_412, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_413, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_414, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_415, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_416, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_417, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_418, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_419, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_420, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_421, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_422, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_423, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_424, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_425, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_426, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_427, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_428, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_429, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_430, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_431, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_432, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_433, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_434, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_435, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_436, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_437, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_438, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_439, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_440, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_441, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_442, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_443, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_444, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_445, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_446, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_447, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_448, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_449, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_450, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_451, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_452, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_453, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_454, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_455, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_456, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_457, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_458, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_459, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_460, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_461, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_462, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_463, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_464, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_465, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_466, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_467, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_468, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_469, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_470, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_471, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_472, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_473, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_474, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_475, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_476, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_477, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_478, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_479, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_480, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_481, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_482, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_483, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_484, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_485, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_486, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_487, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_488, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_489, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_490, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_491, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_492, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_493, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_494, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_495, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_496, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_497, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_498, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fv_499, AgradCdfTestFixture, AgradCdfBetaBinomial_fv_499);

