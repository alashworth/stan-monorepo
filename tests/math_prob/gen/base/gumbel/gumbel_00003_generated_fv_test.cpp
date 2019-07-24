#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gumbel/gumbel_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_300> AgradDistributionGumbel_fv_300;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_301> AgradDistributionGumbel_fv_301;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_302> AgradDistributionGumbel_fv_302;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_303> AgradDistributionGumbel_fv_303;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_304> AgradDistributionGumbel_fv_304;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_305> AgradDistributionGumbel_fv_305;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_306> AgradDistributionGumbel_fv_306;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_307> AgradDistributionGumbel_fv_307;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_308> AgradDistributionGumbel_fv_308;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_309> AgradDistributionGumbel_fv_309;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_310> AgradDistributionGumbel_fv_310;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_311> AgradDistributionGumbel_fv_311;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_312> AgradDistributionGumbel_fv_312;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_313> AgradDistributionGumbel_fv_313;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_314> AgradDistributionGumbel_fv_314;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_315> AgradDistributionGumbel_fv_315;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_316> AgradDistributionGumbel_fv_316;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_317> AgradDistributionGumbel_fv_317;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_318> AgradDistributionGumbel_fv_318;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_319> AgradDistributionGumbel_fv_319;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_320> AgradDistributionGumbel_fv_320;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_321> AgradDistributionGumbel_fv_321;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_322> AgradDistributionGumbel_fv_322;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_323> AgradDistributionGumbel_fv_323;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_324> AgradDistributionGumbel_fv_324;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_325> AgradDistributionGumbel_fv_325;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_326> AgradDistributionGumbel_fv_326;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_327> AgradDistributionGumbel_fv_327;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_328> AgradDistributionGumbel_fv_328;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_329> AgradDistributionGumbel_fv_329;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_330> AgradDistributionGumbel_fv_330;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_331> AgradDistributionGumbel_fv_331;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_332> AgradDistributionGumbel_fv_332;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_333> AgradDistributionGumbel_fv_333;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_334> AgradDistributionGumbel_fv_334;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_335> AgradDistributionGumbel_fv_335;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_336> AgradDistributionGumbel_fv_336;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_337> AgradDistributionGumbel_fv_337;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_338> AgradDistributionGumbel_fv_338;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_339> AgradDistributionGumbel_fv_339;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_340> AgradDistributionGumbel_fv_340;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_341> AgradDistributionGumbel_fv_341;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_342> AgradDistributionGumbel_fv_342;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_343> AgradDistributionGumbel_fv_343;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_344> AgradDistributionGumbel_fv_344;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_345> AgradDistributionGumbel_fv_345;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_346> AgradDistributionGumbel_fv_346;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_347> AgradDistributionGumbel_fv_347;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_348> AgradDistributionGumbel_fv_348;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_349> AgradDistributionGumbel_fv_349;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_350> AgradDistributionGumbel_fv_350;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_351> AgradDistributionGumbel_fv_351;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_352> AgradDistributionGumbel_fv_352;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_353> AgradDistributionGumbel_fv_353;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_354> AgradDistributionGumbel_fv_354;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_355> AgradDistributionGumbel_fv_355;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_356> AgradDistributionGumbel_fv_356;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_357> AgradDistributionGumbel_fv_357;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_358> AgradDistributionGumbel_fv_358;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_359> AgradDistributionGumbel_fv_359;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_360> AgradDistributionGumbel_fv_360;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_361> AgradDistributionGumbel_fv_361;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_362> AgradDistributionGumbel_fv_362;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_363> AgradDistributionGumbel_fv_363;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_364> AgradDistributionGumbel_fv_364;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_365> AgradDistributionGumbel_fv_365;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_366> AgradDistributionGumbel_fv_366;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_367> AgradDistributionGumbel_fv_367;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_368> AgradDistributionGumbel_fv_368;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_369> AgradDistributionGumbel_fv_369;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_370> AgradDistributionGumbel_fv_370;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_371> AgradDistributionGumbel_fv_371;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_372> AgradDistributionGumbel_fv_372;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_373> AgradDistributionGumbel_fv_373;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_374> AgradDistributionGumbel_fv_374;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_375> AgradDistributionGumbel_fv_375;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_376> AgradDistributionGumbel_fv_376;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_377> AgradDistributionGumbel_fv_377;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_378> AgradDistributionGumbel_fv_378;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_379> AgradDistributionGumbel_fv_379;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_380> AgradDistributionGumbel_fv_380;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_381> AgradDistributionGumbel_fv_381;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_382> AgradDistributionGumbel_fv_382;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_383> AgradDistributionGumbel_fv_383;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_384> AgradDistributionGumbel_fv_384;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_385> AgradDistributionGumbel_fv_385;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_386> AgradDistributionGumbel_fv_386;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_387> AgradDistributionGumbel_fv_387;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_388> AgradDistributionGumbel_fv_388;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_389> AgradDistributionGumbel_fv_389;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_390> AgradDistributionGumbel_fv_390;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_391> AgradDistributionGumbel_fv_391;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_392> AgradDistributionGumbel_fv_392;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_393> AgradDistributionGumbel_fv_393;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_394> AgradDistributionGumbel_fv_394;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_395> AgradDistributionGumbel_fv_395;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_396> AgradDistributionGumbel_fv_396;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_397> AgradDistributionGumbel_fv_397;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_398> AgradDistributionGumbel_fv_398;
typedef boost::mpl::vector<AgradDistributionGumbel, type_fv_399> AgradDistributionGumbel_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_300, AgradDistributionTestFixture, AgradDistributionGumbel_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_301, AgradDistributionTestFixture, AgradDistributionGumbel_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_302, AgradDistributionTestFixture, AgradDistributionGumbel_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_303, AgradDistributionTestFixture, AgradDistributionGumbel_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_304, AgradDistributionTestFixture, AgradDistributionGumbel_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_305, AgradDistributionTestFixture, AgradDistributionGumbel_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_306, AgradDistributionTestFixture, AgradDistributionGumbel_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_307, AgradDistributionTestFixture, AgradDistributionGumbel_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_308, AgradDistributionTestFixture, AgradDistributionGumbel_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_309, AgradDistributionTestFixture, AgradDistributionGumbel_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_310, AgradDistributionTestFixture, AgradDistributionGumbel_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_311, AgradDistributionTestFixture, AgradDistributionGumbel_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_312, AgradDistributionTestFixture, AgradDistributionGumbel_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_313, AgradDistributionTestFixture, AgradDistributionGumbel_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_314, AgradDistributionTestFixture, AgradDistributionGumbel_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_315, AgradDistributionTestFixture, AgradDistributionGumbel_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_316, AgradDistributionTestFixture, AgradDistributionGumbel_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_317, AgradDistributionTestFixture, AgradDistributionGumbel_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_318, AgradDistributionTestFixture, AgradDistributionGumbel_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_319, AgradDistributionTestFixture, AgradDistributionGumbel_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_320, AgradDistributionTestFixture, AgradDistributionGumbel_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_321, AgradDistributionTestFixture, AgradDistributionGumbel_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_322, AgradDistributionTestFixture, AgradDistributionGumbel_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_323, AgradDistributionTestFixture, AgradDistributionGumbel_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_324, AgradDistributionTestFixture, AgradDistributionGumbel_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_325, AgradDistributionTestFixture, AgradDistributionGumbel_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_326, AgradDistributionTestFixture, AgradDistributionGumbel_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_327, AgradDistributionTestFixture, AgradDistributionGumbel_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_328, AgradDistributionTestFixture, AgradDistributionGumbel_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_329, AgradDistributionTestFixture, AgradDistributionGumbel_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_330, AgradDistributionTestFixture, AgradDistributionGumbel_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_331, AgradDistributionTestFixture, AgradDistributionGumbel_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_332, AgradDistributionTestFixture, AgradDistributionGumbel_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_333, AgradDistributionTestFixture, AgradDistributionGumbel_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_334, AgradDistributionTestFixture, AgradDistributionGumbel_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_335, AgradDistributionTestFixture, AgradDistributionGumbel_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_336, AgradDistributionTestFixture, AgradDistributionGumbel_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_337, AgradDistributionTestFixture, AgradDistributionGumbel_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_338, AgradDistributionTestFixture, AgradDistributionGumbel_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_339, AgradDistributionTestFixture, AgradDistributionGumbel_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_340, AgradDistributionTestFixture, AgradDistributionGumbel_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_341, AgradDistributionTestFixture, AgradDistributionGumbel_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_342, AgradDistributionTestFixture, AgradDistributionGumbel_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_343, AgradDistributionTestFixture, AgradDistributionGumbel_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_344, AgradDistributionTestFixture, AgradDistributionGumbel_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_345, AgradDistributionTestFixture, AgradDistributionGumbel_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_346, AgradDistributionTestFixture, AgradDistributionGumbel_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_347, AgradDistributionTestFixture, AgradDistributionGumbel_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_348, AgradDistributionTestFixture, AgradDistributionGumbel_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_349, AgradDistributionTestFixture, AgradDistributionGumbel_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_350, AgradDistributionTestFixture, AgradDistributionGumbel_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_351, AgradDistributionTestFixture, AgradDistributionGumbel_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_352, AgradDistributionTestFixture, AgradDistributionGumbel_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_353, AgradDistributionTestFixture, AgradDistributionGumbel_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_354, AgradDistributionTestFixture, AgradDistributionGumbel_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_355, AgradDistributionTestFixture, AgradDistributionGumbel_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_356, AgradDistributionTestFixture, AgradDistributionGumbel_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_357, AgradDistributionTestFixture, AgradDistributionGumbel_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_358, AgradDistributionTestFixture, AgradDistributionGumbel_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_359, AgradDistributionTestFixture, AgradDistributionGumbel_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_360, AgradDistributionTestFixture, AgradDistributionGumbel_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_361, AgradDistributionTestFixture, AgradDistributionGumbel_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_362, AgradDistributionTestFixture, AgradDistributionGumbel_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_363, AgradDistributionTestFixture, AgradDistributionGumbel_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_364, AgradDistributionTestFixture, AgradDistributionGumbel_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_365, AgradDistributionTestFixture, AgradDistributionGumbel_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_366, AgradDistributionTestFixture, AgradDistributionGumbel_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_367, AgradDistributionTestFixture, AgradDistributionGumbel_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_368, AgradDistributionTestFixture, AgradDistributionGumbel_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_369, AgradDistributionTestFixture, AgradDistributionGumbel_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_370, AgradDistributionTestFixture, AgradDistributionGumbel_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_371, AgradDistributionTestFixture, AgradDistributionGumbel_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_372, AgradDistributionTestFixture, AgradDistributionGumbel_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_373, AgradDistributionTestFixture, AgradDistributionGumbel_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_374, AgradDistributionTestFixture, AgradDistributionGumbel_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_375, AgradDistributionTestFixture, AgradDistributionGumbel_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_376, AgradDistributionTestFixture, AgradDistributionGumbel_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_377, AgradDistributionTestFixture, AgradDistributionGumbel_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_378, AgradDistributionTestFixture, AgradDistributionGumbel_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_379, AgradDistributionTestFixture, AgradDistributionGumbel_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_380, AgradDistributionTestFixture, AgradDistributionGumbel_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_381, AgradDistributionTestFixture, AgradDistributionGumbel_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_382, AgradDistributionTestFixture, AgradDistributionGumbel_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_383, AgradDistributionTestFixture, AgradDistributionGumbel_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_384, AgradDistributionTestFixture, AgradDistributionGumbel_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_385, AgradDistributionTestFixture, AgradDistributionGumbel_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_386, AgradDistributionTestFixture, AgradDistributionGumbel_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_387, AgradDistributionTestFixture, AgradDistributionGumbel_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_388, AgradDistributionTestFixture, AgradDistributionGumbel_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_389, AgradDistributionTestFixture, AgradDistributionGumbel_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_390, AgradDistributionTestFixture, AgradDistributionGumbel_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_391, AgradDistributionTestFixture, AgradDistributionGumbel_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_392, AgradDistributionTestFixture, AgradDistributionGumbel_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_393, AgradDistributionTestFixture, AgradDistributionGumbel_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_394, AgradDistributionTestFixture, AgradDistributionGumbel_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_395, AgradDistributionTestFixture, AgradDistributionGumbel_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_396, AgradDistributionTestFixture, AgradDistributionGumbel_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_397, AgradDistributionTestFixture, AgradDistributionGumbel_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_398, AgradDistributionTestFixture, AgradDistributionGumbel_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionGumbel_fv_399, AgradDistributionTestFixture, AgradDistributionGumbel_fv_399);
