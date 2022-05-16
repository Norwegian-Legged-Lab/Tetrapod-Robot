/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:47 GMT+02:00
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
  double t1011;
  double t445;
  double t526;
  double t555;
  double t858;
  double t915;
  double t1034;
  double t1358;
  double t1375;
  double t1440;
  double t1441;
  double t1445;
  double t1464;
  double t1589;
  double t1673;
  double t1695;
  double t1734;
  double t1790;
  double t2319;
  double t3141;
  double t3519;
  double t3565;
  double t4002;
  double t4534;
  double t4952;
  double t5041;
  double t5060;
  double t4026;
  double t4068;
  double t4165;
  double t4220;
  double t4263;
  double t4264;
  double t4297;
  double t4322;
  double t4349;
  double t4378;
  double t4643;
  double t4680;
  double t4777;
  double t4791;
  t1011 = -1.*var5[0];
  t445 = -1. + var6[0];
  t526 = -1. + var7[0];
  t555 = 1/t526;
  t858 = -1.*t445*t555;
  t915 = 1. + t858;
  t1034 = t1011 + var5[1];
  t1358 = Power(t1034,-5);
  t1375 = -1.*var1[0];
  t1440 = t1375 + var1[1];
  t1441 = t445*t555*t1440;
  t1445 = t1011 + var1[0] + t1441;
  t1464 = Power(t1445,3);
  t1589 = Power(t1034,-4);
  t1673 = Power(t1445,2);
  t1695 = 1/t1034;
  t1734 = -1.*t1695*t1445;
  t1790 = 1. + t1734;
  t2319 = Power(t1034,-3);
  t3141 = Power(t1790,2);
  t3519 = Power(t1034,-2);
  t3565 = Power(t1790,3);
  t4002 = Power(t1790,4);
  t4534 = Power(t1445,4);
  t4952 = Power(t1034,-6);
  t5041 = -1.*t3519*t1445;
  t5060 = t1695 + t5041;
  t4026 = 5.*t1695*t4002;
  t4068 = 20.*t3519*t1445*t3565;
  t4165 = -5.*t1695*t4002;
  t4220 = t4068 + t4165;
  t4263 = 30.*t2319*t1673*t3141;
  t4264 = -20.*t3519*t1445*t3565;
  t4297 = t4263 + t4264;
  t4322 = 20.*t1589*t1464*t1790;
  t4349 = -30.*t2319*t1673*t3141;
  t4378 = t4322 + t4349;
  t4643 = 5.*t1358*t4534;
  t4680 = -20.*t1589*t1464*t1790;
  t4777 = t4643 + t4680;
  t4791 = -5.*t1358*t4534;
  p_output1[0]=-20.*t3519*t3565*t915*var4[0] - 60.*t1445*t2319*t3141*t915*var4[11] + 40.*t3519*t3565*t915*var4[11] - 60.*t1589*t1673*t1790*t915*var4[22] + 120.*t1445*t2319*t3141*t915*var4[22] - 20.*t3519*t3565*t915*var4[22] - 20.*t1358*t1464*t915*var4[33] + 120.*t1589*t1673*t1790*t915*var4[33] - 60.*t1445*t2319*t3141*t915*var4[33] + 40.*t1358*t1464*t915*var4[44] - 60.*t1589*t1673*t1790*t915*var4[44] - 20.*t1358*t1464*t915*var4[55];
  p_output1[1]=-20.*t3519*t3565*t445*t555*var4[0] - 60.*t1445*t2319*t3141*t445*t555*var4[11] + 40.*t3519*t3565*t445*t555*var4[11] - 60.*t1589*t1673*t1790*t445*t555*var4[22] + 120.*t1445*t2319*t3141*t445*t555*var4[22] - 20.*t3519*t3565*t445*t555*var4[22] - 20.*t1358*t1464*t445*t555*var4[33] + 120.*t1589*t1673*t1790*t445*t555*var4[33] - 60.*t1445*t2319*t3141*t445*t555*var4[33] + 40.*t1358*t1464*t445*t555*var4[44] - 60.*t1589*t1673*t1790*t445*t555*var4[44] - 20.*t1358*t1464*t445*t555*var4[55];
  p_output1[2]=1.;
  p_output1[3]=t4026;
  p_output1[4]=t4220;
  p_output1[5]=t4297;
  p_output1[6]=t4378;
  p_output1[7]=t4777;
  p_output1[8]=t4791;
  p_output1[9]=5.*t3519*t4002*var4[0] + 20.*t1695*t3565*t5060*var4[0] + 40.*t1445*t2319*t3565*var4[11] - 20.*t3519*t3565*var4[11] - 5.*t3519*t4002*var4[11] + 60.*t1445*t3141*t3519*t5060*var4[11] - 20.*t1695*t3565*t5060*var4[11] + 90.*t1589*t1673*t3141*var4[22] - 60.*t1445*t2319*t3141*var4[22] - 40.*t1445*t2319*t3565*var4[22] + 20.*t3519*t3565*var4[22] + 60.*t1673*t1790*t2319*t5060*var4[22] - 60.*t1445*t3141*t3519*t5060*var4[22] + 80.*t1358*t1464*t1790*var4[33] - 60.*t1589*t1673*t1790*var4[33] - 90.*t1589*t1673*t3141*var4[33] + 60.*t1445*t2319*t3141*var4[33] + 20.*t1464*t1589*t5060*var4[33] - 60.*t1673*t1790*t2319*t5060*var4[33] - 20.*t1358*t1464*var4[44] - 80.*t1358*t1464*t1790*var4[44] + 60.*t1589*t1673*t1790*var4[44] + 25.*t4534*t4952*var4[44] - 20.*t1464*t1589*t5060*var4[44] + 20.*t1358*t1464*var4[55] - 25.*t4534*t4952*var4[55];
  p_output1[10]=20.*t1445*t2319*t3565*var4[0] - 5.*t3519*t4002*var4[0] + 60.*t1589*t1673*t3141*var4[11] - 60.*t1445*t2319*t3565*var4[11] + 5.*t3519*t4002*var4[11] + 60.*t1358*t1464*t1790*var4[22] - 150.*t1589*t1673*t3141*var4[22] + 40.*t1445*t2319*t3565*var4[22] - 140.*t1358*t1464*t1790*var4[33] + 90.*t1589*t1673*t3141*var4[33] + 20.*t4534*t4952*var4[33] + 80.*t1358*t1464*t1790*var4[44] - 45.*t4534*t4952*var4[44] + 25.*t4534*t4952*var4[55];
  p_output1[11]=-20.*t3519*t3565*t915*var4[1] - 60.*t1445*t2319*t3141*t915*var4[12] + 40.*t3519*t3565*t915*var4[12] - 60.*t1589*t1673*t1790*t915*var4[23] + 120.*t1445*t2319*t3141*t915*var4[23] - 20.*t3519*t3565*t915*var4[23] - 20.*t1358*t1464*t915*var4[34] + 120.*t1589*t1673*t1790*t915*var4[34] - 60.*t1445*t2319*t3141*t915*var4[34] + 40.*t1358*t1464*t915*var4[45] - 60.*t1589*t1673*t1790*t915*var4[45] - 20.*t1358*t1464*t915*var4[56];
  p_output1[12]=-20.*t3519*t3565*t445*t555*var4[1] - 60.*t1445*t2319*t3141*t445*t555*var4[12] + 40.*t3519*t3565*t445*t555*var4[12] - 60.*t1589*t1673*t1790*t445*t555*var4[23] + 120.*t1445*t2319*t3141*t445*t555*var4[23] - 20.*t3519*t3565*t445*t555*var4[23] - 20.*t1358*t1464*t445*t555*var4[34] + 120.*t1589*t1673*t1790*t445*t555*var4[34] - 60.*t1445*t2319*t3141*t445*t555*var4[34] + 40.*t1358*t1464*t445*t555*var4[45] - 60.*t1589*t1673*t1790*t445*t555*var4[45] - 20.*t1358*t1464*t445*t555*var4[56];
  p_output1[13]=1.;
  p_output1[14]=t4026;
  p_output1[15]=t4220;
  p_output1[16]=t4297;
  p_output1[17]=t4378;
  p_output1[18]=t4777;
  p_output1[19]=t4791;
  p_output1[20]=5.*t3519*t4002*var4[1] + 20.*t1695*t3565*t5060*var4[1] + 40.*t1445*t2319*t3565*var4[12] - 20.*t3519*t3565*var4[12] - 5.*t3519*t4002*var4[12] + 60.*t1445*t3141*t3519*t5060*var4[12] - 20.*t1695*t3565*t5060*var4[12] + 90.*t1589*t1673*t3141*var4[23] - 60.*t1445*t2319*t3141*var4[23] - 40.*t1445*t2319*t3565*var4[23] + 20.*t3519*t3565*var4[23] + 60.*t1673*t1790*t2319*t5060*var4[23] - 60.*t1445*t3141*t3519*t5060*var4[23] + 80.*t1358*t1464*t1790*var4[34] - 60.*t1589*t1673*t1790*var4[34] - 90.*t1589*t1673*t3141*var4[34] + 60.*t1445*t2319*t3141*var4[34] + 20.*t1464*t1589*t5060*var4[34] - 60.*t1673*t1790*t2319*t5060*var4[34] - 20.*t1358*t1464*var4[45] - 80.*t1358*t1464*t1790*var4[45] + 60.*t1589*t1673*t1790*var4[45] + 25.*t4534*t4952*var4[45] - 20.*t1464*t1589*t5060*var4[45] + 20.*t1358*t1464*var4[56] - 25.*t4534*t4952*var4[56];
  p_output1[21]=20.*t1445*t2319*t3565*var4[1] - 5.*t3519*t4002*var4[1] + 60.*t1589*t1673*t3141*var4[12] - 60.*t1445*t2319*t3565*var4[12] + 5.*t3519*t4002*var4[12] + 60.*t1358*t1464*t1790*var4[23] - 150.*t1589*t1673*t3141*var4[23] + 40.*t1445*t2319*t3565*var4[23] - 140.*t1358*t1464*t1790*var4[34] + 90.*t1589*t1673*t3141*var4[34] + 20.*t4534*t4952*var4[34] + 80.*t1358*t1464*t1790*var4[45] - 45.*t4534*t4952*var4[45] + 25.*t4534*t4952*var4[56];
  p_output1[22]=-20.*t3519*t3565*t915*var4[2] - 60.*t1445*t2319*t3141*t915*var4[13] + 40.*t3519*t3565*t915*var4[13] - 60.*t1589*t1673*t1790*t915*var4[24] + 120.*t1445*t2319*t3141*t915*var4[24] - 20.*t3519*t3565*t915*var4[24] - 20.*t1358*t1464*t915*var4[35] + 120.*t1589*t1673*t1790*t915*var4[35] - 60.*t1445*t2319*t3141*t915*var4[35] + 40.*t1358*t1464*t915*var4[46] - 60.*t1589*t1673*t1790*t915*var4[46] - 20.*t1358*t1464*t915*var4[57];
  p_output1[23]=-20.*t3519*t3565*t445*t555*var4[2] - 60.*t1445*t2319*t3141*t445*t555*var4[13] + 40.*t3519*t3565*t445*t555*var4[13] - 60.*t1589*t1673*t1790*t445*t555*var4[24] + 120.*t1445*t2319*t3141*t445*t555*var4[24] - 20.*t3519*t3565*t445*t555*var4[24] - 20.*t1358*t1464*t445*t555*var4[35] + 120.*t1589*t1673*t1790*t445*t555*var4[35] - 60.*t1445*t2319*t3141*t445*t555*var4[35] + 40.*t1358*t1464*t445*t555*var4[46] - 60.*t1589*t1673*t1790*t445*t555*var4[46] - 20.*t1358*t1464*t445*t555*var4[57];
  p_output1[24]=1.;
  p_output1[25]=t4026;
  p_output1[26]=t4220;
  p_output1[27]=t4297;
  p_output1[28]=t4378;
  p_output1[29]=t4777;
  p_output1[30]=t4791;
  p_output1[31]=5.*t3519*t4002*var4[2] + 20.*t1695*t3565*t5060*var4[2] + 40.*t1445*t2319*t3565*var4[13] - 20.*t3519*t3565*var4[13] - 5.*t3519*t4002*var4[13] + 60.*t1445*t3141*t3519*t5060*var4[13] - 20.*t1695*t3565*t5060*var4[13] + 90.*t1589*t1673*t3141*var4[24] - 60.*t1445*t2319*t3141*var4[24] - 40.*t1445*t2319*t3565*var4[24] + 20.*t3519*t3565*var4[24] + 60.*t1673*t1790*t2319*t5060*var4[24] - 60.*t1445*t3141*t3519*t5060*var4[24] + 80.*t1358*t1464*t1790*var4[35] - 60.*t1589*t1673*t1790*var4[35] - 90.*t1589*t1673*t3141*var4[35] + 60.*t1445*t2319*t3141*var4[35] + 20.*t1464*t1589*t5060*var4[35] - 60.*t1673*t1790*t2319*t5060*var4[35] - 20.*t1358*t1464*var4[46] - 80.*t1358*t1464*t1790*var4[46] + 60.*t1589*t1673*t1790*var4[46] + 25.*t4534*t4952*var4[46] - 20.*t1464*t1589*t5060*var4[46] + 20.*t1358*t1464*var4[57] - 25.*t4534*t4952*var4[57];
  p_output1[32]=20.*t1445*t2319*t3565*var4[2] - 5.*t3519*t4002*var4[2] + 60.*t1589*t1673*t3141*var4[13] - 60.*t1445*t2319*t3565*var4[13] + 5.*t3519*t4002*var4[13] + 60.*t1358*t1464*t1790*var4[24] - 150.*t1589*t1673*t3141*var4[24] + 40.*t1445*t2319*t3565*var4[24] - 140.*t1358*t1464*t1790*var4[35] + 90.*t1589*t1673*t3141*var4[35] + 20.*t4534*t4952*var4[35] + 80.*t1358*t1464*t1790*var4[46] - 45.*t4534*t4952*var4[46] + 25.*t4534*t4952*var4[57];
  p_output1[33]=-20.*t3519*t3565*t915*var4[3] - 60.*t1445*t2319*t3141*t915*var4[14] + 40.*t3519*t3565*t915*var4[14] - 60.*t1589*t1673*t1790*t915*var4[25] + 120.*t1445*t2319*t3141*t915*var4[25] - 20.*t3519*t3565*t915*var4[25] - 20.*t1358*t1464*t915*var4[36] + 120.*t1589*t1673*t1790*t915*var4[36] - 60.*t1445*t2319*t3141*t915*var4[36] + 40.*t1358*t1464*t915*var4[47] - 60.*t1589*t1673*t1790*t915*var4[47] - 20.*t1358*t1464*t915*var4[58];
  p_output1[34]=-20.*t3519*t3565*t445*t555*var4[3] - 60.*t1445*t2319*t3141*t445*t555*var4[14] + 40.*t3519*t3565*t445*t555*var4[14] - 60.*t1589*t1673*t1790*t445*t555*var4[25] + 120.*t1445*t2319*t3141*t445*t555*var4[25] - 20.*t3519*t3565*t445*t555*var4[25] - 20.*t1358*t1464*t445*t555*var4[36] + 120.*t1589*t1673*t1790*t445*t555*var4[36] - 60.*t1445*t2319*t3141*t445*t555*var4[36] + 40.*t1358*t1464*t445*t555*var4[47] - 60.*t1589*t1673*t1790*t445*t555*var4[47] - 20.*t1358*t1464*t445*t555*var4[58];
  p_output1[35]=1.;
  p_output1[36]=t4026;
  p_output1[37]=t4220;
  p_output1[38]=t4297;
  p_output1[39]=t4378;
  p_output1[40]=t4777;
  p_output1[41]=t4791;
  p_output1[42]=5.*t3519*t4002*var4[3] + 20.*t1695*t3565*t5060*var4[3] + 40.*t1445*t2319*t3565*var4[14] - 20.*t3519*t3565*var4[14] - 5.*t3519*t4002*var4[14] + 60.*t1445*t3141*t3519*t5060*var4[14] - 20.*t1695*t3565*t5060*var4[14] + 90.*t1589*t1673*t3141*var4[25] - 60.*t1445*t2319*t3141*var4[25] - 40.*t1445*t2319*t3565*var4[25] + 20.*t3519*t3565*var4[25] + 60.*t1673*t1790*t2319*t5060*var4[25] - 60.*t1445*t3141*t3519*t5060*var4[25] + 80.*t1358*t1464*t1790*var4[36] - 60.*t1589*t1673*t1790*var4[36] - 90.*t1589*t1673*t3141*var4[36] + 60.*t1445*t2319*t3141*var4[36] + 20.*t1464*t1589*t5060*var4[36] - 60.*t1673*t1790*t2319*t5060*var4[36] - 20.*t1358*t1464*var4[47] - 80.*t1358*t1464*t1790*var4[47] + 60.*t1589*t1673*t1790*var4[47] + 25.*t4534*t4952*var4[47] - 20.*t1464*t1589*t5060*var4[47] + 20.*t1358*t1464*var4[58] - 25.*t4534*t4952*var4[58];
  p_output1[43]=20.*t1445*t2319*t3565*var4[3] - 5.*t3519*t4002*var4[3] + 60.*t1589*t1673*t3141*var4[14] - 60.*t1445*t2319*t3565*var4[14] + 5.*t3519*t4002*var4[14] + 60.*t1358*t1464*t1790*var4[25] - 150.*t1589*t1673*t3141*var4[25] + 40.*t1445*t2319*t3565*var4[25] - 140.*t1358*t1464*t1790*var4[36] + 90.*t1589*t1673*t3141*var4[36] + 20.*t4534*t4952*var4[36] + 80.*t1358*t1464*t1790*var4[47] - 45.*t4534*t4952*var4[47] + 25.*t4534*t4952*var4[58];
  p_output1[44]=-20.*t3519*t3565*t915*var4[4] - 60.*t1445*t2319*t3141*t915*var4[15] + 40.*t3519*t3565*t915*var4[15] - 60.*t1589*t1673*t1790*t915*var4[26] + 120.*t1445*t2319*t3141*t915*var4[26] - 20.*t3519*t3565*t915*var4[26] - 20.*t1358*t1464*t915*var4[37] + 120.*t1589*t1673*t1790*t915*var4[37] - 60.*t1445*t2319*t3141*t915*var4[37] + 40.*t1358*t1464*t915*var4[48] - 60.*t1589*t1673*t1790*t915*var4[48] - 20.*t1358*t1464*t915*var4[59];
  p_output1[45]=-20.*t3519*t3565*t445*t555*var4[4] - 60.*t1445*t2319*t3141*t445*t555*var4[15] + 40.*t3519*t3565*t445*t555*var4[15] - 60.*t1589*t1673*t1790*t445*t555*var4[26] + 120.*t1445*t2319*t3141*t445*t555*var4[26] - 20.*t3519*t3565*t445*t555*var4[26] - 20.*t1358*t1464*t445*t555*var4[37] + 120.*t1589*t1673*t1790*t445*t555*var4[37] - 60.*t1445*t2319*t3141*t445*t555*var4[37] + 40.*t1358*t1464*t445*t555*var4[48] - 60.*t1589*t1673*t1790*t445*t555*var4[48] - 20.*t1358*t1464*t445*t555*var4[59];
  p_output1[46]=1.;
  p_output1[47]=t4026;
  p_output1[48]=t4220;
  p_output1[49]=t4297;
  p_output1[50]=t4378;
  p_output1[51]=t4777;
  p_output1[52]=t4791;
  p_output1[53]=5.*t3519*t4002*var4[4] + 20.*t1695*t3565*t5060*var4[4] + 40.*t1445*t2319*t3565*var4[15] - 20.*t3519*t3565*var4[15] - 5.*t3519*t4002*var4[15] + 60.*t1445*t3141*t3519*t5060*var4[15] - 20.*t1695*t3565*t5060*var4[15] + 90.*t1589*t1673*t3141*var4[26] - 60.*t1445*t2319*t3141*var4[26] - 40.*t1445*t2319*t3565*var4[26] + 20.*t3519*t3565*var4[26] + 60.*t1673*t1790*t2319*t5060*var4[26] - 60.*t1445*t3141*t3519*t5060*var4[26] + 80.*t1358*t1464*t1790*var4[37] - 60.*t1589*t1673*t1790*var4[37] - 90.*t1589*t1673*t3141*var4[37] + 60.*t1445*t2319*t3141*var4[37] + 20.*t1464*t1589*t5060*var4[37] - 60.*t1673*t1790*t2319*t5060*var4[37] - 20.*t1358*t1464*var4[48] - 80.*t1358*t1464*t1790*var4[48] + 60.*t1589*t1673*t1790*var4[48] + 25.*t4534*t4952*var4[48] - 20.*t1464*t1589*t5060*var4[48] + 20.*t1358*t1464*var4[59] - 25.*t4534*t4952*var4[59];
  p_output1[54]=20.*t1445*t2319*t3565*var4[4] - 5.*t3519*t4002*var4[4] + 60.*t1589*t1673*t3141*var4[15] - 60.*t1445*t2319*t3565*var4[15] + 5.*t3519*t4002*var4[15] + 60.*t1358*t1464*t1790*var4[26] - 150.*t1589*t1673*t3141*var4[26] + 40.*t1445*t2319*t3565*var4[26] - 140.*t1358*t1464*t1790*var4[37] + 90.*t1589*t1673*t3141*var4[37] + 20.*t4534*t4952*var4[37] + 80.*t1358*t1464*t1790*var4[48] - 45.*t4534*t4952*var4[48] + 25.*t4534*t4952*var4[59];
  p_output1[55]=-20.*t3519*t3565*t915*var4[5] - 60.*t1445*t2319*t3141*t915*var4[16] + 40.*t3519*t3565*t915*var4[16] - 60.*t1589*t1673*t1790*t915*var4[27] + 120.*t1445*t2319*t3141*t915*var4[27] - 20.*t3519*t3565*t915*var4[27] - 20.*t1358*t1464*t915*var4[38] + 120.*t1589*t1673*t1790*t915*var4[38] - 60.*t1445*t2319*t3141*t915*var4[38] + 40.*t1358*t1464*t915*var4[49] - 60.*t1589*t1673*t1790*t915*var4[49] - 20.*t1358*t1464*t915*var4[60];
  p_output1[56]=-20.*t3519*t3565*t445*t555*var4[5] - 60.*t1445*t2319*t3141*t445*t555*var4[16] + 40.*t3519*t3565*t445*t555*var4[16] - 60.*t1589*t1673*t1790*t445*t555*var4[27] + 120.*t1445*t2319*t3141*t445*t555*var4[27] - 20.*t3519*t3565*t445*t555*var4[27] - 20.*t1358*t1464*t445*t555*var4[38] + 120.*t1589*t1673*t1790*t445*t555*var4[38] - 60.*t1445*t2319*t3141*t445*t555*var4[38] + 40.*t1358*t1464*t445*t555*var4[49] - 60.*t1589*t1673*t1790*t445*t555*var4[49] - 20.*t1358*t1464*t445*t555*var4[60];
  p_output1[57]=1.;
  p_output1[58]=t4026;
  p_output1[59]=t4220;
  p_output1[60]=t4297;
  p_output1[61]=t4378;
  p_output1[62]=t4777;
  p_output1[63]=t4791;
  p_output1[64]=5.*t3519*t4002*var4[5] + 20.*t1695*t3565*t5060*var4[5] + 40.*t1445*t2319*t3565*var4[16] - 20.*t3519*t3565*var4[16] - 5.*t3519*t4002*var4[16] + 60.*t1445*t3141*t3519*t5060*var4[16] - 20.*t1695*t3565*t5060*var4[16] + 90.*t1589*t1673*t3141*var4[27] - 60.*t1445*t2319*t3141*var4[27] - 40.*t1445*t2319*t3565*var4[27] + 20.*t3519*t3565*var4[27] + 60.*t1673*t1790*t2319*t5060*var4[27] - 60.*t1445*t3141*t3519*t5060*var4[27] + 80.*t1358*t1464*t1790*var4[38] - 60.*t1589*t1673*t1790*var4[38] - 90.*t1589*t1673*t3141*var4[38] + 60.*t1445*t2319*t3141*var4[38] + 20.*t1464*t1589*t5060*var4[38] - 60.*t1673*t1790*t2319*t5060*var4[38] - 20.*t1358*t1464*var4[49] - 80.*t1358*t1464*t1790*var4[49] + 60.*t1589*t1673*t1790*var4[49] + 25.*t4534*t4952*var4[49] - 20.*t1464*t1589*t5060*var4[49] + 20.*t1358*t1464*var4[60] - 25.*t4534*t4952*var4[60];
  p_output1[65]=20.*t1445*t2319*t3565*var4[5] - 5.*t3519*t4002*var4[5] + 60.*t1589*t1673*t3141*var4[16] - 60.*t1445*t2319*t3565*var4[16] + 5.*t3519*t4002*var4[16] + 60.*t1358*t1464*t1790*var4[27] - 150.*t1589*t1673*t3141*var4[27] + 40.*t1445*t2319*t3565*var4[27] - 140.*t1358*t1464*t1790*var4[38] + 90.*t1589*t1673*t3141*var4[38] + 20.*t4534*t4952*var4[38] + 80.*t1358*t1464*t1790*var4[49] - 45.*t4534*t4952*var4[49] + 25.*t4534*t4952*var4[60];
  p_output1[66]=-20.*t3519*t3565*t915*var4[6] - 60.*t1445*t2319*t3141*t915*var4[17] + 40.*t3519*t3565*t915*var4[17] - 60.*t1589*t1673*t1790*t915*var4[28] + 120.*t1445*t2319*t3141*t915*var4[28] - 20.*t3519*t3565*t915*var4[28] - 20.*t1358*t1464*t915*var4[39] + 120.*t1589*t1673*t1790*t915*var4[39] - 60.*t1445*t2319*t3141*t915*var4[39] + 40.*t1358*t1464*t915*var4[50] - 60.*t1589*t1673*t1790*t915*var4[50] - 20.*t1358*t1464*t915*var4[61];
  p_output1[67]=-20.*t3519*t3565*t445*t555*var4[6] - 60.*t1445*t2319*t3141*t445*t555*var4[17] + 40.*t3519*t3565*t445*t555*var4[17] - 60.*t1589*t1673*t1790*t445*t555*var4[28] + 120.*t1445*t2319*t3141*t445*t555*var4[28] - 20.*t3519*t3565*t445*t555*var4[28] - 20.*t1358*t1464*t445*t555*var4[39] + 120.*t1589*t1673*t1790*t445*t555*var4[39] - 60.*t1445*t2319*t3141*t445*t555*var4[39] + 40.*t1358*t1464*t445*t555*var4[50] - 60.*t1589*t1673*t1790*t445*t555*var4[50] - 20.*t1358*t1464*t445*t555*var4[61];
  p_output1[68]=1.;
  p_output1[69]=t4026;
  p_output1[70]=t4220;
  p_output1[71]=t4297;
  p_output1[72]=t4378;
  p_output1[73]=t4777;
  p_output1[74]=t4791;
  p_output1[75]=5.*t3519*t4002*var4[6] + 20.*t1695*t3565*t5060*var4[6] + 40.*t1445*t2319*t3565*var4[17] - 20.*t3519*t3565*var4[17] - 5.*t3519*t4002*var4[17] + 60.*t1445*t3141*t3519*t5060*var4[17] - 20.*t1695*t3565*t5060*var4[17] + 90.*t1589*t1673*t3141*var4[28] - 60.*t1445*t2319*t3141*var4[28] - 40.*t1445*t2319*t3565*var4[28] + 20.*t3519*t3565*var4[28] + 60.*t1673*t1790*t2319*t5060*var4[28] - 60.*t1445*t3141*t3519*t5060*var4[28] + 80.*t1358*t1464*t1790*var4[39] - 60.*t1589*t1673*t1790*var4[39] - 90.*t1589*t1673*t3141*var4[39] + 60.*t1445*t2319*t3141*var4[39] + 20.*t1464*t1589*t5060*var4[39] - 60.*t1673*t1790*t2319*t5060*var4[39] - 20.*t1358*t1464*var4[50] - 80.*t1358*t1464*t1790*var4[50] + 60.*t1589*t1673*t1790*var4[50] + 25.*t4534*t4952*var4[50] - 20.*t1464*t1589*t5060*var4[50] + 20.*t1358*t1464*var4[61] - 25.*t4534*t4952*var4[61];
  p_output1[76]=20.*t1445*t2319*t3565*var4[6] - 5.*t3519*t4002*var4[6] + 60.*t1589*t1673*t3141*var4[17] - 60.*t1445*t2319*t3565*var4[17] + 5.*t3519*t4002*var4[17] + 60.*t1358*t1464*t1790*var4[28] - 150.*t1589*t1673*t3141*var4[28] + 40.*t1445*t2319*t3565*var4[28] - 140.*t1358*t1464*t1790*var4[39] + 90.*t1589*t1673*t3141*var4[39] + 20.*t4534*t4952*var4[39] + 80.*t1358*t1464*t1790*var4[50] - 45.*t4534*t4952*var4[50] + 25.*t4534*t4952*var4[61];
  p_output1[77]=-20.*t3519*t3565*t915*var4[7] - 60.*t1445*t2319*t3141*t915*var4[18] + 40.*t3519*t3565*t915*var4[18] - 60.*t1589*t1673*t1790*t915*var4[29] + 120.*t1445*t2319*t3141*t915*var4[29] - 20.*t3519*t3565*t915*var4[29] - 20.*t1358*t1464*t915*var4[40] + 120.*t1589*t1673*t1790*t915*var4[40] - 60.*t1445*t2319*t3141*t915*var4[40] + 40.*t1358*t1464*t915*var4[51] - 60.*t1589*t1673*t1790*t915*var4[51] - 20.*t1358*t1464*t915*var4[62];
  p_output1[78]=-20.*t3519*t3565*t445*t555*var4[7] - 60.*t1445*t2319*t3141*t445*t555*var4[18] + 40.*t3519*t3565*t445*t555*var4[18] - 60.*t1589*t1673*t1790*t445*t555*var4[29] + 120.*t1445*t2319*t3141*t445*t555*var4[29] - 20.*t3519*t3565*t445*t555*var4[29] - 20.*t1358*t1464*t445*t555*var4[40] + 120.*t1589*t1673*t1790*t445*t555*var4[40] - 60.*t1445*t2319*t3141*t445*t555*var4[40] + 40.*t1358*t1464*t445*t555*var4[51] - 60.*t1589*t1673*t1790*t445*t555*var4[51] - 20.*t1358*t1464*t445*t555*var4[62];
  p_output1[79]=1.;
  p_output1[80]=t4026;
  p_output1[81]=t4220;
  p_output1[82]=t4297;
  p_output1[83]=t4378;
  p_output1[84]=t4777;
  p_output1[85]=t4791;
  p_output1[86]=5.*t3519*t4002*var4[7] + 20.*t1695*t3565*t5060*var4[7] + 40.*t1445*t2319*t3565*var4[18] - 20.*t3519*t3565*var4[18] - 5.*t3519*t4002*var4[18] + 60.*t1445*t3141*t3519*t5060*var4[18] - 20.*t1695*t3565*t5060*var4[18] + 90.*t1589*t1673*t3141*var4[29] - 60.*t1445*t2319*t3141*var4[29] - 40.*t1445*t2319*t3565*var4[29] + 20.*t3519*t3565*var4[29] + 60.*t1673*t1790*t2319*t5060*var4[29] - 60.*t1445*t3141*t3519*t5060*var4[29] + 80.*t1358*t1464*t1790*var4[40] - 60.*t1589*t1673*t1790*var4[40] - 90.*t1589*t1673*t3141*var4[40] + 60.*t1445*t2319*t3141*var4[40] + 20.*t1464*t1589*t5060*var4[40] - 60.*t1673*t1790*t2319*t5060*var4[40] - 20.*t1358*t1464*var4[51] - 80.*t1358*t1464*t1790*var4[51] + 60.*t1589*t1673*t1790*var4[51] + 25.*t4534*t4952*var4[51] - 20.*t1464*t1589*t5060*var4[51] + 20.*t1358*t1464*var4[62] - 25.*t4534*t4952*var4[62];
  p_output1[87]=20.*t1445*t2319*t3565*var4[7] - 5.*t3519*t4002*var4[7] + 60.*t1589*t1673*t3141*var4[18] - 60.*t1445*t2319*t3565*var4[18] + 5.*t3519*t4002*var4[18] + 60.*t1358*t1464*t1790*var4[29] - 150.*t1589*t1673*t3141*var4[29] + 40.*t1445*t2319*t3565*var4[29] - 140.*t1358*t1464*t1790*var4[40] + 90.*t1589*t1673*t3141*var4[40] + 20.*t4534*t4952*var4[40] + 80.*t1358*t1464*t1790*var4[51] - 45.*t4534*t4952*var4[51] + 25.*t4534*t4952*var4[62];
  p_output1[88]=-20.*t3519*t3565*t915*var4[8] - 60.*t1445*t2319*t3141*t915*var4[19] + 40.*t3519*t3565*t915*var4[19] - 60.*t1589*t1673*t1790*t915*var4[30] + 120.*t1445*t2319*t3141*t915*var4[30] - 20.*t3519*t3565*t915*var4[30] - 20.*t1358*t1464*t915*var4[41] + 120.*t1589*t1673*t1790*t915*var4[41] - 60.*t1445*t2319*t3141*t915*var4[41] + 40.*t1358*t1464*t915*var4[52] - 60.*t1589*t1673*t1790*t915*var4[52] - 20.*t1358*t1464*t915*var4[63];
  p_output1[89]=-20.*t3519*t3565*t445*t555*var4[8] - 60.*t1445*t2319*t3141*t445*t555*var4[19] + 40.*t3519*t3565*t445*t555*var4[19] - 60.*t1589*t1673*t1790*t445*t555*var4[30] + 120.*t1445*t2319*t3141*t445*t555*var4[30] - 20.*t3519*t3565*t445*t555*var4[30] - 20.*t1358*t1464*t445*t555*var4[41] + 120.*t1589*t1673*t1790*t445*t555*var4[41] - 60.*t1445*t2319*t3141*t445*t555*var4[41] + 40.*t1358*t1464*t445*t555*var4[52] - 60.*t1589*t1673*t1790*t445*t555*var4[52] - 20.*t1358*t1464*t445*t555*var4[63];
  p_output1[90]=1.;
  p_output1[91]=t4026;
  p_output1[92]=t4220;
  p_output1[93]=t4297;
  p_output1[94]=t4378;
  p_output1[95]=t4777;
  p_output1[96]=t4791;
  p_output1[97]=5.*t3519*t4002*var4[8] + 20.*t1695*t3565*t5060*var4[8] + 40.*t1445*t2319*t3565*var4[19] - 20.*t3519*t3565*var4[19] - 5.*t3519*t4002*var4[19] + 60.*t1445*t3141*t3519*t5060*var4[19] - 20.*t1695*t3565*t5060*var4[19] + 90.*t1589*t1673*t3141*var4[30] - 60.*t1445*t2319*t3141*var4[30] - 40.*t1445*t2319*t3565*var4[30] + 20.*t3519*t3565*var4[30] + 60.*t1673*t1790*t2319*t5060*var4[30] - 60.*t1445*t3141*t3519*t5060*var4[30] + 80.*t1358*t1464*t1790*var4[41] - 60.*t1589*t1673*t1790*var4[41] - 90.*t1589*t1673*t3141*var4[41] + 60.*t1445*t2319*t3141*var4[41] + 20.*t1464*t1589*t5060*var4[41] - 60.*t1673*t1790*t2319*t5060*var4[41] - 20.*t1358*t1464*var4[52] - 80.*t1358*t1464*t1790*var4[52] + 60.*t1589*t1673*t1790*var4[52] + 25.*t4534*t4952*var4[52] - 20.*t1464*t1589*t5060*var4[52] + 20.*t1358*t1464*var4[63] - 25.*t4534*t4952*var4[63];
  p_output1[98]=20.*t1445*t2319*t3565*var4[8] - 5.*t3519*t4002*var4[8] + 60.*t1589*t1673*t3141*var4[19] - 60.*t1445*t2319*t3565*var4[19] + 5.*t3519*t4002*var4[19] + 60.*t1358*t1464*t1790*var4[30] - 150.*t1589*t1673*t3141*var4[30] + 40.*t1445*t2319*t3565*var4[30] - 140.*t1358*t1464*t1790*var4[41] + 90.*t1589*t1673*t3141*var4[41] + 20.*t4534*t4952*var4[41] + 80.*t1358*t1464*t1790*var4[52] - 45.*t4534*t4952*var4[52] + 25.*t4534*t4952*var4[63];
  p_output1[99]=-20.*t3519*t3565*t915*var4[9] - 60.*t1445*t2319*t3141*t915*var4[20] + 40.*t3519*t3565*t915*var4[20] - 60.*t1589*t1673*t1790*t915*var4[31] + 120.*t1445*t2319*t3141*t915*var4[31] - 20.*t3519*t3565*t915*var4[31] - 20.*t1358*t1464*t915*var4[42] + 120.*t1589*t1673*t1790*t915*var4[42] - 60.*t1445*t2319*t3141*t915*var4[42] + 40.*t1358*t1464*t915*var4[53] - 60.*t1589*t1673*t1790*t915*var4[53] - 20.*t1358*t1464*t915*var4[64];
  p_output1[100]=-20.*t3519*t3565*t445*t555*var4[9] - 60.*t1445*t2319*t3141*t445*t555*var4[20] + 40.*t3519*t3565*t445*t555*var4[20] - 60.*t1589*t1673*t1790*t445*t555*var4[31] + 120.*t1445*t2319*t3141*t445*t555*var4[31] - 20.*t3519*t3565*t445*t555*var4[31] - 20.*t1358*t1464*t445*t555*var4[42] + 120.*t1589*t1673*t1790*t445*t555*var4[42] - 60.*t1445*t2319*t3141*t445*t555*var4[42] + 40.*t1358*t1464*t445*t555*var4[53] - 60.*t1589*t1673*t1790*t445*t555*var4[53] - 20.*t1358*t1464*t445*t555*var4[64];
  p_output1[101]=1.;
  p_output1[102]=t4026;
  p_output1[103]=t4220;
  p_output1[104]=t4297;
  p_output1[105]=t4378;
  p_output1[106]=t4777;
  p_output1[107]=t4791;
  p_output1[108]=5.*t3519*t4002*var4[9] + 20.*t1695*t3565*t5060*var4[9] + 40.*t1445*t2319*t3565*var4[20] - 20.*t3519*t3565*var4[20] - 5.*t3519*t4002*var4[20] + 60.*t1445*t3141*t3519*t5060*var4[20] - 20.*t1695*t3565*t5060*var4[20] + 90.*t1589*t1673*t3141*var4[31] - 60.*t1445*t2319*t3141*var4[31] - 40.*t1445*t2319*t3565*var4[31] + 20.*t3519*t3565*var4[31] + 60.*t1673*t1790*t2319*t5060*var4[31] - 60.*t1445*t3141*t3519*t5060*var4[31] + 80.*t1358*t1464*t1790*var4[42] - 60.*t1589*t1673*t1790*var4[42] - 90.*t1589*t1673*t3141*var4[42] + 60.*t1445*t2319*t3141*var4[42] + 20.*t1464*t1589*t5060*var4[42] - 60.*t1673*t1790*t2319*t5060*var4[42] - 20.*t1358*t1464*var4[53] - 80.*t1358*t1464*t1790*var4[53] + 60.*t1589*t1673*t1790*var4[53] + 25.*t4534*t4952*var4[53] - 20.*t1464*t1589*t5060*var4[53] + 20.*t1358*t1464*var4[64] - 25.*t4534*t4952*var4[64];
  p_output1[109]=20.*t1445*t2319*t3565*var4[9] - 5.*t3519*t4002*var4[9] + 60.*t1589*t1673*t3141*var4[20] - 60.*t1445*t2319*t3565*var4[20] + 5.*t3519*t4002*var4[20] + 60.*t1358*t1464*t1790*var4[31] - 150.*t1589*t1673*t3141*var4[31] + 40.*t1445*t2319*t3565*var4[31] - 140.*t1358*t1464*t1790*var4[42] + 90.*t1589*t1673*t3141*var4[42] + 20.*t4534*t4952*var4[42] + 80.*t1358*t1464*t1790*var4[53] - 45.*t4534*t4952*var4[53] + 25.*t4534*t4952*var4[64];
  p_output1[110]=-20.*t3519*t3565*t915*var4[10] - 60.*t1445*t2319*t3141*t915*var4[21] + 40.*t3519*t3565*t915*var4[21] - 60.*t1589*t1673*t1790*t915*var4[32] + 120.*t1445*t2319*t3141*t915*var4[32] - 20.*t3519*t3565*t915*var4[32] - 20.*t1358*t1464*t915*var4[43] + 120.*t1589*t1673*t1790*t915*var4[43] - 60.*t1445*t2319*t3141*t915*var4[43] + 40.*t1358*t1464*t915*var4[54] - 60.*t1589*t1673*t1790*t915*var4[54] - 20.*t1358*t1464*t915*var4[65];
  p_output1[111]=-20.*t3519*t3565*t445*t555*var4[10] - 60.*t1445*t2319*t3141*t445*t555*var4[21] + 40.*t3519*t3565*t445*t555*var4[21] - 60.*t1589*t1673*t1790*t445*t555*var4[32] + 120.*t1445*t2319*t3141*t445*t555*var4[32] - 20.*t3519*t3565*t445*t555*var4[32] - 20.*t1358*t1464*t445*t555*var4[43] + 120.*t1589*t1673*t1790*t445*t555*var4[43] - 60.*t1445*t2319*t3141*t445*t555*var4[43] + 40.*t1358*t1464*t445*t555*var4[54] - 60.*t1589*t1673*t1790*t445*t555*var4[54] - 20.*t1358*t1464*t445*t555*var4[65];
  p_output1[112]=1.;
  p_output1[113]=t4026;
  p_output1[114]=t4220;
  p_output1[115]=t4297;
  p_output1[116]=t4378;
  p_output1[117]=t4777;
  p_output1[118]=t4791;
  p_output1[119]=5.*t3519*t4002*var4[10] + 20.*t1695*t3565*t5060*var4[10] + 40.*t1445*t2319*t3565*var4[21] - 20.*t3519*t3565*var4[21] - 5.*t3519*t4002*var4[21] + 60.*t1445*t3141*t3519*t5060*var4[21] - 20.*t1695*t3565*t5060*var4[21] + 90.*t1589*t1673*t3141*var4[32] - 60.*t1445*t2319*t3141*var4[32] - 40.*t1445*t2319*t3565*var4[32] + 20.*t3519*t3565*var4[32] + 60.*t1673*t1790*t2319*t5060*var4[32] - 60.*t1445*t3141*t3519*t5060*var4[32] + 80.*t1358*t1464*t1790*var4[43] - 60.*t1589*t1673*t1790*var4[43] - 90.*t1589*t1673*t3141*var4[43] + 60.*t1445*t2319*t3141*var4[43] + 20.*t1464*t1589*t5060*var4[43] - 60.*t1673*t1790*t2319*t5060*var4[43] - 20.*t1358*t1464*var4[54] - 80.*t1358*t1464*t1790*var4[54] + 60.*t1589*t1673*t1790*var4[54] + 25.*t4534*t4952*var4[54] - 20.*t1464*t1589*t5060*var4[54] + 20.*t1358*t1464*var4[65] - 25.*t4534*t4952*var4[65];
  p_output1[120]=20.*t1445*t2319*t3565*var4[10] - 5.*t3519*t4002*var4[10] + 60.*t1589*t1673*t3141*var4[21] - 60.*t1445*t2319*t3565*var4[21] + 5.*t3519*t4002*var4[21] + 60.*t1358*t1464*t1790*var4[32] - 150.*t1589*t1673*t3141*var4[32] + 40.*t1445*t2319*t3565*var4[32] - 140.*t1358*t1464*t1790*var4[43] + 90.*t1589*t1673*t3141*var4[43] + 20.*t4534*t4952*var4[43] + 80.*t1358*t1464*t1790*var4[54] - 45.*t4534*t4952*var4[54] + 25.*t4534*t4952*var4[65];
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