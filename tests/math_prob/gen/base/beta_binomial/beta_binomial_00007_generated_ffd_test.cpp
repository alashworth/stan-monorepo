#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty> type_ffd_700;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_701;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_702;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_703;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty> type_ffd_704;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_ffd_705;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_706;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_707;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty> type_ffd_708;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_709;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_710;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_711;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty> type_ffd_712;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_ffd_713;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_714;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_715;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty> type_ffd_716;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_717;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_718;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_719;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, fvar<fvar<double> >, empty, empty> type_ffd_720;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_721;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_722;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_723;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, fvar<fvar<double> >, empty, empty> type_ffd_724;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_725;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_726;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_727;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty> type_ffd_728;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_729;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_730;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_731;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty> type_ffd_732;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_733;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_734;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_735;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, double, empty, empty> type_ffd_736;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, std::vector<double>, empty, empty> type_ffd_737;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_738;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_739;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, fvar<fvar<double> >, empty, empty> type_ffd_740;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_741;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_742;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_743;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, double, empty, empty> type_ffd_744;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, std::vector<double>, empty, empty> type_ffd_745;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_746;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_747;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty> type_ffd_748;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_749;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_750;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_751;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty> type_ffd_752;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_ffd_753;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_754;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_755;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty> type_ffd_756;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_757;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_758;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_759;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty> type_ffd_760;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_ffd_761;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_762;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_763;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty> type_ffd_764;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_765;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_766;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_767;

typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_700> AgradDistributionsBetaBinomial_ffd_700;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_701> AgradDistributionsBetaBinomial_ffd_701;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_702> AgradDistributionsBetaBinomial_ffd_702;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_703> AgradDistributionsBetaBinomial_ffd_703;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_704> AgradDistributionsBetaBinomial_ffd_704;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_705> AgradDistributionsBetaBinomial_ffd_705;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_706> AgradDistributionsBetaBinomial_ffd_706;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_707> AgradDistributionsBetaBinomial_ffd_707;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_708> AgradDistributionsBetaBinomial_ffd_708;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_709> AgradDistributionsBetaBinomial_ffd_709;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_710> AgradDistributionsBetaBinomial_ffd_710;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_711> AgradDistributionsBetaBinomial_ffd_711;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_712> AgradDistributionsBetaBinomial_ffd_712;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_713> AgradDistributionsBetaBinomial_ffd_713;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_714> AgradDistributionsBetaBinomial_ffd_714;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_715> AgradDistributionsBetaBinomial_ffd_715;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_716> AgradDistributionsBetaBinomial_ffd_716;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_717> AgradDistributionsBetaBinomial_ffd_717;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_718> AgradDistributionsBetaBinomial_ffd_718;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_719> AgradDistributionsBetaBinomial_ffd_719;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_720> AgradDistributionsBetaBinomial_ffd_720;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_721> AgradDistributionsBetaBinomial_ffd_721;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_722> AgradDistributionsBetaBinomial_ffd_722;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_723> AgradDistributionsBetaBinomial_ffd_723;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_724> AgradDistributionsBetaBinomial_ffd_724;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_725> AgradDistributionsBetaBinomial_ffd_725;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_726> AgradDistributionsBetaBinomial_ffd_726;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_727> AgradDistributionsBetaBinomial_ffd_727;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_728> AgradDistributionsBetaBinomial_ffd_728;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_729> AgradDistributionsBetaBinomial_ffd_729;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_730> AgradDistributionsBetaBinomial_ffd_730;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_731> AgradDistributionsBetaBinomial_ffd_731;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_732> AgradDistributionsBetaBinomial_ffd_732;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_733> AgradDistributionsBetaBinomial_ffd_733;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_734> AgradDistributionsBetaBinomial_ffd_734;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_735> AgradDistributionsBetaBinomial_ffd_735;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_736> AgradDistributionsBetaBinomial_ffd_736;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_737> AgradDistributionsBetaBinomial_ffd_737;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_738> AgradDistributionsBetaBinomial_ffd_738;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_739> AgradDistributionsBetaBinomial_ffd_739;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_740> AgradDistributionsBetaBinomial_ffd_740;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_741> AgradDistributionsBetaBinomial_ffd_741;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_742> AgradDistributionsBetaBinomial_ffd_742;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_743> AgradDistributionsBetaBinomial_ffd_743;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_744> AgradDistributionsBetaBinomial_ffd_744;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_745> AgradDistributionsBetaBinomial_ffd_745;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_746> AgradDistributionsBetaBinomial_ffd_746;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_747> AgradDistributionsBetaBinomial_ffd_747;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_748> AgradDistributionsBetaBinomial_ffd_748;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_749> AgradDistributionsBetaBinomial_ffd_749;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_750> AgradDistributionsBetaBinomial_ffd_750;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_751> AgradDistributionsBetaBinomial_ffd_751;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_752> AgradDistributionsBetaBinomial_ffd_752;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_753> AgradDistributionsBetaBinomial_ffd_753;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_754> AgradDistributionsBetaBinomial_ffd_754;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_755> AgradDistributionsBetaBinomial_ffd_755;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_756> AgradDistributionsBetaBinomial_ffd_756;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_757> AgradDistributionsBetaBinomial_ffd_757;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_758> AgradDistributionsBetaBinomial_ffd_758;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_759> AgradDistributionsBetaBinomial_ffd_759;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_760> AgradDistributionsBetaBinomial_ffd_760;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_761> AgradDistributionsBetaBinomial_ffd_761;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_762> AgradDistributionsBetaBinomial_ffd_762;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_763> AgradDistributionsBetaBinomial_ffd_763;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_764> AgradDistributionsBetaBinomial_ffd_764;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_765> AgradDistributionsBetaBinomial_ffd_765;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_766> AgradDistributionsBetaBinomial_ffd_766;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_ffd_767> AgradDistributionsBetaBinomial_ffd_767;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_700, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_700);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_701, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_701);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_702, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_702);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_703, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_703);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_704, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_704);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_705, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_705);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_706, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_706);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_707, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_707);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_708, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_708);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_709, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_709);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_710, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_710);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_711, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_711);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_712, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_712);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_713, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_713);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_714, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_714);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_715, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_715);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_716, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_716);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_717, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_717);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_718, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_718);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_719, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_719);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_720, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_720);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_721, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_721);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_722, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_722);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_723, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_723);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_724, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_724);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_725, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_725);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_726, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_726);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_727, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_727);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_728, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_728);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_729, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_729);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_730, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_730);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_731, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_731);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_732, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_732);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_733, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_733);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_734, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_734);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_735, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_735);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_736, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_736);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_737, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_737);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_738, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_738);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_739, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_739);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_740, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_740);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_741, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_741);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_742, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_742);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_743, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_743);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_744, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_744);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_745, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_745);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_746, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_746);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_747, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_747);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_748, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_748);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_749, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_749);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_750, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_750);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_751, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_751);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_752, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_752);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_753, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_753);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_754, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_754);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_755, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_755);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_756, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_756);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_757, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_757);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_758, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_758);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_759, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_759);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_760, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_760);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_761, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_761);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_762, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_762);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_763, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_763);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_764, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_764);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_765, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_765);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_766, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_766);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_ffd_767, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_ffd_767);
