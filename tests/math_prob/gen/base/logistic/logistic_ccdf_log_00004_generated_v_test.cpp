#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_400> AgradCcdfLogLogistic_v_400;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_401> AgradCcdfLogLogistic_v_401;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_402> AgradCcdfLogLogistic_v_402;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_403> AgradCcdfLogLogistic_v_403;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_404> AgradCcdfLogLogistic_v_404;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_405> AgradCcdfLogLogistic_v_405;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_406> AgradCcdfLogLogistic_v_406;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_407> AgradCcdfLogLogistic_v_407;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_408> AgradCcdfLogLogistic_v_408;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_409> AgradCcdfLogLogistic_v_409;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_410> AgradCcdfLogLogistic_v_410;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_411> AgradCcdfLogLogistic_v_411;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_412> AgradCcdfLogLogistic_v_412;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_413> AgradCcdfLogLogistic_v_413;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_414> AgradCcdfLogLogistic_v_414;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_415> AgradCcdfLogLogistic_v_415;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_416> AgradCcdfLogLogistic_v_416;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_417> AgradCcdfLogLogistic_v_417;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_418> AgradCcdfLogLogistic_v_418;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_419> AgradCcdfLogLogistic_v_419;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_420> AgradCcdfLogLogistic_v_420;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_421> AgradCcdfLogLogistic_v_421;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_422> AgradCcdfLogLogistic_v_422;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_423> AgradCcdfLogLogistic_v_423;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_424> AgradCcdfLogLogistic_v_424;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_425> AgradCcdfLogLogistic_v_425;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_426> AgradCcdfLogLogistic_v_426;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_427> AgradCcdfLogLogistic_v_427;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_428> AgradCcdfLogLogistic_v_428;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_429> AgradCcdfLogLogistic_v_429;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_430> AgradCcdfLogLogistic_v_430;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_431> AgradCcdfLogLogistic_v_431;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_432> AgradCcdfLogLogistic_v_432;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_433> AgradCcdfLogLogistic_v_433;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_434> AgradCcdfLogLogistic_v_434;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_435> AgradCcdfLogLogistic_v_435;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_436> AgradCcdfLogLogistic_v_436;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_437> AgradCcdfLogLogistic_v_437;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_438> AgradCcdfLogLogistic_v_438;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_439> AgradCcdfLogLogistic_v_439;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_440> AgradCcdfLogLogistic_v_440;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_441> AgradCcdfLogLogistic_v_441;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_442> AgradCcdfLogLogistic_v_442;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_443> AgradCcdfLogLogistic_v_443;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_444> AgradCcdfLogLogistic_v_444;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_445> AgradCcdfLogLogistic_v_445;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_446> AgradCcdfLogLogistic_v_446;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_447> AgradCcdfLogLogistic_v_447;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_448> AgradCcdfLogLogistic_v_448;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_449> AgradCcdfLogLogistic_v_449;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_450> AgradCcdfLogLogistic_v_450;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_451> AgradCcdfLogLogistic_v_451;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_452> AgradCcdfLogLogistic_v_452;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_453> AgradCcdfLogLogistic_v_453;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_454> AgradCcdfLogLogistic_v_454;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_455> AgradCcdfLogLogistic_v_455;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_456> AgradCcdfLogLogistic_v_456;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_457> AgradCcdfLogLogistic_v_457;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_458> AgradCcdfLogLogistic_v_458;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_459> AgradCcdfLogLogistic_v_459;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_460> AgradCcdfLogLogistic_v_460;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_461> AgradCcdfLogLogistic_v_461;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_462> AgradCcdfLogLogistic_v_462;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_463> AgradCcdfLogLogistic_v_463;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_464> AgradCcdfLogLogistic_v_464;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_465> AgradCcdfLogLogistic_v_465;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_466> AgradCcdfLogLogistic_v_466;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_467> AgradCcdfLogLogistic_v_467;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_468> AgradCcdfLogLogistic_v_468;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_469> AgradCcdfLogLogistic_v_469;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_470> AgradCcdfLogLogistic_v_470;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_471> AgradCcdfLogLogistic_v_471;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_472> AgradCcdfLogLogistic_v_472;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_473> AgradCcdfLogLogistic_v_473;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_474> AgradCcdfLogLogistic_v_474;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_475> AgradCcdfLogLogistic_v_475;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_476> AgradCcdfLogLogistic_v_476;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_477> AgradCcdfLogLogistic_v_477;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_478> AgradCcdfLogLogistic_v_478;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_479> AgradCcdfLogLogistic_v_479;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_480> AgradCcdfLogLogistic_v_480;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_481> AgradCcdfLogLogistic_v_481;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_482> AgradCcdfLogLogistic_v_482;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_483> AgradCcdfLogLogistic_v_483;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_484> AgradCcdfLogLogistic_v_484;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_485> AgradCcdfLogLogistic_v_485;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_486> AgradCcdfLogLogistic_v_486;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_487> AgradCcdfLogLogistic_v_487;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_488> AgradCcdfLogLogistic_v_488;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_489> AgradCcdfLogLogistic_v_489;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_490> AgradCcdfLogLogistic_v_490;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_491> AgradCcdfLogLogistic_v_491;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_492> AgradCcdfLogLogistic_v_492;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_493> AgradCcdfLogLogistic_v_493;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_494> AgradCcdfLogLogistic_v_494;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_495> AgradCcdfLogLogistic_v_495;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_496> AgradCcdfLogLogistic_v_496;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_497> AgradCcdfLogLogistic_v_497;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_498> AgradCcdfLogLogistic_v_498;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_v_499> AgradCcdfLogLogistic_v_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_400, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_401, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_402, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_403, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_404, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_405, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_406, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_407, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_408, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_409, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_410, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_411, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_412, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_413, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_414, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_415, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_416, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_417, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_418, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_419, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_420, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_421, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_422, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_423, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_424, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_425, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_426, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_427, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_428, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_429, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_430, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_431, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_432, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_433, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_434, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_435, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_436, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_437, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_438, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_439, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_440, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_441, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_442, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_443, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_444, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_445, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_446, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_447, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_448, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_449, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_450, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_451, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_452, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_453, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_454, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_455, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_456, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_457, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_458, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_459, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_460, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_461, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_462, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_463, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_464, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_465, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_466, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_467, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_468, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_469, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_470, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_471, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_472, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_473, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_474, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_475, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_476, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_477, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_478, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_479, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_480, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_481, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_482, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_483, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_484, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_485, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_486, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_487, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_488, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_489, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_490, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_491, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_492, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_493, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_494, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_495, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_496, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_497, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_498, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_v_499, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_v_499);

