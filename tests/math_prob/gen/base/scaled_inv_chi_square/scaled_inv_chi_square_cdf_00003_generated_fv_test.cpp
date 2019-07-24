#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/scaled_inv_chi_square/scaled_inv_chi_square_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_300> AgradCdfScaledInvChiSquare_fv_300;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_301> AgradCdfScaledInvChiSquare_fv_301;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_302> AgradCdfScaledInvChiSquare_fv_302;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_303> AgradCdfScaledInvChiSquare_fv_303;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_304> AgradCdfScaledInvChiSquare_fv_304;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_305> AgradCdfScaledInvChiSquare_fv_305;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_306> AgradCdfScaledInvChiSquare_fv_306;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_307> AgradCdfScaledInvChiSquare_fv_307;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_308> AgradCdfScaledInvChiSquare_fv_308;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_309> AgradCdfScaledInvChiSquare_fv_309;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_310> AgradCdfScaledInvChiSquare_fv_310;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_311> AgradCdfScaledInvChiSquare_fv_311;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_312> AgradCdfScaledInvChiSquare_fv_312;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_313> AgradCdfScaledInvChiSquare_fv_313;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_314> AgradCdfScaledInvChiSquare_fv_314;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_315> AgradCdfScaledInvChiSquare_fv_315;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_316> AgradCdfScaledInvChiSquare_fv_316;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_317> AgradCdfScaledInvChiSquare_fv_317;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_318> AgradCdfScaledInvChiSquare_fv_318;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_319> AgradCdfScaledInvChiSquare_fv_319;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_320> AgradCdfScaledInvChiSquare_fv_320;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_321> AgradCdfScaledInvChiSquare_fv_321;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_322> AgradCdfScaledInvChiSquare_fv_322;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_323> AgradCdfScaledInvChiSquare_fv_323;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_324> AgradCdfScaledInvChiSquare_fv_324;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_325> AgradCdfScaledInvChiSquare_fv_325;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_326> AgradCdfScaledInvChiSquare_fv_326;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_327> AgradCdfScaledInvChiSquare_fv_327;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_328> AgradCdfScaledInvChiSquare_fv_328;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_329> AgradCdfScaledInvChiSquare_fv_329;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_330> AgradCdfScaledInvChiSquare_fv_330;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_331> AgradCdfScaledInvChiSquare_fv_331;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_332> AgradCdfScaledInvChiSquare_fv_332;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_333> AgradCdfScaledInvChiSquare_fv_333;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_334> AgradCdfScaledInvChiSquare_fv_334;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_335> AgradCdfScaledInvChiSquare_fv_335;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_336> AgradCdfScaledInvChiSquare_fv_336;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_337> AgradCdfScaledInvChiSquare_fv_337;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_338> AgradCdfScaledInvChiSquare_fv_338;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_339> AgradCdfScaledInvChiSquare_fv_339;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_340> AgradCdfScaledInvChiSquare_fv_340;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_341> AgradCdfScaledInvChiSquare_fv_341;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_342> AgradCdfScaledInvChiSquare_fv_342;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_343> AgradCdfScaledInvChiSquare_fv_343;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_344> AgradCdfScaledInvChiSquare_fv_344;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_345> AgradCdfScaledInvChiSquare_fv_345;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_346> AgradCdfScaledInvChiSquare_fv_346;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_347> AgradCdfScaledInvChiSquare_fv_347;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_348> AgradCdfScaledInvChiSquare_fv_348;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_349> AgradCdfScaledInvChiSquare_fv_349;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_350> AgradCdfScaledInvChiSquare_fv_350;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_351> AgradCdfScaledInvChiSquare_fv_351;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_352> AgradCdfScaledInvChiSquare_fv_352;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_353> AgradCdfScaledInvChiSquare_fv_353;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_354> AgradCdfScaledInvChiSquare_fv_354;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_355> AgradCdfScaledInvChiSquare_fv_355;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_356> AgradCdfScaledInvChiSquare_fv_356;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_357> AgradCdfScaledInvChiSquare_fv_357;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_358> AgradCdfScaledInvChiSquare_fv_358;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_359> AgradCdfScaledInvChiSquare_fv_359;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_360> AgradCdfScaledInvChiSquare_fv_360;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_361> AgradCdfScaledInvChiSquare_fv_361;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_362> AgradCdfScaledInvChiSquare_fv_362;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_363> AgradCdfScaledInvChiSquare_fv_363;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_364> AgradCdfScaledInvChiSquare_fv_364;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_365> AgradCdfScaledInvChiSquare_fv_365;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_366> AgradCdfScaledInvChiSquare_fv_366;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_367> AgradCdfScaledInvChiSquare_fv_367;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_368> AgradCdfScaledInvChiSquare_fv_368;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_369> AgradCdfScaledInvChiSquare_fv_369;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_370> AgradCdfScaledInvChiSquare_fv_370;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_371> AgradCdfScaledInvChiSquare_fv_371;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_372> AgradCdfScaledInvChiSquare_fv_372;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_373> AgradCdfScaledInvChiSquare_fv_373;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_374> AgradCdfScaledInvChiSquare_fv_374;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_375> AgradCdfScaledInvChiSquare_fv_375;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_376> AgradCdfScaledInvChiSquare_fv_376;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_377> AgradCdfScaledInvChiSquare_fv_377;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_378> AgradCdfScaledInvChiSquare_fv_378;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_379> AgradCdfScaledInvChiSquare_fv_379;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_380> AgradCdfScaledInvChiSquare_fv_380;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_381> AgradCdfScaledInvChiSquare_fv_381;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_382> AgradCdfScaledInvChiSquare_fv_382;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_383> AgradCdfScaledInvChiSquare_fv_383;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_384> AgradCdfScaledInvChiSquare_fv_384;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_385> AgradCdfScaledInvChiSquare_fv_385;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_386> AgradCdfScaledInvChiSquare_fv_386;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_387> AgradCdfScaledInvChiSquare_fv_387;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_388> AgradCdfScaledInvChiSquare_fv_388;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_389> AgradCdfScaledInvChiSquare_fv_389;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_390> AgradCdfScaledInvChiSquare_fv_390;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_391> AgradCdfScaledInvChiSquare_fv_391;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_392> AgradCdfScaledInvChiSquare_fv_392;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_393> AgradCdfScaledInvChiSquare_fv_393;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_394> AgradCdfScaledInvChiSquare_fv_394;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_395> AgradCdfScaledInvChiSquare_fv_395;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_396> AgradCdfScaledInvChiSquare_fv_396;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_397> AgradCdfScaledInvChiSquare_fv_397;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_398> AgradCdfScaledInvChiSquare_fv_398;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fv_399> AgradCdfScaledInvChiSquare_fv_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_300, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_301, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_302, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_303, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_304, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_305, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_306, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_307, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_308, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_309, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_310, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_311, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_312, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_313, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_314, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_315, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_316, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_317, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_318, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_319, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_320, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_321, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_322, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_323, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_324, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_325, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_326, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_327, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_328, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_329, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_330, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_331, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_332, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_333, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_334, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_335, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_336, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_337, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_338, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_339, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_340, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_341, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_342, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_343, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_344, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_345, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_346, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_347, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_348, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_349, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_350, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_351, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_352, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_353, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_354, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_355, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_356, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_357, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_358, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_359, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_360, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_361, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_362, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_363, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_364, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_365, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_366, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_367, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_368, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_369, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_370, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_371, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_372, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_373, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_374, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_375, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_376, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_377, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_378, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_379, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_380, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_381, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_382, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_383, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_384, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_385, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_386, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_387, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_388, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_389, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_390, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_391, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_392, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_393, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_394, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_395, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_396, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_397, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_398, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fv_399, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fv_399);
