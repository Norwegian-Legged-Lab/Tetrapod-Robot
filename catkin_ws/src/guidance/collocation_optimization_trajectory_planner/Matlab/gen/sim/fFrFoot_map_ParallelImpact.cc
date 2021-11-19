/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:04 GMT+01:00
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
  double t131;
  double t226;
  double t279;
  double t288;
  double t23;
  double t284;
  double t321;
  double t375;
  double t430;
  double t444;
  double t446;
  double t483;
  double t505;
  double t532;
  double t93;
  double t111;
  double t641;
  double t680;
  double t765;
  double t1211;
  double t907;
  double t965;
  double t1014;
  double t1023;
  double t1052;
  double t1067;
  double t1118;
  double t903;
  double t1217;
  double t1330;
  double t1374;
  double t1439;
  double t1500;
  double t1523;
  double t878;
  double t1639;
  double t1736;
  double t1754;
  double t1183;
  double t1533;
  double t1548;
  double t1755;
  double t869;
  double t429;
  double t626;
  double t768;
  double t799;
  double t831;
  double t1552;
  double t1766;
  double t1770;
  double t1942;
  double t1863;
  double t1891;
  double t1905;
  double t1826;
  double t2008;
  double t2012;
  double t2023;
  double t2141;
  double t2155;
  double t2156;
  double t2210;
  double t2211;
  double t2216;
  double t2225;
  double t2226;
  double t2251;
  double t2270;
  double t2320;
  double t2334;
  double t2347;
  double t2370;
  double t2377;
  double t2396;
  double t2414;
  double t2418;
  double t2433;
  double t2466;
  double t2472;
  double t2741;
  double t2745;
  double t2756;
  double t2771;
  double t2744;
  double t2774;
  double t2775;
  double t2783;
  double t2797;
  double t2807;
  double t2966;
  double t2968;
  double t2977;
  double t2978;
  double t2980;
  double t2981;
  double t2988;
  double t3000;
  double t3002;
  double t3005;
  double t3021;
  double t3027;
  double t3035;
  double t3040;
  double t3046;
  double t3051;
  double t3053;
  double t2909;
  double t2920;
  double t2935;
  double t2936;
  double t2939;
  double t2956;
  double t2957;
  double t2996;
  double t3022;
  double t3065;
  double t3068;
  double t3072;
  double t3076;
  double t3079;
  double t3080;
  double t3102;
  double t3103;
  double t2818;
  double t2836;
  double t2863;
  double t2781;
  double t2810;
  double t2811;
  double t3122;
  double t3123;
  double t3124;
  double t3126;
  double t2929;
  double t3070;
  double t3114;
  double t3119;
  double t3149;
  double t3155;
  double t3161;
  double t3173;
  double t3180;
  double t3196;
  double t3208;
  double t3209;
  double t3211;
  double t3212;
  double t3224;
  double t3226;
  double t3229;
  double t3230;
  double t3250;
  double t3251;
  double t3256;
  double t3167;
  double t3199;
  double t3202;
  double t2501;
  double t2502;
  double t2549;
  double t2417;
  double t2477;
  double t2479;
  double t3120;
  double t3130;
  double t3146;
  double t2199;
  double t2267;
  double t2354;
  double t2362;
  double t2366;
  double t2495;
  double t2562;
  double t2606;
  double t2637;
  double t2683;
  double t3231;
  double t3267;
  double t3268;
  double t3293;
  double t3297;
  double t3310;
  double t3332;
  double t3334;
  double t3335;
  double t2816;
  double t2878;
  double t2890;
  double t3147;
  double t3337;
  double t3404;
  double t3387;
  double t3489;
  double t3552;
  double t3558;
  double t3559;
  double t3565;
  double t3584;
  double t3598;
  double t3601;
  double t3356;
  double t3358;
  double t3360;
  double t865;
  double t1814;
  double t1819;
  double t3279;
  double t3282;
  double t3290;
  double t3691;
  double t3715;
  double t3790;
  double t3764;
  double t3882;
  double t3883;
  double t3887;
  double t3888;
  double t3890;
  double t3891;
  double t3892;
  double t3951;
  double t3961;
  double t4005;
  double t3992;
  double t4128;
  double t4129;
  double t4133;
  double t4140;
  double t4115;
  double t4116;
  double t4119;
  double t4121;
  t131 = Cos(var1[11]);
  t226 = -1.*t131;
  t279 = 1. + t226;
  t288 = Sin(var1[11]);
  t23 = Cos(var1[10]);
  t284 = -1.7408e-8*t279;
  t321 = -3.999964e-6*t288;
  t375 = t284 + t321;
  t430 = Sin(var1[10]);
  t444 = -1.000000000016*t279;
  t446 = 1. + t444;
  t483 = 0.999991*t446;
  t505 = 0.004352*t288;
  t532 = t483 + t505;
  t93 = -1.*t23;
  t111 = 1. + t93;
  t641 = -0.004352*t131;
  t680 = 0.999991*t288;
  t765 = t641 + t680;
  t1211 = Cos(var1[9]);
  t907 = -1. + t23;
  t965 = 1.6e-11*t907;
  t1014 = 1. + t965;
  t1023 = t1014*t375;
  t1052 = -4.e-6*t430*t532;
  t1067 = 4.e-6*t111*t765;
  t1118 = 0. + t1023 + t1052 + t1067;
  t903 = Sin(var1[9]);
  t1217 = 4.e-6*t430*t375;
  t1330 = -1.000000000016*t111;
  t1374 = 1. + t1330;
  t1439 = t1374*t532;
  t1500 = -1.*t430*t765;
  t1523 = 0. + t1217 + t1439 + t1500;
  t878 = Cos(var1[5]);
  t1639 = t1211*t1118;
  t1736 = t903*t1523;
  t1754 = 0. + t1639 + t1736;
  t1183 = -1.*t903*t1118;
  t1533 = t1211*t1523;
  t1548 = 0. + t1183 + t1533;
  t1755 = Sin(var1[5]);
  t869 = Cos(var1[4]);
  t429 = 4.e-6*t111*t375;
  t626 = t430*t532;
  t768 = t23*t765;
  t799 = 0. + t429 + t626 + t768;
  t831 = Sin(var1[4]);
  t1552 = t878*t1548;
  t1766 = -1.*t1754*t1755;
  t1770 = 0. + t1552 + t1766;
  t1942 = Sin(var1[3]);
  t1863 = t878*t1754;
  t1891 = t1548*t1755;
  t1905 = 0. + t1863 + t1891;
  t1826 = Cos(var1[3]);
  t2008 = t869*t799;
  t2012 = -1.*t831*t1770;
  t2023 = 0. + t2008 + t2012;
  t2141 = 0.004352*t446;
  t2155 = -0.9999910000159999*t288;
  t2156 = t2141 + t2155;
  t2210 = 1.6e-11*t279;
  t2211 = -1. + t2210;
  t2216 = 4.e-6*t2211;
  t2225 = 3.999964e-6*t279;
  t2226 = -1.7408e-8*t288;
  t2251 = t2216 + t2225 + t2226;
  t2270 = -1. + t131;
  t2320 = 1.6e-11*t2270;
  t2334 = 0.999991*t131;
  t2347 = t2320 + t2334 + t505;
  t2370 = -4.e-6*t430*t2156;
  t2377 = t1014*t2251;
  t2396 = 4.e-6*t111*t2347;
  t2414 = 0. + t2370 + t2377 + t2396;
  t2418 = t1374*t2156;
  t2433 = 4.e-6*t430*t2251;
  t2466 = -1.*t430*t2347;
  t2472 = 0. + t2418 + t2433 + t2466;
  t2741 = -1. + t2210 + t2320;
  t2745 = 4.e-6*t2270;
  t2756 = -4.e-6*t131;
  t2771 = t2745 + t2756;
  t2744 = t1014*t2741;
  t2774 = 4.e-6*t111*t2771;
  t2775 = t2744 + t2774;
  t2783 = 4.e-6*t2741*t430;
  t2797 = -1.*t2771*t430;
  t2807 = t2783 + t2797;
  t2966 = -1.26e-8*var1[11];
  t2968 = 1. + t2320;
  t2977 = -0.14871*t2968;
  t2978 = -1.64779999997447e-7*t279;
  t2980 = -1.59556e-7*t2270;
  t2981 = -1.199987999968e-6*t288;
  t2988 = t2966 + t2977 + t2978 + t2980 + t2981;
  t3000 = 0.803147*t446;
  t3002 = 0.50315000001605*t279;
  t3005 = 0.00130540515936178*t288;
  t3021 = t3000 + t3002 + t3005;
  t3027 = -5.04e-14*var1[11];
  t3035 = -0.03988959484*t279;
  t3040 = 6.38224e-13*t2270;
  t3046 = -0.041195*t131;
  t3051 = 0.299996999992*t288;
  t3053 = t3027 + t3035 + t3040 + t3046 + t3051;
  t2909 = -1.*t1211;
  t2920 = 1. + t2909;
  t2935 = -0.15121*t903;
  t2936 = -1.2484e-7*var1[10];
  t2939 = 2.479936e-18*t111;
  t2956 = -1.54996e-7*t907;
  t2957 = 1.124840000016e-6*t430;
  t2996 = t1014*t2988;
  t3022 = -4.e-6*t430*t3021;
  t3065 = 4.e-6*t111*t3053;
  t3068 = t2936 + t2939 + t2956 + t2957 + t2996 + t3022 + t3065;
  t3072 = 0.281210000008499*t111;
  t3076 = -0.03874900000062*t430;
  t3079 = 4.e-6*t430*t2988;
  t3080 = t1374*t3021;
  t3102 = -1.*t430*t3053;
  t3103 = t3072 + t3076 + t3079 + t3080 + t3102;
  t2818 = -1.*t2775*t903;
  t2836 = t1211*t2807;
  t2863 = t2818 + t2836;
  t2781 = t1211*t2775;
  t2810 = t903*t2807;
  t2811 = t2781 + t2810;
  t3122 = 0.15121*t2920;
  t3123 = -1.*t903*t3068;
  t3124 = t1211*t3103;
  t3126 = t3122 + t2935 + t3123 + t3124;
  t2929 = -0.15121*t2920;
  t3070 = t1211*t3068;
  t3114 = t903*t3103;
  t3119 = t2929 + t2935 + t3070 + t3114;
  t3149 = 4.e-6*t111*t2741;
  t3155 = t23*t2771;
  t3161 = t3149 + t3155;
  t3173 = t878*t2863;
  t3180 = -1.*t2811*t1755;
  t3196 = t3173 + t3180;
  t3208 = -4.9936e-13*var1[10];
  t3209 = -0.038749*t111;
  t3211 = 6.19984e-13*t907;
  t3212 = -0.281210000004*t430;
  t3224 = 4.e-6*t111*t2988;
  t3226 = t430*t3021;
  t3229 = t23*t3053;
  t3230 = 0. + t3208 + t3209 + t3211 + t3212 + t3224 + t3226 + t3229;
  t3250 = t878*t3126;
  t3251 = -1.*t3119*t1755;
  t3256 = 0. + t3250 + t3251;
  t3167 = t3161*t831;
  t3199 = t869*t3196;
  t3202 = t3167 + t3199;
  t2501 = t1211*t2414;
  t2502 = t903*t2472;
  t2549 = 0. + t2501 + t2502;
  t2417 = -1.*t903*t2414;
  t2477 = t1211*t2472;
  t2479 = 0. + t2417 + t2477;
  t3120 = t878*t3119;
  t3130 = t3126*t1755;
  t3146 = 0. + t3120 + t3130;
  t2199 = t430*t2156;
  t2267 = 4.e-6*t111*t2251;
  t2354 = t23*t2347;
  t2362 = 0. + t2199 + t2267 + t2354;
  t2366 = t2362*t831;
  t2495 = t878*t2479;
  t2562 = -1.*t2549*t1755;
  t2606 = 0. + t2495 + t2562;
  t2637 = t869*t2606;
  t2683 = 0. + t2366 + t2637;
  t3231 = t3230*t831;
  t3267 = t869*t3256;
  t3268 = 0. + t3231 + t3267;
  t3293 = t869*t3230;
  t3297 = -1.*t831*t3256;
  t3310 = 0. + t3293 + t3297;
  t3332 = t878*t2549;
  t3334 = t2479*t1755;
  t3335 = 0. + t3332 + t3334;
  t2816 = t878*t2811;
  t2878 = t2863*t1755;
  t2890 = t2816 + t2878;
  t3147 = t2890*t3146;
  t3337 = -1.*t3335*t3146;
  t3404 = -1.*t2362*t3230;
  t3387 = t3161*t3230;
  t3489 = t3208 + t3209 + t3211 + t3212 + t3224 + t3226 + t3229;
  t3552 = -1.*t2988*t2251;
  t3558 = -1.*t2156*t3021;
  t3559 = -1.*t2347*t3053;
  t3565 = t3552 + t3558 + t3559;
  t3584 = t2741*t2988;
  t3598 = t2771*t3053;
  t3601 = t3584 + t3598;
  t3356 = t869*t2362;
  t3358 = -1.*t831*t2606;
  t3360 = 0. + t3356 + t3358;
  t865 = t799*t831;
  t1814 = t869*t1770;
  t1819 = 0. + t865 + t1814;
  t3279 = t3161*t869;
  t3282 = -1.*t831*t3196;
  t3290 = t3279 + t3282;
  t3691 = -1.*t2890*t3146;
  t3715 = t3146*t1905;
  t3790 = t3230*t799;
  t3764 = -1.*t3161*t3230;
  t3882 = t375*t2988;
  t3883 = t3021*t532;
  t3887 = t3053*t765;
  t3888 = t3882 + t3883 + t3887;
  t3890 = -1.*t2741*t2988;
  t3891 = -1.*t2771*t3053;
  t3892 = t3890 + t3891;
  t3951 = t3335*t3146;
  t3961 = -1.*t3146*t1905;
  t4005 = -1.*t3230*t799;
  t3992 = t2362*t3230;
  t4128 = t2988*t2251;
  t4129 = t2156*t3021;
  t4133 = t2347*t3053;
  t4140 = t4128 + t4129 + t4133;
  t4115 = -1.*t375*t2988;
  t4116 = -1.*t3021*t532;
  t4119 = -1.*t3053*t765;
  t4121 = t4115 + t4116 + t4119;
  p_output1[0]=t1819;
  p_output1[1]=0. + t1826*t1905 - 1.*t1942*t2023;
  p_output1[2]=0. + t1905*t1942 + t1826*t2023;
  p_output1[3]=t2683*(t3147 + t3202*t3268 + t3290*t3310) + t3202*(-1.*t2683*t3268 + t3337 - 1.*t3310*t3360);
  p_output1[4]=t3335*(t3147 + t3196*t3256 + t3387) + t2890*(-1.*t2606*t3256 + t3337 + t3404);
  p_output1[5]=t2362*(t2811*t3119 + t2863*t3126 + t3387) + t3161*(-1.*t2549*t3119 - 1.*t2479*t3126 + t3404);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.15121*t1118 - 0.15121*t1523 + t3161*(-1.*t2414*t3068 - 1.*t2472*t3103 - 1.*t2362*t3489) + t2362*(t2775*t3068 + t2807*t3103 + t3161*t3489);
  p_output1[10]=-1.*t2741*t3565 - 1.*t2251*t3601 + 4.e-6*(-1.*t2771*t3565 - 1.*t2347*t3601) + 1.e-6*t375 - 0.038749*t532 - 0.28121*t765;
  p_output1[11]=-1.9353204325022392e-7;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2683;
  p_output1[19]=0. + t1826*t3335 - 1.*t1942*t3360;
  p_output1[20]=0. + t1942*t3335 + t1826*t3360;
  p_output1[21]=t1819*(-1.*t3202*t3268 - 1.*t3290*t3310 + t3691) + t3202*(t1819*t3268 + t2023*t3310 + t3715);
  p_output1[22]=t1905*(-1.*t3196*t3256 + t3691 + t3764) + t2890*(t1770*t3256 + t3715 + t3790);
  p_output1[23]=t3161*(t1754*t3119 + t1548*t3126 + t3790) + (-1.*t2811*t3119 - 1.*t2863*t3126 + t3764)*t799;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121*t2414 - 0.15121*t2472 + (-1.*t2775*t3068 - 1.*t2807*t3103 - 1.*t3161*t3489)*t799 + t3161*(t1118*t3068 + t1523*t3103 + t3489*t799);
  p_output1[28]=-0.038749*t2156 + 1.e-6*t2251 - 0.28121*t2347 - 1.*t2741*t3888 - 1.*t375*t3892 + 4.e-6*(-1.*t2771*t3888 - 1.*t3892*t765);
  p_output1[29]=0.29999998115510645;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3202;
  p_output1[37]=t1826*t2890 - 1.*t1942*t3290;
  p_output1[38]=t1942*t2890 + t1826*t3290;
  p_output1[39]=t1819*(t2683*t3268 + t3310*t3360 + t3951) + t2683*(-1.*t1819*t3268 - 1.*t2023*t3310 + t3961);
  p_output1[40]=t1905*(t2606*t3256 + t3951 + t3992) + t3335*(-1.*t1770*t3256 + t3961 + t4005);
  p_output1[41]=t2362*(-1.*t1754*t3119 - 1.*t1548*t3126 + t4005) + (t2549*t3119 + t2479*t3126 + t3992)*t799;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t2775 - 0.15121*t2807 + (t2414*t3068 + t2472*t3103 + t2362*t3489)*t799 + t2362*(-1.*t1118*t3068 - 1.*t1523*t3103 - 1.*t3489*t799);
  p_output1[46]=1.e-6*t2741 - 0.28121*t2771 - 1.*t2251*t4121 - 1.*t375*t4140 + 4.e-6*(-1.*t2347*t4121 - 1.*t4140*t765);
  p_output1[47]=1.1914820871506078e-8;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
