#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <scaled_inv_chi_square/scaled_inv_chi_square_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty, empty> type_fv_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty, empty> type_fv_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty, empty> type_fv_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty, empty> type_fv_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty, empty> type_fv_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty, empty> type_fv_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty, empty> type_fv_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty> type_fv_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_447;

typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_400> AgradCdfScaledInvChiSquare_fv_400;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_401> AgradCdfScaledInvChiSquare_fv_401;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_402> AgradCdfScaledInvChiSquare_fv_402;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_403> AgradCdfScaledInvChiSquare_fv_403;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_404> AgradCdfScaledInvChiSquare_fv_404;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_405> AgradCdfScaledInvChiSquare_fv_405;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_406> AgradCdfScaledInvChiSquare_fv_406;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_407> AgradCdfScaledInvChiSquare_fv_407;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_408> AgradCdfScaledInvChiSquare_fv_408;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_409> AgradCdfScaledInvChiSquare_fv_409;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_410> AgradCdfScaledInvChiSquare_fv_410;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_411> AgradCdfScaledInvChiSquare_fv_411;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_412> AgradCdfScaledInvChiSquare_fv_412;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_413> AgradCdfScaledInvChiSquare_fv_413;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_414> AgradCdfScaledInvChiSquare_fv_414;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_415> AgradCdfScaledInvChiSquare_fv_415;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_416> AgradCdfScaledInvChiSquare_fv_416;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_417> AgradCdfScaledInvChiSquare_fv_417;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_418> AgradCdfScaledInvChiSquare_fv_418;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_419> AgradCdfScaledInvChiSquare_fv_419;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_420> AgradCdfScaledInvChiSquare_fv_420;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_421> AgradCdfScaledInvChiSquare_fv_421;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_422> AgradCdfScaledInvChiSquare_fv_422;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_423> AgradCdfScaledInvChiSquare_fv_423;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_424> AgradCdfScaledInvChiSquare_fv_424;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_425> AgradCdfScaledInvChiSquare_fv_425;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_426> AgradCdfScaledInvChiSquare_fv_426;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_427> AgradCdfScaledInvChiSquare_fv_427;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_428> AgradCdfScaledInvChiSquare_fv_428;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_429> AgradCdfScaledInvChiSquare_fv_429;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_430> AgradCdfScaledInvChiSquare_fv_430;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_431> AgradCdfScaledInvChiSquare_fv_431;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_432> AgradCdfScaledInvChiSquare_fv_432;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_433> AgradCdfScaledInvChiSquare_fv_433;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_434> AgradCdfScaledInvChiSquare_fv_434;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_435> AgradCdfScaledInvChiSquare_fv_435;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_436> AgradCdfScaledInvChiSquare_fv_436;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_437> AgradCdfScaledInvChiSquare_fv_437;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_438> AgradCdfScaledInvChiSquare_fv_438;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_439> AgradCdfScaledInvChiSquare_fv_439;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_440> AgradCdfScaledInvChiSquare_fv_440;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_441> AgradCdfScaledInvChiSquare_fv_441;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_442> AgradCdfScaledInvChiSquare_fv_442;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_443> AgradCdfScaledInvChiSquare_fv_443;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_444> AgradCdfScaledInvChiSquare_fv_444;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_445> AgradCdfScaledInvChiSquare_fv_445;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_446> AgradCdfScaledInvChiSquare_fv_446;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_447> AgradCdfScaledInvChiSquare_fv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_400, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_401, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_402, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_403, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_404, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_405, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_406, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_407, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_408, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_409, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_410, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_411, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_412, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_413, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_414, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_415, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_416, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_417, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_418, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_419, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_420, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_421, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_422, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_423, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_424, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_425, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_426, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_427, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_428, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_429, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_430, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_431, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_432, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_433, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_434, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_435, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_436, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_437, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_438, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_439, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_440, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_441, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_442, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_443, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_444, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_445, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_446, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_447, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_447);

