#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <frechet/frechet_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_400> AgradCdfLogFrechet_fd_400;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_401> AgradCdfLogFrechet_fd_401;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_402> AgradCdfLogFrechet_fd_402;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_403> AgradCdfLogFrechet_fd_403;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_404> AgradCdfLogFrechet_fd_404;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_405> AgradCdfLogFrechet_fd_405;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_406> AgradCdfLogFrechet_fd_406;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_407> AgradCdfLogFrechet_fd_407;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_408> AgradCdfLogFrechet_fd_408;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_409> AgradCdfLogFrechet_fd_409;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_410> AgradCdfLogFrechet_fd_410;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_411> AgradCdfLogFrechet_fd_411;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_412> AgradCdfLogFrechet_fd_412;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_413> AgradCdfLogFrechet_fd_413;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_414> AgradCdfLogFrechet_fd_414;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_415> AgradCdfLogFrechet_fd_415;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_416> AgradCdfLogFrechet_fd_416;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_417> AgradCdfLogFrechet_fd_417;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_418> AgradCdfLogFrechet_fd_418;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_419> AgradCdfLogFrechet_fd_419;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_420> AgradCdfLogFrechet_fd_420;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_421> AgradCdfLogFrechet_fd_421;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_422> AgradCdfLogFrechet_fd_422;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_423> AgradCdfLogFrechet_fd_423;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_424> AgradCdfLogFrechet_fd_424;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_425> AgradCdfLogFrechet_fd_425;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_426> AgradCdfLogFrechet_fd_426;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_427> AgradCdfLogFrechet_fd_427;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_428> AgradCdfLogFrechet_fd_428;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_429> AgradCdfLogFrechet_fd_429;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_430> AgradCdfLogFrechet_fd_430;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_431> AgradCdfLogFrechet_fd_431;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_432> AgradCdfLogFrechet_fd_432;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_433> AgradCdfLogFrechet_fd_433;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_434> AgradCdfLogFrechet_fd_434;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_435> AgradCdfLogFrechet_fd_435;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_436> AgradCdfLogFrechet_fd_436;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_437> AgradCdfLogFrechet_fd_437;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_438> AgradCdfLogFrechet_fd_438;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_439> AgradCdfLogFrechet_fd_439;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_440> AgradCdfLogFrechet_fd_440;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_441> AgradCdfLogFrechet_fd_441;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_442> AgradCdfLogFrechet_fd_442;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_443> AgradCdfLogFrechet_fd_443;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_444> AgradCdfLogFrechet_fd_444;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_445> AgradCdfLogFrechet_fd_445;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_446> AgradCdfLogFrechet_fd_446;
typedef boost::mpl::vector<AgradCdfLogFrechet, type_fd_447> AgradCdfLogFrechet_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_400, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_401, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_402, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_403, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_404, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_405, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_406, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_407, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_408, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_409, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_410, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_411, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_412, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_413, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_414, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_415, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_416, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_417, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_418, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_419, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_420, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_421, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_422, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_423, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_424, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_425, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_426, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_427, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_428, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_429, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_430, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_431, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_432, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_433, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_434, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_435, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_436, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_437, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_438, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_439, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_440, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_441, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_442, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_443, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_444, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_445, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_446, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogFrechet_fd_447, AgradCdfLogTestFixture, AgradCdfLogFrechet_fd_447);

