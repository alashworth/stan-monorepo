#include <gtest/gtest.h>
#include <boost/mpl/vector.hpp>
#include <test_fixture_distr.hpp>
#include <test_fixture_cdf.hpp>
#include <test_fixture_cdf_log.hpp>
#include <test_fixture_ccdf_log.hpp>
#include <pareto_type_2/pareto_type_2_cdf_test.hpp>

typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, double, empty, empty> type_ffd_3800;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_ffd_3801;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_3802;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_3803;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty> type_ffd_3804;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_3805;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_3806;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_3807;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, double, empty, empty> type_ffd_3808;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, std::vector<double>, empty, empty> type_ffd_3809;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_3810;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_3811;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, fvar<fvar<double> >, empty, empty> type_ffd_3812;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_3813;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_3814;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_3815;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, double, empty, empty> type_ffd_3816;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, std::vector<double>, empty, empty> type_ffd_3817;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_3818;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_3819;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, fvar<fvar<double> >, empty, empty> type_ffd_3820;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_3821;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_3822;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_3823;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, double, empty, empty> type_ffd_3824;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<double>, empty, empty> type_ffd_3825;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_3826;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_3827;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, fvar<fvar<double> >, empty, empty> type_ffd_3828;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_3829;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_3830;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_3831;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, double, empty, empty> type_ffd_3832;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<double>, empty, empty> type_ffd_3833;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, Eigen::Dynamic, 1>, empty, empty> type_ffd_3834;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<double, 1, Eigen::Dynamic>, empty, empty> type_ffd_3835;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, fvar<fvar<double> >, empty, empty> type_ffd_3836;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, std::vector<fvar<fvar<double> >>, empty, empty> type_ffd_3837;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, Eigen::Dynamic, 1>, empty, empty> type_ffd_3838;
typedef boost::mpl::vector<Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, Eigen::Matrix<fvar<fvar<double> >, 1, Eigen::Dynamic>, empty, empty> type_ffd_3839;

typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3800> AgradCdfParetoType2_ffd_3800;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3801> AgradCdfParetoType2_ffd_3801;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3802> AgradCdfParetoType2_ffd_3802;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3803> AgradCdfParetoType2_ffd_3803;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3804> AgradCdfParetoType2_ffd_3804;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3805> AgradCdfParetoType2_ffd_3805;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3806> AgradCdfParetoType2_ffd_3806;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3807> AgradCdfParetoType2_ffd_3807;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3808> AgradCdfParetoType2_ffd_3808;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3809> AgradCdfParetoType2_ffd_3809;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3810> AgradCdfParetoType2_ffd_3810;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3811> AgradCdfParetoType2_ffd_3811;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3812> AgradCdfParetoType2_ffd_3812;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3813> AgradCdfParetoType2_ffd_3813;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3814> AgradCdfParetoType2_ffd_3814;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3815> AgradCdfParetoType2_ffd_3815;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3816> AgradCdfParetoType2_ffd_3816;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3817> AgradCdfParetoType2_ffd_3817;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3818> AgradCdfParetoType2_ffd_3818;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3819> AgradCdfParetoType2_ffd_3819;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3820> AgradCdfParetoType2_ffd_3820;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3821> AgradCdfParetoType2_ffd_3821;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3822> AgradCdfParetoType2_ffd_3822;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3823> AgradCdfParetoType2_ffd_3823;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3824> AgradCdfParetoType2_ffd_3824;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3825> AgradCdfParetoType2_ffd_3825;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3826> AgradCdfParetoType2_ffd_3826;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3827> AgradCdfParetoType2_ffd_3827;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3828> AgradCdfParetoType2_ffd_3828;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3829> AgradCdfParetoType2_ffd_3829;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3830> AgradCdfParetoType2_ffd_3830;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3831> AgradCdfParetoType2_ffd_3831;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3832> AgradCdfParetoType2_ffd_3832;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3833> AgradCdfParetoType2_ffd_3833;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3834> AgradCdfParetoType2_ffd_3834;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3835> AgradCdfParetoType2_ffd_3835;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3836> AgradCdfParetoType2_ffd_3836;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3837> AgradCdfParetoType2_ffd_3837;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3838> AgradCdfParetoType2_ffd_3838;
typedef boost::mpl::vector<AgradCdfParetoType2, type_ffd_3839> AgradCdfParetoType2_ffd_3839;

INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3800, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3800);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3801, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3801);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3802, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3802);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3803, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3803);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3804, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3804);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3805, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3805);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3806, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3806);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3807, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3807);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3808, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3808);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3809, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3809);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3810, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3810);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3811, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3811);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3812, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3812);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3813, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3813);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3814, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3814);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3815, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3815);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3816, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3816);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3817, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3817);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3818, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3818);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3819, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3819);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3820, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3820);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3821, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3821);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3822, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3822);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3823, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3823);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3824, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3824);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3825, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3825);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3826, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3826);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3827, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3827);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3828, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3828);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3829, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3829);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3830, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3830);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3831, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3831);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3832, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3832);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3833, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3833);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3834, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3834);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3835, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3835);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3836, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3836);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3837, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3837);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3838, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3838);
INSTANTIATE_TYPED_TEST_CASE_P(AgradCdfParetoType2_ffd_3839, AgradCdfTestFixture, AgradCdfParetoType2_ffd_3839);

