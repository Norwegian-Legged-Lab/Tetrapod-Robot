/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:08 GMT+02:00
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
  double t3904;
  double t3515;
  double t3672;
  double t3818;
  double t3864;
  double t3872;
  double t3921;
  double t3930;
  double t3952;
  double t3984;
  double t3985;
  double t4020;
  double t4030;
  double t4128;
  double t4139;
  double t4257;
  double t4303;
  double t4307;
  double t4329;
  double t4347;
  double t4352;
  double t4375;
  double t4399;
  double t4501;
  double t5162;
  double t5325;
  double t5414;
  double t5231;
  double t5083;
  double t5114;
  double t5118;
  double t5128;
  double t5129;
  double t5140;
  double t5178;
  t3904 = -1.*var4[0];
  t3515 = -1. + var5[0];
  t3672 = -1. + var6[0];
  t3818 = 1/t3672;
  t3864 = -1.*t3515*t3818;
  t3872 = 1. + t3864;
  t3921 = t3904 + var4[1];
  t3930 = Power(t3921,-5);
  t3952 = -1.*var1[0];
  t3984 = t3952 + var1[1];
  t3985 = t3515*t3818*t3984;
  t4020 = t3904 + var1[0] + t3985;
  t4030 = Power(t4020,4);
  t4128 = Power(t3921,-4);
  t4139 = Power(t4020,3);
  t4257 = 1/t3921;
  t4303 = -1.*t4257*t4020;
  t4307 = 1. + t4303;
  t4329 = Power(t3921,-3);
  t4347 = Power(t4020,2);
  t4352 = Power(t4307,2);
  t4375 = Power(t3921,-2);
  t4399 = Power(t4307,3);
  t4501 = Power(t4307,4);
  t5162 = Power(t4020,5);
  t5325 = -1.*t4375*t4020;
  t5414 = t4257 + t5325;
  t5231 = Power(t3921,-6);
  t5083 = Power(t4307,5);
  t5114 = -1.*t5083;
  t5118 = -5.*t4257*t4020*t4501;
  t5128 = -10.*t4375*t4347*t4399;
  t5129 = -10.*t4329*t4139*t4352;
  t5140 = -5.*t4128*t4030*t4307;
  t5178 = -1.*t3930*t5162;
  p_output1[0]=5.*t3872*t4257*t4501*var3[0] + 20.*t3872*t4020*t4375*t4399*var3[11] - 5.*t3872*t4257*t4501*var3[11] + 30.*t3872*t4329*t4347*t4352*var3[22] - 20.*t3872*t4020*t4375*t4399*var3[22] + 20.*t3872*t4128*t4139*t4307*var3[33] - 30.*t3872*t4329*t4347*t4352*var3[33] + 5.*t3872*t3930*t4030*var3[44] - 20.*t3872*t4128*t4139*t4307*var3[44] - 5.*t3872*t3930*t4030*var3[55];
  p_output1[1]=5.*t3515*t3818*t4257*t4501*var3[0] + 20.*t3515*t3818*t4020*t4375*t4399*var3[11] - 5.*t3515*t3818*t4257*t4501*var3[11] + 30.*t3515*t3818*t4329*t4347*t4352*var3[22] - 20.*t3515*t3818*t4020*t4375*t4399*var3[22] + 20.*t3515*t3818*t4128*t4139*t4307*var3[33] - 30.*t3515*t3818*t4329*t4347*t4352*var3[33] + 5.*t3515*t3818*t3930*t4030*var3[44] - 20.*t3515*t3818*t4128*t4139*t4307*var3[44] - 5.*t3515*t3818*t3930*t4030*var3[55];
  p_output1[2]=1.;
  p_output1[3]=t5114;
  p_output1[4]=t5118;
  p_output1[5]=t5128;
  p_output1[6]=t5129;
  p_output1[7]=t5140;
  p_output1[8]=t5178;
  p_output1[9]=-5.*t4501*t5414*var3[0] + 5.*t4257*t4501*var3[11] - 5.*t4020*t4375*t4501*var3[11] - 20.*t4020*t4257*t4399*t5414*var3[11] - 20.*t4329*t4347*t4399*var3[22] + 20.*t4020*t4375*t4399*var3[22] - 30.*t4347*t4352*t4375*t5414*var3[22] - 30.*t4128*t4139*t4352*var3[33] + 30.*t4329*t4347*t4352*var3[33] - 20.*t4139*t4307*t4329*t5414*var3[33] - 20.*t3930*t4030*t4307*var3[44] + 20.*t4128*t4139*t4307*var3[44] - 5.*t4030*t4128*t5414*var3[44] + 5.*t3930*t4030*var3[55] - 5.*t5162*t5231*var3[55];
  p_output1[10]=-5.*t4020*t4375*t4501*var3[0] - 20.*t4329*t4347*t4399*var3[11] + 5.*t4020*t4375*t4501*var3[11] - 30.*t4128*t4139*t4352*var3[22] + 20.*t4329*t4347*t4399*var3[22] - 20.*t3930*t4030*t4307*var3[33] + 30.*t4128*t4139*t4352*var3[33] + 20.*t3930*t4030*t4307*var3[44] - 5.*t5162*t5231*var3[44] + 5.*t5162*t5231*var3[55];
  p_output1[11]=5.*t3872*t4257*t4501*var3[1] + 20.*t3872*t4020*t4375*t4399*var3[12] - 5.*t3872*t4257*t4501*var3[12] + 30.*t3872*t4329*t4347*t4352*var3[23] - 20.*t3872*t4020*t4375*t4399*var3[23] + 20.*t3872*t4128*t4139*t4307*var3[34] - 30.*t3872*t4329*t4347*t4352*var3[34] + 5.*t3872*t3930*t4030*var3[45] - 20.*t3872*t4128*t4139*t4307*var3[45] - 5.*t3872*t3930*t4030*var3[56];
  p_output1[12]=5.*t3515*t3818*t4257*t4501*var3[1] + 20.*t3515*t3818*t4020*t4375*t4399*var3[12] - 5.*t3515*t3818*t4257*t4501*var3[12] + 30.*t3515*t3818*t4329*t4347*t4352*var3[23] - 20.*t3515*t3818*t4020*t4375*t4399*var3[23] + 20.*t3515*t3818*t4128*t4139*t4307*var3[34] - 30.*t3515*t3818*t4329*t4347*t4352*var3[34] + 5.*t3515*t3818*t3930*t4030*var3[45] - 20.*t3515*t3818*t4128*t4139*t4307*var3[45] - 5.*t3515*t3818*t3930*t4030*var3[56];
  p_output1[13]=1.;
  p_output1[14]=t5114;
  p_output1[15]=t5118;
  p_output1[16]=t5128;
  p_output1[17]=t5129;
  p_output1[18]=t5140;
  p_output1[19]=t5178;
  p_output1[20]=-5.*t4501*t5414*var3[1] + 5.*t4257*t4501*var3[12] - 5.*t4020*t4375*t4501*var3[12] - 20.*t4020*t4257*t4399*t5414*var3[12] - 20.*t4329*t4347*t4399*var3[23] + 20.*t4020*t4375*t4399*var3[23] - 30.*t4347*t4352*t4375*t5414*var3[23] - 30.*t4128*t4139*t4352*var3[34] + 30.*t4329*t4347*t4352*var3[34] - 20.*t4139*t4307*t4329*t5414*var3[34] - 20.*t3930*t4030*t4307*var3[45] + 20.*t4128*t4139*t4307*var3[45] - 5.*t4030*t4128*t5414*var3[45] + 5.*t3930*t4030*var3[56] - 5.*t5162*t5231*var3[56];
  p_output1[21]=-5.*t4020*t4375*t4501*var3[1] - 20.*t4329*t4347*t4399*var3[12] + 5.*t4020*t4375*t4501*var3[12] - 30.*t4128*t4139*t4352*var3[23] + 20.*t4329*t4347*t4399*var3[23] - 20.*t3930*t4030*t4307*var3[34] + 30.*t4128*t4139*t4352*var3[34] + 20.*t3930*t4030*t4307*var3[45] - 5.*t5162*t5231*var3[45] + 5.*t5162*t5231*var3[56];
  p_output1[22]=5.*t3872*t4257*t4501*var3[2] + 20.*t3872*t4020*t4375*t4399*var3[13] - 5.*t3872*t4257*t4501*var3[13] + 30.*t3872*t4329*t4347*t4352*var3[24] - 20.*t3872*t4020*t4375*t4399*var3[24] + 20.*t3872*t4128*t4139*t4307*var3[35] - 30.*t3872*t4329*t4347*t4352*var3[35] + 5.*t3872*t3930*t4030*var3[46] - 20.*t3872*t4128*t4139*t4307*var3[46] - 5.*t3872*t3930*t4030*var3[57];
  p_output1[23]=5.*t3515*t3818*t4257*t4501*var3[2] + 20.*t3515*t3818*t4020*t4375*t4399*var3[13] - 5.*t3515*t3818*t4257*t4501*var3[13] + 30.*t3515*t3818*t4329*t4347*t4352*var3[24] - 20.*t3515*t3818*t4020*t4375*t4399*var3[24] + 20.*t3515*t3818*t4128*t4139*t4307*var3[35] - 30.*t3515*t3818*t4329*t4347*t4352*var3[35] + 5.*t3515*t3818*t3930*t4030*var3[46] - 20.*t3515*t3818*t4128*t4139*t4307*var3[46] - 5.*t3515*t3818*t3930*t4030*var3[57];
  p_output1[24]=1.;
  p_output1[25]=t5114;
  p_output1[26]=t5118;
  p_output1[27]=t5128;
  p_output1[28]=t5129;
  p_output1[29]=t5140;
  p_output1[30]=t5178;
  p_output1[31]=-5.*t4501*t5414*var3[2] + 5.*t4257*t4501*var3[13] - 5.*t4020*t4375*t4501*var3[13] - 20.*t4020*t4257*t4399*t5414*var3[13] - 20.*t4329*t4347*t4399*var3[24] + 20.*t4020*t4375*t4399*var3[24] - 30.*t4347*t4352*t4375*t5414*var3[24] - 30.*t4128*t4139*t4352*var3[35] + 30.*t4329*t4347*t4352*var3[35] - 20.*t4139*t4307*t4329*t5414*var3[35] - 20.*t3930*t4030*t4307*var3[46] + 20.*t4128*t4139*t4307*var3[46] - 5.*t4030*t4128*t5414*var3[46] + 5.*t3930*t4030*var3[57] - 5.*t5162*t5231*var3[57];
  p_output1[32]=-5.*t4020*t4375*t4501*var3[2] - 20.*t4329*t4347*t4399*var3[13] + 5.*t4020*t4375*t4501*var3[13] - 30.*t4128*t4139*t4352*var3[24] + 20.*t4329*t4347*t4399*var3[24] - 20.*t3930*t4030*t4307*var3[35] + 30.*t4128*t4139*t4352*var3[35] + 20.*t3930*t4030*t4307*var3[46] - 5.*t5162*t5231*var3[46] + 5.*t5162*t5231*var3[57];
  p_output1[33]=5.*t3872*t4257*t4501*var3[3] + 20.*t3872*t4020*t4375*t4399*var3[14] - 5.*t3872*t4257*t4501*var3[14] + 30.*t3872*t4329*t4347*t4352*var3[25] - 20.*t3872*t4020*t4375*t4399*var3[25] + 20.*t3872*t4128*t4139*t4307*var3[36] - 30.*t3872*t4329*t4347*t4352*var3[36] + 5.*t3872*t3930*t4030*var3[47] - 20.*t3872*t4128*t4139*t4307*var3[47] - 5.*t3872*t3930*t4030*var3[58];
  p_output1[34]=5.*t3515*t3818*t4257*t4501*var3[3] + 20.*t3515*t3818*t4020*t4375*t4399*var3[14] - 5.*t3515*t3818*t4257*t4501*var3[14] + 30.*t3515*t3818*t4329*t4347*t4352*var3[25] - 20.*t3515*t3818*t4020*t4375*t4399*var3[25] + 20.*t3515*t3818*t4128*t4139*t4307*var3[36] - 30.*t3515*t3818*t4329*t4347*t4352*var3[36] + 5.*t3515*t3818*t3930*t4030*var3[47] - 20.*t3515*t3818*t4128*t4139*t4307*var3[47] - 5.*t3515*t3818*t3930*t4030*var3[58];
  p_output1[35]=1.;
  p_output1[36]=t5114;
  p_output1[37]=t5118;
  p_output1[38]=t5128;
  p_output1[39]=t5129;
  p_output1[40]=t5140;
  p_output1[41]=t5178;
  p_output1[42]=-5.*t4501*t5414*var3[3] + 5.*t4257*t4501*var3[14] - 5.*t4020*t4375*t4501*var3[14] - 20.*t4020*t4257*t4399*t5414*var3[14] - 20.*t4329*t4347*t4399*var3[25] + 20.*t4020*t4375*t4399*var3[25] - 30.*t4347*t4352*t4375*t5414*var3[25] - 30.*t4128*t4139*t4352*var3[36] + 30.*t4329*t4347*t4352*var3[36] - 20.*t4139*t4307*t4329*t5414*var3[36] - 20.*t3930*t4030*t4307*var3[47] + 20.*t4128*t4139*t4307*var3[47] - 5.*t4030*t4128*t5414*var3[47] + 5.*t3930*t4030*var3[58] - 5.*t5162*t5231*var3[58];
  p_output1[43]=-5.*t4020*t4375*t4501*var3[3] - 20.*t4329*t4347*t4399*var3[14] + 5.*t4020*t4375*t4501*var3[14] - 30.*t4128*t4139*t4352*var3[25] + 20.*t4329*t4347*t4399*var3[25] - 20.*t3930*t4030*t4307*var3[36] + 30.*t4128*t4139*t4352*var3[36] + 20.*t3930*t4030*t4307*var3[47] - 5.*t5162*t5231*var3[47] + 5.*t5162*t5231*var3[58];
  p_output1[44]=5.*t3872*t4257*t4501*var3[4] + 20.*t3872*t4020*t4375*t4399*var3[15] - 5.*t3872*t4257*t4501*var3[15] + 30.*t3872*t4329*t4347*t4352*var3[26] - 20.*t3872*t4020*t4375*t4399*var3[26] + 20.*t3872*t4128*t4139*t4307*var3[37] - 30.*t3872*t4329*t4347*t4352*var3[37] + 5.*t3872*t3930*t4030*var3[48] - 20.*t3872*t4128*t4139*t4307*var3[48] - 5.*t3872*t3930*t4030*var3[59];
  p_output1[45]=5.*t3515*t3818*t4257*t4501*var3[4] + 20.*t3515*t3818*t4020*t4375*t4399*var3[15] - 5.*t3515*t3818*t4257*t4501*var3[15] + 30.*t3515*t3818*t4329*t4347*t4352*var3[26] - 20.*t3515*t3818*t4020*t4375*t4399*var3[26] + 20.*t3515*t3818*t4128*t4139*t4307*var3[37] - 30.*t3515*t3818*t4329*t4347*t4352*var3[37] + 5.*t3515*t3818*t3930*t4030*var3[48] - 20.*t3515*t3818*t4128*t4139*t4307*var3[48] - 5.*t3515*t3818*t3930*t4030*var3[59];
  p_output1[46]=1.;
  p_output1[47]=t5114;
  p_output1[48]=t5118;
  p_output1[49]=t5128;
  p_output1[50]=t5129;
  p_output1[51]=t5140;
  p_output1[52]=t5178;
  p_output1[53]=-5.*t4501*t5414*var3[4] + 5.*t4257*t4501*var3[15] - 5.*t4020*t4375*t4501*var3[15] - 20.*t4020*t4257*t4399*t5414*var3[15] - 20.*t4329*t4347*t4399*var3[26] + 20.*t4020*t4375*t4399*var3[26] - 30.*t4347*t4352*t4375*t5414*var3[26] - 30.*t4128*t4139*t4352*var3[37] + 30.*t4329*t4347*t4352*var3[37] - 20.*t4139*t4307*t4329*t5414*var3[37] - 20.*t3930*t4030*t4307*var3[48] + 20.*t4128*t4139*t4307*var3[48] - 5.*t4030*t4128*t5414*var3[48] + 5.*t3930*t4030*var3[59] - 5.*t5162*t5231*var3[59];
  p_output1[54]=-5.*t4020*t4375*t4501*var3[4] - 20.*t4329*t4347*t4399*var3[15] + 5.*t4020*t4375*t4501*var3[15] - 30.*t4128*t4139*t4352*var3[26] + 20.*t4329*t4347*t4399*var3[26] - 20.*t3930*t4030*t4307*var3[37] + 30.*t4128*t4139*t4352*var3[37] + 20.*t3930*t4030*t4307*var3[48] - 5.*t5162*t5231*var3[48] + 5.*t5162*t5231*var3[59];
  p_output1[55]=5.*t3872*t4257*t4501*var3[5] + 20.*t3872*t4020*t4375*t4399*var3[16] - 5.*t3872*t4257*t4501*var3[16] + 30.*t3872*t4329*t4347*t4352*var3[27] - 20.*t3872*t4020*t4375*t4399*var3[27] + 20.*t3872*t4128*t4139*t4307*var3[38] - 30.*t3872*t4329*t4347*t4352*var3[38] + 5.*t3872*t3930*t4030*var3[49] - 20.*t3872*t4128*t4139*t4307*var3[49] - 5.*t3872*t3930*t4030*var3[60];
  p_output1[56]=5.*t3515*t3818*t4257*t4501*var3[5] + 20.*t3515*t3818*t4020*t4375*t4399*var3[16] - 5.*t3515*t3818*t4257*t4501*var3[16] + 30.*t3515*t3818*t4329*t4347*t4352*var3[27] - 20.*t3515*t3818*t4020*t4375*t4399*var3[27] + 20.*t3515*t3818*t4128*t4139*t4307*var3[38] - 30.*t3515*t3818*t4329*t4347*t4352*var3[38] + 5.*t3515*t3818*t3930*t4030*var3[49] - 20.*t3515*t3818*t4128*t4139*t4307*var3[49] - 5.*t3515*t3818*t3930*t4030*var3[60];
  p_output1[57]=1.;
  p_output1[58]=t5114;
  p_output1[59]=t5118;
  p_output1[60]=t5128;
  p_output1[61]=t5129;
  p_output1[62]=t5140;
  p_output1[63]=t5178;
  p_output1[64]=-5.*t4501*t5414*var3[5] + 5.*t4257*t4501*var3[16] - 5.*t4020*t4375*t4501*var3[16] - 20.*t4020*t4257*t4399*t5414*var3[16] - 20.*t4329*t4347*t4399*var3[27] + 20.*t4020*t4375*t4399*var3[27] - 30.*t4347*t4352*t4375*t5414*var3[27] - 30.*t4128*t4139*t4352*var3[38] + 30.*t4329*t4347*t4352*var3[38] - 20.*t4139*t4307*t4329*t5414*var3[38] - 20.*t3930*t4030*t4307*var3[49] + 20.*t4128*t4139*t4307*var3[49] - 5.*t4030*t4128*t5414*var3[49] + 5.*t3930*t4030*var3[60] - 5.*t5162*t5231*var3[60];
  p_output1[65]=-5.*t4020*t4375*t4501*var3[5] - 20.*t4329*t4347*t4399*var3[16] + 5.*t4020*t4375*t4501*var3[16] - 30.*t4128*t4139*t4352*var3[27] + 20.*t4329*t4347*t4399*var3[27] - 20.*t3930*t4030*t4307*var3[38] + 30.*t4128*t4139*t4352*var3[38] + 20.*t3930*t4030*t4307*var3[49] - 5.*t5162*t5231*var3[49] + 5.*t5162*t5231*var3[60];
  p_output1[66]=5.*t3872*t4257*t4501*var3[6] + 20.*t3872*t4020*t4375*t4399*var3[17] - 5.*t3872*t4257*t4501*var3[17] + 30.*t3872*t4329*t4347*t4352*var3[28] - 20.*t3872*t4020*t4375*t4399*var3[28] + 20.*t3872*t4128*t4139*t4307*var3[39] - 30.*t3872*t4329*t4347*t4352*var3[39] + 5.*t3872*t3930*t4030*var3[50] - 20.*t3872*t4128*t4139*t4307*var3[50] - 5.*t3872*t3930*t4030*var3[61];
  p_output1[67]=5.*t3515*t3818*t4257*t4501*var3[6] + 20.*t3515*t3818*t4020*t4375*t4399*var3[17] - 5.*t3515*t3818*t4257*t4501*var3[17] + 30.*t3515*t3818*t4329*t4347*t4352*var3[28] - 20.*t3515*t3818*t4020*t4375*t4399*var3[28] + 20.*t3515*t3818*t4128*t4139*t4307*var3[39] - 30.*t3515*t3818*t4329*t4347*t4352*var3[39] + 5.*t3515*t3818*t3930*t4030*var3[50] - 20.*t3515*t3818*t4128*t4139*t4307*var3[50] - 5.*t3515*t3818*t3930*t4030*var3[61];
  p_output1[68]=1.;
  p_output1[69]=t5114;
  p_output1[70]=t5118;
  p_output1[71]=t5128;
  p_output1[72]=t5129;
  p_output1[73]=t5140;
  p_output1[74]=t5178;
  p_output1[75]=-5.*t4501*t5414*var3[6] + 5.*t4257*t4501*var3[17] - 5.*t4020*t4375*t4501*var3[17] - 20.*t4020*t4257*t4399*t5414*var3[17] - 20.*t4329*t4347*t4399*var3[28] + 20.*t4020*t4375*t4399*var3[28] - 30.*t4347*t4352*t4375*t5414*var3[28] - 30.*t4128*t4139*t4352*var3[39] + 30.*t4329*t4347*t4352*var3[39] - 20.*t4139*t4307*t4329*t5414*var3[39] - 20.*t3930*t4030*t4307*var3[50] + 20.*t4128*t4139*t4307*var3[50] - 5.*t4030*t4128*t5414*var3[50] + 5.*t3930*t4030*var3[61] - 5.*t5162*t5231*var3[61];
  p_output1[76]=-5.*t4020*t4375*t4501*var3[6] - 20.*t4329*t4347*t4399*var3[17] + 5.*t4020*t4375*t4501*var3[17] - 30.*t4128*t4139*t4352*var3[28] + 20.*t4329*t4347*t4399*var3[28] - 20.*t3930*t4030*t4307*var3[39] + 30.*t4128*t4139*t4352*var3[39] + 20.*t3930*t4030*t4307*var3[50] - 5.*t5162*t5231*var3[50] + 5.*t5162*t5231*var3[61];
  p_output1[77]=5.*t3872*t4257*t4501*var3[7] + 20.*t3872*t4020*t4375*t4399*var3[18] - 5.*t3872*t4257*t4501*var3[18] + 30.*t3872*t4329*t4347*t4352*var3[29] - 20.*t3872*t4020*t4375*t4399*var3[29] + 20.*t3872*t4128*t4139*t4307*var3[40] - 30.*t3872*t4329*t4347*t4352*var3[40] + 5.*t3872*t3930*t4030*var3[51] - 20.*t3872*t4128*t4139*t4307*var3[51] - 5.*t3872*t3930*t4030*var3[62];
  p_output1[78]=5.*t3515*t3818*t4257*t4501*var3[7] + 20.*t3515*t3818*t4020*t4375*t4399*var3[18] - 5.*t3515*t3818*t4257*t4501*var3[18] + 30.*t3515*t3818*t4329*t4347*t4352*var3[29] - 20.*t3515*t3818*t4020*t4375*t4399*var3[29] + 20.*t3515*t3818*t4128*t4139*t4307*var3[40] - 30.*t3515*t3818*t4329*t4347*t4352*var3[40] + 5.*t3515*t3818*t3930*t4030*var3[51] - 20.*t3515*t3818*t4128*t4139*t4307*var3[51] - 5.*t3515*t3818*t3930*t4030*var3[62];
  p_output1[79]=1.;
  p_output1[80]=t5114;
  p_output1[81]=t5118;
  p_output1[82]=t5128;
  p_output1[83]=t5129;
  p_output1[84]=t5140;
  p_output1[85]=t5178;
  p_output1[86]=-5.*t4501*t5414*var3[7] + 5.*t4257*t4501*var3[18] - 5.*t4020*t4375*t4501*var3[18] - 20.*t4020*t4257*t4399*t5414*var3[18] - 20.*t4329*t4347*t4399*var3[29] + 20.*t4020*t4375*t4399*var3[29] - 30.*t4347*t4352*t4375*t5414*var3[29] - 30.*t4128*t4139*t4352*var3[40] + 30.*t4329*t4347*t4352*var3[40] - 20.*t4139*t4307*t4329*t5414*var3[40] - 20.*t3930*t4030*t4307*var3[51] + 20.*t4128*t4139*t4307*var3[51] - 5.*t4030*t4128*t5414*var3[51] + 5.*t3930*t4030*var3[62] - 5.*t5162*t5231*var3[62];
  p_output1[87]=-5.*t4020*t4375*t4501*var3[7] - 20.*t4329*t4347*t4399*var3[18] + 5.*t4020*t4375*t4501*var3[18] - 30.*t4128*t4139*t4352*var3[29] + 20.*t4329*t4347*t4399*var3[29] - 20.*t3930*t4030*t4307*var3[40] + 30.*t4128*t4139*t4352*var3[40] + 20.*t3930*t4030*t4307*var3[51] - 5.*t5162*t5231*var3[51] + 5.*t5162*t5231*var3[62];
  p_output1[88]=5.*t3872*t4257*t4501*var3[8] + 20.*t3872*t4020*t4375*t4399*var3[19] - 5.*t3872*t4257*t4501*var3[19] + 30.*t3872*t4329*t4347*t4352*var3[30] - 20.*t3872*t4020*t4375*t4399*var3[30] + 20.*t3872*t4128*t4139*t4307*var3[41] - 30.*t3872*t4329*t4347*t4352*var3[41] + 5.*t3872*t3930*t4030*var3[52] - 20.*t3872*t4128*t4139*t4307*var3[52] - 5.*t3872*t3930*t4030*var3[63];
  p_output1[89]=5.*t3515*t3818*t4257*t4501*var3[8] + 20.*t3515*t3818*t4020*t4375*t4399*var3[19] - 5.*t3515*t3818*t4257*t4501*var3[19] + 30.*t3515*t3818*t4329*t4347*t4352*var3[30] - 20.*t3515*t3818*t4020*t4375*t4399*var3[30] + 20.*t3515*t3818*t4128*t4139*t4307*var3[41] - 30.*t3515*t3818*t4329*t4347*t4352*var3[41] + 5.*t3515*t3818*t3930*t4030*var3[52] - 20.*t3515*t3818*t4128*t4139*t4307*var3[52] - 5.*t3515*t3818*t3930*t4030*var3[63];
  p_output1[90]=1.;
  p_output1[91]=t5114;
  p_output1[92]=t5118;
  p_output1[93]=t5128;
  p_output1[94]=t5129;
  p_output1[95]=t5140;
  p_output1[96]=t5178;
  p_output1[97]=-5.*t4501*t5414*var3[8] + 5.*t4257*t4501*var3[19] - 5.*t4020*t4375*t4501*var3[19] - 20.*t4020*t4257*t4399*t5414*var3[19] - 20.*t4329*t4347*t4399*var3[30] + 20.*t4020*t4375*t4399*var3[30] - 30.*t4347*t4352*t4375*t5414*var3[30] - 30.*t4128*t4139*t4352*var3[41] + 30.*t4329*t4347*t4352*var3[41] - 20.*t4139*t4307*t4329*t5414*var3[41] - 20.*t3930*t4030*t4307*var3[52] + 20.*t4128*t4139*t4307*var3[52] - 5.*t4030*t4128*t5414*var3[52] + 5.*t3930*t4030*var3[63] - 5.*t5162*t5231*var3[63];
  p_output1[98]=-5.*t4020*t4375*t4501*var3[8] - 20.*t4329*t4347*t4399*var3[19] + 5.*t4020*t4375*t4501*var3[19] - 30.*t4128*t4139*t4352*var3[30] + 20.*t4329*t4347*t4399*var3[30] - 20.*t3930*t4030*t4307*var3[41] + 30.*t4128*t4139*t4352*var3[41] + 20.*t3930*t4030*t4307*var3[52] - 5.*t5162*t5231*var3[52] + 5.*t5162*t5231*var3[63];
  p_output1[99]=5.*t3872*t4257*t4501*var3[9] + 20.*t3872*t4020*t4375*t4399*var3[20] - 5.*t3872*t4257*t4501*var3[20] + 30.*t3872*t4329*t4347*t4352*var3[31] - 20.*t3872*t4020*t4375*t4399*var3[31] + 20.*t3872*t4128*t4139*t4307*var3[42] - 30.*t3872*t4329*t4347*t4352*var3[42] + 5.*t3872*t3930*t4030*var3[53] - 20.*t3872*t4128*t4139*t4307*var3[53] - 5.*t3872*t3930*t4030*var3[64];
  p_output1[100]=5.*t3515*t3818*t4257*t4501*var3[9] + 20.*t3515*t3818*t4020*t4375*t4399*var3[20] - 5.*t3515*t3818*t4257*t4501*var3[20] + 30.*t3515*t3818*t4329*t4347*t4352*var3[31] - 20.*t3515*t3818*t4020*t4375*t4399*var3[31] + 20.*t3515*t3818*t4128*t4139*t4307*var3[42] - 30.*t3515*t3818*t4329*t4347*t4352*var3[42] + 5.*t3515*t3818*t3930*t4030*var3[53] - 20.*t3515*t3818*t4128*t4139*t4307*var3[53] - 5.*t3515*t3818*t3930*t4030*var3[64];
  p_output1[101]=1.;
  p_output1[102]=t5114;
  p_output1[103]=t5118;
  p_output1[104]=t5128;
  p_output1[105]=t5129;
  p_output1[106]=t5140;
  p_output1[107]=t5178;
  p_output1[108]=-5.*t4501*t5414*var3[9] + 5.*t4257*t4501*var3[20] - 5.*t4020*t4375*t4501*var3[20] - 20.*t4020*t4257*t4399*t5414*var3[20] - 20.*t4329*t4347*t4399*var3[31] + 20.*t4020*t4375*t4399*var3[31] - 30.*t4347*t4352*t4375*t5414*var3[31] - 30.*t4128*t4139*t4352*var3[42] + 30.*t4329*t4347*t4352*var3[42] - 20.*t4139*t4307*t4329*t5414*var3[42] - 20.*t3930*t4030*t4307*var3[53] + 20.*t4128*t4139*t4307*var3[53] - 5.*t4030*t4128*t5414*var3[53] + 5.*t3930*t4030*var3[64] - 5.*t5162*t5231*var3[64];
  p_output1[109]=-5.*t4020*t4375*t4501*var3[9] - 20.*t4329*t4347*t4399*var3[20] + 5.*t4020*t4375*t4501*var3[20] - 30.*t4128*t4139*t4352*var3[31] + 20.*t4329*t4347*t4399*var3[31] - 20.*t3930*t4030*t4307*var3[42] + 30.*t4128*t4139*t4352*var3[42] + 20.*t3930*t4030*t4307*var3[53] - 5.*t5162*t5231*var3[53] + 5.*t5162*t5231*var3[64];
  p_output1[110]=5.*t3872*t4257*t4501*var3[10] + 20.*t3872*t4020*t4375*t4399*var3[21] - 5.*t3872*t4257*t4501*var3[21] + 30.*t3872*t4329*t4347*t4352*var3[32] - 20.*t3872*t4020*t4375*t4399*var3[32] + 20.*t3872*t4128*t4139*t4307*var3[43] - 30.*t3872*t4329*t4347*t4352*var3[43] + 5.*t3872*t3930*t4030*var3[54] - 20.*t3872*t4128*t4139*t4307*var3[54] - 5.*t3872*t3930*t4030*var3[65];
  p_output1[111]=5.*t3515*t3818*t4257*t4501*var3[10] + 20.*t3515*t3818*t4020*t4375*t4399*var3[21] - 5.*t3515*t3818*t4257*t4501*var3[21] + 30.*t3515*t3818*t4329*t4347*t4352*var3[32] - 20.*t3515*t3818*t4020*t4375*t4399*var3[32] + 20.*t3515*t3818*t4128*t4139*t4307*var3[43] - 30.*t3515*t3818*t4329*t4347*t4352*var3[43] + 5.*t3515*t3818*t3930*t4030*var3[54] - 20.*t3515*t3818*t4128*t4139*t4307*var3[54] - 5.*t3515*t3818*t3930*t4030*var3[65];
  p_output1[112]=1.;
  p_output1[113]=t5114;
  p_output1[114]=t5118;
  p_output1[115]=t5128;
  p_output1[116]=t5129;
  p_output1[117]=t5140;
  p_output1[118]=t5178;
  p_output1[119]=-5.*t4501*t5414*var3[10] + 5.*t4257*t4501*var3[21] - 5.*t4020*t4375*t4501*var3[21] - 20.*t4020*t4257*t4399*t5414*var3[21] - 20.*t4329*t4347*t4399*var3[32] + 20.*t4020*t4375*t4399*var3[32] - 30.*t4347*t4352*t4375*t5414*var3[32] - 30.*t4128*t4139*t4352*var3[43] + 30.*t4329*t4347*t4352*var3[43] - 20.*t4139*t4307*t4329*t5414*var3[43] - 20.*t3930*t4030*t4307*var3[54] + 20.*t4128*t4139*t4307*var3[54] - 5.*t4030*t4128*t5414*var3[54] + 5.*t3930*t4030*var3[65] - 5.*t5162*t5231*var3[65];
  p_output1[120]=-5.*t4020*t4375*t4501*var3[10] - 20.*t4329*t4347*t4399*var3[21] + 5.*t4020*t4375*t4501*var3[21] - 30.*t4128*t4139*t4352*var3[32] + 20.*t4329*t4347*t4399*var3[32] - 20.*t3930*t4030*t4307*var3[43] + 30.*t4128*t4139*t4352*var3[43] + 20.*t3930*t4030*t4307*var3[54] - 5.*t5162*t5231*var3[54] + 5.*t5162*t5231*var3[65];
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
