#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_proportion/beta_proportion_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_300> AgradCcdfLogBetaProportion_fv_300;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_301> AgradCcdfLogBetaProportion_fv_301;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_302> AgradCcdfLogBetaProportion_fv_302;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_303> AgradCcdfLogBetaProportion_fv_303;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_304> AgradCcdfLogBetaProportion_fv_304;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_305> AgradCcdfLogBetaProportion_fv_305;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_306> AgradCcdfLogBetaProportion_fv_306;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_307> AgradCcdfLogBetaProportion_fv_307;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_308> AgradCcdfLogBetaProportion_fv_308;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_309> AgradCcdfLogBetaProportion_fv_309;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_310> AgradCcdfLogBetaProportion_fv_310;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_311> AgradCcdfLogBetaProportion_fv_311;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_312> AgradCcdfLogBetaProportion_fv_312;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_313> AgradCcdfLogBetaProportion_fv_313;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_314> AgradCcdfLogBetaProportion_fv_314;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_315> AgradCcdfLogBetaProportion_fv_315;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_316> AgradCcdfLogBetaProportion_fv_316;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_317> AgradCcdfLogBetaProportion_fv_317;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_318> AgradCcdfLogBetaProportion_fv_318;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_319> AgradCcdfLogBetaProportion_fv_319;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_320> AgradCcdfLogBetaProportion_fv_320;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_321> AgradCcdfLogBetaProportion_fv_321;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_322> AgradCcdfLogBetaProportion_fv_322;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_323> AgradCcdfLogBetaProportion_fv_323;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_324> AgradCcdfLogBetaProportion_fv_324;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_325> AgradCcdfLogBetaProportion_fv_325;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_326> AgradCcdfLogBetaProportion_fv_326;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_327> AgradCcdfLogBetaProportion_fv_327;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_328> AgradCcdfLogBetaProportion_fv_328;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_329> AgradCcdfLogBetaProportion_fv_329;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_330> AgradCcdfLogBetaProportion_fv_330;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_331> AgradCcdfLogBetaProportion_fv_331;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_332> AgradCcdfLogBetaProportion_fv_332;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_333> AgradCcdfLogBetaProportion_fv_333;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_334> AgradCcdfLogBetaProportion_fv_334;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_335> AgradCcdfLogBetaProportion_fv_335;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_336> AgradCcdfLogBetaProportion_fv_336;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_337> AgradCcdfLogBetaProportion_fv_337;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_338> AgradCcdfLogBetaProportion_fv_338;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_339> AgradCcdfLogBetaProportion_fv_339;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_340> AgradCcdfLogBetaProportion_fv_340;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_341> AgradCcdfLogBetaProportion_fv_341;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_342> AgradCcdfLogBetaProportion_fv_342;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_343> AgradCcdfLogBetaProportion_fv_343;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_344> AgradCcdfLogBetaProportion_fv_344;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_345> AgradCcdfLogBetaProportion_fv_345;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_346> AgradCcdfLogBetaProportion_fv_346;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_347> AgradCcdfLogBetaProportion_fv_347;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_348> AgradCcdfLogBetaProportion_fv_348;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_349> AgradCcdfLogBetaProportion_fv_349;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_350> AgradCcdfLogBetaProportion_fv_350;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_351> AgradCcdfLogBetaProportion_fv_351;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_352> AgradCcdfLogBetaProportion_fv_352;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_353> AgradCcdfLogBetaProportion_fv_353;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_354> AgradCcdfLogBetaProportion_fv_354;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_355> AgradCcdfLogBetaProportion_fv_355;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_356> AgradCcdfLogBetaProportion_fv_356;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_357> AgradCcdfLogBetaProportion_fv_357;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_358> AgradCcdfLogBetaProportion_fv_358;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_359> AgradCcdfLogBetaProportion_fv_359;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_360> AgradCcdfLogBetaProportion_fv_360;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_361> AgradCcdfLogBetaProportion_fv_361;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_362> AgradCcdfLogBetaProportion_fv_362;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_363> AgradCcdfLogBetaProportion_fv_363;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_364> AgradCcdfLogBetaProportion_fv_364;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_365> AgradCcdfLogBetaProportion_fv_365;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_366> AgradCcdfLogBetaProportion_fv_366;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_367> AgradCcdfLogBetaProportion_fv_367;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_368> AgradCcdfLogBetaProportion_fv_368;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_369> AgradCcdfLogBetaProportion_fv_369;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_370> AgradCcdfLogBetaProportion_fv_370;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_371> AgradCcdfLogBetaProportion_fv_371;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_372> AgradCcdfLogBetaProportion_fv_372;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_373> AgradCcdfLogBetaProportion_fv_373;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_374> AgradCcdfLogBetaProportion_fv_374;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_375> AgradCcdfLogBetaProportion_fv_375;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_376> AgradCcdfLogBetaProportion_fv_376;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_377> AgradCcdfLogBetaProportion_fv_377;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_378> AgradCcdfLogBetaProportion_fv_378;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_379> AgradCcdfLogBetaProportion_fv_379;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_380> AgradCcdfLogBetaProportion_fv_380;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_381> AgradCcdfLogBetaProportion_fv_381;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_382> AgradCcdfLogBetaProportion_fv_382;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_383> AgradCcdfLogBetaProportion_fv_383;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_384> AgradCcdfLogBetaProportion_fv_384;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_385> AgradCcdfLogBetaProportion_fv_385;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_386> AgradCcdfLogBetaProportion_fv_386;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_387> AgradCcdfLogBetaProportion_fv_387;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_388> AgradCcdfLogBetaProportion_fv_388;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_389> AgradCcdfLogBetaProportion_fv_389;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_390> AgradCcdfLogBetaProportion_fv_390;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_391> AgradCcdfLogBetaProportion_fv_391;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_392> AgradCcdfLogBetaProportion_fv_392;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_393> AgradCcdfLogBetaProportion_fv_393;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_394> AgradCcdfLogBetaProportion_fv_394;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_395> AgradCcdfLogBetaProportion_fv_395;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_396> AgradCcdfLogBetaProportion_fv_396;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_397> AgradCcdfLogBetaProportion_fv_397;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_398> AgradCcdfLogBetaProportion_fv_398;
typedef boost::mpl::vector<AgradCcdfLogBetaProportion, type_fv_399> AgradCcdfLogBetaProportion_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_300, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_301, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_302, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_303, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_304, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_305, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_306, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_307, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_308, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_309, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_310, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_311, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_312, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_313, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_314, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_315, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_316, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_317, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_318, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_319, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_320, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_321, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_322, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_323, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_324, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_325, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_326, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_327, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_328, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_329, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_330, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_331, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_332, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_333, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_334, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_335, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_336, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_337, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_338, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_339, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_340, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_341, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_342, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_343, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_344, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_345, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_346, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_347, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_348, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_349, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_350, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_351, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_352, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_353, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_354, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_355, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_356, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_357, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_358, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_359, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_360, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_361, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_362, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_363, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_364, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_365, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_366, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_367, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_368, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_369, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_370, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_371, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_372, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_373, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_374, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_375, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_376, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_377, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_378, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_379, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_380, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_381, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_382, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_383, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_384, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_385, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_386, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_387, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_388, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_389, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_390, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_391, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_392, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_393, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_394, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_395, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_396, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_397, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_398, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaProportion_fv_399, AgradCcdfLogTestFixture, AgradCcdfLogBetaProportion_fv_399);
