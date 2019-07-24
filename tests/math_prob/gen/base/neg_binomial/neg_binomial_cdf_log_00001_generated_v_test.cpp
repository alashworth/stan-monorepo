#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <neg_binomial/neg_binomial_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_200> AgradCdfLogNegBinomial_v_200;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_201> AgradCdfLogNegBinomial_v_201;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_202> AgradCdfLogNegBinomial_v_202;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_203> AgradCdfLogNegBinomial_v_203;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_204> AgradCdfLogNegBinomial_v_204;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_205> AgradCdfLogNegBinomial_v_205;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_206> AgradCdfLogNegBinomial_v_206;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_207> AgradCdfLogNegBinomial_v_207;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_208> AgradCdfLogNegBinomial_v_208;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_209> AgradCdfLogNegBinomial_v_209;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_210> AgradCdfLogNegBinomial_v_210;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_211> AgradCdfLogNegBinomial_v_211;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_212> AgradCdfLogNegBinomial_v_212;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_213> AgradCdfLogNegBinomial_v_213;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_214> AgradCdfLogNegBinomial_v_214;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_215> AgradCdfLogNegBinomial_v_215;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_216> AgradCdfLogNegBinomial_v_216;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_217> AgradCdfLogNegBinomial_v_217;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_218> AgradCdfLogNegBinomial_v_218;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_219> AgradCdfLogNegBinomial_v_219;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_220> AgradCdfLogNegBinomial_v_220;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_221> AgradCdfLogNegBinomial_v_221;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_222> AgradCdfLogNegBinomial_v_222;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_223> AgradCdfLogNegBinomial_v_223;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_224> AgradCdfLogNegBinomial_v_224;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_225> AgradCdfLogNegBinomial_v_225;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_226> AgradCdfLogNegBinomial_v_226;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_227> AgradCdfLogNegBinomial_v_227;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_228> AgradCdfLogNegBinomial_v_228;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_229> AgradCdfLogNegBinomial_v_229;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_230> AgradCdfLogNegBinomial_v_230;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_231> AgradCdfLogNegBinomial_v_231;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_232> AgradCdfLogNegBinomial_v_232;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_233> AgradCdfLogNegBinomial_v_233;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_234> AgradCdfLogNegBinomial_v_234;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_235> AgradCdfLogNegBinomial_v_235;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_236> AgradCdfLogNegBinomial_v_236;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_237> AgradCdfLogNegBinomial_v_237;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_238> AgradCdfLogNegBinomial_v_238;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_239> AgradCdfLogNegBinomial_v_239;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_240> AgradCdfLogNegBinomial_v_240;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_241> AgradCdfLogNegBinomial_v_241;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_242> AgradCdfLogNegBinomial_v_242;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_243> AgradCdfLogNegBinomial_v_243;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_244> AgradCdfLogNegBinomial_v_244;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_245> AgradCdfLogNegBinomial_v_245;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_246> AgradCdfLogNegBinomial_v_246;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_247> AgradCdfLogNegBinomial_v_247;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_248> AgradCdfLogNegBinomial_v_248;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_249> AgradCdfLogNegBinomial_v_249;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_250> AgradCdfLogNegBinomial_v_250;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_251> AgradCdfLogNegBinomial_v_251;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_252> AgradCdfLogNegBinomial_v_252;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_253> AgradCdfLogNegBinomial_v_253;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_254> AgradCdfLogNegBinomial_v_254;
typedef boost::mpl::vector<AgradCdfLogNegBinomial, type_v_255> AgradCdfLogNegBinomial_v_255;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_200, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_200);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_201, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_201);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_202, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_202);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_203, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_203);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_204, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_204);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_205, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_205);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_206, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_206);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_207, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_207);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_208, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_208);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_209, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_209);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_210, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_210);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_211, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_211);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_212, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_212);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_213, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_213);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_214, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_214);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_215, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_215);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_216, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_216);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_217, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_217);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_218, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_218);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_219, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_219);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_220, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_220);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_221, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_221);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_222, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_222);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_223, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_223);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_224, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_224);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_225, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_225);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_226, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_226);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_227, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_227);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_228, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_228);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_229, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_229);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_230, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_230);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_231, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_231);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_232, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_232);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_233, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_233);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_234, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_234);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_235, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_235);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_236, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_236);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_237, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_237);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_238, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_238);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_239, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_239);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_240, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_240);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_241, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_241);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_242, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_242);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_243, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_243);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_244, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_244);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_245, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_245);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_246, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_246);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_247, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_247);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_248, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_248);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_249, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_249);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_250, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_250);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_251, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_251);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_252, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_252);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_253, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_253);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_254, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_254);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogNegBinomial_v_255, AgradCdfLogTestFixture, AgradCdfLogNegBinomial_v_255);
