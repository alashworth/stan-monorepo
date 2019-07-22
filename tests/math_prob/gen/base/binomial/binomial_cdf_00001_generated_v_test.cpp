#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/binomial/binomial_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfBinomial, type_v_100> AgradCdfBinomial_v_100;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_101> AgradCdfBinomial_v_101;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_102> AgradCdfBinomial_v_102;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_103> AgradCdfBinomial_v_103;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_104> AgradCdfBinomial_v_104;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_105> AgradCdfBinomial_v_105;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_106> AgradCdfBinomial_v_106;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_107> AgradCdfBinomial_v_107;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_108> AgradCdfBinomial_v_108;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_109> AgradCdfBinomial_v_109;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_110> AgradCdfBinomial_v_110;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_111> AgradCdfBinomial_v_111;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_112> AgradCdfBinomial_v_112;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_113> AgradCdfBinomial_v_113;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_114> AgradCdfBinomial_v_114;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_115> AgradCdfBinomial_v_115;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_116> AgradCdfBinomial_v_116;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_117> AgradCdfBinomial_v_117;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_118> AgradCdfBinomial_v_118;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_119> AgradCdfBinomial_v_119;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_120> AgradCdfBinomial_v_120;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_121> AgradCdfBinomial_v_121;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_122> AgradCdfBinomial_v_122;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_123> AgradCdfBinomial_v_123;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_124> AgradCdfBinomial_v_124;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_125> AgradCdfBinomial_v_125;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_126> AgradCdfBinomial_v_126;
typedef boost::mpl::vector<AgradCdfBinomial, type_v_127> AgradCdfBinomial_v_127;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_100, AgradCdfTestFixture, AgradCdfBinomial_v_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_101, AgradCdfTestFixture, AgradCdfBinomial_v_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_102, AgradCdfTestFixture, AgradCdfBinomial_v_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_103, AgradCdfTestFixture, AgradCdfBinomial_v_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_104, AgradCdfTestFixture, AgradCdfBinomial_v_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_105, AgradCdfTestFixture, AgradCdfBinomial_v_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_106, AgradCdfTestFixture, AgradCdfBinomial_v_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_107, AgradCdfTestFixture, AgradCdfBinomial_v_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_108, AgradCdfTestFixture, AgradCdfBinomial_v_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_109, AgradCdfTestFixture, AgradCdfBinomial_v_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_110, AgradCdfTestFixture, AgradCdfBinomial_v_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_111, AgradCdfTestFixture, AgradCdfBinomial_v_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_112, AgradCdfTestFixture, AgradCdfBinomial_v_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_113, AgradCdfTestFixture, AgradCdfBinomial_v_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_114, AgradCdfTestFixture, AgradCdfBinomial_v_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_115, AgradCdfTestFixture, AgradCdfBinomial_v_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_116, AgradCdfTestFixture, AgradCdfBinomial_v_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_117, AgradCdfTestFixture, AgradCdfBinomial_v_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_118, AgradCdfTestFixture, AgradCdfBinomial_v_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_119, AgradCdfTestFixture, AgradCdfBinomial_v_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_120, AgradCdfTestFixture, AgradCdfBinomial_v_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_121, AgradCdfTestFixture, AgradCdfBinomial_v_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_122, AgradCdfTestFixture, AgradCdfBinomial_v_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_123, AgradCdfTestFixture, AgradCdfBinomial_v_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_124, AgradCdfTestFixture, AgradCdfBinomial_v_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_125, AgradCdfTestFixture, AgradCdfBinomial_v_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_126, AgradCdfTestFixture, AgradCdfBinomial_v_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfBinomial_v_127, AgradCdfTestFixture, AgradCdfBinomial_v_127);

