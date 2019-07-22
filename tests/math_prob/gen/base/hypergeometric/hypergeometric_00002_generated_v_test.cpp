#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/hypergeometric/hypergeometric_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, empty, empty> type_v_200;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, empty, empty> type_v_201;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_202;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_203;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, empty, empty> type_v_204;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, empty, empty> type_v_205;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_206;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_207;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, int, int, empty, empty> type_v_208;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, int, std::vector<int>, empty, empty> type_v_209;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_210;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_211;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<int>, int, empty, empty> type_v_212;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<int>, std::vector<int>, empty, empty> type_v_213;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_214;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_215;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, empty, empty> type_v_216;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, empty, empty> type_v_217;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_218;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_219;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, empty, empty> type_v_220;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, empty, empty> type_v_221;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_222;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_223;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, int, empty, empty> type_v_224;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, std::vector<int>, empty, empty> type_v_225;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_226;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_227;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, int, empty, empty> type_v_228;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, std::vector<int>, empty, empty> type_v_229;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_230;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_231;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, empty, empty> type_v_232;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, empty, empty> type_v_233;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_234;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_235;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, empty, empty> type_v_236;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, empty, empty> type_v_237;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_238;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_239;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, int, empty, empty> type_v_240;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, std::vector<int>, empty, empty> type_v_241;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_242;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_243;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, int, empty, empty> type_v_244;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, std::vector<int>, empty, empty> type_v_245;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_246;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_247;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, int, empty, empty> type_v_248;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, std::vector<int>, empty, empty> type_v_249;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_250;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_251;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, int, empty, empty> type_v_252;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, std::vector<int>, empty, empty> type_v_253;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, Eigen::Dynamic, 1>, empty, empty> type_v_254;
typedef boost::mpl::vector<Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, Eigen::Matrix<int, 1, Eigen::Dynamic>, empty, empty> type_v_255;

typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_200> AgradDistributionsNegBinomial_v_200;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_201> AgradDistributionsNegBinomial_v_201;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_202> AgradDistributionsNegBinomial_v_202;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_203> AgradDistributionsNegBinomial_v_203;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_204> AgradDistributionsNegBinomial_v_204;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_205> AgradDistributionsNegBinomial_v_205;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_206> AgradDistributionsNegBinomial_v_206;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_207> AgradDistributionsNegBinomial_v_207;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_208> AgradDistributionsNegBinomial_v_208;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_209> AgradDistributionsNegBinomial_v_209;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_210> AgradDistributionsNegBinomial_v_210;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_211> AgradDistributionsNegBinomial_v_211;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_212> AgradDistributionsNegBinomial_v_212;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_213> AgradDistributionsNegBinomial_v_213;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_214> AgradDistributionsNegBinomial_v_214;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_215> AgradDistributionsNegBinomial_v_215;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_216> AgradDistributionsNegBinomial_v_216;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_217> AgradDistributionsNegBinomial_v_217;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_218> AgradDistributionsNegBinomial_v_218;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_219> AgradDistributionsNegBinomial_v_219;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_220> AgradDistributionsNegBinomial_v_220;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_221> AgradDistributionsNegBinomial_v_221;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_222> AgradDistributionsNegBinomial_v_222;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_223> AgradDistributionsNegBinomial_v_223;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_224> AgradDistributionsNegBinomial_v_224;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_225> AgradDistributionsNegBinomial_v_225;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_226> AgradDistributionsNegBinomial_v_226;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_227> AgradDistributionsNegBinomial_v_227;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_228> AgradDistributionsNegBinomial_v_228;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_229> AgradDistributionsNegBinomial_v_229;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_230> AgradDistributionsNegBinomial_v_230;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_231> AgradDistributionsNegBinomial_v_231;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_232> AgradDistributionsNegBinomial_v_232;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_233> AgradDistributionsNegBinomial_v_233;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_234> AgradDistributionsNegBinomial_v_234;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_235> AgradDistributionsNegBinomial_v_235;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_236> AgradDistributionsNegBinomial_v_236;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_237> AgradDistributionsNegBinomial_v_237;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_238> AgradDistributionsNegBinomial_v_238;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_239> AgradDistributionsNegBinomial_v_239;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_240> AgradDistributionsNegBinomial_v_240;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_241> AgradDistributionsNegBinomial_v_241;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_242> AgradDistributionsNegBinomial_v_242;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_243> AgradDistributionsNegBinomial_v_243;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_244> AgradDistributionsNegBinomial_v_244;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_245> AgradDistributionsNegBinomial_v_245;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_246> AgradDistributionsNegBinomial_v_246;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_247> AgradDistributionsNegBinomial_v_247;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_248> AgradDistributionsNegBinomial_v_248;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_249> AgradDistributionsNegBinomial_v_249;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_250> AgradDistributionsNegBinomial_v_250;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_251> AgradDistributionsNegBinomial_v_251;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_252> AgradDistributionsNegBinomial_v_252;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_253> AgradDistributionsNegBinomial_v_253;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_254> AgradDistributionsNegBinomial_v_254;
typedef boost::mpl::vector<AgradDistributionsNegBinomial, type_v_255> AgradDistributionsNegBinomial_v_255;

INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_200, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_200);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_201, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_201);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_202, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_202);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_203, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_203);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_204, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_204);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_205, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_205);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_206, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_206);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_207, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_207);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_208, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_208);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_209, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_209);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_210, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_210);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_211, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_211);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_212, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_212);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_213, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_213);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_214, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_214);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_215, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_215);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_216, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_216);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_217, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_217);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_218, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_218);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_219, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_219);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_220, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_220);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_221, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_221);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_222, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_222);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_223, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_223);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_224, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_224);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_225, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_225);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_226, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_226);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_227, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_227);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_228, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_228);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_229, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_229);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_230, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_230);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_231, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_231);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_232, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_232);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_233, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_233);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_234, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_234);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_235, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_235);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_236, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_236);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_237, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_237);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_238, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_238);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_239, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_239);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_240, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_240);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_241, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_241);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_242, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_242);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_243, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_243);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_244, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_244);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_245, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_245);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_246, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_246);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_247, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_247);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_248, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_248);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_249, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_249);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_250, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_250);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_251, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_251);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_252, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_252);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_253, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_253);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_254, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_254);
INSTANTIATE_TYPED_TEST_CASE_P(AgradDistributionsNegBinomial_v_255, AgradDistributionTestFixture, AgradDistributionsNegBinomial_v_255);

