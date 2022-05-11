/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:18 GMT+02:00
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
  double t143;
  double t264;
  double t267;
  double t291;
  double t2853;
  double t243;
  double t288;
  double t292;
  double t2698;
  double t2882;
  double t2903;
  double t2927;
  double t2933;
  double t2934;
  double t2935;
  double t3131;
  double t3143;
  double t256;
  double t3254;
  double t3336;
  double t4728;
  double t4864;
  double t4914;
  double t4932;
  double t5040;
  double t4800;
  double t4836;
  double t4882;
  double t4898;
  double t5102;
  double t5316;
  double t5342;
  double t5364;
  double t5416;
  double t5473;
  double t5492;
  double t5497;
  double t4899;
  double t5551;
  double t5571;
  double t6034;
  double t6040;
  double t6042;
  double t6026;
  double t6029;
  double t6030;
  double t6032;
  double t6044;
  double t6055;
  double t6057;
  double t6065;
  double t6067;
  double t6068;
  double t6069;
  double t6071;
  double t6033;
  double t6075;
  double t6079;
  double t3447;
  double t6273;
  double t3450;
  double t3564;
  double t3570;
  double t3601;
  double t3603;
  double t3689;
  double t3691;
  double t3787;
  double t3791;
  double t3857;
  double t3876;
  double t3910;
  double t3915;
  double t3921;
  double t3950;
  double t3995;
  double t4008;
  double t4028;
  double t4068;
  double t4097;
  double t4130;
  double t4139;
  double t4144;
  double t4220;
  double t4277;
  double t4296;
  double t4303;
  double t4347;
  double t4361;
  double t4416;
  double t4424;
  double t4519;
  double t4543;
  double t4611;
  double t4653;
  double t6275;
  double t5572;
  double t6359;
  double t5666;
  double t5669;
  double t5674;
  double t5694;
  double t5710;
  double t5729;
  double t5731;
  double t5733;
  double t5740;
  double t5743;
  double t5744;
  double t5783;
  double t5788;
  double t5853;
  double t5859;
  double t5871;
  double t5873;
  double t5875;
  double t5877;
  double t5927;
  double t5936;
  double t5944;
  double t5948;
  double t5956;
  double t5957;
  double t5959;
  double t5967;
  double t5977;
  double t5978;
  double t5994;
  double t5996;
  double t6019;
  double t6020;
  double t6022;
  double t6024;
  double t6365;
  double t6080;
  double t6395;
  double t6083;
  double t6095;
  double t6096;
  double t6101;
  double t6102;
  double t6104;
  double t6105;
  double t6107;
  double t6115;
  double t6124;
  double t6125;
  double t6129;
  double t6135;
  double t6142;
  double t6146;
  double t6161;
  double t6162;
  double t6168;
  double t6174;
  double t6181;
  double t6184;
  double t6186;
  double t6194;
  double t6204;
  double t6205;
  double t6207;
  double t6213;
  double t6233;
  double t6234;
  double t6242;
  double t6248;
  double t6250;
  double t6251;
  double t6256;
  double t6264;
  double t6396;
  t143 = Cos(var1[4]);
  t264 = Sin(var1[15]);
  t267 = Sin(var1[4]);
  t291 = Cos(var1[15]);
  t2853 = Sin(var1[5]);
  t243 = Cos(var1[5]);
  t288 = 0.1575*t264*t267;
  t292 = -1.*t291;
  t2698 = 1. + t292;
  t2882 = 0.1575*t2698*t143*t2853;
  t2903 = t264*t267;
  t2927 = -1.*t291*t143*t2853;
  t2933 = t2903 + t2927;
  t2934 = -0.1575*t2933;
  t2935 = t291*t267;
  t3131 = t143*t264*t2853;
  t3143 = t2935 + t3131;
  t256 = -0.314327*t143*t243;
  t3254 = 0.01054*t3143;
  t3336 = var1[0] + t256 + t288 + t2882 + t2934 + t3254;
  t4728 = Sin(var1[3]);
  t4864 = Cos(var1[3]);
  t4914 = t4864*t243;
  t4932 = -1.*t4728*t267*t2853;
  t5040 = t4914 + t4932;
  t4800 = -0.1575*t143*t264*t4728;
  t4836 = t243*t4728*t267;
  t4882 = t4864*t2853;
  t4898 = t4836 + t4882;
  t5102 = -0.1575*t2698*t5040;
  t5316 = -1.*t143*t264*t4728;
  t5342 = t291*t5040;
  t5364 = t5316 + t5342;
  t5416 = -0.1575*t5364;
  t5473 = -1.*t291*t143*t4728;
  t5492 = -1.*t264*t5040;
  t5497 = t5473 + t5492;
  t4899 = -0.314327*t4898;
  t5551 = 0.01054*t5497;
  t5571 = var1[1] + t4800 + t4899 + t5102 + t5416 + t5551;
  t6034 = t243*t4728;
  t6040 = t4864*t267*t2853;
  t6042 = t6034 + t6040;
  t6026 = 0.1575*t4864*t143*t264;
  t6029 = -1.*t4864*t243*t267;
  t6030 = t4728*t2853;
  t6032 = t6029 + t6030;
  t6044 = -0.1575*t2698*t6042;
  t6055 = t4864*t143*t264;
  t6057 = t291*t6042;
  t6065 = t6055 + t6057;
  t6067 = -0.1575*t6065;
  t6068 = t291*t4864*t143;
  t6069 = -1.*t264*t6042;
  t6071 = t6068 + t6069;
  t6033 = -0.314327*t6032;
  t6075 = 0.01054*t6071;
  t6079 = var1[2] + t6026 + t6033 + t6044 + t6067 + t6075;
  t3447 = -0.318327*t143*t243;
  t6273 = -0.2255*t2933;
  t3450 = 0.013434*t3143;
  t3564 = -0.323051*t143*t243;
  t3570 = 0.014873*t3143;
  t3601 = -0.327986*t143*t243;
  t3603 = 0.0147*t3143;
  t3689 = -0.332597*t143*t243;
  t3691 = 0.012934*t3143;
  t3787 = -0.336385*t143*t243;
  t3791 = 0.009766*t3143;
  t3857 = -0.338939*t143*t243;
  t3876 = 0.005541*t3143;
  t3910 = -0.339983*t143*t243;
  t3915 = 0.000714*t3143;
  t3921 = -0.339403*t143*t243;
  t3950 = -0.004189*t3143;
  t3995 = -0.337262*t143*t243;
  t4008 = -0.008639*t3143;
  t4028 = -0.333793*t143*t243;
  t4068 = -0.012153*t3143;
  t4097 = -0.329371*t143*t243;
  t4130 = -0.014349*t3143;
  t4139 = -0.324475*t143*t243;
  t4144 = -0.014991*t3143;
  t4220 = -0.319636*t143*t243;
  t4277 = -0.014008*t3143;
  t4296 = -0.315378*t143*t243;
  t4303 = -0.011507*t3143;
  t4347 = -0.312163*t143*t243;
  t4361 = -0.007759*t3143;
  t4416 = -0.310339*t143*t243;
  t4424 = -0.003171*t3143;
  t4519 = -0.310104*t143*t243;
  t4543 = 0.001762*t3143;
  t4611 = -0.311483*t143*t243;
  t4653 = 0.006503*t3143;
  t6275 = var1[0] + t256 + t288 + t2882 + t6273 + t3254;
  t5572 = -0.318327*t4898;
  t6359 = -0.2255*t5364;
  t5666 = 0.013434*t5497;
  t5669 = -0.323051*t4898;
  t5674 = 0.014873*t5497;
  t5694 = -0.327986*t4898;
  t5710 = 0.0147*t5497;
  t5729 = -0.332597*t4898;
  t5731 = 0.012934*t5497;
  t5733 = -0.336385*t4898;
  t5740 = 0.009766*t5497;
  t5743 = -0.338939*t4898;
  t5744 = 0.005541*t5497;
  t5783 = -0.339983*t4898;
  t5788 = 0.000714*t5497;
  t5853 = -0.339403*t4898;
  t5859 = -0.004189*t5497;
  t5871 = -0.337262*t4898;
  t5873 = -0.008639*t5497;
  t5875 = -0.333793*t4898;
  t5877 = -0.012153*t5497;
  t5927 = -0.329371*t4898;
  t5936 = -0.014349*t5497;
  t5944 = -0.324475*t4898;
  t5948 = -0.014991*t5497;
  t5956 = -0.319636*t4898;
  t5957 = -0.014008*t5497;
  t5959 = -0.315378*t4898;
  t5967 = -0.011507*t5497;
  t5977 = -0.312163*t4898;
  t5978 = -0.007759*t5497;
  t5994 = -0.310339*t4898;
  t5996 = -0.003171*t5497;
  t6019 = -0.310104*t4898;
  t6020 = 0.001762*t5497;
  t6022 = -0.311483*t4898;
  t6024 = 0.006503*t5497;
  t6365 = var1[1] + t4800 + t4899 + t5102 + t6359 + t5551;
  t6080 = -0.318327*t6032;
  t6395 = -0.2255*t6065;
  t6083 = 0.013434*t6071;
  t6095 = -0.323051*t6032;
  t6096 = 0.014873*t6071;
  t6101 = -0.327986*t6032;
  t6102 = 0.0147*t6071;
  t6104 = -0.332597*t6032;
  t6105 = 0.012934*t6071;
  t6107 = -0.336385*t6032;
  t6115 = 0.009766*t6071;
  t6124 = -0.338939*t6032;
  t6125 = 0.005541*t6071;
  t6129 = -0.339983*t6032;
  t6135 = 0.000714*t6071;
  t6142 = -0.339403*t6032;
  t6146 = -0.004189*t6071;
  t6161 = -0.337262*t6032;
  t6162 = -0.008639*t6071;
  t6168 = -0.333793*t6032;
  t6174 = -0.012153*t6071;
  t6181 = -0.329371*t6032;
  t6184 = -0.014349*t6071;
  t6186 = -0.324475*t6032;
  t6194 = -0.014991*t6071;
  t6204 = -0.319636*t6032;
  t6205 = -0.014008*t6071;
  t6207 = -0.315378*t6032;
  t6213 = -0.011507*t6071;
  t6233 = -0.312163*t6032;
  t6234 = -0.007759*t6071;
  t6242 = -0.310339*t6032;
  t6248 = -0.003171*t6071;
  t6250 = -0.310104*t6032;
  t6251 = 0.001762*t6071;
  t6256 = -0.311483*t6032;
  t6264 = 0.006503*t6071;
  t6396 = var1[2] + t6026 + t6033 + t6044 + t6395 + t6075;
  p_output1[0]=t3336;
  p_output1[1]=t288 + t2882 + t2934 + t3447 + t3450 + var1[0];
  p_output1[2]=t288 + t2882 + t2934 + t3564 + t3570 + var1[0];
  p_output1[3]=t288 + t2882 + t2934 + t3601 + t3603 + var1[0];
  p_output1[4]=t288 + t2882 + t2934 + t3689 + t3691 + var1[0];
  p_output1[5]=t288 + t2882 + t2934 + t3787 + t3791 + var1[0];
  p_output1[6]=t288 + t2882 + t2934 + t3857 + t3876 + var1[0];
  p_output1[7]=t288 + t2882 + t2934 + t3910 + t3915 + var1[0];
  p_output1[8]=t288 + t2882 + t2934 + t3921 + t3950 + var1[0];
  p_output1[9]=t288 + t2882 + t2934 + t3995 + t4008 + var1[0];
  p_output1[10]=t288 + t2882 + t2934 + t4028 + t4068 + var1[0];
  p_output1[11]=t288 + t2882 + t2934 + t4097 + t4130 + var1[0];
  p_output1[12]=t288 + t2882 + t2934 + t4139 + t4144 + var1[0];
  p_output1[13]=t288 + t2882 + t2934 + t4220 + t4277 + var1[0];
  p_output1[14]=t288 + t2882 + t2934 + t4296 + t4303 + var1[0];
  p_output1[15]=t288 + t2882 + t2934 + t4347 + t4361 + var1[0];
  p_output1[16]=t288 + t2882 + t2934 + t4416 + t4424 + var1[0];
  p_output1[17]=t288 + t2882 + t2934 + t4519 + t4543 + var1[0];
  p_output1[18]=t288 + t2882 + t2934 + t4611 + t4653 + var1[0];
  p_output1[19]=t3336;
  p_output1[20]=t5571;
  p_output1[21]=t4800 + t5102 + t5416 + t5572 + t5666 + var1[1];
  p_output1[22]=t4800 + t5102 + t5416 + t5669 + t5674 + var1[1];
  p_output1[23]=t4800 + t5102 + t5416 + t5694 + t5710 + var1[1];
  p_output1[24]=t4800 + t5102 + t5416 + t5729 + t5731 + var1[1];
  p_output1[25]=t4800 + t5102 + t5416 + t5733 + t5740 + var1[1];
  p_output1[26]=t4800 + t5102 + t5416 + t5743 + t5744 + var1[1];
  p_output1[27]=t4800 + t5102 + t5416 + t5783 + t5788 + var1[1];
  p_output1[28]=t4800 + t5102 + t5416 + t5853 + t5859 + var1[1];
  p_output1[29]=t4800 + t5102 + t5416 + t5871 + t5873 + var1[1];
  p_output1[30]=t4800 + t5102 + t5416 + t5875 + t5877 + var1[1];
  p_output1[31]=t4800 + t5102 + t5416 + t5927 + t5936 + var1[1];
  p_output1[32]=t4800 + t5102 + t5416 + t5944 + t5948 + var1[1];
  p_output1[33]=t4800 + t5102 + t5416 + t5956 + t5957 + var1[1];
  p_output1[34]=t4800 + t5102 + t5416 + t5959 + t5967 + var1[1];
  p_output1[35]=t4800 + t5102 + t5416 + t5977 + t5978 + var1[1];
  p_output1[36]=t4800 + t5102 + t5416 + t5994 + t5996 + var1[1];
  p_output1[37]=t4800 + t5102 + t5416 + t6019 + t6020 + var1[1];
  p_output1[38]=t4800 + t5102 + t5416 + t6022 + t6024 + var1[1];
  p_output1[39]=t5571;
  p_output1[40]=t6079;
  p_output1[41]=t6026 + t6044 + t6067 + t6080 + t6083 + var1[2];
  p_output1[42]=t6026 + t6044 + t6067 + t6095 + t6096 + var1[2];
  p_output1[43]=t6026 + t6044 + t6067 + t6101 + t6102 + var1[2];
  p_output1[44]=t6026 + t6044 + t6067 + t6104 + t6105 + var1[2];
  p_output1[45]=t6026 + t6044 + t6067 + t6107 + t6115 + var1[2];
  p_output1[46]=t6026 + t6044 + t6067 + t6124 + t6125 + var1[2];
  p_output1[47]=t6026 + t6044 + t6067 + t6129 + t6135 + var1[2];
  p_output1[48]=t6026 + t6044 + t6067 + t6142 + t6146 + var1[2];
  p_output1[49]=t6026 + t6044 + t6067 + t6161 + t6162 + var1[2];
  p_output1[50]=t6026 + t6044 + t6067 + t6168 + t6174 + var1[2];
  p_output1[51]=t6026 + t6044 + t6067 + t6181 + t6184 + var1[2];
  p_output1[52]=t6026 + t6044 + t6067 + t6186 + t6194 + var1[2];
  p_output1[53]=t6026 + t6044 + t6067 + t6204 + t6205 + var1[2];
  p_output1[54]=t6026 + t6044 + t6067 + t6207 + t6213 + var1[2];
  p_output1[55]=t6026 + t6044 + t6067 + t6233 + t6234 + var1[2];
  p_output1[56]=t6026 + t6044 + t6067 + t6242 + t6248 + var1[2];
  p_output1[57]=t6026 + t6044 + t6067 + t6250 + t6251 + var1[2];
  p_output1[58]=t6026 + t6044 + t6067 + t6256 + t6264 + var1[2];
  p_output1[59]=t6079;
  p_output1[60]=t6275;
  p_output1[61]=t288 + t2882 + t3447 + t3450 + t6273 + var1[0];
  p_output1[62]=t288 + t2882 + t3564 + t3570 + t6273 + var1[0];
  p_output1[63]=t288 + t2882 + t3601 + t3603 + t6273 + var1[0];
  p_output1[64]=t288 + t2882 + t3689 + t3691 + t6273 + var1[0];
  p_output1[65]=t288 + t2882 + t3787 + t3791 + t6273 + var1[0];
  p_output1[66]=t288 + t2882 + t3857 + t3876 + t6273 + var1[0];
  p_output1[67]=t288 + t2882 + t3910 + t3915 + t6273 + var1[0];
  p_output1[68]=t288 + t2882 + t3921 + t3950 + t6273 + var1[0];
  p_output1[69]=t288 + t2882 + t3995 + t4008 + t6273 + var1[0];
  p_output1[70]=t288 + t2882 + t4028 + t4068 + t6273 + var1[0];
  p_output1[71]=t288 + t2882 + t4097 + t4130 + t6273 + var1[0];
  p_output1[72]=t288 + t2882 + t4139 + t4144 + t6273 + var1[0];
  p_output1[73]=t288 + t2882 + t4220 + t4277 + t6273 + var1[0];
  p_output1[74]=t288 + t2882 + t4296 + t4303 + t6273 + var1[0];
  p_output1[75]=t288 + t2882 + t4347 + t4361 + t6273 + var1[0];
  p_output1[76]=t288 + t2882 + t4416 + t4424 + t6273 + var1[0];
  p_output1[77]=t288 + t2882 + t4519 + t4543 + t6273 + var1[0];
  p_output1[78]=t288 + t2882 + t4611 + t4653 + t6273 + var1[0];
  p_output1[79]=t6275;
  p_output1[80]=t6365;
  p_output1[81]=t4800 + t5102 + t5572 + t5666 + t6359 + var1[1];
  p_output1[82]=t4800 + t5102 + t5669 + t5674 + t6359 + var1[1];
  p_output1[83]=t4800 + t5102 + t5694 + t5710 + t6359 + var1[1];
  p_output1[84]=t4800 + t5102 + t5729 + t5731 + t6359 + var1[1];
  p_output1[85]=t4800 + t5102 + t5733 + t5740 + t6359 + var1[1];
  p_output1[86]=t4800 + t5102 + t5743 + t5744 + t6359 + var1[1];
  p_output1[87]=t4800 + t5102 + t5783 + t5788 + t6359 + var1[1];
  p_output1[88]=t4800 + t5102 + t5853 + t5859 + t6359 + var1[1];
  p_output1[89]=t4800 + t5102 + t5871 + t5873 + t6359 + var1[1];
  p_output1[90]=t4800 + t5102 + t5875 + t5877 + t6359 + var1[1];
  p_output1[91]=t4800 + t5102 + t5927 + t5936 + t6359 + var1[1];
  p_output1[92]=t4800 + t5102 + t5944 + t5948 + t6359 + var1[1];
  p_output1[93]=t4800 + t5102 + t5956 + t5957 + t6359 + var1[1];
  p_output1[94]=t4800 + t5102 + t5959 + t5967 + t6359 + var1[1];
  p_output1[95]=t4800 + t5102 + t5977 + t5978 + t6359 + var1[1];
  p_output1[96]=t4800 + t5102 + t5994 + t5996 + t6359 + var1[1];
  p_output1[97]=t4800 + t5102 + t6019 + t6020 + t6359 + var1[1];
  p_output1[98]=t4800 + t5102 + t6022 + t6024 + t6359 + var1[1];
  p_output1[99]=t6365;
  p_output1[100]=t6396;
  p_output1[101]=t6026 + t6044 + t6080 + t6083 + t6395 + var1[2];
  p_output1[102]=t6026 + t6044 + t6095 + t6096 + t6395 + var1[2];
  p_output1[103]=t6026 + t6044 + t6101 + t6102 + t6395 + var1[2];
  p_output1[104]=t6026 + t6044 + t6104 + t6105 + t6395 + var1[2];
  p_output1[105]=t6026 + t6044 + t6107 + t6115 + t6395 + var1[2];
  p_output1[106]=t6026 + t6044 + t6124 + t6125 + t6395 + var1[2];
  p_output1[107]=t6026 + t6044 + t6129 + t6135 + t6395 + var1[2];
  p_output1[108]=t6026 + t6044 + t6142 + t6146 + t6395 + var1[2];
  p_output1[109]=t6026 + t6044 + t6161 + t6162 + t6395 + var1[2];
  p_output1[110]=t6026 + t6044 + t6168 + t6174 + t6395 + var1[2];
  p_output1[111]=t6026 + t6044 + t6181 + t6184 + t6395 + var1[2];
  p_output1[112]=t6026 + t6044 + t6186 + t6194 + t6395 + var1[2];
  p_output1[113]=t6026 + t6044 + t6204 + t6205 + t6395 + var1[2];
  p_output1[114]=t6026 + t6044 + t6207 + t6213 + t6395 + var1[2];
  p_output1[115]=t6026 + t6044 + t6233 + t6234 + t6395 + var1[2];
  p_output1[116]=t6026 + t6044 + t6242 + t6248 + t6395 + var1[2];
  p_output1[117]=t6026 + t6044 + t6250 + t6251 + t6395 + var1[2];
  p_output1[118]=t6026 + t6044 + t6256 + t6264 + t6395 + var1[2];
  p_output1[119]=t6396;
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

#include "Link_hip3_to_6_bar.hh"

namespace SymFunction
{

void Link_hip3_to_6_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
