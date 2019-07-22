#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <lognormal/lognormal_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty, empty> type_fv_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty, empty> type_fv_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty, empty> type_fv_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty, empty> type_fv_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty, empty> type_fv_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty, empty> type_fv_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty, empty> type_fv_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty> type_fv_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_447;

typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_400> AgradCdfLogLognormal_fv_400;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_401> AgradCdfLogLognormal_fv_401;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_402> AgradCdfLogLognormal_fv_402;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_403> AgradCdfLogLognormal_fv_403;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_404> AgradCdfLogLognormal_fv_404;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_405> AgradCdfLogLognormal_fv_405;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_406> AgradCdfLogLognormal_fv_406;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_407> AgradCdfLogLognormal_fv_407;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_408> AgradCdfLogLognormal_fv_408;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_409> AgradCdfLogLognormal_fv_409;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_410> AgradCdfLogLognormal_fv_410;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_411> AgradCdfLogLognormal_fv_411;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_412> AgradCdfLogLognormal_fv_412;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_413> AgradCdfLogLognormal_fv_413;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_414> AgradCdfLogLognormal_fv_414;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_415> AgradCdfLogLognormal_fv_415;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_416> AgradCdfLogLognormal_fv_416;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_417> AgradCdfLogLognormal_fv_417;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_418> AgradCdfLogLognormal_fv_418;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_419> AgradCdfLogLognormal_fv_419;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_420> AgradCdfLogLognormal_fv_420;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_421> AgradCdfLogLognormal_fv_421;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_422> AgradCdfLogLognormal_fv_422;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_423> AgradCdfLogLognormal_fv_423;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_424> AgradCdfLogLognormal_fv_424;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_425> AgradCdfLogLognormal_fv_425;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_426> AgradCdfLogLognormal_fv_426;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_427> AgradCdfLogLognormal_fv_427;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_428> AgradCdfLogLognormal_fv_428;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_429> AgradCdfLogLognormal_fv_429;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_430> AgradCdfLogLognormal_fv_430;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_431> AgradCdfLogLognormal_fv_431;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_432> AgradCdfLogLognormal_fv_432;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_433> AgradCdfLogLognormal_fv_433;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_434> AgradCdfLogLognormal_fv_434;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_435> AgradCdfLogLognormal_fv_435;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_436> AgradCdfLogLognormal_fv_436;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_437> AgradCdfLogLognormal_fv_437;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_438> AgradCdfLogLognormal_fv_438;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_439> AgradCdfLogLognormal_fv_439;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_440> AgradCdfLogLognormal_fv_440;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_441> AgradCdfLogLognormal_fv_441;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_442> AgradCdfLogLognormal_fv_442;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_443> AgradCdfLogLognormal_fv_443;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_444> AgradCdfLogLognormal_fv_444;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_445> AgradCdfLogLognormal_fv_445;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_446> AgradCdfLogLognormal_fv_446;
typedef boost::mpl::vector<AgradCdfLogLognormal, type_fv_447> AgradCdfLogLognormal_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_400, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_401, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_402, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_403, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_404, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_405, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_406, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_407, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_408, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_409, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_410, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_411, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_412, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_413, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_414, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_415, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_416, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_417, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_418, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_419, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_420, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_421, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_422, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_423, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_424, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_425, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_426, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_427, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_428, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_429, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_430, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_431, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_432, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_433, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_434, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_435, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_436, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_437, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_438, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_439, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_440, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_441, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_442, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_443, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_444, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_445, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_446, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLognormal_fv_447, AgradCdfLogTestFixture, AgradCdfLogLognormal_fv_447);

