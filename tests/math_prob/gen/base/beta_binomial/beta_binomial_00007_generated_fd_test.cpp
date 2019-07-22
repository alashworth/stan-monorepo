#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_700;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_701;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_702;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_703;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_704;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_705;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_706;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_707;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_708;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_709;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_710;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_711;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_712;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_713;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_714;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_715;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_716;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_717;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_718;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_719;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, fvar<double>, empty, empty> type_fd_720;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, std::vector<fvar<double>>, empty, empty> type_fd_721;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_722;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_723;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, fvar<double>, empty, empty> type_fd_724;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<double>>, empty, empty> type_fd_725;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_726;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_727;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_728;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_729;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_730;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_731;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_732;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_733;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_734;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_735;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, double, empty, empty> type_fd_736;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, std::vector<double>, empty, empty> type_fd_737;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_738;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_739;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, fvar<double>, empty, empty> type_fd_740;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_741;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_742;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_743;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, double, empty, empty> type_fd_744;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_745;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_746;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_747;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_748;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_749;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_750;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_751;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_752;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_753;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_754;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_755;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_756;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_757;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_758;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_759;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_760;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_761;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_762;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_763;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_764;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_765;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_766;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_767;

typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_700> AgradDistributionsBetaBinomial_fd_700;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_701> AgradDistributionsBetaBinomial_fd_701;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_702> AgradDistributionsBetaBinomial_fd_702;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_703> AgradDistributionsBetaBinomial_fd_703;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_704> AgradDistributionsBetaBinomial_fd_704;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_705> AgradDistributionsBetaBinomial_fd_705;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_706> AgradDistributionsBetaBinomial_fd_706;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_707> AgradDistributionsBetaBinomial_fd_707;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_708> AgradDistributionsBetaBinomial_fd_708;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_709> AgradDistributionsBetaBinomial_fd_709;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_710> AgradDistributionsBetaBinomial_fd_710;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_711> AgradDistributionsBetaBinomial_fd_711;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_712> AgradDistributionsBetaBinomial_fd_712;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_713> AgradDistributionsBetaBinomial_fd_713;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_714> AgradDistributionsBetaBinomial_fd_714;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_715> AgradDistributionsBetaBinomial_fd_715;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_716> AgradDistributionsBetaBinomial_fd_716;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_717> AgradDistributionsBetaBinomial_fd_717;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_718> AgradDistributionsBetaBinomial_fd_718;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_719> AgradDistributionsBetaBinomial_fd_719;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_720> AgradDistributionsBetaBinomial_fd_720;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_721> AgradDistributionsBetaBinomial_fd_721;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_722> AgradDistributionsBetaBinomial_fd_722;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_723> AgradDistributionsBetaBinomial_fd_723;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_724> AgradDistributionsBetaBinomial_fd_724;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_725> AgradDistributionsBetaBinomial_fd_725;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_726> AgradDistributionsBetaBinomial_fd_726;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_727> AgradDistributionsBetaBinomial_fd_727;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_728> AgradDistributionsBetaBinomial_fd_728;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_729> AgradDistributionsBetaBinomial_fd_729;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_730> AgradDistributionsBetaBinomial_fd_730;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_731> AgradDistributionsBetaBinomial_fd_731;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_732> AgradDistributionsBetaBinomial_fd_732;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_733> AgradDistributionsBetaBinomial_fd_733;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_734> AgradDistributionsBetaBinomial_fd_734;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_735> AgradDistributionsBetaBinomial_fd_735;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_736> AgradDistributionsBetaBinomial_fd_736;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_737> AgradDistributionsBetaBinomial_fd_737;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_738> AgradDistributionsBetaBinomial_fd_738;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_739> AgradDistributionsBetaBinomial_fd_739;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_740> AgradDistributionsBetaBinomial_fd_740;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_741> AgradDistributionsBetaBinomial_fd_741;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_742> AgradDistributionsBetaBinomial_fd_742;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_743> AgradDistributionsBetaBinomial_fd_743;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_744> AgradDistributionsBetaBinomial_fd_744;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_745> AgradDistributionsBetaBinomial_fd_745;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_746> AgradDistributionsBetaBinomial_fd_746;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_747> AgradDistributionsBetaBinomial_fd_747;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_748> AgradDistributionsBetaBinomial_fd_748;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_749> AgradDistributionsBetaBinomial_fd_749;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_750> AgradDistributionsBetaBinomial_fd_750;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_751> AgradDistributionsBetaBinomial_fd_751;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_752> AgradDistributionsBetaBinomial_fd_752;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_753> AgradDistributionsBetaBinomial_fd_753;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_754> AgradDistributionsBetaBinomial_fd_754;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_755> AgradDistributionsBetaBinomial_fd_755;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_756> AgradDistributionsBetaBinomial_fd_756;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_757> AgradDistributionsBetaBinomial_fd_757;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_758> AgradDistributionsBetaBinomial_fd_758;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_759> AgradDistributionsBetaBinomial_fd_759;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_760> AgradDistributionsBetaBinomial_fd_760;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_761> AgradDistributionsBetaBinomial_fd_761;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_762> AgradDistributionsBetaBinomial_fd_762;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_763> AgradDistributionsBetaBinomial_fd_763;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_764> AgradDistributionsBetaBinomial_fd_764;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_765> AgradDistributionsBetaBinomial_fd_765;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_766> AgradDistributionsBetaBinomial_fd_766;
typedef boost::mpl::vector<AgradDistributionsBetaBinomial, type_fd_767> AgradDistributionsBetaBinomial_fd_767;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_700, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_700);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_701, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_701);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_702, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_702);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_703, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_703);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_704, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_704);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_705, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_705);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_706, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_706);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_707, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_707);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_708, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_708);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_709, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_709);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_710, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_710);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_711, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_711);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_712, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_712);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_713, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_713);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_714, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_714);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_715, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_715);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_716, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_716);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_717, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_717);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_718, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_718);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_719, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_719);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_720, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_720);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_721, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_721);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_722, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_722);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_723, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_723);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_724, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_724);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_725, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_725);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_726, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_726);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_727, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_727);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_728, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_728);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_729, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_729);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_730, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_730);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_731, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_731);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_732, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_732);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_733, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_733);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_734, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_734);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_735, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_735);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_736, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_736);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_737, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_737);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_738, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_738);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_739, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_739);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_740, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_740);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_741, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_741);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_742, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_742);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_743, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_743);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_744, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_744);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_745, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_745);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_746, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_746);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_747, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_747);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_748, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_748);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_749, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_749);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_750, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_750);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_751, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_751);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_752, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_752);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_753, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_753);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_754, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_754);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_755, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_755);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_756, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_756);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_757, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_757);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_758, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_758);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_759, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_759);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_760, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_760);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_761, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_761);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_762, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_762);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_763, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_763);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_764, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_764);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_765, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_765);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_766, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_766);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBetaBinomial_fd_767, AgradDistributionTestFixture, AgradDistributionsBetaBinomial_fd_767);

