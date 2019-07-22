#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_300> AgradCcdfLogBeta_fd_300;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_301> AgradCcdfLogBeta_fd_301;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_302> AgradCcdfLogBeta_fd_302;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_303> AgradCcdfLogBeta_fd_303;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_304> AgradCcdfLogBeta_fd_304;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_305> AgradCcdfLogBeta_fd_305;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_306> AgradCcdfLogBeta_fd_306;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_307> AgradCcdfLogBeta_fd_307;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_308> AgradCcdfLogBeta_fd_308;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_309> AgradCcdfLogBeta_fd_309;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_310> AgradCcdfLogBeta_fd_310;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_311> AgradCcdfLogBeta_fd_311;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_312> AgradCcdfLogBeta_fd_312;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_313> AgradCcdfLogBeta_fd_313;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_314> AgradCcdfLogBeta_fd_314;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_315> AgradCcdfLogBeta_fd_315;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_316> AgradCcdfLogBeta_fd_316;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_317> AgradCcdfLogBeta_fd_317;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_318> AgradCcdfLogBeta_fd_318;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_319> AgradCcdfLogBeta_fd_319;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_320> AgradCcdfLogBeta_fd_320;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_321> AgradCcdfLogBeta_fd_321;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_322> AgradCcdfLogBeta_fd_322;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_323> AgradCcdfLogBeta_fd_323;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_324> AgradCcdfLogBeta_fd_324;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_325> AgradCcdfLogBeta_fd_325;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_326> AgradCcdfLogBeta_fd_326;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_327> AgradCcdfLogBeta_fd_327;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_328> AgradCcdfLogBeta_fd_328;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_329> AgradCcdfLogBeta_fd_329;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_330> AgradCcdfLogBeta_fd_330;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_331> AgradCcdfLogBeta_fd_331;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_332> AgradCcdfLogBeta_fd_332;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_333> AgradCcdfLogBeta_fd_333;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_334> AgradCcdfLogBeta_fd_334;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_335> AgradCcdfLogBeta_fd_335;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_336> AgradCcdfLogBeta_fd_336;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_337> AgradCcdfLogBeta_fd_337;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_338> AgradCcdfLogBeta_fd_338;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_339> AgradCcdfLogBeta_fd_339;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_340> AgradCcdfLogBeta_fd_340;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_341> AgradCcdfLogBeta_fd_341;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_342> AgradCcdfLogBeta_fd_342;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_343> AgradCcdfLogBeta_fd_343;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_344> AgradCcdfLogBeta_fd_344;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_345> AgradCcdfLogBeta_fd_345;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_346> AgradCcdfLogBeta_fd_346;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_347> AgradCcdfLogBeta_fd_347;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_348> AgradCcdfLogBeta_fd_348;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_349> AgradCcdfLogBeta_fd_349;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_350> AgradCcdfLogBeta_fd_350;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_351> AgradCcdfLogBeta_fd_351;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_352> AgradCcdfLogBeta_fd_352;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_353> AgradCcdfLogBeta_fd_353;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_354> AgradCcdfLogBeta_fd_354;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_355> AgradCcdfLogBeta_fd_355;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_356> AgradCcdfLogBeta_fd_356;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_357> AgradCcdfLogBeta_fd_357;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_358> AgradCcdfLogBeta_fd_358;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_359> AgradCcdfLogBeta_fd_359;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_360> AgradCcdfLogBeta_fd_360;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_361> AgradCcdfLogBeta_fd_361;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_362> AgradCcdfLogBeta_fd_362;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_363> AgradCcdfLogBeta_fd_363;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_364> AgradCcdfLogBeta_fd_364;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_365> AgradCcdfLogBeta_fd_365;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_366> AgradCcdfLogBeta_fd_366;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_367> AgradCcdfLogBeta_fd_367;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_368> AgradCcdfLogBeta_fd_368;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_369> AgradCcdfLogBeta_fd_369;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_370> AgradCcdfLogBeta_fd_370;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_371> AgradCcdfLogBeta_fd_371;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_372> AgradCcdfLogBeta_fd_372;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_373> AgradCcdfLogBeta_fd_373;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_374> AgradCcdfLogBeta_fd_374;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_375> AgradCcdfLogBeta_fd_375;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_376> AgradCcdfLogBeta_fd_376;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_377> AgradCcdfLogBeta_fd_377;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_378> AgradCcdfLogBeta_fd_378;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_379> AgradCcdfLogBeta_fd_379;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_380> AgradCcdfLogBeta_fd_380;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_381> AgradCcdfLogBeta_fd_381;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_382> AgradCcdfLogBeta_fd_382;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_383> AgradCcdfLogBeta_fd_383;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_384> AgradCcdfLogBeta_fd_384;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_385> AgradCcdfLogBeta_fd_385;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_386> AgradCcdfLogBeta_fd_386;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_387> AgradCcdfLogBeta_fd_387;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_388> AgradCcdfLogBeta_fd_388;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_389> AgradCcdfLogBeta_fd_389;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_390> AgradCcdfLogBeta_fd_390;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_391> AgradCcdfLogBeta_fd_391;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_392> AgradCcdfLogBeta_fd_392;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_393> AgradCcdfLogBeta_fd_393;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_394> AgradCcdfLogBeta_fd_394;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_395> AgradCcdfLogBeta_fd_395;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_396> AgradCcdfLogBeta_fd_396;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_397> AgradCcdfLogBeta_fd_397;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_398> AgradCcdfLogBeta_fd_398;
typedef boost::mpl::vector<AgradCcdfLogBeta, type_fd_399> AgradCcdfLogBeta_fd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_300, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_301, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_302, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_303, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_304, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_305, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_306, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_307, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_308, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_309, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_310, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_311, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_312, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_313, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_314, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_315, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_316, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_317, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_318, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_319, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_320, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_321, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_322, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_323, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_324, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_325, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_326, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_327, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_328, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_329, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_330, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_331, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_332, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_333, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_334, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_335, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_336, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_337, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_338, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_339, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_340, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_341, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_342, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_343, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_344, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_345, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_346, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_347, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_348, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_349, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_350, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_351, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_352, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_353, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_354, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_355, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_356, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_357, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_358, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_359, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_360, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_361, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_362, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_363, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_364, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_365, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_366, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_367, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_368, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_369, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_370, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_371, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_372, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_373, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_374, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_375, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_376, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_377, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_378, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_379, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_380, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_381, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_382, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_383, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_384, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_385, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_386, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_387, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_388, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_389, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_390, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_391, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_392, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_393, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_394, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_395, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_396, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_397, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_398, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBeta_fd_399, AgradCcdfLogTestFixture, AgradCcdfLogBeta_fd_399);

