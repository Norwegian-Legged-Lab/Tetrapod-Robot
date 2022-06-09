/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:07 GMT+02:00
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
  double t8413;
  double t3398;
  double t6884;
  double t6903;
  double t8232;
  double t8395;
  double t8802;
  double t8908;
  double t8929;
  double t8930;
  double t8950;
  double t8956;
  double t8957;
  double t9246;
  double t9256;
  double t9258;
  double t9276;
  double t9277;
  double t9295;
  double t9304;
  double t9320;
  double t9323;
  double t9637;
  double t10174;
  double t10197;
  double t10208;
  double t10212;
  double t9823;
  double t9964;
  double t9995;
  double t10072;
  double t10129;
  double t10134;
  double t10159;
  double t10161;
  double t10169;
  double t10170;
  double t10175;
  double t10179;
  double t10181;
  double t10186;
  t8413 = -1.*var5[0];
  t3398 = -1. + var6[0];
  t6884 = -1. + var7[0];
  t6903 = 1/t6884;
  t8232 = -1.*t3398*t6903;
  t8395 = 1. + t8232;
  t8802 = t8413 + var5[1];
  t8908 = Power(t8802,-5);
  t8929 = -1.*var1[0];
  t8930 = t8929 + var1[1];
  t8950 = t3398*t6903*t8930;
  t8956 = t8413 + var1[0] + t8950;
  t8957 = Power(t8956,3);
  t9246 = Power(t8802,-4);
  t9256 = Power(t8956,2);
  t9258 = 1/t8802;
  t9276 = -1.*t9258*t8956;
  t9277 = 1. + t9276;
  t9295 = Power(t8802,-3);
  t9304 = Power(t9277,2);
  t9320 = Power(t8802,-2);
  t9323 = Power(t9277,3);
  t9637 = Power(t9277,4);
  t10174 = Power(t8956,4);
  t10197 = Power(t8802,-6);
  t10208 = -1.*t9320*t8956;
  t10212 = t9258 + t10208;
  t9823 = 5.*t9258*t9637;
  t9964 = 20.*t9320*t8956*t9323;
  t9995 = -5.*t9258*t9637;
  t10072 = t9964 + t9995;
  t10129 = 30.*t9295*t9256*t9304;
  t10134 = -20.*t9320*t8956*t9323;
  t10159 = t10129 + t10134;
  t10161 = 20.*t9246*t8957*t9277;
  t10169 = -30.*t9295*t9256*t9304;
  t10170 = t10161 + t10169;
  t10175 = 5.*t8908*t10174;
  t10179 = -20.*t9246*t8957*t9277;
  t10181 = t10175 + t10179;
  t10186 = -5.*t8908*t10174;
  p_output1[0]=-20.*t8395*t9320*t9323*var4[0] - 60.*t8395*t8956*t9295*t9304*var4[11] + 40.*t8395*t9320*t9323*var4[11] - 60.*t8395*t9246*t9256*t9277*var4[22] + 120.*t8395*t8956*t9295*t9304*var4[22] - 20.*t8395*t9320*t9323*var4[22] - 20.*t8395*t8908*t8957*var4[33] + 120.*t8395*t9246*t9256*t9277*var4[33] - 60.*t8395*t8956*t9295*t9304*var4[33] + 40.*t8395*t8908*t8957*var4[44] - 60.*t8395*t9246*t9256*t9277*var4[44] - 20.*t8395*t8908*t8957*var4[55];
  p_output1[1]=-20.*t3398*t6903*t9320*t9323*var4[0] - 60.*t3398*t6903*t8956*t9295*t9304*var4[11] + 40.*t3398*t6903*t9320*t9323*var4[11] - 60.*t3398*t6903*t9246*t9256*t9277*var4[22] + 120.*t3398*t6903*t8956*t9295*t9304*var4[22] - 20.*t3398*t6903*t9320*t9323*var4[22] - 20.*t3398*t6903*t8908*t8957*var4[33] + 120.*t3398*t6903*t9246*t9256*t9277*var4[33] - 60.*t3398*t6903*t8956*t9295*t9304*var4[33] + 40.*t3398*t6903*t8908*t8957*var4[44] - 60.*t3398*t6903*t9246*t9256*t9277*var4[44] - 20.*t3398*t6903*t8908*t8957*var4[55];
  p_output1[2]=1.;
  p_output1[3]=t9823;
  p_output1[4]=t10072;
  p_output1[5]=t10159;
  p_output1[6]=t10170;
  p_output1[7]=t10181;
  p_output1[8]=t10186;
  p_output1[9]=20.*t10212*t9258*t9323*var4[0] + 5.*t9320*t9637*var4[0] + 60.*t10212*t8956*t9304*t9320*var4[11] - 20.*t10212*t9258*t9323*var4[11] + 40.*t8956*t9295*t9323*var4[11] - 20.*t9320*t9323*var4[11] - 5.*t9320*t9637*var4[11] + 60.*t10212*t9256*t9277*t9295*var4[22] + 90.*t9246*t9256*t9304*var4[22] - 60.*t8956*t9295*t9304*var4[22] - 60.*t10212*t8956*t9304*t9320*var4[22] - 40.*t8956*t9295*t9323*var4[22] + 20.*t9320*t9323*var4[22] + 20.*t10212*t8957*t9246*var4[33] + 80.*t8908*t8957*t9277*var4[33] - 60.*t9246*t9256*t9277*var4[33] - 60.*t10212*t9256*t9277*t9295*var4[33] - 90.*t9246*t9256*t9304*var4[33] + 60.*t8956*t9295*t9304*var4[33] + 25.*t10174*t10197*var4[44] - 20.*t8908*t8957*var4[44] - 20.*t10212*t8957*t9246*var4[44] - 80.*t8908*t8957*t9277*var4[44] + 60.*t9246*t9256*t9277*var4[44] - 25.*t10174*t10197*var4[55] + 20.*t8908*t8957*var4[55];
  p_output1[10]=20.*t8956*t9295*t9323*var4[0] - 5.*t9320*t9637*var4[0] + 60.*t9246*t9256*t9304*var4[11] - 60.*t8956*t9295*t9323*var4[11] + 5.*t9320*t9637*var4[11] + 60.*t8908*t8957*t9277*var4[22] - 150.*t9246*t9256*t9304*var4[22] + 40.*t8956*t9295*t9323*var4[22] + 20.*t10174*t10197*var4[33] - 140.*t8908*t8957*t9277*var4[33] + 90.*t9246*t9256*t9304*var4[33] - 45.*t10174*t10197*var4[44] + 80.*t8908*t8957*t9277*var4[44] + 25.*t10174*t10197*var4[55];
  p_output1[11]=-20.*t8395*t9320*t9323*var4[1] - 60.*t8395*t8956*t9295*t9304*var4[12] + 40.*t8395*t9320*t9323*var4[12] - 60.*t8395*t9246*t9256*t9277*var4[23] + 120.*t8395*t8956*t9295*t9304*var4[23] - 20.*t8395*t9320*t9323*var4[23] - 20.*t8395*t8908*t8957*var4[34] + 120.*t8395*t9246*t9256*t9277*var4[34] - 60.*t8395*t8956*t9295*t9304*var4[34] + 40.*t8395*t8908*t8957*var4[45] - 60.*t8395*t9246*t9256*t9277*var4[45] - 20.*t8395*t8908*t8957*var4[56];
  p_output1[12]=-20.*t3398*t6903*t9320*t9323*var4[1] - 60.*t3398*t6903*t8956*t9295*t9304*var4[12] + 40.*t3398*t6903*t9320*t9323*var4[12] - 60.*t3398*t6903*t9246*t9256*t9277*var4[23] + 120.*t3398*t6903*t8956*t9295*t9304*var4[23] - 20.*t3398*t6903*t9320*t9323*var4[23] - 20.*t3398*t6903*t8908*t8957*var4[34] + 120.*t3398*t6903*t9246*t9256*t9277*var4[34] - 60.*t3398*t6903*t8956*t9295*t9304*var4[34] + 40.*t3398*t6903*t8908*t8957*var4[45] - 60.*t3398*t6903*t9246*t9256*t9277*var4[45] - 20.*t3398*t6903*t8908*t8957*var4[56];
  p_output1[13]=1.;
  p_output1[14]=t9823;
  p_output1[15]=t10072;
  p_output1[16]=t10159;
  p_output1[17]=t10170;
  p_output1[18]=t10181;
  p_output1[19]=t10186;
  p_output1[20]=20.*t10212*t9258*t9323*var4[1] + 5.*t9320*t9637*var4[1] + 60.*t10212*t8956*t9304*t9320*var4[12] - 20.*t10212*t9258*t9323*var4[12] + 40.*t8956*t9295*t9323*var4[12] - 20.*t9320*t9323*var4[12] - 5.*t9320*t9637*var4[12] + 60.*t10212*t9256*t9277*t9295*var4[23] + 90.*t9246*t9256*t9304*var4[23] - 60.*t8956*t9295*t9304*var4[23] - 60.*t10212*t8956*t9304*t9320*var4[23] - 40.*t8956*t9295*t9323*var4[23] + 20.*t9320*t9323*var4[23] + 20.*t10212*t8957*t9246*var4[34] + 80.*t8908*t8957*t9277*var4[34] - 60.*t9246*t9256*t9277*var4[34] - 60.*t10212*t9256*t9277*t9295*var4[34] - 90.*t9246*t9256*t9304*var4[34] + 60.*t8956*t9295*t9304*var4[34] + 25.*t10174*t10197*var4[45] - 20.*t8908*t8957*var4[45] - 20.*t10212*t8957*t9246*var4[45] - 80.*t8908*t8957*t9277*var4[45] + 60.*t9246*t9256*t9277*var4[45] - 25.*t10174*t10197*var4[56] + 20.*t8908*t8957*var4[56];
  p_output1[21]=20.*t8956*t9295*t9323*var4[1] - 5.*t9320*t9637*var4[1] + 60.*t9246*t9256*t9304*var4[12] - 60.*t8956*t9295*t9323*var4[12] + 5.*t9320*t9637*var4[12] + 60.*t8908*t8957*t9277*var4[23] - 150.*t9246*t9256*t9304*var4[23] + 40.*t8956*t9295*t9323*var4[23] + 20.*t10174*t10197*var4[34] - 140.*t8908*t8957*t9277*var4[34] + 90.*t9246*t9256*t9304*var4[34] - 45.*t10174*t10197*var4[45] + 80.*t8908*t8957*t9277*var4[45] + 25.*t10174*t10197*var4[56];
  p_output1[22]=-20.*t8395*t9320*t9323*var4[2] - 60.*t8395*t8956*t9295*t9304*var4[13] + 40.*t8395*t9320*t9323*var4[13] - 60.*t8395*t9246*t9256*t9277*var4[24] + 120.*t8395*t8956*t9295*t9304*var4[24] - 20.*t8395*t9320*t9323*var4[24] - 20.*t8395*t8908*t8957*var4[35] + 120.*t8395*t9246*t9256*t9277*var4[35] - 60.*t8395*t8956*t9295*t9304*var4[35] + 40.*t8395*t8908*t8957*var4[46] - 60.*t8395*t9246*t9256*t9277*var4[46] - 20.*t8395*t8908*t8957*var4[57];
  p_output1[23]=-20.*t3398*t6903*t9320*t9323*var4[2] - 60.*t3398*t6903*t8956*t9295*t9304*var4[13] + 40.*t3398*t6903*t9320*t9323*var4[13] - 60.*t3398*t6903*t9246*t9256*t9277*var4[24] + 120.*t3398*t6903*t8956*t9295*t9304*var4[24] - 20.*t3398*t6903*t9320*t9323*var4[24] - 20.*t3398*t6903*t8908*t8957*var4[35] + 120.*t3398*t6903*t9246*t9256*t9277*var4[35] - 60.*t3398*t6903*t8956*t9295*t9304*var4[35] + 40.*t3398*t6903*t8908*t8957*var4[46] - 60.*t3398*t6903*t9246*t9256*t9277*var4[46] - 20.*t3398*t6903*t8908*t8957*var4[57];
  p_output1[24]=1.;
  p_output1[25]=t9823;
  p_output1[26]=t10072;
  p_output1[27]=t10159;
  p_output1[28]=t10170;
  p_output1[29]=t10181;
  p_output1[30]=t10186;
  p_output1[31]=20.*t10212*t9258*t9323*var4[2] + 5.*t9320*t9637*var4[2] + 60.*t10212*t8956*t9304*t9320*var4[13] - 20.*t10212*t9258*t9323*var4[13] + 40.*t8956*t9295*t9323*var4[13] - 20.*t9320*t9323*var4[13] - 5.*t9320*t9637*var4[13] + 60.*t10212*t9256*t9277*t9295*var4[24] + 90.*t9246*t9256*t9304*var4[24] - 60.*t8956*t9295*t9304*var4[24] - 60.*t10212*t8956*t9304*t9320*var4[24] - 40.*t8956*t9295*t9323*var4[24] + 20.*t9320*t9323*var4[24] + 20.*t10212*t8957*t9246*var4[35] + 80.*t8908*t8957*t9277*var4[35] - 60.*t9246*t9256*t9277*var4[35] - 60.*t10212*t9256*t9277*t9295*var4[35] - 90.*t9246*t9256*t9304*var4[35] + 60.*t8956*t9295*t9304*var4[35] + 25.*t10174*t10197*var4[46] - 20.*t8908*t8957*var4[46] - 20.*t10212*t8957*t9246*var4[46] - 80.*t8908*t8957*t9277*var4[46] + 60.*t9246*t9256*t9277*var4[46] - 25.*t10174*t10197*var4[57] + 20.*t8908*t8957*var4[57];
  p_output1[32]=20.*t8956*t9295*t9323*var4[2] - 5.*t9320*t9637*var4[2] + 60.*t9246*t9256*t9304*var4[13] - 60.*t8956*t9295*t9323*var4[13] + 5.*t9320*t9637*var4[13] + 60.*t8908*t8957*t9277*var4[24] - 150.*t9246*t9256*t9304*var4[24] + 40.*t8956*t9295*t9323*var4[24] + 20.*t10174*t10197*var4[35] - 140.*t8908*t8957*t9277*var4[35] + 90.*t9246*t9256*t9304*var4[35] - 45.*t10174*t10197*var4[46] + 80.*t8908*t8957*t9277*var4[46] + 25.*t10174*t10197*var4[57];
  p_output1[33]=-20.*t8395*t9320*t9323*var4[3] - 60.*t8395*t8956*t9295*t9304*var4[14] + 40.*t8395*t9320*t9323*var4[14] - 60.*t8395*t9246*t9256*t9277*var4[25] + 120.*t8395*t8956*t9295*t9304*var4[25] - 20.*t8395*t9320*t9323*var4[25] - 20.*t8395*t8908*t8957*var4[36] + 120.*t8395*t9246*t9256*t9277*var4[36] - 60.*t8395*t8956*t9295*t9304*var4[36] + 40.*t8395*t8908*t8957*var4[47] - 60.*t8395*t9246*t9256*t9277*var4[47] - 20.*t8395*t8908*t8957*var4[58];
  p_output1[34]=-20.*t3398*t6903*t9320*t9323*var4[3] - 60.*t3398*t6903*t8956*t9295*t9304*var4[14] + 40.*t3398*t6903*t9320*t9323*var4[14] - 60.*t3398*t6903*t9246*t9256*t9277*var4[25] + 120.*t3398*t6903*t8956*t9295*t9304*var4[25] - 20.*t3398*t6903*t9320*t9323*var4[25] - 20.*t3398*t6903*t8908*t8957*var4[36] + 120.*t3398*t6903*t9246*t9256*t9277*var4[36] - 60.*t3398*t6903*t8956*t9295*t9304*var4[36] + 40.*t3398*t6903*t8908*t8957*var4[47] - 60.*t3398*t6903*t9246*t9256*t9277*var4[47] - 20.*t3398*t6903*t8908*t8957*var4[58];
  p_output1[35]=1.;
  p_output1[36]=t9823;
  p_output1[37]=t10072;
  p_output1[38]=t10159;
  p_output1[39]=t10170;
  p_output1[40]=t10181;
  p_output1[41]=t10186;
  p_output1[42]=20.*t10212*t9258*t9323*var4[3] + 5.*t9320*t9637*var4[3] + 60.*t10212*t8956*t9304*t9320*var4[14] - 20.*t10212*t9258*t9323*var4[14] + 40.*t8956*t9295*t9323*var4[14] - 20.*t9320*t9323*var4[14] - 5.*t9320*t9637*var4[14] + 60.*t10212*t9256*t9277*t9295*var4[25] + 90.*t9246*t9256*t9304*var4[25] - 60.*t8956*t9295*t9304*var4[25] - 60.*t10212*t8956*t9304*t9320*var4[25] - 40.*t8956*t9295*t9323*var4[25] + 20.*t9320*t9323*var4[25] + 20.*t10212*t8957*t9246*var4[36] + 80.*t8908*t8957*t9277*var4[36] - 60.*t9246*t9256*t9277*var4[36] - 60.*t10212*t9256*t9277*t9295*var4[36] - 90.*t9246*t9256*t9304*var4[36] + 60.*t8956*t9295*t9304*var4[36] + 25.*t10174*t10197*var4[47] - 20.*t8908*t8957*var4[47] - 20.*t10212*t8957*t9246*var4[47] - 80.*t8908*t8957*t9277*var4[47] + 60.*t9246*t9256*t9277*var4[47] - 25.*t10174*t10197*var4[58] + 20.*t8908*t8957*var4[58];
  p_output1[43]=20.*t8956*t9295*t9323*var4[3] - 5.*t9320*t9637*var4[3] + 60.*t9246*t9256*t9304*var4[14] - 60.*t8956*t9295*t9323*var4[14] + 5.*t9320*t9637*var4[14] + 60.*t8908*t8957*t9277*var4[25] - 150.*t9246*t9256*t9304*var4[25] + 40.*t8956*t9295*t9323*var4[25] + 20.*t10174*t10197*var4[36] - 140.*t8908*t8957*t9277*var4[36] + 90.*t9246*t9256*t9304*var4[36] - 45.*t10174*t10197*var4[47] + 80.*t8908*t8957*t9277*var4[47] + 25.*t10174*t10197*var4[58];
  p_output1[44]=-20.*t8395*t9320*t9323*var4[4] - 60.*t8395*t8956*t9295*t9304*var4[15] + 40.*t8395*t9320*t9323*var4[15] - 60.*t8395*t9246*t9256*t9277*var4[26] + 120.*t8395*t8956*t9295*t9304*var4[26] - 20.*t8395*t9320*t9323*var4[26] - 20.*t8395*t8908*t8957*var4[37] + 120.*t8395*t9246*t9256*t9277*var4[37] - 60.*t8395*t8956*t9295*t9304*var4[37] + 40.*t8395*t8908*t8957*var4[48] - 60.*t8395*t9246*t9256*t9277*var4[48] - 20.*t8395*t8908*t8957*var4[59];
  p_output1[45]=-20.*t3398*t6903*t9320*t9323*var4[4] - 60.*t3398*t6903*t8956*t9295*t9304*var4[15] + 40.*t3398*t6903*t9320*t9323*var4[15] - 60.*t3398*t6903*t9246*t9256*t9277*var4[26] + 120.*t3398*t6903*t8956*t9295*t9304*var4[26] - 20.*t3398*t6903*t9320*t9323*var4[26] - 20.*t3398*t6903*t8908*t8957*var4[37] + 120.*t3398*t6903*t9246*t9256*t9277*var4[37] - 60.*t3398*t6903*t8956*t9295*t9304*var4[37] + 40.*t3398*t6903*t8908*t8957*var4[48] - 60.*t3398*t6903*t9246*t9256*t9277*var4[48] - 20.*t3398*t6903*t8908*t8957*var4[59];
  p_output1[46]=1.;
  p_output1[47]=t9823;
  p_output1[48]=t10072;
  p_output1[49]=t10159;
  p_output1[50]=t10170;
  p_output1[51]=t10181;
  p_output1[52]=t10186;
  p_output1[53]=20.*t10212*t9258*t9323*var4[4] + 5.*t9320*t9637*var4[4] + 60.*t10212*t8956*t9304*t9320*var4[15] - 20.*t10212*t9258*t9323*var4[15] + 40.*t8956*t9295*t9323*var4[15] - 20.*t9320*t9323*var4[15] - 5.*t9320*t9637*var4[15] + 60.*t10212*t9256*t9277*t9295*var4[26] + 90.*t9246*t9256*t9304*var4[26] - 60.*t8956*t9295*t9304*var4[26] - 60.*t10212*t8956*t9304*t9320*var4[26] - 40.*t8956*t9295*t9323*var4[26] + 20.*t9320*t9323*var4[26] + 20.*t10212*t8957*t9246*var4[37] + 80.*t8908*t8957*t9277*var4[37] - 60.*t9246*t9256*t9277*var4[37] - 60.*t10212*t9256*t9277*t9295*var4[37] - 90.*t9246*t9256*t9304*var4[37] + 60.*t8956*t9295*t9304*var4[37] + 25.*t10174*t10197*var4[48] - 20.*t8908*t8957*var4[48] - 20.*t10212*t8957*t9246*var4[48] - 80.*t8908*t8957*t9277*var4[48] + 60.*t9246*t9256*t9277*var4[48] - 25.*t10174*t10197*var4[59] + 20.*t8908*t8957*var4[59];
  p_output1[54]=20.*t8956*t9295*t9323*var4[4] - 5.*t9320*t9637*var4[4] + 60.*t9246*t9256*t9304*var4[15] - 60.*t8956*t9295*t9323*var4[15] + 5.*t9320*t9637*var4[15] + 60.*t8908*t8957*t9277*var4[26] - 150.*t9246*t9256*t9304*var4[26] + 40.*t8956*t9295*t9323*var4[26] + 20.*t10174*t10197*var4[37] - 140.*t8908*t8957*t9277*var4[37] + 90.*t9246*t9256*t9304*var4[37] - 45.*t10174*t10197*var4[48] + 80.*t8908*t8957*t9277*var4[48] + 25.*t10174*t10197*var4[59];
  p_output1[55]=-20.*t8395*t9320*t9323*var4[5] - 60.*t8395*t8956*t9295*t9304*var4[16] + 40.*t8395*t9320*t9323*var4[16] - 60.*t8395*t9246*t9256*t9277*var4[27] + 120.*t8395*t8956*t9295*t9304*var4[27] - 20.*t8395*t9320*t9323*var4[27] - 20.*t8395*t8908*t8957*var4[38] + 120.*t8395*t9246*t9256*t9277*var4[38] - 60.*t8395*t8956*t9295*t9304*var4[38] + 40.*t8395*t8908*t8957*var4[49] - 60.*t8395*t9246*t9256*t9277*var4[49] - 20.*t8395*t8908*t8957*var4[60];
  p_output1[56]=-20.*t3398*t6903*t9320*t9323*var4[5] - 60.*t3398*t6903*t8956*t9295*t9304*var4[16] + 40.*t3398*t6903*t9320*t9323*var4[16] - 60.*t3398*t6903*t9246*t9256*t9277*var4[27] + 120.*t3398*t6903*t8956*t9295*t9304*var4[27] - 20.*t3398*t6903*t9320*t9323*var4[27] - 20.*t3398*t6903*t8908*t8957*var4[38] + 120.*t3398*t6903*t9246*t9256*t9277*var4[38] - 60.*t3398*t6903*t8956*t9295*t9304*var4[38] + 40.*t3398*t6903*t8908*t8957*var4[49] - 60.*t3398*t6903*t9246*t9256*t9277*var4[49] - 20.*t3398*t6903*t8908*t8957*var4[60];
  p_output1[57]=1.;
  p_output1[58]=t9823;
  p_output1[59]=t10072;
  p_output1[60]=t10159;
  p_output1[61]=t10170;
  p_output1[62]=t10181;
  p_output1[63]=t10186;
  p_output1[64]=20.*t10212*t9258*t9323*var4[5] + 5.*t9320*t9637*var4[5] + 60.*t10212*t8956*t9304*t9320*var4[16] - 20.*t10212*t9258*t9323*var4[16] + 40.*t8956*t9295*t9323*var4[16] - 20.*t9320*t9323*var4[16] - 5.*t9320*t9637*var4[16] + 60.*t10212*t9256*t9277*t9295*var4[27] + 90.*t9246*t9256*t9304*var4[27] - 60.*t8956*t9295*t9304*var4[27] - 60.*t10212*t8956*t9304*t9320*var4[27] - 40.*t8956*t9295*t9323*var4[27] + 20.*t9320*t9323*var4[27] + 20.*t10212*t8957*t9246*var4[38] + 80.*t8908*t8957*t9277*var4[38] - 60.*t9246*t9256*t9277*var4[38] - 60.*t10212*t9256*t9277*t9295*var4[38] - 90.*t9246*t9256*t9304*var4[38] + 60.*t8956*t9295*t9304*var4[38] + 25.*t10174*t10197*var4[49] - 20.*t8908*t8957*var4[49] - 20.*t10212*t8957*t9246*var4[49] - 80.*t8908*t8957*t9277*var4[49] + 60.*t9246*t9256*t9277*var4[49] - 25.*t10174*t10197*var4[60] + 20.*t8908*t8957*var4[60];
  p_output1[65]=20.*t8956*t9295*t9323*var4[5] - 5.*t9320*t9637*var4[5] + 60.*t9246*t9256*t9304*var4[16] - 60.*t8956*t9295*t9323*var4[16] + 5.*t9320*t9637*var4[16] + 60.*t8908*t8957*t9277*var4[27] - 150.*t9246*t9256*t9304*var4[27] + 40.*t8956*t9295*t9323*var4[27] + 20.*t10174*t10197*var4[38] - 140.*t8908*t8957*t9277*var4[38] + 90.*t9246*t9256*t9304*var4[38] - 45.*t10174*t10197*var4[49] + 80.*t8908*t8957*t9277*var4[49] + 25.*t10174*t10197*var4[60];
  p_output1[66]=-20.*t8395*t9320*t9323*var4[6] - 60.*t8395*t8956*t9295*t9304*var4[17] + 40.*t8395*t9320*t9323*var4[17] - 60.*t8395*t9246*t9256*t9277*var4[28] + 120.*t8395*t8956*t9295*t9304*var4[28] - 20.*t8395*t9320*t9323*var4[28] - 20.*t8395*t8908*t8957*var4[39] + 120.*t8395*t9246*t9256*t9277*var4[39] - 60.*t8395*t8956*t9295*t9304*var4[39] + 40.*t8395*t8908*t8957*var4[50] - 60.*t8395*t9246*t9256*t9277*var4[50] - 20.*t8395*t8908*t8957*var4[61];
  p_output1[67]=-20.*t3398*t6903*t9320*t9323*var4[6] - 60.*t3398*t6903*t8956*t9295*t9304*var4[17] + 40.*t3398*t6903*t9320*t9323*var4[17] - 60.*t3398*t6903*t9246*t9256*t9277*var4[28] + 120.*t3398*t6903*t8956*t9295*t9304*var4[28] - 20.*t3398*t6903*t9320*t9323*var4[28] - 20.*t3398*t6903*t8908*t8957*var4[39] + 120.*t3398*t6903*t9246*t9256*t9277*var4[39] - 60.*t3398*t6903*t8956*t9295*t9304*var4[39] + 40.*t3398*t6903*t8908*t8957*var4[50] - 60.*t3398*t6903*t9246*t9256*t9277*var4[50] - 20.*t3398*t6903*t8908*t8957*var4[61];
  p_output1[68]=1.;
  p_output1[69]=t9823;
  p_output1[70]=t10072;
  p_output1[71]=t10159;
  p_output1[72]=t10170;
  p_output1[73]=t10181;
  p_output1[74]=t10186;
  p_output1[75]=20.*t10212*t9258*t9323*var4[6] + 5.*t9320*t9637*var4[6] + 60.*t10212*t8956*t9304*t9320*var4[17] - 20.*t10212*t9258*t9323*var4[17] + 40.*t8956*t9295*t9323*var4[17] - 20.*t9320*t9323*var4[17] - 5.*t9320*t9637*var4[17] + 60.*t10212*t9256*t9277*t9295*var4[28] + 90.*t9246*t9256*t9304*var4[28] - 60.*t8956*t9295*t9304*var4[28] - 60.*t10212*t8956*t9304*t9320*var4[28] - 40.*t8956*t9295*t9323*var4[28] + 20.*t9320*t9323*var4[28] + 20.*t10212*t8957*t9246*var4[39] + 80.*t8908*t8957*t9277*var4[39] - 60.*t9246*t9256*t9277*var4[39] - 60.*t10212*t9256*t9277*t9295*var4[39] - 90.*t9246*t9256*t9304*var4[39] + 60.*t8956*t9295*t9304*var4[39] + 25.*t10174*t10197*var4[50] - 20.*t8908*t8957*var4[50] - 20.*t10212*t8957*t9246*var4[50] - 80.*t8908*t8957*t9277*var4[50] + 60.*t9246*t9256*t9277*var4[50] - 25.*t10174*t10197*var4[61] + 20.*t8908*t8957*var4[61];
  p_output1[76]=20.*t8956*t9295*t9323*var4[6] - 5.*t9320*t9637*var4[6] + 60.*t9246*t9256*t9304*var4[17] - 60.*t8956*t9295*t9323*var4[17] + 5.*t9320*t9637*var4[17] + 60.*t8908*t8957*t9277*var4[28] - 150.*t9246*t9256*t9304*var4[28] + 40.*t8956*t9295*t9323*var4[28] + 20.*t10174*t10197*var4[39] - 140.*t8908*t8957*t9277*var4[39] + 90.*t9246*t9256*t9304*var4[39] - 45.*t10174*t10197*var4[50] + 80.*t8908*t8957*t9277*var4[50] + 25.*t10174*t10197*var4[61];
  p_output1[77]=-20.*t8395*t9320*t9323*var4[7] - 60.*t8395*t8956*t9295*t9304*var4[18] + 40.*t8395*t9320*t9323*var4[18] - 60.*t8395*t9246*t9256*t9277*var4[29] + 120.*t8395*t8956*t9295*t9304*var4[29] - 20.*t8395*t9320*t9323*var4[29] - 20.*t8395*t8908*t8957*var4[40] + 120.*t8395*t9246*t9256*t9277*var4[40] - 60.*t8395*t8956*t9295*t9304*var4[40] + 40.*t8395*t8908*t8957*var4[51] - 60.*t8395*t9246*t9256*t9277*var4[51] - 20.*t8395*t8908*t8957*var4[62];
  p_output1[78]=-20.*t3398*t6903*t9320*t9323*var4[7] - 60.*t3398*t6903*t8956*t9295*t9304*var4[18] + 40.*t3398*t6903*t9320*t9323*var4[18] - 60.*t3398*t6903*t9246*t9256*t9277*var4[29] + 120.*t3398*t6903*t8956*t9295*t9304*var4[29] - 20.*t3398*t6903*t9320*t9323*var4[29] - 20.*t3398*t6903*t8908*t8957*var4[40] + 120.*t3398*t6903*t9246*t9256*t9277*var4[40] - 60.*t3398*t6903*t8956*t9295*t9304*var4[40] + 40.*t3398*t6903*t8908*t8957*var4[51] - 60.*t3398*t6903*t9246*t9256*t9277*var4[51] - 20.*t3398*t6903*t8908*t8957*var4[62];
  p_output1[79]=1.;
  p_output1[80]=t9823;
  p_output1[81]=t10072;
  p_output1[82]=t10159;
  p_output1[83]=t10170;
  p_output1[84]=t10181;
  p_output1[85]=t10186;
  p_output1[86]=20.*t10212*t9258*t9323*var4[7] + 5.*t9320*t9637*var4[7] + 60.*t10212*t8956*t9304*t9320*var4[18] - 20.*t10212*t9258*t9323*var4[18] + 40.*t8956*t9295*t9323*var4[18] - 20.*t9320*t9323*var4[18] - 5.*t9320*t9637*var4[18] + 60.*t10212*t9256*t9277*t9295*var4[29] + 90.*t9246*t9256*t9304*var4[29] - 60.*t8956*t9295*t9304*var4[29] - 60.*t10212*t8956*t9304*t9320*var4[29] - 40.*t8956*t9295*t9323*var4[29] + 20.*t9320*t9323*var4[29] + 20.*t10212*t8957*t9246*var4[40] + 80.*t8908*t8957*t9277*var4[40] - 60.*t9246*t9256*t9277*var4[40] - 60.*t10212*t9256*t9277*t9295*var4[40] - 90.*t9246*t9256*t9304*var4[40] + 60.*t8956*t9295*t9304*var4[40] + 25.*t10174*t10197*var4[51] - 20.*t8908*t8957*var4[51] - 20.*t10212*t8957*t9246*var4[51] - 80.*t8908*t8957*t9277*var4[51] + 60.*t9246*t9256*t9277*var4[51] - 25.*t10174*t10197*var4[62] + 20.*t8908*t8957*var4[62];
  p_output1[87]=20.*t8956*t9295*t9323*var4[7] - 5.*t9320*t9637*var4[7] + 60.*t9246*t9256*t9304*var4[18] - 60.*t8956*t9295*t9323*var4[18] + 5.*t9320*t9637*var4[18] + 60.*t8908*t8957*t9277*var4[29] - 150.*t9246*t9256*t9304*var4[29] + 40.*t8956*t9295*t9323*var4[29] + 20.*t10174*t10197*var4[40] - 140.*t8908*t8957*t9277*var4[40] + 90.*t9246*t9256*t9304*var4[40] - 45.*t10174*t10197*var4[51] + 80.*t8908*t8957*t9277*var4[51] + 25.*t10174*t10197*var4[62];
  p_output1[88]=-20.*t8395*t9320*t9323*var4[8] - 60.*t8395*t8956*t9295*t9304*var4[19] + 40.*t8395*t9320*t9323*var4[19] - 60.*t8395*t9246*t9256*t9277*var4[30] + 120.*t8395*t8956*t9295*t9304*var4[30] - 20.*t8395*t9320*t9323*var4[30] - 20.*t8395*t8908*t8957*var4[41] + 120.*t8395*t9246*t9256*t9277*var4[41] - 60.*t8395*t8956*t9295*t9304*var4[41] + 40.*t8395*t8908*t8957*var4[52] - 60.*t8395*t9246*t9256*t9277*var4[52] - 20.*t8395*t8908*t8957*var4[63];
  p_output1[89]=-20.*t3398*t6903*t9320*t9323*var4[8] - 60.*t3398*t6903*t8956*t9295*t9304*var4[19] + 40.*t3398*t6903*t9320*t9323*var4[19] - 60.*t3398*t6903*t9246*t9256*t9277*var4[30] + 120.*t3398*t6903*t8956*t9295*t9304*var4[30] - 20.*t3398*t6903*t9320*t9323*var4[30] - 20.*t3398*t6903*t8908*t8957*var4[41] + 120.*t3398*t6903*t9246*t9256*t9277*var4[41] - 60.*t3398*t6903*t8956*t9295*t9304*var4[41] + 40.*t3398*t6903*t8908*t8957*var4[52] - 60.*t3398*t6903*t9246*t9256*t9277*var4[52] - 20.*t3398*t6903*t8908*t8957*var4[63];
  p_output1[90]=1.;
  p_output1[91]=t9823;
  p_output1[92]=t10072;
  p_output1[93]=t10159;
  p_output1[94]=t10170;
  p_output1[95]=t10181;
  p_output1[96]=t10186;
  p_output1[97]=20.*t10212*t9258*t9323*var4[8] + 5.*t9320*t9637*var4[8] + 60.*t10212*t8956*t9304*t9320*var4[19] - 20.*t10212*t9258*t9323*var4[19] + 40.*t8956*t9295*t9323*var4[19] - 20.*t9320*t9323*var4[19] - 5.*t9320*t9637*var4[19] + 60.*t10212*t9256*t9277*t9295*var4[30] + 90.*t9246*t9256*t9304*var4[30] - 60.*t8956*t9295*t9304*var4[30] - 60.*t10212*t8956*t9304*t9320*var4[30] - 40.*t8956*t9295*t9323*var4[30] + 20.*t9320*t9323*var4[30] + 20.*t10212*t8957*t9246*var4[41] + 80.*t8908*t8957*t9277*var4[41] - 60.*t9246*t9256*t9277*var4[41] - 60.*t10212*t9256*t9277*t9295*var4[41] - 90.*t9246*t9256*t9304*var4[41] + 60.*t8956*t9295*t9304*var4[41] + 25.*t10174*t10197*var4[52] - 20.*t8908*t8957*var4[52] - 20.*t10212*t8957*t9246*var4[52] - 80.*t8908*t8957*t9277*var4[52] + 60.*t9246*t9256*t9277*var4[52] - 25.*t10174*t10197*var4[63] + 20.*t8908*t8957*var4[63];
  p_output1[98]=20.*t8956*t9295*t9323*var4[8] - 5.*t9320*t9637*var4[8] + 60.*t9246*t9256*t9304*var4[19] - 60.*t8956*t9295*t9323*var4[19] + 5.*t9320*t9637*var4[19] + 60.*t8908*t8957*t9277*var4[30] - 150.*t9246*t9256*t9304*var4[30] + 40.*t8956*t9295*t9323*var4[30] + 20.*t10174*t10197*var4[41] - 140.*t8908*t8957*t9277*var4[41] + 90.*t9246*t9256*t9304*var4[41] - 45.*t10174*t10197*var4[52] + 80.*t8908*t8957*t9277*var4[52] + 25.*t10174*t10197*var4[63];
  p_output1[99]=-20.*t8395*t9320*t9323*var4[9] - 60.*t8395*t8956*t9295*t9304*var4[20] + 40.*t8395*t9320*t9323*var4[20] - 60.*t8395*t9246*t9256*t9277*var4[31] + 120.*t8395*t8956*t9295*t9304*var4[31] - 20.*t8395*t9320*t9323*var4[31] - 20.*t8395*t8908*t8957*var4[42] + 120.*t8395*t9246*t9256*t9277*var4[42] - 60.*t8395*t8956*t9295*t9304*var4[42] + 40.*t8395*t8908*t8957*var4[53] - 60.*t8395*t9246*t9256*t9277*var4[53] - 20.*t8395*t8908*t8957*var4[64];
  p_output1[100]=-20.*t3398*t6903*t9320*t9323*var4[9] - 60.*t3398*t6903*t8956*t9295*t9304*var4[20] + 40.*t3398*t6903*t9320*t9323*var4[20] - 60.*t3398*t6903*t9246*t9256*t9277*var4[31] + 120.*t3398*t6903*t8956*t9295*t9304*var4[31] - 20.*t3398*t6903*t9320*t9323*var4[31] - 20.*t3398*t6903*t8908*t8957*var4[42] + 120.*t3398*t6903*t9246*t9256*t9277*var4[42] - 60.*t3398*t6903*t8956*t9295*t9304*var4[42] + 40.*t3398*t6903*t8908*t8957*var4[53] - 60.*t3398*t6903*t9246*t9256*t9277*var4[53] - 20.*t3398*t6903*t8908*t8957*var4[64];
  p_output1[101]=1.;
  p_output1[102]=t9823;
  p_output1[103]=t10072;
  p_output1[104]=t10159;
  p_output1[105]=t10170;
  p_output1[106]=t10181;
  p_output1[107]=t10186;
  p_output1[108]=20.*t10212*t9258*t9323*var4[9] + 5.*t9320*t9637*var4[9] + 60.*t10212*t8956*t9304*t9320*var4[20] - 20.*t10212*t9258*t9323*var4[20] + 40.*t8956*t9295*t9323*var4[20] - 20.*t9320*t9323*var4[20] - 5.*t9320*t9637*var4[20] + 60.*t10212*t9256*t9277*t9295*var4[31] + 90.*t9246*t9256*t9304*var4[31] - 60.*t8956*t9295*t9304*var4[31] - 60.*t10212*t8956*t9304*t9320*var4[31] - 40.*t8956*t9295*t9323*var4[31] + 20.*t9320*t9323*var4[31] + 20.*t10212*t8957*t9246*var4[42] + 80.*t8908*t8957*t9277*var4[42] - 60.*t9246*t9256*t9277*var4[42] - 60.*t10212*t9256*t9277*t9295*var4[42] - 90.*t9246*t9256*t9304*var4[42] + 60.*t8956*t9295*t9304*var4[42] + 25.*t10174*t10197*var4[53] - 20.*t8908*t8957*var4[53] - 20.*t10212*t8957*t9246*var4[53] - 80.*t8908*t8957*t9277*var4[53] + 60.*t9246*t9256*t9277*var4[53] - 25.*t10174*t10197*var4[64] + 20.*t8908*t8957*var4[64];
  p_output1[109]=20.*t8956*t9295*t9323*var4[9] - 5.*t9320*t9637*var4[9] + 60.*t9246*t9256*t9304*var4[20] - 60.*t8956*t9295*t9323*var4[20] + 5.*t9320*t9637*var4[20] + 60.*t8908*t8957*t9277*var4[31] - 150.*t9246*t9256*t9304*var4[31] + 40.*t8956*t9295*t9323*var4[31] + 20.*t10174*t10197*var4[42] - 140.*t8908*t8957*t9277*var4[42] + 90.*t9246*t9256*t9304*var4[42] - 45.*t10174*t10197*var4[53] + 80.*t8908*t8957*t9277*var4[53] + 25.*t10174*t10197*var4[64];
  p_output1[110]=-20.*t8395*t9320*t9323*var4[10] - 60.*t8395*t8956*t9295*t9304*var4[21] + 40.*t8395*t9320*t9323*var4[21] - 60.*t8395*t9246*t9256*t9277*var4[32] + 120.*t8395*t8956*t9295*t9304*var4[32] - 20.*t8395*t9320*t9323*var4[32] - 20.*t8395*t8908*t8957*var4[43] + 120.*t8395*t9246*t9256*t9277*var4[43] - 60.*t8395*t8956*t9295*t9304*var4[43] + 40.*t8395*t8908*t8957*var4[54] - 60.*t8395*t9246*t9256*t9277*var4[54] - 20.*t8395*t8908*t8957*var4[65];
  p_output1[111]=-20.*t3398*t6903*t9320*t9323*var4[10] - 60.*t3398*t6903*t8956*t9295*t9304*var4[21] + 40.*t3398*t6903*t9320*t9323*var4[21] - 60.*t3398*t6903*t9246*t9256*t9277*var4[32] + 120.*t3398*t6903*t8956*t9295*t9304*var4[32] - 20.*t3398*t6903*t9320*t9323*var4[32] - 20.*t3398*t6903*t8908*t8957*var4[43] + 120.*t3398*t6903*t9246*t9256*t9277*var4[43] - 60.*t3398*t6903*t8956*t9295*t9304*var4[43] + 40.*t3398*t6903*t8908*t8957*var4[54] - 60.*t3398*t6903*t9246*t9256*t9277*var4[54] - 20.*t3398*t6903*t8908*t8957*var4[65];
  p_output1[112]=1.;
  p_output1[113]=t9823;
  p_output1[114]=t10072;
  p_output1[115]=t10159;
  p_output1[116]=t10170;
  p_output1[117]=t10181;
  p_output1[118]=t10186;
  p_output1[119]=20.*t10212*t9258*t9323*var4[10] + 5.*t9320*t9637*var4[10] + 60.*t10212*t8956*t9304*t9320*var4[21] - 20.*t10212*t9258*t9323*var4[21] + 40.*t8956*t9295*t9323*var4[21] - 20.*t9320*t9323*var4[21] - 5.*t9320*t9637*var4[21] + 60.*t10212*t9256*t9277*t9295*var4[32] + 90.*t9246*t9256*t9304*var4[32] - 60.*t8956*t9295*t9304*var4[32] - 60.*t10212*t8956*t9304*t9320*var4[32] - 40.*t8956*t9295*t9323*var4[32] + 20.*t9320*t9323*var4[32] + 20.*t10212*t8957*t9246*var4[43] + 80.*t8908*t8957*t9277*var4[43] - 60.*t9246*t9256*t9277*var4[43] - 60.*t10212*t9256*t9277*t9295*var4[43] - 90.*t9246*t9256*t9304*var4[43] + 60.*t8956*t9295*t9304*var4[43] + 25.*t10174*t10197*var4[54] - 20.*t8908*t8957*var4[54] - 20.*t10212*t8957*t9246*var4[54] - 80.*t8908*t8957*t9277*var4[54] + 60.*t9246*t9256*t9277*var4[54] - 25.*t10174*t10197*var4[65] + 20.*t8908*t8957*var4[65];
  p_output1[120]=20.*t8956*t9295*t9323*var4[10] - 5.*t9320*t9637*var4[10] + 60.*t9246*t9256*t9304*var4[21] - 60.*t8956*t9295*t9323*var4[21] + 5.*t9320*t9637*var4[21] + 60.*t8908*t8957*t9277*var4[32] - 150.*t9246*t9256*t9304*var4[32] + 40.*t8956*t9295*t9323*var4[32] + 20.*t10174*t10197*var4[43] - 140.*t8908*t8957*t9277*var4[43] + 90.*t9246*t9256*t9304*var4[43] - 45.*t10174*t10197*var4[54] + 80.*t8908*t8957*t9277*var4[54] + 25.*t10174*t10197*var4[65];
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
