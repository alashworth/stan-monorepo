data {
  real d_sigma;
  real d_len;
  int K;
  int N_1;
  int N_2;
  vector[K] d_vec_1[N_1];
  real d_arr_1[N_2]; // bad mixed Eigen vector types
}
transformed data {
  matrix[N_1, N_2] transformed_data_matrix;

  transformed_data_matrix = cov_exp_quad(d_vec_1, d_arr_2, d_sigma, d_len);
}
parameters {
  real y;
}
model {
  y ~ normal(0,1);
}
