/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:50 GMT+01:00
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
  double t245;
  double t407;
  double t416;
  double t613;
  double t42;
  double t420;
  double t690;
  double t822;
  double t1408;
  double t1409;
  double t1562;
  double t1564;
  double t1584;
  double t1595;
  double t55;
  double t213;
  double t1776;
  double t1779;
  double t1780;
  double t2176;
  double t1974;
  double t1991;
  double t2017;
  double t2088;
  double t2126;
  double t2133;
  double t2136;
  double t1951;
  double t2212;
  double t2221;
  double t2227;
  double t2230;
  double t2287;
  double t2353;
  double t1852;
  double t1910;
  double t1924;
  double t2477;
  double t2482;
  double t2491;
  double t2512;
  double t2567;
  double t2574;
  double t2575;
  double t2585;
  double t2595;
  double t2613;
  double t2615;
  double t2620;
  double t2621;
  double t2671;
  double t2686;
  double t2707;
  double t2721;
  double t2787;
  double t2798;
  double t2814;
  double t2820;
  double t2447;
  double t2926;
  double t2952;
  double t2960;
  double t2969;
  double t3001;
  double t3006;
  double t3018;
  double t3024;
  double t3035;
  double t3037;
  double t2433;
  double t2438;
  double t2439;
  double t2150;
  double t2356;
  double t2376;
  double t1238;
  double t1604;
  double t1797;
  double t1847;
  double t2406;
  double t2464;
  double t2465;
  double t3102;
  double t2859;
  double t2877;
  double t2883;
  double t2782;
  double t2842;
  double t2843;
  double t3148;
  double t2494;
  double t2601;
  double t2624;
  double t2625;
  double t2846;
  double t2903;
  double t2907;
  double t3069;
  double t3071;
  double t3076;
  double t3021;
  double t3041;
  double t3051;
  double t2931;
  double t2973;
  double t2975;
  double t3067;
  double t3080;
  double t3082;
  double t3109;
  double t3122;
  double t3125;
  double t3158;
  double t3160;
  double t3168;
  double t3194;
  double t3233;
  double t3234;
  double t3241;
  double t3243;
  double t3258;
  double t3265;
  double t3267;
  double t3270;
  double t3275;
  double t3286;
  double t3291;
  double t2629;
  double t2911;
  double t2913;
  double t3401;
  double t3403;
  double t3414;
  double t3416;
  double t3423;
  double t3425;
  double t3431;
  double t3444;
  double t3448;
  double t3460;
  double t3461;
  double t3489;
  double t3491;
  double t3492;
  double t3493;
  double t3502;
  double t3503;
  double t3343;
  double t3349;
  double t3351;
  double t3356;
  double t3371;
  double t3376;
  double t3392;
  double t3436;
  double t3471;
  double t3506;
  double t3509;
  double t3522;
  double t3523;
  double t3527;
  double t3528;
  double t3531;
  double t3532;
  double t2990;
  double t3084;
  double t3093;
  double t3566;
  double t3569;
  double t3579;
  double t3581;
  double t3350;
  double t3519;
  double t3536;
  double t3543;
  double t3602;
  double t3604;
  double t3606;
  double t3607;
  double t3610;
  double t3611;
  double t3614;
  double t3615;
  double t3628;
  double t3639;
  double t3648;
  double t3548;
  double t3594;
  double t3595;
  double t3621;
  double t3649;
  double t3652;
  double t3658;
  double t3664;
  double t3665;
  double t1867;
  double t2475;
  double t2476;
  double t3597;
  double t3673;
  double t3697;
  double t3732;
  double t3762;
  double t3772;
  double t3811;
  double t3791;
  double t3838;
  double t3829;
  double t3865;
  double t3853;
  double t3971;
  double t4099;
  double t4102;
  double t4108;
  double t4113;
  double t4115;
  double t4118;
  double t4120;
  double t4144;
  double t4145;
  double t4146;
  double t4147;
  double t4163;
  double t4175;
  double t4178;
  double t4206;
  double t4208;
  double t4209;
  double t4216;
  double t4198;
  double t4199;
  double t4200;
  double t4202;
  t245 = Cos(var1[11]);
  t407 = -1.*t245;
  t416 = 1. + t407;
  t613 = Sin(var1[11]);
  t42 = Cos(var1[10]);
  t420 = -1.7408e-8*t416;
  t690 = -3.999964e-6*t613;
  t822 = t420 + t690;
  t1408 = Sin(var1[10]);
  t1409 = -1.000000000016*t416;
  t1562 = 1. + t1409;
  t1564 = 0.999991*t1562;
  t1584 = 0.004352*t613;
  t1595 = t1564 + t1584;
  t55 = -1.*t42;
  t213 = 1. + t55;
  t1776 = -0.004352*t245;
  t1779 = 0.999991*t613;
  t1780 = t1776 + t1779;
  t2176 = Cos(var1[9]);
  t1974 = -1. + t42;
  t1991 = 1.6e-11*t1974;
  t2017 = 1. + t1991;
  t2088 = t2017*t822;
  t2126 = -4.e-6*t1408*t1595;
  t2133 = 4.e-6*t213*t1780;
  t2136 = 0. + t2088 + t2126 + t2133;
  t1951 = Sin(var1[9]);
  t2212 = 4.e-6*t1408*t822;
  t2221 = -1.000000000016*t213;
  t2227 = 1. + t2221;
  t2230 = t2227*t1595;
  t2287 = -1.*t1408*t1780;
  t2353 = 0. + t2212 + t2230 + t2287;
  t1852 = Sin(var1[4]);
  t1910 = Cos(var1[4]);
  t1924 = Cos(var1[5]);
  t2477 = 0.004352*t1562;
  t2482 = -0.9999910000159999*t613;
  t2491 = t2477 + t2482;
  t2512 = 1.6e-11*t416;
  t2567 = -1. + t2512;
  t2574 = 4.e-6*t2567;
  t2575 = 3.999964e-6*t416;
  t2585 = -1.7408e-8*t613;
  t2595 = t2574 + t2575 + t2585;
  t2613 = -1. + t245;
  t2615 = 1.6e-11*t2613;
  t2620 = 0.999991*t245;
  t2621 = t2615 + t2620 + t1584;
  t2671 = -4.e-6*t1408*t2491;
  t2686 = t2017*t2595;
  t2707 = 4.e-6*t213*t2621;
  t2721 = 0. + t2671 + t2686 + t2707;
  t2787 = t2227*t2491;
  t2798 = 4.e-6*t1408*t2595;
  t2814 = -1.*t1408*t2621;
  t2820 = 0. + t2787 + t2798 + t2814;
  t2447 = Sin(var1[5]);
  t2926 = -1. + t2512 + t2615;
  t2952 = 4.e-6*t2613;
  t2960 = -4.e-6*t245;
  t2969 = t2952 + t2960;
  t3001 = t2017*t2926;
  t3006 = 4.e-6*t213*t2969;
  t3018 = t3001 + t3006;
  t3024 = 4.e-6*t2926*t1408;
  t3035 = -1.*t2969*t1408;
  t3037 = t3024 + t3035;
  t2433 = t2176*t2136;
  t2438 = t1951*t2353;
  t2439 = 0. + t2433 + t2438;
  t2150 = -1.*t1951*t2136;
  t2356 = t2176*t2353;
  t2376 = 0. + t2150 + t2356;
  t1238 = 4.e-6*t213*t822;
  t1604 = t1408*t1595;
  t1797 = t42*t1780;
  t1847 = 0. + t1238 + t1604 + t1797;
  t2406 = t1924*t2376;
  t2464 = -1.*t2439*t2447;
  t2465 = 0. + t2406 + t2464;
  t3102 = Cos(var1[3]);
  t2859 = t2176*t2721;
  t2877 = t1951*t2820;
  t2883 = 0. + t2859 + t2877;
  t2782 = -1.*t1951*t2721;
  t2842 = t2176*t2820;
  t2843 = 0. + t2782 + t2842;
  t3148 = Sin(var1[3]);
  t2494 = t1408*t2491;
  t2601 = 4.e-6*t213*t2595;
  t2624 = t42*t2621;
  t2625 = 0. + t2494 + t2601 + t2624;
  t2846 = t1924*t2843;
  t2903 = -1.*t2883*t2447;
  t2907 = 0. + t2846 + t2903;
  t3069 = t2176*t3018;
  t3071 = t1951*t3037;
  t3076 = t3069 + t3071;
  t3021 = -1.*t3018*t1951;
  t3041 = t2176*t3037;
  t3051 = t3021 + t3041;
  t2931 = 4.e-6*t213*t2926;
  t2973 = t42*t2969;
  t2975 = t2931 + t2973;
  t3067 = t1924*t3051;
  t3080 = -1.*t3076*t2447;
  t3082 = t3067 + t3080;
  t3109 = t1924*t2439;
  t3122 = t2376*t2447;
  t3125 = 0. + t3109 + t3122;
  t3158 = t1910*t1847;
  t3160 = -1.*t1852*t2465;
  t3168 = 0. + t3158 + t3160;
  t3194 = t1924*t2883;
  t3233 = t2843*t2447;
  t3234 = 0. + t3194 + t3233;
  t3241 = t1910*t2625;
  t3243 = -1.*t1852*t2907;
  t3258 = 0. + t3241 + t3243;
  t3265 = t1924*t3076;
  t3267 = t3051*t2447;
  t3270 = t3265 + t3267;
  t3275 = t2975*t1910;
  t3286 = -1.*t1852*t3082;
  t3291 = t3275 + t3286;
  t2629 = t2625*t1852;
  t2911 = t1910*t2907;
  t2913 = 0. + t2629 + t2911;
  t3401 = -1.26e-8*var1[11];
  t3403 = 1. + t2615;
  t3414 = -0.14871*t3403;
  t3416 = -1.64779999997447e-7*t416;
  t3423 = -1.59556e-7*t2613;
  t3425 = -1.199987999968e-6*t613;
  t3431 = t3401 + t3414 + t3416 + t3423 + t3425;
  t3444 = 0.803147*t1562;
  t3448 = 0.50315000001605*t416;
  t3460 = 0.00130540515936178*t613;
  t3461 = t3444 + t3448 + t3460;
  t3489 = -5.04e-14*var1[11];
  t3491 = -0.03988959484*t416;
  t3492 = 6.38224e-13*t2613;
  t3493 = -0.041195*t245;
  t3502 = 0.299996999992*t613;
  t3503 = t3489 + t3491 + t3492 + t3493 + t3502;
  t3343 = -1.*t2176;
  t3349 = 1. + t3343;
  t3351 = -0.15121*t1951;
  t3356 = -1.2484e-7*var1[10];
  t3371 = 2.479936e-18*t213;
  t3376 = -1.54996e-7*t1974;
  t3392 = 1.124840000016e-6*t1408;
  t3436 = t2017*t3431;
  t3471 = -4.e-6*t1408*t3461;
  t3506 = 4.e-6*t213*t3503;
  t3509 = t3356 + t3371 + t3376 + t3392 + t3436 + t3471 + t3506;
  t3522 = 0.281210000008499*t213;
  t3523 = -0.03874900000062*t1408;
  t3527 = 4.e-6*t1408*t3431;
  t3528 = t2227*t3461;
  t3531 = -1.*t1408*t3503;
  t3532 = t3522 + t3523 + t3527 + t3528 + t3531;
  t2990 = t2975*t1852;
  t3084 = t1910*t3082;
  t3093 = t2990 + t3084;
  t3566 = 0.15121*t3349;
  t3569 = -1.*t1951*t3509;
  t3579 = t2176*t3532;
  t3581 = t3566 + t3351 + t3569 + t3579;
  t3350 = -0.15121*t3349;
  t3519 = t2176*t3509;
  t3536 = t1951*t3532;
  t3543 = t3350 + t3351 + t3519 + t3536;
  t3602 = -4.9936e-13*var1[10];
  t3604 = -0.038749*t213;
  t3606 = 6.19984e-13*t1974;
  t3607 = -0.281210000004*t1408;
  t3610 = 4.e-6*t213*t3431;
  t3611 = t1408*t3461;
  t3614 = t42*t3503;
  t3615 = 0. + t3602 + t3604 + t3606 + t3607 + t3610 + t3611 + t3614;
  t3628 = t1924*t3581;
  t3639 = -1.*t3543*t2447;
  t3648 = 0. + t3628 + t3639;
  t3548 = t1924*t3543;
  t3594 = t3581*t2447;
  t3595 = 0. + t3548 + t3594;
  t3621 = t3615*t1852;
  t3649 = t1910*t3648;
  t3652 = 0. + t3621 + t3649;
  t3658 = t1910*t3615;
  t3664 = -1.*t1852*t3648;
  t3665 = 0. + t3658 + t3664;
  t1867 = t1847*t1852;
  t2475 = t1910*t2465;
  t2476 = 0. + t1867 + t2475;
  t3597 = t3270*t3595;
  t3673 = -1.*t3234*t3595;
  t3697 = -1.*t3270*t3595;
  t3732 = t3595*t3125;
  t3762 = t3234*t3595;
  t3772 = -1.*t3595*t3125;
  t3811 = -1.*t2625*t3615;
  t3791 = t2975*t3615;
  t3838 = t3615*t1847;
  t3829 = -1.*t2975*t3615;
  t3865 = -1.*t3615*t1847;
  t3853 = t2625*t3615;
  t3971 = t3602 + t3604 + t3606 + t3607 + t3610 + t3611 + t3614;
  t4099 = -1.*t3431*t2595;
  t4102 = -1.*t2491*t3461;
  t4108 = -1.*t2621*t3503;
  t4113 = t4099 + t4102 + t4108;
  t4115 = t2926*t3431;
  t4118 = t2969*t3503;
  t4120 = t4115 + t4118;
  t4144 = t822*t3431;
  t4145 = t3461*t1595;
  t4146 = t3503*t1780;
  t4147 = t4144 + t4145 + t4146;
  t4163 = -1.*t2926*t3431;
  t4175 = -1.*t2969*t3503;
  t4178 = t4163 + t4175;
  t4206 = t3431*t2595;
  t4208 = t2491*t3461;
  t4209 = t2621*t3503;
  t4216 = t4206 + t4208 + t4209;
  t4198 = -1.*t822*t3431;
  t4199 = -1.*t3461*t1595;
  t4200 = -1.*t3503*t1780;
  t4202 = t4198 + t4199 + t4200;
  p_output1[0]=t2476;
  p_output1[1]=t2913;
  p_output1[2]=t3093;
  p_output1[3]=0. + t3102*t3125 - 1.*t3148*t3168;
  p_output1[4]=0. + t3102*t3234 - 1.*t3148*t3258;
  p_output1[5]=t3102*t3270 - 1.*t3148*t3291;
  p_output1[6]=0. + t3125*t3148 + t3102*t3168;
  p_output1[7]=0. + t3148*t3234 + t3102*t3258;
  p_output1[8]=t3148*t3270 + t3102*t3291;
  p_output1[9]=t2913*(t3597 + t3093*t3652 + t3291*t3665) + t3093*(-1.*t2913*t3652 - 1.*t3258*t3665 + t3673);
  p_output1[10]=t2476*(-1.*t3093*t3652 - 1.*t3291*t3665 + t3697) + t3093*(t2476*t3652 + t3168*t3665 + t3732);
  p_output1[11]=t2476*(t2913*t3652 + t3258*t3665 + t3762) + t2913*(-1.*t2476*t3652 - 1.*t3168*t3665 + t3772);
  p_output1[12]=t3234*(t3597 + t3082*t3648 + t3791) + t3270*(-1.*t2907*t3648 + t3673 + t3811);
  p_output1[13]=t3125*(-1.*t3082*t3648 + t3697 + t3829) + t3270*(t2465*t3648 + t3732 + t3838);
  p_output1[14]=t3125*(t2907*t3648 + t3762 + t3853) + t3234*(-1.*t2465*t3648 + t3772 + t3865);
  p_output1[15]=t2625*(t3076*t3543 + t3051*t3581 + t3791) + t2975*(-1.*t2883*t3543 - 1.*t2843*t3581 + t3811);
  p_output1[16]=t1847*(-1.*t3076*t3543 - 1.*t3051*t3581 + t3829) + t2975*(t2439*t3543 + t2376*t3581 + t3838);
  p_output1[17]=t1847*(t2883*t3543 + t2843*t3581 + t3853) + t2625*(-1.*t2439*t3543 - 1.*t2376*t3581 + t3865);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121*t2136 - 0.15121*t2353 + t2975*(-1.*t2721*t3509 - 1.*t2820*t3532 - 1.*t2625*t3971) + t2625*(t3018*t3509 + t3037*t3532 + t2975*t3971);
  p_output1[28]=-0.15121*t2721 - 0.15121*t2820 + t2975*(t2136*t3509 + t2353*t3532 + t1847*t3971) + t1847*(-1.*t3018*t3509 - 1.*t3037*t3532 - 1.*t2975*t3971);
  p_output1[29]=-0.15121*t3018 - 0.15121*t3037 + t2625*(-1.*t2136*t3509 - 1.*t2353*t3532 - 1.*t1847*t3971) + t1847*(t2721*t3509 + t2820*t3532 + t2625*t3971);
  p_output1[30]=-0.038749*t1595 - 0.28121*t1780 - 1.*t2926*t4113 - 1.*t2595*t4120 + 4.e-6*(-1.*t2969*t4113 - 1.*t2621*t4120) + 1.e-6*t822;
  p_output1[31]=-0.038749*t2491 + 1.e-6*t2595 - 0.28121*t2621 - 1.*t2926*t4147 + 4.e-6*(-1.*t2969*t4147 - 1.*t1780*t4178) - 1.*t4178*t822;
  p_output1[32]=1.e-6*t2926 - 0.28121*t2969 - 1.*t2595*t4202 + 4.e-6*(-1.*t2621*t4202 - 1.*t1780*t4216) - 1.*t4216*t822;
  p_output1[33]=-1.9353204325022392e-7;
  p_output1[34]=0.29999998115510645;
  p_output1[35]=1.1914820871506078e-8;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
