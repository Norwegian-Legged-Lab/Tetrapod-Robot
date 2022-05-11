/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:49 GMT+01:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t917;
  double t3084;
  double t3089;
  double t3101;
  double t3168;
  double t3209;
  double t2240;
  double t3504;
  double t3844;
  double t3862;
  double t3878;
  double t3952;
  double t4430;
  double t4431;
  double t4445;
  double t4579;
  double t3734;
  double t3738;
  double t3773;
  double t4901;
  double t3210;
  double t3211;
  double t3214;
  double t3645;
  double t3660;
  double t3663;
  double t3801;
  double t3886;
  double t4064;
  double t4102;
  double t4348;
  double t4461;
  double t4513;
  double t4528;
  double t4578;
  double t4597;
  double t4604;
  double t4611;
  double t4624;
  double t4631;
  double t4644;
  double t4744;
  double t4862;
  double t4872;
  double t4873;
  double t4889;
  double t4906;
  double t4907;
  double t4943;
  double t4998;
  double t5013;
  double t5014;
  double t5029;
  double t5040;
  double t5053;
  double t5082;
  double t4900;
  double t5019;
  double t5109;
  double t5121;
  double t6008;
  double t6004;
  double t6006;
  double t6013;
  double t6026;
  double t6043;
  double t6046;
  double t6047;
  double t6118;
  double t6125;
  double t6156;
  double t6056;
  double t6070;
  double t6075;
  double t6027;
  double t6048;
  double t6109;
  double t6168;
  double t6172;
  double t6194;
  double t6199;
  double t6218;
  double t6230;
  double t6279;
  double t6306;
  double t6313;
  double t6341;
  double t6350;
  double t6354;
  double t6356;
  double t6360;
  double t6246;
  double t6349;
  double t6379;
  double t6388;
  double t6825;
  double t6832;
  double t6839;
  double t6850;
  double t6851;
  double t6852;
  double t6868;
  double t6872;
  double t6879;
  double t6859;
  double t6860;
  double t6865;
  double t6840;
  double t6858;
  double t6866;
  double t6880;
  double t6881;
  double t6899;
  double t6911;
  double t6920;
  double t6921;
  double t6929;
  double t6930;
  double t6934;
  double t6935;
  double t6948;
  double t6952;
  double t6953;
  double t7065;
  double t6928;
  double t6936;
  double t7067;
  double t7069;
  double t5169;
  double t5291;
  double t5411;
  double t5443;
  double t5493;
  double t5597;
  double t5609;
  double t5651;
  double t5937;
  double t5978;
  double t6002;
  double t7559;
  double t7560;
  double t7675;
  double t6435;
  double t6482;
  double t6495;
  double t6525;
  double t6533;
  double t6596;
  double t6625;
  double t6662;
  double t6769;
  double t6804;
  double t6822;
  double t7952;
  double t7966;
  double t7967;
  double t7092;
  double t7190;
  double t7195;
  double t7204;
  double t7282;
  double t7301;
  double t7316;
  double t7324;
  double t7520;
  double t7538;
  double t7553;
  double t8299;
  double t8300;
  double t8301;
  t917 = Cos(var1[4]);
  t3084 = Cos(var1[6]);
  t3089 = -1.*t3084;
  t3101 = 1. + t3089;
  t3168 = 0.15121*t3101;
  t3209 = Sin(var1[6]);
  t2240 = Sin(var1[5]);
  t3504 = Cos(var1[5]);
  t3844 = Cos(var1[7]);
  t3862 = -1.*t3844;
  t3878 = 1. + t3862;
  t3952 = Sin(var1[7]);
  t4430 = t917*t3504*t3084;
  t4431 = -1.*t917*t2240*t3209;
  t4445 = t4430 + t4431;
  t4579 = Sin(var1[4]);
  t3734 = -1.*t917*t3084*t2240;
  t3738 = -1.*t917*t3504*t3209;
  t3773 = t3734 + t3738;
  t4901 = -1. + t3844;
  t3210 = -0.15121*t3209;
  t3211 = t3168 + t3210;
  t3214 = -1.*t917*t2240*t3211;
  t3645 = 0.15121*t3209;
  t3660 = t3168 + t3645;
  t3663 = t917*t3504*t3660;
  t3801 = -1.2484e-7*var1[7];
  t3886 = -1.5499600000248e-7*t3878;
  t4064 = 1.124840000016e-6*t3952;
  t4102 = t3801 + t3886 + t4064;
  t4348 = t3773*t4102;
  t4461 = 0.281210000008499*t3878;
  t4513 = 0.03874900000062*t3952;
  t4528 = t4461 + t4513;
  t4578 = t4445*t4528;
  t4597 = 4.9936e-13*var1[7];
  t4604 = -0.03874900000062*t3878;
  t4611 = 0.281210000004*t3952;
  t4624 = t4597 + t4604 + t4611;
  t4631 = t4579*t4624;
  t4644 = -1.000000000016*t3878;
  t4744 = 1. + t4644;
  t4862 = t4744*t4445;
  t4872 = -1.*t4579*t3952;
  t4873 = -4.e-6*t3773*t3952;
  t4889 = t4862 + t4872 + t4873;
  t4906 = 4.e-6*t4901*t4579;
  t4907 = 1.6e-11*t4901;
  t4943 = 1. + t4907;
  t4998 = t4943*t3773;
  t5013 = 4.e-6*t4445*t3952;
  t5014 = t4906 + t4998 + t5013;
  t5029 = t3844*t4579;
  t5040 = 4.e-6*t4901*t3773;
  t5053 = t4445*t3952;
  t5082 = t5029 + t5040 + t5053;
  t4900 = 0.278076*t4889;
  t5019 = 0.215306*t5014;
  t5109 = -0.029523*t5082;
  t5121 = var1[0] + t3214 + t3663 + t4348 + t4578 + t4631 + t4900 + t5019 + t5109;
  t6008 = Sin(var1[3]);
  t6004 = Cos(var1[3]);
  t6006 = t6004*t3504;
  t6013 = -1.*t6008*t4579*t2240;
  t6026 = t6006 + t6013;
  t6043 = t3504*t6008*t4579;
  t6046 = t6004*t2240;
  t6047 = t6043 + t6046;
  t6118 = t3084*t6047;
  t6125 = t6026*t3209;
  t6156 = t6118 + t6125;
  t6056 = t3084*t6026;
  t6070 = -1.*t6047*t3209;
  t6075 = t6056 + t6070;
  t6027 = t6026*t3211;
  t6048 = t6047*t3660;
  t6109 = t6075*t4102;
  t6168 = t6156*t4528;
  t6172 = -1.*t917*t6008*t4624;
  t6194 = t4744*t6156;
  t6199 = t917*t6008*t3952;
  t6218 = -4.e-6*t6075*t3952;
  t6230 = t6194 + t6199 + t6218;
  t6279 = -4.e-6*t917*t4901*t6008;
  t6306 = t4943*t6075;
  t6313 = 4.e-6*t6156*t3952;
  t6341 = t6279 + t6306 + t6313;
  t6350 = -1.*t917*t3844*t6008;
  t6354 = 4.e-6*t4901*t6075;
  t6356 = t6156*t3952;
  t6360 = t6350 + t6354 + t6356;
  t6246 = 0.278076*t6230;
  t6349 = 0.215306*t6341;
  t6379 = -0.029523*t6360;
  t6388 = var1[1] + t6027 + t6048 + t6109 + t6168 + t6172 + t6246 + t6349 + t6379;
  t6825 = t3504*t6008;
  t6832 = t6004*t4579*t2240;
  t6839 = t6825 + t6832;
  t6850 = -1.*t6004*t3504*t4579;
  t6851 = t6008*t2240;
  t6852 = t6850 + t6851;
  t6868 = t3084*t6852;
  t6872 = t6839*t3209;
  t6879 = t6868 + t6872;
  t6859 = t3084*t6839;
  t6860 = -1.*t6852*t3209;
  t6865 = t6859 + t6860;
  t6840 = t6839*t3211;
  t6858 = t6852*t3660;
  t6866 = t6865*t4102;
  t6880 = t6879*t4528;
  t6881 = t6004*t917*t4624;
  t6899 = t4744*t6879;
  t6911 = -1.*t6004*t917*t3952;
  t6920 = -4.e-6*t6865*t3952;
  t6921 = t6899 + t6911 + t6920;
  t6929 = 4.e-6*t6004*t917*t4901;
  t6930 = t4943*t6865;
  t6934 = 4.e-6*t6879*t3952;
  t6935 = t6929 + t6930 + t6934;
  t6948 = t6004*t917*t3844;
  t6952 = 4.e-6*t4901*t6865;
  t6953 = t6879*t3952;
  t7065 = t6948 + t6952 + t6953;
  t6928 = 0.278076*t6921;
  t6936 = 0.215306*t6935;
  t7067 = -0.029523*t7065;
  t7069 = var1[2] + t6840 + t6858 + t6866 + t6880 + t6881 + t6928 + t6936 + t7067;
  t5169 = -0.038733*t5082;
  t5291 = -0.04795*t5082;
  t5411 = -0.051298*t5082;
  t5443 = -0.053287*t5082;
  t5493 = -0.0537*t5082;
  t5597 = -0.052493*t5082;
  t5609 = -0.049797*t5082;
  t5651 = -0.045904*t5082;
  t5937 = -0.02502*t5082;
  t5978 = -0.024205*t5082;
  t6002 = -0.026183*t5082;
  t7559 = 0.500076*t4889;
  t7560 = 0.154306*t5014;
  t7675 = var1[0] + t3214 + t3663 + t4348 + t4578 + t4631 + t7559 + t7560 + t5109;
  t6435 = -0.038733*t6360;
  t6482 = -0.04795*t6360;
  t6495 = -0.051298*t6360;
  t6525 = -0.053287*t6360;
  t6533 = -0.0537*t6360;
  t6596 = -0.052493*t6360;
  t6625 = -0.049797*t6360;
  t6662 = -0.045904*t6360;
  t6769 = -0.02502*t6360;
  t6804 = -0.024205*t6360;
  t6822 = -0.026183*t6360;
  t7952 = 0.500076*t6230;
  t7966 = 0.154306*t6341;
  t7967 = var1[1] + t6027 + t6048 + t6109 + t6168 + t6172 + t7952 + t7966 + t6379;
  t7092 = -0.038733*t7065;
  t7190 = -0.04795*t7065;
  t7195 = -0.051298*t7065;
  t7204 = -0.053287*t7065;
  t7282 = -0.0537*t7065;
  t7301 = -0.052493*t7065;
  t7316 = -0.049797*t7065;
  t7324 = -0.045904*t7065;
  t7520 = -0.02502*t7065;
  t7538 = -0.024205*t7065;
  t7553 = -0.026183*t7065;
  t8299 = 0.500076*t6921;
  t8300 = 0.154306*t6935;
  t8301 = var1[2] + t6840 + t6858 + t6866 + t6880 + t6881 + t8299 + t8300 + t7067;
  p_output1[0]=t5121;
  p_output1[1]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.277452*t4889 + 0.213035*t5014 - 0.033864*t5082 + var1[0];
  p_output1[2]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.277236*t4889 + 0.212246*t5014 + t5169 + var1[0];
  p_output1[3]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.27745*t4889 + 0.213024*t5014 - 0.043605*t5082 + var1[0];
  p_output1[4]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.278071*t4889 + 0.215286*t5014 + t5291 + var1[0];
  p_output1[5]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.279033*t4889 + 0.218785*t5014 + t5411 + var1[0];
  p_output1[6]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.28023*t4889 + 0.223144*t5014 + t5443 + var1[0];
  p_output1[7]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.281534*t4889 + 0.227888*t5014 + t5493 + var1[0];
  p_output1[8]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.282802*t4889 + 0.232505*t5014 + t5597 + var1[0];
  p_output1[9]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.283898*t4889 + 0.236494*t5014 + t5609 + var1[0];
  p_output1[10]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.284703*t4889 + 0.239423*t5014 + t5651 + var1[0];
  p_output1[11]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.285129*t4889 + 0.240974*t5014 - 0.041236*t5082 + var1[0];
  p_output1[12]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.285131*t4889 + 0.240979*t5014 - 0.036298*t5082 + var1[0];
  p_output1[13]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.284707*t4889 + 0.239438*t5014 - 0.031626*t5082 + var1[0];
  p_output1[14]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.283905*t4889 + 0.236518*t5014 - 0.027726*t5082 + var1[0];
  p_output1[15]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.282811*t4889 + 0.232535*t5014 + t5937 + var1[0];
  p_output1[16]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.281543*t4889 + 0.227921*t5014 - 0.023803*t5082 + var1[0];
  p_output1[17]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.280239*t4889 + 0.223175*t5014 + t5978 + var1[0];
  p_output1[18]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.27904*t4889 + 0.218813*t5014 + t6002 + var1[0];
  p_output1[19]=t5121;
  p_output1[20]=t6388;
  p_output1[21]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.277452*t6230 + 0.213035*t6341 - 0.033864*t6360 + var1[1];
  p_output1[22]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.277236*t6230 + 0.212246*t6341 + t6435 + var1[1];
  p_output1[23]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.27745*t6230 + 0.213024*t6341 - 0.043605*t6360 + var1[1];
  p_output1[24]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.278071*t6230 + 0.215286*t6341 + t6482 + var1[1];
  p_output1[25]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.279033*t6230 + 0.218785*t6341 + t6495 + var1[1];
  p_output1[26]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.28023*t6230 + 0.223144*t6341 + t6525 + var1[1];
  p_output1[27]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.281534*t6230 + 0.227888*t6341 + t6533 + var1[1];
  p_output1[28]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.282802*t6230 + 0.232505*t6341 + t6596 + var1[1];
  p_output1[29]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.283898*t6230 + 0.236494*t6341 + t6625 + var1[1];
  p_output1[30]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.284703*t6230 + 0.239423*t6341 + t6662 + var1[1];
  p_output1[31]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.285129*t6230 + 0.240974*t6341 - 0.041236*t6360 + var1[1];
  p_output1[32]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.285131*t6230 + 0.240979*t6341 - 0.036298*t6360 + var1[1];
  p_output1[33]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.284707*t6230 + 0.239438*t6341 - 0.031626*t6360 + var1[1];
  p_output1[34]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.283905*t6230 + 0.236518*t6341 - 0.027726*t6360 + var1[1];
  p_output1[35]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.282811*t6230 + 0.232535*t6341 + t6769 + var1[1];
  p_output1[36]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.281543*t6230 + 0.227921*t6341 - 0.023803*t6360 + var1[1];
  p_output1[37]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.280239*t6230 + 0.223175*t6341 + t6804 + var1[1];
  p_output1[38]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.27904*t6230 + 0.218813*t6341 + t6822 + var1[1];
  p_output1[39]=t6388;
  p_output1[40]=t7069;
  p_output1[41]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.277452*t6921 + 0.213035*t6935 - 0.033864*t7065 + var1[2];
  p_output1[42]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.277236*t6921 + 0.212246*t6935 + t7092 + var1[2];
  p_output1[43]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.27745*t6921 + 0.213024*t6935 - 0.043605*t7065 + var1[2];
  p_output1[44]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.278071*t6921 + 0.215286*t6935 + t7190 + var1[2];
  p_output1[45]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.279033*t6921 + 0.218785*t6935 + t7195 + var1[2];
  p_output1[46]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.28023*t6921 + 0.223144*t6935 + t7204 + var1[2];
  p_output1[47]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.281534*t6921 + 0.227888*t6935 + t7282 + var1[2];
  p_output1[48]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.282802*t6921 + 0.232505*t6935 + t7301 + var1[2];
  p_output1[49]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.283898*t6921 + 0.236494*t6935 + t7316 + var1[2];
  p_output1[50]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.284703*t6921 + 0.239423*t6935 + t7324 + var1[2];
  p_output1[51]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.285129*t6921 + 0.240974*t6935 - 0.041236*t7065 + var1[2];
  p_output1[52]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.285131*t6921 + 0.240979*t6935 - 0.036298*t7065 + var1[2];
  p_output1[53]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.284707*t6921 + 0.239438*t6935 - 0.031626*t7065 + var1[2];
  p_output1[54]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.283905*t6921 + 0.236518*t6935 - 0.027726*t7065 + var1[2];
  p_output1[55]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.282811*t6921 + 0.232535*t6935 + t7520 + var1[2];
  p_output1[56]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.281543*t6921 + 0.227921*t6935 - 0.023803*t7065 + var1[2];
  p_output1[57]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.280239*t6921 + 0.223175*t6935 + t7538 + var1[2];
  p_output1[58]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.27904*t6921 + 0.218813*t6935 + t7553 + var1[2];
  p_output1[59]=t7069;
  p_output1[60]=t7675;
  p_output1[61]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.499452*t4889 + 0.152035*t5014 - 0.033863*t5082 + var1[0];
  p_output1[62]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.499236*t4889 + 0.151246*t5014 + t5169 + var1[0];
  p_output1[63]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.49945*t4889 + 0.152024*t5014 - 0.043604*t5082 + var1[0];
  p_output1[64]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.500071*t4889 + 0.154286*t5014 + t5291 + var1[0];
  p_output1[65]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.501033*t4889 + 0.157785*t5014 + t5411 + var1[0];
  p_output1[66]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.50223*t4889 + 0.162144*t5014 + t5443 + var1[0];
  p_output1[67]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.503534*t4889 + 0.166888*t5014 + t5493 + var1[0];
  p_output1[68]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.504802*t4889 + 0.171505*t5014 + t5597 + var1[0];
  p_output1[69]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.505898*t4889 + 0.175494*t5014 + t5609 + var1[0];
  p_output1[70]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.506703*t4889 + 0.178423*t5014 + t5651 + var1[0];
  p_output1[71]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.507129*t4889 + 0.179974*t5014 - 0.041235*t5082 + var1[0];
  p_output1[72]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.507131*t4889 + 0.179979*t5014 - 0.036297*t5082 + var1[0];
  p_output1[73]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.506707*t4889 + 0.178438*t5014 - 0.031625*t5082 + var1[0];
  p_output1[74]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.505905*t4889 + 0.175518*t5014 - 0.027725*t5082 + var1[0];
  p_output1[75]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.504811*t4889 + 0.171535*t5014 + t5937 + var1[0];
  p_output1[76]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.503543*t4889 + 0.166921*t5014 - 0.023802*t5082 + var1[0];
  p_output1[77]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.502239*t4889 + 0.162175*t5014 + t5978 + var1[0];
  p_output1[78]=t3214 + t3663 + t4348 + t4578 + t4631 + 0.50104*t4889 + 0.157813*t5014 + t6002 + var1[0];
  p_output1[79]=t7675;
  p_output1[80]=t7967;
  p_output1[81]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.499452*t6230 + 0.152035*t6341 - 0.033863*t6360 + var1[1];
  p_output1[82]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.499236*t6230 + 0.151246*t6341 + t6435 + var1[1];
  p_output1[83]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.49945*t6230 + 0.152024*t6341 - 0.043604*t6360 + var1[1];
  p_output1[84]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.500071*t6230 + 0.154286*t6341 + t6482 + var1[1];
  p_output1[85]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.501033*t6230 + 0.157785*t6341 + t6495 + var1[1];
  p_output1[86]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.50223*t6230 + 0.162144*t6341 + t6525 + var1[1];
  p_output1[87]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.503534*t6230 + 0.166888*t6341 + t6533 + var1[1];
  p_output1[88]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.504802*t6230 + 0.171505*t6341 + t6596 + var1[1];
  p_output1[89]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.505898*t6230 + 0.175494*t6341 + t6625 + var1[1];
  p_output1[90]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.506703*t6230 + 0.178423*t6341 + t6662 + var1[1];
  p_output1[91]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.507129*t6230 + 0.179974*t6341 - 0.041235*t6360 + var1[1];
  p_output1[92]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.507131*t6230 + 0.179979*t6341 - 0.036297*t6360 + var1[1];
  p_output1[93]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.506707*t6230 + 0.178438*t6341 - 0.031625*t6360 + var1[1];
  p_output1[94]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.505905*t6230 + 0.175518*t6341 - 0.027725*t6360 + var1[1];
  p_output1[95]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.504811*t6230 + 0.171535*t6341 + t6769 + var1[1];
  p_output1[96]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.503543*t6230 + 0.166921*t6341 - 0.023802*t6360 + var1[1];
  p_output1[97]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.502239*t6230 + 0.162175*t6341 + t6804 + var1[1];
  p_output1[98]=t6027 + t6048 + t6109 + t6168 + t6172 + 0.50104*t6230 + 0.157813*t6341 + t6822 + var1[1];
  p_output1[99]=t7967;
  p_output1[100]=t8301;
  p_output1[101]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.499452*t6921 + 0.152035*t6935 - 0.033863*t7065 + var1[2];
  p_output1[102]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.499236*t6921 + 0.151246*t6935 + t7092 + var1[2];
  p_output1[103]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.49945*t6921 + 0.152024*t6935 - 0.043604*t7065 + var1[2];
  p_output1[104]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.500071*t6921 + 0.154286*t6935 + t7190 + var1[2];
  p_output1[105]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.501033*t6921 + 0.157785*t6935 + t7195 + var1[2];
  p_output1[106]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.50223*t6921 + 0.162144*t6935 + t7204 + var1[2];
  p_output1[107]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.503534*t6921 + 0.166888*t6935 + t7282 + var1[2];
  p_output1[108]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.504802*t6921 + 0.171505*t6935 + t7301 + var1[2];
  p_output1[109]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.505898*t6921 + 0.175494*t6935 + t7316 + var1[2];
  p_output1[110]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.506703*t6921 + 0.178423*t6935 + t7324 + var1[2];
  p_output1[111]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.507129*t6921 + 0.179974*t6935 - 0.041235*t7065 + var1[2];
  p_output1[112]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.507131*t6921 + 0.179979*t6935 - 0.036297*t7065 + var1[2];
  p_output1[113]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.506707*t6921 + 0.178438*t6935 - 0.031625*t7065 + var1[2];
  p_output1[114]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.505905*t6921 + 0.175518*t6935 - 0.027725*t7065 + var1[2];
  p_output1[115]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.504811*t6921 + 0.171535*t6935 + t7520 + var1[2];
  p_output1[116]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.503543*t6921 + 0.166921*t6935 - 0.023802*t7065 + var1[2];
  p_output1[117]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.502239*t6921 + 0.162175*t6935 + t7538 + var1[2];
  p_output1[118]=t6840 + t6858 + t6866 + t6880 + t6881 + 0.50104*t6921 + 0.157813*t6935 + t7553 + var1[2];
  p_output1[119]=t8301;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_fl_thigh_to_fl_knee_pitch_bar.hh"

namespace SymFunction
{

void Link_fl_thigh_to_fl_knee_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
