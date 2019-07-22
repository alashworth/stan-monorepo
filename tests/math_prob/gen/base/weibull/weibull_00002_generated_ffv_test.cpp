#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <weibull/weibull_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_400> AgradDistributionsWeibull_ffv_400;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_401> AgradDistributionsWeibull_ffv_401;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_402> AgradDistributionsWeibull_ffv_402;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_403> AgradDistributionsWeibull_ffv_403;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_404> AgradDistributionsWeibull_ffv_404;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_405> AgradDistributionsWeibull_ffv_405;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_406> AgradDistributionsWeibull_ffv_406;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_407> AgradDistributionsWeibull_ffv_407;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_408> AgradDistributionsWeibull_ffv_408;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_409> AgradDistributionsWeibull_ffv_409;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_410> AgradDistributionsWeibull_ffv_410;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_411> AgradDistributionsWeibull_ffv_411;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_412> AgradDistributionsWeibull_ffv_412;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_413> AgradDistributionsWeibull_ffv_413;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_414> AgradDistributionsWeibull_ffv_414;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_415> AgradDistributionsWeibull_ffv_415;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_416> AgradDistributionsWeibull_ffv_416;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_417> AgradDistributionsWeibull_ffv_417;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_418> AgradDistributionsWeibull_ffv_418;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_419> AgradDistributionsWeibull_ffv_419;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_420> AgradDistributionsWeibull_ffv_420;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_421> AgradDistributionsWeibull_ffv_421;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_422> AgradDistributionsWeibull_ffv_422;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_423> AgradDistributionsWeibull_ffv_423;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_424> AgradDistributionsWeibull_ffv_424;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_425> AgradDistributionsWeibull_ffv_425;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_426> AgradDistributionsWeibull_ffv_426;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_427> AgradDistributionsWeibull_ffv_427;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_428> AgradDistributionsWeibull_ffv_428;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_429> AgradDistributionsWeibull_ffv_429;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_430> AgradDistributionsWeibull_ffv_430;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_431> AgradDistributionsWeibull_ffv_431;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_432> AgradDistributionsWeibull_ffv_432;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_433> AgradDistributionsWeibull_ffv_433;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_434> AgradDistributionsWeibull_ffv_434;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_435> AgradDistributionsWeibull_ffv_435;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_436> AgradDistributionsWeibull_ffv_436;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_437> AgradDistributionsWeibull_ffv_437;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_438> AgradDistributionsWeibull_ffv_438;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_439> AgradDistributionsWeibull_ffv_439;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_440> AgradDistributionsWeibull_ffv_440;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_441> AgradDistributionsWeibull_ffv_441;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_442> AgradDistributionsWeibull_ffv_442;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_443> AgradDistributionsWeibull_ffv_443;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_444> AgradDistributionsWeibull_ffv_444;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_445> AgradDistributionsWeibull_ffv_445;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_446> AgradDistributionsWeibull_ffv_446;
typedef boost::mpl::vector<AgradDistributionsWeibull, type_ffv_447> AgradDistributionsWeibull_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_400, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_401, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_402, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_403, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_404, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_405, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_406, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_407, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_408, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_409, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_410, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_411, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_412, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_413, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_414, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_415, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_416, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_417, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_418, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_419, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_420, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_421, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_422, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_423, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_424, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_425, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_426, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_427, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_428, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_429, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_430, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_431, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_432, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_433, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_434, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_435, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_436, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_437, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_438, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_439, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_440, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_441, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_442, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_443, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_444, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_445, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_446, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsWeibull_ffv_447, AgradDistributionTestFixture, AgradDistributionsWeibull_ffv_447);

