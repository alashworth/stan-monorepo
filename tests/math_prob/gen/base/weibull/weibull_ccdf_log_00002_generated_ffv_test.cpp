#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <weibull/weibull_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_400> AgradCcdfLogWeibull_ffv_400;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_401> AgradCcdfLogWeibull_ffv_401;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_402> AgradCcdfLogWeibull_ffv_402;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_403> AgradCcdfLogWeibull_ffv_403;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_404> AgradCcdfLogWeibull_ffv_404;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_405> AgradCcdfLogWeibull_ffv_405;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_406> AgradCcdfLogWeibull_ffv_406;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_407> AgradCcdfLogWeibull_ffv_407;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_408> AgradCcdfLogWeibull_ffv_408;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_409> AgradCcdfLogWeibull_ffv_409;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_410> AgradCcdfLogWeibull_ffv_410;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_411> AgradCcdfLogWeibull_ffv_411;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_412> AgradCcdfLogWeibull_ffv_412;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_413> AgradCcdfLogWeibull_ffv_413;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_414> AgradCcdfLogWeibull_ffv_414;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_415> AgradCcdfLogWeibull_ffv_415;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_416> AgradCcdfLogWeibull_ffv_416;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_417> AgradCcdfLogWeibull_ffv_417;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_418> AgradCcdfLogWeibull_ffv_418;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_419> AgradCcdfLogWeibull_ffv_419;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_420> AgradCcdfLogWeibull_ffv_420;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_421> AgradCcdfLogWeibull_ffv_421;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_422> AgradCcdfLogWeibull_ffv_422;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_423> AgradCcdfLogWeibull_ffv_423;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_424> AgradCcdfLogWeibull_ffv_424;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_425> AgradCcdfLogWeibull_ffv_425;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_426> AgradCcdfLogWeibull_ffv_426;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_427> AgradCcdfLogWeibull_ffv_427;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_428> AgradCcdfLogWeibull_ffv_428;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_429> AgradCcdfLogWeibull_ffv_429;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_430> AgradCcdfLogWeibull_ffv_430;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_431> AgradCcdfLogWeibull_ffv_431;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_432> AgradCcdfLogWeibull_ffv_432;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_433> AgradCcdfLogWeibull_ffv_433;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_434> AgradCcdfLogWeibull_ffv_434;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_435> AgradCcdfLogWeibull_ffv_435;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_436> AgradCcdfLogWeibull_ffv_436;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_437> AgradCcdfLogWeibull_ffv_437;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_438> AgradCcdfLogWeibull_ffv_438;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_439> AgradCcdfLogWeibull_ffv_439;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_440> AgradCcdfLogWeibull_ffv_440;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_441> AgradCcdfLogWeibull_ffv_441;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_442> AgradCcdfLogWeibull_ffv_442;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_443> AgradCcdfLogWeibull_ffv_443;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_444> AgradCcdfLogWeibull_ffv_444;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_445> AgradCcdfLogWeibull_ffv_445;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_446> AgradCcdfLogWeibull_ffv_446;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_ffv_447> AgradCcdfLogWeibull_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_400, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_401, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_402, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_403, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_404, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_405, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_406, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_407, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_408, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_409, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_410, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_411, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_412, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_413, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_414, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_415, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_416, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_417, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_418, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_419, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_420, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_421, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_422, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_423, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_424, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_425, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_426, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_427, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_428, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_429, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_430, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_431, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_432, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_433, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_434, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_435, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_436, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_437, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_438, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_439, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_440, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_441, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_442, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_443, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_444, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_445, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_446, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_ffv_447, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_ffv_447);

