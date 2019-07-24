#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gumbel/gumbel_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_400> AgradCdfGumbel_ffv_400;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_401> AgradCdfGumbel_ffv_401;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_402> AgradCdfGumbel_ffv_402;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_403> AgradCdfGumbel_ffv_403;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_404> AgradCdfGumbel_ffv_404;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_405> AgradCdfGumbel_ffv_405;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_406> AgradCdfGumbel_ffv_406;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_407> AgradCdfGumbel_ffv_407;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_408> AgradCdfGumbel_ffv_408;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_409> AgradCdfGumbel_ffv_409;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_410> AgradCdfGumbel_ffv_410;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_411> AgradCdfGumbel_ffv_411;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_412> AgradCdfGumbel_ffv_412;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_413> AgradCdfGumbel_ffv_413;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_414> AgradCdfGumbel_ffv_414;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_415> AgradCdfGumbel_ffv_415;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_416> AgradCdfGumbel_ffv_416;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_417> AgradCdfGumbel_ffv_417;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_418> AgradCdfGumbel_ffv_418;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_419> AgradCdfGumbel_ffv_419;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_420> AgradCdfGumbel_ffv_420;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_421> AgradCdfGumbel_ffv_421;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_422> AgradCdfGumbel_ffv_422;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_423> AgradCdfGumbel_ffv_423;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_424> AgradCdfGumbel_ffv_424;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_425> AgradCdfGumbel_ffv_425;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_426> AgradCdfGumbel_ffv_426;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_427> AgradCdfGumbel_ffv_427;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_428> AgradCdfGumbel_ffv_428;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_429> AgradCdfGumbel_ffv_429;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_430> AgradCdfGumbel_ffv_430;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_431> AgradCdfGumbel_ffv_431;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_432> AgradCdfGumbel_ffv_432;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_433> AgradCdfGumbel_ffv_433;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_434> AgradCdfGumbel_ffv_434;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_435> AgradCdfGumbel_ffv_435;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_436> AgradCdfGumbel_ffv_436;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_437> AgradCdfGumbel_ffv_437;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_438> AgradCdfGumbel_ffv_438;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_439> AgradCdfGumbel_ffv_439;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_440> AgradCdfGumbel_ffv_440;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_441> AgradCdfGumbel_ffv_441;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_442> AgradCdfGumbel_ffv_442;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_443> AgradCdfGumbel_ffv_443;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_444> AgradCdfGumbel_ffv_444;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_445> AgradCdfGumbel_ffv_445;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_446> AgradCdfGumbel_ffv_446;
typedef boost::mpl::vector<AgradCdfGumbel, type_ffv_447> AgradCdfGumbel_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_400, AgradCdfTestFixture, AgradCdfGumbel_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_401, AgradCdfTestFixture, AgradCdfGumbel_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_402, AgradCdfTestFixture, AgradCdfGumbel_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_403, AgradCdfTestFixture, AgradCdfGumbel_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_404, AgradCdfTestFixture, AgradCdfGumbel_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_405, AgradCdfTestFixture, AgradCdfGumbel_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_406, AgradCdfTestFixture, AgradCdfGumbel_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_407, AgradCdfTestFixture, AgradCdfGumbel_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_408, AgradCdfTestFixture, AgradCdfGumbel_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_409, AgradCdfTestFixture, AgradCdfGumbel_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_410, AgradCdfTestFixture, AgradCdfGumbel_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_411, AgradCdfTestFixture, AgradCdfGumbel_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_412, AgradCdfTestFixture, AgradCdfGumbel_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_413, AgradCdfTestFixture, AgradCdfGumbel_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_414, AgradCdfTestFixture, AgradCdfGumbel_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_415, AgradCdfTestFixture, AgradCdfGumbel_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_416, AgradCdfTestFixture, AgradCdfGumbel_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_417, AgradCdfTestFixture, AgradCdfGumbel_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_418, AgradCdfTestFixture, AgradCdfGumbel_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_419, AgradCdfTestFixture, AgradCdfGumbel_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_420, AgradCdfTestFixture, AgradCdfGumbel_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_421, AgradCdfTestFixture, AgradCdfGumbel_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_422, AgradCdfTestFixture, AgradCdfGumbel_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_423, AgradCdfTestFixture, AgradCdfGumbel_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_424, AgradCdfTestFixture, AgradCdfGumbel_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_425, AgradCdfTestFixture, AgradCdfGumbel_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_426, AgradCdfTestFixture, AgradCdfGumbel_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_427, AgradCdfTestFixture, AgradCdfGumbel_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_428, AgradCdfTestFixture, AgradCdfGumbel_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_429, AgradCdfTestFixture, AgradCdfGumbel_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_430, AgradCdfTestFixture, AgradCdfGumbel_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_431, AgradCdfTestFixture, AgradCdfGumbel_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_432, AgradCdfTestFixture, AgradCdfGumbel_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_433, AgradCdfTestFixture, AgradCdfGumbel_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_434, AgradCdfTestFixture, AgradCdfGumbel_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_435, AgradCdfTestFixture, AgradCdfGumbel_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_436, AgradCdfTestFixture, AgradCdfGumbel_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_437, AgradCdfTestFixture, AgradCdfGumbel_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_438, AgradCdfTestFixture, AgradCdfGumbel_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_439, AgradCdfTestFixture, AgradCdfGumbel_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_440, AgradCdfTestFixture, AgradCdfGumbel_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_441, AgradCdfTestFixture, AgradCdfGumbel_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_442, AgradCdfTestFixture, AgradCdfGumbel_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_443, AgradCdfTestFixture, AgradCdfGumbel_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_444, AgradCdfTestFixture, AgradCdfGumbel_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_445, AgradCdfTestFixture, AgradCdfGumbel_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_446, AgradCdfTestFixture, AgradCdfGumbel_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfGumbel_ffv_447, AgradCdfTestFixture, AgradCdfGumbel_ffv_447);
