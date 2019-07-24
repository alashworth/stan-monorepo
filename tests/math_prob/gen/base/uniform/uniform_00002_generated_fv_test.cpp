#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <uniform/uniform_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_400> AgradDistributionsUniform_fv_400;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_401> AgradDistributionsUniform_fv_401;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_402> AgradDistributionsUniform_fv_402;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_403> AgradDistributionsUniform_fv_403;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_404> AgradDistributionsUniform_fv_404;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_405> AgradDistributionsUniform_fv_405;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_406> AgradDistributionsUniform_fv_406;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_407> AgradDistributionsUniform_fv_407;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_408> AgradDistributionsUniform_fv_408;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_409> AgradDistributionsUniform_fv_409;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_410> AgradDistributionsUniform_fv_410;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_411> AgradDistributionsUniform_fv_411;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_412> AgradDistributionsUniform_fv_412;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_413> AgradDistributionsUniform_fv_413;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_414> AgradDistributionsUniform_fv_414;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_415> AgradDistributionsUniform_fv_415;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_416> AgradDistributionsUniform_fv_416;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_417> AgradDistributionsUniform_fv_417;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_418> AgradDistributionsUniform_fv_418;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_419> AgradDistributionsUniform_fv_419;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_420> AgradDistributionsUniform_fv_420;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_421> AgradDistributionsUniform_fv_421;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_422> AgradDistributionsUniform_fv_422;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_423> AgradDistributionsUniform_fv_423;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_424> AgradDistributionsUniform_fv_424;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_425> AgradDistributionsUniform_fv_425;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_426> AgradDistributionsUniform_fv_426;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_427> AgradDistributionsUniform_fv_427;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_428> AgradDistributionsUniform_fv_428;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_429> AgradDistributionsUniform_fv_429;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_430> AgradDistributionsUniform_fv_430;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_431> AgradDistributionsUniform_fv_431;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_432> AgradDistributionsUniform_fv_432;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_433> AgradDistributionsUniform_fv_433;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_434> AgradDistributionsUniform_fv_434;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_435> AgradDistributionsUniform_fv_435;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_436> AgradDistributionsUniform_fv_436;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_437> AgradDistributionsUniform_fv_437;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_438> AgradDistributionsUniform_fv_438;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_439> AgradDistributionsUniform_fv_439;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_440> AgradDistributionsUniform_fv_440;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_441> AgradDistributionsUniform_fv_441;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_442> AgradDistributionsUniform_fv_442;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_443> AgradDistributionsUniform_fv_443;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_444> AgradDistributionsUniform_fv_444;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_445> AgradDistributionsUniform_fv_445;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_446> AgradDistributionsUniform_fv_446;
typedef boost::mpl::vector<AgradDistributionsUniform, type_fv_447> AgradDistributionsUniform_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_400, AgradDistributionTestFixture, AgradDistributionsUniform_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_401, AgradDistributionTestFixture, AgradDistributionsUniform_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_402, AgradDistributionTestFixture, AgradDistributionsUniform_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_403, AgradDistributionTestFixture, AgradDistributionsUniform_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_404, AgradDistributionTestFixture, AgradDistributionsUniform_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_405, AgradDistributionTestFixture, AgradDistributionsUniform_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_406, AgradDistributionTestFixture, AgradDistributionsUniform_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_407, AgradDistributionTestFixture, AgradDistributionsUniform_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_408, AgradDistributionTestFixture, AgradDistributionsUniform_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_409, AgradDistributionTestFixture, AgradDistributionsUniform_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_410, AgradDistributionTestFixture, AgradDistributionsUniform_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_411, AgradDistributionTestFixture, AgradDistributionsUniform_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_412, AgradDistributionTestFixture, AgradDistributionsUniform_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_413, AgradDistributionTestFixture, AgradDistributionsUniform_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_414, AgradDistributionTestFixture, AgradDistributionsUniform_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_415, AgradDistributionTestFixture, AgradDistributionsUniform_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_416, AgradDistributionTestFixture, AgradDistributionsUniform_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_417, AgradDistributionTestFixture, AgradDistributionsUniform_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_418, AgradDistributionTestFixture, AgradDistributionsUniform_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_419, AgradDistributionTestFixture, AgradDistributionsUniform_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_420, AgradDistributionTestFixture, AgradDistributionsUniform_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_421, AgradDistributionTestFixture, AgradDistributionsUniform_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_422, AgradDistributionTestFixture, AgradDistributionsUniform_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_423, AgradDistributionTestFixture, AgradDistributionsUniform_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_424, AgradDistributionTestFixture, AgradDistributionsUniform_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_425, AgradDistributionTestFixture, AgradDistributionsUniform_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_426, AgradDistributionTestFixture, AgradDistributionsUniform_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_427, AgradDistributionTestFixture, AgradDistributionsUniform_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_428, AgradDistributionTestFixture, AgradDistributionsUniform_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_429, AgradDistributionTestFixture, AgradDistributionsUniform_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_430, AgradDistributionTestFixture, AgradDistributionsUniform_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_431, AgradDistributionTestFixture, AgradDistributionsUniform_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_432, AgradDistributionTestFixture, AgradDistributionsUniform_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_433, AgradDistributionTestFixture, AgradDistributionsUniform_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_434, AgradDistributionTestFixture, AgradDistributionsUniform_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_435, AgradDistributionTestFixture, AgradDistributionsUniform_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_436, AgradDistributionTestFixture, AgradDistributionsUniform_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_437, AgradDistributionTestFixture, AgradDistributionsUniform_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_438, AgradDistributionTestFixture, AgradDistributionsUniform_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_439, AgradDistributionTestFixture, AgradDistributionsUniform_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_440, AgradDistributionTestFixture, AgradDistributionsUniform_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_441, AgradDistributionTestFixture, AgradDistributionsUniform_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_442, AgradDistributionTestFixture, AgradDistributionsUniform_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_443, AgradDistributionTestFixture, AgradDistributionsUniform_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_444, AgradDistributionTestFixture, AgradDistributionsUniform_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_445, AgradDistributionTestFixture, AgradDistributionsUniform_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_446, AgradDistributionTestFixture, AgradDistributionsUniform_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_fv_447, AgradDistributionTestFixture, AgradDistributionsUniform_fv_447);
