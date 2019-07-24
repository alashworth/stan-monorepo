#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/lognormal/lognormal_test.hpp>

typedef boost::mpl::vector<var, std::vector<var>, var, empty, empty, empty> type_v_300;
typedef boost::mpl::vector<var, std::vector<var>, std::vector<var>, empty, empty, empty> type_v_301;
typedef boost::mpl::vector<var, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_302;
typedef boost::mpl::vector<var, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_303;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_304;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_305;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_306;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_307;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_308;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_309;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_310;
typedef boost::mpl::vector<var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_311;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_312;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_313;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_314;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_315;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_316;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_317;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_318;
typedef boost::mpl::vector<var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_319;
typedef boost::mpl::vector<std::vector<var>, double, double, empty, empty, empty> type_v_320;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<double>, empty, empty, empty> type_v_321;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_322;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_323;
typedef boost::mpl::vector<std::vector<var>, double, var, empty, empty, empty> type_v_324;
typedef boost::mpl::vector<std::vector<var>, double, std::vector<var>, empty, empty, empty> type_v_325;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_326;
typedef boost::mpl::vector<std::vector<var>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_327;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, double, empty, empty, empty> type_v_328;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<double>, empty, empty, empty> type_v_329;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_330;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_331;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, var, empty, empty, empty> type_v_332;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, std::vector<var>, empty, empty, empty> type_v_333;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_334;
typedef boost::mpl::vector<std::vector<var>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_335;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_336;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_337;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_338;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_339;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_340;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_341;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_342;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_343;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_344;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_345;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_346;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_347;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_348;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_349;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_350;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_351;
typedef boost::mpl::vector<std::vector<var>, var, double, empty, empty, empty> type_v_352;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<double>, empty, empty, empty> type_v_353;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_354;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_355;
typedef boost::mpl::vector<std::vector<var>, var, var, empty, empty, empty> type_v_356;
typedef boost::mpl::vector<std::vector<var>, var, std::vector<var>, empty, empty, empty> type_v_357;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_358;
typedef boost::mpl::vector<std::vector<var>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_359;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, double, empty, empty, empty> type_v_360;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<double>, empty, empty, empty> type_v_361;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_362;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_363;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, var, empty, empty, empty> type_v_364;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, std::vector<var>, empty, empty, empty> type_v_365;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_366;
typedef boost::mpl::vector<std::vector<var>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_367;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_368;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_369;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_370;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_371;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_372;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_373;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_374;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_375;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_376;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_377;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_378;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_379;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_380;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_381;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_382;
typedef boost::mpl::vector<std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_383;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_v_384;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_v_385;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_386;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_387;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, var, empty, empty, empty> type_v_388;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, std::vector<var>, empty, empty, empty> type_v_389;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_390;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_391;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_v_392;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_v_393;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_394;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_395;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, var, empty, empty, empty> type_v_396;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, std::vector<var>, empty, empty, empty> type_v_397;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_398;
typedef boost::mpl::vector<Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_399;

typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_300> AgradDistributionsLognormal_v_300;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_301> AgradDistributionsLognormal_v_301;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_302> AgradDistributionsLognormal_v_302;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_303> AgradDistributionsLognormal_v_303;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_304> AgradDistributionsLognormal_v_304;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_305> AgradDistributionsLognormal_v_305;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_306> AgradDistributionsLognormal_v_306;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_307> AgradDistributionsLognormal_v_307;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_308> AgradDistributionsLognormal_v_308;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_309> AgradDistributionsLognormal_v_309;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_310> AgradDistributionsLognormal_v_310;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_311> AgradDistributionsLognormal_v_311;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_312> AgradDistributionsLognormal_v_312;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_313> AgradDistributionsLognormal_v_313;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_314> AgradDistributionsLognormal_v_314;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_315> AgradDistributionsLognormal_v_315;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_316> AgradDistributionsLognormal_v_316;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_317> AgradDistributionsLognormal_v_317;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_318> AgradDistributionsLognormal_v_318;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_319> AgradDistributionsLognormal_v_319;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_320> AgradDistributionsLognormal_v_320;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_321> AgradDistributionsLognormal_v_321;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_322> AgradDistributionsLognormal_v_322;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_323> AgradDistributionsLognormal_v_323;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_324> AgradDistributionsLognormal_v_324;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_325> AgradDistributionsLognormal_v_325;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_326> AgradDistributionsLognormal_v_326;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_327> AgradDistributionsLognormal_v_327;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_328> AgradDistributionsLognormal_v_328;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_329> AgradDistributionsLognormal_v_329;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_330> AgradDistributionsLognormal_v_330;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_331> AgradDistributionsLognormal_v_331;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_332> AgradDistributionsLognormal_v_332;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_333> AgradDistributionsLognormal_v_333;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_334> AgradDistributionsLognormal_v_334;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_335> AgradDistributionsLognormal_v_335;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_336> AgradDistributionsLognormal_v_336;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_337> AgradDistributionsLognormal_v_337;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_338> AgradDistributionsLognormal_v_338;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_339> AgradDistributionsLognormal_v_339;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_340> AgradDistributionsLognormal_v_340;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_341> AgradDistributionsLognormal_v_341;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_342> AgradDistributionsLognormal_v_342;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_343> AgradDistributionsLognormal_v_343;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_344> AgradDistributionsLognormal_v_344;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_345> AgradDistributionsLognormal_v_345;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_346> AgradDistributionsLognormal_v_346;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_347> AgradDistributionsLognormal_v_347;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_348> AgradDistributionsLognormal_v_348;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_349> AgradDistributionsLognormal_v_349;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_350> AgradDistributionsLognormal_v_350;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_351> AgradDistributionsLognormal_v_351;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_352> AgradDistributionsLognormal_v_352;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_353> AgradDistributionsLognormal_v_353;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_354> AgradDistributionsLognormal_v_354;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_355> AgradDistributionsLognormal_v_355;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_356> AgradDistributionsLognormal_v_356;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_357> AgradDistributionsLognormal_v_357;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_358> AgradDistributionsLognormal_v_358;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_359> AgradDistributionsLognormal_v_359;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_360> AgradDistributionsLognormal_v_360;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_361> AgradDistributionsLognormal_v_361;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_362> AgradDistributionsLognormal_v_362;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_363> AgradDistributionsLognormal_v_363;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_364> AgradDistributionsLognormal_v_364;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_365> AgradDistributionsLognormal_v_365;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_366> AgradDistributionsLognormal_v_366;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_367> AgradDistributionsLognormal_v_367;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_368> AgradDistributionsLognormal_v_368;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_369> AgradDistributionsLognormal_v_369;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_370> AgradDistributionsLognormal_v_370;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_371> AgradDistributionsLognormal_v_371;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_372> AgradDistributionsLognormal_v_372;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_373> AgradDistributionsLognormal_v_373;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_374> AgradDistributionsLognormal_v_374;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_375> AgradDistributionsLognormal_v_375;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_376> AgradDistributionsLognormal_v_376;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_377> AgradDistributionsLognormal_v_377;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_378> AgradDistributionsLognormal_v_378;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_379> AgradDistributionsLognormal_v_379;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_380> AgradDistributionsLognormal_v_380;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_381> AgradDistributionsLognormal_v_381;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_382> AgradDistributionsLognormal_v_382;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_383> AgradDistributionsLognormal_v_383;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_384> AgradDistributionsLognormal_v_384;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_385> AgradDistributionsLognormal_v_385;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_386> AgradDistributionsLognormal_v_386;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_387> AgradDistributionsLognormal_v_387;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_388> AgradDistributionsLognormal_v_388;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_389> AgradDistributionsLognormal_v_389;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_390> AgradDistributionsLognormal_v_390;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_391> AgradDistributionsLognormal_v_391;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_392> AgradDistributionsLognormal_v_392;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_393> AgradDistributionsLognormal_v_393;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_394> AgradDistributionsLognormal_v_394;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_395> AgradDistributionsLognormal_v_395;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_396> AgradDistributionsLognormal_v_396;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_397> AgradDistributionsLognormal_v_397;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_398> AgradDistributionsLognormal_v_398;
typedef boost::mpl::vector<AgradDistributionsLognormal, type_v_399> AgradDistributionsLognormal_v_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_300, AgradDistributionTestFixture, AgradDistributionsLognormal_v_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_301, AgradDistributionTestFixture, AgradDistributionsLognormal_v_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_302, AgradDistributionTestFixture, AgradDistributionsLognormal_v_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_303, AgradDistributionTestFixture, AgradDistributionsLognormal_v_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_304, AgradDistributionTestFixture, AgradDistributionsLognormal_v_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_305, AgradDistributionTestFixture, AgradDistributionsLognormal_v_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_306, AgradDistributionTestFixture, AgradDistributionsLognormal_v_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_307, AgradDistributionTestFixture, AgradDistributionsLognormal_v_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_308, AgradDistributionTestFixture, AgradDistributionsLognormal_v_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_309, AgradDistributionTestFixture, AgradDistributionsLognormal_v_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_310, AgradDistributionTestFixture, AgradDistributionsLognormal_v_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_311, AgradDistributionTestFixture, AgradDistributionsLognormal_v_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_312, AgradDistributionTestFixture, AgradDistributionsLognormal_v_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_313, AgradDistributionTestFixture, AgradDistributionsLognormal_v_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_314, AgradDistributionTestFixture, AgradDistributionsLognormal_v_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_315, AgradDistributionTestFixture, AgradDistributionsLognormal_v_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_316, AgradDistributionTestFixture, AgradDistributionsLognormal_v_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_317, AgradDistributionTestFixture, AgradDistributionsLognormal_v_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_318, AgradDistributionTestFixture, AgradDistributionsLognormal_v_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_319, AgradDistributionTestFixture, AgradDistributionsLognormal_v_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_320, AgradDistributionTestFixture, AgradDistributionsLognormal_v_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_321, AgradDistributionTestFixture, AgradDistributionsLognormal_v_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_322, AgradDistributionTestFixture, AgradDistributionsLognormal_v_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_323, AgradDistributionTestFixture, AgradDistributionsLognormal_v_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_324, AgradDistributionTestFixture, AgradDistributionsLognormal_v_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_325, AgradDistributionTestFixture, AgradDistributionsLognormal_v_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_326, AgradDistributionTestFixture, AgradDistributionsLognormal_v_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_327, AgradDistributionTestFixture, AgradDistributionsLognormal_v_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_328, AgradDistributionTestFixture, AgradDistributionsLognormal_v_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_329, AgradDistributionTestFixture, AgradDistributionsLognormal_v_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_330, AgradDistributionTestFixture, AgradDistributionsLognormal_v_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_331, AgradDistributionTestFixture, AgradDistributionsLognormal_v_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_332, AgradDistributionTestFixture, AgradDistributionsLognormal_v_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_333, AgradDistributionTestFixture, AgradDistributionsLognormal_v_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_334, AgradDistributionTestFixture, AgradDistributionsLognormal_v_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_335, AgradDistributionTestFixture, AgradDistributionsLognormal_v_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_336, AgradDistributionTestFixture, AgradDistributionsLognormal_v_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_337, AgradDistributionTestFixture, AgradDistributionsLognormal_v_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_338, AgradDistributionTestFixture, AgradDistributionsLognormal_v_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_339, AgradDistributionTestFixture, AgradDistributionsLognormal_v_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_340, AgradDistributionTestFixture, AgradDistributionsLognormal_v_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_341, AgradDistributionTestFixture, AgradDistributionsLognormal_v_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_342, AgradDistributionTestFixture, AgradDistributionsLognormal_v_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_343, AgradDistributionTestFixture, AgradDistributionsLognormal_v_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_344, AgradDistributionTestFixture, AgradDistributionsLognormal_v_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_345, AgradDistributionTestFixture, AgradDistributionsLognormal_v_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_346, AgradDistributionTestFixture, AgradDistributionsLognormal_v_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_347, AgradDistributionTestFixture, AgradDistributionsLognormal_v_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_348, AgradDistributionTestFixture, AgradDistributionsLognormal_v_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_349, AgradDistributionTestFixture, AgradDistributionsLognormal_v_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_350, AgradDistributionTestFixture, AgradDistributionsLognormal_v_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_351, AgradDistributionTestFixture, AgradDistributionsLognormal_v_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_352, AgradDistributionTestFixture, AgradDistributionsLognormal_v_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_353, AgradDistributionTestFixture, AgradDistributionsLognormal_v_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_354, AgradDistributionTestFixture, AgradDistributionsLognormal_v_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_355, AgradDistributionTestFixture, AgradDistributionsLognormal_v_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_356, AgradDistributionTestFixture, AgradDistributionsLognormal_v_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_357, AgradDistributionTestFixture, AgradDistributionsLognormal_v_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_358, AgradDistributionTestFixture, AgradDistributionsLognormal_v_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_359, AgradDistributionTestFixture, AgradDistributionsLognormal_v_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_360, AgradDistributionTestFixture, AgradDistributionsLognormal_v_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_361, AgradDistributionTestFixture, AgradDistributionsLognormal_v_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_362, AgradDistributionTestFixture, AgradDistributionsLognormal_v_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_363, AgradDistributionTestFixture, AgradDistributionsLognormal_v_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_364, AgradDistributionTestFixture, AgradDistributionsLognormal_v_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_365, AgradDistributionTestFixture, AgradDistributionsLognormal_v_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_366, AgradDistributionTestFixture, AgradDistributionsLognormal_v_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_367, AgradDistributionTestFixture, AgradDistributionsLognormal_v_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_368, AgradDistributionTestFixture, AgradDistributionsLognormal_v_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_369, AgradDistributionTestFixture, AgradDistributionsLognormal_v_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_370, AgradDistributionTestFixture, AgradDistributionsLognormal_v_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_371, AgradDistributionTestFixture, AgradDistributionsLognormal_v_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_372, AgradDistributionTestFixture, AgradDistributionsLognormal_v_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_373, AgradDistributionTestFixture, AgradDistributionsLognormal_v_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_374, AgradDistributionTestFixture, AgradDistributionsLognormal_v_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_375, AgradDistributionTestFixture, AgradDistributionsLognormal_v_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_376, AgradDistributionTestFixture, AgradDistributionsLognormal_v_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_377, AgradDistributionTestFixture, AgradDistributionsLognormal_v_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_378, AgradDistributionTestFixture, AgradDistributionsLognormal_v_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_379, AgradDistributionTestFixture, AgradDistributionsLognormal_v_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_380, AgradDistributionTestFixture, AgradDistributionsLognormal_v_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_381, AgradDistributionTestFixture, AgradDistributionsLognormal_v_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_382, AgradDistributionTestFixture, AgradDistributionsLognormal_v_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_383, AgradDistributionTestFixture, AgradDistributionsLognormal_v_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_384, AgradDistributionTestFixture, AgradDistributionsLognormal_v_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_385, AgradDistributionTestFixture, AgradDistributionsLognormal_v_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_386, AgradDistributionTestFixture, AgradDistributionsLognormal_v_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_387, AgradDistributionTestFixture, AgradDistributionsLognormal_v_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_388, AgradDistributionTestFixture, AgradDistributionsLognormal_v_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_389, AgradDistributionTestFixture, AgradDistributionsLognormal_v_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_390, AgradDistributionTestFixture, AgradDistributionsLognormal_v_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_391, AgradDistributionTestFixture, AgradDistributionsLognormal_v_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_392, AgradDistributionTestFixture, AgradDistributionsLognormal_v_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_393, AgradDistributionTestFixture, AgradDistributionsLognormal_v_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_394, AgradDistributionTestFixture, AgradDistributionsLognormal_v_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_395, AgradDistributionTestFixture, AgradDistributionsLognormal_v_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_396, AgradDistributionTestFixture, AgradDistributionsLognormal_v_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_397, AgradDistributionTestFixture, AgradDistributionsLognormal_v_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_398, AgradDistributionTestFixture, AgradDistributionsLognormal_v_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLognormal_v_399, AgradDistributionTestFixture, AgradDistributionsLognormal_v_399);
