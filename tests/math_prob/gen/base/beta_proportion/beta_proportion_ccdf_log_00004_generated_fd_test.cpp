#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_proportion/beta_proportion_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_400> AgradCcdfLogBetaProportion_fd_400;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_401> AgradCcdfLogBetaProportion_fd_401;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_402> AgradCcdfLogBetaProportion_fd_402;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_403> AgradCcdfLogBetaProportion_fd_403;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_404> AgradCcdfLogBetaProportion_fd_404;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_405> AgradCcdfLogBetaProportion_fd_405;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_406> AgradCcdfLogBetaProportion_fd_406;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_407> AgradCcdfLogBetaProportion_fd_407;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_408> AgradCcdfLogBetaProportion_fd_408;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_409> AgradCcdfLogBetaProportion_fd_409;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_410> AgradCcdfLogBetaProportion_fd_410;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_411> AgradCcdfLogBetaProportion_fd_411;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_412> AgradCcdfLogBetaProportion_fd_412;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_413> AgradCcdfLogBetaProportion_fd_413;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_414> AgradCcdfLogBetaProportion_fd_414;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_415> AgradCcdfLogBetaProportion_fd_415;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_416> AgradCcdfLogBetaProportion_fd_416;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_417> AgradCcdfLogBetaProportion_fd_417;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_418> AgradCcdfLogBetaProportion_fd_418;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_419> AgradCcdfLogBetaProportion_fd_419;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_420> AgradCcdfLogBetaProportion_fd_420;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_421> AgradCcdfLogBetaProportion_fd_421;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_422> AgradCcdfLogBetaProportion_fd_422;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_423> AgradCcdfLogBetaProportion_fd_423;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_424> AgradCcdfLogBetaProportion_fd_424;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_425> AgradCcdfLogBetaProportion_fd_425;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_426> AgradCcdfLogBetaProportion_fd_426;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_427> AgradCcdfLogBetaProportion_fd_427;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_428> AgradCcdfLogBetaProportion_fd_428;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_429> AgradCcdfLogBetaProportion_fd_429;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_430> AgradCcdfLogBetaProportion_fd_430;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_431> AgradCcdfLogBetaProportion_fd_431;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_432> AgradCcdfLogBetaProportion_fd_432;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_433> AgradCcdfLogBetaProportion_fd_433;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_434> AgradCcdfLogBetaProportion_fd_434;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_435> AgradCcdfLogBetaProportion_fd_435;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_436> AgradCcdfLogBetaProportion_fd_436;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_437> AgradCcdfLogBetaProportion_fd_437;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_438> AgradCcdfLogBetaProportion_fd_438;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_439> AgradCcdfLogBetaProportion_fd_439;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_440> AgradCcdfLogBetaProportion_fd_440;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_441> AgradCcdfLogBetaProportion_fd_441;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_442> AgradCcdfLogBetaProportion_fd_442;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_443> AgradCcdfLogBetaProportion_fd_443;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_444> AgradCcdfLogBetaProportion_fd_444;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_445> AgradCcdfLogBetaProportion_fd_445;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_446> AgradCcdfLogBetaProportion_fd_446;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fd_447> AgradCcdfLogBetaProportion_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_400, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_401, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_402, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_403, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_404, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_405, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_406, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_407, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_408, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_409, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_410, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_411, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_412, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_413, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_414, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_415, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_416, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_417, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_418, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_419, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_420, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_421, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_422, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_423, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_424, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_425, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_426, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_427, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_428, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_429, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_430, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_431, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_432, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_433, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_434, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_435, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_436, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_437, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_438, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_439, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_440, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_441, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_442, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_443, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_444, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_445, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_446, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fd_447, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fd_447);

