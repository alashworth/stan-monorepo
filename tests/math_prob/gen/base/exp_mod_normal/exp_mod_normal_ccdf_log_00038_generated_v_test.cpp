#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/exp_mod_normal/exp_mod_normal_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3800> AgradCcdfLogExpModNormal_v_3800;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3801> AgradCcdfLogExpModNormal_v_3801;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3802> AgradCcdfLogExpModNormal_v_3802;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3803> AgradCcdfLogExpModNormal_v_3803;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3804> AgradCcdfLogExpModNormal_v_3804;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3805> AgradCcdfLogExpModNormal_v_3805;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3806> AgradCcdfLogExpModNormal_v_3806;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3807> AgradCcdfLogExpModNormal_v_3807;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3808> AgradCcdfLogExpModNormal_v_3808;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3809> AgradCcdfLogExpModNormal_v_3809;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3810> AgradCcdfLogExpModNormal_v_3810;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3811> AgradCcdfLogExpModNormal_v_3811;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3812> AgradCcdfLogExpModNormal_v_3812;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3813> AgradCcdfLogExpModNormal_v_3813;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3814> AgradCcdfLogExpModNormal_v_3814;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3815> AgradCcdfLogExpModNormal_v_3815;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3816> AgradCcdfLogExpModNormal_v_3816;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3817> AgradCcdfLogExpModNormal_v_3817;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3818> AgradCcdfLogExpModNormal_v_3818;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3819> AgradCcdfLogExpModNormal_v_3819;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3820> AgradCcdfLogExpModNormal_v_3820;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3821> AgradCcdfLogExpModNormal_v_3821;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3822> AgradCcdfLogExpModNormal_v_3822;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3823> AgradCcdfLogExpModNormal_v_3823;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3824> AgradCcdfLogExpModNormal_v_3824;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3825> AgradCcdfLogExpModNormal_v_3825;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3826> AgradCcdfLogExpModNormal_v_3826;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3827> AgradCcdfLogExpModNormal_v_3827;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3828> AgradCcdfLogExpModNormal_v_3828;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3829> AgradCcdfLogExpModNormal_v_3829;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3830> AgradCcdfLogExpModNormal_v_3830;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3831> AgradCcdfLogExpModNormal_v_3831;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3832> AgradCcdfLogExpModNormal_v_3832;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3833> AgradCcdfLogExpModNormal_v_3833;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3834> AgradCcdfLogExpModNormal_v_3834;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3835> AgradCcdfLogExpModNormal_v_3835;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3836> AgradCcdfLogExpModNormal_v_3836;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3837> AgradCcdfLogExpModNormal_v_3837;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3838> AgradCcdfLogExpModNormal_v_3838;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3839> AgradCcdfLogExpModNormal_v_3839;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3840> AgradCcdfLogExpModNormal_v_3840;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3841> AgradCcdfLogExpModNormal_v_3841;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3842> AgradCcdfLogExpModNormal_v_3842;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3843> AgradCcdfLogExpModNormal_v_3843;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3844> AgradCcdfLogExpModNormal_v_3844;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3845> AgradCcdfLogExpModNormal_v_3845;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3846> AgradCcdfLogExpModNormal_v_3846;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3847> AgradCcdfLogExpModNormal_v_3847;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3848> AgradCcdfLogExpModNormal_v_3848;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3849> AgradCcdfLogExpModNormal_v_3849;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3850> AgradCcdfLogExpModNormal_v_3850;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3851> AgradCcdfLogExpModNormal_v_3851;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3852> AgradCcdfLogExpModNormal_v_3852;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3853> AgradCcdfLogExpModNormal_v_3853;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3854> AgradCcdfLogExpModNormal_v_3854;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3855> AgradCcdfLogExpModNormal_v_3855;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3856> AgradCcdfLogExpModNormal_v_3856;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3857> AgradCcdfLogExpModNormal_v_3857;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3858> AgradCcdfLogExpModNormal_v_3858;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3859> AgradCcdfLogExpModNormal_v_3859;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3860> AgradCcdfLogExpModNormal_v_3860;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3861> AgradCcdfLogExpModNormal_v_3861;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3862> AgradCcdfLogExpModNormal_v_3862;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3863> AgradCcdfLogExpModNormal_v_3863;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3864> AgradCcdfLogExpModNormal_v_3864;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3865> AgradCcdfLogExpModNormal_v_3865;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3866> AgradCcdfLogExpModNormal_v_3866;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3867> AgradCcdfLogExpModNormal_v_3867;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3868> AgradCcdfLogExpModNormal_v_3868;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3869> AgradCcdfLogExpModNormal_v_3869;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3870> AgradCcdfLogExpModNormal_v_3870;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3871> AgradCcdfLogExpModNormal_v_3871;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3872> AgradCcdfLogExpModNormal_v_3872;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3873> AgradCcdfLogExpModNormal_v_3873;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3874> AgradCcdfLogExpModNormal_v_3874;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3875> AgradCcdfLogExpModNormal_v_3875;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3876> AgradCcdfLogExpModNormal_v_3876;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3877> AgradCcdfLogExpModNormal_v_3877;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3878> AgradCcdfLogExpModNormal_v_3878;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3879> AgradCcdfLogExpModNormal_v_3879;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3880> AgradCcdfLogExpModNormal_v_3880;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3881> AgradCcdfLogExpModNormal_v_3881;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3882> AgradCcdfLogExpModNormal_v_3882;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3883> AgradCcdfLogExpModNormal_v_3883;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3884> AgradCcdfLogExpModNormal_v_3884;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3885> AgradCcdfLogExpModNormal_v_3885;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3886> AgradCcdfLogExpModNormal_v_3886;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3887> AgradCcdfLogExpModNormal_v_3887;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3888> AgradCcdfLogExpModNormal_v_3888;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3889> AgradCcdfLogExpModNormal_v_3889;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3890> AgradCcdfLogExpModNormal_v_3890;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3891> AgradCcdfLogExpModNormal_v_3891;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3892> AgradCcdfLogExpModNormal_v_3892;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3893> AgradCcdfLogExpModNormal_v_3893;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3894> AgradCcdfLogExpModNormal_v_3894;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3895> AgradCcdfLogExpModNormal_v_3895;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3896> AgradCcdfLogExpModNormal_v_3896;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3897> AgradCcdfLogExpModNormal_v_3897;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3898> AgradCcdfLogExpModNormal_v_3898;
typedef boost::mpl::vector<AgradCcdfLogExpModNormal, type_v_3899> AgradCcdfLogExpModNormal_v_3899;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3800, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3801, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3802, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3803, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3804, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3805, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3806, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3807, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3808, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3809, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3810, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3811, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3812, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3813, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3814, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3815, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3816, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3817, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3818, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3819, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3820, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3821, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3822, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3823, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3824, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3825, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3826, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3827, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3828, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3829, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3830, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3831, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3832, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3833, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3834, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3835, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3836, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3837, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3838, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3839, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3839);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3840, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3840);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3841, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3841);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3842, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3842);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3843, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3843);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3844, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3844);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3845, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3845);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3846, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3846);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3847, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3847);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3848, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3848);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3849, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3849);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3850, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3850);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3851, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3851);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3852, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3852);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3853, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3853);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3854, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3854);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3855, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3855);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3856, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3856);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3857, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3857);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3858, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3858);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3859, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3859);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3860, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3860);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3861, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3861);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3862, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3862);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3863, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3863);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3864, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3864);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3865, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3865);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3866, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3866);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3867, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3867);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3868, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3868);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3869, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3869);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3870, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3870);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3871, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3871);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3872, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3872);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3873, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3873);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3874, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3874);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3875, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3875);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3876, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3876);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3877, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3877);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3878, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3878);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3879, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3879);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3880, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3880);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3881, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3881);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3882, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3882);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3883, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3883);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3884, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3884);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3885, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3885);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3886, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3886);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3887, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3887);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3888, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3888);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3889, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3889);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3890, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3890);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3891, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3891);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3892, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3892);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3893, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3893);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3894, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3894);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3895, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3895);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3896, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3896);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3897, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3897);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3898, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3898);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogExpModNormal_v_3899, AgradCcdfLogTestFixture, AgradCcdfLogExpModNormal_v_3899);
