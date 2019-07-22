#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/gumbel/gumbel_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_300> AgradCcdfLogGumbel_ffd_300;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_301> AgradCcdfLogGumbel_ffd_301;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_302> AgradCcdfLogGumbel_ffd_302;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_303> AgradCcdfLogGumbel_ffd_303;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_304> AgradCcdfLogGumbel_ffd_304;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_305> AgradCcdfLogGumbel_ffd_305;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_306> AgradCcdfLogGumbel_ffd_306;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_307> AgradCcdfLogGumbel_ffd_307;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_308> AgradCcdfLogGumbel_ffd_308;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_309> AgradCcdfLogGumbel_ffd_309;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_310> AgradCcdfLogGumbel_ffd_310;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_311> AgradCcdfLogGumbel_ffd_311;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_312> AgradCcdfLogGumbel_ffd_312;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_313> AgradCcdfLogGumbel_ffd_313;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_314> AgradCcdfLogGumbel_ffd_314;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_315> AgradCcdfLogGumbel_ffd_315;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_316> AgradCcdfLogGumbel_ffd_316;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_317> AgradCcdfLogGumbel_ffd_317;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_318> AgradCcdfLogGumbel_ffd_318;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_319> AgradCcdfLogGumbel_ffd_319;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_320> AgradCcdfLogGumbel_ffd_320;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_321> AgradCcdfLogGumbel_ffd_321;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_322> AgradCcdfLogGumbel_ffd_322;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_323> AgradCcdfLogGumbel_ffd_323;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_324> AgradCcdfLogGumbel_ffd_324;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_325> AgradCcdfLogGumbel_ffd_325;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_326> AgradCcdfLogGumbel_ffd_326;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_327> AgradCcdfLogGumbel_ffd_327;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_328> AgradCcdfLogGumbel_ffd_328;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_329> AgradCcdfLogGumbel_ffd_329;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_330> AgradCcdfLogGumbel_ffd_330;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_331> AgradCcdfLogGumbel_ffd_331;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_332> AgradCcdfLogGumbel_ffd_332;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_333> AgradCcdfLogGumbel_ffd_333;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_334> AgradCcdfLogGumbel_ffd_334;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_335> AgradCcdfLogGumbel_ffd_335;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_336> AgradCcdfLogGumbel_ffd_336;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_337> AgradCcdfLogGumbel_ffd_337;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_338> AgradCcdfLogGumbel_ffd_338;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_339> AgradCcdfLogGumbel_ffd_339;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_340> AgradCcdfLogGumbel_ffd_340;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_341> AgradCcdfLogGumbel_ffd_341;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_342> AgradCcdfLogGumbel_ffd_342;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_343> AgradCcdfLogGumbel_ffd_343;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_344> AgradCcdfLogGumbel_ffd_344;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_345> AgradCcdfLogGumbel_ffd_345;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_346> AgradCcdfLogGumbel_ffd_346;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_347> AgradCcdfLogGumbel_ffd_347;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_348> AgradCcdfLogGumbel_ffd_348;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_349> AgradCcdfLogGumbel_ffd_349;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_350> AgradCcdfLogGumbel_ffd_350;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_351> AgradCcdfLogGumbel_ffd_351;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_352> AgradCcdfLogGumbel_ffd_352;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_353> AgradCcdfLogGumbel_ffd_353;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_354> AgradCcdfLogGumbel_ffd_354;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_355> AgradCcdfLogGumbel_ffd_355;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_356> AgradCcdfLogGumbel_ffd_356;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_357> AgradCcdfLogGumbel_ffd_357;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_358> AgradCcdfLogGumbel_ffd_358;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_359> AgradCcdfLogGumbel_ffd_359;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_360> AgradCcdfLogGumbel_ffd_360;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_361> AgradCcdfLogGumbel_ffd_361;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_362> AgradCcdfLogGumbel_ffd_362;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_363> AgradCcdfLogGumbel_ffd_363;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_364> AgradCcdfLogGumbel_ffd_364;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_365> AgradCcdfLogGumbel_ffd_365;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_366> AgradCcdfLogGumbel_ffd_366;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_367> AgradCcdfLogGumbel_ffd_367;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_368> AgradCcdfLogGumbel_ffd_368;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_369> AgradCcdfLogGumbel_ffd_369;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_370> AgradCcdfLogGumbel_ffd_370;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_371> AgradCcdfLogGumbel_ffd_371;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_372> AgradCcdfLogGumbel_ffd_372;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_373> AgradCcdfLogGumbel_ffd_373;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_374> AgradCcdfLogGumbel_ffd_374;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_375> AgradCcdfLogGumbel_ffd_375;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_376> AgradCcdfLogGumbel_ffd_376;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_377> AgradCcdfLogGumbel_ffd_377;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_378> AgradCcdfLogGumbel_ffd_378;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_379> AgradCcdfLogGumbel_ffd_379;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_380> AgradCcdfLogGumbel_ffd_380;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_381> AgradCcdfLogGumbel_ffd_381;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_382> AgradCcdfLogGumbel_ffd_382;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_383> AgradCcdfLogGumbel_ffd_383;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_384> AgradCcdfLogGumbel_ffd_384;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_385> AgradCcdfLogGumbel_ffd_385;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_386> AgradCcdfLogGumbel_ffd_386;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_387> AgradCcdfLogGumbel_ffd_387;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_388> AgradCcdfLogGumbel_ffd_388;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_389> AgradCcdfLogGumbel_ffd_389;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_390> AgradCcdfLogGumbel_ffd_390;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_391> AgradCcdfLogGumbel_ffd_391;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_392> AgradCcdfLogGumbel_ffd_392;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_393> AgradCcdfLogGumbel_ffd_393;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_394> AgradCcdfLogGumbel_ffd_394;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_395> AgradCcdfLogGumbel_ffd_395;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_396> AgradCcdfLogGumbel_ffd_396;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_397> AgradCcdfLogGumbel_ffd_397;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_398> AgradCcdfLogGumbel_ffd_398;
typedef boost::mpl::vector<AgradCcdfLogGumbel, type_ffd_399> AgradCcdfLogGumbel_ffd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_300, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_301, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_302, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_303, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_304, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_305, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_306, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_307, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_308, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_309, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_310, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_311, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_312, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_313, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_314, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_315, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_316, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_317, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_318, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_319, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_320, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_321, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_322, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_323, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_324, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_325, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_326, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_327, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_328, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_329, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_330, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_331, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_332, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_333, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_334, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_335, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_336, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_337, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_338, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_339, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_340, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_341, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_342, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_343, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_344, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_345, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_346, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_347, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_348, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_349, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_350, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_351, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_352, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_353, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_354, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_355, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_356, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_357, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_358, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_359, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_360, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_361, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_362, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_363, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_364, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_365, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_366, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_367, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_368, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_369, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_370, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_371, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_372, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_373, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_374, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_375, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_376, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_377, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_378, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_379, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_380, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_381, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_382, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_383, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_384, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_385, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_386, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_387, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_388, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_389, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_390, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_391, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_392, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_393, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_394, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_395, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_396, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_397, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_398, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogGumbel_ffd_399, AgradCcdfLogTestFixture, AgradCcdfLogGumbel_ffd_399);

