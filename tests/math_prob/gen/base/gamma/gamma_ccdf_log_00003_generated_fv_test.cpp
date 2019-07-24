#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_300> AgradCcdfLogGamma_fv_300;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_301> AgradCcdfLogGamma_fv_301;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_302> AgradCcdfLogGamma_fv_302;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_303> AgradCcdfLogGamma_fv_303;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_304> AgradCcdfLogGamma_fv_304;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_305> AgradCcdfLogGamma_fv_305;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_306> AgradCcdfLogGamma_fv_306;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_307> AgradCcdfLogGamma_fv_307;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_308> AgradCcdfLogGamma_fv_308;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_309> AgradCcdfLogGamma_fv_309;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_310> AgradCcdfLogGamma_fv_310;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_311> AgradCcdfLogGamma_fv_311;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_312> AgradCcdfLogGamma_fv_312;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_313> AgradCcdfLogGamma_fv_313;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_314> AgradCcdfLogGamma_fv_314;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_315> AgradCcdfLogGamma_fv_315;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_316> AgradCcdfLogGamma_fv_316;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_317> AgradCcdfLogGamma_fv_317;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_318> AgradCcdfLogGamma_fv_318;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_319> AgradCcdfLogGamma_fv_319;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_320> AgradCcdfLogGamma_fv_320;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_321> AgradCcdfLogGamma_fv_321;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_322> AgradCcdfLogGamma_fv_322;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_323> AgradCcdfLogGamma_fv_323;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_324> AgradCcdfLogGamma_fv_324;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_325> AgradCcdfLogGamma_fv_325;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_326> AgradCcdfLogGamma_fv_326;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_327> AgradCcdfLogGamma_fv_327;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_328> AgradCcdfLogGamma_fv_328;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_329> AgradCcdfLogGamma_fv_329;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_330> AgradCcdfLogGamma_fv_330;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_331> AgradCcdfLogGamma_fv_331;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_332> AgradCcdfLogGamma_fv_332;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_333> AgradCcdfLogGamma_fv_333;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_334> AgradCcdfLogGamma_fv_334;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_335> AgradCcdfLogGamma_fv_335;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_336> AgradCcdfLogGamma_fv_336;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_337> AgradCcdfLogGamma_fv_337;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_338> AgradCcdfLogGamma_fv_338;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_339> AgradCcdfLogGamma_fv_339;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_340> AgradCcdfLogGamma_fv_340;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_341> AgradCcdfLogGamma_fv_341;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_342> AgradCcdfLogGamma_fv_342;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_343> AgradCcdfLogGamma_fv_343;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_344> AgradCcdfLogGamma_fv_344;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_345> AgradCcdfLogGamma_fv_345;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_346> AgradCcdfLogGamma_fv_346;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_347> AgradCcdfLogGamma_fv_347;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_348> AgradCcdfLogGamma_fv_348;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_349> AgradCcdfLogGamma_fv_349;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_350> AgradCcdfLogGamma_fv_350;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_351> AgradCcdfLogGamma_fv_351;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_352> AgradCcdfLogGamma_fv_352;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_353> AgradCcdfLogGamma_fv_353;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_354> AgradCcdfLogGamma_fv_354;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_355> AgradCcdfLogGamma_fv_355;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_356> AgradCcdfLogGamma_fv_356;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_357> AgradCcdfLogGamma_fv_357;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_358> AgradCcdfLogGamma_fv_358;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_359> AgradCcdfLogGamma_fv_359;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_360> AgradCcdfLogGamma_fv_360;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_361> AgradCcdfLogGamma_fv_361;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_362> AgradCcdfLogGamma_fv_362;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_363> AgradCcdfLogGamma_fv_363;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_364> AgradCcdfLogGamma_fv_364;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_365> AgradCcdfLogGamma_fv_365;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_366> AgradCcdfLogGamma_fv_366;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_367> AgradCcdfLogGamma_fv_367;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_368> AgradCcdfLogGamma_fv_368;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_369> AgradCcdfLogGamma_fv_369;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_370> AgradCcdfLogGamma_fv_370;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_371> AgradCcdfLogGamma_fv_371;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_372> AgradCcdfLogGamma_fv_372;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_373> AgradCcdfLogGamma_fv_373;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_374> AgradCcdfLogGamma_fv_374;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_375> AgradCcdfLogGamma_fv_375;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_376> AgradCcdfLogGamma_fv_376;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_377> AgradCcdfLogGamma_fv_377;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_378> AgradCcdfLogGamma_fv_378;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_379> AgradCcdfLogGamma_fv_379;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_380> AgradCcdfLogGamma_fv_380;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_381> AgradCcdfLogGamma_fv_381;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_382> AgradCcdfLogGamma_fv_382;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_383> AgradCcdfLogGamma_fv_383;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_384> AgradCcdfLogGamma_fv_384;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_385> AgradCcdfLogGamma_fv_385;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_386> AgradCcdfLogGamma_fv_386;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_387> AgradCcdfLogGamma_fv_387;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_388> AgradCcdfLogGamma_fv_388;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_389> AgradCcdfLogGamma_fv_389;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_390> AgradCcdfLogGamma_fv_390;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_391> AgradCcdfLogGamma_fv_391;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_392> AgradCcdfLogGamma_fv_392;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_393> AgradCcdfLogGamma_fv_393;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_394> AgradCcdfLogGamma_fv_394;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_395> AgradCcdfLogGamma_fv_395;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_396> AgradCcdfLogGamma_fv_396;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_397> AgradCcdfLogGamma_fv_397;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_398> AgradCcdfLogGamma_fv_398;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_fv_399> AgradCcdfLogGamma_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_300, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_301, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_302, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_303, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_304, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_305, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_306, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_307, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_308, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_309, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_310, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_311, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_312, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_313, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_314, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_315, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_316, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_317, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_318, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_319, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_320, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_321, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_322, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_323, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_324, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_325, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_326, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_327, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_328, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_329, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_330, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_331, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_332, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_333, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_334, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_335, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_336, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_337, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_338, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_339, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_340, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_341, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_342, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_343, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_344, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_345, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_346, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_347, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_348, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_349, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_350, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_351, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_352, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_353, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_354, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_355, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_356, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_357, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_358, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_359, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_360, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_361, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_362, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_363, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_364, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_365, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_366, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_367, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_368, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_369, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_370, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_371, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_372, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_373, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_374, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_375, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_376, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_377, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_378, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_379, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_380, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_381, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_382, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_383, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_384, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_385, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_386, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_387, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_388, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_389, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_390, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_391, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_392, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_393, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_394, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_395, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_396, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_397, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_398, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_fv_399, AgradCcdfLogTestFixture, AgradCcdfLogGamma_fv_399);
