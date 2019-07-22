#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <student_t/student_t_cdf_log_test.hpp>

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

typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3800> AgradCdfLogStudentT_fd_3800;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3801> AgradCdfLogStudentT_fd_3801;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3802> AgradCdfLogStudentT_fd_3802;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3803> AgradCdfLogStudentT_fd_3803;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3804> AgradCdfLogStudentT_fd_3804;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3805> AgradCdfLogStudentT_fd_3805;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3806> AgradCdfLogStudentT_fd_3806;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3807> AgradCdfLogStudentT_fd_3807;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3808> AgradCdfLogStudentT_fd_3808;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3809> AgradCdfLogStudentT_fd_3809;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3810> AgradCdfLogStudentT_fd_3810;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3811> AgradCdfLogStudentT_fd_3811;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3812> AgradCdfLogStudentT_fd_3812;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3813> AgradCdfLogStudentT_fd_3813;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3814> AgradCdfLogStudentT_fd_3814;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3815> AgradCdfLogStudentT_fd_3815;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3816> AgradCdfLogStudentT_fd_3816;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3817> AgradCdfLogStudentT_fd_3817;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3818> AgradCdfLogStudentT_fd_3818;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3819> AgradCdfLogStudentT_fd_3819;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3820> AgradCdfLogStudentT_fd_3820;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3821> AgradCdfLogStudentT_fd_3821;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3822> AgradCdfLogStudentT_fd_3822;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3823> AgradCdfLogStudentT_fd_3823;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3824> AgradCdfLogStudentT_fd_3824;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3825> AgradCdfLogStudentT_fd_3825;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3826> AgradCdfLogStudentT_fd_3826;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3827> AgradCdfLogStudentT_fd_3827;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3828> AgradCdfLogStudentT_fd_3828;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3829> AgradCdfLogStudentT_fd_3829;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3830> AgradCdfLogStudentT_fd_3830;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3831> AgradCdfLogStudentT_fd_3831;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3832> AgradCdfLogStudentT_fd_3832;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3833> AgradCdfLogStudentT_fd_3833;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3834> AgradCdfLogStudentT_fd_3834;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3835> AgradCdfLogStudentT_fd_3835;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3836> AgradCdfLogStudentT_fd_3836;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3837> AgradCdfLogStudentT_fd_3837;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3838> AgradCdfLogStudentT_fd_3838;
typedef boost::mpl::vector<AgradCdfLogStudentT, type_fd_3839> AgradCdfLogStudentT_fd_3839;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3800, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3801, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3802, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3803, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3804, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3805, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3806, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3807, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3808, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3809, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3810, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3811, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3812, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3813, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3814, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3815, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3816, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3817, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3818, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3819, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3820, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3821, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3822, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3823, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3824, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3825, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3826, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3827, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3828, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3829, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3830, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3831, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3832, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3833, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3834, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3835, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3836, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3837, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3838, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfLogStudentT_fd_3839, AgradCdfLogTestFixture, AgradCdfLogStudentT_fd_3839);

