#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <weibull/weibull_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_400> AgradCdfLogWeibull_fd_400;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_401> AgradCdfLogWeibull_fd_401;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_402> AgradCdfLogWeibull_fd_402;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_403> AgradCdfLogWeibull_fd_403;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_404> AgradCdfLogWeibull_fd_404;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_405> AgradCdfLogWeibull_fd_405;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_406> AgradCdfLogWeibull_fd_406;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_407> AgradCdfLogWeibull_fd_407;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_408> AgradCdfLogWeibull_fd_408;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_409> AgradCdfLogWeibull_fd_409;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_410> AgradCdfLogWeibull_fd_410;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_411> AgradCdfLogWeibull_fd_411;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_412> AgradCdfLogWeibull_fd_412;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_413> AgradCdfLogWeibull_fd_413;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_414> AgradCdfLogWeibull_fd_414;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_415> AgradCdfLogWeibull_fd_415;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_416> AgradCdfLogWeibull_fd_416;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_417> AgradCdfLogWeibull_fd_417;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_418> AgradCdfLogWeibull_fd_418;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_419> AgradCdfLogWeibull_fd_419;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_420> AgradCdfLogWeibull_fd_420;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_421> AgradCdfLogWeibull_fd_421;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_422> AgradCdfLogWeibull_fd_422;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_423> AgradCdfLogWeibull_fd_423;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_424> AgradCdfLogWeibull_fd_424;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_425> AgradCdfLogWeibull_fd_425;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_426> AgradCdfLogWeibull_fd_426;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_427> AgradCdfLogWeibull_fd_427;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_428> AgradCdfLogWeibull_fd_428;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_429> AgradCdfLogWeibull_fd_429;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_430> AgradCdfLogWeibull_fd_430;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_431> AgradCdfLogWeibull_fd_431;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_432> AgradCdfLogWeibull_fd_432;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_433> AgradCdfLogWeibull_fd_433;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_434> AgradCdfLogWeibull_fd_434;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_435> AgradCdfLogWeibull_fd_435;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_436> AgradCdfLogWeibull_fd_436;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_437> AgradCdfLogWeibull_fd_437;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_438> AgradCdfLogWeibull_fd_438;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_439> AgradCdfLogWeibull_fd_439;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_440> AgradCdfLogWeibull_fd_440;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_441> AgradCdfLogWeibull_fd_441;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_442> AgradCdfLogWeibull_fd_442;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_443> AgradCdfLogWeibull_fd_443;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_444> AgradCdfLogWeibull_fd_444;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_445> AgradCdfLogWeibull_fd_445;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_446> AgradCdfLogWeibull_fd_446;
typedef boost::mpl::vector<AgradCdfLogWeibull, type_fd_447> AgradCdfLogWeibull_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_400, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_401, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_402, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_403, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_404, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_405, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_406, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_407, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_408, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_409, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_410, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_411, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_412, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_413, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_414, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_415, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_416, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_417, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_418, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_419, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_420, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_421, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_422, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_423, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_424, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_425, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_426, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_427, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_428, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_429, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_430, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_431, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_432, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_433, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_434, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_435, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_436, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_437, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_438, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_439, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_440, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_441, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_442, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_443, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_444, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_445, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_446, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogWeibull_fd_447, AgradCdfLogTestFixture, AgradCdfLogWeibull_fd_447);
