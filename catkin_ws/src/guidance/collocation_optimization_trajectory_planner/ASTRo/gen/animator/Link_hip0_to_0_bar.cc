/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:42:58 GMT+02:00
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
  double t1011;
  double t1106;
  double t1135;
  double t1160;
  double t1177;
  double t1384;
  double t1100;
  double t1650;
  double t457;
  double t1425;
  double t1447;
  double t1600;
  double t1768;
  double t1801;
  double t1833;
  double t1848;
  double t1858;
  double t1870;
  double t1876;
  double t1877;
  double t1880;
  double t985;
  double t1875;
  double t1947;
  double t1956;
  double t3099;
  double t3148;
  double t3200;
  double t3208;
  double t3216;
  double t3361;
  double t3450;
  double t3462;
  double t3336;
  double t3476;
  double t3487;
  double t3494;
  double t3495;
  double t3514;
  double t3535;
  double t3552;
  double t3127;
  double t3497;
  double t3605;
  double t3618;
  double t4152;
  double t4154;
  double t4156;
  double t4162;
  double t4165;
  double t4167;
  double t4160;
  double t4176;
  double t4181;
  double t4183;
  double t4198;
  double t4207;
  double t4208;
  double t4224;
  double t4150;
  double t4206;
  double t4226;
  double t4237;
  double t1958;
  double t1990;
  double t1995;
  double t2005;
  double t2016;
  double t2030;
  double t2037;
  double t2047;
  double t2052;
  double t2063;
  double t2073;
  double t2078;
  double t2083;
  double t2350;
  double t2377;
  double t2426;
  double t2920;
  double t2968;
  double t4495;
  double t4499;
  double t4500;
  double t3624;
  double t3676;
  double t3712;
  double t3755;
  double t3778;
  double t3810;
  double t3836;
  double t3950;
  double t3970;
  double t3986;
  double t4007;
  double t4019;
  double t4039;
  double t4055;
  double t4087;
  double t4102;
  double t4124;
  double t4136;
  double t4720;
  double t4737;
  double t4759;
  double t4243;
  double t4263;
  double t4269;
  double t4284;
  double t4300;
  double t4313;
  double t4355;
  double t4362;
  double t4381;
  double t4391;
  double t4402;
  double t4415;
  double t4424;
  double t4434;
  double t4439;
  double t4453;
  double t4467;
  double t4479;
  double t5534;
  double t5535;
  double t5537;
  t1011 = Cos(var1[4]);
  t1106 = Cos(var1[6]);
  t1135 = -1.*t1106;
  t1160 = 1. + t1135;
  t1177 = 0.15121*t1160;
  t1384 = Sin(var1[6]);
  t1100 = Sin(var1[5]);
  t1650 = Cos(var1[5]);
  t457 = Sin(var1[4]);
  t1425 = -0.15121*t1384;
  t1447 = t1177 + t1425;
  t1600 = -1.*t1011*t1100*t1447;
  t1768 = 0.15121*t1384;
  t1801 = t1177 + t1768;
  t1833 = t1011*t1650*t1801;
  t1848 = -1.*t1011*t1106*t1100;
  t1858 = -1.*t1011*t1650*t1384;
  t1870 = t1848 + t1858;
  t1876 = t1011*t1650*t1106;
  t1877 = -1.*t1011*t1100*t1384;
  t1880 = t1876 + t1877;
  t985 = -0.012684*t457;
  t1875 = 0.143408*t1870;
  t1947 = 0.15301*t1880;
  t1956 = var1[0] + t985 + t1600 + t1833 + t1875 + t1947;
  t3099 = Sin(var1[3]);
  t3148 = Cos(var1[3]);
  t3200 = t3148*t1650;
  t3208 = -1.*t3099*t457*t1100;
  t3216 = t3200 + t3208;
  t3361 = t1650*t3099*t457;
  t3450 = t3148*t1100;
  t3462 = t3361 + t3450;
  t3336 = t3216*t1447;
  t3476 = t3462*t1801;
  t3487 = t1106*t3216;
  t3494 = -1.*t3462*t1384;
  t3495 = t3487 + t3494;
  t3514 = t1106*t3462;
  t3535 = t3216*t1384;
  t3552 = t3514 + t3535;
  t3127 = 0.012684*t1011*t3099;
  t3497 = 0.143408*t3495;
  t3605 = 0.15301*t3552;
  t3618 = var1[1] + t3127 + t3336 + t3476 + t3497 + t3605;
  t4152 = t1650*t3099;
  t4154 = t3148*t457*t1100;
  t4156 = t4152 + t4154;
  t4162 = -1.*t3148*t1650*t457;
  t4165 = t3099*t1100;
  t4167 = t4162 + t4165;
  t4160 = t4156*t1447;
  t4176 = t4167*t1801;
  t4181 = t1106*t4156;
  t4183 = -1.*t4167*t1384;
  t4198 = t4181 + t4183;
  t4207 = t1106*t4167;
  t4208 = t4156*t1384;
  t4224 = t4207 + t4208;
  t4150 = -0.012684*t3148*t1011;
  t4206 = 0.143408*t4198;
  t4226 = 0.15301*t4224;
  t4237 = var1[2] + t4150 + t4160 + t4176 + t4206 + t4226;
  t1958 = -0.014597*t457;
  t1990 = -0.014928*t457;
  t1995 = -0.013641*t457;
  t2005 = -0.010876*t457;
  t2016 = -0.006932*t457;
  t2030 = -0.002237*t457;
  t2037 = 0.0027*t457;
  t2047 = 0.007345*t457;
  t2052 = 0.011193*t457;
  t2063 = 0.013829*t457;
  t2073 = 0.014966*t457;
  t2078 = 0.014482*t457;
  t2083 = 0.012428*t457;
  t2350 = 0.009027*t457;
  t2377 = 0.004648*t457;
  t2426 = -0.000235*t457;
  t2920 = -0.005092*t457;
  t2968 = -0.009397*t457;
  t4495 = 0.173408*t1870;
  t4499 = 0.28301*t1880;
  t4500 = var1[0] + t985 + t1600 + t1833 + t4495 + t4499;
  t3624 = 0.014597*t1011*t3099;
  t3676 = 0.014928*t1011*t3099;
  t3712 = 0.013641*t1011*t3099;
  t3755 = 0.010876*t1011*t3099;
  t3778 = 0.006932*t1011*t3099;
  t3810 = 0.002237*t1011*t3099;
  t3836 = -0.0027*t1011*t3099;
  t3950 = -0.007345*t1011*t3099;
  t3970 = -0.011193*t1011*t3099;
  t3986 = -0.013829*t1011*t3099;
  t4007 = -0.014966*t1011*t3099;
  t4019 = -0.014482*t1011*t3099;
  t4039 = -0.012428*t1011*t3099;
  t4055 = -0.009027*t1011*t3099;
  t4087 = -0.004648*t1011*t3099;
  t4102 = 0.000235*t1011*t3099;
  t4124 = 0.005092*t1011*t3099;
  t4136 = 0.009397*t1011*t3099;
  t4720 = 0.173408*t3495;
  t4737 = 0.28301*t3552;
  t4759 = var1[1] + t3127 + t3336 + t3476 + t4720 + t4737;
  t4243 = -0.014597*t3148*t1011;
  t4263 = -0.014928*t3148*t1011;
  t4269 = -0.013641*t3148*t1011;
  t4284 = -0.010876*t3148*t1011;
  t4300 = -0.006932*t3148*t1011;
  t4313 = -0.002237*t3148*t1011;
  t4355 = 0.0027*t3148*t1011;
  t4362 = 0.007345*t3148*t1011;
  t4381 = 0.011193*t3148*t1011;
  t4391 = 0.013829*t3148*t1011;
  t4402 = 0.014966*t3148*t1011;
  t4415 = 0.014482*t3148*t1011;
  t4424 = 0.012428*t3148*t1011;
  t4434 = 0.009027*t3148*t1011;
  t4439 = 0.004648*t3148*t1011;
  t4453 = -0.000235*t3148*t1011;
  t4467 = -0.005092*t3148*t1011;
  t4479 = -0.009397*t3148*t1011;
  t5534 = 0.173408*t4198;
  t5535 = 0.28301*t4224;
  t5537 = var1[2] + t4150 + t4160 + t4176 + t5534 + t5535;
  p_output1[0]=t1956;
  p_output1[1]=t1600 + t1833 + 0.147844*t1870 + 0.151987*t1880 + t1958 + var1[0];
  p_output1[2]=t1600 + t1833 + 0.152645*t1870 + 0.150879*t1880 + t1990 + var1[0];
  p_output1[3]=t1600 + t1833 + 0.15729*t1870 + 0.149807*t1880 + t1995 + var1[0];
  p_output1[4]=t1600 + t1833 + 0.161276*t1870 + 0.148887*t1880 + t2005 + var1[0];
  p_output1[5]=t1600 + t1833 + 0.164171*t1870 + 0.148219*t1880 + t2016 + var1[0];
  p_output1[6]=t1600 + t1833 + 0.165662*t1870 + 0.147875*t1880 + t2030 + var1[0];
  p_output1[7]=t1600 + t1833 + 0.165587*t1870 + 0.147892*t1880 + t2037 + var1[0];
  p_output1[8]=t1600 + t1833 + 0.163954*t1870 + 0.148269*t1880 + t2047 + var1[0];
  p_output1[9]=t1600 + t1833 + 0.16094*t1870 + 0.148965*t1880 + t2052 + var1[0];
  p_output1[10]=t1600 + t1833 + 0.156871*t1870 + 0.149904*t1880 + t2063 + var1[0];
  p_output1[11]=t1600 + t1833 + 0.152189*t1870 + 0.150984*t1880 + t2073 + var1[0];
  p_output1[12]=t1600 + t1833 + 0.147401*t1870 + 0.152089*t1880 + t2078 + var1[0];
  p_output1[13]=t1600 + t1833 + 0.143026*t1870 + 0.153099*t1880 + t2083 + var1[0];
  p_output1[14]=t1600 + t1833 + 0.139537*t1870 + 0.153904*t1880 + t2350 + var1[0];
  p_output1[15]=t1600 + t1833 + 0.137314*t1870 + 0.154417*t1880 + t2377 + var1[0];
  p_output1[16]=t1600 + t1833 + 0.136596*t1870 + 0.154582*t1880 + t2426 + var1[0];
  p_output1[17]=t1600 + t1833 + 0.137462*t1870 + 0.154383*t1880 + t2920 + var1[0];
  p_output1[18]=t1600 + t1833 + 0.139818*t1870 + 0.153839*t1880 + t2968 + var1[0];
  p_output1[19]=t1956;
  p_output1[20]=t3618;
  p_output1[21]=t3336 + t3476 + 0.147844*t3495 + 0.151987*t3552 + t3624 + var1[1];
  p_output1[22]=t3336 + t3476 + 0.152645*t3495 + 0.150879*t3552 + t3676 + var1[1];
  p_output1[23]=t3336 + t3476 + 0.15729*t3495 + 0.149807*t3552 + t3712 + var1[1];
  p_output1[24]=t3336 + t3476 + 0.161276*t3495 + 0.148887*t3552 + t3755 + var1[1];
  p_output1[25]=t3336 + t3476 + 0.164171*t3495 + 0.148219*t3552 + t3778 + var1[1];
  p_output1[26]=t3336 + t3476 + 0.165662*t3495 + 0.147875*t3552 + t3810 + var1[1];
  p_output1[27]=t3336 + t3476 + 0.165587*t3495 + 0.147892*t3552 + t3836 + var1[1];
  p_output1[28]=t3336 + t3476 + 0.163954*t3495 + 0.148269*t3552 + t3950 + var1[1];
  p_output1[29]=t3336 + t3476 + 0.16094*t3495 + 0.148965*t3552 + t3970 + var1[1];
  p_output1[30]=t3336 + t3476 + 0.156871*t3495 + 0.149904*t3552 + t3986 + var1[1];
  p_output1[31]=t3336 + t3476 + 0.152189*t3495 + 0.150984*t3552 + t4007 + var1[1];
  p_output1[32]=t3336 + t3476 + 0.147401*t3495 + 0.152089*t3552 + t4019 + var1[1];
  p_output1[33]=t3336 + t3476 + 0.143026*t3495 + 0.153099*t3552 + t4039 + var1[1];
  p_output1[34]=t3336 + t3476 + 0.139537*t3495 + 0.153904*t3552 + t4055 + var1[1];
  p_output1[35]=t3336 + t3476 + 0.137314*t3495 + 0.154417*t3552 + t4087 + var1[1];
  p_output1[36]=t3336 + t3476 + 0.136596*t3495 + 0.154582*t3552 + t4102 + var1[1];
  p_output1[37]=t3336 + t3476 + 0.137462*t3495 + 0.154383*t3552 + t4124 + var1[1];
  p_output1[38]=t3336 + t3476 + 0.139818*t3495 + 0.153839*t3552 + t4136 + var1[1];
  p_output1[39]=t3618;
  p_output1[40]=t4237;
  p_output1[41]=t4160 + t4176 + 0.147844*t4198 + 0.151987*t4224 + t4243 + var1[2];
  p_output1[42]=t4160 + t4176 + 0.152645*t4198 + 0.150879*t4224 + t4263 + var1[2];
  p_output1[43]=t4160 + t4176 + 0.15729*t4198 + 0.149807*t4224 + t4269 + var1[2];
  p_output1[44]=t4160 + t4176 + 0.161276*t4198 + 0.148887*t4224 + t4284 + var1[2];
  p_output1[45]=t4160 + t4176 + 0.164171*t4198 + 0.148219*t4224 + t4300 + var1[2];
  p_output1[46]=t4160 + t4176 + 0.165662*t4198 + 0.147875*t4224 + t4313 + var1[2];
  p_output1[47]=t4160 + t4176 + 0.165587*t4198 + 0.147892*t4224 + t4355 + var1[2];
  p_output1[48]=t4160 + t4176 + 0.163954*t4198 + 0.148269*t4224 + t4362 + var1[2];
  p_output1[49]=t4160 + t4176 + 0.16094*t4198 + 0.148965*t4224 + t4381 + var1[2];
  p_output1[50]=t4160 + t4176 + 0.156871*t4198 + 0.149904*t4224 + t4391 + var1[2];
  p_output1[51]=t4160 + t4176 + 0.152189*t4198 + 0.150984*t4224 + t4402 + var1[2];
  p_output1[52]=t4160 + t4176 + 0.147401*t4198 + 0.152089*t4224 + t4415 + var1[2];
  p_output1[53]=t4160 + t4176 + 0.143026*t4198 + 0.153099*t4224 + t4424 + var1[2];
  p_output1[54]=t4160 + t4176 + 0.139537*t4198 + 0.153904*t4224 + t4434 + var1[2];
  p_output1[55]=t4160 + t4176 + 0.137314*t4198 + 0.154417*t4224 + t4439 + var1[2];
  p_output1[56]=t4160 + t4176 + 0.136596*t4198 + 0.154582*t4224 + t4453 + var1[2];
  p_output1[57]=t4160 + t4176 + 0.137462*t4198 + 0.154383*t4224 + t4467 + var1[2];
  p_output1[58]=t4160 + t4176 + 0.139818*t4198 + 0.153839*t4224 + t4479 + var1[2];
  p_output1[59]=t4237;
  p_output1[60]=t4500;
  p_output1[61]=t1600 + t1833 + 0.177844*t1870 + 0.281987*t1880 + t1958 + var1[0];
  p_output1[62]=t1600 + t1833 + 0.182645*t1870 + 0.280879*t1880 + t1990 + var1[0];
  p_output1[63]=t1600 + t1833 + 0.18729*t1870 + 0.279807*t1880 + t1995 + var1[0];
  p_output1[64]=t1600 + t1833 + 0.191276*t1870 + 0.278887*t1880 + t2005 + var1[0];
  p_output1[65]=t1600 + t1833 + 0.194171*t1870 + 0.278219*t1880 + t2016 + var1[0];
  p_output1[66]=t1600 + t1833 + 0.195662*t1870 + 0.277875*t1880 + t2030 + var1[0];
  p_output1[67]=t1600 + t1833 + 0.195587*t1870 + 0.277892*t1880 + t2037 + var1[0];
  p_output1[68]=t1600 + t1833 + 0.193954*t1870 + 0.278269*t1880 + t2047 + var1[0];
  p_output1[69]=t1600 + t1833 + 0.19094*t1870 + 0.278965*t1880 + t2052 + var1[0];
  p_output1[70]=t1600 + t1833 + 0.186871*t1870 + 0.279904*t1880 + t2063 + var1[0];
  p_output1[71]=t1600 + t1833 + 0.182189*t1870 + 0.280984*t1880 + t2073 + var1[0];
  p_output1[72]=t1600 + t1833 + 0.177401*t1870 + 0.282089*t1880 + t2078 + var1[0];
  p_output1[73]=t1600 + t1833 + 0.173026*t1870 + 0.283099*t1880 + t2083 + var1[0];
  p_output1[74]=t1600 + t1833 + 0.169537*t1870 + 0.283904*t1880 + t2350 + var1[0];
  p_output1[75]=t1600 + t1833 + 0.167314*t1870 + 0.284417*t1880 + t2377 + var1[0];
  p_output1[76]=t1600 + t1833 + 0.166596*t1870 + 0.284582*t1880 + t2426 + var1[0];
  p_output1[77]=t1600 + t1833 + 0.167462*t1870 + 0.284383*t1880 + t2920 + var1[0];
  p_output1[78]=t1600 + t1833 + 0.169818*t1870 + 0.283839*t1880 + t2968 + var1[0];
  p_output1[79]=t4500;
  p_output1[80]=t4759;
  p_output1[81]=t3336 + t3476 + 0.177844*t3495 + 0.281987*t3552 + t3624 + var1[1];
  p_output1[82]=t3336 + t3476 + 0.182645*t3495 + 0.280879*t3552 + t3676 + var1[1];
  p_output1[83]=t3336 + t3476 + 0.18729*t3495 + 0.279807*t3552 + t3712 + var1[1];
  p_output1[84]=t3336 + t3476 + 0.191276*t3495 + 0.278887*t3552 + t3755 + var1[1];
  p_output1[85]=t3336 + t3476 + 0.194171*t3495 + 0.278219*t3552 + t3778 + var1[1];
  p_output1[86]=t3336 + t3476 + 0.195662*t3495 + 0.277875*t3552 + t3810 + var1[1];
  p_output1[87]=t3336 + t3476 + 0.195587*t3495 + 0.277892*t3552 + t3836 + var1[1];
  p_output1[88]=t3336 + t3476 + 0.193954*t3495 + 0.278269*t3552 + t3950 + var1[1];
  p_output1[89]=t3336 + t3476 + 0.19094*t3495 + 0.278965*t3552 + t3970 + var1[1];
  p_output1[90]=t3336 + t3476 + 0.186871*t3495 + 0.279904*t3552 + t3986 + var1[1];
  p_output1[91]=t3336 + t3476 + 0.182189*t3495 + 0.280984*t3552 + t4007 + var1[1];
  p_output1[92]=t3336 + t3476 + 0.177401*t3495 + 0.282089*t3552 + t4019 + var1[1];
  p_output1[93]=t3336 + t3476 + 0.173026*t3495 + 0.283099*t3552 + t4039 + var1[1];
  p_output1[94]=t3336 + t3476 + 0.169537*t3495 + 0.283904*t3552 + t4055 + var1[1];
  p_output1[95]=t3336 + t3476 + 0.167314*t3495 + 0.284417*t3552 + t4087 + var1[1];
  p_output1[96]=t3336 + t3476 + 0.166596*t3495 + 0.284582*t3552 + t4102 + var1[1];
  p_output1[97]=t3336 + t3476 + 0.167462*t3495 + 0.284383*t3552 + t4124 + var1[1];
  p_output1[98]=t3336 + t3476 + 0.169818*t3495 + 0.283839*t3552 + t4136 + var1[1];
  p_output1[99]=t4759;
  p_output1[100]=t5537;
  p_output1[101]=t4160 + t4176 + 0.177844*t4198 + 0.281987*t4224 + t4243 + var1[2];
  p_output1[102]=t4160 + t4176 + 0.182645*t4198 + 0.280879*t4224 + t4263 + var1[2];
  p_output1[103]=t4160 + t4176 + 0.18729*t4198 + 0.279807*t4224 + t4269 + var1[2];
  p_output1[104]=t4160 + t4176 + 0.191276*t4198 + 0.278887*t4224 + t4284 + var1[2];
  p_output1[105]=t4160 + t4176 + 0.194171*t4198 + 0.278219*t4224 + t4300 + var1[2];
  p_output1[106]=t4160 + t4176 + 0.195662*t4198 + 0.277875*t4224 + t4313 + var1[2];
  p_output1[107]=t4160 + t4176 + 0.195587*t4198 + 0.277892*t4224 + t4355 + var1[2];
  p_output1[108]=t4160 + t4176 + 0.193954*t4198 + 0.278269*t4224 + t4362 + var1[2];
  p_output1[109]=t4160 + t4176 + 0.19094*t4198 + 0.278965*t4224 + t4381 + var1[2];
  p_output1[110]=t4160 + t4176 + 0.186871*t4198 + 0.279904*t4224 + t4391 + var1[2];
  p_output1[111]=t4160 + t4176 + 0.182189*t4198 + 0.280984*t4224 + t4402 + var1[2];
  p_output1[112]=t4160 + t4176 + 0.177401*t4198 + 0.282089*t4224 + t4415 + var1[2];
  p_output1[113]=t4160 + t4176 + 0.173026*t4198 + 0.283099*t4224 + t4424 + var1[2];
  p_output1[114]=t4160 + t4176 + 0.169537*t4198 + 0.283904*t4224 + t4434 + var1[2];
  p_output1[115]=t4160 + t4176 + 0.167314*t4198 + 0.284417*t4224 + t4439 + var1[2];
  p_output1[116]=t4160 + t4176 + 0.166596*t4198 + 0.284582*t4224 + t4453 + var1[2];
  p_output1[117]=t4160 + t4176 + 0.167462*t4198 + 0.284383*t4224 + t4467 + var1[2];
  p_output1[118]=t4160 + t4176 + 0.169818*t4198 + 0.283839*t4224 + t4479 + var1[2];
  p_output1[119]=t5537;
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

#include "Link_hip0_to_0_bar.hh"

namespace SymFunction
{

void Link_hip0_to_0_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
