#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_proportion/beta_proportion_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, double, empty, empty, empty> type_fd_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<double>, empty, empty, empty> type_fd_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, fvar<double>, empty, empty, empty> type_fd_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, double, empty, empty, empty> type_fd_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<double>, empty, empty, empty> type_fd_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, fvar<double>, empty, empty, empty> type_fd_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty> type_fd_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_447;

typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_400> AgradCdfLogBetaProportion_fd_400;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_401> AgradCdfLogBetaProportion_fd_401;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_402> AgradCdfLogBetaProportion_fd_402;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_403> AgradCdfLogBetaProportion_fd_403;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_404> AgradCdfLogBetaProportion_fd_404;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_405> AgradCdfLogBetaProportion_fd_405;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_406> AgradCdfLogBetaProportion_fd_406;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_407> AgradCdfLogBetaProportion_fd_407;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_408> AgradCdfLogBetaProportion_fd_408;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_409> AgradCdfLogBetaProportion_fd_409;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_410> AgradCdfLogBetaProportion_fd_410;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_411> AgradCdfLogBetaProportion_fd_411;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_412> AgradCdfLogBetaProportion_fd_412;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_413> AgradCdfLogBetaProportion_fd_413;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_414> AgradCdfLogBetaProportion_fd_414;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_415> AgradCdfLogBetaProportion_fd_415;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_416> AgradCdfLogBetaProportion_fd_416;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_417> AgradCdfLogBetaProportion_fd_417;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_418> AgradCdfLogBetaProportion_fd_418;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_419> AgradCdfLogBetaProportion_fd_419;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_420> AgradCdfLogBetaProportion_fd_420;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_421> AgradCdfLogBetaProportion_fd_421;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_422> AgradCdfLogBetaProportion_fd_422;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_423> AgradCdfLogBetaProportion_fd_423;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_424> AgradCdfLogBetaProportion_fd_424;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_425> AgradCdfLogBetaProportion_fd_425;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_426> AgradCdfLogBetaProportion_fd_426;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_427> AgradCdfLogBetaProportion_fd_427;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_428> AgradCdfLogBetaProportion_fd_428;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_429> AgradCdfLogBetaProportion_fd_429;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_430> AgradCdfLogBetaProportion_fd_430;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_431> AgradCdfLogBetaProportion_fd_431;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_432> AgradCdfLogBetaProportion_fd_432;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_433> AgradCdfLogBetaProportion_fd_433;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_434> AgradCdfLogBetaProportion_fd_434;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_435> AgradCdfLogBetaProportion_fd_435;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_436> AgradCdfLogBetaProportion_fd_436;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_437> AgradCdfLogBetaProportion_fd_437;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_438> AgradCdfLogBetaProportion_fd_438;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_439> AgradCdfLogBetaProportion_fd_439;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_440> AgradCdfLogBetaProportion_fd_440;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_441> AgradCdfLogBetaProportion_fd_441;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_442> AgradCdfLogBetaProportion_fd_442;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_443> AgradCdfLogBetaProportion_fd_443;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_444> AgradCdfLogBetaProportion_fd_444;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_445> AgradCdfLogBetaProportion_fd_445;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_446> AgradCdfLogBetaProportion_fd_446;
typedef boost::mpl::vector<AgradCdfLogBetaProportion, type_fd_447> AgradCdfLogBetaProportion_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_400, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_401, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_402, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_403, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_404, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_405, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_406, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_407, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_408, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_409, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_410, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_411, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_412, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_413, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_414, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_415, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_416, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_417, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_418, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_419, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_420, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_421, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_422, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_423, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_424, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_425, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_426, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_427, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_428, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_429, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_430, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_431, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_432, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_433, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_434, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_435, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_436, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_437, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_438, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_439, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_440, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_441, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_442, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_443, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_444, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_445, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_446, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaProportion_fd_447, AgradCdfLogTestFixture, AgradCdfLogBetaProportion_fd_447);
