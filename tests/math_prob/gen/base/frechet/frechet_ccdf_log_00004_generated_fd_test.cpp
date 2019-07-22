#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/frechet/frechet_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_400> AgradCcdfLogFrechet_fd_400;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_401> AgradCcdfLogFrechet_fd_401;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_402> AgradCcdfLogFrechet_fd_402;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_403> AgradCcdfLogFrechet_fd_403;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_404> AgradCcdfLogFrechet_fd_404;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_405> AgradCcdfLogFrechet_fd_405;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_406> AgradCcdfLogFrechet_fd_406;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_407> AgradCcdfLogFrechet_fd_407;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_408> AgradCcdfLogFrechet_fd_408;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_409> AgradCcdfLogFrechet_fd_409;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_410> AgradCcdfLogFrechet_fd_410;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_411> AgradCcdfLogFrechet_fd_411;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_412> AgradCcdfLogFrechet_fd_412;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_413> AgradCcdfLogFrechet_fd_413;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_414> AgradCcdfLogFrechet_fd_414;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_415> AgradCcdfLogFrechet_fd_415;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_416> AgradCcdfLogFrechet_fd_416;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_417> AgradCcdfLogFrechet_fd_417;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_418> AgradCcdfLogFrechet_fd_418;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_419> AgradCcdfLogFrechet_fd_419;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_420> AgradCcdfLogFrechet_fd_420;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_421> AgradCcdfLogFrechet_fd_421;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_422> AgradCcdfLogFrechet_fd_422;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_423> AgradCcdfLogFrechet_fd_423;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_424> AgradCcdfLogFrechet_fd_424;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_425> AgradCcdfLogFrechet_fd_425;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_426> AgradCcdfLogFrechet_fd_426;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_427> AgradCcdfLogFrechet_fd_427;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_428> AgradCcdfLogFrechet_fd_428;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_429> AgradCcdfLogFrechet_fd_429;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_430> AgradCcdfLogFrechet_fd_430;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_431> AgradCcdfLogFrechet_fd_431;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_432> AgradCcdfLogFrechet_fd_432;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_433> AgradCcdfLogFrechet_fd_433;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_434> AgradCcdfLogFrechet_fd_434;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_435> AgradCcdfLogFrechet_fd_435;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_436> AgradCcdfLogFrechet_fd_436;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_437> AgradCcdfLogFrechet_fd_437;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_438> AgradCcdfLogFrechet_fd_438;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_439> AgradCcdfLogFrechet_fd_439;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_440> AgradCcdfLogFrechet_fd_440;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_441> AgradCcdfLogFrechet_fd_441;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_442> AgradCcdfLogFrechet_fd_442;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_443> AgradCcdfLogFrechet_fd_443;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_444> AgradCcdfLogFrechet_fd_444;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_445> AgradCcdfLogFrechet_fd_445;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_446> AgradCcdfLogFrechet_fd_446;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_fd_447> AgradCcdfLogFrechet_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_400, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_401, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_402, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_403, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_404, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_405, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_406, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_407, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_408, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_409, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_410, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_411, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_412, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_413, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_414, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_415, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_416, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_417, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_418, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_419, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_420, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_421, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_422, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_423, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_424, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_425, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_426, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_427, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_428, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_429, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_430, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_431, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_432, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_433, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_434, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_435, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_436, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_437, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_438, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_439, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_440, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_441, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_442, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_443, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_444, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_445, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_446, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_fd_447, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_fd_447);

