#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/frechet/frechet_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_300> AgradCcdfLogFrechet_ffd_300;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_301> AgradCcdfLogFrechet_ffd_301;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_302> AgradCcdfLogFrechet_ffd_302;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_303> AgradCcdfLogFrechet_ffd_303;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_304> AgradCcdfLogFrechet_ffd_304;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_305> AgradCcdfLogFrechet_ffd_305;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_306> AgradCcdfLogFrechet_ffd_306;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_307> AgradCcdfLogFrechet_ffd_307;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_308> AgradCcdfLogFrechet_ffd_308;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_309> AgradCcdfLogFrechet_ffd_309;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_310> AgradCcdfLogFrechet_ffd_310;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_311> AgradCcdfLogFrechet_ffd_311;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_312> AgradCcdfLogFrechet_ffd_312;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_313> AgradCcdfLogFrechet_ffd_313;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_314> AgradCcdfLogFrechet_ffd_314;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_315> AgradCcdfLogFrechet_ffd_315;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_316> AgradCcdfLogFrechet_ffd_316;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_317> AgradCcdfLogFrechet_ffd_317;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_318> AgradCcdfLogFrechet_ffd_318;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_319> AgradCcdfLogFrechet_ffd_319;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_320> AgradCcdfLogFrechet_ffd_320;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_321> AgradCcdfLogFrechet_ffd_321;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_322> AgradCcdfLogFrechet_ffd_322;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_323> AgradCcdfLogFrechet_ffd_323;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_324> AgradCcdfLogFrechet_ffd_324;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_325> AgradCcdfLogFrechet_ffd_325;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_326> AgradCcdfLogFrechet_ffd_326;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_327> AgradCcdfLogFrechet_ffd_327;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_328> AgradCcdfLogFrechet_ffd_328;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_329> AgradCcdfLogFrechet_ffd_329;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_330> AgradCcdfLogFrechet_ffd_330;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_331> AgradCcdfLogFrechet_ffd_331;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_332> AgradCcdfLogFrechet_ffd_332;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_333> AgradCcdfLogFrechet_ffd_333;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_334> AgradCcdfLogFrechet_ffd_334;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_335> AgradCcdfLogFrechet_ffd_335;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_336> AgradCcdfLogFrechet_ffd_336;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_337> AgradCcdfLogFrechet_ffd_337;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_338> AgradCcdfLogFrechet_ffd_338;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_339> AgradCcdfLogFrechet_ffd_339;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_340> AgradCcdfLogFrechet_ffd_340;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_341> AgradCcdfLogFrechet_ffd_341;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_342> AgradCcdfLogFrechet_ffd_342;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_343> AgradCcdfLogFrechet_ffd_343;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_344> AgradCcdfLogFrechet_ffd_344;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_345> AgradCcdfLogFrechet_ffd_345;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_346> AgradCcdfLogFrechet_ffd_346;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_347> AgradCcdfLogFrechet_ffd_347;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_348> AgradCcdfLogFrechet_ffd_348;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_349> AgradCcdfLogFrechet_ffd_349;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_350> AgradCcdfLogFrechet_ffd_350;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_351> AgradCcdfLogFrechet_ffd_351;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_352> AgradCcdfLogFrechet_ffd_352;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_353> AgradCcdfLogFrechet_ffd_353;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_354> AgradCcdfLogFrechet_ffd_354;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_355> AgradCcdfLogFrechet_ffd_355;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_356> AgradCcdfLogFrechet_ffd_356;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_357> AgradCcdfLogFrechet_ffd_357;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_358> AgradCcdfLogFrechet_ffd_358;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_359> AgradCcdfLogFrechet_ffd_359;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_360> AgradCcdfLogFrechet_ffd_360;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_361> AgradCcdfLogFrechet_ffd_361;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_362> AgradCcdfLogFrechet_ffd_362;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_363> AgradCcdfLogFrechet_ffd_363;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_364> AgradCcdfLogFrechet_ffd_364;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_365> AgradCcdfLogFrechet_ffd_365;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_366> AgradCcdfLogFrechet_ffd_366;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_367> AgradCcdfLogFrechet_ffd_367;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_368> AgradCcdfLogFrechet_ffd_368;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_369> AgradCcdfLogFrechet_ffd_369;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_370> AgradCcdfLogFrechet_ffd_370;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_371> AgradCcdfLogFrechet_ffd_371;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_372> AgradCcdfLogFrechet_ffd_372;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_373> AgradCcdfLogFrechet_ffd_373;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_374> AgradCcdfLogFrechet_ffd_374;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_375> AgradCcdfLogFrechet_ffd_375;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_376> AgradCcdfLogFrechet_ffd_376;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_377> AgradCcdfLogFrechet_ffd_377;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_378> AgradCcdfLogFrechet_ffd_378;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_379> AgradCcdfLogFrechet_ffd_379;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_380> AgradCcdfLogFrechet_ffd_380;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_381> AgradCcdfLogFrechet_ffd_381;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_382> AgradCcdfLogFrechet_ffd_382;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_383> AgradCcdfLogFrechet_ffd_383;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_384> AgradCcdfLogFrechet_ffd_384;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_385> AgradCcdfLogFrechet_ffd_385;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_386> AgradCcdfLogFrechet_ffd_386;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_387> AgradCcdfLogFrechet_ffd_387;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_388> AgradCcdfLogFrechet_ffd_388;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_389> AgradCcdfLogFrechet_ffd_389;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_390> AgradCcdfLogFrechet_ffd_390;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_391> AgradCcdfLogFrechet_ffd_391;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_392> AgradCcdfLogFrechet_ffd_392;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_393> AgradCcdfLogFrechet_ffd_393;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_394> AgradCcdfLogFrechet_ffd_394;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_395> AgradCcdfLogFrechet_ffd_395;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_396> AgradCcdfLogFrechet_ffd_396;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_397> AgradCcdfLogFrechet_ffd_397;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_398> AgradCcdfLogFrechet_ffd_398;
typedef boost::mpl::vector<AgradCcdfLogFrechet, type_ffd_399> AgradCcdfLogFrechet_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_300, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_301, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_302, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_303, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_304, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_305, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_306, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_307, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_308, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_309, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_310, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_311, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_312, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_313, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_314, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_315, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_316, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_317, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_318, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_319, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_320, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_321, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_322, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_323, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_324, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_325, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_326, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_327, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_328, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_329, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_330, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_331, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_332, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_333, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_334, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_335, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_336, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_337, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_338, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_339, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_340, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_341, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_342, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_343, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_344, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_345, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_346, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_347, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_348, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_349, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_350, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_351, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_352, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_353, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_354, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_355, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_356, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_357, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_358, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_359, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_360, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_361, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_362, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_363, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_364, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_365, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_366, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_367, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_368, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_369, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_370, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_371, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_372, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_373, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_374, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_375, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_376, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_377, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_378, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_379, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_380, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_381, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_382, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_383, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_384, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_385, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_386, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_387, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_388, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_389, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_390, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_391, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_392, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_393, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_394, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_395, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_396, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_397, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_398, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogFrechet_ffd_399, AgradCcdfLogTestFixture, AgradCcdfLogFrechet_ffd_399);

