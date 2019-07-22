#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <pareto/pareto_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_400> AgradCcdfLogPareto_ffv_400;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_401> AgradCcdfLogPareto_ffv_401;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_402> AgradCcdfLogPareto_ffv_402;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_403> AgradCcdfLogPareto_ffv_403;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_404> AgradCcdfLogPareto_ffv_404;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_405> AgradCcdfLogPareto_ffv_405;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_406> AgradCcdfLogPareto_ffv_406;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_407> AgradCcdfLogPareto_ffv_407;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_408> AgradCcdfLogPareto_ffv_408;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_409> AgradCcdfLogPareto_ffv_409;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_410> AgradCcdfLogPareto_ffv_410;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_411> AgradCcdfLogPareto_ffv_411;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_412> AgradCcdfLogPareto_ffv_412;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_413> AgradCcdfLogPareto_ffv_413;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_414> AgradCcdfLogPareto_ffv_414;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_415> AgradCcdfLogPareto_ffv_415;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_416> AgradCcdfLogPareto_ffv_416;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_417> AgradCcdfLogPareto_ffv_417;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_418> AgradCcdfLogPareto_ffv_418;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_419> AgradCcdfLogPareto_ffv_419;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_420> AgradCcdfLogPareto_ffv_420;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_421> AgradCcdfLogPareto_ffv_421;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_422> AgradCcdfLogPareto_ffv_422;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_423> AgradCcdfLogPareto_ffv_423;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_424> AgradCcdfLogPareto_ffv_424;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_425> AgradCcdfLogPareto_ffv_425;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_426> AgradCcdfLogPareto_ffv_426;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_427> AgradCcdfLogPareto_ffv_427;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_428> AgradCcdfLogPareto_ffv_428;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_429> AgradCcdfLogPareto_ffv_429;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_430> AgradCcdfLogPareto_ffv_430;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_431> AgradCcdfLogPareto_ffv_431;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_432> AgradCcdfLogPareto_ffv_432;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_433> AgradCcdfLogPareto_ffv_433;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_434> AgradCcdfLogPareto_ffv_434;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_435> AgradCcdfLogPareto_ffv_435;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_436> AgradCcdfLogPareto_ffv_436;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_437> AgradCcdfLogPareto_ffv_437;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_438> AgradCcdfLogPareto_ffv_438;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_439> AgradCcdfLogPareto_ffv_439;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_440> AgradCcdfLogPareto_ffv_440;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_441> AgradCcdfLogPareto_ffv_441;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_442> AgradCcdfLogPareto_ffv_442;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_443> AgradCcdfLogPareto_ffv_443;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_444> AgradCcdfLogPareto_ffv_444;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_445> AgradCcdfLogPareto_ffv_445;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_446> AgradCcdfLogPareto_ffv_446;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_ffv_447> AgradCcdfLogPareto_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_400, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_401, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_402, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_403, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_404, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_405, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_406, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_407, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_408, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_409, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_410, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_411, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_412, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_413, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_414, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_415, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_416, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_417, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_418, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_419, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_420, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_421, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_422, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_423, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_424, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_425, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_426, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_427, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_428, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_429, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_430, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_431, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_432, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_433, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_434, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_435, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_436, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_437, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_438, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_439, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_440, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_441, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_442, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_443, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_444, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_445, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_446, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_ffv_447, AgradCcdfLogTestFixture, AgradCcdfLogPareto_ffv_447);

