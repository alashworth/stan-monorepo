#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_300> AgradCcdfLogGamma_v_300;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_301> AgradCcdfLogGamma_v_301;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_302> AgradCcdfLogGamma_v_302;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_303> AgradCcdfLogGamma_v_303;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_304> AgradCcdfLogGamma_v_304;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_305> AgradCcdfLogGamma_v_305;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_306> AgradCcdfLogGamma_v_306;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_307> AgradCcdfLogGamma_v_307;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_308> AgradCcdfLogGamma_v_308;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_309> AgradCcdfLogGamma_v_309;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_310> AgradCcdfLogGamma_v_310;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_311> AgradCcdfLogGamma_v_311;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_312> AgradCcdfLogGamma_v_312;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_313> AgradCcdfLogGamma_v_313;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_314> AgradCcdfLogGamma_v_314;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_315> AgradCcdfLogGamma_v_315;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_316> AgradCcdfLogGamma_v_316;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_317> AgradCcdfLogGamma_v_317;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_318> AgradCcdfLogGamma_v_318;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_319> AgradCcdfLogGamma_v_319;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_320> AgradCcdfLogGamma_v_320;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_321> AgradCcdfLogGamma_v_321;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_322> AgradCcdfLogGamma_v_322;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_323> AgradCcdfLogGamma_v_323;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_324> AgradCcdfLogGamma_v_324;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_325> AgradCcdfLogGamma_v_325;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_326> AgradCcdfLogGamma_v_326;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_327> AgradCcdfLogGamma_v_327;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_328> AgradCcdfLogGamma_v_328;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_329> AgradCcdfLogGamma_v_329;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_330> AgradCcdfLogGamma_v_330;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_331> AgradCcdfLogGamma_v_331;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_332> AgradCcdfLogGamma_v_332;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_333> AgradCcdfLogGamma_v_333;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_334> AgradCcdfLogGamma_v_334;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_335> AgradCcdfLogGamma_v_335;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_336> AgradCcdfLogGamma_v_336;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_337> AgradCcdfLogGamma_v_337;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_338> AgradCcdfLogGamma_v_338;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_339> AgradCcdfLogGamma_v_339;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_340> AgradCcdfLogGamma_v_340;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_341> AgradCcdfLogGamma_v_341;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_342> AgradCcdfLogGamma_v_342;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_343> AgradCcdfLogGamma_v_343;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_344> AgradCcdfLogGamma_v_344;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_345> AgradCcdfLogGamma_v_345;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_346> AgradCcdfLogGamma_v_346;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_347> AgradCcdfLogGamma_v_347;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_348> AgradCcdfLogGamma_v_348;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_349> AgradCcdfLogGamma_v_349;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_350> AgradCcdfLogGamma_v_350;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_351> AgradCcdfLogGamma_v_351;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_352> AgradCcdfLogGamma_v_352;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_353> AgradCcdfLogGamma_v_353;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_354> AgradCcdfLogGamma_v_354;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_355> AgradCcdfLogGamma_v_355;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_356> AgradCcdfLogGamma_v_356;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_357> AgradCcdfLogGamma_v_357;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_358> AgradCcdfLogGamma_v_358;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_359> AgradCcdfLogGamma_v_359;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_360> AgradCcdfLogGamma_v_360;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_361> AgradCcdfLogGamma_v_361;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_362> AgradCcdfLogGamma_v_362;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_363> AgradCcdfLogGamma_v_363;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_364> AgradCcdfLogGamma_v_364;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_365> AgradCcdfLogGamma_v_365;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_366> AgradCcdfLogGamma_v_366;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_367> AgradCcdfLogGamma_v_367;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_368> AgradCcdfLogGamma_v_368;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_369> AgradCcdfLogGamma_v_369;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_370> AgradCcdfLogGamma_v_370;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_371> AgradCcdfLogGamma_v_371;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_372> AgradCcdfLogGamma_v_372;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_373> AgradCcdfLogGamma_v_373;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_374> AgradCcdfLogGamma_v_374;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_375> AgradCcdfLogGamma_v_375;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_376> AgradCcdfLogGamma_v_376;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_377> AgradCcdfLogGamma_v_377;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_378> AgradCcdfLogGamma_v_378;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_379> AgradCcdfLogGamma_v_379;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_380> AgradCcdfLogGamma_v_380;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_381> AgradCcdfLogGamma_v_381;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_382> AgradCcdfLogGamma_v_382;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_383> AgradCcdfLogGamma_v_383;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_384> AgradCcdfLogGamma_v_384;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_385> AgradCcdfLogGamma_v_385;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_386> AgradCcdfLogGamma_v_386;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_387> AgradCcdfLogGamma_v_387;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_388> AgradCcdfLogGamma_v_388;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_389> AgradCcdfLogGamma_v_389;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_390> AgradCcdfLogGamma_v_390;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_391> AgradCcdfLogGamma_v_391;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_392> AgradCcdfLogGamma_v_392;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_393> AgradCcdfLogGamma_v_393;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_394> AgradCcdfLogGamma_v_394;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_395> AgradCcdfLogGamma_v_395;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_396> AgradCcdfLogGamma_v_396;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_397> AgradCcdfLogGamma_v_397;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_398> AgradCcdfLogGamma_v_398;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_v_399> AgradCcdfLogGamma_v_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_300, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_301, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_302, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_303, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_304, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_305, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_306, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_307, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_308, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_309, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_310, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_311, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_312, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_313, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_314, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_315, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_316, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_317, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_318, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_319, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_320, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_321, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_322, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_323, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_324, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_325, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_326, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_327, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_328, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_329, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_330, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_331, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_332, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_333, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_334, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_335, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_336, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_337, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_338, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_339, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_340, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_341, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_342, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_343, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_344, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_345, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_346, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_347, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_348, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_349, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_350, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_351, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_352, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_353, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_354, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_355, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_356, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_357, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_358, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_359, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_360, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_361, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_362, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_363, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_364, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_365, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_366, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_367, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_368, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_369, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_370, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_371, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_372, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_373, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_374, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_375, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_376, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_377, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_378, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_379, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_380, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_381, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_382, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_383, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_384, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_385, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_386, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_387, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_388, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_389, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_390, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_391, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_392, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_393, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_394, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_395, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_396, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_397, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_398, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_v_399, AgradCcdfLogTestFixture, AgradCcdfLogGamma_v_399);

