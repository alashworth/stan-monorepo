#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_400> AgradCdfLogBeta_fv_400;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_401> AgradCdfLogBeta_fv_401;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_402> AgradCdfLogBeta_fv_402;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_403> AgradCdfLogBeta_fv_403;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_404> AgradCdfLogBeta_fv_404;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_405> AgradCdfLogBeta_fv_405;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_406> AgradCdfLogBeta_fv_406;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_407> AgradCdfLogBeta_fv_407;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_408> AgradCdfLogBeta_fv_408;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_409> AgradCdfLogBeta_fv_409;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_410> AgradCdfLogBeta_fv_410;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_411> AgradCdfLogBeta_fv_411;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_412> AgradCdfLogBeta_fv_412;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_413> AgradCdfLogBeta_fv_413;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_414> AgradCdfLogBeta_fv_414;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_415> AgradCdfLogBeta_fv_415;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_416> AgradCdfLogBeta_fv_416;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_417> AgradCdfLogBeta_fv_417;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_418> AgradCdfLogBeta_fv_418;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_419> AgradCdfLogBeta_fv_419;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_420> AgradCdfLogBeta_fv_420;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_421> AgradCdfLogBeta_fv_421;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_422> AgradCdfLogBeta_fv_422;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_423> AgradCdfLogBeta_fv_423;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_424> AgradCdfLogBeta_fv_424;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_425> AgradCdfLogBeta_fv_425;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_426> AgradCdfLogBeta_fv_426;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_427> AgradCdfLogBeta_fv_427;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_428> AgradCdfLogBeta_fv_428;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_429> AgradCdfLogBeta_fv_429;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_430> AgradCdfLogBeta_fv_430;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_431> AgradCdfLogBeta_fv_431;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_432> AgradCdfLogBeta_fv_432;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_433> AgradCdfLogBeta_fv_433;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_434> AgradCdfLogBeta_fv_434;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_435> AgradCdfLogBeta_fv_435;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_436> AgradCdfLogBeta_fv_436;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_437> AgradCdfLogBeta_fv_437;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_438> AgradCdfLogBeta_fv_438;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_439> AgradCdfLogBeta_fv_439;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_440> AgradCdfLogBeta_fv_440;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_441> AgradCdfLogBeta_fv_441;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_442> AgradCdfLogBeta_fv_442;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_443> AgradCdfLogBeta_fv_443;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_444> AgradCdfLogBeta_fv_444;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_445> AgradCdfLogBeta_fv_445;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_446> AgradCdfLogBeta_fv_446;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fv_447> AgradCdfLogBeta_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_400, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_401, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_402, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_403, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_404, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_405, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_406, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_407, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_408, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_409, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_410, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_411, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_412, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_413, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_414, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_415, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_416, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_417, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_418, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_419, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_420, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_421, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_422, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_423, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_424, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_425, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_426, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_427, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_428, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_429, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_430, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_431, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_432, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_433, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_434, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_435, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_436, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_437, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_438, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_439, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_440, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_441, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_442, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_443, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_444, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_445, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_446, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fv_447, AgradCdfLogTestFixture, AgradCdfLogBeta_fv_447);
