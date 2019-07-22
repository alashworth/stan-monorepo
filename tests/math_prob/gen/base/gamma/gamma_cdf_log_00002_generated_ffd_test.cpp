#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <gamma/gamma_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_400> AgradCdfLogGamma_ffd_400;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_401> AgradCdfLogGamma_ffd_401;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_402> AgradCdfLogGamma_ffd_402;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_403> AgradCdfLogGamma_ffd_403;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_404> AgradCdfLogGamma_ffd_404;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_405> AgradCdfLogGamma_ffd_405;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_406> AgradCdfLogGamma_ffd_406;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_407> AgradCdfLogGamma_ffd_407;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_408> AgradCdfLogGamma_ffd_408;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_409> AgradCdfLogGamma_ffd_409;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_410> AgradCdfLogGamma_ffd_410;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_411> AgradCdfLogGamma_ffd_411;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_412> AgradCdfLogGamma_ffd_412;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_413> AgradCdfLogGamma_ffd_413;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_414> AgradCdfLogGamma_ffd_414;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_415> AgradCdfLogGamma_ffd_415;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_416> AgradCdfLogGamma_ffd_416;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_417> AgradCdfLogGamma_ffd_417;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_418> AgradCdfLogGamma_ffd_418;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_419> AgradCdfLogGamma_ffd_419;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_420> AgradCdfLogGamma_ffd_420;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_421> AgradCdfLogGamma_ffd_421;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_422> AgradCdfLogGamma_ffd_422;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_423> AgradCdfLogGamma_ffd_423;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_424> AgradCdfLogGamma_ffd_424;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_425> AgradCdfLogGamma_ffd_425;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_426> AgradCdfLogGamma_ffd_426;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_427> AgradCdfLogGamma_ffd_427;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_428> AgradCdfLogGamma_ffd_428;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_429> AgradCdfLogGamma_ffd_429;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_430> AgradCdfLogGamma_ffd_430;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_431> AgradCdfLogGamma_ffd_431;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_432> AgradCdfLogGamma_ffd_432;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_433> AgradCdfLogGamma_ffd_433;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_434> AgradCdfLogGamma_ffd_434;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_435> AgradCdfLogGamma_ffd_435;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_436> AgradCdfLogGamma_ffd_436;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_437> AgradCdfLogGamma_ffd_437;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_438> AgradCdfLogGamma_ffd_438;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_439> AgradCdfLogGamma_ffd_439;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_440> AgradCdfLogGamma_ffd_440;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_441> AgradCdfLogGamma_ffd_441;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_442> AgradCdfLogGamma_ffd_442;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_443> AgradCdfLogGamma_ffd_443;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_444> AgradCdfLogGamma_ffd_444;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_445> AgradCdfLogGamma_ffd_445;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_446> AgradCdfLogGamma_ffd_446;
typedef boost::mpl::vector<AgradCdfLogGamma, type_ffd_447> AgradCdfLogGamma_ffd_447;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_400, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_400);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_401, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_401);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_402, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_402);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_403, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_403);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_404, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_404);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_405, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_405);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_406, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_406);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_407, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_407);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_408, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_408);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_409, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_409);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_410, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_410);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_411, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_411);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_412, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_412);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_413, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_413);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_414, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_414);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_415, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_415);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_416, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_416);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_417, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_417);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_418, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_418);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_419, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_419);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_420, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_420);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_421, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_421);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_422, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_422);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_423, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_423);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_424, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_424);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_425, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_425);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_426, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_426);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_427, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_427);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_428, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_428);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_429, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_429);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_430, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_430);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_431, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_431);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_432, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_432);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_433, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_433);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_434, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_434);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_435, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_435);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_436, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_436);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_437, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_437);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_438, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_438);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_439, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_439);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_440, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_440);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_441, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_441);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_442, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_442);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_443, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_443);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_444, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_444);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_445, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_445);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_446, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_446);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogGamma_ffd_447, AgradCdfLogTestFixture, AgradCdfLogGamma_ffd_447);

