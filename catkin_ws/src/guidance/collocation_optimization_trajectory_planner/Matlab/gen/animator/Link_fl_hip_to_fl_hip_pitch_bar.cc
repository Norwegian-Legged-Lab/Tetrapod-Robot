/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:47 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t179;
  double t186;
  double t189;
  double t193;
  double t194;
  double t197;
  double t184;
  double t231;
  double t159;
  double t199;
  double t216;
  double t227;
  double t232;
  double t235;
  double t239;
  double t240;
  double t243;
  double t246;
  double t248;
  double t256;
  double t355;
  double t176;
  double t247;
  double t466;
  double t476;
  double t4367;
  double t4378;
  double t4411;
  double t4412;
  double t4430;
  double t4453;
  double t4461;
  double t4545;
  double t4435;
  double t4561;
  double t4578;
  double t4621;
  double t4642;
  double t4720;
  double t4821;
  double t4849;
  double t4376;
  double t4662;
  double t4861;
  double t4862;
  double t6218;
  double t6230;
  double t6246;
  double t6277;
  double t6279;
  double t6301;
  double t6264;
  double t6304;
  double t6306;
  double t6307;
  double t6308;
  double t6313;
  double t6341;
  double t6343;
  double t6206;
  double t6311;
  double t6347;
  double t6349;
  double t6795;
  double t6798;
  double t6802;
  double t6804;
  double t7308;
  double t7314;
  double t7315;
  double t7316;
  double t7882;
  double t7883;
  double t7884;
  double t7887;
  t179 = Cos(var1[4]);
  t186 = Cos(var1[6]);
  t189 = -1.*t186;
  t193 = 1. + t189;
  t194 = 0.15121*t193;
  t197 = Sin(var1[6]);
  t184 = Sin(var1[5]);
  t231 = Cos(var1[5]);
  t159 = Sin(var1[4]);
  t199 = -0.15121*t197;
  t216 = t194 + t199;
  t227 = -1.*t179*t184*t216;
  t232 = 0.15121*t197;
  t235 = t194 + t232;
  t239 = t179*t231*t235;
  t240 = -1.*t179*t186*t184;
  t243 = -1.*t179*t231*t197;
  t246 = t240 + t243;
  t248 = t179*t231*t186;
  t256 = -1.*t179*t184*t197;
  t355 = t248 + t256;
  t176 = -0.014277*t159;
  t247 = 0.146972*t246;
  t466 = 0.149416*t355;
  t476 = var1[0] + t176 + t227 + t239 + t247 + t466;
  t4367 = Sin(var1[3]);
  t4378 = Cos(var1[3]);
  t4411 = t4378*t231;
  t4412 = -1.*t4367*t159*t184;
  t4430 = t4411 + t4412;
  t4453 = t231*t4367*t159;
  t4461 = t4378*t184;
  t4545 = t4453 + t4461;
  t4435 = t4430*t216;
  t4561 = t4545*t235;
  t4578 = t186*t4430;
  t4621 = -1.*t4545*t197;
  t4642 = t4578 + t4621;
  t4720 = t186*t4545;
  t4821 = t4430*t197;
  t4849 = t4720 + t4821;
  t4376 = 0.014277*t179*t4367;
  t4662 = 0.146972*t4642;
  t4861 = 0.149416*t4849;
  t4862 = var1[1] + t4376 + t4435 + t4561 + t4662 + t4861;
  t6218 = t231*t4367;
  t6230 = t4378*t159*t184;
  t6246 = t6218 + t6230;
  t6277 = -1.*t4378*t231*t159;
  t6279 = t4367*t184;
  t6301 = t6277 + t6279;
  t6264 = t6246*t216;
  t6304 = t6301*t235;
  t6306 = t186*t6246;
  t6307 = -1.*t6301*t197;
  t6308 = t6306 + t6307;
  t6313 = t186*t6301;
  t6341 = t6246*t197;
  t6343 = t6313 + t6341;
  t6206 = -0.014277*t4378*t179;
  t6311 = 0.146972*t6308;
  t6347 = 0.149416*t6343;
  t6349 = var1[2] + t6206 + t6264 + t6304 + t6311 + t6347;
  t6795 = -0.053027*t159;
  t6798 = 0.222472*t246;
  t6802 = 0.279416*t355;
  t6804 = var1[0] + t6795 + t227 + t239 + t6798 + t6802;
  t7308 = 0.053027*t179*t4367;
  t7314 = 0.222472*t4642;
  t7315 = 0.279416*t4849;
  t7316 = var1[1] + t7308 + t4435 + t4561 + t7314 + t7315;
  t7882 = -0.053027*t4378*t179;
  t7883 = 0.222472*t6308;
  t7884 = 0.279416*t6343;
  t7887 = var1[2] + t7882 + t6264 + t6304 + t7883 + t7884;
  p_output1[0]=t476;
  p_output1[1]=-0.014372*t159 + t227 + t239 + 0.151229*t246 + 0.146915*t355 + var1[0];
  p_output1[2]=-0.01291*t159 + t227 + t239 + 0.155483*t246 + 0.14488*t355 + var1[0];
  p_output1[3]=-0.010049*t159 + t227 + t239 + 0.159275*t246 + 0.143531*t355 + var1[0];
  p_output1[4]=-0.006099*t159 + t227 + t239 + 0.162193*t246 + 0.143014*t355 + var1[0];
  p_output1[5]=-0.001488*t159 + t227 + t239 + 0.16392*t246 + 0.143385*t355 + var1[0];
  p_output1[6]=0.003284*t159 + t227 + t239 + 0.16427*t246 + 0.144604*t355 + var1[0];
  p_output1[7]=0.0077*t159 + t227 + t239 + 0.163205*t246 + 0.146539*t355 + var1[0];
  p_output1[8]=0.011282*t159 + t227 + t239 + 0.16084*t246 + 0.14898*t355 + var1[0];
  p_output1[9]=0.013641*t159 + t227 + t239 + 0.157432*t246 + 0.151663*t355 + var1[0];
  p_output1[10]=0.014522*t159 + t227 + t239 + 0.153349*t246 + 0.154297*t355 + var1[0];
  p_output1[11]=0.01383*t159 + t227 + t239 + 0.149034*t246 + 0.156596*t355 + var1[0];
  p_output1[12]=0.011638*t159 + t227 + t239 + 0.144956*t246 + 0.158312*t355 + var1[0];
  p_output1[13]=0.008186*t159 + t227 + t239 + 0.141554*t246 + 0.159258*t355 + var1[0];
  p_output1[14]=0.003846*t159 + t227 + t239 + 0.1392*t246 + 0.159332*t355 + var1[0];
  p_output1[15]=-0.00091*t159 + t227 + t239 + 0.138147*t246 + 0.158526*t355 + var1[0];
  p_output1[16]=-0.005568*t159 + t227 + t239 + 0.138509*t246 + 0.156927*t355 + var1[0];
  p_output1[17]=-0.009622*t159 + t227 + t239 + 0.140248*t246 + 0.154708*t355 + var1[0];
  p_output1[18]=-0.012634*t159 + t227 + t239 + 0.143174*t246 + 0.152111*t355 + var1[0];
  p_output1[19]=t476;
  p_output1[20]=t4862;
  p_output1[21]=0.014372*t179*t4367 + t4435 + t4561 + 0.151229*t4642 + 0.146915*t4849 + var1[1];
  p_output1[22]=0.01291*t179*t4367 + t4435 + t4561 + 0.155483*t4642 + 0.14488*t4849 + var1[1];
  p_output1[23]=0.010049*t179*t4367 + t4435 + t4561 + 0.159275*t4642 + 0.143531*t4849 + var1[1];
  p_output1[24]=0.006099*t179*t4367 + t4435 + t4561 + 0.162193*t4642 + 0.143014*t4849 + var1[1];
  p_output1[25]=0.001488*t179*t4367 + t4435 + t4561 + 0.16392*t4642 + 0.143385*t4849 + var1[1];
  p_output1[26]=-0.003284*t179*t4367 + t4435 + t4561 + 0.16427*t4642 + 0.144604*t4849 + var1[1];
  p_output1[27]=-0.0077*t179*t4367 + t4435 + t4561 + 0.163205*t4642 + 0.146539*t4849 + var1[1];
  p_output1[28]=-0.011282*t179*t4367 + t4435 + t4561 + 0.16084*t4642 + 0.14898*t4849 + var1[1];
  p_output1[29]=-0.013641*t179*t4367 + t4435 + t4561 + 0.157432*t4642 + 0.151663*t4849 + var1[1];
  p_output1[30]=-0.014522*t179*t4367 + t4435 + t4561 + 0.153349*t4642 + 0.154297*t4849 + var1[1];
  p_output1[31]=-0.01383*t179*t4367 + t4435 + t4561 + 0.149034*t4642 + 0.156596*t4849 + var1[1];
  p_output1[32]=-0.011638*t179*t4367 + t4435 + t4561 + 0.144956*t4642 + 0.158312*t4849 + var1[1];
  p_output1[33]=-0.008186*t179*t4367 + t4435 + t4561 + 0.141554*t4642 + 0.159258*t4849 + var1[1];
  p_output1[34]=-0.003846*t179*t4367 + t4435 + t4561 + 0.1392*t4642 + 0.159332*t4849 + var1[1];
  p_output1[35]=0.00091*t179*t4367 + t4435 + t4561 + 0.138147*t4642 + 0.158526*t4849 + var1[1];
  p_output1[36]=0.005568*t179*t4367 + t4435 + t4561 + 0.138509*t4642 + 0.156927*t4849 + var1[1];
  p_output1[37]=0.009622*t179*t4367 + t4435 + t4561 + 0.140248*t4642 + 0.154708*t4849 + var1[1];
  p_output1[38]=0.012634*t179*t4367 + t4435 + t4561 + 0.143174*t4642 + 0.152111*t4849 + var1[1];
  p_output1[39]=t4862;
  p_output1[40]=t6349;
  p_output1[41]=-0.014372*t179*t4378 + t6264 + t6304 + 0.151229*t6308 + 0.146915*t6343 + var1[2];
  p_output1[42]=-0.01291*t179*t4378 + t6264 + t6304 + 0.155483*t6308 + 0.14488*t6343 + var1[2];
  p_output1[43]=-0.010049*t179*t4378 + t6264 + t6304 + 0.159275*t6308 + 0.143531*t6343 + var1[2];
  p_output1[44]=-0.006099*t179*t4378 + t6264 + t6304 + 0.162193*t6308 + 0.143014*t6343 + var1[2];
  p_output1[45]=-0.001488*t179*t4378 + t6264 + t6304 + 0.16392*t6308 + 0.143385*t6343 + var1[2];
  p_output1[46]=0.003284*t179*t4378 + t6264 + t6304 + 0.16427*t6308 + 0.144604*t6343 + var1[2];
  p_output1[47]=0.0077*t179*t4378 + t6264 + t6304 + 0.163205*t6308 + 0.146539*t6343 + var1[2];
  p_output1[48]=0.011282*t179*t4378 + t6264 + t6304 + 0.16084*t6308 + 0.14898*t6343 + var1[2];
  p_output1[49]=0.013641*t179*t4378 + t6264 + t6304 + 0.157432*t6308 + 0.151663*t6343 + var1[2];
  p_output1[50]=0.014522*t179*t4378 + t6264 + t6304 + 0.153349*t6308 + 0.154297*t6343 + var1[2];
  p_output1[51]=0.01383*t179*t4378 + t6264 + t6304 + 0.149034*t6308 + 0.156596*t6343 + var1[2];
  p_output1[52]=0.011638*t179*t4378 + t6264 + t6304 + 0.144956*t6308 + 0.158312*t6343 + var1[2];
  p_output1[53]=0.008186*t179*t4378 + t6264 + t6304 + 0.141554*t6308 + 0.159258*t6343 + var1[2];
  p_output1[54]=0.003846*t179*t4378 + t6264 + t6304 + 0.1392*t6308 + 0.159332*t6343 + var1[2];
  p_output1[55]=-0.00091*t179*t4378 + t6264 + t6304 + 0.138147*t6308 + 0.158526*t6343 + var1[2];
  p_output1[56]=-0.005568*t179*t4378 + t6264 + t6304 + 0.138509*t6308 + 0.156927*t6343 + var1[2];
  p_output1[57]=-0.009622*t179*t4378 + t6264 + t6304 + 0.140248*t6308 + 0.154708*t6343 + var1[2];
  p_output1[58]=-0.012634*t179*t4378 + t6264 + t6304 + 0.143174*t6308 + 0.152111*t6343 + var1[2];
  p_output1[59]=t6349;
  p_output1[60]=t6804;
  p_output1[61]=-0.053122*t159 + t227 + t239 + 0.226729*t246 + 0.276915*t355 + var1[0];
  p_output1[62]=-0.05166*t159 + t227 + t239 + 0.230983*t246 + 0.27488*t355 + var1[0];
  p_output1[63]=-0.048799*t159 + t227 + t239 + 0.234775*t246 + 0.273531*t355 + var1[0];
  p_output1[64]=-0.044849*t159 + t227 + t239 + 0.237693*t246 + 0.273014*t355 + var1[0];
  p_output1[65]=-0.040238*t159 + t227 + t239 + 0.23942*t246 + 0.273385*t355 + var1[0];
  p_output1[66]=-0.035466*t159 + t227 + t239 + 0.23977*t246 + 0.274604*t355 + var1[0];
  p_output1[67]=-0.03105*t159 + t227 + t239 + 0.238705*t246 + 0.276539*t355 + var1[0];
  p_output1[68]=-0.027468*t159 + t227 + t239 + 0.23634*t246 + 0.27898*t355 + var1[0];
  p_output1[69]=-0.025109*t159 + t227 + t239 + 0.232932*t246 + 0.281663*t355 + var1[0];
  p_output1[70]=-0.024228*t159 + t227 + t239 + 0.228849*t246 + 0.284297*t355 + var1[0];
  p_output1[71]=-0.02492*t159 + t227 + t239 + 0.224534*t246 + 0.286596*t355 + var1[0];
  p_output1[72]=-0.027112*t159 + t227 + t239 + 0.220456*t246 + 0.288312*t355 + var1[0];
  p_output1[73]=-0.030564*t159 + t227 + t239 + 0.217054*t246 + 0.289258*t355 + var1[0];
  p_output1[74]=-0.034904*t159 + t227 + t239 + 0.2147*t246 + 0.289332*t355 + var1[0];
  p_output1[75]=-0.03966*t159 + t227 + t239 + 0.213647*t246 + 0.288526*t355 + var1[0];
  p_output1[76]=-0.044318*t159 + t227 + t239 + 0.214009*t246 + 0.286927*t355 + var1[0];
  p_output1[77]=-0.048372*t159 + t227 + t239 + 0.215748*t246 + 0.284708*t355 + var1[0];
  p_output1[78]=-0.051384*t159 + t227 + t239 + 0.218674*t246 + 0.282111*t355 + var1[0];
  p_output1[79]=t6804;
  p_output1[80]=t7316;
  p_output1[81]=0.053122*t179*t4367 + t4435 + t4561 + 0.226729*t4642 + 0.276915*t4849 + var1[1];
  p_output1[82]=0.05166*t179*t4367 + t4435 + t4561 + 0.230983*t4642 + 0.27488*t4849 + var1[1];
  p_output1[83]=0.048799*t179*t4367 + t4435 + t4561 + 0.234775*t4642 + 0.273531*t4849 + var1[1];
  p_output1[84]=0.044849*t179*t4367 + t4435 + t4561 + 0.237693*t4642 + 0.273014*t4849 + var1[1];
  p_output1[85]=0.040238*t179*t4367 + t4435 + t4561 + 0.23942*t4642 + 0.273385*t4849 + var1[1];
  p_output1[86]=0.035466*t179*t4367 + t4435 + t4561 + 0.23977*t4642 + 0.274604*t4849 + var1[1];
  p_output1[87]=0.03105*t179*t4367 + t4435 + t4561 + 0.238705*t4642 + 0.276539*t4849 + var1[1];
  p_output1[88]=0.027468*t179*t4367 + t4435 + t4561 + 0.23634*t4642 + 0.27898*t4849 + var1[1];
  p_output1[89]=0.025109*t179*t4367 + t4435 + t4561 + 0.232932*t4642 + 0.281663*t4849 + var1[1];
  p_output1[90]=0.024228*t179*t4367 + t4435 + t4561 + 0.228849*t4642 + 0.284297*t4849 + var1[1];
  p_output1[91]=0.02492*t179*t4367 + t4435 + t4561 + 0.224534*t4642 + 0.286596*t4849 + var1[1];
  p_output1[92]=0.027112*t179*t4367 + t4435 + t4561 + 0.220456*t4642 + 0.288312*t4849 + var1[1];
  p_output1[93]=0.030564*t179*t4367 + t4435 + t4561 + 0.217054*t4642 + 0.289258*t4849 + var1[1];
  p_output1[94]=0.034904*t179*t4367 + t4435 + t4561 + 0.2147*t4642 + 0.289332*t4849 + var1[1];
  p_output1[95]=0.03966*t179*t4367 + t4435 + t4561 + 0.213647*t4642 + 0.288526*t4849 + var1[1];
  p_output1[96]=0.044318*t179*t4367 + t4435 + t4561 + 0.214009*t4642 + 0.286927*t4849 + var1[1];
  p_output1[97]=0.048372*t179*t4367 + t4435 + t4561 + 0.215748*t4642 + 0.284708*t4849 + var1[1];
  p_output1[98]=0.051384*t179*t4367 + t4435 + t4561 + 0.218674*t4642 + 0.282111*t4849 + var1[1];
  p_output1[99]=t7316;
  p_output1[100]=t7887;
  p_output1[101]=-0.053122*t179*t4378 + t6264 + t6304 + 0.226729*t6308 + 0.276915*t6343 + var1[2];
  p_output1[102]=-0.05166*t179*t4378 + t6264 + t6304 + 0.230983*t6308 + 0.27488*t6343 + var1[2];
  p_output1[103]=-0.048799*t179*t4378 + t6264 + t6304 + 0.234775*t6308 + 0.273531*t6343 + var1[2];
  p_output1[104]=-0.044849*t179*t4378 + t6264 + t6304 + 0.237693*t6308 + 0.273014*t6343 + var1[2];
  p_output1[105]=-0.040238*t179*t4378 + t6264 + t6304 + 0.23942*t6308 + 0.273385*t6343 + var1[2];
  p_output1[106]=-0.035466*t179*t4378 + t6264 + t6304 + 0.23977*t6308 + 0.274604*t6343 + var1[2];
  p_output1[107]=-0.03105*t179*t4378 + t6264 + t6304 + 0.238705*t6308 + 0.276539*t6343 + var1[2];
  p_output1[108]=-0.027468*t179*t4378 + t6264 + t6304 + 0.23634*t6308 + 0.27898*t6343 + var1[2];
  p_output1[109]=-0.025109*t179*t4378 + t6264 + t6304 + 0.232932*t6308 + 0.281663*t6343 + var1[2];
  p_output1[110]=-0.024228*t179*t4378 + t6264 + t6304 + 0.228849*t6308 + 0.284297*t6343 + var1[2];
  p_output1[111]=-0.02492*t179*t4378 + t6264 + t6304 + 0.224534*t6308 + 0.286596*t6343 + var1[2];
  p_output1[112]=-0.027112*t179*t4378 + t6264 + t6304 + 0.220456*t6308 + 0.288312*t6343 + var1[2];
  p_output1[113]=-0.030564*t179*t4378 + t6264 + t6304 + 0.217054*t6308 + 0.289258*t6343 + var1[2];
  p_output1[114]=-0.034904*t179*t4378 + t6264 + t6304 + 0.2147*t6308 + 0.289332*t6343 + var1[2];
  p_output1[115]=-0.03966*t179*t4378 + t6264 + t6304 + 0.213647*t6308 + 0.288526*t6343 + var1[2];
  p_output1[116]=-0.044318*t179*t4378 + t6264 + t6304 + 0.214009*t6308 + 0.286927*t6343 + var1[2];
  p_output1[117]=-0.048372*t179*t4378 + t6264 + t6304 + 0.215748*t6308 + 0.284708*t6343 + var1[2];
  p_output1[118]=-0.051384*t179*t4378 + t6264 + t6304 + 0.218674*t6308 + 0.282111*t6343 + var1[2];
  p_output1[119]=t7887;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_fl_hip_to_fl_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_fl_hip_to_fl_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
