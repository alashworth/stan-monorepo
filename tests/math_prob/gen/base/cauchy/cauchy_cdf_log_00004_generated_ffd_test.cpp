#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/cauchy/cauchy_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_400> AgradCdfLogCauchy_ffd_400;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_401> AgradCdfLogCauchy_ffd_401;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_402> AgradCdfLogCauchy_ffd_402;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_403> AgradCdfLogCauchy_ffd_403;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_404> AgradCdfLogCauchy_ffd_404;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_405> AgradCdfLogCauchy_ffd_405;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_406> AgradCdfLogCauchy_ffd_406;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_407> AgradCdfLogCauchy_ffd_407;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_408> AgradCdfLogCauchy_ffd_408;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_409> AgradCdfLogCauchy_ffd_409;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_410> AgradCdfLogCauchy_ffd_410;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_411> AgradCdfLogCauchy_ffd_411;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_412> AgradCdfLogCauchy_ffd_412;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_413> AgradCdfLogCauchy_ffd_413;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_414> AgradCdfLogCauchy_ffd_414;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_415> AgradCdfLogCauchy_ffd_415;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_416> AgradCdfLogCauchy_ffd_416;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_417> AgradCdfLogCauchy_ffd_417;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_418> AgradCdfLogCauchy_ffd_418;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_419> AgradCdfLogCauchy_ffd_419;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_420> AgradCdfLogCauchy_ffd_420;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_421> AgradCdfLogCauchy_ffd_421;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_422> AgradCdfLogCauchy_ffd_422;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_423> AgradCdfLogCauchy_ffd_423;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_424> AgradCdfLogCauchy_ffd_424;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_425> AgradCdfLogCauchy_ffd_425;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_426> AgradCdfLogCauchy_ffd_426;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_427> AgradCdfLogCauchy_ffd_427;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_428> AgradCdfLogCauchy_ffd_428;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_429> AgradCdfLogCauchy_ffd_429;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_430> AgradCdfLogCauchy_ffd_430;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_431> AgradCdfLogCauchy_ffd_431;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_432> AgradCdfLogCauchy_ffd_432;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_433> AgradCdfLogCauchy_ffd_433;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_434> AgradCdfLogCauchy_ffd_434;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_435> AgradCdfLogCauchy_ffd_435;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_436> AgradCdfLogCauchy_ffd_436;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_437> AgradCdfLogCauchy_ffd_437;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_438> AgradCdfLogCauchy_ffd_438;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_439> AgradCdfLogCauchy_ffd_439;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_440> AgradCdfLogCauchy_ffd_440;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_441> AgradCdfLogCauchy_ffd_441;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_442> AgradCdfLogCauchy_ffd_442;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_443> AgradCdfLogCauchy_ffd_443;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_444> AgradCdfLogCauchy_ffd_444;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_445> AgradCdfLogCauchy_ffd_445;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_446> AgradCdfLogCauchy_ffd_446;
typedef boost::mpl::vector<AgradCdfLogCauchy, type_ffd_447> AgradCdfLogCauchy_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_400, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_401, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_402, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_403, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_404, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_405, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_406, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_407, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_408, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_409, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_410, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_411, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_412, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_413, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_414, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_415, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_416, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_417, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_418, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_419, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_420, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_421, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_422, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_423, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_424, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_425, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_426, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_427, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_428, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_429, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_430, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_431, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_432, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_433, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_434, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_435, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_436, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_437, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_438, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_439, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_440, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_441, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_442, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_443, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_444, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_445, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_446, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogCauchy_ffd_447, AgradCdfLogTestFixture, AgradCdfLogCauchy_ffd_447);

