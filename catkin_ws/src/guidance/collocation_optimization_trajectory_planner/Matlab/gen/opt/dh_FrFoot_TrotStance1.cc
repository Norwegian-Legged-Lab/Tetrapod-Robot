/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:03 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t129;
  double t88;
  double t220;
  double t156;
  double t174;
  double t212;
  double t831;
  double t104;
  double t106;
  double t235;
  double t757;
  double t799;
  double t816;
  double t840;
  double t878;
  double t729;
  double t1103;
  double t1118;
  double t1123;
  double t1177;
  double t1226;
  double t1263;
  double t1265;
  double t1343;
  double t1395;
  double t687;
  double t962;
  double t1019;
  double t1040;
  double t1640;
  double t1656;
  double t1668;
  double t1706;
  double t1719;
  double t1734;
  double t1782;
  double t1397;
  double t1403;
  double t1817;
  double t1838;
  double t1859;
  double t1861;
  double t1876;
  double t1905;
  double t1913;
  double t1932;
  double t1933;
  double t1961;
  double t950;
  double t1258;
  double t1372;
  double t1379;
  double t1414;
  double t1426;
  double t1429;
  double t1439;
  double t1456;
  double t1457;
  double t1511;
  double t1529;
  double t1544;
  double t1588;
  double t1606;
  double t1787;
  double t1873;
  double t1970;
  double t1972;
  double t1997;
  double t2013;
  double t2030;
  double t2034;
  double t2045;
  double t2052;
  double t243;
  double t344;
  double t502;
  double t532;
  double t1494;
  double t1982;
  double t2063;
  double t2074;
  double t2579;
  double t2583;
  double t2588;
  double t2605;
  double t2639;
  double t2672;
  double t2234;
  double t2309;
  double t2311;
  double t2312;
  double t277;
  double t567;
  double t645;
  double t2448;
  double t2451;
  double t2473;
  double t2486;
  double t2489;
  double t2506;
  double t2508;
  double t2518;
  double t2343;
  double t2374;
  double t2377;
  double t2430;
  double t2765;
  double t2835;
  double t2855;
  double t2907;
  double t2927;
  double t2941;
  double t2945;
  double t2953;
  double t2958;
  double t3039;
  double t3040;
  double t3043;
  double t3048;
  double t3070;
  double t3071;
  double t3076;
  double t2925;
  double t2943;
  double t2962;
  double t2973;
  double t2984;
  double t2993;
  double t2995;
  double t2999;
  double t3166;
  double t2101;
  double t2195;
  double t2204;
  double t1389;
  double t1441;
  double t1443;
  double t3189;
  double t2733;
  double t2726;
  double t2728;
  double t2730;
  double t2601;
  double t2674;
  double t2701;
  double t3231;
  double t3249;
  double t3252;
  double t2538;
  double t3203;
  double t3206;
  double t3226;
  double t3266;
  double t3273;
  double t3283;
  double t3332;
  double t3339;
  double t3340;
  double t3186;
  double t3187;
  double t3188;
  double t3171;
  double t3177;
  double t3179;
  double t3165;
  double t3138;
  double t3148;
  double t3149;
  double t3156;
  double t3161;
  double t3181;
  double t3191;
  double t3192;
  double t3403;
  double t3382;
  double t3392;
  double t3395;
  double t3375;
  double t3417;
  double t3418;
  double t3422;
  double t3354;
  double t3361;
  double t3363;
  double t3295;
  double t3297;
  double t3319;
  double t3322;
  double t3494;
  double t3510;
  double t3512;
  double t3353;
  double t3480;
  double t3484;
  double t3486;
  double t3513;
  double t3520;
  double t3521;
  double t3539;
  double t3546;
  double t3548;
  double t3712;
  double t3714;
  double t3717;
  double t3721;
  double t3724;
  double t3739;
  double t3751;
  double t3574;
  double t3576;
  double t3592;
  double t3660;
  double t3636;
  double t3162;
  double t3193;
  double t3200;
  double t3903;
  double t3533;
  double t3534;
  double t3536;
  double t3927;
  double t4140;
  double t4145;
  double t4146;
  double t4162;
  double t4119;
  double t4123;
  double t4125;
  double t4126;
  double t4060;
  double t4038;
  double t4271;
  double t4282;
  t129 = Cos(var1[11]);
  t88 = Cos(var1[10]);
  t220 = -1. + t129;
  t156 = -1.*t129;
  t174 = 1. + t156;
  t212 = 1.6e-11*t174;
  t831 = Sin(var1[11]);
  t104 = -1.*t88;
  t106 = 1. + t104;
  t235 = 1.6e-11*t220;
  t757 = -1.000000000016*t174;
  t799 = 1. + t757;
  t816 = 0.004352*t799;
  t840 = -0.9999910000159999*t831;
  t878 = t816 + t840;
  t729 = Sin(var1[10]);
  t1103 = -1. + t212;
  t1118 = 4.e-6*t1103;
  t1123 = 3.999964e-6*t174;
  t1177 = -1.7408e-8*t831;
  t1226 = t1118 + t1123 + t1177;
  t1263 = 0.999991*t129;
  t1265 = 0.004352*t831;
  t1343 = t235 + t1263 + t1265;
  t1395 = Cos(var1[9]);
  t687 = Sin(var1[9]);
  t962 = -1. + t88;
  t1019 = 1.6e-11*t962;
  t1040 = 1. + t1019;
  t1640 = -1.26e-8*var1[11];
  t1656 = 1. + t235;
  t1668 = -0.14871*t1656;
  t1706 = -1.64779999997447e-7*t174;
  t1719 = -1.59556e-7*t220;
  t1734 = -1.199987999968e-6*t831;
  t1782 = t1640 + t1668 + t1706 + t1719 + t1734;
  t1397 = -1.000000000016*t106;
  t1403 = 1. + t1397;
  t1817 = 0.803147*t799;
  t1838 = 0.50315000001605*t174;
  t1859 = 0.00130540515936178*t831;
  t1861 = t1817 + t1838 + t1859;
  t1876 = -5.04e-14*var1[11];
  t1905 = -0.03988959484*t174;
  t1913 = 6.38224e-13*t220;
  t1932 = -0.041195*t129;
  t1933 = 0.299996999992*t831;
  t1961 = t1876 + t1905 + t1913 + t1932 + t1933;
  t950 = -4.e-6*t729*t878;
  t1258 = t1040*t1226;
  t1372 = 4.e-6*t106*t1343;
  t1379 = 0. + t950 + t1258 + t1372;
  t1414 = t1403*t878;
  t1426 = 4.e-6*t729*t1226;
  t1429 = -1.*t729*t1343;
  t1439 = 0. + t1414 + t1426 + t1429;
  t1456 = -1.*t1395;
  t1457 = 1. + t1456;
  t1511 = -0.15121*t687;
  t1529 = -1.2484e-7*var1[10];
  t1544 = 2.479936e-18*t106;
  t1588 = -1.54996e-7*t962;
  t1606 = 1.124840000016e-6*t729;
  t1787 = t1040*t1782;
  t1873 = -4.e-6*t729*t1861;
  t1970 = 4.e-6*t106*t1961;
  t1972 = t1529 + t1544 + t1588 + t1606 + t1787 + t1873 + t1970;
  t1997 = 0.281210000008499*t106;
  t2013 = -0.03874900000062*t729;
  t2030 = 4.e-6*t729*t1782;
  t2034 = t1403*t1861;
  t2045 = -1.*t729*t1961;
  t2052 = t1997 + t2013 + t2030 + t2034 + t2045;
  t243 = -1. + t212 + t235;
  t344 = 4.e-6*t220;
  t502 = -4.e-6*t129;
  t532 = t344 + t502;
  t1494 = 0.15121*t1457;
  t1982 = -1.*t687*t1972;
  t2063 = t1395*t2052;
  t2074 = t1494 + t1511 + t1982 + t2063;
  t2579 = t1040*t243;
  t2583 = 4.e-6*t106*t532;
  t2588 = t2579 + t2583;
  t2605 = 4.e-6*t243*t729;
  t2639 = -1.*t532*t729;
  t2672 = t2605 + t2639;
  t2234 = -0.15121*t1457;
  t2309 = t1395*t1972;
  t2311 = t687*t2052;
  t2312 = t2234 + t1511 + t2309 + t2311;
  t277 = 4.e-6*t106*t243;
  t567 = t88*t532;
  t645 = t277 + t567;
  t2448 = -4.9936e-13*var1[10];
  t2451 = -0.038749*t106;
  t2473 = 6.19984e-13*t962;
  t2486 = -0.281210000004*t729;
  t2489 = 4.e-6*t106*t1782;
  t2506 = t729*t1861;
  t2508 = t88*t1961;
  t2518 = 0. + t2448 + t2451 + t2473 + t2486 + t2489 + t2506 + t2508;
  t2343 = t729*t878;
  t2374 = 4.e-6*t106*t1226;
  t2377 = t88*t1343;
  t2430 = 0. + t2343 + t2374 + t2377;
  t2765 = t2448 + t2451 + t2473 + t2486 + t2489 + t2506 + t2508;
  t2835 = -1.7408e-8*t174;
  t2855 = -3.999964e-6*t831;
  t2907 = t2835 + t2855;
  t2927 = 0.999991*t799;
  t2941 = t2927 + t1265;
  t2945 = -0.004352*t129;
  t2953 = 0.999991*t831;
  t2958 = t2945 + t2953;
  t3039 = -1.*t1782*t1226;
  t3040 = -1.*t878*t1861;
  t3043 = -1.*t1343*t1961;
  t3048 = t3039 + t3040 + t3043;
  t3070 = t243*t1782;
  t3071 = t532*t1961;
  t3076 = t3070 + t3071;
  t2925 = t1040*t2907;
  t2943 = -4.e-6*t729*t2941;
  t2962 = 4.e-6*t106*t2958;
  t2973 = 0. + t2925 + t2943 + t2962;
  t2984 = 4.e-6*t729*t2907;
  t2993 = t1403*t2941;
  t2995 = -1.*t729*t2958;
  t2999 = 0. + t2984 + t2993 + t2995;
  t3166 = Cos(var1[5]);
  t2101 = t1395*t1379;
  t2195 = t687*t1439;
  t2204 = 0. + t2101 + t2195;
  t1389 = -1.*t687*t1379;
  t1441 = t1395*t1439;
  t1443 = 0. + t1389 + t1441;
  t3189 = Sin(var1[5]);
  t2733 = t645*t2518;
  t2726 = t1395*t2588;
  t2728 = t687*t2672;
  t2730 = t2726 + t2728;
  t2601 = -1.*t2588*t687;
  t2674 = t1395*t2672;
  t2701 = t2601 + t2674;
  t3231 = t3166*t2730;
  t3249 = t2701*t3189;
  t3252 = t3231 + t3249;
  t2538 = -1.*t2430*t2518;
  t3203 = t3166*t2204;
  t3206 = t1443*t3189;
  t3226 = 0. + t3203 + t3206;
  t3266 = t3166*t2312;
  t3273 = t2074*t3189;
  t3283 = 0. + t3266 + t3273;
  t3332 = t3166*t2074;
  t3339 = -1.*t2312*t3189;
  t3340 = 0. + t3332 + t3339;
  t3186 = t1395*t2973;
  t3187 = t687*t2999;
  t3188 = 0. + t3186 + t3187;
  t3171 = -1.*t687*t2973;
  t3177 = t1395*t2999;
  t3179 = 0. + t3171 + t3177;
  t3165 = Cos(var1[4]);
  t3138 = 4.e-6*t106*t2907;
  t3148 = t729*t2941;
  t3149 = t88*t2958;
  t3156 = 0. + t3138 + t3148 + t3149;
  t3161 = Sin(var1[4]);
  t3181 = t3166*t3179;
  t3191 = -1.*t3188*t3189;
  t3192 = 0. + t3181 + t3191;
  t3403 = Cos(var1[3]);
  t3382 = t3166*t3188;
  t3392 = t3179*t3189;
  t3395 = 0. + t3382 + t3392;
  t3375 = Sin(var1[3]);
  t3417 = t3165*t3156;
  t3418 = -1.*t3161*t3192;
  t3422 = 0. + t3417 + t3418;
  t3354 = t3166*t1443;
  t3361 = -1.*t2204*t3189;
  t3363 = 0. + t3354 + t3361;
  t3295 = t3252*t3283;
  t3297 = t3166*t2701;
  t3319 = -1.*t2730*t3189;
  t3322 = t3297 + t3319;
  t3494 = t645*t3161;
  t3510 = t3165*t3322;
  t3512 = t3494 + t3510;
  t3353 = -1.*t3226*t3283;
  t3480 = t2430*t3161;
  t3484 = t3165*t3363;
  t3486 = 0. + t3480 + t3484;
  t3513 = t2518*t3161;
  t3520 = t3165*t3340;
  t3521 = 0. + t3513 + t3520;
  t3539 = t3165*t2518;
  t3546 = -1.*t3161*t3340;
  t3548 = 0. + t3539 + t3546;
  t3712 = t2907*t1782;
  t3714 = t1861*t2941;
  t3717 = t1961*t2958;
  t3721 = t3712 + t3714 + t3717;
  t3724 = -1.*t243*t1782;
  t3739 = -1.*t532*t1961;
  t3751 = t3724 + t3739;
  t3574 = t3165*t2430;
  t3576 = -1.*t3161*t3363;
  t3592 = 0. + t3574 + t3576;
  t3660 = -1.*t645*t2518;
  t3636 = t2518*t3156;
  t3162 = t3156*t3161;
  t3193 = t3165*t3192;
  t3200 = 0. + t3162 + t3193;
  t3903 = -1.*t3252*t3283;
  t3533 = t645*t3165;
  t3534 = -1.*t3161*t3322;
  t3536 = t3533 + t3534;
  t3927 = t3283*t3395;
  t4140 = t1782*t1226;
  t4145 = t878*t1861;
  t4146 = t1343*t1961;
  t4162 = t4140 + t4145 + t4146;
  t4119 = -1.*t2907*t1782;
  t4123 = -1.*t1861*t2941;
  t4125 = -1.*t1961*t2958;
  t4126 = t4119 + t4123 + t4125;
  t4060 = t2430*t2518;
  t4038 = -1.*t2518*t3156;
  t4271 = t3226*t3283;
  t4282 = -1.*t3283*t3395;
  p_output1[0]=t3200*var2[0] + (0. + t3395*t3403 - 1.*t3375*t3422)*var2[1] + (0. + t3375*t3395 + t3403*t3422)*var2[2] + (t3486*(t3295 + t3512*t3521 + t3536*t3548) + t3512*(t3353 - 1.*t3486*t3521 - 1.*t3548*t3592))*var2[3] + (t3226*(t2733 + t3295 + t3322*t3340) + t3252*(t2538 + t3353 - 1.*t3340*t3363))*var2[4] + (t2430*(t2074*t2701 + t2312*t2730 + t2733) + (-1.*t1443*t2074 - 1.*t2204*t2312 + t2538)*t645)*var2[5] + (-0.15121*t2973 - 0.15121*t2999 + (-1.*t1379*t1972 - 1.*t1439*t2052 - 1.*t2430*t2765)*t645 + t2430*(t1972*t2588 + t2052*t2672 + t2765*t645))*var2[9] + (1.e-6*t2907 - 0.038749*t2941 - 0.28121*t2958 - 1.*t243*t3048 - 1.*t1226*t3076 + 4.e-6*(-1.*t1343*t3076 - 1.*t3048*t532))*var2[10] - 1.9353204325022392e-7*var2[11];
  p_output1[1]=t3486*var2[0] + (0. + t3226*t3403 - 1.*t3375*t3592)*var2[1] + (0. + t3226*t3375 + t3403*t3592)*var2[2] + (t3200*(-1.*t3512*t3521 - 1.*t3536*t3548 + t3903) + t3512*(t3200*t3521 + t3422*t3548 + t3927))*var2[3] + (t3395*(-1.*t3322*t3340 + t3660 + t3903) + t3252*(t3192*t3340 + t3636 + t3927))*var2[4] + (t3156*(-1.*t2074*t2701 - 1.*t2312*t2730 + t3660) + (t2074*t3179 + t2312*t3188 + t3636)*t645)*var2[5] + (-0.15121*t1379 - 0.15121*t1439 + (t1972*t2973 + t2052*t2999 + t2765*t3156)*t645 + t3156*(-1.*t1972*t2588 - 1.*t2052*t2672 - 1.*t2765*t645))*var2[9] + (1.e-6*t1226 - 0.28121*t1343 - 1.*t243*t3721 - 1.*t2907*t3751 + 4.e-6*(-1.*t2958*t3751 - 1.*t3721*t532) - 0.038749*t878)*var2[10] + 0.29999998115510645*var2[11];
  p_output1[2]=t3512*var2[0] + (t3252*t3403 - 1.*t3375*t3536)*var2[1] + (t3252*t3375 + t3403*t3536)*var2[2] + (t3200*(t3486*t3521 + t3548*t3592 + t4271) + t3486*(-1.*t3200*t3521 - 1.*t3422*t3548 + t4282))*var2[3] + (t3395*(t3340*t3363 + t4060 + t4271) + t3226*(-1.*t3192*t3340 + t4038 + t4282))*var2[4] + (t2430*(-1.*t2074*t3179 - 1.*t2312*t3188 + t4038) + t3156*(t1443*t2074 + t2204*t2312 + t4060))*var2[5] + (-0.15121*t2588 - 0.15121*t2672 + (t1379*t1972 + t1439*t2052 + t2430*t2765)*t3156 + t2430*(-1.*t1972*t2973 - 1.*t2052*t2999 - 1.*t2765*t3156))*var2[9] + (1.e-6*t243 - 1.*t1226*t4126 - 1.*t2907*t4162 + 4.e-6*(-1.*t1343*t4126 - 1.*t2958*t4162) - 0.28121*t532)*var2[10] + 1.1914820871506078e-8*var2[11];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FrFoot_TrotStance1.hh"

namespace TrotStance1
{

void dh_FrFoot_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
