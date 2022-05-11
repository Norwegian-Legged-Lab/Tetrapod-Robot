/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:35 GMT+01:00
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
  double t249;
  double t335;
  double t336;
  double t339;
  double t348;
  double t360;
  double t326;
  double t917;
  double t388;
  double t407;
  double t491;
  double t708;
  double t900;
  double t903;
  double t919;
  double t922;
  double t923;
  double t929;
  double t953;
  double t969;
  double t1002;
  double t876;
  double t943;
  double t1026;
  double t1030;
  double t2205;
  double t2224;
  double t2223;
  double t2229;
  double t2232;
  double t2246;
  double t2247;
  double t2251;
  double t2245;
  double t2252;
  double t2273;
  double t2289;
  double t2294;
  double t2316;
  double t2322;
  double t2331;
  double t2217;
  double t2295;
  double t2335;
  double t2336;
  double t3207;
  double t3220;
  double t3229;
  double t3236;
  double t3250;
  double t3255;
  double t3230;
  double t3277;
  double t3284;
  double t3286;
  double t3287;
  double t3300;
  double t3302;
  double t3306;
  double t3191;
  double t3288;
  double t3308;
  double t3314;
  double t3825;
  double t3832;
  double t3845;
  double t3870;
  double t4195;
  double t4198;
  double t4208;
  double t4211;
  double t4389;
  double t4391;
  double t4392;
  double t4394;
  t249 = Cos(var1[4]);
  t335 = Cos(var1[15]);
  t336 = -1.*t335;
  t339 = 1. + t336;
  t348 = -0.15121*t339;
  t360 = Sin(var1[15]);
  t326 = Cos(var1[5]);
  t917 = Sin(var1[5]);
  t388 = -0.15121*t360;
  t407 = t348 + t388;
  t491 = t249*t326*t407;
  t708 = Sin(var1[4]);
  t900 = 0.15121*t360;
  t903 = t348 + t900;
  t919 = -1.*t249*t903*t917;
  t922 = -1.*t249*t326*t360;
  t923 = -1.*t335*t249*t917;
  t929 = t922 + t923;
  t953 = t335*t249*t326;
  t969 = -1.*t249*t360*t917;
  t1002 = t953 + t969;
  t876 = -0.008178*t708;
  t943 = -0.139432*t929;
  t1026 = -0.155613*t1002;
  t1030 = var1[0] + t491 + t876 + t919 + t943 + t1026;
  t2205 = Sin(var1[3]);
  t2224 = Cos(var1[3]);
  t2223 = t326*t2205*t708;
  t2229 = t2224*t917;
  t2232 = t2223 + t2229;
  t2246 = t2224*t326;
  t2247 = -1.*t2205*t708*t917;
  t2251 = t2246 + t2247;
  t2245 = t407*t2232;
  t2252 = t903*t2251;
  t2273 = -1.*t360*t2232;
  t2289 = t335*t2251;
  t2294 = t2273 + t2289;
  t2316 = t335*t2232;
  t2322 = t360*t2251;
  t2331 = t2316 + t2322;
  t2217 = 0.008178*t249*t2205;
  t2295 = -0.139432*t2294;
  t2335 = -0.155613*t2331;
  t2336 = var1[1] + t2217 + t2245 + t2252 + t2295 + t2335;
  t3207 = -1.*t2224*t326*t708;
  t3220 = t2205*t917;
  t3229 = t3207 + t3220;
  t3236 = t326*t2205;
  t3250 = t2224*t708*t917;
  t3255 = t3236 + t3250;
  t3230 = t407*t3229;
  t3277 = t903*t3255;
  t3284 = -1.*t360*t3229;
  t3286 = t335*t3255;
  t3287 = t3284 + t3286;
  t3300 = t335*t3229;
  t3302 = t360*t3255;
  t3306 = t3300 + t3302;
  t3191 = -0.008178*t2224*t249;
  t3288 = -0.139432*t3287;
  t3308 = -0.155613*t3306;
  t3314 = var1[2] + t3191 + t3230 + t3277 + t3288 + t3308;
  t3825 = -0.046928*t708;
  t3832 = -0.214933*t929;
  t3845 = -0.285612*t1002;
  t3870 = var1[0] + t491 + t3825 + t919 + t3832 + t3845;
  t4195 = 0.046928*t249*t2205;
  t4198 = -0.214933*t2294;
  t4208 = -0.285612*t2331;
  t4211 = var1[1] + t4195 + t2245 + t2252 + t4198 + t4208;
  t4389 = -0.046928*t2224*t249;
  t4391 = -0.214933*t3287;
  t4392 = -0.285612*t3306;
  t4394 = var1[2] + t4389 + t3230 + t3277 + t4391 + t4392;
  p_output1[0]=t1030;
  p_output1[1]=-0.153128*t1002 + t491 - 0.011633*t708 + t919 - 0.141937*t929 + var1[0];
  p_output1[2]=-0.150436*t1002 + t491 - 0.013827*t708 + t919 - 0.145447*t929 + var1[0];
  p_output1[3]=-0.147827*t1002 + t491 - 0.014523*t708 + t919 - 0.149581*t929 + var1[0];
  p_output1[4]=-0.145585*t1002 + t491 - 0.013644*t708 + t919 - 0.153892*t929 + var1[0];
  p_output1[5]=-0.143953*t1002 + t491 - 0.011288*t708 + t919 - 0.157912*t929 + var1[0];
  p_output1[6]=-0.143107*t1002 + t491 - 0.007708*t708 + t919 - 0.161206*t929 + var1[0];
  p_output1[7]=-0.143139*t1002 + t491 - 0.003293*t708 + t919 - 0.163417*t929 + var1[0];
  p_output1[8]=-0.144046*t1002 + t491 + 0.001479*t708 + t919 - 0.164305*t929 + var1[0];
  p_output1[9]=-0.145729*t1002 + t491 + 0.006091*t708 + t919 - 0.163774*t929 + var1[0];
  p_output1[10]=-0.148006*t1002 + t491 + 0.010043*t708 + t919 - 0.161881*t929 + var1[0];
  p_output1[11]=-0.15063*t1002 + t491 + 0.012906*t708 + t919 - 0.158832*t929 + var1[0];
  p_output1[12]=-0.153317*t1002 + t491 + 0.014371*t708 + t919 - 0.154957*t929 + var1[0];
  p_output1[13]=-0.155776*t1002 + t491 + 0.014278*t708 + t919 - 0.150676*t929 + var1[0];
  p_output1[14]=-0.15774*t1002 + t491 + 0.012638*t708 + t919 - 0.146453*t929 + var1[0];
  p_output1[15]=-0.158996*t1002 + t491 + 0.009629*t708 + t919 - 0.142745*t929 + var1[0];
  p_output1[16]=-0.159409*t1002 + t491 + 0.005576*t708 + t919 - 0.139955*t929 + var1[0];
  p_output1[17]=-0.158933*t1002 + t491 + 0.000919*t708 + t919 - 0.138384*t929 + var1[0];
  p_output1[18]=-0.15762*t1002 + t491 - 0.003838*t708 + t919 - 0.138203*t929 + var1[0];
  p_output1[19]=t1030;
  p_output1[20]=t2336;
  p_output1[21]=t2245 + t2252 - 0.141937*t2294 - 0.153128*t2331 + 0.011633*t2205*t249 + var1[1];
  p_output1[22]=t2245 + t2252 - 0.145447*t2294 - 0.150436*t2331 + 0.013827*t2205*t249 + var1[1];
  p_output1[23]=t2245 + t2252 - 0.149581*t2294 - 0.147827*t2331 + 0.014523*t2205*t249 + var1[1];
  p_output1[24]=t2245 + t2252 - 0.153892*t2294 - 0.145585*t2331 + 0.013644*t2205*t249 + var1[1];
  p_output1[25]=t2245 + t2252 - 0.157912*t2294 - 0.143953*t2331 + 0.011288*t2205*t249 + var1[1];
  p_output1[26]=t2245 + t2252 - 0.161206*t2294 - 0.143107*t2331 + 0.007708*t2205*t249 + var1[1];
  p_output1[27]=t2245 + t2252 - 0.163417*t2294 - 0.143139*t2331 + 0.003293*t2205*t249 + var1[1];
  p_output1[28]=t2245 + t2252 - 0.164305*t2294 - 0.144046*t2331 - 0.001479*t2205*t249 + var1[1];
  p_output1[29]=t2245 + t2252 - 0.163774*t2294 - 0.145729*t2331 - 0.006091*t2205*t249 + var1[1];
  p_output1[30]=t2245 + t2252 - 0.161881*t2294 - 0.148006*t2331 - 0.010043*t2205*t249 + var1[1];
  p_output1[31]=t2245 + t2252 - 0.158832*t2294 - 0.15063*t2331 - 0.012906*t2205*t249 + var1[1];
  p_output1[32]=t2245 + t2252 - 0.154957*t2294 - 0.153317*t2331 - 0.014371*t2205*t249 + var1[1];
  p_output1[33]=t2245 + t2252 - 0.150676*t2294 - 0.155776*t2331 - 0.014278*t2205*t249 + var1[1];
  p_output1[34]=t2245 + t2252 - 0.146453*t2294 - 0.15774*t2331 - 0.012638*t2205*t249 + var1[1];
  p_output1[35]=t2245 + t2252 - 0.142745*t2294 - 0.158996*t2331 - 0.009629*t2205*t249 + var1[1];
  p_output1[36]=t2245 + t2252 - 0.139955*t2294 - 0.159409*t2331 - 0.005576*t2205*t249 + var1[1];
  p_output1[37]=t2245 + t2252 - 0.138384*t2294 - 0.158933*t2331 - 0.000919*t2205*t249 + var1[1];
  p_output1[38]=t2245 + t2252 - 0.138203*t2294 - 0.15762*t2331 + 0.003838*t2205*t249 + var1[1];
  p_output1[39]=t2336;
  p_output1[40]=t3314;
  p_output1[41]=-0.011633*t2224*t249 + t3230 + t3277 - 0.141937*t3287 - 0.153128*t3306 + var1[2];
  p_output1[42]=-0.013827*t2224*t249 + t3230 + t3277 - 0.145447*t3287 - 0.150436*t3306 + var1[2];
  p_output1[43]=-0.014523*t2224*t249 + t3230 + t3277 - 0.149581*t3287 - 0.147827*t3306 + var1[2];
  p_output1[44]=-0.013644*t2224*t249 + t3230 + t3277 - 0.153892*t3287 - 0.145585*t3306 + var1[2];
  p_output1[45]=-0.011288*t2224*t249 + t3230 + t3277 - 0.157912*t3287 - 0.143953*t3306 + var1[2];
  p_output1[46]=-0.007708*t2224*t249 + t3230 + t3277 - 0.161206*t3287 - 0.143107*t3306 + var1[2];
  p_output1[47]=-0.003293*t2224*t249 + t3230 + t3277 - 0.163417*t3287 - 0.143139*t3306 + var1[2];
  p_output1[48]=0.001479*t2224*t249 + t3230 + t3277 - 0.164305*t3287 - 0.144046*t3306 + var1[2];
  p_output1[49]=0.006091*t2224*t249 + t3230 + t3277 - 0.163774*t3287 - 0.145729*t3306 + var1[2];
  p_output1[50]=0.010043*t2224*t249 + t3230 + t3277 - 0.161881*t3287 - 0.148006*t3306 + var1[2];
  p_output1[51]=0.012906*t2224*t249 + t3230 + t3277 - 0.158832*t3287 - 0.15063*t3306 + var1[2];
  p_output1[52]=0.014371*t2224*t249 + t3230 + t3277 - 0.154957*t3287 - 0.153317*t3306 + var1[2];
  p_output1[53]=0.014278*t2224*t249 + t3230 + t3277 - 0.150676*t3287 - 0.155776*t3306 + var1[2];
  p_output1[54]=0.012638*t2224*t249 + t3230 + t3277 - 0.146453*t3287 - 0.15774*t3306 + var1[2];
  p_output1[55]=0.009629*t2224*t249 + t3230 + t3277 - 0.142745*t3287 - 0.158996*t3306 + var1[2];
  p_output1[56]=0.005576*t2224*t249 + t3230 + t3277 - 0.139955*t3287 - 0.159409*t3306 + var1[2];
  p_output1[57]=0.000919*t2224*t249 + t3230 + t3277 - 0.138384*t3287 - 0.158933*t3306 + var1[2];
  p_output1[58]=-0.003838*t2224*t249 + t3230 + t3277 - 0.138203*t3287 - 0.15762*t3306 + var1[2];
  p_output1[59]=t3314;
  p_output1[60]=t3870;
  p_output1[61]=-0.283128*t1002 + t491 - 0.050383*t708 + t919 - 0.217438*t929 + var1[0];
  p_output1[62]=-0.280435*t1002 + t491 - 0.052577*t708 + t919 - 0.220947*t929 + var1[0];
  p_output1[63]=-0.277827*t1002 + t491 - 0.053273*t708 + t919 - 0.225082*t929 + var1[0];
  p_output1[64]=-0.275585*t1002 + t491 - 0.052394*t708 + t919 - 0.229393*t929 + var1[0];
  p_output1[65]=-0.273952*t1002 + t491 - 0.050038*t708 + t919 - 0.233413*t929 + var1[0];
  p_output1[66]=-0.273106*t1002 + t491 - 0.046458*t708 + t919 - 0.236707*t929 + var1[0];
  p_output1[67]=-0.273138*t1002 + t491 - 0.042043*t708 + t919 - 0.238918*t929 + var1[0];
  p_output1[68]=-0.274045*t1002 + t491 - 0.037271*t708 + t919 - 0.239806*t929 + var1[0];
  p_output1[69]=-0.275728*t1002 + t491 - 0.032659*t708 + t919 - 0.239275*t929 + var1[0];
  p_output1[70]=-0.278005*t1002 + t491 - 0.028707*t708 + t919 - 0.237382*t929 + var1[0];
  p_output1[71]=-0.28063*t1002 + t491 - 0.025844*t708 + t919 - 0.234333*t929 + var1[0];
  p_output1[72]=-0.283317*t1002 + t491 - 0.024379*t708 + t919 - 0.230458*t929 + var1[0];
  p_output1[73]=-0.285776*t1002 + t491 - 0.024472*t708 + t919 - 0.226177*t929 + var1[0];
  p_output1[74]=-0.28774*t1002 + t491 - 0.026112*t708 + t919 - 0.221954*t929 + var1[0];
  p_output1[75]=-0.288996*t1002 + t491 - 0.029121*t708 + t919 - 0.218246*t929 + var1[0];
  p_output1[76]=-0.289408*t1002 + t491 - 0.033174*t708 + t919 - 0.215456*t929 + var1[0];
  p_output1[77]=-0.288933*t1002 + t491 - 0.037831*t708 + t919 - 0.213885*t929 + var1[0];
  p_output1[78]=-0.28762*t1002 + t491 - 0.042588*t708 + t919 - 0.213704*t929 + var1[0];
  p_output1[79]=t3870;
  p_output1[80]=t4211;
  p_output1[81]=t2245 + t2252 - 0.217438*t2294 - 0.283128*t2331 + 0.050383*t2205*t249 + var1[1];
  p_output1[82]=t2245 + t2252 - 0.220947*t2294 - 0.280435*t2331 + 0.052577*t2205*t249 + var1[1];
  p_output1[83]=t2245 + t2252 - 0.225082*t2294 - 0.277827*t2331 + 0.053273*t2205*t249 + var1[1];
  p_output1[84]=t2245 + t2252 - 0.229393*t2294 - 0.275585*t2331 + 0.052394*t2205*t249 + var1[1];
  p_output1[85]=t2245 + t2252 - 0.233413*t2294 - 0.273952*t2331 + 0.050038*t2205*t249 + var1[1];
  p_output1[86]=t2245 + t2252 - 0.236707*t2294 - 0.273106*t2331 + 0.046458*t2205*t249 + var1[1];
  p_output1[87]=t2245 + t2252 - 0.238918*t2294 - 0.273138*t2331 + 0.042043*t2205*t249 + var1[1];
  p_output1[88]=t2245 + t2252 - 0.239806*t2294 - 0.274045*t2331 + 0.037271*t2205*t249 + var1[1];
  p_output1[89]=t2245 + t2252 - 0.239275*t2294 - 0.275728*t2331 + 0.032659*t2205*t249 + var1[1];
  p_output1[90]=t2245 + t2252 - 0.237382*t2294 - 0.278005*t2331 + 0.028707*t2205*t249 + var1[1];
  p_output1[91]=t2245 + t2252 - 0.234333*t2294 - 0.28063*t2331 + 0.025844*t2205*t249 + var1[1];
  p_output1[92]=t2245 + t2252 - 0.230458*t2294 - 0.283317*t2331 + 0.024379*t2205*t249 + var1[1];
  p_output1[93]=t2245 + t2252 - 0.226177*t2294 - 0.285776*t2331 + 0.024472*t2205*t249 + var1[1];
  p_output1[94]=t2245 + t2252 - 0.221954*t2294 - 0.28774*t2331 + 0.026112*t2205*t249 + var1[1];
  p_output1[95]=t2245 + t2252 - 0.218246*t2294 - 0.288996*t2331 + 0.029121*t2205*t249 + var1[1];
  p_output1[96]=t2245 + t2252 - 0.215456*t2294 - 0.289408*t2331 + 0.033174*t2205*t249 + var1[1];
  p_output1[97]=t2245 + t2252 - 0.213885*t2294 - 0.288933*t2331 + 0.037831*t2205*t249 + var1[1];
  p_output1[98]=t2245 + t2252 - 0.213704*t2294 - 0.28762*t2331 + 0.042588*t2205*t249 + var1[1];
  p_output1[99]=t4211;
  p_output1[100]=t4394;
  p_output1[101]=-0.050383*t2224*t249 + t3230 + t3277 - 0.217438*t3287 - 0.283128*t3306 + var1[2];
  p_output1[102]=-0.052577*t2224*t249 + t3230 + t3277 - 0.220947*t3287 - 0.280435*t3306 + var1[2];
  p_output1[103]=-0.053273*t2224*t249 + t3230 + t3277 - 0.225082*t3287 - 0.277827*t3306 + var1[2];
  p_output1[104]=-0.052394*t2224*t249 + t3230 + t3277 - 0.229393*t3287 - 0.275585*t3306 + var1[2];
  p_output1[105]=-0.050038*t2224*t249 + t3230 + t3277 - 0.233413*t3287 - 0.273952*t3306 + var1[2];
  p_output1[106]=-0.046458*t2224*t249 + t3230 + t3277 - 0.236707*t3287 - 0.273106*t3306 + var1[2];
  p_output1[107]=-0.042043*t2224*t249 + t3230 + t3277 - 0.238918*t3287 - 0.273138*t3306 + var1[2];
  p_output1[108]=-0.037271*t2224*t249 + t3230 + t3277 - 0.239806*t3287 - 0.274045*t3306 + var1[2];
  p_output1[109]=-0.032659*t2224*t249 + t3230 + t3277 - 0.239275*t3287 - 0.275728*t3306 + var1[2];
  p_output1[110]=-0.028707*t2224*t249 + t3230 + t3277 - 0.237382*t3287 - 0.278005*t3306 + var1[2];
  p_output1[111]=-0.025844*t2224*t249 + t3230 + t3277 - 0.234333*t3287 - 0.28063*t3306 + var1[2];
  p_output1[112]=-0.024379*t2224*t249 + t3230 + t3277 - 0.230458*t3287 - 0.283317*t3306 + var1[2];
  p_output1[113]=-0.024472*t2224*t249 + t3230 + t3277 - 0.226177*t3287 - 0.285776*t3306 + var1[2];
  p_output1[114]=-0.026112*t2224*t249 + t3230 + t3277 - 0.221954*t3287 - 0.28774*t3306 + var1[2];
  p_output1[115]=-0.029121*t2224*t249 + t3230 + t3277 - 0.218246*t3287 - 0.288996*t3306 + var1[2];
  p_output1[116]=-0.033174*t2224*t249 + t3230 + t3277 - 0.215456*t3287 - 0.289408*t3306 + var1[2];
  p_output1[117]=-0.037831*t2224*t249 + t3230 + t3277 - 0.213885*t3287 - 0.288933*t3306 + var1[2];
  p_output1[118]=-0.042588*t2224*t249 + t3230 + t3277 - 0.213704*t3287 - 0.28762*t3306 + var1[2];
  p_output1[119]=t4394;
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

#include "Link_rr_hip_to_rr_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_rr_hip_to_rr_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
