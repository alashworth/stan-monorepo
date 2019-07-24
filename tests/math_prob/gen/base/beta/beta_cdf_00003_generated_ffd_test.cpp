#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta/beta_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBeta, type_ffd_300> AgradCdfBeta_ffd_300;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_301> AgradCdfBeta_ffd_301;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_302> AgradCdfBeta_ffd_302;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_303> AgradCdfBeta_ffd_303;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_304> AgradCdfBeta_ffd_304;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_305> AgradCdfBeta_ffd_305;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_306> AgradCdfBeta_ffd_306;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_307> AgradCdfBeta_ffd_307;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_308> AgradCdfBeta_ffd_308;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_309> AgradCdfBeta_ffd_309;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_310> AgradCdfBeta_ffd_310;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_311> AgradCdfBeta_ffd_311;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_312> AgradCdfBeta_ffd_312;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_313> AgradCdfBeta_ffd_313;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_314> AgradCdfBeta_ffd_314;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_315> AgradCdfBeta_ffd_315;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_316> AgradCdfBeta_ffd_316;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_317> AgradCdfBeta_ffd_317;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_318> AgradCdfBeta_ffd_318;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_319> AgradCdfBeta_ffd_319;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_320> AgradCdfBeta_ffd_320;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_321> AgradCdfBeta_ffd_321;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_322> AgradCdfBeta_ffd_322;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_323> AgradCdfBeta_ffd_323;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_324> AgradCdfBeta_ffd_324;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_325> AgradCdfBeta_ffd_325;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_326> AgradCdfBeta_ffd_326;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_327> AgradCdfBeta_ffd_327;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_328> AgradCdfBeta_ffd_328;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_329> AgradCdfBeta_ffd_329;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_330> AgradCdfBeta_ffd_330;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_331> AgradCdfBeta_ffd_331;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_332> AgradCdfBeta_ffd_332;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_333> AgradCdfBeta_ffd_333;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_334> AgradCdfBeta_ffd_334;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_335> AgradCdfBeta_ffd_335;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_336> AgradCdfBeta_ffd_336;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_337> AgradCdfBeta_ffd_337;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_338> AgradCdfBeta_ffd_338;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_339> AgradCdfBeta_ffd_339;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_340> AgradCdfBeta_ffd_340;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_341> AgradCdfBeta_ffd_341;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_342> AgradCdfBeta_ffd_342;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_343> AgradCdfBeta_ffd_343;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_344> AgradCdfBeta_ffd_344;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_345> AgradCdfBeta_ffd_345;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_346> AgradCdfBeta_ffd_346;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_347> AgradCdfBeta_ffd_347;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_348> AgradCdfBeta_ffd_348;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_349> AgradCdfBeta_ffd_349;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_350> AgradCdfBeta_ffd_350;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_351> AgradCdfBeta_ffd_351;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_352> AgradCdfBeta_ffd_352;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_353> AgradCdfBeta_ffd_353;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_354> AgradCdfBeta_ffd_354;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_355> AgradCdfBeta_ffd_355;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_356> AgradCdfBeta_ffd_356;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_357> AgradCdfBeta_ffd_357;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_358> AgradCdfBeta_ffd_358;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_359> AgradCdfBeta_ffd_359;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_360> AgradCdfBeta_ffd_360;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_361> AgradCdfBeta_ffd_361;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_362> AgradCdfBeta_ffd_362;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_363> AgradCdfBeta_ffd_363;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_364> AgradCdfBeta_ffd_364;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_365> AgradCdfBeta_ffd_365;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_366> AgradCdfBeta_ffd_366;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_367> AgradCdfBeta_ffd_367;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_368> AgradCdfBeta_ffd_368;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_369> AgradCdfBeta_ffd_369;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_370> AgradCdfBeta_ffd_370;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_371> AgradCdfBeta_ffd_371;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_372> AgradCdfBeta_ffd_372;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_373> AgradCdfBeta_ffd_373;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_374> AgradCdfBeta_ffd_374;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_375> AgradCdfBeta_ffd_375;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_376> AgradCdfBeta_ffd_376;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_377> AgradCdfBeta_ffd_377;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_378> AgradCdfBeta_ffd_378;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_379> AgradCdfBeta_ffd_379;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_380> AgradCdfBeta_ffd_380;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_381> AgradCdfBeta_ffd_381;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_382> AgradCdfBeta_ffd_382;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_383> AgradCdfBeta_ffd_383;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_384> AgradCdfBeta_ffd_384;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_385> AgradCdfBeta_ffd_385;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_386> AgradCdfBeta_ffd_386;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_387> AgradCdfBeta_ffd_387;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_388> AgradCdfBeta_ffd_388;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_389> AgradCdfBeta_ffd_389;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_390> AgradCdfBeta_ffd_390;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_391> AgradCdfBeta_ffd_391;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_392> AgradCdfBeta_ffd_392;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_393> AgradCdfBeta_ffd_393;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_394> AgradCdfBeta_ffd_394;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_395> AgradCdfBeta_ffd_395;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_396> AgradCdfBeta_ffd_396;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_397> AgradCdfBeta_ffd_397;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_398> AgradCdfBeta_ffd_398;
typedef boost::mpl::vector<AgradCdfBeta, type_ffd_399> AgradCdfBeta_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_300, AgradCdfTestFixture, AgradCdfBeta_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_301, AgradCdfTestFixture, AgradCdfBeta_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_302, AgradCdfTestFixture, AgradCdfBeta_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_303, AgradCdfTestFixture, AgradCdfBeta_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_304, AgradCdfTestFixture, AgradCdfBeta_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_305, AgradCdfTestFixture, AgradCdfBeta_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_306, AgradCdfTestFixture, AgradCdfBeta_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_307, AgradCdfTestFixture, AgradCdfBeta_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_308, AgradCdfTestFixture, AgradCdfBeta_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_309, AgradCdfTestFixture, AgradCdfBeta_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_310, AgradCdfTestFixture, AgradCdfBeta_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_311, AgradCdfTestFixture, AgradCdfBeta_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_312, AgradCdfTestFixture, AgradCdfBeta_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_313, AgradCdfTestFixture, AgradCdfBeta_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_314, AgradCdfTestFixture, AgradCdfBeta_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_315, AgradCdfTestFixture, AgradCdfBeta_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_316, AgradCdfTestFixture, AgradCdfBeta_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_317, AgradCdfTestFixture, AgradCdfBeta_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_318, AgradCdfTestFixture, AgradCdfBeta_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_319, AgradCdfTestFixture, AgradCdfBeta_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_320, AgradCdfTestFixture, AgradCdfBeta_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_321, AgradCdfTestFixture, AgradCdfBeta_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_322, AgradCdfTestFixture, AgradCdfBeta_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_323, AgradCdfTestFixture, AgradCdfBeta_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_324, AgradCdfTestFixture, AgradCdfBeta_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_325, AgradCdfTestFixture, AgradCdfBeta_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_326, AgradCdfTestFixture, AgradCdfBeta_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_327, AgradCdfTestFixture, AgradCdfBeta_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_328, AgradCdfTestFixture, AgradCdfBeta_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_329, AgradCdfTestFixture, AgradCdfBeta_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_330, AgradCdfTestFixture, AgradCdfBeta_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_331, AgradCdfTestFixture, AgradCdfBeta_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_332, AgradCdfTestFixture, AgradCdfBeta_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_333, AgradCdfTestFixture, AgradCdfBeta_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_334, AgradCdfTestFixture, AgradCdfBeta_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_335, AgradCdfTestFixture, AgradCdfBeta_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_336, AgradCdfTestFixture, AgradCdfBeta_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_337, AgradCdfTestFixture, AgradCdfBeta_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_338, AgradCdfTestFixture, AgradCdfBeta_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_339, AgradCdfTestFixture, AgradCdfBeta_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_340, AgradCdfTestFixture, AgradCdfBeta_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_341, AgradCdfTestFixture, AgradCdfBeta_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_342, AgradCdfTestFixture, AgradCdfBeta_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_343, AgradCdfTestFixture, AgradCdfBeta_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_344, AgradCdfTestFixture, AgradCdfBeta_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_345, AgradCdfTestFixture, AgradCdfBeta_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_346, AgradCdfTestFixture, AgradCdfBeta_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_347, AgradCdfTestFixture, AgradCdfBeta_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_348, AgradCdfTestFixture, AgradCdfBeta_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_349, AgradCdfTestFixture, AgradCdfBeta_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_350, AgradCdfTestFixture, AgradCdfBeta_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_351, AgradCdfTestFixture, AgradCdfBeta_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_352, AgradCdfTestFixture, AgradCdfBeta_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_353, AgradCdfTestFixture, AgradCdfBeta_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_354, AgradCdfTestFixture, AgradCdfBeta_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_355, AgradCdfTestFixture, AgradCdfBeta_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_356, AgradCdfTestFixture, AgradCdfBeta_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_357, AgradCdfTestFixture, AgradCdfBeta_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_358, AgradCdfTestFixture, AgradCdfBeta_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_359, AgradCdfTestFixture, AgradCdfBeta_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_360, AgradCdfTestFixture, AgradCdfBeta_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_361, AgradCdfTestFixture, AgradCdfBeta_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_362, AgradCdfTestFixture, AgradCdfBeta_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_363, AgradCdfTestFixture, AgradCdfBeta_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_364, AgradCdfTestFixture, AgradCdfBeta_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_365, AgradCdfTestFixture, AgradCdfBeta_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_366, AgradCdfTestFixture, AgradCdfBeta_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_367, AgradCdfTestFixture, AgradCdfBeta_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_368, AgradCdfTestFixture, AgradCdfBeta_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_369, AgradCdfTestFixture, AgradCdfBeta_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_370, AgradCdfTestFixture, AgradCdfBeta_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_371, AgradCdfTestFixture, AgradCdfBeta_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_372, AgradCdfTestFixture, AgradCdfBeta_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_373, AgradCdfTestFixture, AgradCdfBeta_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_374, AgradCdfTestFixture, AgradCdfBeta_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_375, AgradCdfTestFixture, AgradCdfBeta_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_376, AgradCdfTestFixture, AgradCdfBeta_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_377, AgradCdfTestFixture, AgradCdfBeta_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_378, AgradCdfTestFixture, AgradCdfBeta_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_379, AgradCdfTestFixture, AgradCdfBeta_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_380, AgradCdfTestFixture, AgradCdfBeta_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_381, AgradCdfTestFixture, AgradCdfBeta_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_382, AgradCdfTestFixture, AgradCdfBeta_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_383, AgradCdfTestFixture, AgradCdfBeta_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_384, AgradCdfTestFixture, AgradCdfBeta_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_385, AgradCdfTestFixture, AgradCdfBeta_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_386, AgradCdfTestFixture, AgradCdfBeta_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_387, AgradCdfTestFixture, AgradCdfBeta_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_388, AgradCdfTestFixture, AgradCdfBeta_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_389, AgradCdfTestFixture, AgradCdfBeta_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_390, AgradCdfTestFixture, AgradCdfBeta_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_391, AgradCdfTestFixture, AgradCdfBeta_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_392, AgradCdfTestFixture, AgradCdfBeta_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_393, AgradCdfTestFixture, AgradCdfBeta_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_394, AgradCdfTestFixture, AgradCdfBeta_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_395, AgradCdfTestFixture, AgradCdfBeta_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_396, AgradCdfTestFixture, AgradCdfBeta_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_397, AgradCdfTestFixture, AgradCdfBeta_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_398, AgradCdfTestFixture, AgradCdfBeta_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBeta_ffd_399, AgradCdfTestFixture, AgradCdfBeta_ffd_399);
