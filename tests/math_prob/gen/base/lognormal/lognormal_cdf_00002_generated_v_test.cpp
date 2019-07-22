#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <lognormal/lognormal_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLognormal, type_v_400> AgradCdfLognormal_v_400;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_401> AgradCdfLognormal_v_401;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_402> AgradCdfLognormal_v_402;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_403> AgradCdfLognormal_v_403;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_404> AgradCdfLognormal_v_404;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_405> AgradCdfLognormal_v_405;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_406> AgradCdfLognormal_v_406;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_407> AgradCdfLognormal_v_407;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_408> AgradCdfLognormal_v_408;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_409> AgradCdfLognormal_v_409;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_410> AgradCdfLognormal_v_410;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_411> AgradCdfLognormal_v_411;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_412> AgradCdfLognormal_v_412;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_413> AgradCdfLognormal_v_413;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_414> AgradCdfLognormal_v_414;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_415> AgradCdfLognormal_v_415;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_416> AgradCdfLognormal_v_416;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_417> AgradCdfLognormal_v_417;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_418> AgradCdfLognormal_v_418;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_419> AgradCdfLognormal_v_419;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_420> AgradCdfLognormal_v_420;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_421> AgradCdfLognormal_v_421;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_422> AgradCdfLognormal_v_422;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_423> AgradCdfLognormal_v_423;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_424> AgradCdfLognormal_v_424;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_425> AgradCdfLognormal_v_425;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_426> AgradCdfLognormal_v_426;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_427> AgradCdfLognormal_v_427;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_428> AgradCdfLognormal_v_428;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_429> AgradCdfLognormal_v_429;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_430> AgradCdfLognormal_v_430;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_431> AgradCdfLognormal_v_431;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_432> AgradCdfLognormal_v_432;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_433> AgradCdfLognormal_v_433;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_434> AgradCdfLognormal_v_434;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_435> AgradCdfLognormal_v_435;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_436> AgradCdfLognormal_v_436;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_437> AgradCdfLognormal_v_437;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_438> AgradCdfLognormal_v_438;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_439> AgradCdfLognormal_v_439;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_440> AgradCdfLognormal_v_440;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_441> AgradCdfLognormal_v_441;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_442> AgradCdfLognormal_v_442;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_443> AgradCdfLognormal_v_443;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_444> AgradCdfLognormal_v_444;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_445> AgradCdfLognormal_v_445;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_446> AgradCdfLognormal_v_446;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_447> AgradCdfLognormal_v_447;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_448> AgradCdfLognormal_v_448;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_449> AgradCdfLognormal_v_449;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_450> AgradCdfLognormal_v_450;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_451> AgradCdfLognormal_v_451;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_452> AgradCdfLognormal_v_452;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_453> AgradCdfLognormal_v_453;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_454> AgradCdfLognormal_v_454;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_455> AgradCdfLognormal_v_455;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_456> AgradCdfLognormal_v_456;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_457> AgradCdfLognormal_v_457;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_458> AgradCdfLognormal_v_458;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_459> AgradCdfLognormal_v_459;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_460> AgradCdfLognormal_v_460;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_461> AgradCdfLognormal_v_461;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_462> AgradCdfLognormal_v_462;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_463> AgradCdfLognormal_v_463;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_464> AgradCdfLognormal_v_464;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_465> AgradCdfLognormal_v_465;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_466> AgradCdfLognormal_v_466;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_467> AgradCdfLognormal_v_467;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_468> AgradCdfLognormal_v_468;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_469> AgradCdfLognormal_v_469;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_470> AgradCdfLognormal_v_470;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_471> AgradCdfLognormal_v_471;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_472> AgradCdfLognormal_v_472;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_473> AgradCdfLognormal_v_473;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_474> AgradCdfLognormal_v_474;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_475> AgradCdfLognormal_v_475;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_476> AgradCdfLognormal_v_476;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_477> AgradCdfLognormal_v_477;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_478> AgradCdfLognormal_v_478;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_479> AgradCdfLognormal_v_479;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_480> AgradCdfLognormal_v_480;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_481> AgradCdfLognormal_v_481;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_482> AgradCdfLognormal_v_482;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_483> AgradCdfLognormal_v_483;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_484> AgradCdfLognormal_v_484;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_485> AgradCdfLognormal_v_485;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_486> AgradCdfLognormal_v_486;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_487> AgradCdfLognormal_v_487;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_488> AgradCdfLognormal_v_488;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_489> AgradCdfLognormal_v_489;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_490> AgradCdfLognormal_v_490;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_491> AgradCdfLognormal_v_491;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_492> AgradCdfLognormal_v_492;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_493> AgradCdfLognormal_v_493;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_494> AgradCdfLognormal_v_494;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_495> AgradCdfLognormal_v_495;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_496> AgradCdfLognormal_v_496;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_497> AgradCdfLognormal_v_497;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_498> AgradCdfLognormal_v_498;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_499> AgradCdfLognormal_v_499;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_500> AgradCdfLognormal_v_500;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_501> AgradCdfLognormal_v_501;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_502> AgradCdfLognormal_v_502;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_503> AgradCdfLognormal_v_503;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_504> AgradCdfLognormal_v_504;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_505> AgradCdfLognormal_v_505;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_506> AgradCdfLognormal_v_506;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_507> AgradCdfLognormal_v_507;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_508> AgradCdfLognormal_v_508;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_509> AgradCdfLognormal_v_509;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_510> AgradCdfLognormal_v_510;
typedef boost::mpl::vector<AgradCdfLognormal, type_v_511> AgradCdfLognormal_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_400, AgradCdfTestFixture, AgradCdfLognormal_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_401, AgradCdfTestFixture, AgradCdfLognormal_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_402, AgradCdfTestFixture, AgradCdfLognormal_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_403, AgradCdfTestFixture, AgradCdfLognormal_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_404, AgradCdfTestFixture, AgradCdfLognormal_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_405, AgradCdfTestFixture, AgradCdfLognormal_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_406, AgradCdfTestFixture, AgradCdfLognormal_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_407, AgradCdfTestFixture, AgradCdfLognormal_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_408, AgradCdfTestFixture, AgradCdfLognormal_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_409, AgradCdfTestFixture, AgradCdfLognormal_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_410, AgradCdfTestFixture, AgradCdfLognormal_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_411, AgradCdfTestFixture, AgradCdfLognormal_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_412, AgradCdfTestFixture, AgradCdfLognormal_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_413, AgradCdfTestFixture, AgradCdfLognormal_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_414, AgradCdfTestFixture, AgradCdfLognormal_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_415, AgradCdfTestFixture, AgradCdfLognormal_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_416, AgradCdfTestFixture, AgradCdfLognormal_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_417, AgradCdfTestFixture, AgradCdfLognormal_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_418, AgradCdfTestFixture, AgradCdfLognormal_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_419, AgradCdfTestFixture, AgradCdfLognormal_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_420, AgradCdfTestFixture, AgradCdfLognormal_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_421, AgradCdfTestFixture, AgradCdfLognormal_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_422, AgradCdfTestFixture, AgradCdfLognormal_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_423, AgradCdfTestFixture, AgradCdfLognormal_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_424, AgradCdfTestFixture, AgradCdfLognormal_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_425, AgradCdfTestFixture, AgradCdfLognormal_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_426, AgradCdfTestFixture, AgradCdfLognormal_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_427, AgradCdfTestFixture, AgradCdfLognormal_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_428, AgradCdfTestFixture, AgradCdfLognormal_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_429, AgradCdfTestFixture, AgradCdfLognormal_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_430, AgradCdfTestFixture, AgradCdfLognormal_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_431, AgradCdfTestFixture, AgradCdfLognormal_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_432, AgradCdfTestFixture, AgradCdfLognormal_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_433, AgradCdfTestFixture, AgradCdfLognormal_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_434, AgradCdfTestFixture, AgradCdfLognormal_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_435, AgradCdfTestFixture, AgradCdfLognormal_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_436, AgradCdfTestFixture, AgradCdfLognormal_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_437, AgradCdfTestFixture, AgradCdfLognormal_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_438, AgradCdfTestFixture, AgradCdfLognormal_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_439, AgradCdfTestFixture, AgradCdfLognormal_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_440, AgradCdfTestFixture, AgradCdfLognormal_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_441, AgradCdfTestFixture, AgradCdfLognormal_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_442, AgradCdfTestFixture, AgradCdfLognormal_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_443, AgradCdfTestFixture, AgradCdfLognormal_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_444, AgradCdfTestFixture, AgradCdfLognormal_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_445, AgradCdfTestFixture, AgradCdfLognormal_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_446, AgradCdfTestFixture, AgradCdfLognormal_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_447, AgradCdfTestFixture, AgradCdfLognormal_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_448, AgradCdfTestFixture, AgradCdfLognormal_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_449, AgradCdfTestFixture, AgradCdfLognormal_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_450, AgradCdfTestFixture, AgradCdfLognormal_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_451, AgradCdfTestFixture, AgradCdfLognormal_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_452, AgradCdfTestFixture, AgradCdfLognormal_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_453, AgradCdfTestFixture, AgradCdfLognormal_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_454, AgradCdfTestFixture, AgradCdfLognormal_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_455, AgradCdfTestFixture, AgradCdfLognormal_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_456, AgradCdfTestFixture, AgradCdfLognormal_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_457, AgradCdfTestFixture, AgradCdfLognormal_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_458, AgradCdfTestFixture, AgradCdfLognormal_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_459, AgradCdfTestFixture, AgradCdfLognormal_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_460, AgradCdfTestFixture, AgradCdfLognormal_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_461, AgradCdfTestFixture, AgradCdfLognormal_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_462, AgradCdfTestFixture, AgradCdfLognormal_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_463, AgradCdfTestFixture, AgradCdfLognormal_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_464, AgradCdfTestFixture, AgradCdfLognormal_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_465, AgradCdfTestFixture, AgradCdfLognormal_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_466, AgradCdfTestFixture, AgradCdfLognormal_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_467, AgradCdfTestFixture, AgradCdfLognormal_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_468, AgradCdfTestFixture, AgradCdfLognormal_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_469, AgradCdfTestFixture, AgradCdfLognormal_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_470, AgradCdfTestFixture, AgradCdfLognormal_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_471, AgradCdfTestFixture, AgradCdfLognormal_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_472, AgradCdfTestFixture, AgradCdfLognormal_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_473, AgradCdfTestFixture, AgradCdfLognormal_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_474, AgradCdfTestFixture, AgradCdfLognormal_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_475, AgradCdfTestFixture, AgradCdfLognormal_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_476, AgradCdfTestFixture, AgradCdfLognormal_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_477, AgradCdfTestFixture, AgradCdfLognormal_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_478, AgradCdfTestFixture, AgradCdfLognormal_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_479, AgradCdfTestFixture, AgradCdfLognormal_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_480, AgradCdfTestFixture, AgradCdfLognormal_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_481, AgradCdfTestFixture, AgradCdfLognormal_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_482, AgradCdfTestFixture, AgradCdfLognormal_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_483, AgradCdfTestFixture, AgradCdfLognormal_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_484, AgradCdfTestFixture, AgradCdfLognormal_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_485, AgradCdfTestFixture, AgradCdfLognormal_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_486, AgradCdfTestFixture, AgradCdfLognormal_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_487, AgradCdfTestFixture, AgradCdfLognormal_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_488, AgradCdfTestFixture, AgradCdfLognormal_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_489, AgradCdfTestFixture, AgradCdfLognormal_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_490, AgradCdfTestFixture, AgradCdfLognormal_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_491, AgradCdfTestFixture, AgradCdfLognormal_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_492, AgradCdfTestFixture, AgradCdfLognormal_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_493, AgradCdfTestFixture, AgradCdfLognormal_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_494, AgradCdfTestFixture, AgradCdfLognormal_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_495, AgradCdfTestFixture, AgradCdfLognormal_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_496, AgradCdfTestFixture, AgradCdfLognormal_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_497, AgradCdfTestFixture, AgradCdfLognormal_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_498, AgradCdfTestFixture, AgradCdfLognormal_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_499, AgradCdfTestFixture, AgradCdfLognormal_v_499);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_500, AgradCdfTestFixture, AgradCdfLognormal_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_501, AgradCdfTestFixture, AgradCdfLognormal_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_502, AgradCdfTestFixture, AgradCdfLognormal_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_503, AgradCdfTestFixture, AgradCdfLognormal_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_504, AgradCdfTestFixture, AgradCdfLognormal_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_505, AgradCdfTestFixture, AgradCdfLognormal_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_506, AgradCdfTestFixture, AgradCdfLognormal_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_507, AgradCdfTestFixture, AgradCdfLognormal_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_508, AgradCdfTestFixture, AgradCdfLognormal_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_509, AgradCdfTestFixture, AgradCdfLognormal_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_510, AgradCdfTestFixture, AgradCdfLognormal_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLognormal_v_511, AgradCdfTestFixture, AgradCdfLognormal_v_511);

