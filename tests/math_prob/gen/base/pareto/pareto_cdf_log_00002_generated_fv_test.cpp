#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <pareto/pareto_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_400> AgradCdfLogPareto_fv_400;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_401> AgradCdfLogPareto_fv_401;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_402> AgradCdfLogPareto_fv_402;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_403> AgradCdfLogPareto_fv_403;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_404> AgradCdfLogPareto_fv_404;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_405> AgradCdfLogPareto_fv_405;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_406> AgradCdfLogPareto_fv_406;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_407> AgradCdfLogPareto_fv_407;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_408> AgradCdfLogPareto_fv_408;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_409> AgradCdfLogPareto_fv_409;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_410> AgradCdfLogPareto_fv_410;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_411> AgradCdfLogPareto_fv_411;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_412> AgradCdfLogPareto_fv_412;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_413> AgradCdfLogPareto_fv_413;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_414> AgradCdfLogPareto_fv_414;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_415> AgradCdfLogPareto_fv_415;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_416> AgradCdfLogPareto_fv_416;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_417> AgradCdfLogPareto_fv_417;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_418> AgradCdfLogPareto_fv_418;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_419> AgradCdfLogPareto_fv_419;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_420> AgradCdfLogPareto_fv_420;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_421> AgradCdfLogPareto_fv_421;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_422> AgradCdfLogPareto_fv_422;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_423> AgradCdfLogPareto_fv_423;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_424> AgradCdfLogPareto_fv_424;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_425> AgradCdfLogPareto_fv_425;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_426> AgradCdfLogPareto_fv_426;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_427> AgradCdfLogPareto_fv_427;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_428> AgradCdfLogPareto_fv_428;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_429> AgradCdfLogPareto_fv_429;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_430> AgradCdfLogPareto_fv_430;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_431> AgradCdfLogPareto_fv_431;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_432> AgradCdfLogPareto_fv_432;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_433> AgradCdfLogPareto_fv_433;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_434> AgradCdfLogPareto_fv_434;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_435> AgradCdfLogPareto_fv_435;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_436> AgradCdfLogPareto_fv_436;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_437> AgradCdfLogPareto_fv_437;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_438> AgradCdfLogPareto_fv_438;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_439> AgradCdfLogPareto_fv_439;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_440> AgradCdfLogPareto_fv_440;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_441> AgradCdfLogPareto_fv_441;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_442> AgradCdfLogPareto_fv_442;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_443> AgradCdfLogPareto_fv_443;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_444> AgradCdfLogPareto_fv_444;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_445> AgradCdfLogPareto_fv_445;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_446> AgradCdfLogPareto_fv_446;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fv_447> AgradCdfLogPareto_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_400, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_401, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_402, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_403, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_404, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_405, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_406, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_407, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_408, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_409, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_410, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_411, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_412, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_413, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_414, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_415, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_416, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_417, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_418, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_419, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_420, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_421, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_422, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_423, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_424, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_425, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_426, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_427, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_428, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_429, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_430, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_431, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_432, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_433, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_434, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_435, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_436, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_437, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_438, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_439, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_440, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_441, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_442, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_443, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_444, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_445, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_446, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fv_447, AgradCdfLogTestFixture, AgradCdfLogPareto_fv_447);
