#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_300> AgradCdfLogInvGamma_v_300;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_301> AgradCdfLogInvGamma_v_301;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_302> AgradCdfLogInvGamma_v_302;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_303> AgradCdfLogInvGamma_v_303;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_304> AgradCdfLogInvGamma_v_304;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_305> AgradCdfLogInvGamma_v_305;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_306> AgradCdfLogInvGamma_v_306;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_307> AgradCdfLogInvGamma_v_307;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_308> AgradCdfLogInvGamma_v_308;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_309> AgradCdfLogInvGamma_v_309;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_310> AgradCdfLogInvGamma_v_310;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_311> AgradCdfLogInvGamma_v_311;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_312> AgradCdfLogInvGamma_v_312;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_313> AgradCdfLogInvGamma_v_313;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_314> AgradCdfLogInvGamma_v_314;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_315> AgradCdfLogInvGamma_v_315;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_316> AgradCdfLogInvGamma_v_316;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_317> AgradCdfLogInvGamma_v_317;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_318> AgradCdfLogInvGamma_v_318;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_319> AgradCdfLogInvGamma_v_319;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_320> AgradCdfLogInvGamma_v_320;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_321> AgradCdfLogInvGamma_v_321;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_322> AgradCdfLogInvGamma_v_322;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_323> AgradCdfLogInvGamma_v_323;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_324> AgradCdfLogInvGamma_v_324;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_325> AgradCdfLogInvGamma_v_325;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_326> AgradCdfLogInvGamma_v_326;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_327> AgradCdfLogInvGamma_v_327;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_328> AgradCdfLogInvGamma_v_328;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_329> AgradCdfLogInvGamma_v_329;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_330> AgradCdfLogInvGamma_v_330;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_331> AgradCdfLogInvGamma_v_331;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_332> AgradCdfLogInvGamma_v_332;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_333> AgradCdfLogInvGamma_v_333;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_334> AgradCdfLogInvGamma_v_334;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_335> AgradCdfLogInvGamma_v_335;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_336> AgradCdfLogInvGamma_v_336;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_337> AgradCdfLogInvGamma_v_337;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_338> AgradCdfLogInvGamma_v_338;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_339> AgradCdfLogInvGamma_v_339;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_340> AgradCdfLogInvGamma_v_340;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_341> AgradCdfLogInvGamma_v_341;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_342> AgradCdfLogInvGamma_v_342;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_343> AgradCdfLogInvGamma_v_343;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_344> AgradCdfLogInvGamma_v_344;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_345> AgradCdfLogInvGamma_v_345;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_346> AgradCdfLogInvGamma_v_346;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_347> AgradCdfLogInvGamma_v_347;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_348> AgradCdfLogInvGamma_v_348;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_349> AgradCdfLogInvGamma_v_349;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_350> AgradCdfLogInvGamma_v_350;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_351> AgradCdfLogInvGamma_v_351;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_352> AgradCdfLogInvGamma_v_352;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_353> AgradCdfLogInvGamma_v_353;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_354> AgradCdfLogInvGamma_v_354;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_355> AgradCdfLogInvGamma_v_355;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_356> AgradCdfLogInvGamma_v_356;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_357> AgradCdfLogInvGamma_v_357;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_358> AgradCdfLogInvGamma_v_358;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_359> AgradCdfLogInvGamma_v_359;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_360> AgradCdfLogInvGamma_v_360;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_361> AgradCdfLogInvGamma_v_361;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_362> AgradCdfLogInvGamma_v_362;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_363> AgradCdfLogInvGamma_v_363;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_364> AgradCdfLogInvGamma_v_364;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_365> AgradCdfLogInvGamma_v_365;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_366> AgradCdfLogInvGamma_v_366;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_367> AgradCdfLogInvGamma_v_367;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_368> AgradCdfLogInvGamma_v_368;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_369> AgradCdfLogInvGamma_v_369;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_370> AgradCdfLogInvGamma_v_370;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_371> AgradCdfLogInvGamma_v_371;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_372> AgradCdfLogInvGamma_v_372;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_373> AgradCdfLogInvGamma_v_373;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_374> AgradCdfLogInvGamma_v_374;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_375> AgradCdfLogInvGamma_v_375;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_376> AgradCdfLogInvGamma_v_376;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_377> AgradCdfLogInvGamma_v_377;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_378> AgradCdfLogInvGamma_v_378;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_379> AgradCdfLogInvGamma_v_379;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_380> AgradCdfLogInvGamma_v_380;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_381> AgradCdfLogInvGamma_v_381;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_382> AgradCdfLogInvGamma_v_382;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_383> AgradCdfLogInvGamma_v_383;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_384> AgradCdfLogInvGamma_v_384;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_385> AgradCdfLogInvGamma_v_385;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_386> AgradCdfLogInvGamma_v_386;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_387> AgradCdfLogInvGamma_v_387;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_388> AgradCdfLogInvGamma_v_388;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_389> AgradCdfLogInvGamma_v_389;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_390> AgradCdfLogInvGamma_v_390;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_391> AgradCdfLogInvGamma_v_391;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_392> AgradCdfLogInvGamma_v_392;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_393> AgradCdfLogInvGamma_v_393;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_394> AgradCdfLogInvGamma_v_394;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_395> AgradCdfLogInvGamma_v_395;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_396> AgradCdfLogInvGamma_v_396;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_397> AgradCdfLogInvGamma_v_397;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_398> AgradCdfLogInvGamma_v_398;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_v_399> AgradCdfLogInvGamma_v_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_300, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_301, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_302, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_303, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_304, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_305, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_306, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_307, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_308, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_309, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_310, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_311, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_312, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_313, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_314, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_315, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_316, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_317, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_318, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_319, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_320, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_321, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_322, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_323, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_324, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_325, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_326, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_327, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_328, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_329, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_330, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_331, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_332, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_333, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_334, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_335, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_336, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_337, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_338, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_339, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_340, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_341, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_342, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_343, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_344, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_345, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_346, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_347, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_348, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_349, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_350, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_351, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_352, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_353, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_354, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_355, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_356, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_357, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_358, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_359, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_360, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_361, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_362, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_363, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_364, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_365, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_366, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_367, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_368, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_369, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_370, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_371, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_372, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_373, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_374, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_375, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_376, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_377, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_378, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_379, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_380, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_381, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_382, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_383, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_384, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_385, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_386, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_387, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_388, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_389, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_390, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_391, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_392, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_393, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_394, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_395, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_396, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_397, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_398, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_v_399, AgradCdfLogTestFixture, AgradCdfLogInvGamma_v_399);

