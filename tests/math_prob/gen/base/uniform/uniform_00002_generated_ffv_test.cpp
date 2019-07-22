#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <uniform/uniform_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_400> AgradDistributionsUniform_ffv_400;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_401> AgradDistributionsUniform_ffv_401;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_402> AgradDistributionsUniform_ffv_402;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_403> AgradDistributionsUniform_ffv_403;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_404> AgradDistributionsUniform_ffv_404;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_405> AgradDistributionsUniform_ffv_405;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_406> AgradDistributionsUniform_ffv_406;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_407> AgradDistributionsUniform_ffv_407;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_408> AgradDistributionsUniform_ffv_408;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_409> AgradDistributionsUniform_ffv_409;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_410> AgradDistributionsUniform_ffv_410;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_411> AgradDistributionsUniform_ffv_411;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_412> AgradDistributionsUniform_ffv_412;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_413> AgradDistributionsUniform_ffv_413;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_414> AgradDistributionsUniform_ffv_414;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_415> AgradDistributionsUniform_ffv_415;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_416> AgradDistributionsUniform_ffv_416;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_417> AgradDistributionsUniform_ffv_417;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_418> AgradDistributionsUniform_ffv_418;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_419> AgradDistributionsUniform_ffv_419;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_420> AgradDistributionsUniform_ffv_420;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_421> AgradDistributionsUniform_ffv_421;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_422> AgradDistributionsUniform_ffv_422;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_423> AgradDistributionsUniform_ffv_423;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_424> AgradDistributionsUniform_ffv_424;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_425> AgradDistributionsUniform_ffv_425;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_426> AgradDistributionsUniform_ffv_426;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_427> AgradDistributionsUniform_ffv_427;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_428> AgradDistributionsUniform_ffv_428;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_429> AgradDistributionsUniform_ffv_429;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_430> AgradDistributionsUniform_ffv_430;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_431> AgradDistributionsUniform_ffv_431;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_432> AgradDistributionsUniform_ffv_432;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_433> AgradDistributionsUniform_ffv_433;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_434> AgradDistributionsUniform_ffv_434;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_435> AgradDistributionsUniform_ffv_435;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_436> AgradDistributionsUniform_ffv_436;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_437> AgradDistributionsUniform_ffv_437;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_438> AgradDistributionsUniform_ffv_438;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_439> AgradDistributionsUniform_ffv_439;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_440> AgradDistributionsUniform_ffv_440;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_441> AgradDistributionsUniform_ffv_441;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_442> AgradDistributionsUniform_ffv_442;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_443> AgradDistributionsUniform_ffv_443;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_444> AgradDistributionsUniform_ffv_444;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_445> AgradDistributionsUniform_ffv_445;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_446> AgradDistributionsUniform_ffv_446;
typedef boost::mpl::vector<AgradDistributionsUniform, type_ffv_447> AgradDistributionsUniform_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_400, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_401, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_402, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_403, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_404, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_405, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_406, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_407, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_408, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_409, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_410, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_411, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_412, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_413, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_414, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_415, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_416, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_417, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_418, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_419, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_420, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_421, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_422, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_423, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_424, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_425, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_426, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_427, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_428, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_429, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_430, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_431, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_432, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_433, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_434, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_435, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_436, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_437, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_438, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_439, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_440, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_441, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_442, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_443, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_444, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_445, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_446, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsUniform_ffv_447, AgradDistributionTestFixture, AgradDistributionsUniform_ffv_447);

