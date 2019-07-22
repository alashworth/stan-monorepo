#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_400> AgradDistributionsBeta_fv_400;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_401> AgradDistributionsBeta_fv_401;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_402> AgradDistributionsBeta_fv_402;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_403> AgradDistributionsBeta_fv_403;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_404> AgradDistributionsBeta_fv_404;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_405> AgradDistributionsBeta_fv_405;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_406> AgradDistributionsBeta_fv_406;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_407> AgradDistributionsBeta_fv_407;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_408> AgradDistributionsBeta_fv_408;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_409> AgradDistributionsBeta_fv_409;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_410> AgradDistributionsBeta_fv_410;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_411> AgradDistributionsBeta_fv_411;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_412> AgradDistributionsBeta_fv_412;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_413> AgradDistributionsBeta_fv_413;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_414> AgradDistributionsBeta_fv_414;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_415> AgradDistributionsBeta_fv_415;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_416> AgradDistributionsBeta_fv_416;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_417> AgradDistributionsBeta_fv_417;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_418> AgradDistributionsBeta_fv_418;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_419> AgradDistributionsBeta_fv_419;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_420> AgradDistributionsBeta_fv_420;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_421> AgradDistributionsBeta_fv_421;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_422> AgradDistributionsBeta_fv_422;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_423> AgradDistributionsBeta_fv_423;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_424> AgradDistributionsBeta_fv_424;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_425> AgradDistributionsBeta_fv_425;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_426> AgradDistributionsBeta_fv_426;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_427> AgradDistributionsBeta_fv_427;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_428> AgradDistributionsBeta_fv_428;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_429> AgradDistributionsBeta_fv_429;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_430> AgradDistributionsBeta_fv_430;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_431> AgradDistributionsBeta_fv_431;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_432> AgradDistributionsBeta_fv_432;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_433> AgradDistributionsBeta_fv_433;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_434> AgradDistributionsBeta_fv_434;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_435> AgradDistributionsBeta_fv_435;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_436> AgradDistributionsBeta_fv_436;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_437> AgradDistributionsBeta_fv_437;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_438> AgradDistributionsBeta_fv_438;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_439> AgradDistributionsBeta_fv_439;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_440> AgradDistributionsBeta_fv_440;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_441> AgradDistributionsBeta_fv_441;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_442> AgradDistributionsBeta_fv_442;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_443> AgradDistributionsBeta_fv_443;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_444> AgradDistributionsBeta_fv_444;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_445> AgradDistributionsBeta_fv_445;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_446> AgradDistributionsBeta_fv_446;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fv_447> AgradDistributionsBeta_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_400, AgradDistributionTestFixture, AgradDistributionsBeta_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_401, AgradDistributionTestFixture, AgradDistributionsBeta_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_402, AgradDistributionTestFixture, AgradDistributionsBeta_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_403, AgradDistributionTestFixture, AgradDistributionsBeta_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_404, AgradDistributionTestFixture, AgradDistributionsBeta_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_405, AgradDistributionTestFixture, AgradDistributionsBeta_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_406, AgradDistributionTestFixture, AgradDistributionsBeta_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_407, AgradDistributionTestFixture, AgradDistributionsBeta_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_408, AgradDistributionTestFixture, AgradDistributionsBeta_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_409, AgradDistributionTestFixture, AgradDistributionsBeta_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_410, AgradDistributionTestFixture, AgradDistributionsBeta_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_411, AgradDistributionTestFixture, AgradDistributionsBeta_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_412, AgradDistributionTestFixture, AgradDistributionsBeta_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_413, AgradDistributionTestFixture, AgradDistributionsBeta_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_414, AgradDistributionTestFixture, AgradDistributionsBeta_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_415, AgradDistributionTestFixture, AgradDistributionsBeta_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_416, AgradDistributionTestFixture, AgradDistributionsBeta_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_417, AgradDistributionTestFixture, AgradDistributionsBeta_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_418, AgradDistributionTestFixture, AgradDistributionsBeta_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_419, AgradDistributionTestFixture, AgradDistributionsBeta_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_420, AgradDistributionTestFixture, AgradDistributionsBeta_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_421, AgradDistributionTestFixture, AgradDistributionsBeta_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_422, AgradDistributionTestFixture, AgradDistributionsBeta_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_423, AgradDistributionTestFixture, AgradDistributionsBeta_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_424, AgradDistributionTestFixture, AgradDistributionsBeta_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_425, AgradDistributionTestFixture, AgradDistributionsBeta_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_426, AgradDistributionTestFixture, AgradDistributionsBeta_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_427, AgradDistributionTestFixture, AgradDistributionsBeta_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_428, AgradDistributionTestFixture, AgradDistributionsBeta_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_429, AgradDistributionTestFixture, AgradDistributionsBeta_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_430, AgradDistributionTestFixture, AgradDistributionsBeta_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_431, AgradDistributionTestFixture, AgradDistributionsBeta_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_432, AgradDistributionTestFixture, AgradDistributionsBeta_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_433, AgradDistributionTestFixture, AgradDistributionsBeta_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_434, AgradDistributionTestFixture, AgradDistributionsBeta_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_435, AgradDistributionTestFixture, AgradDistributionsBeta_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_436, AgradDistributionTestFixture, AgradDistributionsBeta_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_437, AgradDistributionTestFixture, AgradDistributionsBeta_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_438, AgradDistributionTestFixture, AgradDistributionsBeta_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_439, AgradDistributionTestFixture, AgradDistributionsBeta_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_440, AgradDistributionTestFixture, AgradDistributionsBeta_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_441, AgradDistributionTestFixture, AgradDistributionsBeta_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_442, AgradDistributionTestFixture, AgradDistributionsBeta_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_443, AgradDistributionTestFixture, AgradDistributionsBeta_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_444, AgradDistributionTestFixture, AgradDistributionsBeta_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_445, AgradDistributionTestFixture, AgradDistributionsBeta_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_446, AgradDistributionTestFixture, AgradDistributionsBeta_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fv_447, AgradDistributionTestFixture, AgradDistributionsBeta_fv_447);

