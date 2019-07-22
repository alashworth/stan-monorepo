#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, double, empty, empty, empty> type_ffv_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<double>, empty, empty, empty> type_ffv_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, fvar<fvar<var> >, empty, empty, empty> type_ffv_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, double, empty, empty, empty> type_ffv_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<double>, empty, empty, empty> type_ffv_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_447;

typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_400> AgradCdfLogistic_ffv_400;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_401> AgradCdfLogistic_ffv_401;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_402> AgradCdfLogistic_ffv_402;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_403> AgradCdfLogistic_ffv_403;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_404> AgradCdfLogistic_ffv_404;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_405> AgradCdfLogistic_ffv_405;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_406> AgradCdfLogistic_ffv_406;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_407> AgradCdfLogistic_ffv_407;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_408> AgradCdfLogistic_ffv_408;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_409> AgradCdfLogistic_ffv_409;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_410> AgradCdfLogistic_ffv_410;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_411> AgradCdfLogistic_ffv_411;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_412> AgradCdfLogistic_ffv_412;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_413> AgradCdfLogistic_ffv_413;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_414> AgradCdfLogistic_ffv_414;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_415> AgradCdfLogistic_ffv_415;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_416> AgradCdfLogistic_ffv_416;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_417> AgradCdfLogistic_ffv_417;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_418> AgradCdfLogistic_ffv_418;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_419> AgradCdfLogistic_ffv_419;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_420> AgradCdfLogistic_ffv_420;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_421> AgradCdfLogistic_ffv_421;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_422> AgradCdfLogistic_ffv_422;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_423> AgradCdfLogistic_ffv_423;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_424> AgradCdfLogistic_ffv_424;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_425> AgradCdfLogistic_ffv_425;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_426> AgradCdfLogistic_ffv_426;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_427> AgradCdfLogistic_ffv_427;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_428> AgradCdfLogistic_ffv_428;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_429> AgradCdfLogistic_ffv_429;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_430> AgradCdfLogistic_ffv_430;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_431> AgradCdfLogistic_ffv_431;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_432> AgradCdfLogistic_ffv_432;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_433> AgradCdfLogistic_ffv_433;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_434> AgradCdfLogistic_ffv_434;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_435> AgradCdfLogistic_ffv_435;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_436> AgradCdfLogistic_ffv_436;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_437> AgradCdfLogistic_ffv_437;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_438> AgradCdfLogistic_ffv_438;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_439> AgradCdfLogistic_ffv_439;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_440> AgradCdfLogistic_ffv_440;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_441> AgradCdfLogistic_ffv_441;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_442> AgradCdfLogistic_ffv_442;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_443> AgradCdfLogistic_ffv_443;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_444> AgradCdfLogistic_ffv_444;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_445> AgradCdfLogistic_ffv_445;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_446> AgradCdfLogistic_ffv_446;
typedef boost::mpl::vector<AgradCdfLogistic, type_ffv_447> AgradCdfLogistic_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_400, AgradCdfTestFixture, AgradCdfLogistic_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_401, AgradCdfTestFixture, AgradCdfLogistic_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_402, AgradCdfTestFixture, AgradCdfLogistic_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_403, AgradCdfTestFixture, AgradCdfLogistic_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_404, AgradCdfTestFixture, AgradCdfLogistic_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_405, AgradCdfTestFixture, AgradCdfLogistic_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_406, AgradCdfTestFixture, AgradCdfLogistic_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_407, AgradCdfTestFixture, AgradCdfLogistic_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_408, AgradCdfTestFixture, AgradCdfLogistic_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_409, AgradCdfTestFixture, AgradCdfLogistic_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_410, AgradCdfTestFixture, AgradCdfLogistic_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_411, AgradCdfTestFixture, AgradCdfLogistic_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_412, AgradCdfTestFixture, AgradCdfLogistic_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_413, AgradCdfTestFixture, AgradCdfLogistic_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_414, AgradCdfTestFixture, AgradCdfLogistic_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_415, AgradCdfTestFixture, AgradCdfLogistic_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_416, AgradCdfTestFixture, AgradCdfLogistic_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_417, AgradCdfTestFixture, AgradCdfLogistic_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_418, AgradCdfTestFixture, AgradCdfLogistic_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_419, AgradCdfTestFixture, AgradCdfLogistic_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_420, AgradCdfTestFixture, AgradCdfLogistic_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_421, AgradCdfTestFixture, AgradCdfLogistic_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_422, AgradCdfTestFixture, AgradCdfLogistic_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_423, AgradCdfTestFixture, AgradCdfLogistic_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_424, AgradCdfTestFixture, AgradCdfLogistic_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_425, AgradCdfTestFixture, AgradCdfLogistic_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_426, AgradCdfTestFixture, AgradCdfLogistic_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_427, AgradCdfTestFixture, AgradCdfLogistic_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_428, AgradCdfTestFixture, AgradCdfLogistic_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_429, AgradCdfTestFixture, AgradCdfLogistic_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_430, AgradCdfTestFixture, AgradCdfLogistic_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_431, AgradCdfTestFixture, AgradCdfLogistic_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_432, AgradCdfTestFixture, AgradCdfLogistic_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_433, AgradCdfTestFixture, AgradCdfLogistic_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_434, AgradCdfTestFixture, AgradCdfLogistic_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_435, AgradCdfTestFixture, AgradCdfLogistic_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_436, AgradCdfTestFixture, AgradCdfLogistic_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_437, AgradCdfTestFixture, AgradCdfLogistic_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_438, AgradCdfTestFixture, AgradCdfLogistic_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_439, AgradCdfTestFixture, AgradCdfLogistic_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_440, AgradCdfTestFixture, AgradCdfLogistic_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_441, AgradCdfTestFixture, AgradCdfLogistic_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_442, AgradCdfTestFixture, AgradCdfLogistic_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_443, AgradCdfTestFixture, AgradCdfLogistic_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_444, AgradCdfTestFixture, AgradCdfLogistic_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_445, AgradCdfTestFixture, AgradCdfLogistic_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_446, AgradCdfTestFixture, AgradCdfLogistic_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_ffv_447, AgradCdfTestFixture, AgradCdfLogistic_ffv_447);

