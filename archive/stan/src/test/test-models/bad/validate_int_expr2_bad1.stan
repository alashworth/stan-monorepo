parameters {
  vector[10] y;
}
model {
  for (n in 1.7:N)
    y ~ normal(0,1);
}
