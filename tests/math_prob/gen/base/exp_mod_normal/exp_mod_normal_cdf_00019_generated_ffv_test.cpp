#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <exp_mod_normal/exp_mod_normal_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_ffv_3800;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_ffv_3801;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffv_3802;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffv_3803;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty> type_ffv_3804;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty> type_ffv_3805;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty> type_ffv_3806;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty> type_ffv_3807;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, double, empty, empty> type_ffv_3808;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<double>, empty, empty> type_ffv_3809;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffv_3810;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffv_3811;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, fvar<fvar<var> >, empty, empty> type_ffv_3812;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, std::vector<fvar<fvar<var> >>, empty, empty> type_ffv_3813;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty> type_ffv_3814;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty> type_ffv_3815;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, double, empty, empty> type_ffv_3816;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<double>, empty, empty> type_ffv_3817;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffv_3818;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffv_3819;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, fvar<fvar<var> >, empty, empty> type_ffv_3820;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, std::vector<fvar<fvar<var> >>, empty, empty> type_ffv_3821;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty> type_ffv_3822;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty> type_ffv_3823;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, double, empty, empty> type_ffv_3824;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_ffv_3825;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffv_3826;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffv_3827;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, fvar<fvar<var> >, empty, empty> type_ffv_3828;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<var> >>, empty, empty> type_ffv_3829;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty> type_ffv_3830;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty> type_ffv_3831;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, double, empty, empty> type_ffv_3832;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_ffv_3833;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffv_3834;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffv_3835;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, fvar<fvar<var> >, empty, empty> type_ffv_3836;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<var> >>, empty, empty> type_ffv_3837;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, Eigen::Dynamic, 1>, empty, empty> type_ffv_3838;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<var> >, 1, Eigen::Dynamic>, empty, empty> type_ffv_3839;

typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3800> AgradCdfExpModNormal_ffv_3800;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3801> AgradCdfExpModNormal_ffv_3801;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3802> AgradCdfExpModNormal_ffv_3802;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3803> AgradCdfExpModNormal_ffv_3803;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3804> AgradCdfExpModNormal_ffv_3804;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3805> AgradCdfExpModNormal_ffv_3805;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3806> AgradCdfExpModNormal_ffv_3806;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3807> AgradCdfExpModNormal_ffv_3807;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3808> AgradCdfExpModNormal_ffv_3808;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3809> AgradCdfExpModNormal_ffv_3809;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3810> AgradCdfExpModNormal_ffv_3810;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3811> AgradCdfExpModNormal_ffv_3811;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3812> AgradCdfExpModNormal_ffv_3812;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3813> AgradCdfExpModNormal_ffv_3813;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3814> AgradCdfExpModNormal_ffv_3814;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3815> AgradCdfExpModNormal_ffv_3815;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3816> AgradCdfExpModNormal_ffv_3816;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3817> AgradCdfExpModNormal_ffv_3817;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3818> AgradCdfExpModNormal_ffv_3818;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3819> AgradCdfExpModNormal_ffv_3819;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3820> AgradCdfExpModNormal_ffv_3820;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3821> AgradCdfExpModNormal_ffv_3821;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3822> AgradCdfExpModNormal_ffv_3822;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3823> AgradCdfExpModNormal_ffv_3823;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3824> AgradCdfExpModNormal_ffv_3824;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3825> AgradCdfExpModNormal_ffv_3825;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3826> AgradCdfExpModNormal_ffv_3826;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3827> AgradCdfExpModNormal_ffv_3827;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3828> AgradCdfExpModNormal_ffv_3828;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3829> AgradCdfExpModNormal_ffv_3829;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3830> AgradCdfExpModNormal_ffv_3830;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3831> AgradCdfExpModNormal_ffv_3831;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3832> AgradCdfExpModNormal_ffv_3832;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3833> AgradCdfExpModNormal_ffv_3833;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3834> AgradCdfExpModNormal_ffv_3834;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3835> AgradCdfExpModNormal_ffv_3835;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3836> AgradCdfExpModNormal_ffv_3836;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3837> AgradCdfExpModNormal_ffv_3837;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3838> AgradCdfExpModNormal_ffv_3838;
typedef boost::mpl::vector<AgradCdfExpModNormal, type_ffv_3839> AgradCdfExpModNormal_ffv_3839;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3800, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3801, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3802, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3803, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3804, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3805, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3806, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3807, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3808, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3809, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3810, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3811, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3812, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3813, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3814, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3815, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3816, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3817, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3818, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3819, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3820, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3821, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3822, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3823, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3824, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3825, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3826, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3827, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3828, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3829, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3830, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3831, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3832, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3833, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3834, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3835, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3836, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3837, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3838, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfExpModNormal_ffv_3839, AgradCdfTestFixture, AgradCdfExpModNormal_ffv_3839);

