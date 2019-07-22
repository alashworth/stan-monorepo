#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <weibull/weibull_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_400> AgradCcdfLogWeibull_fv_400;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_401> AgradCcdfLogWeibull_fv_401;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_402> AgradCcdfLogWeibull_fv_402;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_403> AgradCcdfLogWeibull_fv_403;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_404> AgradCcdfLogWeibull_fv_404;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_405> AgradCcdfLogWeibull_fv_405;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_406> AgradCcdfLogWeibull_fv_406;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_407> AgradCcdfLogWeibull_fv_407;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_408> AgradCcdfLogWeibull_fv_408;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_409> AgradCcdfLogWeibull_fv_409;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_410> AgradCcdfLogWeibull_fv_410;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_411> AgradCcdfLogWeibull_fv_411;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_412> AgradCcdfLogWeibull_fv_412;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_413> AgradCcdfLogWeibull_fv_413;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_414> AgradCcdfLogWeibull_fv_414;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_415> AgradCcdfLogWeibull_fv_415;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_416> AgradCcdfLogWeibull_fv_416;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_417> AgradCcdfLogWeibull_fv_417;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_418> AgradCcdfLogWeibull_fv_418;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_419> AgradCcdfLogWeibull_fv_419;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_420> AgradCcdfLogWeibull_fv_420;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_421> AgradCcdfLogWeibull_fv_421;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_422> AgradCcdfLogWeibull_fv_422;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_423> AgradCcdfLogWeibull_fv_423;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_424> AgradCcdfLogWeibull_fv_424;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_425> AgradCcdfLogWeibull_fv_425;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_426> AgradCcdfLogWeibull_fv_426;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_427> AgradCcdfLogWeibull_fv_427;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_428> AgradCcdfLogWeibull_fv_428;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_429> AgradCcdfLogWeibull_fv_429;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_430> AgradCcdfLogWeibull_fv_430;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_431> AgradCcdfLogWeibull_fv_431;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_432> AgradCcdfLogWeibull_fv_432;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_433> AgradCcdfLogWeibull_fv_433;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_434> AgradCcdfLogWeibull_fv_434;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_435> AgradCcdfLogWeibull_fv_435;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_436> AgradCcdfLogWeibull_fv_436;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_437> AgradCcdfLogWeibull_fv_437;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_438> AgradCcdfLogWeibull_fv_438;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_439> AgradCcdfLogWeibull_fv_439;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_440> AgradCcdfLogWeibull_fv_440;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_441> AgradCcdfLogWeibull_fv_441;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_442> AgradCcdfLogWeibull_fv_442;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_443> AgradCcdfLogWeibull_fv_443;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_444> AgradCcdfLogWeibull_fv_444;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_445> AgradCcdfLogWeibull_fv_445;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_446> AgradCcdfLogWeibull_fv_446;
typedef boost::mpl::vector<AgradCcdfLogWeibull, type_fv_447> AgradCcdfLogWeibull_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_400, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_401, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_402, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_403, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_404, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_405, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_406, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_407, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_408, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_409, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_410, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_411, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_412, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_413, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_414, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_415, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_416, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_417, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_418, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_419, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_420, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_421, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_422, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_423, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_424, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_425, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_426, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_427, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_428, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_429, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_430, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_431, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_432, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_433, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_434, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_435, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_436, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_437, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_438, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_439, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_440, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_441, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_442, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_443, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_444, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_445, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_446, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogWeibull_fv_447, AgradCcdfLogTestFixture, AgradCcdfLogWeibull_fv_447);

