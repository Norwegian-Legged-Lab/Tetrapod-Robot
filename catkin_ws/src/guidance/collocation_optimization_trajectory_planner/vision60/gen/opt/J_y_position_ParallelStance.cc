/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:37 GMT+02:00
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
  double t6892;
  double t6470;
  double t6768;
  double t6804;
  double t6820;
  double t6841;
  double t6896;
  double t6899;
  double t6911;
  double t6937;
  double t6941;
  double t6942;
  double t6953;
  double t6979;
  double t6981;
  double t6995;
  double t6996;
  double t7028;
  double t7058;
  double t7089;
  double t7110;
  double t7170;
  double t7178;
  double t7254;
  double t7505;
  double t7569;
  double t7583;
  double t7526;
  double t7409;
  double t7421;
  double t7436;
  double t7439;
  double t7441;
  double t7504;
  double t7511;
  t6892 = -1.*var4[0];
  t6470 = -1. + var5[0];
  t6768 = -1. + var6[0];
  t6804 = 1/t6768;
  t6820 = -1.*t6470*t6804;
  t6841 = 1. + t6820;
  t6896 = t6892 + var4[1];
  t6899 = Power(t6896,-5);
  t6911 = -1.*var1[0];
  t6937 = t6911 + var1[1];
  t6941 = t6470*t6804*t6937;
  t6942 = t6892 + var1[0] + t6941;
  t6953 = Power(t6942,4);
  t6979 = Power(t6896,-4);
  t6981 = Power(t6942,3);
  t6995 = 1/t6896;
  t6996 = -1.*t6995*t6942;
  t7028 = 1. + t6996;
  t7058 = Power(t6896,-3);
  t7089 = Power(t6942,2);
  t7110 = Power(t7028,2);
  t7170 = Power(t6896,-2);
  t7178 = Power(t7028,3);
  t7254 = Power(t7028,4);
  t7505 = Power(t6942,5);
  t7569 = -1.*t7170*t6942;
  t7583 = t6995 + t7569;
  t7526 = Power(t6896,-6);
  t7409 = Power(t7028,5);
  t7421 = -1.*t7409;
  t7436 = -5.*t6995*t6942*t7254;
  t7439 = -10.*t7170*t7089*t7178;
  t7441 = -10.*t7058*t6981*t7110;
  t7504 = -5.*t6979*t6953*t7028;
  t7511 = -1.*t6899*t7505;
  p_output1[0]=5.*t6841*t6995*t7254*var3[0] + 20.*t6841*t6942*t7170*t7178*var3[11] - 5.*t6841*t6995*t7254*var3[11] + 30.*t6841*t7058*t7089*t7110*var3[22] - 20.*t6841*t6942*t7170*t7178*var3[22] + 20.*t6841*t6979*t6981*t7028*var3[33] - 30.*t6841*t7058*t7089*t7110*var3[33] + 5.*t6841*t6899*t6953*var3[44] - 20.*t6841*t6979*t6981*t7028*var3[44] - 5.*t6841*t6899*t6953*var3[55];
  p_output1[1]=5.*t6470*t6804*t6995*t7254*var3[0] + 20.*t6470*t6804*t6942*t7170*t7178*var3[11] - 5.*t6470*t6804*t6995*t7254*var3[11] + 30.*t6470*t6804*t7058*t7089*t7110*var3[22] - 20.*t6470*t6804*t6942*t7170*t7178*var3[22] + 20.*t6470*t6804*t6979*t6981*t7028*var3[33] - 30.*t6470*t6804*t7058*t7089*t7110*var3[33] + 5.*t6470*t6804*t6899*t6953*var3[44] - 20.*t6470*t6804*t6979*t6981*t7028*var3[44] - 5.*t6470*t6804*t6899*t6953*var3[55];
  p_output1[2]=1.;
  p_output1[3]=t7421;
  p_output1[4]=t7436;
  p_output1[5]=t7439;
  p_output1[6]=t7441;
  p_output1[7]=t7504;
  p_output1[8]=t7511;
  p_output1[9]=-5.*t7254*t7583*var3[0] + 5.*t6995*t7254*var3[11] - 5.*t6942*t7170*t7254*var3[11] - 20.*t6942*t6995*t7178*t7583*var3[11] - 20.*t7058*t7089*t7178*var3[22] + 20.*t6942*t7170*t7178*var3[22] - 30.*t7089*t7110*t7170*t7583*var3[22] - 30.*t6979*t6981*t7110*var3[33] + 30.*t7058*t7089*t7110*var3[33] - 20.*t6981*t7028*t7058*t7583*var3[33] - 20.*t6899*t6953*t7028*var3[44] + 20.*t6979*t6981*t7028*var3[44] - 5.*t6953*t6979*t7583*var3[44] + 5.*t6899*t6953*var3[55] - 5.*t7505*t7526*var3[55];
  p_output1[10]=-5.*t6942*t7170*t7254*var3[0] - 20.*t7058*t7089*t7178*var3[11] + 5.*t6942*t7170*t7254*var3[11] - 30.*t6979*t6981*t7110*var3[22] + 20.*t7058*t7089*t7178*var3[22] - 20.*t6899*t6953*t7028*var3[33] + 30.*t6979*t6981*t7110*var3[33] + 20.*t6899*t6953*t7028*var3[44] - 5.*t7505*t7526*var3[44] + 5.*t7505*t7526*var3[55];
  p_output1[11]=5.*t6841*t6995*t7254*var3[1] + 20.*t6841*t6942*t7170*t7178*var3[12] - 5.*t6841*t6995*t7254*var3[12] + 30.*t6841*t7058*t7089*t7110*var3[23] - 20.*t6841*t6942*t7170*t7178*var3[23] + 20.*t6841*t6979*t6981*t7028*var3[34] - 30.*t6841*t7058*t7089*t7110*var3[34] + 5.*t6841*t6899*t6953*var3[45] - 20.*t6841*t6979*t6981*t7028*var3[45] - 5.*t6841*t6899*t6953*var3[56];
  p_output1[12]=5.*t6470*t6804*t6995*t7254*var3[1] + 20.*t6470*t6804*t6942*t7170*t7178*var3[12] - 5.*t6470*t6804*t6995*t7254*var3[12] + 30.*t6470*t6804*t7058*t7089*t7110*var3[23] - 20.*t6470*t6804*t6942*t7170*t7178*var3[23] + 20.*t6470*t6804*t6979*t6981*t7028*var3[34] - 30.*t6470*t6804*t7058*t7089*t7110*var3[34] + 5.*t6470*t6804*t6899*t6953*var3[45] - 20.*t6470*t6804*t6979*t6981*t7028*var3[45] - 5.*t6470*t6804*t6899*t6953*var3[56];
  p_output1[13]=1.;
  p_output1[14]=t7421;
  p_output1[15]=t7436;
  p_output1[16]=t7439;
  p_output1[17]=t7441;
  p_output1[18]=t7504;
  p_output1[19]=t7511;
  p_output1[20]=-5.*t7254*t7583*var3[1] + 5.*t6995*t7254*var3[12] - 5.*t6942*t7170*t7254*var3[12] - 20.*t6942*t6995*t7178*t7583*var3[12] - 20.*t7058*t7089*t7178*var3[23] + 20.*t6942*t7170*t7178*var3[23] - 30.*t7089*t7110*t7170*t7583*var3[23] - 30.*t6979*t6981*t7110*var3[34] + 30.*t7058*t7089*t7110*var3[34] - 20.*t6981*t7028*t7058*t7583*var3[34] - 20.*t6899*t6953*t7028*var3[45] + 20.*t6979*t6981*t7028*var3[45] - 5.*t6953*t6979*t7583*var3[45] + 5.*t6899*t6953*var3[56] - 5.*t7505*t7526*var3[56];
  p_output1[21]=-5.*t6942*t7170*t7254*var3[1] - 20.*t7058*t7089*t7178*var3[12] + 5.*t6942*t7170*t7254*var3[12] - 30.*t6979*t6981*t7110*var3[23] + 20.*t7058*t7089*t7178*var3[23] - 20.*t6899*t6953*t7028*var3[34] + 30.*t6979*t6981*t7110*var3[34] + 20.*t6899*t6953*t7028*var3[45] - 5.*t7505*t7526*var3[45] + 5.*t7505*t7526*var3[56];
  p_output1[22]=5.*t6841*t6995*t7254*var3[2] + 20.*t6841*t6942*t7170*t7178*var3[13] - 5.*t6841*t6995*t7254*var3[13] + 30.*t6841*t7058*t7089*t7110*var3[24] - 20.*t6841*t6942*t7170*t7178*var3[24] + 20.*t6841*t6979*t6981*t7028*var3[35] - 30.*t6841*t7058*t7089*t7110*var3[35] + 5.*t6841*t6899*t6953*var3[46] - 20.*t6841*t6979*t6981*t7028*var3[46] - 5.*t6841*t6899*t6953*var3[57];
  p_output1[23]=5.*t6470*t6804*t6995*t7254*var3[2] + 20.*t6470*t6804*t6942*t7170*t7178*var3[13] - 5.*t6470*t6804*t6995*t7254*var3[13] + 30.*t6470*t6804*t7058*t7089*t7110*var3[24] - 20.*t6470*t6804*t6942*t7170*t7178*var3[24] + 20.*t6470*t6804*t6979*t6981*t7028*var3[35] - 30.*t6470*t6804*t7058*t7089*t7110*var3[35] + 5.*t6470*t6804*t6899*t6953*var3[46] - 20.*t6470*t6804*t6979*t6981*t7028*var3[46] - 5.*t6470*t6804*t6899*t6953*var3[57];
  p_output1[24]=1.;
  p_output1[25]=t7421;
  p_output1[26]=t7436;
  p_output1[27]=t7439;
  p_output1[28]=t7441;
  p_output1[29]=t7504;
  p_output1[30]=t7511;
  p_output1[31]=-5.*t7254*t7583*var3[2] + 5.*t6995*t7254*var3[13] - 5.*t6942*t7170*t7254*var3[13] - 20.*t6942*t6995*t7178*t7583*var3[13] - 20.*t7058*t7089*t7178*var3[24] + 20.*t6942*t7170*t7178*var3[24] - 30.*t7089*t7110*t7170*t7583*var3[24] - 30.*t6979*t6981*t7110*var3[35] + 30.*t7058*t7089*t7110*var3[35] - 20.*t6981*t7028*t7058*t7583*var3[35] - 20.*t6899*t6953*t7028*var3[46] + 20.*t6979*t6981*t7028*var3[46] - 5.*t6953*t6979*t7583*var3[46] + 5.*t6899*t6953*var3[57] - 5.*t7505*t7526*var3[57];
  p_output1[32]=-5.*t6942*t7170*t7254*var3[2] - 20.*t7058*t7089*t7178*var3[13] + 5.*t6942*t7170*t7254*var3[13] - 30.*t6979*t6981*t7110*var3[24] + 20.*t7058*t7089*t7178*var3[24] - 20.*t6899*t6953*t7028*var3[35] + 30.*t6979*t6981*t7110*var3[35] + 20.*t6899*t6953*t7028*var3[46] - 5.*t7505*t7526*var3[46] + 5.*t7505*t7526*var3[57];
  p_output1[33]=5.*t6841*t6995*t7254*var3[3] + 20.*t6841*t6942*t7170*t7178*var3[14] - 5.*t6841*t6995*t7254*var3[14] + 30.*t6841*t7058*t7089*t7110*var3[25] - 20.*t6841*t6942*t7170*t7178*var3[25] + 20.*t6841*t6979*t6981*t7028*var3[36] - 30.*t6841*t7058*t7089*t7110*var3[36] + 5.*t6841*t6899*t6953*var3[47] - 20.*t6841*t6979*t6981*t7028*var3[47] - 5.*t6841*t6899*t6953*var3[58];
  p_output1[34]=5.*t6470*t6804*t6995*t7254*var3[3] + 20.*t6470*t6804*t6942*t7170*t7178*var3[14] - 5.*t6470*t6804*t6995*t7254*var3[14] + 30.*t6470*t6804*t7058*t7089*t7110*var3[25] - 20.*t6470*t6804*t6942*t7170*t7178*var3[25] + 20.*t6470*t6804*t6979*t6981*t7028*var3[36] - 30.*t6470*t6804*t7058*t7089*t7110*var3[36] + 5.*t6470*t6804*t6899*t6953*var3[47] - 20.*t6470*t6804*t6979*t6981*t7028*var3[47] - 5.*t6470*t6804*t6899*t6953*var3[58];
  p_output1[35]=1.;
  p_output1[36]=t7421;
  p_output1[37]=t7436;
  p_output1[38]=t7439;
  p_output1[39]=t7441;
  p_output1[40]=t7504;
  p_output1[41]=t7511;
  p_output1[42]=-5.*t7254*t7583*var3[3] + 5.*t6995*t7254*var3[14] - 5.*t6942*t7170*t7254*var3[14] - 20.*t6942*t6995*t7178*t7583*var3[14] - 20.*t7058*t7089*t7178*var3[25] + 20.*t6942*t7170*t7178*var3[25] - 30.*t7089*t7110*t7170*t7583*var3[25] - 30.*t6979*t6981*t7110*var3[36] + 30.*t7058*t7089*t7110*var3[36] - 20.*t6981*t7028*t7058*t7583*var3[36] - 20.*t6899*t6953*t7028*var3[47] + 20.*t6979*t6981*t7028*var3[47] - 5.*t6953*t6979*t7583*var3[47] + 5.*t6899*t6953*var3[58] - 5.*t7505*t7526*var3[58];
  p_output1[43]=-5.*t6942*t7170*t7254*var3[3] - 20.*t7058*t7089*t7178*var3[14] + 5.*t6942*t7170*t7254*var3[14] - 30.*t6979*t6981*t7110*var3[25] + 20.*t7058*t7089*t7178*var3[25] - 20.*t6899*t6953*t7028*var3[36] + 30.*t6979*t6981*t7110*var3[36] + 20.*t6899*t6953*t7028*var3[47] - 5.*t7505*t7526*var3[47] + 5.*t7505*t7526*var3[58];
  p_output1[44]=5.*t6841*t6995*t7254*var3[4] + 20.*t6841*t6942*t7170*t7178*var3[15] - 5.*t6841*t6995*t7254*var3[15] + 30.*t6841*t7058*t7089*t7110*var3[26] - 20.*t6841*t6942*t7170*t7178*var3[26] + 20.*t6841*t6979*t6981*t7028*var3[37] - 30.*t6841*t7058*t7089*t7110*var3[37] + 5.*t6841*t6899*t6953*var3[48] - 20.*t6841*t6979*t6981*t7028*var3[48] - 5.*t6841*t6899*t6953*var3[59];
  p_output1[45]=5.*t6470*t6804*t6995*t7254*var3[4] + 20.*t6470*t6804*t6942*t7170*t7178*var3[15] - 5.*t6470*t6804*t6995*t7254*var3[15] + 30.*t6470*t6804*t7058*t7089*t7110*var3[26] - 20.*t6470*t6804*t6942*t7170*t7178*var3[26] + 20.*t6470*t6804*t6979*t6981*t7028*var3[37] - 30.*t6470*t6804*t7058*t7089*t7110*var3[37] + 5.*t6470*t6804*t6899*t6953*var3[48] - 20.*t6470*t6804*t6979*t6981*t7028*var3[48] - 5.*t6470*t6804*t6899*t6953*var3[59];
  p_output1[46]=1.;
  p_output1[47]=t7421;
  p_output1[48]=t7436;
  p_output1[49]=t7439;
  p_output1[50]=t7441;
  p_output1[51]=t7504;
  p_output1[52]=t7511;
  p_output1[53]=-5.*t7254*t7583*var3[4] + 5.*t6995*t7254*var3[15] - 5.*t6942*t7170*t7254*var3[15] - 20.*t6942*t6995*t7178*t7583*var3[15] - 20.*t7058*t7089*t7178*var3[26] + 20.*t6942*t7170*t7178*var3[26] - 30.*t7089*t7110*t7170*t7583*var3[26] - 30.*t6979*t6981*t7110*var3[37] + 30.*t7058*t7089*t7110*var3[37] - 20.*t6981*t7028*t7058*t7583*var3[37] - 20.*t6899*t6953*t7028*var3[48] + 20.*t6979*t6981*t7028*var3[48] - 5.*t6953*t6979*t7583*var3[48] + 5.*t6899*t6953*var3[59] - 5.*t7505*t7526*var3[59];
  p_output1[54]=-5.*t6942*t7170*t7254*var3[4] - 20.*t7058*t7089*t7178*var3[15] + 5.*t6942*t7170*t7254*var3[15] - 30.*t6979*t6981*t7110*var3[26] + 20.*t7058*t7089*t7178*var3[26] - 20.*t6899*t6953*t7028*var3[37] + 30.*t6979*t6981*t7110*var3[37] + 20.*t6899*t6953*t7028*var3[48] - 5.*t7505*t7526*var3[48] + 5.*t7505*t7526*var3[59];
  p_output1[55]=5.*t6841*t6995*t7254*var3[5] + 20.*t6841*t6942*t7170*t7178*var3[16] - 5.*t6841*t6995*t7254*var3[16] + 30.*t6841*t7058*t7089*t7110*var3[27] - 20.*t6841*t6942*t7170*t7178*var3[27] + 20.*t6841*t6979*t6981*t7028*var3[38] - 30.*t6841*t7058*t7089*t7110*var3[38] + 5.*t6841*t6899*t6953*var3[49] - 20.*t6841*t6979*t6981*t7028*var3[49] - 5.*t6841*t6899*t6953*var3[60];
  p_output1[56]=5.*t6470*t6804*t6995*t7254*var3[5] + 20.*t6470*t6804*t6942*t7170*t7178*var3[16] - 5.*t6470*t6804*t6995*t7254*var3[16] + 30.*t6470*t6804*t7058*t7089*t7110*var3[27] - 20.*t6470*t6804*t6942*t7170*t7178*var3[27] + 20.*t6470*t6804*t6979*t6981*t7028*var3[38] - 30.*t6470*t6804*t7058*t7089*t7110*var3[38] + 5.*t6470*t6804*t6899*t6953*var3[49] - 20.*t6470*t6804*t6979*t6981*t7028*var3[49] - 5.*t6470*t6804*t6899*t6953*var3[60];
  p_output1[57]=1.;
  p_output1[58]=t7421;
  p_output1[59]=t7436;
  p_output1[60]=t7439;
  p_output1[61]=t7441;
  p_output1[62]=t7504;
  p_output1[63]=t7511;
  p_output1[64]=-5.*t7254*t7583*var3[5] + 5.*t6995*t7254*var3[16] - 5.*t6942*t7170*t7254*var3[16] - 20.*t6942*t6995*t7178*t7583*var3[16] - 20.*t7058*t7089*t7178*var3[27] + 20.*t6942*t7170*t7178*var3[27] - 30.*t7089*t7110*t7170*t7583*var3[27] - 30.*t6979*t6981*t7110*var3[38] + 30.*t7058*t7089*t7110*var3[38] - 20.*t6981*t7028*t7058*t7583*var3[38] - 20.*t6899*t6953*t7028*var3[49] + 20.*t6979*t6981*t7028*var3[49] - 5.*t6953*t6979*t7583*var3[49] + 5.*t6899*t6953*var3[60] - 5.*t7505*t7526*var3[60];
  p_output1[65]=-5.*t6942*t7170*t7254*var3[5] - 20.*t7058*t7089*t7178*var3[16] + 5.*t6942*t7170*t7254*var3[16] - 30.*t6979*t6981*t7110*var3[27] + 20.*t7058*t7089*t7178*var3[27] - 20.*t6899*t6953*t7028*var3[38] + 30.*t6979*t6981*t7110*var3[38] + 20.*t6899*t6953*t7028*var3[49] - 5.*t7505*t7526*var3[49] + 5.*t7505*t7526*var3[60];
  p_output1[66]=5.*t6841*t6995*t7254*var3[6] + 20.*t6841*t6942*t7170*t7178*var3[17] - 5.*t6841*t6995*t7254*var3[17] + 30.*t6841*t7058*t7089*t7110*var3[28] - 20.*t6841*t6942*t7170*t7178*var3[28] + 20.*t6841*t6979*t6981*t7028*var3[39] - 30.*t6841*t7058*t7089*t7110*var3[39] + 5.*t6841*t6899*t6953*var3[50] - 20.*t6841*t6979*t6981*t7028*var3[50] - 5.*t6841*t6899*t6953*var3[61];
  p_output1[67]=5.*t6470*t6804*t6995*t7254*var3[6] + 20.*t6470*t6804*t6942*t7170*t7178*var3[17] - 5.*t6470*t6804*t6995*t7254*var3[17] + 30.*t6470*t6804*t7058*t7089*t7110*var3[28] - 20.*t6470*t6804*t6942*t7170*t7178*var3[28] + 20.*t6470*t6804*t6979*t6981*t7028*var3[39] - 30.*t6470*t6804*t7058*t7089*t7110*var3[39] + 5.*t6470*t6804*t6899*t6953*var3[50] - 20.*t6470*t6804*t6979*t6981*t7028*var3[50] - 5.*t6470*t6804*t6899*t6953*var3[61];
  p_output1[68]=1.;
  p_output1[69]=t7421;
  p_output1[70]=t7436;
  p_output1[71]=t7439;
  p_output1[72]=t7441;
  p_output1[73]=t7504;
  p_output1[74]=t7511;
  p_output1[75]=-5.*t7254*t7583*var3[6] + 5.*t6995*t7254*var3[17] - 5.*t6942*t7170*t7254*var3[17] - 20.*t6942*t6995*t7178*t7583*var3[17] - 20.*t7058*t7089*t7178*var3[28] + 20.*t6942*t7170*t7178*var3[28] - 30.*t7089*t7110*t7170*t7583*var3[28] - 30.*t6979*t6981*t7110*var3[39] + 30.*t7058*t7089*t7110*var3[39] - 20.*t6981*t7028*t7058*t7583*var3[39] - 20.*t6899*t6953*t7028*var3[50] + 20.*t6979*t6981*t7028*var3[50] - 5.*t6953*t6979*t7583*var3[50] + 5.*t6899*t6953*var3[61] - 5.*t7505*t7526*var3[61];
  p_output1[76]=-5.*t6942*t7170*t7254*var3[6] - 20.*t7058*t7089*t7178*var3[17] + 5.*t6942*t7170*t7254*var3[17] - 30.*t6979*t6981*t7110*var3[28] + 20.*t7058*t7089*t7178*var3[28] - 20.*t6899*t6953*t7028*var3[39] + 30.*t6979*t6981*t7110*var3[39] + 20.*t6899*t6953*t7028*var3[50] - 5.*t7505*t7526*var3[50] + 5.*t7505*t7526*var3[61];
  p_output1[77]=5.*t6841*t6995*t7254*var3[7] + 20.*t6841*t6942*t7170*t7178*var3[18] - 5.*t6841*t6995*t7254*var3[18] + 30.*t6841*t7058*t7089*t7110*var3[29] - 20.*t6841*t6942*t7170*t7178*var3[29] + 20.*t6841*t6979*t6981*t7028*var3[40] - 30.*t6841*t7058*t7089*t7110*var3[40] + 5.*t6841*t6899*t6953*var3[51] - 20.*t6841*t6979*t6981*t7028*var3[51] - 5.*t6841*t6899*t6953*var3[62];
  p_output1[78]=5.*t6470*t6804*t6995*t7254*var3[7] + 20.*t6470*t6804*t6942*t7170*t7178*var3[18] - 5.*t6470*t6804*t6995*t7254*var3[18] + 30.*t6470*t6804*t7058*t7089*t7110*var3[29] - 20.*t6470*t6804*t6942*t7170*t7178*var3[29] + 20.*t6470*t6804*t6979*t6981*t7028*var3[40] - 30.*t6470*t6804*t7058*t7089*t7110*var3[40] + 5.*t6470*t6804*t6899*t6953*var3[51] - 20.*t6470*t6804*t6979*t6981*t7028*var3[51] - 5.*t6470*t6804*t6899*t6953*var3[62];
  p_output1[79]=1.;
  p_output1[80]=t7421;
  p_output1[81]=t7436;
  p_output1[82]=t7439;
  p_output1[83]=t7441;
  p_output1[84]=t7504;
  p_output1[85]=t7511;
  p_output1[86]=-5.*t7254*t7583*var3[7] + 5.*t6995*t7254*var3[18] - 5.*t6942*t7170*t7254*var3[18] - 20.*t6942*t6995*t7178*t7583*var3[18] - 20.*t7058*t7089*t7178*var3[29] + 20.*t6942*t7170*t7178*var3[29] - 30.*t7089*t7110*t7170*t7583*var3[29] - 30.*t6979*t6981*t7110*var3[40] + 30.*t7058*t7089*t7110*var3[40] - 20.*t6981*t7028*t7058*t7583*var3[40] - 20.*t6899*t6953*t7028*var3[51] + 20.*t6979*t6981*t7028*var3[51] - 5.*t6953*t6979*t7583*var3[51] + 5.*t6899*t6953*var3[62] - 5.*t7505*t7526*var3[62];
  p_output1[87]=-5.*t6942*t7170*t7254*var3[7] - 20.*t7058*t7089*t7178*var3[18] + 5.*t6942*t7170*t7254*var3[18] - 30.*t6979*t6981*t7110*var3[29] + 20.*t7058*t7089*t7178*var3[29] - 20.*t6899*t6953*t7028*var3[40] + 30.*t6979*t6981*t7110*var3[40] + 20.*t6899*t6953*t7028*var3[51] - 5.*t7505*t7526*var3[51] + 5.*t7505*t7526*var3[62];
  p_output1[88]=5.*t6841*t6995*t7254*var3[8] + 20.*t6841*t6942*t7170*t7178*var3[19] - 5.*t6841*t6995*t7254*var3[19] + 30.*t6841*t7058*t7089*t7110*var3[30] - 20.*t6841*t6942*t7170*t7178*var3[30] + 20.*t6841*t6979*t6981*t7028*var3[41] - 30.*t6841*t7058*t7089*t7110*var3[41] + 5.*t6841*t6899*t6953*var3[52] - 20.*t6841*t6979*t6981*t7028*var3[52] - 5.*t6841*t6899*t6953*var3[63];
  p_output1[89]=5.*t6470*t6804*t6995*t7254*var3[8] + 20.*t6470*t6804*t6942*t7170*t7178*var3[19] - 5.*t6470*t6804*t6995*t7254*var3[19] + 30.*t6470*t6804*t7058*t7089*t7110*var3[30] - 20.*t6470*t6804*t6942*t7170*t7178*var3[30] + 20.*t6470*t6804*t6979*t6981*t7028*var3[41] - 30.*t6470*t6804*t7058*t7089*t7110*var3[41] + 5.*t6470*t6804*t6899*t6953*var3[52] - 20.*t6470*t6804*t6979*t6981*t7028*var3[52] - 5.*t6470*t6804*t6899*t6953*var3[63];
  p_output1[90]=1.;
  p_output1[91]=t7421;
  p_output1[92]=t7436;
  p_output1[93]=t7439;
  p_output1[94]=t7441;
  p_output1[95]=t7504;
  p_output1[96]=t7511;
  p_output1[97]=-5.*t7254*t7583*var3[8] + 5.*t6995*t7254*var3[19] - 5.*t6942*t7170*t7254*var3[19] - 20.*t6942*t6995*t7178*t7583*var3[19] - 20.*t7058*t7089*t7178*var3[30] + 20.*t6942*t7170*t7178*var3[30] - 30.*t7089*t7110*t7170*t7583*var3[30] - 30.*t6979*t6981*t7110*var3[41] + 30.*t7058*t7089*t7110*var3[41] - 20.*t6981*t7028*t7058*t7583*var3[41] - 20.*t6899*t6953*t7028*var3[52] + 20.*t6979*t6981*t7028*var3[52] - 5.*t6953*t6979*t7583*var3[52] + 5.*t6899*t6953*var3[63] - 5.*t7505*t7526*var3[63];
  p_output1[98]=-5.*t6942*t7170*t7254*var3[8] - 20.*t7058*t7089*t7178*var3[19] + 5.*t6942*t7170*t7254*var3[19] - 30.*t6979*t6981*t7110*var3[30] + 20.*t7058*t7089*t7178*var3[30] - 20.*t6899*t6953*t7028*var3[41] + 30.*t6979*t6981*t7110*var3[41] + 20.*t6899*t6953*t7028*var3[52] - 5.*t7505*t7526*var3[52] + 5.*t7505*t7526*var3[63];
  p_output1[99]=5.*t6841*t6995*t7254*var3[9] + 20.*t6841*t6942*t7170*t7178*var3[20] - 5.*t6841*t6995*t7254*var3[20] + 30.*t6841*t7058*t7089*t7110*var3[31] - 20.*t6841*t6942*t7170*t7178*var3[31] + 20.*t6841*t6979*t6981*t7028*var3[42] - 30.*t6841*t7058*t7089*t7110*var3[42] + 5.*t6841*t6899*t6953*var3[53] - 20.*t6841*t6979*t6981*t7028*var3[53] - 5.*t6841*t6899*t6953*var3[64];
  p_output1[100]=5.*t6470*t6804*t6995*t7254*var3[9] + 20.*t6470*t6804*t6942*t7170*t7178*var3[20] - 5.*t6470*t6804*t6995*t7254*var3[20] + 30.*t6470*t6804*t7058*t7089*t7110*var3[31] - 20.*t6470*t6804*t6942*t7170*t7178*var3[31] + 20.*t6470*t6804*t6979*t6981*t7028*var3[42] - 30.*t6470*t6804*t7058*t7089*t7110*var3[42] + 5.*t6470*t6804*t6899*t6953*var3[53] - 20.*t6470*t6804*t6979*t6981*t7028*var3[53] - 5.*t6470*t6804*t6899*t6953*var3[64];
  p_output1[101]=1.;
  p_output1[102]=t7421;
  p_output1[103]=t7436;
  p_output1[104]=t7439;
  p_output1[105]=t7441;
  p_output1[106]=t7504;
  p_output1[107]=t7511;
  p_output1[108]=-5.*t7254*t7583*var3[9] + 5.*t6995*t7254*var3[20] - 5.*t6942*t7170*t7254*var3[20] - 20.*t6942*t6995*t7178*t7583*var3[20] - 20.*t7058*t7089*t7178*var3[31] + 20.*t6942*t7170*t7178*var3[31] - 30.*t7089*t7110*t7170*t7583*var3[31] - 30.*t6979*t6981*t7110*var3[42] + 30.*t7058*t7089*t7110*var3[42] - 20.*t6981*t7028*t7058*t7583*var3[42] - 20.*t6899*t6953*t7028*var3[53] + 20.*t6979*t6981*t7028*var3[53] - 5.*t6953*t6979*t7583*var3[53] + 5.*t6899*t6953*var3[64] - 5.*t7505*t7526*var3[64];
  p_output1[109]=-5.*t6942*t7170*t7254*var3[9] - 20.*t7058*t7089*t7178*var3[20] + 5.*t6942*t7170*t7254*var3[20] - 30.*t6979*t6981*t7110*var3[31] + 20.*t7058*t7089*t7178*var3[31] - 20.*t6899*t6953*t7028*var3[42] + 30.*t6979*t6981*t7110*var3[42] + 20.*t6899*t6953*t7028*var3[53] - 5.*t7505*t7526*var3[53] + 5.*t7505*t7526*var3[64];
  p_output1[110]=5.*t6841*t6995*t7254*var3[10] + 20.*t6841*t6942*t7170*t7178*var3[21] - 5.*t6841*t6995*t7254*var3[21] + 30.*t6841*t7058*t7089*t7110*var3[32] - 20.*t6841*t6942*t7170*t7178*var3[32] + 20.*t6841*t6979*t6981*t7028*var3[43] - 30.*t6841*t7058*t7089*t7110*var3[43] + 5.*t6841*t6899*t6953*var3[54] - 20.*t6841*t6979*t6981*t7028*var3[54] - 5.*t6841*t6899*t6953*var3[65];
  p_output1[111]=5.*t6470*t6804*t6995*t7254*var3[10] + 20.*t6470*t6804*t6942*t7170*t7178*var3[21] - 5.*t6470*t6804*t6995*t7254*var3[21] + 30.*t6470*t6804*t7058*t7089*t7110*var3[32] - 20.*t6470*t6804*t6942*t7170*t7178*var3[32] + 20.*t6470*t6804*t6979*t6981*t7028*var3[43] - 30.*t6470*t6804*t7058*t7089*t7110*var3[43] + 5.*t6470*t6804*t6899*t6953*var3[54] - 20.*t6470*t6804*t6979*t6981*t7028*var3[54] - 5.*t6470*t6804*t6899*t6953*var3[65];
  p_output1[112]=1.;
  p_output1[113]=t7421;
  p_output1[114]=t7436;
  p_output1[115]=t7439;
  p_output1[116]=t7441;
  p_output1[117]=t7504;
  p_output1[118]=t7511;
  p_output1[119]=-5.*t7254*t7583*var3[10] + 5.*t6995*t7254*var3[21] - 5.*t6942*t7170*t7254*var3[21] - 20.*t6942*t6995*t7178*t7583*var3[21] - 20.*t7058*t7089*t7178*var3[32] + 20.*t6942*t7170*t7178*var3[32] - 30.*t7089*t7110*t7170*t7583*var3[32] - 30.*t6979*t6981*t7110*var3[43] + 30.*t7058*t7089*t7110*var3[43] - 20.*t6981*t7028*t7058*t7583*var3[43] - 20.*t6899*t6953*t7028*var3[54] + 20.*t6979*t6981*t7028*var3[54] - 5.*t6953*t6979*t7583*var3[54] + 5.*t6899*t6953*var3[65] - 5.*t7505*t7526*var3[65];
  p_output1[120]=-5.*t6942*t7170*t7254*var3[10] - 20.*t7058*t7089*t7178*var3[21] + 5.*t6942*t7170*t7254*var3[21] - 30.*t6979*t6981*t7110*var3[32] + 20.*t7058*t7089*t7178*var3[32] - 20.*t6899*t6953*t7028*var3[43] + 30.*t6979*t6981*t7110*var3[43] + 20.*t6899*t6953*t7028*var3[54] - 5.*t7505*t7526*var3[54] + 5.*t7505*t7526*var3[65];
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

#include "J_y_position_ParallelStance.hh"

namespace ParallelStance
{

void J_y_position_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
