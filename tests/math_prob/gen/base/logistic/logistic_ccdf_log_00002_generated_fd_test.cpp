#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <logistic/logistic_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_400> AgradCcdfLogLogistic_fd_400;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_401> AgradCcdfLogLogistic_fd_401;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_402> AgradCcdfLogLogistic_fd_402;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_403> AgradCcdfLogLogistic_fd_403;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_404> AgradCcdfLogLogistic_fd_404;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_405> AgradCcdfLogLogistic_fd_405;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_406> AgradCcdfLogLogistic_fd_406;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_407> AgradCcdfLogLogistic_fd_407;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_408> AgradCcdfLogLogistic_fd_408;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_409> AgradCcdfLogLogistic_fd_409;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_410> AgradCcdfLogLogistic_fd_410;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_411> AgradCcdfLogLogistic_fd_411;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_412> AgradCcdfLogLogistic_fd_412;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_413> AgradCcdfLogLogistic_fd_413;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_414> AgradCcdfLogLogistic_fd_414;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_415> AgradCcdfLogLogistic_fd_415;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_416> AgradCcdfLogLogistic_fd_416;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_417> AgradCcdfLogLogistic_fd_417;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_418> AgradCcdfLogLogistic_fd_418;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_419> AgradCcdfLogLogistic_fd_419;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_420> AgradCcdfLogLogistic_fd_420;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_421> AgradCcdfLogLogistic_fd_421;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_422> AgradCcdfLogLogistic_fd_422;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_423> AgradCcdfLogLogistic_fd_423;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_424> AgradCcdfLogLogistic_fd_424;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_425> AgradCcdfLogLogistic_fd_425;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_426> AgradCcdfLogLogistic_fd_426;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_427> AgradCcdfLogLogistic_fd_427;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_428> AgradCcdfLogLogistic_fd_428;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_429> AgradCcdfLogLogistic_fd_429;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_430> AgradCcdfLogLogistic_fd_430;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_431> AgradCcdfLogLogistic_fd_431;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_432> AgradCcdfLogLogistic_fd_432;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_433> AgradCcdfLogLogistic_fd_433;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_434> AgradCcdfLogLogistic_fd_434;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_435> AgradCcdfLogLogistic_fd_435;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_436> AgradCcdfLogLogistic_fd_436;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_437> AgradCcdfLogLogistic_fd_437;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_438> AgradCcdfLogLogistic_fd_438;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_439> AgradCcdfLogLogistic_fd_439;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_440> AgradCcdfLogLogistic_fd_440;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_441> AgradCcdfLogLogistic_fd_441;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_442> AgradCcdfLogLogistic_fd_442;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_443> AgradCcdfLogLogistic_fd_443;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_444> AgradCcdfLogLogistic_fd_444;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_445> AgradCcdfLogLogistic_fd_445;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_446> AgradCcdfLogLogistic_fd_446;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_447> AgradCcdfLogLogistic_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_400, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_401, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_402, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_403, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_404, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_405, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_406, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_407, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_408, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_409, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_410, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_411, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_412, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_413, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_414, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_415, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_416, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_417, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_418, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_419, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_420, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_421, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_422, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_423, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_424, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_425, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_426, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_427, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_428, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_429, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_430, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_431, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_432, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_433, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_434, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_435, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_436, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_437, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_438, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_439, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_440, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_441, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_442, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_443, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_444, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_445, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_446, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_447, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_447);
