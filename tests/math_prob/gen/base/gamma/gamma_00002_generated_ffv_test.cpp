#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <gamma/gamma_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_400> AgradDistributionsGamma_ffv_400;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_401> AgradDistributionsGamma_ffv_401;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_402> AgradDistributionsGamma_ffv_402;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_403> AgradDistributionsGamma_ffv_403;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_404> AgradDistributionsGamma_ffv_404;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_405> AgradDistributionsGamma_ffv_405;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_406> AgradDistributionsGamma_ffv_406;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_407> AgradDistributionsGamma_ffv_407;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_408> AgradDistributionsGamma_ffv_408;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_409> AgradDistributionsGamma_ffv_409;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_410> AgradDistributionsGamma_ffv_410;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_411> AgradDistributionsGamma_ffv_411;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_412> AgradDistributionsGamma_ffv_412;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_413> AgradDistributionsGamma_ffv_413;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_414> AgradDistributionsGamma_ffv_414;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_415> AgradDistributionsGamma_ffv_415;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_416> AgradDistributionsGamma_ffv_416;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_417> AgradDistributionsGamma_ffv_417;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_418> AgradDistributionsGamma_ffv_418;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_419> AgradDistributionsGamma_ffv_419;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_420> AgradDistributionsGamma_ffv_420;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_421> AgradDistributionsGamma_ffv_421;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_422> AgradDistributionsGamma_ffv_422;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_423> AgradDistributionsGamma_ffv_423;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_424> AgradDistributionsGamma_ffv_424;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_425> AgradDistributionsGamma_ffv_425;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_426> AgradDistributionsGamma_ffv_426;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_427> AgradDistributionsGamma_ffv_427;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_428> AgradDistributionsGamma_ffv_428;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_429> AgradDistributionsGamma_ffv_429;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_430> AgradDistributionsGamma_ffv_430;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_431> AgradDistributionsGamma_ffv_431;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_432> AgradDistributionsGamma_ffv_432;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_433> AgradDistributionsGamma_ffv_433;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_434> AgradDistributionsGamma_ffv_434;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_435> AgradDistributionsGamma_ffv_435;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_436> AgradDistributionsGamma_ffv_436;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_437> AgradDistributionsGamma_ffv_437;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_438> AgradDistributionsGamma_ffv_438;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_439> AgradDistributionsGamma_ffv_439;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_440> AgradDistributionsGamma_ffv_440;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_441> AgradDistributionsGamma_ffv_441;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_442> AgradDistributionsGamma_ffv_442;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_443> AgradDistributionsGamma_ffv_443;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_444> AgradDistributionsGamma_ffv_444;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_445> AgradDistributionsGamma_ffv_445;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_446> AgradDistributionsGamma_ffv_446;
typedef boost::mpl::vector<AgradDistributionsGamma, type_ffv_447> AgradDistributionsGamma_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_400, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_401, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_402, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_403, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_404, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_405, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_406, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_407, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_408, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_409, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_410, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_411, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_412, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_413, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_414, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_415, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_416, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_417, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_418, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_419, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_420, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_421, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_422, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_423, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_424, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_425, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_426, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_427, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_428, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_429, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_430, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_431, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_432, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_433, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_434, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_435, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_436, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_437, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_438, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_439, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_440, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_441, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_442, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_443, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_444, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_445, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_446, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_ffv_447, AgradDistributionTestFixture, AgradDistributionsGamma_ffv_447);

