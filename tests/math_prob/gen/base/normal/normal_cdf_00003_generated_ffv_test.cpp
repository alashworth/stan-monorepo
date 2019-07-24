#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/normal/normal_cdf_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_300;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_301;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_302;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_303;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_304;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_305;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_306;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_307;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_308;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_309;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_310;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_311;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_312;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_313;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_314;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_315;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_316;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_317;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_318;
typedef boost::mpl::vector<std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_ffv_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_ffv_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, fvar<fvar<var> >, empty, empty, empty> type_ffv_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_ffv_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffv_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, fvar<fvar<var> >, empty, empty, empty> type_ffv_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, double, empty, empty, empty> type_ffv_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, std::vector<double>, empty, empty, empty> type_ffv_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, fvar<fvar<var> >, empty, empty, empty> type_ffv_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, double, empty, empty, empty> type_ffv_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, std::vector<double>, empty, empty, empty> type_ffv_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty, empty> type_ffv_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffv_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffv_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty, empty> type_ffv_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffv_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffv_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty, empty> type_ffv_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_ffv_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_ffv_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, fvar<fvar<var> >, empty, empty, empty> type_ffv_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_ffv_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffv_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, fvar<fvar<var> >, empty, empty, empty> type_ffv_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<fvar<var> >>, empty, empty, empty> type_ffv_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffv_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffv_399;

typedef boost::mpl::vector<AgradCdfNormal, type_ffv_300> AgradCdfNormal_ffv_300;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_301> AgradCdfNormal_ffv_301;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_302> AgradCdfNormal_ffv_302;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_303> AgradCdfNormal_ffv_303;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_304> AgradCdfNormal_ffv_304;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_305> AgradCdfNormal_ffv_305;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_306> AgradCdfNormal_ffv_306;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_307> AgradCdfNormal_ffv_307;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_308> AgradCdfNormal_ffv_308;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_309> AgradCdfNormal_ffv_309;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_310> AgradCdfNormal_ffv_310;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_311> AgradCdfNormal_ffv_311;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_312> AgradCdfNormal_ffv_312;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_313> AgradCdfNormal_ffv_313;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_314> AgradCdfNormal_ffv_314;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_315> AgradCdfNormal_ffv_315;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_316> AgradCdfNormal_ffv_316;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_317> AgradCdfNormal_ffv_317;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_318> AgradCdfNormal_ffv_318;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_319> AgradCdfNormal_ffv_319;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_320> AgradCdfNormal_ffv_320;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_321> AgradCdfNormal_ffv_321;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_322> AgradCdfNormal_ffv_322;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_323> AgradCdfNormal_ffv_323;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_324> AgradCdfNormal_ffv_324;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_325> AgradCdfNormal_ffv_325;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_326> AgradCdfNormal_ffv_326;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_327> AgradCdfNormal_ffv_327;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_328> AgradCdfNormal_ffv_328;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_329> AgradCdfNormal_ffv_329;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_330> AgradCdfNormal_ffv_330;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_331> AgradCdfNormal_ffv_331;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_332> AgradCdfNormal_ffv_332;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_333> AgradCdfNormal_ffv_333;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_334> AgradCdfNormal_ffv_334;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_335> AgradCdfNormal_ffv_335;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_336> AgradCdfNormal_ffv_336;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_337> AgradCdfNormal_ffv_337;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_338> AgradCdfNormal_ffv_338;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_339> AgradCdfNormal_ffv_339;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_340> AgradCdfNormal_ffv_340;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_341> AgradCdfNormal_ffv_341;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_342> AgradCdfNormal_ffv_342;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_343> AgradCdfNormal_ffv_343;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_344> AgradCdfNormal_ffv_344;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_345> AgradCdfNormal_ffv_345;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_346> AgradCdfNormal_ffv_346;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_347> AgradCdfNormal_ffv_347;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_348> AgradCdfNormal_ffv_348;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_349> AgradCdfNormal_ffv_349;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_350> AgradCdfNormal_ffv_350;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_351> AgradCdfNormal_ffv_351;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_352> AgradCdfNormal_ffv_352;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_353> AgradCdfNormal_ffv_353;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_354> AgradCdfNormal_ffv_354;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_355> AgradCdfNormal_ffv_355;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_356> AgradCdfNormal_ffv_356;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_357> AgradCdfNormal_ffv_357;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_358> AgradCdfNormal_ffv_358;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_359> AgradCdfNormal_ffv_359;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_360> AgradCdfNormal_ffv_360;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_361> AgradCdfNormal_ffv_361;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_362> AgradCdfNormal_ffv_362;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_363> AgradCdfNormal_ffv_363;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_364> AgradCdfNormal_ffv_364;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_365> AgradCdfNormal_ffv_365;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_366> AgradCdfNormal_ffv_366;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_367> AgradCdfNormal_ffv_367;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_368> AgradCdfNormal_ffv_368;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_369> AgradCdfNormal_ffv_369;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_370> AgradCdfNormal_ffv_370;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_371> AgradCdfNormal_ffv_371;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_372> AgradCdfNormal_ffv_372;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_373> AgradCdfNormal_ffv_373;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_374> AgradCdfNormal_ffv_374;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_375> AgradCdfNormal_ffv_375;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_376> AgradCdfNormal_ffv_376;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_377> AgradCdfNormal_ffv_377;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_378> AgradCdfNormal_ffv_378;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_379> AgradCdfNormal_ffv_379;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_380> AgradCdfNormal_ffv_380;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_381> AgradCdfNormal_ffv_381;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_382> AgradCdfNormal_ffv_382;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_383> AgradCdfNormal_ffv_383;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_384> AgradCdfNormal_ffv_384;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_385> AgradCdfNormal_ffv_385;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_386> AgradCdfNormal_ffv_386;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_387> AgradCdfNormal_ffv_387;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_388> AgradCdfNormal_ffv_388;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_389> AgradCdfNormal_ffv_389;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_390> AgradCdfNormal_ffv_390;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_391> AgradCdfNormal_ffv_391;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_392> AgradCdfNormal_ffv_392;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_393> AgradCdfNormal_ffv_393;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_394> AgradCdfNormal_ffv_394;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_395> AgradCdfNormal_ffv_395;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_396> AgradCdfNormal_ffv_396;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_397> AgradCdfNormal_ffv_397;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_398> AgradCdfNormal_ffv_398;
typedef boost::mpl::vector<AgradCdfNormal, type_ffv_399> AgradCdfNormal_ffv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_300, AgradCdfTestFixture, AgradCdfNormal_ffv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_301, AgradCdfTestFixture, AgradCdfNormal_ffv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_302, AgradCdfTestFixture, AgradCdfNormal_ffv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_303, AgradCdfTestFixture, AgradCdfNormal_ffv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_304, AgradCdfTestFixture, AgradCdfNormal_ffv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_305, AgradCdfTestFixture, AgradCdfNormal_ffv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_306, AgradCdfTestFixture, AgradCdfNormal_ffv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_307, AgradCdfTestFixture, AgradCdfNormal_ffv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_308, AgradCdfTestFixture, AgradCdfNormal_ffv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_309, AgradCdfTestFixture, AgradCdfNormal_ffv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_310, AgradCdfTestFixture, AgradCdfNormal_ffv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_311, AgradCdfTestFixture, AgradCdfNormal_ffv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_312, AgradCdfTestFixture, AgradCdfNormal_ffv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_313, AgradCdfTestFixture, AgradCdfNormal_ffv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_314, AgradCdfTestFixture, AgradCdfNormal_ffv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_315, AgradCdfTestFixture, AgradCdfNormal_ffv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_316, AgradCdfTestFixture, AgradCdfNormal_ffv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_317, AgradCdfTestFixture, AgradCdfNormal_ffv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_318, AgradCdfTestFixture, AgradCdfNormal_ffv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_319, AgradCdfTestFixture, AgradCdfNormal_ffv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_320, AgradCdfTestFixture, AgradCdfNormal_ffv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_321, AgradCdfTestFixture, AgradCdfNormal_ffv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_322, AgradCdfTestFixture, AgradCdfNormal_ffv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_323, AgradCdfTestFixture, AgradCdfNormal_ffv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_324, AgradCdfTestFixture, AgradCdfNormal_ffv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_325, AgradCdfTestFixture, AgradCdfNormal_ffv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_326, AgradCdfTestFixture, AgradCdfNormal_ffv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_327, AgradCdfTestFixture, AgradCdfNormal_ffv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_328, AgradCdfTestFixture, AgradCdfNormal_ffv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_329, AgradCdfTestFixture, AgradCdfNormal_ffv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_330, AgradCdfTestFixture, AgradCdfNormal_ffv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_331, AgradCdfTestFixture, AgradCdfNormal_ffv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_332, AgradCdfTestFixture, AgradCdfNormal_ffv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_333, AgradCdfTestFixture, AgradCdfNormal_ffv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_334, AgradCdfTestFixture, AgradCdfNormal_ffv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_335, AgradCdfTestFixture, AgradCdfNormal_ffv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_336, AgradCdfTestFixture, AgradCdfNormal_ffv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_337, AgradCdfTestFixture, AgradCdfNormal_ffv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_338, AgradCdfTestFixture, AgradCdfNormal_ffv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_339, AgradCdfTestFixture, AgradCdfNormal_ffv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_340, AgradCdfTestFixture, AgradCdfNormal_ffv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_341, AgradCdfTestFixture, AgradCdfNormal_ffv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_342, AgradCdfTestFixture, AgradCdfNormal_ffv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_343, AgradCdfTestFixture, AgradCdfNormal_ffv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_344, AgradCdfTestFixture, AgradCdfNormal_ffv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_345, AgradCdfTestFixture, AgradCdfNormal_ffv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_346, AgradCdfTestFixture, AgradCdfNormal_ffv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_347, AgradCdfTestFixture, AgradCdfNormal_ffv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_348, AgradCdfTestFixture, AgradCdfNormal_ffv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_349, AgradCdfTestFixture, AgradCdfNormal_ffv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_350, AgradCdfTestFixture, AgradCdfNormal_ffv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_351, AgradCdfTestFixture, AgradCdfNormal_ffv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_352, AgradCdfTestFixture, AgradCdfNormal_ffv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_353, AgradCdfTestFixture, AgradCdfNormal_ffv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_354, AgradCdfTestFixture, AgradCdfNormal_ffv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_355, AgradCdfTestFixture, AgradCdfNormal_ffv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_356, AgradCdfTestFixture, AgradCdfNormal_ffv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_357, AgradCdfTestFixture, AgradCdfNormal_ffv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_358, AgradCdfTestFixture, AgradCdfNormal_ffv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_359, AgradCdfTestFixture, AgradCdfNormal_ffv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_360, AgradCdfTestFixture, AgradCdfNormal_ffv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_361, AgradCdfTestFixture, AgradCdfNormal_ffv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_362, AgradCdfTestFixture, AgradCdfNormal_ffv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_363, AgradCdfTestFixture, AgradCdfNormal_ffv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_364, AgradCdfTestFixture, AgradCdfNormal_ffv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_365, AgradCdfTestFixture, AgradCdfNormal_ffv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_366, AgradCdfTestFixture, AgradCdfNormal_ffv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_367, AgradCdfTestFixture, AgradCdfNormal_ffv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_368, AgradCdfTestFixture, AgradCdfNormal_ffv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_369, AgradCdfTestFixture, AgradCdfNormal_ffv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_370, AgradCdfTestFixture, AgradCdfNormal_ffv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_371, AgradCdfTestFixture, AgradCdfNormal_ffv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_372, AgradCdfTestFixture, AgradCdfNormal_ffv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_373, AgradCdfTestFixture, AgradCdfNormal_ffv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_374, AgradCdfTestFixture, AgradCdfNormal_ffv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_375, AgradCdfTestFixture, AgradCdfNormal_ffv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_376, AgradCdfTestFixture, AgradCdfNormal_ffv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_377, AgradCdfTestFixture, AgradCdfNormal_ffv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_378, AgradCdfTestFixture, AgradCdfNormal_ffv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_379, AgradCdfTestFixture, AgradCdfNormal_ffv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_380, AgradCdfTestFixture, AgradCdfNormal_ffv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_381, AgradCdfTestFixture, AgradCdfNormal_ffv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_382, AgradCdfTestFixture, AgradCdfNormal_ffv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_383, AgradCdfTestFixture, AgradCdfNormal_ffv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_384, AgradCdfTestFixture, AgradCdfNormal_ffv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_385, AgradCdfTestFixture, AgradCdfNormal_ffv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_386, AgradCdfTestFixture, AgradCdfNormal_ffv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_387, AgradCdfTestFixture, AgradCdfNormal_ffv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_388, AgradCdfTestFixture, AgradCdfNormal_ffv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_389, AgradCdfTestFixture, AgradCdfNormal_ffv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_390, AgradCdfTestFixture, AgradCdfNormal_ffv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_391, AgradCdfTestFixture, AgradCdfNormal_ffv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_392, AgradCdfTestFixture, AgradCdfNormal_ffv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_393, AgradCdfTestFixture, AgradCdfNormal_ffv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_394, AgradCdfTestFixture, AgradCdfNormal_ffv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_395, AgradCdfTestFixture, AgradCdfNormal_ffv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_396, AgradCdfTestFixture, AgradCdfNormal_ffv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_397, AgradCdfTestFixture, AgradCdfNormal_ffv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_398, AgradCdfTestFixture, AgradCdfNormal_ffv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffv_399, AgradCdfTestFixture, AgradCdfNormal_ffv_399);
