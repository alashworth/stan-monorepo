#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <beta/beta_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBeta, type_fd_400> AgradCdfBeta_fd_400;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_401> AgradCdfBeta_fd_401;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_402> AgradCdfBeta_fd_402;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_403> AgradCdfBeta_fd_403;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_404> AgradCdfBeta_fd_404;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_405> AgradCdfBeta_fd_405;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_406> AgradCdfBeta_fd_406;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_407> AgradCdfBeta_fd_407;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_408> AgradCdfBeta_fd_408;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_409> AgradCdfBeta_fd_409;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_410> AgradCdfBeta_fd_410;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_411> AgradCdfBeta_fd_411;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_412> AgradCdfBeta_fd_412;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_413> AgradCdfBeta_fd_413;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_414> AgradCdfBeta_fd_414;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_415> AgradCdfBeta_fd_415;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_416> AgradCdfBeta_fd_416;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_417> AgradCdfBeta_fd_417;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_418> AgradCdfBeta_fd_418;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_419> AgradCdfBeta_fd_419;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_420> AgradCdfBeta_fd_420;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_421> AgradCdfBeta_fd_421;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_422> AgradCdfBeta_fd_422;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_423> AgradCdfBeta_fd_423;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_424> AgradCdfBeta_fd_424;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_425> AgradCdfBeta_fd_425;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_426> AgradCdfBeta_fd_426;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_427> AgradCdfBeta_fd_427;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_428> AgradCdfBeta_fd_428;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_429> AgradCdfBeta_fd_429;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_430> AgradCdfBeta_fd_430;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_431> AgradCdfBeta_fd_431;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_432> AgradCdfBeta_fd_432;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_433> AgradCdfBeta_fd_433;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_434> AgradCdfBeta_fd_434;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_435> AgradCdfBeta_fd_435;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_436> AgradCdfBeta_fd_436;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_437> AgradCdfBeta_fd_437;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_438> AgradCdfBeta_fd_438;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_439> AgradCdfBeta_fd_439;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_440> AgradCdfBeta_fd_440;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_441> AgradCdfBeta_fd_441;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_442> AgradCdfBeta_fd_442;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_443> AgradCdfBeta_fd_443;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_444> AgradCdfBeta_fd_444;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_445> AgradCdfBeta_fd_445;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_446> AgradCdfBeta_fd_446;
typedef boost::mpl::vector<AgradCdfBeta, type_fd_447> AgradCdfBeta_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_400, AgradCdfTestFixture, AgradCdfBeta_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_401, AgradCdfTestFixture, AgradCdfBeta_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_402, AgradCdfTestFixture, AgradCdfBeta_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_403, AgradCdfTestFixture, AgradCdfBeta_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_404, AgradCdfTestFixture, AgradCdfBeta_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_405, AgradCdfTestFixture, AgradCdfBeta_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_406, AgradCdfTestFixture, AgradCdfBeta_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_407, AgradCdfTestFixture, AgradCdfBeta_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_408, AgradCdfTestFixture, AgradCdfBeta_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_409, AgradCdfTestFixture, AgradCdfBeta_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_410, AgradCdfTestFixture, AgradCdfBeta_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_411, AgradCdfTestFixture, AgradCdfBeta_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_412, AgradCdfTestFixture, AgradCdfBeta_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_413, AgradCdfTestFixture, AgradCdfBeta_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_414, AgradCdfTestFixture, AgradCdfBeta_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_415, AgradCdfTestFixture, AgradCdfBeta_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_416, AgradCdfTestFixture, AgradCdfBeta_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_417, AgradCdfTestFixture, AgradCdfBeta_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_418, AgradCdfTestFixture, AgradCdfBeta_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_419, AgradCdfTestFixture, AgradCdfBeta_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_420, AgradCdfTestFixture, AgradCdfBeta_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_421, AgradCdfTestFixture, AgradCdfBeta_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_422, AgradCdfTestFixture, AgradCdfBeta_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_423, AgradCdfTestFixture, AgradCdfBeta_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_424, AgradCdfTestFixture, AgradCdfBeta_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_425, AgradCdfTestFixture, AgradCdfBeta_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_426, AgradCdfTestFixture, AgradCdfBeta_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_427, AgradCdfTestFixture, AgradCdfBeta_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_428, AgradCdfTestFixture, AgradCdfBeta_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_429, AgradCdfTestFixture, AgradCdfBeta_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_430, AgradCdfTestFixture, AgradCdfBeta_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_431, AgradCdfTestFixture, AgradCdfBeta_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_432, AgradCdfTestFixture, AgradCdfBeta_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_433, AgradCdfTestFixture, AgradCdfBeta_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_434, AgradCdfTestFixture, AgradCdfBeta_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_435, AgradCdfTestFixture, AgradCdfBeta_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_436, AgradCdfTestFixture, AgradCdfBeta_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_437, AgradCdfTestFixture, AgradCdfBeta_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_438, AgradCdfTestFixture, AgradCdfBeta_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_439, AgradCdfTestFixture, AgradCdfBeta_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_440, AgradCdfTestFixture, AgradCdfBeta_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_441, AgradCdfTestFixture, AgradCdfBeta_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_442, AgradCdfTestFixture, AgradCdfBeta_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_443, AgradCdfTestFixture, AgradCdfBeta_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_444, AgradCdfTestFixture, AgradCdfBeta_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_445, AgradCdfTestFixture, AgradCdfBeta_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_446, AgradCdfTestFixture, AgradCdfBeta_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fd_447, AgradCdfTestFixture, AgradCdfBeta_fd_447);

