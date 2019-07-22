#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/binomial/binomial_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_100> AgradCcdfLogBinomial_v_100;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_101> AgradCcdfLogBinomial_v_101;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_102> AgradCcdfLogBinomial_v_102;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_103> AgradCcdfLogBinomial_v_103;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_104> AgradCcdfLogBinomial_v_104;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_105> AgradCcdfLogBinomial_v_105;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_106> AgradCcdfLogBinomial_v_106;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_107> AgradCcdfLogBinomial_v_107;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_108> AgradCcdfLogBinomial_v_108;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_109> AgradCcdfLogBinomial_v_109;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_110> AgradCcdfLogBinomial_v_110;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_111> AgradCcdfLogBinomial_v_111;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_112> AgradCcdfLogBinomial_v_112;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_113> AgradCcdfLogBinomial_v_113;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_114> AgradCcdfLogBinomial_v_114;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_115> AgradCcdfLogBinomial_v_115;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_116> AgradCcdfLogBinomial_v_116;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_117> AgradCcdfLogBinomial_v_117;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_118> AgradCcdfLogBinomial_v_118;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_119> AgradCcdfLogBinomial_v_119;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_120> AgradCcdfLogBinomial_v_120;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_121> AgradCcdfLogBinomial_v_121;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_122> AgradCcdfLogBinomial_v_122;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_123> AgradCcdfLogBinomial_v_123;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_124> AgradCcdfLogBinomial_v_124;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_125> AgradCcdfLogBinomial_v_125;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_126> AgradCcdfLogBinomial_v_126;
typedef boost::mpl::vector<AgradCcdfLogBinomial, type_v_127> AgradCcdfLogBinomial_v_127;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_100, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_101, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_102, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_103, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_104, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_105, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_106, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_107, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_108, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_109, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_110, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_111, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_112, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_113, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_114, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_115, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_116, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_117, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_118, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_119, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_120, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_121, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_122, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_123, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_124, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_125, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_126, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogBinomial_v_127, AgradCcdfLogTestFixture, AgradCcdfLogBinomial_v_127);

