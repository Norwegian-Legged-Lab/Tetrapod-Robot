/*
 * Automatically Generated from Mathematica.
 * Mon 30 May 2022 12:13:46 GMT+02:00
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
  double t3086;
  double t5336;
  double t17421;
  double t17915;
  double t17917;
  double t17926;
  double t17959;
  double t18194;
  double t18213;
  double t18215;
  double t18218;
  double t18219;
  double t18220;
  double t18504;
  double t18505;
  double t18629;
  double t19121;
  double t19257;
  double t19259;
  double t19242;
  double t18978;
  double t18979;
  double t18983;
  double t18986;
  double t18992;
  double t19236;
  t3086 = -1.*var3[0];
  t5336 = t3086 + var3[1];
  t17421 = Power(t5336,-5);
  t17915 = t3086 + var1[0];
  t17917 = Power(t17915,4);
  t17926 = Power(t5336,-4);
  t17959 = Power(t17915,3);
  t18194 = 1/t5336;
  t18213 = -1.*t18194*t17915;
  t18215 = 1. + t18213;
  t18218 = Power(t5336,-3);
  t18219 = Power(t17915,2);
  t18220 = Power(t18215,2);
  t18504 = Power(t5336,-2);
  t18505 = Power(t18215,3);
  t18629 = Power(t18215,4);
  t19121 = Power(t17915,5);
  t19257 = -1.*t18504*t17915;
  t19259 = t18194 + t19257;
  t19242 = Power(t5336,-6);
  t18978 = Power(t18215,5);
  t18979 = 5.*t18194*t17915*t18629;
  t18983 = 10.*t18504*t18219*t18505;
  t18986 = 10.*t18218*t17959*t18220;
  t18992 = 5.*t17926*t17917*t18215;
  t19236 = t17421*t19121;
  p_output1[0]=-5.*t18194*t18629*var2[0] - 20.*t17915*t18504*t18505*var2[11] + 5.*t18194*t18629*var2[11] - 30.*t18218*t18219*t18220*var2[22] + 20.*t17915*t18504*t18505*var2[22] - 20.*t17926*t17959*t18215*var2[33] + 30.*t18218*t18219*t18220*var2[33] - 5.*t17421*t17917*var2[44] + 20.*t17926*t17959*t18215*var2[44] + 5.*t17421*t17917*var2[55];
  p_output1[1]=t18978;
  p_output1[2]=t18979;
  p_output1[3]=t18983;
  p_output1[4]=t18986;
  p_output1[5]=t18992;
  p_output1[6]=t19236;
  p_output1[7]=5.*t18629*t19259*var2[0] - 5.*t18194*t18629*var2[11] + 5.*t17915*t18504*t18629*var2[11] + 20.*t17915*t18194*t18505*t19259*var2[11] + 20.*t18218*t18219*t18505*var2[22] - 20.*t17915*t18504*t18505*var2[22] + 30.*t18219*t18220*t18504*t19259*var2[22] + 30.*t17926*t17959*t18220*var2[33] - 30.*t18218*t18219*t18220*var2[33] + 20.*t17959*t18215*t18218*t19259*var2[33] + 20.*t17421*t17917*t18215*var2[44] - 20.*t17926*t17959*t18215*var2[44] + 5.*t17917*t17926*t19259*var2[44] - 5.*t17421*t17917*var2[55] + 5.*t19121*t19242*var2[55];
  p_output1[8]=5.*t17915*t18504*t18629*var2[0] + 20.*t18218*t18219*t18505*var2[11] - 5.*t17915*t18504*t18629*var2[11] + 30.*t17926*t17959*t18220*var2[22] - 20.*t18218*t18219*t18505*var2[22] + 20.*t17421*t17917*t18215*var2[33] - 30.*t17926*t17959*t18220*var2[33] - 20.*t17421*t17917*t18215*var2[44] + 5.*t19121*t19242*var2[44] - 5.*t19121*t19242*var2[55];
  p_output1[9]=-5.*t18194*t18629*var2[1] - 20.*t17915*t18504*t18505*var2[12] + 5.*t18194*t18629*var2[12] - 30.*t18218*t18219*t18220*var2[23] + 20.*t17915*t18504*t18505*var2[23] - 20.*t17926*t17959*t18215*var2[34] + 30.*t18218*t18219*t18220*var2[34] - 5.*t17421*t17917*var2[45] + 20.*t17926*t17959*t18215*var2[45] + 5.*t17421*t17917*var2[56];
  p_output1[10]=t18978;
  p_output1[11]=t18979;
  p_output1[12]=t18983;
  p_output1[13]=t18986;
  p_output1[14]=t18992;
  p_output1[15]=t19236;
  p_output1[16]=5.*t18629*t19259*var2[1] - 5.*t18194*t18629*var2[12] + 5.*t17915*t18504*t18629*var2[12] + 20.*t17915*t18194*t18505*t19259*var2[12] + 20.*t18218*t18219*t18505*var2[23] - 20.*t17915*t18504*t18505*var2[23] + 30.*t18219*t18220*t18504*t19259*var2[23] + 30.*t17926*t17959*t18220*var2[34] - 30.*t18218*t18219*t18220*var2[34] + 20.*t17959*t18215*t18218*t19259*var2[34] + 20.*t17421*t17917*t18215*var2[45] - 20.*t17926*t17959*t18215*var2[45] + 5.*t17917*t17926*t19259*var2[45] - 5.*t17421*t17917*var2[56] + 5.*t19121*t19242*var2[56];
  p_output1[17]=5.*t17915*t18504*t18629*var2[1] + 20.*t18218*t18219*t18505*var2[12] - 5.*t17915*t18504*t18629*var2[12] + 30.*t17926*t17959*t18220*var2[23] - 20.*t18218*t18219*t18505*var2[23] + 20.*t17421*t17917*t18215*var2[34] - 30.*t17926*t17959*t18220*var2[34] - 20.*t17421*t17917*t18215*var2[45] + 5.*t19121*t19242*var2[45] - 5.*t19121*t19242*var2[56];
  p_output1[18]=-5.*t18194*t18629*var2[2] - 20.*t17915*t18504*t18505*var2[13] + 5.*t18194*t18629*var2[13] - 30.*t18218*t18219*t18220*var2[24] + 20.*t17915*t18504*t18505*var2[24] - 20.*t17926*t17959*t18215*var2[35] + 30.*t18218*t18219*t18220*var2[35] - 5.*t17421*t17917*var2[46] + 20.*t17926*t17959*t18215*var2[46] + 5.*t17421*t17917*var2[57];
  p_output1[19]=t18978;
  p_output1[20]=t18979;
  p_output1[21]=t18983;
  p_output1[22]=t18986;
  p_output1[23]=t18992;
  p_output1[24]=t19236;
  p_output1[25]=5.*t18629*t19259*var2[2] - 5.*t18194*t18629*var2[13] + 5.*t17915*t18504*t18629*var2[13] + 20.*t17915*t18194*t18505*t19259*var2[13] + 20.*t18218*t18219*t18505*var2[24] - 20.*t17915*t18504*t18505*var2[24] + 30.*t18219*t18220*t18504*t19259*var2[24] + 30.*t17926*t17959*t18220*var2[35] - 30.*t18218*t18219*t18220*var2[35] + 20.*t17959*t18215*t18218*t19259*var2[35] + 20.*t17421*t17917*t18215*var2[46] - 20.*t17926*t17959*t18215*var2[46] + 5.*t17917*t17926*t19259*var2[46] - 5.*t17421*t17917*var2[57] + 5.*t19121*t19242*var2[57];
  p_output1[26]=5.*t17915*t18504*t18629*var2[2] + 20.*t18218*t18219*t18505*var2[13] - 5.*t17915*t18504*t18629*var2[13] + 30.*t17926*t17959*t18220*var2[24] - 20.*t18218*t18219*t18505*var2[24] + 20.*t17421*t17917*t18215*var2[35] - 30.*t17926*t17959*t18220*var2[35] - 20.*t17421*t17917*t18215*var2[46] + 5.*t19121*t19242*var2[46] - 5.*t19121*t19242*var2[57];
  p_output1[27]=-5.*t18194*t18629*var2[3] - 20.*t17915*t18504*t18505*var2[14] + 5.*t18194*t18629*var2[14] - 30.*t18218*t18219*t18220*var2[25] + 20.*t17915*t18504*t18505*var2[25] - 20.*t17926*t17959*t18215*var2[36] + 30.*t18218*t18219*t18220*var2[36] - 5.*t17421*t17917*var2[47] + 20.*t17926*t17959*t18215*var2[47] + 5.*t17421*t17917*var2[58];
  p_output1[28]=t18978;
  p_output1[29]=t18979;
  p_output1[30]=t18983;
  p_output1[31]=t18986;
  p_output1[32]=t18992;
  p_output1[33]=t19236;
  p_output1[34]=5.*t18629*t19259*var2[3] - 5.*t18194*t18629*var2[14] + 5.*t17915*t18504*t18629*var2[14] + 20.*t17915*t18194*t18505*t19259*var2[14] + 20.*t18218*t18219*t18505*var2[25] - 20.*t17915*t18504*t18505*var2[25] + 30.*t18219*t18220*t18504*t19259*var2[25] + 30.*t17926*t17959*t18220*var2[36] - 30.*t18218*t18219*t18220*var2[36] + 20.*t17959*t18215*t18218*t19259*var2[36] + 20.*t17421*t17917*t18215*var2[47] - 20.*t17926*t17959*t18215*var2[47] + 5.*t17917*t17926*t19259*var2[47] - 5.*t17421*t17917*var2[58] + 5.*t19121*t19242*var2[58];
  p_output1[35]=5.*t17915*t18504*t18629*var2[3] + 20.*t18218*t18219*t18505*var2[14] - 5.*t17915*t18504*t18629*var2[14] + 30.*t17926*t17959*t18220*var2[25] - 20.*t18218*t18219*t18505*var2[25] + 20.*t17421*t17917*t18215*var2[36] - 30.*t17926*t17959*t18220*var2[36] - 20.*t17421*t17917*t18215*var2[47] + 5.*t19121*t19242*var2[47] - 5.*t19121*t19242*var2[58];
  p_output1[36]=-5.*t18194*t18629*var2[4] - 20.*t17915*t18504*t18505*var2[15] + 5.*t18194*t18629*var2[15] - 30.*t18218*t18219*t18220*var2[26] + 20.*t17915*t18504*t18505*var2[26] - 20.*t17926*t17959*t18215*var2[37] + 30.*t18218*t18219*t18220*var2[37] - 5.*t17421*t17917*var2[48] + 20.*t17926*t17959*t18215*var2[48] + 5.*t17421*t17917*var2[59];
  p_output1[37]=t18978;
  p_output1[38]=t18979;
  p_output1[39]=t18983;
  p_output1[40]=t18986;
  p_output1[41]=t18992;
  p_output1[42]=t19236;
  p_output1[43]=5.*t18629*t19259*var2[4] - 5.*t18194*t18629*var2[15] + 5.*t17915*t18504*t18629*var2[15] + 20.*t17915*t18194*t18505*t19259*var2[15] + 20.*t18218*t18219*t18505*var2[26] - 20.*t17915*t18504*t18505*var2[26] + 30.*t18219*t18220*t18504*t19259*var2[26] + 30.*t17926*t17959*t18220*var2[37] - 30.*t18218*t18219*t18220*var2[37] + 20.*t17959*t18215*t18218*t19259*var2[37] + 20.*t17421*t17917*t18215*var2[48] - 20.*t17926*t17959*t18215*var2[48] + 5.*t17917*t17926*t19259*var2[48] - 5.*t17421*t17917*var2[59] + 5.*t19121*t19242*var2[59];
  p_output1[44]=5.*t17915*t18504*t18629*var2[4] + 20.*t18218*t18219*t18505*var2[15] - 5.*t17915*t18504*t18629*var2[15] + 30.*t17926*t17959*t18220*var2[26] - 20.*t18218*t18219*t18505*var2[26] + 20.*t17421*t17917*t18215*var2[37] - 30.*t17926*t17959*t18220*var2[37] - 20.*t17421*t17917*t18215*var2[48] + 5.*t19121*t19242*var2[48] - 5.*t19121*t19242*var2[59];
  p_output1[45]=-5.*t18194*t18629*var2[5] - 20.*t17915*t18504*t18505*var2[16] + 5.*t18194*t18629*var2[16] - 30.*t18218*t18219*t18220*var2[27] + 20.*t17915*t18504*t18505*var2[27] - 20.*t17926*t17959*t18215*var2[38] + 30.*t18218*t18219*t18220*var2[38] - 5.*t17421*t17917*var2[49] + 20.*t17926*t17959*t18215*var2[49] + 5.*t17421*t17917*var2[60];
  p_output1[46]=t18978;
  p_output1[47]=t18979;
  p_output1[48]=t18983;
  p_output1[49]=t18986;
  p_output1[50]=t18992;
  p_output1[51]=t19236;
  p_output1[52]=5.*t18629*t19259*var2[5] - 5.*t18194*t18629*var2[16] + 5.*t17915*t18504*t18629*var2[16] + 20.*t17915*t18194*t18505*t19259*var2[16] + 20.*t18218*t18219*t18505*var2[27] - 20.*t17915*t18504*t18505*var2[27] + 30.*t18219*t18220*t18504*t19259*var2[27] + 30.*t17926*t17959*t18220*var2[38] - 30.*t18218*t18219*t18220*var2[38] + 20.*t17959*t18215*t18218*t19259*var2[38] + 20.*t17421*t17917*t18215*var2[49] - 20.*t17926*t17959*t18215*var2[49] + 5.*t17917*t17926*t19259*var2[49] - 5.*t17421*t17917*var2[60] + 5.*t19121*t19242*var2[60];
  p_output1[53]=5.*t17915*t18504*t18629*var2[5] + 20.*t18218*t18219*t18505*var2[16] - 5.*t17915*t18504*t18629*var2[16] + 30.*t17926*t17959*t18220*var2[27] - 20.*t18218*t18219*t18505*var2[27] + 20.*t17421*t17917*t18215*var2[38] - 30.*t17926*t17959*t18220*var2[38] - 20.*t17421*t17917*t18215*var2[49] + 5.*t19121*t19242*var2[49] - 5.*t19121*t19242*var2[60];
  p_output1[54]=-5.*t18194*t18629*var2[6] - 20.*t17915*t18504*t18505*var2[17] + 5.*t18194*t18629*var2[17] - 30.*t18218*t18219*t18220*var2[28] + 20.*t17915*t18504*t18505*var2[28] - 20.*t17926*t17959*t18215*var2[39] + 30.*t18218*t18219*t18220*var2[39] - 5.*t17421*t17917*var2[50] + 20.*t17926*t17959*t18215*var2[50] + 5.*t17421*t17917*var2[61];
  p_output1[55]=t18978;
  p_output1[56]=t18979;
  p_output1[57]=t18983;
  p_output1[58]=t18986;
  p_output1[59]=t18992;
  p_output1[60]=t19236;
  p_output1[61]=5.*t18629*t19259*var2[6] - 5.*t18194*t18629*var2[17] + 5.*t17915*t18504*t18629*var2[17] + 20.*t17915*t18194*t18505*t19259*var2[17] + 20.*t18218*t18219*t18505*var2[28] - 20.*t17915*t18504*t18505*var2[28] + 30.*t18219*t18220*t18504*t19259*var2[28] + 30.*t17926*t17959*t18220*var2[39] - 30.*t18218*t18219*t18220*var2[39] + 20.*t17959*t18215*t18218*t19259*var2[39] + 20.*t17421*t17917*t18215*var2[50] - 20.*t17926*t17959*t18215*var2[50] + 5.*t17917*t17926*t19259*var2[50] - 5.*t17421*t17917*var2[61] + 5.*t19121*t19242*var2[61];
  p_output1[62]=5.*t17915*t18504*t18629*var2[6] + 20.*t18218*t18219*t18505*var2[17] - 5.*t17915*t18504*t18629*var2[17] + 30.*t17926*t17959*t18220*var2[28] - 20.*t18218*t18219*t18505*var2[28] + 20.*t17421*t17917*t18215*var2[39] - 30.*t17926*t17959*t18220*var2[39] - 20.*t17421*t17917*t18215*var2[50] + 5.*t19121*t19242*var2[50] - 5.*t19121*t19242*var2[61];
  p_output1[63]=-5.*t18194*t18629*var2[7] - 20.*t17915*t18504*t18505*var2[18] + 5.*t18194*t18629*var2[18] - 30.*t18218*t18219*t18220*var2[29] + 20.*t17915*t18504*t18505*var2[29] - 20.*t17926*t17959*t18215*var2[40] + 30.*t18218*t18219*t18220*var2[40] - 5.*t17421*t17917*var2[51] + 20.*t17926*t17959*t18215*var2[51] + 5.*t17421*t17917*var2[62];
  p_output1[64]=t18978;
  p_output1[65]=t18979;
  p_output1[66]=t18983;
  p_output1[67]=t18986;
  p_output1[68]=t18992;
  p_output1[69]=t19236;
  p_output1[70]=5.*t18629*t19259*var2[7] - 5.*t18194*t18629*var2[18] + 5.*t17915*t18504*t18629*var2[18] + 20.*t17915*t18194*t18505*t19259*var2[18] + 20.*t18218*t18219*t18505*var2[29] - 20.*t17915*t18504*t18505*var2[29] + 30.*t18219*t18220*t18504*t19259*var2[29] + 30.*t17926*t17959*t18220*var2[40] - 30.*t18218*t18219*t18220*var2[40] + 20.*t17959*t18215*t18218*t19259*var2[40] + 20.*t17421*t17917*t18215*var2[51] - 20.*t17926*t17959*t18215*var2[51] + 5.*t17917*t17926*t19259*var2[51] - 5.*t17421*t17917*var2[62] + 5.*t19121*t19242*var2[62];
  p_output1[71]=5.*t17915*t18504*t18629*var2[7] + 20.*t18218*t18219*t18505*var2[18] - 5.*t17915*t18504*t18629*var2[18] + 30.*t17926*t17959*t18220*var2[29] - 20.*t18218*t18219*t18505*var2[29] + 20.*t17421*t17917*t18215*var2[40] - 30.*t17926*t17959*t18220*var2[40] - 20.*t17421*t17917*t18215*var2[51] + 5.*t19121*t19242*var2[51] - 5.*t19121*t19242*var2[62];
  p_output1[72]=-5.*t18194*t18629*var2[8] - 20.*t17915*t18504*t18505*var2[19] + 5.*t18194*t18629*var2[19] - 30.*t18218*t18219*t18220*var2[30] + 20.*t17915*t18504*t18505*var2[30] - 20.*t17926*t17959*t18215*var2[41] + 30.*t18218*t18219*t18220*var2[41] - 5.*t17421*t17917*var2[52] + 20.*t17926*t17959*t18215*var2[52] + 5.*t17421*t17917*var2[63];
  p_output1[73]=t18978;
  p_output1[74]=t18979;
  p_output1[75]=t18983;
  p_output1[76]=t18986;
  p_output1[77]=t18992;
  p_output1[78]=t19236;
  p_output1[79]=5.*t18629*t19259*var2[8] - 5.*t18194*t18629*var2[19] + 5.*t17915*t18504*t18629*var2[19] + 20.*t17915*t18194*t18505*t19259*var2[19] + 20.*t18218*t18219*t18505*var2[30] - 20.*t17915*t18504*t18505*var2[30] + 30.*t18219*t18220*t18504*t19259*var2[30] + 30.*t17926*t17959*t18220*var2[41] - 30.*t18218*t18219*t18220*var2[41] + 20.*t17959*t18215*t18218*t19259*var2[41] + 20.*t17421*t17917*t18215*var2[52] - 20.*t17926*t17959*t18215*var2[52] + 5.*t17917*t17926*t19259*var2[52] - 5.*t17421*t17917*var2[63] + 5.*t19121*t19242*var2[63];
  p_output1[80]=5.*t17915*t18504*t18629*var2[8] + 20.*t18218*t18219*t18505*var2[19] - 5.*t17915*t18504*t18629*var2[19] + 30.*t17926*t17959*t18220*var2[30] - 20.*t18218*t18219*t18505*var2[30] + 20.*t17421*t17917*t18215*var2[41] - 30.*t17926*t17959*t18220*var2[41] - 20.*t17421*t17917*t18215*var2[52] + 5.*t19121*t19242*var2[52] - 5.*t19121*t19242*var2[63];
  p_output1[81]=-5.*t18194*t18629*var2[9] - 20.*t17915*t18504*t18505*var2[20] + 5.*t18194*t18629*var2[20] - 30.*t18218*t18219*t18220*var2[31] + 20.*t17915*t18504*t18505*var2[31] - 20.*t17926*t17959*t18215*var2[42] + 30.*t18218*t18219*t18220*var2[42] - 5.*t17421*t17917*var2[53] + 20.*t17926*t17959*t18215*var2[53] + 5.*t17421*t17917*var2[64];
  p_output1[82]=t18978;
  p_output1[83]=t18979;
  p_output1[84]=t18983;
  p_output1[85]=t18986;
  p_output1[86]=t18992;
  p_output1[87]=t19236;
  p_output1[88]=5.*t18629*t19259*var2[9] - 5.*t18194*t18629*var2[20] + 5.*t17915*t18504*t18629*var2[20] + 20.*t17915*t18194*t18505*t19259*var2[20] + 20.*t18218*t18219*t18505*var2[31] - 20.*t17915*t18504*t18505*var2[31] + 30.*t18219*t18220*t18504*t19259*var2[31] + 30.*t17926*t17959*t18220*var2[42] - 30.*t18218*t18219*t18220*var2[42] + 20.*t17959*t18215*t18218*t19259*var2[42] + 20.*t17421*t17917*t18215*var2[53] - 20.*t17926*t17959*t18215*var2[53] + 5.*t17917*t17926*t19259*var2[53] - 5.*t17421*t17917*var2[64] + 5.*t19121*t19242*var2[64];
  p_output1[89]=5.*t17915*t18504*t18629*var2[9] + 20.*t18218*t18219*t18505*var2[20] - 5.*t17915*t18504*t18629*var2[20] + 30.*t17926*t17959*t18220*var2[31] - 20.*t18218*t18219*t18505*var2[31] + 20.*t17421*t17917*t18215*var2[42] - 30.*t17926*t17959*t18220*var2[42] - 20.*t17421*t17917*t18215*var2[53] + 5.*t19121*t19242*var2[53] - 5.*t19121*t19242*var2[64];
  p_output1[90]=-5.*t18194*t18629*var2[10] - 20.*t17915*t18504*t18505*var2[21] + 5.*t18194*t18629*var2[21] - 30.*t18218*t18219*t18220*var2[32] + 20.*t17915*t18504*t18505*var2[32] - 20.*t17926*t17959*t18215*var2[43] + 30.*t18218*t18219*t18220*var2[43] - 5.*t17421*t17917*var2[54] + 20.*t17926*t17959*t18215*var2[54] + 5.*t17421*t17917*var2[65];
  p_output1[91]=t18978;
  p_output1[92]=t18979;
  p_output1[93]=t18983;
  p_output1[94]=t18986;
  p_output1[95]=t18992;
  p_output1[96]=t19236;
  p_output1[97]=5.*t18629*t19259*var2[10] - 5.*t18194*t18629*var2[21] + 5.*t17915*t18504*t18629*var2[21] + 20.*t17915*t18194*t18505*t19259*var2[21] + 20.*t18218*t18219*t18505*var2[32] - 20.*t17915*t18504*t18505*var2[32] + 30.*t18219*t18220*t18504*t19259*var2[32] + 30.*t17926*t17959*t18220*var2[43] - 30.*t18218*t18219*t18220*var2[43] + 20.*t17959*t18215*t18218*t19259*var2[43] + 20.*t17421*t17917*t18215*var2[54] - 20.*t17926*t17959*t18215*var2[54] + 5.*t17917*t17926*t19259*var2[54] - 5.*t17421*t17917*var2[65] + 5.*t19121*t19242*var2[65];
  p_output1[98]=5.*t17915*t18504*t18629*var2[10] + 20.*t18218*t18219*t18505*var2[21] - 5.*t17915*t18504*t18629*var2[21] + 30.*t17926*t17959*t18220*var2[32] - 20.*t18218*t18219*t18505*var2[32] + 20.*t17421*t17917*t18215*var2[43] - 30.*t17926*t17959*t18220*var2[43] - 20.*t17421*t17917*t18215*var2[54] + 5.*t19121*t19242*var2[54] - 5.*t19121*t19242*var2[65];
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
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 99, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_yd_position_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_yd_position_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
