#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/normal/normal_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfNormal, type_ffd_300> AgradCdfNormal_ffd_300;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_301> AgradCdfNormal_ffd_301;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_302> AgradCdfNormal_ffd_302;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_303> AgradCdfNormal_ffd_303;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_304> AgradCdfNormal_ffd_304;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_305> AgradCdfNormal_ffd_305;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_306> AgradCdfNormal_ffd_306;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_307> AgradCdfNormal_ffd_307;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_308> AgradCdfNormal_ffd_308;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_309> AgradCdfNormal_ffd_309;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_310> AgradCdfNormal_ffd_310;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_311> AgradCdfNormal_ffd_311;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_312> AgradCdfNormal_ffd_312;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_313> AgradCdfNormal_ffd_313;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_314> AgradCdfNormal_ffd_314;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_315> AgradCdfNormal_ffd_315;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_316> AgradCdfNormal_ffd_316;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_317> AgradCdfNormal_ffd_317;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_318> AgradCdfNormal_ffd_318;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_319> AgradCdfNormal_ffd_319;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_320> AgradCdfNormal_ffd_320;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_321> AgradCdfNormal_ffd_321;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_322> AgradCdfNormal_ffd_322;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_323> AgradCdfNormal_ffd_323;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_324> AgradCdfNormal_ffd_324;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_325> AgradCdfNormal_ffd_325;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_326> AgradCdfNormal_ffd_326;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_327> AgradCdfNormal_ffd_327;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_328> AgradCdfNormal_ffd_328;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_329> AgradCdfNormal_ffd_329;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_330> AgradCdfNormal_ffd_330;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_331> AgradCdfNormal_ffd_331;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_332> AgradCdfNormal_ffd_332;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_333> AgradCdfNormal_ffd_333;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_334> AgradCdfNormal_ffd_334;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_335> AgradCdfNormal_ffd_335;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_336> AgradCdfNormal_ffd_336;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_337> AgradCdfNormal_ffd_337;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_338> AgradCdfNormal_ffd_338;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_339> AgradCdfNormal_ffd_339;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_340> AgradCdfNormal_ffd_340;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_341> AgradCdfNormal_ffd_341;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_342> AgradCdfNormal_ffd_342;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_343> AgradCdfNormal_ffd_343;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_344> AgradCdfNormal_ffd_344;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_345> AgradCdfNormal_ffd_345;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_346> AgradCdfNormal_ffd_346;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_347> AgradCdfNormal_ffd_347;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_348> AgradCdfNormal_ffd_348;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_349> AgradCdfNormal_ffd_349;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_350> AgradCdfNormal_ffd_350;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_351> AgradCdfNormal_ffd_351;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_352> AgradCdfNormal_ffd_352;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_353> AgradCdfNormal_ffd_353;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_354> AgradCdfNormal_ffd_354;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_355> AgradCdfNormal_ffd_355;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_356> AgradCdfNormal_ffd_356;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_357> AgradCdfNormal_ffd_357;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_358> AgradCdfNormal_ffd_358;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_359> AgradCdfNormal_ffd_359;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_360> AgradCdfNormal_ffd_360;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_361> AgradCdfNormal_ffd_361;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_362> AgradCdfNormal_ffd_362;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_363> AgradCdfNormal_ffd_363;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_364> AgradCdfNormal_ffd_364;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_365> AgradCdfNormal_ffd_365;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_366> AgradCdfNormal_ffd_366;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_367> AgradCdfNormal_ffd_367;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_368> AgradCdfNormal_ffd_368;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_369> AgradCdfNormal_ffd_369;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_370> AgradCdfNormal_ffd_370;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_371> AgradCdfNormal_ffd_371;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_372> AgradCdfNormal_ffd_372;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_373> AgradCdfNormal_ffd_373;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_374> AgradCdfNormal_ffd_374;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_375> AgradCdfNormal_ffd_375;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_376> AgradCdfNormal_ffd_376;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_377> AgradCdfNormal_ffd_377;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_378> AgradCdfNormal_ffd_378;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_379> AgradCdfNormal_ffd_379;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_380> AgradCdfNormal_ffd_380;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_381> AgradCdfNormal_ffd_381;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_382> AgradCdfNormal_ffd_382;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_383> AgradCdfNormal_ffd_383;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_384> AgradCdfNormal_ffd_384;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_385> AgradCdfNormal_ffd_385;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_386> AgradCdfNormal_ffd_386;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_387> AgradCdfNormal_ffd_387;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_388> AgradCdfNormal_ffd_388;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_389> AgradCdfNormal_ffd_389;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_390> AgradCdfNormal_ffd_390;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_391> AgradCdfNormal_ffd_391;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_392> AgradCdfNormal_ffd_392;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_393> AgradCdfNormal_ffd_393;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_394> AgradCdfNormal_ffd_394;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_395> AgradCdfNormal_ffd_395;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_396> AgradCdfNormal_ffd_396;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_397> AgradCdfNormal_ffd_397;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_398> AgradCdfNormal_ffd_398;
typedef boost::mpl::vector<AgradCdfNormal, type_ffd_399> AgradCdfNormal_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_300, AgradCdfTestFixture, AgradCdfNormal_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_301, AgradCdfTestFixture, AgradCdfNormal_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_302, AgradCdfTestFixture, AgradCdfNormal_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_303, AgradCdfTestFixture, AgradCdfNormal_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_304, AgradCdfTestFixture, AgradCdfNormal_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_305, AgradCdfTestFixture, AgradCdfNormal_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_306, AgradCdfTestFixture, AgradCdfNormal_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_307, AgradCdfTestFixture, AgradCdfNormal_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_308, AgradCdfTestFixture, AgradCdfNormal_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_309, AgradCdfTestFixture, AgradCdfNormal_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_310, AgradCdfTestFixture, AgradCdfNormal_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_311, AgradCdfTestFixture, AgradCdfNormal_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_312, AgradCdfTestFixture, AgradCdfNormal_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_313, AgradCdfTestFixture, AgradCdfNormal_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_314, AgradCdfTestFixture, AgradCdfNormal_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_315, AgradCdfTestFixture, AgradCdfNormal_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_316, AgradCdfTestFixture, AgradCdfNormal_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_317, AgradCdfTestFixture, AgradCdfNormal_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_318, AgradCdfTestFixture, AgradCdfNormal_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_319, AgradCdfTestFixture, AgradCdfNormal_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_320, AgradCdfTestFixture, AgradCdfNormal_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_321, AgradCdfTestFixture, AgradCdfNormal_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_322, AgradCdfTestFixture, AgradCdfNormal_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_323, AgradCdfTestFixture, AgradCdfNormal_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_324, AgradCdfTestFixture, AgradCdfNormal_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_325, AgradCdfTestFixture, AgradCdfNormal_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_326, AgradCdfTestFixture, AgradCdfNormal_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_327, AgradCdfTestFixture, AgradCdfNormal_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_328, AgradCdfTestFixture, AgradCdfNormal_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_329, AgradCdfTestFixture, AgradCdfNormal_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_330, AgradCdfTestFixture, AgradCdfNormal_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_331, AgradCdfTestFixture, AgradCdfNormal_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_332, AgradCdfTestFixture, AgradCdfNormal_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_333, AgradCdfTestFixture, AgradCdfNormal_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_334, AgradCdfTestFixture, AgradCdfNormal_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_335, AgradCdfTestFixture, AgradCdfNormal_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_336, AgradCdfTestFixture, AgradCdfNormal_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_337, AgradCdfTestFixture, AgradCdfNormal_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_338, AgradCdfTestFixture, AgradCdfNormal_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_339, AgradCdfTestFixture, AgradCdfNormal_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_340, AgradCdfTestFixture, AgradCdfNormal_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_341, AgradCdfTestFixture, AgradCdfNormal_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_342, AgradCdfTestFixture, AgradCdfNormal_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_343, AgradCdfTestFixture, AgradCdfNormal_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_344, AgradCdfTestFixture, AgradCdfNormal_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_345, AgradCdfTestFixture, AgradCdfNormal_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_346, AgradCdfTestFixture, AgradCdfNormal_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_347, AgradCdfTestFixture, AgradCdfNormal_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_348, AgradCdfTestFixture, AgradCdfNormal_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_349, AgradCdfTestFixture, AgradCdfNormal_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_350, AgradCdfTestFixture, AgradCdfNormal_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_351, AgradCdfTestFixture, AgradCdfNormal_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_352, AgradCdfTestFixture, AgradCdfNormal_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_353, AgradCdfTestFixture, AgradCdfNormal_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_354, AgradCdfTestFixture, AgradCdfNormal_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_355, AgradCdfTestFixture, AgradCdfNormal_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_356, AgradCdfTestFixture, AgradCdfNormal_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_357, AgradCdfTestFixture, AgradCdfNormal_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_358, AgradCdfTestFixture, AgradCdfNormal_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_359, AgradCdfTestFixture, AgradCdfNormal_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_360, AgradCdfTestFixture, AgradCdfNormal_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_361, AgradCdfTestFixture, AgradCdfNormal_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_362, AgradCdfTestFixture, AgradCdfNormal_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_363, AgradCdfTestFixture, AgradCdfNormal_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_364, AgradCdfTestFixture, AgradCdfNormal_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_365, AgradCdfTestFixture, AgradCdfNormal_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_366, AgradCdfTestFixture, AgradCdfNormal_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_367, AgradCdfTestFixture, AgradCdfNormal_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_368, AgradCdfTestFixture, AgradCdfNormal_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_369, AgradCdfTestFixture, AgradCdfNormal_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_370, AgradCdfTestFixture, AgradCdfNormal_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_371, AgradCdfTestFixture, AgradCdfNormal_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_372, AgradCdfTestFixture, AgradCdfNormal_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_373, AgradCdfTestFixture, AgradCdfNormal_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_374, AgradCdfTestFixture, AgradCdfNormal_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_375, AgradCdfTestFixture, AgradCdfNormal_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_376, AgradCdfTestFixture, AgradCdfNormal_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_377, AgradCdfTestFixture, AgradCdfNormal_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_378, AgradCdfTestFixture, AgradCdfNormal_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_379, AgradCdfTestFixture, AgradCdfNormal_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_380, AgradCdfTestFixture, AgradCdfNormal_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_381, AgradCdfTestFixture, AgradCdfNormal_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_382, AgradCdfTestFixture, AgradCdfNormal_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_383, AgradCdfTestFixture, AgradCdfNormal_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_384, AgradCdfTestFixture, AgradCdfNormal_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_385, AgradCdfTestFixture, AgradCdfNormal_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_386, AgradCdfTestFixture, AgradCdfNormal_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_387, AgradCdfTestFixture, AgradCdfNormal_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_388, AgradCdfTestFixture, AgradCdfNormal_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_389, AgradCdfTestFixture, AgradCdfNormal_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_390, AgradCdfTestFixture, AgradCdfNormal_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_391, AgradCdfTestFixture, AgradCdfNormal_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_392, AgradCdfTestFixture, AgradCdfNormal_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_393, AgradCdfTestFixture, AgradCdfNormal_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_394, AgradCdfTestFixture, AgradCdfNormal_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_395, AgradCdfTestFixture, AgradCdfNormal_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_396, AgradCdfTestFixture, AgradCdfNormal_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_397, AgradCdfTestFixture, AgradCdfNormal_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_398, AgradCdfTestFixture, AgradCdfNormal_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNormal_ffd_399, AgradCdfTestFixture, AgradCdfNormal_ffd_399);

