#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, empty, empty, empty> type_fd_300;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty> type_fd_301;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_302;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_303;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_304;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_305;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_306;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_307;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_308;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_309;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_310;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_311;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_312;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_313;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_314;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_315;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_316;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_317;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_318;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_fd_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_fd_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, fvar<double>, empty, empty, empty> type_fd_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, std::vector<fvar<double>>, empty, empty, empty> type_fd_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_fd_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_fd_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, fvar<double>, empty, empty, empty> type_fd_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, double, empty, empty, empty> type_fd_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, std::vector<double>, empty, empty, empty> type_fd_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, fvar<double>, empty, empty, empty> type_fd_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, double, empty, empty, empty> type_fd_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<double>, empty, empty, empty> type_fd_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, fvar<double>, empty, empty, empty> type_fd_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty> type_fd_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_fd_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_fd_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, fvar<double>, empty, empty, empty> type_fd_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, std::vector<fvar<double>>, empty, empty, empty> type_fd_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_fd_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_fd_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, fvar<double>, empty, empty, empty> type_fd_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_399;

typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_300> AgradCdfLogBeta_fd_300;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_301> AgradCdfLogBeta_fd_301;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_302> AgradCdfLogBeta_fd_302;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_303> AgradCdfLogBeta_fd_303;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_304> AgradCdfLogBeta_fd_304;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_305> AgradCdfLogBeta_fd_305;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_306> AgradCdfLogBeta_fd_306;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_307> AgradCdfLogBeta_fd_307;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_308> AgradCdfLogBeta_fd_308;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_309> AgradCdfLogBeta_fd_309;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_310> AgradCdfLogBeta_fd_310;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_311> AgradCdfLogBeta_fd_311;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_312> AgradCdfLogBeta_fd_312;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_313> AgradCdfLogBeta_fd_313;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_314> AgradCdfLogBeta_fd_314;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_315> AgradCdfLogBeta_fd_315;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_316> AgradCdfLogBeta_fd_316;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_317> AgradCdfLogBeta_fd_317;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_318> AgradCdfLogBeta_fd_318;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_319> AgradCdfLogBeta_fd_319;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_320> AgradCdfLogBeta_fd_320;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_321> AgradCdfLogBeta_fd_321;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_322> AgradCdfLogBeta_fd_322;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_323> AgradCdfLogBeta_fd_323;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_324> AgradCdfLogBeta_fd_324;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_325> AgradCdfLogBeta_fd_325;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_326> AgradCdfLogBeta_fd_326;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_327> AgradCdfLogBeta_fd_327;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_328> AgradCdfLogBeta_fd_328;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_329> AgradCdfLogBeta_fd_329;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_330> AgradCdfLogBeta_fd_330;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_331> AgradCdfLogBeta_fd_331;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_332> AgradCdfLogBeta_fd_332;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_333> AgradCdfLogBeta_fd_333;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_334> AgradCdfLogBeta_fd_334;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_335> AgradCdfLogBeta_fd_335;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_336> AgradCdfLogBeta_fd_336;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_337> AgradCdfLogBeta_fd_337;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_338> AgradCdfLogBeta_fd_338;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_339> AgradCdfLogBeta_fd_339;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_340> AgradCdfLogBeta_fd_340;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_341> AgradCdfLogBeta_fd_341;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_342> AgradCdfLogBeta_fd_342;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_343> AgradCdfLogBeta_fd_343;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_344> AgradCdfLogBeta_fd_344;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_345> AgradCdfLogBeta_fd_345;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_346> AgradCdfLogBeta_fd_346;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_347> AgradCdfLogBeta_fd_347;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_348> AgradCdfLogBeta_fd_348;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_349> AgradCdfLogBeta_fd_349;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_350> AgradCdfLogBeta_fd_350;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_351> AgradCdfLogBeta_fd_351;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_352> AgradCdfLogBeta_fd_352;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_353> AgradCdfLogBeta_fd_353;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_354> AgradCdfLogBeta_fd_354;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_355> AgradCdfLogBeta_fd_355;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_356> AgradCdfLogBeta_fd_356;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_357> AgradCdfLogBeta_fd_357;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_358> AgradCdfLogBeta_fd_358;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_359> AgradCdfLogBeta_fd_359;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_360> AgradCdfLogBeta_fd_360;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_361> AgradCdfLogBeta_fd_361;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_362> AgradCdfLogBeta_fd_362;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_363> AgradCdfLogBeta_fd_363;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_364> AgradCdfLogBeta_fd_364;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_365> AgradCdfLogBeta_fd_365;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_366> AgradCdfLogBeta_fd_366;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_367> AgradCdfLogBeta_fd_367;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_368> AgradCdfLogBeta_fd_368;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_369> AgradCdfLogBeta_fd_369;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_370> AgradCdfLogBeta_fd_370;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_371> AgradCdfLogBeta_fd_371;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_372> AgradCdfLogBeta_fd_372;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_373> AgradCdfLogBeta_fd_373;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_374> AgradCdfLogBeta_fd_374;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_375> AgradCdfLogBeta_fd_375;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_376> AgradCdfLogBeta_fd_376;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_377> AgradCdfLogBeta_fd_377;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_378> AgradCdfLogBeta_fd_378;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_379> AgradCdfLogBeta_fd_379;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_380> AgradCdfLogBeta_fd_380;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_381> AgradCdfLogBeta_fd_381;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_382> AgradCdfLogBeta_fd_382;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_383> AgradCdfLogBeta_fd_383;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_384> AgradCdfLogBeta_fd_384;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_385> AgradCdfLogBeta_fd_385;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_386> AgradCdfLogBeta_fd_386;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_387> AgradCdfLogBeta_fd_387;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_388> AgradCdfLogBeta_fd_388;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_389> AgradCdfLogBeta_fd_389;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_390> AgradCdfLogBeta_fd_390;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_391> AgradCdfLogBeta_fd_391;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_392> AgradCdfLogBeta_fd_392;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_393> AgradCdfLogBeta_fd_393;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_394> AgradCdfLogBeta_fd_394;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_395> AgradCdfLogBeta_fd_395;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_396> AgradCdfLogBeta_fd_396;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_397> AgradCdfLogBeta_fd_397;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_398> AgradCdfLogBeta_fd_398;
typedef boost::mpl::vector<AgradCdfLogBeta, type_fd_399> AgradCdfLogBeta_fd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_300, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_301, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_302, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_303, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_304, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_305, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_306, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_307, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_308, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_309, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_310, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_311, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_312, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_313, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_314, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_315, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_316, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_317, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_318, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_319, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_320, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_321, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_322, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_323, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_324, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_325, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_326, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_327, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_328, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_329, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_330, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_331, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_332, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_333, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_334, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_335, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_336, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_337, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_338, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_339, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_340, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_341, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_342, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_343, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_344, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_345, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_346, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_347, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_348, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_349, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_350, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_351, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_352, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_353, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_354, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_355, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_356, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_357, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_358, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_359, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_360, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_361, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_362, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_363, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_364, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_365, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_366, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_367, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_368, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_369, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_370, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_371, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_372, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_373, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_374, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_375, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_376, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_377, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_378, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_379, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_380, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_381, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_382, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_383, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_384, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_385, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_386, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_387, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_388, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_389, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_390, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_391, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_392, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_393, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_394, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_395, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_396, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_397, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_398, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBeta_fd_399, AgradCdfLogTestFixture, AgradCdfLogBeta_fd_399);
