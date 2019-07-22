#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogistic, type_v_400> AgradCdfLogistic_v_400;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_401> AgradCdfLogistic_v_401;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_402> AgradCdfLogistic_v_402;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_403> AgradCdfLogistic_v_403;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_404> AgradCdfLogistic_v_404;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_405> AgradCdfLogistic_v_405;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_406> AgradCdfLogistic_v_406;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_407> AgradCdfLogistic_v_407;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_408> AgradCdfLogistic_v_408;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_409> AgradCdfLogistic_v_409;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_410> AgradCdfLogistic_v_410;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_411> AgradCdfLogistic_v_411;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_412> AgradCdfLogistic_v_412;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_413> AgradCdfLogistic_v_413;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_414> AgradCdfLogistic_v_414;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_415> AgradCdfLogistic_v_415;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_416> AgradCdfLogistic_v_416;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_417> AgradCdfLogistic_v_417;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_418> AgradCdfLogistic_v_418;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_419> AgradCdfLogistic_v_419;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_420> AgradCdfLogistic_v_420;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_421> AgradCdfLogistic_v_421;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_422> AgradCdfLogistic_v_422;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_423> AgradCdfLogistic_v_423;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_424> AgradCdfLogistic_v_424;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_425> AgradCdfLogistic_v_425;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_426> AgradCdfLogistic_v_426;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_427> AgradCdfLogistic_v_427;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_428> AgradCdfLogistic_v_428;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_429> AgradCdfLogistic_v_429;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_430> AgradCdfLogistic_v_430;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_431> AgradCdfLogistic_v_431;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_432> AgradCdfLogistic_v_432;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_433> AgradCdfLogistic_v_433;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_434> AgradCdfLogistic_v_434;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_435> AgradCdfLogistic_v_435;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_436> AgradCdfLogistic_v_436;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_437> AgradCdfLogistic_v_437;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_438> AgradCdfLogistic_v_438;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_439> AgradCdfLogistic_v_439;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_440> AgradCdfLogistic_v_440;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_441> AgradCdfLogistic_v_441;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_442> AgradCdfLogistic_v_442;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_443> AgradCdfLogistic_v_443;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_444> AgradCdfLogistic_v_444;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_445> AgradCdfLogistic_v_445;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_446> AgradCdfLogistic_v_446;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_447> AgradCdfLogistic_v_447;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_448> AgradCdfLogistic_v_448;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_449> AgradCdfLogistic_v_449;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_450> AgradCdfLogistic_v_450;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_451> AgradCdfLogistic_v_451;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_452> AgradCdfLogistic_v_452;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_453> AgradCdfLogistic_v_453;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_454> AgradCdfLogistic_v_454;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_455> AgradCdfLogistic_v_455;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_456> AgradCdfLogistic_v_456;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_457> AgradCdfLogistic_v_457;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_458> AgradCdfLogistic_v_458;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_459> AgradCdfLogistic_v_459;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_460> AgradCdfLogistic_v_460;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_461> AgradCdfLogistic_v_461;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_462> AgradCdfLogistic_v_462;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_463> AgradCdfLogistic_v_463;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_464> AgradCdfLogistic_v_464;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_465> AgradCdfLogistic_v_465;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_466> AgradCdfLogistic_v_466;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_467> AgradCdfLogistic_v_467;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_468> AgradCdfLogistic_v_468;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_469> AgradCdfLogistic_v_469;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_470> AgradCdfLogistic_v_470;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_471> AgradCdfLogistic_v_471;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_472> AgradCdfLogistic_v_472;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_473> AgradCdfLogistic_v_473;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_474> AgradCdfLogistic_v_474;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_475> AgradCdfLogistic_v_475;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_476> AgradCdfLogistic_v_476;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_477> AgradCdfLogistic_v_477;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_478> AgradCdfLogistic_v_478;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_479> AgradCdfLogistic_v_479;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_480> AgradCdfLogistic_v_480;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_481> AgradCdfLogistic_v_481;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_482> AgradCdfLogistic_v_482;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_483> AgradCdfLogistic_v_483;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_484> AgradCdfLogistic_v_484;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_485> AgradCdfLogistic_v_485;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_486> AgradCdfLogistic_v_486;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_487> AgradCdfLogistic_v_487;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_488> AgradCdfLogistic_v_488;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_489> AgradCdfLogistic_v_489;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_490> AgradCdfLogistic_v_490;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_491> AgradCdfLogistic_v_491;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_492> AgradCdfLogistic_v_492;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_493> AgradCdfLogistic_v_493;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_494> AgradCdfLogistic_v_494;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_495> AgradCdfLogistic_v_495;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_496> AgradCdfLogistic_v_496;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_497> AgradCdfLogistic_v_497;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_498> AgradCdfLogistic_v_498;
typedef boost::mpl::vector<AgradCdfLogistic, type_v_499> AgradCdfLogistic_v_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_400, AgradCdfTestFixture, AgradCdfLogistic_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_401, AgradCdfTestFixture, AgradCdfLogistic_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_402, AgradCdfTestFixture, AgradCdfLogistic_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_403, AgradCdfTestFixture, AgradCdfLogistic_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_404, AgradCdfTestFixture, AgradCdfLogistic_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_405, AgradCdfTestFixture, AgradCdfLogistic_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_406, AgradCdfTestFixture, AgradCdfLogistic_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_407, AgradCdfTestFixture, AgradCdfLogistic_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_408, AgradCdfTestFixture, AgradCdfLogistic_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_409, AgradCdfTestFixture, AgradCdfLogistic_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_410, AgradCdfTestFixture, AgradCdfLogistic_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_411, AgradCdfTestFixture, AgradCdfLogistic_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_412, AgradCdfTestFixture, AgradCdfLogistic_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_413, AgradCdfTestFixture, AgradCdfLogistic_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_414, AgradCdfTestFixture, AgradCdfLogistic_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_415, AgradCdfTestFixture, AgradCdfLogistic_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_416, AgradCdfTestFixture, AgradCdfLogistic_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_417, AgradCdfTestFixture, AgradCdfLogistic_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_418, AgradCdfTestFixture, AgradCdfLogistic_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_419, AgradCdfTestFixture, AgradCdfLogistic_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_420, AgradCdfTestFixture, AgradCdfLogistic_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_421, AgradCdfTestFixture, AgradCdfLogistic_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_422, AgradCdfTestFixture, AgradCdfLogistic_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_423, AgradCdfTestFixture, AgradCdfLogistic_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_424, AgradCdfTestFixture, AgradCdfLogistic_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_425, AgradCdfTestFixture, AgradCdfLogistic_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_426, AgradCdfTestFixture, AgradCdfLogistic_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_427, AgradCdfTestFixture, AgradCdfLogistic_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_428, AgradCdfTestFixture, AgradCdfLogistic_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_429, AgradCdfTestFixture, AgradCdfLogistic_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_430, AgradCdfTestFixture, AgradCdfLogistic_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_431, AgradCdfTestFixture, AgradCdfLogistic_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_432, AgradCdfTestFixture, AgradCdfLogistic_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_433, AgradCdfTestFixture, AgradCdfLogistic_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_434, AgradCdfTestFixture, AgradCdfLogistic_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_435, AgradCdfTestFixture, AgradCdfLogistic_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_436, AgradCdfTestFixture, AgradCdfLogistic_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_437, AgradCdfTestFixture, AgradCdfLogistic_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_438, AgradCdfTestFixture, AgradCdfLogistic_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_439, AgradCdfTestFixture, AgradCdfLogistic_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_440, AgradCdfTestFixture, AgradCdfLogistic_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_441, AgradCdfTestFixture, AgradCdfLogistic_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_442, AgradCdfTestFixture, AgradCdfLogistic_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_443, AgradCdfTestFixture, AgradCdfLogistic_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_444, AgradCdfTestFixture, AgradCdfLogistic_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_445, AgradCdfTestFixture, AgradCdfLogistic_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_446, AgradCdfTestFixture, AgradCdfLogistic_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_447, AgradCdfTestFixture, AgradCdfLogistic_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_448, AgradCdfTestFixture, AgradCdfLogistic_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_449, AgradCdfTestFixture, AgradCdfLogistic_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_450, AgradCdfTestFixture, AgradCdfLogistic_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_451, AgradCdfTestFixture, AgradCdfLogistic_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_452, AgradCdfTestFixture, AgradCdfLogistic_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_453, AgradCdfTestFixture, AgradCdfLogistic_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_454, AgradCdfTestFixture, AgradCdfLogistic_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_455, AgradCdfTestFixture, AgradCdfLogistic_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_456, AgradCdfTestFixture, AgradCdfLogistic_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_457, AgradCdfTestFixture, AgradCdfLogistic_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_458, AgradCdfTestFixture, AgradCdfLogistic_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_459, AgradCdfTestFixture, AgradCdfLogistic_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_460, AgradCdfTestFixture, AgradCdfLogistic_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_461, AgradCdfTestFixture, AgradCdfLogistic_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_462, AgradCdfTestFixture, AgradCdfLogistic_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_463, AgradCdfTestFixture, AgradCdfLogistic_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_464, AgradCdfTestFixture, AgradCdfLogistic_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_465, AgradCdfTestFixture, AgradCdfLogistic_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_466, AgradCdfTestFixture, AgradCdfLogistic_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_467, AgradCdfTestFixture, AgradCdfLogistic_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_468, AgradCdfTestFixture, AgradCdfLogistic_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_469, AgradCdfTestFixture, AgradCdfLogistic_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_470, AgradCdfTestFixture, AgradCdfLogistic_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_471, AgradCdfTestFixture, AgradCdfLogistic_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_472, AgradCdfTestFixture, AgradCdfLogistic_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_473, AgradCdfTestFixture, AgradCdfLogistic_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_474, AgradCdfTestFixture, AgradCdfLogistic_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_475, AgradCdfTestFixture, AgradCdfLogistic_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_476, AgradCdfTestFixture, AgradCdfLogistic_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_477, AgradCdfTestFixture, AgradCdfLogistic_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_478, AgradCdfTestFixture, AgradCdfLogistic_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_479, AgradCdfTestFixture, AgradCdfLogistic_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_480, AgradCdfTestFixture, AgradCdfLogistic_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_481, AgradCdfTestFixture, AgradCdfLogistic_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_482, AgradCdfTestFixture, AgradCdfLogistic_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_483, AgradCdfTestFixture, AgradCdfLogistic_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_484, AgradCdfTestFixture, AgradCdfLogistic_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_485, AgradCdfTestFixture, AgradCdfLogistic_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_486, AgradCdfTestFixture, AgradCdfLogistic_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_487, AgradCdfTestFixture, AgradCdfLogistic_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_488, AgradCdfTestFixture, AgradCdfLogistic_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_489, AgradCdfTestFixture, AgradCdfLogistic_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_490, AgradCdfTestFixture, AgradCdfLogistic_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_491, AgradCdfTestFixture, AgradCdfLogistic_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_492, AgradCdfTestFixture, AgradCdfLogistic_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_493, AgradCdfTestFixture, AgradCdfLogistic_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_494, AgradCdfTestFixture, AgradCdfLogistic_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_495, AgradCdfTestFixture, AgradCdfLogistic_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_496, AgradCdfTestFixture, AgradCdfLogistic_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_497, AgradCdfTestFixture, AgradCdfLogistic_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_498, AgradCdfTestFixture, AgradCdfLogistic_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_v_499, AgradCdfTestFixture, AgradCdfLogistic_v_499);

