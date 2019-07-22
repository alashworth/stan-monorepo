#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/binomial/binomial_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, var, empty, empty, empty> type_v_100;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<var>, empty, empty, empty> type_v_101;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_102;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_103;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, double, empty, empty, empty> type_v_104;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<double>, empty, empty, empty> type_v_105;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_106;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_107;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, var, empty, empty, empty> type_v_108;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<var>, empty, empty, empty> type_v_109;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_110;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_111;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_112;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_113;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_114;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_115;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_116;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_117;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_118;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_119;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_120;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_121;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_122;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_123;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_124;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_125;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_126;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_127;

typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_100> AgradDistributionsBinomial_v_100;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_101> AgradDistributionsBinomial_v_101;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_102> AgradDistributionsBinomial_v_102;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_103> AgradDistributionsBinomial_v_103;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_104> AgradDistributionsBinomial_v_104;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_105> AgradDistributionsBinomial_v_105;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_106> AgradDistributionsBinomial_v_106;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_107> AgradDistributionsBinomial_v_107;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_108> AgradDistributionsBinomial_v_108;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_109> AgradDistributionsBinomial_v_109;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_110> AgradDistributionsBinomial_v_110;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_111> AgradDistributionsBinomial_v_111;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_112> AgradDistributionsBinomial_v_112;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_113> AgradDistributionsBinomial_v_113;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_114> AgradDistributionsBinomial_v_114;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_115> AgradDistributionsBinomial_v_115;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_116> AgradDistributionsBinomial_v_116;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_117> AgradDistributionsBinomial_v_117;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_118> AgradDistributionsBinomial_v_118;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_119> AgradDistributionsBinomial_v_119;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_120> AgradDistributionsBinomial_v_120;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_121> AgradDistributionsBinomial_v_121;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_122> AgradDistributionsBinomial_v_122;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_123> AgradDistributionsBinomial_v_123;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_124> AgradDistributionsBinomial_v_124;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_125> AgradDistributionsBinomial_v_125;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_126> AgradDistributionsBinomial_v_126;
typedef boost::mpl::vector<AgradDistributionsBinomial, type_v_127> AgradDistributionsBinomial_v_127;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_100, AgradDistributionTestFixture, AgradDistributionsBinomial_v_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_101, AgradDistributionTestFixture, AgradDistributionsBinomial_v_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_102, AgradDistributionTestFixture, AgradDistributionsBinomial_v_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_103, AgradDistributionTestFixture, AgradDistributionsBinomial_v_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_104, AgradDistributionTestFixture, AgradDistributionsBinomial_v_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_105, AgradDistributionTestFixture, AgradDistributionsBinomial_v_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_106, AgradDistributionTestFixture, AgradDistributionsBinomial_v_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_107, AgradDistributionTestFixture, AgradDistributionsBinomial_v_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_108, AgradDistributionTestFixture, AgradDistributionsBinomial_v_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_109, AgradDistributionTestFixture, AgradDistributionsBinomial_v_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_110, AgradDistributionTestFixture, AgradDistributionsBinomial_v_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_111, AgradDistributionTestFixture, AgradDistributionsBinomial_v_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_112, AgradDistributionTestFixture, AgradDistributionsBinomial_v_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_113, AgradDistributionTestFixture, AgradDistributionsBinomial_v_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_114, AgradDistributionTestFixture, AgradDistributionsBinomial_v_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_115, AgradDistributionTestFixture, AgradDistributionsBinomial_v_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_116, AgradDistributionTestFixture, AgradDistributionsBinomial_v_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_117, AgradDistributionTestFixture, AgradDistributionsBinomial_v_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_118, AgradDistributionTestFixture, AgradDistributionsBinomial_v_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_119, AgradDistributionTestFixture, AgradDistributionsBinomial_v_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_120, AgradDistributionTestFixture, AgradDistributionsBinomial_v_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_121, AgradDistributionTestFixture, AgradDistributionsBinomial_v_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_122, AgradDistributionTestFixture, AgradDistributionsBinomial_v_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_123, AgradDistributionTestFixture, AgradDistributionsBinomial_v_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_124, AgradDistributionTestFixture, AgradDistributionsBinomial_v_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_125, AgradDistributionTestFixture, AgradDistributionsBinomial_v_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_126, AgradDistributionTestFixture, AgradDistributionsBinomial_v_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomial_v_127, AgradDistributionTestFixture, AgradDistributionsBinomial_v_127);

