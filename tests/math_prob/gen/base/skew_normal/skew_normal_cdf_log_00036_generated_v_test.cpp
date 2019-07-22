#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <C:/Users/andre/source/repos/stan-playground/stan-monorepo/tests/math_prob/skew_normal/skew_normal_cdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_3600;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3601;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3602;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3603;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_3604;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3605;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3606;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3607;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3608;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3609;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3610;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3611;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3612;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3613;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3614;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3615;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, double, empty, empty> type_v_3616;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, std::vector<double>, empty, empty> type_v_3617;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3618;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3619;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, var, empty, empty> type_v_3620;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, std::vector<var>, empty, empty> type_v_3621;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3622;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3623;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, double, empty, empty> type_v_3624;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, std::vector<double>, empty, empty> type_v_3625;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3626;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3627;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, var, empty, empty> type_v_3628;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, std::vector<var>, empty, empty> type_v_3629;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3630;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3631;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3632;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3633;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3634;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3635;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, var, empty, empty> type_v_3636;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3637;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3638;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3639;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, double, empty, empty> type_v_3640;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3641;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3642;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3643;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, var, empty, empty> type_v_3644;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3645;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3646;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3647;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, double, empty, empty> type_v_3648;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, std::vector<double>, empty, empty> type_v_3649;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3650;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3651;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, var, empty, empty> type_v_3652;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, std::vector<var>, empty, empty> type_v_3653;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3654;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, double, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3655;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, double, empty, empty> type_v_3656;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, std::vector<double>, empty, empty> type_v_3657;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3658;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3659;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, var, empty, empty> type_v_3660;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, std::vector<var>, empty, empty> type_v_3661;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3662;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<double>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3663;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, double, empty, empty> type_v_3664;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3665;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3666;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3667;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, var, empty, empty> type_v_3668;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, std::vector<var>, empty, empty> type_v_3669;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3670;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3671;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_v_3672;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_v_3673;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3674;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3675;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, var, empty, empty> type_v_3676;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<var>, empty, empty> type_v_3677;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3678;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3679;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, double, empty, empty> type_v_3680;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, std::vector<double>, empty, empty> type_v_3681;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3682;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3683;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, var, empty, empty> type_v_3684;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, std::vector<var>, empty, empty> type_v_3685;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3686;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, var, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3687;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, double, empty, empty> type_v_3688;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, std::vector<double>, empty, empty> type_v_3689;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3690;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3691;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, var, empty, empty> type_v_3692;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, std::vector<var>, empty, empty> type_v_3693;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, Eigen::Matrix<var, Eigen::Dynamic, 1>, empty, empty> type_v_3694;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, std::vector<var>, Eigen::Matrix<var, 1, Eigen::Dynamic>, empty, empty> type_v_3695;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, double, empty, empty> type_v_3696;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_v_3697;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_v_3698;
typedef boost::mpl::vector<Eigen::Matrix<var, 1, Eigen::Dynamic>, std::vector<double>, Eigen::Matrix<var, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_v_3699;

typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3600> AgradCdfLogSkewNormal_v_3600;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3601> AgradCdfLogSkewNormal_v_3601;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3602> AgradCdfLogSkewNormal_v_3602;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3603> AgradCdfLogSkewNormal_v_3603;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3604> AgradCdfLogSkewNormal_v_3604;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3605> AgradCdfLogSkewNormal_v_3605;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3606> AgradCdfLogSkewNormal_v_3606;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3607> AgradCdfLogSkewNormal_v_3607;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3608> AgradCdfLogSkewNormal_v_3608;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3609> AgradCdfLogSkewNormal_v_3609;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3610> AgradCdfLogSkewNormal_v_3610;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3611> AgradCdfLogSkewNormal_v_3611;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3612> AgradCdfLogSkewNormal_v_3612;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3613> AgradCdfLogSkewNormal_v_3613;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3614> AgradCdfLogSkewNormal_v_3614;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3615> AgradCdfLogSkewNormal_v_3615;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3616> AgradCdfLogSkewNormal_v_3616;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3617> AgradCdfLogSkewNormal_v_3617;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3618> AgradCdfLogSkewNormal_v_3618;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3619> AgradCdfLogSkewNormal_v_3619;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3620> AgradCdfLogSkewNormal_v_3620;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3621> AgradCdfLogSkewNormal_v_3621;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3622> AgradCdfLogSkewNormal_v_3622;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3623> AgradCdfLogSkewNormal_v_3623;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3624> AgradCdfLogSkewNormal_v_3624;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3625> AgradCdfLogSkewNormal_v_3625;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3626> AgradCdfLogSkewNormal_v_3626;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3627> AgradCdfLogSkewNormal_v_3627;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3628> AgradCdfLogSkewNormal_v_3628;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3629> AgradCdfLogSkewNormal_v_3629;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3630> AgradCdfLogSkewNormal_v_3630;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3631> AgradCdfLogSkewNormal_v_3631;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3632> AgradCdfLogSkewNormal_v_3632;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3633> AgradCdfLogSkewNormal_v_3633;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3634> AgradCdfLogSkewNormal_v_3634;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3635> AgradCdfLogSkewNormal_v_3635;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3636> AgradCdfLogSkewNormal_v_3636;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3637> AgradCdfLogSkewNormal_v_3637;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3638> AgradCdfLogSkewNormal_v_3638;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3639> AgradCdfLogSkewNormal_v_3639;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3640> AgradCdfLogSkewNormal_v_3640;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3641> AgradCdfLogSkewNormal_v_3641;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3642> AgradCdfLogSkewNormal_v_3642;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3643> AgradCdfLogSkewNormal_v_3643;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3644> AgradCdfLogSkewNormal_v_3644;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3645> AgradCdfLogSkewNormal_v_3645;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3646> AgradCdfLogSkewNormal_v_3646;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3647> AgradCdfLogSkewNormal_v_3647;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3648> AgradCdfLogSkewNormal_v_3648;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3649> AgradCdfLogSkewNormal_v_3649;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3650> AgradCdfLogSkewNormal_v_3650;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3651> AgradCdfLogSkewNormal_v_3651;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3652> AgradCdfLogSkewNormal_v_3652;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3653> AgradCdfLogSkewNormal_v_3653;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3654> AgradCdfLogSkewNormal_v_3654;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3655> AgradCdfLogSkewNormal_v_3655;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3656> AgradCdfLogSkewNormal_v_3656;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3657> AgradCdfLogSkewNormal_v_3657;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3658> AgradCdfLogSkewNormal_v_3658;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3659> AgradCdfLogSkewNormal_v_3659;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3660> AgradCdfLogSkewNormal_v_3660;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3661> AgradCdfLogSkewNormal_v_3661;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3662> AgradCdfLogSkewNormal_v_3662;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3663> AgradCdfLogSkewNormal_v_3663;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3664> AgradCdfLogSkewNormal_v_3664;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3665> AgradCdfLogSkewNormal_v_3665;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3666> AgradCdfLogSkewNormal_v_3666;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3667> AgradCdfLogSkewNormal_v_3667;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3668> AgradCdfLogSkewNormal_v_3668;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3669> AgradCdfLogSkewNormal_v_3669;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3670> AgradCdfLogSkewNormal_v_3670;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3671> AgradCdfLogSkewNormal_v_3671;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3672> AgradCdfLogSkewNormal_v_3672;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3673> AgradCdfLogSkewNormal_v_3673;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3674> AgradCdfLogSkewNormal_v_3674;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3675> AgradCdfLogSkewNormal_v_3675;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3676> AgradCdfLogSkewNormal_v_3676;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3677> AgradCdfLogSkewNormal_v_3677;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3678> AgradCdfLogSkewNormal_v_3678;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3679> AgradCdfLogSkewNormal_v_3679;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3680> AgradCdfLogSkewNormal_v_3680;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3681> AgradCdfLogSkewNormal_v_3681;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3682> AgradCdfLogSkewNormal_v_3682;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3683> AgradCdfLogSkewNormal_v_3683;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3684> AgradCdfLogSkewNormal_v_3684;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3685> AgradCdfLogSkewNormal_v_3685;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3686> AgradCdfLogSkewNormal_v_3686;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3687> AgradCdfLogSkewNormal_v_3687;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3688> AgradCdfLogSkewNormal_v_3688;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3689> AgradCdfLogSkewNormal_v_3689;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3690> AgradCdfLogSkewNormal_v_3690;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3691> AgradCdfLogSkewNormal_v_3691;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3692> AgradCdfLogSkewNormal_v_3692;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3693> AgradCdfLogSkewNormal_v_3693;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3694> AgradCdfLogSkewNormal_v_3694;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3695> AgradCdfLogSkewNormal_v_3695;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3696> AgradCdfLogSkewNormal_v_3696;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3697> AgradCdfLogSkewNormal_v_3697;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3698> AgradCdfLogSkewNormal_v_3698;
typedef boost::mpl::vector<AgradCdfLogSkewNormal, type_v_3699> AgradCdfLogSkewNormal_v_3699;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3600, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3600);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3601, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3601);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3602, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3602);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3603, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3603);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3604, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3604);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3605, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3605);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3606, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3606);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3607, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3607);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3608, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3608);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3609, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3609);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3610, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3610);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3611, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3611);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3612, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3612);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3613, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3613);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3614, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3614);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3615, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3615);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3616, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3616);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3617, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3617);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3618, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3618);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3619, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3619);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3620, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3620);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3621, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3621);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3622, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3622);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3623, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3623);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3624, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3624);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3625, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3625);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3626, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3626);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3627, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3627);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3628, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3628);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3629, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3629);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3630, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3630);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3631, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3631);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3632, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3632);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3633, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3633);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3634, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3634);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3635, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3635);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3636, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3636);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3637, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3637);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3638, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3638);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3639, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3639);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3640, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3640);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3641, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3641);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3642, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3642);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3643, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3643);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3644, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3644);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3645, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3645);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3646, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3646);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3647, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3647);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3648, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3648);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3649, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3649);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3650, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3650);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3651, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3651);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3652, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3652);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3653, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3653);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3654, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3654);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3655, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3655);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3656, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3656);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3657, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3657);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3658, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3658);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3659, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3659);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3660, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3660);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3661, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3661);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3662, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3662);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3663, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3663);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3664, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3664);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3665, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3665);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3666, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3666);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3667, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3667);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3668, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3668);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3669, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3669);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3670, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3670);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3671, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3671);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3672, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3672);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3673, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3673);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3674, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3674);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3675, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3675);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3676, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3676);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3677, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3677);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3678, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3678);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3679, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3679);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3680, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3680);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3681, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3681);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3682, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3682);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3683, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3683);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3684, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3684);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3685, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3685);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3686, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3686);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3687, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3687);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3688, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3688);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3689, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3689);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3690, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3690);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3691, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3691);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3692, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3692);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3693, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3693);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3694, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3694);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3695, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3695);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3696, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3696);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3697, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3697);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3698, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3698);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogSkewNormal_v_3699, AgradCdfLogTestFixture, AgradCdfLogSkewNormal_v_3699);

