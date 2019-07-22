#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/logistic/logistic_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_300> AgradDistributionsLogistic_fv_300;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_301> AgradDistributionsLogistic_fv_301;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_302> AgradDistributionsLogistic_fv_302;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_303> AgradDistributionsLogistic_fv_303;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_304> AgradDistributionsLogistic_fv_304;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_305> AgradDistributionsLogistic_fv_305;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_306> AgradDistributionsLogistic_fv_306;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_307> AgradDistributionsLogistic_fv_307;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_308> AgradDistributionsLogistic_fv_308;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_309> AgradDistributionsLogistic_fv_309;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_310> AgradDistributionsLogistic_fv_310;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_311> AgradDistributionsLogistic_fv_311;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_312> AgradDistributionsLogistic_fv_312;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_313> AgradDistributionsLogistic_fv_313;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_314> AgradDistributionsLogistic_fv_314;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_315> AgradDistributionsLogistic_fv_315;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_316> AgradDistributionsLogistic_fv_316;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_317> AgradDistributionsLogistic_fv_317;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_318> AgradDistributionsLogistic_fv_318;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_319> AgradDistributionsLogistic_fv_319;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_320> AgradDistributionsLogistic_fv_320;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_321> AgradDistributionsLogistic_fv_321;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_322> AgradDistributionsLogistic_fv_322;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_323> AgradDistributionsLogistic_fv_323;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_324> AgradDistributionsLogistic_fv_324;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_325> AgradDistributionsLogistic_fv_325;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_326> AgradDistributionsLogistic_fv_326;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_327> AgradDistributionsLogistic_fv_327;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_328> AgradDistributionsLogistic_fv_328;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_329> AgradDistributionsLogistic_fv_329;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_330> AgradDistributionsLogistic_fv_330;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_331> AgradDistributionsLogistic_fv_331;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_332> AgradDistributionsLogistic_fv_332;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_333> AgradDistributionsLogistic_fv_333;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_334> AgradDistributionsLogistic_fv_334;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_335> AgradDistributionsLogistic_fv_335;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_336> AgradDistributionsLogistic_fv_336;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_337> AgradDistributionsLogistic_fv_337;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_338> AgradDistributionsLogistic_fv_338;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_339> AgradDistributionsLogistic_fv_339;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_340> AgradDistributionsLogistic_fv_340;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_341> AgradDistributionsLogistic_fv_341;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_342> AgradDistributionsLogistic_fv_342;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_343> AgradDistributionsLogistic_fv_343;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_344> AgradDistributionsLogistic_fv_344;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_345> AgradDistributionsLogistic_fv_345;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_346> AgradDistributionsLogistic_fv_346;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_347> AgradDistributionsLogistic_fv_347;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_348> AgradDistributionsLogistic_fv_348;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_349> AgradDistributionsLogistic_fv_349;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_350> AgradDistributionsLogistic_fv_350;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_351> AgradDistributionsLogistic_fv_351;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_352> AgradDistributionsLogistic_fv_352;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_353> AgradDistributionsLogistic_fv_353;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_354> AgradDistributionsLogistic_fv_354;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_355> AgradDistributionsLogistic_fv_355;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_356> AgradDistributionsLogistic_fv_356;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_357> AgradDistributionsLogistic_fv_357;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_358> AgradDistributionsLogistic_fv_358;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_359> AgradDistributionsLogistic_fv_359;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_360> AgradDistributionsLogistic_fv_360;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_361> AgradDistributionsLogistic_fv_361;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_362> AgradDistributionsLogistic_fv_362;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_363> AgradDistributionsLogistic_fv_363;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_364> AgradDistributionsLogistic_fv_364;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_365> AgradDistributionsLogistic_fv_365;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_366> AgradDistributionsLogistic_fv_366;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_367> AgradDistributionsLogistic_fv_367;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_368> AgradDistributionsLogistic_fv_368;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_369> AgradDistributionsLogistic_fv_369;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_370> AgradDistributionsLogistic_fv_370;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_371> AgradDistributionsLogistic_fv_371;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_372> AgradDistributionsLogistic_fv_372;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_373> AgradDistributionsLogistic_fv_373;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_374> AgradDistributionsLogistic_fv_374;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_375> AgradDistributionsLogistic_fv_375;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_376> AgradDistributionsLogistic_fv_376;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_377> AgradDistributionsLogistic_fv_377;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_378> AgradDistributionsLogistic_fv_378;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_379> AgradDistributionsLogistic_fv_379;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_380> AgradDistributionsLogistic_fv_380;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_381> AgradDistributionsLogistic_fv_381;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_382> AgradDistributionsLogistic_fv_382;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_383> AgradDistributionsLogistic_fv_383;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_384> AgradDistributionsLogistic_fv_384;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_385> AgradDistributionsLogistic_fv_385;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_386> AgradDistributionsLogistic_fv_386;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_387> AgradDistributionsLogistic_fv_387;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_388> AgradDistributionsLogistic_fv_388;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_389> AgradDistributionsLogistic_fv_389;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_390> AgradDistributionsLogistic_fv_390;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_391> AgradDistributionsLogistic_fv_391;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_392> AgradDistributionsLogistic_fv_392;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_393> AgradDistributionsLogistic_fv_393;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_394> AgradDistributionsLogistic_fv_394;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_395> AgradDistributionsLogistic_fv_395;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_396> AgradDistributionsLogistic_fv_396;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_397> AgradDistributionsLogistic_fv_397;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_398> AgradDistributionsLogistic_fv_398;
typedef boost::mpl::vector<AgradDistributionsLogistic, type_fv_399> AgradDistributionsLogistic_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_300, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_301, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_302, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_303, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_304, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_305, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_306, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_307, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_308, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_309, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_310, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_311, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_312, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_313, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_314, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_315, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_316, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_317, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_318, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_319, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_320, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_321, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_322, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_323, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_324, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_325, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_326, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_327, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_328, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_329, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_330, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_331, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_332, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_333, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_334, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_335, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_336, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_337, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_338, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_339, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_340, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_341, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_342, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_343, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_344, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_345, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_346, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_347, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_348, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_349, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_350, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_351, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_352, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_353, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_354, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_355, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_356, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_357, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_358, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_359, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_360, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_361, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_362, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_363, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_364, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_365, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_366, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_367, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_368, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_369, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_370, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_371, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_372, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_373, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_374, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_375, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_376, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_377, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_378, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_379, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_380, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_381, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_382, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_383, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_384, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_385, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_386, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_387, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_388, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_389, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_390, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_391, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_392, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_393, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_394, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_395, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_396, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_397, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_398, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsLogistic_fv_399, AgradDistributionTestFixture, AgradDistributionsLogistic_fv_399);

