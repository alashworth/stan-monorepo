#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_300> AgradDistributionsGamma_fd_300;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_301> AgradDistributionsGamma_fd_301;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_302> AgradDistributionsGamma_fd_302;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_303> AgradDistributionsGamma_fd_303;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_304> AgradDistributionsGamma_fd_304;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_305> AgradDistributionsGamma_fd_305;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_306> AgradDistributionsGamma_fd_306;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_307> AgradDistributionsGamma_fd_307;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_308> AgradDistributionsGamma_fd_308;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_309> AgradDistributionsGamma_fd_309;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_310> AgradDistributionsGamma_fd_310;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_311> AgradDistributionsGamma_fd_311;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_312> AgradDistributionsGamma_fd_312;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_313> AgradDistributionsGamma_fd_313;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_314> AgradDistributionsGamma_fd_314;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_315> AgradDistributionsGamma_fd_315;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_316> AgradDistributionsGamma_fd_316;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_317> AgradDistributionsGamma_fd_317;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_318> AgradDistributionsGamma_fd_318;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_319> AgradDistributionsGamma_fd_319;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_320> AgradDistributionsGamma_fd_320;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_321> AgradDistributionsGamma_fd_321;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_322> AgradDistributionsGamma_fd_322;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_323> AgradDistributionsGamma_fd_323;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_324> AgradDistributionsGamma_fd_324;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_325> AgradDistributionsGamma_fd_325;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_326> AgradDistributionsGamma_fd_326;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_327> AgradDistributionsGamma_fd_327;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_328> AgradDistributionsGamma_fd_328;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_329> AgradDistributionsGamma_fd_329;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_330> AgradDistributionsGamma_fd_330;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_331> AgradDistributionsGamma_fd_331;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_332> AgradDistributionsGamma_fd_332;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_333> AgradDistributionsGamma_fd_333;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_334> AgradDistributionsGamma_fd_334;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_335> AgradDistributionsGamma_fd_335;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_336> AgradDistributionsGamma_fd_336;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_337> AgradDistributionsGamma_fd_337;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_338> AgradDistributionsGamma_fd_338;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_339> AgradDistributionsGamma_fd_339;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_340> AgradDistributionsGamma_fd_340;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_341> AgradDistributionsGamma_fd_341;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_342> AgradDistributionsGamma_fd_342;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_343> AgradDistributionsGamma_fd_343;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_344> AgradDistributionsGamma_fd_344;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_345> AgradDistributionsGamma_fd_345;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_346> AgradDistributionsGamma_fd_346;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_347> AgradDistributionsGamma_fd_347;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_348> AgradDistributionsGamma_fd_348;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_349> AgradDistributionsGamma_fd_349;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_350> AgradDistributionsGamma_fd_350;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_351> AgradDistributionsGamma_fd_351;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_352> AgradDistributionsGamma_fd_352;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_353> AgradDistributionsGamma_fd_353;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_354> AgradDistributionsGamma_fd_354;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_355> AgradDistributionsGamma_fd_355;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_356> AgradDistributionsGamma_fd_356;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_357> AgradDistributionsGamma_fd_357;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_358> AgradDistributionsGamma_fd_358;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_359> AgradDistributionsGamma_fd_359;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_360> AgradDistributionsGamma_fd_360;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_361> AgradDistributionsGamma_fd_361;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_362> AgradDistributionsGamma_fd_362;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_363> AgradDistributionsGamma_fd_363;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_364> AgradDistributionsGamma_fd_364;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_365> AgradDistributionsGamma_fd_365;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_366> AgradDistributionsGamma_fd_366;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_367> AgradDistributionsGamma_fd_367;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_368> AgradDistributionsGamma_fd_368;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_369> AgradDistributionsGamma_fd_369;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_370> AgradDistributionsGamma_fd_370;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_371> AgradDistributionsGamma_fd_371;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_372> AgradDistributionsGamma_fd_372;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_373> AgradDistributionsGamma_fd_373;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_374> AgradDistributionsGamma_fd_374;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_375> AgradDistributionsGamma_fd_375;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_376> AgradDistributionsGamma_fd_376;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_377> AgradDistributionsGamma_fd_377;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_378> AgradDistributionsGamma_fd_378;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_379> AgradDistributionsGamma_fd_379;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_380> AgradDistributionsGamma_fd_380;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_381> AgradDistributionsGamma_fd_381;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_382> AgradDistributionsGamma_fd_382;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_383> AgradDistributionsGamma_fd_383;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_384> AgradDistributionsGamma_fd_384;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_385> AgradDistributionsGamma_fd_385;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_386> AgradDistributionsGamma_fd_386;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_387> AgradDistributionsGamma_fd_387;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_388> AgradDistributionsGamma_fd_388;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_389> AgradDistributionsGamma_fd_389;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_390> AgradDistributionsGamma_fd_390;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_391> AgradDistributionsGamma_fd_391;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_392> AgradDistributionsGamma_fd_392;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_393> AgradDistributionsGamma_fd_393;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_394> AgradDistributionsGamma_fd_394;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_395> AgradDistributionsGamma_fd_395;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_396> AgradDistributionsGamma_fd_396;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_397> AgradDistributionsGamma_fd_397;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_398> AgradDistributionsGamma_fd_398;
typedef boost::mpl::vector<AgradDistributionsGamma, type_fd_399> AgradDistributionsGamma_fd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_300, AgradDistributionTestFixture, AgradDistributionsGamma_fd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_301, AgradDistributionTestFixture, AgradDistributionsGamma_fd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_302, AgradDistributionTestFixture, AgradDistributionsGamma_fd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_303, AgradDistributionTestFixture, AgradDistributionsGamma_fd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_304, AgradDistributionTestFixture, AgradDistributionsGamma_fd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_305, AgradDistributionTestFixture, AgradDistributionsGamma_fd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_306, AgradDistributionTestFixture, AgradDistributionsGamma_fd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_307, AgradDistributionTestFixture, AgradDistributionsGamma_fd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_308, AgradDistributionTestFixture, AgradDistributionsGamma_fd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_309, AgradDistributionTestFixture, AgradDistributionsGamma_fd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_310, AgradDistributionTestFixture, AgradDistributionsGamma_fd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_311, AgradDistributionTestFixture, AgradDistributionsGamma_fd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_312, AgradDistributionTestFixture, AgradDistributionsGamma_fd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_313, AgradDistributionTestFixture, AgradDistributionsGamma_fd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_314, AgradDistributionTestFixture, AgradDistributionsGamma_fd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_315, AgradDistributionTestFixture, AgradDistributionsGamma_fd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_316, AgradDistributionTestFixture, AgradDistributionsGamma_fd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_317, AgradDistributionTestFixture, AgradDistributionsGamma_fd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_318, AgradDistributionTestFixture, AgradDistributionsGamma_fd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_319, AgradDistributionTestFixture, AgradDistributionsGamma_fd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_320, AgradDistributionTestFixture, AgradDistributionsGamma_fd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_321, AgradDistributionTestFixture, AgradDistributionsGamma_fd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_322, AgradDistributionTestFixture, AgradDistributionsGamma_fd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_323, AgradDistributionTestFixture, AgradDistributionsGamma_fd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_324, AgradDistributionTestFixture, AgradDistributionsGamma_fd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_325, AgradDistributionTestFixture, AgradDistributionsGamma_fd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_326, AgradDistributionTestFixture, AgradDistributionsGamma_fd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_327, AgradDistributionTestFixture, AgradDistributionsGamma_fd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_328, AgradDistributionTestFixture, AgradDistributionsGamma_fd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_329, AgradDistributionTestFixture, AgradDistributionsGamma_fd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_330, AgradDistributionTestFixture, AgradDistributionsGamma_fd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_331, AgradDistributionTestFixture, AgradDistributionsGamma_fd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_332, AgradDistributionTestFixture, AgradDistributionsGamma_fd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_333, AgradDistributionTestFixture, AgradDistributionsGamma_fd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_334, AgradDistributionTestFixture, AgradDistributionsGamma_fd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_335, AgradDistributionTestFixture, AgradDistributionsGamma_fd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_336, AgradDistributionTestFixture, AgradDistributionsGamma_fd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_337, AgradDistributionTestFixture, AgradDistributionsGamma_fd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_338, AgradDistributionTestFixture, AgradDistributionsGamma_fd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_339, AgradDistributionTestFixture, AgradDistributionsGamma_fd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_340, AgradDistributionTestFixture, AgradDistributionsGamma_fd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_341, AgradDistributionTestFixture, AgradDistributionsGamma_fd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_342, AgradDistributionTestFixture, AgradDistributionsGamma_fd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_343, AgradDistributionTestFixture, AgradDistributionsGamma_fd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_344, AgradDistributionTestFixture, AgradDistributionsGamma_fd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_345, AgradDistributionTestFixture, AgradDistributionsGamma_fd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_346, AgradDistributionTestFixture, AgradDistributionsGamma_fd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_347, AgradDistributionTestFixture, AgradDistributionsGamma_fd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_348, AgradDistributionTestFixture, AgradDistributionsGamma_fd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_349, AgradDistributionTestFixture, AgradDistributionsGamma_fd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_350, AgradDistributionTestFixture, AgradDistributionsGamma_fd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_351, AgradDistributionTestFixture, AgradDistributionsGamma_fd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_352, AgradDistributionTestFixture, AgradDistributionsGamma_fd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_353, AgradDistributionTestFixture, AgradDistributionsGamma_fd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_354, AgradDistributionTestFixture, AgradDistributionsGamma_fd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_355, AgradDistributionTestFixture, AgradDistributionsGamma_fd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_356, AgradDistributionTestFixture, AgradDistributionsGamma_fd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_357, AgradDistributionTestFixture, AgradDistributionsGamma_fd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_358, AgradDistributionTestFixture, AgradDistributionsGamma_fd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_359, AgradDistributionTestFixture, AgradDistributionsGamma_fd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_360, AgradDistributionTestFixture, AgradDistributionsGamma_fd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_361, AgradDistributionTestFixture, AgradDistributionsGamma_fd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_362, AgradDistributionTestFixture, AgradDistributionsGamma_fd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_363, AgradDistributionTestFixture, AgradDistributionsGamma_fd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_364, AgradDistributionTestFixture, AgradDistributionsGamma_fd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_365, AgradDistributionTestFixture, AgradDistributionsGamma_fd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_366, AgradDistributionTestFixture, AgradDistributionsGamma_fd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_367, AgradDistributionTestFixture, AgradDistributionsGamma_fd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_368, AgradDistributionTestFixture, AgradDistributionsGamma_fd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_369, AgradDistributionTestFixture, AgradDistributionsGamma_fd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_370, AgradDistributionTestFixture, AgradDistributionsGamma_fd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_371, AgradDistributionTestFixture, AgradDistributionsGamma_fd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_372, AgradDistributionTestFixture, AgradDistributionsGamma_fd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_373, AgradDistributionTestFixture, AgradDistributionsGamma_fd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_374, AgradDistributionTestFixture, AgradDistributionsGamma_fd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_375, AgradDistributionTestFixture, AgradDistributionsGamma_fd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_376, AgradDistributionTestFixture, AgradDistributionsGamma_fd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_377, AgradDistributionTestFixture, AgradDistributionsGamma_fd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_378, AgradDistributionTestFixture, AgradDistributionsGamma_fd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_379, AgradDistributionTestFixture, AgradDistributionsGamma_fd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_380, AgradDistributionTestFixture, AgradDistributionsGamma_fd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_381, AgradDistributionTestFixture, AgradDistributionsGamma_fd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_382, AgradDistributionTestFixture, AgradDistributionsGamma_fd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_383, AgradDistributionTestFixture, AgradDistributionsGamma_fd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_384, AgradDistributionTestFixture, AgradDistributionsGamma_fd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_385, AgradDistributionTestFixture, AgradDistributionsGamma_fd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_386, AgradDistributionTestFixture, AgradDistributionsGamma_fd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_387, AgradDistributionTestFixture, AgradDistributionsGamma_fd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_388, AgradDistributionTestFixture, AgradDistributionsGamma_fd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_389, AgradDistributionTestFixture, AgradDistributionsGamma_fd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_390, AgradDistributionTestFixture, AgradDistributionsGamma_fd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_391, AgradDistributionTestFixture, AgradDistributionsGamma_fd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_392, AgradDistributionTestFixture, AgradDistributionsGamma_fd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_393, AgradDistributionTestFixture, AgradDistributionsGamma_fd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_394, AgradDistributionTestFixture, AgradDistributionsGamma_fd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_395, AgradDistributionTestFixture, AgradDistributionsGamma_fd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_396, AgradDistributionTestFixture, AgradDistributionsGamma_fd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_397, AgradDistributionTestFixture, AgradDistributionsGamma_fd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_398, AgradDistributionTestFixture, AgradDistributionsGamma_fd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsGamma_fd_399, AgradDistributionTestFixture, AgradDistributionsGamma_fd_399);

