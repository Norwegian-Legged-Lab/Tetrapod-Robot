/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:38:53 GMT+02:00
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
  double t1898;
  double t2702;
  double t2705;
  double t2712;
  double t3038;
  double t3075;
  double t3111;
  double t3113;
  double t3119;
  double t5034;
  double t5157;
  double t5214;
  double t5232;
  double t5238;
  double t5242;
  double t5252;
  double t5249;
  double t5253;
  double t5270;
  double t5274;
  double t5275;
  double t5246;
  double t5248;
  double t5250;
  double t5251;
  double t5254;
  double t5257;
  double t5259;
  double t5261;
  t1898 = -1.*var3[0];
  t2702 = t1898 + var3[1];
  t2705 = Power(t2702,-5);
  t2712 = t1898 + var1[0];
  t3038 = Power(t2712,2);
  t3075 = Power(t2702,-4);
  t3111 = 1/t2702;
  t3113 = -1.*t3111*t2712;
  t3119 = 1. + t3113;
  t5034 = Power(t2702,-3);
  t5157 = Power(t3119,2);
  t5214 = Power(t2702,-2);
  t5232 = Power(t3119,3);
  t5238 = 20.*t5214*t5232;
  t5242 = 60.*t5034*t2712*t5157;
  t5252 = Power(t2712,3);
  t5249 = 60.*t3075*t3038*t3119;
  t5253 = 20.*t2705*t5252;
  t5270 = Power(t2702,-6);
  t5274 = -1.*t5214*t2712;
  t5275 = t3111 + t5274;
  t5246 = -40.*t5214*t5232;
  t5248 = t5242 + t5246;
  t5250 = -120.*t5034*t2712*t5157;
  t5251 = t5249 + t5250 + t5238;
  t5254 = -120.*t3075*t3038*t3119;
  t5257 = t5253 + t5254 + t5242;
  t5259 = -40.*t2705*t5252;
  t5261 = t5259 + t5249;
  p_output1[0]=-60.*t5034*t5157*var2[0] - 120.*t2712*t3075*t3119*var2[14] + 180.*t5034*t5157*var2[14] - 60.*t2705*t3038*var2[28] + 360.*t2712*t3075*t3119*var2[28] - 180.*t5034*t5157*var2[28] + 180.*t2705*t3038*var2[42] - 360.*t2712*t3075*t3119*var2[42] + 60.*t5034*t5157*var2[42] - 180.*t2705*t3038*var2[56] + 120.*t2712*t3075*t3119*var2[56] + 60.*t2705*t3038*var2[70];
  p_output1[1]=t5238;
  p_output1[2]=t5248;
  p_output1[3]=t5251;
  p_output1[4]=t5257;
  p_output1[5]=t5261;
  p_output1[6]=t5253;
  p_output1[7]=40.*t5034*t5232*var2[0] + 60.*t5157*t5214*t5275*var2[0] + 180.*t2712*t3075*t5157*var2[14] - 60.*t5034*t5157*var2[14] - 80.*t5034*t5232*var2[14] + 120.*t2712*t3119*t5034*t5275*var2[14] - 120.*t5157*t5214*t5275*var2[14] + 240.*t2705*t3038*t3119*var2[28] - 120.*t2712*t3075*t3119*var2[28] - 360.*t2712*t3075*t5157*var2[28] + 120.*t5034*t5157*var2[28] + 40.*t5034*t5232*var2[28] + 60.*t3038*t3075*t5275*var2[28] - 240.*t2712*t3119*t5034*t5275*var2[28] + 60.*t5157*t5214*t5275*var2[28] - 60.*t2705*t3038*var2[42] - 480.*t2705*t3038*t3119*var2[42] + 240.*t2712*t3075*t3119*var2[42] + 180.*t2712*t3075*t5157*var2[42] - 60.*t5034*t5157*var2[42] + 100.*t5252*t5270*var2[42] - 120.*t3038*t3075*t5275*var2[42] + 120.*t2712*t3119*t5034*t5275*var2[42] + 120.*t2705*t3038*var2[56] + 240.*t2705*t3038*t3119*var2[56] - 120.*t2712*t3075*t3119*var2[56] - 200.*t5252*t5270*var2[56] + 60.*t3038*t3075*t5275*var2[56] - 60.*t2705*t3038*var2[70] + 100.*t5252*t5270*var2[70];
  p_output1[8]=60.*t2712*t3075*t5157*var2[0] - 40.*t5034*t5232*var2[0] + 120.*t2705*t3038*t3119*var2[14] - 300.*t2712*t3075*t5157*var2[14] + 80.*t5034*t5232*var2[14] - 480.*t2705*t3038*t3119*var2[28] + 420.*t2712*t3075*t5157*var2[28] - 40.*t5034*t5232*var2[28] + 60.*t5252*t5270*var2[28] + 600.*t2705*t3038*t3119*var2[42] - 180.*t2712*t3075*t5157*var2[42] - 220.*t5252*t5270*var2[42] - 240.*t2705*t3038*t3119*var2[56] + 260.*t5252*t5270*var2[56] - 100.*t5252*t5270*var2[70];
  p_output1[9]=-60.*t5034*t5157*var2[1] - 120.*t2712*t3075*t3119*var2[15] + 180.*t5034*t5157*var2[15] - 60.*t2705*t3038*var2[29] + 360.*t2712*t3075*t3119*var2[29] - 180.*t5034*t5157*var2[29] + 180.*t2705*t3038*var2[43] - 360.*t2712*t3075*t3119*var2[43] + 60.*t5034*t5157*var2[43] - 180.*t2705*t3038*var2[57] + 120.*t2712*t3075*t3119*var2[57] + 60.*t2705*t3038*var2[71];
  p_output1[10]=t5238;
  p_output1[11]=t5248;
  p_output1[12]=t5251;
  p_output1[13]=t5257;
  p_output1[14]=t5261;
  p_output1[15]=t5253;
  p_output1[16]=40.*t5034*t5232*var2[1] + 60.*t5157*t5214*t5275*var2[1] + 180.*t2712*t3075*t5157*var2[15] - 60.*t5034*t5157*var2[15] - 80.*t5034*t5232*var2[15] + 120.*t2712*t3119*t5034*t5275*var2[15] - 120.*t5157*t5214*t5275*var2[15] + 240.*t2705*t3038*t3119*var2[29] - 120.*t2712*t3075*t3119*var2[29] - 360.*t2712*t3075*t5157*var2[29] + 120.*t5034*t5157*var2[29] + 40.*t5034*t5232*var2[29] + 60.*t3038*t3075*t5275*var2[29] - 240.*t2712*t3119*t5034*t5275*var2[29] + 60.*t5157*t5214*t5275*var2[29] - 60.*t2705*t3038*var2[43] - 480.*t2705*t3038*t3119*var2[43] + 240.*t2712*t3075*t3119*var2[43] + 180.*t2712*t3075*t5157*var2[43] - 60.*t5034*t5157*var2[43] + 100.*t5252*t5270*var2[43] - 120.*t3038*t3075*t5275*var2[43] + 120.*t2712*t3119*t5034*t5275*var2[43] + 120.*t2705*t3038*var2[57] + 240.*t2705*t3038*t3119*var2[57] - 120.*t2712*t3075*t3119*var2[57] - 200.*t5252*t5270*var2[57] + 60.*t3038*t3075*t5275*var2[57] - 60.*t2705*t3038*var2[71] + 100.*t5252*t5270*var2[71];
  p_output1[17]=60.*t2712*t3075*t5157*var2[1] - 40.*t5034*t5232*var2[1] + 120.*t2705*t3038*t3119*var2[15] - 300.*t2712*t3075*t5157*var2[15] + 80.*t5034*t5232*var2[15] - 480.*t2705*t3038*t3119*var2[29] + 420.*t2712*t3075*t5157*var2[29] - 40.*t5034*t5232*var2[29] + 60.*t5252*t5270*var2[29] + 600.*t2705*t3038*t3119*var2[43] - 180.*t2712*t3075*t5157*var2[43] - 220.*t5252*t5270*var2[43] - 240.*t2705*t3038*t3119*var2[57] + 260.*t5252*t5270*var2[57] - 100.*t5252*t5270*var2[71];
  p_output1[18]=-60.*t5034*t5157*var2[2] - 120.*t2712*t3075*t3119*var2[16] + 180.*t5034*t5157*var2[16] - 60.*t2705*t3038*var2[30] + 360.*t2712*t3075*t3119*var2[30] - 180.*t5034*t5157*var2[30] + 180.*t2705*t3038*var2[44] - 360.*t2712*t3075*t3119*var2[44] + 60.*t5034*t5157*var2[44] - 180.*t2705*t3038*var2[58] + 120.*t2712*t3075*t3119*var2[58] + 60.*t2705*t3038*var2[72];
  p_output1[19]=t5238;
  p_output1[20]=t5248;
  p_output1[21]=t5251;
  p_output1[22]=t5257;
  p_output1[23]=t5261;
  p_output1[24]=t5253;
  p_output1[25]=40.*t5034*t5232*var2[2] + 60.*t5157*t5214*t5275*var2[2] + 180.*t2712*t3075*t5157*var2[16] - 60.*t5034*t5157*var2[16] - 80.*t5034*t5232*var2[16] + 120.*t2712*t3119*t5034*t5275*var2[16] - 120.*t5157*t5214*t5275*var2[16] + 240.*t2705*t3038*t3119*var2[30] - 120.*t2712*t3075*t3119*var2[30] - 360.*t2712*t3075*t5157*var2[30] + 120.*t5034*t5157*var2[30] + 40.*t5034*t5232*var2[30] + 60.*t3038*t3075*t5275*var2[30] - 240.*t2712*t3119*t5034*t5275*var2[30] + 60.*t5157*t5214*t5275*var2[30] - 60.*t2705*t3038*var2[44] - 480.*t2705*t3038*t3119*var2[44] + 240.*t2712*t3075*t3119*var2[44] + 180.*t2712*t3075*t5157*var2[44] - 60.*t5034*t5157*var2[44] + 100.*t5252*t5270*var2[44] - 120.*t3038*t3075*t5275*var2[44] + 120.*t2712*t3119*t5034*t5275*var2[44] + 120.*t2705*t3038*var2[58] + 240.*t2705*t3038*t3119*var2[58] - 120.*t2712*t3075*t3119*var2[58] - 200.*t5252*t5270*var2[58] + 60.*t3038*t3075*t5275*var2[58] - 60.*t2705*t3038*var2[72] + 100.*t5252*t5270*var2[72];
  p_output1[26]=60.*t2712*t3075*t5157*var2[2] - 40.*t5034*t5232*var2[2] + 120.*t2705*t3038*t3119*var2[16] - 300.*t2712*t3075*t5157*var2[16] + 80.*t5034*t5232*var2[16] - 480.*t2705*t3038*t3119*var2[30] + 420.*t2712*t3075*t5157*var2[30] - 40.*t5034*t5232*var2[30] + 60.*t5252*t5270*var2[30] + 600.*t2705*t3038*t3119*var2[44] - 180.*t2712*t3075*t5157*var2[44] - 220.*t5252*t5270*var2[44] - 240.*t2705*t3038*t3119*var2[58] + 260.*t5252*t5270*var2[58] - 100.*t5252*t5270*var2[72];
  p_output1[27]=-60.*t5034*t5157*var2[3] - 120.*t2712*t3075*t3119*var2[17] + 180.*t5034*t5157*var2[17] - 60.*t2705*t3038*var2[31] + 360.*t2712*t3075*t3119*var2[31] - 180.*t5034*t5157*var2[31] + 180.*t2705*t3038*var2[45] - 360.*t2712*t3075*t3119*var2[45] + 60.*t5034*t5157*var2[45] - 180.*t2705*t3038*var2[59] + 120.*t2712*t3075*t3119*var2[59] + 60.*t2705*t3038*var2[73];
  p_output1[28]=t5238;
  p_output1[29]=t5248;
  p_output1[30]=t5251;
  p_output1[31]=t5257;
  p_output1[32]=t5261;
  p_output1[33]=t5253;
  p_output1[34]=40.*t5034*t5232*var2[3] + 60.*t5157*t5214*t5275*var2[3] + 180.*t2712*t3075*t5157*var2[17] - 60.*t5034*t5157*var2[17] - 80.*t5034*t5232*var2[17] + 120.*t2712*t3119*t5034*t5275*var2[17] - 120.*t5157*t5214*t5275*var2[17] + 240.*t2705*t3038*t3119*var2[31] - 120.*t2712*t3075*t3119*var2[31] - 360.*t2712*t3075*t5157*var2[31] + 120.*t5034*t5157*var2[31] + 40.*t5034*t5232*var2[31] + 60.*t3038*t3075*t5275*var2[31] - 240.*t2712*t3119*t5034*t5275*var2[31] + 60.*t5157*t5214*t5275*var2[31] - 60.*t2705*t3038*var2[45] - 480.*t2705*t3038*t3119*var2[45] + 240.*t2712*t3075*t3119*var2[45] + 180.*t2712*t3075*t5157*var2[45] - 60.*t5034*t5157*var2[45] + 100.*t5252*t5270*var2[45] - 120.*t3038*t3075*t5275*var2[45] + 120.*t2712*t3119*t5034*t5275*var2[45] + 120.*t2705*t3038*var2[59] + 240.*t2705*t3038*t3119*var2[59] - 120.*t2712*t3075*t3119*var2[59] - 200.*t5252*t5270*var2[59] + 60.*t3038*t3075*t5275*var2[59] - 60.*t2705*t3038*var2[73] + 100.*t5252*t5270*var2[73];
  p_output1[35]=60.*t2712*t3075*t5157*var2[3] - 40.*t5034*t5232*var2[3] + 120.*t2705*t3038*t3119*var2[17] - 300.*t2712*t3075*t5157*var2[17] + 80.*t5034*t5232*var2[17] - 480.*t2705*t3038*t3119*var2[31] + 420.*t2712*t3075*t5157*var2[31] - 40.*t5034*t5232*var2[31] + 60.*t5252*t5270*var2[31] + 600.*t2705*t3038*t3119*var2[45] - 180.*t2712*t3075*t5157*var2[45] - 220.*t5252*t5270*var2[45] - 240.*t2705*t3038*t3119*var2[59] + 260.*t5252*t5270*var2[59] - 100.*t5252*t5270*var2[73];
  p_output1[36]=-60.*t5034*t5157*var2[4] - 120.*t2712*t3075*t3119*var2[18] + 180.*t5034*t5157*var2[18] - 60.*t2705*t3038*var2[32] + 360.*t2712*t3075*t3119*var2[32] - 180.*t5034*t5157*var2[32] + 180.*t2705*t3038*var2[46] - 360.*t2712*t3075*t3119*var2[46] + 60.*t5034*t5157*var2[46] - 180.*t2705*t3038*var2[60] + 120.*t2712*t3075*t3119*var2[60] + 60.*t2705*t3038*var2[74];
  p_output1[37]=t5238;
  p_output1[38]=t5248;
  p_output1[39]=t5251;
  p_output1[40]=t5257;
  p_output1[41]=t5261;
  p_output1[42]=t5253;
  p_output1[43]=40.*t5034*t5232*var2[4] + 60.*t5157*t5214*t5275*var2[4] + 180.*t2712*t3075*t5157*var2[18] - 60.*t5034*t5157*var2[18] - 80.*t5034*t5232*var2[18] + 120.*t2712*t3119*t5034*t5275*var2[18] - 120.*t5157*t5214*t5275*var2[18] + 240.*t2705*t3038*t3119*var2[32] - 120.*t2712*t3075*t3119*var2[32] - 360.*t2712*t3075*t5157*var2[32] + 120.*t5034*t5157*var2[32] + 40.*t5034*t5232*var2[32] + 60.*t3038*t3075*t5275*var2[32] - 240.*t2712*t3119*t5034*t5275*var2[32] + 60.*t5157*t5214*t5275*var2[32] - 60.*t2705*t3038*var2[46] - 480.*t2705*t3038*t3119*var2[46] + 240.*t2712*t3075*t3119*var2[46] + 180.*t2712*t3075*t5157*var2[46] - 60.*t5034*t5157*var2[46] + 100.*t5252*t5270*var2[46] - 120.*t3038*t3075*t5275*var2[46] + 120.*t2712*t3119*t5034*t5275*var2[46] + 120.*t2705*t3038*var2[60] + 240.*t2705*t3038*t3119*var2[60] - 120.*t2712*t3075*t3119*var2[60] - 200.*t5252*t5270*var2[60] + 60.*t3038*t3075*t5275*var2[60] - 60.*t2705*t3038*var2[74] + 100.*t5252*t5270*var2[74];
  p_output1[44]=60.*t2712*t3075*t5157*var2[4] - 40.*t5034*t5232*var2[4] + 120.*t2705*t3038*t3119*var2[18] - 300.*t2712*t3075*t5157*var2[18] + 80.*t5034*t5232*var2[18] - 480.*t2705*t3038*t3119*var2[32] + 420.*t2712*t3075*t5157*var2[32] - 40.*t5034*t5232*var2[32] + 60.*t5252*t5270*var2[32] + 600.*t2705*t3038*t3119*var2[46] - 180.*t2712*t3075*t5157*var2[46] - 220.*t5252*t5270*var2[46] - 240.*t2705*t3038*t3119*var2[60] + 260.*t5252*t5270*var2[60] - 100.*t5252*t5270*var2[74];
  p_output1[45]=-60.*t5034*t5157*var2[5] - 120.*t2712*t3075*t3119*var2[19] + 180.*t5034*t5157*var2[19] - 60.*t2705*t3038*var2[33] + 360.*t2712*t3075*t3119*var2[33] - 180.*t5034*t5157*var2[33] + 180.*t2705*t3038*var2[47] - 360.*t2712*t3075*t3119*var2[47] + 60.*t5034*t5157*var2[47] - 180.*t2705*t3038*var2[61] + 120.*t2712*t3075*t3119*var2[61] + 60.*t2705*t3038*var2[75];
  p_output1[46]=t5238;
  p_output1[47]=t5248;
  p_output1[48]=t5251;
  p_output1[49]=t5257;
  p_output1[50]=t5261;
  p_output1[51]=t5253;
  p_output1[52]=40.*t5034*t5232*var2[5] + 60.*t5157*t5214*t5275*var2[5] + 180.*t2712*t3075*t5157*var2[19] - 60.*t5034*t5157*var2[19] - 80.*t5034*t5232*var2[19] + 120.*t2712*t3119*t5034*t5275*var2[19] - 120.*t5157*t5214*t5275*var2[19] + 240.*t2705*t3038*t3119*var2[33] - 120.*t2712*t3075*t3119*var2[33] - 360.*t2712*t3075*t5157*var2[33] + 120.*t5034*t5157*var2[33] + 40.*t5034*t5232*var2[33] + 60.*t3038*t3075*t5275*var2[33] - 240.*t2712*t3119*t5034*t5275*var2[33] + 60.*t5157*t5214*t5275*var2[33] - 60.*t2705*t3038*var2[47] - 480.*t2705*t3038*t3119*var2[47] + 240.*t2712*t3075*t3119*var2[47] + 180.*t2712*t3075*t5157*var2[47] - 60.*t5034*t5157*var2[47] + 100.*t5252*t5270*var2[47] - 120.*t3038*t3075*t5275*var2[47] + 120.*t2712*t3119*t5034*t5275*var2[47] + 120.*t2705*t3038*var2[61] + 240.*t2705*t3038*t3119*var2[61] - 120.*t2712*t3075*t3119*var2[61] - 200.*t5252*t5270*var2[61] + 60.*t3038*t3075*t5275*var2[61] - 60.*t2705*t3038*var2[75] + 100.*t5252*t5270*var2[75];
  p_output1[53]=60.*t2712*t3075*t5157*var2[5] - 40.*t5034*t5232*var2[5] + 120.*t2705*t3038*t3119*var2[19] - 300.*t2712*t3075*t5157*var2[19] + 80.*t5034*t5232*var2[19] - 480.*t2705*t3038*t3119*var2[33] + 420.*t2712*t3075*t5157*var2[33] - 40.*t5034*t5232*var2[33] + 60.*t5252*t5270*var2[33] + 600.*t2705*t3038*t3119*var2[47] - 180.*t2712*t3075*t5157*var2[47] - 220.*t5252*t5270*var2[47] - 240.*t2705*t3038*t3119*var2[61] + 260.*t5252*t5270*var2[61] - 100.*t5252*t5270*var2[75];
  p_output1[54]=-60.*t5034*t5157*var2[6] - 120.*t2712*t3075*t3119*var2[20] + 180.*t5034*t5157*var2[20] - 60.*t2705*t3038*var2[34] + 360.*t2712*t3075*t3119*var2[34] - 180.*t5034*t5157*var2[34] + 180.*t2705*t3038*var2[48] - 360.*t2712*t3075*t3119*var2[48] + 60.*t5034*t5157*var2[48] - 180.*t2705*t3038*var2[62] + 120.*t2712*t3075*t3119*var2[62] + 60.*t2705*t3038*var2[76];
  p_output1[55]=t5238;
  p_output1[56]=t5248;
  p_output1[57]=t5251;
  p_output1[58]=t5257;
  p_output1[59]=t5261;
  p_output1[60]=t5253;
  p_output1[61]=40.*t5034*t5232*var2[6] + 60.*t5157*t5214*t5275*var2[6] + 180.*t2712*t3075*t5157*var2[20] - 60.*t5034*t5157*var2[20] - 80.*t5034*t5232*var2[20] + 120.*t2712*t3119*t5034*t5275*var2[20] - 120.*t5157*t5214*t5275*var2[20] + 240.*t2705*t3038*t3119*var2[34] - 120.*t2712*t3075*t3119*var2[34] - 360.*t2712*t3075*t5157*var2[34] + 120.*t5034*t5157*var2[34] + 40.*t5034*t5232*var2[34] + 60.*t3038*t3075*t5275*var2[34] - 240.*t2712*t3119*t5034*t5275*var2[34] + 60.*t5157*t5214*t5275*var2[34] - 60.*t2705*t3038*var2[48] - 480.*t2705*t3038*t3119*var2[48] + 240.*t2712*t3075*t3119*var2[48] + 180.*t2712*t3075*t5157*var2[48] - 60.*t5034*t5157*var2[48] + 100.*t5252*t5270*var2[48] - 120.*t3038*t3075*t5275*var2[48] + 120.*t2712*t3119*t5034*t5275*var2[48] + 120.*t2705*t3038*var2[62] + 240.*t2705*t3038*t3119*var2[62] - 120.*t2712*t3075*t3119*var2[62] - 200.*t5252*t5270*var2[62] + 60.*t3038*t3075*t5275*var2[62] - 60.*t2705*t3038*var2[76] + 100.*t5252*t5270*var2[76];
  p_output1[62]=60.*t2712*t3075*t5157*var2[6] - 40.*t5034*t5232*var2[6] + 120.*t2705*t3038*t3119*var2[20] - 300.*t2712*t3075*t5157*var2[20] + 80.*t5034*t5232*var2[20] - 480.*t2705*t3038*t3119*var2[34] + 420.*t2712*t3075*t5157*var2[34] - 40.*t5034*t5232*var2[34] + 60.*t5252*t5270*var2[34] + 600.*t2705*t3038*t3119*var2[48] - 180.*t2712*t3075*t5157*var2[48] - 220.*t5252*t5270*var2[48] - 240.*t2705*t3038*t3119*var2[62] + 260.*t5252*t5270*var2[62] - 100.*t5252*t5270*var2[76];
  p_output1[63]=-60.*t5034*t5157*var2[7] - 120.*t2712*t3075*t3119*var2[21] + 180.*t5034*t5157*var2[21] - 60.*t2705*t3038*var2[35] + 360.*t2712*t3075*t3119*var2[35] - 180.*t5034*t5157*var2[35] + 180.*t2705*t3038*var2[49] - 360.*t2712*t3075*t3119*var2[49] + 60.*t5034*t5157*var2[49] - 180.*t2705*t3038*var2[63] + 120.*t2712*t3075*t3119*var2[63] + 60.*t2705*t3038*var2[77];
  p_output1[64]=t5238;
  p_output1[65]=t5248;
  p_output1[66]=t5251;
  p_output1[67]=t5257;
  p_output1[68]=t5261;
  p_output1[69]=t5253;
  p_output1[70]=40.*t5034*t5232*var2[7] + 60.*t5157*t5214*t5275*var2[7] + 180.*t2712*t3075*t5157*var2[21] - 60.*t5034*t5157*var2[21] - 80.*t5034*t5232*var2[21] + 120.*t2712*t3119*t5034*t5275*var2[21] - 120.*t5157*t5214*t5275*var2[21] + 240.*t2705*t3038*t3119*var2[35] - 120.*t2712*t3075*t3119*var2[35] - 360.*t2712*t3075*t5157*var2[35] + 120.*t5034*t5157*var2[35] + 40.*t5034*t5232*var2[35] + 60.*t3038*t3075*t5275*var2[35] - 240.*t2712*t3119*t5034*t5275*var2[35] + 60.*t5157*t5214*t5275*var2[35] - 60.*t2705*t3038*var2[49] - 480.*t2705*t3038*t3119*var2[49] + 240.*t2712*t3075*t3119*var2[49] + 180.*t2712*t3075*t5157*var2[49] - 60.*t5034*t5157*var2[49] + 100.*t5252*t5270*var2[49] - 120.*t3038*t3075*t5275*var2[49] + 120.*t2712*t3119*t5034*t5275*var2[49] + 120.*t2705*t3038*var2[63] + 240.*t2705*t3038*t3119*var2[63] - 120.*t2712*t3075*t3119*var2[63] - 200.*t5252*t5270*var2[63] + 60.*t3038*t3075*t5275*var2[63] - 60.*t2705*t3038*var2[77] + 100.*t5252*t5270*var2[77];
  p_output1[71]=60.*t2712*t3075*t5157*var2[7] - 40.*t5034*t5232*var2[7] + 120.*t2705*t3038*t3119*var2[21] - 300.*t2712*t3075*t5157*var2[21] + 80.*t5034*t5232*var2[21] - 480.*t2705*t3038*t3119*var2[35] + 420.*t2712*t3075*t5157*var2[35] - 40.*t5034*t5232*var2[35] + 60.*t5252*t5270*var2[35] + 600.*t2705*t3038*t3119*var2[49] - 180.*t2712*t3075*t5157*var2[49] - 220.*t5252*t5270*var2[49] - 240.*t2705*t3038*t3119*var2[63] + 260.*t5252*t5270*var2[63] - 100.*t5252*t5270*var2[77];
  p_output1[72]=-60.*t5034*t5157*var2[8] - 120.*t2712*t3075*t3119*var2[22] + 180.*t5034*t5157*var2[22] - 60.*t2705*t3038*var2[36] + 360.*t2712*t3075*t3119*var2[36] - 180.*t5034*t5157*var2[36] + 180.*t2705*t3038*var2[50] - 360.*t2712*t3075*t3119*var2[50] + 60.*t5034*t5157*var2[50] - 180.*t2705*t3038*var2[64] + 120.*t2712*t3075*t3119*var2[64] + 60.*t2705*t3038*var2[78];
  p_output1[73]=t5238;
  p_output1[74]=t5248;
  p_output1[75]=t5251;
  p_output1[76]=t5257;
  p_output1[77]=t5261;
  p_output1[78]=t5253;
  p_output1[79]=40.*t5034*t5232*var2[8] + 60.*t5157*t5214*t5275*var2[8] + 180.*t2712*t3075*t5157*var2[22] - 60.*t5034*t5157*var2[22] - 80.*t5034*t5232*var2[22] + 120.*t2712*t3119*t5034*t5275*var2[22] - 120.*t5157*t5214*t5275*var2[22] + 240.*t2705*t3038*t3119*var2[36] - 120.*t2712*t3075*t3119*var2[36] - 360.*t2712*t3075*t5157*var2[36] + 120.*t5034*t5157*var2[36] + 40.*t5034*t5232*var2[36] + 60.*t3038*t3075*t5275*var2[36] - 240.*t2712*t3119*t5034*t5275*var2[36] + 60.*t5157*t5214*t5275*var2[36] - 60.*t2705*t3038*var2[50] - 480.*t2705*t3038*t3119*var2[50] + 240.*t2712*t3075*t3119*var2[50] + 180.*t2712*t3075*t5157*var2[50] - 60.*t5034*t5157*var2[50] + 100.*t5252*t5270*var2[50] - 120.*t3038*t3075*t5275*var2[50] + 120.*t2712*t3119*t5034*t5275*var2[50] + 120.*t2705*t3038*var2[64] + 240.*t2705*t3038*t3119*var2[64] - 120.*t2712*t3075*t3119*var2[64] - 200.*t5252*t5270*var2[64] + 60.*t3038*t3075*t5275*var2[64] - 60.*t2705*t3038*var2[78] + 100.*t5252*t5270*var2[78];
  p_output1[80]=60.*t2712*t3075*t5157*var2[8] - 40.*t5034*t5232*var2[8] + 120.*t2705*t3038*t3119*var2[22] - 300.*t2712*t3075*t5157*var2[22] + 80.*t5034*t5232*var2[22] - 480.*t2705*t3038*t3119*var2[36] + 420.*t2712*t3075*t5157*var2[36] - 40.*t5034*t5232*var2[36] + 60.*t5252*t5270*var2[36] + 600.*t2705*t3038*t3119*var2[50] - 180.*t2712*t3075*t5157*var2[50] - 220.*t5252*t5270*var2[50] - 240.*t2705*t3038*t3119*var2[64] + 260.*t5252*t5270*var2[64] - 100.*t5252*t5270*var2[78];
  p_output1[81]=-60.*t5034*t5157*var2[9] - 120.*t2712*t3075*t3119*var2[23] + 180.*t5034*t5157*var2[23] - 60.*t2705*t3038*var2[37] + 360.*t2712*t3075*t3119*var2[37] - 180.*t5034*t5157*var2[37] + 180.*t2705*t3038*var2[51] - 360.*t2712*t3075*t3119*var2[51] + 60.*t5034*t5157*var2[51] - 180.*t2705*t3038*var2[65] + 120.*t2712*t3075*t3119*var2[65] + 60.*t2705*t3038*var2[79];
  p_output1[82]=t5238;
  p_output1[83]=t5248;
  p_output1[84]=t5251;
  p_output1[85]=t5257;
  p_output1[86]=t5261;
  p_output1[87]=t5253;
  p_output1[88]=40.*t5034*t5232*var2[9] + 60.*t5157*t5214*t5275*var2[9] + 180.*t2712*t3075*t5157*var2[23] - 60.*t5034*t5157*var2[23] - 80.*t5034*t5232*var2[23] + 120.*t2712*t3119*t5034*t5275*var2[23] - 120.*t5157*t5214*t5275*var2[23] + 240.*t2705*t3038*t3119*var2[37] - 120.*t2712*t3075*t3119*var2[37] - 360.*t2712*t3075*t5157*var2[37] + 120.*t5034*t5157*var2[37] + 40.*t5034*t5232*var2[37] + 60.*t3038*t3075*t5275*var2[37] - 240.*t2712*t3119*t5034*t5275*var2[37] + 60.*t5157*t5214*t5275*var2[37] - 60.*t2705*t3038*var2[51] - 480.*t2705*t3038*t3119*var2[51] + 240.*t2712*t3075*t3119*var2[51] + 180.*t2712*t3075*t5157*var2[51] - 60.*t5034*t5157*var2[51] + 100.*t5252*t5270*var2[51] - 120.*t3038*t3075*t5275*var2[51] + 120.*t2712*t3119*t5034*t5275*var2[51] + 120.*t2705*t3038*var2[65] + 240.*t2705*t3038*t3119*var2[65] - 120.*t2712*t3075*t3119*var2[65] - 200.*t5252*t5270*var2[65] + 60.*t3038*t3075*t5275*var2[65] - 60.*t2705*t3038*var2[79] + 100.*t5252*t5270*var2[79];
  p_output1[89]=60.*t2712*t3075*t5157*var2[9] - 40.*t5034*t5232*var2[9] + 120.*t2705*t3038*t3119*var2[23] - 300.*t2712*t3075*t5157*var2[23] + 80.*t5034*t5232*var2[23] - 480.*t2705*t3038*t3119*var2[37] + 420.*t2712*t3075*t5157*var2[37] - 40.*t5034*t5232*var2[37] + 60.*t5252*t5270*var2[37] + 600.*t2705*t3038*t3119*var2[51] - 180.*t2712*t3075*t5157*var2[51] - 220.*t5252*t5270*var2[51] - 240.*t2705*t3038*t3119*var2[65] + 260.*t5252*t5270*var2[65] - 100.*t5252*t5270*var2[79];
  p_output1[90]=-60.*t5034*t5157*var2[10] - 120.*t2712*t3075*t3119*var2[24] + 180.*t5034*t5157*var2[24] - 60.*t2705*t3038*var2[38] + 360.*t2712*t3075*t3119*var2[38] - 180.*t5034*t5157*var2[38] + 180.*t2705*t3038*var2[52] - 360.*t2712*t3075*t3119*var2[52] + 60.*t5034*t5157*var2[52] - 180.*t2705*t3038*var2[66] + 120.*t2712*t3075*t3119*var2[66] + 60.*t2705*t3038*var2[80];
  p_output1[91]=t5238;
  p_output1[92]=t5248;
  p_output1[93]=t5251;
  p_output1[94]=t5257;
  p_output1[95]=t5261;
  p_output1[96]=t5253;
  p_output1[97]=40.*t5034*t5232*var2[10] + 60.*t5157*t5214*t5275*var2[10] + 180.*t2712*t3075*t5157*var2[24] - 60.*t5034*t5157*var2[24] - 80.*t5034*t5232*var2[24] + 120.*t2712*t3119*t5034*t5275*var2[24] - 120.*t5157*t5214*t5275*var2[24] + 240.*t2705*t3038*t3119*var2[38] - 120.*t2712*t3075*t3119*var2[38] - 360.*t2712*t3075*t5157*var2[38] + 120.*t5034*t5157*var2[38] + 40.*t5034*t5232*var2[38] + 60.*t3038*t3075*t5275*var2[38] - 240.*t2712*t3119*t5034*t5275*var2[38] + 60.*t5157*t5214*t5275*var2[38] - 60.*t2705*t3038*var2[52] - 480.*t2705*t3038*t3119*var2[52] + 240.*t2712*t3075*t3119*var2[52] + 180.*t2712*t3075*t5157*var2[52] - 60.*t5034*t5157*var2[52] + 100.*t5252*t5270*var2[52] - 120.*t3038*t3075*t5275*var2[52] + 120.*t2712*t3119*t5034*t5275*var2[52] + 120.*t2705*t3038*var2[66] + 240.*t2705*t3038*t3119*var2[66] - 120.*t2712*t3075*t3119*var2[66] - 200.*t5252*t5270*var2[66] + 60.*t3038*t3075*t5275*var2[66] - 60.*t2705*t3038*var2[80] + 100.*t5252*t5270*var2[80];
  p_output1[98]=60.*t2712*t3075*t5157*var2[10] - 40.*t5034*t5232*var2[10] + 120.*t2705*t3038*t3119*var2[24] - 300.*t2712*t3075*t5157*var2[24] + 80.*t5034*t5232*var2[24] - 480.*t2705*t3038*t3119*var2[38] + 420.*t2712*t3075*t5157*var2[38] - 40.*t5034*t5232*var2[38] + 60.*t5252*t5270*var2[38] + 600.*t2705*t3038*t3119*var2[52] - 180.*t2712*t3075*t5157*var2[52] - 220.*t5252*t5270*var2[52] - 240.*t2705*t3038*t3119*var2[66] + 260.*t5252*t5270*var2[66] - 100.*t5252*t5270*var2[80];
  p_output1[99]=-60.*t5034*t5157*var2[11] - 120.*t2712*t3075*t3119*var2[25] + 180.*t5034*t5157*var2[25] - 60.*t2705*t3038*var2[39] + 360.*t2712*t3075*t3119*var2[39] - 180.*t5034*t5157*var2[39] + 180.*t2705*t3038*var2[53] - 360.*t2712*t3075*t3119*var2[53] + 60.*t5034*t5157*var2[53] - 180.*t2705*t3038*var2[67] + 120.*t2712*t3075*t3119*var2[67] + 60.*t2705*t3038*var2[81];
  p_output1[100]=t5238;
  p_output1[101]=t5248;
  p_output1[102]=t5251;
  p_output1[103]=t5257;
  p_output1[104]=t5261;
  p_output1[105]=t5253;
  p_output1[106]=40.*t5034*t5232*var2[11] + 60.*t5157*t5214*t5275*var2[11] + 180.*t2712*t3075*t5157*var2[25] - 60.*t5034*t5157*var2[25] - 80.*t5034*t5232*var2[25] + 120.*t2712*t3119*t5034*t5275*var2[25] - 120.*t5157*t5214*t5275*var2[25] + 240.*t2705*t3038*t3119*var2[39] - 120.*t2712*t3075*t3119*var2[39] - 360.*t2712*t3075*t5157*var2[39] + 120.*t5034*t5157*var2[39] + 40.*t5034*t5232*var2[39] + 60.*t3038*t3075*t5275*var2[39] - 240.*t2712*t3119*t5034*t5275*var2[39] + 60.*t5157*t5214*t5275*var2[39] - 60.*t2705*t3038*var2[53] - 480.*t2705*t3038*t3119*var2[53] + 240.*t2712*t3075*t3119*var2[53] + 180.*t2712*t3075*t5157*var2[53] - 60.*t5034*t5157*var2[53] + 100.*t5252*t5270*var2[53] - 120.*t3038*t3075*t5275*var2[53] + 120.*t2712*t3119*t5034*t5275*var2[53] + 120.*t2705*t3038*var2[67] + 240.*t2705*t3038*t3119*var2[67] - 120.*t2712*t3075*t3119*var2[67] - 200.*t5252*t5270*var2[67] + 60.*t3038*t3075*t5275*var2[67] - 60.*t2705*t3038*var2[81] + 100.*t5252*t5270*var2[81];
  p_output1[107]=60.*t2712*t3075*t5157*var2[11] - 40.*t5034*t5232*var2[11] + 120.*t2705*t3038*t3119*var2[25] - 300.*t2712*t3075*t5157*var2[25] + 80.*t5034*t5232*var2[25] - 480.*t2705*t3038*t3119*var2[39] + 420.*t2712*t3075*t5157*var2[39] - 40.*t5034*t5232*var2[39] + 60.*t5252*t5270*var2[39] + 600.*t2705*t3038*t3119*var2[53] - 180.*t2712*t3075*t5157*var2[53] - 220.*t5252*t5270*var2[53] - 240.*t2705*t3038*t3119*var2[67] + 260.*t5252*t5270*var2[67] - 100.*t5252*t5270*var2[81];
  p_output1[108]=-60.*t5034*t5157*var2[12] - 120.*t2712*t3075*t3119*var2[26] + 180.*t5034*t5157*var2[26] - 60.*t2705*t3038*var2[40] + 360.*t2712*t3075*t3119*var2[40] - 180.*t5034*t5157*var2[40] + 180.*t2705*t3038*var2[54] - 360.*t2712*t3075*t3119*var2[54] + 60.*t5034*t5157*var2[54] - 180.*t2705*t3038*var2[68] + 120.*t2712*t3075*t3119*var2[68] + 60.*t2705*t3038*var2[82];
  p_output1[109]=t5238;
  p_output1[110]=t5248;
  p_output1[111]=t5251;
  p_output1[112]=t5257;
  p_output1[113]=t5261;
  p_output1[114]=t5253;
  p_output1[115]=40.*t5034*t5232*var2[12] + 60.*t5157*t5214*t5275*var2[12] + 180.*t2712*t3075*t5157*var2[26] - 60.*t5034*t5157*var2[26] - 80.*t5034*t5232*var2[26] + 120.*t2712*t3119*t5034*t5275*var2[26] - 120.*t5157*t5214*t5275*var2[26] + 240.*t2705*t3038*t3119*var2[40] - 120.*t2712*t3075*t3119*var2[40] - 360.*t2712*t3075*t5157*var2[40] + 120.*t5034*t5157*var2[40] + 40.*t5034*t5232*var2[40] + 60.*t3038*t3075*t5275*var2[40] - 240.*t2712*t3119*t5034*t5275*var2[40] + 60.*t5157*t5214*t5275*var2[40] - 60.*t2705*t3038*var2[54] - 480.*t2705*t3038*t3119*var2[54] + 240.*t2712*t3075*t3119*var2[54] + 180.*t2712*t3075*t5157*var2[54] - 60.*t5034*t5157*var2[54] + 100.*t5252*t5270*var2[54] - 120.*t3038*t3075*t5275*var2[54] + 120.*t2712*t3119*t5034*t5275*var2[54] + 120.*t2705*t3038*var2[68] + 240.*t2705*t3038*t3119*var2[68] - 120.*t2712*t3075*t3119*var2[68] - 200.*t5252*t5270*var2[68] + 60.*t3038*t3075*t5275*var2[68] - 60.*t2705*t3038*var2[82] + 100.*t5252*t5270*var2[82];
  p_output1[116]=60.*t2712*t3075*t5157*var2[12] - 40.*t5034*t5232*var2[12] + 120.*t2705*t3038*t3119*var2[26] - 300.*t2712*t3075*t5157*var2[26] + 80.*t5034*t5232*var2[26] - 480.*t2705*t3038*t3119*var2[40] + 420.*t2712*t3075*t5157*var2[40] - 40.*t5034*t5232*var2[40] + 60.*t5252*t5270*var2[40] + 600.*t2705*t3038*t3119*var2[54] - 180.*t2712*t3075*t5157*var2[54] - 220.*t5252*t5270*var2[54] - 240.*t2705*t3038*t3119*var2[68] + 260.*t5252*t5270*var2[68] - 100.*t5252*t5270*var2[82];
  p_output1[117]=-60.*t5034*t5157*var2[13] - 120.*t2712*t3075*t3119*var2[27] + 180.*t5034*t5157*var2[27] - 60.*t2705*t3038*var2[41] + 360.*t2712*t3075*t3119*var2[41] - 180.*t5034*t5157*var2[41] + 180.*t2705*t3038*var2[55] - 360.*t2712*t3075*t3119*var2[55] + 60.*t5034*t5157*var2[55] - 180.*t2705*t3038*var2[69] + 120.*t2712*t3075*t3119*var2[69] + 60.*t2705*t3038*var2[83];
  p_output1[118]=t5238;
  p_output1[119]=t5248;
  p_output1[120]=t5251;
  p_output1[121]=t5257;
  p_output1[122]=t5261;
  p_output1[123]=t5253;
  p_output1[124]=40.*t5034*t5232*var2[13] + 60.*t5157*t5214*t5275*var2[13] + 180.*t2712*t3075*t5157*var2[27] - 60.*t5034*t5157*var2[27] - 80.*t5034*t5232*var2[27] + 120.*t2712*t3119*t5034*t5275*var2[27] - 120.*t5157*t5214*t5275*var2[27] + 240.*t2705*t3038*t3119*var2[41] - 120.*t2712*t3075*t3119*var2[41] - 360.*t2712*t3075*t5157*var2[41] + 120.*t5034*t5157*var2[41] + 40.*t5034*t5232*var2[41] + 60.*t3038*t3075*t5275*var2[41] - 240.*t2712*t3119*t5034*t5275*var2[41] + 60.*t5157*t5214*t5275*var2[41] - 60.*t2705*t3038*var2[55] - 480.*t2705*t3038*t3119*var2[55] + 240.*t2712*t3075*t3119*var2[55] + 180.*t2712*t3075*t5157*var2[55] - 60.*t5034*t5157*var2[55] + 100.*t5252*t5270*var2[55] - 120.*t3038*t3075*t5275*var2[55] + 120.*t2712*t3119*t5034*t5275*var2[55] + 120.*t2705*t3038*var2[69] + 240.*t2705*t3038*t3119*var2[69] - 120.*t2712*t3075*t3119*var2[69] - 200.*t5252*t5270*var2[69] + 60.*t3038*t3075*t5275*var2[69] - 60.*t2705*t3038*var2[83] + 100.*t5252*t5270*var2[83];
  p_output1[125]=60.*t2712*t3075*t5157*var2[13] - 40.*t5034*t5232*var2[13] + 120.*t2705*t3038*t3119*var2[27] - 300.*t2712*t3075*t5157*var2[27] + 80.*t5034*t5232*var2[27] - 480.*t2705*t3038*t3119*var2[41] + 420.*t2712*t3075*t5157*var2[41] - 40.*t5034*t5232*var2[41] + 60.*t5252*t5270*var2[41] + 600.*t2705*t3038*t3119*var2[55] - 180.*t2712*t3075*t5157*var2[55] - 220.*t5252*t5270*var2[55] - 240.*t2705*t3038*t3119*var2[69] + 260.*t5252*t5270*var2[69] - 100.*t5252*t5270*var2[83];
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

#include "J_Jd2yd_position_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_Jd2yd_position_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
