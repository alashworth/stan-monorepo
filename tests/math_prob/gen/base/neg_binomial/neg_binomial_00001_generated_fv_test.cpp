#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/neg_binomial/neg_binomial_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, fvar<var>, empty, empty, empty> type_fv_100;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, std::vector<fvar<var>>, empty, empty, empty> type_fv_101;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_102;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_103;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_104;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_105;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_106;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_107;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_108;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_109;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_110;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_111;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, double, empty, empty, empty> type_fv_112;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, std::vector<double>, empty, empty, empty> type_fv_113;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_114;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_115;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, fvar<var>, empty, empty, empty> type_fv_116;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, std::vector<fvar<var>>, empty, empty, empty> type_fv_117;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_118;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_119;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, double, empty, empty, empty> type_fv_120;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<double>, empty, empty, empty> type_fv_121;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_122;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_123;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, fvar<var>, empty, empty, empty> type_fv_124;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty> type_fv_125;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_126;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_127;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_128;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_129;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_130;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_131;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_132;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_133;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_134;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_135;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_136;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_137;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_138;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_139;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_140;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_141;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_142;
typedef boost::mpl::vector<Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_143;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, double, fvar<var>, empty, empty, empty> type_fv_144;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, double, std::vector<fvar<var>>, empty, empty, empty> type_fv_145;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_146;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, double, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_147;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, fvar<var>, empty, empty, empty> type_fv_148;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<fvar<var>>, empty, empty, empty> type_fv_149;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_150;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_151;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_152;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_153;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_154;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_155;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_156;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_157;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_158;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_159;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty, empty> type_fv_160;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty, empty> type_fv_161;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_162;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_163;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty, empty> type_fv_164;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty, empty> type_fv_165;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_166;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_167;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty, empty> type_fv_168;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty, empty> type_fv_169;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_170;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_171;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty, empty> type_fv_172;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty, empty> type_fv_173;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_174;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_175;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty, empty> type_fv_176;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_fv_177;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_178;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_179;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty, empty> type_fv_180;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty, empty> type_fv_181;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_182;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_183;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty, empty> type_fv_184;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_fv_185;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_186;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_187;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty, empty> type_fv_188;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty, empty> type_fv_189;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty, empty> type_fv_190;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty, empty> type_fv_191;

typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_100> AgradDistributionsNegBinomial_fv_100;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_101> AgradDistributionsNegBinomial_fv_101;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_102> AgradDistributionsNegBinomial_fv_102;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_103> AgradDistributionsNegBinomial_fv_103;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_104> AgradDistributionsNegBinomial_fv_104;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_105> AgradDistributionsNegBinomial_fv_105;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_106> AgradDistributionsNegBinomial_fv_106;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_107> AgradDistributionsNegBinomial_fv_107;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_108> AgradDistributionsNegBinomial_fv_108;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_109> AgradDistributionsNegBinomial_fv_109;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_110> AgradDistributionsNegBinomial_fv_110;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_111> AgradDistributionsNegBinomial_fv_111;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_112> AgradDistributionsNegBinomial_fv_112;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_113> AgradDistributionsNegBinomial_fv_113;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_114> AgradDistributionsNegBinomial_fv_114;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_115> AgradDistributionsNegBinomial_fv_115;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_116> AgradDistributionsNegBinomial_fv_116;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_117> AgradDistributionsNegBinomial_fv_117;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_118> AgradDistributionsNegBinomial_fv_118;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_119> AgradDistributionsNegBinomial_fv_119;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_120> AgradDistributionsNegBinomial_fv_120;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_121> AgradDistributionsNegBinomial_fv_121;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_122> AgradDistributionsNegBinomial_fv_122;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_123> AgradDistributionsNegBinomial_fv_123;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_124> AgradDistributionsNegBinomial_fv_124;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_125> AgradDistributionsNegBinomial_fv_125;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_126> AgradDistributionsNegBinomial_fv_126;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_127> AgradDistributionsNegBinomial_fv_127;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_128> AgradDistributionsNegBinomial_fv_128;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_129> AgradDistributionsNegBinomial_fv_129;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_130> AgradDistributionsNegBinomial_fv_130;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_131> AgradDistributionsNegBinomial_fv_131;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_132> AgradDistributionsNegBinomial_fv_132;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_133> AgradDistributionsNegBinomial_fv_133;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_134> AgradDistributionsNegBinomial_fv_134;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_135> AgradDistributionsNegBinomial_fv_135;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_136> AgradDistributionsNegBinomial_fv_136;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_137> AgradDistributionsNegBinomial_fv_137;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_138> AgradDistributionsNegBinomial_fv_138;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_139> AgradDistributionsNegBinomial_fv_139;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_140> AgradDistributionsNegBinomial_fv_140;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_141> AgradDistributionsNegBinomial_fv_141;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_142> AgradDistributionsNegBinomial_fv_142;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_143> AgradDistributionsNegBinomial_fv_143;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_144> AgradDistributionsNegBinomial_fv_144;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_145> AgradDistributionsNegBinomial_fv_145;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_146> AgradDistributionsNegBinomial_fv_146;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_147> AgradDistributionsNegBinomial_fv_147;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_148> AgradDistributionsNegBinomial_fv_148;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_149> AgradDistributionsNegBinomial_fv_149;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_150> AgradDistributionsNegBinomial_fv_150;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_151> AgradDistributionsNegBinomial_fv_151;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_152> AgradDistributionsNegBinomial_fv_152;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_153> AgradDistributionsNegBinomial_fv_153;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_154> AgradDistributionsNegBinomial_fv_154;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_155> AgradDistributionsNegBinomial_fv_155;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_156> AgradDistributionsNegBinomial_fv_156;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_157> AgradDistributionsNegBinomial_fv_157;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_158> AgradDistributionsNegBinomial_fv_158;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_159> AgradDistributionsNegBinomial_fv_159;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_160> AgradDistributionsNegBinomial_fv_160;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_161> AgradDistributionsNegBinomial_fv_161;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_162> AgradDistributionsNegBinomial_fv_162;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_163> AgradDistributionsNegBinomial_fv_163;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_164> AgradDistributionsNegBinomial_fv_164;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_165> AgradDistributionsNegBinomial_fv_165;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_166> AgradDistributionsNegBinomial_fv_166;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_167> AgradDistributionsNegBinomial_fv_167;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_168> AgradDistributionsNegBinomial_fv_168;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_169> AgradDistributionsNegBinomial_fv_169;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_170> AgradDistributionsNegBinomial_fv_170;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_171> AgradDistributionsNegBinomial_fv_171;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_172> AgradDistributionsNegBinomial_fv_172;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_173> AgradDistributionsNegBinomial_fv_173;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_174> AgradDistributionsNegBinomial_fv_174;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_175> AgradDistributionsNegBinomial_fv_175;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_176> AgradDistributionsNegBinomial_fv_176;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_177> AgradDistributionsNegBinomial_fv_177;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_178> AgradDistributionsNegBinomial_fv_178;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_179> AgradDistributionsNegBinomial_fv_179;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_180> AgradDistributionsNegBinomial_fv_180;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_181> AgradDistributionsNegBinomial_fv_181;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_182> AgradDistributionsNegBinomial_fv_182;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_183> AgradDistributionsNegBinomial_fv_183;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_184> AgradDistributionsNegBinomial_fv_184;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_185> AgradDistributionsNegBinomial_fv_185;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_186> AgradDistributionsNegBinomial_fv_186;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_187> AgradDistributionsNegBinomial_fv_187;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_188> AgradDistributionsNegBinomial_fv_188;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_189> AgradDistributionsNegBinomial_fv_189;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_190> AgradDistributionsNegBinomial_fv_190;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_fv_191> AgradDistributionsNegBinomial_fv_191;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_100, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_101, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_102, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_103, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_104, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_105, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_106, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_107, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_108, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_109, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_110, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_111, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_112, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_113, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_114, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_115, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_116, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_117, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_118, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_119, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_120, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_121, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_122, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_123, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_124, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_125, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_126, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_127, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_127);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_128, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_128);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_129, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_129);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_130, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_130);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_131, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_131);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_132, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_132);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_133, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_133);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_134, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_134);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_135, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_135);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_136, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_136);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_137, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_137);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_138, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_138);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_139, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_139);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_140, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_140);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_141, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_141);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_142, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_142);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_143, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_143);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_144, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_144);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_145, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_145);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_146, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_146);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_147, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_147);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_148, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_148);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_149, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_149);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_150, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_150);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_151, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_151);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_152, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_152);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_153, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_153);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_154, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_154);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_155, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_155);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_156, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_156);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_157, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_157);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_158, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_158);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_159, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_159);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_160, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_160);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_161, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_161);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_162, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_162);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_163, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_163);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_164, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_164);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_165, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_165);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_166, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_166);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_167, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_167);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_168, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_168);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_169, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_169);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_170, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_170);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_171, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_171);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_172, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_172);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_173, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_173);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_174, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_174);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_175, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_175);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_176, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_176);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_177, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_177);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_178, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_178);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_179, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_179);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_180, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_180);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_181, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_181);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_182, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_182);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_183, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_183);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_184, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_184);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_185, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_185);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_186, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_186);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_187, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_187);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_188, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_188);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_189, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_189);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_190, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_190);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_fv_191, AgradDistributionTestFixture, AgradDistributionsNegBinomial_fv_191);

