#ifndef TEST_UNIT_MATH_REV_MAT_FUN_UTIL_HPP
#define TEST_UNIT_MATH_REV_MAT_FUN_UTIL_HPP

#include <math/rev/arr/fun/util.hpp>
#include <stan/math/rev/mat.hpp>
#include <math/rev/mat/util.hpp>
#include <vector>

double relative_diff(double u, double v);

void expect_near_relative(double u, double v);

typedef stan::math::index_type<Eigen::Matrix<double, -1, -1> >::type size_type;

// Returns a matrix with the contents of a
// vector; Fills the matrix column-wise

template <typename T, int R, int C>
void fill(const std::vector<double>& contents, Eigen::Matrix<T, R, C>& M) {
  size_t ij = 0;
  for (int j = 0; j < C; ++j)
    for (int i = 0; i < R; ++i)
      M(i, j) = T(contents[ij++]);
}

template <typename T>
void create_vec(const std::vector<double>& vals, std::vector<T>& created_vars) {
  for (size_t i = 0; i < vals.size(); ++i)
    created_vars.push_back(T(vals[i]));
}

// fun3: R^3 --> R | (x, y, z) -- > x^3 * y^2 + x * y^3 + z^3 * x * y
struct third_order_mixed {
  template <typename T>
  inline T operator()(const Eigen::Matrix<T, Eigen::Dynamic, 1>& x) const {
    return x(0) * x(0) * x(0) * x(1) * x(1) + x(1) * x(1) * x(1) * x(0)
           + x(2) * x(2) * x(2) * x(1) * x(0);
  }
};

Eigen::Matrix<double, 3, 3> third_order_mixed_hess(
    const Eigen::Matrix<double, Eigen::Dynamic, 1>& inp_vec);

Eigen::Matrix<double, 3, 3> norm_hess(
    const Eigen::Matrix<double, Eigen::Dynamic, 1>& inp_vec);

std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> >
third_order_mixed_grad_hess(
    const Eigen::Matrix<double, Eigen::Dynamic, 1>& inp_vec);

std::vector<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> >
norm_grad_hess(const Eigen::Matrix<double, Eigen::Dynamic, 1>& inp_vec);

#endif
