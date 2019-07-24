#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/double_exponential/double_exponential_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_400> AgradCdfLogDoubleExponential_fv_400;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_401> AgradCdfLogDoubleExponential_fv_401;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_402> AgradCdfLogDoubleExponential_fv_402;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_403> AgradCdfLogDoubleExponential_fv_403;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_404> AgradCdfLogDoubleExponential_fv_404;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_405> AgradCdfLogDoubleExponential_fv_405;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_406> AgradCdfLogDoubleExponential_fv_406;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_407> AgradCdfLogDoubleExponential_fv_407;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_408> AgradCdfLogDoubleExponential_fv_408;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_409> AgradCdfLogDoubleExponential_fv_409;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_410> AgradCdfLogDoubleExponential_fv_410;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_411> AgradCdfLogDoubleExponential_fv_411;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_412> AgradCdfLogDoubleExponential_fv_412;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_413> AgradCdfLogDoubleExponential_fv_413;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_414> AgradCdfLogDoubleExponential_fv_414;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_415> AgradCdfLogDoubleExponential_fv_415;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_416> AgradCdfLogDoubleExponential_fv_416;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_417> AgradCdfLogDoubleExponential_fv_417;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_418> AgradCdfLogDoubleExponential_fv_418;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_419> AgradCdfLogDoubleExponential_fv_419;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_420> AgradCdfLogDoubleExponential_fv_420;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_421> AgradCdfLogDoubleExponential_fv_421;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_422> AgradCdfLogDoubleExponential_fv_422;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_423> AgradCdfLogDoubleExponential_fv_423;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_424> AgradCdfLogDoubleExponential_fv_424;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_425> AgradCdfLogDoubleExponential_fv_425;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_426> AgradCdfLogDoubleExponential_fv_426;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_427> AgradCdfLogDoubleExponential_fv_427;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_428> AgradCdfLogDoubleExponential_fv_428;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_429> AgradCdfLogDoubleExponential_fv_429;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_430> AgradCdfLogDoubleExponential_fv_430;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_431> AgradCdfLogDoubleExponential_fv_431;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_432> AgradCdfLogDoubleExponential_fv_432;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_433> AgradCdfLogDoubleExponential_fv_433;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_434> AgradCdfLogDoubleExponential_fv_434;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_435> AgradCdfLogDoubleExponential_fv_435;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_436> AgradCdfLogDoubleExponential_fv_436;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_437> AgradCdfLogDoubleExponential_fv_437;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_438> AgradCdfLogDoubleExponential_fv_438;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_439> AgradCdfLogDoubleExponential_fv_439;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_440> AgradCdfLogDoubleExponential_fv_440;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_441> AgradCdfLogDoubleExponential_fv_441;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_442> AgradCdfLogDoubleExponential_fv_442;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_443> AgradCdfLogDoubleExponential_fv_443;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_444> AgradCdfLogDoubleExponential_fv_444;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_445> AgradCdfLogDoubleExponential_fv_445;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_446> AgradCdfLogDoubleExponential_fv_446;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_fv_447> AgradCdfLogDoubleExponential_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_400, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_401, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_402, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_403, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_404, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_405, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_406, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_407, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_408, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_409, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_410, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_411, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_412, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_413, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_414, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_415, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_416, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_417, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_418, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_419, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_420, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_421, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_422, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_423, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_424, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_425, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_426, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_427, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_428, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_429, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_430, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_431, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_432, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_433, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_434, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_435, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_436, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_437, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_438, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_439, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_440, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_441, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_442, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_443, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_444, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_445, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_446, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_fv_447, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_fv_447);
