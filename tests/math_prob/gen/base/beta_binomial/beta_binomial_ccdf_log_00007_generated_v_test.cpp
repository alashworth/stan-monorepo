#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/beta_binomial/beta_binomial_ccdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_700;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_701;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_702;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_703;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, double, empty, empty> type_v_704;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, std::vector<double>, empty, empty> type_v_705;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_706;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_707;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, var, empty, empty> type_v_708;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, std::vector<var>, empty, empty> type_v_709;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_710;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_711;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty> type_v_712;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty> type_v_713;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_714;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_715;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, var, empty, empty> type_v_716;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, empty, empty> type_v_717;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_718;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_719;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_720;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_721;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_722;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_723;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_724;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_725;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_726;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_727;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_728;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_729;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_730;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_731;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_732;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_733;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_734;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_735;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, double, empty, empty> type_v_736;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty> type_v_737;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_738;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_739;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, var, empty, empty> type_v_740;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty> type_v_741;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_742;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_743;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty> type_v_744;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty> type_v_745;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_746;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_747;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty> type_v_748;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty> type_v_749;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_750;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_751;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_752;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_753;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_754;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_755;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_756;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_757;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_758;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_759;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_760;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_761;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_762;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_763;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_764;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_765;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_766;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_767;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, double, empty, empty> type_v_768;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, std::vector<double>, empty, empty> type_v_769;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_770;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_771;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, var, empty, empty> type_v_772;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, std::vector<var>, empty, empty> type_v_773;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_774;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_775;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, double, empty, empty> type_v_776;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, std::vector<double>, empty, empty> type_v_777;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_778;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_779;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, var, empty, empty> type_v_780;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, std::vector<var>, empty, empty> type_v_781;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_782;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_783;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_784;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_785;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_786;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_787;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_788;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_789;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_790;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_791;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_792;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_793;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_794;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_795;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_796;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_797;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_798;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_799;

typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_700> AgradCcdfLogBetaBinomial_v_700;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_701> AgradCcdfLogBetaBinomial_v_701;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_702> AgradCcdfLogBetaBinomial_v_702;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_703> AgradCcdfLogBetaBinomial_v_703;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_704> AgradCcdfLogBetaBinomial_v_704;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_705> AgradCcdfLogBetaBinomial_v_705;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_706> AgradCcdfLogBetaBinomial_v_706;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_707> AgradCcdfLogBetaBinomial_v_707;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_708> AgradCcdfLogBetaBinomial_v_708;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_709> AgradCcdfLogBetaBinomial_v_709;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_710> AgradCcdfLogBetaBinomial_v_710;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_711> AgradCcdfLogBetaBinomial_v_711;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_712> AgradCcdfLogBetaBinomial_v_712;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_713> AgradCcdfLogBetaBinomial_v_713;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_714> AgradCcdfLogBetaBinomial_v_714;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_715> AgradCcdfLogBetaBinomial_v_715;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_716> AgradCcdfLogBetaBinomial_v_716;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_717> AgradCcdfLogBetaBinomial_v_717;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_718> AgradCcdfLogBetaBinomial_v_718;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_719> AgradCcdfLogBetaBinomial_v_719;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_720> AgradCcdfLogBetaBinomial_v_720;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_721> AgradCcdfLogBetaBinomial_v_721;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_722> AgradCcdfLogBetaBinomial_v_722;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_723> AgradCcdfLogBetaBinomial_v_723;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_724> AgradCcdfLogBetaBinomial_v_724;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_725> AgradCcdfLogBetaBinomial_v_725;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_726> AgradCcdfLogBetaBinomial_v_726;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_727> AgradCcdfLogBetaBinomial_v_727;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_728> AgradCcdfLogBetaBinomial_v_728;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_729> AgradCcdfLogBetaBinomial_v_729;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_730> AgradCcdfLogBetaBinomial_v_730;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_731> AgradCcdfLogBetaBinomial_v_731;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_732> AgradCcdfLogBetaBinomial_v_732;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_733> AgradCcdfLogBetaBinomial_v_733;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_734> AgradCcdfLogBetaBinomial_v_734;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_735> AgradCcdfLogBetaBinomial_v_735;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_736> AgradCcdfLogBetaBinomial_v_736;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_737> AgradCcdfLogBetaBinomial_v_737;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_738> AgradCcdfLogBetaBinomial_v_738;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_739> AgradCcdfLogBetaBinomial_v_739;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_740> AgradCcdfLogBetaBinomial_v_740;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_741> AgradCcdfLogBetaBinomial_v_741;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_742> AgradCcdfLogBetaBinomial_v_742;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_743> AgradCcdfLogBetaBinomial_v_743;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_744> AgradCcdfLogBetaBinomial_v_744;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_745> AgradCcdfLogBetaBinomial_v_745;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_746> AgradCcdfLogBetaBinomial_v_746;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_747> AgradCcdfLogBetaBinomial_v_747;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_748> AgradCcdfLogBetaBinomial_v_748;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_749> AgradCcdfLogBetaBinomial_v_749;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_750> AgradCcdfLogBetaBinomial_v_750;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_751> AgradCcdfLogBetaBinomial_v_751;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_752> AgradCcdfLogBetaBinomial_v_752;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_753> AgradCcdfLogBetaBinomial_v_753;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_754> AgradCcdfLogBetaBinomial_v_754;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_755> AgradCcdfLogBetaBinomial_v_755;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_756> AgradCcdfLogBetaBinomial_v_756;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_757> AgradCcdfLogBetaBinomial_v_757;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_758> AgradCcdfLogBetaBinomial_v_758;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_759> AgradCcdfLogBetaBinomial_v_759;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_760> AgradCcdfLogBetaBinomial_v_760;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_761> AgradCcdfLogBetaBinomial_v_761;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_762> AgradCcdfLogBetaBinomial_v_762;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_763> AgradCcdfLogBetaBinomial_v_763;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_764> AgradCcdfLogBetaBinomial_v_764;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_765> AgradCcdfLogBetaBinomial_v_765;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_766> AgradCcdfLogBetaBinomial_v_766;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_767> AgradCcdfLogBetaBinomial_v_767;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_768> AgradCcdfLogBetaBinomial_v_768;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_769> AgradCcdfLogBetaBinomial_v_769;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_770> AgradCcdfLogBetaBinomial_v_770;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_771> AgradCcdfLogBetaBinomial_v_771;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_772> AgradCcdfLogBetaBinomial_v_772;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_773> AgradCcdfLogBetaBinomial_v_773;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_774> AgradCcdfLogBetaBinomial_v_774;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_775> AgradCcdfLogBetaBinomial_v_775;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_776> AgradCcdfLogBetaBinomial_v_776;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_777> AgradCcdfLogBetaBinomial_v_777;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_778> AgradCcdfLogBetaBinomial_v_778;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_779> AgradCcdfLogBetaBinomial_v_779;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_780> AgradCcdfLogBetaBinomial_v_780;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_781> AgradCcdfLogBetaBinomial_v_781;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_782> AgradCcdfLogBetaBinomial_v_782;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_783> AgradCcdfLogBetaBinomial_v_783;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_784> AgradCcdfLogBetaBinomial_v_784;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_785> AgradCcdfLogBetaBinomial_v_785;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_786> AgradCcdfLogBetaBinomial_v_786;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_787> AgradCcdfLogBetaBinomial_v_787;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_788> AgradCcdfLogBetaBinomial_v_788;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_789> AgradCcdfLogBetaBinomial_v_789;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_790> AgradCcdfLogBetaBinomial_v_790;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_791> AgradCcdfLogBetaBinomial_v_791;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_792> AgradCcdfLogBetaBinomial_v_792;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_793> AgradCcdfLogBetaBinomial_v_793;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_794> AgradCcdfLogBetaBinomial_v_794;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_795> AgradCcdfLogBetaBinomial_v_795;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_796> AgradCcdfLogBetaBinomial_v_796;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_797> AgradCcdfLogBetaBinomial_v_797;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_798> AgradCcdfLogBetaBinomial_v_798;
typedef boost::mpl::vector<AgradCcdfLogBetaBinomial, type_v_799> AgradCcdfLogBetaBinomial_v_799;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_700, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_700);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_701, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_701);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_702, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_702);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_703, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_703);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_704, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_704);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_705, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_705);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_706, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_706);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_707, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_707);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_708, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_708);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_709, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_709);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_710, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_710);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_711, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_711);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_712, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_712);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_713, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_713);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_714, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_714);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_715, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_715);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_716, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_716);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_717, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_717);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_718, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_718);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_719, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_719);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_720, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_720);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_721, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_721);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_722, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_722);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_723, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_723);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_724, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_724);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_725, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_725);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_726, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_726);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_727, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_727);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_728, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_728);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_729, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_729);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_730, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_730);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_731, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_731);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_732, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_732);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_733, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_733);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_734, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_734);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_735, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_735);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_736, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_736);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_737, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_737);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_738, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_738);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_739, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_739);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_740, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_740);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_741, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_741);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_742, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_742);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_743, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_743);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_744, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_744);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_745, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_745);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_746, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_746);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_747, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_747);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_748, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_748);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_749, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_749);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_750, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_750);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_751, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_751);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_752, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_752);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_753, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_753);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_754, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_754);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_755, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_755);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_756, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_756);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_757, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_757);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_758, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_758);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_759, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_759);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_760, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_760);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_761, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_761);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_762, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_762);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_763, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_763);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_764, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_764);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_765, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_765);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_766, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_766);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_767, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_767);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_768, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_768);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_769, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_769);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_770, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_770);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_771, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_771);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_772, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_772);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_773, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_773);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_774, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_774);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_775, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_775);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_776, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_776);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_777, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_777);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_778, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_778);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_779, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_779);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_780, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_780);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_781, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_781);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_782, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_782);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_783, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_783);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_784, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_784);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_785, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_785);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_786, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_786);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_787, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_787);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_788, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_788);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_789, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_789);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_790, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_790);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_791, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_791);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_792, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_792);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_793, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_793);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_794, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_794);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_795, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_795);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_796, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_796);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_797, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_797);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_798, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_798);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBetaBinomial_v_799, AgradCcdfLogTestFixture, AgradCcdfLogBetaBinomial_v_799);

