#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <beta/beta_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, double, empty, empty, empty> type_ffv_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<double>, empty, empty, empty> type_ffv_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, fvar<fvar<var> >, empty, empty, empty> type_ffv_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, double, empty, empty, empty> type_ffv_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<double>, empty, empty, empty> type_ffv_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_447;

typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_400> AgradDistributionsBeta_ffv_400;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_401> AgradDistributionsBeta_ffv_401;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_402> AgradDistributionsBeta_ffv_402;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_403> AgradDistributionsBeta_ffv_403;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_404> AgradDistributionsBeta_ffv_404;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_405> AgradDistributionsBeta_ffv_405;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_406> AgradDistributionsBeta_ffv_406;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_407> AgradDistributionsBeta_ffv_407;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_408> AgradDistributionsBeta_ffv_408;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_409> AgradDistributionsBeta_ffv_409;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_410> AgradDistributionsBeta_ffv_410;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_411> AgradDistributionsBeta_ffv_411;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_412> AgradDistributionsBeta_ffv_412;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_413> AgradDistributionsBeta_ffv_413;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_414> AgradDistributionsBeta_ffv_414;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_415> AgradDistributionsBeta_ffv_415;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_416> AgradDistributionsBeta_ffv_416;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_417> AgradDistributionsBeta_ffv_417;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_418> AgradDistributionsBeta_ffv_418;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_419> AgradDistributionsBeta_ffv_419;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_420> AgradDistributionsBeta_ffv_420;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_421> AgradDistributionsBeta_ffv_421;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_422> AgradDistributionsBeta_ffv_422;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_423> AgradDistributionsBeta_ffv_423;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_424> AgradDistributionsBeta_ffv_424;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_425> AgradDistributionsBeta_ffv_425;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_426> AgradDistributionsBeta_ffv_426;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_427> AgradDistributionsBeta_ffv_427;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_428> AgradDistributionsBeta_ffv_428;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_429> AgradDistributionsBeta_ffv_429;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_430> AgradDistributionsBeta_ffv_430;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_431> AgradDistributionsBeta_ffv_431;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_432> AgradDistributionsBeta_ffv_432;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_433> AgradDistributionsBeta_ffv_433;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_434> AgradDistributionsBeta_ffv_434;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_435> AgradDistributionsBeta_ffv_435;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_436> AgradDistributionsBeta_ffv_436;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_437> AgradDistributionsBeta_ffv_437;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_438> AgradDistributionsBeta_ffv_438;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_439> AgradDistributionsBeta_ffv_439;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_440> AgradDistributionsBeta_ffv_440;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_441> AgradDistributionsBeta_ffv_441;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_442> AgradDistributionsBeta_ffv_442;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_443> AgradDistributionsBeta_ffv_443;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_444> AgradDistributionsBeta_ffv_444;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_445> AgradDistributionsBeta_ffv_445;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_446> AgradDistributionsBeta_ffv_446;
typedef boost::mpl::vector<AgradDistributionsBeta, type_ffv_447> AgradDistributionsBeta_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_400, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_401, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_402, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_403, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_404, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_405, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_406, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_407, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_408, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_409, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_410, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_411, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_412, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_413, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_414, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_415, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_416, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_417, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_418, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_419, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_420, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_421, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_422, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_423, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_424, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_425, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_426, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_427, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_428, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_429, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_430, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_431, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_432, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_433, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_434, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_435, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_436, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_437, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_438, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_439, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_440, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_441, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_442, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_443, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_444, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_445, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_446, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBeta_ffv_447, AgradDistributionTestFixture, AgradDistributionsBeta_ffv_447);

