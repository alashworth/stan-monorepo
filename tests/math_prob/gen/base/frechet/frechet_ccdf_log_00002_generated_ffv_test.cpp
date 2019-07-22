#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <frechet/frechet_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_400> AgradCcdfLogFrechet_ffv_400;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_401> AgradCcdfLogFrechet_ffv_401;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_402> AgradCcdfLogFrechet_ffv_402;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_403> AgradCcdfLogFrechet_ffv_403;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_404> AgradCcdfLogFrechet_ffv_404;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_405> AgradCcdfLogFrechet_ffv_405;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_406> AgradCcdfLogFrechet_ffv_406;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_407> AgradCcdfLogFrechet_ffv_407;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_408> AgradCcdfLogFrechet_ffv_408;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_409> AgradCcdfLogFrechet_ffv_409;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_410> AgradCcdfLogFrechet_ffv_410;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_411> AgradCcdfLogFrechet_ffv_411;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_412> AgradCcdfLogFrechet_ffv_412;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_413> AgradCcdfLogFrechet_ffv_413;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_414> AgradCcdfLogFrechet_ffv_414;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_415> AgradCcdfLogFrechet_ffv_415;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_416> AgradCcdfLogFrechet_ffv_416;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_417> AgradCcdfLogFrechet_ffv_417;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_418> AgradCcdfLogFrechet_ffv_418;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_419> AgradCcdfLogFrechet_ffv_419;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_420> AgradCcdfLogFrechet_ffv_420;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_421> AgradCcdfLogFrechet_ffv_421;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_422> AgradCcdfLogFrechet_ffv_422;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_423> AgradCcdfLogFrechet_ffv_423;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_424> AgradCcdfLogFrechet_ffv_424;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_425> AgradCcdfLogFrechet_ffv_425;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_426> AgradCcdfLogFrechet_ffv_426;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_427> AgradCcdfLogFrechet_ffv_427;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_428> AgradCcdfLogFrechet_ffv_428;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_429> AgradCcdfLogFrechet_ffv_429;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_430> AgradCcdfLogFrechet_ffv_430;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_431> AgradCcdfLogFrechet_ffv_431;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_432> AgradCcdfLogFrechet_ffv_432;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_433> AgradCcdfLogFrechet_ffv_433;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_434> AgradCcdfLogFrechet_ffv_434;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_435> AgradCcdfLogFrechet_ffv_435;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_436> AgradCcdfLogFrechet_ffv_436;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_437> AgradCcdfLogFrechet_ffv_437;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_438> AgradCcdfLogFrechet_ffv_438;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_439> AgradCcdfLogFrechet_ffv_439;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_440> AgradCcdfLogFrechet_ffv_440;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_441> AgradCcdfLogFrechet_ffv_441;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_442> AgradCcdfLogFrechet_ffv_442;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_443> AgradCcdfLogFrechet_ffv_443;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_444> AgradCcdfLogFrechet_ffv_444;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_445> AgradCcdfLogFrechet_ffv_445;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_446> AgradCcdfLogFrechet_ffv_446;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffv_447> AgradCcdfLogFrechet_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_400, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_401, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_402, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_403, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_404, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_405, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_406, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_407, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_408, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_409, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_410, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_411, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_412, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_413, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_414, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_415, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_416, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_417, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_418, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_419, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_420, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_421, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_422, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_423, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_424, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_425, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_426, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_427, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_428, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_429, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_430, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_431, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_432, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_433, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_434, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_435, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_436, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_437, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_438, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_439, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_440, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_441, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_442, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_443, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_444, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_445, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_446, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffv_447, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffv_447);

