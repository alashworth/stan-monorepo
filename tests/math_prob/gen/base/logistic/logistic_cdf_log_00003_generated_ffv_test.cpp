#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_300;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_301;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_302;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_303;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_304;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_305;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_306;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_307;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_308;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_309;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_310;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_311;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_312;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_313;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_314;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_315;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_316;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_317;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_318;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_ffv_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_ffv_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, fvar<fvar<var> >, empty, empty, empty> type_ffv_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_ffv_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffv_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, fvar<fvar<var> >, empty, empty, empty> type_ffv_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, double, empty, empty, empty> type_ffv_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, std::vector<double>, empty, empty, empty> type_ffv_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, fvar<fvar<var> >, empty, empty, empty> type_ffv_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, double, empty, empty, empty> type_ffv_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, std::vector<double>, empty, empty, empty> type_ffv_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_ffv_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_ffv_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, fvar<fvar<var> >, empty, empty, empty> type_ffv_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_ffv_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffv_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, fvar<fvar<var> >, empty, empty, empty> type_ffv_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_399;

typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_300> AgradCdfLogLogistic_ffv_300;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_301> AgradCdfLogLogistic_ffv_301;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_302> AgradCdfLogLogistic_ffv_302;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_303> AgradCdfLogLogistic_ffv_303;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_304> AgradCdfLogLogistic_ffv_304;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_305> AgradCdfLogLogistic_ffv_305;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_306> AgradCdfLogLogistic_ffv_306;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_307> AgradCdfLogLogistic_ffv_307;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_308> AgradCdfLogLogistic_ffv_308;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_309> AgradCdfLogLogistic_ffv_309;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_310> AgradCdfLogLogistic_ffv_310;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_311> AgradCdfLogLogistic_ffv_311;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_312> AgradCdfLogLogistic_ffv_312;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_313> AgradCdfLogLogistic_ffv_313;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_314> AgradCdfLogLogistic_ffv_314;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_315> AgradCdfLogLogistic_ffv_315;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_316> AgradCdfLogLogistic_ffv_316;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_317> AgradCdfLogLogistic_ffv_317;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_318> AgradCdfLogLogistic_ffv_318;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_319> AgradCdfLogLogistic_ffv_319;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_320> AgradCdfLogLogistic_ffv_320;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_321> AgradCdfLogLogistic_ffv_321;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_322> AgradCdfLogLogistic_ffv_322;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_323> AgradCdfLogLogistic_ffv_323;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_324> AgradCdfLogLogistic_ffv_324;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_325> AgradCdfLogLogistic_ffv_325;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_326> AgradCdfLogLogistic_ffv_326;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_327> AgradCdfLogLogistic_ffv_327;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_328> AgradCdfLogLogistic_ffv_328;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_329> AgradCdfLogLogistic_ffv_329;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_330> AgradCdfLogLogistic_ffv_330;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_331> AgradCdfLogLogistic_ffv_331;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_332> AgradCdfLogLogistic_ffv_332;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_333> AgradCdfLogLogistic_ffv_333;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_334> AgradCdfLogLogistic_ffv_334;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_335> AgradCdfLogLogistic_ffv_335;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_336> AgradCdfLogLogistic_ffv_336;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_337> AgradCdfLogLogistic_ffv_337;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_338> AgradCdfLogLogistic_ffv_338;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_339> AgradCdfLogLogistic_ffv_339;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_340> AgradCdfLogLogistic_ffv_340;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_341> AgradCdfLogLogistic_ffv_341;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_342> AgradCdfLogLogistic_ffv_342;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_343> AgradCdfLogLogistic_ffv_343;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_344> AgradCdfLogLogistic_ffv_344;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_345> AgradCdfLogLogistic_ffv_345;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_346> AgradCdfLogLogistic_ffv_346;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_347> AgradCdfLogLogistic_ffv_347;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_348> AgradCdfLogLogistic_ffv_348;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_349> AgradCdfLogLogistic_ffv_349;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_350> AgradCdfLogLogistic_ffv_350;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_351> AgradCdfLogLogistic_ffv_351;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_352> AgradCdfLogLogistic_ffv_352;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_353> AgradCdfLogLogistic_ffv_353;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_354> AgradCdfLogLogistic_ffv_354;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_355> AgradCdfLogLogistic_ffv_355;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_356> AgradCdfLogLogistic_ffv_356;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_357> AgradCdfLogLogistic_ffv_357;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_358> AgradCdfLogLogistic_ffv_358;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_359> AgradCdfLogLogistic_ffv_359;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_360> AgradCdfLogLogistic_ffv_360;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_361> AgradCdfLogLogistic_ffv_361;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_362> AgradCdfLogLogistic_ffv_362;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_363> AgradCdfLogLogistic_ffv_363;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_364> AgradCdfLogLogistic_ffv_364;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_365> AgradCdfLogLogistic_ffv_365;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_366> AgradCdfLogLogistic_ffv_366;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_367> AgradCdfLogLogistic_ffv_367;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_368> AgradCdfLogLogistic_ffv_368;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_369> AgradCdfLogLogistic_ffv_369;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_370> AgradCdfLogLogistic_ffv_370;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_371> AgradCdfLogLogistic_ffv_371;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_372> AgradCdfLogLogistic_ffv_372;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_373> AgradCdfLogLogistic_ffv_373;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_374> AgradCdfLogLogistic_ffv_374;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_375> AgradCdfLogLogistic_ffv_375;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_376> AgradCdfLogLogistic_ffv_376;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_377> AgradCdfLogLogistic_ffv_377;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_378> AgradCdfLogLogistic_ffv_378;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_379> AgradCdfLogLogistic_ffv_379;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_380> AgradCdfLogLogistic_ffv_380;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_381> AgradCdfLogLogistic_ffv_381;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_382> AgradCdfLogLogistic_ffv_382;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_383> AgradCdfLogLogistic_ffv_383;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_384> AgradCdfLogLogistic_ffv_384;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_385> AgradCdfLogLogistic_ffv_385;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_386> AgradCdfLogLogistic_ffv_386;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_387> AgradCdfLogLogistic_ffv_387;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_388> AgradCdfLogLogistic_ffv_388;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_389> AgradCdfLogLogistic_ffv_389;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_390> AgradCdfLogLogistic_ffv_390;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_391> AgradCdfLogLogistic_ffv_391;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_392> AgradCdfLogLogistic_ffv_392;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_393> AgradCdfLogLogistic_ffv_393;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_394> AgradCdfLogLogistic_ffv_394;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_395> AgradCdfLogLogistic_ffv_395;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_396> AgradCdfLogLogistic_ffv_396;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_397> AgradCdfLogLogistic_ffv_397;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_398> AgradCdfLogLogistic_ffv_398;
typedef boost::mpl::vector<AgradCdfLogLogistic, type_ffv_399> AgradCdfLogLogistic_ffv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_300, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_301, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_302, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_303, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_304, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_305, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_306, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_307, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_308, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_309, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_310, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_311, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_312, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_313, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_314, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_315, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_316, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_317, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_318, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_319, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_320, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_321, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_322, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_323, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_324, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_325, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_326, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_327, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_328, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_329, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_330, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_331, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_332, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_333, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_334, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_335, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_336, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_337, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_338, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_339, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_340, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_341, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_342, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_343, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_344, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_345, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_346, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_347, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_348, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_349, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_350, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_351, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_352, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_353, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_354, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_355, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_356, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_357, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_358, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_359, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_360, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_361, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_362, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_363, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_364, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_365, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_366, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_367, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_368, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_369, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_370, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_371, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_372, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_373, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_374, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_375, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_376, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_377, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_378, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_379, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_380, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_381, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_382, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_383, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_384, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_385, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_386, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_387, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_388, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_389, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_390, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_391, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_392, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_393, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_394, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_395, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_396, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_397, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_398, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogLogistic_ffv_399, AgradCdfLogTestFixture, AgradCdfLogLogistic_ffv_399);
