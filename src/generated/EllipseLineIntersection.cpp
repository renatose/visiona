double tmp0 = lm(0);
double tmp1 = lm(1);
double tmp2 = em(2);
double tmp3 = em(1);
double tmp4 = lm(2);
double tmp5 = em(4);
double tmp6 = em(3);
double tmp7 = pow(tmp1,2);
double tmp8 = pow(tmp0,2);
double tmp9 = tmp2*tmp8;
double tmp10 = -(tmp3*tmp0);
double tmp11 = em(0);
double tmp12 = tmp11*tmp1;
double tmp13 = tmp10 + tmp12;
double tmp14 = tmp1*tmp13;
double tmp15 = tmp9 + tmp14;
double tmp16 = 1/tmp15;
double tmp17 = tmp3*tmp4;
double tmp18 = tmp5*tmp0*tmp1;
double tmp19 = -(tmp6*tmp7);
double tmp20 = -2*tmp2*tmp0;
double tmp21 = tmp3*tmp1;
double tmp22 = tmp20 + tmp21;
double tmp23 = tmp22*tmp4;
double tmp24 = tmp18 + tmp19 + tmp23;
double tmp25 = pow(tmp24,2);
double tmp26 = em(5);
double tmp27 = tmp26*tmp7;
double tmp28 = -(tmp5*tmp1);
double tmp29 = tmp2*tmp4;
double tmp30 = tmp28 + tmp29;
double tmp31 = tmp4*tmp30;
double tmp32 = tmp27 + tmp31;
double tmp33 = -4*tmp15*tmp32;
double tmp34 = tmp25 + tmp33;
double tmp35 = sqrt(tmp34);
double tmp36 = 1/tmp1;
double tmp37 = tmp6*tmp0;
double tmp38 = -2*tmp11*tmp4;
double tmp39 = tmp37 + tmp38;
double tmp40 = tmp7*tmp39;
double tmp41 = -(tmp5*tmp0);
double tmp42 = tmp41 + tmp17;
double tmp43 = tmp0*tmp1*tmp42;

p1.x = -(tmp16*(tmp6*tmp7 + 2*tmp2*tmp0*tmp4 - tmp1*(tmp5*tmp0 + tmp17) + tmp35))/2.;
p1.y = (tmp36*tmp16*(tmp40 + tmp43 + tmp0*tmp35))/2.;
p2.x = (tmp16*(tmp18 + tmp19 - 2*tmp2*tmp0*tmp4 + tmp3*tmp1*tmp4 + tmp35))/2.;
p2.y = (tmp36*tmp16*(tmp40 + tmp43 - tmp0*tmp35))/2.;
