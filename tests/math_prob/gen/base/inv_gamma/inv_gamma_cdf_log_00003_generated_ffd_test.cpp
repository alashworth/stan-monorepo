#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_cdf_log_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty, empty> type_ffd_300;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_301;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_302;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_303;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_304;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_305;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_306;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_307;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_308;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_309;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_310;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_311;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_312;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_313;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_314;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_315;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_316;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_317;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_318;
typedef boost::mpl::vector<std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_ffd_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_ffd_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, fvar<fvar<double> >, empty, empty, empty> type_ffd_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_ffd_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffd_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, fvar<fvar<double> >, empty, empty, empty> type_ffd_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, double, empty, empty, empty> type_ffd_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, std::vector<double>, empty, empty, empty> type_ffd_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, fvar<fvar<double> >, empty, empty, empty> type_ffd_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, double, empty, empty, empty> type_ffd_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, std::vector<double>, empty, empty, empty> type_ffd_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty, empty> type_ffd_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty, empty> type_ffd_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_ffd_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty, empty> type_ffd_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty, empty> type_ffd_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_ffd_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty, empty> type_ffd_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_ffd_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_ffd_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, fvar<fvar<double> >, empty, empty, empty> type_ffd_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_ffd_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_ffd_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, fvar<fvar<double> >, empty, empty, empty> type_ffd_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<fvar<double> >>, empty, empty, empty> type_ffd_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty, empty> type_ffd_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty, empty> type_ffd_399;

typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_300> AgradCdfLogInvGamma_ffd_300;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_301> AgradCdfLogInvGamma_ffd_301;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_302> AgradCdfLogInvGamma_ffd_302;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_303> AgradCdfLogInvGamma_ffd_303;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_304> AgradCdfLogInvGamma_ffd_304;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_305> AgradCdfLogInvGamma_ffd_305;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_306> AgradCdfLogInvGamma_ffd_306;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_307> AgradCdfLogInvGamma_ffd_307;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_308> AgradCdfLogInvGamma_ffd_308;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_309> AgradCdfLogInvGamma_ffd_309;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_310> AgradCdfLogInvGamma_ffd_310;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_311> AgradCdfLogInvGamma_ffd_311;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_312> AgradCdfLogInvGamma_ffd_312;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_313> AgradCdfLogInvGamma_ffd_313;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_314> AgradCdfLogInvGamma_ffd_314;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_315> AgradCdfLogInvGamma_ffd_315;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_316> AgradCdfLogInvGamma_ffd_316;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_317> AgradCdfLogInvGamma_ffd_317;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_318> AgradCdfLogInvGamma_ffd_318;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_319> AgradCdfLogInvGamma_ffd_319;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_320> AgradCdfLogInvGamma_ffd_320;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_321> AgradCdfLogInvGamma_ffd_321;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_322> AgradCdfLogInvGamma_ffd_322;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_323> AgradCdfLogInvGamma_ffd_323;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_324> AgradCdfLogInvGamma_ffd_324;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_325> AgradCdfLogInvGamma_ffd_325;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_326> AgradCdfLogInvGamma_ffd_326;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_327> AgradCdfLogInvGamma_ffd_327;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_328> AgradCdfLogInvGamma_ffd_328;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_329> AgradCdfLogInvGamma_ffd_329;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_330> AgradCdfLogInvGamma_ffd_330;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_331> AgradCdfLogInvGamma_ffd_331;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_332> AgradCdfLogInvGamma_ffd_332;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_333> AgradCdfLogInvGamma_ffd_333;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_334> AgradCdfLogInvGamma_ffd_334;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_335> AgradCdfLogInvGamma_ffd_335;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_336> AgradCdfLogInvGamma_ffd_336;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_337> AgradCdfLogInvGamma_ffd_337;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_338> AgradCdfLogInvGamma_ffd_338;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_339> AgradCdfLogInvGamma_ffd_339;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_340> AgradCdfLogInvGamma_ffd_340;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_341> AgradCdfLogInvGamma_ffd_341;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_342> AgradCdfLogInvGamma_ffd_342;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_343> AgradCdfLogInvGamma_ffd_343;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_344> AgradCdfLogInvGamma_ffd_344;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_345> AgradCdfLogInvGamma_ffd_345;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_346> AgradCdfLogInvGamma_ffd_346;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_347> AgradCdfLogInvGamma_ffd_347;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_348> AgradCdfLogInvGamma_ffd_348;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_349> AgradCdfLogInvGamma_ffd_349;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_350> AgradCdfLogInvGamma_ffd_350;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_351> AgradCdfLogInvGamma_ffd_351;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_352> AgradCdfLogInvGamma_ffd_352;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_353> AgradCdfLogInvGamma_ffd_353;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_354> AgradCdfLogInvGamma_ffd_354;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_355> AgradCdfLogInvGamma_ffd_355;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_356> AgradCdfLogInvGamma_ffd_356;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_357> AgradCdfLogInvGamma_ffd_357;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_358> AgradCdfLogInvGamma_ffd_358;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_359> AgradCdfLogInvGamma_ffd_359;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_360> AgradCdfLogInvGamma_ffd_360;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_361> AgradCdfLogInvGamma_ffd_361;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_362> AgradCdfLogInvGamma_ffd_362;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_363> AgradCdfLogInvGamma_ffd_363;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_364> AgradCdfLogInvGamma_ffd_364;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_365> AgradCdfLogInvGamma_ffd_365;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_366> AgradCdfLogInvGamma_ffd_366;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_367> AgradCdfLogInvGamma_ffd_367;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_368> AgradCdfLogInvGamma_ffd_368;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_369> AgradCdfLogInvGamma_ffd_369;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_370> AgradCdfLogInvGamma_ffd_370;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_371> AgradCdfLogInvGamma_ffd_371;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_372> AgradCdfLogInvGamma_ffd_372;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_373> AgradCdfLogInvGamma_ffd_373;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_374> AgradCdfLogInvGamma_ffd_374;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_375> AgradCdfLogInvGamma_ffd_375;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_376> AgradCdfLogInvGamma_ffd_376;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_377> AgradCdfLogInvGamma_ffd_377;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_378> AgradCdfLogInvGamma_ffd_378;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_379> AgradCdfLogInvGamma_ffd_379;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_380> AgradCdfLogInvGamma_ffd_380;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_381> AgradCdfLogInvGamma_ffd_381;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_382> AgradCdfLogInvGamma_ffd_382;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_383> AgradCdfLogInvGamma_ffd_383;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_384> AgradCdfLogInvGamma_ffd_384;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_385> AgradCdfLogInvGamma_ffd_385;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_386> AgradCdfLogInvGamma_ffd_386;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_387> AgradCdfLogInvGamma_ffd_387;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_388> AgradCdfLogInvGamma_ffd_388;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_389> AgradCdfLogInvGamma_ffd_389;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_390> AgradCdfLogInvGamma_ffd_390;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_391> AgradCdfLogInvGamma_ffd_391;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_392> AgradCdfLogInvGamma_ffd_392;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_393> AgradCdfLogInvGamma_ffd_393;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_394> AgradCdfLogInvGamma_ffd_394;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_395> AgradCdfLogInvGamma_ffd_395;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_396> AgradCdfLogInvGamma_ffd_396;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_397> AgradCdfLogInvGamma_ffd_397;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_398> AgradCdfLogInvGamma_ffd_398;
typedef boost::mpl::vector<AgradCdfLogInvGamma, type_ffd_399> AgradCdfLogInvGamma_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_300, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_301, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_302, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_303, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_304, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_305, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_306, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_307, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_308, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_309, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_310, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_311, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_312, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_313, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_314, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_315, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_316, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_317, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_318, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_319, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_320, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_321, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_322, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_323, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_324, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_325, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_326, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_327, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_328, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_329, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_330, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_331, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_332, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_333, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_334, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_335, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_336, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_337, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_338, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_339, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_340, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_341, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_342, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_343, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_344, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_345, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_346, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_347, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_348, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_349, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_350, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_351, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_352, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_353, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_354, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_355, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_356, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_357, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_358, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_359, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_360, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_361, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_362, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_363, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_364, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_365, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_366, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_367, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_368, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_369, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_370, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_371, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_372, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_373, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_374, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_375, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_376, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_377, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_378, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_379, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_380, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_381, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_382, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_383, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_384, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_385, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_386, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_387, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_388, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_389, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_390, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_391, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_392, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_393, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_394, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_395, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_396, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_397, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_398, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogInvGamma_ffd_399, AgradCdfLogTestFixture, AgradCdfLogInvGamma_ffd_399);
