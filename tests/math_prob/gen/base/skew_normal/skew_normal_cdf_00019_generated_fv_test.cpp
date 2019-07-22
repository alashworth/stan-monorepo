#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <skew_normal/skew_normal_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fv_3800;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_3801;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_3802;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_3803;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_3804;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_3805;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_3806;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_3807;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, double, empty, empty> type_fv_3808;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<double>, empty, empty> type_fv_3809;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_3810;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_3811;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, fvar<var>, empty, empty> type_fv_3812;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, std::vector<fvar<var>>, empty, empty> type_fv_3813;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_3814;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_3815;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, double, empty, empty> type_fv_3816;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<double>, empty, empty> type_fv_3817;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_3818;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_3819;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, fvar<var>, empty, empty> type_fv_3820;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, std::vector<fvar<var>>, empty, empty> type_fv_3821;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_3822;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_3823;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, double, empty, empty> type_fv_3824;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fv_3825;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_3826;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_3827;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, fvar<var>, empty, empty> type_fv_3828;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, std::vector<fvar<var>>, empty, empty> type_fv_3829;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_3830;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_3831;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, double, empty, empty> type_fv_3832;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fv_3833;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fv_3834;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fv_3835;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, fvar<var>, empty, empty> type_fv_3836;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, std::vector<fvar<var>>, empty, empty> type_fv_3837;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, Eigen::Dynamic, 1>, empty, empty> type_fv_3838;
typedef boost::mpl::vector<Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<var>, 1, Eigen::Dynamic>, empty, empty> type_fv_3839;

typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3800> AgradCdfSkewNormal_fv_3800;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3801> AgradCdfSkewNormal_fv_3801;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3802> AgradCdfSkewNormal_fv_3802;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3803> AgradCdfSkewNormal_fv_3803;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3804> AgradCdfSkewNormal_fv_3804;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3805> AgradCdfSkewNormal_fv_3805;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3806> AgradCdfSkewNormal_fv_3806;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3807> AgradCdfSkewNormal_fv_3807;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3808> AgradCdfSkewNormal_fv_3808;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3809> AgradCdfSkewNormal_fv_3809;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3810> AgradCdfSkewNormal_fv_3810;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3811> AgradCdfSkewNormal_fv_3811;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3812> AgradCdfSkewNormal_fv_3812;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3813> AgradCdfSkewNormal_fv_3813;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3814> AgradCdfSkewNormal_fv_3814;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3815> AgradCdfSkewNormal_fv_3815;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3816> AgradCdfSkewNormal_fv_3816;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3817> AgradCdfSkewNormal_fv_3817;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3818> AgradCdfSkewNormal_fv_3818;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3819> AgradCdfSkewNormal_fv_3819;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3820> AgradCdfSkewNormal_fv_3820;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3821> AgradCdfSkewNormal_fv_3821;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3822> AgradCdfSkewNormal_fv_3822;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3823> AgradCdfSkewNormal_fv_3823;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3824> AgradCdfSkewNormal_fv_3824;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3825> AgradCdfSkewNormal_fv_3825;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3826> AgradCdfSkewNormal_fv_3826;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3827> AgradCdfSkewNormal_fv_3827;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3828> AgradCdfSkewNormal_fv_3828;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3829> AgradCdfSkewNormal_fv_3829;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3830> AgradCdfSkewNormal_fv_3830;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3831> AgradCdfSkewNormal_fv_3831;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3832> AgradCdfSkewNormal_fv_3832;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3833> AgradCdfSkewNormal_fv_3833;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3834> AgradCdfSkewNormal_fv_3834;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3835> AgradCdfSkewNormal_fv_3835;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3836> AgradCdfSkewNormal_fv_3836;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3837> AgradCdfSkewNormal_fv_3837;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3838> AgradCdfSkewNormal_fv_3838;
typedef boost::mpl::vector<AgradCdfSkewNormal, type_fv_3839> AgradCdfSkewNormal_fv_3839;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3800, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3801, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3802, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3803, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3804, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3805, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3806, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3807, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3808, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3809, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3810, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3811, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3812, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3813, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3814, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3815, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3816, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3817, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3818, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3819, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3820, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3821, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3822, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3823, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3824, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3825, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3826, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3827, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3828, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3829, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3830, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3831, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3832, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3833, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3834, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3835, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3836, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3837, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3838, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfSkewNormal_fv_3839, AgradCdfTestFixture, AgradCdfSkewNormal_fv_3839);

