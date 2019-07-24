#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gamma/gamma_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_300> AgradCcdfLogGamma_ffd_300;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_301> AgradCcdfLogGamma_ffd_301;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_302> AgradCcdfLogGamma_ffd_302;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_303> AgradCcdfLogGamma_ffd_303;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_304> AgradCcdfLogGamma_ffd_304;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_305> AgradCcdfLogGamma_ffd_305;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_306> AgradCcdfLogGamma_ffd_306;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_307> AgradCcdfLogGamma_ffd_307;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_308> AgradCcdfLogGamma_ffd_308;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_309> AgradCcdfLogGamma_ffd_309;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_310> AgradCcdfLogGamma_ffd_310;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_311> AgradCcdfLogGamma_ffd_311;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_312> AgradCcdfLogGamma_ffd_312;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_313> AgradCcdfLogGamma_ffd_313;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_314> AgradCcdfLogGamma_ffd_314;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_315> AgradCcdfLogGamma_ffd_315;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_316> AgradCcdfLogGamma_ffd_316;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_317> AgradCcdfLogGamma_ffd_317;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_318> AgradCcdfLogGamma_ffd_318;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_319> AgradCcdfLogGamma_ffd_319;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_320> AgradCcdfLogGamma_ffd_320;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_321> AgradCcdfLogGamma_ffd_321;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_322> AgradCcdfLogGamma_ffd_322;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_323> AgradCcdfLogGamma_ffd_323;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_324> AgradCcdfLogGamma_ffd_324;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_325> AgradCcdfLogGamma_ffd_325;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_326> AgradCcdfLogGamma_ffd_326;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_327> AgradCcdfLogGamma_ffd_327;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_328> AgradCcdfLogGamma_ffd_328;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_329> AgradCcdfLogGamma_ffd_329;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_330> AgradCcdfLogGamma_ffd_330;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_331> AgradCcdfLogGamma_ffd_331;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_332> AgradCcdfLogGamma_ffd_332;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_333> AgradCcdfLogGamma_ffd_333;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_334> AgradCcdfLogGamma_ffd_334;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_335> AgradCcdfLogGamma_ffd_335;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_336> AgradCcdfLogGamma_ffd_336;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_337> AgradCcdfLogGamma_ffd_337;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_338> AgradCcdfLogGamma_ffd_338;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_339> AgradCcdfLogGamma_ffd_339;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_340> AgradCcdfLogGamma_ffd_340;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_341> AgradCcdfLogGamma_ffd_341;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_342> AgradCcdfLogGamma_ffd_342;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_343> AgradCcdfLogGamma_ffd_343;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_344> AgradCcdfLogGamma_ffd_344;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_345> AgradCcdfLogGamma_ffd_345;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_346> AgradCcdfLogGamma_ffd_346;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_347> AgradCcdfLogGamma_ffd_347;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_348> AgradCcdfLogGamma_ffd_348;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_349> AgradCcdfLogGamma_ffd_349;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_350> AgradCcdfLogGamma_ffd_350;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_351> AgradCcdfLogGamma_ffd_351;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_352> AgradCcdfLogGamma_ffd_352;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_353> AgradCcdfLogGamma_ffd_353;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_354> AgradCcdfLogGamma_ffd_354;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_355> AgradCcdfLogGamma_ffd_355;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_356> AgradCcdfLogGamma_ffd_356;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_357> AgradCcdfLogGamma_ffd_357;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_358> AgradCcdfLogGamma_ffd_358;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_359> AgradCcdfLogGamma_ffd_359;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_360> AgradCcdfLogGamma_ffd_360;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_361> AgradCcdfLogGamma_ffd_361;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_362> AgradCcdfLogGamma_ffd_362;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_363> AgradCcdfLogGamma_ffd_363;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_364> AgradCcdfLogGamma_ffd_364;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_365> AgradCcdfLogGamma_ffd_365;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_366> AgradCcdfLogGamma_ffd_366;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_367> AgradCcdfLogGamma_ffd_367;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_368> AgradCcdfLogGamma_ffd_368;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_369> AgradCcdfLogGamma_ffd_369;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_370> AgradCcdfLogGamma_ffd_370;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_371> AgradCcdfLogGamma_ffd_371;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_372> AgradCcdfLogGamma_ffd_372;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_373> AgradCcdfLogGamma_ffd_373;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_374> AgradCcdfLogGamma_ffd_374;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_375> AgradCcdfLogGamma_ffd_375;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_376> AgradCcdfLogGamma_ffd_376;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_377> AgradCcdfLogGamma_ffd_377;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_378> AgradCcdfLogGamma_ffd_378;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_379> AgradCcdfLogGamma_ffd_379;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_380> AgradCcdfLogGamma_ffd_380;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_381> AgradCcdfLogGamma_ffd_381;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_382> AgradCcdfLogGamma_ffd_382;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_383> AgradCcdfLogGamma_ffd_383;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_384> AgradCcdfLogGamma_ffd_384;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_385> AgradCcdfLogGamma_ffd_385;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_386> AgradCcdfLogGamma_ffd_386;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_387> AgradCcdfLogGamma_ffd_387;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_388> AgradCcdfLogGamma_ffd_388;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_389> AgradCcdfLogGamma_ffd_389;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_390> AgradCcdfLogGamma_ffd_390;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_391> AgradCcdfLogGamma_ffd_391;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_392> AgradCcdfLogGamma_ffd_392;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_393> AgradCcdfLogGamma_ffd_393;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_394> AgradCcdfLogGamma_ffd_394;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_395> AgradCcdfLogGamma_ffd_395;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_396> AgradCcdfLogGamma_ffd_396;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_397> AgradCcdfLogGamma_ffd_397;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_398> AgradCcdfLogGamma_ffd_398;
typedef boost::mpl::vector<AgradCcdfLogGamma, type_ffd_399> AgradCcdfLogGamma_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_300, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_301, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_302, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_303, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_304, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_305, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_306, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_307, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_308, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_309, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_310, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_311, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_312, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_313, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_314, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_315, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_316, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_317, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_318, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_319, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_320, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_321, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_322, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_323, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_324, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_325, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_326, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_327, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_328, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_329, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_330, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_331, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_332, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_333, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_334, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_335, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_336, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_337, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_338, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_339, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_340, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_341, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_342, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_343, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_344, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_345, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_346, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_347, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_348, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_349, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_350, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_351, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_352, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_353, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_354, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_355, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_356, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_357, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_358, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_359, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_360, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_361, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_362, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_363, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_364, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_365, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_366, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_367, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_368, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_369, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_370, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_371, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_372, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_373, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_374, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_375, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_376, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_377, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_378, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_379, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_380, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_381, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_382, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_383, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_384, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_385, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_386, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_387, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_388, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_389, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_390, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_391, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_392, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_393, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_394, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_395, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_396, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_397, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_398, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGamma_ffd_399, AgradCcdfLogTestFixture, AgradCcdfLogGamma_ffd_399);
