#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/frechet/frechet_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_300> AgradCcdfLogFrechet_v_300;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_301> AgradCcdfLogFrechet_v_301;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_302> AgradCcdfLogFrechet_v_302;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_303> AgradCcdfLogFrechet_v_303;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_304> AgradCcdfLogFrechet_v_304;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_305> AgradCcdfLogFrechet_v_305;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_306> AgradCcdfLogFrechet_v_306;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_307> AgradCcdfLogFrechet_v_307;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_308> AgradCcdfLogFrechet_v_308;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_309> AgradCcdfLogFrechet_v_309;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_310> AgradCcdfLogFrechet_v_310;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_311> AgradCcdfLogFrechet_v_311;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_312> AgradCcdfLogFrechet_v_312;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_313> AgradCcdfLogFrechet_v_313;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_314> AgradCcdfLogFrechet_v_314;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_315> AgradCcdfLogFrechet_v_315;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_316> AgradCcdfLogFrechet_v_316;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_317> AgradCcdfLogFrechet_v_317;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_318> AgradCcdfLogFrechet_v_318;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_319> AgradCcdfLogFrechet_v_319;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_320> AgradCcdfLogFrechet_v_320;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_321> AgradCcdfLogFrechet_v_321;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_322> AgradCcdfLogFrechet_v_322;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_323> AgradCcdfLogFrechet_v_323;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_324> AgradCcdfLogFrechet_v_324;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_325> AgradCcdfLogFrechet_v_325;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_326> AgradCcdfLogFrechet_v_326;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_327> AgradCcdfLogFrechet_v_327;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_328> AgradCcdfLogFrechet_v_328;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_329> AgradCcdfLogFrechet_v_329;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_330> AgradCcdfLogFrechet_v_330;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_331> AgradCcdfLogFrechet_v_331;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_332> AgradCcdfLogFrechet_v_332;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_333> AgradCcdfLogFrechet_v_333;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_334> AgradCcdfLogFrechet_v_334;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_335> AgradCcdfLogFrechet_v_335;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_336> AgradCcdfLogFrechet_v_336;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_337> AgradCcdfLogFrechet_v_337;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_338> AgradCcdfLogFrechet_v_338;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_339> AgradCcdfLogFrechet_v_339;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_340> AgradCcdfLogFrechet_v_340;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_341> AgradCcdfLogFrechet_v_341;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_342> AgradCcdfLogFrechet_v_342;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_343> AgradCcdfLogFrechet_v_343;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_344> AgradCcdfLogFrechet_v_344;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_345> AgradCcdfLogFrechet_v_345;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_346> AgradCcdfLogFrechet_v_346;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_347> AgradCcdfLogFrechet_v_347;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_348> AgradCcdfLogFrechet_v_348;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_349> AgradCcdfLogFrechet_v_349;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_350> AgradCcdfLogFrechet_v_350;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_351> AgradCcdfLogFrechet_v_351;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_352> AgradCcdfLogFrechet_v_352;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_353> AgradCcdfLogFrechet_v_353;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_354> AgradCcdfLogFrechet_v_354;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_355> AgradCcdfLogFrechet_v_355;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_356> AgradCcdfLogFrechet_v_356;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_357> AgradCcdfLogFrechet_v_357;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_358> AgradCcdfLogFrechet_v_358;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_359> AgradCcdfLogFrechet_v_359;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_360> AgradCcdfLogFrechet_v_360;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_361> AgradCcdfLogFrechet_v_361;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_362> AgradCcdfLogFrechet_v_362;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_363> AgradCcdfLogFrechet_v_363;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_364> AgradCcdfLogFrechet_v_364;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_365> AgradCcdfLogFrechet_v_365;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_366> AgradCcdfLogFrechet_v_366;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_367> AgradCcdfLogFrechet_v_367;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_368> AgradCcdfLogFrechet_v_368;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_369> AgradCcdfLogFrechet_v_369;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_370> AgradCcdfLogFrechet_v_370;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_371> AgradCcdfLogFrechet_v_371;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_372> AgradCcdfLogFrechet_v_372;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_373> AgradCcdfLogFrechet_v_373;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_374> AgradCcdfLogFrechet_v_374;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_375> AgradCcdfLogFrechet_v_375;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_376> AgradCcdfLogFrechet_v_376;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_377> AgradCcdfLogFrechet_v_377;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_378> AgradCcdfLogFrechet_v_378;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_379> AgradCcdfLogFrechet_v_379;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_380> AgradCcdfLogFrechet_v_380;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_381> AgradCcdfLogFrechet_v_381;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_382> AgradCcdfLogFrechet_v_382;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_383> AgradCcdfLogFrechet_v_383;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_384> AgradCcdfLogFrechet_v_384;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_385> AgradCcdfLogFrechet_v_385;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_386> AgradCcdfLogFrechet_v_386;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_387> AgradCcdfLogFrechet_v_387;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_388> AgradCcdfLogFrechet_v_388;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_389> AgradCcdfLogFrechet_v_389;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_390> AgradCcdfLogFrechet_v_390;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_391> AgradCcdfLogFrechet_v_391;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_392> AgradCcdfLogFrechet_v_392;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_393> AgradCcdfLogFrechet_v_393;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_394> AgradCcdfLogFrechet_v_394;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_395> AgradCcdfLogFrechet_v_395;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_396> AgradCcdfLogFrechet_v_396;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_397> AgradCcdfLogFrechet_v_397;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_398> AgradCcdfLogFrechet_v_398;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_v_399> AgradCcdfLogFrechet_v_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_300, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_301, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_302, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_303, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_304, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_305, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_306, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_307, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_308, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_309, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_310, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_311, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_312, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_313, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_314, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_315, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_316, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_317, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_318, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_319, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_320, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_321, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_322, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_323, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_324, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_325, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_326, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_327, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_328, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_329, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_330, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_331, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_332, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_333, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_334, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_335, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_336, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_337, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_338, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_339, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_340, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_341, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_342, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_343, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_344, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_345, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_346, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_347, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_348, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_349, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_350, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_351, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_352, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_353, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_354, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_355, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_356, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_357, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_358, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_359, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_360, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_361, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_362, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_363, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_364, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_365, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_366, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_367, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_368, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_369, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_370, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_371, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_372, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_373, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_374, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_375, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_376, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_377, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_378, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_379, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_380, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_381, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_382, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_383, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_384, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_385, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_386, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_387, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_388, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_389, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_390, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_391, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_392, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_393, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_394, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_395, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_396, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_397, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_398, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_v_399, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_v_399);
