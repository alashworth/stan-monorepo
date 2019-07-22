#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <frechet/frechet_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_400> AgradCdfLogFrechet_ffv_400;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_401> AgradCdfLogFrechet_ffv_401;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_402> AgradCdfLogFrechet_ffv_402;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_403> AgradCdfLogFrechet_ffv_403;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_404> AgradCdfLogFrechet_ffv_404;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_405> AgradCdfLogFrechet_ffv_405;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_406> AgradCdfLogFrechet_ffv_406;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_407> AgradCdfLogFrechet_ffv_407;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_408> AgradCdfLogFrechet_ffv_408;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_409> AgradCdfLogFrechet_ffv_409;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_410> AgradCdfLogFrechet_ffv_410;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_411> AgradCdfLogFrechet_ffv_411;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_412> AgradCdfLogFrechet_ffv_412;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_413> AgradCdfLogFrechet_ffv_413;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_414> AgradCdfLogFrechet_ffv_414;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_415> AgradCdfLogFrechet_ffv_415;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_416> AgradCdfLogFrechet_ffv_416;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_417> AgradCdfLogFrechet_ffv_417;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_418> AgradCdfLogFrechet_ffv_418;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_419> AgradCdfLogFrechet_ffv_419;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_420> AgradCdfLogFrechet_ffv_420;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_421> AgradCdfLogFrechet_ffv_421;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_422> AgradCdfLogFrechet_ffv_422;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_423> AgradCdfLogFrechet_ffv_423;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_424> AgradCdfLogFrechet_ffv_424;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_425> AgradCdfLogFrechet_ffv_425;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_426> AgradCdfLogFrechet_ffv_426;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_427> AgradCdfLogFrechet_ffv_427;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_428> AgradCdfLogFrechet_ffv_428;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_429> AgradCdfLogFrechet_ffv_429;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_430> AgradCdfLogFrechet_ffv_430;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_431> AgradCdfLogFrechet_ffv_431;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_432> AgradCdfLogFrechet_ffv_432;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_433> AgradCdfLogFrechet_ffv_433;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_434> AgradCdfLogFrechet_ffv_434;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_435> AgradCdfLogFrechet_ffv_435;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_436> AgradCdfLogFrechet_ffv_436;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_437> AgradCdfLogFrechet_ffv_437;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_438> AgradCdfLogFrechet_ffv_438;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_439> AgradCdfLogFrechet_ffv_439;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_440> AgradCdfLogFrechet_ffv_440;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_441> AgradCdfLogFrechet_ffv_441;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_442> AgradCdfLogFrechet_ffv_442;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_443> AgradCdfLogFrechet_ffv_443;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_444> AgradCdfLogFrechet_ffv_444;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_445> AgradCdfLogFrechet_ffv_445;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_446> AgradCdfLogFrechet_ffv_446;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_ffv_447> AgradCdfLogFrechet_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_400, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_401, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_402, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_403, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_404, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_405, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_406, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_407, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_408, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_409, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_410, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_411, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_412, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_413, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_414, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_415, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_416, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_417, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_418, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_419, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_420, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_421, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_422, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_423, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_424, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_425, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_426, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_427, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_428, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_429, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_430, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_431, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_432, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_433, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_434, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_435, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_436, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_437, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_438, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_439, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_440, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_441, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_442, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_443, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_444, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_445, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_446, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_ffv_447, AgradCdfLogTestFixture, AgradCdfLogFrechet_ffv_447);

