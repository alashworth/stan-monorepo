#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <student_t/student_t_ccdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3800> AgradCcdfLogStudentT_ffv_3800;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3801> AgradCcdfLogStudentT_ffv_3801;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3802> AgradCcdfLogStudentT_ffv_3802;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3803> AgradCcdfLogStudentT_ffv_3803;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3804> AgradCcdfLogStudentT_ffv_3804;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3805> AgradCcdfLogStudentT_ffv_3805;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3806> AgradCcdfLogStudentT_ffv_3806;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3807> AgradCcdfLogStudentT_ffv_3807;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3808> AgradCcdfLogStudentT_ffv_3808;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3809> AgradCcdfLogStudentT_ffv_3809;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3810> AgradCcdfLogStudentT_ffv_3810;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3811> AgradCcdfLogStudentT_ffv_3811;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3812> AgradCcdfLogStudentT_ffv_3812;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3813> AgradCcdfLogStudentT_ffv_3813;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3814> AgradCcdfLogStudentT_ffv_3814;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3815> AgradCcdfLogStudentT_ffv_3815;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3816> AgradCcdfLogStudentT_ffv_3816;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3817> AgradCcdfLogStudentT_ffv_3817;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3818> AgradCcdfLogStudentT_ffv_3818;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3819> AgradCcdfLogStudentT_ffv_3819;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3820> AgradCcdfLogStudentT_ffv_3820;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3821> AgradCcdfLogStudentT_ffv_3821;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3822> AgradCcdfLogStudentT_ffv_3822;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3823> AgradCcdfLogStudentT_ffv_3823;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3824> AgradCcdfLogStudentT_ffv_3824;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3825> AgradCcdfLogStudentT_ffv_3825;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3826> AgradCcdfLogStudentT_ffv_3826;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3827> AgradCcdfLogStudentT_ffv_3827;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3828> AgradCcdfLogStudentT_ffv_3828;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3829> AgradCcdfLogStudentT_ffv_3829;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3830> AgradCcdfLogStudentT_ffv_3830;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3831> AgradCcdfLogStudentT_ffv_3831;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3832> AgradCcdfLogStudentT_ffv_3832;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3833> AgradCcdfLogStudentT_ffv_3833;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3834> AgradCcdfLogStudentT_ffv_3834;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3835> AgradCcdfLogStudentT_ffv_3835;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3836> AgradCcdfLogStudentT_ffv_3836;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3837> AgradCcdfLogStudentT_ffv_3837;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3838> AgradCcdfLogStudentT_ffv_3838;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_ffv_3839> AgradCcdfLogStudentT_ffv_3839;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3800, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3801, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3802, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3803, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3804, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3805, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3806, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3807, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3808, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3809, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3810, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3811, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3812, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3813, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3814, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3815, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3816, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3817, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3818, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3819, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3820, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3821, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3822, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3823, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3824, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3825, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3826, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3827, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3828, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3829, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3830, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3831, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3832, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3833, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3834, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3835, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3836, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3837, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3838, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_ffv_3839, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_ffv_3839);

