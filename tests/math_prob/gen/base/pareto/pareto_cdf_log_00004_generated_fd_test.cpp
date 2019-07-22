#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto/pareto_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_400> AgradCdfLogPareto_fd_400;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_401> AgradCdfLogPareto_fd_401;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_402> AgradCdfLogPareto_fd_402;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_403> AgradCdfLogPareto_fd_403;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_404> AgradCdfLogPareto_fd_404;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_405> AgradCdfLogPareto_fd_405;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_406> AgradCdfLogPareto_fd_406;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_407> AgradCdfLogPareto_fd_407;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_408> AgradCdfLogPareto_fd_408;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_409> AgradCdfLogPareto_fd_409;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_410> AgradCdfLogPareto_fd_410;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_411> AgradCdfLogPareto_fd_411;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_412> AgradCdfLogPareto_fd_412;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_413> AgradCdfLogPareto_fd_413;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_414> AgradCdfLogPareto_fd_414;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_415> AgradCdfLogPareto_fd_415;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_416> AgradCdfLogPareto_fd_416;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_417> AgradCdfLogPareto_fd_417;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_418> AgradCdfLogPareto_fd_418;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_419> AgradCdfLogPareto_fd_419;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_420> AgradCdfLogPareto_fd_420;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_421> AgradCdfLogPareto_fd_421;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_422> AgradCdfLogPareto_fd_422;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_423> AgradCdfLogPareto_fd_423;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_424> AgradCdfLogPareto_fd_424;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_425> AgradCdfLogPareto_fd_425;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_426> AgradCdfLogPareto_fd_426;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_427> AgradCdfLogPareto_fd_427;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_428> AgradCdfLogPareto_fd_428;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_429> AgradCdfLogPareto_fd_429;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_430> AgradCdfLogPareto_fd_430;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_431> AgradCdfLogPareto_fd_431;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_432> AgradCdfLogPareto_fd_432;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_433> AgradCdfLogPareto_fd_433;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_434> AgradCdfLogPareto_fd_434;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_435> AgradCdfLogPareto_fd_435;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_436> AgradCdfLogPareto_fd_436;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_437> AgradCdfLogPareto_fd_437;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_438> AgradCdfLogPareto_fd_438;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_439> AgradCdfLogPareto_fd_439;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_440> AgradCdfLogPareto_fd_440;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_441> AgradCdfLogPareto_fd_441;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_442> AgradCdfLogPareto_fd_442;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_443> AgradCdfLogPareto_fd_443;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_444> AgradCdfLogPareto_fd_444;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_445> AgradCdfLogPareto_fd_445;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_446> AgradCdfLogPareto_fd_446;
typedef boost::mpl::vector<AgradCdfLogPareto, type_fd_447> AgradCdfLogPareto_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_400, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_401, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_402, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_403, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_404, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_405, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_406, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_407, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_408, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_409, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_410, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_411, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_412, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_413, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_414, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_415, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_416, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_417, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_418, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_419, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_420, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_421, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_422, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_423, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_424, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_425, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_426, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_427, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_428, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_429, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_430, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_431, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_432, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_433, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_434, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_435, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_436, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_437, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_438, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_439, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_440, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_441, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_442, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_443, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_444, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_445, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_446, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogPareto_fd_447, AgradCdfLogTestFixture, AgradCdfLogPareto_fd_447);

