#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_proportion/beta_proportion_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_400> AgradCcdfLogBetaProportion_fv_400;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_401> AgradCcdfLogBetaProportion_fv_401;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_402> AgradCcdfLogBetaProportion_fv_402;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_403> AgradCcdfLogBetaProportion_fv_403;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_404> AgradCcdfLogBetaProportion_fv_404;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_405> AgradCcdfLogBetaProportion_fv_405;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_406> AgradCcdfLogBetaProportion_fv_406;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_407> AgradCcdfLogBetaProportion_fv_407;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_408> AgradCcdfLogBetaProportion_fv_408;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_409> AgradCcdfLogBetaProportion_fv_409;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_410> AgradCcdfLogBetaProportion_fv_410;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_411> AgradCcdfLogBetaProportion_fv_411;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_412> AgradCcdfLogBetaProportion_fv_412;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_413> AgradCcdfLogBetaProportion_fv_413;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_414> AgradCcdfLogBetaProportion_fv_414;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_415> AgradCcdfLogBetaProportion_fv_415;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_416> AgradCcdfLogBetaProportion_fv_416;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_417> AgradCcdfLogBetaProportion_fv_417;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_418> AgradCcdfLogBetaProportion_fv_418;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_419> AgradCcdfLogBetaProportion_fv_419;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_420> AgradCcdfLogBetaProportion_fv_420;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_421> AgradCcdfLogBetaProportion_fv_421;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_422> AgradCcdfLogBetaProportion_fv_422;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_423> AgradCcdfLogBetaProportion_fv_423;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_424> AgradCcdfLogBetaProportion_fv_424;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_425> AgradCcdfLogBetaProportion_fv_425;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_426> AgradCcdfLogBetaProportion_fv_426;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_427> AgradCcdfLogBetaProportion_fv_427;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_428> AgradCcdfLogBetaProportion_fv_428;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_429> AgradCcdfLogBetaProportion_fv_429;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_430> AgradCcdfLogBetaProportion_fv_430;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_431> AgradCcdfLogBetaProportion_fv_431;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_432> AgradCcdfLogBetaProportion_fv_432;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_433> AgradCcdfLogBetaProportion_fv_433;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_434> AgradCcdfLogBetaProportion_fv_434;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_435> AgradCcdfLogBetaProportion_fv_435;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_436> AgradCcdfLogBetaProportion_fv_436;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_437> AgradCcdfLogBetaProportion_fv_437;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_438> AgradCcdfLogBetaProportion_fv_438;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_439> AgradCcdfLogBetaProportion_fv_439;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_440> AgradCcdfLogBetaProportion_fv_440;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_441> AgradCcdfLogBetaProportion_fv_441;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_442> AgradCcdfLogBetaProportion_fv_442;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_443> AgradCcdfLogBetaProportion_fv_443;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_444> AgradCcdfLogBetaProportion_fv_444;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_445> AgradCcdfLogBetaProportion_fv_445;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_446> AgradCcdfLogBetaProportion_fv_446;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_447> AgradCcdfLogBetaProportion_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_400, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_401, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_402, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_403, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_404, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_405, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_406, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_407, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_408, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_409, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_410, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_411, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_412, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_413, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_414, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_415, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_416, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_417, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_418, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_419, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_420, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_421, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_422, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_423, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_424, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_425, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_426, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_427, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_428, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_429, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_430, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_431, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_432, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_433, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_434, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_435, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_436, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_437, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_438, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_439, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_440, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_441, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_442, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_443, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_444, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_445, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_446, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_447, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_447);

