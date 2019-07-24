#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_400> AgradCdfLogLogistic_ffd_400;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_401> AgradCdfLogLogistic_ffd_401;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_402> AgradCdfLogLogistic_ffd_402;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_403> AgradCdfLogLogistic_ffd_403;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_404> AgradCdfLogLogistic_ffd_404;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_405> AgradCdfLogLogistic_ffd_405;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_406> AgradCdfLogLogistic_ffd_406;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_407> AgradCdfLogLogistic_ffd_407;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_408> AgradCdfLogLogistic_ffd_408;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_409> AgradCdfLogLogistic_ffd_409;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_410> AgradCdfLogLogistic_ffd_410;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_411> AgradCdfLogLogistic_ffd_411;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_412> AgradCdfLogLogistic_ffd_412;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_413> AgradCdfLogLogistic_ffd_413;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_414> AgradCdfLogLogistic_ffd_414;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_415> AgradCdfLogLogistic_ffd_415;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_416> AgradCdfLogLogistic_ffd_416;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_417> AgradCdfLogLogistic_ffd_417;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_418> AgradCdfLogLogistic_ffd_418;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_419> AgradCdfLogLogistic_ffd_419;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_420> AgradCdfLogLogistic_ffd_420;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_421> AgradCdfLogLogistic_ffd_421;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_422> AgradCdfLogLogistic_ffd_422;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_423> AgradCdfLogLogistic_ffd_423;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_424> AgradCdfLogLogistic_ffd_424;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_425> AgradCdfLogLogistic_ffd_425;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_426> AgradCdfLogLogistic_ffd_426;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_427> AgradCdfLogLogistic_ffd_427;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_428> AgradCdfLogLogistic_ffd_428;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_429> AgradCdfLogLogistic_ffd_429;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_430> AgradCdfLogLogistic_ffd_430;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_431> AgradCdfLogLogistic_ffd_431;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_432> AgradCdfLogLogistic_ffd_432;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_433> AgradCdfLogLogistic_ffd_433;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_434> AgradCdfLogLogistic_ffd_434;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_435> AgradCdfLogLogistic_ffd_435;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_436> AgradCdfLogLogistic_ffd_436;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_437> AgradCdfLogLogistic_ffd_437;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_438> AgradCdfLogLogistic_ffd_438;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_439> AgradCdfLogLogistic_ffd_439;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_440> AgradCdfLogLogistic_ffd_440;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_441> AgradCdfLogLogistic_ffd_441;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_442> AgradCdfLogLogistic_ffd_442;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_443> AgradCdfLogLogistic_ffd_443;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_444> AgradCdfLogLogistic_ffd_444;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_445> AgradCdfLogLogistic_ffd_445;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_446> AgradCdfLogLogistic_ffd_446;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffd_447> AgradCdfLogLogistic_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_400, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_401, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_402, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_403, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_404, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_405, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_406, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_407, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_408, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_409, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_410, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_411, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_412, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_413, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_414, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_415, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_416, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_417, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_418, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_419, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_420, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_421, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_422, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_423, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_424, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_425, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_426, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_427, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_428, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_429, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_430, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_431, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_432, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_433, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_434, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_435, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_436, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_437, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_438, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_439, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_440, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_441, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_442, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_443, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_444, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_445, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_446, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffd_447, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffd_447);
