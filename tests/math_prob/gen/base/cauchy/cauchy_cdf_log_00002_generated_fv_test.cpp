#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <cauchy/cauchy_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_400> AgradCdfLogCauchy_fv_400;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_401> AgradCdfLogCauchy_fv_401;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_402> AgradCdfLogCauchy_fv_402;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_403> AgradCdfLogCauchy_fv_403;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_404> AgradCdfLogCauchy_fv_404;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_405> AgradCdfLogCauchy_fv_405;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_406> AgradCdfLogCauchy_fv_406;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_407> AgradCdfLogCauchy_fv_407;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_408> AgradCdfLogCauchy_fv_408;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_409> AgradCdfLogCauchy_fv_409;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_410> AgradCdfLogCauchy_fv_410;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_411> AgradCdfLogCauchy_fv_411;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_412> AgradCdfLogCauchy_fv_412;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_413> AgradCdfLogCauchy_fv_413;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_414> AgradCdfLogCauchy_fv_414;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_415> AgradCdfLogCauchy_fv_415;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_416> AgradCdfLogCauchy_fv_416;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_417> AgradCdfLogCauchy_fv_417;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_418> AgradCdfLogCauchy_fv_418;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_419> AgradCdfLogCauchy_fv_419;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_420> AgradCdfLogCauchy_fv_420;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_421> AgradCdfLogCauchy_fv_421;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_422> AgradCdfLogCauchy_fv_422;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_423> AgradCdfLogCauchy_fv_423;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_424> AgradCdfLogCauchy_fv_424;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_425> AgradCdfLogCauchy_fv_425;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_426> AgradCdfLogCauchy_fv_426;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_427> AgradCdfLogCauchy_fv_427;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_428> AgradCdfLogCauchy_fv_428;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_429> AgradCdfLogCauchy_fv_429;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_430> AgradCdfLogCauchy_fv_430;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_431> AgradCdfLogCauchy_fv_431;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_432> AgradCdfLogCauchy_fv_432;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_433> AgradCdfLogCauchy_fv_433;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_434> AgradCdfLogCauchy_fv_434;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_435> AgradCdfLogCauchy_fv_435;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_436> AgradCdfLogCauchy_fv_436;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_437> AgradCdfLogCauchy_fv_437;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_438> AgradCdfLogCauchy_fv_438;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_439> AgradCdfLogCauchy_fv_439;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_440> AgradCdfLogCauchy_fv_440;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_441> AgradCdfLogCauchy_fv_441;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_442> AgradCdfLogCauchy_fv_442;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_443> AgradCdfLogCauchy_fv_443;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_444> AgradCdfLogCauchy_fv_444;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_445> AgradCdfLogCauchy_fv_445;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_446> AgradCdfLogCauchy_fv_446;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_fv_447> AgradCdfLogCauchy_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_400, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_401, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_402, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_403, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_404, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_405, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_406, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_407, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_408, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_409, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_410, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_411, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_412, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_413, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_414, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_415, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_416, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_417, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_418, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_419, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_420, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_421, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_422, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_423, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_424, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_425, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_426, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_427, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_428, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_429, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_430, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_431, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_432, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_433, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_434, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_435, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_436, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_437, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_438, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_439, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_440, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_441, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_442, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_443, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_444, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_445, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_446, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_fv_447, AgradCdfLogTestFixture, AgradCdfLogCauchy_fv_447);

