#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, double, empty, empty> type_fd_600;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_601;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_602;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_603;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_604;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_605;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_606;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_607;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_608;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_609;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_610;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_611;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_612;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_613;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_614;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_615;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_616;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_617;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_618;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_619;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_620;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_621;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_622;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_623;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, fvar<double>, empty, empty> type_fd_624;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, std::vector<fvar<double>>, empty, empty> type_fd_625;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_626;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_627;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, fvar<double>, empty, empty> type_fd_628;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_629;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_630;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_631;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_632;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_633;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_634;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_635;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_636;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_637;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_638;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_639;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, double, empty, empty> type_fd_640;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, std::vector<double>, empty, empty> type_fd_641;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_642;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_643;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, fvar<double>, empty, empty> type_fd_644;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_645;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_646;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_647;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, double, empty, empty> type_fd_648;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_649;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_650;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_651;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_652;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_653;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_654;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_655;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_656;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_657;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_658;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_659;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_660;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_661;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_662;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_663;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_664;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_665;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_666;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_667;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_668;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_669;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_670;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_671;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, fvar<double>, empty, empty> type_fd_672;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, std::vector<fvar<double>>, empty, empty> type_fd_673;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_674;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_675;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, fvar<double>, empty, empty> type_fd_676;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_677;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_678;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_679;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_680;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_681;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_682;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_683;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_684;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_685;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_686;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_687;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, double, empty, empty> type_fd_688;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, std::vector<double>, empty, empty> type_fd_689;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_690;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_691;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, fvar<double>, empty, empty> type_fd_692;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_693;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_694;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_695;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, double, empty, empty> type_fd_696;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_697;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_698;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_699;

typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_600> AgradCdfLogBetaBinomial_fd_600;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_601> AgradCdfLogBetaBinomial_fd_601;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_602> AgradCdfLogBetaBinomial_fd_602;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_603> AgradCdfLogBetaBinomial_fd_603;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_604> AgradCdfLogBetaBinomial_fd_604;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_605> AgradCdfLogBetaBinomial_fd_605;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_606> AgradCdfLogBetaBinomial_fd_606;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_607> AgradCdfLogBetaBinomial_fd_607;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_608> AgradCdfLogBetaBinomial_fd_608;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_609> AgradCdfLogBetaBinomial_fd_609;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_610> AgradCdfLogBetaBinomial_fd_610;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_611> AgradCdfLogBetaBinomial_fd_611;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_612> AgradCdfLogBetaBinomial_fd_612;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_613> AgradCdfLogBetaBinomial_fd_613;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_614> AgradCdfLogBetaBinomial_fd_614;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_615> AgradCdfLogBetaBinomial_fd_615;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_616> AgradCdfLogBetaBinomial_fd_616;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_617> AgradCdfLogBetaBinomial_fd_617;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_618> AgradCdfLogBetaBinomial_fd_618;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_619> AgradCdfLogBetaBinomial_fd_619;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_620> AgradCdfLogBetaBinomial_fd_620;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_621> AgradCdfLogBetaBinomial_fd_621;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_622> AgradCdfLogBetaBinomial_fd_622;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_623> AgradCdfLogBetaBinomial_fd_623;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_624> AgradCdfLogBetaBinomial_fd_624;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_625> AgradCdfLogBetaBinomial_fd_625;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_626> AgradCdfLogBetaBinomial_fd_626;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_627> AgradCdfLogBetaBinomial_fd_627;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_628> AgradCdfLogBetaBinomial_fd_628;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_629> AgradCdfLogBetaBinomial_fd_629;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_630> AgradCdfLogBetaBinomial_fd_630;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_631> AgradCdfLogBetaBinomial_fd_631;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_632> AgradCdfLogBetaBinomial_fd_632;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_633> AgradCdfLogBetaBinomial_fd_633;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_634> AgradCdfLogBetaBinomial_fd_634;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_635> AgradCdfLogBetaBinomial_fd_635;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_636> AgradCdfLogBetaBinomial_fd_636;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_637> AgradCdfLogBetaBinomial_fd_637;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_638> AgradCdfLogBetaBinomial_fd_638;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_639> AgradCdfLogBetaBinomial_fd_639;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_640> AgradCdfLogBetaBinomial_fd_640;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_641> AgradCdfLogBetaBinomial_fd_641;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_642> AgradCdfLogBetaBinomial_fd_642;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_643> AgradCdfLogBetaBinomial_fd_643;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_644> AgradCdfLogBetaBinomial_fd_644;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_645> AgradCdfLogBetaBinomial_fd_645;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_646> AgradCdfLogBetaBinomial_fd_646;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_647> AgradCdfLogBetaBinomial_fd_647;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_648> AgradCdfLogBetaBinomial_fd_648;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_649> AgradCdfLogBetaBinomial_fd_649;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_650> AgradCdfLogBetaBinomial_fd_650;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_651> AgradCdfLogBetaBinomial_fd_651;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_652> AgradCdfLogBetaBinomial_fd_652;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_653> AgradCdfLogBetaBinomial_fd_653;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_654> AgradCdfLogBetaBinomial_fd_654;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_655> AgradCdfLogBetaBinomial_fd_655;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_656> AgradCdfLogBetaBinomial_fd_656;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_657> AgradCdfLogBetaBinomial_fd_657;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_658> AgradCdfLogBetaBinomial_fd_658;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_659> AgradCdfLogBetaBinomial_fd_659;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_660> AgradCdfLogBetaBinomial_fd_660;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_661> AgradCdfLogBetaBinomial_fd_661;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_662> AgradCdfLogBetaBinomial_fd_662;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_663> AgradCdfLogBetaBinomial_fd_663;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_664> AgradCdfLogBetaBinomial_fd_664;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_665> AgradCdfLogBetaBinomial_fd_665;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_666> AgradCdfLogBetaBinomial_fd_666;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_667> AgradCdfLogBetaBinomial_fd_667;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_668> AgradCdfLogBetaBinomial_fd_668;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_669> AgradCdfLogBetaBinomial_fd_669;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_670> AgradCdfLogBetaBinomial_fd_670;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_671> AgradCdfLogBetaBinomial_fd_671;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_672> AgradCdfLogBetaBinomial_fd_672;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_673> AgradCdfLogBetaBinomial_fd_673;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_674> AgradCdfLogBetaBinomial_fd_674;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_675> AgradCdfLogBetaBinomial_fd_675;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_676> AgradCdfLogBetaBinomial_fd_676;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_677> AgradCdfLogBetaBinomial_fd_677;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_678> AgradCdfLogBetaBinomial_fd_678;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_679> AgradCdfLogBetaBinomial_fd_679;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_680> AgradCdfLogBetaBinomial_fd_680;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_681> AgradCdfLogBetaBinomial_fd_681;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_682> AgradCdfLogBetaBinomial_fd_682;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_683> AgradCdfLogBetaBinomial_fd_683;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_684> AgradCdfLogBetaBinomial_fd_684;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_685> AgradCdfLogBetaBinomial_fd_685;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_686> AgradCdfLogBetaBinomial_fd_686;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_687> AgradCdfLogBetaBinomial_fd_687;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_688> AgradCdfLogBetaBinomial_fd_688;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_689> AgradCdfLogBetaBinomial_fd_689;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_690> AgradCdfLogBetaBinomial_fd_690;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_691> AgradCdfLogBetaBinomial_fd_691;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_692> AgradCdfLogBetaBinomial_fd_692;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_693> AgradCdfLogBetaBinomial_fd_693;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_694> AgradCdfLogBetaBinomial_fd_694;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_695> AgradCdfLogBetaBinomial_fd_695;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_696> AgradCdfLogBetaBinomial_fd_696;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_697> AgradCdfLogBetaBinomial_fd_697;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_698> AgradCdfLogBetaBinomial_fd_698;
typedef boost::mpl::vector<AgradCdfLogBetaBinomial, type_fd_699> AgradCdfLogBetaBinomial_fd_699;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_600, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_600);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_601, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_601);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_602, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_602);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_603, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_603);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_604, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_604);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_605, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_605);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_606, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_606);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_607, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_607);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_608, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_608);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_609, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_609);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_610, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_610);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_611, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_611);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_612, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_612);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_613, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_613);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_614, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_614);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_615, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_615);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_616, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_616);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_617, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_617);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_618, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_618);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_619, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_619);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_620, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_620);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_621, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_621);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_622, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_622);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_623, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_623);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_624, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_624);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_625, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_625);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_626, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_626);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_627, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_627);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_628, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_628);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_629, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_629);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_630, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_630);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_631, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_631);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_632, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_632);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_633, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_633);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_634, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_634);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_635, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_635);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_636, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_636);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_637, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_637);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_638, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_638);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_639, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_639);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_640, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_640);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_641, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_641);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_642, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_642);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_643, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_643);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_644, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_644);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_645, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_645);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_646, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_646);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_647, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_647);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_648, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_648);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_649, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_649);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_650, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_650);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_651, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_651);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_652, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_652);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_653, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_653);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_654, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_654);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_655, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_655);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_656, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_656);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_657, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_657);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_658, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_658);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_659, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_659);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_660, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_660);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_661, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_661);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_662, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_662);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_663, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_663);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_664, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_664);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_665, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_665);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_666, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_666);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_667, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_667);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_668, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_668);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_669, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_669);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_670, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_670);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_671, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_671);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_672, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_672);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_673, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_673);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_674, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_674);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_675, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_675);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_676, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_676);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_677, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_677);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_678, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_678);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_679, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_679);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_680, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_680);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_681, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_681);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_682, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_682);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_683, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_683);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_684, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_684);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_685, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_685);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_686, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_686);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_687, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_687);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_688, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_688);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_689, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_689);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_690, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_690);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_691, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_691);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_692, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_692);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_693, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_693);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_694, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_694);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_695, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_695);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_696, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_696);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_697, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_697);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_698, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_698);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBetaBinomial_fd_699, AgradCdfLogTestFixture, AgradCdfLogBetaBinomial_fd_699);

