parameters {
  real y;
}
model {
  row_vector<lower=0,upper=1>[3] a[3];
  y ~ normal(0, 1);
}
