/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:03 GMT+02:00
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
  double t931;
  double t451;
  double t603;
  double t701;
  double t779;
  double t885;
  double t938;
  double t944;
  double t951;
  double t953;
  double t956;
  double t957;
  double t959;
  double t989;
  double t996;
  double t1013;
  double t1016;
  double t1018;
  double t1032;
  double t1037;
  double t1078;
  double t1230;
  double t1237;
  double t1306;
  double t1953;
  double t2055;
  double t2059;
  double t2020;
  double t1798;
  double t1801;
  double t1890;
  double t1901;
  double t1905;
  double t1931;
  double t1992;
  t931 = -1.*var4[0];
  t451 = -1. + var5[0];
  t603 = -1. + var6[0];
  t701 = 1/t603;
  t779 = -1.*t451*t701;
  t885 = 1. + t779;
  t938 = t931 + var4[1];
  t944 = Power(t938,-5);
  t951 = -1.*var1[0];
  t953 = t951 + var1[1];
  t956 = t451*t701*t953;
  t957 = t931 + var1[0] + t956;
  t959 = Power(t957,4);
  t989 = Power(t938,-4);
  t996 = Power(t957,3);
  t1013 = 1/t938;
  t1016 = -1.*t1013*t957;
  t1018 = 1. + t1016;
  t1032 = Power(t938,-3);
  t1037 = Power(t957,2);
  t1078 = Power(t1018,2);
  t1230 = Power(t938,-2);
  t1237 = Power(t1018,3);
  t1306 = Power(t1018,4);
  t1953 = Power(t957,5);
  t2055 = -1.*t1230*t957;
  t2059 = t1013 + t2055;
  t2020 = Power(t938,-6);
  t1798 = Power(t1018,5);
  t1801 = -1.*t1798;
  t1890 = -5.*t1013*t957*t1306;
  t1901 = -10.*t1230*t1037*t1237;
  t1905 = -10.*t1032*t996*t1078;
  t1931 = -5.*t989*t959*t1018;
  t1992 = -1.*t944*t1953;
  p_output1[0]=5.*t1013*t1306*t885*var3[0] - 5.*t1013*t1306*t885*var3[11] + 20.*t1230*t1237*t885*t957*var3[11] + 30.*t1032*t1037*t1078*t885*var3[22] - 20.*t1230*t1237*t885*t957*var3[22] - 30.*t1032*t1037*t1078*t885*var3[33] + 20.*t1018*t885*t989*t996*var3[33] + 5.*t885*t944*t959*var3[44] - 20.*t1018*t885*t989*t996*var3[44] - 5.*t885*t944*t959*var3[55];
  p_output1[1]=5.*t1013*t1306*t451*t701*var3[0] - 5.*t1013*t1306*t451*t701*var3[11] + 20.*t1230*t1237*t451*t701*t957*var3[11] + 30.*t1032*t1037*t1078*t451*t701*var3[22] - 20.*t1230*t1237*t451*t701*t957*var3[22] - 30.*t1032*t1037*t1078*t451*t701*var3[33] + 20.*t1018*t451*t701*t989*t996*var3[33] + 5.*t451*t701*t944*t959*var3[44] - 20.*t1018*t451*t701*t989*t996*var3[44] - 5.*t451*t701*t944*t959*var3[55];
  p_output1[2]=1.;
  p_output1[3]=t1801;
  p_output1[4]=t1890;
  p_output1[5]=t1901;
  p_output1[6]=t1905;
  p_output1[7]=t1931;
  p_output1[8]=t1992;
  p_output1[9]=-5.*t1306*t2059*var3[0] + 5.*t1013*t1306*var3[11] - 5.*t1230*t1306*t957*var3[11] - 20.*t1013*t1237*t2059*t957*var3[11] - 20.*t1032*t1037*t1237*var3[22] - 30.*t1037*t1078*t1230*t2059*var3[22] + 20.*t1230*t1237*t957*var3[22] + 30.*t1032*t1037*t1078*var3[33] - 20.*t1018*t1032*t2059*t996*var3[33] - 30.*t1078*t989*t996*var3[33] - 20.*t1018*t944*t959*var3[44] - 5.*t2059*t959*t989*var3[44] + 20.*t1018*t989*t996*var3[44] - 5.*t1953*t2020*var3[55] + 5.*t944*t959*var3[55];
  p_output1[10]=-5.*t1230*t1306*t957*var3[0] - 20.*t1032*t1037*t1237*var3[11] + 5.*t1230*t1306*t957*var3[11] + 20.*t1032*t1037*t1237*var3[22] - 30.*t1078*t989*t996*var3[22] - 20.*t1018*t944*t959*var3[33] + 30.*t1078*t989*t996*var3[33] - 5.*t1953*t2020*var3[44] + 20.*t1018*t944*t959*var3[44] + 5.*t1953*t2020*var3[55];
  p_output1[11]=5.*t1013*t1306*t885*var3[1] - 5.*t1013*t1306*t885*var3[12] + 20.*t1230*t1237*t885*t957*var3[12] + 30.*t1032*t1037*t1078*t885*var3[23] - 20.*t1230*t1237*t885*t957*var3[23] - 30.*t1032*t1037*t1078*t885*var3[34] + 20.*t1018*t885*t989*t996*var3[34] + 5.*t885*t944*t959*var3[45] - 20.*t1018*t885*t989*t996*var3[45] - 5.*t885*t944*t959*var3[56];
  p_output1[12]=5.*t1013*t1306*t451*t701*var3[1] - 5.*t1013*t1306*t451*t701*var3[12] + 20.*t1230*t1237*t451*t701*t957*var3[12] + 30.*t1032*t1037*t1078*t451*t701*var3[23] - 20.*t1230*t1237*t451*t701*t957*var3[23] - 30.*t1032*t1037*t1078*t451*t701*var3[34] + 20.*t1018*t451*t701*t989*t996*var3[34] + 5.*t451*t701*t944*t959*var3[45] - 20.*t1018*t451*t701*t989*t996*var3[45] - 5.*t451*t701*t944*t959*var3[56];
  p_output1[13]=1.;
  p_output1[14]=t1801;
  p_output1[15]=t1890;
  p_output1[16]=t1901;
  p_output1[17]=t1905;
  p_output1[18]=t1931;
  p_output1[19]=t1992;
  p_output1[20]=-5.*t1306*t2059*var3[1] + 5.*t1013*t1306*var3[12] - 5.*t1230*t1306*t957*var3[12] - 20.*t1013*t1237*t2059*t957*var3[12] - 20.*t1032*t1037*t1237*var3[23] - 30.*t1037*t1078*t1230*t2059*var3[23] + 20.*t1230*t1237*t957*var3[23] + 30.*t1032*t1037*t1078*var3[34] - 20.*t1018*t1032*t2059*t996*var3[34] - 30.*t1078*t989*t996*var3[34] - 20.*t1018*t944*t959*var3[45] - 5.*t2059*t959*t989*var3[45] + 20.*t1018*t989*t996*var3[45] - 5.*t1953*t2020*var3[56] + 5.*t944*t959*var3[56];
  p_output1[21]=-5.*t1230*t1306*t957*var3[1] - 20.*t1032*t1037*t1237*var3[12] + 5.*t1230*t1306*t957*var3[12] + 20.*t1032*t1037*t1237*var3[23] - 30.*t1078*t989*t996*var3[23] - 20.*t1018*t944*t959*var3[34] + 30.*t1078*t989*t996*var3[34] - 5.*t1953*t2020*var3[45] + 20.*t1018*t944*t959*var3[45] + 5.*t1953*t2020*var3[56];
  p_output1[22]=5.*t1013*t1306*t885*var3[2] - 5.*t1013*t1306*t885*var3[13] + 20.*t1230*t1237*t885*t957*var3[13] + 30.*t1032*t1037*t1078*t885*var3[24] - 20.*t1230*t1237*t885*t957*var3[24] - 30.*t1032*t1037*t1078*t885*var3[35] + 20.*t1018*t885*t989*t996*var3[35] + 5.*t885*t944*t959*var3[46] - 20.*t1018*t885*t989*t996*var3[46] - 5.*t885*t944*t959*var3[57];
  p_output1[23]=5.*t1013*t1306*t451*t701*var3[2] - 5.*t1013*t1306*t451*t701*var3[13] + 20.*t1230*t1237*t451*t701*t957*var3[13] + 30.*t1032*t1037*t1078*t451*t701*var3[24] - 20.*t1230*t1237*t451*t701*t957*var3[24] - 30.*t1032*t1037*t1078*t451*t701*var3[35] + 20.*t1018*t451*t701*t989*t996*var3[35] + 5.*t451*t701*t944*t959*var3[46] - 20.*t1018*t451*t701*t989*t996*var3[46] - 5.*t451*t701*t944*t959*var3[57];
  p_output1[24]=1.;
  p_output1[25]=t1801;
  p_output1[26]=t1890;
  p_output1[27]=t1901;
  p_output1[28]=t1905;
  p_output1[29]=t1931;
  p_output1[30]=t1992;
  p_output1[31]=-5.*t1306*t2059*var3[2] + 5.*t1013*t1306*var3[13] - 5.*t1230*t1306*t957*var3[13] - 20.*t1013*t1237*t2059*t957*var3[13] - 20.*t1032*t1037*t1237*var3[24] - 30.*t1037*t1078*t1230*t2059*var3[24] + 20.*t1230*t1237*t957*var3[24] + 30.*t1032*t1037*t1078*var3[35] - 20.*t1018*t1032*t2059*t996*var3[35] - 30.*t1078*t989*t996*var3[35] - 20.*t1018*t944*t959*var3[46] - 5.*t2059*t959*t989*var3[46] + 20.*t1018*t989*t996*var3[46] - 5.*t1953*t2020*var3[57] + 5.*t944*t959*var3[57];
  p_output1[32]=-5.*t1230*t1306*t957*var3[2] - 20.*t1032*t1037*t1237*var3[13] + 5.*t1230*t1306*t957*var3[13] + 20.*t1032*t1037*t1237*var3[24] - 30.*t1078*t989*t996*var3[24] - 20.*t1018*t944*t959*var3[35] + 30.*t1078*t989*t996*var3[35] - 5.*t1953*t2020*var3[46] + 20.*t1018*t944*t959*var3[46] + 5.*t1953*t2020*var3[57];
  p_output1[33]=5.*t1013*t1306*t885*var3[3] - 5.*t1013*t1306*t885*var3[14] + 20.*t1230*t1237*t885*t957*var3[14] + 30.*t1032*t1037*t1078*t885*var3[25] - 20.*t1230*t1237*t885*t957*var3[25] - 30.*t1032*t1037*t1078*t885*var3[36] + 20.*t1018*t885*t989*t996*var3[36] + 5.*t885*t944*t959*var3[47] - 20.*t1018*t885*t989*t996*var3[47] - 5.*t885*t944*t959*var3[58];
  p_output1[34]=5.*t1013*t1306*t451*t701*var3[3] - 5.*t1013*t1306*t451*t701*var3[14] + 20.*t1230*t1237*t451*t701*t957*var3[14] + 30.*t1032*t1037*t1078*t451*t701*var3[25] - 20.*t1230*t1237*t451*t701*t957*var3[25] - 30.*t1032*t1037*t1078*t451*t701*var3[36] + 20.*t1018*t451*t701*t989*t996*var3[36] + 5.*t451*t701*t944*t959*var3[47] - 20.*t1018*t451*t701*t989*t996*var3[47] - 5.*t451*t701*t944*t959*var3[58];
  p_output1[35]=1.;
  p_output1[36]=t1801;
  p_output1[37]=t1890;
  p_output1[38]=t1901;
  p_output1[39]=t1905;
  p_output1[40]=t1931;
  p_output1[41]=t1992;
  p_output1[42]=-5.*t1306*t2059*var3[3] + 5.*t1013*t1306*var3[14] - 5.*t1230*t1306*t957*var3[14] - 20.*t1013*t1237*t2059*t957*var3[14] - 20.*t1032*t1037*t1237*var3[25] - 30.*t1037*t1078*t1230*t2059*var3[25] + 20.*t1230*t1237*t957*var3[25] + 30.*t1032*t1037*t1078*var3[36] - 20.*t1018*t1032*t2059*t996*var3[36] - 30.*t1078*t989*t996*var3[36] - 20.*t1018*t944*t959*var3[47] - 5.*t2059*t959*t989*var3[47] + 20.*t1018*t989*t996*var3[47] - 5.*t1953*t2020*var3[58] + 5.*t944*t959*var3[58];
  p_output1[43]=-5.*t1230*t1306*t957*var3[3] - 20.*t1032*t1037*t1237*var3[14] + 5.*t1230*t1306*t957*var3[14] + 20.*t1032*t1037*t1237*var3[25] - 30.*t1078*t989*t996*var3[25] - 20.*t1018*t944*t959*var3[36] + 30.*t1078*t989*t996*var3[36] - 5.*t1953*t2020*var3[47] + 20.*t1018*t944*t959*var3[47] + 5.*t1953*t2020*var3[58];
  p_output1[44]=5.*t1013*t1306*t885*var3[4] - 5.*t1013*t1306*t885*var3[15] + 20.*t1230*t1237*t885*t957*var3[15] + 30.*t1032*t1037*t1078*t885*var3[26] - 20.*t1230*t1237*t885*t957*var3[26] - 30.*t1032*t1037*t1078*t885*var3[37] + 20.*t1018*t885*t989*t996*var3[37] + 5.*t885*t944*t959*var3[48] - 20.*t1018*t885*t989*t996*var3[48] - 5.*t885*t944*t959*var3[59];
  p_output1[45]=5.*t1013*t1306*t451*t701*var3[4] - 5.*t1013*t1306*t451*t701*var3[15] + 20.*t1230*t1237*t451*t701*t957*var3[15] + 30.*t1032*t1037*t1078*t451*t701*var3[26] - 20.*t1230*t1237*t451*t701*t957*var3[26] - 30.*t1032*t1037*t1078*t451*t701*var3[37] + 20.*t1018*t451*t701*t989*t996*var3[37] + 5.*t451*t701*t944*t959*var3[48] - 20.*t1018*t451*t701*t989*t996*var3[48] - 5.*t451*t701*t944*t959*var3[59];
  p_output1[46]=1.;
  p_output1[47]=t1801;
  p_output1[48]=t1890;
  p_output1[49]=t1901;
  p_output1[50]=t1905;
  p_output1[51]=t1931;
  p_output1[52]=t1992;
  p_output1[53]=-5.*t1306*t2059*var3[4] + 5.*t1013*t1306*var3[15] - 5.*t1230*t1306*t957*var3[15] - 20.*t1013*t1237*t2059*t957*var3[15] - 20.*t1032*t1037*t1237*var3[26] - 30.*t1037*t1078*t1230*t2059*var3[26] + 20.*t1230*t1237*t957*var3[26] + 30.*t1032*t1037*t1078*var3[37] - 20.*t1018*t1032*t2059*t996*var3[37] - 30.*t1078*t989*t996*var3[37] - 20.*t1018*t944*t959*var3[48] - 5.*t2059*t959*t989*var3[48] + 20.*t1018*t989*t996*var3[48] - 5.*t1953*t2020*var3[59] + 5.*t944*t959*var3[59];
  p_output1[54]=-5.*t1230*t1306*t957*var3[4] - 20.*t1032*t1037*t1237*var3[15] + 5.*t1230*t1306*t957*var3[15] + 20.*t1032*t1037*t1237*var3[26] - 30.*t1078*t989*t996*var3[26] - 20.*t1018*t944*t959*var3[37] + 30.*t1078*t989*t996*var3[37] - 5.*t1953*t2020*var3[48] + 20.*t1018*t944*t959*var3[48] + 5.*t1953*t2020*var3[59];
  p_output1[55]=5.*t1013*t1306*t885*var3[5] - 5.*t1013*t1306*t885*var3[16] + 20.*t1230*t1237*t885*t957*var3[16] + 30.*t1032*t1037*t1078*t885*var3[27] - 20.*t1230*t1237*t885*t957*var3[27] - 30.*t1032*t1037*t1078*t885*var3[38] + 20.*t1018*t885*t989*t996*var3[38] + 5.*t885*t944*t959*var3[49] - 20.*t1018*t885*t989*t996*var3[49] - 5.*t885*t944*t959*var3[60];
  p_output1[56]=5.*t1013*t1306*t451*t701*var3[5] - 5.*t1013*t1306*t451*t701*var3[16] + 20.*t1230*t1237*t451*t701*t957*var3[16] + 30.*t1032*t1037*t1078*t451*t701*var3[27] - 20.*t1230*t1237*t451*t701*t957*var3[27] - 30.*t1032*t1037*t1078*t451*t701*var3[38] + 20.*t1018*t451*t701*t989*t996*var3[38] + 5.*t451*t701*t944*t959*var3[49] - 20.*t1018*t451*t701*t989*t996*var3[49] - 5.*t451*t701*t944*t959*var3[60];
  p_output1[57]=1.;
  p_output1[58]=t1801;
  p_output1[59]=t1890;
  p_output1[60]=t1901;
  p_output1[61]=t1905;
  p_output1[62]=t1931;
  p_output1[63]=t1992;
  p_output1[64]=-5.*t1306*t2059*var3[5] + 5.*t1013*t1306*var3[16] - 5.*t1230*t1306*t957*var3[16] - 20.*t1013*t1237*t2059*t957*var3[16] - 20.*t1032*t1037*t1237*var3[27] - 30.*t1037*t1078*t1230*t2059*var3[27] + 20.*t1230*t1237*t957*var3[27] + 30.*t1032*t1037*t1078*var3[38] - 20.*t1018*t1032*t2059*t996*var3[38] - 30.*t1078*t989*t996*var3[38] - 20.*t1018*t944*t959*var3[49] - 5.*t2059*t959*t989*var3[49] + 20.*t1018*t989*t996*var3[49] - 5.*t1953*t2020*var3[60] + 5.*t944*t959*var3[60];
  p_output1[65]=-5.*t1230*t1306*t957*var3[5] - 20.*t1032*t1037*t1237*var3[16] + 5.*t1230*t1306*t957*var3[16] + 20.*t1032*t1037*t1237*var3[27] - 30.*t1078*t989*t996*var3[27] - 20.*t1018*t944*t959*var3[38] + 30.*t1078*t989*t996*var3[38] - 5.*t1953*t2020*var3[49] + 20.*t1018*t944*t959*var3[49] + 5.*t1953*t2020*var3[60];
  p_output1[66]=5.*t1013*t1306*t885*var3[6] - 5.*t1013*t1306*t885*var3[17] + 20.*t1230*t1237*t885*t957*var3[17] + 30.*t1032*t1037*t1078*t885*var3[28] - 20.*t1230*t1237*t885*t957*var3[28] - 30.*t1032*t1037*t1078*t885*var3[39] + 20.*t1018*t885*t989*t996*var3[39] + 5.*t885*t944*t959*var3[50] - 20.*t1018*t885*t989*t996*var3[50] - 5.*t885*t944*t959*var3[61];
  p_output1[67]=5.*t1013*t1306*t451*t701*var3[6] - 5.*t1013*t1306*t451*t701*var3[17] + 20.*t1230*t1237*t451*t701*t957*var3[17] + 30.*t1032*t1037*t1078*t451*t701*var3[28] - 20.*t1230*t1237*t451*t701*t957*var3[28] - 30.*t1032*t1037*t1078*t451*t701*var3[39] + 20.*t1018*t451*t701*t989*t996*var3[39] + 5.*t451*t701*t944*t959*var3[50] - 20.*t1018*t451*t701*t989*t996*var3[50] - 5.*t451*t701*t944*t959*var3[61];
  p_output1[68]=1.;
  p_output1[69]=t1801;
  p_output1[70]=t1890;
  p_output1[71]=t1901;
  p_output1[72]=t1905;
  p_output1[73]=t1931;
  p_output1[74]=t1992;
  p_output1[75]=-5.*t1306*t2059*var3[6] + 5.*t1013*t1306*var3[17] - 5.*t1230*t1306*t957*var3[17] - 20.*t1013*t1237*t2059*t957*var3[17] - 20.*t1032*t1037*t1237*var3[28] - 30.*t1037*t1078*t1230*t2059*var3[28] + 20.*t1230*t1237*t957*var3[28] + 30.*t1032*t1037*t1078*var3[39] - 20.*t1018*t1032*t2059*t996*var3[39] - 30.*t1078*t989*t996*var3[39] - 20.*t1018*t944*t959*var3[50] - 5.*t2059*t959*t989*var3[50] + 20.*t1018*t989*t996*var3[50] - 5.*t1953*t2020*var3[61] + 5.*t944*t959*var3[61];
  p_output1[76]=-5.*t1230*t1306*t957*var3[6] - 20.*t1032*t1037*t1237*var3[17] + 5.*t1230*t1306*t957*var3[17] + 20.*t1032*t1037*t1237*var3[28] - 30.*t1078*t989*t996*var3[28] - 20.*t1018*t944*t959*var3[39] + 30.*t1078*t989*t996*var3[39] - 5.*t1953*t2020*var3[50] + 20.*t1018*t944*t959*var3[50] + 5.*t1953*t2020*var3[61];
  p_output1[77]=5.*t1013*t1306*t885*var3[7] - 5.*t1013*t1306*t885*var3[18] + 20.*t1230*t1237*t885*t957*var3[18] + 30.*t1032*t1037*t1078*t885*var3[29] - 20.*t1230*t1237*t885*t957*var3[29] - 30.*t1032*t1037*t1078*t885*var3[40] + 20.*t1018*t885*t989*t996*var3[40] + 5.*t885*t944*t959*var3[51] - 20.*t1018*t885*t989*t996*var3[51] - 5.*t885*t944*t959*var3[62];
  p_output1[78]=5.*t1013*t1306*t451*t701*var3[7] - 5.*t1013*t1306*t451*t701*var3[18] + 20.*t1230*t1237*t451*t701*t957*var3[18] + 30.*t1032*t1037*t1078*t451*t701*var3[29] - 20.*t1230*t1237*t451*t701*t957*var3[29] - 30.*t1032*t1037*t1078*t451*t701*var3[40] + 20.*t1018*t451*t701*t989*t996*var3[40] + 5.*t451*t701*t944*t959*var3[51] - 20.*t1018*t451*t701*t989*t996*var3[51] - 5.*t451*t701*t944*t959*var3[62];
  p_output1[79]=1.;
  p_output1[80]=t1801;
  p_output1[81]=t1890;
  p_output1[82]=t1901;
  p_output1[83]=t1905;
  p_output1[84]=t1931;
  p_output1[85]=t1992;
  p_output1[86]=-5.*t1306*t2059*var3[7] + 5.*t1013*t1306*var3[18] - 5.*t1230*t1306*t957*var3[18] - 20.*t1013*t1237*t2059*t957*var3[18] - 20.*t1032*t1037*t1237*var3[29] - 30.*t1037*t1078*t1230*t2059*var3[29] + 20.*t1230*t1237*t957*var3[29] + 30.*t1032*t1037*t1078*var3[40] - 20.*t1018*t1032*t2059*t996*var3[40] - 30.*t1078*t989*t996*var3[40] - 20.*t1018*t944*t959*var3[51] - 5.*t2059*t959*t989*var3[51] + 20.*t1018*t989*t996*var3[51] - 5.*t1953*t2020*var3[62] + 5.*t944*t959*var3[62];
  p_output1[87]=-5.*t1230*t1306*t957*var3[7] - 20.*t1032*t1037*t1237*var3[18] + 5.*t1230*t1306*t957*var3[18] + 20.*t1032*t1037*t1237*var3[29] - 30.*t1078*t989*t996*var3[29] - 20.*t1018*t944*t959*var3[40] + 30.*t1078*t989*t996*var3[40] - 5.*t1953*t2020*var3[51] + 20.*t1018*t944*t959*var3[51] + 5.*t1953*t2020*var3[62];
  p_output1[88]=5.*t1013*t1306*t885*var3[8] - 5.*t1013*t1306*t885*var3[19] + 20.*t1230*t1237*t885*t957*var3[19] + 30.*t1032*t1037*t1078*t885*var3[30] - 20.*t1230*t1237*t885*t957*var3[30] - 30.*t1032*t1037*t1078*t885*var3[41] + 20.*t1018*t885*t989*t996*var3[41] + 5.*t885*t944*t959*var3[52] - 20.*t1018*t885*t989*t996*var3[52] - 5.*t885*t944*t959*var3[63];
  p_output1[89]=5.*t1013*t1306*t451*t701*var3[8] - 5.*t1013*t1306*t451*t701*var3[19] + 20.*t1230*t1237*t451*t701*t957*var3[19] + 30.*t1032*t1037*t1078*t451*t701*var3[30] - 20.*t1230*t1237*t451*t701*t957*var3[30] - 30.*t1032*t1037*t1078*t451*t701*var3[41] + 20.*t1018*t451*t701*t989*t996*var3[41] + 5.*t451*t701*t944*t959*var3[52] - 20.*t1018*t451*t701*t989*t996*var3[52] - 5.*t451*t701*t944*t959*var3[63];
  p_output1[90]=1.;
  p_output1[91]=t1801;
  p_output1[92]=t1890;
  p_output1[93]=t1901;
  p_output1[94]=t1905;
  p_output1[95]=t1931;
  p_output1[96]=t1992;
  p_output1[97]=-5.*t1306*t2059*var3[8] + 5.*t1013*t1306*var3[19] - 5.*t1230*t1306*t957*var3[19] - 20.*t1013*t1237*t2059*t957*var3[19] - 20.*t1032*t1037*t1237*var3[30] - 30.*t1037*t1078*t1230*t2059*var3[30] + 20.*t1230*t1237*t957*var3[30] + 30.*t1032*t1037*t1078*var3[41] - 20.*t1018*t1032*t2059*t996*var3[41] - 30.*t1078*t989*t996*var3[41] - 20.*t1018*t944*t959*var3[52] - 5.*t2059*t959*t989*var3[52] + 20.*t1018*t989*t996*var3[52] - 5.*t1953*t2020*var3[63] + 5.*t944*t959*var3[63];
  p_output1[98]=-5.*t1230*t1306*t957*var3[8] - 20.*t1032*t1037*t1237*var3[19] + 5.*t1230*t1306*t957*var3[19] + 20.*t1032*t1037*t1237*var3[30] - 30.*t1078*t989*t996*var3[30] - 20.*t1018*t944*t959*var3[41] + 30.*t1078*t989*t996*var3[41] - 5.*t1953*t2020*var3[52] + 20.*t1018*t944*t959*var3[52] + 5.*t1953*t2020*var3[63];
  p_output1[99]=5.*t1013*t1306*t885*var3[9] - 5.*t1013*t1306*t885*var3[20] + 20.*t1230*t1237*t885*t957*var3[20] + 30.*t1032*t1037*t1078*t885*var3[31] - 20.*t1230*t1237*t885*t957*var3[31] - 30.*t1032*t1037*t1078*t885*var3[42] + 20.*t1018*t885*t989*t996*var3[42] + 5.*t885*t944*t959*var3[53] - 20.*t1018*t885*t989*t996*var3[53] - 5.*t885*t944*t959*var3[64];
  p_output1[100]=5.*t1013*t1306*t451*t701*var3[9] - 5.*t1013*t1306*t451*t701*var3[20] + 20.*t1230*t1237*t451*t701*t957*var3[20] + 30.*t1032*t1037*t1078*t451*t701*var3[31] - 20.*t1230*t1237*t451*t701*t957*var3[31] - 30.*t1032*t1037*t1078*t451*t701*var3[42] + 20.*t1018*t451*t701*t989*t996*var3[42] + 5.*t451*t701*t944*t959*var3[53] - 20.*t1018*t451*t701*t989*t996*var3[53] - 5.*t451*t701*t944*t959*var3[64];
  p_output1[101]=1.;
  p_output1[102]=t1801;
  p_output1[103]=t1890;
  p_output1[104]=t1901;
  p_output1[105]=t1905;
  p_output1[106]=t1931;
  p_output1[107]=t1992;
  p_output1[108]=-5.*t1306*t2059*var3[9] + 5.*t1013*t1306*var3[20] - 5.*t1230*t1306*t957*var3[20] - 20.*t1013*t1237*t2059*t957*var3[20] - 20.*t1032*t1037*t1237*var3[31] - 30.*t1037*t1078*t1230*t2059*var3[31] + 20.*t1230*t1237*t957*var3[31] + 30.*t1032*t1037*t1078*var3[42] - 20.*t1018*t1032*t2059*t996*var3[42] - 30.*t1078*t989*t996*var3[42] - 20.*t1018*t944*t959*var3[53] - 5.*t2059*t959*t989*var3[53] + 20.*t1018*t989*t996*var3[53] - 5.*t1953*t2020*var3[64] + 5.*t944*t959*var3[64];
  p_output1[109]=-5.*t1230*t1306*t957*var3[9] - 20.*t1032*t1037*t1237*var3[20] + 5.*t1230*t1306*t957*var3[20] + 20.*t1032*t1037*t1237*var3[31] - 30.*t1078*t989*t996*var3[31] - 20.*t1018*t944*t959*var3[42] + 30.*t1078*t989*t996*var3[42] - 5.*t1953*t2020*var3[53] + 20.*t1018*t944*t959*var3[53] + 5.*t1953*t2020*var3[64];
  p_output1[110]=5.*t1013*t1306*t885*var3[10] - 5.*t1013*t1306*t885*var3[21] + 20.*t1230*t1237*t885*t957*var3[21] + 30.*t1032*t1037*t1078*t885*var3[32] - 20.*t1230*t1237*t885*t957*var3[32] - 30.*t1032*t1037*t1078*t885*var3[43] + 20.*t1018*t885*t989*t996*var3[43] + 5.*t885*t944*t959*var3[54] - 20.*t1018*t885*t989*t996*var3[54] - 5.*t885*t944*t959*var3[65];
  p_output1[111]=5.*t1013*t1306*t451*t701*var3[10] - 5.*t1013*t1306*t451*t701*var3[21] + 20.*t1230*t1237*t451*t701*t957*var3[21] + 30.*t1032*t1037*t1078*t451*t701*var3[32] - 20.*t1230*t1237*t451*t701*t957*var3[32] - 30.*t1032*t1037*t1078*t451*t701*var3[43] + 20.*t1018*t451*t701*t989*t996*var3[43] + 5.*t451*t701*t944*t959*var3[54] - 20.*t1018*t451*t701*t989*t996*var3[54] - 5.*t451*t701*t944*t959*var3[65];
  p_output1[112]=1.;
  p_output1[113]=t1801;
  p_output1[114]=t1890;
  p_output1[115]=t1901;
  p_output1[116]=t1905;
  p_output1[117]=t1931;
  p_output1[118]=t1992;
  p_output1[119]=-5.*t1306*t2059*var3[10] + 5.*t1013*t1306*var3[21] - 5.*t1230*t1306*t957*var3[21] - 20.*t1013*t1237*t2059*t957*var3[21] - 20.*t1032*t1037*t1237*var3[32] - 30.*t1037*t1078*t1230*t2059*var3[32] + 20.*t1230*t1237*t957*var3[32] + 30.*t1032*t1037*t1078*var3[43] - 20.*t1018*t1032*t2059*t996*var3[43] - 30.*t1078*t989*t996*var3[43] - 20.*t1018*t944*t959*var3[54] - 5.*t2059*t959*t989*var3[54] + 20.*t1018*t989*t996*var3[54] - 5.*t1953*t2020*var3[65] + 5.*t944*t959*var3[65];
  p_output1[120]=-5.*t1230*t1306*t957*var3[10] - 20.*t1032*t1037*t1237*var3[21] + 5.*t1230*t1306*t957*var3[21] + 20.*t1032*t1037*t1237*var3[32] - 30.*t1078*t989*t996*var3[32] - 20.*t1018*t944*t959*var3[43] + 30.*t1078*t989*t996*var3[43] - 5.*t1953*t2020*var3[54] + 20.*t1018*t944*t959*var3[54] + 5.*t1953*t2020*var3[65];
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
