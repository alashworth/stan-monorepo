#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <student_t/student_t_ccdf_log_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_fd_3800;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_3801;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_3802;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_3803;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_3804;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_3805;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_3806;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_3807;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, double, empty, empty> type_fd_3808;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<double>, empty, empty> type_fd_3809;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_3810;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_3811;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, fvar<double>, empty, empty> type_fd_3812;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, std::vector<fvar<double>>, empty, empty> type_fd_3813;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_3814;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_3815;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, double, empty, empty> type_fd_3816;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<double>, empty, empty> type_fd_3817;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_3818;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_3819;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, fvar<double>, empty, empty> type_fd_3820;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, std::vector<fvar<double>>, empty, empty> type_fd_3821;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_3822;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_3823;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, double, empty, empty> type_fd_3824;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_fd_3825;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_3826;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_3827;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, fvar<double>, empty, empty> type_fd_3828;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, std::vector<fvar<double>>, empty, empty> type_fd_3829;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_3830;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_3831;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, double, empty, empty> type_fd_3832;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_fd_3833;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_fd_3834;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_fd_3835;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, fvar<double>, empty, empty> type_fd_3836;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, std::vector<fvar<double>>, empty, empty> type_fd_3837;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, Eigen::Dynamic, 1>, empty, empty> type_fd_3838;
typedef boost::mpl::vector<Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<double>, 1, Eigen::Dynamic>, empty, empty> type_fd_3839;

typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3800> AgradCcdfLogStudentT_fd_3800;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3801> AgradCcdfLogStudentT_fd_3801;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3802> AgradCcdfLogStudentT_fd_3802;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3803> AgradCcdfLogStudentT_fd_3803;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3804> AgradCcdfLogStudentT_fd_3804;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3805> AgradCcdfLogStudentT_fd_3805;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3806> AgradCcdfLogStudentT_fd_3806;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3807> AgradCcdfLogStudentT_fd_3807;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3808> AgradCcdfLogStudentT_fd_3808;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3809> AgradCcdfLogStudentT_fd_3809;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3810> AgradCcdfLogStudentT_fd_3810;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3811> AgradCcdfLogStudentT_fd_3811;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3812> AgradCcdfLogStudentT_fd_3812;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3813> AgradCcdfLogStudentT_fd_3813;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3814> AgradCcdfLogStudentT_fd_3814;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3815> AgradCcdfLogStudentT_fd_3815;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3816> AgradCcdfLogStudentT_fd_3816;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3817> AgradCcdfLogStudentT_fd_3817;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3818> AgradCcdfLogStudentT_fd_3818;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3819> AgradCcdfLogStudentT_fd_3819;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3820> AgradCcdfLogStudentT_fd_3820;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3821> AgradCcdfLogStudentT_fd_3821;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3822> AgradCcdfLogStudentT_fd_3822;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3823> AgradCcdfLogStudentT_fd_3823;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3824> AgradCcdfLogStudentT_fd_3824;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3825> AgradCcdfLogStudentT_fd_3825;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3826> AgradCcdfLogStudentT_fd_3826;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3827> AgradCcdfLogStudentT_fd_3827;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3828> AgradCcdfLogStudentT_fd_3828;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3829> AgradCcdfLogStudentT_fd_3829;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3830> AgradCcdfLogStudentT_fd_3830;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3831> AgradCcdfLogStudentT_fd_3831;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3832> AgradCcdfLogStudentT_fd_3832;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3833> AgradCcdfLogStudentT_fd_3833;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3834> AgradCcdfLogStudentT_fd_3834;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3835> AgradCcdfLogStudentT_fd_3835;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3836> AgradCcdfLogStudentT_fd_3836;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3837> AgradCcdfLogStudentT_fd_3837;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3838> AgradCcdfLogStudentT_fd_3838;
typedef boost::mpl::vector<AgradCcdfLogStudentT, type_fd_3839> AgradCcdfLogStudentT_fd_3839;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3800, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3801, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3802, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3803, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3804, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3805, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3806, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3807, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3808, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3809, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3810, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3811, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3812, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3813, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3814, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3815, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3816, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3817, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3818, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3819, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3820, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3821, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3822, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3823, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3824, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3825, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3826, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3827, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3828, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3829, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3830, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3831, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3832, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3833, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3834, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3835, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3836, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3837, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3838, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCcdfLogStudentT_fd_3839, AgradCcdfLogTestFixture, AgradCcdfLogStudentT_fd_3839);
