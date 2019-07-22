#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/neg_binomial_2/neg_binomial_2_cdf_test.hpp>

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

typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_100> AgradCdfNegBinomial2_fv_100;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_101> AgradCdfNegBinomial2_fv_101;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_102> AgradCdfNegBinomial2_fv_102;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_103> AgradCdfNegBinomial2_fv_103;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_104> AgradCdfNegBinomial2_fv_104;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_105> AgradCdfNegBinomial2_fv_105;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_106> AgradCdfNegBinomial2_fv_106;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_107> AgradCdfNegBinomial2_fv_107;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_108> AgradCdfNegBinomial2_fv_108;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_109> AgradCdfNegBinomial2_fv_109;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_110> AgradCdfNegBinomial2_fv_110;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_111> AgradCdfNegBinomial2_fv_111;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_112> AgradCdfNegBinomial2_fv_112;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_113> AgradCdfNegBinomial2_fv_113;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_114> AgradCdfNegBinomial2_fv_114;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_115> AgradCdfNegBinomial2_fv_115;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_116> AgradCdfNegBinomial2_fv_116;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_117> AgradCdfNegBinomial2_fv_117;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_118> AgradCdfNegBinomial2_fv_118;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_119> AgradCdfNegBinomial2_fv_119;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_120> AgradCdfNegBinomial2_fv_120;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_121> AgradCdfNegBinomial2_fv_121;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_122> AgradCdfNegBinomial2_fv_122;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_123> AgradCdfNegBinomial2_fv_123;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_124> AgradCdfNegBinomial2_fv_124;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_125> AgradCdfNegBinomial2_fv_125;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_126> AgradCdfNegBinomial2_fv_126;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_127> AgradCdfNegBinomial2_fv_127;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_128> AgradCdfNegBinomial2_fv_128;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_129> AgradCdfNegBinomial2_fv_129;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_130> AgradCdfNegBinomial2_fv_130;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_131> AgradCdfNegBinomial2_fv_131;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_132> AgradCdfNegBinomial2_fv_132;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_133> AgradCdfNegBinomial2_fv_133;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_134> AgradCdfNegBinomial2_fv_134;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_135> AgradCdfNegBinomial2_fv_135;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_136> AgradCdfNegBinomial2_fv_136;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_137> AgradCdfNegBinomial2_fv_137;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_138> AgradCdfNegBinomial2_fv_138;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_139> AgradCdfNegBinomial2_fv_139;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_140> AgradCdfNegBinomial2_fv_140;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_141> AgradCdfNegBinomial2_fv_141;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_142> AgradCdfNegBinomial2_fv_142;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_143> AgradCdfNegBinomial2_fv_143;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_144> AgradCdfNegBinomial2_fv_144;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_145> AgradCdfNegBinomial2_fv_145;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_146> AgradCdfNegBinomial2_fv_146;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_147> AgradCdfNegBinomial2_fv_147;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_148> AgradCdfNegBinomial2_fv_148;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_149> AgradCdfNegBinomial2_fv_149;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_150> AgradCdfNegBinomial2_fv_150;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_151> AgradCdfNegBinomial2_fv_151;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_152> AgradCdfNegBinomial2_fv_152;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_153> AgradCdfNegBinomial2_fv_153;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_154> AgradCdfNegBinomial2_fv_154;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_155> AgradCdfNegBinomial2_fv_155;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_156> AgradCdfNegBinomial2_fv_156;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_157> AgradCdfNegBinomial2_fv_157;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_158> AgradCdfNegBinomial2_fv_158;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_159> AgradCdfNegBinomial2_fv_159;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_160> AgradCdfNegBinomial2_fv_160;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_161> AgradCdfNegBinomial2_fv_161;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_162> AgradCdfNegBinomial2_fv_162;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_163> AgradCdfNegBinomial2_fv_163;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_164> AgradCdfNegBinomial2_fv_164;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_165> AgradCdfNegBinomial2_fv_165;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_166> AgradCdfNegBinomial2_fv_166;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_167> AgradCdfNegBinomial2_fv_167;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_168> AgradCdfNegBinomial2_fv_168;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_169> AgradCdfNegBinomial2_fv_169;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_170> AgradCdfNegBinomial2_fv_170;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_171> AgradCdfNegBinomial2_fv_171;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_172> AgradCdfNegBinomial2_fv_172;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_173> AgradCdfNegBinomial2_fv_173;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_174> AgradCdfNegBinomial2_fv_174;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_175> AgradCdfNegBinomial2_fv_175;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_176> AgradCdfNegBinomial2_fv_176;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_177> AgradCdfNegBinomial2_fv_177;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_178> AgradCdfNegBinomial2_fv_178;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_179> AgradCdfNegBinomial2_fv_179;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_180> AgradCdfNegBinomial2_fv_180;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_181> AgradCdfNegBinomial2_fv_181;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_182> AgradCdfNegBinomial2_fv_182;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_183> AgradCdfNegBinomial2_fv_183;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_184> AgradCdfNegBinomial2_fv_184;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_185> AgradCdfNegBinomial2_fv_185;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_186> AgradCdfNegBinomial2_fv_186;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_187> AgradCdfNegBinomial2_fv_187;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_188> AgradCdfNegBinomial2_fv_188;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_189> AgradCdfNegBinomial2_fv_189;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_190> AgradCdfNegBinomial2_fv_190;
typedef boost::mpl::vector<AgradCdfNegBinomial2, type_fv_191> AgradCdfNegBinomial2_fv_191;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_100, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_100);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_101, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_101);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_102, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_102);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_103, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_103);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_104, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_104);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_105, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_105);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_106, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_106);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_107, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_107);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_108, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_108);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_109, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_109);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_110, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_110);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_111, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_111);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_112, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_112);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_113, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_113);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_114, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_114);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_115, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_115);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_116, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_116);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_117, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_117);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_118, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_118);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_119, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_119);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_120, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_120);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_121, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_121);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_122, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_122);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_123, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_123);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_124, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_124);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_125, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_125);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_126, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_126);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_127, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_127);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_128, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_128);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_129, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_129);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_130, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_130);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_131, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_131);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_132, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_132);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_133, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_133);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_134, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_134);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_135, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_135);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_136, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_136);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_137, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_137);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_138, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_138);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_139, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_139);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_140, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_140);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_141, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_141);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_142, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_142);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_143, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_143);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_144, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_144);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_145, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_145);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_146, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_146);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_147, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_147);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_148, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_148);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_149, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_149);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_150, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_150);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_151, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_151);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_152, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_152);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_153, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_153);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_154, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_154);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_155, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_155);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_156, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_156);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_157, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_157);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_158, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_158);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_159, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_159);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_160, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_160);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_161, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_161);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_162, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_162);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_163, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_163);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_164, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_164);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_165, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_165);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_166, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_166);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_167, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_167);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_168, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_168);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_169, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_169);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_170, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_170);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_171, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_171);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_172, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_172);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_173, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_173);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_174, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_174);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_175, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_175);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_176, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_176);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_177, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_177);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_178, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_178);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_179, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_179);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_180, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_180);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_181, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_181);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_182, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_182);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_183, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_183);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_184, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_184);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_185, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_185);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_186, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_186);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_187, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_187);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_188, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_188);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_189, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_189);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_190, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_190);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfNegBinomial2_fv_191, AgradCdfTestFixture, AgradCdfNegBinomial2_fv_191);

