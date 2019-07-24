#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <normal/normal_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_400> AgradCdfLogNormal_ffd_400;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_401> AgradCdfLogNormal_ffd_401;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_402> AgradCdfLogNormal_ffd_402;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_403> AgradCdfLogNormal_ffd_403;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_404> AgradCdfLogNormal_ffd_404;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_405> AgradCdfLogNormal_ffd_405;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_406> AgradCdfLogNormal_ffd_406;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_407> AgradCdfLogNormal_ffd_407;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_408> AgradCdfLogNormal_ffd_408;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_409> AgradCdfLogNormal_ffd_409;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_410> AgradCdfLogNormal_ffd_410;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_411> AgradCdfLogNormal_ffd_411;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_412> AgradCdfLogNormal_ffd_412;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_413> AgradCdfLogNormal_ffd_413;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_414> AgradCdfLogNormal_ffd_414;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_415> AgradCdfLogNormal_ffd_415;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_416> AgradCdfLogNormal_ffd_416;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_417> AgradCdfLogNormal_ffd_417;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_418> AgradCdfLogNormal_ffd_418;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_419> AgradCdfLogNormal_ffd_419;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_420> AgradCdfLogNormal_ffd_420;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_421> AgradCdfLogNormal_ffd_421;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_422> AgradCdfLogNormal_ffd_422;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_423> AgradCdfLogNormal_ffd_423;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_424> AgradCdfLogNormal_ffd_424;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_425> AgradCdfLogNormal_ffd_425;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_426> AgradCdfLogNormal_ffd_426;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_427> AgradCdfLogNormal_ffd_427;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_428> AgradCdfLogNormal_ffd_428;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_429> AgradCdfLogNormal_ffd_429;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_430> AgradCdfLogNormal_ffd_430;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_431> AgradCdfLogNormal_ffd_431;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_432> AgradCdfLogNormal_ffd_432;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_433> AgradCdfLogNormal_ffd_433;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_434> AgradCdfLogNormal_ffd_434;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_435> AgradCdfLogNormal_ffd_435;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_436> AgradCdfLogNormal_ffd_436;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_437> AgradCdfLogNormal_ffd_437;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_438> AgradCdfLogNormal_ffd_438;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_439> AgradCdfLogNormal_ffd_439;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_440> AgradCdfLogNormal_ffd_440;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_441> AgradCdfLogNormal_ffd_441;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_442> AgradCdfLogNormal_ffd_442;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_443> AgradCdfLogNormal_ffd_443;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_444> AgradCdfLogNormal_ffd_444;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_445> AgradCdfLogNormal_ffd_445;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_446> AgradCdfLogNormal_ffd_446;
typedef boost::mpl::vector<AgradCdfLogNormal, type_ffd_447> AgradCdfLogNormal_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_400, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_401, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_402, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_403, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_404, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_405, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_406, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_407, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_408, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_409, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_410, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_411, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_412, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_413, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_414, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_415, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_416, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_417, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_418, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_419, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_420, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_421, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_422, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_423, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_424, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_425, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_426, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_427, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_428, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_429, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_430, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_431, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_432, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_433, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_434, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_435, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_436, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_437, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_438, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_439, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_440, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_441, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_442, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_443, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_444, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_445, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_446, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNormal_ffd_447, AgradCdfLogTestFixture, AgradCdfLogNormal_ffd_447);
