#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_400;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_401;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_402;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_403;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_404;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_405;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_406;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_407;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_408;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_409;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_410;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_411;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_412;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_413;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_414;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_415;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, double, empty, empty, empty> type_v_416;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, std::vector<double>, empty, empty, empty> type_v_417;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_418;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_419;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, var, empty, empty, empty> type_v_420;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, std::vector<var>, empty, empty, empty> type_v_421;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_422;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_423;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, double, empty, empty, empty> type_v_424;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, std::vector<double>, empty, empty, empty> type_v_425;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_426;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_427;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, var, empty, empty, empty> type_v_428;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, std::vector<var>, empty, empty, empty> type_v_429;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_430;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_431;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_432;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_433;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_434;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_435;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_436;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_437;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_438;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_439;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_440;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_441;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_442;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_443;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_444;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_445;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_446;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_447;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_v_448;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_v_449;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_450;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_451;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, empty, empty, empty> type_v_452;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, empty, empty, empty> type_v_453;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_454;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_455;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_v_456;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_v_457;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_458;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_459;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, empty, empty, empty> type_v_460;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, empty, empty, empty> type_v_461;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_462;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_463;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_464;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_465;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_466;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_467;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_468;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_469;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_470;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_471;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_472;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_473;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_474;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_475;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_476;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_477;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_478;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_479;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, empty, empty, empty> type_v_480;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty, empty> type_v_481;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_482;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_483;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, empty, empty, empty> type_v_484;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty, empty> type_v_485;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_486;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_487;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty, empty> type_v_488;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty, empty> type_v_489;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_490;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_491;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty, empty> type_v_492;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty, empty> type_v_493;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_494;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_495;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_496;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_497;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_498;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_499;

typedef boost::mpl::vector<AgradCdfInvGamma, type_v_400> AgradCdfInvGamma_v_400;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_401> AgradCdfInvGamma_v_401;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_402> AgradCdfInvGamma_v_402;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_403> AgradCdfInvGamma_v_403;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_404> AgradCdfInvGamma_v_404;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_405> AgradCdfInvGamma_v_405;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_406> AgradCdfInvGamma_v_406;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_407> AgradCdfInvGamma_v_407;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_408> AgradCdfInvGamma_v_408;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_409> AgradCdfInvGamma_v_409;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_410> AgradCdfInvGamma_v_410;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_411> AgradCdfInvGamma_v_411;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_412> AgradCdfInvGamma_v_412;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_413> AgradCdfInvGamma_v_413;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_414> AgradCdfInvGamma_v_414;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_415> AgradCdfInvGamma_v_415;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_416> AgradCdfInvGamma_v_416;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_417> AgradCdfInvGamma_v_417;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_418> AgradCdfInvGamma_v_418;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_419> AgradCdfInvGamma_v_419;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_420> AgradCdfInvGamma_v_420;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_421> AgradCdfInvGamma_v_421;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_422> AgradCdfInvGamma_v_422;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_423> AgradCdfInvGamma_v_423;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_424> AgradCdfInvGamma_v_424;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_425> AgradCdfInvGamma_v_425;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_426> AgradCdfInvGamma_v_426;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_427> AgradCdfInvGamma_v_427;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_428> AgradCdfInvGamma_v_428;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_429> AgradCdfInvGamma_v_429;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_430> AgradCdfInvGamma_v_430;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_431> AgradCdfInvGamma_v_431;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_432> AgradCdfInvGamma_v_432;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_433> AgradCdfInvGamma_v_433;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_434> AgradCdfInvGamma_v_434;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_435> AgradCdfInvGamma_v_435;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_436> AgradCdfInvGamma_v_436;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_437> AgradCdfInvGamma_v_437;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_438> AgradCdfInvGamma_v_438;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_439> AgradCdfInvGamma_v_439;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_440> AgradCdfInvGamma_v_440;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_441> AgradCdfInvGamma_v_441;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_442> AgradCdfInvGamma_v_442;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_443> AgradCdfInvGamma_v_443;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_444> AgradCdfInvGamma_v_444;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_445> AgradCdfInvGamma_v_445;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_446> AgradCdfInvGamma_v_446;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_447> AgradCdfInvGamma_v_447;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_448> AgradCdfInvGamma_v_448;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_449> AgradCdfInvGamma_v_449;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_450> AgradCdfInvGamma_v_450;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_451> AgradCdfInvGamma_v_451;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_452> AgradCdfInvGamma_v_452;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_453> AgradCdfInvGamma_v_453;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_454> AgradCdfInvGamma_v_454;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_455> AgradCdfInvGamma_v_455;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_456> AgradCdfInvGamma_v_456;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_457> AgradCdfInvGamma_v_457;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_458> AgradCdfInvGamma_v_458;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_459> AgradCdfInvGamma_v_459;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_460> AgradCdfInvGamma_v_460;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_461> AgradCdfInvGamma_v_461;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_462> AgradCdfInvGamma_v_462;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_463> AgradCdfInvGamma_v_463;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_464> AgradCdfInvGamma_v_464;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_465> AgradCdfInvGamma_v_465;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_466> AgradCdfInvGamma_v_466;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_467> AgradCdfInvGamma_v_467;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_468> AgradCdfInvGamma_v_468;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_469> AgradCdfInvGamma_v_469;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_470> AgradCdfInvGamma_v_470;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_471> AgradCdfInvGamma_v_471;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_472> AgradCdfInvGamma_v_472;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_473> AgradCdfInvGamma_v_473;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_474> AgradCdfInvGamma_v_474;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_475> AgradCdfInvGamma_v_475;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_476> AgradCdfInvGamma_v_476;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_477> AgradCdfInvGamma_v_477;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_478> AgradCdfInvGamma_v_478;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_479> AgradCdfInvGamma_v_479;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_480> AgradCdfInvGamma_v_480;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_481> AgradCdfInvGamma_v_481;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_482> AgradCdfInvGamma_v_482;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_483> AgradCdfInvGamma_v_483;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_484> AgradCdfInvGamma_v_484;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_485> AgradCdfInvGamma_v_485;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_486> AgradCdfInvGamma_v_486;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_487> AgradCdfInvGamma_v_487;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_488> AgradCdfInvGamma_v_488;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_489> AgradCdfInvGamma_v_489;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_490> AgradCdfInvGamma_v_490;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_491> AgradCdfInvGamma_v_491;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_492> AgradCdfInvGamma_v_492;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_493> AgradCdfInvGamma_v_493;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_494> AgradCdfInvGamma_v_494;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_495> AgradCdfInvGamma_v_495;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_496> AgradCdfInvGamma_v_496;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_497> AgradCdfInvGamma_v_497;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_498> AgradCdfInvGamma_v_498;
typedef boost::mpl::vector<AgradCdfInvGamma, type_v_499> AgradCdfInvGamma_v_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_400, AgradCdfTestFixture, AgradCdfInvGamma_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_401, AgradCdfTestFixture, AgradCdfInvGamma_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_402, AgradCdfTestFixture, AgradCdfInvGamma_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_403, AgradCdfTestFixture, AgradCdfInvGamma_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_404, AgradCdfTestFixture, AgradCdfInvGamma_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_405, AgradCdfTestFixture, AgradCdfInvGamma_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_406, AgradCdfTestFixture, AgradCdfInvGamma_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_407, AgradCdfTestFixture, AgradCdfInvGamma_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_408, AgradCdfTestFixture, AgradCdfInvGamma_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_409, AgradCdfTestFixture, AgradCdfInvGamma_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_410, AgradCdfTestFixture, AgradCdfInvGamma_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_411, AgradCdfTestFixture, AgradCdfInvGamma_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_412, AgradCdfTestFixture, AgradCdfInvGamma_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_413, AgradCdfTestFixture, AgradCdfInvGamma_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_414, AgradCdfTestFixture, AgradCdfInvGamma_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_415, AgradCdfTestFixture, AgradCdfInvGamma_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_416, AgradCdfTestFixture, AgradCdfInvGamma_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_417, AgradCdfTestFixture, AgradCdfInvGamma_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_418, AgradCdfTestFixture, AgradCdfInvGamma_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_419, AgradCdfTestFixture, AgradCdfInvGamma_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_420, AgradCdfTestFixture, AgradCdfInvGamma_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_421, AgradCdfTestFixture, AgradCdfInvGamma_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_422, AgradCdfTestFixture, AgradCdfInvGamma_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_423, AgradCdfTestFixture, AgradCdfInvGamma_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_424, AgradCdfTestFixture, AgradCdfInvGamma_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_425, AgradCdfTestFixture, AgradCdfInvGamma_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_426, AgradCdfTestFixture, AgradCdfInvGamma_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_427, AgradCdfTestFixture, AgradCdfInvGamma_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_428, AgradCdfTestFixture, AgradCdfInvGamma_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_429, AgradCdfTestFixture, AgradCdfInvGamma_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_430, AgradCdfTestFixture, AgradCdfInvGamma_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_431, AgradCdfTestFixture, AgradCdfInvGamma_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_432, AgradCdfTestFixture, AgradCdfInvGamma_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_433, AgradCdfTestFixture, AgradCdfInvGamma_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_434, AgradCdfTestFixture, AgradCdfInvGamma_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_435, AgradCdfTestFixture, AgradCdfInvGamma_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_436, AgradCdfTestFixture, AgradCdfInvGamma_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_437, AgradCdfTestFixture, AgradCdfInvGamma_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_438, AgradCdfTestFixture, AgradCdfInvGamma_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_439, AgradCdfTestFixture, AgradCdfInvGamma_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_440, AgradCdfTestFixture, AgradCdfInvGamma_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_441, AgradCdfTestFixture, AgradCdfInvGamma_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_442, AgradCdfTestFixture, AgradCdfInvGamma_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_443, AgradCdfTestFixture, AgradCdfInvGamma_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_444, AgradCdfTestFixture, AgradCdfInvGamma_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_445, AgradCdfTestFixture, AgradCdfInvGamma_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_446, AgradCdfTestFixture, AgradCdfInvGamma_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_447, AgradCdfTestFixture, AgradCdfInvGamma_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_448, AgradCdfTestFixture, AgradCdfInvGamma_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_449, AgradCdfTestFixture, AgradCdfInvGamma_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_450, AgradCdfTestFixture, AgradCdfInvGamma_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_451, AgradCdfTestFixture, AgradCdfInvGamma_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_452, AgradCdfTestFixture, AgradCdfInvGamma_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_453, AgradCdfTestFixture, AgradCdfInvGamma_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_454, AgradCdfTestFixture, AgradCdfInvGamma_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_455, AgradCdfTestFixture, AgradCdfInvGamma_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_456, AgradCdfTestFixture, AgradCdfInvGamma_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_457, AgradCdfTestFixture, AgradCdfInvGamma_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_458, AgradCdfTestFixture, AgradCdfInvGamma_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_459, AgradCdfTestFixture, AgradCdfInvGamma_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_460, AgradCdfTestFixture, AgradCdfInvGamma_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_461, AgradCdfTestFixture, AgradCdfInvGamma_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_462, AgradCdfTestFixture, AgradCdfInvGamma_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_463, AgradCdfTestFixture, AgradCdfInvGamma_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_464, AgradCdfTestFixture, AgradCdfInvGamma_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_465, AgradCdfTestFixture, AgradCdfInvGamma_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_466, AgradCdfTestFixture, AgradCdfInvGamma_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_467, AgradCdfTestFixture, AgradCdfInvGamma_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_468, AgradCdfTestFixture, AgradCdfInvGamma_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_469, AgradCdfTestFixture, AgradCdfInvGamma_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_470, AgradCdfTestFixture, AgradCdfInvGamma_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_471, AgradCdfTestFixture, AgradCdfInvGamma_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_472, AgradCdfTestFixture, AgradCdfInvGamma_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_473, AgradCdfTestFixture, AgradCdfInvGamma_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_474, AgradCdfTestFixture, AgradCdfInvGamma_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_475, AgradCdfTestFixture, AgradCdfInvGamma_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_476, AgradCdfTestFixture, AgradCdfInvGamma_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_477, AgradCdfTestFixture, AgradCdfInvGamma_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_478, AgradCdfTestFixture, AgradCdfInvGamma_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_479, AgradCdfTestFixture, AgradCdfInvGamma_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_480, AgradCdfTestFixture, AgradCdfInvGamma_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_481, AgradCdfTestFixture, AgradCdfInvGamma_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_482, AgradCdfTestFixture, AgradCdfInvGamma_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_483, AgradCdfTestFixture, AgradCdfInvGamma_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_484, AgradCdfTestFixture, AgradCdfInvGamma_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_485, AgradCdfTestFixture, AgradCdfInvGamma_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_486, AgradCdfTestFixture, AgradCdfInvGamma_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_487, AgradCdfTestFixture, AgradCdfInvGamma_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_488, AgradCdfTestFixture, AgradCdfInvGamma_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_489, AgradCdfTestFixture, AgradCdfInvGamma_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_490, AgradCdfTestFixture, AgradCdfInvGamma_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_491, AgradCdfTestFixture, AgradCdfInvGamma_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_492, AgradCdfTestFixture, AgradCdfInvGamma_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_493, AgradCdfTestFixture, AgradCdfInvGamma_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_494, AgradCdfTestFixture, AgradCdfInvGamma_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_495, AgradCdfTestFixture, AgradCdfInvGamma_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_496, AgradCdfTestFixture, AgradCdfInvGamma_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_497, AgradCdfTestFixture, AgradCdfInvGamma_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_498, AgradCdfTestFixture, AgradCdfInvGamma_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_v_499, AgradCdfTestFixture, AgradCdfInvGamma_v_499);

