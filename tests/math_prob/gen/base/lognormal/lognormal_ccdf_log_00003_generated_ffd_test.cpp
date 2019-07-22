#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/lognormal/lognormal_ccdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty, empty> type_ffd_300;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_301;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_302;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_303;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_304;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_305;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_306;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_307;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_308;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_309;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_310;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_311;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_312;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_313;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_314;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_315;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_316;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_317;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_318;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_ffd_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_ffd_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, fvar<fvar<double> >, empty, empty, empty> type_ffd_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_ffd_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffd_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, fvar<fvar<double> >, empty, empty, empty> type_ffd_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, double, empty, empty, empty> type_ffd_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, std::vector<double>, empty, empty, empty> type_ffd_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, fvar<fvar<double> >, empty, empty, empty> type_ffd_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, double, empty, empty, empty> type_ffd_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, std::vector<double>, empty, empty, empty> type_ffd_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty, empty> type_ffd_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_ffd_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_ffd_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, fvar<fvar<double> >, empty, empty, empty> type_ffd_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_ffd_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffd_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, fvar<fvar<double> >, empty, empty, empty> type_ffd_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_399;

typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_300> AgradCcdfLogLognormal_ffd_300;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_301> AgradCcdfLogLognormal_ffd_301;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_302> AgradCcdfLogLognormal_ffd_302;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_303> AgradCcdfLogLognormal_ffd_303;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_304> AgradCcdfLogLognormal_ffd_304;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_305> AgradCcdfLogLognormal_ffd_305;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_306> AgradCcdfLogLognormal_ffd_306;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_307> AgradCcdfLogLognormal_ffd_307;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_308> AgradCcdfLogLognormal_ffd_308;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_309> AgradCcdfLogLognormal_ffd_309;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_310> AgradCcdfLogLognormal_ffd_310;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_311> AgradCcdfLogLognormal_ffd_311;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_312> AgradCcdfLogLognormal_ffd_312;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_313> AgradCcdfLogLognormal_ffd_313;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_314> AgradCcdfLogLognormal_ffd_314;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_315> AgradCcdfLogLognormal_ffd_315;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_316> AgradCcdfLogLognormal_ffd_316;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_317> AgradCcdfLogLognormal_ffd_317;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_318> AgradCcdfLogLognormal_ffd_318;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_319> AgradCcdfLogLognormal_ffd_319;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_320> AgradCcdfLogLognormal_ffd_320;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_321> AgradCcdfLogLognormal_ffd_321;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_322> AgradCcdfLogLognormal_ffd_322;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_323> AgradCcdfLogLognormal_ffd_323;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_324> AgradCcdfLogLognormal_ffd_324;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_325> AgradCcdfLogLognormal_ffd_325;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_326> AgradCcdfLogLognormal_ffd_326;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_327> AgradCcdfLogLognormal_ffd_327;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_328> AgradCcdfLogLognormal_ffd_328;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_329> AgradCcdfLogLognormal_ffd_329;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_330> AgradCcdfLogLognormal_ffd_330;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_331> AgradCcdfLogLognormal_ffd_331;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_332> AgradCcdfLogLognormal_ffd_332;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_333> AgradCcdfLogLognormal_ffd_333;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_334> AgradCcdfLogLognormal_ffd_334;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_335> AgradCcdfLogLognormal_ffd_335;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_336> AgradCcdfLogLognormal_ffd_336;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_337> AgradCcdfLogLognormal_ffd_337;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_338> AgradCcdfLogLognormal_ffd_338;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_339> AgradCcdfLogLognormal_ffd_339;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_340> AgradCcdfLogLognormal_ffd_340;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_341> AgradCcdfLogLognormal_ffd_341;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_342> AgradCcdfLogLognormal_ffd_342;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_343> AgradCcdfLogLognormal_ffd_343;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_344> AgradCcdfLogLognormal_ffd_344;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_345> AgradCcdfLogLognormal_ffd_345;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_346> AgradCcdfLogLognormal_ffd_346;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_347> AgradCcdfLogLognormal_ffd_347;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_348> AgradCcdfLogLognormal_ffd_348;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_349> AgradCcdfLogLognormal_ffd_349;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_350> AgradCcdfLogLognormal_ffd_350;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_351> AgradCcdfLogLognormal_ffd_351;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_352> AgradCcdfLogLognormal_ffd_352;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_353> AgradCcdfLogLognormal_ffd_353;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_354> AgradCcdfLogLognormal_ffd_354;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_355> AgradCcdfLogLognormal_ffd_355;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_356> AgradCcdfLogLognormal_ffd_356;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_357> AgradCcdfLogLognormal_ffd_357;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_358> AgradCcdfLogLognormal_ffd_358;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_359> AgradCcdfLogLognormal_ffd_359;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_360> AgradCcdfLogLognormal_ffd_360;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_361> AgradCcdfLogLognormal_ffd_361;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_362> AgradCcdfLogLognormal_ffd_362;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_363> AgradCcdfLogLognormal_ffd_363;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_364> AgradCcdfLogLognormal_ffd_364;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_365> AgradCcdfLogLognormal_ffd_365;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_366> AgradCcdfLogLognormal_ffd_366;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_367> AgradCcdfLogLognormal_ffd_367;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_368> AgradCcdfLogLognormal_ffd_368;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_369> AgradCcdfLogLognormal_ffd_369;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_370> AgradCcdfLogLognormal_ffd_370;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_371> AgradCcdfLogLognormal_ffd_371;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_372> AgradCcdfLogLognormal_ffd_372;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_373> AgradCcdfLogLognormal_ffd_373;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_374> AgradCcdfLogLognormal_ffd_374;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_375> AgradCcdfLogLognormal_ffd_375;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_376> AgradCcdfLogLognormal_ffd_376;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_377> AgradCcdfLogLognormal_ffd_377;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_378> AgradCcdfLogLognormal_ffd_378;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_379> AgradCcdfLogLognormal_ffd_379;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_380> AgradCcdfLogLognormal_ffd_380;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_381> AgradCcdfLogLognormal_ffd_381;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_382> AgradCcdfLogLognormal_ffd_382;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_383> AgradCcdfLogLognormal_ffd_383;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_384> AgradCcdfLogLognormal_ffd_384;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_385> AgradCcdfLogLognormal_ffd_385;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_386> AgradCcdfLogLognormal_ffd_386;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_387> AgradCcdfLogLognormal_ffd_387;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_388> AgradCcdfLogLognormal_ffd_388;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_389> AgradCcdfLogLognormal_ffd_389;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_390> AgradCcdfLogLognormal_ffd_390;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_391> AgradCcdfLogLognormal_ffd_391;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_392> AgradCcdfLogLognormal_ffd_392;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_393> AgradCcdfLogLognormal_ffd_393;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_394> AgradCcdfLogLognormal_ffd_394;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_395> AgradCcdfLogLognormal_ffd_395;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_396> AgradCcdfLogLognormal_ffd_396;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_397> AgradCcdfLogLognormal_ffd_397;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_398> AgradCcdfLogLognormal_ffd_398;
typedef boost::mpl::vector<AgradCcdfLogLognormal, type_ffd_399> AgradCcdfLogLognormal_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_300, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_301, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_302, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_303, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_304, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_305, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_306, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_307, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_308, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_309, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_310, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_311, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_312, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_313, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_314, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_315, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_316, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_317, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_318, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_319, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_320, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_321, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_322, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_323, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_324, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_325, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_326, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_327, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_328, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_329, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_330, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_331, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_332, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_333, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_334, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_335, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_336, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_337, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_338, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_339, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_340, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_341, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_342, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_343, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_344, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_345, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_346, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_347, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_348, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_349, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_350, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_351, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_352, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_353, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_354, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_355, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_356, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_357, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_358, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_359, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_360, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_361, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_362, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_363, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_364, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_365, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_366, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_367, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_368, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_369, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_370, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_371, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_372, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_373, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_374, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_375, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_376, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_377, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_378, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_379, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_380, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_381, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_382, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_383, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_384, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_385, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_386, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_387, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_388, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_389, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_390, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_391, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_392, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_393, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_394, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_395, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_396, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_397, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_398, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLognormal_ffd_399, AgradCcdfLogTestFixture, AgradCcdfLogLognormal_ffd_399);

