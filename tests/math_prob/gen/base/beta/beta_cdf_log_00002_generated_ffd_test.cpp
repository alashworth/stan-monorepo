#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <beta/beta_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_400> AgradCdfLogBeta_ffd_400;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_401> AgradCdfLogBeta_ffd_401;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_402> AgradCdfLogBeta_ffd_402;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_403> AgradCdfLogBeta_ffd_403;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_404> AgradCdfLogBeta_ffd_404;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_405> AgradCdfLogBeta_ffd_405;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_406> AgradCdfLogBeta_ffd_406;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_407> AgradCdfLogBeta_ffd_407;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_408> AgradCdfLogBeta_ffd_408;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_409> AgradCdfLogBeta_ffd_409;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_410> AgradCdfLogBeta_ffd_410;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_411> AgradCdfLogBeta_ffd_411;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_412> AgradCdfLogBeta_ffd_412;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_413> AgradCdfLogBeta_ffd_413;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_414> AgradCdfLogBeta_ffd_414;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_415> AgradCdfLogBeta_ffd_415;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_416> AgradCdfLogBeta_ffd_416;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_417> AgradCdfLogBeta_ffd_417;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_418> AgradCdfLogBeta_ffd_418;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_419> AgradCdfLogBeta_ffd_419;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_420> AgradCdfLogBeta_ffd_420;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_421> AgradCdfLogBeta_ffd_421;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_422> AgradCdfLogBeta_ffd_422;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_423> AgradCdfLogBeta_ffd_423;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_424> AgradCdfLogBeta_ffd_424;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_425> AgradCdfLogBeta_ffd_425;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_426> AgradCdfLogBeta_ffd_426;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_427> AgradCdfLogBeta_ffd_427;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_428> AgradCdfLogBeta_ffd_428;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_429> AgradCdfLogBeta_ffd_429;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_430> AgradCdfLogBeta_ffd_430;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_431> AgradCdfLogBeta_ffd_431;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_432> AgradCdfLogBeta_ffd_432;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_433> AgradCdfLogBeta_ffd_433;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_434> AgradCdfLogBeta_ffd_434;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_435> AgradCdfLogBeta_ffd_435;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_436> AgradCdfLogBeta_ffd_436;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_437> AgradCdfLogBeta_ffd_437;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_438> AgradCdfLogBeta_ffd_438;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_439> AgradCdfLogBeta_ffd_439;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_440> AgradCdfLogBeta_ffd_440;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_441> AgradCdfLogBeta_ffd_441;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_442> AgradCdfLogBeta_ffd_442;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_443> AgradCdfLogBeta_ffd_443;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_444> AgradCdfLogBeta_ffd_444;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_445> AgradCdfLogBeta_ffd_445;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_446> AgradCdfLogBeta_ffd_446;
typedef boost::mpl::vector<AgradCdfLogBeta, type_ffd_447> AgradCdfLogBeta_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_400, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_401, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_402, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_403, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_404, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_405, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_406, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_407, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_408, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_409, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_410, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_411, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_412, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_413, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_414, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_415, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_416, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_417, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_418, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_419, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_420, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_421, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_422, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_423, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_424, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_425, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_426, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_427, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_428, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_429, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_430, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_431, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_432, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_433, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_434, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_435, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_436, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_437, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_438, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_439, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_440, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_441, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_442, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_443, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_444, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_445, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_446, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_ffd_447, AgradCdfLogTestFixture, AgradCdfLogBeta_ffd_447);

