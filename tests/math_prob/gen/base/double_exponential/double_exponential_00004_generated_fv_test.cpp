#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/double_exponential/double_exponential_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_400> AgradDistributionsDoubleExponential_fv_400;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_401> AgradDistributionsDoubleExponential_fv_401;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_402> AgradDistributionsDoubleExponential_fv_402;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_403> AgradDistributionsDoubleExponential_fv_403;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_404> AgradDistributionsDoubleExponential_fv_404;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_405> AgradDistributionsDoubleExponential_fv_405;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_406> AgradDistributionsDoubleExponential_fv_406;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_407> AgradDistributionsDoubleExponential_fv_407;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_408> AgradDistributionsDoubleExponential_fv_408;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_409> AgradDistributionsDoubleExponential_fv_409;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_410> AgradDistributionsDoubleExponential_fv_410;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_411> AgradDistributionsDoubleExponential_fv_411;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_412> AgradDistributionsDoubleExponential_fv_412;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_413> AgradDistributionsDoubleExponential_fv_413;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_414> AgradDistributionsDoubleExponential_fv_414;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_415> AgradDistributionsDoubleExponential_fv_415;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_416> AgradDistributionsDoubleExponential_fv_416;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_417> AgradDistributionsDoubleExponential_fv_417;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_418> AgradDistributionsDoubleExponential_fv_418;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_419> AgradDistributionsDoubleExponential_fv_419;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_420> AgradDistributionsDoubleExponential_fv_420;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_421> AgradDistributionsDoubleExponential_fv_421;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_422> AgradDistributionsDoubleExponential_fv_422;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_423> AgradDistributionsDoubleExponential_fv_423;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_424> AgradDistributionsDoubleExponential_fv_424;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_425> AgradDistributionsDoubleExponential_fv_425;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_426> AgradDistributionsDoubleExponential_fv_426;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_427> AgradDistributionsDoubleExponential_fv_427;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_428> AgradDistributionsDoubleExponential_fv_428;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_429> AgradDistributionsDoubleExponential_fv_429;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_430> AgradDistributionsDoubleExponential_fv_430;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_431> AgradDistributionsDoubleExponential_fv_431;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_432> AgradDistributionsDoubleExponential_fv_432;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_433> AgradDistributionsDoubleExponential_fv_433;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_434> AgradDistributionsDoubleExponential_fv_434;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_435> AgradDistributionsDoubleExponential_fv_435;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_436> AgradDistributionsDoubleExponential_fv_436;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_437> AgradDistributionsDoubleExponential_fv_437;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_438> AgradDistributionsDoubleExponential_fv_438;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_439> AgradDistributionsDoubleExponential_fv_439;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_440> AgradDistributionsDoubleExponential_fv_440;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_441> AgradDistributionsDoubleExponential_fv_441;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_442> AgradDistributionsDoubleExponential_fv_442;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_443> AgradDistributionsDoubleExponential_fv_443;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_444> AgradDistributionsDoubleExponential_fv_444;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_445> AgradDistributionsDoubleExponential_fv_445;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_446> AgradDistributionsDoubleExponential_fv_446;
typedef boost::mpl::vector<AgradDistributionsDoubleExponential, type_fv_447> AgradDistributionsDoubleExponential_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_400, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_401, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_402, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_403, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_404, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_405, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_406, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_407, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_408, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_409, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_410, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_411, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_412, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_413, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_414, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_415, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_416, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_417, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_418, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_419, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_420, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_421, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_422, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_423, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_424, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_425, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_426, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_427, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_428, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_429, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_430, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_431, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_432, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_433, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_434, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_435, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_436, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_437, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_438, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_439, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_440, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_441, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_442, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_443, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_444, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_445, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_446, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsDoubleExponential_fv_447, AgradDistributionTestFixture, AgradDistributionsDoubleExponential_fv_447);

