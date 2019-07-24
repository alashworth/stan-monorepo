#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/scaled_inv_chi_square/scaled_inv_chi_square_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_400> AgradCdfScaledInvChiSquare_ffd_400;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_401> AgradCdfScaledInvChiSquare_ffd_401;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_402> AgradCdfScaledInvChiSquare_ffd_402;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_403> AgradCdfScaledInvChiSquare_ffd_403;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_404> AgradCdfScaledInvChiSquare_ffd_404;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_405> AgradCdfScaledInvChiSquare_ffd_405;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_406> AgradCdfScaledInvChiSquare_ffd_406;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_407> AgradCdfScaledInvChiSquare_ffd_407;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_408> AgradCdfScaledInvChiSquare_ffd_408;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_409> AgradCdfScaledInvChiSquare_ffd_409;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_410> AgradCdfScaledInvChiSquare_ffd_410;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_411> AgradCdfScaledInvChiSquare_ffd_411;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_412> AgradCdfScaledInvChiSquare_ffd_412;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_413> AgradCdfScaledInvChiSquare_ffd_413;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_414> AgradCdfScaledInvChiSquare_ffd_414;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_415> AgradCdfScaledInvChiSquare_ffd_415;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_416> AgradCdfScaledInvChiSquare_ffd_416;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_417> AgradCdfScaledInvChiSquare_ffd_417;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_418> AgradCdfScaledInvChiSquare_ffd_418;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_419> AgradCdfScaledInvChiSquare_ffd_419;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_420> AgradCdfScaledInvChiSquare_ffd_420;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_421> AgradCdfScaledInvChiSquare_ffd_421;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_422> AgradCdfScaledInvChiSquare_ffd_422;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_423> AgradCdfScaledInvChiSquare_ffd_423;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_424> AgradCdfScaledInvChiSquare_ffd_424;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_425> AgradCdfScaledInvChiSquare_ffd_425;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_426> AgradCdfScaledInvChiSquare_ffd_426;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_427> AgradCdfScaledInvChiSquare_ffd_427;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_428> AgradCdfScaledInvChiSquare_ffd_428;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_429> AgradCdfScaledInvChiSquare_ffd_429;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_430> AgradCdfScaledInvChiSquare_ffd_430;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_431> AgradCdfScaledInvChiSquare_ffd_431;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_432> AgradCdfScaledInvChiSquare_ffd_432;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_433> AgradCdfScaledInvChiSquare_ffd_433;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_434> AgradCdfScaledInvChiSquare_ffd_434;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_435> AgradCdfScaledInvChiSquare_ffd_435;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_436> AgradCdfScaledInvChiSquare_ffd_436;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_437> AgradCdfScaledInvChiSquare_ffd_437;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_438> AgradCdfScaledInvChiSquare_ffd_438;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_439> AgradCdfScaledInvChiSquare_ffd_439;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_440> AgradCdfScaledInvChiSquare_ffd_440;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_441> AgradCdfScaledInvChiSquare_ffd_441;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_442> AgradCdfScaledInvChiSquare_ffd_442;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_443> AgradCdfScaledInvChiSquare_ffd_443;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_444> AgradCdfScaledInvChiSquare_ffd_444;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_445> AgradCdfScaledInvChiSquare_ffd_445;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_446> AgradCdfScaledInvChiSquare_ffd_446;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_ffd_447> AgradCdfScaledInvChiSquare_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_400, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_401, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_402, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_403, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_404, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_405, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_406, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_407, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_408, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_409, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_410, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_411, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_412, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_413, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_414, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_415, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_416, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_417, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_418, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_419, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_420, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_421, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_422, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_423, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_424, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_425, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_426, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_427, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_428, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_429, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_430, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_431, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_432, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_433, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_434, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_435, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_436, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_437, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_438, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_439, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_440, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_441, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_442, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_443, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_444, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_445, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_446, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_ffd_447, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_ffd_447);
