#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/scaled_inv_chi_square/scaled_inv_chi_square_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, double, empty, empty, empty> type_fd_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<double>, empty, empty, empty> type_fd_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, fvar<double>, empty, empty, empty> type_fd_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, double, empty, empty, empty> type_fd_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<double>, empty, empty, empty> type_fd_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, fvar<double>, empty, empty, empty> type_fd_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty> type_fd_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_447;

typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_400> AgradCdfScaledInvChiSquare_fd_400;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_401> AgradCdfScaledInvChiSquare_fd_401;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_402> AgradCdfScaledInvChiSquare_fd_402;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_403> AgradCdfScaledInvChiSquare_fd_403;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_404> AgradCdfScaledInvChiSquare_fd_404;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_405> AgradCdfScaledInvChiSquare_fd_405;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_406> AgradCdfScaledInvChiSquare_fd_406;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_407> AgradCdfScaledInvChiSquare_fd_407;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_408> AgradCdfScaledInvChiSquare_fd_408;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_409> AgradCdfScaledInvChiSquare_fd_409;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_410> AgradCdfScaledInvChiSquare_fd_410;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_411> AgradCdfScaledInvChiSquare_fd_411;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_412> AgradCdfScaledInvChiSquare_fd_412;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_413> AgradCdfScaledInvChiSquare_fd_413;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_414> AgradCdfScaledInvChiSquare_fd_414;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_415> AgradCdfScaledInvChiSquare_fd_415;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_416> AgradCdfScaledInvChiSquare_fd_416;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_417> AgradCdfScaledInvChiSquare_fd_417;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_418> AgradCdfScaledInvChiSquare_fd_418;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_419> AgradCdfScaledInvChiSquare_fd_419;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_420> AgradCdfScaledInvChiSquare_fd_420;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_421> AgradCdfScaledInvChiSquare_fd_421;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_422> AgradCdfScaledInvChiSquare_fd_422;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_423> AgradCdfScaledInvChiSquare_fd_423;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_424> AgradCdfScaledInvChiSquare_fd_424;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_425> AgradCdfScaledInvChiSquare_fd_425;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_426> AgradCdfScaledInvChiSquare_fd_426;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_427> AgradCdfScaledInvChiSquare_fd_427;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_428> AgradCdfScaledInvChiSquare_fd_428;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_429> AgradCdfScaledInvChiSquare_fd_429;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_430> AgradCdfScaledInvChiSquare_fd_430;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_431> AgradCdfScaledInvChiSquare_fd_431;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_432> AgradCdfScaledInvChiSquare_fd_432;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_433> AgradCdfScaledInvChiSquare_fd_433;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_434> AgradCdfScaledInvChiSquare_fd_434;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_435> AgradCdfScaledInvChiSquare_fd_435;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_436> AgradCdfScaledInvChiSquare_fd_436;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_437> AgradCdfScaledInvChiSquare_fd_437;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_438> AgradCdfScaledInvChiSquare_fd_438;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_439> AgradCdfScaledInvChiSquare_fd_439;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_440> AgradCdfScaledInvChiSquare_fd_440;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_441> AgradCdfScaledInvChiSquare_fd_441;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_442> AgradCdfScaledInvChiSquare_fd_442;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_443> AgradCdfScaledInvChiSquare_fd_443;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_444> AgradCdfScaledInvChiSquare_fd_444;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_445> AgradCdfScaledInvChiSquare_fd_445;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_446> AgradCdfScaledInvChiSquare_fd_446;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_447> AgradCdfScaledInvChiSquare_fd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_400, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_401, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_402, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_403, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_404, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_405, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_406, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_407, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_408, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_409, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_410, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_411, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_412, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_413, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_414, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_415, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_416, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_417, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_418, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_419, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_420, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_421, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_422, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_423, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_424, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_425, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_426, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_427, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_428, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_429, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_430, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_431, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_432, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_433, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_434, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_435, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_436, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_437, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_438, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_439, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_440, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_441, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_442, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_443, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_444, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_445, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_446, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_447, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_447);
