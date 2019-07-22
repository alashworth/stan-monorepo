#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <logistic/logistic_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_400> AgradCcdfLogLogistic_ffd_400;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_401> AgradCcdfLogLogistic_ffd_401;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_402> AgradCcdfLogLogistic_ffd_402;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_403> AgradCcdfLogLogistic_ffd_403;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_404> AgradCcdfLogLogistic_ffd_404;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_405> AgradCcdfLogLogistic_ffd_405;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_406> AgradCcdfLogLogistic_ffd_406;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_407> AgradCcdfLogLogistic_ffd_407;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_408> AgradCcdfLogLogistic_ffd_408;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_409> AgradCcdfLogLogistic_ffd_409;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_410> AgradCcdfLogLogistic_ffd_410;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_411> AgradCcdfLogLogistic_ffd_411;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_412> AgradCcdfLogLogistic_ffd_412;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_413> AgradCcdfLogLogistic_ffd_413;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_414> AgradCcdfLogLogistic_ffd_414;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_415> AgradCcdfLogLogistic_ffd_415;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_416> AgradCcdfLogLogistic_ffd_416;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_417> AgradCcdfLogLogistic_ffd_417;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_418> AgradCcdfLogLogistic_ffd_418;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_419> AgradCcdfLogLogistic_ffd_419;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_420> AgradCcdfLogLogistic_ffd_420;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_421> AgradCcdfLogLogistic_ffd_421;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_422> AgradCcdfLogLogistic_ffd_422;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_423> AgradCcdfLogLogistic_ffd_423;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_424> AgradCcdfLogLogistic_ffd_424;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_425> AgradCcdfLogLogistic_ffd_425;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_426> AgradCcdfLogLogistic_ffd_426;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_427> AgradCcdfLogLogistic_ffd_427;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_428> AgradCcdfLogLogistic_ffd_428;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_429> AgradCcdfLogLogistic_ffd_429;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_430> AgradCcdfLogLogistic_ffd_430;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_431> AgradCcdfLogLogistic_ffd_431;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_432> AgradCcdfLogLogistic_ffd_432;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_433> AgradCcdfLogLogistic_ffd_433;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_434> AgradCcdfLogLogistic_ffd_434;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_435> AgradCcdfLogLogistic_ffd_435;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_436> AgradCcdfLogLogistic_ffd_436;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_437> AgradCcdfLogLogistic_ffd_437;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_438> AgradCcdfLogLogistic_ffd_438;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_439> AgradCcdfLogLogistic_ffd_439;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_440> AgradCcdfLogLogistic_ffd_440;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_441> AgradCcdfLogLogistic_ffd_441;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_442> AgradCcdfLogLogistic_ffd_442;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_443> AgradCcdfLogLogistic_ffd_443;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_444> AgradCcdfLogLogistic_ffd_444;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_445> AgradCcdfLogLogistic_ffd_445;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_446> AgradCcdfLogLogistic_ffd_446;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_ffd_447> AgradCcdfLogLogistic_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_400, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_401, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_402, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_403, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_404, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_405, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_406, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_407, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_408, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_409, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_410, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_411, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_412, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_413, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_414, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_415, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_416, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_417, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_418, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_419, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_420, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_421, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_422, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_423, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_424, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_425, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_426, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_427, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_428, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_429, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_430, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_431, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_432, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_433, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_434, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_435, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_436, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_437, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_438, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_439, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_440, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_441, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_442, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_443, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_444, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_445, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_446, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_ffd_447, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_ffd_447);

