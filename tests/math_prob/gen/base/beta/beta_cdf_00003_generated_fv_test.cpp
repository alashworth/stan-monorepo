#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBeta, type_fv_300> AgradCdfBeta_fv_300;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_301> AgradCdfBeta_fv_301;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_302> AgradCdfBeta_fv_302;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_303> AgradCdfBeta_fv_303;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_304> AgradCdfBeta_fv_304;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_305> AgradCdfBeta_fv_305;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_306> AgradCdfBeta_fv_306;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_307> AgradCdfBeta_fv_307;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_308> AgradCdfBeta_fv_308;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_309> AgradCdfBeta_fv_309;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_310> AgradCdfBeta_fv_310;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_311> AgradCdfBeta_fv_311;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_312> AgradCdfBeta_fv_312;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_313> AgradCdfBeta_fv_313;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_314> AgradCdfBeta_fv_314;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_315> AgradCdfBeta_fv_315;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_316> AgradCdfBeta_fv_316;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_317> AgradCdfBeta_fv_317;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_318> AgradCdfBeta_fv_318;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_319> AgradCdfBeta_fv_319;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_320> AgradCdfBeta_fv_320;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_321> AgradCdfBeta_fv_321;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_322> AgradCdfBeta_fv_322;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_323> AgradCdfBeta_fv_323;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_324> AgradCdfBeta_fv_324;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_325> AgradCdfBeta_fv_325;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_326> AgradCdfBeta_fv_326;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_327> AgradCdfBeta_fv_327;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_328> AgradCdfBeta_fv_328;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_329> AgradCdfBeta_fv_329;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_330> AgradCdfBeta_fv_330;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_331> AgradCdfBeta_fv_331;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_332> AgradCdfBeta_fv_332;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_333> AgradCdfBeta_fv_333;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_334> AgradCdfBeta_fv_334;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_335> AgradCdfBeta_fv_335;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_336> AgradCdfBeta_fv_336;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_337> AgradCdfBeta_fv_337;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_338> AgradCdfBeta_fv_338;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_339> AgradCdfBeta_fv_339;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_340> AgradCdfBeta_fv_340;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_341> AgradCdfBeta_fv_341;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_342> AgradCdfBeta_fv_342;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_343> AgradCdfBeta_fv_343;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_344> AgradCdfBeta_fv_344;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_345> AgradCdfBeta_fv_345;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_346> AgradCdfBeta_fv_346;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_347> AgradCdfBeta_fv_347;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_348> AgradCdfBeta_fv_348;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_349> AgradCdfBeta_fv_349;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_350> AgradCdfBeta_fv_350;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_351> AgradCdfBeta_fv_351;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_352> AgradCdfBeta_fv_352;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_353> AgradCdfBeta_fv_353;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_354> AgradCdfBeta_fv_354;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_355> AgradCdfBeta_fv_355;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_356> AgradCdfBeta_fv_356;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_357> AgradCdfBeta_fv_357;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_358> AgradCdfBeta_fv_358;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_359> AgradCdfBeta_fv_359;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_360> AgradCdfBeta_fv_360;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_361> AgradCdfBeta_fv_361;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_362> AgradCdfBeta_fv_362;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_363> AgradCdfBeta_fv_363;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_364> AgradCdfBeta_fv_364;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_365> AgradCdfBeta_fv_365;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_366> AgradCdfBeta_fv_366;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_367> AgradCdfBeta_fv_367;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_368> AgradCdfBeta_fv_368;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_369> AgradCdfBeta_fv_369;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_370> AgradCdfBeta_fv_370;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_371> AgradCdfBeta_fv_371;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_372> AgradCdfBeta_fv_372;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_373> AgradCdfBeta_fv_373;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_374> AgradCdfBeta_fv_374;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_375> AgradCdfBeta_fv_375;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_376> AgradCdfBeta_fv_376;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_377> AgradCdfBeta_fv_377;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_378> AgradCdfBeta_fv_378;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_379> AgradCdfBeta_fv_379;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_380> AgradCdfBeta_fv_380;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_381> AgradCdfBeta_fv_381;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_382> AgradCdfBeta_fv_382;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_383> AgradCdfBeta_fv_383;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_384> AgradCdfBeta_fv_384;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_385> AgradCdfBeta_fv_385;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_386> AgradCdfBeta_fv_386;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_387> AgradCdfBeta_fv_387;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_388> AgradCdfBeta_fv_388;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_389> AgradCdfBeta_fv_389;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_390> AgradCdfBeta_fv_390;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_391> AgradCdfBeta_fv_391;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_392> AgradCdfBeta_fv_392;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_393> AgradCdfBeta_fv_393;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_394> AgradCdfBeta_fv_394;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_395> AgradCdfBeta_fv_395;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_396> AgradCdfBeta_fv_396;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_397> AgradCdfBeta_fv_397;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_398> AgradCdfBeta_fv_398;
typedef boost::mpl::vector<AgradCdfBeta, type_fv_399> AgradCdfBeta_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_300, AgradCdfTestFixture, AgradCdfBeta_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_301, AgradCdfTestFixture, AgradCdfBeta_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_302, AgradCdfTestFixture, AgradCdfBeta_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_303, AgradCdfTestFixture, AgradCdfBeta_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_304, AgradCdfTestFixture, AgradCdfBeta_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_305, AgradCdfTestFixture, AgradCdfBeta_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_306, AgradCdfTestFixture, AgradCdfBeta_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_307, AgradCdfTestFixture, AgradCdfBeta_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_308, AgradCdfTestFixture, AgradCdfBeta_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_309, AgradCdfTestFixture, AgradCdfBeta_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_310, AgradCdfTestFixture, AgradCdfBeta_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_311, AgradCdfTestFixture, AgradCdfBeta_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_312, AgradCdfTestFixture, AgradCdfBeta_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_313, AgradCdfTestFixture, AgradCdfBeta_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_314, AgradCdfTestFixture, AgradCdfBeta_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_315, AgradCdfTestFixture, AgradCdfBeta_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_316, AgradCdfTestFixture, AgradCdfBeta_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_317, AgradCdfTestFixture, AgradCdfBeta_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_318, AgradCdfTestFixture, AgradCdfBeta_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_319, AgradCdfTestFixture, AgradCdfBeta_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_320, AgradCdfTestFixture, AgradCdfBeta_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_321, AgradCdfTestFixture, AgradCdfBeta_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_322, AgradCdfTestFixture, AgradCdfBeta_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_323, AgradCdfTestFixture, AgradCdfBeta_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_324, AgradCdfTestFixture, AgradCdfBeta_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_325, AgradCdfTestFixture, AgradCdfBeta_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_326, AgradCdfTestFixture, AgradCdfBeta_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_327, AgradCdfTestFixture, AgradCdfBeta_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_328, AgradCdfTestFixture, AgradCdfBeta_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_329, AgradCdfTestFixture, AgradCdfBeta_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_330, AgradCdfTestFixture, AgradCdfBeta_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_331, AgradCdfTestFixture, AgradCdfBeta_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_332, AgradCdfTestFixture, AgradCdfBeta_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_333, AgradCdfTestFixture, AgradCdfBeta_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_334, AgradCdfTestFixture, AgradCdfBeta_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_335, AgradCdfTestFixture, AgradCdfBeta_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_336, AgradCdfTestFixture, AgradCdfBeta_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_337, AgradCdfTestFixture, AgradCdfBeta_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_338, AgradCdfTestFixture, AgradCdfBeta_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_339, AgradCdfTestFixture, AgradCdfBeta_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_340, AgradCdfTestFixture, AgradCdfBeta_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_341, AgradCdfTestFixture, AgradCdfBeta_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_342, AgradCdfTestFixture, AgradCdfBeta_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_343, AgradCdfTestFixture, AgradCdfBeta_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_344, AgradCdfTestFixture, AgradCdfBeta_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_345, AgradCdfTestFixture, AgradCdfBeta_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_346, AgradCdfTestFixture, AgradCdfBeta_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_347, AgradCdfTestFixture, AgradCdfBeta_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_348, AgradCdfTestFixture, AgradCdfBeta_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_349, AgradCdfTestFixture, AgradCdfBeta_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_350, AgradCdfTestFixture, AgradCdfBeta_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_351, AgradCdfTestFixture, AgradCdfBeta_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_352, AgradCdfTestFixture, AgradCdfBeta_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_353, AgradCdfTestFixture, AgradCdfBeta_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_354, AgradCdfTestFixture, AgradCdfBeta_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_355, AgradCdfTestFixture, AgradCdfBeta_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_356, AgradCdfTestFixture, AgradCdfBeta_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_357, AgradCdfTestFixture, AgradCdfBeta_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_358, AgradCdfTestFixture, AgradCdfBeta_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_359, AgradCdfTestFixture, AgradCdfBeta_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_360, AgradCdfTestFixture, AgradCdfBeta_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_361, AgradCdfTestFixture, AgradCdfBeta_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_362, AgradCdfTestFixture, AgradCdfBeta_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_363, AgradCdfTestFixture, AgradCdfBeta_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_364, AgradCdfTestFixture, AgradCdfBeta_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_365, AgradCdfTestFixture, AgradCdfBeta_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_366, AgradCdfTestFixture, AgradCdfBeta_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_367, AgradCdfTestFixture, AgradCdfBeta_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_368, AgradCdfTestFixture, AgradCdfBeta_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_369, AgradCdfTestFixture, AgradCdfBeta_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_370, AgradCdfTestFixture, AgradCdfBeta_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_371, AgradCdfTestFixture, AgradCdfBeta_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_372, AgradCdfTestFixture, AgradCdfBeta_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_373, AgradCdfTestFixture, AgradCdfBeta_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_374, AgradCdfTestFixture, AgradCdfBeta_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_375, AgradCdfTestFixture, AgradCdfBeta_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_376, AgradCdfTestFixture, AgradCdfBeta_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_377, AgradCdfTestFixture, AgradCdfBeta_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_378, AgradCdfTestFixture, AgradCdfBeta_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_379, AgradCdfTestFixture, AgradCdfBeta_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_380, AgradCdfTestFixture, AgradCdfBeta_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_381, AgradCdfTestFixture, AgradCdfBeta_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_382, AgradCdfTestFixture, AgradCdfBeta_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_383, AgradCdfTestFixture, AgradCdfBeta_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_384, AgradCdfTestFixture, AgradCdfBeta_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_385, AgradCdfTestFixture, AgradCdfBeta_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_386, AgradCdfTestFixture, AgradCdfBeta_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_387, AgradCdfTestFixture, AgradCdfBeta_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_388, AgradCdfTestFixture, AgradCdfBeta_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_389, AgradCdfTestFixture, AgradCdfBeta_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_390, AgradCdfTestFixture, AgradCdfBeta_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_391, AgradCdfTestFixture, AgradCdfBeta_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_392, AgradCdfTestFixture, AgradCdfBeta_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_393, AgradCdfTestFixture, AgradCdfBeta_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_394, AgradCdfTestFixture, AgradCdfBeta_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_395, AgradCdfTestFixture, AgradCdfBeta_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_396, AgradCdfTestFixture, AgradCdfBeta_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_397, AgradCdfTestFixture, AgradCdfBeta_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_398, AgradCdfTestFixture, AgradCdfBeta_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_fv_399, AgradCdfTestFixture, AgradCdfBeta_fv_399);

