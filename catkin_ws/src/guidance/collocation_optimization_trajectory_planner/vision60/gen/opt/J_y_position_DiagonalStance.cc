/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:41 GMT+02:00
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
  double t487;
  double t433;
  double t457;
  double t462;
  double t470;
  double t472;
  double t491;
  double t503;
  double t504;
  double t510;
  double t511;
  double t515;
  double t522;
  double t529;
  double t530;
  double t532;
  double t544;
  double t563;
  double t571;
  double t574;
  double t575;
  double t589;
  double t590;
  double t602;
  double t689;
  double t709;
  double t714;
  double t702;
  double t665;
  double t666;
  double t667;
  double t678;
  double t679;
  double t681;
  double t697;
  t487 = -1.*var4[0];
  t433 = -1. + var5[0];
  t457 = -1. + var6[0];
  t462 = 1/t457;
  t470 = -1.*t433*t462;
  t472 = 1. + t470;
  t491 = t487 + var4[1];
  t503 = Power(t491,-5);
  t504 = -1.*var1[0];
  t510 = t504 + var1[1];
  t511 = t433*t462*t510;
  t515 = t487 + var1[0] + t511;
  t522 = Power(t515,4);
  t529 = Power(t491,-4);
  t530 = Power(t515,3);
  t532 = 1/t491;
  t544 = -1.*t532*t515;
  t563 = 1. + t544;
  t571 = Power(t491,-3);
  t574 = Power(t515,2);
  t575 = Power(t563,2);
  t589 = Power(t491,-2);
  t590 = Power(t563,3);
  t602 = Power(t563,4);
  t689 = Power(t515,5);
  t709 = -1.*t589*t515;
  t714 = t532 + t709;
  t702 = Power(t491,-6);
  t665 = Power(t563,5);
  t666 = -1.*t665;
  t667 = -5.*t532*t515*t602;
  t678 = -10.*t589*t574*t590;
  t679 = -10.*t571*t530*t575;
  t681 = -5.*t529*t522*t563;
  t697 = -1.*t503*t689;
  p_output1[0]=5.*t472*t532*t602*var3[0] + 20.*t472*t515*t589*t590*var3[11] - 5.*t472*t532*t602*var3[11] + 30.*t472*t571*t574*t575*var3[22] - 20.*t472*t515*t589*t590*var3[22] + 20.*t472*t529*t530*t563*var3[33] - 30.*t472*t571*t574*t575*var3[33] + 5.*t472*t503*t522*var3[44] - 20.*t472*t529*t530*t563*var3[44] - 5.*t472*t503*t522*var3[55];
  p_output1[1]=5.*t433*t462*t532*t602*var3[0] + 20.*t433*t462*t515*t589*t590*var3[11] - 5.*t433*t462*t532*t602*var3[11] + 30.*t433*t462*t571*t574*t575*var3[22] - 20.*t433*t462*t515*t589*t590*var3[22] + 20.*t433*t462*t529*t530*t563*var3[33] - 30.*t433*t462*t571*t574*t575*var3[33] + 5.*t433*t462*t503*t522*var3[44] - 20.*t433*t462*t529*t530*t563*var3[44] - 5.*t433*t462*t503*t522*var3[55];
  p_output1[2]=1.;
  p_output1[3]=t666;
  p_output1[4]=t667;
  p_output1[5]=t678;
  p_output1[6]=t679;
  p_output1[7]=t681;
  p_output1[8]=t697;
  p_output1[9]=-5.*t602*t714*var3[0] + 5.*t532*t602*var3[11] - 5.*t515*t589*t602*var3[11] - 20.*t515*t532*t590*t714*var3[11] - 20.*t571*t574*t590*var3[22] + 20.*t515*t589*t590*var3[22] - 30.*t574*t575*t589*t714*var3[22] - 30.*t529*t530*t575*var3[33] + 30.*t571*t574*t575*var3[33] - 20.*t530*t563*t571*t714*var3[33] - 20.*t503*t522*t563*var3[44] + 20.*t529*t530*t563*var3[44] - 5.*t522*t529*t714*var3[44] + 5.*t503*t522*var3[55] - 5.*t689*t702*var3[55];
  p_output1[10]=-5.*t515*t589*t602*var3[0] - 20.*t571*t574*t590*var3[11] + 5.*t515*t589*t602*var3[11] - 30.*t529*t530*t575*var3[22] + 20.*t571*t574*t590*var3[22] - 20.*t503*t522*t563*var3[33] + 30.*t529*t530*t575*var3[33] + 20.*t503*t522*t563*var3[44] - 5.*t689*t702*var3[44] + 5.*t689*t702*var3[55];
  p_output1[11]=5.*t472*t532*t602*var3[1] + 20.*t472*t515*t589*t590*var3[12] - 5.*t472*t532*t602*var3[12] + 30.*t472*t571*t574*t575*var3[23] - 20.*t472*t515*t589*t590*var3[23] + 20.*t472*t529*t530*t563*var3[34] - 30.*t472*t571*t574*t575*var3[34] + 5.*t472*t503*t522*var3[45] - 20.*t472*t529*t530*t563*var3[45] - 5.*t472*t503*t522*var3[56];
  p_output1[12]=5.*t433*t462*t532*t602*var3[1] + 20.*t433*t462*t515*t589*t590*var3[12] - 5.*t433*t462*t532*t602*var3[12] + 30.*t433*t462*t571*t574*t575*var3[23] - 20.*t433*t462*t515*t589*t590*var3[23] + 20.*t433*t462*t529*t530*t563*var3[34] - 30.*t433*t462*t571*t574*t575*var3[34] + 5.*t433*t462*t503*t522*var3[45] - 20.*t433*t462*t529*t530*t563*var3[45] - 5.*t433*t462*t503*t522*var3[56];
  p_output1[13]=1.;
  p_output1[14]=t666;
  p_output1[15]=t667;
  p_output1[16]=t678;
  p_output1[17]=t679;
  p_output1[18]=t681;
  p_output1[19]=t697;
  p_output1[20]=-5.*t602*t714*var3[1] + 5.*t532*t602*var3[12] - 5.*t515*t589*t602*var3[12] - 20.*t515*t532*t590*t714*var3[12] - 20.*t571*t574*t590*var3[23] + 20.*t515*t589*t590*var3[23] - 30.*t574*t575*t589*t714*var3[23] - 30.*t529*t530*t575*var3[34] + 30.*t571*t574*t575*var3[34] - 20.*t530*t563*t571*t714*var3[34] - 20.*t503*t522*t563*var3[45] + 20.*t529*t530*t563*var3[45] - 5.*t522*t529*t714*var3[45] + 5.*t503*t522*var3[56] - 5.*t689*t702*var3[56];
  p_output1[21]=-5.*t515*t589*t602*var3[1] - 20.*t571*t574*t590*var3[12] + 5.*t515*t589*t602*var3[12] - 30.*t529*t530*t575*var3[23] + 20.*t571*t574*t590*var3[23] - 20.*t503*t522*t563*var3[34] + 30.*t529*t530*t575*var3[34] + 20.*t503*t522*t563*var3[45] - 5.*t689*t702*var3[45] + 5.*t689*t702*var3[56];
  p_output1[22]=5.*t472*t532*t602*var3[2] + 20.*t472*t515*t589*t590*var3[13] - 5.*t472*t532*t602*var3[13] + 30.*t472*t571*t574*t575*var3[24] - 20.*t472*t515*t589*t590*var3[24] + 20.*t472*t529*t530*t563*var3[35] - 30.*t472*t571*t574*t575*var3[35] + 5.*t472*t503*t522*var3[46] - 20.*t472*t529*t530*t563*var3[46] - 5.*t472*t503*t522*var3[57];
  p_output1[23]=5.*t433*t462*t532*t602*var3[2] + 20.*t433*t462*t515*t589*t590*var3[13] - 5.*t433*t462*t532*t602*var3[13] + 30.*t433*t462*t571*t574*t575*var3[24] - 20.*t433*t462*t515*t589*t590*var3[24] + 20.*t433*t462*t529*t530*t563*var3[35] - 30.*t433*t462*t571*t574*t575*var3[35] + 5.*t433*t462*t503*t522*var3[46] - 20.*t433*t462*t529*t530*t563*var3[46] - 5.*t433*t462*t503*t522*var3[57];
  p_output1[24]=1.;
  p_output1[25]=t666;
  p_output1[26]=t667;
  p_output1[27]=t678;
  p_output1[28]=t679;
  p_output1[29]=t681;
  p_output1[30]=t697;
  p_output1[31]=-5.*t602*t714*var3[2] + 5.*t532*t602*var3[13] - 5.*t515*t589*t602*var3[13] - 20.*t515*t532*t590*t714*var3[13] - 20.*t571*t574*t590*var3[24] + 20.*t515*t589*t590*var3[24] - 30.*t574*t575*t589*t714*var3[24] - 30.*t529*t530*t575*var3[35] + 30.*t571*t574*t575*var3[35] - 20.*t530*t563*t571*t714*var3[35] - 20.*t503*t522*t563*var3[46] + 20.*t529*t530*t563*var3[46] - 5.*t522*t529*t714*var3[46] + 5.*t503*t522*var3[57] - 5.*t689*t702*var3[57];
  p_output1[32]=-5.*t515*t589*t602*var3[2] - 20.*t571*t574*t590*var3[13] + 5.*t515*t589*t602*var3[13] - 30.*t529*t530*t575*var3[24] + 20.*t571*t574*t590*var3[24] - 20.*t503*t522*t563*var3[35] + 30.*t529*t530*t575*var3[35] + 20.*t503*t522*t563*var3[46] - 5.*t689*t702*var3[46] + 5.*t689*t702*var3[57];
  p_output1[33]=5.*t472*t532*t602*var3[3] + 20.*t472*t515*t589*t590*var3[14] - 5.*t472*t532*t602*var3[14] + 30.*t472*t571*t574*t575*var3[25] - 20.*t472*t515*t589*t590*var3[25] + 20.*t472*t529*t530*t563*var3[36] - 30.*t472*t571*t574*t575*var3[36] + 5.*t472*t503*t522*var3[47] - 20.*t472*t529*t530*t563*var3[47] - 5.*t472*t503*t522*var3[58];
  p_output1[34]=5.*t433*t462*t532*t602*var3[3] + 20.*t433*t462*t515*t589*t590*var3[14] - 5.*t433*t462*t532*t602*var3[14] + 30.*t433*t462*t571*t574*t575*var3[25] - 20.*t433*t462*t515*t589*t590*var3[25] + 20.*t433*t462*t529*t530*t563*var3[36] - 30.*t433*t462*t571*t574*t575*var3[36] + 5.*t433*t462*t503*t522*var3[47] - 20.*t433*t462*t529*t530*t563*var3[47] - 5.*t433*t462*t503*t522*var3[58];
  p_output1[35]=1.;
  p_output1[36]=t666;
  p_output1[37]=t667;
  p_output1[38]=t678;
  p_output1[39]=t679;
  p_output1[40]=t681;
  p_output1[41]=t697;
  p_output1[42]=-5.*t602*t714*var3[3] + 5.*t532*t602*var3[14] - 5.*t515*t589*t602*var3[14] - 20.*t515*t532*t590*t714*var3[14] - 20.*t571*t574*t590*var3[25] + 20.*t515*t589*t590*var3[25] - 30.*t574*t575*t589*t714*var3[25] - 30.*t529*t530*t575*var3[36] + 30.*t571*t574*t575*var3[36] - 20.*t530*t563*t571*t714*var3[36] - 20.*t503*t522*t563*var3[47] + 20.*t529*t530*t563*var3[47] - 5.*t522*t529*t714*var3[47] + 5.*t503*t522*var3[58] - 5.*t689*t702*var3[58];
  p_output1[43]=-5.*t515*t589*t602*var3[3] - 20.*t571*t574*t590*var3[14] + 5.*t515*t589*t602*var3[14] - 30.*t529*t530*t575*var3[25] + 20.*t571*t574*t590*var3[25] - 20.*t503*t522*t563*var3[36] + 30.*t529*t530*t575*var3[36] + 20.*t503*t522*t563*var3[47] - 5.*t689*t702*var3[47] + 5.*t689*t702*var3[58];
  p_output1[44]=5.*t472*t532*t602*var3[4] + 20.*t472*t515*t589*t590*var3[15] - 5.*t472*t532*t602*var3[15] + 30.*t472*t571*t574*t575*var3[26] - 20.*t472*t515*t589*t590*var3[26] + 20.*t472*t529*t530*t563*var3[37] - 30.*t472*t571*t574*t575*var3[37] + 5.*t472*t503*t522*var3[48] - 20.*t472*t529*t530*t563*var3[48] - 5.*t472*t503*t522*var3[59];
  p_output1[45]=5.*t433*t462*t532*t602*var3[4] + 20.*t433*t462*t515*t589*t590*var3[15] - 5.*t433*t462*t532*t602*var3[15] + 30.*t433*t462*t571*t574*t575*var3[26] - 20.*t433*t462*t515*t589*t590*var3[26] + 20.*t433*t462*t529*t530*t563*var3[37] - 30.*t433*t462*t571*t574*t575*var3[37] + 5.*t433*t462*t503*t522*var3[48] - 20.*t433*t462*t529*t530*t563*var3[48] - 5.*t433*t462*t503*t522*var3[59];
  p_output1[46]=1.;
  p_output1[47]=t666;
  p_output1[48]=t667;
  p_output1[49]=t678;
  p_output1[50]=t679;
  p_output1[51]=t681;
  p_output1[52]=t697;
  p_output1[53]=-5.*t602*t714*var3[4] + 5.*t532*t602*var3[15] - 5.*t515*t589*t602*var3[15] - 20.*t515*t532*t590*t714*var3[15] - 20.*t571*t574*t590*var3[26] + 20.*t515*t589*t590*var3[26] - 30.*t574*t575*t589*t714*var3[26] - 30.*t529*t530*t575*var3[37] + 30.*t571*t574*t575*var3[37] - 20.*t530*t563*t571*t714*var3[37] - 20.*t503*t522*t563*var3[48] + 20.*t529*t530*t563*var3[48] - 5.*t522*t529*t714*var3[48] + 5.*t503*t522*var3[59] - 5.*t689*t702*var3[59];
  p_output1[54]=-5.*t515*t589*t602*var3[4] - 20.*t571*t574*t590*var3[15] + 5.*t515*t589*t602*var3[15] - 30.*t529*t530*t575*var3[26] + 20.*t571*t574*t590*var3[26] - 20.*t503*t522*t563*var3[37] + 30.*t529*t530*t575*var3[37] + 20.*t503*t522*t563*var3[48] - 5.*t689*t702*var3[48] + 5.*t689*t702*var3[59];
  p_output1[55]=5.*t472*t532*t602*var3[5] + 20.*t472*t515*t589*t590*var3[16] - 5.*t472*t532*t602*var3[16] + 30.*t472*t571*t574*t575*var3[27] - 20.*t472*t515*t589*t590*var3[27] + 20.*t472*t529*t530*t563*var3[38] - 30.*t472*t571*t574*t575*var3[38] + 5.*t472*t503*t522*var3[49] - 20.*t472*t529*t530*t563*var3[49] - 5.*t472*t503*t522*var3[60];
  p_output1[56]=5.*t433*t462*t532*t602*var3[5] + 20.*t433*t462*t515*t589*t590*var3[16] - 5.*t433*t462*t532*t602*var3[16] + 30.*t433*t462*t571*t574*t575*var3[27] - 20.*t433*t462*t515*t589*t590*var3[27] + 20.*t433*t462*t529*t530*t563*var3[38] - 30.*t433*t462*t571*t574*t575*var3[38] + 5.*t433*t462*t503*t522*var3[49] - 20.*t433*t462*t529*t530*t563*var3[49] - 5.*t433*t462*t503*t522*var3[60];
  p_output1[57]=1.;
  p_output1[58]=t666;
  p_output1[59]=t667;
  p_output1[60]=t678;
  p_output1[61]=t679;
  p_output1[62]=t681;
  p_output1[63]=t697;
  p_output1[64]=-5.*t602*t714*var3[5] + 5.*t532*t602*var3[16] - 5.*t515*t589*t602*var3[16] - 20.*t515*t532*t590*t714*var3[16] - 20.*t571*t574*t590*var3[27] + 20.*t515*t589*t590*var3[27] - 30.*t574*t575*t589*t714*var3[27] - 30.*t529*t530*t575*var3[38] + 30.*t571*t574*t575*var3[38] - 20.*t530*t563*t571*t714*var3[38] - 20.*t503*t522*t563*var3[49] + 20.*t529*t530*t563*var3[49] - 5.*t522*t529*t714*var3[49] + 5.*t503*t522*var3[60] - 5.*t689*t702*var3[60];
  p_output1[65]=-5.*t515*t589*t602*var3[5] - 20.*t571*t574*t590*var3[16] + 5.*t515*t589*t602*var3[16] - 30.*t529*t530*t575*var3[27] + 20.*t571*t574*t590*var3[27] - 20.*t503*t522*t563*var3[38] + 30.*t529*t530*t575*var3[38] + 20.*t503*t522*t563*var3[49] - 5.*t689*t702*var3[49] + 5.*t689*t702*var3[60];
  p_output1[66]=5.*t472*t532*t602*var3[6] + 20.*t472*t515*t589*t590*var3[17] - 5.*t472*t532*t602*var3[17] + 30.*t472*t571*t574*t575*var3[28] - 20.*t472*t515*t589*t590*var3[28] + 20.*t472*t529*t530*t563*var3[39] - 30.*t472*t571*t574*t575*var3[39] + 5.*t472*t503*t522*var3[50] - 20.*t472*t529*t530*t563*var3[50] - 5.*t472*t503*t522*var3[61];
  p_output1[67]=5.*t433*t462*t532*t602*var3[6] + 20.*t433*t462*t515*t589*t590*var3[17] - 5.*t433*t462*t532*t602*var3[17] + 30.*t433*t462*t571*t574*t575*var3[28] - 20.*t433*t462*t515*t589*t590*var3[28] + 20.*t433*t462*t529*t530*t563*var3[39] - 30.*t433*t462*t571*t574*t575*var3[39] + 5.*t433*t462*t503*t522*var3[50] - 20.*t433*t462*t529*t530*t563*var3[50] - 5.*t433*t462*t503*t522*var3[61];
  p_output1[68]=1.;
  p_output1[69]=t666;
  p_output1[70]=t667;
  p_output1[71]=t678;
  p_output1[72]=t679;
  p_output1[73]=t681;
  p_output1[74]=t697;
  p_output1[75]=-5.*t602*t714*var3[6] + 5.*t532*t602*var3[17] - 5.*t515*t589*t602*var3[17] - 20.*t515*t532*t590*t714*var3[17] - 20.*t571*t574*t590*var3[28] + 20.*t515*t589*t590*var3[28] - 30.*t574*t575*t589*t714*var3[28] - 30.*t529*t530*t575*var3[39] + 30.*t571*t574*t575*var3[39] - 20.*t530*t563*t571*t714*var3[39] - 20.*t503*t522*t563*var3[50] + 20.*t529*t530*t563*var3[50] - 5.*t522*t529*t714*var3[50] + 5.*t503*t522*var3[61] - 5.*t689*t702*var3[61];
  p_output1[76]=-5.*t515*t589*t602*var3[6] - 20.*t571*t574*t590*var3[17] + 5.*t515*t589*t602*var3[17] - 30.*t529*t530*t575*var3[28] + 20.*t571*t574*t590*var3[28] - 20.*t503*t522*t563*var3[39] + 30.*t529*t530*t575*var3[39] + 20.*t503*t522*t563*var3[50] - 5.*t689*t702*var3[50] + 5.*t689*t702*var3[61];
  p_output1[77]=5.*t472*t532*t602*var3[7] + 20.*t472*t515*t589*t590*var3[18] - 5.*t472*t532*t602*var3[18] + 30.*t472*t571*t574*t575*var3[29] - 20.*t472*t515*t589*t590*var3[29] + 20.*t472*t529*t530*t563*var3[40] - 30.*t472*t571*t574*t575*var3[40] + 5.*t472*t503*t522*var3[51] - 20.*t472*t529*t530*t563*var3[51] - 5.*t472*t503*t522*var3[62];
  p_output1[78]=5.*t433*t462*t532*t602*var3[7] + 20.*t433*t462*t515*t589*t590*var3[18] - 5.*t433*t462*t532*t602*var3[18] + 30.*t433*t462*t571*t574*t575*var3[29] - 20.*t433*t462*t515*t589*t590*var3[29] + 20.*t433*t462*t529*t530*t563*var3[40] - 30.*t433*t462*t571*t574*t575*var3[40] + 5.*t433*t462*t503*t522*var3[51] - 20.*t433*t462*t529*t530*t563*var3[51] - 5.*t433*t462*t503*t522*var3[62];
  p_output1[79]=1.;
  p_output1[80]=t666;
  p_output1[81]=t667;
  p_output1[82]=t678;
  p_output1[83]=t679;
  p_output1[84]=t681;
  p_output1[85]=t697;
  p_output1[86]=-5.*t602*t714*var3[7] + 5.*t532*t602*var3[18] - 5.*t515*t589*t602*var3[18] - 20.*t515*t532*t590*t714*var3[18] - 20.*t571*t574*t590*var3[29] + 20.*t515*t589*t590*var3[29] - 30.*t574*t575*t589*t714*var3[29] - 30.*t529*t530*t575*var3[40] + 30.*t571*t574*t575*var3[40] - 20.*t530*t563*t571*t714*var3[40] - 20.*t503*t522*t563*var3[51] + 20.*t529*t530*t563*var3[51] - 5.*t522*t529*t714*var3[51] + 5.*t503*t522*var3[62] - 5.*t689*t702*var3[62];
  p_output1[87]=-5.*t515*t589*t602*var3[7] - 20.*t571*t574*t590*var3[18] + 5.*t515*t589*t602*var3[18] - 30.*t529*t530*t575*var3[29] + 20.*t571*t574*t590*var3[29] - 20.*t503*t522*t563*var3[40] + 30.*t529*t530*t575*var3[40] + 20.*t503*t522*t563*var3[51] - 5.*t689*t702*var3[51] + 5.*t689*t702*var3[62];
  p_output1[88]=5.*t472*t532*t602*var3[8] + 20.*t472*t515*t589*t590*var3[19] - 5.*t472*t532*t602*var3[19] + 30.*t472*t571*t574*t575*var3[30] - 20.*t472*t515*t589*t590*var3[30] + 20.*t472*t529*t530*t563*var3[41] - 30.*t472*t571*t574*t575*var3[41] + 5.*t472*t503*t522*var3[52] - 20.*t472*t529*t530*t563*var3[52] - 5.*t472*t503*t522*var3[63];
  p_output1[89]=5.*t433*t462*t532*t602*var3[8] + 20.*t433*t462*t515*t589*t590*var3[19] - 5.*t433*t462*t532*t602*var3[19] + 30.*t433*t462*t571*t574*t575*var3[30] - 20.*t433*t462*t515*t589*t590*var3[30] + 20.*t433*t462*t529*t530*t563*var3[41] - 30.*t433*t462*t571*t574*t575*var3[41] + 5.*t433*t462*t503*t522*var3[52] - 20.*t433*t462*t529*t530*t563*var3[52] - 5.*t433*t462*t503*t522*var3[63];
  p_output1[90]=1.;
  p_output1[91]=t666;
  p_output1[92]=t667;
  p_output1[93]=t678;
  p_output1[94]=t679;
  p_output1[95]=t681;
  p_output1[96]=t697;
  p_output1[97]=-5.*t602*t714*var3[8] + 5.*t532*t602*var3[19] - 5.*t515*t589*t602*var3[19] - 20.*t515*t532*t590*t714*var3[19] - 20.*t571*t574*t590*var3[30] + 20.*t515*t589*t590*var3[30] - 30.*t574*t575*t589*t714*var3[30] - 30.*t529*t530*t575*var3[41] + 30.*t571*t574*t575*var3[41] - 20.*t530*t563*t571*t714*var3[41] - 20.*t503*t522*t563*var3[52] + 20.*t529*t530*t563*var3[52] - 5.*t522*t529*t714*var3[52] + 5.*t503*t522*var3[63] - 5.*t689*t702*var3[63];
  p_output1[98]=-5.*t515*t589*t602*var3[8] - 20.*t571*t574*t590*var3[19] + 5.*t515*t589*t602*var3[19] - 30.*t529*t530*t575*var3[30] + 20.*t571*t574*t590*var3[30] - 20.*t503*t522*t563*var3[41] + 30.*t529*t530*t575*var3[41] + 20.*t503*t522*t563*var3[52] - 5.*t689*t702*var3[52] + 5.*t689*t702*var3[63];
  p_output1[99]=5.*t472*t532*t602*var3[9] + 20.*t472*t515*t589*t590*var3[20] - 5.*t472*t532*t602*var3[20] + 30.*t472*t571*t574*t575*var3[31] - 20.*t472*t515*t589*t590*var3[31] + 20.*t472*t529*t530*t563*var3[42] - 30.*t472*t571*t574*t575*var3[42] + 5.*t472*t503*t522*var3[53] - 20.*t472*t529*t530*t563*var3[53] - 5.*t472*t503*t522*var3[64];
  p_output1[100]=5.*t433*t462*t532*t602*var3[9] + 20.*t433*t462*t515*t589*t590*var3[20] - 5.*t433*t462*t532*t602*var3[20] + 30.*t433*t462*t571*t574*t575*var3[31] - 20.*t433*t462*t515*t589*t590*var3[31] + 20.*t433*t462*t529*t530*t563*var3[42] - 30.*t433*t462*t571*t574*t575*var3[42] + 5.*t433*t462*t503*t522*var3[53] - 20.*t433*t462*t529*t530*t563*var3[53] - 5.*t433*t462*t503*t522*var3[64];
  p_output1[101]=1.;
  p_output1[102]=t666;
  p_output1[103]=t667;
  p_output1[104]=t678;
  p_output1[105]=t679;
  p_output1[106]=t681;
  p_output1[107]=t697;
  p_output1[108]=-5.*t602*t714*var3[9] + 5.*t532*t602*var3[20] - 5.*t515*t589*t602*var3[20] - 20.*t515*t532*t590*t714*var3[20] - 20.*t571*t574*t590*var3[31] + 20.*t515*t589*t590*var3[31] - 30.*t574*t575*t589*t714*var3[31] - 30.*t529*t530*t575*var3[42] + 30.*t571*t574*t575*var3[42] - 20.*t530*t563*t571*t714*var3[42] - 20.*t503*t522*t563*var3[53] + 20.*t529*t530*t563*var3[53] - 5.*t522*t529*t714*var3[53] + 5.*t503*t522*var3[64] - 5.*t689*t702*var3[64];
  p_output1[109]=-5.*t515*t589*t602*var3[9] - 20.*t571*t574*t590*var3[20] + 5.*t515*t589*t602*var3[20] - 30.*t529*t530*t575*var3[31] + 20.*t571*t574*t590*var3[31] - 20.*t503*t522*t563*var3[42] + 30.*t529*t530*t575*var3[42] + 20.*t503*t522*t563*var3[53] - 5.*t689*t702*var3[53] + 5.*t689*t702*var3[64];
  p_output1[110]=5.*t472*t532*t602*var3[10] + 20.*t472*t515*t589*t590*var3[21] - 5.*t472*t532*t602*var3[21] + 30.*t472*t571*t574*t575*var3[32] - 20.*t472*t515*t589*t590*var3[32] + 20.*t472*t529*t530*t563*var3[43] - 30.*t472*t571*t574*t575*var3[43] + 5.*t472*t503*t522*var3[54] - 20.*t472*t529*t530*t563*var3[54] - 5.*t472*t503*t522*var3[65];
  p_output1[111]=5.*t433*t462*t532*t602*var3[10] + 20.*t433*t462*t515*t589*t590*var3[21] - 5.*t433*t462*t532*t602*var3[21] + 30.*t433*t462*t571*t574*t575*var3[32] - 20.*t433*t462*t515*t589*t590*var3[32] + 20.*t433*t462*t529*t530*t563*var3[43] - 30.*t433*t462*t571*t574*t575*var3[43] + 5.*t433*t462*t503*t522*var3[54] - 20.*t433*t462*t529*t530*t563*var3[54] - 5.*t433*t462*t503*t522*var3[65];
  p_output1[112]=1.;
  p_output1[113]=t666;
  p_output1[114]=t667;
  p_output1[115]=t678;
  p_output1[116]=t679;
  p_output1[117]=t681;
  p_output1[118]=t697;
  p_output1[119]=-5.*t602*t714*var3[10] + 5.*t532*t602*var3[21] - 5.*t515*t589*t602*var3[21] - 20.*t515*t532*t590*t714*var3[21] - 20.*t571*t574*t590*var3[32] + 20.*t515*t589*t590*var3[32] - 30.*t574*t575*t589*t714*var3[32] - 30.*t529*t530*t575*var3[43] + 30.*t571*t574*t575*var3[43] - 20.*t530*t563*t571*t714*var3[43] - 20.*t503*t522*t563*var3[54] + 20.*t529*t530*t563*var3[54] - 5.*t522*t529*t714*var3[54] + 5.*t503*t522*var3[65] - 5.*t689*t702*var3[65];
  p_output1[120]=-5.*t515*t589*t602*var3[10] - 20.*t571*t574*t590*var3[21] + 5.*t515*t589*t602*var3[21] - 30.*t529*t530*t575*var3[32] + 20.*t571*t574*t590*var3[32] - 20.*t503*t522*t563*var3[43] + 30.*t529*t530*t575*var3[43] + 20.*t503*t522*t563*var3[54] - 5.*t689*t702*var3[54] + 5.*t689*t702*var3[65];
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
