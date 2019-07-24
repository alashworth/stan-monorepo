#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_400> AgradCcdfLogBeta_v_400;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_401> AgradCcdfLogBeta_v_401;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_402> AgradCcdfLogBeta_v_402;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_403> AgradCcdfLogBeta_v_403;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_404> AgradCcdfLogBeta_v_404;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_405> AgradCcdfLogBeta_v_405;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_406> AgradCcdfLogBeta_v_406;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_407> AgradCcdfLogBeta_v_407;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_408> AgradCcdfLogBeta_v_408;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_409> AgradCcdfLogBeta_v_409;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_410> AgradCcdfLogBeta_v_410;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_411> AgradCcdfLogBeta_v_411;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_412> AgradCcdfLogBeta_v_412;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_413> AgradCcdfLogBeta_v_413;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_414> AgradCcdfLogBeta_v_414;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_415> AgradCcdfLogBeta_v_415;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_416> AgradCcdfLogBeta_v_416;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_417> AgradCcdfLogBeta_v_417;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_418> AgradCcdfLogBeta_v_418;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_419> AgradCcdfLogBeta_v_419;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_420> AgradCcdfLogBeta_v_420;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_421> AgradCcdfLogBeta_v_421;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_422> AgradCcdfLogBeta_v_422;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_423> AgradCcdfLogBeta_v_423;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_424> AgradCcdfLogBeta_v_424;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_425> AgradCcdfLogBeta_v_425;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_426> AgradCcdfLogBeta_v_426;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_427> AgradCcdfLogBeta_v_427;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_428> AgradCcdfLogBeta_v_428;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_429> AgradCcdfLogBeta_v_429;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_430> AgradCcdfLogBeta_v_430;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_431> AgradCcdfLogBeta_v_431;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_432> AgradCcdfLogBeta_v_432;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_433> AgradCcdfLogBeta_v_433;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_434> AgradCcdfLogBeta_v_434;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_435> AgradCcdfLogBeta_v_435;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_436> AgradCcdfLogBeta_v_436;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_437> AgradCcdfLogBeta_v_437;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_438> AgradCcdfLogBeta_v_438;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_439> AgradCcdfLogBeta_v_439;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_440> AgradCcdfLogBeta_v_440;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_441> AgradCcdfLogBeta_v_441;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_442> AgradCcdfLogBeta_v_442;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_443> AgradCcdfLogBeta_v_443;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_444> AgradCcdfLogBeta_v_444;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_445> AgradCcdfLogBeta_v_445;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_446> AgradCcdfLogBeta_v_446;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_447> AgradCcdfLogBeta_v_447;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_448> AgradCcdfLogBeta_v_448;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_449> AgradCcdfLogBeta_v_449;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_450> AgradCcdfLogBeta_v_450;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_451> AgradCcdfLogBeta_v_451;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_452> AgradCcdfLogBeta_v_452;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_453> AgradCcdfLogBeta_v_453;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_454> AgradCcdfLogBeta_v_454;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_455> AgradCcdfLogBeta_v_455;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_456> AgradCcdfLogBeta_v_456;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_457> AgradCcdfLogBeta_v_457;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_458> AgradCcdfLogBeta_v_458;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_459> AgradCcdfLogBeta_v_459;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_460> AgradCcdfLogBeta_v_460;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_461> AgradCcdfLogBeta_v_461;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_462> AgradCcdfLogBeta_v_462;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_463> AgradCcdfLogBeta_v_463;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_464> AgradCcdfLogBeta_v_464;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_465> AgradCcdfLogBeta_v_465;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_466> AgradCcdfLogBeta_v_466;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_467> AgradCcdfLogBeta_v_467;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_468> AgradCcdfLogBeta_v_468;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_469> AgradCcdfLogBeta_v_469;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_470> AgradCcdfLogBeta_v_470;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_471> AgradCcdfLogBeta_v_471;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_472> AgradCcdfLogBeta_v_472;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_473> AgradCcdfLogBeta_v_473;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_474> AgradCcdfLogBeta_v_474;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_475> AgradCcdfLogBeta_v_475;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_476> AgradCcdfLogBeta_v_476;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_477> AgradCcdfLogBeta_v_477;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_478> AgradCcdfLogBeta_v_478;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_479> AgradCcdfLogBeta_v_479;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_480> AgradCcdfLogBeta_v_480;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_481> AgradCcdfLogBeta_v_481;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_482> AgradCcdfLogBeta_v_482;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_483> AgradCcdfLogBeta_v_483;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_484> AgradCcdfLogBeta_v_484;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_485> AgradCcdfLogBeta_v_485;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_486> AgradCcdfLogBeta_v_486;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_487> AgradCcdfLogBeta_v_487;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_488> AgradCcdfLogBeta_v_488;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_489> AgradCcdfLogBeta_v_489;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_490> AgradCcdfLogBeta_v_490;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_491> AgradCcdfLogBeta_v_491;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_492> AgradCcdfLogBeta_v_492;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_493> AgradCcdfLogBeta_v_493;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_494> AgradCcdfLogBeta_v_494;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_495> AgradCcdfLogBeta_v_495;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_496> AgradCcdfLogBeta_v_496;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_497> AgradCcdfLogBeta_v_497;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_498> AgradCcdfLogBeta_v_498;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_v_499> AgradCcdfLogBeta_v_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_400, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_401, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_402, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_403, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_404, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_405, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_406, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_407, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_408, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_409, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_410, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_411, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_412, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_413, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_414, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_415, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_416, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_417, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_418, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_419, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_420, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_421, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_422, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_423, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_424, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_425, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_426, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_427, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_428, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_429, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_430, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_431, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_432, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_433, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_434, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_435, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_436, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_437, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_438, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_439, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_440, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_441, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_442, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_443, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_444, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_445, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_446, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_447, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_448, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_449, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_450, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_451, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_452, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_453, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_454, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_455, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_456, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_457, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_458, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_459, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_460, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_461, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_462, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_463, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_464, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_465, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_466, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_467, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_468, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_469, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_470, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_471, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_472, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_473, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_474, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_475, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_476, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_477, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_478, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_479, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_480, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_481, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_482, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_483, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_484, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_485, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_486, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_487, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_488, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_489, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_490, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_491, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_492, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_493, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_494, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_495, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_496, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_497, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_498, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_v_499, AgradCcdfLogTestFixture, AgradCcdfLogBeta_v_499);
