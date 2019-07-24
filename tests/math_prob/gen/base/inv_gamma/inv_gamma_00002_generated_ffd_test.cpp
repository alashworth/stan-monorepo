#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <inv_gamma/inv_gamma_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, double, empty, empty, empty> type_ffd_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, std::vector<double>, empty, empty, empty> type_ffd_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, fvar<fvar<double> >, empty, empty, empty> type_ffd_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, double, empty, empty, empty> type_ffd_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, std::vector<double>, empty, empty, empty> type_ffd_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty, empty> type_ffd_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_447;

typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_400> AgradDistributionsInvGamma_ffd_400;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_401> AgradDistributionsInvGamma_ffd_401;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_402> AgradDistributionsInvGamma_ffd_402;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_403> AgradDistributionsInvGamma_ffd_403;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_404> AgradDistributionsInvGamma_ffd_404;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_405> AgradDistributionsInvGamma_ffd_405;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_406> AgradDistributionsInvGamma_ffd_406;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_407> AgradDistributionsInvGamma_ffd_407;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_408> AgradDistributionsInvGamma_ffd_408;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_409> AgradDistributionsInvGamma_ffd_409;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_410> AgradDistributionsInvGamma_ffd_410;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_411> AgradDistributionsInvGamma_ffd_411;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_412> AgradDistributionsInvGamma_ffd_412;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_413> AgradDistributionsInvGamma_ffd_413;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_414> AgradDistributionsInvGamma_ffd_414;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_415> AgradDistributionsInvGamma_ffd_415;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_416> AgradDistributionsInvGamma_ffd_416;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_417> AgradDistributionsInvGamma_ffd_417;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_418> AgradDistributionsInvGamma_ffd_418;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_419> AgradDistributionsInvGamma_ffd_419;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_420> AgradDistributionsInvGamma_ffd_420;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_421> AgradDistributionsInvGamma_ffd_421;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_422> AgradDistributionsInvGamma_ffd_422;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_423> AgradDistributionsInvGamma_ffd_423;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_424> AgradDistributionsInvGamma_ffd_424;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_425> AgradDistributionsInvGamma_ffd_425;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_426> AgradDistributionsInvGamma_ffd_426;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_427> AgradDistributionsInvGamma_ffd_427;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_428> AgradDistributionsInvGamma_ffd_428;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_429> AgradDistributionsInvGamma_ffd_429;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_430> AgradDistributionsInvGamma_ffd_430;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_431> AgradDistributionsInvGamma_ffd_431;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_432> AgradDistributionsInvGamma_ffd_432;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_433> AgradDistributionsInvGamma_ffd_433;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_434> AgradDistributionsInvGamma_ffd_434;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_435> AgradDistributionsInvGamma_ffd_435;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_436> AgradDistributionsInvGamma_ffd_436;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_437> AgradDistributionsInvGamma_ffd_437;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_438> AgradDistributionsInvGamma_ffd_438;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_439> AgradDistributionsInvGamma_ffd_439;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_440> AgradDistributionsInvGamma_ffd_440;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_441> AgradDistributionsInvGamma_ffd_441;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_442> AgradDistributionsInvGamma_ffd_442;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_443> AgradDistributionsInvGamma_ffd_443;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_444> AgradDistributionsInvGamma_ffd_444;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_445> AgradDistributionsInvGamma_ffd_445;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_446> AgradDistributionsInvGamma_ffd_446;
typedef boost::mpl::vector<AgradDistributionsInvGamma, type_ffd_447> AgradDistributionsInvGamma_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_400, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_401, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_402, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_403, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_404, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_405, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_406, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_407, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_408, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_409, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_410, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_411, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_412, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_413, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_414, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_415, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_416, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_417, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_418, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_419, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_420, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_421, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_422, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_423, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_424, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_425, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_426, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_427, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_428, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_429, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_430, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_431, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_432, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_433, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_434, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_435, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_436, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_437, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_438, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_439, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_440, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_441, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_442, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_443, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_444, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_445, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_446, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsInvGamma_ffd_447, AgradDistributionTestFixture, AgradDistributionsInvGamma_ffd_447);
