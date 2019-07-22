#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <uniform/uniform_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_400> AgradCcdfLogUniform_ffv_400;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_401> AgradCcdfLogUniform_ffv_401;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_402> AgradCcdfLogUniform_ffv_402;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_403> AgradCcdfLogUniform_ffv_403;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_404> AgradCcdfLogUniform_ffv_404;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_405> AgradCcdfLogUniform_ffv_405;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_406> AgradCcdfLogUniform_ffv_406;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_407> AgradCcdfLogUniform_ffv_407;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_408> AgradCcdfLogUniform_ffv_408;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_409> AgradCcdfLogUniform_ffv_409;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_410> AgradCcdfLogUniform_ffv_410;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_411> AgradCcdfLogUniform_ffv_411;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_412> AgradCcdfLogUniform_ffv_412;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_413> AgradCcdfLogUniform_ffv_413;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_414> AgradCcdfLogUniform_ffv_414;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_415> AgradCcdfLogUniform_ffv_415;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_416> AgradCcdfLogUniform_ffv_416;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_417> AgradCcdfLogUniform_ffv_417;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_418> AgradCcdfLogUniform_ffv_418;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_419> AgradCcdfLogUniform_ffv_419;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_420> AgradCcdfLogUniform_ffv_420;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_421> AgradCcdfLogUniform_ffv_421;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_422> AgradCcdfLogUniform_ffv_422;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_423> AgradCcdfLogUniform_ffv_423;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_424> AgradCcdfLogUniform_ffv_424;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_425> AgradCcdfLogUniform_ffv_425;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_426> AgradCcdfLogUniform_ffv_426;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_427> AgradCcdfLogUniform_ffv_427;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_428> AgradCcdfLogUniform_ffv_428;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_429> AgradCcdfLogUniform_ffv_429;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_430> AgradCcdfLogUniform_ffv_430;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_431> AgradCcdfLogUniform_ffv_431;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_432> AgradCcdfLogUniform_ffv_432;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_433> AgradCcdfLogUniform_ffv_433;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_434> AgradCcdfLogUniform_ffv_434;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_435> AgradCcdfLogUniform_ffv_435;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_436> AgradCcdfLogUniform_ffv_436;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_437> AgradCcdfLogUniform_ffv_437;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_438> AgradCcdfLogUniform_ffv_438;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_439> AgradCcdfLogUniform_ffv_439;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_440> AgradCcdfLogUniform_ffv_440;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_441> AgradCcdfLogUniform_ffv_441;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_442> AgradCcdfLogUniform_ffv_442;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_443> AgradCcdfLogUniform_ffv_443;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_444> AgradCcdfLogUniform_ffv_444;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_445> AgradCcdfLogUniform_ffv_445;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_446> AgradCcdfLogUniform_ffv_446;
typedef boost::mpl::vector<AgradCcdfLogUniform, type_ffv_447> AgradCcdfLogUniform_ffv_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_400, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_401, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_402, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_403, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_404, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_405, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_406, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_407, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_408, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_409, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_410, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_411, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_412, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_413, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_414, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_415, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_416, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_417, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_418, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_419, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_420, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_421, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_422, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_423, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_424, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_425, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_426, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_427, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_428, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_429, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_430, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_431, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_432, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_433, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_434, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_435, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_436, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_437, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_438, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_439, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_440, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_441, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_442, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_443, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_444, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_445, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_446, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogUniform_ffv_447, AgradCcdfLogTestFixture, AgradCcdfLogUniform_ffv_447);

