#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBeta, type_v_400> AgradDistributionsBeta_v_400;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_401> AgradDistributionsBeta_v_401;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_402> AgradDistributionsBeta_v_402;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_403> AgradDistributionsBeta_v_403;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_404> AgradDistributionsBeta_v_404;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_405> AgradDistributionsBeta_v_405;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_406> AgradDistributionsBeta_v_406;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_407> AgradDistributionsBeta_v_407;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_408> AgradDistributionsBeta_v_408;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_409> AgradDistributionsBeta_v_409;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_410> AgradDistributionsBeta_v_410;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_411> AgradDistributionsBeta_v_411;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_412> AgradDistributionsBeta_v_412;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_413> AgradDistributionsBeta_v_413;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_414> AgradDistributionsBeta_v_414;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_415> AgradDistributionsBeta_v_415;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_416> AgradDistributionsBeta_v_416;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_417> AgradDistributionsBeta_v_417;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_418> AgradDistributionsBeta_v_418;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_419> AgradDistributionsBeta_v_419;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_420> AgradDistributionsBeta_v_420;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_421> AgradDistributionsBeta_v_421;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_422> AgradDistributionsBeta_v_422;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_423> AgradDistributionsBeta_v_423;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_424> AgradDistributionsBeta_v_424;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_425> AgradDistributionsBeta_v_425;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_426> AgradDistributionsBeta_v_426;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_427> AgradDistributionsBeta_v_427;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_428> AgradDistributionsBeta_v_428;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_429> AgradDistributionsBeta_v_429;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_430> AgradDistributionsBeta_v_430;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_431> AgradDistributionsBeta_v_431;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_432> AgradDistributionsBeta_v_432;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_433> AgradDistributionsBeta_v_433;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_434> AgradDistributionsBeta_v_434;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_435> AgradDistributionsBeta_v_435;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_436> AgradDistributionsBeta_v_436;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_437> AgradDistributionsBeta_v_437;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_438> AgradDistributionsBeta_v_438;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_439> AgradDistributionsBeta_v_439;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_440> AgradDistributionsBeta_v_440;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_441> AgradDistributionsBeta_v_441;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_442> AgradDistributionsBeta_v_442;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_443> AgradDistributionsBeta_v_443;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_444> AgradDistributionsBeta_v_444;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_445> AgradDistributionsBeta_v_445;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_446> AgradDistributionsBeta_v_446;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_447> AgradDistributionsBeta_v_447;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_448> AgradDistributionsBeta_v_448;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_449> AgradDistributionsBeta_v_449;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_450> AgradDistributionsBeta_v_450;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_451> AgradDistributionsBeta_v_451;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_452> AgradDistributionsBeta_v_452;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_453> AgradDistributionsBeta_v_453;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_454> AgradDistributionsBeta_v_454;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_455> AgradDistributionsBeta_v_455;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_456> AgradDistributionsBeta_v_456;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_457> AgradDistributionsBeta_v_457;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_458> AgradDistributionsBeta_v_458;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_459> AgradDistributionsBeta_v_459;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_460> AgradDistributionsBeta_v_460;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_461> AgradDistributionsBeta_v_461;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_462> AgradDistributionsBeta_v_462;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_463> AgradDistributionsBeta_v_463;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_464> AgradDistributionsBeta_v_464;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_465> AgradDistributionsBeta_v_465;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_466> AgradDistributionsBeta_v_466;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_467> AgradDistributionsBeta_v_467;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_468> AgradDistributionsBeta_v_468;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_469> AgradDistributionsBeta_v_469;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_470> AgradDistributionsBeta_v_470;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_471> AgradDistributionsBeta_v_471;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_472> AgradDistributionsBeta_v_472;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_473> AgradDistributionsBeta_v_473;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_474> AgradDistributionsBeta_v_474;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_475> AgradDistributionsBeta_v_475;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_476> AgradDistributionsBeta_v_476;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_477> AgradDistributionsBeta_v_477;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_478> AgradDistributionsBeta_v_478;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_479> AgradDistributionsBeta_v_479;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_480> AgradDistributionsBeta_v_480;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_481> AgradDistributionsBeta_v_481;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_482> AgradDistributionsBeta_v_482;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_483> AgradDistributionsBeta_v_483;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_484> AgradDistributionsBeta_v_484;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_485> AgradDistributionsBeta_v_485;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_486> AgradDistributionsBeta_v_486;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_487> AgradDistributionsBeta_v_487;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_488> AgradDistributionsBeta_v_488;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_489> AgradDistributionsBeta_v_489;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_490> AgradDistributionsBeta_v_490;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_491> AgradDistributionsBeta_v_491;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_492> AgradDistributionsBeta_v_492;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_493> AgradDistributionsBeta_v_493;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_494> AgradDistributionsBeta_v_494;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_495> AgradDistributionsBeta_v_495;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_496> AgradDistributionsBeta_v_496;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_497> AgradDistributionsBeta_v_497;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_498> AgradDistributionsBeta_v_498;
typedef boost::mpl::vector<AgradDistributionsBeta, type_v_499> AgradDistributionsBeta_v_499;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_400, AgradDistributionTestFixture, AgradDistributionsBeta_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_401, AgradDistributionTestFixture, AgradDistributionsBeta_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_402, AgradDistributionTestFixture, AgradDistributionsBeta_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_403, AgradDistributionTestFixture, AgradDistributionsBeta_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_404, AgradDistributionTestFixture, AgradDistributionsBeta_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_405, AgradDistributionTestFixture, AgradDistributionsBeta_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_406, AgradDistributionTestFixture, AgradDistributionsBeta_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_407, AgradDistributionTestFixture, AgradDistributionsBeta_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_408, AgradDistributionTestFixture, AgradDistributionsBeta_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_409, AgradDistributionTestFixture, AgradDistributionsBeta_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_410, AgradDistributionTestFixture, AgradDistributionsBeta_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_411, AgradDistributionTestFixture, AgradDistributionsBeta_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_412, AgradDistributionTestFixture, AgradDistributionsBeta_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_413, AgradDistributionTestFixture, AgradDistributionsBeta_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_414, AgradDistributionTestFixture, AgradDistributionsBeta_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_415, AgradDistributionTestFixture, AgradDistributionsBeta_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_416, AgradDistributionTestFixture, AgradDistributionsBeta_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_417, AgradDistributionTestFixture, AgradDistributionsBeta_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_418, AgradDistributionTestFixture, AgradDistributionsBeta_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_419, AgradDistributionTestFixture, AgradDistributionsBeta_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_420, AgradDistributionTestFixture, AgradDistributionsBeta_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_421, AgradDistributionTestFixture, AgradDistributionsBeta_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_422, AgradDistributionTestFixture, AgradDistributionsBeta_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_423, AgradDistributionTestFixture, AgradDistributionsBeta_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_424, AgradDistributionTestFixture, AgradDistributionsBeta_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_425, AgradDistributionTestFixture, AgradDistributionsBeta_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_426, AgradDistributionTestFixture, AgradDistributionsBeta_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_427, AgradDistributionTestFixture, AgradDistributionsBeta_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_428, AgradDistributionTestFixture, AgradDistributionsBeta_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_429, AgradDistributionTestFixture, AgradDistributionsBeta_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_430, AgradDistributionTestFixture, AgradDistributionsBeta_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_431, AgradDistributionTestFixture, AgradDistributionsBeta_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_432, AgradDistributionTestFixture, AgradDistributionsBeta_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_433, AgradDistributionTestFixture, AgradDistributionsBeta_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_434, AgradDistributionTestFixture, AgradDistributionsBeta_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_435, AgradDistributionTestFixture, AgradDistributionsBeta_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_436, AgradDistributionTestFixture, AgradDistributionsBeta_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_437, AgradDistributionTestFixture, AgradDistributionsBeta_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_438, AgradDistributionTestFixture, AgradDistributionsBeta_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_439, AgradDistributionTestFixture, AgradDistributionsBeta_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_440, AgradDistributionTestFixture, AgradDistributionsBeta_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_441, AgradDistributionTestFixture, AgradDistributionsBeta_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_442, AgradDistributionTestFixture, AgradDistributionsBeta_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_443, AgradDistributionTestFixture, AgradDistributionsBeta_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_444, AgradDistributionTestFixture, AgradDistributionsBeta_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_445, AgradDistributionTestFixture, AgradDistributionsBeta_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_446, AgradDistributionTestFixture, AgradDistributionsBeta_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_447, AgradDistributionTestFixture, AgradDistributionsBeta_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_448, AgradDistributionTestFixture, AgradDistributionsBeta_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_449, AgradDistributionTestFixture, AgradDistributionsBeta_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_450, AgradDistributionTestFixture, AgradDistributionsBeta_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_451, AgradDistributionTestFixture, AgradDistributionsBeta_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_452, AgradDistributionTestFixture, AgradDistributionsBeta_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_453, AgradDistributionTestFixture, AgradDistributionsBeta_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_454, AgradDistributionTestFixture, AgradDistributionsBeta_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_455, AgradDistributionTestFixture, AgradDistributionsBeta_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_456, AgradDistributionTestFixture, AgradDistributionsBeta_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_457, AgradDistributionTestFixture, AgradDistributionsBeta_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_458, AgradDistributionTestFixture, AgradDistributionsBeta_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_459, AgradDistributionTestFixture, AgradDistributionsBeta_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_460, AgradDistributionTestFixture, AgradDistributionsBeta_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_461, AgradDistributionTestFixture, AgradDistributionsBeta_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_462, AgradDistributionTestFixture, AgradDistributionsBeta_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_463, AgradDistributionTestFixture, AgradDistributionsBeta_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_464, AgradDistributionTestFixture, AgradDistributionsBeta_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_465, AgradDistributionTestFixture, AgradDistributionsBeta_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_466, AgradDistributionTestFixture, AgradDistributionsBeta_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_467, AgradDistributionTestFixture, AgradDistributionsBeta_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_468, AgradDistributionTestFixture, AgradDistributionsBeta_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_469, AgradDistributionTestFixture, AgradDistributionsBeta_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_470, AgradDistributionTestFixture, AgradDistributionsBeta_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_471, AgradDistributionTestFixture, AgradDistributionsBeta_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_472, AgradDistributionTestFixture, AgradDistributionsBeta_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_473, AgradDistributionTestFixture, AgradDistributionsBeta_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_474, AgradDistributionTestFixture, AgradDistributionsBeta_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_475, AgradDistributionTestFixture, AgradDistributionsBeta_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_476, AgradDistributionTestFixture, AgradDistributionsBeta_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_477, AgradDistributionTestFixture, AgradDistributionsBeta_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_478, AgradDistributionTestFixture, AgradDistributionsBeta_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_479, AgradDistributionTestFixture, AgradDistributionsBeta_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_480, AgradDistributionTestFixture, AgradDistributionsBeta_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_481, AgradDistributionTestFixture, AgradDistributionsBeta_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_482, AgradDistributionTestFixture, AgradDistributionsBeta_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_483, AgradDistributionTestFixture, AgradDistributionsBeta_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_484, AgradDistributionTestFixture, AgradDistributionsBeta_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_485, AgradDistributionTestFixture, AgradDistributionsBeta_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_486, AgradDistributionTestFixture, AgradDistributionsBeta_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_487, AgradDistributionTestFixture, AgradDistributionsBeta_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_488, AgradDistributionTestFixture, AgradDistributionsBeta_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_489, AgradDistributionTestFixture, AgradDistributionsBeta_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_490, AgradDistributionTestFixture, AgradDistributionsBeta_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_491, AgradDistributionTestFixture, AgradDistributionsBeta_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_492, AgradDistributionTestFixture, AgradDistributionsBeta_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_493, AgradDistributionTestFixture, AgradDistributionsBeta_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_494, AgradDistributionTestFixture, AgradDistributionsBeta_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_495, AgradDistributionTestFixture, AgradDistributionsBeta_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_496, AgradDistributionTestFixture, AgradDistributionsBeta_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_497, AgradDistributionTestFixture, AgradDistributionsBeta_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_498, AgradDistributionTestFixture, AgradDistributionsBeta_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_v_499, AgradDistributionTestFixture, AgradDistributionsBeta_v_499);

