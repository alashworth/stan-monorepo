#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/binomial/binomial_logit_test.hpp>

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

typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_100> AgradDistributionsBinomialLogit_v_100;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_101> AgradDistributionsBinomialLogit_v_101;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_102> AgradDistributionsBinomialLogit_v_102;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_103> AgradDistributionsBinomialLogit_v_103;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_104> AgradDistributionsBinomialLogit_v_104;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_105> AgradDistributionsBinomialLogit_v_105;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_106> AgradDistributionsBinomialLogit_v_106;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_107> AgradDistributionsBinomialLogit_v_107;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_108> AgradDistributionsBinomialLogit_v_108;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_109> AgradDistributionsBinomialLogit_v_109;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_110> AgradDistributionsBinomialLogit_v_110;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_111> AgradDistributionsBinomialLogit_v_111;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_112> AgradDistributionsBinomialLogit_v_112;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_113> AgradDistributionsBinomialLogit_v_113;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_114> AgradDistributionsBinomialLogit_v_114;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_115> AgradDistributionsBinomialLogit_v_115;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_116> AgradDistributionsBinomialLogit_v_116;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_117> AgradDistributionsBinomialLogit_v_117;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_118> AgradDistributionsBinomialLogit_v_118;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_119> AgradDistributionsBinomialLogit_v_119;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_120> AgradDistributionsBinomialLogit_v_120;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_121> AgradDistributionsBinomialLogit_v_121;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_122> AgradDistributionsBinomialLogit_v_122;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_123> AgradDistributionsBinomialLogit_v_123;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_124> AgradDistributionsBinomialLogit_v_124;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_125> AgradDistributionsBinomialLogit_v_125;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_126> AgradDistributionsBinomialLogit_v_126;
typedef boost::mpl::vector<AgradDistributionsBinomialLogit, type_v_127> AgradDistributionsBinomialLogit_v_127;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_100, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_101, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_102, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_103, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_104, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_105, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_106, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_107, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_108, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_109, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_110, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_111, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_112, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_113, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_114, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_115, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_116, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_117, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_118, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_119, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_120, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_121, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_122, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_123, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_124, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_125, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_126, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsBinomialLogit_v_127, AgradDistributionTestFixture, AgradDistributionsBinomialLogit_v_127);

