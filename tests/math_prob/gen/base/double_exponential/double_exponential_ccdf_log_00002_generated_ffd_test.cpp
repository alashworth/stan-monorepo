#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <double_exponential/double_exponential_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_400> AgradCcdfLogDoubleExponential_ffd_400;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_401> AgradCcdfLogDoubleExponential_ffd_401;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_402> AgradCcdfLogDoubleExponential_ffd_402;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_403> AgradCcdfLogDoubleExponential_ffd_403;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_404> AgradCcdfLogDoubleExponential_ffd_404;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_405> AgradCcdfLogDoubleExponential_ffd_405;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_406> AgradCcdfLogDoubleExponential_ffd_406;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_407> AgradCcdfLogDoubleExponential_ffd_407;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_408> AgradCcdfLogDoubleExponential_ffd_408;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_409> AgradCcdfLogDoubleExponential_ffd_409;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_410> AgradCcdfLogDoubleExponential_ffd_410;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_411> AgradCcdfLogDoubleExponential_ffd_411;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_412> AgradCcdfLogDoubleExponential_ffd_412;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_413> AgradCcdfLogDoubleExponential_ffd_413;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_414> AgradCcdfLogDoubleExponential_ffd_414;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_415> AgradCcdfLogDoubleExponential_ffd_415;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_416> AgradCcdfLogDoubleExponential_ffd_416;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_417> AgradCcdfLogDoubleExponential_ffd_417;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_418> AgradCcdfLogDoubleExponential_ffd_418;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_419> AgradCcdfLogDoubleExponential_ffd_419;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_420> AgradCcdfLogDoubleExponential_ffd_420;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_421> AgradCcdfLogDoubleExponential_ffd_421;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_422> AgradCcdfLogDoubleExponential_ffd_422;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_423> AgradCcdfLogDoubleExponential_ffd_423;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_424> AgradCcdfLogDoubleExponential_ffd_424;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_425> AgradCcdfLogDoubleExponential_ffd_425;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_426> AgradCcdfLogDoubleExponential_ffd_426;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_427> AgradCcdfLogDoubleExponential_ffd_427;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_428> AgradCcdfLogDoubleExponential_ffd_428;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_429> AgradCcdfLogDoubleExponential_ffd_429;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_430> AgradCcdfLogDoubleExponential_ffd_430;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_431> AgradCcdfLogDoubleExponential_ffd_431;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_432> AgradCcdfLogDoubleExponential_ffd_432;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_433> AgradCcdfLogDoubleExponential_ffd_433;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_434> AgradCcdfLogDoubleExponential_ffd_434;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_435> AgradCcdfLogDoubleExponential_ffd_435;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_436> AgradCcdfLogDoubleExponential_ffd_436;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_437> AgradCcdfLogDoubleExponential_ffd_437;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_438> AgradCcdfLogDoubleExponential_ffd_438;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_439> AgradCcdfLogDoubleExponential_ffd_439;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_440> AgradCcdfLogDoubleExponential_ffd_440;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_441> AgradCcdfLogDoubleExponential_ffd_441;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_442> AgradCcdfLogDoubleExponential_ffd_442;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_443> AgradCcdfLogDoubleExponential_ffd_443;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_444> AgradCcdfLogDoubleExponential_ffd_444;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_445> AgradCcdfLogDoubleExponential_ffd_445;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_446> AgradCcdfLogDoubleExponential_ffd_446;
typedef boost::mpl::vector<AgradCcdfLogDoubleExponential, type_ffd_447> AgradCcdfLogDoubleExponential_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_400, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_401, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_402, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_403, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_404, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_405, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_406, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_407, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_408, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_409, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_410, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_411, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_412, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_413, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_414, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_415, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_416, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_417, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_418, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_419, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_420, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_421, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_422, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_423, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_424, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_425, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_426, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_427, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_428, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_429, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_430, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_431, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_432, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_433, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_434, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_435, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_436, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_437, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_438, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_439, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_440, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_441, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_442, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_443, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_444, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_445, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_446, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogDoubleExponential_ffd_447, AgradCcdfLogTestFixture, AgradCcdfLogDoubleExponential_ffd_447);

