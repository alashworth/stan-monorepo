#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_400> AgradCdfInvGamma_fv_400;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_401> AgradCdfInvGamma_fv_401;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_402> AgradCdfInvGamma_fv_402;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_403> AgradCdfInvGamma_fv_403;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_404> AgradCdfInvGamma_fv_404;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_405> AgradCdfInvGamma_fv_405;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_406> AgradCdfInvGamma_fv_406;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_407> AgradCdfInvGamma_fv_407;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_408> AgradCdfInvGamma_fv_408;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_409> AgradCdfInvGamma_fv_409;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_410> AgradCdfInvGamma_fv_410;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_411> AgradCdfInvGamma_fv_411;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_412> AgradCdfInvGamma_fv_412;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_413> AgradCdfInvGamma_fv_413;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_414> AgradCdfInvGamma_fv_414;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_415> AgradCdfInvGamma_fv_415;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_416> AgradCdfInvGamma_fv_416;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_417> AgradCdfInvGamma_fv_417;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_418> AgradCdfInvGamma_fv_418;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_419> AgradCdfInvGamma_fv_419;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_420> AgradCdfInvGamma_fv_420;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_421> AgradCdfInvGamma_fv_421;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_422> AgradCdfInvGamma_fv_422;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_423> AgradCdfInvGamma_fv_423;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_424> AgradCdfInvGamma_fv_424;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_425> AgradCdfInvGamma_fv_425;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_426> AgradCdfInvGamma_fv_426;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_427> AgradCdfInvGamma_fv_427;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_428> AgradCdfInvGamma_fv_428;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_429> AgradCdfInvGamma_fv_429;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_430> AgradCdfInvGamma_fv_430;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_431> AgradCdfInvGamma_fv_431;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_432> AgradCdfInvGamma_fv_432;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_433> AgradCdfInvGamma_fv_433;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_434> AgradCdfInvGamma_fv_434;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_435> AgradCdfInvGamma_fv_435;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_436> AgradCdfInvGamma_fv_436;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_437> AgradCdfInvGamma_fv_437;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_438> AgradCdfInvGamma_fv_438;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_439> AgradCdfInvGamma_fv_439;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_440> AgradCdfInvGamma_fv_440;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_441> AgradCdfInvGamma_fv_441;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_442> AgradCdfInvGamma_fv_442;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_443> AgradCdfInvGamma_fv_443;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_444> AgradCdfInvGamma_fv_444;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_445> AgradCdfInvGamma_fv_445;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_446> AgradCdfInvGamma_fv_446;
typedef boost::mpl::vector<AgradCdfInvGamma, type_fv_447> AgradCdfInvGamma_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_400, AgradCdfTestFixture, AgradCdfInvGamma_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_401, AgradCdfTestFixture, AgradCdfInvGamma_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_402, AgradCdfTestFixture, AgradCdfInvGamma_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_403, AgradCdfTestFixture, AgradCdfInvGamma_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_404, AgradCdfTestFixture, AgradCdfInvGamma_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_405, AgradCdfTestFixture, AgradCdfInvGamma_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_406, AgradCdfTestFixture, AgradCdfInvGamma_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_407, AgradCdfTestFixture, AgradCdfInvGamma_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_408, AgradCdfTestFixture, AgradCdfInvGamma_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_409, AgradCdfTestFixture, AgradCdfInvGamma_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_410, AgradCdfTestFixture, AgradCdfInvGamma_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_411, AgradCdfTestFixture, AgradCdfInvGamma_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_412, AgradCdfTestFixture, AgradCdfInvGamma_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_413, AgradCdfTestFixture, AgradCdfInvGamma_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_414, AgradCdfTestFixture, AgradCdfInvGamma_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_415, AgradCdfTestFixture, AgradCdfInvGamma_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_416, AgradCdfTestFixture, AgradCdfInvGamma_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_417, AgradCdfTestFixture, AgradCdfInvGamma_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_418, AgradCdfTestFixture, AgradCdfInvGamma_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_419, AgradCdfTestFixture, AgradCdfInvGamma_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_420, AgradCdfTestFixture, AgradCdfInvGamma_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_421, AgradCdfTestFixture, AgradCdfInvGamma_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_422, AgradCdfTestFixture, AgradCdfInvGamma_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_423, AgradCdfTestFixture, AgradCdfInvGamma_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_424, AgradCdfTestFixture, AgradCdfInvGamma_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_425, AgradCdfTestFixture, AgradCdfInvGamma_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_426, AgradCdfTestFixture, AgradCdfInvGamma_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_427, AgradCdfTestFixture, AgradCdfInvGamma_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_428, AgradCdfTestFixture, AgradCdfInvGamma_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_429, AgradCdfTestFixture, AgradCdfInvGamma_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_430, AgradCdfTestFixture, AgradCdfInvGamma_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_431, AgradCdfTestFixture, AgradCdfInvGamma_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_432, AgradCdfTestFixture, AgradCdfInvGamma_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_433, AgradCdfTestFixture, AgradCdfInvGamma_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_434, AgradCdfTestFixture, AgradCdfInvGamma_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_435, AgradCdfTestFixture, AgradCdfInvGamma_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_436, AgradCdfTestFixture, AgradCdfInvGamma_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_437, AgradCdfTestFixture, AgradCdfInvGamma_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_438, AgradCdfTestFixture, AgradCdfInvGamma_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_439, AgradCdfTestFixture, AgradCdfInvGamma_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_440, AgradCdfTestFixture, AgradCdfInvGamma_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_441, AgradCdfTestFixture, AgradCdfInvGamma_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_442, AgradCdfTestFixture, AgradCdfInvGamma_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_443, AgradCdfTestFixture, AgradCdfInvGamma_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_444, AgradCdfTestFixture, AgradCdfInvGamma_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_445, AgradCdfTestFixture, AgradCdfInvGamma_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_446, AgradCdfTestFixture, AgradCdfInvGamma_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfInvGamma_fv_447, AgradCdfTestFixture, AgradCdfInvGamma_fv_447);

