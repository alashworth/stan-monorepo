#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/double_exponential/double_exponential_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_400> AgradCcdfLogDoubleExponential_fv_400;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_401> AgradCcdfLogDoubleExponential_fv_401;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_402> AgradCcdfLogDoubleExponential_fv_402;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_403> AgradCcdfLogDoubleExponential_fv_403;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_404> AgradCcdfLogDoubleExponential_fv_404;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_405> AgradCcdfLogDoubleExponential_fv_405;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_406> AgradCcdfLogDoubleExponential_fv_406;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_407> AgradCcdfLogDoubleExponential_fv_407;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_408> AgradCcdfLogDoubleExponential_fv_408;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_409> AgradCcdfLogDoubleExponential_fv_409;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_410> AgradCcdfLogDoubleExponential_fv_410;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_411> AgradCcdfLogDoubleExponential_fv_411;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_412> AgradCcdfLogDoubleExponential_fv_412;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_413> AgradCcdfLogDoubleExponential_fv_413;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_414> AgradCcdfLogDoubleExponential_fv_414;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_415> AgradCcdfLogDoubleExponential_fv_415;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_416> AgradCcdfLogDoubleExponential_fv_416;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_417> AgradCcdfLogDoubleExponential_fv_417;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_418> AgradCcdfLogDoubleExponential_fv_418;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_419> AgradCcdfLogDoubleExponential_fv_419;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_420> AgradCcdfLogDoubleExponential_fv_420;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_421> AgradCcdfLogDoubleExponential_fv_421;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_422> AgradCcdfLogDoubleExponential_fv_422;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_423> AgradCcdfLogDoubleExponential_fv_423;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_424> AgradCcdfLogDoubleExponential_fv_424;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_425> AgradCcdfLogDoubleExponential_fv_425;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_426> AgradCcdfLogDoubleExponential_fv_426;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_427> AgradCcdfLogDoubleExponential_fv_427;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_428> AgradCcdfLogDoubleExponential_fv_428;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_429> AgradCcdfLogDoubleExponential_fv_429;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_430> AgradCcdfLogDoubleExponential_fv_430;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_431> AgradCcdfLogDoubleExponential_fv_431;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_432> AgradCcdfLogDoubleExponential_fv_432;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_433> AgradCcdfLogDoubleExponential_fv_433;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_434> AgradCcdfLogDoubleExponential_fv_434;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_435> AgradCcdfLogDoubleExponential_fv_435;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_436> AgradCcdfLogDoubleExponential_fv_436;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_437> AgradCcdfLogDoubleExponential_fv_437;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_438> AgradCcdfLogDoubleExponential_fv_438;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_439> AgradCcdfLogDoubleExponential_fv_439;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_440> AgradCcdfLogDoubleExponential_fv_440;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_441> AgradCcdfLogDoubleExponential_fv_441;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_442> AgradCcdfLogDoubleExponential_fv_442;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_443> AgradCcdfLogDoubleExponential_fv_443;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_444> AgradCcdfLogDoubleExponential_fv_444;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_445> AgradCcdfLogDoubleExponential_fv_445;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_446> AgradCcdfLogDoubleExponential_fv_446;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_fv_447> AgradCcdfLogDoubleExponential_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_400, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_401, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_402, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_403, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_404, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_405, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_406, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_407, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_408, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_409, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_410, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_411, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_412, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_413, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_414, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_415, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_416, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_417, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_418, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_419, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_420, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_421, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_422, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_423, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_424, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_425, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_426, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_427, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_428, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_429, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_430, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_431, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_432, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_433, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_434, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_435, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_436, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_437, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_438, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_439, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_440, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_441, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_442, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_443, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_444, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_445, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_446, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_fv_447, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_fv_447);

