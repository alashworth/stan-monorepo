#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_300> AgradCcdfLogLogistic_fd_300;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_301> AgradCcdfLogLogistic_fd_301;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_302> AgradCcdfLogLogistic_fd_302;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_303> AgradCcdfLogLogistic_fd_303;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_304> AgradCcdfLogLogistic_fd_304;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_305> AgradCcdfLogLogistic_fd_305;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_306> AgradCcdfLogLogistic_fd_306;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_307> AgradCcdfLogLogistic_fd_307;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_308> AgradCcdfLogLogistic_fd_308;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_309> AgradCcdfLogLogistic_fd_309;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_310> AgradCcdfLogLogistic_fd_310;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_311> AgradCcdfLogLogistic_fd_311;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_312> AgradCcdfLogLogistic_fd_312;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_313> AgradCcdfLogLogistic_fd_313;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_314> AgradCcdfLogLogistic_fd_314;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_315> AgradCcdfLogLogistic_fd_315;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_316> AgradCcdfLogLogistic_fd_316;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_317> AgradCcdfLogLogistic_fd_317;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_318> AgradCcdfLogLogistic_fd_318;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_319> AgradCcdfLogLogistic_fd_319;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_320> AgradCcdfLogLogistic_fd_320;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_321> AgradCcdfLogLogistic_fd_321;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_322> AgradCcdfLogLogistic_fd_322;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_323> AgradCcdfLogLogistic_fd_323;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_324> AgradCcdfLogLogistic_fd_324;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_325> AgradCcdfLogLogistic_fd_325;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_326> AgradCcdfLogLogistic_fd_326;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_327> AgradCcdfLogLogistic_fd_327;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_328> AgradCcdfLogLogistic_fd_328;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_329> AgradCcdfLogLogistic_fd_329;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_330> AgradCcdfLogLogistic_fd_330;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_331> AgradCcdfLogLogistic_fd_331;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_332> AgradCcdfLogLogistic_fd_332;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_333> AgradCcdfLogLogistic_fd_333;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_334> AgradCcdfLogLogistic_fd_334;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_335> AgradCcdfLogLogistic_fd_335;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_336> AgradCcdfLogLogistic_fd_336;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_337> AgradCcdfLogLogistic_fd_337;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_338> AgradCcdfLogLogistic_fd_338;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_339> AgradCcdfLogLogistic_fd_339;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_340> AgradCcdfLogLogistic_fd_340;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_341> AgradCcdfLogLogistic_fd_341;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_342> AgradCcdfLogLogistic_fd_342;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_343> AgradCcdfLogLogistic_fd_343;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_344> AgradCcdfLogLogistic_fd_344;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_345> AgradCcdfLogLogistic_fd_345;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_346> AgradCcdfLogLogistic_fd_346;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_347> AgradCcdfLogLogistic_fd_347;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_348> AgradCcdfLogLogistic_fd_348;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_349> AgradCcdfLogLogistic_fd_349;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_350> AgradCcdfLogLogistic_fd_350;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_351> AgradCcdfLogLogistic_fd_351;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_352> AgradCcdfLogLogistic_fd_352;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_353> AgradCcdfLogLogistic_fd_353;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_354> AgradCcdfLogLogistic_fd_354;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_355> AgradCcdfLogLogistic_fd_355;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_356> AgradCcdfLogLogistic_fd_356;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_357> AgradCcdfLogLogistic_fd_357;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_358> AgradCcdfLogLogistic_fd_358;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_359> AgradCcdfLogLogistic_fd_359;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_360> AgradCcdfLogLogistic_fd_360;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_361> AgradCcdfLogLogistic_fd_361;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_362> AgradCcdfLogLogistic_fd_362;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_363> AgradCcdfLogLogistic_fd_363;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_364> AgradCcdfLogLogistic_fd_364;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_365> AgradCcdfLogLogistic_fd_365;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_366> AgradCcdfLogLogistic_fd_366;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_367> AgradCcdfLogLogistic_fd_367;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_368> AgradCcdfLogLogistic_fd_368;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_369> AgradCcdfLogLogistic_fd_369;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_370> AgradCcdfLogLogistic_fd_370;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_371> AgradCcdfLogLogistic_fd_371;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_372> AgradCcdfLogLogistic_fd_372;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_373> AgradCcdfLogLogistic_fd_373;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_374> AgradCcdfLogLogistic_fd_374;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_375> AgradCcdfLogLogistic_fd_375;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_376> AgradCcdfLogLogistic_fd_376;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_377> AgradCcdfLogLogistic_fd_377;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_378> AgradCcdfLogLogistic_fd_378;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_379> AgradCcdfLogLogistic_fd_379;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_380> AgradCcdfLogLogistic_fd_380;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_381> AgradCcdfLogLogistic_fd_381;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_382> AgradCcdfLogLogistic_fd_382;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_383> AgradCcdfLogLogistic_fd_383;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_384> AgradCcdfLogLogistic_fd_384;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_385> AgradCcdfLogLogistic_fd_385;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_386> AgradCcdfLogLogistic_fd_386;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_387> AgradCcdfLogLogistic_fd_387;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_388> AgradCcdfLogLogistic_fd_388;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_389> AgradCcdfLogLogistic_fd_389;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_390> AgradCcdfLogLogistic_fd_390;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_391> AgradCcdfLogLogistic_fd_391;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_392> AgradCcdfLogLogistic_fd_392;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_393> AgradCcdfLogLogistic_fd_393;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_394> AgradCcdfLogLogistic_fd_394;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_395> AgradCcdfLogLogistic_fd_395;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_396> AgradCcdfLogLogistic_fd_396;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_397> AgradCcdfLogLogistic_fd_397;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_398> AgradCcdfLogLogistic_fd_398;
typedef boost::mpl::vector<AgradCcdfLogLogistic, type_fd_399> AgradCcdfLogLogistic_fd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_300, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_301, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_302, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_303, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_304, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_305, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_306, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_307, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_308, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_309, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_310, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_311, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_312, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_313, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_314, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_315, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_316, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_317, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_318, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_319, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_320, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_321, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_322, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_323, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_324, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_325, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_326, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_327, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_328, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_329, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_330, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_331, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_332, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_333, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_334, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_335, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_336, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_337, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_338, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_339, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_340, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_341, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_342, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_343, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_344, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_345, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_346, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_347, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_348, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_349, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_350, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_351, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_352, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_353, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_354, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_355, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_356, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_357, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_358, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_359, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_360, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_361, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_362, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_363, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_364, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_365, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_366, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_367, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_368, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_369, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_370, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_371, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_372, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_373, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_374, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_375, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_376, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_377, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_378, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_379, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_380, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_381, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_382, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_383, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_384, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_385, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_386, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_387, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_388, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_389, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_390, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_391, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_392, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_393, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_394, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_395, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_396, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_397, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_398, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogLogistic_fd_399, AgradCcdfLogTestFixture, AgradCcdfLogLogistic_fd_399);
