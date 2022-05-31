/*
 * Automatically Generated from Mathematica.
 * Mon 30 May 2022 12:13:29 GMT+02:00
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
  double t5664;
  double t28838;
  double t32834;
  double t32835;
  double t37020;
  double t37182;
  double t37187;
  double t37193;
  double t37194;
  double t37195;
  double t37210;
  double t37211;
  double t37217;
  double t37225;
  double t37226;
  double t37229;
  double t37238;
  double t37318;
  double t37322;
  double t37316;
  double t37233;
  double t37234;
  double t37235;
  double t37236;
  double t37237;
  double t37239;
  t5664 = -1.*var3[0];
  t28838 = t5664 + var3[1];
  t32834 = Power(t28838,-5);
  t32835 = t5664 + var1[0];
  t37020 = Power(t32835,4);
  t37182 = Power(t28838,-4);
  t37187 = Power(t32835,3);
  t37193 = 1/t28838;
  t37194 = -1.*t37193*t32835;
  t37195 = 1. + t37194;
  t37210 = Power(t28838,-3);
  t37211 = Power(t32835,2);
  t37217 = Power(t37195,2);
  t37225 = Power(t28838,-2);
  t37226 = Power(t37195,3);
  t37229 = Power(t37195,4);
  t37238 = Power(t32835,5);
  t37318 = -1.*t37225*t32835;
  t37322 = t37193 + t37318;
  t37316 = Power(t28838,-6);
  t37233 = Power(t37195,5);
  t37234 = 5.*t37193*t32835*t37229;
  t37235 = 10.*t37225*t37211*t37226;
  t37236 = 10.*t37210*t37187*t37217;
  t37237 = 5.*t37182*t37020*t37195;
  t37239 = t32834*t37238;
  p_output1[0]=-5.*t37193*t37229*var2[0] - 20.*t32835*t37225*t37226*var2[11] + 5.*t37193*t37229*var2[11] - 30.*t37210*t37211*t37217*var2[22] + 20.*t32835*t37225*t37226*var2[22] - 20.*t37182*t37187*t37195*var2[33] + 30.*t37210*t37211*t37217*var2[33] - 5.*t32834*t37020*var2[44] + 20.*t37182*t37187*t37195*var2[44] + 5.*t32834*t37020*var2[55];
  p_output1[1]=t37233;
  p_output1[2]=t37234;
  p_output1[3]=t37235;
  p_output1[4]=t37236;
  p_output1[5]=t37237;
  p_output1[6]=t37239;
  p_output1[7]=5.*t37229*t37322*var2[0] - 5.*t37193*t37229*var2[11] + 5.*t32835*t37225*t37229*var2[11] + 20.*t32835*t37193*t37226*t37322*var2[11] + 20.*t37210*t37211*t37226*var2[22] - 20.*t32835*t37225*t37226*var2[22] + 30.*t37211*t37217*t37225*t37322*var2[22] + 30.*t37182*t37187*t37217*var2[33] - 30.*t37210*t37211*t37217*var2[33] + 20.*t37187*t37195*t37210*t37322*var2[33] + 20.*t32834*t37020*t37195*var2[44] - 20.*t37182*t37187*t37195*var2[44] + 5.*t37020*t37182*t37322*var2[44] - 5.*t32834*t37020*var2[55] + 5.*t37238*t37316*var2[55];
  p_output1[8]=5.*t32835*t37225*t37229*var2[0] + 20.*t37210*t37211*t37226*var2[11] - 5.*t32835*t37225*t37229*var2[11] + 30.*t37182*t37187*t37217*var2[22] - 20.*t37210*t37211*t37226*var2[22] + 20.*t32834*t37020*t37195*var2[33] - 30.*t37182*t37187*t37217*var2[33] - 20.*t32834*t37020*t37195*var2[44] + 5.*t37238*t37316*var2[44] - 5.*t37238*t37316*var2[55];
  p_output1[9]=-5.*t37193*t37229*var2[1] - 20.*t32835*t37225*t37226*var2[12] + 5.*t37193*t37229*var2[12] - 30.*t37210*t37211*t37217*var2[23] + 20.*t32835*t37225*t37226*var2[23] - 20.*t37182*t37187*t37195*var2[34] + 30.*t37210*t37211*t37217*var2[34] - 5.*t32834*t37020*var2[45] + 20.*t37182*t37187*t37195*var2[45] + 5.*t32834*t37020*var2[56];
  p_output1[10]=t37233;
  p_output1[11]=t37234;
  p_output1[12]=t37235;
  p_output1[13]=t37236;
  p_output1[14]=t37237;
  p_output1[15]=t37239;
  p_output1[16]=5.*t37229*t37322*var2[1] - 5.*t37193*t37229*var2[12] + 5.*t32835*t37225*t37229*var2[12] + 20.*t32835*t37193*t37226*t37322*var2[12] + 20.*t37210*t37211*t37226*var2[23] - 20.*t32835*t37225*t37226*var2[23] + 30.*t37211*t37217*t37225*t37322*var2[23] + 30.*t37182*t37187*t37217*var2[34] - 30.*t37210*t37211*t37217*var2[34] + 20.*t37187*t37195*t37210*t37322*var2[34] + 20.*t32834*t37020*t37195*var2[45] - 20.*t37182*t37187*t37195*var2[45] + 5.*t37020*t37182*t37322*var2[45] - 5.*t32834*t37020*var2[56] + 5.*t37238*t37316*var2[56];
  p_output1[17]=5.*t32835*t37225*t37229*var2[1] + 20.*t37210*t37211*t37226*var2[12] - 5.*t32835*t37225*t37229*var2[12] + 30.*t37182*t37187*t37217*var2[23] - 20.*t37210*t37211*t37226*var2[23] + 20.*t32834*t37020*t37195*var2[34] - 30.*t37182*t37187*t37217*var2[34] - 20.*t32834*t37020*t37195*var2[45] + 5.*t37238*t37316*var2[45] - 5.*t37238*t37316*var2[56];
  p_output1[18]=-5.*t37193*t37229*var2[2] - 20.*t32835*t37225*t37226*var2[13] + 5.*t37193*t37229*var2[13] - 30.*t37210*t37211*t37217*var2[24] + 20.*t32835*t37225*t37226*var2[24] - 20.*t37182*t37187*t37195*var2[35] + 30.*t37210*t37211*t37217*var2[35] - 5.*t32834*t37020*var2[46] + 20.*t37182*t37187*t37195*var2[46] + 5.*t32834*t37020*var2[57];
  p_output1[19]=t37233;
  p_output1[20]=t37234;
  p_output1[21]=t37235;
  p_output1[22]=t37236;
  p_output1[23]=t37237;
  p_output1[24]=t37239;
  p_output1[25]=5.*t37229*t37322*var2[2] - 5.*t37193*t37229*var2[13] + 5.*t32835*t37225*t37229*var2[13] + 20.*t32835*t37193*t37226*t37322*var2[13] + 20.*t37210*t37211*t37226*var2[24] - 20.*t32835*t37225*t37226*var2[24] + 30.*t37211*t37217*t37225*t37322*var2[24] + 30.*t37182*t37187*t37217*var2[35] - 30.*t37210*t37211*t37217*var2[35] + 20.*t37187*t37195*t37210*t37322*var2[35] + 20.*t32834*t37020*t37195*var2[46] - 20.*t37182*t37187*t37195*var2[46] + 5.*t37020*t37182*t37322*var2[46] - 5.*t32834*t37020*var2[57] + 5.*t37238*t37316*var2[57];
  p_output1[26]=5.*t32835*t37225*t37229*var2[2] + 20.*t37210*t37211*t37226*var2[13] - 5.*t32835*t37225*t37229*var2[13] + 30.*t37182*t37187*t37217*var2[24] - 20.*t37210*t37211*t37226*var2[24] + 20.*t32834*t37020*t37195*var2[35] - 30.*t37182*t37187*t37217*var2[35] - 20.*t32834*t37020*t37195*var2[46] + 5.*t37238*t37316*var2[46] - 5.*t37238*t37316*var2[57];
  p_output1[27]=-5.*t37193*t37229*var2[3] - 20.*t32835*t37225*t37226*var2[14] + 5.*t37193*t37229*var2[14] - 30.*t37210*t37211*t37217*var2[25] + 20.*t32835*t37225*t37226*var2[25] - 20.*t37182*t37187*t37195*var2[36] + 30.*t37210*t37211*t37217*var2[36] - 5.*t32834*t37020*var2[47] + 20.*t37182*t37187*t37195*var2[47] + 5.*t32834*t37020*var2[58];
  p_output1[28]=t37233;
  p_output1[29]=t37234;
  p_output1[30]=t37235;
  p_output1[31]=t37236;
  p_output1[32]=t37237;
  p_output1[33]=t37239;
  p_output1[34]=5.*t37229*t37322*var2[3] - 5.*t37193*t37229*var2[14] + 5.*t32835*t37225*t37229*var2[14] + 20.*t32835*t37193*t37226*t37322*var2[14] + 20.*t37210*t37211*t37226*var2[25] - 20.*t32835*t37225*t37226*var2[25] + 30.*t37211*t37217*t37225*t37322*var2[25] + 30.*t37182*t37187*t37217*var2[36] - 30.*t37210*t37211*t37217*var2[36] + 20.*t37187*t37195*t37210*t37322*var2[36] + 20.*t32834*t37020*t37195*var2[47] - 20.*t37182*t37187*t37195*var2[47] + 5.*t37020*t37182*t37322*var2[47] - 5.*t32834*t37020*var2[58] + 5.*t37238*t37316*var2[58];
  p_output1[35]=5.*t32835*t37225*t37229*var2[3] + 20.*t37210*t37211*t37226*var2[14] - 5.*t32835*t37225*t37229*var2[14] + 30.*t37182*t37187*t37217*var2[25] - 20.*t37210*t37211*t37226*var2[25] + 20.*t32834*t37020*t37195*var2[36] - 30.*t37182*t37187*t37217*var2[36] - 20.*t32834*t37020*t37195*var2[47] + 5.*t37238*t37316*var2[47] - 5.*t37238*t37316*var2[58];
  p_output1[36]=-5.*t37193*t37229*var2[4] - 20.*t32835*t37225*t37226*var2[15] + 5.*t37193*t37229*var2[15] - 30.*t37210*t37211*t37217*var2[26] + 20.*t32835*t37225*t37226*var2[26] - 20.*t37182*t37187*t37195*var2[37] + 30.*t37210*t37211*t37217*var2[37] - 5.*t32834*t37020*var2[48] + 20.*t37182*t37187*t37195*var2[48] + 5.*t32834*t37020*var2[59];
  p_output1[37]=t37233;
  p_output1[38]=t37234;
  p_output1[39]=t37235;
  p_output1[40]=t37236;
  p_output1[41]=t37237;
  p_output1[42]=t37239;
  p_output1[43]=5.*t37229*t37322*var2[4] - 5.*t37193*t37229*var2[15] + 5.*t32835*t37225*t37229*var2[15] + 20.*t32835*t37193*t37226*t37322*var2[15] + 20.*t37210*t37211*t37226*var2[26] - 20.*t32835*t37225*t37226*var2[26] + 30.*t37211*t37217*t37225*t37322*var2[26] + 30.*t37182*t37187*t37217*var2[37] - 30.*t37210*t37211*t37217*var2[37] + 20.*t37187*t37195*t37210*t37322*var2[37] + 20.*t32834*t37020*t37195*var2[48] - 20.*t37182*t37187*t37195*var2[48] + 5.*t37020*t37182*t37322*var2[48] - 5.*t32834*t37020*var2[59] + 5.*t37238*t37316*var2[59];
  p_output1[44]=5.*t32835*t37225*t37229*var2[4] + 20.*t37210*t37211*t37226*var2[15] - 5.*t32835*t37225*t37229*var2[15] + 30.*t37182*t37187*t37217*var2[26] - 20.*t37210*t37211*t37226*var2[26] + 20.*t32834*t37020*t37195*var2[37] - 30.*t37182*t37187*t37217*var2[37] - 20.*t32834*t37020*t37195*var2[48] + 5.*t37238*t37316*var2[48] - 5.*t37238*t37316*var2[59];
  p_output1[45]=-5.*t37193*t37229*var2[5] - 20.*t32835*t37225*t37226*var2[16] + 5.*t37193*t37229*var2[16] - 30.*t37210*t37211*t37217*var2[27] + 20.*t32835*t37225*t37226*var2[27] - 20.*t37182*t37187*t37195*var2[38] + 30.*t37210*t37211*t37217*var2[38] - 5.*t32834*t37020*var2[49] + 20.*t37182*t37187*t37195*var2[49] + 5.*t32834*t37020*var2[60];
  p_output1[46]=t37233;
  p_output1[47]=t37234;
  p_output1[48]=t37235;
  p_output1[49]=t37236;
  p_output1[50]=t37237;
  p_output1[51]=t37239;
  p_output1[52]=5.*t37229*t37322*var2[5] - 5.*t37193*t37229*var2[16] + 5.*t32835*t37225*t37229*var2[16] + 20.*t32835*t37193*t37226*t37322*var2[16] + 20.*t37210*t37211*t37226*var2[27] - 20.*t32835*t37225*t37226*var2[27] + 30.*t37211*t37217*t37225*t37322*var2[27] + 30.*t37182*t37187*t37217*var2[38] - 30.*t37210*t37211*t37217*var2[38] + 20.*t37187*t37195*t37210*t37322*var2[38] + 20.*t32834*t37020*t37195*var2[49] - 20.*t37182*t37187*t37195*var2[49] + 5.*t37020*t37182*t37322*var2[49] - 5.*t32834*t37020*var2[60] + 5.*t37238*t37316*var2[60];
  p_output1[53]=5.*t32835*t37225*t37229*var2[5] + 20.*t37210*t37211*t37226*var2[16] - 5.*t32835*t37225*t37229*var2[16] + 30.*t37182*t37187*t37217*var2[27] - 20.*t37210*t37211*t37226*var2[27] + 20.*t32834*t37020*t37195*var2[38] - 30.*t37182*t37187*t37217*var2[38] - 20.*t32834*t37020*t37195*var2[49] + 5.*t37238*t37316*var2[49] - 5.*t37238*t37316*var2[60];
  p_output1[54]=-5.*t37193*t37229*var2[6] - 20.*t32835*t37225*t37226*var2[17] + 5.*t37193*t37229*var2[17] - 30.*t37210*t37211*t37217*var2[28] + 20.*t32835*t37225*t37226*var2[28] - 20.*t37182*t37187*t37195*var2[39] + 30.*t37210*t37211*t37217*var2[39] - 5.*t32834*t37020*var2[50] + 20.*t37182*t37187*t37195*var2[50] + 5.*t32834*t37020*var2[61];
  p_output1[55]=t37233;
  p_output1[56]=t37234;
  p_output1[57]=t37235;
  p_output1[58]=t37236;
  p_output1[59]=t37237;
  p_output1[60]=t37239;
  p_output1[61]=5.*t37229*t37322*var2[6] - 5.*t37193*t37229*var2[17] + 5.*t32835*t37225*t37229*var2[17] + 20.*t32835*t37193*t37226*t37322*var2[17] + 20.*t37210*t37211*t37226*var2[28] - 20.*t32835*t37225*t37226*var2[28] + 30.*t37211*t37217*t37225*t37322*var2[28] + 30.*t37182*t37187*t37217*var2[39] - 30.*t37210*t37211*t37217*var2[39] + 20.*t37187*t37195*t37210*t37322*var2[39] + 20.*t32834*t37020*t37195*var2[50] - 20.*t37182*t37187*t37195*var2[50] + 5.*t37020*t37182*t37322*var2[50] - 5.*t32834*t37020*var2[61] + 5.*t37238*t37316*var2[61];
  p_output1[62]=5.*t32835*t37225*t37229*var2[6] + 20.*t37210*t37211*t37226*var2[17] - 5.*t32835*t37225*t37229*var2[17] + 30.*t37182*t37187*t37217*var2[28] - 20.*t37210*t37211*t37226*var2[28] + 20.*t32834*t37020*t37195*var2[39] - 30.*t37182*t37187*t37217*var2[39] - 20.*t32834*t37020*t37195*var2[50] + 5.*t37238*t37316*var2[50] - 5.*t37238*t37316*var2[61];
  p_output1[63]=-5.*t37193*t37229*var2[7] - 20.*t32835*t37225*t37226*var2[18] + 5.*t37193*t37229*var2[18] - 30.*t37210*t37211*t37217*var2[29] + 20.*t32835*t37225*t37226*var2[29] - 20.*t37182*t37187*t37195*var2[40] + 30.*t37210*t37211*t37217*var2[40] - 5.*t32834*t37020*var2[51] + 20.*t37182*t37187*t37195*var2[51] + 5.*t32834*t37020*var2[62];
  p_output1[64]=t37233;
  p_output1[65]=t37234;
  p_output1[66]=t37235;
  p_output1[67]=t37236;
  p_output1[68]=t37237;
  p_output1[69]=t37239;
  p_output1[70]=5.*t37229*t37322*var2[7] - 5.*t37193*t37229*var2[18] + 5.*t32835*t37225*t37229*var2[18] + 20.*t32835*t37193*t37226*t37322*var2[18] + 20.*t37210*t37211*t37226*var2[29] - 20.*t32835*t37225*t37226*var2[29] + 30.*t37211*t37217*t37225*t37322*var2[29] + 30.*t37182*t37187*t37217*var2[40] - 30.*t37210*t37211*t37217*var2[40] + 20.*t37187*t37195*t37210*t37322*var2[40] + 20.*t32834*t37020*t37195*var2[51] - 20.*t37182*t37187*t37195*var2[51] + 5.*t37020*t37182*t37322*var2[51] - 5.*t32834*t37020*var2[62] + 5.*t37238*t37316*var2[62];
  p_output1[71]=5.*t32835*t37225*t37229*var2[7] + 20.*t37210*t37211*t37226*var2[18] - 5.*t32835*t37225*t37229*var2[18] + 30.*t37182*t37187*t37217*var2[29] - 20.*t37210*t37211*t37226*var2[29] + 20.*t32834*t37020*t37195*var2[40] - 30.*t37182*t37187*t37217*var2[40] - 20.*t32834*t37020*t37195*var2[51] + 5.*t37238*t37316*var2[51] - 5.*t37238*t37316*var2[62];
  p_output1[72]=-5.*t37193*t37229*var2[8] - 20.*t32835*t37225*t37226*var2[19] + 5.*t37193*t37229*var2[19] - 30.*t37210*t37211*t37217*var2[30] + 20.*t32835*t37225*t37226*var2[30] - 20.*t37182*t37187*t37195*var2[41] + 30.*t37210*t37211*t37217*var2[41] - 5.*t32834*t37020*var2[52] + 20.*t37182*t37187*t37195*var2[52] + 5.*t32834*t37020*var2[63];
  p_output1[73]=t37233;
  p_output1[74]=t37234;
  p_output1[75]=t37235;
  p_output1[76]=t37236;
  p_output1[77]=t37237;
  p_output1[78]=t37239;
  p_output1[79]=5.*t37229*t37322*var2[8] - 5.*t37193*t37229*var2[19] + 5.*t32835*t37225*t37229*var2[19] + 20.*t32835*t37193*t37226*t37322*var2[19] + 20.*t37210*t37211*t37226*var2[30] - 20.*t32835*t37225*t37226*var2[30] + 30.*t37211*t37217*t37225*t37322*var2[30] + 30.*t37182*t37187*t37217*var2[41] - 30.*t37210*t37211*t37217*var2[41] + 20.*t37187*t37195*t37210*t37322*var2[41] + 20.*t32834*t37020*t37195*var2[52] - 20.*t37182*t37187*t37195*var2[52] + 5.*t37020*t37182*t37322*var2[52] - 5.*t32834*t37020*var2[63] + 5.*t37238*t37316*var2[63];
  p_output1[80]=5.*t32835*t37225*t37229*var2[8] + 20.*t37210*t37211*t37226*var2[19] - 5.*t32835*t37225*t37229*var2[19] + 30.*t37182*t37187*t37217*var2[30] - 20.*t37210*t37211*t37226*var2[30] + 20.*t32834*t37020*t37195*var2[41] - 30.*t37182*t37187*t37217*var2[41] - 20.*t32834*t37020*t37195*var2[52] + 5.*t37238*t37316*var2[52] - 5.*t37238*t37316*var2[63];
  p_output1[81]=-5.*t37193*t37229*var2[9] - 20.*t32835*t37225*t37226*var2[20] + 5.*t37193*t37229*var2[20] - 30.*t37210*t37211*t37217*var2[31] + 20.*t32835*t37225*t37226*var2[31] - 20.*t37182*t37187*t37195*var2[42] + 30.*t37210*t37211*t37217*var2[42] - 5.*t32834*t37020*var2[53] + 20.*t37182*t37187*t37195*var2[53] + 5.*t32834*t37020*var2[64];
  p_output1[82]=t37233;
  p_output1[83]=t37234;
  p_output1[84]=t37235;
  p_output1[85]=t37236;
  p_output1[86]=t37237;
  p_output1[87]=t37239;
  p_output1[88]=5.*t37229*t37322*var2[9] - 5.*t37193*t37229*var2[20] + 5.*t32835*t37225*t37229*var2[20] + 20.*t32835*t37193*t37226*t37322*var2[20] + 20.*t37210*t37211*t37226*var2[31] - 20.*t32835*t37225*t37226*var2[31] + 30.*t37211*t37217*t37225*t37322*var2[31] + 30.*t37182*t37187*t37217*var2[42] - 30.*t37210*t37211*t37217*var2[42] + 20.*t37187*t37195*t37210*t37322*var2[42] + 20.*t32834*t37020*t37195*var2[53] - 20.*t37182*t37187*t37195*var2[53] + 5.*t37020*t37182*t37322*var2[53] - 5.*t32834*t37020*var2[64] + 5.*t37238*t37316*var2[64];
  p_output1[89]=5.*t32835*t37225*t37229*var2[9] + 20.*t37210*t37211*t37226*var2[20] - 5.*t32835*t37225*t37229*var2[20] + 30.*t37182*t37187*t37217*var2[31] - 20.*t37210*t37211*t37226*var2[31] + 20.*t32834*t37020*t37195*var2[42] - 30.*t37182*t37187*t37217*var2[42] - 20.*t32834*t37020*t37195*var2[53] + 5.*t37238*t37316*var2[53] - 5.*t37238*t37316*var2[64];
  p_output1[90]=-5.*t37193*t37229*var2[10] - 20.*t32835*t37225*t37226*var2[21] + 5.*t37193*t37229*var2[21] - 30.*t37210*t37211*t37217*var2[32] + 20.*t32835*t37225*t37226*var2[32] - 20.*t37182*t37187*t37195*var2[43] + 30.*t37210*t37211*t37217*var2[43] - 5.*t32834*t37020*var2[54] + 20.*t37182*t37187*t37195*var2[54] + 5.*t32834*t37020*var2[65];
  p_output1[91]=t37233;
  p_output1[92]=t37234;
  p_output1[93]=t37235;
  p_output1[94]=t37236;
  p_output1[95]=t37237;
  p_output1[96]=t37239;
  p_output1[97]=5.*t37229*t37322*var2[10] - 5.*t37193*t37229*var2[21] + 5.*t32835*t37225*t37229*var2[21] + 20.*t32835*t37193*t37226*t37322*var2[21] + 20.*t37210*t37211*t37226*var2[32] - 20.*t32835*t37225*t37226*var2[32] + 30.*t37211*t37217*t37225*t37322*var2[32] + 30.*t37182*t37187*t37217*var2[43] - 30.*t37210*t37211*t37217*var2[43] + 20.*t37187*t37195*t37210*t37322*var2[43] + 20.*t32834*t37020*t37195*var2[54] - 20.*t37182*t37187*t37195*var2[54] + 5.*t37020*t37182*t37322*var2[54] - 5.*t32834*t37020*var2[65] + 5.*t37238*t37316*var2[65];
  p_output1[98]=5.*t32835*t37225*t37229*var2[10] + 20.*t37210*t37211*t37226*var2[21] - 5.*t32835*t37225*t37229*var2[21] + 30.*t37182*t37187*t37217*var2[32] - 20.*t37210*t37211*t37226*var2[32] + 20.*t32834*t37020*t37195*var2[43] - 30.*t37182*t37187*t37217*var2[43] - 20.*t32834*t37020*t37195*var2[54] + 5.*t37238*t37316*var2[54] - 5.*t37238*t37316*var2[65];
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
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 99, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_yd_position_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_yd_position_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
