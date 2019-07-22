#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/scaled_inv_chi_square/scaled_inv_chi_square_cdf_test.hpp>

typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, fvar<double>, empty, empty, empty> type_fd_300;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty> type_fd_301;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_302;
typedef boost::mpl::vector<std::vector<fvar<double>>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_303;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_304;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_305;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_306;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_307;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_308;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_309;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_310;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_311;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_312;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_313;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_314;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_315;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_316;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_317;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_318;
typedef boost::mpl::vector<std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_319;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, double, empty, empty, empty> type_fd_320;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, std::vector<double>, empty, empty, empty> type_fd_321;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_322;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_323;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, fvar<double>, empty, empty, empty> type_fd_324;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, std::vector<fvar<double>>, empty, empty, empty> type_fd_325;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_326;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_327;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, double, empty, empty, empty> type_fd_328;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<double>, empty, empty, empty> type_fd_329;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_330;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_331;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, fvar<double>, empty, empty, empty> type_fd_332;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_333;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_334;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_335;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_336;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_337;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_338;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_339;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_340;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_341;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_342;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_343;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_344;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_345;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_346;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_347;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_348;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_349;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_350;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_351;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, double, empty, empty, empty> type_fd_352;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, std::vector<double>, empty, empty, empty> type_fd_353;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_354;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_355;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, fvar<double>, empty, empty, empty> type_fd_356;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_357;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_358;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_359;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, double, empty, empty, empty> type_fd_360;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<double>, empty, empty, empty> type_fd_361;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_362;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_363;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, fvar<double>, empty, empty, empty> type_fd_364;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty, empty> type_fd_365;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_366;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_367;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fd_368;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fd_369;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_370;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_371;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty, empty> type_fd_372;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty, empty> type_fd_373;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_374;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_375;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fd_376;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fd_377;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_378;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_379;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty, empty> type_fd_380;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty, empty> type_fd_381;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_382;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_383;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, double, empty, empty, empty> type_fd_384;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty, empty> type_fd_385;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_386;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_387;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, fvar<double>, empty, empty, empty> type_fd_388;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, std::vector<fvar<double>>, empty, empty, empty> type_fd_389;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_390;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_391;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_fd_392;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_fd_393;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_394;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_395;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, fvar<double>, empty, empty, empty> type_fd_396;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<double>>, empty, empty, empty> type_fd_397;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty, empty> type_fd_398;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty, empty> type_fd_399;

typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_300> AgradCdfScaledInvChiSquare_fd_300;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_301> AgradCdfScaledInvChiSquare_fd_301;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_302> AgradCdfScaledInvChiSquare_fd_302;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_303> AgradCdfScaledInvChiSquare_fd_303;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_304> AgradCdfScaledInvChiSquare_fd_304;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_305> AgradCdfScaledInvChiSquare_fd_305;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_306> AgradCdfScaledInvChiSquare_fd_306;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_307> AgradCdfScaledInvChiSquare_fd_307;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_308> AgradCdfScaledInvChiSquare_fd_308;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_309> AgradCdfScaledInvChiSquare_fd_309;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_310> AgradCdfScaledInvChiSquare_fd_310;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_311> AgradCdfScaledInvChiSquare_fd_311;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_312> AgradCdfScaledInvChiSquare_fd_312;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_313> AgradCdfScaledInvChiSquare_fd_313;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_314> AgradCdfScaledInvChiSquare_fd_314;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_315> AgradCdfScaledInvChiSquare_fd_315;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_316> AgradCdfScaledInvChiSquare_fd_316;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_317> AgradCdfScaledInvChiSquare_fd_317;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_318> AgradCdfScaledInvChiSquare_fd_318;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_319> AgradCdfScaledInvChiSquare_fd_319;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_320> AgradCdfScaledInvChiSquare_fd_320;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_321> AgradCdfScaledInvChiSquare_fd_321;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_322> AgradCdfScaledInvChiSquare_fd_322;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_323> AgradCdfScaledInvChiSquare_fd_323;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_324> AgradCdfScaledInvChiSquare_fd_324;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_325> AgradCdfScaledInvChiSquare_fd_325;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_326> AgradCdfScaledInvChiSquare_fd_326;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_327> AgradCdfScaledInvChiSquare_fd_327;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_328> AgradCdfScaledInvChiSquare_fd_328;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_329> AgradCdfScaledInvChiSquare_fd_329;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_330> AgradCdfScaledInvChiSquare_fd_330;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_331> AgradCdfScaledInvChiSquare_fd_331;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_332> AgradCdfScaledInvChiSquare_fd_332;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_333> AgradCdfScaledInvChiSquare_fd_333;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_334> AgradCdfScaledInvChiSquare_fd_334;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_335> AgradCdfScaledInvChiSquare_fd_335;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_336> AgradCdfScaledInvChiSquare_fd_336;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_337> AgradCdfScaledInvChiSquare_fd_337;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_338> AgradCdfScaledInvChiSquare_fd_338;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_339> AgradCdfScaledInvChiSquare_fd_339;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_340> AgradCdfScaledInvChiSquare_fd_340;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_341> AgradCdfScaledInvChiSquare_fd_341;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_342> AgradCdfScaledInvChiSquare_fd_342;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_343> AgradCdfScaledInvChiSquare_fd_343;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_344> AgradCdfScaledInvChiSquare_fd_344;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_345> AgradCdfScaledInvChiSquare_fd_345;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_346> AgradCdfScaledInvChiSquare_fd_346;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_347> AgradCdfScaledInvChiSquare_fd_347;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_348> AgradCdfScaledInvChiSquare_fd_348;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_349> AgradCdfScaledInvChiSquare_fd_349;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_350> AgradCdfScaledInvChiSquare_fd_350;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_351> AgradCdfScaledInvChiSquare_fd_351;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_352> AgradCdfScaledInvChiSquare_fd_352;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_353> AgradCdfScaledInvChiSquare_fd_353;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_354> AgradCdfScaledInvChiSquare_fd_354;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_355> AgradCdfScaledInvChiSquare_fd_355;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_356> AgradCdfScaledInvChiSquare_fd_356;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_357> AgradCdfScaledInvChiSquare_fd_357;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_358> AgradCdfScaledInvChiSquare_fd_358;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_359> AgradCdfScaledInvChiSquare_fd_359;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_360> AgradCdfScaledInvChiSquare_fd_360;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_361> AgradCdfScaledInvChiSquare_fd_361;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_362> AgradCdfScaledInvChiSquare_fd_362;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_363> AgradCdfScaledInvChiSquare_fd_363;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_364> AgradCdfScaledInvChiSquare_fd_364;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_365> AgradCdfScaledInvChiSquare_fd_365;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_366> AgradCdfScaledInvChiSquare_fd_366;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_367> AgradCdfScaledInvChiSquare_fd_367;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_368> AgradCdfScaledInvChiSquare_fd_368;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_369> AgradCdfScaledInvChiSquare_fd_369;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_370> AgradCdfScaledInvChiSquare_fd_370;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_371> AgradCdfScaledInvChiSquare_fd_371;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_372> AgradCdfScaledInvChiSquare_fd_372;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_373> AgradCdfScaledInvChiSquare_fd_373;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_374> AgradCdfScaledInvChiSquare_fd_374;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_375> AgradCdfScaledInvChiSquare_fd_375;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_376> AgradCdfScaledInvChiSquare_fd_376;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_377> AgradCdfScaledInvChiSquare_fd_377;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_378> AgradCdfScaledInvChiSquare_fd_378;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_379> AgradCdfScaledInvChiSquare_fd_379;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_380> AgradCdfScaledInvChiSquare_fd_380;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_381> AgradCdfScaledInvChiSquare_fd_381;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_382> AgradCdfScaledInvChiSquare_fd_382;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_383> AgradCdfScaledInvChiSquare_fd_383;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_384> AgradCdfScaledInvChiSquare_fd_384;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_385> AgradCdfScaledInvChiSquare_fd_385;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_386> AgradCdfScaledInvChiSquare_fd_386;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_387> AgradCdfScaledInvChiSquare_fd_387;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_388> AgradCdfScaledInvChiSquare_fd_388;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_389> AgradCdfScaledInvChiSquare_fd_389;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_390> AgradCdfScaledInvChiSquare_fd_390;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_391> AgradCdfScaledInvChiSquare_fd_391;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_392> AgradCdfScaledInvChiSquare_fd_392;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_393> AgradCdfScaledInvChiSquare_fd_393;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_394> AgradCdfScaledInvChiSquare_fd_394;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_395> AgradCdfScaledInvChiSquare_fd_395;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_396> AgradCdfScaledInvChiSquare_fd_396;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_397> AgradCdfScaledInvChiSquare_fd_397;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_398> AgradCdfScaledInvChiSquare_fd_398;
typedef boost::mpl::vector<AgradCdfScaledInvChiSquare, type_fd_399> AgradCdfScaledInvChiSquare_fd_399;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_300, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_300);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_301, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_301);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_302, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_302);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_303, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_303);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_304, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_304);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_305, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_305);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_306, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_306);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_307, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_307);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_308, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_308);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_309, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_309);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_310, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_310);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_311, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_311);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_312, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_312);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_313, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_313);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_314, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_314);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_315, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_315);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_316, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_316);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_317, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_317);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_318, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_318);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_319, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_319);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_320, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_320);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_321, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_321);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_322, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_322);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_323, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_323);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_324, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_324);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_325, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_325);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_326, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_326);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_327, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_327);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_328, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_328);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_329, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_329);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_330, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_330);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_331, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_331);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_332, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_332);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_333, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_333);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_334, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_334);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_335, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_335);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_336, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_336);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_337, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_337);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_338, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_338);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_339, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_339);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_340, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_340);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_341, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_341);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_342, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_342);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_343, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_343);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_344, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_344);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_345, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_345);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_346, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_346);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_347, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_347);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_348, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_348);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_349, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_349);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_350, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_350);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_351, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_351);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_352, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_352);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_353, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_353);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_354, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_354);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_355, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_355);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_356, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_356);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_357, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_357);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_358, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_358);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_359, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_359);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_360, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_360);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_361, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_361);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_362, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_362);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_363, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_363);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_364, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_364);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_365, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_365);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_366, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_366);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_367, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_367);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_368, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_368);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_369, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_369);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_370, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_370);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_371, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_371);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_372, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_372);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_373, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_373);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_374, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_374);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_375, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_375);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_376, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_376);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_377, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_377);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_378, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_378);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_379, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_379);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_380, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_380);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_381, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_381);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_382, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_382);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_383, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_383);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_384, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_384);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_385, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_385);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_386, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_386);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_387, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_387);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_388, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_388);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_389, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_389);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_390, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_390);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_391, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_391);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_392, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_392);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_393, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_393);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_394, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_394);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_395, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_395);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_396, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_396);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_397, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_397);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_398, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_398);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfScaledInvChiSquare_fd_399, AgradCdfTestFixture, AgradCdfScaledInvChiSquare_fd_399);

