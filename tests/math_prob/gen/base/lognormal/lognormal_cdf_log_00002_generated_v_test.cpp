#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <lognormal/lognormal_cdf_log_test.hpp>

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
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_500;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_501;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_502;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_503;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_504;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_505;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_506;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_507;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_508;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_509;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_510;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_511;

typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_400> AgradCdfLogLognormal_v_400;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_401> AgradCdfLogLognormal_v_401;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_402> AgradCdfLogLognormal_v_402;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_403> AgradCdfLogLognormal_v_403;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_404> AgradCdfLogLognormal_v_404;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_405> AgradCdfLogLognormal_v_405;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_406> AgradCdfLogLognormal_v_406;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_407> AgradCdfLogLognormal_v_407;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_408> AgradCdfLogLognormal_v_408;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_409> AgradCdfLogLognormal_v_409;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_410> AgradCdfLogLognormal_v_410;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_411> AgradCdfLogLognormal_v_411;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_412> AgradCdfLogLognormal_v_412;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_413> AgradCdfLogLognormal_v_413;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_414> AgradCdfLogLognormal_v_414;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_415> AgradCdfLogLognormal_v_415;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_416> AgradCdfLogLognormal_v_416;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_417> AgradCdfLogLognormal_v_417;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_418> AgradCdfLogLognormal_v_418;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_419> AgradCdfLogLognormal_v_419;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_420> AgradCdfLogLognormal_v_420;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_421> AgradCdfLogLognormal_v_421;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_422> AgradCdfLogLognormal_v_422;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_423> AgradCdfLogLognormal_v_423;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_424> AgradCdfLogLognormal_v_424;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_425> AgradCdfLogLognormal_v_425;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_426> AgradCdfLogLognormal_v_426;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_427> AgradCdfLogLognormal_v_427;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_428> AgradCdfLogLognormal_v_428;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_429> AgradCdfLogLognormal_v_429;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_430> AgradCdfLogLognormal_v_430;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_431> AgradCdfLogLognormal_v_431;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_432> AgradCdfLogLognormal_v_432;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_433> AgradCdfLogLognormal_v_433;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_434> AgradCdfLogLognormal_v_434;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_435> AgradCdfLogLognormal_v_435;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_436> AgradCdfLogLognormal_v_436;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_437> AgradCdfLogLognormal_v_437;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_438> AgradCdfLogLognormal_v_438;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_439> AgradCdfLogLognormal_v_439;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_440> AgradCdfLogLognormal_v_440;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_441> AgradCdfLogLognormal_v_441;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_442> AgradCdfLogLognormal_v_442;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_443> AgradCdfLogLognormal_v_443;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_444> AgradCdfLogLognormal_v_444;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_445> AgradCdfLogLognormal_v_445;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_446> AgradCdfLogLognormal_v_446;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_447> AgradCdfLogLognormal_v_447;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_448> AgradCdfLogLognormal_v_448;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_449> AgradCdfLogLognormal_v_449;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_450> AgradCdfLogLognormal_v_450;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_451> AgradCdfLogLognormal_v_451;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_452> AgradCdfLogLognormal_v_452;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_453> AgradCdfLogLognormal_v_453;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_454> AgradCdfLogLognormal_v_454;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_455> AgradCdfLogLognormal_v_455;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_456> AgradCdfLogLognormal_v_456;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_457> AgradCdfLogLognormal_v_457;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_458> AgradCdfLogLognormal_v_458;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_459> AgradCdfLogLognormal_v_459;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_460> AgradCdfLogLognormal_v_460;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_461> AgradCdfLogLognormal_v_461;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_462> AgradCdfLogLognormal_v_462;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_463> AgradCdfLogLognormal_v_463;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_464> AgradCdfLogLognormal_v_464;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_465> AgradCdfLogLognormal_v_465;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_466> AgradCdfLogLognormal_v_466;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_467> AgradCdfLogLognormal_v_467;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_468> AgradCdfLogLognormal_v_468;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_469> AgradCdfLogLognormal_v_469;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_470> AgradCdfLogLognormal_v_470;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_471> AgradCdfLogLognormal_v_471;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_472> AgradCdfLogLognormal_v_472;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_473> AgradCdfLogLognormal_v_473;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_474> AgradCdfLogLognormal_v_474;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_475> AgradCdfLogLognormal_v_475;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_476> AgradCdfLogLognormal_v_476;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_477> AgradCdfLogLognormal_v_477;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_478> AgradCdfLogLognormal_v_478;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_479> AgradCdfLogLognormal_v_479;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_480> AgradCdfLogLognormal_v_480;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_481> AgradCdfLogLognormal_v_481;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_482> AgradCdfLogLognormal_v_482;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_483> AgradCdfLogLognormal_v_483;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_484> AgradCdfLogLognormal_v_484;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_485> AgradCdfLogLognormal_v_485;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_486> AgradCdfLogLognormal_v_486;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_487> AgradCdfLogLognormal_v_487;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_488> AgradCdfLogLognormal_v_488;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_489> AgradCdfLogLognormal_v_489;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_490> AgradCdfLogLognormal_v_490;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_491> AgradCdfLogLognormal_v_491;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_492> AgradCdfLogLognormal_v_492;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_493> AgradCdfLogLognormal_v_493;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_494> AgradCdfLogLognormal_v_494;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_495> AgradCdfLogLognormal_v_495;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_496> AgradCdfLogLognormal_v_496;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_497> AgradCdfLogLognormal_v_497;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_498> AgradCdfLogLognormal_v_498;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_499> AgradCdfLogLognormal_v_499;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_500> AgradCdfLogLognormal_v_500;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_501> AgradCdfLogLognormal_v_501;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_502> AgradCdfLogLognormal_v_502;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_503> AgradCdfLogLognormal_v_503;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_504> AgradCdfLogLognormal_v_504;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_505> AgradCdfLogLognormal_v_505;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_506> AgradCdfLogLognormal_v_506;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_507> AgradCdfLogLognormal_v_507;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_508> AgradCdfLogLognormal_v_508;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_509> AgradCdfLogLognormal_v_509;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_510> AgradCdfLogLognormal_v_510;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_v_511> AgradCdfLogLognormal_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_400, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_401, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_402, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_403, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_404, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_405, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_406, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_407, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_408, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_409, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_410, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_411, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_412, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_413, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_414, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_415, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_416, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_417, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_418, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_419, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_420, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_421, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_422, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_423, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_424, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_425, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_426, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_427, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_428, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_429, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_430, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_431, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_432, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_433, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_434, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_435, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_436, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_437, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_438, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_439, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_440, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_441, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_442, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_443, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_444, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_445, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_446, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_447, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_448, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_449, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_450, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_451, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_452, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_453, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_454, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_455, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_456, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_457, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_458, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_459, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_460, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_461, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_462, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_463, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_464, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_465, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_466, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_467, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_468, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_469, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_470, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_471, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_472, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_473, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_474, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_475, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_476, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_477, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_478, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_479, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_480, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_481, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_482, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_483, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_484, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_485, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_486, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_487, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_488, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_489, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_490, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_491, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_492, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_493, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_494, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_495, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_496, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_497, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_498, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_499, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_499);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_500, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_501, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_502, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_503, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_504, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_505, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_506, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_507, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_508, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_509, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_510, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_v_511, AgradCdfLogTestFixture, AgradCdfLogLognormal_v_511);

