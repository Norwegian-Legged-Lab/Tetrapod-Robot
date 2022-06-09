/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:42 GMT+02:00
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
  double t1982;
  double t2204;
  double t2380;
  double t2450;
  double t2542;
  double t3105;
  double t3124;
  double t3225;
  double t3319;
  double t3321;
  double t3432;
  double t3530;
  double t3754;
  double t3842;
  double t4030;
  double t5012;
  double t5412;
  double t5503;
  double t5584;
  double t4060;
  double t4091;
  double t4185;
  double t4226;
  double t4397;
  double t4427;
  double t4529;
  double t4537;
  double t4580;
  double t5010;
  double t5210;
  double t5337;
  double t5361;
  double t5377;
  t1982 = -1.*var3[0];
  t2204 = t1982 + var3[1];
  t2380 = Power(t2204,-5);
  t2450 = t1982 + var1[0];
  t2542 = Power(t2450,3);
  t3105 = Power(t2204,-4);
  t3124 = Power(t2450,2);
  t3225 = 1/t2204;
  t3319 = -1.*t3225*t2450;
  t3321 = 1. + t3319;
  t3432 = Power(t2204,-3);
  t3530 = Power(t3321,2);
  t3754 = Power(t2204,-2);
  t3842 = Power(t3321,3);
  t4030 = Power(t3321,4);
  t5012 = Power(t2450,4);
  t5412 = Power(t2204,-6);
  t5503 = -1.*t3754*t2450;
  t5584 = t3225 + t5503;
  t4060 = -5.*t3225*t4030;
  t4091 = -20.*t3754*t2450*t3842;
  t4185 = 5.*t3225*t4030;
  t4226 = t4091 + t4185;
  t4397 = -30.*t3432*t3124*t3530;
  t4427 = 20.*t3754*t2450*t3842;
  t4529 = t4397 + t4427;
  t4537 = -20.*t3105*t2542*t3321;
  t4580 = 30.*t3432*t3124*t3530;
  t5010 = t4537 + t4580;
  t5210 = -5.*t2380*t5012;
  t5337 = 20.*t3105*t2542*t3321;
  t5361 = t5210 + t5337;
  t5377 = 5.*t2380*t5012;
  p_output1[0]=20.*t3754*t3842*var2[0] + 60.*t2450*t3432*t3530*var2[14] - 40.*t3754*t3842*var2[14] + 60.*t3105*t3124*t3321*var2[28] - 120.*t2450*t3432*t3530*var2[28] + 20.*t3754*t3842*var2[28] + 20.*t2380*t2542*var2[42] - 120.*t3105*t3124*t3321*var2[42] + 60.*t2450*t3432*t3530*var2[42] - 40.*t2380*t2542*var2[56] + 60.*t3105*t3124*t3321*var2[56] + 20.*t2380*t2542*var2[70];
  p_output1[1]=t4060;
  p_output1[2]=t4226;
  p_output1[3]=t4529;
  p_output1[4]=t5010;
  p_output1[5]=t5361;
  p_output1[6]=t5377;
  p_output1[7]=-5.*t3754*t4030*var2[0] - 20.*t3225*t3842*t5584*var2[0] - 40.*t2450*t3432*t3842*var2[14] + 20.*t3754*t3842*var2[14] + 5.*t3754*t4030*var2[14] - 60.*t2450*t3530*t3754*t5584*var2[14] + 20.*t3225*t3842*t5584*var2[14] - 90.*t3105*t3124*t3530*var2[28] + 60.*t2450*t3432*t3530*var2[28] + 40.*t2450*t3432*t3842*var2[28] - 20.*t3754*t3842*var2[28] - 60.*t3124*t3321*t3432*t5584*var2[28] + 60.*t2450*t3530*t3754*t5584*var2[28] - 80.*t2380*t2542*t3321*var2[42] + 60.*t3105*t3124*t3321*var2[42] + 90.*t3105*t3124*t3530*var2[42] - 60.*t2450*t3432*t3530*var2[42] - 20.*t2542*t3105*t5584*var2[42] + 60.*t3124*t3321*t3432*t5584*var2[42] + 20.*t2380*t2542*var2[56] + 80.*t2380*t2542*t3321*var2[56] - 60.*t3105*t3124*t3321*var2[56] - 25.*t5012*t5412*var2[56] + 20.*t2542*t3105*t5584*var2[56] - 20.*t2380*t2542*var2[70] + 25.*t5012*t5412*var2[70];
  p_output1[8]=-20.*t2450*t3432*t3842*var2[0] + 5.*t3754*t4030*var2[0] - 60.*t3105*t3124*t3530*var2[14] + 60.*t2450*t3432*t3842*var2[14] - 5.*t3754*t4030*var2[14] - 60.*t2380*t2542*t3321*var2[28] + 150.*t3105*t3124*t3530*var2[28] - 40.*t2450*t3432*t3842*var2[28] + 140.*t2380*t2542*t3321*var2[42] - 90.*t3105*t3124*t3530*var2[42] - 20.*t5012*t5412*var2[42] - 80.*t2380*t2542*t3321*var2[56] + 45.*t5012*t5412*var2[56] - 25.*t5012*t5412*var2[70];
  p_output1[9]=20.*t3754*t3842*var2[1] + 60.*t2450*t3432*t3530*var2[15] - 40.*t3754*t3842*var2[15] + 60.*t3105*t3124*t3321*var2[29] - 120.*t2450*t3432*t3530*var2[29] + 20.*t3754*t3842*var2[29] + 20.*t2380*t2542*var2[43] - 120.*t3105*t3124*t3321*var2[43] + 60.*t2450*t3432*t3530*var2[43] - 40.*t2380*t2542*var2[57] + 60.*t3105*t3124*t3321*var2[57] + 20.*t2380*t2542*var2[71];
  p_output1[10]=t4060;
  p_output1[11]=t4226;
  p_output1[12]=t4529;
  p_output1[13]=t5010;
  p_output1[14]=t5361;
  p_output1[15]=t5377;
  p_output1[16]=-5.*t3754*t4030*var2[1] - 20.*t3225*t3842*t5584*var2[1] - 40.*t2450*t3432*t3842*var2[15] + 20.*t3754*t3842*var2[15] + 5.*t3754*t4030*var2[15] - 60.*t2450*t3530*t3754*t5584*var2[15] + 20.*t3225*t3842*t5584*var2[15] - 90.*t3105*t3124*t3530*var2[29] + 60.*t2450*t3432*t3530*var2[29] + 40.*t2450*t3432*t3842*var2[29] - 20.*t3754*t3842*var2[29] - 60.*t3124*t3321*t3432*t5584*var2[29] + 60.*t2450*t3530*t3754*t5584*var2[29] - 80.*t2380*t2542*t3321*var2[43] + 60.*t3105*t3124*t3321*var2[43] + 90.*t3105*t3124*t3530*var2[43] - 60.*t2450*t3432*t3530*var2[43] - 20.*t2542*t3105*t5584*var2[43] + 60.*t3124*t3321*t3432*t5584*var2[43] + 20.*t2380*t2542*var2[57] + 80.*t2380*t2542*t3321*var2[57] - 60.*t3105*t3124*t3321*var2[57] - 25.*t5012*t5412*var2[57] + 20.*t2542*t3105*t5584*var2[57] - 20.*t2380*t2542*var2[71] + 25.*t5012*t5412*var2[71];
  p_output1[17]=-20.*t2450*t3432*t3842*var2[1] + 5.*t3754*t4030*var2[1] - 60.*t3105*t3124*t3530*var2[15] + 60.*t2450*t3432*t3842*var2[15] - 5.*t3754*t4030*var2[15] - 60.*t2380*t2542*t3321*var2[29] + 150.*t3105*t3124*t3530*var2[29] - 40.*t2450*t3432*t3842*var2[29] + 140.*t2380*t2542*t3321*var2[43] - 90.*t3105*t3124*t3530*var2[43] - 20.*t5012*t5412*var2[43] - 80.*t2380*t2542*t3321*var2[57] + 45.*t5012*t5412*var2[57] - 25.*t5012*t5412*var2[71];
  p_output1[18]=20.*t3754*t3842*var2[2] + 60.*t2450*t3432*t3530*var2[16] - 40.*t3754*t3842*var2[16] + 60.*t3105*t3124*t3321*var2[30] - 120.*t2450*t3432*t3530*var2[30] + 20.*t3754*t3842*var2[30] + 20.*t2380*t2542*var2[44] - 120.*t3105*t3124*t3321*var2[44] + 60.*t2450*t3432*t3530*var2[44] - 40.*t2380*t2542*var2[58] + 60.*t3105*t3124*t3321*var2[58] + 20.*t2380*t2542*var2[72];
  p_output1[19]=t4060;
  p_output1[20]=t4226;
  p_output1[21]=t4529;
  p_output1[22]=t5010;
  p_output1[23]=t5361;
  p_output1[24]=t5377;
  p_output1[25]=-5.*t3754*t4030*var2[2] - 20.*t3225*t3842*t5584*var2[2] - 40.*t2450*t3432*t3842*var2[16] + 20.*t3754*t3842*var2[16] + 5.*t3754*t4030*var2[16] - 60.*t2450*t3530*t3754*t5584*var2[16] + 20.*t3225*t3842*t5584*var2[16] - 90.*t3105*t3124*t3530*var2[30] + 60.*t2450*t3432*t3530*var2[30] + 40.*t2450*t3432*t3842*var2[30] - 20.*t3754*t3842*var2[30] - 60.*t3124*t3321*t3432*t5584*var2[30] + 60.*t2450*t3530*t3754*t5584*var2[30] - 80.*t2380*t2542*t3321*var2[44] + 60.*t3105*t3124*t3321*var2[44] + 90.*t3105*t3124*t3530*var2[44] - 60.*t2450*t3432*t3530*var2[44] - 20.*t2542*t3105*t5584*var2[44] + 60.*t3124*t3321*t3432*t5584*var2[44] + 20.*t2380*t2542*var2[58] + 80.*t2380*t2542*t3321*var2[58] - 60.*t3105*t3124*t3321*var2[58] - 25.*t5012*t5412*var2[58] + 20.*t2542*t3105*t5584*var2[58] - 20.*t2380*t2542*var2[72] + 25.*t5012*t5412*var2[72];
  p_output1[26]=-20.*t2450*t3432*t3842*var2[2] + 5.*t3754*t4030*var2[2] - 60.*t3105*t3124*t3530*var2[16] + 60.*t2450*t3432*t3842*var2[16] - 5.*t3754*t4030*var2[16] - 60.*t2380*t2542*t3321*var2[30] + 150.*t3105*t3124*t3530*var2[30] - 40.*t2450*t3432*t3842*var2[30] + 140.*t2380*t2542*t3321*var2[44] - 90.*t3105*t3124*t3530*var2[44] - 20.*t5012*t5412*var2[44] - 80.*t2380*t2542*t3321*var2[58] + 45.*t5012*t5412*var2[58] - 25.*t5012*t5412*var2[72];
  p_output1[27]=20.*t3754*t3842*var2[3] + 60.*t2450*t3432*t3530*var2[17] - 40.*t3754*t3842*var2[17] + 60.*t3105*t3124*t3321*var2[31] - 120.*t2450*t3432*t3530*var2[31] + 20.*t3754*t3842*var2[31] + 20.*t2380*t2542*var2[45] - 120.*t3105*t3124*t3321*var2[45] + 60.*t2450*t3432*t3530*var2[45] - 40.*t2380*t2542*var2[59] + 60.*t3105*t3124*t3321*var2[59] + 20.*t2380*t2542*var2[73];
  p_output1[28]=t4060;
  p_output1[29]=t4226;
  p_output1[30]=t4529;
  p_output1[31]=t5010;
  p_output1[32]=t5361;
  p_output1[33]=t5377;
  p_output1[34]=-5.*t3754*t4030*var2[3] - 20.*t3225*t3842*t5584*var2[3] - 40.*t2450*t3432*t3842*var2[17] + 20.*t3754*t3842*var2[17] + 5.*t3754*t4030*var2[17] - 60.*t2450*t3530*t3754*t5584*var2[17] + 20.*t3225*t3842*t5584*var2[17] - 90.*t3105*t3124*t3530*var2[31] + 60.*t2450*t3432*t3530*var2[31] + 40.*t2450*t3432*t3842*var2[31] - 20.*t3754*t3842*var2[31] - 60.*t3124*t3321*t3432*t5584*var2[31] + 60.*t2450*t3530*t3754*t5584*var2[31] - 80.*t2380*t2542*t3321*var2[45] + 60.*t3105*t3124*t3321*var2[45] + 90.*t3105*t3124*t3530*var2[45] - 60.*t2450*t3432*t3530*var2[45] - 20.*t2542*t3105*t5584*var2[45] + 60.*t3124*t3321*t3432*t5584*var2[45] + 20.*t2380*t2542*var2[59] + 80.*t2380*t2542*t3321*var2[59] - 60.*t3105*t3124*t3321*var2[59] - 25.*t5012*t5412*var2[59] + 20.*t2542*t3105*t5584*var2[59] - 20.*t2380*t2542*var2[73] + 25.*t5012*t5412*var2[73];
  p_output1[35]=-20.*t2450*t3432*t3842*var2[3] + 5.*t3754*t4030*var2[3] - 60.*t3105*t3124*t3530*var2[17] + 60.*t2450*t3432*t3842*var2[17] - 5.*t3754*t4030*var2[17] - 60.*t2380*t2542*t3321*var2[31] + 150.*t3105*t3124*t3530*var2[31] - 40.*t2450*t3432*t3842*var2[31] + 140.*t2380*t2542*t3321*var2[45] - 90.*t3105*t3124*t3530*var2[45] - 20.*t5012*t5412*var2[45] - 80.*t2380*t2542*t3321*var2[59] + 45.*t5012*t5412*var2[59] - 25.*t5012*t5412*var2[73];
  p_output1[36]=20.*t3754*t3842*var2[4] + 60.*t2450*t3432*t3530*var2[18] - 40.*t3754*t3842*var2[18] + 60.*t3105*t3124*t3321*var2[32] - 120.*t2450*t3432*t3530*var2[32] + 20.*t3754*t3842*var2[32] + 20.*t2380*t2542*var2[46] - 120.*t3105*t3124*t3321*var2[46] + 60.*t2450*t3432*t3530*var2[46] - 40.*t2380*t2542*var2[60] + 60.*t3105*t3124*t3321*var2[60] + 20.*t2380*t2542*var2[74];
  p_output1[37]=t4060;
  p_output1[38]=t4226;
  p_output1[39]=t4529;
  p_output1[40]=t5010;
  p_output1[41]=t5361;
  p_output1[42]=t5377;
  p_output1[43]=-5.*t3754*t4030*var2[4] - 20.*t3225*t3842*t5584*var2[4] - 40.*t2450*t3432*t3842*var2[18] + 20.*t3754*t3842*var2[18] + 5.*t3754*t4030*var2[18] - 60.*t2450*t3530*t3754*t5584*var2[18] + 20.*t3225*t3842*t5584*var2[18] - 90.*t3105*t3124*t3530*var2[32] + 60.*t2450*t3432*t3530*var2[32] + 40.*t2450*t3432*t3842*var2[32] - 20.*t3754*t3842*var2[32] - 60.*t3124*t3321*t3432*t5584*var2[32] + 60.*t2450*t3530*t3754*t5584*var2[32] - 80.*t2380*t2542*t3321*var2[46] + 60.*t3105*t3124*t3321*var2[46] + 90.*t3105*t3124*t3530*var2[46] - 60.*t2450*t3432*t3530*var2[46] - 20.*t2542*t3105*t5584*var2[46] + 60.*t3124*t3321*t3432*t5584*var2[46] + 20.*t2380*t2542*var2[60] + 80.*t2380*t2542*t3321*var2[60] - 60.*t3105*t3124*t3321*var2[60] - 25.*t5012*t5412*var2[60] + 20.*t2542*t3105*t5584*var2[60] - 20.*t2380*t2542*var2[74] + 25.*t5012*t5412*var2[74];
  p_output1[44]=-20.*t2450*t3432*t3842*var2[4] + 5.*t3754*t4030*var2[4] - 60.*t3105*t3124*t3530*var2[18] + 60.*t2450*t3432*t3842*var2[18] - 5.*t3754*t4030*var2[18] - 60.*t2380*t2542*t3321*var2[32] + 150.*t3105*t3124*t3530*var2[32] - 40.*t2450*t3432*t3842*var2[32] + 140.*t2380*t2542*t3321*var2[46] - 90.*t3105*t3124*t3530*var2[46] - 20.*t5012*t5412*var2[46] - 80.*t2380*t2542*t3321*var2[60] + 45.*t5012*t5412*var2[60] - 25.*t5012*t5412*var2[74];
  p_output1[45]=20.*t3754*t3842*var2[5] + 60.*t2450*t3432*t3530*var2[19] - 40.*t3754*t3842*var2[19] + 60.*t3105*t3124*t3321*var2[33] - 120.*t2450*t3432*t3530*var2[33] + 20.*t3754*t3842*var2[33] + 20.*t2380*t2542*var2[47] - 120.*t3105*t3124*t3321*var2[47] + 60.*t2450*t3432*t3530*var2[47] - 40.*t2380*t2542*var2[61] + 60.*t3105*t3124*t3321*var2[61] + 20.*t2380*t2542*var2[75];
  p_output1[46]=t4060;
  p_output1[47]=t4226;
  p_output1[48]=t4529;
  p_output1[49]=t5010;
  p_output1[50]=t5361;
  p_output1[51]=t5377;
  p_output1[52]=-5.*t3754*t4030*var2[5] - 20.*t3225*t3842*t5584*var2[5] - 40.*t2450*t3432*t3842*var2[19] + 20.*t3754*t3842*var2[19] + 5.*t3754*t4030*var2[19] - 60.*t2450*t3530*t3754*t5584*var2[19] + 20.*t3225*t3842*t5584*var2[19] - 90.*t3105*t3124*t3530*var2[33] + 60.*t2450*t3432*t3530*var2[33] + 40.*t2450*t3432*t3842*var2[33] - 20.*t3754*t3842*var2[33] - 60.*t3124*t3321*t3432*t5584*var2[33] + 60.*t2450*t3530*t3754*t5584*var2[33] - 80.*t2380*t2542*t3321*var2[47] + 60.*t3105*t3124*t3321*var2[47] + 90.*t3105*t3124*t3530*var2[47] - 60.*t2450*t3432*t3530*var2[47] - 20.*t2542*t3105*t5584*var2[47] + 60.*t3124*t3321*t3432*t5584*var2[47] + 20.*t2380*t2542*var2[61] + 80.*t2380*t2542*t3321*var2[61] - 60.*t3105*t3124*t3321*var2[61] - 25.*t5012*t5412*var2[61] + 20.*t2542*t3105*t5584*var2[61] - 20.*t2380*t2542*var2[75] + 25.*t5012*t5412*var2[75];
  p_output1[53]=-20.*t2450*t3432*t3842*var2[5] + 5.*t3754*t4030*var2[5] - 60.*t3105*t3124*t3530*var2[19] + 60.*t2450*t3432*t3842*var2[19] - 5.*t3754*t4030*var2[19] - 60.*t2380*t2542*t3321*var2[33] + 150.*t3105*t3124*t3530*var2[33] - 40.*t2450*t3432*t3842*var2[33] + 140.*t2380*t2542*t3321*var2[47] - 90.*t3105*t3124*t3530*var2[47] - 20.*t5012*t5412*var2[47] - 80.*t2380*t2542*t3321*var2[61] + 45.*t5012*t5412*var2[61] - 25.*t5012*t5412*var2[75];
  p_output1[54]=20.*t3754*t3842*var2[6] + 60.*t2450*t3432*t3530*var2[20] - 40.*t3754*t3842*var2[20] + 60.*t3105*t3124*t3321*var2[34] - 120.*t2450*t3432*t3530*var2[34] + 20.*t3754*t3842*var2[34] + 20.*t2380*t2542*var2[48] - 120.*t3105*t3124*t3321*var2[48] + 60.*t2450*t3432*t3530*var2[48] - 40.*t2380*t2542*var2[62] + 60.*t3105*t3124*t3321*var2[62] + 20.*t2380*t2542*var2[76];
  p_output1[55]=t4060;
  p_output1[56]=t4226;
  p_output1[57]=t4529;
  p_output1[58]=t5010;
  p_output1[59]=t5361;
  p_output1[60]=t5377;
  p_output1[61]=-5.*t3754*t4030*var2[6] - 20.*t3225*t3842*t5584*var2[6] - 40.*t2450*t3432*t3842*var2[20] + 20.*t3754*t3842*var2[20] + 5.*t3754*t4030*var2[20] - 60.*t2450*t3530*t3754*t5584*var2[20] + 20.*t3225*t3842*t5584*var2[20] - 90.*t3105*t3124*t3530*var2[34] + 60.*t2450*t3432*t3530*var2[34] + 40.*t2450*t3432*t3842*var2[34] - 20.*t3754*t3842*var2[34] - 60.*t3124*t3321*t3432*t5584*var2[34] + 60.*t2450*t3530*t3754*t5584*var2[34] - 80.*t2380*t2542*t3321*var2[48] + 60.*t3105*t3124*t3321*var2[48] + 90.*t3105*t3124*t3530*var2[48] - 60.*t2450*t3432*t3530*var2[48] - 20.*t2542*t3105*t5584*var2[48] + 60.*t3124*t3321*t3432*t5584*var2[48] + 20.*t2380*t2542*var2[62] + 80.*t2380*t2542*t3321*var2[62] - 60.*t3105*t3124*t3321*var2[62] - 25.*t5012*t5412*var2[62] + 20.*t2542*t3105*t5584*var2[62] - 20.*t2380*t2542*var2[76] + 25.*t5012*t5412*var2[76];
  p_output1[62]=-20.*t2450*t3432*t3842*var2[6] + 5.*t3754*t4030*var2[6] - 60.*t3105*t3124*t3530*var2[20] + 60.*t2450*t3432*t3842*var2[20] - 5.*t3754*t4030*var2[20] - 60.*t2380*t2542*t3321*var2[34] + 150.*t3105*t3124*t3530*var2[34] - 40.*t2450*t3432*t3842*var2[34] + 140.*t2380*t2542*t3321*var2[48] - 90.*t3105*t3124*t3530*var2[48] - 20.*t5012*t5412*var2[48] - 80.*t2380*t2542*t3321*var2[62] + 45.*t5012*t5412*var2[62] - 25.*t5012*t5412*var2[76];
  p_output1[63]=20.*t3754*t3842*var2[7] + 60.*t2450*t3432*t3530*var2[21] - 40.*t3754*t3842*var2[21] + 60.*t3105*t3124*t3321*var2[35] - 120.*t2450*t3432*t3530*var2[35] + 20.*t3754*t3842*var2[35] + 20.*t2380*t2542*var2[49] - 120.*t3105*t3124*t3321*var2[49] + 60.*t2450*t3432*t3530*var2[49] - 40.*t2380*t2542*var2[63] + 60.*t3105*t3124*t3321*var2[63] + 20.*t2380*t2542*var2[77];
  p_output1[64]=t4060;
  p_output1[65]=t4226;
  p_output1[66]=t4529;
  p_output1[67]=t5010;
  p_output1[68]=t5361;
  p_output1[69]=t5377;
  p_output1[70]=-5.*t3754*t4030*var2[7] - 20.*t3225*t3842*t5584*var2[7] - 40.*t2450*t3432*t3842*var2[21] + 20.*t3754*t3842*var2[21] + 5.*t3754*t4030*var2[21] - 60.*t2450*t3530*t3754*t5584*var2[21] + 20.*t3225*t3842*t5584*var2[21] - 90.*t3105*t3124*t3530*var2[35] + 60.*t2450*t3432*t3530*var2[35] + 40.*t2450*t3432*t3842*var2[35] - 20.*t3754*t3842*var2[35] - 60.*t3124*t3321*t3432*t5584*var2[35] + 60.*t2450*t3530*t3754*t5584*var2[35] - 80.*t2380*t2542*t3321*var2[49] + 60.*t3105*t3124*t3321*var2[49] + 90.*t3105*t3124*t3530*var2[49] - 60.*t2450*t3432*t3530*var2[49] - 20.*t2542*t3105*t5584*var2[49] + 60.*t3124*t3321*t3432*t5584*var2[49] + 20.*t2380*t2542*var2[63] + 80.*t2380*t2542*t3321*var2[63] - 60.*t3105*t3124*t3321*var2[63] - 25.*t5012*t5412*var2[63] + 20.*t2542*t3105*t5584*var2[63] - 20.*t2380*t2542*var2[77] + 25.*t5012*t5412*var2[77];
  p_output1[71]=-20.*t2450*t3432*t3842*var2[7] + 5.*t3754*t4030*var2[7] - 60.*t3105*t3124*t3530*var2[21] + 60.*t2450*t3432*t3842*var2[21] - 5.*t3754*t4030*var2[21] - 60.*t2380*t2542*t3321*var2[35] + 150.*t3105*t3124*t3530*var2[35] - 40.*t2450*t3432*t3842*var2[35] + 140.*t2380*t2542*t3321*var2[49] - 90.*t3105*t3124*t3530*var2[49] - 20.*t5012*t5412*var2[49] - 80.*t2380*t2542*t3321*var2[63] + 45.*t5012*t5412*var2[63] - 25.*t5012*t5412*var2[77];
  p_output1[72]=20.*t3754*t3842*var2[8] + 60.*t2450*t3432*t3530*var2[22] - 40.*t3754*t3842*var2[22] + 60.*t3105*t3124*t3321*var2[36] - 120.*t2450*t3432*t3530*var2[36] + 20.*t3754*t3842*var2[36] + 20.*t2380*t2542*var2[50] - 120.*t3105*t3124*t3321*var2[50] + 60.*t2450*t3432*t3530*var2[50] - 40.*t2380*t2542*var2[64] + 60.*t3105*t3124*t3321*var2[64] + 20.*t2380*t2542*var2[78];
  p_output1[73]=t4060;
  p_output1[74]=t4226;
  p_output1[75]=t4529;
  p_output1[76]=t5010;
  p_output1[77]=t5361;
  p_output1[78]=t5377;
  p_output1[79]=-5.*t3754*t4030*var2[8] - 20.*t3225*t3842*t5584*var2[8] - 40.*t2450*t3432*t3842*var2[22] + 20.*t3754*t3842*var2[22] + 5.*t3754*t4030*var2[22] - 60.*t2450*t3530*t3754*t5584*var2[22] + 20.*t3225*t3842*t5584*var2[22] - 90.*t3105*t3124*t3530*var2[36] + 60.*t2450*t3432*t3530*var2[36] + 40.*t2450*t3432*t3842*var2[36] - 20.*t3754*t3842*var2[36] - 60.*t3124*t3321*t3432*t5584*var2[36] + 60.*t2450*t3530*t3754*t5584*var2[36] - 80.*t2380*t2542*t3321*var2[50] + 60.*t3105*t3124*t3321*var2[50] + 90.*t3105*t3124*t3530*var2[50] - 60.*t2450*t3432*t3530*var2[50] - 20.*t2542*t3105*t5584*var2[50] + 60.*t3124*t3321*t3432*t5584*var2[50] + 20.*t2380*t2542*var2[64] + 80.*t2380*t2542*t3321*var2[64] - 60.*t3105*t3124*t3321*var2[64] - 25.*t5012*t5412*var2[64] + 20.*t2542*t3105*t5584*var2[64] - 20.*t2380*t2542*var2[78] + 25.*t5012*t5412*var2[78];
  p_output1[80]=-20.*t2450*t3432*t3842*var2[8] + 5.*t3754*t4030*var2[8] - 60.*t3105*t3124*t3530*var2[22] + 60.*t2450*t3432*t3842*var2[22] - 5.*t3754*t4030*var2[22] - 60.*t2380*t2542*t3321*var2[36] + 150.*t3105*t3124*t3530*var2[36] - 40.*t2450*t3432*t3842*var2[36] + 140.*t2380*t2542*t3321*var2[50] - 90.*t3105*t3124*t3530*var2[50] - 20.*t5012*t5412*var2[50] - 80.*t2380*t2542*t3321*var2[64] + 45.*t5012*t5412*var2[64] - 25.*t5012*t5412*var2[78];
  p_output1[81]=20.*t3754*t3842*var2[9] + 60.*t2450*t3432*t3530*var2[23] - 40.*t3754*t3842*var2[23] + 60.*t3105*t3124*t3321*var2[37] - 120.*t2450*t3432*t3530*var2[37] + 20.*t3754*t3842*var2[37] + 20.*t2380*t2542*var2[51] - 120.*t3105*t3124*t3321*var2[51] + 60.*t2450*t3432*t3530*var2[51] - 40.*t2380*t2542*var2[65] + 60.*t3105*t3124*t3321*var2[65] + 20.*t2380*t2542*var2[79];
  p_output1[82]=t4060;
  p_output1[83]=t4226;
  p_output1[84]=t4529;
  p_output1[85]=t5010;
  p_output1[86]=t5361;
  p_output1[87]=t5377;
  p_output1[88]=-5.*t3754*t4030*var2[9] - 20.*t3225*t3842*t5584*var2[9] - 40.*t2450*t3432*t3842*var2[23] + 20.*t3754*t3842*var2[23] + 5.*t3754*t4030*var2[23] - 60.*t2450*t3530*t3754*t5584*var2[23] + 20.*t3225*t3842*t5584*var2[23] - 90.*t3105*t3124*t3530*var2[37] + 60.*t2450*t3432*t3530*var2[37] + 40.*t2450*t3432*t3842*var2[37] - 20.*t3754*t3842*var2[37] - 60.*t3124*t3321*t3432*t5584*var2[37] + 60.*t2450*t3530*t3754*t5584*var2[37] - 80.*t2380*t2542*t3321*var2[51] + 60.*t3105*t3124*t3321*var2[51] + 90.*t3105*t3124*t3530*var2[51] - 60.*t2450*t3432*t3530*var2[51] - 20.*t2542*t3105*t5584*var2[51] + 60.*t3124*t3321*t3432*t5584*var2[51] + 20.*t2380*t2542*var2[65] + 80.*t2380*t2542*t3321*var2[65] - 60.*t3105*t3124*t3321*var2[65] - 25.*t5012*t5412*var2[65] + 20.*t2542*t3105*t5584*var2[65] - 20.*t2380*t2542*var2[79] + 25.*t5012*t5412*var2[79];
  p_output1[89]=-20.*t2450*t3432*t3842*var2[9] + 5.*t3754*t4030*var2[9] - 60.*t3105*t3124*t3530*var2[23] + 60.*t2450*t3432*t3842*var2[23] - 5.*t3754*t4030*var2[23] - 60.*t2380*t2542*t3321*var2[37] + 150.*t3105*t3124*t3530*var2[37] - 40.*t2450*t3432*t3842*var2[37] + 140.*t2380*t2542*t3321*var2[51] - 90.*t3105*t3124*t3530*var2[51] - 20.*t5012*t5412*var2[51] - 80.*t2380*t2542*t3321*var2[65] + 45.*t5012*t5412*var2[65] - 25.*t5012*t5412*var2[79];
  p_output1[90]=20.*t3754*t3842*var2[10] + 60.*t2450*t3432*t3530*var2[24] - 40.*t3754*t3842*var2[24] + 60.*t3105*t3124*t3321*var2[38] - 120.*t2450*t3432*t3530*var2[38] + 20.*t3754*t3842*var2[38] + 20.*t2380*t2542*var2[52] - 120.*t3105*t3124*t3321*var2[52] + 60.*t2450*t3432*t3530*var2[52] - 40.*t2380*t2542*var2[66] + 60.*t3105*t3124*t3321*var2[66] + 20.*t2380*t2542*var2[80];
  p_output1[91]=t4060;
  p_output1[92]=t4226;
  p_output1[93]=t4529;
  p_output1[94]=t5010;
  p_output1[95]=t5361;
  p_output1[96]=t5377;
  p_output1[97]=-5.*t3754*t4030*var2[10] - 20.*t3225*t3842*t5584*var2[10] - 40.*t2450*t3432*t3842*var2[24] + 20.*t3754*t3842*var2[24] + 5.*t3754*t4030*var2[24] - 60.*t2450*t3530*t3754*t5584*var2[24] + 20.*t3225*t3842*t5584*var2[24] - 90.*t3105*t3124*t3530*var2[38] + 60.*t2450*t3432*t3530*var2[38] + 40.*t2450*t3432*t3842*var2[38] - 20.*t3754*t3842*var2[38] - 60.*t3124*t3321*t3432*t5584*var2[38] + 60.*t2450*t3530*t3754*t5584*var2[38] - 80.*t2380*t2542*t3321*var2[52] + 60.*t3105*t3124*t3321*var2[52] + 90.*t3105*t3124*t3530*var2[52] - 60.*t2450*t3432*t3530*var2[52] - 20.*t2542*t3105*t5584*var2[52] + 60.*t3124*t3321*t3432*t5584*var2[52] + 20.*t2380*t2542*var2[66] + 80.*t2380*t2542*t3321*var2[66] - 60.*t3105*t3124*t3321*var2[66] - 25.*t5012*t5412*var2[66] + 20.*t2542*t3105*t5584*var2[66] - 20.*t2380*t2542*var2[80] + 25.*t5012*t5412*var2[80];
  p_output1[98]=-20.*t2450*t3432*t3842*var2[10] + 5.*t3754*t4030*var2[10] - 60.*t3105*t3124*t3530*var2[24] + 60.*t2450*t3432*t3842*var2[24] - 5.*t3754*t4030*var2[24] - 60.*t2380*t2542*t3321*var2[38] + 150.*t3105*t3124*t3530*var2[38] - 40.*t2450*t3432*t3842*var2[38] + 140.*t2380*t2542*t3321*var2[52] - 90.*t3105*t3124*t3530*var2[52] - 20.*t5012*t5412*var2[52] - 80.*t2380*t2542*t3321*var2[66] + 45.*t5012*t5412*var2[66] - 25.*t5012*t5412*var2[80];
  p_output1[99]=20.*t3754*t3842*var2[11] + 60.*t2450*t3432*t3530*var2[25] - 40.*t3754*t3842*var2[25] + 60.*t3105*t3124*t3321*var2[39] - 120.*t2450*t3432*t3530*var2[39] + 20.*t3754*t3842*var2[39] + 20.*t2380*t2542*var2[53] - 120.*t3105*t3124*t3321*var2[53] + 60.*t2450*t3432*t3530*var2[53] - 40.*t2380*t2542*var2[67] + 60.*t3105*t3124*t3321*var2[67] + 20.*t2380*t2542*var2[81];
  p_output1[100]=t4060;
  p_output1[101]=t4226;
  p_output1[102]=t4529;
  p_output1[103]=t5010;
  p_output1[104]=t5361;
  p_output1[105]=t5377;
  p_output1[106]=-5.*t3754*t4030*var2[11] - 20.*t3225*t3842*t5584*var2[11] - 40.*t2450*t3432*t3842*var2[25] + 20.*t3754*t3842*var2[25] + 5.*t3754*t4030*var2[25] - 60.*t2450*t3530*t3754*t5584*var2[25] + 20.*t3225*t3842*t5584*var2[25] - 90.*t3105*t3124*t3530*var2[39] + 60.*t2450*t3432*t3530*var2[39] + 40.*t2450*t3432*t3842*var2[39] - 20.*t3754*t3842*var2[39] - 60.*t3124*t3321*t3432*t5584*var2[39] + 60.*t2450*t3530*t3754*t5584*var2[39] - 80.*t2380*t2542*t3321*var2[53] + 60.*t3105*t3124*t3321*var2[53] + 90.*t3105*t3124*t3530*var2[53] - 60.*t2450*t3432*t3530*var2[53] - 20.*t2542*t3105*t5584*var2[53] + 60.*t3124*t3321*t3432*t5584*var2[53] + 20.*t2380*t2542*var2[67] + 80.*t2380*t2542*t3321*var2[67] - 60.*t3105*t3124*t3321*var2[67] - 25.*t5012*t5412*var2[67] + 20.*t2542*t3105*t5584*var2[67] - 20.*t2380*t2542*var2[81] + 25.*t5012*t5412*var2[81];
  p_output1[107]=-20.*t2450*t3432*t3842*var2[11] + 5.*t3754*t4030*var2[11] - 60.*t3105*t3124*t3530*var2[25] + 60.*t2450*t3432*t3842*var2[25] - 5.*t3754*t4030*var2[25] - 60.*t2380*t2542*t3321*var2[39] + 150.*t3105*t3124*t3530*var2[39] - 40.*t2450*t3432*t3842*var2[39] + 140.*t2380*t2542*t3321*var2[53] - 90.*t3105*t3124*t3530*var2[53] - 20.*t5012*t5412*var2[53] - 80.*t2380*t2542*t3321*var2[67] + 45.*t5012*t5412*var2[67] - 25.*t5012*t5412*var2[81];
  p_output1[108]=20.*t3754*t3842*var2[12] + 60.*t2450*t3432*t3530*var2[26] - 40.*t3754*t3842*var2[26] + 60.*t3105*t3124*t3321*var2[40] - 120.*t2450*t3432*t3530*var2[40] + 20.*t3754*t3842*var2[40] + 20.*t2380*t2542*var2[54] - 120.*t3105*t3124*t3321*var2[54] + 60.*t2450*t3432*t3530*var2[54] - 40.*t2380*t2542*var2[68] + 60.*t3105*t3124*t3321*var2[68] + 20.*t2380*t2542*var2[82];
  p_output1[109]=t4060;
  p_output1[110]=t4226;
  p_output1[111]=t4529;
  p_output1[112]=t5010;
  p_output1[113]=t5361;
  p_output1[114]=t5377;
  p_output1[115]=-5.*t3754*t4030*var2[12] - 20.*t3225*t3842*t5584*var2[12] - 40.*t2450*t3432*t3842*var2[26] + 20.*t3754*t3842*var2[26] + 5.*t3754*t4030*var2[26] - 60.*t2450*t3530*t3754*t5584*var2[26] + 20.*t3225*t3842*t5584*var2[26] - 90.*t3105*t3124*t3530*var2[40] + 60.*t2450*t3432*t3530*var2[40] + 40.*t2450*t3432*t3842*var2[40] - 20.*t3754*t3842*var2[40] - 60.*t3124*t3321*t3432*t5584*var2[40] + 60.*t2450*t3530*t3754*t5584*var2[40] - 80.*t2380*t2542*t3321*var2[54] + 60.*t3105*t3124*t3321*var2[54] + 90.*t3105*t3124*t3530*var2[54] - 60.*t2450*t3432*t3530*var2[54] - 20.*t2542*t3105*t5584*var2[54] + 60.*t3124*t3321*t3432*t5584*var2[54] + 20.*t2380*t2542*var2[68] + 80.*t2380*t2542*t3321*var2[68] - 60.*t3105*t3124*t3321*var2[68] - 25.*t5012*t5412*var2[68] + 20.*t2542*t3105*t5584*var2[68] - 20.*t2380*t2542*var2[82] + 25.*t5012*t5412*var2[82];
  p_output1[116]=-20.*t2450*t3432*t3842*var2[12] + 5.*t3754*t4030*var2[12] - 60.*t3105*t3124*t3530*var2[26] + 60.*t2450*t3432*t3842*var2[26] - 5.*t3754*t4030*var2[26] - 60.*t2380*t2542*t3321*var2[40] + 150.*t3105*t3124*t3530*var2[40] - 40.*t2450*t3432*t3842*var2[40] + 140.*t2380*t2542*t3321*var2[54] - 90.*t3105*t3124*t3530*var2[54] - 20.*t5012*t5412*var2[54] - 80.*t2380*t2542*t3321*var2[68] + 45.*t5012*t5412*var2[68] - 25.*t5012*t5412*var2[82];
  p_output1[117]=20.*t3754*t3842*var2[13] + 60.*t2450*t3432*t3530*var2[27] - 40.*t3754*t3842*var2[27] + 60.*t3105*t3124*t3321*var2[41] - 120.*t2450*t3432*t3530*var2[41] + 20.*t3754*t3842*var2[41] + 20.*t2380*t2542*var2[55] - 120.*t3105*t3124*t3321*var2[55] + 60.*t2450*t3432*t3530*var2[55] - 40.*t2380*t2542*var2[69] + 60.*t3105*t3124*t3321*var2[69] + 20.*t2380*t2542*var2[83];
  p_output1[118]=t4060;
  p_output1[119]=t4226;
  p_output1[120]=t4529;
  p_output1[121]=t5010;
  p_output1[122]=t5361;
  p_output1[123]=t5377;
  p_output1[124]=-5.*t3754*t4030*var2[13] - 20.*t3225*t3842*t5584*var2[13] - 40.*t2450*t3432*t3842*var2[27] + 20.*t3754*t3842*var2[27] + 5.*t3754*t4030*var2[27] - 60.*t2450*t3530*t3754*t5584*var2[27] + 20.*t3225*t3842*t5584*var2[27] - 90.*t3105*t3124*t3530*var2[41] + 60.*t2450*t3432*t3530*var2[41] + 40.*t2450*t3432*t3842*var2[41] - 20.*t3754*t3842*var2[41] - 60.*t3124*t3321*t3432*t5584*var2[41] + 60.*t2450*t3530*t3754*t5584*var2[41] - 80.*t2380*t2542*t3321*var2[55] + 60.*t3105*t3124*t3321*var2[55] + 90.*t3105*t3124*t3530*var2[55] - 60.*t2450*t3432*t3530*var2[55] - 20.*t2542*t3105*t5584*var2[55] + 60.*t3124*t3321*t3432*t5584*var2[55] + 20.*t2380*t2542*var2[69] + 80.*t2380*t2542*t3321*var2[69] - 60.*t3105*t3124*t3321*var2[69] - 25.*t5012*t5412*var2[69] + 20.*t2542*t3105*t5584*var2[69] - 20.*t2380*t2542*var2[83] + 25.*t5012*t5412*var2[83];
  p_output1[125]=-20.*t2450*t3432*t3842*var2[13] + 5.*t3754*t4030*var2[13] - 60.*t3105*t3124*t3530*var2[27] + 60.*t2450*t3432*t3842*var2[27] - 5.*t3754*t4030*var2[27] - 60.*t2380*t2542*t3321*var2[41] + 150.*t3105*t3124*t3530*var2[41] - 40.*t2450*t3432*t3842*var2[41] + 140.*t2380*t2542*t3321*var2[55] - 90.*t3105*t3124*t3530*var2[55] - 20.*t5012*t5412*var2[55] - 80.*t2380*t2542*t3321*var2[69] + 45.*t5012*t5412*var2[69] - 25.*t5012*t5412*var2[83];
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

#include "J_d1yd_position_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_d1yd_position_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
