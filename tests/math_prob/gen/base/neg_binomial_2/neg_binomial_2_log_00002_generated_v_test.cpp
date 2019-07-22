#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/neg_binomial_2/neg_binomial_2_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, double, empty, empty, empty> type_v_200;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, empty, empty, empty> type_v_201;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_202;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_203;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, var, empty, empty, empty> type_v_204;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, empty, empty, empty> type_v_205;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_206;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_207;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_208;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_209;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_210;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_211;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_212;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_213;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_214;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_215;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_216;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_217;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_218;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_219;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_220;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_221;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_222;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_223;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, double, empty, empty, empty> type_v_224;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty, empty> type_v_225;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_226;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_227;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, var, empty, empty, empty> type_v_228;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty, empty> type_v_229;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_230;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_231;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty, empty> type_v_232;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty, empty> type_v_233;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_234;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_235;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty, empty> type_v_236;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty, empty> type_v_237;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_238;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_239;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty, empty> type_v_240;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty, empty> type_v_241;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_242;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_243;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty, empty> type_v_244;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty, empty> type_v_245;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_246;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_247;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty, empty> type_v_248;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty, empty> type_v_249;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty, empty> type_v_250;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty, empty> type_v_251;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty, empty> type_v_252;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty, empty> type_v_253;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty, empty> type_v_254;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty, empty> type_v_255;

typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_200> AgradDistributionsNegBinomial2Log_v_200;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_201> AgradDistributionsNegBinomial2Log_v_201;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_202> AgradDistributionsNegBinomial2Log_v_202;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_203> AgradDistributionsNegBinomial2Log_v_203;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_204> AgradDistributionsNegBinomial2Log_v_204;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_205> AgradDistributionsNegBinomial2Log_v_205;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_206> AgradDistributionsNegBinomial2Log_v_206;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_207> AgradDistributionsNegBinomial2Log_v_207;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_208> AgradDistributionsNegBinomial2Log_v_208;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_209> AgradDistributionsNegBinomial2Log_v_209;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_210> AgradDistributionsNegBinomial2Log_v_210;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_211> AgradDistributionsNegBinomial2Log_v_211;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_212> AgradDistributionsNegBinomial2Log_v_212;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_213> AgradDistributionsNegBinomial2Log_v_213;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_214> AgradDistributionsNegBinomial2Log_v_214;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_215> AgradDistributionsNegBinomial2Log_v_215;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_216> AgradDistributionsNegBinomial2Log_v_216;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_217> AgradDistributionsNegBinomial2Log_v_217;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_218> AgradDistributionsNegBinomial2Log_v_218;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_219> AgradDistributionsNegBinomial2Log_v_219;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_220> AgradDistributionsNegBinomial2Log_v_220;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_221> AgradDistributionsNegBinomial2Log_v_221;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_222> AgradDistributionsNegBinomial2Log_v_222;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_223> AgradDistributionsNegBinomial2Log_v_223;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_224> AgradDistributionsNegBinomial2Log_v_224;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_225> AgradDistributionsNegBinomial2Log_v_225;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_226> AgradDistributionsNegBinomial2Log_v_226;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_227> AgradDistributionsNegBinomial2Log_v_227;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_228> AgradDistributionsNegBinomial2Log_v_228;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_229> AgradDistributionsNegBinomial2Log_v_229;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_230> AgradDistributionsNegBinomial2Log_v_230;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_231> AgradDistributionsNegBinomial2Log_v_231;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_232> AgradDistributionsNegBinomial2Log_v_232;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_233> AgradDistributionsNegBinomial2Log_v_233;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_234> AgradDistributionsNegBinomial2Log_v_234;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_235> AgradDistributionsNegBinomial2Log_v_235;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_236> AgradDistributionsNegBinomial2Log_v_236;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_237> AgradDistributionsNegBinomial2Log_v_237;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_238> AgradDistributionsNegBinomial2Log_v_238;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_239> AgradDistributionsNegBinomial2Log_v_239;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_240> AgradDistributionsNegBinomial2Log_v_240;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_241> AgradDistributionsNegBinomial2Log_v_241;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_242> AgradDistributionsNegBinomial2Log_v_242;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_243> AgradDistributionsNegBinomial2Log_v_243;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_244> AgradDistributionsNegBinomial2Log_v_244;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_245> AgradDistributionsNegBinomial2Log_v_245;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_246> AgradDistributionsNegBinomial2Log_v_246;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_247> AgradDistributionsNegBinomial2Log_v_247;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_248> AgradDistributionsNegBinomial2Log_v_248;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_249> AgradDistributionsNegBinomial2Log_v_249;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_250> AgradDistributionsNegBinomial2Log_v_250;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_251> AgradDistributionsNegBinomial2Log_v_251;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_252> AgradDistributionsNegBinomial2Log_v_252;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_253> AgradDistributionsNegBinomial2Log_v_253;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_254> AgradDistributionsNegBinomial2Log_v_254;
typedef boost::mpl::vector<AgradDistributionsNegBinomial2Log, type_v_255> AgradDistributionsNegBinomial2Log_v_255;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_200, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_200);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_201, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_201);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_202, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_202);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_203, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_203);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_204, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_204);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_205, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_205);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_206, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_206);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_207, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_207);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_208, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_208);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_209, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_209);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_210, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_210);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_211, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_211);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_212, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_212);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_213, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_213);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_214, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_214);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_215, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_215);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_216, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_216);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_217, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_217);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_218, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_218);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_219, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_219);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_220, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_220);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_221, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_221);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_222, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_222);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_223, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_223);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_224, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_224);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_225, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_225);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_226, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_226);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_227, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_227);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_228, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_228);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_229, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_229);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_230, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_230);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_231, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_231);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_232, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_232);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_233, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_233);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_234, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_234);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_235, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_235);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_236, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_236);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_237, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_237);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_238, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_238);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_239, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_239);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_240, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_240);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_241, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_241);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_242, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_242);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_243, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_243);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_244, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_244);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_245, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_245);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_246, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_246);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_247, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_247);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_248, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_248);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_249, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_249);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_250, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_250);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_251, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_251);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_252, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_252);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_253, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_253);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_254, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_254);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial2Log_v_255, AgradDistributionTestFixture, AgradDistributionsNegBinomial2Log_v_255);

