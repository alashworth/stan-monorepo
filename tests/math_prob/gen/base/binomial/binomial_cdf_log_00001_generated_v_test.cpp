#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/binomial/binomial_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_100> AgradCdfLogBinomial_v_100;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_101> AgradCdfLogBinomial_v_101;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_102> AgradCdfLogBinomial_v_102;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_103> AgradCdfLogBinomial_v_103;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_104> AgradCdfLogBinomial_v_104;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_105> AgradCdfLogBinomial_v_105;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_106> AgradCdfLogBinomial_v_106;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_107> AgradCdfLogBinomial_v_107;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_108> AgradCdfLogBinomial_v_108;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_109> AgradCdfLogBinomial_v_109;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_110> AgradCdfLogBinomial_v_110;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_111> AgradCdfLogBinomial_v_111;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_112> AgradCdfLogBinomial_v_112;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_113> AgradCdfLogBinomial_v_113;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_114> AgradCdfLogBinomial_v_114;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_115> AgradCdfLogBinomial_v_115;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_116> AgradCdfLogBinomial_v_116;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_117> AgradCdfLogBinomial_v_117;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_118> AgradCdfLogBinomial_v_118;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_119> AgradCdfLogBinomial_v_119;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_120> AgradCdfLogBinomial_v_120;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_121> AgradCdfLogBinomial_v_121;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_122> AgradCdfLogBinomial_v_122;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_123> AgradCdfLogBinomial_v_123;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_124> AgradCdfLogBinomial_v_124;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_125> AgradCdfLogBinomial_v_125;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_126> AgradCdfLogBinomial_v_126;
typedef boost::mpl::vector<AgradCdfLogBinomial, type_v_127> AgradCdfLogBinomial_v_127;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_100, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_101, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_102, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_103, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_104, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_105, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_106, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_107, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_108, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_109, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_110, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_111, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_112, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_113, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_114, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_115, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_116, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_117, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_118, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_119, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_120, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_121, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_122, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_123, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_124, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_125, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_126, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogBinomial_v_127, AgradCdfLogTestFixture, AgradCdfLogBinomial_v_127);

