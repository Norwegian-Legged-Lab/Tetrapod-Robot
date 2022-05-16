/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:45 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t118;
  double t53;
  double t68;
  double t78;
  double t106;
  double t113;
  double t132;
  double t135;
  double t136;
  double t140;
  double t141;
  double t142;
  double t146;
  double t166;
  double t169;
  double t170;
  double t174;
  double t177;
  double t193;
  double t194;
  double t198;
  double t206;
  double t276;
  double t420;
  double t1269;
  double t1420;
  double t1428;
  double t1374;
  double t1115;
  double t1116;
  double t1124;
  double t1203;
  double t1244;
  double t1254;
  double t1270;
  t118 = -1.*var4[0];
  t53 = -1. + var5[0];
  t68 = -1. + var6[0];
  t78 = 1/t68;
  t106 = -1.*t53*t78;
  t113 = 1. + t106;
  t132 = t118 + var4[1];
  t135 = Power(t132,-5);
  t136 = -1.*var1[0];
  t140 = t136 + var1[1];
  t141 = t53*t78*t140;
  t142 = t118 + var1[0] + t141;
  t146 = Power(t142,4);
  t166 = Power(t132,-4);
  t169 = Power(t142,3);
  t170 = 1/t132;
  t174 = -1.*t170*t142;
  t177 = 1. + t174;
  t193 = Power(t132,-3);
  t194 = Power(t142,2);
  t198 = Power(t177,2);
  t206 = Power(t132,-2);
  t276 = Power(t177,3);
  t420 = Power(t177,4);
  t1269 = Power(t142,5);
  t1420 = -1.*t206*t142;
  t1428 = t170 + t1420;
  t1374 = Power(t132,-6);
  t1115 = Power(t177,5);
  t1116 = -1.*t1115;
  t1124 = -5.*t170*t142*t420;
  t1203 = -10.*t206*t194*t276;
  t1244 = -10.*t193*t169*t198;
  t1254 = -5.*t166*t146*t177;
  t1270 = -1.*t135*t1269;
  p_output1[0]=5.*t113*t170*t420*var3[0] + 20.*t113*t142*t206*t276*var3[11] - 5.*t113*t170*t420*var3[11] + 30.*t113*t193*t194*t198*var3[22] - 20.*t113*t142*t206*t276*var3[22] + 20.*t113*t166*t169*t177*var3[33] - 30.*t113*t193*t194*t198*var3[33] + 5.*t113*t135*t146*var3[44] - 20.*t113*t166*t169*t177*var3[44] - 5.*t113*t135*t146*var3[55];
  p_output1[1]=5.*t170*t420*t53*t78*var3[0] + 20.*t142*t206*t276*t53*t78*var3[11] - 5.*t170*t420*t53*t78*var3[11] + 30.*t193*t194*t198*t53*t78*var3[22] - 20.*t142*t206*t276*t53*t78*var3[22] + 20.*t166*t169*t177*t53*t78*var3[33] - 30.*t193*t194*t198*t53*t78*var3[33] + 5.*t135*t146*t53*t78*var3[44] - 20.*t166*t169*t177*t53*t78*var3[44] - 5.*t135*t146*t53*t78*var3[55];
  p_output1[2]=1.;
  p_output1[3]=t1116;
  p_output1[4]=t1124;
  p_output1[5]=t1203;
  p_output1[6]=t1244;
  p_output1[7]=t1254;
  p_output1[8]=t1270;
  p_output1[9]=-5.*t1428*t420*var3[0] - 20.*t142*t1428*t170*t276*var3[11] + 5.*t170*t420*var3[11] - 5.*t142*t206*t420*var3[11] - 30.*t1428*t194*t198*t206*var3[22] - 20.*t193*t194*t276*var3[22] + 20.*t142*t206*t276*var3[22] - 20.*t1428*t169*t177*t193*var3[33] - 30.*t166*t169*t198*var3[33] + 30.*t193*t194*t198*var3[33] - 5.*t1428*t146*t166*var3[44] - 20.*t135*t146*t177*var3[44] + 20.*t166*t169*t177*var3[44] - 5.*t1269*t1374*var3[55] + 5.*t135*t146*var3[55];
  p_output1[10]=-5.*t142*t206*t420*var3[0] - 20.*t193*t194*t276*var3[11] + 5.*t142*t206*t420*var3[11] - 30.*t166*t169*t198*var3[22] + 20.*t193*t194*t276*var3[22] - 20.*t135*t146*t177*var3[33] + 30.*t166*t169*t198*var3[33] - 5.*t1269*t1374*var3[44] + 20.*t135*t146*t177*var3[44] + 5.*t1269*t1374*var3[55];
  p_output1[11]=5.*t113*t170*t420*var3[1] + 20.*t113*t142*t206*t276*var3[12] - 5.*t113*t170*t420*var3[12] + 30.*t113*t193*t194*t198*var3[23] - 20.*t113*t142*t206*t276*var3[23] + 20.*t113*t166*t169*t177*var3[34] - 30.*t113*t193*t194*t198*var3[34] + 5.*t113*t135*t146*var3[45] - 20.*t113*t166*t169*t177*var3[45] - 5.*t113*t135*t146*var3[56];
  p_output1[12]=5.*t170*t420*t53*t78*var3[1] + 20.*t142*t206*t276*t53*t78*var3[12] - 5.*t170*t420*t53*t78*var3[12] + 30.*t193*t194*t198*t53*t78*var3[23] - 20.*t142*t206*t276*t53*t78*var3[23] + 20.*t166*t169*t177*t53*t78*var3[34] - 30.*t193*t194*t198*t53*t78*var3[34] + 5.*t135*t146*t53*t78*var3[45] - 20.*t166*t169*t177*t53*t78*var3[45] - 5.*t135*t146*t53*t78*var3[56];
  p_output1[13]=1.;
  p_output1[14]=t1116;
  p_output1[15]=t1124;
  p_output1[16]=t1203;
  p_output1[17]=t1244;
  p_output1[18]=t1254;
  p_output1[19]=t1270;
  p_output1[20]=-5.*t1428*t420*var3[1] - 20.*t142*t1428*t170*t276*var3[12] + 5.*t170*t420*var3[12] - 5.*t142*t206*t420*var3[12] - 30.*t1428*t194*t198*t206*var3[23] - 20.*t193*t194*t276*var3[23] + 20.*t142*t206*t276*var3[23] - 20.*t1428*t169*t177*t193*var3[34] - 30.*t166*t169*t198*var3[34] + 30.*t193*t194*t198*var3[34] - 5.*t1428*t146*t166*var3[45] - 20.*t135*t146*t177*var3[45] + 20.*t166*t169*t177*var3[45] - 5.*t1269*t1374*var3[56] + 5.*t135*t146*var3[56];
  p_output1[21]=-5.*t142*t206*t420*var3[1] - 20.*t193*t194*t276*var3[12] + 5.*t142*t206*t420*var3[12] - 30.*t166*t169*t198*var3[23] + 20.*t193*t194*t276*var3[23] - 20.*t135*t146*t177*var3[34] + 30.*t166*t169*t198*var3[34] - 5.*t1269*t1374*var3[45] + 20.*t135*t146*t177*var3[45] + 5.*t1269*t1374*var3[56];
  p_output1[22]=5.*t113*t170*t420*var3[2] + 20.*t113*t142*t206*t276*var3[13] - 5.*t113*t170*t420*var3[13] + 30.*t113*t193*t194*t198*var3[24] - 20.*t113*t142*t206*t276*var3[24] + 20.*t113*t166*t169*t177*var3[35] - 30.*t113*t193*t194*t198*var3[35] + 5.*t113*t135*t146*var3[46] - 20.*t113*t166*t169*t177*var3[46] - 5.*t113*t135*t146*var3[57];
  p_output1[23]=5.*t170*t420*t53*t78*var3[2] + 20.*t142*t206*t276*t53*t78*var3[13] - 5.*t170*t420*t53*t78*var3[13] + 30.*t193*t194*t198*t53*t78*var3[24] - 20.*t142*t206*t276*t53*t78*var3[24] + 20.*t166*t169*t177*t53*t78*var3[35] - 30.*t193*t194*t198*t53*t78*var3[35] + 5.*t135*t146*t53*t78*var3[46] - 20.*t166*t169*t177*t53*t78*var3[46] - 5.*t135*t146*t53*t78*var3[57];
  p_output1[24]=1.;
  p_output1[25]=t1116;
  p_output1[26]=t1124;
  p_output1[27]=t1203;
  p_output1[28]=t1244;
  p_output1[29]=t1254;
  p_output1[30]=t1270;
  p_output1[31]=-5.*t1428*t420*var3[2] - 20.*t142*t1428*t170*t276*var3[13] + 5.*t170*t420*var3[13] - 5.*t142*t206*t420*var3[13] - 30.*t1428*t194*t198*t206*var3[24] - 20.*t193*t194*t276*var3[24] + 20.*t142*t206*t276*var3[24] - 20.*t1428*t169*t177*t193*var3[35] - 30.*t166*t169*t198*var3[35] + 30.*t193*t194*t198*var3[35] - 5.*t1428*t146*t166*var3[46] - 20.*t135*t146*t177*var3[46] + 20.*t166*t169*t177*var3[46] - 5.*t1269*t1374*var3[57] + 5.*t135*t146*var3[57];
  p_output1[32]=-5.*t142*t206*t420*var3[2] - 20.*t193*t194*t276*var3[13] + 5.*t142*t206*t420*var3[13] - 30.*t166*t169*t198*var3[24] + 20.*t193*t194*t276*var3[24] - 20.*t135*t146*t177*var3[35] + 30.*t166*t169*t198*var3[35] - 5.*t1269*t1374*var3[46] + 20.*t135*t146*t177*var3[46] + 5.*t1269*t1374*var3[57];
  p_output1[33]=5.*t113*t170*t420*var3[3] + 20.*t113*t142*t206*t276*var3[14] - 5.*t113*t170*t420*var3[14] + 30.*t113*t193*t194*t198*var3[25] - 20.*t113*t142*t206*t276*var3[25] + 20.*t113*t166*t169*t177*var3[36] - 30.*t113*t193*t194*t198*var3[36] + 5.*t113*t135*t146*var3[47] - 20.*t113*t166*t169*t177*var3[47] - 5.*t113*t135*t146*var3[58];
  p_output1[34]=5.*t170*t420*t53*t78*var3[3] + 20.*t142*t206*t276*t53*t78*var3[14] - 5.*t170*t420*t53*t78*var3[14] + 30.*t193*t194*t198*t53*t78*var3[25] - 20.*t142*t206*t276*t53*t78*var3[25] + 20.*t166*t169*t177*t53*t78*var3[36] - 30.*t193*t194*t198*t53*t78*var3[36] + 5.*t135*t146*t53*t78*var3[47] - 20.*t166*t169*t177*t53*t78*var3[47] - 5.*t135*t146*t53*t78*var3[58];
  p_output1[35]=1.;
  p_output1[36]=t1116;
  p_output1[37]=t1124;
  p_output1[38]=t1203;
  p_output1[39]=t1244;
  p_output1[40]=t1254;
  p_output1[41]=t1270;
  p_output1[42]=-5.*t1428*t420*var3[3] - 20.*t142*t1428*t170*t276*var3[14] + 5.*t170*t420*var3[14] - 5.*t142*t206*t420*var3[14] - 30.*t1428*t194*t198*t206*var3[25] - 20.*t193*t194*t276*var3[25] + 20.*t142*t206*t276*var3[25] - 20.*t1428*t169*t177*t193*var3[36] - 30.*t166*t169*t198*var3[36] + 30.*t193*t194*t198*var3[36] - 5.*t1428*t146*t166*var3[47] - 20.*t135*t146*t177*var3[47] + 20.*t166*t169*t177*var3[47] - 5.*t1269*t1374*var3[58] + 5.*t135*t146*var3[58];
  p_output1[43]=-5.*t142*t206*t420*var3[3] - 20.*t193*t194*t276*var3[14] + 5.*t142*t206*t420*var3[14] - 30.*t166*t169*t198*var3[25] + 20.*t193*t194*t276*var3[25] - 20.*t135*t146*t177*var3[36] + 30.*t166*t169*t198*var3[36] - 5.*t1269*t1374*var3[47] + 20.*t135*t146*t177*var3[47] + 5.*t1269*t1374*var3[58];
  p_output1[44]=5.*t113*t170*t420*var3[4] + 20.*t113*t142*t206*t276*var3[15] - 5.*t113*t170*t420*var3[15] + 30.*t113*t193*t194*t198*var3[26] - 20.*t113*t142*t206*t276*var3[26] + 20.*t113*t166*t169*t177*var3[37] - 30.*t113*t193*t194*t198*var3[37] + 5.*t113*t135*t146*var3[48] - 20.*t113*t166*t169*t177*var3[48] - 5.*t113*t135*t146*var3[59];
  p_output1[45]=5.*t170*t420*t53*t78*var3[4] + 20.*t142*t206*t276*t53*t78*var3[15] - 5.*t170*t420*t53*t78*var3[15] + 30.*t193*t194*t198*t53*t78*var3[26] - 20.*t142*t206*t276*t53*t78*var3[26] + 20.*t166*t169*t177*t53*t78*var3[37] - 30.*t193*t194*t198*t53*t78*var3[37] + 5.*t135*t146*t53*t78*var3[48] - 20.*t166*t169*t177*t53*t78*var3[48] - 5.*t135*t146*t53*t78*var3[59];
  p_output1[46]=1.;
  p_output1[47]=t1116;
  p_output1[48]=t1124;
  p_output1[49]=t1203;
  p_output1[50]=t1244;
  p_output1[51]=t1254;
  p_output1[52]=t1270;
  p_output1[53]=-5.*t1428*t420*var3[4] - 20.*t142*t1428*t170*t276*var3[15] + 5.*t170*t420*var3[15] - 5.*t142*t206*t420*var3[15] - 30.*t1428*t194*t198*t206*var3[26] - 20.*t193*t194*t276*var3[26] + 20.*t142*t206*t276*var3[26] - 20.*t1428*t169*t177*t193*var3[37] - 30.*t166*t169*t198*var3[37] + 30.*t193*t194*t198*var3[37] - 5.*t1428*t146*t166*var3[48] - 20.*t135*t146*t177*var3[48] + 20.*t166*t169*t177*var3[48] - 5.*t1269*t1374*var3[59] + 5.*t135*t146*var3[59];
  p_output1[54]=-5.*t142*t206*t420*var3[4] - 20.*t193*t194*t276*var3[15] + 5.*t142*t206*t420*var3[15] - 30.*t166*t169*t198*var3[26] + 20.*t193*t194*t276*var3[26] - 20.*t135*t146*t177*var3[37] + 30.*t166*t169*t198*var3[37] - 5.*t1269*t1374*var3[48] + 20.*t135*t146*t177*var3[48] + 5.*t1269*t1374*var3[59];
  p_output1[55]=5.*t113*t170*t420*var3[5] + 20.*t113*t142*t206*t276*var3[16] - 5.*t113*t170*t420*var3[16] + 30.*t113*t193*t194*t198*var3[27] - 20.*t113*t142*t206*t276*var3[27] + 20.*t113*t166*t169*t177*var3[38] - 30.*t113*t193*t194*t198*var3[38] + 5.*t113*t135*t146*var3[49] - 20.*t113*t166*t169*t177*var3[49] - 5.*t113*t135*t146*var3[60];
  p_output1[56]=5.*t170*t420*t53*t78*var3[5] + 20.*t142*t206*t276*t53*t78*var3[16] - 5.*t170*t420*t53*t78*var3[16] + 30.*t193*t194*t198*t53*t78*var3[27] - 20.*t142*t206*t276*t53*t78*var3[27] + 20.*t166*t169*t177*t53*t78*var3[38] - 30.*t193*t194*t198*t53*t78*var3[38] + 5.*t135*t146*t53*t78*var3[49] - 20.*t166*t169*t177*t53*t78*var3[49] - 5.*t135*t146*t53*t78*var3[60];
  p_output1[57]=1.;
  p_output1[58]=t1116;
  p_output1[59]=t1124;
  p_output1[60]=t1203;
  p_output1[61]=t1244;
  p_output1[62]=t1254;
  p_output1[63]=t1270;
  p_output1[64]=-5.*t1428*t420*var3[5] - 20.*t142*t1428*t170*t276*var3[16] + 5.*t170*t420*var3[16] - 5.*t142*t206*t420*var3[16] - 30.*t1428*t194*t198*t206*var3[27] - 20.*t193*t194*t276*var3[27] + 20.*t142*t206*t276*var3[27] - 20.*t1428*t169*t177*t193*var3[38] - 30.*t166*t169*t198*var3[38] + 30.*t193*t194*t198*var3[38] - 5.*t1428*t146*t166*var3[49] - 20.*t135*t146*t177*var3[49] + 20.*t166*t169*t177*var3[49] - 5.*t1269*t1374*var3[60] + 5.*t135*t146*var3[60];
  p_output1[65]=-5.*t142*t206*t420*var3[5] - 20.*t193*t194*t276*var3[16] + 5.*t142*t206*t420*var3[16] - 30.*t166*t169*t198*var3[27] + 20.*t193*t194*t276*var3[27] - 20.*t135*t146*t177*var3[38] + 30.*t166*t169*t198*var3[38] - 5.*t1269*t1374*var3[49] + 20.*t135*t146*t177*var3[49] + 5.*t1269*t1374*var3[60];
  p_output1[66]=5.*t113*t170*t420*var3[6] + 20.*t113*t142*t206*t276*var3[17] - 5.*t113*t170*t420*var3[17] + 30.*t113*t193*t194*t198*var3[28] - 20.*t113*t142*t206*t276*var3[28] + 20.*t113*t166*t169*t177*var3[39] - 30.*t113*t193*t194*t198*var3[39] + 5.*t113*t135*t146*var3[50] - 20.*t113*t166*t169*t177*var3[50] - 5.*t113*t135*t146*var3[61];
  p_output1[67]=5.*t170*t420*t53*t78*var3[6] + 20.*t142*t206*t276*t53*t78*var3[17] - 5.*t170*t420*t53*t78*var3[17] + 30.*t193*t194*t198*t53*t78*var3[28] - 20.*t142*t206*t276*t53*t78*var3[28] + 20.*t166*t169*t177*t53*t78*var3[39] - 30.*t193*t194*t198*t53*t78*var3[39] + 5.*t135*t146*t53*t78*var3[50] - 20.*t166*t169*t177*t53*t78*var3[50] - 5.*t135*t146*t53*t78*var3[61];
  p_output1[68]=1.;
  p_output1[69]=t1116;
  p_output1[70]=t1124;
  p_output1[71]=t1203;
  p_output1[72]=t1244;
  p_output1[73]=t1254;
  p_output1[74]=t1270;
  p_output1[75]=-5.*t1428*t420*var3[6] - 20.*t142*t1428*t170*t276*var3[17] + 5.*t170*t420*var3[17] - 5.*t142*t206*t420*var3[17] - 30.*t1428*t194*t198*t206*var3[28] - 20.*t193*t194*t276*var3[28] + 20.*t142*t206*t276*var3[28] - 20.*t1428*t169*t177*t193*var3[39] - 30.*t166*t169*t198*var3[39] + 30.*t193*t194*t198*var3[39] - 5.*t1428*t146*t166*var3[50] - 20.*t135*t146*t177*var3[50] + 20.*t166*t169*t177*var3[50] - 5.*t1269*t1374*var3[61] + 5.*t135*t146*var3[61];
  p_output1[76]=-5.*t142*t206*t420*var3[6] - 20.*t193*t194*t276*var3[17] + 5.*t142*t206*t420*var3[17] - 30.*t166*t169*t198*var3[28] + 20.*t193*t194*t276*var3[28] - 20.*t135*t146*t177*var3[39] + 30.*t166*t169*t198*var3[39] - 5.*t1269*t1374*var3[50] + 20.*t135*t146*t177*var3[50] + 5.*t1269*t1374*var3[61];
  p_output1[77]=5.*t113*t170*t420*var3[7] + 20.*t113*t142*t206*t276*var3[18] - 5.*t113*t170*t420*var3[18] + 30.*t113*t193*t194*t198*var3[29] - 20.*t113*t142*t206*t276*var3[29] + 20.*t113*t166*t169*t177*var3[40] - 30.*t113*t193*t194*t198*var3[40] + 5.*t113*t135*t146*var3[51] - 20.*t113*t166*t169*t177*var3[51] - 5.*t113*t135*t146*var3[62];
  p_output1[78]=5.*t170*t420*t53*t78*var3[7] + 20.*t142*t206*t276*t53*t78*var3[18] - 5.*t170*t420*t53*t78*var3[18] + 30.*t193*t194*t198*t53*t78*var3[29] - 20.*t142*t206*t276*t53*t78*var3[29] + 20.*t166*t169*t177*t53*t78*var3[40] - 30.*t193*t194*t198*t53*t78*var3[40] + 5.*t135*t146*t53*t78*var3[51] - 20.*t166*t169*t177*t53*t78*var3[51] - 5.*t135*t146*t53*t78*var3[62];
  p_output1[79]=1.;
  p_output1[80]=t1116;
  p_output1[81]=t1124;
  p_output1[82]=t1203;
  p_output1[83]=t1244;
  p_output1[84]=t1254;
  p_output1[85]=t1270;
  p_output1[86]=-5.*t1428*t420*var3[7] - 20.*t142*t1428*t170*t276*var3[18] + 5.*t170*t420*var3[18] - 5.*t142*t206*t420*var3[18] - 30.*t1428*t194*t198*t206*var3[29] - 20.*t193*t194*t276*var3[29] + 20.*t142*t206*t276*var3[29] - 20.*t1428*t169*t177*t193*var3[40] - 30.*t166*t169*t198*var3[40] + 30.*t193*t194*t198*var3[40] - 5.*t1428*t146*t166*var3[51] - 20.*t135*t146*t177*var3[51] + 20.*t166*t169*t177*var3[51] - 5.*t1269*t1374*var3[62] + 5.*t135*t146*var3[62];
  p_output1[87]=-5.*t142*t206*t420*var3[7] - 20.*t193*t194*t276*var3[18] + 5.*t142*t206*t420*var3[18] - 30.*t166*t169*t198*var3[29] + 20.*t193*t194*t276*var3[29] - 20.*t135*t146*t177*var3[40] + 30.*t166*t169*t198*var3[40] - 5.*t1269*t1374*var3[51] + 20.*t135*t146*t177*var3[51] + 5.*t1269*t1374*var3[62];
  p_output1[88]=5.*t113*t170*t420*var3[8] + 20.*t113*t142*t206*t276*var3[19] - 5.*t113*t170*t420*var3[19] + 30.*t113*t193*t194*t198*var3[30] - 20.*t113*t142*t206*t276*var3[30] + 20.*t113*t166*t169*t177*var3[41] - 30.*t113*t193*t194*t198*var3[41] + 5.*t113*t135*t146*var3[52] - 20.*t113*t166*t169*t177*var3[52] - 5.*t113*t135*t146*var3[63];
  p_output1[89]=5.*t170*t420*t53*t78*var3[8] + 20.*t142*t206*t276*t53*t78*var3[19] - 5.*t170*t420*t53*t78*var3[19] + 30.*t193*t194*t198*t53*t78*var3[30] - 20.*t142*t206*t276*t53*t78*var3[30] + 20.*t166*t169*t177*t53*t78*var3[41] - 30.*t193*t194*t198*t53*t78*var3[41] + 5.*t135*t146*t53*t78*var3[52] - 20.*t166*t169*t177*t53*t78*var3[52] - 5.*t135*t146*t53*t78*var3[63];
  p_output1[90]=1.;
  p_output1[91]=t1116;
  p_output1[92]=t1124;
  p_output1[93]=t1203;
  p_output1[94]=t1244;
  p_output1[95]=t1254;
  p_output1[96]=t1270;
  p_output1[97]=-5.*t1428*t420*var3[8] - 20.*t142*t1428*t170*t276*var3[19] + 5.*t170*t420*var3[19] - 5.*t142*t206*t420*var3[19] - 30.*t1428*t194*t198*t206*var3[30] - 20.*t193*t194*t276*var3[30] + 20.*t142*t206*t276*var3[30] - 20.*t1428*t169*t177*t193*var3[41] - 30.*t166*t169*t198*var3[41] + 30.*t193*t194*t198*var3[41] - 5.*t1428*t146*t166*var3[52] - 20.*t135*t146*t177*var3[52] + 20.*t166*t169*t177*var3[52] - 5.*t1269*t1374*var3[63] + 5.*t135*t146*var3[63];
  p_output1[98]=-5.*t142*t206*t420*var3[8] - 20.*t193*t194*t276*var3[19] + 5.*t142*t206*t420*var3[19] - 30.*t166*t169*t198*var3[30] + 20.*t193*t194*t276*var3[30] - 20.*t135*t146*t177*var3[41] + 30.*t166*t169*t198*var3[41] - 5.*t1269*t1374*var3[52] + 20.*t135*t146*t177*var3[52] + 5.*t1269*t1374*var3[63];
  p_output1[99]=5.*t113*t170*t420*var3[9] + 20.*t113*t142*t206*t276*var3[20] - 5.*t113*t170*t420*var3[20] + 30.*t113*t193*t194*t198*var3[31] - 20.*t113*t142*t206*t276*var3[31] + 20.*t113*t166*t169*t177*var3[42] - 30.*t113*t193*t194*t198*var3[42] + 5.*t113*t135*t146*var3[53] - 20.*t113*t166*t169*t177*var3[53] - 5.*t113*t135*t146*var3[64];
  p_output1[100]=5.*t170*t420*t53*t78*var3[9] + 20.*t142*t206*t276*t53*t78*var3[20] - 5.*t170*t420*t53*t78*var3[20] + 30.*t193*t194*t198*t53*t78*var3[31] - 20.*t142*t206*t276*t53*t78*var3[31] + 20.*t166*t169*t177*t53*t78*var3[42] - 30.*t193*t194*t198*t53*t78*var3[42] + 5.*t135*t146*t53*t78*var3[53] - 20.*t166*t169*t177*t53*t78*var3[53] - 5.*t135*t146*t53*t78*var3[64];
  p_output1[101]=1.;
  p_output1[102]=t1116;
  p_output1[103]=t1124;
  p_output1[104]=t1203;
  p_output1[105]=t1244;
  p_output1[106]=t1254;
  p_output1[107]=t1270;
  p_output1[108]=-5.*t1428*t420*var3[9] - 20.*t142*t1428*t170*t276*var3[20] + 5.*t170*t420*var3[20] - 5.*t142*t206*t420*var3[20] - 30.*t1428*t194*t198*t206*var3[31] - 20.*t193*t194*t276*var3[31] + 20.*t142*t206*t276*var3[31] - 20.*t1428*t169*t177*t193*var3[42] - 30.*t166*t169*t198*var3[42] + 30.*t193*t194*t198*var3[42] - 5.*t1428*t146*t166*var3[53] - 20.*t135*t146*t177*var3[53] + 20.*t166*t169*t177*var3[53] - 5.*t1269*t1374*var3[64] + 5.*t135*t146*var3[64];
  p_output1[109]=-5.*t142*t206*t420*var3[9] - 20.*t193*t194*t276*var3[20] + 5.*t142*t206*t420*var3[20] - 30.*t166*t169*t198*var3[31] + 20.*t193*t194*t276*var3[31] - 20.*t135*t146*t177*var3[42] + 30.*t166*t169*t198*var3[42] - 5.*t1269*t1374*var3[53] + 20.*t135*t146*t177*var3[53] + 5.*t1269*t1374*var3[64];
  p_output1[110]=5.*t113*t170*t420*var3[10] + 20.*t113*t142*t206*t276*var3[21] - 5.*t113*t170*t420*var3[21] + 30.*t113*t193*t194*t198*var3[32] - 20.*t113*t142*t206*t276*var3[32] + 20.*t113*t166*t169*t177*var3[43] - 30.*t113*t193*t194*t198*var3[43] + 5.*t113*t135*t146*var3[54] - 20.*t113*t166*t169*t177*var3[54] - 5.*t113*t135*t146*var3[65];
  p_output1[111]=5.*t170*t420*t53*t78*var3[10] + 20.*t142*t206*t276*t53*t78*var3[21] - 5.*t170*t420*t53*t78*var3[21] + 30.*t193*t194*t198*t53*t78*var3[32] - 20.*t142*t206*t276*t53*t78*var3[32] + 20.*t166*t169*t177*t53*t78*var3[43] - 30.*t193*t194*t198*t53*t78*var3[43] + 5.*t135*t146*t53*t78*var3[54] - 20.*t166*t169*t177*t53*t78*var3[54] - 5.*t135*t146*t53*t78*var3[65];
  p_output1[112]=1.;
  p_output1[113]=t1116;
  p_output1[114]=t1124;
  p_output1[115]=t1203;
  p_output1[116]=t1244;
  p_output1[117]=t1254;
  p_output1[118]=t1270;
  p_output1[119]=-5.*t1428*t420*var3[10] - 20.*t142*t1428*t170*t276*var3[21] + 5.*t170*t420*var3[21] - 5.*t142*t206*t420*var3[21] - 30.*t1428*t194*t198*t206*var3[32] - 20.*t193*t194*t276*var3[32] + 20.*t142*t206*t276*var3[32] - 20.*t1428*t169*t177*t193*var3[43] - 30.*t166*t169*t198*var3[43] + 30.*t193*t194*t198*var3[43] - 5.*t1428*t146*t166*var3[54] - 20.*t135*t146*t177*var3[54] + 20.*t166*t169*t177*var3[54] - 5.*t1269*t1374*var3[65] + 5.*t135*t146*var3[65];
  p_output1[120]=-5.*t142*t206*t420*var3[10] - 20.*t193*t194*t276*var3[21] + 5.*t142*t206*t420*var3[21] - 30.*t166*t169*t198*var3[32] + 20.*t193*t194*t276*var3[32] - 20.*t135*t146*t177*var3[43] + 30.*t166*t169*t198*var3[43] - 5.*t1269*t1374*var3[54] + 20.*t135*t146*t177*var3[54] + 5.*t1269*t1374*var3[65];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 121, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void J_y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE