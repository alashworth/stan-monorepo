#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_cdf_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, fvar<var>, empty, empty, empty> type_fv_300;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty> type_fv_301;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_302;
typedef boost::mpl::vector<std::vector<fvar<var>>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_303;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_304;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_305;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_306;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_307;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_308;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_309;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_310;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_311;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_312;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_313;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_314;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_315;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_316;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_317;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_318;
typedef boost::mpl::vector<std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_fv_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_fv_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, fvar<var>, empty, empty, empty> type_fv_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, std::vector<fvar<var>>, empty, empty, empty> type_fv_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_fv_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_fv_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, fvar<var>, empty, empty, empty> type_fv_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<var>>, empty, empty, empty> type_fv_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, double, empty, empty, empty> type_fv_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, std::vector<double>, empty, empty, empty> type_fv_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, fvar<var>, empty, empty, empty> type_fv_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, std::vector<fvar<var>>, empty, empty, empty> type_fv_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, double, empty, empty, empty> type_fv_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<double>, empty, empty, empty> type_fv_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, fvar<var>, empty, empty, empty> type_fv_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty> type_fv_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_fv_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_fv_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, fvar<var>, empty, empty, empty> type_fv_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, std::vector<fvar<var>>, empty, empty, empty> type_fv_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_fv_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_fv_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, fvar<var>, empty, empty, empty> type_fv_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<var>>, empty, empty, empty> type_fv_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_399;

typedef boost::mpl::vector<AgradCdfLogistic, type_fv_300> AgradCdfLogistic_fv_300;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_301> AgradCdfLogistic_fv_301;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_302> AgradCdfLogistic_fv_302;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_303> AgradCdfLogistic_fv_303;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_304> AgradCdfLogistic_fv_304;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_305> AgradCdfLogistic_fv_305;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_306> AgradCdfLogistic_fv_306;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_307> AgradCdfLogistic_fv_307;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_308> AgradCdfLogistic_fv_308;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_309> AgradCdfLogistic_fv_309;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_310> AgradCdfLogistic_fv_310;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_311> AgradCdfLogistic_fv_311;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_312> AgradCdfLogistic_fv_312;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_313> AgradCdfLogistic_fv_313;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_314> AgradCdfLogistic_fv_314;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_315> AgradCdfLogistic_fv_315;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_316> AgradCdfLogistic_fv_316;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_317> AgradCdfLogistic_fv_317;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_318> AgradCdfLogistic_fv_318;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_319> AgradCdfLogistic_fv_319;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_320> AgradCdfLogistic_fv_320;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_321> AgradCdfLogistic_fv_321;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_322> AgradCdfLogistic_fv_322;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_323> AgradCdfLogistic_fv_323;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_324> AgradCdfLogistic_fv_324;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_325> AgradCdfLogistic_fv_325;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_326> AgradCdfLogistic_fv_326;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_327> AgradCdfLogistic_fv_327;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_328> AgradCdfLogistic_fv_328;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_329> AgradCdfLogistic_fv_329;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_330> AgradCdfLogistic_fv_330;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_331> AgradCdfLogistic_fv_331;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_332> AgradCdfLogistic_fv_332;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_333> AgradCdfLogistic_fv_333;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_334> AgradCdfLogistic_fv_334;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_335> AgradCdfLogistic_fv_335;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_336> AgradCdfLogistic_fv_336;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_337> AgradCdfLogistic_fv_337;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_338> AgradCdfLogistic_fv_338;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_339> AgradCdfLogistic_fv_339;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_340> AgradCdfLogistic_fv_340;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_341> AgradCdfLogistic_fv_341;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_342> AgradCdfLogistic_fv_342;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_343> AgradCdfLogistic_fv_343;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_344> AgradCdfLogistic_fv_344;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_345> AgradCdfLogistic_fv_345;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_346> AgradCdfLogistic_fv_346;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_347> AgradCdfLogistic_fv_347;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_348> AgradCdfLogistic_fv_348;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_349> AgradCdfLogistic_fv_349;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_350> AgradCdfLogistic_fv_350;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_351> AgradCdfLogistic_fv_351;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_352> AgradCdfLogistic_fv_352;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_353> AgradCdfLogistic_fv_353;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_354> AgradCdfLogistic_fv_354;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_355> AgradCdfLogistic_fv_355;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_356> AgradCdfLogistic_fv_356;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_357> AgradCdfLogistic_fv_357;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_358> AgradCdfLogistic_fv_358;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_359> AgradCdfLogistic_fv_359;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_360> AgradCdfLogistic_fv_360;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_361> AgradCdfLogistic_fv_361;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_362> AgradCdfLogistic_fv_362;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_363> AgradCdfLogistic_fv_363;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_364> AgradCdfLogistic_fv_364;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_365> AgradCdfLogistic_fv_365;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_366> AgradCdfLogistic_fv_366;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_367> AgradCdfLogistic_fv_367;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_368> AgradCdfLogistic_fv_368;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_369> AgradCdfLogistic_fv_369;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_370> AgradCdfLogistic_fv_370;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_371> AgradCdfLogistic_fv_371;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_372> AgradCdfLogistic_fv_372;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_373> AgradCdfLogistic_fv_373;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_374> AgradCdfLogistic_fv_374;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_375> AgradCdfLogistic_fv_375;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_376> AgradCdfLogistic_fv_376;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_377> AgradCdfLogistic_fv_377;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_378> AgradCdfLogistic_fv_378;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_379> AgradCdfLogistic_fv_379;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_380> AgradCdfLogistic_fv_380;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_381> AgradCdfLogistic_fv_381;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_382> AgradCdfLogistic_fv_382;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_383> AgradCdfLogistic_fv_383;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_384> AgradCdfLogistic_fv_384;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_385> AgradCdfLogistic_fv_385;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_386> AgradCdfLogistic_fv_386;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_387> AgradCdfLogistic_fv_387;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_388> AgradCdfLogistic_fv_388;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_389> AgradCdfLogistic_fv_389;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_390> AgradCdfLogistic_fv_390;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_391> AgradCdfLogistic_fv_391;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_392> AgradCdfLogistic_fv_392;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_393> AgradCdfLogistic_fv_393;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_394> AgradCdfLogistic_fv_394;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_395> AgradCdfLogistic_fv_395;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_396> AgradCdfLogistic_fv_396;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_397> AgradCdfLogistic_fv_397;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_398> AgradCdfLogistic_fv_398;
typedef boost::mpl::vector<AgradCdfLogistic, type_fv_399> AgradCdfLogistic_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_300, AgradCdfTestFixture, AgradCdfLogistic_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_301, AgradCdfTestFixture, AgradCdfLogistic_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_302, AgradCdfTestFixture, AgradCdfLogistic_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_303, AgradCdfTestFixture, AgradCdfLogistic_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_304, AgradCdfTestFixture, AgradCdfLogistic_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_305, AgradCdfTestFixture, AgradCdfLogistic_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_306, AgradCdfTestFixture, AgradCdfLogistic_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_307, AgradCdfTestFixture, AgradCdfLogistic_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_308, AgradCdfTestFixture, AgradCdfLogistic_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_309, AgradCdfTestFixture, AgradCdfLogistic_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_310, AgradCdfTestFixture, AgradCdfLogistic_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_311, AgradCdfTestFixture, AgradCdfLogistic_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_312, AgradCdfTestFixture, AgradCdfLogistic_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_313, AgradCdfTestFixture, AgradCdfLogistic_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_314, AgradCdfTestFixture, AgradCdfLogistic_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_315, AgradCdfTestFixture, AgradCdfLogistic_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_316, AgradCdfTestFixture, AgradCdfLogistic_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_317, AgradCdfTestFixture, AgradCdfLogistic_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_318, AgradCdfTestFixture, AgradCdfLogistic_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_319, AgradCdfTestFixture, AgradCdfLogistic_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_320, AgradCdfTestFixture, AgradCdfLogistic_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_321, AgradCdfTestFixture, AgradCdfLogistic_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_322, AgradCdfTestFixture, AgradCdfLogistic_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_323, AgradCdfTestFixture, AgradCdfLogistic_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_324, AgradCdfTestFixture, AgradCdfLogistic_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_325, AgradCdfTestFixture, AgradCdfLogistic_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_326, AgradCdfTestFixture, AgradCdfLogistic_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_327, AgradCdfTestFixture, AgradCdfLogistic_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_328, AgradCdfTestFixture, AgradCdfLogistic_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_329, AgradCdfTestFixture, AgradCdfLogistic_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_330, AgradCdfTestFixture, AgradCdfLogistic_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_331, AgradCdfTestFixture, AgradCdfLogistic_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_332, AgradCdfTestFixture, AgradCdfLogistic_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_333, AgradCdfTestFixture, AgradCdfLogistic_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_334, AgradCdfTestFixture, AgradCdfLogistic_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_335, AgradCdfTestFixture, AgradCdfLogistic_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_336, AgradCdfTestFixture, AgradCdfLogistic_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_337, AgradCdfTestFixture, AgradCdfLogistic_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_338, AgradCdfTestFixture, AgradCdfLogistic_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_339, AgradCdfTestFixture, AgradCdfLogistic_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_340, AgradCdfTestFixture, AgradCdfLogistic_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_341, AgradCdfTestFixture, AgradCdfLogistic_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_342, AgradCdfTestFixture, AgradCdfLogistic_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_343, AgradCdfTestFixture, AgradCdfLogistic_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_344, AgradCdfTestFixture, AgradCdfLogistic_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_345, AgradCdfTestFixture, AgradCdfLogistic_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_346, AgradCdfTestFixture, AgradCdfLogistic_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_347, AgradCdfTestFixture, AgradCdfLogistic_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_348, AgradCdfTestFixture, AgradCdfLogistic_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_349, AgradCdfTestFixture, AgradCdfLogistic_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_350, AgradCdfTestFixture, AgradCdfLogistic_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_351, AgradCdfTestFixture, AgradCdfLogistic_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_352, AgradCdfTestFixture, AgradCdfLogistic_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_353, AgradCdfTestFixture, AgradCdfLogistic_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_354, AgradCdfTestFixture, AgradCdfLogistic_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_355, AgradCdfTestFixture, AgradCdfLogistic_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_356, AgradCdfTestFixture, AgradCdfLogistic_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_357, AgradCdfTestFixture, AgradCdfLogistic_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_358, AgradCdfTestFixture, AgradCdfLogistic_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_359, AgradCdfTestFixture, AgradCdfLogistic_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_360, AgradCdfTestFixture, AgradCdfLogistic_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_361, AgradCdfTestFixture, AgradCdfLogistic_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_362, AgradCdfTestFixture, AgradCdfLogistic_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_363, AgradCdfTestFixture, AgradCdfLogistic_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_364, AgradCdfTestFixture, AgradCdfLogistic_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_365, AgradCdfTestFixture, AgradCdfLogistic_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_366, AgradCdfTestFixture, AgradCdfLogistic_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_367, AgradCdfTestFixture, AgradCdfLogistic_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_368, AgradCdfTestFixture, AgradCdfLogistic_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_369, AgradCdfTestFixture, AgradCdfLogistic_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_370, AgradCdfTestFixture, AgradCdfLogistic_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_371, AgradCdfTestFixture, AgradCdfLogistic_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_372, AgradCdfTestFixture, AgradCdfLogistic_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_373, AgradCdfTestFixture, AgradCdfLogistic_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_374, AgradCdfTestFixture, AgradCdfLogistic_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_375, AgradCdfTestFixture, AgradCdfLogistic_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_376, AgradCdfTestFixture, AgradCdfLogistic_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_377, AgradCdfTestFixture, AgradCdfLogistic_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_378, AgradCdfTestFixture, AgradCdfLogistic_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_379, AgradCdfTestFixture, AgradCdfLogistic_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_380, AgradCdfTestFixture, AgradCdfLogistic_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_381, AgradCdfTestFixture, AgradCdfLogistic_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_382, AgradCdfTestFixture, AgradCdfLogistic_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_383, AgradCdfTestFixture, AgradCdfLogistic_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_384, AgradCdfTestFixture, AgradCdfLogistic_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_385, AgradCdfTestFixture, AgradCdfLogistic_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_386, AgradCdfTestFixture, AgradCdfLogistic_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_387, AgradCdfTestFixture, AgradCdfLogistic_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_388, AgradCdfTestFixture, AgradCdfLogistic_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_389, AgradCdfTestFixture, AgradCdfLogistic_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_390, AgradCdfTestFixture, AgradCdfLogistic_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_391, AgradCdfTestFixture, AgradCdfLogistic_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_392, AgradCdfTestFixture, AgradCdfLogistic_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_393, AgradCdfTestFixture, AgradCdfLogistic_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_394, AgradCdfTestFixture, AgradCdfLogistic_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_395, AgradCdfTestFixture, AgradCdfLogistic_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_396, AgradCdfTestFixture, AgradCdfLogistic_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_397, AgradCdfTestFixture, AgradCdfLogistic_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_398, AgradCdfTestFixture, AgradCdfLogistic_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogistic_fv_399, AgradCdfTestFixture, AgradCdfLogistic_fv_399);
