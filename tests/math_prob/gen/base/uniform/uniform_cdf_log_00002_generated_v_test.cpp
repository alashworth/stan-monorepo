#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <uniform/uniform_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogUniform, type_v_400> AgradCdfLogUniform_v_400;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_401> AgradCdfLogUniform_v_401;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_402> AgradCdfLogUniform_v_402;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_403> AgradCdfLogUniform_v_403;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_404> AgradCdfLogUniform_v_404;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_405> AgradCdfLogUniform_v_405;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_406> AgradCdfLogUniform_v_406;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_407> AgradCdfLogUniform_v_407;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_408> AgradCdfLogUniform_v_408;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_409> AgradCdfLogUniform_v_409;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_410> AgradCdfLogUniform_v_410;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_411> AgradCdfLogUniform_v_411;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_412> AgradCdfLogUniform_v_412;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_413> AgradCdfLogUniform_v_413;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_414> AgradCdfLogUniform_v_414;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_415> AgradCdfLogUniform_v_415;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_416> AgradCdfLogUniform_v_416;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_417> AgradCdfLogUniform_v_417;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_418> AgradCdfLogUniform_v_418;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_419> AgradCdfLogUniform_v_419;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_420> AgradCdfLogUniform_v_420;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_421> AgradCdfLogUniform_v_421;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_422> AgradCdfLogUniform_v_422;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_423> AgradCdfLogUniform_v_423;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_424> AgradCdfLogUniform_v_424;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_425> AgradCdfLogUniform_v_425;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_426> AgradCdfLogUniform_v_426;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_427> AgradCdfLogUniform_v_427;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_428> AgradCdfLogUniform_v_428;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_429> AgradCdfLogUniform_v_429;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_430> AgradCdfLogUniform_v_430;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_431> AgradCdfLogUniform_v_431;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_432> AgradCdfLogUniform_v_432;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_433> AgradCdfLogUniform_v_433;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_434> AgradCdfLogUniform_v_434;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_435> AgradCdfLogUniform_v_435;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_436> AgradCdfLogUniform_v_436;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_437> AgradCdfLogUniform_v_437;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_438> AgradCdfLogUniform_v_438;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_439> AgradCdfLogUniform_v_439;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_440> AgradCdfLogUniform_v_440;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_441> AgradCdfLogUniform_v_441;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_442> AgradCdfLogUniform_v_442;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_443> AgradCdfLogUniform_v_443;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_444> AgradCdfLogUniform_v_444;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_445> AgradCdfLogUniform_v_445;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_446> AgradCdfLogUniform_v_446;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_447> AgradCdfLogUniform_v_447;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_448> AgradCdfLogUniform_v_448;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_449> AgradCdfLogUniform_v_449;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_450> AgradCdfLogUniform_v_450;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_451> AgradCdfLogUniform_v_451;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_452> AgradCdfLogUniform_v_452;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_453> AgradCdfLogUniform_v_453;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_454> AgradCdfLogUniform_v_454;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_455> AgradCdfLogUniform_v_455;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_456> AgradCdfLogUniform_v_456;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_457> AgradCdfLogUniform_v_457;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_458> AgradCdfLogUniform_v_458;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_459> AgradCdfLogUniform_v_459;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_460> AgradCdfLogUniform_v_460;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_461> AgradCdfLogUniform_v_461;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_462> AgradCdfLogUniform_v_462;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_463> AgradCdfLogUniform_v_463;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_464> AgradCdfLogUniform_v_464;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_465> AgradCdfLogUniform_v_465;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_466> AgradCdfLogUniform_v_466;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_467> AgradCdfLogUniform_v_467;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_468> AgradCdfLogUniform_v_468;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_469> AgradCdfLogUniform_v_469;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_470> AgradCdfLogUniform_v_470;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_471> AgradCdfLogUniform_v_471;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_472> AgradCdfLogUniform_v_472;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_473> AgradCdfLogUniform_v_473;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_474> AgradCdfLogUniform_v_474;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_475> AgradCdfLogUniform_v_475;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_476> AgradCdfLogUniform_v_476;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_477> AgradCdfLogUniform_v_477;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_478> AgradCdfLogUniform_v_478;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_479> AgradCdfLogUniform_v_479;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_480> AgradCdfLogUniform_v_480;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_481> AgradCdfLogUniform_v_481;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_482> AgradCdfLogUniform_v_482;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_483> AgradCdfLogUniform_v_483;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_484> AgradCdfLogUniform_v_484;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_485> AgradCdfLogUniform_v_485;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_486> AgradCdfLogUniform_v_486;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_487> AgradCdfLogUniform_v_487;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_488> AgradCdfLogUniform_v_488;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_489> AgradCdfLogUniform_v_489;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_490> AgradCdfLogUniform_v_490;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_491> AgradCdfLogUniform_v_491;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_492> AgradCdfLogUniform_v_492;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_493> AgradCdfLogUniform_v_493;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_494> AgradCdfLogUniform_v_494;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_495> AgradCdfLogUniform_v_495;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_496> AgradCdfLogUniform_v_496;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_497> AgradCdfLogUniform_v_497;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_498> AgradCdfLogUniform_v_498;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_499> AgradCdfLogUniform_v_499;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_500> AgradCdfLogUniform_v_500;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_501> AgradCdfLogUniform_v_501;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_502> AgradCdfLogUniform_v_502;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_503> AgradCdfLogUniform_v_503;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_504> AgradCdfLogUniform_v_504;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_505> AgradCdfLogUniform_v_505;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_506> AgradCdfLogUniform_v_506;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_507> AgradCdfLogUniform_v_507;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_508> AgradCdfLogUniform_v_508;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_509> AgradCdfLogUniform_v_509;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_510> AgradCdfLogUniform_v_510;
typedef boost::mpl::vector<AgradCdfLogUniform, type_v_511> AgradCdfLogUniform_v_511;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_400, AgradCdfLogTestFixture, AgradCdfLogUniform_v_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_401, AgradCdfLogTestFixture, AgradCdfLogUniform_v_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_402, AgradCdfLogTestFixture, AgradCdfLogUniform_v_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_403, AgradCdfLogTestFixture, AgradCdfLogUniform_v_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_404, AgradCdfLogTestFixture, AgradCdfLogUniform_v_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_405, AgradCdfLogTestFixture, AgradCdfLogUniform_v_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_406, AgradCdfLogTestFixture, AgradCdfLogUniform_v_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_407, AgradCdfLogTestFixture, AgradCdfLogUniform_v_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_408, AgradCdfLogTestFixture, AgradCdfLogUniform_v_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_409, AgradCdfLogTestFixture, AgradCdfLogUniform_v_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_410, AgradCdfLogTestFixture, AgradCdfLogUniform_v_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_411, AgradCdfLogTestFixture, AgradCdfLogUniform_v_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_412, AgradCdfLogTestFixture, AgradCdfLogUniform_v_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_413, AgradCdfLogTestFixture, AgradCdfLogUniform_v_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_414, AgradCdfLogTestFixture, AgradCdfLogUniform_v_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_415, AgradCdfLogTestFixture, AgradCdfLogUniform_v_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_416, AgradCdfLogTestFixture, AgradCdfLogUniform_v_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_417, AgradCdfLogTestFixture, AgradCdfLogUniform_v_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_418, AgradCdfLogTestFixture, AgradCdfLogUniform_v_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_419, AgradCdfLogTestFixture, AgradCdfLogUniform_v_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_420, AgradCdfLogTestFixture, AgradCdfLogUniform_v_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_421, AgradCdfLogTestFixture, AgradCdfLogUniform_v_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_422, AgradCdfLogTestFixture, AgradCdfLogUniform_v_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_423, AgradCdfLogTestFixture, AgradCdfLogUniform_v_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_424, AgradCdfLogTestFixture, AgradCdfLogUniform_v_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_425, AgradCdfLogTestFixture, AgradCdfLogUniform_v_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_426, AgradCdfLogTestFixture, AgradCdfLogUniform_v_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_427, AgradCdfLogTestFixture, AgradCdfLogUniform_v_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_428, AgradCdfLogTestFixture, AgradCdfLogUniform_v_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_429, AgradCdfLogTestFixture, AgradCdfLogUniform_v_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_430, AgradCdfLogTestFixture, AgradCdfLogUniform_v_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_431, AgradCdfLogTestFixture, AgradCdfLogUniform_v_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_432, AgradCdfLogTestFixture, AgradCdfLogUniform_v_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_433, AgradCdfLogTestFixture, AgradCdfLogUniform_v_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_434, AgradCdfLogTestFixture, AgradCdfLogUniform_v_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_435, AgradCdfLogTestFixture, AgradCdfLogUniform_v_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_436, AgradCdfLogTestFixture, AgradCdfLogUniform_v_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_437, AgradCdfLogTestFixture, AgradCdfLogUniform_v_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_438, AgradCdfLogTestFixture, AgradCdfLogUniform_v_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_439, AgradCdfLogTestFixture, AgradCdfLogUniform_v_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_440, AgradCdfLogTestFixture, AgradCdfLogUniform_v_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_441, AgradCdfLogTestFixture, AgradCdfLogUniform_v_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_442, AgradCdfLogTestFixture, AgradCdfLogUniform_v_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_443, AgradCdfLogTestFixture, AgradCdfLogUniform_v_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_444, AgradCdfLogTestFixture, AgradCdfLogUniform_v_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_445, AgradCdfLogTestFixture, AgradCdfLogUniform_v_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_446, AgradCdfLogTestFixture, AgradCdfLogUniform_v_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_447, AgradCdfLogTestFixture, AgradCdfLogUniform_v_447);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_448, AgradCdfLogTestFixture, AgradCdfLogUniform_v_448);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_449, AgradCdfLogTestFixture, AgradCdfLogUniform_v_449);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_450, AgradCdfLogTestFixture, AgradCdfLogUniform_v_450);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_451, AgradCdfLogTestFixture, AgradCdfLogUniform_v_451);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_452, AgradCdfLogTestFixture, AgradCdfLogUniform_v_452);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_453, AgradCdfLogTestFixture, AgradCdfLogUniform_v_453);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_454, AgradCdfLogTestFixture, AgradCdfLogUniform_v_454);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_455, AgradCdfLogTestFixture, AgradCdfLogUniform_v_455);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_456, AgradCdfLogTestFixture, AgradCdfLogUniform_v_456);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_457, AgradCdfLogTestFixture, AgradCdfLogUniform_v_457);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_458, AgradCdfLogTestFixture, AgradCdfLogUniform_v_458);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_459, AgradCdfLogTestFixture, AgradCdfLogUniform_v_459);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_460, AgradCdfLogTestFixture, AgradCdfLogUniform_v_460);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_461, AgradCdfLogTestFixture, AgradCdfLogUniform_v_461);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_462, AgradCdfLogTestFixture, AgradCdfLogUniform_v_462);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_463, AgradCdfLogTestFixture, AgradCdfLogUniform_v_463);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_464, AgradCdfLogTestFixture, AgradCdfLogUniform_v_464);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_465, AgradCdfLogTestFixture, AgradCdfLogUniform_v_465);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_466, AgradCdfLogTestFixture, AgradCdfLogUniform_v_466);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_467, AgradCdfLogTestFixture, AgradCdfLogUniform_v_467);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_468, AgradCdfLogTestFixture, AgradCdfLogUniform_v_468);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_469, AgradCdfLogTestFixture, AgradCdfLogUniform_v_469);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_470, AgradCdfLogTestFixture, AgradCdfLogUniform_v_470);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_471, AgradCdfLogTestFixture, AgradCdfLogUniform_v_471);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_472, AgradCdfLogTestFixture, AgradCdfLogUniform_v_472);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_473, AgradCdfLogTestFixture, AgradCdfLogUniform_v_473);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_474, AgradCdfLogTestFixture, AgradCdfLogUniform_v_474);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_475, AgradCdfLogTestFixture, AgradCdfLogUniform_v_475);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_476, AgradCdfLogTestFixture, AgradCdfLogUniform_v_476);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_477, AgradCdfLogTestFixture, AgradCdfLogUniform_v_477);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_478, AgradCdfLogTestFixture, AgradCdfLogUniform_v_478);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_479, AgradCdfLogTestFixture, AgradCdfLogUniform_v_479);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_480, AgradCdfLogTestFixture, AgradCdfLogUniform_v_480);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_481, AgradCdfLogTestFixture, AgradCdfLogUniform_v_481);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_482, AgradCdfLogTestFixture, AgradCdfLogUniform_v_482);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_483, AgradCdfLogTestFixture, AgradCdfLogUniform_v_483);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_484, AgradCdfLogTestFixture, AgradCdfLogUniform_v_484);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_485, AgradCdfLogTestFixture, AgradCdfLogUniform_v_485);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_486, AgradCdfLogTestFixture, AgradCdfLogUniform_v_486);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_487, AgradCdfLogTestFixture, AgradCdfLogUniform_v_487);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_488, AgradCdfLogTestFixture, AgradCdfLogUniform_v_488);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_489, AgradCdfLogTestFixture, AgradCdfLogUniform_v_489);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_490, AgradCdfLogTestFixture, AgradCdfLogUniform_v_490);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_491, AgradCdfLogTestFixture, AgradCdfLogUniform_v_491);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_492, AgradCdfLogTestFixture, AgradCdfLogUniform_v_492);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_493, AgradCdfLogTestFixture, AgradCdfLogUniform_v_493);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_494, AgradCdfLogTestFixture, AgradCdfLogUniform_v_494);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_495, AgradCdfLogTestFixture, AgradCdfLogUniform_v_495);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_496, AgradCdfLogTestFixture, AgradCdfLogUniform_v_496);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_497, AgradCdfLogTestFixture, AgradCdfLogUniform_v_497);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_498, AgradCdfLogTestFixture, AgradCdfLogUniform_v_498);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_499, AgradCdfLogTestFixture, AgradCdfLogUniform_v_499);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_500, AgradCdfLogTestFixture, AgradCdfLogUniform_v_500);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_501, AgradCdfLogTestFixture, AgradCdfLogUniform_v_501);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_502, AgradCdfLogTestFixture, AgradCdfLogUniform_v_502);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_503, AgradCdfLogTestFixture, AgradCdfLogUniform_v_503);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_504, AgradCdfLogTestFixture, AgradCdfLogUniform_v_504);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_505, AgradCdfLogTestFixture, AgradCdfLogUniform_v_505);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_506, AgradCdfLogTestFixture, AgradCdfLogUniform_v_506);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_507, AgradCdfLogTestFixture, AgradCdfLogUniform_v_507);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_508, AgradCdfLogTestFixture, AgradCdfLogUniform_v_508);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_509, AgradCdfLogTestFixture, AgradCdfLogUniform_v_509);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_510, AgradCdfLogTestFixture, AgradCdfLogUniform_v_510);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogUniform_v_511, AgradCdfLogTestFixture, AgradCdfLogUniform_v_511);

