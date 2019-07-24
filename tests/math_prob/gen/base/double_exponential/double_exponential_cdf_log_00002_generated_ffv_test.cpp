#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <double_exponential/double_exponential_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_400;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_401;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_402;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_403;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_404;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_405;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_406;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_407;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_408;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_409;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_410;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_411;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_412;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_413;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_414;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_415;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, double, empty, empty, empty> type_ffv_416;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<double>, empty, empty, empty> type_ffv_417;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_418;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_419;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, fvar<fvar<var> >, empty, empty, empty> type_ffv_420;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_421;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_422;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_423;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, double, empty, empty, empty> type_ffv_424;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<double>, empty, empty, empty> type_ffv_425;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_426;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_427;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_428;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_429;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_430;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_431;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_432;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_433;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_434;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_435;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_436;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_437;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_438;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_439;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_440;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_441;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_442;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_443;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_444;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_445;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_446;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_447;

typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_400> AgradCdfLogDoubleExponential_ffv_400;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_401> AgradCdfLogDoubleExponential_ffv_401;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_402> AgradCdfLogDoubleExponential_ffv_402;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_403> AgradCdfLogDoubleExponential_ffv_403;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_404> AgradCdfLogDoubleExponential_ffv_404;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_405> AgradCdfLogDoubleExponential_ffv_405;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_406> AgradCdfLogDoubleExponential_ffv_406;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_407> AgradCdfLogDoubleExponential_ffv_407;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_408> AgradCdfLogDoubleExponential_ffv_408;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_409> AgradCdfLogDoubleExponential_ffv_409;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_410> AgradCdfLogDoubleExponential_ffv_410;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_411> AgradCdfLogDoubleExponential_ffv_411;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_412> AgradCdfLogDoubleExponential_ffv_412;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_413> AgradCdfLogDoubleExponential_ffv_413;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_414> AgradCdfLogDoubleExponential_ffv_414;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_415> AgradCdfLogDoubleExponential_ffv_415;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_416> AgradCdfLogDoubleExponential_ffv_416;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_417> AgradCdfLogDoubleExponential_ffv_417;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_418> AgradCdfLogDoubleExponential_ffv_418;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_419> AgradCdfLogDoubleExponential_ffv_419;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_420> AgradCdfLogDoubleExponential_ffv_420;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_421> AgradCdfLogDoubleExponential_ffv_421;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_422> AgradCdfLogDoubleExponential_ffv_422;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_423> AgradCdfLogDoubleExponential_ffv_423;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_424> AgradCdfLogDoubleExponential_ffv_424;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_425> AgradCdfLogDoubleExponential_ffv_425;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_426> AgradCdfLogDoubleExponential_ffv_426;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_427> AgradCdfLogDoubleExponential_ffv_427;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_428> AgradCdfLogDoubleExponential_ffv_428;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_429> AgradCdfLogDoubleExponential_ffv_429;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_430> AgradCdfLogDoubleExponential_ffv_430;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_431> AgradCdfLogDoubleExponential_ffv_431;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_432> AgradCdfLogDoubleExponential_ffv_432;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_433> AgradCdfLogDoubleExponential_ffv_433;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_434> AgradCdfLogDoubleExponential_ffv_434;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_435> AgradCdfLogDoubleExponential_ffv_435;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_436> AgradCdfLogDoubleExponential_ffv_436;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_437> AgradCdfLogDoubleExponential_ffv_437;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_438> AgradCdfLogDoubleExponential_ffv_438;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_439> AgradCdfLogDoubleExponential_ffv_439;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_440> AgradCdfLogDoubleExponential_ffv_440;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_441> AgradCdfLogDoubleExponential_ffv_441;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_442> AgradCdfLogDoubleExponential_ffv_442;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_443> AgradCdfLogDoubleExponential_ffv_443;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_444> AgradCdfLogDoubleExponential_ffv_444;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_445> AgradCdfLogDoubleExponential_ffv_445;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_446> AgradCdfLogDoubleExponential_ffv_446;
typedef boost::mpl::vector<AgradCdfLogDoubleExponential, type_ffv_447> AgradCdfLogDoubleExponential_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_400, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_401, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_402, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_403, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_404, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_405, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_406, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_407, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_408, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_409, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_410, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_411, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_412, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_413, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_414, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_415, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_416, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_417, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_418, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_419, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_420, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_421, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_422, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_423, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_424, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_425, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_426, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_427, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_428, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_429, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_430, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_431, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_432, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_433, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_434, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_435, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_436, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_437, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_438, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_439, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_440, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_441, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_442, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_443, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_444, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_445, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_446, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogDoubleExponential_ffv_447, AgradCdfLogTestFixture, AgradCdfLogDoubleExponential_ffv_447);
