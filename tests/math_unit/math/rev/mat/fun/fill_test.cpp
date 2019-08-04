#include <stan/math/rev/mat.hpp>
#include <gtest/gtest.h>
#include <math/rev/mat/fun/util.hpp>
#include <vector>

TEST(AgradRevMatrix, fill_1) {
  using Eigen::Dynamic;
  using Eigen::Matrix;
  using stan::math::fill;
  using std::vector;

  AVAR x;
  AVAR y = 10;
  fill(x, y);
  EXPECT_DOUBLE_EQ(10.0, x.val());

  AVEC z(2);
  AVAR a = 15;
  fill(z, a);
  EXPECT_DOUBLE_EQ(15.0, z[0].val());
  EXPECT_DOUBLE_EQ(15.0, z[1].val());
  EXPECT_EQ(2U, z.size());

  Matrix<AVAR, Dynamic, Dynamic> m(2, 3);
  fill(m, AVAR(12));
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 3; ++j)
      EXPECT_DOUBLE_EQ(12.0, m(i, j).val());

  Matrix<AVAR, Dynamic, 1> rv(3);
  fill(rv, AVAR(13));
  for (int i = 0; i < 3; ++i)
    EXPECT_DOUBLE_EQ(13.0, rv(i).val());

  Matrix<AVAR, 1, Dynamic> v(4);
  fill(v, AVAR(22));
  for (int i = 0; i < 4; ++i)
    EXPECT_DOUBLE_EQ(22.0, v(i).val());

  vector<vector<AVAR> > d(3, vector<AVAR>(2));
  fill(d, AVAR(54));
  for (size_t i = 0; i < 3; ++i)
    for (size_t j = 0; j < 2; ++j)
      EXPECT_DOUBLE_EQ(54, d[i][j].val());
}
TEST(AgradRevMatrix, fillDouble_1) {
  using Eigen::Dynamic;
  using Eigen::Matrix;
  using stan::math::fill;
  Matrix<double, Dynamic, 1> y(3);
  fill(y, 3.0);
  EXPECT_EQ(3, y.size());
  EXPECT_DOUBLE_EQ(3.0, y[0]);
}
