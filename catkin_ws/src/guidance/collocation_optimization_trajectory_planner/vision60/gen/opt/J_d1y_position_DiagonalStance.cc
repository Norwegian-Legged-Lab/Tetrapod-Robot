/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:44 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t663;
  double t572;
  double t611;
  double t616;
  double t642;
  double t643;
  double t698;
  double t741;
  double t751;
  double t788;
  double t789;
  double t798;
  double t814;
  double t860;
  double t861;
  double t865;
  double t866;
  double t869;
  double t885;
  double t886;
  double t905;
  double t911;
  double t987;
  double t1023;
  double t1051;
  double t1072;
  double t1081;
  double t989;
  double t993;
  double t994;
  double t997;
  double t998;
  double t999;
  double t1005;
  double t1007;
  double t1019;
  double t1020;
  double t1024;
  double t1029;
  double t1030;
  double t1036;
  t663 = -1.*var5[0];
  t572 = -1. + var6[0];
  t611 = -1. + var7[0];
  t616 = 1/t611;
  t642 = -1.*t572*t616;
  t643 = 1. + t642;
  t698 = t663 + var5[1];
  t741 = Power(t698,-5);
  t751 = -1.*var1[0];
  t788 = t751 + var1[1];
  t789 = t572*t616*t788;
  t798 = t663 + var1[0] + t789;
  t814 = Power(t798,3);
  t860 = Power(t698,-4);
  t861 = Power(t798,2);
  t865 = 1/t698;
  t866 = -1.*t865*t798;
  t869 = 1. + t866;
  t885 = Power(t698,-3);
  t886 = Power(t869,2);
  t905 = Power(t698,-2);
  t911 = Power(t869,3);
  t987 = Power(t869,4);
  t1023 = Power(t798,4);
  t1051 = Power(t698,-6);
  t1072 = -1.*t905*t798;
  t1081 = t865 + t1072;
  t989 = 5.*t865*t987;
  t993 = 20.*t905*t798*t911;
  t994 = -5.*t865*t987;
  t997 = t993 + t994;
  t998 = 30.*t885*t861*t886;
  t999 = -20.*t905*t798*t911;
  t1005 = t998 + t999;
  t1007 = 20.*t860*t814*t869;
  t1019 = -30.*t885*t861*t886;
  t1020 = t1007 + t1019;
  t1024 = 5.*t741*t1023;
  t1029 = -20.*t860*t814*t869;
  t1030 = t1024 + t1029;
  t1036 = -5.*t741*t1023;
  p_output1[0]=-20.*t643*t905*t911*var4[0] - 60.*t643*t798*t885*t886*var4[11] + 40.*t643*t905*t911*var4[11] - 60.*t643*t860*t861*t869*var4[22] + 120.*t643*t798*t885*t886*var4[22] - 20.*t643*t905*t911*var4[22] - 20.*t643*t741*t814*var4[33] + 120.*t643*t860*t861*t869*var4[33] - 60.*t643*t798*t885*t886*var4[33] + 40.*t643*t741*t814*var4[44] - 60.*t643*t860*t861*t869*var4[44] - 20.*t643*t741*t814*var4[55];
  p_output1[1]=-20.*t572*t616*t905*t911*var4[0] - 60.*t572*t616*t798*t885*t886*var4[11] + 40.*t572*t616*t905*t911*var4[11] - 60.*t572*t616*t860*t861*t869*var4[22] + 120.*t572*t616*t798*t885*t886*var4[22] - 20.*t572*t616*t905*t911*var4[22] - 20.*t572*t616*t741*t814*var4[33] + 120.*t572*t616*t860*t861*t869*var4[33] - 60.*t572*t616*t798*t885*t886*var4[33] + 40.*t572*t616*t741*t814*var4[44] - 60.*t572*t616*t860*t861*t869*var4[44] - 20.*t572*t616*t741*t814*var4[55];
  p_output1[2]=1.;
  p_output1[3]=t989;
  p_output1[4]=t997;
  p_output1[5]=t1005;
  p_output1[6]=t1020;
  p_output1[7]=t1030;
  p_output1[8]=t1036;
  p_output1[9]=20.*t1081*t865*t911*var4[0] + 5.*t905*t987*var4[0] + 60.*t1081*t798*t886*t905*var4[11] - 20.*t1081*t865*t911*var4[11] + 40.*t798*t885*t911*var4[11] - 20.*t905*t911*var4[11] - 5.*t905*t987*var4[11] + 60.*t1081*t861*t869*t885*var4[22] + 90.*t860*t861*t886*var4[22] - 60.*t798*t885*t886*var4[22] - 60.*t1081*t798*t886*t905*var4[22] - 40.*t798*t885*t911*var4[22] + 20.*t905*t911*var4[22] + 20.*t1081*t814*t860*var4[33] + 80.*t741*t814*t869*var4[33] - 60.*t860*t861*t869*var4[33] - 60.*t1081*t861*t869*t885*var4[33] - 90.*t860*t861*t886*var4[33] + 60.*t798*t885*t886*var4[33] + 25.*t1023*t1051*var4[44] - 20.*t741*t814*var4[44] - 20.*t1081*t814*t860*var4[44] - 80.*t741*t814*t869*var4[44] + 60.*t860*t861*t869*var4[44] - 25.*t1023*t1051*var4[55] + 20.*t741*t814*var4[55];
  p_output1[10]=20.*t798*t885*t911*var4[0] - 5.*t905*t987*var4[0] + 60.*t860*t861*t886*var4[11] - 60.*t798*t885*t911*var4[11] + 5.*t905*t987*var4[11] + 60.*t741*t814*t869*var4[22] - 150.*t860*t861*t886*var4[22] + 40.*t798*t885*t911*var4[22] + 20.*t1023*t1051*var4[33] - 140.*t741*t814*t869*var4[33] + 90.*t860*t861*t886*var4[33] - 45.*t1023*t1051*var4[44] + 80.*t741*t814*t869*var4[44] + 25.*t1023*t1051*var4[55];
  p_output1[11]=-20.*t643*t905*t911*var4[1] - 60.*t643*t798*t885*t886*var4[12] + 40.*t643*t905*t911*var4[12] - 60.*t643*t860*t861*t869*var4[23] + 120.*t643*t798*t885*t886*var4[23] - 20.*t643*t905*t911*var4[23] - 20.*t643*t741*t814*var4[34] + 120.*t643*t860*t861*t869*var4[34] - 60.*t643*t798*t885*t886*var4[34] + 40.*t643*t741*t814*var4[45] - 60.*t643*t860*t861*t869*var4[45] - 20.*t643*t741*t814*var4[56];
  p_output1[12]=-20.*t572*t616*t905*t911*var4[1] - 60.*t572*t616*t798*t885*t886*var4[12] + 40.*t572*t616*t905*t911*var4[12] - 60.*t572*t616*t860*t861*t869*var4[23] + 120.*t572*t616*t798*t885*t886*var4[23] - 20.*t572*t616*t905*t911*var4[23] - 20.*t572*t616*t741*t814*var4[34] + 120.*t572*t616*t860*t861*t869*var4[34] - 60.*t572*t616*t798*t885*t886*var4[34] + 40.*t572*t616*t741*t814*var4[45] - 60.*t572*t616*t860*t861*t869*var4[45] - 20.*t572*t616*t741*t814*var4[56];
  p_output1[13]=1.;
  p_output1[14]=t989;
  p_output1[15]=t997;
  p_output1[16]=t1005;
  p_output1[17]=t1020;
  p_output1[18]=t1030;
  p_output1[19]=t1036;
  p_output1[20]=20.*t1081*t865*t911*var4[1] + 5.*t905*t987*var4[1] + 60.*t1081*t798*t886*t905*var4[12] - 20.*t1081*t865*t911*var4[12] + 40.*t798*t885*t911*var4[12] - 20.*t905*t911*var4[12] - 5.*t905*t987*var4[12] + 60.*t1081*t861*t869*t885*var4[23] + 90.*t860*t861*t886*var4[23] - 60.*t798*t885*t886*var4[23] - 60.*t1081*t798*t886*t905*var4[23] - 40.*t798*t885*t911*var4[23] + 20.*t905*t911*var4[23] + 20.*t1081*t814*t860*var4[34] + 80.*t741*t814*t869*var4[34] - 60.*t860*t861*t869*var4[34] - 60.*t1081*t861*t869*t885*var4[34] - 90.*t860*t861*t886*var4[34] + 60.*t798*t885*t886*var4[34] + 25.*t1023*t1051*var4[45] - 20.*t741*t814*var4[45] - 20.*t1081*t814*t860*var4[45] - 80.*t741*t814*t869*var4[45] + 60.*t860*t861*t869*var4[45] - 25.*t1023*t1051*var4[56] + 20.*t741*t814*var4[56];
  p_output1[21]=20.*t798*t885*t911*var4[1] - 5.*t905*t987*var4[1] + 60.*t860*t861*t886*var4[12] - 60.*t798*t885*t911*var4[12] + 5.*t905*t987*var4[12] + 60.*t741*t814*t869*var4[23] - 150.*t860*t861*t886*var4[23] + 40.*t798*t885*t911*var4[23] + 20.*t1023*t1051*var4[34] - 140.*t741*t814*t869*var4[34] + 90.*t860*t861*t886*var4[34] - 45.*t1023*t1051*var4[45] + 80.*t741*t814*t869*var4[45] + 25.*t1023*t1051*var4[56];
  p_output1[22]=-20.*t643*t905*t911*var4[2] - 60.*t643*t798*t885*t886*var4[13] + 40.*t643*t905*t911*var4[13] - 60.*t643*t860*t861*t869*var4[24] + 120.*t643*t798*t885*t886*var4[24] - 20.*t643*t905*t911*var4[24] - 20.*t643*t741*t814*var4[35] + 120.*t643*t860*t861*t869*var4[35] - 60.*t643*t798*t885*t886*var4[35] + 40.*t643*t741*t814*var4[46] - 60.*t643*t860*t861*t869*var4[46] - 20.*t643*t741*t814*var4[57];
  p_output1[23]=-20.*t572*t616*t905*t911*var4[2] - 60.*t572*t616*t798*t885*t886*var4[13] + 40.*t572*t616*t905*t911*var4[13] - 60.*t572*t616*t860*t861*t869*var4[24] + 120.*t572*t616*t798*t885*t886*var4[24] - 20.*t572*t616*t905*t911*var4[24] - 20.*t572*t616*t741*t814*var4[35] + 120.*t572*t616*t860*t861*t869*var4[35] - 60.*t572*t616*t798*t885*t886*var4[35] + 40.*t572*t616*t741*t814*var4[46] - 60.*t572*t616*t860*t861*t869*var4[46] - 20.*t572*t616*t741*t814*var4[57];
  p_output1[24]=1.;
  p_output1[25]=t989;
  p_output1[26]=t997;
  p_output1[27]=t1005;
  p_output1[28]=t1020;
  p_output1[29]=t1030;
  p_output1[30]=t1036;
  p_output1[31]=20.*t1081*t865*t911*var4[2] + 5.*t905*t987*var4[2] + 60.*t1081*t798*t886*t905*var4[13] - 20.*t1081*t865*t911*var4[13] + 40.*t798*t885*t911*var4[13] - 20.*t905*t911*var4[13] - 5.*t905*t987*var4[13] + 60.*t1081*t861*t869*t885*var4[24] + 90.*t860*t861*t886*var4[24] - 60.*t798*t885*t886*var4[24] - 60.*t1081*t798*t886*t905*var4[24] - 40.*t798*t885*t911*var4[24] + 20.*t905*t911*var4[24] + 20.*t1081*t814*t860*var4[35] + 80.*t741*t814*t869*var4[35] - 60.*t860*t861*t869*var4[35] - 60.*t1081*t861*t869*t885*var4[35] - 90.*t860*t861*t886*var4[35] + 60.*t798*t885*t886*var4[35] + 25.*t1023*t1051*var4[46] - 20.*t741*t814*var4[46] - 20.*t1081*t814*t860*var4[46] - 80.*t741*t814*t869*var4[46] + 60.*t860*t861*t869*var4[46] - 25.*t1023*t1051*var4[57] + 20.*t741*t814*var4[57];
  p_output1[32]=20.*t798*t885*t911*var4[2] - 5.*t905*t987*var4[2] + 60.*t860*t861*t886*var4[13] - 60.*t798*t885*t911*var4[13] + 5.*t905*t987*var4[13] + 60.*t741*t814*t869*var4[24] - 150.*t860*t861*t886*var4[24] + 40.*t798*t885*t911*var4[24] + 20.*t1023*t1051*var4[35] - 140.*t741*t814*t869*var4[35] + 90.*t860*t861*t886*var4[35] - 45.*t1023*t1051*var4[46] + 80.*t741*t814*t869*var4[46] + 25.*t1023*t1051*var4[57];
  p_output1[33]=-20.*t643*t905*t911*var4[3] - 60.*t643*t798*t885*t886*var4[14] + 40.*t643*t905*t911*var4[14] - 60.*t643*t860*t861*t869*var4[25] + 120.*t643*t798*t885*t886*var4[25] - 20.*t643*t905*t911*var4[25] - 20.*t643*t741*t814*var4[36] + 120.*t643*t860*t861*t869*var4[36] - 60.*t643*t798*t885*t886*var4[36] + 40.*t643*t741*t814*var4[47] - 60.*t643*t860*t861*t869*var4[47] - 20.*t643*t741*t814*var4[58];
  p_output1[34]=-20.*t572*t616*t905*t911*var4[3] - 60.*t572*t616*t798*t885*t886*var4[14] + 40.*t572*t616*t905*t911*var4[14] - 60.*t572*t616*t860*t861*t869*var4[25] + 120.*t572*t616*t798*t885*t886*var4[25] - 20.*t572*t616*t905*t911*var4[25] - 20.*t572*t616*t741*t814*var4[36] + 120.*t572*t616*t860*t861*t869*var4[36] - 60.*t572*t616*t798*t885*t886*var4[36] + 40.*t572*t616*t741*t814*var4[47] - 60.*t572*t616*t860*t861*t869*var4[47] - 20.*t572*t616*t741*t814*var4[58];
  p_output1[35]=1.;
  p_output1[36]=t989;
  p_output1[37]=t997;
  p_output1[38]=t1005;
  p_output1[39]=t1020;
  p_output1[40]=t1030;
  p_output1[41]=t1036;
  p_output1[42]=20.*t1081*t865*t911*var4[3] + 5.*t905*t987*var4[3] + 60.*t1081*t798*t886*t905*var4[14] - 20.*t1081*t865*t911*var4[14] + 40.*t798*t885*t911*var4[14] - 20.*t905*t911*var4[14] - 5.*t905*t987*var4[14] + 60.*t1081*t861*t869*t885*var4[25] + 90.*t860*t861*t886*var4[25] - 60.*t798*t885*t886*var4[25] - 60.*t1081*t798*t886*t905*var4[25] - 40.*t798*t885*t911*var4[25] + 20.*t905*t911*var4[25] + 20.*t1081*t814*t860*var4[36] + 80.*t741*t814*t869*var4[36] - 60.*t860*t861*t869*var4[36] - 60.*t1081*t861*t869*t885*var4[36] - 90.*t860*t861*t886*var4[36] + 60.*t798*t885*t886*var4[36] + 25.*t1023*t1051*var4[47] - 20.*t741*t814*var4[47] - 20.*t1081*t814*t860*var4[47] - 80.*t741*t814*t869*var4[47] + 60.*t860*t861*t869*var4[47] - 25.*t1023*t1051*var4[58] + 20.*t741*t814*var4[58];
  p_output1[43]=20.*t798*t885*t911*var4[3] - 5.*t905*t987*var4[3] + 60.*t860*t861*t886*var4[14] - 60.*t798*t885*t911*var4[14] + 5.*t905*t987*var4[14] + 60.*t741*t814*t869*var4[25] - 150.*t860*t861*t886*var4[25] + 40.*t798*t885*t911*var4[25] + 20.*t1023*t1051*var4[36] - 140.*t741*t814*t869*var4[36] + 90.*t860*t861*t886*var4[36] - 45.*t1023*t1051*var4[47] + 80.*t741*t814*t869*var4[47] + 25.*t1023*t1051*var4[58];
  p_output1[44]=-20.*t643*t905*t911*var4[4] - 60.*t643*t798*t885*t886*var4[15] + 40.*t643*t905*t911*var4[15] - 60.*t643*t860*t861*t869*var4[26] + 120.*t643*t798*t885*t886*var4[26] - 20.*t643*t905*t911*var4[26] - 20.*t643*t741*t814*var4[37] + 120.*t643*t860*t861*t869*var4[37] - 60.*t643*t798*t885*t886*var4[37] + 40.*t643*t741*t814*var4[48] - 60.*t643*t860*t861*t869*var4[48] - 20.*t643*t741*t814*var4[59];
  p_output1[45]=-20.*t572*t616*t905*t911*var4[4] - 60.*t572*t616*t798*t885*t886*var4[15] + 40.*t572*t616*t905*t911*var4[15] - 60.*t572*t616*t860*t861*t869*var4[26] + 120.*t572*t616*t798*t885*t886*var4[26] - 20.*t572*t616*t905*t911*var4[26] - 20.*t572*t616*t741*t814*var4[37] + 120.*t572*t616*t860*t861*t869*var4[37] - 60.*t572*t616*t798*t885*t886*var4[37] + 40.*t572*t616*t741*t814*var4[48] - 60.*t572*t616*t860*t861*t869*var4[48] - 20.*t572*t616*t741*t814*var4[59];
  p_output1[46]=1.;
  p_output1[47]=t989;
  p_output1[48]=t997;
  p_output1[49]=t1005;
  p_output1[50]=t1020;
  p_output1[51]=t1030;
  p_output1[52]=t1036;
  p_output1[53]=20.*t1081*t865*t911*var4[4] + 5.*t905*t987*var4[4] + 60.*t1081*t798*t886*t905*var4[15] - 20.*t1081*t865*t911*var4[15] + 40.*t798*t885*t911*var4[15] - 20.*t905*t911*var4[15] - 5.*t905*t987*var4[15] + 60.*t1081*t861*t869*t885*var4[26] + 90.*t860*t861*t886*var4[26] - 60.*t798*t885*t886*var4[26] - 60.*t1081*t798*t886*t905*var4[26] - 40.*t798*t885*t911*var4[26] + 20.*t905*t911*var4[26] + 20.*t1081*t814*t860*var4[37] + 80.*t741*t814*t869*var4[37] - 60.*t860*t861*t869*var4[37] - 60.*t1081*t861*t869*t885*var4[37] - 90.*t860*t861*t886*var4[37] + 60.*t798*t885*t886*var4[37] + 25.*t1023*t1051*var4[48] - 20.*t741*t814*var4[48] - 20.*t1081*t814*t860*var4[48] - 80.*t741*t814*t869*var4[48] + 60.*t860*t861*t869*var4[48] - 25.*t1023*t1051*var4[59] + 20.*t741*t814*var4[59];
  p_output1[54]=20.*t798*t885*t911*var4[4] - 5.*t905*t987*var4[4] + 60.*t860*t861*t886*var4[15] - 60.*t798*t885*t911*var4[15] + 5.*t905*t987*var4[15] + 60.*t741*t814*t869*var4[26] - 150.*t860*t861*t886*var4[26] + 40.*t798*t885*t911*var4[26] + 20.*t1023*t1051*var4[37] - 140.*t741*t814*t869*var4[37] + 90.*t860*t861*t886*var4[37] - 45.*t1023*t1051*var4[48] + 80.*t741*t814*t869*var4[48] + 25.*t1023*t1051*var4[59];
  p_output1[55]=-20.*t643*t905*t911*var4[5] - 60.*t643*t798*t885*t886*var4[16] + 40.*t643*t905*t911*var4[16] - 60.*t643*t860*t861*t869*var4[27] + 120.*t643*t798*t885*t886*var4[27] - 20.*t643*t905*t911*var4[27] - 20.*t643*t741*t814*var4[38] + 120.*t643*t860*t861*t869*var4[38] - 60.*t643*t798*t885*t886*var4[38] + 40.*t643*t741*t814*var4[49] - 60.*t643*t860*t861*t869*var4[49] - 20.*t643*t741*t814*var4[60];
  p_output1[56]=-20.*t572*t616*t905*t911*var4[5] - 60.*t572*t616*t798*t885*t886*var4[16] + 40.*t572*t616*t905*t911*var4[16] - 60.*t572*t616*t860*t861*t869*var4[27] + 120.*t572*t616*t798*t885*t886*var4[27] - 20.*t572*t616*t905*t911*var4[27] - 20.*t572*t616*t741*t814*var4[38] + 120.*t572*t616*t860*t861*t869*var4[38] - 60.*t572*t616*t798*t885*t886*var4[38] + 40.*t572*t616*t741*t814*var4[49] - 60.*t572*t616*t860*t861*t869*var4[49] - 20.*t572*t616*t741*t814*var4[60];
  p_output1[57]=1.;
  p_output1[58]=t989;
  p_output1[59]=t997;
  p_output1[60]=t1005;
  p_output1[61]=t1020;
  p_output1[62]=t1030;
  p_output1[63]=t1036;
  p_output1[64]=20.*t1081*t865*t911*var4[5] + 5.*t905*t987*var4[5] + 60.*t1081*t798*t886*t905*var4[16] - 20.*t1081*t865*t911*var4[16] + 40.*t798*t885*t911*var4[16] - 20.*t905*t911*var4[16] - 5.*t905*t987*var4[16] + 60.*t1081*t861*t869*t885*var4[27] + 90.*t860*t861*t886*var4[27] - 60.*t798*t885*t886*var4[27] - 60.*t1081*t798*t886*t905*var4[27] - 40.*t798*t885*t911*var4[27] + 20.*t905*t911*var4[27] + 20.*t1081*t814*t860*var4[38] + 80.*t741*t814*t869*var4[38] - 60.*t860*t861*t869*var4[38] - 60.*t1081*t861*t869*t885*var4[38] - 90.*t860*t861*t886*var4[38] + 60.*t798*t885*t886*var4[38] + 25.*t1023*t1051*var4[49] - 20.*t741*t814*var4[49] - 20.*t1081*t814*t860*var4[49] - 80.*t741*t814*t869*var4[49] + 60.*t860*t861*t869*var4[49] - 25.*t1023*t1051*var4[60] + 20.*t741*t814*var4[60];
  p_output1[65]=20.*t798*t885*t911*var4[5] - 5.*t905*t987*var4[5] + 60.*t860*t861*t886*var4[16] - 60.*t798*t885*t911*var4[16] + 5.*t905*t987*var4[16] + 60.*t741*t814*t869*var4[27] - 150.*t860*t861*t886*var4[27] + 40.*t798*t885*t911*var4[27] + 20.*t1023*t1051*var4[38] - 140.*t741*t814*t869*var4[38] + 90.*t860*t861*t886*var4[38] - 45.*t1023*t1051*var4[49] + 80.*t741*t814*t869*var4[49] + 25.*t1023*t1051*var4[60];
  p_output1[66]=-20.*t643*t905*t911*var4[6] - 60.*t643*t798*t885*t886*var4[17] + 40.*t643*t905*t911*var4[17] - 60.*t643*t860*t861*t869*var4[28] + 120.*t643*t798*t885*t886*var4[28] - 20.*t643*t905*t911*var4[28] - 20.*t643*t741*t814*var4[39] + 120.*t643*t860*t861*t869*var4[39] - 60.*t643*t798*t885*t886*var4[39] + 40.*t643*t741*t814*var4[50] - 60.*t643*t860*t861*t869*var4[50] - 20.*t643*t741*t814*var4[61];
  p_output1[67]=-20.*t572*t616*t905*t911*var4[6] - 60.*t572*t616*t798*t885*t886*var4[17] + 40.*t572*t616*t905*t911*var4[17] - 60.*t572*t616*t860*t861*t869*var4[28] + 120.*t572*t616*t798*t885*t886*var4[28] - 20.*t572*t616*t905*t911*var4[28] - 20.*t572*t616*t741*t814*var4[39] + 120.*t572*t616*t860*t861*t869*var4[39] - 60.*t572*t616*t798*t885*t886*var4[39] + 40.*t572*t616*t741*t814*var4[50] - 60.*t572*t616*t860*t861*t869*var4[50] - 20.*t572*t616*t741*t814*var4[61];
  p_output1[68]=1.;
  p_output1[69]=t989;
  p_output1[70]=t997;
  p_output1[71]=t1005;
  p_output1[72]=t1020;
  p_output1[73]=t1030;
  p_output1[74]=t1036;
  p_output1[75]=20.*t1081*t865*t911*var4[6] + 5.*t905*t987*var4[6] + 60.*t1081*t798*t886*t905*var4[17] - 20.*t1081*t865*t911*var4[17] + 40.*t798*t885*t911*var4[17] - 20.*t905*t911*var4[17] - 5.*t905*t987*var4[17] + 60.*t1081*t861*t869*t885*var4[28] + 90.*t860*t861*t886*var4[28] - 60.*t798*t885*t886*var4[28] - 60.*t1081*t798*t886*t905*var4[28] - 40.*t798*t885*t911*var4[28] + 20.*t905*t911*var4[28] + 20.*t1081*t814*t860*var4[39] + 80.*t741*t814*t869*var4[39] - 60.*t860*t861*t869*var4[39] - 60.*t1081*t861*t869*t885*var4[39] - 90.*t860*t861*t886*var4[39] + 60.*t798*t885*t886*var4[39] + 25.*t1023*t1051*var4[50] - 20.*t741*t814*var4[50] - 20.*t1081*t814*t860*var4[50] - 80.*t741*t814*t869*var4[50] + 60.*t860*t861*t869*var4[50] - 25.*t1023*t1051*var4[61] + 20.*t741*t814*var4[61];
  p_output1[76]=20.*t798*t885*t911*var4[6] - 5.*t905*t987*var4[6] + 60.*t860*t861*t886*var4[17] - 60.*t798*t885*t911*var4[17] + 5.*t905*t987*var4[17] + 60.*t741*t814*t869*var4[28] - 150.*t860*t861*t886*var4[28] + 40.*t798*t885*t911*var4[28] + 20.*t1023*t1051*var4[39] - 140.*t741*t814*t869*var4[39] + 90.*t860*t861*t886*var4[39] - 45.*t1023*t1051*var4[50] + 80.*t741*t814*t869*var4[50] + 25.*t1023*t1051*var4[61];
  p_output1[77]=-20.*t643*t905*t911*var4[7] - 60.*t643*t798*t885*t886*var4[18] + 40.*t643*t905*t911*var4[18] - 60.*t643*t860*t861*t869*var4[29] + 120.*t643*t798*t885*t886*var4[29] - 20.*t643*t905*t911*var4[29] - 20.*t643*t741*t814*var4[40] + 120.*t643*t860*t861*t869*var4[40] - 60.*t643*t798*t885*t886*var4[40] + 40.*t643*t741*t814*var4[51] - 60.*t643*t860*t861*t869*var4[51] - 20.*t643*t741*t814*var4[62];
  p_output1[78]=-20.*t572*t616*t905*t911*var4[7] - 60.*t572*t616*t798*t885*t886*var4[18] + 40.*t572*t616*t905*t911*var4[18] - 60.*t572*t616*t860*t861*t869*var4[29] + 120.*t572*t616*t798*t885*t886*var4[29] - 20.*t572*t616*t905*t911*var4[29] - 20.*t572*t616*t741*t814*var4[40] + 120.*t572*t616*t860*t861*t869*var4[40] - 60.*t572*t616*t798*t885*t886*var4[40] + 40.*t572*t616*t741*t814*var4[51] - 60.*t572*t616*t860*t861*t869*var4[51] - 20.*t572*t616*t741*t814*var4[62];
  p_output1[79]=1.;
  p_output1[80]=t989;
  p_output1[81]=t997;
  p_output1[82]=t1005;
  p_output1[83]=t1020;
  p_output1[84]=t1030;
  p_output1[85]=t1036;
  p_output1[86]=20.*t1081*t865*t911*var4[7] + 5.*t905*t987*var4[7] + 60.*t1081*t798*t886*t905*var4[18] - 20.*t1081*t865*t911*var4[18] + 40.*t798*t885*t911*var4[18] - 20.*t905*t911*var4[18] - 5.*t905*t987*var4[18] + 60.*t1081*t861*t869*t885*var4[29] + 90.*t860*t861*t886*var4[29] - 60.*t798*t885*t886*var4[29] - 60.*t1081*t798*t886*t905*var4[29] - 40.*t798*t885*t911*var4[29] + 20.*t905*t911*var4[29] + 20.*t1081*t814*t860*var4[40] + 80.*t741*t814*t869*var4[40] - 60.*t860*t861*t869*var4[40] - 60.*t1081*t861*t869*t885*var4[40] - 90.*t860*t861*t886*var4[40] + 60.*t798*t885*t886*var4[40] + 25.*t1023*t1051*var4[51] - 20.*t741*t814*var4[51] - 20.*t1081*t814*t860*var4[51] - 80.*t741*t814*t869*var4[51] + 60.*t860*t861*t869*var4[51] - 25.*t1023*t1051*var4[62] + 20.*t741*t814*var4[62];
  p_output1[87]=20.*t798*t885*t911*var4[7] - 5.*t905*t987*var4[7] + 60.*t860*t861*t886*var4[18] - 60.*t798*t885*t911*var4[18] + 5.*t905*t987*var4[18] + 60.*t741*t814*t869*var4[29] - 150.*t860*t861*t886*var4[29] + 40.*t798*t885*t911*var4[29] + 20.*t1023*t1051*var4[40] - 140.*t741*t814*t869*var4[40] + 90.*t860*t861*t886*var4[40] - 45.*t1023*t1051*var4[51] + 80.*t741*t814*t869*var4[51] + 25.*t1023*t1051*var4[62];
  p_output1[88]=-20.*t643*t905*t911*var4[8] - 60.*t643*t798*t885*t886*var4[19] + 40.*t643*t905*t911*var4[19] - 60.*t643*t860*t861*t869*var4[30] + 120.*t643*t798*t885*t886*var4[30] - 20.*t643*t905*t911*var4[30] - 20.*t643*t741*t814*var4[41] + 120.*t643*t860*t861*t869*var4[41] - 60.*t643*t798*t885*t886*var4[41] + 40.*t643*t741*t814*var4[52] - 60.*t643*t860*t861*t869*var4[52] - 20.*t643*t741*t814*var4[63];
  p_output1[89]=-20.*t572*t616*t905*t911*var4[8] - 60.*t572*t616*t798*t885*t886*var4[19] + 40.*t572*t616*t905*t911*var4[19] - 60.*t572*t616*t860*t861*t869*var4[30] + 120.*t572*t616*t798*t885*t886*var4[30] - 20.*t572*t616*t905*t911*var4[30] - 20.*t572*t616*t741*t814*var4[41] + 120.*t572*t616*t860*t861*t869*var4[41] - 60.*t572*t616*t798*t885*t886*var4[41] + 40.*t572*t616*t741*t814*var4[52] - 60.*t572*t616*t860*t861*t869*var4[52] - 20.*t572*t616*t741*t814*var4[63];
  p_output1[90]=1.;
  p_output1[91]=t989;
  p_output1[92]=t997;
  p_output1[93]=t1005;
  p_output1[94]=t1020;
  p_output1[95]=t1030;
  p_output1[96]=t1036;
  p_output1[97]=20.*t1081*t865*t911*var4[8] + 5.*t905*t987*var4[8] + 60.*t1081*t798*t886*t905*var4[19] - 20.*t1081*t865*t911*var4[19] + 40.*t798*t885*t911*var4[19] - 20.*t905*t911*var4[19] - 5.*t905*t987*var4[19] + 60.*t1081*t861*t869*t885*var4[30] + 90.*t860*t861*t886*var4[30] - 60.*t798*t885*t886*var4[30] - 60.*t1081*t798*t886*t905*var4[30] - 40.*t798*t885*t911*var4[30] + 20.*t905*t911*var4[30] + 20.*t1081*t814*t860*var4[41] + 80.*t741*t814*t869*var4[41] - 60.*t860*t861*t869*var4[41] - 60.*t1081*t861*t869*t885*var4[41] - 90.*t860*t861*t886*var4[41] + 60.*t798*t885*t886*var4[41] + 25.*t1023*t1051*var4[52] - 20.*t741*t814*var4[52] - 20.*t1081*t814*t860*var4[52] - 80.*t741*t814*t869*var4[52] + 60.*t860*t861*t869*var4[52] - 25.*t1023*t1051*var4[63] + 20.*t741*t814*var4[63];
  p_output1[98]=20.*t798*t885*t911*var4[8] - 5.*t905*t987*var4[8] + 60.*t860*t861*t886*var4[19] - 60.*t798*t885*t911*var4[19] + 5.*t905*t987*var4[19] + 60.*t741*t814*t869*var4[30] - 150.*t860*t861*t886*var4[30] + 40.*t798*t885*t911*var4[30] + 20.*t1023*t1051*var4[41] - 140.*t741*t814*t869*var4[41] + 90.*t860*t861*t886*var4[41] - 45.*t1023*t1051*var4[52] + 80.*t741*t814*t869*var4[52] + 25.*t1023*t1051*var4[63];
  p_output1[99]=-20.*t643*t905*t911*var4[9] - 60.*t643*t798*t885*t886*var4[20] + 40.*t643*t905*t911*var4[20] - 60.*t643*t860*t861*t869*var4[31] + 120.*t643*t798*t885*t886*var4[31] - 20.*t643*t905*t911*var4[31] - 20.*t643*t741*t814*var4[42] + 120.*t643*t860*t861*t869*var4[42] - 60.*t643*t798*t885*t886*var4[42] + 40.*t643*t741*t814*var4[53] - 60.*t643*t860*t861*t869*var4[53] - 20.*t643*t741*t814*var4[64];
  p_output1[100]=-20.*t572*t616*t905*t911*var4[9] - 60.*t572*t616*t798*t885*t886*var4[20] + 40.*t572*t616*t905*t911*var4[20] - 60.*t572*t616*t860*t861*t869*var4[31] + 120.*t572*t616*t798*t885*t886*var4[31] - 20.*t572*t616*t905*t911*var4[31] - 20.*t572*t616*t741*t814*var4[42] + 120.*t572*t616*t860*t861*t869*var4[42] - 60.*t572*t616*t798*t885*t886*var4[42] + 40.*t572*t616*t741*t814*var4[53] - 60.*t572*t616*t860*t861*t869*var4[53] - 20.*t572*t616*t741*t814*var4[64];
  p_output1[101]=1.;
  p_output1[102]=t989;
  p_output1[103]=t997;
  p_output1[104]=t1005;
  p_output1[105]=t1020;
  p_output1[106]=t1030;
  p_output1[107]=t1036;
  p_output1[108]=20.*t1081*t865*t911*var4[9] + 5.*t905*t987*var4[9] + 60.*t1081*t798*t886*t905*var4[20] - 20.*t1081*t865*t911*var4[20] + 40.*t798*t885*t911*var4[20] - 20.*t905*t911*var4[20] - 5.*t905*t987*var4[20] + 60.*t1081*t861*t869*t885*var4[31] + 90.*t860*t861*t886*var4[31] - 60.*t798*t885*t886*var4[31] - 60.*t1081*t798*t886*t905*var4[31] - 40.*t798*t885*t911*var4[31] + 20.*t905*t911*var4[31] + 20.*t1081*t814*t860*var4[42] + 80.*t741*t814*t869*var4[42] - 60.*t860*t861*t869*var4[42] - 60.*t1081*t861*t869*t885*var4[42] - 90.*t860*t861*t886*var4[42] + 60.*t798*t885*t886*var4[42] + 25.*t1023*t1051*var4[53] - 20.*t741*t814*var4[53] - 20.*t1081*t814*t860*var4[53] - 80.*t741*t814*t869*var4[53] + 60.*t860*t861*t869*var4[53] - 25.*t1023*t1051*var4[64] + 20.*t741*t814*var4[64];
  p_output1[109]=20.*t798*t885*t911*var4[9] - 5.*t905*t987*var4[9] + 60.*t860*t861*t886*var4[20] - 60.*t798*t885*t911*var4[20] + 5.*t905*t987*var4[20] + 60.*t741*t814*t869*var4[31] - 150.*t860*t861*t886*var4[31] + 40.*t798*t885*t911*var4[31] + 20.*t1023*t1051*var4[42] - 140.*t741*t814*t869*var4[42] + 90.*t860*t861*t886*var4[42] - 45.*t1023*t1051*var4[53] + 80.*t741*t814*t869*var4[53] + 25.*t1023*t1051*var4[64];
  p_output1[110]=-20.*t643*t905*t911*var4[10] - 60.*t643*t798*t885*t886*var4[21] + 40.*t643*t905*t911*var4[21] - 60.*t643*t860*t861*t869*var4[32] + 120.*t643*t798*t885*t886*var4[32] - 20.*t643*t905*t911*var4[32] - 20.*t643*t741*t814*var4[43] + 120.*t643*t860*t861*t869*var4[43] - 60.*t643*t798*t885*t886*var4[43] + 40.*t643*t741*t814*var4[54] - 60.*t643*t860*t861*t869*var4[54] - 20.*t643*t741*t814*var4[65];
  p_output1[111]=-20.*t572*t616*t905*t911*var4[10] - 60.*t572*t616*t798*t885*t886*var4[21] + 40.*t572*t616*t905*t911*var4[21] - 60.*t572*t616*t860*t861*t869*var4[32] + 120.*t572*t616*t798*t885*t886*var4[32] - 20.*t572*t616*t905*t911*var4[32] - 20.*t572*t616*t741*t814*var4[43] + 120.*t572*t616*t860*t861*t869*var4[43] - 60.*t572*t616*t798*t885*t886*var4[43] + 40.*t572*t616*t741*t814*var4[54] - 60.*t572*t616*t860*t861*t869*var4[54] - 20.*t572*t616*t741*t814*var4[65];
  p_output1[112]=1.;
  p_output1[113]=t989;
  p_output1[114]=t997;
  p_output1[115]=t1005;
  p_output1[116]=t1020;
  p_output1[117]=t1030;
  p_output1[118]=t1036;
  p_output1[119]=20.*t1081*t865*t911*var4[10] + 5.*t905*t987*var4[10] + 60.*t1081*t798*t886*t905*var4[21] - 20.*t1081*t865*t911*var4[21] + 40.*t798*t885*t911*var4[21] - 20.*t905*t911*var4[21] - 5.*t905*t987*var4[21] + 60.*t1081*t861*t869*t885*var4[32] + 90.*t860*t861*t886*var4[32] - 60.*t798*t885*t886*var4[32] - 60.*t1081*t798*t886*t905*var4[32] - 40.*t798*t885*t911*var4[32] + 20.*t905*t911*var4[32] + 20.*t1081*t814*t860*var4[43] + 80.*t741*t814*t869*var4[43] - 60.*t860*t861*t869*var4[43] - 60.*t1081*t861*t869*t885*var4[43] - 90.*t860*t861*t886*var4[43] + 60.*t798*t885*t886*var4[43] + 25.*t1023*t1051*var4[54] - 20.*t741*t814*var4[54] - 20.*t1081*t814*t860*var4[54] - 80.*t741*t814*t869*var4[54] + 60.*t860*t861*t869*var4[54] - 25.*t1023*t1051*var4[65] + 20.*t741*t814*var4[65];
  p_output1[120]=20.*t798*t885*t911*var4[10] - 5.*t905*t987*var4[10] + 60.*t860*t861*t886*var4[21] - 60.*t798*t885*t911*var4[21] + 5.*t905*t987*var4[21] + 60.*t741*t814*t869*var4[32] - 150.*t860*t861*t886*var4[32] + 40.*t798*t885*t911*var4[32] + 20.*t1023*t1051*var4[43] - 140.*t741*t814*t869*var4[43] + 90.*t860*t861*t886*var4[43] - 45.*t1023*t1051*var4[54] + 80.*t741*t814*t869*var4[54] + 25.*t1023*t1051*var4[65];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 121, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void J_d1y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
