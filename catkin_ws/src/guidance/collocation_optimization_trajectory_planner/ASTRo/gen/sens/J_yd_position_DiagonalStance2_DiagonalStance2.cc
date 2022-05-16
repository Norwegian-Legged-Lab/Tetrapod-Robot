/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 17:54:52 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t447;
  double t452;
  double t2957;
  double t3768;
  double t3895;
  double t4734;
  double t4781;
  double t4878;
  double t4900;
  double t4969;
  double t5181;
  double t5207;
  double t5257;
  double t5282;
  double t5286;
  double t5318;
  double t5529;
  double t6209;
  double t6211;
  double t6144;
  double t5360;
  double t5419;
  double t5447;
  double t5487;
  double t5496;
  double t5770;
  t447 = -1.*var3[0];
  t452 = t447 + var3[1];
  t2957 = Power(t452,-5);
  t3768 = t447 + var1[0];
  t3895 = Power(t3768,4);
  t4734 = Power(t452,-4);
  t4781 = Power(t3768,3);
  t4878 = 1/t452;
  t4900 = -1.*t4878*t3768;
  t4969 = 1. + t4900;
  t5181 = Power(t452,-3);
  t5207 = Power(t3768,2);
  t5257 = Power(t4969,2);
  t5282 = Power(t452,-2);
  t5286 = Power(t4969,3);
  t5318 = Power(t4969,4);
  t5529 = Power(t3768,5);
  t6209 = -1.*t5282*t3768;
  t6211 = t4878 + t6209;
  t6144 = Power(t452,-6);
  t5360 = Power(t4969,5);
  t5419 = 5.*t4878*t3768*t5318;
  t5447 = 10.*t5282*t5207*t5286;
  t5487 = 10.*t5181*t4781*t5257;
  t5496 = 5.*t4734*t3895*t4969;
  t5770 = t2957*t5529;
  p_output1[0]=-5.*t4878*t5318*var2[0] - 20.*t3768*t5282*t5286*var2[14] + 5.*t4878*t5318*var2[14] - 30.*t5181*t5207*t5257*var2[28] + 20.*t3768*t5282*t5286*var2[28] - 20.*t4734*t4781*t4969*var2[42] + 30.*t5181*t5207*t5257*var2[42] - 5.*t2957*t3895*var2[56] + 20.*t4734*t4781*t4969*var2[56] + 5.*t2957*t3895*var2[70];
  p_output1[1]=t5360;
  p_output1[2]=t5419;
  p_output1[3]=t5447;
  p_output1[4]=t5487;
  p_output1[5]=t5496;
  p_output1[6]=t5770;
  p_output1[7]=5.*t5318*t6211*var2[0] - 5.*t4878*t5318*var2[14] + 5.*t3768*t5282*t5318*var2[14] + 20.*t3768*t4878*t5286*t6211*var2[14] + 20.*t5181*t5207*t5286*var2[28] - 20.*t3768*t5282*t5286*var2[28] + 30.*t5207*t5257*t5282*t6211*var2[28] + 30.*t4734*t4781*t5257*var2[42] - 30.*t5181*t5207*t5257*var2[42] + 20.*t4781*t4969*t5181*t6211*var2[42] + 20.*t2957*t3895*t4969*var2[56] - 20.*t4734*t4781*t4969*var2[56] + 5.*t3895*t4734*t6211*var2[56] - 5.*t2957*t3895*var2[70] + 5.*t5529*t6144*var2[70];
  p_output1[8]=5.*t3768*t5282*t5318*var2[0] + 20.*t5181*t5207*t5286*var2[14] - 5.*t3768*t5282*t5318*var2[14] + 30.*t4734*t4781*t5257*var2[28] - 20.*t5181*t5207*t5286*var2[28] + 20.*t2957*t3895*t4969*var2[42] - 30.*t4734*t4781*t5257*var2[42] - 20.*t2957*t3895*t4969*var2[56] + 5.*t5529*t6144*var2[56] - 5.*t5529*t6144*var2[70];
  p_output1[9]=-5.*t4878*t5318*var2[1] - 20.*t3768*t5282*t5286*var2[15] + 5.*t4878*t5318*var2[15] - 30.*t5181*t5207*t5257*var2[29] + 20.*t3768*t5282*t5286*var2[29] - 20.*t4734*t4781*t4969*var2[43] + 30.*t5181*t5207*t5257*var2[43] - 5.*t2957*t3895*var2[57] + 20.*t4734*t4781*t4969*var2[57] + 5.*t2957*t3895*var2[71];
  p_output1[10]=t5360;
  p_output1[11]=t5419;
  p_output1[12]=t5447;
  p_output1[13]=t5487;
  p_output1[14]=t5496;
  p_output1[15]=t5770;
  p_output1[16]=5.*t5318*t6211*var2[1] - 5.*t4878*t5318*var2[15] + 5.*t3768*t5282*t5318*var2[15] + 20.*t3768*t4878*t5286*t6211*var2[15] + 20.*t5181*t5207*t5286*var2[29] - 20.*t3768*t5282*t5286*var2[29] + 30.*t5207*t5257*t5282*t6211*var2[29] + 30.*t4734*t4781*t5257*var2[43] - 30.*t5181*t5207*t5257*var2[43] + 20.*t4781*t4969*t5181*t6211*var2[43] + 20.*t2957*t3895*t4969*var2[57] - 20.*t4734*t4781*t4969*var2[57] + 5.*t3895*t4734*t6211*var2[57] - 5.*t2957*t3895*var2[71] + 5.*t5529*t6144*var2[71];
  p_output1[17]=5.*t3768*t5282*t5318*var2[1] + 20.*t5181*t5207*t5286*var2[15] - 5.*t3768*t5282*t5318*var2[15] + 30.*t4734*t4781*t5257*var2[29] - 20.*t5181*t5207*t5286*var2[29] + 20.*t2957*t3895*t4969*var2[43] - 30.*t4734*t4781*t5257*var2[43] - 20.*t2957*t3895*t4969*var2[57] + 5.*t5529*t6144*var2[57] - 5.*t5529*t6144*var2[71];
  p_output1[18]=-5.*t4878*t5318*var2[2] - 20.*t3768*t5282*t5286*var2[16] + 5.*t4878*t5318*var2[16] - 30.*t5181*t5207*t5257*var2[30] + 20.*t3768*t5282*t5286*var2[30] - 20.*t4734*t4781*t4969*var2[44] + 30.*t5181*t5207*t5257*var2[44] - 5.*t2957*t3895*var2[58] + 20.*t4734*t4781*t4969*var2[58] + 5.*t2957*t3895*var2[72];
  p_output1[19]=t5360;
  p_output1[20]=t5419;
  p_output1[21]=t5447;
  p_output1[22]=t5487;
  p_output1[23]=t5496;
  p_output1[24]=t5770;
  p_output1[25]=5.*t5318*t6211*var2[2] - 5.*t4878*t5318*var2[16] + 5.*t3768*t5282*t5318*var2[16] + 20.*t3768*t4878*t5286*t6211*var2[16] + 20.*t5181*t5207*t5286*var2[30] - 20.*t3768*t5282*t5286*var2[30] + 30.*t5207*t5257*t5282*t6211*var2[30] + 30.*t4734*t4781*t5257*var2[44] - 30.*t5181*t5207*t5257*var2[44] + 20.*t4781*t4969*t5181*t6211*var2[44] + 20.*t2957*t3895*t4969*var2[58] - 20.*t4734*t4781*t4969*var2[58] + 5.*t3895*t4734*t6211*var2[58] - 5.*t2957*t3895*var2[72] + 5.*t5529*t6144*var2[72];
  p_output1[26]=5.*t3768*t5282*t5318*var2[2] + 20.*t5181*t5207*t5286*var2[16] - 5.*t3768*t5282*t5318*var2[16] + 30.*t4734*t4781*t5257*var2[30] - 20.*t5181*t5207*t5286*var2[30] + 20.*t2957*t3895*t4969*var2[44] - 30.*t4734*t4781*t5257*var2[44] - 20.*t2957*t3895*t4969*var2[58] + 5.*t5529*t6144*var2[58] - 5.*t5529*t6144*var2[72];
  p_output1[27]=-5.*t4878*t5318*var2[3] - 20.*t3768*t5282*t5286*var2[17] + 5.*t4878*t5318*var2[17] - 30.*t5181*t5207*t5257*var2[31] + 20.*t3768*t5282*t5286*var2[31] - 20.*t4734*t4781*t4969*var2[45] + 30.*t5181*t5207*t5257*var2[45] - 5.*t2957*t3895*var2[59] + 20.*t4734*t4781*t4969*var2[59] + 5.*t2957*t3895*var2[73];
  p_output1[28]=t5360;
  p_output1[29]=t5419;
  p_output1[30]=t5447;
  p_output1[31]=t5487;
  p_output1[32]=t5496;
  p_output1[33]=t5770;
  p_output1[34]=5.*t5318*t6211*var2[3] - 5.*t4878*t5318*var2[17] + 5.*t3768*t5282*t5318*var2[17] + 20.*t3768*t4878*t5286*t6211*var2[17] + 20.*t5181*t5207*t5286*var2[31] - 20.*t3768*t5282*t5286*var2[31] + 30.*t5207*t5257*t5282*t6211*var2[31] + 30.*t4734*t4781*t5257*var2[45] - 30.*t5181*t5207*t5257*var2[45] + 20.*t4781*t4969*t5181*t6211*var2[45] + 20.*t2957*t3895*t4969*var2[59] - 20.*t4734*t4781*t4969*var2[59] + 5.*t3895*t4734*t6211*var2[59] - 5.*t2957*t3895*var2[73] + 5.*t5529*t6144*var2[73];
  p_output1[35]=5.*t3768*t5282*t5318*var2[3] + 20.*t5181*t5207*t5286*var2[17] - 5.*t3768*t5282*t5318*var2[17] + 30.*t4734*t4781*t5257*var2[31] - 20.*t5181*t5207*t5286*var2[31] + 20.*t2957*t3895*t4969*var2[45] - 30.*t4734*t4781*t5257*var2[45] - 20.*t2957*t3895*t4969*var2[59] + 5.*t5529*t6144*var2[59] - 5.*t5529*t6144*var2[73];
  p_output1[36]=-5.*t4878*t5318*var2[4] - 20.*t3768*t5282*t5286*var2[18] + 5.*t4878*t5318*var2[18] - 30.*t5181*t5207*t5257*var2[32] + 20.*t3768*t5282*t5286*var2[32] - 20.*t4734*t4781*t4969*var2[46] + 30.*t5181*t5207*t5257*var2[46] - 5.*t2957*t3895*var2[60] + 20.*t4734*t4781*t4969*var2[60] + 5.*t2957*t3895*var2[74];
  p_output1[37]=t5360;
  p_output1[38]=t5419;
  p_output1[39]=t5447;
  p_output1[40]=t5487;
  p_output1[41]=t5496;
  p_output1[42]=t5770;
  p_output1[43]=5.*t5318*t6211*var2[4] - 5.*t4878*t5318*var2[18] + 5.*t3768*t5282*t5318*var2[18] + 20.*t3768*t4878*t5286*t6211*var2[18] + 20.*t5181*t5207*t5286*var2[32] - 20.*t3768*t5282*t5286*var2[32] + 30.*t5207*t5257*t5282*t6211*var2[32] + 30.*t4734*t4781*t5257*var2[46] - 30.*t5181*t5207*t5257*var2[46] + 20.*t4781*t4969*t5181*t6211*var2[46] + 20.*t2957*t3895*t4969*var2[60] - 20.*t4734*t4781*t4969*var2[60] + 5.*t3895*t4734*t6211*var2[60] - 5.*t2957*t3895*var2[74] + 5.*t5529*t6144*var2[74];
  p_output1[44]=5.*t3768*t5282*t5318*var2[4] + 20.*t5181*t5207*t5286*var2[18] - 5.*t3768*t5282*t5318*var2[18] + 30.*t4734*t4781*t5257*var2[32] - 20.*t5181*t5207*t5286*var2[32] + 20.*t2957*t3895*t4969*var2[46] - 30.*t4734*t4781*t5257*var2[46] - 20.*t2957*t3895*t4969*var2[60] + 5.*t5529*t6144*var2[60] - 5.*t5529*t6144*var2[74];
  p_output1[45]=-5.*t4878*t5318*var2[5] - 20.*t3768*t5282*t5286*var2[19] + 5.*t4878*t5318*var2[19] - 30.*t5181*t5207*t5257*var2[33] + 20.*t3768*t5282*t5286*var2[33] - 20.*t4734*t4781*t4969*var2[47] + 30.*t5181*t5207*t5257*var2[47] - 5.*t2957*t3895*var2[61] + 20.*t4734*t4781*t4969*var2[61] + 5.*t2957*t3895*var2[75];
  p_output1[46]=t5360;
  p_output1[47]=t5419;
  p_output1[48]=t5447;
  p_output1[49]=t5487;
  p_output1[50]=t5496;
  p_output1[51]=t5770;
  p_output1[52]=5.*t5318*t6211*var2[5] - 5.*t4878*t5318*var2[19] + 5.*t3768*t5282*t5318*var2[19] + 20.*t3768*t4878*t5286*t6211*var2[19] + 20.*t5181*t5207*t5286*var2[33] - 20.*t3768*t5282*t5286*var2[33] + 30.*t5207*t5257*t5282*t6211*var2[33] + 30.*t4734*t4781*t5257*var2[47] - 30.*t5181*t5207*t5257*var2[47] + 20.*t4781*t4969*t5181*t6211*var2[47] + 20.*t2957*t3895*t4969*var2[61] - 20.*t4734*t4781*t4969*var2[61] + 5.*t3895*t4734*t6211*var2[61] - 5.*t2957*t3895*var2[75] + 5.*t5529*t6144*var2[75];
  p_output1[53]=5.*t3768*t5282*t5318*var2[5] + 20.*t5181*t5207*t5286*var2[19] - 5.*t3768*t5282*t5318*var2[19] + 30.*t4734*t4781*t5257*var2[33] - 20.*t5181*t5207*t5286*var2[33] + 20.*t2957*t3895*t4969*var2[47] - 30.*t4734*t4781*t5257*var2[47] - 20.*t2957*t3895*t4969*var2[61] + 5.*t5529*t6144*var2[61] - 5.*t5529*t6144*var2[75];
  p_output1[54]=-5.*t4878*t5318*var2[6] - 20.*t3768*t5282*t5286*var2[20] + 5.*t4878*t5318*var2[20] - 30.*t5181*t5207*t5257*var2[34] + 20.*t3768*t5282*t5286*var2[34] - 20.*t4734*t4781*t4969*var2[48] + 30.*t5181*t5207*t5257*var2[48] - 5.*t2957*t3895*var2[62] + 20.*t4734*t4781*t4969*var2[62] + 5.*t2957*t3895*var2[76];
  p_output1[55]=t5360;
  p_output1[56]=t5419;
  p_output1[57]=t5447;
  p_output1[58]=t5487;
  p_output1[59]=t5496;
  p_output1[60]=t5770;
  p_output1[61]=5.*t5318*t6211*var2[6] - 5.*t4878*t5318*var2[20] + 5.*t3768*t5282*t5318*var2[20] + 20.*t3768*t4878*t5286*t6211*var2[20] + 20.*t5181*t5207*t5286*var2[34] - 20.*t3768*t5282*t5286*var2[34] + 30.*t5207*t5257*t5282*t6211*var2[34] + 30.*t4734*t4781*t5257*var2[48] - 30.*t5181*t5207*t5257*var2[48] + 20.*t4781*t4969*t5181*t6211*var2[48] + 20.*t2957*t3895*t4969*var2[62] - 20.*t4734*t4781*t4969*var2[62] + 5.*t3895*t4734*t6211*var2[62] - 5.*t2957*t3895*var2[76] + 5.*t5529*t6144*var2[76];
  p_output1[62]=5.*t3768*t5282*t5318*var2[6] + 20.*t5181*t5207*t5286*var2[20] - 5.*t3768*t5282*t5318*var2[20] + 30.*t4734*t4781*t5257*var2[34] - 20.*t5181*t5207*t5286*var2[34] + 20.*t2957*t3895*t4969*var2[48] - 30.*t4734*t4781*t5257*var2[48] - 20.*t2957*t3895*t4969*var2[62] + 5.*t5529*t6144*var2[62] - 5.*t5529*t6144*var2[76];
  p_output1[63]=-5.*t4878*t5318*var2[7] - 20.*t3768*t5282*t5286*var2[21] + 5.*t4878*t5318*var2[21] - 30.*t5181*t5207*t5257*var2[35] + 20.*t3768*t5282*t5286*var2[35] - 20.*t4734*t4781*t4969*var2[49] + 30.*t5181*t5207*t5257*var2[49] - 5.*t2957*t3895*var2[63] + 20.*t4734*t4781*t4969*var2[63] + 5.*t2957*t3895*var2[77];
  p_output1[64]=t5360;
  p_output1[65]=t5419;
  p_output1[66]=t5447;
  p_output1[67]=t5487;
  p_output1[68]=t5496;
  p_output1[69]=t5770;
  p_output1[70]=5.*t5318*t6211*var2[7] - 5.*t4878*t5318*var2[21] + 5.*t3768*t5282*t5318*var2[21] + 20.*t3768*t4878*t5286*t6211*var2[21] + 20.*t5181*t5207*t5286*var2[35] - 20.*t3768*t5282*t5286*var2[35] + 30.*t5207*t5257*t5282*t6211*var2[35] + 30.*t4734*t4781*t5257*var2[49] - 30.*t5181*t5207*t5257*var2[49] + 20.*t4781*t4969*t5181*t6211*var2[49] + 20.*t2957*t3895*t4969*var2[63] - 20.*t4734*t4781*t4969*var2[63] + 5.*t3895*t4734*t6211*var2[63] - 5.*t2957*t3895*var2[77] + 5.*t5529*t6144*var2[77];
  p_output1[71]=5.*t3768*t5282*t5318*var2[7] + 20.*t5181*t5207*t5286*var2[21] - 5.*t3768*t5282*t5318*var2[21] + 30.*t4734*t4781*t5257*var2[35] - 20.*t5181*t5207*t5286*var2[35] + 20.*t2957*t3895*t4969*var2[49] - 30.*t4734*t4781*t5257*var2[49] - 20.*t2957*t3895*t4969*var2[63] + 5.*t5529*t6144*var2[63] - 5.*t5529*t6144*var2[77];
  p_output1[72]=-5.*t4878*t5318*var2[8] - 20.*t3768*t5282*t5286*var2[22] + 5.*t4878*t5318*var2[22] - 30.*t5181*t5207*t5257*var2[36] + 20.*t3768*t5282*t5286*var2[36] - 20.*t4734*t4781*t4969*var2[50] + 30.*t5181*t5207*t5257*var2[50] - 5.*t2957*t3895*var2[64] + 20.*t4734*t4781*t4969*var2[64] + 5.*t2957*t3895*var2[78];
  p_output1[73]=t5360;
  p_output1[74]=t5419;
  p_output1[75]=t5447;
  p_output1[76]=t5487;
  p_output1[77]=t5496;
  p_output1[78]=t5770;
  p_output1[79]=5.*t5318*t6211*var2[8] - 5.*t4878*t5318*var2[22] + 5.*t3768*t5282*t5318*var2[22] + 20.*t3768*t4878*t5286*t6211*var2[22] + 20.*t5181*t5207*t5286*var2[36] - 20.*t3768*t5282*t5286*var2[36] + 30.*t5207*t5257*t5282*t6211*var2[36] + 30.*t4734*t4781*t5257*var2[50] - 30.*t5181*t5207*t5257*var2[50] + 20.*t4781*t4969*t5181*t6211*var2[50] + 20.*t2957*t3895*t4969*var2[64] - 20.*t4734*t4781*t4969*var2[64] + 5.*t3895*t4734*t6211*var2[64] - 5.*t2957*t3895*var2[78] + 5.*t5529*t6144*var2[78];
  p_output1[80]=5.*t3768*t5282*t5318*var2[8] + 20.*t5181*t5207*t5286*var2[22] - 5.*t3768*t5282*t5318*var2[22] + 30.*t4734*t4781*t5257*var2[36] - 20.*t5181*t5207*t5286*var2[36] + 20.*t2957*t3895*t4969*var2[50] - 30.*t4734*t4781*t5257*var2[50] - 20.*t2957*t3895*t4969*var2[64] + 5.*t5529*t6144*var2[64] - 5.*t5529*t6144*var2[78];
  p_output1[81]=-5.*t4878*t5318*var2[9] - 20.*t3768*t5282*t5286*var2[23] + 5.*t4878*t5318*var2[23] - 30.*t5181*t5207*t5257*var2[37] + 20.*t3768*t5282*t5286*var2[37] - 20.*t4734*t4781*t4969*var2[51] + 30.*t5181*t5207*t5257*var2[51] - 5.*t2957*t3895*var2[65] + 20.*t4734*t4781*t4969*var2[65] + 5.*t2957*t3895*var2[79];
  p_output1[82]=t5360;
  p_output1[83]=t5419;
  p_output1[84]=t5447;
  p_output1[85]=t5487;
  p_output1[86]=t5496;
  p_output1[87]=t5770;
  p_output1[88]=5.*t5318*t6211*var2[9] - 5.*t4878*t5318*var2[23] + 5.*t3768*t5282*t5318*var2[23] + 20.*t3768*t4878*t5286*t6211*var2[23] + 20.*t5181*t5207*t5286*var2[37] - 20.*t3768*t5282*t5286*var2[37] + 30.*t5207*t5257*t5282*t6211*var2[37] + 30.*t4734*t4781*t5257*var2[51] - 30.*t5181*t5207*t5257*var2[51] + 20.*t4781*t4969*t5181*t6211*var2[51] + 20.*t2957*t3895*t4969*var2[65] - 20.*t4734*t4781*t4969*var2[65] + 5.*t3895*t4734*t6211*var2[65] - 5.*t2957*t3895*var2[79] + 5.*t5529*t6144*var2[79];
  p_output1[89]=5.*t3768*t5282*t5318*var2[9] + 20.*t5181*t5207*t5286*var2[23] - 5.*t3768*t5282*t5318*var2[23] + 30.*t4734*t4781*t5257*var2[37] - 20.*t5181*t5207*t5286*var2[37] + 20.*t2957*t3895*t4969*var2[51] - 30.*t4734*t4781*t5257*var2[51] - 20.*t2957*t3895*t4969*var2[65] + 5.*t5529*t6144*var2[65] - 5.*t5529*t6144*var2[79];
  p_output1[90]=-5.*t4878*t5318*var2[10] - 20.*t3768*t5282*t5286*var2[24] + 5.*t4878*t5318*var2[24] - 30.*t5181*t5207*t5257*var2[38] + 20.*t3768*t5282*t5286*var2[38] - 20.*t4734*t4781*t4969*var2[52] + 30.*t5181*t5207*t5257*var2[52] - 5.*t2957*t3895*var2[66] + 20.*t4734*t4781*t4969*var2[66] + 5.*t2957*t3895*var2[80];
  p_output1[91]=t5360;
  p_output1[92]=t5419;
  p_output1[93]=t5447;
  p_output1[94]=t5487;
  p_output1[95]=t5496;
  p_output1[96]=t5770;
  p_output1[97]=5.*t5318*t6211*var2[10] - 5.*t4878*t5318*var2[24] + 5.*t3768*t5282*t5318*var2[24] + 20.*t3768*t4878*t5286*t6211*var2[24] + 20.*t5181*t5207*t5286*var2[38] - 20.*t3768*t5282*t5286*var2[38] + 30.*t5207*t5257*t5282*t6211*var2[38] + 30.*t4734*t4781*t5257*var2[52] - 30.*t5181*t5207*t5257*var2[52] + 20.*t4781*t4969*t5181*t6211*var2[52] + 20.*t2957*t3895*t4969*var2[66] - 20.*t4734*t4781*t4969*var2[66] + 5.*t3895*t4734*t6211*var2[66] - 5.*t2957*t3895*var2[80] + 5.*t5529*t6144*var2[80];
  p_output1[98]=5.*t3768*t5282*t5318*var2[10] + 20.*t5181*t5207*t5286*var2[24] - 5.*t3768*t5282*t5318*var2[24] + 30.*t4734*t4781*t5257*var2[38] - 20.*t5181*t5207*t5286*var2[38] + 20.*t2957*t3895*t4969*var2[52] - 30.*t4734*t4781*t5257*var2[52] - 20.*t2957*t3895*t4969*var2[66] + 5.*t5529*t6144*var2[66] - 5.*t5529*t6144*var2[80];
  p_output1[99]=-5.*t4878*t5318*var2[11] - 20.*t3768*t5282*t5286*var2[25] + 5.*t4878*t5318*var2[25] - 30.*t5181*t5207*t5257*var2[39] + 20.*t3768*t5282*t5286*var2[39] - 20.*t4734*t4781*t4969*var2[53] + 30.*t5181*t5207*t5257*var2[53] - 5.*t2957*t3895*var2[67] + 20.*t4734*t4781*t4969*var2[67] + 5.*t2957*t3895*var2[81];
  p_output1[100]=t5360;
  p_output1[101]=t5419;
  p_output1[102]=t5447;
  p_output1[103]=t5487;
  p_output1[104]=t5496;
  p_output1[105]=t5770;
  p_output1[106]=5.*t5318*t6211*var2[11] - 5.*t4878*t5318*var2[25] + 5.*t3768*t5282*t5318*var2[25] + 20.*t3768*t4878*t5286*t6211*var2[25] + 20.*t5181*t5207*t5286*var2[39] - 20.*t3768*t5282*t5286*var2[39] + 30.*t5207*t5257*t5282*t6211*var2[39] + 30.*t4734*t4781*t5257*var2[53] - 30.*t5181*t5207*t5257*var2[53] + 20.*t4781*t4969*t5181*t6211*var2[53] + 20.*t2957*t3895*t4969*var2[67] - 20.*t4734*t4781*t4969*var2[67] + 5.*t3895*t4734*t6211*var2[67] - 5.*t2957*t3895*var2[81] + 5.*t5529*t6144*var2[81];
  p_output1[107]=5.*t3768*t5282*t5318*var2[11] + 20.*t5181*t5207*t5286*var2[25] - 5.*t3768*t5282*t5318*var2[25] + 30.*t4734*t4781*t5257*var2[39] - 20.*t5181*t5207*t5286*var2[39] + 20.*t2957*t3895*t4969*var2[53] - 30.*t4734*t4781*t5257*var2[53] - 20.*t2957*t3895*t4969*var2[67] + 5.*t5529*t6144*var2[67] - 5.*t5529*t6144*var2[81];
  p_output1[108]=-5.*t4878*t5318*var2[12] - 20.*t3768*t5282*t5286*var2[26] + 5.*t4878*t5318*var2[26] - 30.*t5181*t5207*t5257*var2[40] + 20.*t3768*t5282*t5286*var2[40] - 20.*t4734*t4781*t4969*var2[54] + 30.*t5181*t5207*t5257*var2[54] - 5.*t2957*t3895*var2[68] + 20.*t4734*t4781*t4969*var2[68] + 5.*t2957*t3895*var2[82];
  p_output1[109]=t5360;
  p_output1[110]=t5419;
  p_output1[111]=t5447;
  p_output1[112]=t5487;
  p_output1[113]=t5496;
  p_output1[114]=t5770;
  p_output1[115]=5.*t5318*t6211*var2[12] - 5.*t4878*t5318*var2[26] + 5.*t3768*t5282*t5318*var2[26] + 20.*t3768*t4878*t5286*t6211*var2[26] + 20.*t5181*t5207*t5286*var2[40] - 20.*t3768*t5282*t5286*var2[40] + 30.*t5207*t5257*t5282*t6211*var2[40] + 30.*t4734*t4781*t5257*var2[54] - 30.*t5181*t5207*t5257*var2[54] + 20.*t4781*t4969*t5181*t6211*var2[54] + 20.*t2957*t3895*t4969*var2[68] - 20.*t4734*t4781*t4969*var2[68] + 5.*t3895*t4734*t6211*var2[68] - 5.*t2957*t3895*var2[82] + 5.*t5529*t6144*var2[82];
  p_output1[116]=5.*t3768*t5282*t5318*var2[12] + 20.*t5181*t5207*t5286*var2[26] - 5.*t3768*t5282*t5318*var2[26] + 30.*t4734*t4781*t5257*var2[40] - 20.*t5181*t5207*t5286*var2[40] + 20.*t2957*t3895*t4969*var2[54] - 30.*t4734*t4781*t5257*var2[54] - 20.*t2957*t3895*t4969*var2[68] + 5.*t5529*t6144*var2[68] - 5.*t5529*t6144*var2[82];
  p_output1[117]=-5.*t4878*t5318*var2[13] - 20.*t3768*t5282*t5286*var2[27] + 5.*t4878*t5318*var2[27] - 30.*t5181*t5207*t5257*var2[41] + 20.*t3768*t5282*t5286*var2[41] - 20.*t4734*t4781*t4969*var2[55] + 30.*t5181*t5207*t5257*var2[55] - 5.*t2957*t3895*var2[69] + 20.*t4734*t4781*t4969*var2[69] + 5.*t2957*t3895*var2[83];
  p_output1[118]=t5360;
  p_output1[119]=t5419;
  p_output1[120]=t5447;
  p_output1[121]=t5487;
  p_output1[122]=t5496;
  p_output1[123]=t5770;
  p_output1[124]=5.*t5318*t6211*var2[13] - 5.*t4878*t5318*var2[27] + 5.*t3768*t5282*t5318*var2[27] + 20.*t3768*t4878*t5286*t6211*var2[27] + 20.*t5181*t5207*t5286*var2[41] - 20.*t3768*t5282*t5286*var2[41] + 30.*t5207*t5257*t5282*t6211*var2[41] + 30.*t4734*t4781*t5257*var2[55] - 30.*t5181*t5207*t5257*var2[55] + 20.*t4781*t4969*t5181*t6211*var2[55] + 20.*t2957*t3895*t4969*var2[69] - 20.*t4734*t4781*t4969*var2[69] + 5.*t3895*t4734*t6211*var2[69] - 5.*t2957*t3895*var2[83] + 5.*t5529*t6144*var2[83];
  p_output1[125]=5.*t3768*t5282*t5318*var2[13] + 20.*t5181*t5207*t5286*var2[27] - 5.*t3768*t5282*t5318*var2[27] + 30.*t4734*t4781*t5257*var2[41] - 20.*t5181*t5207*t5286*var2[41] + 20.*t2957*t3895*t4969*var2[55] - 30.*t4734*t4781*t5257*var2[55] - 20.*t2957*t3895*t4969*var2[69] + 5.*t5529*t6144*var2[69] - 5.*t5529*t6144*var2[83];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 84 && ncols == 1) && 
      !(mrows == 1 && ncols == 84))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_yd_position_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_yd_position_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
