#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_700> AgradCdfBetaBinomial_fd_700;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_701> AgradCdfBetaBinomial_fd_701;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_702> AgradCdfBetaBinomial_fd_702;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_703> AgradCdfBetaBinomial_fd_703;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_704> AgradCdfBetaBinomial_fd_704;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_705> AgradCdfBetaBinomial_fd_705;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_706> AgradCdfBetaBinomial_fd_706;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_707> AgradCdfBetaBinomial_fd_707;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_708> AgradCdfBetaBinomial_fd_708;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_709> AgradCdfBetaBinomial_fd_709;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_710> AgradCdfBetaBinomial_fd_710;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_711> AgradCdfBetaBinomial_fd_711;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_712> AgradCdfBetaBinomial_fd_712;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_713> AgradCdfBetaBinomial_fd_713;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_714> AgradCdfBetaBinomial_fd_714;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_715> AgradCdfBetaBinomial_fd_715;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_716> AgradCdfBetaBinomial_fd_716;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_717> AgradCdfBetaBinomial_fd_717;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_718> AgradCdfBetaBinomial_fd_718;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_719> AgradCdfBetaBinomial_fd_719;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_720> AgradCdfBetaBinomial_fd_720;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_721> AgradCdfBetaBinomial_fd_721;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_722> AgradCdfBetaBinomial_fd_722;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_723> AgradCdfBetaBinomial_fd_723;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_724> AgradCdfBetaBinomial_fd_724;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_725> AgradCdfBetaBinomial_fd_725;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_726> AgradCdfBetaBinomial_fd_726;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_727> AgradCdfBetaBinomial_fd_727;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_728> AgradCdfBetaBinomial_fd_728;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_729> AgradCdfBetaBinomial_fd_729;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_730> AgradCdfBetaBinomial_fd_730;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_731> AgradCdfBetaBinomial_fd_731;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_732> AgradCdfBetaBinomial_fd_732;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_733> AgradCdfBetaBinomial_fd_733;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_734> AgradCdfBetaBinomial_fd_734;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_735> AgradCdfBetaBinomial_fd_735;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_736> AgradCdfBetaBinomial_fd_736;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_737> AgradCdfBetaBinomial_fd_737;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_738> AgradCdfBetaBinomial_fd_738;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_739> AgradCdfBetaBinomial_fd_739;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_740> AgradCdfBetaBinomial_fd_740;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_741> AgradCdfBetaBinomial_fd_741;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_742> AgradCdfBetaBinomial_fd_742;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_743> AgradCdfBetaBinomial_fd_743;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_744> AgradCdfBetaBinomial_fd_744;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_745> AgradCdfBetaBinomial_fd_745;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_746> AgradCdfBetaBinomial_fd_746;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_747> AgradCdfBetaBinomial_fd_747;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_748> AgradCdfBetaBinomial_fd_748;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_749> AgradCdfBetaBinomial_fd_749;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_750> AgradCdfBetaBinomial_fd_750;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_751> AgradCdfBetaBinomial_fd_751;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_752> AgradCdfBetaBinomial_fd_752;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_753> AgradCdfBetaBinomial_fd_753;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_754> AgradCdfBetaBinomial_fd_754;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_755> AgradCdfBetaBinomial_fd_755;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_756> AgradCdfBetaBinomial_fd_756;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_757> AgradCdfBetaBinomial_fd_757;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_758> AgradCdfBetaBinomial_fd_758;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_759> AgradCdfBetaBinomial_fd_759;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_760> AgradCdfBetaBinomial_fd_760;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_761> AgradCdfBetaBinomial_fd_761;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_762> AgradCdfBetaBinomial_fd_762;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_763> AgradCdfBetaBinomial_fd_763;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_764> AgradCdfBetaBinomial_fd_764;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_765> AgradCdfBetaBinomial_fd_765;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_766> AgradCdfBetaBinomial_fd_766;
typedef boost::mpl::vector<AgradCdfBetaBinomial, type_fd_767> AgradCdfBetaBinomial_fd_767;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_700, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_700);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_701, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_701);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_702, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_702);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_703, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_703);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_704, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_704);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_705, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_705);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_706, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_706);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_707, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_707);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_708, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_708);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_709, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_709);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_710, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_710);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_711, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_711);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_712, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_712);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_713, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_713);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_714, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_714);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_715, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_715);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_716, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_716);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_717, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_717);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_718, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_718);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_719, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_719);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_720, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_720);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_721, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_721);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_722, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_722);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_723, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_723);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_724, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_724);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_725, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_725);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_726, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_726);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_727, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_727);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_728, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_728);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_729, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_729);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_730, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_730);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_731, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_731);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_732, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_732);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_733, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_733);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_734, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_734);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_735, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_735);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_736, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_736);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_737, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_737);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_738, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_738);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_739, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_739);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_740, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_740);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_741, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_741);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_742, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_742);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_743, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_743);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_744, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_744);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_745, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_745);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_746, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_746);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_747, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_747);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_748, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_748);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_749, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_749);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_750, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_750);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_751, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_751);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_752, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_752);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_753, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_753);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_754, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_754);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_755, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_755);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_756, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_756);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_757, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_757);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_758, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_758);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_759, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_759);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_760, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_760);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_761, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_761);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_762, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_762);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_763, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_763);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_764, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_764);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_765, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_765);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_766, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_766);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBetaBinomial_fd_767, AgradCdfTestFixture, AgradCdfBetaBinomial_fd_767);
