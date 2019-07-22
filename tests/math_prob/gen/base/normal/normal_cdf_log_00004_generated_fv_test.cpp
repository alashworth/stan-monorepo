#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/normal/normal_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_400> AgradCdfLogNormal_fv_400;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_401> AgradCdfLogNormal_fv_401;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_402> AgradCdfLogNormal_fv_402;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_403> AgradCdfLogNormal_fv_403;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_404> AgradCdfLogNormal_fv_404;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_405> AgradCdfLogNormal_fv_405;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_406> AgradCdfLogNormal_fv_406;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_407> AgradCdfLogNormal_fv_407;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_408> AgradCdfLogNormal_fv_408;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_409> AgradCdfLogNormal_fv_409;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_410> AgradCdfLogNormal_fv_410;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_411> AgradCdfLogNormal_fv_411;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_412> AgradCdfLogNormal_fv_412;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_413> AgradCdfLogNormal_fv_413;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_414> AgradCdfLogNormal_fv_414;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_415> AgradCdfLogNormal_fv_415;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_416> AgradCdfLogNormal_fv_416;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_417> AgradCdfLogNormal_fv_417;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_418> AgradCdfLogNormal_fv_418;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_419> AgradCdfLogNormal_fv_419;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_420> AgradCdfLogNormal_fv_420;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_421> AgradCdfLogNormal_fv_421;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_422> AgradCdfLogNormal_fv_422;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_423> AgradCdfLogNormal_fv_423;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_424> AgradCdfLogNormal_fv_424;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_425> AgradCdfLogNormal_fv_425;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_426> AgradCdfLogNormal_fv_426;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_427> AgradCdfLogNormal_fv_427;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_428> AgradCdfLogNormal_fv_428;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_429> AgradCdfLogNormal_fv_429;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_430> AgradCdfLogNormal_fv_430;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_431> AgradCdfLogNormal_fv_431;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_432> AgradCdfLogNormal_fv_432;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_433> AgradCdfLogNormal_fv_433;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_434> AgradCdfLogNormal_fv_434;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_435> AgradCdfLogNormal_fv_435;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_436> AgradCdfLogNormal_fv_436;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_437> AgradCdfLogNormal_fv_437;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_438> AgradCdfLogNormal_fv_438;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_439> AgradCdfLogNormal_fv_439;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_440> AgradCdfLogNormal_fv_440;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_441> AgradCdfLogNormal_fv_441;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_442> AgradCdfLogNormal_fv_442;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_443> AgradCdfLogNormal_fv_443;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_444> AgradCdfLogNormal_fv_444;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_445> AgradCdfLogNormal_fv_445;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_446> AgradCdfLogNormal_fv_446;
typedef boost::mpl::vector<AgradCdfLogNormal, type_fv_447> AgradCdfLogNormal_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_400, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_401, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_402, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_403, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_404, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_405, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_406, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_407, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_408, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_409, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_410, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_411, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_412, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_413, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_414, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_415, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_416, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_417, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_418, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_419, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_420, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_421, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_422, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_423, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_424, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_425, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_426, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_427, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_428, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_429, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_430, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_431, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_432, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_433, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_434, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_435, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_436, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_437, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_438, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_439, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_440, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_441, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_442, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_443, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_444, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_445, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_446, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_fv_447, AgradCdfLogTestFixture, AgradCdfLogNormal_fv_447);

