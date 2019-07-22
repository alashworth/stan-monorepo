#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_ccdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, double, empty, empty> type_fv_600;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_601;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_602;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_603;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_604;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_605;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_606;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_607;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_608;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_609;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_610;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_611;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_612;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_613;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_614;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_615;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_616;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_617;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_618;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_619;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_620;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_621;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_622;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_623;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, fvar<var>, empty, empty> type_fv_624;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, std::vector<fvar<var>>, empty, empty> type_fv_625;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_626;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_627;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, fvar<var>, empty, empty> type_fv_628;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_629;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_630;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_631;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_632;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_633;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_634;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_635;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_636;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_637;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_638;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_639;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, double, empty, empty> type_fv_640;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, std::vector<double>, empty, empty> type_fv_641;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_642;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_643;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, fvar<var>, empty, empty> type_fv_644;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_645;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_646;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_647;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, double, empty, empty> type_fv_648;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_649;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_650;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_651;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_652;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_653;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_654;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_655;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_656;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_657;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_658;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_659;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_660;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_661;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_662;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_663;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_664;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_665;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_666;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_667;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_668;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_669;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_670;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_671;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, fvar<var>, empty, empty> type_fv_672;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, std::vector<fvar<var>>, empty, empty> type_fv_673;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_674;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_675;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, fvar<var>, empty, empty> type_fv_676;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<var>>, empty, empty> type_fv_677;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_678;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_679;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_680;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_681;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_682;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_683;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_684;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_685;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_686;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_687;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, double, empty, empty> type_fv_688;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, std::vector<double>, empty, empty> type_fv_689;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_690;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_691;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, fvar<var>, empty, empty> type_fv_692;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_693;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_694;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_695;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, double, empty, empty> type_fv_696;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_697;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_698;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_699;

typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_600> AgradCcdfLogBetaBinomial_fv_600;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_601> AgradCcdfLogBetaBinomial_fv_601;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_602> AgradCcdfLogBetaBinomial_fv_602;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_603> AgradCcdfLogBetaBinomial_fv_603;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_604> AgradCcdfLogBetaBinomial_fv_604;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_605> AgradCcdfLogBetaBinomial_fv_605;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_606> AgradCcdfLogBetaBinomial_fv_606;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_607> AgradCcdfLogBetaBinomial_fv_607;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_608> AgradCcdfLogBetaBinomial_fv_608;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_609> AgradCcdfLogBetaBinomial_fv_609;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_610> AgradCcdfLogBetaBinomial_fv_610;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_611> AgradCcdfLogBetaBinomial_fv_611;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_612> AgradCcdfLogBetaBinomial_fv_612;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_613> AgradCcdfLogBetaBinomial_fv_613;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_614> AgradCcdfLogBetaBinomial_fv_614;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_615> AgradCcdfLogBetaBinomial_fv_615;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_616> AgradCcdfLogBetaBinomial_fv_616;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_617> AgradCcdfLogBetaBinomial_fv_617;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_618> AgradCcdfLogBetaBinomial_fv_618;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_619> AgradCcdfLogBetaBinomial_fv_619;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_620> AgradCcdfLogBetaBinomial_fv_620;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_621> AgradCcdfLogBetaBinomial_fv_621;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_622> AgradCcdfLogBetaBinomial_fv_622;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_623> AgradCcdfLogBetaBinomial_fv_623;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_624> AgradCcdfLogBetaBinomial_fv_624;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_625> AgradCcdfLogBetaBinomial_fv_625;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_626> AgradCcdfLogBetaBinomial_fv_626;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_627> AgradCcdfLogBetaBinomial_fv_627;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_628> AgradCcdfLogBetaBinomial_fv_628;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_629> AgradCcdfLogBetaBinomial_fv_629;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_630> AgradCcdfLogBetaBinomial_fv_630;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_631> AgradCcdfLogBetaBinomial_fv_631;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_632> AgradCcdfLogBetaBinomial_fv_632;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_633> AgradCcdfLogBetaBinomial_fv_633;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_634> AgradCcdfLogBetaBinomial_fv_634;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_635> AgradCcdfLogBetaBinomial_fv_635;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_636> AgradCcdfLogBetaBinomial_fv_636;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_637> AgradCcdfLogBetaBinomial_fv_637;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_638> AgradCcdfLogBetaBinomial_fv_638;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_639> AgradCcdfLogBetaBinomial_fv_639;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_640> AgradCcdfLogBetaBinomial_fv_640;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_641> AgradCcdfLogBetaBinomial_fv_641;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_642> AgradCcdfLogBetaBinomial_fv_642;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_643> AgradCcdfLogBetaBinomial_fv_643;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_644> AgradCcdfLogBetaBinomial_fv_644;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_645> AgradCcdfLogBetaBinomial_fv_645;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_646> AgradCcdfLogBetaBinomial_fv_646;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_647> AgradCcdfLogBetaBinomial_fv_647;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_648> AgradCcdfLogBetaBinomial_fv_648;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_649> AgradCcdfLogBetaBinomial_fv_649;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_650> AgradCcdfLogBetaBinomial_fv_650;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_651> AgradCcdfLogBetaBinomial_fv_651;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_652> AgradCcdfLogBetaBinomial_fv_652;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_653> AgradCcdfLogBetaBinomial_fv_653;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_654> AgradCcdfLogBetaBinomial_fv_654;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_655> AgradCcdfLogBetaBinomial_fv_655;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_656> AgradCcdfLogBetaBinomial_fv_656;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_657> AgradCcdfLogBetaBinomial_fv_657;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_658> AgradCcdfLogBetaBinomial_fv_658;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_659> AgradCcdfLogBetaBinomial_fv_659;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_660> AgradCcdfLogBetaBinomial_fv_660;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_661> AgradCcdfLogBetaBinomial_fv_661;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_662> AgradCcdfLogBetaBinomial_fv_662;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_663> AgradCcdfLogBetaBinomial_fv_663;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_664> AgradCcdfLogBetaBinomial_fv_664;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_665> AgradCcdfLogBetaBinomial_fv_665;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_666> AgradCcdfLogBetaBinomial_fv_666;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_667> AgradCcdfLogBetaBinomial_fv_667;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_668> AgradCcdfLogBetaBinomial_fv_668;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_669> AgradCcdfLogBetaBinomial_fv_669;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_670> AgradCcdfLogBetaBinomial_fv_670;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_671> AgradCcdfLogBetaBinomial_fv_671;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_672> AgradCcdfLogBetaBinomial_fv_672;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_673> AgradCcdfLogBetaBinomial_fv_673;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_674> AgradCcdfLogBetaBinomial_fv_674;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_675> AgradCcdfLogBetaBinomial_fv_675;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_676> AgradCcdfLogBetaBinomial_fv_676;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_677> AgradCcdfLogBetaBinomial_fv_677;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_678> AgradCcdfLogBetaBinomial_fv_678;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_679> AgradCcdfLogBetaBinomial_fv_679;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_680> AgradCcdfLogBetaBinomial_fv_680;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_681> AgradCcdfLogBetaBinomial_fv_681;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_682> AgradCcdfLogBetaBinomial_fv_682;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_683> AgradCcdfLogBetaBinomial_fv_683;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_684> AgradCcdfLogBetaBinomial_fv_684;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_685> AgradCcdfLogBetaBinomial_fv_685;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_686> AgradCcdfLogBetaBinomial_fv_686;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_687> AgradCcdfLogBetaBinomial_fv_687;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_688> AgradCcdfLogBetaBinomial_fv_688;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_689> AgradCcdfLogBetaBinomial_fv_689;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_690> AgradCcdfLogBetaBinomial_fv_690;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_691> AgradCcdfLogBetaBinomial_fv_691;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_692> AgradCcdfLogBetaBinomial_fv_692;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_693> AgradCcdfLogBetaBinomial_fv_693;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_694> AgradCcdfLogBetaBinomial_fv_694;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_695> AgradCcdfLogBetaBinomial_fv_695;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_696> AgradCcdfLogBetaBinomial_fv_696;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_697> AgradCcdfLogBetaBinomial_fv_697;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_698> AgradCcdfLogBetaBinomial_fv_698;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_fv_699> AgradCcdfLogBetaBinomial_fv_699;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_600, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_600);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_601, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_601);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_602, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_602);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_603, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_603);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_604, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_604);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_605, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_605);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_606, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_606);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_607, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_607);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_608, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_608);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_609, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_609);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_610, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_610);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_611, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_611);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_612, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_612);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_613, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_613);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_614, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_614);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_615, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_615);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_616, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_616);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_617, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_617);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_618, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_618);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_619, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_619);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_620, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_620);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_621, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_621);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_622, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_622);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_623, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_623);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_624, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_624);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_625, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_625);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_626, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_626);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_627, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_627);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_628, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_628);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_629, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_629);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_630, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_630);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_631, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_631);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_632, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_632);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_633, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_633);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_634, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_634);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_635, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_635);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_636, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_636);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_637, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_637);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_638, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_638);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_639, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_639);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_640, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_640);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_641, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_641);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_642, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_642);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_643, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_643);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_644, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_644);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_645, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_645);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_646, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_646);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_647, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_647);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_648, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_648);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_649, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_649);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_650, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_650);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_651, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_651);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_652, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_652);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_653, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_653);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_654, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_654);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_655, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_655);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_656, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_656);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_657, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_657);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_658, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_658);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_659, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_659);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_660, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_660);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_661, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_661);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_662, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_662);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_663, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_663);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_664, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_664);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_665, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_665);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_666, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_666);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_667, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_667);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_668, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_668);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_669, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_669);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_670, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_670);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_671, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_671);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_672, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_672);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_673, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_673);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_674, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_674);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_675, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_675);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_676, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_676);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_677, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_677);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_678, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_678);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_679, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_679);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_680, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_680);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_681, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_681);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_682, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_682);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_683, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_683);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_684, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_684);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_685, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_685);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_686, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_686);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_687, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_687);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_688, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_688);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_689, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_689);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_690, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_690);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_691, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_691);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_692, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_692);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_693, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_693);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_694, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_694);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_695, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_695);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_696, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_696);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_697, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_697);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_698, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_698);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_fv_699, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_fv_699);

