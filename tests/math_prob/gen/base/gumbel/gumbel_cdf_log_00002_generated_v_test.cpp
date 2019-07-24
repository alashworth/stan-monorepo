#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <gumbel/gumbel_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_400> AgradCdfLogGumbel_v_400;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_401> AgradCdfLogGumbel_v_401;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_402> AgradCdfLogGumbel_v_402;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_403> AgradCdfLogGumbel_v_403;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_404> AgradCdfLogGumbel_v_404;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_405> AgradCdfLogGumbel_v_405;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_406> AgradCdfLogGumbel_v_406;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_407> AgradCdfLogGumbel_v_407;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_408> AgradCdfLogGumbel_v_408;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_409> AgradCdfLogGumbel_v_409;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_410> AgradCdfLogGumbel_v_410;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_411> AgradCdfLogGumbel_v_411;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_412> AgradCdfLogGumbel_v_412;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_413> AgradCdfLogGumbel_v_413;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_414> AgradCdfLogGumbel_v_414;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_415> AgradCdfLogGumbel_v_415;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_416> AgradCdfLogGumbel_v_416;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_417> AgradCdfLogGumbel_v_417;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_418> AgradCdfLogGumbel_v_418;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_419> AgradCdfLogGumbel_v_419;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_420> AgradCdfLogGumbel_v_420;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_421> AgradCdfLogGumbel_v_421;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_422> AgradCdfLogGumbel_v_422;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_423> AgradCdfLogGumbel_v_423;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_424> AgradCdfLogGumbel_v_424;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_425> AgradCdfLogGumbel_v_425;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_426> AgradCdfLogGumbel_v_426;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_427> AgradCdfLogGumbel_v_427;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_428> AgradCdfLogGumbel_v_428;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_429> AgradCdfLogGumbel_v_429;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_430> AgradCdfLogGumbel_v_430;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_431> AgradCdfLogGumbel_v_431;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_432> AgradCdfLogGumbel_v_432;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_433> AgradCdfLogGumbel_v_433;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_434> AgradCdfLogGumbel_v_434;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_435> AgradCdfLogGumbel_v_435;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_436> AgradCdfLogGumbel_v_436;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_437> AgradCdfLogGumbel_v_437;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_438> AgradCdfLogGumbel_v_438;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_439> AgradCdfLogGumbel_v_439;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_440> AgradCdfLogGumbel_v_440;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_441> AgradCdfLogGumbel_v_441;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_442> AgradCdfLogGumbel_v_442;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_443> AgradCdfLogGumbel_v_443;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_444> AgradCdfLogGumbel_v_444;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_445> AgradCdfLogGumbel_v_445;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_446> AgradCdfLogGumbel_v_446;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_447> AgradCdfLogGumbel_v_447;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_448> AgradCdfLogGumbel_v_448;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_449> AgradCdfLogGumbel_v_449;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_450> AgradCdfLogGumbel_v_450;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_451> AgradCdfLogGumbel_v_451;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_452> AgradCdfLogGumbel_v_452;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_453> AgradCdfLogGumbel_v_453;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_454> AgradCdfLogGumbel_v_454;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_455> AgradCdfLogGumbel_v_455;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_456> AgradCdfLogGumbel_v_456;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_457> AgradCdfLogGumbel_v_457;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_458> AgradCdfLogGumbel_v_458;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_459> AgradCdfLogGumbel_v_459;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_460> AgradCdfLogGumbel_v_460;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_461> AgradCdfLogGumbel_v_461;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_462> AgradCdfLogGumbel_v_462;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_463> AgradCdfLogGumbel_v_463;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_464> AgradCdfLogGumbel_v_464;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_465> AgradCdfLogGumbel_v_465;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_466> AgradCdfLogGumbel_v_466;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_467> AgradCdfLogGumbel_v_467;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_468> AgradCdfLogGumbel_v_468;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_469> AgradCdfLogGumbel_v_469;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_470> AgradCdfLogGumbel_v_470;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_471> AgradCdfLogGumbel_v_471;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_472> AgradCdfLogGumbel_v_472;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_473> AgradCdfLogGumbel_v_473;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_474> AgradCdfLogGumbel_v_474;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_475> AgradCdfLogGumbel_v_475;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_476> AgradCdfLogGumbel_v_476;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_477> AgradCdfLogGumbel_v_477;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_478> AgradCdfLogGumbel_v_478;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_479> AgradCdfLogGumbel_v_479;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_480> AgradCdfLogGumbel_v_480;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_481> AgradCdfLogGumbel_v_481;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_482> AgradCdfLogGumbel_v_482;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_483> AgradCdfLogGumbel_v_483;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_484> AgradCdfLogGumbel_v_484;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_485> AgradCdfLogGumbel_v_485;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_486> AgradCdfLogGumbel_v_486;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_487> AgradCdfLogGumbel_v_487;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_488> AgradCdfLogGumbel_v_488;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_489> AgradCdfLogGumbel_v_489;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_490> AgradCdfLogGumbel_v_490;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_491> AgradCdfLogGumbel_v_491;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_492> AgradCdfLogGumbel_v_492;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_493> AgradCdfLogGumbel_v_493;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_494> AgradCdfLogGumbel_v_494;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_495> AgradCdfLogGumbel_v_495;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_496> AgradCdfLogGumbel_v_496;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_497> AgradCdfLogGumbel_v_497;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_498> AgradCdfLogGumbel_v_498;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_499> AgradCdfLogGumbel_v_499;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_500> AgradCdfLogGumbel_v_500;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_501> AgradCdfLogGumbel_v_501;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_502> AgradCdfLogGumbel_v_502;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_503> AgradCdfLogGumbel_v_503;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_504> AgradCdfLogGumbel_v_504;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_505> AgradCdfLogGumbel_v_505;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_506> AgradCdfLogGumbel_v_506;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_507> AgradCdfLogGumbel_v_507;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_508> AgradCdfLogGumbel_v_508;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_509> AgradCdfLogGumbel_v_509;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_510> AgradCdfLogGumbel_v_510;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_v_511> AgradCdfLogGumbel_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_400, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_401, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_402, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_403, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_404, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_405, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_406, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_407, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_408, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_409, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_410, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_411, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_412, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_413, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_414, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_415, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_416, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_417, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_418, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_419, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_420, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_421, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_422, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_423, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_424, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_425, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_426, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_427, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_428, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_429, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_430, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_431, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_432, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_433, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_434, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_435, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_436, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_437, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_438, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_439, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_440, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_441, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_442, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_443, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_444, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_445, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_446, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_447, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_448, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_449, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_450, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_451, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_452, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_453, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_454, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_455, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_456, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_457, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_458, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_459, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_460, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_461, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_462, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_463, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_464, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_465, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_466, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_467, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_468, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_469, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_470, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_471, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_472, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_473, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_474, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_475, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_476, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_477, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_478, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_479, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_480, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_481, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_482, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_483, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_484, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_485, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_486, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_487, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_488, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_489, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_490, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_491, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_492, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_493, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_494, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_495, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_496, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_497, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_498, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_499, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_499);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_500, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_501, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_502, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_503, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_504, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_505, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_506, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_507, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_508, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_509, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_510, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_v_511, AgradCdfLogTestFixture, AgradCdfLogGumbel_v_511);
