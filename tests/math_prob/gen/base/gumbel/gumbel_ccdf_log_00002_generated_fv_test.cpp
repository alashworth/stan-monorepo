#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <gumbel/gumbel_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_400> AgradCcdfLogGumbel_fv_400;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_401> AgradCcdfLogGumbel_fv_401;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_402> AgradCcdfLogGumbel_fv_402;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_403> AgradCcdfLogGumbel_fv_403;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_404> AgradCcdfLogGumbel_fv_404;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_405> AgradCcdfLogGumbel_fv_405;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_406> AgradCcdfLogGumbel_fv_406;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_407> AgradCcdfLogGumbel_fv_407;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_408> AgradCcdfLogGumbel_fv_408;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_409> AgradCcdfLogGumbel_fv_409;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_410> AgradCcdfLogGumbel_fv_410;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_411> AgradCcdfLogGumbel_fv_411;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_412> AgradCcdfLogGumbel_fv_412;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_413> AgradCcdfLogGumbel_fv_413;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_414> AgradCcdfLogGumbel_fv_414;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_415> AgradCcdfLogGumbel_fv_415;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_416> AgradCcdfLogGumbel_fv_416;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_417> AgradCcdfLogGumbel_fv_417;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_418> AgradCcdfLogGumbel_fv_418;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_419> AgradCcdfLogGumbel_fv_419;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_420> AgradCcdfLogGumbel_fv_420;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_421> AgradCcdfLogGumbel_fv_421;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_422> AgradCcdfLogGumbel_fv_422;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_423> AgradCcdfLogGumbel_fv_423;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_424> AgradCcdfLogGumbel_fv_424;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_425> AgradCcdfLogGumbel_fv_425;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_426> AgradCcdfLogGumbel_fv_426;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_427> AgradCcdfLogGumbel_fv_427;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_428> AgradCcdfLogGumbel_fv_428;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_429> AgradCcdfLogGumbel_fv_429;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_430> AgradCcdfLogGumbel_fv_430;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_431> AgradCcdfLogGumbel_fv_431;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_432> AgradCcdfLogGumbel_fv_432;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_433> AgradCcdfLogGumbel_fv_433;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_434> AgradCcdfLogGumbel_fv_434;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_435> AgradCcdfLogGumbel_fv_435;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_436> AgradCcdfLogGumbel_fv_436;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_437> AgradCcdfLogGumbel_fv_437;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_438> AgradCcdfLogGumbel_fv_438;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_439> AgradCcdfLogGumbel_fv_439;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_440> AgradCcdfLogGumbel_fv_440;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_441> AgradCcdfLogGumbel_fv_441;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_442> AgradCcdfLogGumbel_fv_442;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_443> AgradCcdfLogGumbel_fv_443;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_444> AgradCcdfLogGumbel_fv_444;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_445> AgradCcdfLogGumbel_fv_445;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_446> AgradCcdfLogGumbel_fv_446;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_fv_447> AgradCcdfLogGumbel_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_400, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_401, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_402, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_403, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_404, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_405, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_406, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_407, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_408, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_409, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_410, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_411, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_412, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_413, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_414, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_415, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_416, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_417, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_418, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_419, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_420, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_421, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_422, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_423, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_424, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_425, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_426, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_427, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_428, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_429, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_430, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_431, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_432, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_433, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_434, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_435, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_436, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_437, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_438, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_439, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_440, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_441, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_442, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_443, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_444, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_445, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_446, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_fv_447, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_fv_447);

