#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_300> AgradCdfLogInvGamma_ffv_300;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_301> AgradCdfLogInvGamma_ffv_301;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_302> AgradCdfLogInvGamma_ffv_302;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_303> AgradCdfLogInvGamma_ffv_303;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_304> AgradCdfLogInvGamma_ffv_304;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_305> AgradCdfLogInvGamma_ffv_305;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_306> AgradCdfLogInvGamma_ffv_306;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_307> AgradCdfLogInvGamma_ffv_307;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_308> AgradCdfLogInvGamma_ffv_308;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_309> AgradCdfLogInvGamma_ffv_309;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_310> AgradCdfLogInvGamma_ffv_310;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_311> AgradCdfLogInvGamma_ffv_311;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_312> AgradCdfLogInvGamma_ffv_312;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_313> AgradCdfLogInvGamma_ffv_313;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_314> AgradCdfLogInvGamma_ffv_314;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_315> AgradCdfLogInvGamma_ffv_315;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_316> AgradCdfLogInvGamma_ffv_316;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_317> AgradCdfLogInvGamma_ffv_317;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_318> AgradCdfLogInvGamma_ffv_318;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_319> AgradCdfLogInvGamma_ffv_319;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_320> AgradCdfLogInvGamma_ffv_320;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_321> AgradCdfLogInvGamma_ffv_321;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_322> AgradCdfLogInvGamma_ffv_322;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_323> AgradCdfLogInvGamma_ffv_323;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_324> AgradCdfLogInvGamma_ffv_324;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_325> AgradCdfLogInvGamma_ffv_325;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_326> AgradCdfLogInvGamma_ffv_326;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_327> AgradCdfLogInvGamma_ffv_327;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_328> AgradCdfLogInvGamma_ffv_328;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_329> AgradCdfLogInvGamma_ffv_329;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_330> AgradCdfLogInvGamma_ffv_330;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_331> AgradCdfLogInvGamma_ffv_331;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_332> AgradCdfLogInvGamma_ffv_332;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_333> AgradCdfLogInvGamma_ffv_333;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_334> AgradCdfLogInvGamma_ffv_334;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_335> AgradCdfLogInvGamma_ffv_335;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_336> AgradCdfLogInvGamma_ffv_336;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_337> AgradCdfLogInvGamma_ffv_337;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_338> AgradCdfLogInvGamma_ffv_338;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_339> AgradCdfLogInvGamma_ffv_339;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_340> AgradCdfLogInvGamma_ffv_340;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_341> AgradCdfLogInvGamma_ffv_341;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_342> AgradCdfLogInvGamma_ffv_342;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_343> AgradCdfLogInvGamma_ffv_343;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_344> AgradCdfLogInvGamma_ffv_344;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_345> AgradCdfLogInvGamma_ffv_345;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_346> AgradCdfLogInvGamma_ffv_346;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_347> AgradCdfLogInvGamma_ffv_347;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_348> AgradCdfLogInvGamma_ffv_348;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_349> AgradCdfLogInvGamma_ffv_349;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_350> AgradCdfLogInvGamma_ffv_350;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_351> AgradCdfLogInvGamma_ffv_351;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_352> AgradCdfLogInvGamma_ffv_352;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_353> AgradCdfLogInvGamma_ffv_353;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_354> AgradCdfLogInvGamma_ffv_354;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_355> AgradCdfLogInvGamma_ffv_355;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_356> AgradCdfLogInvGamma_ffv_356;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_357> AgradCdfLogInvGamma_ffv_357;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_358> AgradCdfLogInvGamma_ffv_358;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_359> AgradCdfLogInvGamma_ffv_359;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_360> AgradCdfLogInvGamma_ffv_360;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_361> AgradCdfLogInvGamma_ffv_361;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_362> AgradCdfLogInvGamma_ffv_362;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_363> AgradCdfLogInvGamma_ffv_363;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_364> AgradCdfLogInvGamma_ffv_364;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_365> AgradCdfLogInvGamma_ffv_365;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_366> AgradCdfLogInvGamma_ffv_366;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_367> AgradCdfLogInvGamma_ffv_367;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_368> AgradCdfLogInvGamma_ffv_368;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_369> AgradCdfLogInvGamma_ffv_369;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_370> AgradCdfLogInvGamma_ffv_370;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_371> AgradCdfLogInvGamma_ffv_371;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_372> AgradCdfLogInvGamma_ffv_372;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_373> AgradCdfLogInvGamma_ffv_373;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_374> AgradCdfLogInvGamma_ffv_374;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_375> AgradCdfLogInvGamma_ffv_375;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_376> AgradCdfLogInvGamma_ffv_376;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_377> AgradCdfLogInvGamma_ffv_377;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_378> AgradCdfLogInvGamma_ffv_378;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_379> AgradCdfLogInvGamma_ffv_379;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_380> AgradCdfLogInvGamma_ffv_380;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_381> AgradCdfLogInvGamma_ffv_381;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_382> AgradCdfLogInvGamma_ffv_382;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_383> AgradCdfLogInvGamma_ffv_383;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_384> AgradCdfLogInvGamma_ffv_384;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_385> AgradCdfLogInvGamma_ffv_385;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_386> AgradCdfLogInvGamma_ffv_386;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_387> AgradCdfLogInvGamma_ffv_387;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_388> AgradCdfLogInvGamma_ffv_388;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_389> AgradCdfLogInvGamma_ffv_389;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_390> AgradCdfLogInvGamma_ffv_390;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_391> AgradCdfLogInvGamma_ffv_391;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_392> AgradCdfLogInvGamma_ffv_392;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_393> AgradCdfLogInvGamma_ffv_393;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_394> AgradCdfLogInvGamma_ffv_394;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_395> AgradCdfLogInvGamma_ffv_395;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_396> AgradCdfLogInvGamma_ffv_396;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_397> AgradCdfLogInvGamma_ffv_397;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_398> AgradCdfLogInvGamma_ffv_398;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffv_399> AgradCdfLogInvGamma_ffv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_300, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_301, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_302, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_303, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_304, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_305, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_306, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_307, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_308, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_309, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_310, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_311, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_312, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_313, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_314, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_315, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_316, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_317, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_318, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_319, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_320, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_321, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_322, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_323, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_324, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_325, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_326, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_327, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_328, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_329, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_330, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_331, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_332, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_333, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_334, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_335, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_336, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_337, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_338, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_339, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_340, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_341, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_342, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_343, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_344, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_345, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_346, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_347, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_348, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_349, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_350, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_351, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_352, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_353, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_354, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_355, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_356, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_357, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_358, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_359, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_360, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_361, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_362, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_363, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_364, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_365, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_366, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_367, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_368, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_369, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_370, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_371, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_372, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_373, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_374, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_375, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_376, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_377, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_378, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_379, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_380, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_381, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_382, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_383, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_384, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_385, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_386, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_387, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_388, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_389, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_390, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_391, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_392, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_393, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_394, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_395, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_396, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_397, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_398, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffv_399, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffv_399);
