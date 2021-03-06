functions {
  vector foo_vec(vector a1) {
    vector[3] lf_v1;
    row_vector[3] lf_rv1;
    lf_v1 += a1;
    return lf_v1;
  }
  row_vector foo_row_vec(row_vector a1) {
    vector[3] lf_v1;
    row_vector[3] lf_rv1;
    lf_rv1 += a1;
    return lf_rv1;
  }
  matrix foo_matrix(matrix a1) {
    matrix[2,3] lf_m1;
    lf_m1 += a1;
    return lf_m1;
  }
}
transformed data {
  vector[3] td_v1;
  row_vector[3] td_rv1;
  matrix[2,3] td_m1;
  td_v1 += td_v1;
  td_v1 += foo_vec(td_v1);
  td_rv1 += td_rv1;
  td_rv1 += foo_row_vec(td_rv1);
  td_m1[1] += td_rv1;
  td_m1[1] += td_v1';
  td_m1 += td_m1;
  td_m1 += foo_matrix(td_m1);
}
transformed parameters {
  vector[3] tp_v1;
  row_vector[3] tp_rv1;
  matrix[2,3] tp_m1;
  tp_v1 += tp_v1;
  tp_v1 += foo_vec(tp_v1);
  tp_rv1 += tp_rv1;
  tp_rv1 += foo_row_vec(tp_rv1);
  tp_m1[1] += tp_rv1;
  tp_m1 += tp_m1;
  tp_m1 += foo_matrix(tp_m1);
  tp_v1 += td_v1;
  tp_v1 += foo_vec(td_v1);
  tp_rv1 += td_rv1;
  tp_rv1 += foo_row_vec(td_rv1);
  tp_m1[1] += td_rv1;
  tp_m1 += td_m1;
  tp_m1 += foo_matrix(td_m1);
}  
generated quantities {
  vector[3] gq_v1;
  row_vector[3] gq_rv1;
  matrix[2,3] gq_m1;
  gq_v1 += td_v1;
  gq_v1 += foo_vec(td_v1);
  gq_rv1 += td_rv1;
  gq_rv1 += foo_row_vec(td_rv1);
  gq_m1[1] += td_rv1;
  gq_m1 += td_m1;
  gq_m1 += foo_matrix(td_m1);
  gq_v1 += tp_v1;
  gq_v1 += foo_vec(tp_v1);
  gq_rv1 += tp_rv1;
  gq_rv1 += foo_row_vec(tp_rv1);
  gq_m1[1] += tp_rv1;
  gq_m1 += tp_m1;
  gq_m1 += foo_matrix(tp_m1);
}
