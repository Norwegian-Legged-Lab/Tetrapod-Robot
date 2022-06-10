/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:24 GMT+01:00
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
  double t1151;
  double t1162;
  double t1176;
  double t1206;
  double t367;
  double t682;
  double t717;
  double t1042;
  double t1075;
  double t1087;
  double t1201;
  double t614;
  double t1413;
  double t1324;
  double t1664;
  double t1862;
  double t1395;
  double t1902;
  double t1737;
  double t1748;
  double t1750;
  double t2103;
  double t2114;
  double t2124;
  double t1618;
  double t2199;
  double t1678;
  double t2242;
  double t2246;
  double t1213;
  double t2147;
  double t1059;
  double t1106;
  double t1107;
  double t1124;
  double t1200;
  double t1227;
  double t1269;
  double t1337;
  double t1374;
  double t1377;
  double t1404;
  double t1405;
  double t1407;
  double t1440;
  double t1468;
  double t1510;
  double t1647;
  double t1653;
  double t1691;
  double t1703;
  double t1732;
  double t1787;
  double t1807;
  double t1821;
  double t1867;
  double t1888;
  double t1910;
  double t2030;
  double t2092;
  double t2131;
  double t2167;
  double t2180;
  double t2208;
  double t2209;
  double t2213;
  double t2216;
  double t2226;
  double t2228;
  double t2250;
  double t2261;
  double t2265;
  double t2266;
  double t2267;
  double t2268;
  double t2275;
  double t2279;
  double t2283;
  double t2286;
  double t2289;
  double t2294;
  double t2295;
  double t2301;
  double t2314;
  double t2315;
  double t2231;
  double t2282;
  double t2321;
  double t2331;
  double t3104;
  double t3119;
  double t3117;
  double t3122;
  double t3125;
  double t3130;
  double t3140;
  double t3155;
  double t3158;
  double t3162;
  double t3166;
  double t3171;
  double t3173;
  double t3178;
  double t3112;
  double t3129;
  double t3156;
  double t3170;
  double t3181;
  double t3196;
  double t3206;
  double t3207;
  double t3209;
  double t3223;
  double t3229;
  double t3230;
  double t3232;
  double t3247;
  double t3248;
  double t3250;
  double t3258;
  double t3217;
  double t3242;
  double t3264;
  double t3277;
  double t3618;
  double t3622;
  double t3623;
  double t3631;
  double t3640;
  double t3645;
  double t3682;
  double t3683;
  double t3691;
  double t3696;
  double t3723;
  double t3748;
  double t3617;
  double t3624;
  double t3650;
  double t3694;
  double t3754;
  double t3761;
  double t3769;
  double t3786;
  double t3794;
  double t3814;
  double t3817;
  double t3818;
  double t3821;
  double t3845;
  double t3849;
  double t3880;
  double t3892;
  double t3806;
  double t3822;
  double t3896;
  double t3902;
  double t4223;
  double t4225;
  double t4228;
  double t4232;
  double t4405;
  double t4407;
  double t4408;
  double t4411;
  double t4566;
  double t4567;
  double t4568;
  double t4569;
  t1151 = Cos(var1[13]);
  t1162 = -1.*t1151;
  t1176 = 1. + t1162;
  t1206 = Sin(var1[13]);
  t367 = Cos(var1[4]);
  t682 = Cos(var1[12]);
  t717 = -1.*t682;
  t1042 = 1. + t717;
  t1075 = Sin(var1[12]);
  t1087 = 0.15121*t1075;
  t1201 = 4.e-6*t1176;
  t614 = Cos(var1[5]);
  t1413 = Sin(var1[5]);
  t1324 = -2.8e-11*t1176;
  t1664 = 7.e-6*t1176;
  t1862 = -1.*t1206;
  t1395 = Sin(var1[4]);
  t1902 = -4.e-6*t1206;
  t1737 = -1.*t367*t614*t1075;
  t1748 = -1.*t682*t367*t1413;
  t1750 = t1737 + t1748;
  t2103 = t682*t367*t614;
  t2114 = -1.*t367*t1075*t1413;
  t2124 = t2103 + t2114;
  t1618 = -7.e-6*t1206;
  t2199 = -7.e-6*t1176;
  t1678 = 4.e-6*t1206;
  t2242 = -1. + t1151;
  t2246 = 4.e-6*t2242;
  t1213 = 7.e-6*t1206;
  t2147 = 2.8e-11*t1176;
  t1059 = -0.15121*t1042;
  t1106 = t1059 + t1087;
  t1107 = t367*t614*t1106;
  t1124 = 5.856279999999999e-13*var1[13];
  t1200 = -0.0387489999948987*t1176;
  t1227 = t1201 + t1213;
  t1269 = -2.123459e-6*t1227;
  t1337 = t1324 + t1206;
  t1374 = -0.281209000004*t1337;
  t1377 = t1124 + t1200 + t1269 + t1374;
  t1404 = t1377*t1395;
  t1405 = 0.15121*t1042;
  t1407 = t1405 + t1087;
  t1440 = -1.*t367*t1407*t1413;
  t1468 = -1.4640699999999997e-7*var1[13];
  t1510 = -1.38024835e-16*t1176;
  t1647 = t1201 + t1618;
  t1653 = -0.038748999993*t1647;
  t1691 = t1664 + t1678;
  t1703 = -0.281209000004*t1691;
  t1732 = t1468 + t1510 + t1653 + t1703;
  t1787 = t1732*t1750;
  t1807 = 1.0248489999999998e-12*var1[13];
  t1821 = -0.28120900000849935*t1176;
  t1867 = t1324 + t1862;
  t1888 = -0.038748999993*t1867;
  t1910 = t1664 + t1902;
  t2030 = -2.123459e-6*t1910;
  t2092 = t1807 + t1821 + t1888 + t2030;
  t2131 = t2092*t2124;
  t2167 = t2147 + t1862;
  t2180 = t2167*t1395;
  t2208 = t2199 + t1902;
  t2209 = t2208*t1750;
  t2213 = -1.000000000016*t1176;
  t2216 = 1. + t2213;
  t2226 = t2216*t2124;
  t2228 = t2180 + t2209 + t2226;
  t2250 = t2246 + t1618;
  t2261 = t2250*t1395;
  t2265 = -6.5e-11*t1176;
  t2266 = 1. + t2265;
  t2267 = t2266*t1750;
  t2268 = t2199 + t1678;
  t2275 = t2268*t2124;
  t2279 = t2261 + t2267 + t2275;
  t2283 = -1.000000000049*t1176;
  t2286 = 1. + t2283;
  t2289 = t2286*t1395;
  t2294 = t2246 + t1213;
  t2295 = t2294*t1750;
  t2301 = t2147 + t1206;
  t2314 = t2301*t2124;
  t2315 = t2289 + t2295 + t2314;
  t2231 = -0.278104*t2228;
  t2282 = 0.215432*t2279;
  t2321 = -0.04814*t2315;
  t2331 = var1[0] + t1107 + t1404 + t1440 + t1787 + t2131 + t2231 + t2282 + t2321;
  t3104 = Sin(var1[3]);
  t3119 = Cos(var1[3]);
  t3117 = t614*t3104*t1395;
  t3122 = t3119*t1413;
  t3125 = t3117 + t3122;
  t3130 = t3119*t614;
  t3140 = -1.*t3104*t1395*t1413;
  t3155 = t3130 + t3140;
  t3158 = -1.*t1075*t3125;
  t3162 = t682*t3155;
  t3166 = t3158 + t3162;
  t3171 = t682*t3125;
  t3173 = t1075*t3155;
  t3178 = t3171 + t3173;
  t3112 = -1.*t367*t1377*t3104;
  t3129 = t1106*t3125;
  t3156 = t1407*t3155;
  t3170 = t1732*t3166;
  t3181 = t2092*t3178;
  t3196 = -1.*t367*t2167*t3104;
  t3206 = t2208*t3166;
  t3207 = t2216*t3178;
  t3209 = t3196 + t3206 + t3207;
  t3223 = -1.*t367*t2250*t3104;
  t3229 = t2266*t3166;
  t3230 = t2268*t3178;
  t3232 = t3223 + t3229 + t3230;
  t3247 = -1.*t2286*t367*t3104;
  t3248 = t2294*t3166;
  t3250 = t2301*t3178;
  t3258 = t3247 + t3248 + t3250;
  t3217 = -0.278104*t3209;
  t3242 = 0.215432*t3232;
  t3264 = -0.04814*t3258;
  t3277 = var1[1] + t3112 + t3129 + t3156 + t3170 + t3181 + t3217 + t3242 + t3264;
  t3618 = -1.*t3119*t614*t1395;
  t3622 = t3104*t1413;
  t3623 = t3618 + t3622;
  t3631 = t614*t3104;
  t3640 = t3119*t1395*t1413;
  t3645 = t3631 + t3640;
  t3682 = -1.*t1075*t3623;
  t3683 = t682*t3645;
  t3691 = t3682 + t3683;
  t3696 = t682*t3623;
  t3723 = t1075*t3645;
  t3748 = t3696 + t3723;
  t3617 = t3119*t367*t1377;
  t3624 = t1106*t3623;
  t3650 = t1407*t3645;
  t3694 = t1732*t3691;
  t3754 = t2092*t3748;
  t3761 = t3119*t367*t2167;
  t3769 = t2208*t3691;
  t3786 = t2216*t3748;
  t3794 = t3761 + t3769 + t3786;
  t3814 = t3119*t367*t2250;
  t3817 = t2266*t3691;
  t3818 = t2268*t3748;
  t3821 = t3814 + t3817 + t3818;
  t3845 = t2286*t3119*t367;
  t3849 = t2294*t3691;
  t3880 = t2301*t3748;
  t3892 = t3845 + t3849 + t3880;
  t3806 = -0.278104*t3794;
  t3822 = 0.215432*t3821;
  t3896 = -0.04814*t3892;
  t3902 = var1[2] + t3617 + t3624 + t3650 + t3694 + t3754 + t3806 + t3822 + t3896;
  t4223 = -0.500043*t2228;
  t4225 = 0.15443*t2279;
  t4228 = -0.048313*t2315;
  t4232 = var1[0] + t1107 + t1404 + t1440 + t1787 + t2131 + t4223 + t4225 + t4228;
  t4405 = -0.500043*t3209;
  t4407 = 0.15443*t3232;
  t4408 = -0.048313*t3258;
  t4411 = var1[1] + t3112 + t3129 + t3156 + t3170 + t3181 + t4405 + t4407 + t4408;
  t4566 = -0.500043*t3794;
  t4567 = 0.15443*t3821;
  t4568 = -0.048313*t3892;
  t4569 = var1[2] + t3617 + t3624 + t3650 + t3694 + t3754 + t4566 + t4567 + t4568;
  p_output1[0]=t2331;
  p_output1[1]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.277467*t2228 + 0.213102*t2279 - 0.043833*t2315 + var1[0];
  p_output1[2]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.277235*t2228 + 0.212247*t2279 - 0.038975*t2315 + var1[0];
  p_output1[3]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.277435*t2228 + 0.212959*t2279 - 0.034093*t2315 + var1[0];
  p_output1[4]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.278044*t2228 + 0.215161*t2279 - 0.029715*t2315 + var1[0];
  p_output1[5]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.278996*t2228 + 0.218615*t2279 - 0.026317*t2315 + var1[0];
  p_output1[6]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.280187*t2228 + 0.222946*t2279 - 0.024266*t2315 + var1[0];
  p_output1[7]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.28149*t2228 + 0.227684*t2279 - 0.023784*t2315 + var1[0];
  p_output1[8]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.282763*t2228 + 0.232317*t2279 - 0.024925*t2315 + var1[0];
  p_output1[9]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.283867*t2228 + 0.236342*t2279 - 0.027563*t2315 + var1[0];
  p_output1[10]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.284683*t2228 + 0.239323*t2279 - 0.031414*t2315 + var1[0];
  p_output1[11]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.285123*t2228 + 0.240938*t2279 - 0.036059*t2315 + var1[0];
  p_output1[12]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.285139*t2228 + 0.24101*t2279 - 0.040997*t2315 + var1[0];
  p_output1[13]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.28473*t2228 + 0.239533*t2279 - 0.045691*t2315 + var1[0];
  p_output1[14]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.283939*t2228 + 0.236666*t2279 - 0.049632*t2315 + var1[0];
  p_output1[15]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.282852*t2228 + 0.23272*t2279 - 0.052395*t2315 + var1[0];
  p_output1[16]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.281587*t2228 + 0.228123*t2279 - 0.053678*t2315 + var1[0];
  p_output1[17]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.280282*t2228 + 0.223372*t2279 - 0.053345*t2315 + var1[0];
  p_output1[18]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.279077*t2228 + 0.218983*t2279 - 0.051429*t2315 + var1[0];
  p_output1[19]=t2331;
  p_output1[20]=t3277;
  p_output1[21]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.277467*t3209 + 0.213102*t3232 - 0.043833*t3258 + var1[1];
  p_output1[22]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.277235*t3209 + 0.212247*t3232 - 0.038975*t3258 + var1[1];
  p_output1[23]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.277435*t3209 + 0.212959*t3232 - 0.034093*t3258 + var1[1];
  p_output1[24]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.278044*t3209 + 0.215161*t3232 - 0.029715*t3258 + var1[1];
  p_output1[25]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.278996*t3209 + 0.218615*t3232 - 0.026317*t3258 + var1[1];
  p_output1[26]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.280187*t3209 + 0.222946*t3232 - 0.024266*t3258 + var1[1];
  p_output1[27]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.28149*t3209 + 0.227684*t3232 - 0.023784*t3258 + var1[1];
  p_output1[28]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.282763*t3209 + 0.232317*t3232 - 0.024925*t3258 + var1[1];
  p_output1[29]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.283867*t3209 + 0.236342*t3232 - 0.027563*t3258 + var1[1];
  p_output1[30]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.284683*t3209 + 0.239323*t3232 - 0.031414*t3258 + var1[1];
  p_output1[31]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.285123*t3209 + 0.240938*t3232 - 0.036059*t3258 + var1[1];
  p_output1[32]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.285139*t3209 + 0.24101*t3232 - 0.040997*t3258 + var1[1];
  p_output1[33]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.28473*t3209 + 0.239533*t3232 - 0.045691*t3258 + var1[1];
  p_output1[34]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.283939*t3209 + 0.236666*t3232 - 0.049632*t3258 + var1[1];
  p_output1[35]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.282852*t3209 + 0.23272*t3232 - 0.052395*t3258 + var1[1];
  p_output1[36]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.281587*t3209 + 0.228123*t3232 - 0.053678*t3258 + var1[1];
  p_output1[37]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.280282*t3209 + 0.223372*t3232 - 0.053345*t3258 + var1[1];
  p_output1[38]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.279077*t3209 + 0.218983*t3232 - 0.051429*t3258 + var1[1];
  p_output1[39]=t3277;
  p_output1[40]=t3902;
  p_output1[41]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.277467*t3794 + 0.213102*t3821 - 0.043833*t3892 + var1[2];
  p_output1[42]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.277235*t3794 + 0.212247*t3821 - 0.038975*t3892 + var1[2];
  p_output1[43]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.277435*t3794 + 0.212959*t3821 - 0.034093*t3892 + var1[2];
  p_output1[44]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.278044*t3794 + 0.215161*t3821 - 0.029715*t3892 + var1[2];
  p_output1[45]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.278996*t3794 + 0.218615*t3821 - 0.026317*t3892 + var1[2];
  p_output1[46]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.280187*t3794 + 0.222946*t3821 - 0.024266*t3892 + var1[2];
  p_output1[47]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.28149*t3794 + 0.227684*t3821 - 0.023784*t3892 + var1[2];
  p_output1[48]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.282763*t3794 + 0.232317*t3821 - 0.024925*t3892 + var1[2];
  p_output1[49]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.283867*t3794 + 0.236342*t3821 - 0.027563*t3892 + var1[2];
  p_output1[50]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.284683*t3794 + 0.239323*t3821 - 0.031414*t3892 + var1[2];
  p_output1[51]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.285123*t3794 + 0.240938*t3821 - 0.036059*t3892 + var1[2];
  p_output1[52]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.285139*t3794 + 0.24101*t3821 - 0.040997*t3892 + var1[2];
  p_output1[53]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.28473*t3794 + 0.239533*t3821 - 0.045691*t3892 + var1[2];
  p_output1[54]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.283939*t3794 + 0.236666*t3821 - 0.049632*t3892 + var1[2];
  p_output1[55]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.282852*t3794 + 0.23272*t3821 - 0.052395*t3892 + var1[2];
  p_output1[56]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.281587*t3794 + 0.228123*t3821 - 0.053678*t3892 + var1[2];
  p_output1[57]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.280282*t3794 + 0.223372*t3821 - 0.053345*t3892 + var1[2];
  p_output1[58]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.279077*t3794 + 0.218983*t3821 - 0.051429*t3892 + var1[2];
  p_output1[59]=t3902;
  p_output1[60]=t4232;
  p_output1[61]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.499406*t2228 + 0.152101*t2279 - 0.044007*t2315 + var1[0];
  p_output1[62]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.499175*t2228 + 0.151246*t2279 - 0.039149*t2315 + var1[0];
  p_output1[63]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.499375*t2228 + 0.151958*t2279 - 0.034267*t2315 + var1[0];
  p_output1[64]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.499983*t2228 + 0.15416*t2279 - 0.029889*t2315 + var1[0];
  p_output1[65]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.500935*t2228 + 0.157613*t2279 - 0.026491*t2315 + var1[0];
  p_output1[66]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.502127*t2228 + 0.161944*t2279 - 0.02444*t2315 + var1[0];
  p_output1[67]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.50343*t2228 + 0.166683*t2279 - 0.023958*t2315 + var1[0];
  p_output1[68]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.504702*t2228 + 0.171315*t2279 - 0.025098*t2315 + var1[0];
  p_output1[69]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.505807*t2228 + 0.175341*t2279 - 0.027737*t2315 + var1[0];
  p_output1[70]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.506623*t2228 + 0.178322*t2279 - 0.031587*t2315 + var1[0];
  p_output1[71]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.507063*t2228 + 0.179936*t2279 - 0.036233*t2315 + var1[0];
  p_output1[72]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.507079*t2228 + 0.180008*t2279 - 0.04117*t2315 + var1[0];
  p_output1[73]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.506669*t2228 + 0.178531*t2279 - 0.045864*t2315 + var1[0];
  p_output1[74]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.505878*t2228 + 0.175664*t2279 - 0.049806*t2315 + var1[0];
  p_output1[75]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.504792*t2228 + 0.171718*t2279 - 0.052568*t2315 + var1[0];
  p_output1[76]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.503527*t2228 + 0.167121*t2279 - 0.053852*t2315 + var1[0];
  p_output1[77]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.502221*t2228 + 0.162371*t2279 - 0.053518*t2315 + var1[0];
  p_output1[78]=t1107 + t1404 + t1440 + t1787 + t2131 - 0.501017*t2228 + 0.157982*t2279 - 0.051603*t2315 + var1[0];
  p_output1[79]=t4232;
  p_output1[80]=t4411;
  p_output1[81]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.499406*t3209 + 0.152101*t3232 - 0.044007*t3258 + var1[1];
  p_output1[82]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.499175*t3209 + 0.151246*t3232 - 0.039149*t3258 + var1[1];
  p_output1[83]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.499375*t3209 + 0.151958*t3232 - 0.034267*t3258 + var1[1];
  p_output1[84]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.499983*t3209 + 0.15416*t3232 - 0.029889*t3258 + var1[1];
  p_output1[85]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.500935*t3209 + 0.157613*t3232 - 0.026491*t3258 + var1[1];
  p_output1[86]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.502127*t3209 + 0.161944*t3232 - 0.02444*t3258 + var1[1];
  p_output1[87]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.50343*t3209 + 0.166683*t3232 - 0.023958*t3258 + var1[1];
  p_output1[88]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.504702*t3209 + 0.171315*t3232 - 0.025098*t3258 + var1[1];
  p_output1[89]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.505807*t3209 + 0.175341*t3232 - 0.027737*t3258 + var1[1];
  p_output1[90]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.506623*t3209 + 0.178322*t3232 - 0.031587*t3258 + var1[1];
  p_output1[91]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.507063*t3209 + 0.179936*t3232 - 0.036233*t3258 + var1[1];
  p_output1[92]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.507079*t3209 + 0.180008*t3232 - 0.04117*t3258 + var1[1];
  p_output1[93]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.506669*t3209 + 0.178531*t3232 - 0.045864*t3258 + var1[1];
  p_output1[94]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.505878*t3209 + 0.175664*t3232 - 0.049806*t3258 + var1[1];
  p_output1[95]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.504792*t3209 + 0.171718*t3232 - 0.052568*t3258 + var1[1];
  p_output1[96]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.503527*t3209 + 0.167121*t3232 - 0.053852*t3258 + var1[1];
  p_output1[97]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.502221*t3209 + 0.162371*t3232 - 0.053518*t3258 + var1[1];
  p_output1[98]=t3112 + t3129 + t3156 + t3170 + t3181 - 0.501017*t3209 + 0.157982*t3232 - 0.051603*t3258 + var1[1];
  p_output1[99]=t4411;
  p_output1[100]=t4569;
  p_output1[101]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.499406*t3794 + 0.152101*t3821 - 0.044007*t3892 + var1[2];
  p_output1[102]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.499175*t3794 + 0.151246*t3821 - 0.039149*t3892 + var1[2];
  p_output1[103]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.499375*t3794 + 0.151958*t3821 - 0.034267*t3892 + var1[2];
  p_output1[104]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.499983*t3794 + 0.15416*t3821 - 0.029889*t3892 + var1[2];
  p_output1[105]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.500935*t3794 + 0.157613*t3821 - 0.026491*t3892 + var1[2];
  p_output1[106]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.502127*t3794 + 0.161944*t3821 - 0.02444*t3892 + var1[2];
  p_output1[107]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.50343*t3794 + 0.166683*t3821 - 0.023958*t3892 + var1[2];
  p_output1[108]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.504702*t3794 + 0.171315*t3821 - 0.025098*t3892 + var1[2];
  p_output1[109]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.505807*t3794 + 0.175341*t3821 - 0.027737*t3892 + var1[2];
  p_output1[110]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.506623*t3794 + 0.178322*t3821 - 0.031587*t3892 + var1[2];
  p_output1[111]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.507063*t3794 + 0.179936*t3821 - 0.036233*t3892 + var1[2];
  p_output1[112]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.507079*t3794 + 0.180008*t3821 - 0.04117*t3892 + var1[2];
  p_output1[113]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.506669*t3794 + 0.178531*t3821 - 0.045864*t3892 + var1[2];
  p_output1[114]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.505878*t3794 + 0.175664*t3821 - 0.049806*t3892 + var1[2];
  p_output1[115]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.504792*t3794 + 0.171718*t3821 - 0.052568*t3892 + var1[2];
  p_output1[116]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.503527*t3794 + 0.167121*t3821 - 0.053852*t3892 + var1[2];
  p_output1[117]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.502221*t3794 + 0.162371*t3821 - 0.053518*t3892 + var1[2];
  p_output1[118]=t3617 + t3624 + t3650 + t3694 + t3754 - 0.501017*t3794 + 0.157982*t3821 - 0.051603*t3892 + var1[2];
  p_output1[119]=t4569;
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

#include "Link_rl_thigh_to_rl_knee_pitch_bar.hh"

namespace SymFunction
{

void Link_rl_thigh_to_rl_knee_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE