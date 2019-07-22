#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_400> AgradCcdfLogInvGamma_ffd_400;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_401> AgradCcdfLogInvGamma_ffd_401;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_402> AgradCcdfLogInvGamma_ffd_402;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_403> AgradCcdfLogInvGamma_ffd_403;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_404> AgradCcdfLogInvGamma_ffd_404;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_405> AgradCcdfLogInvGamma_ffd_405;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_406> AgradCcdfLogInvGamma_ffd_406;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_407> AgradCcdfLogInvGamma_ffd_407;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_408> AgradCcdfLogInvGamma_ffd_408;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_409> AgradCcdfLogInvGamma_ffd_409;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_410> AgradCcdfLogInvGamma_ffd_410;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_411> AgradCcdfLogInvGamma_ffd_411;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_412> AgradCcdfLogInvGamma_ffd_412;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_413> AgradCcdfLogInvGamma_ffd_413;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_414> AgradCcdfLogInvGamma_ffd_414;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_415> AgradCcdfLogInvGamma_ffd_415;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_416> AgradCcdfLogInvGamma_ffd_416;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_417> AgradCcdfLogInvGamma_ffd_417;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_418> AgradCcdfLogInvGamma_ffd_418;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_419> AgradCcdfLogInvGamma_ffd_419;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_420> AgradCcdfLogInvGamma_ffd_420;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_421> AgradCcdfLogInvGamma_ffd_421;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_422> AgradCcdfLogInvGamma_ffd_422;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_423> AgradCcdfLogInvGamma_ffd_423;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_424> AgradCcdfLogInvGamma_ffd_424;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_425> AgradCcdfLogInvGamma_ffd_425;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_426> AgradCcdfLogInvGamma_ffd_426;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_427> AgradCcdfLogInvGamma_ffd_427;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_428> AgradCcdfLogInvGamma_ffd_428;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_429> AgradCcdfLogInvGamma_ffd_429;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_430> AgradCcdfLogInvGamma_ffd_430;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_431> AgradCcdfLogInvGamma_ffd_431;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_432> AgradCcdfLogInvGamma_ffd_432;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_433> AgradCcdfLogInvGamma_ffd_433;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_434> AgradCcdfLogInvGamma_ffd_434;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_435> AgradCcdfLogInvGamma_ffd_435;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_436> AgradCcdfLogInvGamma_ffd_436;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_437> AgradCcdfLogInvGamma_ffd_437;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_438> AgradCcdfLogInvGamma_ffd_438;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_439> AgradCcdfLogInvGamma_ffd_439;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_440> AgradCcdfLogInvGamma_ffd_440;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_441> AgradCcdfLogInvGamma_ffd_441;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_442> AgradCcdfLogInvGamma_ffd_442;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_443> AgradCcdfLogInvGamma_ffd_443;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_444> AgradCcdfLogInvGamma_ffd_444;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_445> AgradCcdfLogInvGamma_ffd_445;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_446> AgradCcdfLogInvGamma_ffd_446;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_447> AgradCcdfLogInvGamma_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_400, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_401, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_402, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_403, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_404, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_405, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_406, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_407, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_408, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_409, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_410, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_411, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_412, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_413, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_414, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_415, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_416, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_417, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_418, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_419, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_420, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_421, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_422, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_423, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_424, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_425, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_426, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_427, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_428, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_429, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_430, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_431, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_432, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_433, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_434, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_435, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_436, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_437, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_438, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_439, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_440, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_441, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_442, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_443, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_444, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_445, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_446, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_447, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_447);

