#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <beta/beta_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_400> AgradDistributionsBeta_fd_400;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_401> AgradDistributionsBeta_fd_401;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_402> AgradDistributionsBeta_fd_402;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_403> AgradDistributionsBeta_fd_403;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_404> AgradDistributionsBeta_fd_404;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_405> AgradDistributionsBeta_fd_405;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_406> AgradDistributionsBeta_fd_406;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_407> AgradDistributionsBeta_fd_407;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_408> AgradDistributionsBeta_fd_408;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_409> AgradDistributionsBeta_fd_409;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_410> AgradDistributionsBeta_fd_410;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_411> AgradDistributionsBeta_fd_411;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_412> AgradDistributionsBeta_fd_412;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_413> AgradDistributionsBeta_fd_413;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_414> AgradDistributionsBeta_fd_414;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_415> AgradDistributionsBeta_fd_415;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_416> AgradDistributionsBeta_fd_416;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_417> AgradDistributionsBeta_fd_417;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_418> AgradDistributionsBeta_fd_418;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_419> AgradDistributionsBeta_fd_419;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_420> AgradDistributionsBeta_fd_420;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_421> AgradDistributionsBeta_fd_421;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_422> AgradDistributionsBeta_fd_422;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_423> AgradDistributionsBeta_fd_423;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_424> AgradDistributionsBeta_fd_424;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_425> AgradDistributionsBeta_fd_425;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_426> AgradDistributionsBeta_fd_426;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_427> AgradDistributionsBeta_fd_427;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_428> AgradDistributionsBeta_fd_428;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_429> AgradDistributionsBeta_fd_429;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_430> AgradDistributionsBeta_fd_430;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_431> AgradDistributionsBeta_fd_431;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_432> AgradDistributionsBeta_fd_432;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_433> AgradDistributionsBeta_fd_433;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_434> AgradDistributionsBeta_fd_434;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_435> AgradDistributionsBeta_fd_435;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_436> AgradDistributionsBeta_fd_436;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_437> AgradDistributionsBeta_fd_437;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_438> AgradDistributionsBeta_fd_438;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_439> AgradDistributionsBeta_fd_439;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_440> AgradDistributionsBeta_fd_440;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_441> AgradDistributionsBeta_fd_441;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_442> AgradDistributionsBeta_fd_442;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_443> AgradDistributionsBeta_fd_443;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_444> AgradDistributionsBeta_fd_444;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_445> AgradDistributionsBeta_fd_445;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_446> AgradDistributionsBeta_fd_446;
typedef boost::mpl::vector<AgradDistributionsBeta, type_fd_447> AgradDistributionsBeta_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_400, AgradDistributionTestFixture, AgradDistributionsBeta_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_401, AgradDistributionTestFixture, AgradDistributionsBeta_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_402, AgradDistributionTestFixture, AgradDistributionsBeta_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_403, AgradDistributionTestFixture, AgradDistributionsBeta_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_404, AgradDistributionTestFixture, AgradDistributionsBeta_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_405, AgradDistributionTestFixture, AgradDistributionsBeta_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_406, AgradDistributionTestFixture, AgradDistributionsBeta_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_407, AgradDistributionTestFixture, AgradDistributionsBeta_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_408, AgradDistributionTestFixture, AgradDistributionsBeta_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_409, AgradDistributionTestFixture, AgradDistributionsBeta_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_410, AgradDistributionTestFixture, AgradDistributionsBeta_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_411, AgradDistributionTestFixture, AgradDistributionsBeta_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_412, AgradDistributionTestFixture, AgradDistributionsBeta_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_413, AgradDistributionTestFixture, AgradDistributionsBeta_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_414, AgradDistributionTestFixture, AgradDistributionsBeta_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_415, AgradDistributionTestFixture, AgradDistributionsBeta_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_416, AgradDistributionTestFixture, AgradDistributionsBeta_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_417, AgradDistributionTestFixture, AgradDistributionsBeta_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_418, AgradDistributionTestFixture, AgradDistributionsBeta_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_419, AgradDistributionTestFixture, AgradDistributionsBeta_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_420, AgradDistributionTestFixture, AgradDistributionsBeta_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_421, AgradDistributionTestFixture, AgradDistributionsBeta_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_422, AgradDistributionTestFixture, AgradDistributionsBeta_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_423, AgradDistributionTestFixture, AgradDistributionsBeta_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_424, AgradDistributionTestFixture, AgradDistributionsBeta_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_425, AgradDistributionTestFixture, AgradDistributionsBeta_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_426, AgradDistributionTestFixture, AgradDistributionsBeta_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_427, AgradDistributionTestFixture, AgradDistributionsBeta_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_428, AgradDistributionTestFixture, AgradDistributionsBeta_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_429, AgradDistributionTestFixture, AgradDistributionsBeta_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_430, AgradDistributionTestFixture, AgradDistributionsBeta_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_431, AgradDistributionTestFixture, AgradDistributionsBeta_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_432, AgradDistributionTestFixture, AgradDistributionsBeta_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_433, AgradDistributionTestFixture, AgradDistributionsBeta_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_434, AgradDistributionTestFixture, AgradDistributionsBeta_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_435, AgradDistributionTestFixture, AgradDistributionsBeta_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_436, AgradDistributionTestFixture, AgradDistributionsBeta_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_437, AgradDistributionTestFixture, AgradDistributionsBeta_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_438, AgradDistributionTestFixture, AgradDistributionsBeta_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_439, AgradDistributionTestFixture, AgradDistributionsBeta_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_440, AgradDistributionTestFixture, AgradDistributionsBeta_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_441, AgradDistributionTestFixture, AgradDistributionsBeta_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_442, AgradDistributionTestFixture, AgradDistributionsBeta_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_443, AgradDistributionTestFixture, AgradDistributionsBeta_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_444, AgradDistributionTestFixture, AgradDistributionsBeta_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_445, AgradDistributionTestFixture, AgradDistributionsBeta_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_446, AgradDistributionTestFixture, AgradDistributionsBeta_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_fd_447, AgradDistributionTestFixture, AgradDistributionsBeta_fd_447);

