#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/frechet/frechet_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfFrechet, type_fv_300> AgradCdfFrechet_fv_300;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_301> AgradCdfFrechet_fv_301;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_302> AgradCdfFrechet_fv_302;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_303> AgradCdfFrechet_fv_303;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_304> AgradCdfFrechet_fv_304;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_305> AgradCdfFrechet_fv_305;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_306> AgradCdfFrechet_fv_306;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_307> AgradCdfFrechet_fv_307;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_308> AgradCdfFrechet_fv_308;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_309> AgradCdfFrechet_fv_309;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_310> AgradCdfFrechet_fv_310;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_311> AgradCdfFrechet_fv_311;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_312> AgradCdfFrechet_fv_312;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_313> AgradCdfFrechet_fv_313;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_314> AgradCdfFrechet_fv_314;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_315> AgradCdfFrechet_fv_315;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_316> AgradCdfFrechet_fv_316;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_317> AgradCdfFrechet_fv_317;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_318> AgradCdfFrechet_fv_318;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_319> AgradCdfFrechet_fv_319;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_320> AgradCdfFrechet_fv_320;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_321> AgradCdfFrechet_fv_321;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_322> AgradCdfFrechet_fv_322;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_323> AgradCdfFrechet_fv_323;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_324> AgradCdfFrechet_fv_324;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_325> AgradCdfFrechet_fv_325;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_326> AgradCdfFrechet_fv_326;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_327> AgradCdfFrechet_fv_327;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_328> AgradCdfFrechet_fv_328;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_329> AgradCdfFrechet_fv_329;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_330> AgradCdfFrechet_fv_330;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_331> AgradCdfFrechet_fv_331;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_332> AgradCdfFrechet_fv_332;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_333> AgradCdfFrechet_fv_333;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_334> AgradCdfFrechet_fv_334;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_335> AgradCdfFrechet_fv_335;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_336> AgradCdfFrechet_fv_336;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_337> AgradCdfFrechet_fv_337;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_338> AgradCdfFrechet_fv_338;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_339> AgradCdfFrechet_fv_339;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_340> AgradCdfFrechet_fv_340;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_341> AgradCdfFrechet_fv_341;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_342> AgradCdfFrechet_fv_342;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_343> AgradCdfFrechet_fv_343;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_344> AgradCdfFrechet_fv_344;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_345> AgradCdfFrechet_fv_345;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_346> AgradCdfFrechet_fv_346;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_347> AgradCdfFrechet_fv_347;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_348> AgradCdfFrechet_fv_348;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_349> AgradCdfFrechet_fv_349;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_350> AgradCdfFrechet_fv_350;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_351> AgradCdfFrechet_fv_351;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_352> AgradCdfFrechet_fv_352;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_353> AgradCdfFrechet_fv_353;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_354> AgradCdfFrechet_fv_354;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_355> AgradCdfFrechet_fv_355;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_356> AgradCdfFrechet_fv_356;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_357> AgradCdfFrechet_fv_357;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_358> AgradCdfFrechet_fv_358;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_359> AgradCdfFrechet_fv_359;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_360> AgradCdfFrechet_fv_360;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_361> AgradCdfFrechet_fv_361;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_362> AgradCdfFrechet_fv_362;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_363> AgradCdfFrechet_fv_363;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_364> AgradCdfFrechet_fv_364;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_365> AgradCdfFrechet_fv_365;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_366> AgradCdfFrechet_fv_366;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_367> AgradCdfFrechet_fv_367;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_368> AgradCdfFrechet_fv_368;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_369> AgradCdfFrechet_fv_369;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_370> AgradCdfFrechet_fv_370;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_371> AgradCdfFrechet_fv_371;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_372> AgradCdfFrechet_fv_372;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_373> AgradCdfFrechet_fv_373;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_374> AgradCdfFrechet_fv_374;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_375> AgradCdfFrechet_fv_375;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_376> AgradCdfFrechet_fv_376;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_377> AgradCdfFrechet_fv_377;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_378> AgradCdfFrechet_fv_378;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_379> AgradCdfFrechet_fv_379;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_380> AgradCdfFrechet_fv_380;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_381> AgradCdfFrechet_fv_381;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_382> AgradCdfFrechet_fv_382;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_383> AgradCdfFrechet_fv_383;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_384> AgradCdfFrechet_fv_384;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_385> AgradCdfFrechet_fv_385;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_386> AgradCdfFrechet_fv_386;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_387> AgradCdfFrechet_fv_387;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_388> AgradCdfFrechet_fv_388;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_389> AgradCdfFrechet_fv_389;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_390> AgradCdfFrechet_fv_390;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_391> AgradCdfFrechet_fv_391;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_392> AgradCdfFrechet_fv_392;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_393> AgradCdfFrechet_fv_393;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_394> AgradCdfFrechet_fv_394;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_395> AgradCdfFrechet_fv_395;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_396> AgradCdfFrechet_fv_396;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_397> AgradCdfFrechet_fv_397;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_398> AgradCdfFrechet_fv_398;
typedef boost::mpl::vector<AgradCdfFrechet, type_fv_399> AgradCdfFrechet_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_300, AgradCdfTestFixture, AgradCdfFrechet_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_301, AgradCdfTestFixture, AgradCdfFrechet_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_302, AgradCdfTestFixture, AgradCdfFrechet_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_303, AgradCdfTestFixture, AgradCdfFrechet_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_304, AgradCdfTestFixture, AgradCdfFrechet_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_305, AgradCdfTestFixture, AgradCdfFrechet_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_306, AgradCdfTestFixture, AgradCdfFrechet_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_307, AgradCdfTestFixture, AgradCdfFrechet_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_308, AgradCdfTestFixture, AgradCdfFrechet_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_309, AgradCdfTestFixture, AgradCdfFrechet_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_310, AgradCdfTestFixture, AgradCdfFrechet_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_311, AgradCdfTestFixture, AgradCdfFrechet_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_312, AgradCdfTestFixture, AgradCdfFrechet_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_313, AgradCdfTestFixture, AgradCdfFrechet_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_314, AgradCdfTestFixture, AgradCdfFrechet_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_315, AgradCdfTestFixture, AgradCdfFrechet_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_316, AgradCdfTestFixture, AgradCdfFrechet_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_317, AgradCdfTestFixture, AgradCdfFrechet_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_318, AgradCdfTestFixture, AgradCdfFrechet_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_319, AgradCdfTestFixture, AgradCdfFrechet_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_320, AgradCdfTestFixture, AgradCdfFrechet_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_321, AgradCdfTestFixture, AgradCdfFrechet_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_322, AgradCdfTestFixture, AgradCdfFrechet_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_323, AgradCdfTestFixture, AgradCdfFrechet_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_324, AgradCdfTestFixture, AgradCdfFrechet_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_325, AgradCdfTestFixture, AgradCdfFrechet_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_326, AgradCdfTestFixture, AgradCdfFrechet_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_327, AgradCdfTestFixture, AgradCdfFrechet_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_328, AgradCdfTestFixture, AgradCdfFrechet_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_329, AgradCdfTestFixture, AgradCdfFrechet_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_330, AgradCdfTestFixture, AgradCdfFrechet_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_331, AgradCdfTestFixture, AgradCdfFrechet_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_332, AgradCdfTestFixture, AgradCdfFrechet_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_333, AgradCdfTestFixture, AgradCdfFrechet_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_334, AgradCdfTestFixture, AgradCdfFrechet_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_335, AgradCdfTestFixture, AgradCdfFrechet_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_336, AgradCdfTestFixture, AgradCdfFrechet_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_337, AgradCdfTestFixture, AgradCdfFrechet_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_338, AgradCdfTestFixture, AgradCdfFrechet_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_339, AgradCdfTestFixture, AgradCdfFrechet_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_340, AgradCdfTestFixture, AgradCdfFrechet_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_341, AgradCdfTestFixture, AgradCdfFrechet_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_342, AgradCdfTestFixture, AgradCdfFrechet_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_343, AgradCdfTestFixture, AgradCdfFrechet_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_344, AgradCdfTestFixture, AgradCdfFrechet_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_345, AgradCdfTestFixture, AgradCdfFrechet_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_346, AgradCdfTestFixture, AgradCdfFrechet_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_347, AgradCdfTestFixture, AgradCdfFrechet_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_348, AgradCdfTestFixture, AgradCdfFrechet_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_349, AgradCdfTestFixture, AgradCdfFrechet_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_350, AgradCdfTestFixture, AgradCdfFrechet_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_351, AgradCdfTestFixture, AgradCdfFrechet_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_352, AgradCdfTestFixture, AgradCdfFrechet_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_353, AgradCdfTestFixture, AgradCdfFrechet_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_354, AgradCdfTestFixture, AgradCdfFrechet_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_355, AgradCdfTestFixture, AgradCdfFrechet_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_356, AgradCdfTestFixture, AgradCdfFrechet_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_357, AgradCdfTestFixture, AgradCdfFrechet_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_358, AgradCdfTestFixture, AgradCdfFrechet_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_359, AgradCdfTestFixture, AgradCdfFrechet_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_360, AgradCdfTestFixture, AgradCdfFrechet_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_361, AgradCdfTestFixture, AgradCdfFrechet_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_362, AgradCdfTestFixture, AgradCdfFrechet_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_363, AgradCdfTestFixture, AgradCdfFrechet_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_364, AgradCdfTestFixture, AgradCdfFrechet_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_365, AgradCdfTestFixture, AgradCdfFrechet_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_366, AgradCdfTestFixture, AgradCdfFrechet_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_367, AgradCdfTestFixture, AgradCdfFrechet_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_368, AgradCdfTestFixture, AgradCdfFrechet_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_369, AgradCdfTestFixture, AgradCdfFrechet_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_370, AgradCdfTestFixture, AgradCdfFrechet_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_371, AgradCdfTestFixture, AgradCdfFrechet_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_372, AgradCdfTestFixture, AgradCdfFrechet_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_373, AgradCdfTestFixture, AgradCdfFrechet_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_374, AgradCdfTestFixture, AgradCdfFrechet_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_375, AgradCdfTestFixture, AgradCdfFrechet_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_376, AgradCdfTestFixture, AgradCdfFrechet_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_377, AgradCdfTestFixture, AgradCdfFrechet_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_378, AgradCdfTestFixture, AgradCdfFrechet_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_379, AgradCdfTestFixture, AgradCdfFrechet_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_380, AgradCdfTestFixture, AgradCdfFrechet_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_381, AgradCdfTestFixture, AgradCdfFrechet_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_382, AgradCdfTestFixture, AgradCdfFrechet_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_383, AgradCdfTestFixture, AgradCdfFrechet_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_384, AgradCdfTestFixture, AgradCdfFrechet_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_385, AgradCdfTestFixture, AgradCdfFrechet_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_386, AgradCdfTestFixture, AgradCdfFrechet_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_387, AgradCdfTestFixture, AgradCdfFrechet_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_388, AgradCdfTestFixture, AgradCdfFrechet_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_389, AgradCdfTestFixture, AgradCdfFrechet_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_390, AgradCdfTestFixture, AgradCdfFrechet_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_391, AgradCdfTestFixture, AgradCdfFrechet_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_392, AgradCdfTestFixture, AgradCdfFrechet_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_393, AgradCdfTestFixture, AgradCdfFrechet_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_394, AgradCdfTestFixture, AgradCdfFrechet_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_395, AgradCdfTestFixture, AgradCdfFrechet_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_396, AgradCdfTestFixture, AgradCdfFrechet_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_397, AgradCdfTestFixture, AgradCdfFrechet_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_398, AgradCdfTestFixture, AgradCdfFrechet_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfFrechet_fv_399, AgradCdfTestFixture, AgradCdfFrechet_fv_399);
