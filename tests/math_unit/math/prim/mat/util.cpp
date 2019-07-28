#include "util.hpp"

void stan::test::unit::expect_symmetric(const Eigen::MatrixXd &a) {
  for (int j = 1; j < a.cols(); ++j)
    for (int i = 0; i < j; ++i)
      EXPECT_EQ(a(i, j), a(j, i)) << "failed symmetry at " << i << ", " << j;
}
