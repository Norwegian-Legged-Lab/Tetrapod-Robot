/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 17:54:39 GMT+02:00
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
  double t60;
  double t681;
  double t882;
  double t972;
  double t981;
  double t1377;
  double t1397;
  double t2079;
  double t2137;
  double t2414;
  double t2489;
  double t2555;
  double t3549;
  double t3668;
  double t3844;
  double t4683;
  double t5206;
  double t11591;
  double t12432;
  double t3863;
  double t3868;
  double t3997;
  double t4013;
  double t4027;
  double t4053;
  double t4081;
  double t4355;
  double t4615;
  double t4658;
  double t4756;
  double t4757;
  double t4985;
  double t4986;
  t60 = -1.*var3[0];
  t681 = t60 + var3[1];
  t882 = Power(t681,-5);
  t972 = t60 + var1[0];
  t981 = Power(t972,3);
  t1377 = Power(t681,-4);
  t1397 = Power(t972,2);
  t2079 = 1/t681;
  t2137 = -1.*t2079*t972;
  t2414 = 1. + t2137;
  t2489 = Power(t681,-3);
  t2555 = Power(t2414,2);
  t3549 = Power(t681,-2);
  t3668 = Power(t2414,3);
  t3844 = Power(t2414,4);
  t4683 = Power(t972,4);
  t5206 = Power(t681,-6);
  t11591 = -1.*t3549*t972;
  t12432 = t2079 + t11591;
  t3863 = -5.*t2079*t3844;
  t3868 = -20.*t3549*t972*t3668;
  t3997 = 5.*t2079*t3844;
  t4013 = t3868 + t3997;
  t4027 = -30.*t2489*t1397*t2555;
  t4053 = 20.*t3549*t972*t3668;
  t4081 = t4027 + t4053;
  t4355 = -20.*t1377*t981*t2414;
  t4615 = 30.*t2489*t1397*t2555;
  t4658 = t4355 + t4615;
  t4756 = -5.*t882*t4683;
  t4757 = 20.*t1377*t981*t2414;
  t4985 = t4756 + t4757;
  t4986 = 5.*t882*t4683;
  p_output1[0]=20.*t3549*t3668*var2[0] - 40.*t3549*t3668*var2[14] + 60.*t2489*t2555*t972*var2[14] + 60.*t1377*t1397*t2414*var2[28] + 20.*t3549*t3668*var2[28] - 120.*t2489*t2555*t972*var2[28] - 120.*t1377*t1397*t2414*var2[42] + 60.*t2489*t2555*t972*var2[42] + 20.*t882*t981*var2[42] + 60.*t1377*t1397*t2414*var2[56] - 40.*t882*t981*var2[56] + 20.*t882*t981*var2[70];
  p_output1[1]=t3863;
  p_output1[2]=t4013;
  p_output1[3]=t4081;
  p_output1[4]=t4658;
  p_output1[5]=t4985;
  p_output1[6]=t4986;
  p_output1[7]=-20.*t12432*t2079*t3668*var2[0] - 5.*t3549*t3844*var2[0] + 20.*t12432*t2079*t3668*var2[14] + 20.*t3549*t3668*var2[14] + 5.*t3549*t3844*var2[14] - 60.*t12432*t2555*t3549*t972*var2[14] - 40.*t2489*t3668*t972*var2[14] - 60.*t12432*t1397*t2414*t2489*var2[28] - 90.*t1377*t1397*t2555*var2[28] - 20.*t3549*t3668*var2[28] + 60.*t2489*t2555*t972*var2[28] + 60.*t12432*t2555*t3549*t972*var2[28] + 40.*t2489*t3668*t972*var2[28] + 60.*t1377*t1397*t2414*var2[42] + 60.*t12432*t1397*t2414*t2489*var2[42] + 90.*t1377*t1397*t2555*var2[42] - 60.*t2489*t2555*t972*var2[42] - 20.*t12432*t1377*t981*var2[42] - 80.*t2414*t882*t981*var2[42] - 60.*t1377*t1397*t2414*var2[56] - 25.*t4683*t5206*var2[56] + 20.*t12432*t1377*t981*var2[56] + 20.*t882*t981*var2[56] + 80.*t2414*t882*t981*var2[56] + 25.*t4683*t5206*var2[70] - 20.*t882*t981*var2[70];
  p_output1[8]=5.*t3549*t3844*var2[0] - 20.*t2489*t3668*t972*var2[0] - 60.*t1377*t1397*t2555*var2[14] - 5.*t3549*t3844*var2[14] + 60.*t2489*t3668*t972*var2[14] + 150.*t1377*t1397*t2555*var2[28] - 40.*t2489*t3668*t972*var2[28] - 60.*t2414*t882*t981*var2[28] - 90.*t1377*t1397*t2555*var2[42] - 20.*t4683*t5206*var2[42] + 140.*t2414*t882*t981*var2[42] + 45.*t4683*t5206*var2[56] - 80.*t2414*t882*t981*var2[56] - 25.*t4683*t5206*var2[70];
  p_output1[9]=20.*t3549*t3668*var2[1] - 40.*t3549*t3668*var2[15] + 60.*t2489*t2555*t972*var2[15] + 60.*t1377*t1397*t2414*var2[29] + 20.*t3549*t3668*var2[29] - 120.*t2489*t2555*t972*var2[29] - 120.*t1377*t1397*t2414*var2[43] + 60.*t2489*t2555*t972*var2[43] + 20.*t882*t981*var2[43] + 60.*t1377*t1397*t2414*var2[57] - 40.*t882*t981*var2[57] + 20.*t882*t981*var2[71];
  p_output1[10]=t3863;
  p_output1[11]=t4013;
  p_output1[12]=t4081;
  p_output1[13]=t4658;
  p_output1[14]=t4985;
  p_output1[15]=t4986;
  p_output1[16]=-20.*t12432*t2079*t3668*var2[1] - 5.*t3549*t3844*var2[1] + 20.*t12432*t2079*t3668*var2[15] + 20.*t3549*t3668*var2[15] + 5.*t3549*t3844*var2[15] - 60.*t12432*t2555*t3549*t972*var2[15] - 40.*t2489*t3668*t972*var2[15] - 60.*t12432*t1397*t2414*t2489*var2[29] - 90.*t1377*t1397*t2555*var2[29] - 20.*t3549*t3668*var2[29] + 60.*t2489*t2555*t972*var2[29] + 60.*t12432*t2555*t3549*t972*var2[29] + 40.*t2489*t3668*t972*var2[29] + 60.*t1377*t1397*t2414*var2[43] + 60.*t12432*t1397*t2414*t2489*var2[43] + 90.*t1377*t1397*t2555*var2[43] - 60.*t2489*t2555*t972*var2[43] - 20.*t12432*t1377*t981*var2[43] - 80.*t2414*t882*t981*var2[43] - 60.*t1377*t1397*t2414*var2[57] - 25.*t4683*t5206*var2[57] + 20.*t12432*t1377*t981*var2[57] + 20.*t882*t981*var2[57] + 80.*t2414*t882*t981*var2[57] + 25.*t4683*t5206*var2[71] - 20.*t882*t981*var2[71];
  p_output1[17]=5.*t3549*t3844*var2[1] - 20.*t2489*t3668*t972*var2[1] - 60.*t1377*t1397*t2555*var2[15] - 5.*t3549*t3844*var2[15] + 60.*t2489*t3668*t972*var2[15] + 150.*t1377*t1397*t2555*var2[29] - 40.*t2489*t3668*t972*var2[29] - 60.*t2414*t882*t981*var2[29] - 90.*t1377*t1397*t2555*var2[43] - 20.*t4683*t5206*var2[43] + 140.*t2414*t882*t981*var2[43] + 45.*t4683*t5206*var2[57] - 80.*t2414*t882*t981*var2[57] - 25.*t4683*t5206*var2[71];
  p_output1[18]=20.*t3549*t3668*var2[2] - 40.*t3549*t3668*var2[16] + 60.*t2489*t2555*t972*var2[16] + 60.*t1377*t1397*t2414*var2[30] + 20.*t3549*t3668*var2[30] - 120.*t2489*t2555*t972*var2[30] - 120.*t1377*t1397*t2414*var2[44] + 60.*t2489*t2555*t972*var2[44] + 20.*t882*t981*var2[44] + 60.*t1377*t1397*t2414*var2[58] - 40.*t882*t981*var2[58] + 20.*t882*t981*var2[72];
  p_output1[19]=t3863;
  p_output1[20]=t4013;
  p_output1[21]=t4081;
  p_output1[22]=t4658;
  p_output1[23]=t4985;
  p_output1[24]=t4986;
  p_output1[25]=-20.*t12432*t2079*t3668*var2[2] - 5.*t3549*t3844*var2[2] + 20.*t12432*t2079*t3668*var2[16] + 20.*t3549*t3668*var2[16] + 5.*t3549*t3844*var2[16] - 60.*t12432*t2555*t3549*t972*var2[16] - 40.*t2489*t3668*t972*var2[16] - 60.*t12432*t1397*t2414*t2489*var2[30] - 90.*t1377*t1397*t2555*var2[30] - 20.*t3549*t3668*var2[30] + 60.*t2489*t2555*t972*var2[30] + 60.*t12432*t2555*t3549*t972*var2[30] + 40.*t2489*t3668*t972*var2[30] + 60.*t1377*t1397*t2414*var2[44] + 60.*t12432*t1397*t2414*t2489*var2[44] + 90.*t1377*t1397*t2555*var2[44] - 60.*t2489*t2555*t972*var2[44] - 20.*t12432*t1377*t981*var2[44] - 80.*t2414*t882*t981*var2[44] - 60.*t1377*t1397*t2414*var2[58] - 25.*t4683*t5206*var2[58] + 20.*t12432*t1377*t981*var2[58] + 20.*t882*t981*var2[58] + 80.*t2414*t882*t981*var2[58] + 25.*t4683*t5206*var2[72] - 20.*t882*t981*var2[72];
  p_output1[26]=5.*t3549*t3844*var2[2] - 20.*t2489*t3668*t972*var2[2] - 60.*t1377*t1397*t2555*var2[16] - 5.*t3549*t3844*var2[16] + 60.*t2489*t3668*t972*var2[16] + 150.*t1377*t1397*t2555*var2[30] - 40.*t2489*t3668*t972*var2[30] - 60.*t2414*t882*t981*var2[30] - 90.*t1377*t1397*t2555*var2[44] - 20.*t4683*t5206*var2[44] + 140.*t2414*t882*t981*var2[44] + 45.*t4683*t5206*var2[58] - 80.*t2414*t882*t981*var2[58] - 25.*t4683*t5206*var2[72];
  p_output1[27]=20.*t3549*t3668*var2[3] - 40.*t3549*t3668*var2[17] + 60.*t2489*t2555*t972*var2[17] + 60.*t1377*t1397*t2414*var2[31] + 20.*t3549*t3668*var2[31] - 120.*t2489*t2555*t972*var2[31] - 120.*t1377*t1397*t2414*var2[45] + 60.*t2489*t2555*t972*var2[45] + 20.*t882*t981*var2[45] + 60.*t1377*t1397*t2414*var2[59] - 40.*t882*t981*var2[59] + 20.*t882*t981*var2[73];
  p_output1[28]=t3863;
  p_output1[29]=t4013;
  p_output1[30]=t4081;
  p_output1[31]=t4658;
  p_output1[32]=t4985;
  p_output1[33]=t4986;
  p_output1[34]=-20.*t12432*t2079*t3668*var2[3] - 5.*t3549*t3844*var2[3] + 20.*t12432*t2079*t3668*var2[17] + 20.*t3549*t3668*var2[17] + 5.*t3549*t3844*var2[17] - 60.*t12432*t2555*t3549*t972*var2[17] - 40.*t2489*t3668*t972*var2[17] - 60.*t12432*t1397*t2414*t2489*var2[31] - 90.*t1377*t1397*t2555*var2[31] - 20.*t3549*t3668*var2[31] + 60.*t2489*t2555*t972*var2[31] + 60.*t12432*t2555*t3549*t972*var2[31] + 40.*t2489*t3668*t972*var2[31] + 60.*t1377*t1397*t2414*var2[45] + 60.*t12432*t1397*t2414*t2489*var2[45] + 90.*t1377*t1397*t2555*var2[45] - 60.*t2489*t2555*t972*var2[45] - 20.*t12432*t1377*t981*var2[45] - 80.*t2414*t882*t981*var2[45] - 60.*t1377*t1397*t2414*var2[59] - 25.*t4683*t5206*var2[59] + 20.*t12432*t1377*t981*var2[59] + 20.*t882*t981*var2[59] + 80.*t2414*t882*t981*var2[59] + 25.*t4683*t5206*var2[73] - 20.*t882*t981*var2[73];
  p_output1[35]=5.*t3549*t3844*var2[3] - 20.*t2489*t3668*t972*var2[3] - 60.*t1377*t1397*t2555*var2[17] - 5.*t3549*t3844*var2[17] + 60.*t2489*t3668*t972*var2[17] + 150.*t1377*t1397*t2555*var2[31] - 40.*t2489*t3668*t972*var2[31] - 60.*t2414*t882*t981*var2[31] - 90.*t1377*t1397*t2555*var2[45] - 20.*t4683*t5206*var2[45] + 140.*t2414*t882*t981*var2[45] + 45.*t4683*t5206*var2[59] - 80.*t2414*t882*t981*var2[59] - 25.*t4683*t5206*var2[73];
  p_output1[36]=20.*t3549*t3668*var2[4] - 40.*t3549*t3668*var2[18] + 60.*t2489*t2555*t972*var2[18] + 60.*t1377*t1397*t2414*var2[32] + 20.*t3549*t3668*var2[32] - 120.*t2489*t2555*t972*var2[32] - 120.*t1377*t1397*t2414*var2[46] + 60.*t2489*t2555*t972*var2[46] + 20.*t882*t981*var2[46] + 60.*t1377*t1397*t2414*var2[60] - 40.*t882*t981*var2[60] + 20.*t882*t981*var2[74];
  p_output1[37]=t3863;
  p_output1[38]=t4013;
  p_output1[39]=t4081;
  p_output1[40]=t4658;
  p_output1[41]=t4985;
  p_output1[42]=t4986;
  p_output1[43]=-20.*t12432*t2079*t3668*var2[4] - 5.*t3549*t3844*var2[4] + 20.*t12432*t2079*t3668*var2[18] + 20.*t3549*t3668*var2[18] + 5.*t3549*t3844*var2[18] - 60.*t12432*t2555*t3549*t972*var2[18] - 40.*t2489*t3668*t972*var2[18] - 60.*t12432*t1397*t2414*t2489*var2[32] - 90.*t1377*t1397*t2555*var2[32] - 20.*t3549*t3668*var2[32] + 60.*t2489*t2555*t972*var2[32] + 60.*t12432*t2555*t3549*t972*var2[32] + 40.*t2489*t3668*t972*var2[32] + 60.*t1377*t1397*t2414*var2[46] + 60.*t12432*t1397*t2414*t2489*var2[46] + 90.*t1377*t1397*t2555*var2[46] - 60.*t2489*t2555*t972*var2[46] - 20.*t12432*t1377*t981*var2[46] - 80.*t2414*t882*t981*var2[46] - 60.*t1377*t1397*t2414*var2[60] - 25.*t4683*t5206*var2[60] + 20.*t12432*t1377*t981*var2[60] + 20.*t882*t981*var2[60] + 80.*t2414*t882*t981*var2[60] + 25.*t4683*t5206*var2[74] - 20.*t882*t981*var2[74];
  p_output1[44]=5.*t3549*t3844*var2[4] - 20.*t2489*t3668*t972*var2[4] - 60.*t1377*t1397*t2555*var2[18] - 5.*t3549*t3844*var2[18] + 60.*t2489*t3668*t972*var2[18] + 150.*t1377*t1397*t2555*var2[32] - 40.*t2489*t3668*t972*var2[32] - 60.*t2414*t882*t981*var2[32] - 90.*t1377*t1397*t2555*var2[46] - 20.*t4683*t5206*var2[46] + 140.*t2414*t882*t981*var2[46] + 45.*t4683*t5206*var2[60] - 80.*t2414*t882*t981*var2[60] - 25.*t4683*t5206*var2[74];
  p_output1[45]=20.*t3549*t3668*var2[5] - 40.*t3549*t3668*var2[19] + 60.*t2489*t2555*t972*var2[19] + 60.*t1377*t1397*t2414*var2[33] + 20.*t3549*t3668*var2[33] - 120.*t2489*t2555*t972*var2[33] - 120.*t1377*t1397*t2414*var2[47] + 60.*t2489*t2555*t972*var2[47] + 20.*t882*t981*var2[47] + 60.*t1377*t1397*t2414*var2[61] - 40.*t882*t981*var2[61] + 20.*t882*t981*var2[75];
  p_output1[46]=t3863;
  p_output1[47]=t4013;
  p_output1[48]=t4081;
  p_output1[49]=t4658;
  p_output1[50]=t4985;
  p_output1[51]=t4986;
  p_output1[52]=-20.*t12432*t2079*t3668*var2[5] - 5.*t3549*t3844*var2[5] + 20.*t12432*t2079*t3668*var2[19] + 20.*t3549*t3668*var2[19] + 5.*t3549*t3844*var2[19] - 60.*t12432*t2555*t3549*t972*var2[19] - 40.*t2489*t3668*t972*var2[19] - 60.*t12432*t1397*t2414*t2489*var2[33] - 90.*t1377*t1397*t2555*var2[33] - 20.*t3549*t3668*var2[33] + 60.*t2489*t2555*t972*var2[33] + 60.*t12432*t2555*t3549*t972*var2[33] + 40.*t2489*t3668*t972*var2[33] + 60.*t1377*t1397*t2414*var2[47] + 60.*t12432*t1397*t2414*t2489*var2[47] + 90.*t1377*t1397*t2555*var2[47] - 60.*t2489*t2555*t972*var2[47] - 20.*t12432*t1377*t981*var2[47] - 80.*t2414*t882*t981*var2[47] - 60.*t1377*t1397*t2414*var2[61] - 25.*t4683*t5206*var2[61] + 20.*t12432*t1377*t981*var2[61] + 20.*t882*t981*var2[61] + 80.*t2414*t882*t981*var2[61] + 25.*t4683*t5206*var2[75] - 20.*t882*t981*var2[75];
  p_output1[53]=5.*t3549*t3844*var2[5] - 20.*t2489*t3668*t972*var2[5] - 60.*t1377*t1397*t2555*var2[19] - 5.*t3549*t3844*var2[19] + 60.*t2489*t3668*t972*var2[19] + 150.*t1377*t1397*t2555*var2[33] - 40.*t2489*t3668*t972*var2[33] - 60.*t2414*t882*t981*var2[33] - 90.*t1377*t1397*t2555*var2[47] - 20.*t4683*t5206*var2[47] + 140.*t2414*t882*t981*var2[47] + 45.*t4683*t5206*var2[61] - 80.*t2414*t882*t981*var2[61] - 25.*t4683*t5206*var2[75];
  p_output1[54]=20.*t3549*t3668*var2[6] - 40.*t3549*t3668*var2[20] + 60.*t2489*t2555*t972*var2[20] + 60.*t1377*t1397*t2414*var2[34] + 20.*t3549*t3668*var2[34] - 120.*t2489*t2555*t972*var2[34] - 120.*t1377*t1397*t2414*var2[48] + 60.*t2489*t2555*t972*var2[48] + 20.*t882*t981*var2[48] + 60.*t1377*t1397*t2414*var2[62] - 40.*t882*t981*var2[62] + 20.*t882*t981*var2[76];
  p_output1[55]=t3863;
  p_output1[56]=t4013;
  p_output1[57]=t4081;
  p_output1[58]=t4658;
  p_output1[59]=t4985;
  p_output1[60]=t4986;
  p_output1[61]=-20.*t12432*t2079*t3668*var2[6] - 5.*t3549*t3844*var2[6] + 20.*t12432*t2079*t3668*var2[20] + 20.*t3549*t3668*var2[20] + 5.*t3549*t3844*var2[20] - 60.*t12432*t2555*t3549*t972*var2[20] - 40.*t2489*t3668*t972*var2[20] - 60.*t12432*t1397*t2414*t2489*var2[34] - 90.*t1377*t1397*t2555*var2[34] - 20.*t3549*t3668*var2[34] + 60.*t2489*t2555*t972*var2[34] + 60.*t12432*t2555*t3549*t972*var2[34] + 40.*t2489*t3668*t972*var2[34] + 60.*t1377*t1397*t2414*var2[48] + 60.*t12432*t1397*t2414*t2489*var2[48] + 90.*t1377*t1397*t2555*var2[48] - 60.*t2489*t2555*t972*var2[48] - 20.*t12432*t1377*t981*var2[48] - 80.*t2414*t882*t981*var2[48] - 60.*t1377*t1397*t2414*var2[62] - 25.*t4683*t5206*var2[62] + 20.*t12432*t1377*t981*var2[62] + 20.*t882*t981*var2[62] + 80.*t2414*t882*t981*var2[62] + 25.*t4683*t5206*var2[76] - 20.*t882*t981*var2[76];
  p_output1[62]=5.*t3549*t3844*var2[6] - 20.*t2489*t3668*t972*var2[6] - 60.*t1377*t1397*t2555*var2[20] - 5.*t3549*t3844*var2[20] + 60.*t2489*t3668*t972*var2[20] + 150.*t1377*t1397*t2555*var2[34] - 40.*t2489*t3668*t972*var2[34] - 60.*t2414*t882*t981*var2[34] - 90.*t1377*t1397*t2555*var2[48] - 20.*t4683*t5206*var2[48] + 140.*t2414*t882*t981*var2[48] + 45.*t4683*t5206*var2[62] - 80.*t2414*t882*t981*var2[62] - 25.*t4683*t5206*var2[76];
  p_output1[63]=20.*t3549*t3668*var2[7] - 40.*t3549*t3668*var2[21] + 60.*t2489*t2555*t972*var2[21] + 60.*t1377*t1397*t2414*var2[35] + 20.*t3549*t3668*var2[35] - 120.*t2489*t2555*t972*var2[35] - 120.*t1377*t1397*t2414*var2[49] + 60.*t2489*t2555*t972*var2[49] + 20.*t882*t981*var2[49] + 60.*t1377*t1397*t2414*var2[63] - 40.*t882*t981*var2[63] + 20.*t882*t981*var2[77];
  p_output1[64]=t3863;
  p_output1[65]=t4013;
  p_output1[66]=t4081;
  p_output1[67]=t4658;
  p_output1[68]=t4985;
  p_output1[69]=t4986;
  p_output1[70]=-20.*t12432*t2079*t3668*var2[7] - 5.*t3549*t3844*var2[7] + 20.*t12432*t2079*t3668*var2[21] + 20.*t3549*t3668*var2[21] + 5.*t3549*t3844*var2[21] - 60.*t12432*t2555*t3549*t972*var2[21] - 40.*t2489*t3668*t972*var2[21] - 60.*t12432*t1397*t2414*t2489*var2[35] - 90.*t1377*t1397*t2555*var2[35] - 20.*t3549*t3668*var2[35] + 60.*t2489*t2555*t972*var2[35] + 60.*t12432*t2555*t3549*t972*var2[35] + 40.*t2489*t3668*t972*var2[35] + 60.*t1377*t1397*t2414*var2[49] + 60.*t12432*t1397*t2414*t2489*var2[49] + 90.*t1377*t1397*t2555*var2[49] - 60.*t2489*t2555*t972*var2[49] - 20.*t12432*t1377*t981*var2[49] - 80.*t2414*t882*t981*var2[49] - 60.*t1377*t1397*t2414*var2[63] - 25.*t4683*t5206*var2[63] + 20.*t12432*t1377*t981*var2[63] + 20.*t882*t981*var2[63] + 80.*t2414*t882*t981*var2[63] + 25.*t4683*t5206*var2[77] - 20.*t882*t981*var2[77];
  p_output1[71]=5.*t3549*t3844*var2[7] - 20.*t2489*t3668*t972*var2[7] - 60.*t1377*t1397*t2555*var2[21] - 5.*t3549*t3844*var2[21] + 60.*t2489*t3668*t972*var2[21] + 150.*t1377*t1397*t2555*var2[35] - 40.*t2489*t3668*t972*var2[35] - 60.*t2414*t882*t981*var2[35] - 90.*t1377*t1397*t2555*var2[49] - 20.*t4683*t5206*var2[49] + 140.*t2414*t882*t981*var2[49] + 45.*t4683*t5206*var2[63] - 80.*t2414*t882*t981*var2[63] - 25.*t4683*t5206*var2[77];
  p_output1[72]=20.*t3549*t3668*var2[8] - 40.*t3549*t3668*var2[22] + 60.*t2489*t2555*t972*var2[22] + 60.*t1377*t1397*t2414*var2[36] + 20.*t3549*t3668*var2[36] - 120.*t2489*t2555*t972*var2[36] - 120.*t1377*t1397*t2414*var2[50] + 60.*t2489*t2555*t972*var2[50] + 20.*t882*t981*var2[50] + 60.*t1377*t1397*t2414*var2[64] - 40.*t882*t981*var2[64] + 20.*t882*t981*var2[78];
  p_output1[73]=t3863;
  p_output1[74]=t4013;
  p_output1[75]=t4081;
  p_output1[76]=t4658;
  p_output1[77]=t4985;
  p_output1[78]=t4986;
  p_output1[79]=-20.*t12432*t2079*t3668*var2[8] - 5.*t3549*t3844*var2[8] + 20.*t12432*t2079*t3668*var2[22] + 20.*t3549*t3668*var2[22] + 5.*t3549*t3844*var2[22] - 60.*t12432*t2555*t3549*t972*var2[22] - 40.*t2489*t3668*t972*var2[22] - 60.*t12432*t1397*t2414*t2489*var2[36] - 90.*t1377*t1397*t2555*var2[36] - 20.*t3549*t3668*var2[36] + 60.*t2489*t2555*t972*var2[36] + 60.*t12432*t2555*t3549*t972*var2[36] + 40.*t2489*t3668*t972*var2[36] + 60.*t1377*t1397*t2414*var2[50] + 60.*t12432*t1397*t2414*t2489*var2[50] + 90.*t1377*t1397*t2555*var2[50] - 60.*t2489*t2555*t972*var2[50] - 20.*t12432*t1377*t981*var2[50] - 80.*t2414*t882*t981*var2[50] - 60.*t1377*t1397*t2414*var2[64] - 25.*t4683*t5206*var2[64] + 20.*t12432*t1377*t981*var2[64] + 20.*t882*t981*var2[64] + 80.*t2414*t882*t981*var2[64] + 25.*t4683*t5206*var2[78] - 20.*t882*t981*var2[78];
  p_output1[80]=5.*t3549*t3844*var2[8] - 20.*t2489*t3668*t972*var2[8] - 60.*t1377*t1397*t2555*var2[22] - 5.*t3549*t3844*var2[22] + 60.*t2489*t3668*t972*var2[22] + 150.*t1377*t1397*t2555*var2[36] - 40.*t2489*t3668*t972*var2[36] - 60.*t2414*t882*t981*var2[36] - 90.*t1377*t1397*t2555*var2[50] - 20.*t4683*t5206*var2[50] + 140.*t2414*t882*t981*var2[50] + 45.*t4683*t5206*var2[64] - 80.*t2414*t882*t981*var2[64] - 25.*t4683*t5206*var2[78];
  p_output1[81]=20.*t3549*t3668*var2[9] - 40.*t3549*t3668*var2[23] + 60.*t2489*t2555*t972*var2[23] + 60.*t1377*t1397*t2414*var2[37] + 20.*t3549*t3668*var2[37] - 120.*t2489*t2555*t972*var2[37] - 120.*t1377*t1397*t2414*var2[51] + 60.*t2489*t2555*t972*var2[51] + 20.*t882*t981*var2[51] + 60.*t1377*t1397*t2414*var2[65] - 40.*t882*t981*var2[65] + 20.*t882*t981*var2[79];
  p_output1[82]=t3863;
  p_output1[83]=t4013;
  p_output1[84]=t4081;
  p_output1[85]=t4658;
  p_output1[86]=t4985;
  p_output1[87]=t4986;
  p_output1[88]=-20.*t12432*t2079*t3668*var2[9] - 5.*t3549*t3844*var2[9] + 20.*t12432*t2079*t3668*var2[23] + 20.*t3549*t3668*var2[23] + 5.*t3549*t3844*var2[23] - 60.*t12432*t2555*t3549*t972*var2[23] - 40.*t2489*t3668*t972*var2[23] - 60.*t12432*t1397*t2414*t2489*var2[37] - 90.*t1377*t1397*t2555*var2[37] - 20.*t3549*t3668*var2[37] + 60.*t2489*t2555*t972*var2[37] + 60.*t12432*t2555*t3549*t972*var2[37] + 40.*t2489*t3668*t972*var2[37] + 60.*t1377*t1397*t2414*var2[51] + 60.*t12432*t1397*t2414*t2489*var2[51] + 90.*t1377*t1397*t2555*var2[51] - 60.*t2489*t2555*t972*var2[51] - 20.*t12432*t1377*t981*var2[51] - 80.*t2414*t882*t981*var2[51] - 60.*t1377*t1397*t2414*var2[65] - 25.*t4683*t5206*var2[65] + 20.*t12432*t1377*t981*var2[65] + 20.*t882*t981*var2[65] + 80.*t2414*t882*t981*var2[65] + 25.*t4683*t5206*var2[79] - 20.*t882*t981*var2[79];
  p_output1[89]=5.*t3549*t3844*var2[9] - 20.*t2489*t3668*t972*var2[9] - 60.*t1377*t1397*t2555*var2[23] - 5.*t3549*t3844*var2[23] + 60.*t2489*t3668*t972*var2[23] + 150.*t1377*t1397*t2555*var2[37] - 40.*t2489*t3668*t972*var2[37] - 60.*t2414*t882*t981*var2[37] - 90.*t1377*t1397*t2555*var2[51] - 20.*t4683*t5206*var2[51] + 140.*t2414*t882*t981*var2[51] + 45.*t4683*t5206*var2[65] - 80.*t2414*t882*t981*var2[65] - 25.*t4683*t5206*var2[79];
  p_output1[90]=20.*t3549*t3668*var2[10] - 40.*t3549*t3668*var2[24] + 60.*t2489*t2555*t972*var2[24] + 60.*t1377*t1397*t2414*var2[38] + 20.*t3549*t3668*var2[38] - 120.*t2489*t2555*t972*var2[38] - 120.*t1377*t1397*t2414*var2[52] + 60.*t2489*t2555*t972*var2[52] + 20.*t882*t981*var2[52] + 60.*t1377*t1397*t2414*var2[66] - 40.*t882*t981*var2[66] + 20.*t882*t981*var2[80];
  p_output1[91]=t3863;
  p_output1[92]=t4013;
  p_output1[93]=t4081;
  p_output1[94]=t4658;
  p_output1[95]=t4985;
  p_output1[96]=t4986;
  p_output1[97]=-20.*t12432*t2079*t3668*var2[10] - 5.*t3549*t3844*var2[10] + 20.*t12432*t2079*t3668*var2[24] + 20.*t3549*t3668*var2[24] + 5.*t3549*t3844*var2[24] - 60.*t12432*t2555*t3549*t972*var2[24] - 40.*t2489*t3668*t972*var2[24] - 60.*t12432*t1397*t2414*t2489*var2[38] - 90.*t1377*t1397*t2555*var2[38] - 20.*t3549*t3668*var2[38] + 60.*t2489*t2555*t972*var2[38] + 60.*t12432*t2555*t3549*t972*var2[38] + 40.*t2489*t3668*t972*var2[38] + 60.*t1377*t1397*t2414*var2[52] + 60.*t12432*t1397*t2414*t2489*var2[52] + 90.*t1377*t1397*t2555*var2[52] - 60.*t2489*t2555*t972*var2[52] - 20.*t12432*t1377*t981*var2[52] - 80.*t2414*t882*t981*var2[52] - 60.*t1377*t1397*t2414*var2[66] - 25.*t4683*t5206*var2[66] + 20.*t12432*t1377*t981*var2[66] + 20.*t882*t981*var2[66] + 80.*t2414*t882*t981*var2[66] + 25.*t4683*t5206*var2[80] - 20.*t882*t981*var2[80];
  p_output1[98]=5.*t3549*t3844*var2[10] - 20.*t2489*t3668*t972*var2[10] - 60.*t1377*t1397*t2555*var2[24] - 5.*t3549*t3844*var2[24] + 60.*t2489*t3668*t972*var2[24] + 150.*t1377*t1397*t2555*var2[38] - 40.*t2489*t3668*t972*var2[38] - 60.*t2414*t882*t981*var2[38] - 90.*t1377*t1397*t2555*var2[52] - 20.*t4683*t5206*var2[52] + 140.*t2414*t882*t981*var2[52] + 45.*t4683*t5206*var2[66] - 80.*t2414*t882*t981*var2[66] - 25.*t4683*t5206*var2[80];
  p_output1[99]=20.*t3549*t3668*var2[11] - 40.*t3549*t3668*var2[25] + 60.*t2489*t2555*t972*var2[25] + 60.*t1377*t1397*t2414*var2[39] + 20.*t3549*t3668*var2[39] - 120.*t2489*t2555*t972*var2[39] - 120.*t1377*t1397*t2414*var2[53] + 60.*t2489*t2555*t972*var2[53] + 20.*t882*t981*var2[53] + 60.*t1377*t1397*t2414*var2[67] - 40.*t882*t981*var2[67] + 20.*t882*t981*var2[81];
  p_output1[100]=t3863;
  p_output1[101]=t4013;
  p_output1[102]=t4081;
  p_output1[103]=t4658;
  p_output1[104]=t4985;
  p_output1[105]=t4986;
  p_output1[106]=-20.*t12432*t2079*t3668*var2[11] - 5.*t3549*t3844*var2[11] + 20.*t12432*t2079*t3668*var2[25] + 20.*t3549*t3668*var2[25] + 5.*t3549*t3844*var2[25] - 60.*t12432*t2555*t3549*t972*var2[25] - 40.*t2489*t3668*t972*var2[25] - 60.*t12432*t1397*t2414*t2489*var2[39] - 90.*t1377*t1397*t2555*var2[39] - 20.*t3549*t3668*var2[39] + 60.*t2489*t2555*t972*var2[39] + 60.*t12432*t2555*t3549*t972*var2[39] + 40.*t2489*t3668*t972*var2[39] + 60.*t1377*t1397*t2414*var2[53] + 60.*t12432*t1397*t2414*t2489*var2[53] + 90.*t1377*t1397*t2555*var2[53] - 60.*t2489*t2555*t972*var2[53] - 20.*t12432*t1377*t981*var2[53] - 80.*t2414*t882*t981*var2[53] - 60.*t1377*t1397*t2414*var2[67] - 25.*t4683*t5206*var2[67] + 20.*t12432*t1377*t981*var2[67] + 20.*t882*t981*var2[67] + 80.*t2414*t882*t981*var2[67] + 25.*t4683*t5206*var2[81] - 20.*t882*t981*var2[81];
  p_output1[107]=5.*t3549*t3844*var2[11] - 20.*t2489*t3668*t972*var2[11] - 60.*t1377*t1397*t2555*var2[25] - 5.*t3549*t3844*var2[25] + 60.*t2489*t3668*t972*var2[25] + 150.*t1377*t1397*t2555*var2[39] - 40.*t2489*t3668*t972*var2[39] - 60.*t2414*t882*t981*var2[39] - 90.*t1377*t1397*t2555*var2[53] - 20.*t4683*t5206*var2[53] + 140.*t2414*t882*t981*var2[53] + 45.*t4683*t5206*var2[67] - 80.*t2414*t882*t981*var2[67] - 25.*t4683*t5206*var2[81];
  p_output1[108]=20.*t3549*t3668*var2[12] - 40.*t3549*t3668*var2[26] + 60.*t2489*t2555*t972*var2[26] + 60.*t1377*t1397*t2414*var2[40] + 20.*t3549*t3668*var2[40] - 120.*t2489*t2555*t972*var2[40] - 120.*t1377*t1397*t2414*var2[54] + 60.*t2489*t2555*t972*var2[54] + 20.*t882*t981*var2[54] + 60.*t1377*t1397*t2414*var2[68] - 40.*t882*t981*var2[68] + 20.*t882*t981*var2[82];
  p_output1[109]=t3863;
  p_output1[110]=t4013;
  p_output1[111]=t4081;
  p_output1[112]=t4658;
  p_output1[113]=t4985;
  p_output1[114]=t4986;
  p_output1[115]=-20.*t12432*t2079*t3668*var2[12] - 5.*t3549*t3844*var2[12] + 20.*t12432*t2079*t3668*var2[26] + 20.*t3549*t3668*var2[26] + 5.*t3549*t3844*var2[26] - 60.*t12432*t2555*t3549*t972*var2[26] - 40.*t2489*t3668*t972*var2[26] - 60.*t12432*t1397*t2414*t2489*var2[40] - 90.*t1377*t1397*t2555*var2[40] - 20.*t3549*t3668*var2[40] + 60.*t2489*t2555*t972*var2[40] + 60.*t12432*t2555*t3549*t972*var2[40] + 40.*t2489*t3668*t972*var2[40] + 60.*t1377*t1397*t2414*var2[54] + 60.*t12432*t1397*t2414*t2489*var2[54] + 90.*t1377*t1397*t2555*var2[54] - 60.*t2489*t2555*t972*var2[54] - 20.*t12432*t1377*t981*var2[54] - 80.*t2414*t882*t981*var2[54] - 60.*t1377*t1397*t2414*var2[68] - 25.*t4683*t5206*var2[68] + 20.*t12432*t1377*t981*var2[68] + 20.*t882*t981*var2[68] + 80.*t2414*t882*t981*var2[68] + 25.*t4683*t5206*var2[82] - 20.*t882*t981*var2[82];
  p_output1[116]=5.*t3549*t3844*var2[12] - 20.*t2489*t3668*t972*var2[12] - 60.*t1377*t1397*t2555*var2[26] - 5.*t3549*t3844*var2[26] + 60.*t2489*t3668*t972*var2[26] + 150.*t1377*t1397*t2555*var2[40] - 40.*t2489*t3668*t972*var2[40] - 60.*t2414*t882*t981*var2[40] - 90.*t1377*t1397*t2555*var2[54] - 20.*t4683*t5206*var2[54] + 140.*t2414*t882*t981*var2[54] + 45.*t4683*t5206*var2[68] - 80.*t2414*t882*t981*var2[68] - 25.*t4683*t5206*var2[82];
  p_output1[117]=20.*t3549*t3668*var2[13] - 40.*t3549*t3668*var2[27] + 60.*t2489*t2555*t972*var2[27] + 60.*t1377*t1397*t2414*var2[41] + 20.*t3549*t3668*var2[41] - 120.*t2489*t2555*t972*var2[41] - 120.*t1377*t1397*t2414*var2[55] + 60.*t2489*t2555*t972*var2[55] + 20.*t882*t981*var2[55] + 60.*t1377*t1397*t2414*var2[69] - 40.*t882*t981*var2[69] + 20.*t882*t981*var2[83];
  p_output1[118]=t3863;
  p_output1[119]=t4013;
  p_output1[120]=t4081;
  p_output1[121]=t4658;
  p_output1[122]=t4985;
  p_output1[123]=t4986;
  p_output1[124]=-20.*t12432*t2079*t3668*var2[13] - 5.*t3549*t3844*var2[13] + 20.*t12432*t2079*t3668*var2[27] + 20.*t3549*t3668*var2[27] + 5.*t3549*t3844*var2[27] - 60.*t12432*t2555*t3549*t972*var2[27] - 40.*t2489*t3668*t972*var2[27] - 60.*t12432*t1397*t2414*t2489*var2[41] - 90.*t1377*t1397*t2555*var2[41] - 20.*t3549*t3668*var2[41] + 60.*t2489*t2555*t972*var2[41] + 60.*t12432*t2555*t3549*t972*var2[41] + 40.*t2489*t3668*t972*var2[41] + 60.*t1377*t1397*t2414*var2[55] + 60.*t12432*t1397*t2414*t2489*var2[55] + 90.*t1377*t1397*t2555*var2[55] - 60.*t2489*t2555*t972*var2[55] - 20.*t12432*t1377*t981*var2[55] - 80.*t2414*t882*t981*var2[55] - 60.*t1377*t1397*t2414*var2[69] - 25.*t4683*t5206*var2[69] + 20.*t12432*t1377*t981*var2[69] + 20.*t882*t981*var2[69] + 80.*t2414*t882*t981*var2[69] + 25.*t4683*t5206*var2[83] - 20.*t882*t981*var2[83];
  p_output1[125]=5.*t3549*t3844*var2[13] - 20.*t2489*t3668*t972*var2[13] - 60.*t1377*t1397*t2555*var2[27] - 5.*t3549*t3844*var2[27] + 60.*t2489*t3668*t972*var2[27] + 150.*t1377*t1397*t2555*var2[41] - 40.*t2489*t3668*t972*var2[41] - 60.*t2414*t882*t981*var2[41] - 90.*t1377*t1397*t2555*var2[55] - 20.*t4683*t5206*var2[55] + 140.*t2414*t882*t981*var2[55] + 45.*t4683*t5206*var2[69] - 80.*t2414*t882*t981*var2[69] - 25.*t4683*t5206*var2[83];
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

#include "J_d1yd_position_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_d1yd_position_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
