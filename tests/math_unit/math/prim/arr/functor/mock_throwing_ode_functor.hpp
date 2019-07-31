#pragma once

#include <string>
#include <vector>

template <class D> struct mtof { static int mock_throwing_ode_functor_count; };

template <class D> int mtof<D>::mock_throwing_ode_functor_count = 0;

template <typename E> struct mock_throwing_ode_functor {
  using mtof = mtof<void>;
  const std::string msg_;
  const int N_; // throw on the N_th call

  explicit mock_throwing_ode_functor(std::string msg) : msg_(msg), N_(1) {
    mtof::mock_throwing_ode_functor_count = 0;
  }

  mock_throwing_ode_functor(std::string msg, int N) : msg_(msg), N_(N) {
    mtof::mock_throwing_ode_functor_count = 0;
  }

  template <typename T0, typename T1, typename T2>
  inline std::vector<typename stan::return_type<T1, T2>::type>
  operator()(const T0 &t_in, const std::vector<T1> &y_in,
             const std::vector<T2> &theta, const std::vector<double> &x,
             const std::vector<int> &x_int, std::ostream *msgs) const {
    mtof::mock_throwing_ode_functor_count++;
    if (N_ == mtof::mock_throwing_ode_functor_count)
      throw E(msg_);
    return y_in;
  }
};