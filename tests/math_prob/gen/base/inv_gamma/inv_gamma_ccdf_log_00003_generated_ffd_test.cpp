#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/inv_gamma/inv_gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_300> AgradCcdfLogInvGamma_ffd_300;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_301> AgradCcdfLogInvGamma_ffd_301;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_302> AgradCcdfLogInvGamma_ffd_302;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_303> AgradCcdfLogInvGamma_ffd_303;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_304> AgradCcdfLogInvGamma_ffd_304;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_305> AgradCcdfLogInvGamma_ffd_305;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_306> AgradCcdfLogInvGamma_ffd_306;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_307> AgradCcdfLogInvGamma_ffd_307;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_308> AgradCcdfLogInvGamma_ffd_308;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_309> AgradCcdfLogInvGamma_ffd_309;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_310> AgradCcdfLogInvGamma_ffd_310;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_311> AgradCcdfLogInvGamma_ffd_311;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_312> AgradCcdfLogInvGamma_ffd_312;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_313> AgradCcdfLogInvGamma_ffd_313;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_314> AgradCcdfLogInvGamma_ffd_314;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_315> AgradCcdfLogInvGamma_ffd_315;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_316> AgradCcdfLogInvGamma_ffd_316;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_317> AgradCcdfLogInvGamma_ffd_317;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_318> AgradCcdfLogInvGamma_ffd_318;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_319> AgradCcdfLogInvGamma_ffd_319;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_320> AgradCcdfLogInvGamma_ffd_320;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_321> AgradCcdfLogInvGamma_ffd_321;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_322> AgradCcdfLogInvGamma_ffd_322;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_323> AgradCcdfLogInvGamma_ffd_323;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_324> AgradCcdfLogInvGamma_ffd_324;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_325> AgradCcdfLogInvGamma_ffd_325;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_326> AgradCcdfLogInvGamma_ffd_326;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_327> AgradCcdfLogInvGamma_ffd_327;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_328> AgradCcdfLogInvGamma_ffd_328;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_329> AgradCcdfLogInvGamma_ffd_329;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_330> AgradCcdfLogInvGamma_ffd_330;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_331> AgradCcdfLogInvGamma_ffd_331;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_332> AgradCcdfLogInvGamma_ffd_332;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_333> AgradCcdfLogInvGamma_ffd_333;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_334> AgradCcdfLogInvGamma_ffd_334;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_335> AgradCcdfLogInvGamma_ffd_335;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_336> AgradCcdfLogInvGamma_ffd_336;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_337> AgradCcdfLogInvGamma_ffd_337;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_338> AgradCcdfLogInvGamma_ffd_338;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_339> AgradCcdfLogInvGamma_ffd_339;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_340> AgradCcdfLogInvGamma_ffd_340;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_341> AgradCcdfLogInvGamma_ffd_341;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_342> AgradCcdfLogInvGamma_ffd_342;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_343> AgradCcdfLogInvGamma_ffd_343;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_344> AgradCcdfLogInvGamma_ffd_344;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_345> AgradCcdfLogInvGamma_ffd_345;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_346> AgradCcdfLogInvGamma_ffd_346;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_347> AgradCcdfLogInvGamma_ffd_347;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_348> AgradCcdfLogInvGamma_ffd_348;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_349> AgradCcdfLogInvGamma_ffd_349;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_350> AgradCcdfLogInvGamma_ffd_350;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_351> AgradCcdfLogInvGamma_ffd_351;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_352> AgradCcdfLogInvGamma_ffd_352;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_353> AgradCcdfLogInvGamma_ffd_353;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_354> AgradCcdfLogInvGamma_ffd_354;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_355> AgradCcdfLogInvGamma_ffd_355;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_356> AgradCcdfLogInvGamma_ffd_356;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_357> AgradCcdfLogInvGamma_ffd_357;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_358> AgradCcdfLogInvGamma_ffd_358;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_359> AgradCcdfLogInvGamma_ffd_359;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_360> AgradCcdfLogInvGamma_ffd_360;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_361> AgradCcdfLogInvGamma_ffd_361;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_362> AgradCcdfLogInvGamma_ffd_362;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_363> AgradCcdfLogInvGamma_ffd_363;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_364> AgradCcdfLogInvGamma_ffd_364;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_365> AgradCcdfLogInvGamma_ffd_365;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_366> AgradCcdfLogInvGamma_ffd_366;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_367> AgradCcdfLogInvGamma_ffd_367;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_368> AgradCcdfLogInvGamma_ffd_368;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_369> AgradCcdfLogInvGamma_ffd_369;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_370> AgradCcdfLogInvGamma_ffd_370;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_371> AgradCcdfLogInvGamma_ffd_371;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_372> AgradCcdfLogInvGamma_ffd_372;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_373> AgradCcdfLogInvGamma_ffd_373;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_374> AgradCcdfLogInvGamma_ffd_374;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_375> AgradCcdfLogInvGamma_ffd_375;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_376> AgradCcdfLogInvGamma_ffd_376;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_377> AgradCcdfLogInvGamma_ffd_377;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_378> AgradCcdfLogInvGamma_ffd_378;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_379> AgradCcdfLogInvGamma_ffd_379;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_380> AgradCcdfLogInvGamma_ffd_380;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_381> AgradCcdfLogInvGamma_ffd_381;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_382> AgradCcdfLogInvGamma_ffd_382;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_383> AgradCcdfLogInvGamma_ffd_383;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_384> AgradCcdfLogInvGamma_ffd_384;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_385> AgradCcdfLogInvGamma_ffd_385;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_386> AgradCcdfLogInvGamma_ffd_386;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_387> AgradCcdfLogInvGamma_ffd_387;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_388> AgradCcdfLogInvGamma_ffd_388;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_389> AgradCcdfLogInvGamma_ffd_389;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_390> AgradCcdfLogInvGamma_ffd_390;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_391> AgradCcdfLogInvGamma_ffd_391;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_392> AgradCcdfLogInvGamma_ffd_392;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_393> AgradCcdfLogInvGamma_ffd_393;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_394> AgradCcdfLogInvGamma_ffd_394;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_395> AgradCcdfLogInvGamma_ffd_395;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_396> AgradCcdfLogInvGamma_ffd_396;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_397> AgradCcdfLogInvGamma_ffd_397;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_398> AgradCcdfLogInvGamma_ffd_398;
typedef boost::mpl::vector<AgradCcdfLogInvGamma, type_ffd_399> AgradCcdfLogInvGamma_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_300, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_301, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_302, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_303, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_304, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_305, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_306, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_307, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_308, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_309, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_310, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_311, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_312, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_313, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_314, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_315, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_316, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_317, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_318, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_319, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_320, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_321, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_322, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_323, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_324, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_325, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_326, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_327, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_328, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_329, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_330, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_331, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_332, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_333, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_334, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_335, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_336, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_337, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_338, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_339, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_340, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_341, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_342, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_343, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_344, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_345, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_346, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_347, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_348, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_349, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_350, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_351, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_352, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_353, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_354, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_355, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_356, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_357, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_358, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_359, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_360, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_361, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_362, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_363, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_364, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_365, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_366, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_367, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_368, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_369, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_370, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_371, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_372, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_373, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_374, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_375, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_376, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_377, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_378, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_379, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_380, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_381, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_382, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_383, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_384, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_385, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_386, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_387, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_388, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_389, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_390, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_391, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_392, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_393, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_394, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_395, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_396, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_397, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_398, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogInvGamma_ffd_399, AgradCcdfLogTestFixture, AgradCcdfLogInvGamma_ffd_399);

