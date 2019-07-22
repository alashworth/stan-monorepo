#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_400> AgradCcdfLogGamma_ffd_400;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_401> AgradCcdfLogGamma_ffd_401;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_402> AgradCcdfLogGamma_ffd_402;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_403> AgradCcdfLogGamma_ffd_403;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_404> AgradCcdfLogGamma_ffd_404;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_405> AgradCcdfLogGamma_ffd_405;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_406> AgradCcdfLogGamma_ffd_406;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_407> AgradCcdfLogGamma_ffd_407;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_408> AgradCcdfLogGamma_ffd_408;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_409> AgradCcdfLogGamma_ffd_409;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_410> AgradCcdfLogGamma_ffd_410;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_411> AgradCcdfLogGamma_ffd_411;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_412> AgradCcdfLogGamma_ffd_412;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_413> AgradCcdfLogGamma_ffd_413;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_414> AgradCcdfLogGamma_ffd_414;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_415> AgradCcdfLogGamma_ffd_415;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_416> AgradCcdfLogGamma_ffd_416;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_417> AgradCcdfLogGamma_ffd_417;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_418> AgradCcdfLogGamma_ffd_418;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_419> AgradCcdfLogGamma_ffd_419;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_420> AgradCcdfLogGamma_ffd_420;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_421> AgradCcdfLogGamma_ffd_421;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_422> AgradCcdfLogGamma_ffd_422;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_423> AgradCcdfLogGamma_ffd_423;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_424> AgradCcdfLogGamma_ffd_424;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_425> AgradCcdfLogGamma_ffd_425;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_426> AgradCcdfLogGamma_ffd_426;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_427> AgradCcdfLogGamma_ffd_427;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_428> AgradCcdfLogGamma_ffd_428;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_429> AgradCcdfLogGamma_ffd_429;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_430> AgradCcdfLogGamma_ffd_430;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_431> AgradCcdfLogGamma_ffd_431;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_432> AgradCcdfLogGamma_ffd_432;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_433> AgradCcdfLogGamma_ffd_433;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_434> AgradCcdfLogGamma_ffd_434;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_435> AgradCcdfLogGamma_ffd_435;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_436> AgradCcdfLogGamma_ffd_436;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_437> AgradCcdfLogGamma_ffd_437;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_438> AgradCcdfLogGamma_ffd_438;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_439> AgradCcdfLogGamma_ffd_439;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_440> AgradCcdfLogGamma_ffd_440;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_441> AgradCcdfLogGamma_ffd_441;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_442> AgradCcdfLogGamma_ffd_442;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_443> AgradCcdfLogGamma_ffd_443;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_444> AgradCcdfLogGamma_ffd_444;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_445> AgradCcdfLogGamma_ffd_445;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_446> AgradCcdfLogGamma_ffd_446;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_447> AgradCcdfLogGamma_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_400, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_401, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_402, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_403, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_404, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_405, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_406, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_407, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_408, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_409, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_410, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_411, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_412, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_413, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_414, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_415, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_416, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_417, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_418, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_419, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_420, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_421, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_422, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_423, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_424, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_425, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_426, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_427, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_428, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_429, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_430, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_431, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_432, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_433, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_434, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_435, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_436, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_437, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_438, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_439, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_440, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_441, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_442, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_443, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_444, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_445, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_446, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_447, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_447);

