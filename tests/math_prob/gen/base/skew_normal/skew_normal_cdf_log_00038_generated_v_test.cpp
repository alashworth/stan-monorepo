#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3800;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3801;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3802;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3803;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3804;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3805;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3806;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3807;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, double, empty, empty> type_v_3808;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, std::vector<double>, empty, empty> type_v_3809;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3810;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3811;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, var, empty, empty> type_v_3812;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, std::vector<var>, empty, empty> type_v_3813;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3814;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3815;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, double, empty, empty> type_v_3816;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, std::vector<double>, empty, empty> type_v_3817;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3818;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3819;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, var, empty, empty> type_v_3820;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, std::vector<var>, empty, empty> type_v_3821;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3822;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3823;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3824;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3825;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3826;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3827;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_3828;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3829;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3830;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3831;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3832;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3833;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3834;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3835;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_3836;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3837;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3838;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3839;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, double, empty, empty> type_v_3840;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, std::vector<double>, empty, empty> type_v_3841;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3842;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3843;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, var, empty, empty> type_v_3844;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, std::vector<var>, empty, empty> type_v_3845;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3846;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3847;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, double, empty, empty> type_v_3848;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, std::vector<double>, empty, empty> type_v_3849;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3850;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3851;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, var, empty, empty> type_v_3852;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, std::vector<var>, empty, empty> type_v_3853;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3854;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3855;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_3856;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3857;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3858;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3859;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_3860;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3861;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3862;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3863;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3864;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3865;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3866;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3867;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3868;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3869;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3870;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3871;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, double, empty, empty> type_v_3872;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, std::vector<double>, empty, empty> type_v_3873;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3874;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3875;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, var, empty, empty> type_v_3876;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, std::vector<var>, empty, empty> type_v_3877;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3878;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3879;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, double, empty, empty> type_v_3880;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, std::vector<double>, empty, empty> type_v_3881;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3882;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3883;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, var, empty, empty> type_v_3884;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, std::vector<var>, empty, empty> type_v_3885;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3886;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3887;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3888;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3889;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3890;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3891;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_3892;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3893;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3894;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3895;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3896;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3897;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3898;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3899;

typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3800> AgradCdfLogSkewNormal_v_3800;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3801> AgradCdfLogSkewNormal_v_3801;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3802> AgradCdfLogSkewNormal_v_3802;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3803> AgradCdfLogSkewNormal_v_3803;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3804> AgradCdfLogSkewNormal_v_3804;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3805> AgradCdfLogSkewNormal_v_3805;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3806> AgradCdfLogSkewNormal_v_3806;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3807> AgradCdfLogSkewNormal_v_3807;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3808> AgradCdfLogSkewNormal_v_3808;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3809> AgradCdfLogSkewNormal_v_3809;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3810> AgradCdfLogSkewNormal_v_3810;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3811> AgradCdfLogSkewNormal_v_3811;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3812> AgradCdfLogSkewNormal_v_3812;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3813> AgradCdfLogSkewNormal_v_3813;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3814> AgradCdfLogSkewNormal_v_3814;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3815> AgradCdfLogSkewNormal_v_3815;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3816> AgradCdfLogSkewNormal_v_3816;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3817> AgradCdfLogSkewNormal_v_3817;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3818> AgradCdfLogSkewNormal_v_3818;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3819> AgradCdfLogSkewNormal_v_3819;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3820> AgradCdfLogSkewNormal_v_3820;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3821> AgradCdfLogSkewNormal_v_3821;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3822> AgradCdfLogSkewNormal_v_3822;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3823> AgradCdfLogSkewNormal_v_3823;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3824> AgradCdfLogSkewNormal_v_3824;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3825> AgradCdfLogSkewNormal_v_3825;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3826> AgradCdfLogSkewNormal_v_3826;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3827> AgradCdfLogSkewNormal_v_3827;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3828> AgradCdfLogSkewNormal_v_3828;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3829> AgradCdfLogSkewNormal_v_3829;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3830> AgradCdfLogSkewNormal_v_3830;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3831> AgradCdfLogSkewNormal_v_3831;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3832> AgradCdfLogSkewNormal_v_3832;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3833> AgradCdfLogSkewNormal_v_3833;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3834> AgradCdfLogSkewNormal_v_3834;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3835> AgradCdfLogSkewNormal_v_3835;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3836> AgradCdfLogSkewNormal_v_3836;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3837> AgradCdfLogSkewNormal_v_3837;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3838> AgradCdfLogSkewNormal_v_3838;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3839> AgradCdfLogSkewNormal_v_3839;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3840> AgradCdfLogSkewNormal_v_3840;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3841> AgradCdfLogSkewNormal_v_3841;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3842> AgradCdfLogSkewNormal_v_3842;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3843> AgradCdfLogSkewNormal_v_3843;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3844> AgradCdfLogSkewNormal_v_3844;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3845> AgradCdfLogSkewNormal_v_3845;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3846> AgradCdfLogSkewNormal_v_3846;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3847> AgradCdfLogSkewNormal_v_3847;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3848> AgradCdfLogSkewNormal_v_3848;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3849> AgradCdfLogSkewNormal_v_3849;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3850> AgradCdfLogSkewNormal_v_3850;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3851> AgradCdfLogSkewNormal_v_3851;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3852> AgradCdfLogSkewNormal_v_3852;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3853> AgradCdfLogSkewNormal_v_3853;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3854> AgradCdfLogSkewNormal_v_3854;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3855> AgradCdfLogSkewNormal_v_3855;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3856> AgradCdfLogSkewNormal_v_3856;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3857> AgradCdfLogSkewNormal_v_3857;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3858> AgradCdfLogSkewNormal_v_3858;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3859> AgradCdfLogSkewNormal_v_3859;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3860> AgradCdfLogSkewNormal_v_3860;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3861> AgradCdfLogSkewNormal_v_3861;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3862> AgradCdfLogSkewNormal_v_3862;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3863> AgradCdfLogSkewNormal_v_3863;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3864> AgradCdfLogSkewNormal_v_3864;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3865> AgradCdfLogSkewNormal_v_3865;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3866> AgradCdfLogSkewNormal_v_3866;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3867> AgradCdfLogSkewNormal_v_3867;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3868> AgradCdfLogSkewNormal_v_3868;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3869> AgradCdfLogSkewNormal_v_3869;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3870> AgradCdfLogSkewNormal_v_3870;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3871> AgradCdfLogSkewNormal_v_3871;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3872> AgradCdfLogSkewNormal_v_3872;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3873> AgradCdfLogSkewNormal_v_3873;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3874> AgradCdfLogSkewNormal_v_3874;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3875> AgradCdfLogSkewNormal_v_3875;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3876> AgradCdfLogSkewNormal_v_3876;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3877> AgradCdfLogSkewNormal_v_3877;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3878> AgradCdfLogSkewNormal_v_3878;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3879> AgradCdfLogSkewNormal_v_3879;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3880> AgradCdfLogSkewNormal_v_3880;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3881> AgradCdfLogSkewNormal_v_3881;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3882> AgradCdfLogSkewNormal_v_3882;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3883> AgradCdfLogSkewNormal_v_3883;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3884> AgradCdfLogSkewNormal_v_3884;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3885> AgradCdfLogSkewNormal_v_3885;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3886> AgradCdfLogSkewNormal_v_3886;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3887> AgradCdfLogSkewNormal_v_3887;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3888> AgradCdfLogSkewNormal_v_3888;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3889> AgradCdfLogSkewNormal_v_3889;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3890> AgradCdfLogSkewNormal_v_3890;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3891> AgradCdfLogSkewNormal_v_3891;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3892> AgradCdfLogSkewNormal_v_3892;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3893> AgradCdfLogSkewNormal_v_3893;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3894> AgradCdfLogSkewNormal_v_3894;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3895> AgradCdfLogSkewNormal_v_3895;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3896> AgradCdfLogSkewNormal_v_3896;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3897> AgradCdfLogSkewNormal_v_3897;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3898> AgradCdfLogSkewNormal_v_3898;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3899> AgradCdfLogSkewNormal_v_3899;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3800, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3801, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3802, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3803, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3804, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3805, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3806, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3807, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3808, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3809, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3810, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3811, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3812, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3813, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3814, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3815, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3816, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3817, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3818, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3819, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3820, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3821, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3822, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3823, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3824, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3825, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3826, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3827, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3828, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3829, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3830, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3831, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3832, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3833, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3834, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3835, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3836, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3837, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3838, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3839, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3839);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3840, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3840);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3841, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3841);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3842, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3842);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3843, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3843);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3844, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3844);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3845, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3845);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3846, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3846);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3847, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3847);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3848, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3848);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3849, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3849);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3850, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3850);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3851, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3851);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3852, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3852);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3853, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3853);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3854, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3854);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3855, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3855);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3856, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3856);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3857, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3857);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3858, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3858);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3859, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3859);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3860, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3860);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3861, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3861);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3862, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3862);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3863, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3863);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3864, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3864);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3865, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3865);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3866, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3866);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3867, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3867);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3868, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3868);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3869, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3869);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3870, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3870);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3871, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3871);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3872, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3872);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3873, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3873);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3874, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3874);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3875, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3875);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3876, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3876);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3877, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3877);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3878, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3878);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3879, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3879);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3880, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3880);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3881, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3881);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3882, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3882);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3883, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3883);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3884, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3884);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3885, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3885);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3886, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3886);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3887, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3887);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3888, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3888);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3889, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3889);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3890, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3890);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3891, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3891);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3892, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3892);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3893, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3893);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3894, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3894);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3895, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3895);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3896, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3896);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3897, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3897);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3898, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3898);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3899, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3899);
