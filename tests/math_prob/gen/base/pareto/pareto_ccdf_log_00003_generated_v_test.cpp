#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/pareto/pareto_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_300> AgradCcdfLogPareto_v_300;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_301> AgradCcdfLogPareto_v_301;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_302> AgradCcdfLogPareto_v_302;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_303> AgradCcdfLogPareto_v_303;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_304> AgradCcdfLogPareto_v_304;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_305> AgradCcdfLogPareto_v_305;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_306> AgradCcdfLogPareto_v_306;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_307> AgradCcdfLogPareto_v_307;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_308> AgradCcdfLogPareto_v_308;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_309> AgradCcdfLogPareto_v_309;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_310> AgradCcdfLogPareto_v_310;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_311> AgradCcdfLogPareto_v_311;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_312> AgradCcdfLogPareto_v_312;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_313> AgradCcdfLogPareto_v_313;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_314> AgradCcdfLogPareto_v_314;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_315> AgradCcdfLogPareto_v_315;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_316> AgradCcdfLogPareto_v_316;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_317> AgradCcdfLogPareto_v_317;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_318> AgradCcdfLogPareto_v_318;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_319> AgradCcdfLogPareto_v_319;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_320> AgradCcdfLogPareto_v_320;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_321> AgradCcdfLogPareto_v_321;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_322> AgradCcdfLogPareto_v_322;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_323> AgradCcdfLogPareto_v_323;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_324> AgradCcdfLogPareto_v_324;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_325> AgradCcdfLogPareto_v_325;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_326> AgradCcdfLogPareto_v_326;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_327> AgradCcdfLogPareto_v_327;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_328> AgradCcdfLogPareto_v_328;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_329> AgradCcdfLogPareto_v_329;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_330> AgradCcdfLogPareto_v_330;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_331> AgradCcdfLogPareto_v_331;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_332> AgradCcdfLogPareto_v_332;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_333> AgradCcdfLogPareto_v_333;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_334> AgradCcdfLogPareto_v_334;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_335> AgradCcdfLogPareto_v_335;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_336> AgradCcdfLogPareto_v_336;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_337> AgradCcdfLogPareto_v_337;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_338> AgradCcdfLogPareto_v_338;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_339> AgradCcdfLogPareto_v_339;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_340> AgradCcdfLogPareto_v_340;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_341> AgradCcdfLogPareto_v_341;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_342> AgradCcdfLogPareto_v_342;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_343> AgradCcdfLogPareto_v_343;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_344> AgradCcdfLogPareto_v_344;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_345> AgradCcdfLogPareto_v_345;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_346> AgradCcdfLogPareto_v_346;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_347> AgradCcdfLogPareto_v_347;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_348> AgradCcdfLogPareto_v_348;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_349> AgradCcdfLogPareto_v_349;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_350> AgradCcdfLogPareto_v_350;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_351> AgradCcdfLogPareto_v_351;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_352> AgradCcdfLogPareto_v_352;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_353> AgradCcdfLogPareto_v_353;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_354> AgradCcdfLogPareto_v_354;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_355> AgradCcdfLogPareto_v_355;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_356> AgradCcdfLogPareto_v_356;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_357> AgradCcdfLogPareto_v_357;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_358> AgradCcdfLogPareto_v_358;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_359> AgradCcdfLogPareto_v_359;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_360> AgradCcdfLogPareto_v_360;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_361> AgradCcdfLogPareto_v_361;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_362> AgradCcdfLogPareto_v_362;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_363> AgradCcdfLogPareto_v_363;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_364> AgradCcdfLogPareto_v_364;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_365> AgradCcdfLogPareto_v_365;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_366> AgradCcdfLogPareto_v_366;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_367> AgradCcdfLogPareto_v_367;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_368> AgradCcdfLogPareto_v_368;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_369> AgradCcdfLogPareto_v_369;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_370> AgradCcdfLogPareto_v_370;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_371> AgradCcdfLogPareto_v_371;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_372> AgradCcdfLogPareto_v_372;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_373> AgradCcdfLogPareto_v_373;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_374> AgradCcdfLogPareto_v_374;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_375> AgradCcdfLogPareto_v_375;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_376> AgradCcdfLogPareto_v_376;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_377> AgradCcdfLogPareto_v_377;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_378> AgradCcdfLogPareto_v_378;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_379> AgradCcdfLogPareto_v_379;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_380> AgradCcdfLogPareto_v_380;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_381> AgradCcdfLogPareto_v_381;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_382> AgradCcdfLogPareto_v_382;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_383> AgradCcdfLogPareto_v_383;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_384> AgradCcdfLogPareto_v_384;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_385> AgradCcdfLogPareto_v_385;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_386> AgradCcdfLogPareto_v_386;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_387> AgradCcdfLogPareto_v_387;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_388> AgradCcdfLogPareto_v_388;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_389> AgradCcdfLogPareto_v_389;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_390> AgradCcdfLogPareto_v_390;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_391> AgradCcdfLogPareto_v_391;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_392> AgradCcdfLogPareto_v_392;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_393> AgradCcdfLogPareto_v_393;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_394> AgradCcdfLogPareto_v_394;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_395> AgradCcdfLogPareto_v_395;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_396> AgradCcdfLogPareto_v_396;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_397> AgradCcdfLogPareto_v_397;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_398> AgradCcdfLogPareto_v_398;
typedef boost::mpl::vector<AgradCcdfLogPareto, type_v_399> AgradCcdfLogPareto_v_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_300, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_301, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_302, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_303, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_304, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_305, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_306, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_307, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_308, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_309, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_310, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_311, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_312, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_313, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_314, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_315, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_316, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_317, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_318, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_319, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_320, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_321, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_322, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_323, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_324, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_325, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_326, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_327, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_328, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_329, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_330, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_331, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_332, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_333, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_334, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_335, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_336, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_337, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_338, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_339, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_340, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_341, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_342, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_343, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_344, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_345, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_346, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_347, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_348, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_349, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_350, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_351, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_352, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_353, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_354, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_355, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_356, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_357, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_358, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_359, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_360, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_361, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_362, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_363, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_364, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_365, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_366, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_367, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_368, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_369, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_370, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_371, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_372, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_373, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_374, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_375, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_376, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_377, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_378, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_379, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_380, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_381, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_382, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_383, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_384, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_385, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_386, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_387, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_388, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_389, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_390, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_391, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_392, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_393, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_394, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_395, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_396, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_397, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_398, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogPareto_v_399, AgradCcdfLogTestFixture, AgradCcdfLogPareto_v_399);
