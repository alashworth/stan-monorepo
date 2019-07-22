#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <gumbel/gumbel_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_400> AgradCdfLogGumbel_fd_400;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_401> AgradCdfLogGumbel_fd_401;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_402> AgradCdfLogGumbel_fd_402;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_403> AgradCdfLogGumbel_fd_403;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_404> AgradCdfLogGumbel_fd_404;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_405> AgradCdfLogGumbel_fd_405;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_406> AgradCdfLogGumbel_fd_406;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_407> AgradCdfLogGumbel_fd_407;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_408> AgradCdfLogGumbel_fd_408;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_409> AgradCdfLogGumbel_fd_409;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_410> AgradCdfLogGumbel_fd_410;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_411> AgradCdfLogGumbel_fd_411;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_412> AgradCdfLogGumbel_fd_412;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_413> AgradCdfLogGumbel_fd_413;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_414> AgradCdfLogGumbel_fd_414;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_415> AgradCdfLogGumbel_fd_415;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_416> AgradCdfLogGumbel_fd_416;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_417> AgradCdfLogGumbel_fd_417;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_418> AgradCdfLogGumbel_fd_418;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_419> AgradCdfLogGumbel_fd_419;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_420> AgradCdfLogGumbel_fd_420;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_421> AgradCdfLogGumbel_fd_421;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_422> AgradCdfLogGumbel_fd_422;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_423> AgradCdfLogGumbel_fd_423;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_424> AgradCdfLogGumbel_fd_424;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_425> AgradCdfLogGumbel_fd_425;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_426> AgradCdfLogGumbel_fd_426;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_427> AgradCdfLogGumbel_fd_427;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_428> AgradCdfLogGumbel_fd_428;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_429> AgradCdfLogGumbel_fd_429;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_430> AgradCdfLogGumbel_fd_430;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_431> AgradCdfLogGumbel_fd_431;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_432> AgradCdfLogGumbel_fd_432;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_433> AgradCdfLogGumbel_fd_433;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_434> AgradCdfLogGumbel_fd_434;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_435> AgradCdfLogGumbel_fd_435;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_436> AgradCdfLogGumbel_fd_436;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_437> AgradCdfLogGumbel_fd_437;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_438> AgradCdfLogGumbel_fd_438;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_439> AgradCdfLogGumbel_fd_439;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_440> AgradCdfLogGumbel_fd_440;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_441> AgradCdfLogGumbel_fd_441;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_442> AgradCdfLogGumbel_fd_442;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_443> AgradCdfLogGumbel_fd_443;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_444> AgradCdfLogGumbel_fd_444;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_445> AgradCdfLogGumbel_fd_445;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_446> AgradCdfLogGumbel_fd_446;
typedef boost::mpl::vector<AgradCdfLogGumbel, type_fd_447> AgradCdfLogGumbel_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_400, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_401, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_402, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_403, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_404, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_405, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_406, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_407, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_408, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_409, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_410, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_411, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_412, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_413, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_414, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_415, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_416, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_417, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_418, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_419, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_420, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_421, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_422, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_423, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_424, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_425, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_426, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_427, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_428, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_429, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_430, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_431, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_432, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_433, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_434, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_435, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_436, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_437, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_438, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_439, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_440, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_441, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_442, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_443, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_444, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_445, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_446, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGumbel_fd_447, AgradCdfLogTestFixture, AgradCdfLogGumbel_fd_447);

