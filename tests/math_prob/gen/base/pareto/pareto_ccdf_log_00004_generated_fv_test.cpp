#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto/pareto_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_400> AgradCcdfLogPareto_fv_400;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_401> AgradCcdfLogPareto_fv_401;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_402> AgradCcdfLogPareto_fv_402;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_403> AgradCcdfLogPareto_fv_403;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_404> AgradCcdfLogPareto_fv_404;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_405> AgradCcdfLogPareto_fv_405;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_406> AgradCcdfLogPareto_fv_406;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_407> AgradCcdfLogPareto_fv_407;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_408> AgradCcdfLogPareto_fv_408;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_409> AgradCcdfLogPareto_fv_409;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_410> AgradCcdfLogPareto_fv_410;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_411> AgradCcdfLogPareto_fv_411;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_412> AgradCcdfLogPareto_fv_412;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_413> AgradCcdfLogPareto_fv_413;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_414> AgradCcdfLogPareto_fv_414;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_415> AgradCcdfLogPareto_fv_415;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_416> AgradCcdfLogPareto_fv_416;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_417> AgradCcdfLogPareto_fv_417;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_418> AgradCcdfLogPareto_fv_418;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_419> AgradCcdfLogPareto_fv_419;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_420> AgradCcdfLogPareto_fv_420;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_421> AgradCcdfLogPareto_fv_421;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_422> AgradCcdfLogPareto_fv_422;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_423> AgradCcdfLogPareto_fv_423;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_424> AgradCcdfLogPareto_fv_424;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_425> AgradCcdfLogPareto_fv_425;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_426> AgradCcdfLogPareto_fv_426;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_427> AgradCcdfLogPareto_fv_427;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_428> AgradCcdfLogPareto_fv_428;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_429> AgradCcdfLogPareto_fv_429;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_430> AgradCcdfLogPareto_fv_430;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_431> AgradCcdfLogPareto_fv_431;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_432> AgradCcdfLogPareto_fv_432;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_433> AgradCcdfLogPareto_fv_433;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_434> AgradCcdfLogPareto_fv_434;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_435> AgradCcdfLogPareto_fv_435;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_436> AgradCcdfLogPareto_fv_436;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_437> AgradCcdfLogPareto_fv_437;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_438> AgradCcdfLogPareto_fv_438;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_439> AgradCcdfLogPareto_fv_439;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_440> AgradCcdfLogPareto_fv_440;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_441> AgradCcdfLogPareto_fv_441;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_442> AgradCcdfLogPareto_fv_442;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_443> AgradCcdfLogPareto_fv_443;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_444> AgradCcdfLogPareto_fv_444;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_445> AgradCcdfLogPareto_fv_445;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_446> AgradCcdfLogPareto_fv_446;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_fv_447> AgradCcdfLogPareto_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_400, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_401, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_402, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_403, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_404, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_405, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_406, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_407, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_408, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_409, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_410, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_411, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_412, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_413, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_414, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_415, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_416, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_417, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_418, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_419, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_420, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_421, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_422, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_423, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_424, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_425, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_426, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_427, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_428, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_429, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_430, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_431, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_432, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_433, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_434, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_435, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_436, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_437, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_438, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_439, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_440, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_441, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_442, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_443, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_444, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_445, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_446, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_fv_447, AgradCcdfLogTestFixture, AgradCcdfLogPareto_fv_447);

