#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <frechet/frechet_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_400> AgradDistributionsFrechet_ffv_400;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_401> AgradDistributionsFrechet_ffv_401;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_402> AgradDistributionsFrechet_ffv_402;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_403> AgradDistributionsFrechet_ffv_403;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_404> AgradDistributionsFrechet_ffv_404;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_405> AgradDistributionsFrechet_ffv_405;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_406> AgradDistributionsFrechet_ffv_406;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_407> AgradDistributionsFrechet_ffv_407;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_408> AgradDistributionsFrechet_ffv_408;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_409> AgradDistributionsFrechet_ffv_409;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_410> AgradDistributionsFrechet_ffv_410;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_411> AgradDistributionsFrechet_ffv_411;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_412> AgradDistributionsFrechet_ffv_412;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_413> AgradDistributionsFrechet_ffv_413;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_414> AgradDistributionsFrechet_ffv_414;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_415> AgradDistributionsFrechet_ffv_415;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_416> AgradDistributionsFrechet_ffv_416;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_417> AgradDistributionsFrechet_ffv_417;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_418> AgradDistributionsFrechet_ffv_418;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_419> AgradDistributionsFrechet_ffv_419;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_420> AgradDistributionsFrechet_ffv_420;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_421> AgradDistributionsFrechet_ffv_421;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_422> AgradDistributionsFrechet_ffv_422;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_423> AgradDistributionsFrechet_ffv_423;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_424> AgradDistributionsFrechet_ffv_424;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_425> AgradDistributionsFrechet_ffv_425;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_426> AgradDistributionsFrechet_ffv_426;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_427> AgradDistributionsFrechet_ffv_427;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_428> AgradDistributionsFrechet_ffv_428;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_429> AgradDistributionsFrechet_ffv_429;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_430> AgradDistributionsFrechet_ffv_430;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_431> AgradDistributionsFrechet_ffv_431;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_432> AgradDistributionsFrechet_ffv_432;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_433> AgradDistributionsFrechet_ffv_433;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_434> AgradDistributionsFrechet_ffv_434;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_435> AgradDistributionsFrechet_ffv_435;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_436> AgradDistributionsFrechet_ffv_436;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_437> AgradDistributionsFrechet_ffv_437;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_438> AgradDistributionsFrechet_ffv_438;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_439> AgradDistributionsFrechet_ffv_439;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_440> AgradDistributionsFrechet_ffv_440;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_441> AgradDistributionsFrechet_ffv_441;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_442> AgradDistributionsFrechet_ffv_442;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_443> AgradDistributionsFrechet_ffv_443;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_444> AgradDistributionsFrechet_ffv_444;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_445> AgradDistributionsFrechet_ffv_445;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_446> AgradDistributionsFrechet_ffv_446;
typedef boost::mpl::vector<AgradDistributionsFrechet, type_ffv_447> AgradDistributionsFrechet_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_400, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_401, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_402, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_403, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_404, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_405, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_406, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_407, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_408, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_409, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_410, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_411, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_412, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_413, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_414, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_415, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_416, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_417, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_418, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_419, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_420, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_421, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_422, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_423, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_424, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_425, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_426, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_427, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_428, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_429, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_430, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_431, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_432, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_433, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_434, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_435, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_436, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_437, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_438, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_439, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_440, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_441, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_442, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_443, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_444, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_445, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_446, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsFrechet_ffv_447, AgradDistributionTestFixture, AgradDistributionsFrechet_ffv_447);

