#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/frechet/frechet_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfFrechet, type_v_300> AgradCdfFrechet_v_300;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_301> AgradCdfFrechet_v_301;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_302> AgradCdfFrechet_v_302;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_303> AgradCdfFrechet_v_303;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_304> AgradCdfFrechet_v_304;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_305> AgradCdfFrechet_v_305;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_306> AgradCdfFrechet_v_306;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_307> AgradCdfFrechet_v_307;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_308> AgradCdfFrechet_v_308;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_309> AgradCdfFrechet_v_309;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_310> AgradCdfFrechet_v_310;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_311> AgradCdfFrechet_v_311;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_312> AgradCdfFrechet_v_312;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_313> AgradCdfFrechet_v_313;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_314> AgradCdfFrechet_v_314;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_315> AgradCdfFrechet_v_315;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_316> AgradCdfFrechet_v_316;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_317> AgradCdfFrechet_v_317;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_318> AgradCdfFrechet_v_318;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_319> AgradCdfFrechet_v_319;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_320> AgradCdfFrechet_v_320;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_321> AgradCdfFrechet_v_321;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_322> AgradCdfFrechet_v_322;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_323> AgradCdfFrechet_v_323;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_324> AgradCdfFrechet_v_324;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_325> AgradCdfFrechet_v_325;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_326> AgradCdfFrechet_v_326;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_327> AgradCdfFrechet_v_327;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_328> AgradCdfFrechet_v_328;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_329> AgradCdfFrechet_v_329;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_330> AgradCdfFrechet_v_330;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_331> AgradCdfFrechet_v_331;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_332> AgradCdfFrechet_v_332;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_333> AgradCdfFrechet_v_333;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_334> AgradCdfFrechet_v_334;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_335> AgradCdfFrechet_v_335;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_336> AgradCdfFrechet_v_336;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_337> AgradCdfFrechet_v_337;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_338> AgradCdfFrechet_v_338;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_339> AgradCdfFrechet_v_339;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_340> AgradCdfFrechet_v_340;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_341> AgradCdfFrechet_v_341;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_342> AgradCdfFrechet_v_342;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_343> AgradCdfFrechet_v_343;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_344> AgradCdfFrechet_v_344;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_345> AgradCdfFrechet_v_345;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_346> AgradCdfFrechet_v_346;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_347> AgradCdfFrechet_v_347;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_348> AgradCdfFrechet_v_348;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_349> AgradCdfFrechet_v_349;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_350> AgradCdfFrechet_v_350;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_351> AgradCdfFrechet_v_351;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_352> AgradCdfFrechet_v_352;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_353> AgradCdfFrechet_v_353;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_354> AgradCdfFrechet_v_354;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_355> AgradCdfFrechet_v_355;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_356> AgradCdfFrechet_v_356;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_357> AgradCdfFrechet_v_357;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_358> AgradCdfFrechet_v_358;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_359> AgradCdfFrechet_v_359;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_360> AgradCdfFrechet_v_360;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_361> AgradCdfFrechet_v_361;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_362> AgradCdfFrechet_v_362;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_363> AgradCdfFrechet_v_363;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_364> AgradCdfFrechet_v_364;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_365> AgradCdfFrechet_v_365;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_366> AgradCdfFrechet_v_366;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_367> AgradCdfFrechet_v_367;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_368> AgradCdfFrechet_v_368;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_369> AgradCdfFrechet_v_369;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_370> AgradCdfFrechet_v_370;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_371> AgradCdfFrechet_v_371;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_372> AgradCdfFrechet_v_372;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_373> AgradCdfFrechet_v_373;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_374> AgradCdfFrechet_v_374;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_375> AgradCdfFrechet_v_375;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_376> AgradCdfFrechet_v_376;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_377> AgradCdfFrechet_v_377;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_378> AgradCdfFrechet_v_378;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_379> AgradCdfFrechet_v_379;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_380> AgradCdfFrechet_v_380;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_381> AgradCdfFrechet_v_381;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_382> AgradCdfFrechet_v_382;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_383> AgradCdfFrechet_v_383;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_384> AgradCdfFrechet_v_384;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_385> AgradCdfFrechet_v_385;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_386> AgradCdfFrechet_v_386;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_387> AgradCdfFrechet_v_387;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_388> AgradCdfFrechet_v_388;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_389> AgradCdfFrechet_v_389;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_390> AgradCdfFrechet_v_390;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_391> AgradCdfFrechet_v_391;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_392> AgradCdfFrechet_v_392;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_393> AgradCdfFrechet_v_393;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_394> AgradCdfFrechet_v_394;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_395> AgradCdfFrechet_v_395;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_396> AgradCdfFrechet_v_396;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_397> AgradCdfFrechet_v_397;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_398> AgradCdfFrechet_v_398;
typedef boost::mpl::vector<AgradCdfFrechet, type_v_399> AgradCdfFrechet_v_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_300, AgradCdfTestFixture, AgradCdfFrechet_v_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_301, AgradCdfTestFixture, AgradCdfFrechet_v_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_302, AgradCdfTestFixture, AgradCdfFrechet_v_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_303, AgradCdfTestFixture, AgradCdfFrechet_v_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_304, AgradCdfTestFixture, AgradCdfFrechet_v_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_305, AgradCdfTestFixture, AgradCdfFrechet_v_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_306, AgradCdfTestFixture, AgradCdfFrechet_v_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_307, AgradCdfTestFixture, AgradCdfFrechet_v_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_308, AgradCdfTestFixture, AgradCdfFrechet_v_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_309, AgradCdfTestFixture, AgradCdfFrechet_v_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_310, AgradCdfTestFixture, AgradCdfFrechet_v_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_311, AgradCdfTestFixture, AgradCdfFrechet_v_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_312, AgradCdfTestFixture, AgradCdfFrechet_v_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_313, AgradCdfTestFixture, AgradCdfFrechet_v_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_314, AgradCdfTestFixture, AgradCdfFrechet_v_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_315, AgradCdfTestFixture, AgradCdfFrechet_v_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_316, AgradCdfTestFixture, AgradCdfFrechet_v_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_317, AgradCdfTestFixture, AgradCdfFrechet_v_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_318, AgradCdfTestFixture, AgradCdfFrechet_v_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_319, AgradCdfTestFixture, AgradCdfFrechet_v_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_320, AgradCdfTestFixture, AgradCdfFrechet_v_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_321, AgradCdfTestFixture, AgradCdfFrechet_v_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_322, AgradCdfTestFixture, AgradCdfFrechet_v_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_323, AgradCdfTestFixture, AgradCdfFrechet_v_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_324, AgradCdfTestFixture, AgradCdfFrechet_v_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_325, AgradCdfTestFixture, AgradCdfFrechet_v_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_326, AgradCdfTestFixture, AgradCdfFrechet_v_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_327, AgradCdfTestFixture, AgradCdfFrechet_v_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_328, AgradCdfTestFixture, AgradCdfFrechet_v_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_329, AgradCdfTestFixture, AgradCdfFrechet_v_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_330, AgradCdfTestFixture, AgradCdfFrechet_v_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_331, AgradCdfTestFixture, AgradCdfFrechet_v_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_332, AgradCdfTestFixture, AgradCdfFrechet_v_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_333, AgradCdfTestFixture, AgradCdfFrechet_v_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_334, AgradCdfTestFixture, AgradCdfFrechet_v_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_335, AgradCdfTestFixture, AgradCdfFrechet_v_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_336, AgradCdfTestFixture, AgradCdfFrechet_v_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_337, AgradCdfTestFixture, AgradCdfFrechet_v_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_338, AgradCdfTestFixture, AgradCdfFrechet_v_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_339, AgradCdfTestFixture, AgradCdfFrechet_v_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_340, AgradCdfTestFixture, AgradCdfFrechet_v_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_341, AgradCdfTestFixture, AgradCdfFrechet_v_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_342, AgradCdfTestFixture, AgradCdfFrechet_v_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_343, AgradCdfTestFixture, AgradCdfFrechet_v_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_344, AgradCdfTestFixture, AgradCdfFrechet_v_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_345, AgradCdfTestFixture, AgradCdfFrechet_v_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_346, AgradCdfTestFixture, AgradCdfFrechet_v_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_347, AgradCdfTestFixture, AgradCdfFrechet_v_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_348, AgradCdfTestFixture, AgradCdfFrechet_v_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_349, AgradCdfTestFixture, AgradCdfFrechet_v_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_350, AgradCdfTestFixture, AgradCdfFrechet_v_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_351, AgradCdfTestFixture, AgradCdfFrechet_v_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_352, AgradCdfTestFixture, AgradCdfFrechet_v_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_353, AgradCdfTestFixture, AgradCdfFrechet_v_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_354, AgradCdfTestFixture, AgradCdfFrechet_v_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_355, AgradCdfTestFixture, AgradCdfFrechet_v_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_356, AgradCdfTestFixture, AgradCdfFrechet_v_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_357, AgradCdfTestFixture, AgradCdfFrechet_v_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_358, AgradCdfTestFixture, AgradCdfFrechet_v_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_359, AgradCdfTestFixture, AgradCdfFrechet_v_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_360, AgradCdfTestFixture, AgradCdfFrechet_v_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_361, AgradCdfTestFixture, AgradCdfFrechet_v_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_362, AgradCdfTestFixture, AgradCdfFrechet_v_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_363, AgradCdfTestFixture, AgradCdfFrechet_v_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_364, AgradCdfTestFixture, AgradCdfFrechet_v_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_365, AgradCdfTestFixture, AgradCdfFrechet_v_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_366, AgradCdfTestFixture, AgradCdfFrechet_v_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_367, AgradCdfTestFixture, AgradCdfFrechet_v_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_368, AgradCdfTestFixture, AgradCdfFrechet_v_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_369, AgradCdfTestFixture, AgradCdfFrechet_v_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_370, AgradCdfTestFixture, AgradCdfFrechet_v_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_371, AgradCdfTestFixture, AgradCdfFrechet_v_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_372, AgradCdfTestFixture, AgradCdfFrechet_v_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_373, AgradCdfTestFixture, AgradCdfFrechet_v_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_374, AgradCdfTestFixture, AgradCdfFrechet_v_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_375, AgradCdfTestFixture, AgradCdfFrechet_v_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_376, AgradCdfTestFixture, AgradCdfFrechet_v_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_377, AgradCdfTestFixture, AgradCdfFrechet_v_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_378, AgradCdfTestFixture, AgradCdfFrechet_v_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_379, AgradCdfTestFixture, AgradCdfFrechet_v_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_380, AgradCdfTestFixture, AgradCdfFrechet_v_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_381, AgradCdfTestFixture, AgradCdfFrechet_v_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_382, AgradCdfTestFixture, AgradCdfFrechet_v_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_383, AgradCdfTestFixture, AgradCdfFrechet_v_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_384, AgradCdfTestFixture, AgradCdfFrechet_v_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_385, AgradCdfTestFixture, AgradCdfFrechet_v_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_386, AgradCdfTestFixture, AgradCdfFrechet_v_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_387, AgradCdfTestFixture, AgradCdfFrechet_v_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_388, AgradCdfTestFixture, AgradCdfFrechet_v_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_389, AgradCdfTestFixture, AgradCdfFrechet_v_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_390, AgradCdfTestFixture, AgradCdfFrechet_v_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_391, AgradCdfTestFixture, AgradCdfFrechet_v_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_392, AgradCdfTestFixture, AgradCdfFrechet_v_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_393, AgradCdfTestFixture, AgradCdfFrechet_v_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_394, AgradCdfTestFixture, AgradCdfFrechet_v_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_395, AgradCdfTestFixture, AgradCdfFrechet_v_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_396, AgradCdfTestFixture, AgradCdfFrechet_v_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_397, AgradCdfTestFixture, AgradCdfFrechet_v_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_398, AgradCdfTestFixture, AgradCdfFrechet_v_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_v_399, AgradCdfTestFixture, AgradCdfFrechet_v_399);
