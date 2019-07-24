#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_400> AgradCcdfLogGamma_fv_400;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_401> AgradCcdfLogGamma_fv_401;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_402> AgradCcdfLogGamma_fv_402;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_403> AgradCcdfLogGamma_fv_403;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_404> AgradCcdfLogGamma_fv_404;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_405> AgradCcdfLogGamma_fv_405;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_406> AgradCcdfLogGamma_fv_406;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_407> AgradCcdfLogGamma_fv_407;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_408> AgradCcdfLogGamma_fv_408;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_409> AgradCcdfLogGamma_fv_409;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_410> AgradCcdfLogGamma_fv_410;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_411> AgradCcdfLogGamma_fv_411;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_412> AgradCcdfLogGamma_fv_412;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_413> AgradCcdfLogGamma_fv_413;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_414> AgradCcdfLogGamma_fv_414;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_415> AgradCcdfLogGamma_fv_415;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_416> AgradCcdfLogGamma_fv_416;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_417> AgradCcdfLogGamma_fv_417;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_418> AgradCcdfLogGamma_fv_418;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_419> AgradCcdfLogGamma_fv_419;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_420> AgradCcdfLogGamma_fv_420;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_421> AgradCcdfLogGamma_fv_421;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_422> AgradCcdfLogGamma_fv_422;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_423> AgradCcdfLogGamma_fv_423;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_424> AgradCcdfLogGamma_fv_424;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_425> AgradCcdfLogGamma_fv_425;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_426> AgradCcdfLogGamma_fv_426;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_427> AgradCcdfLogGamma_fv_427;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_428> AgradCcdfLogGamma_fv_428;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_429> AgradCcdfLogGamma_fv_429;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_430> AgradCcdfLogGamma_fv_430;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_431> AgradCcdfLogGamma_fv_431;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_432> AgradCcdfLogGamma_fv_432;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_433> AgradCcdfLogGamma_fv_433;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_434> AgradCcdfLogGamma_fv_434;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_435> AgradCcdfLogGamma_fv_435;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_436> AgradCcdfLogGamma_fv_436;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_437> AgradCcdfLogGamma_fv_437;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_438> AgradCcdfLogGamma_fv_438;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_439> AgradCcdfLogGamma_fv_439;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_440> AgradCcdfLogGamma_fv_440;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_441> AgradCcdfLogGamma_fv_441;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_442> AgradCcdfLogGamma_fv_442;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_443> AgradCcdfLogGamma_fv_443;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_444> AgradCcdfLogGamma_fv_444;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_445> AgradCcdfLogGamma_fv_445;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_446> AgradCcdfLogGamma_fv_446;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_447> AgradCcdfLogGamma_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_400, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_401, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_402, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_403, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_404, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_405, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_406, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_407, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_408, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_409, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_410, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_411, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_412, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_413, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_414, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_415, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_416, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_417, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_418, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_419, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_420, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_421, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_422, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_423, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_424, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_425, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_426, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_427, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_428, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_429, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_430, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_431, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_432, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_433, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_434, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_435, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_436, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_437, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_438, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_439, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_440, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_441, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_442, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_443, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_444, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_445, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_446, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_447, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_447);
