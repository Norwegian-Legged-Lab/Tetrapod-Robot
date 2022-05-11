/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:08 GMT+02:00
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
  double t1807;
  double t2240;
  double t2241;
  double t2368;
  double t1863;
  double t2277;
  double t2107;
  double t2434;
  double t2473;
  double t2221;
  double t2474;
  double t2476;
  double t2483;
  double t2492;
  double t2253;
  double t2494;
  double t2495;
  double t2521;
  double t2593;
  double t2594;
  double t2599;
  double t2600;
  double t2606;
  double t2610;
  double t2615;
  double t2619;
  double t2650;
  double t2688;
  double t2708;
  double t2747;
  double t2750;
  double t2759;
  double t2768;
  double t2769;
  double t2283;
  double t2300;
  double t2443;
  double t2444;
  double t2238;
  double t2239;
  double t2255;
  double t2256;
  double t2607;
  double t2609;
  double t2751;
  double t2757;
  double t2947;
  double t2951;
  double t2952;
  double t2967;
  double t2968;
  double t2988;
  double t2957;
  double t2958;
  double t2959;
  double t3002;
  double t3004;
  double t3005;
  double t3048;
  double t3051;
  double t3053;
  double t3060;
  double t3063;
  double t3075;
  double t3219;
  double t3231;
  double t3232;
  double t3238;
  double t3239;
  double t3240;
  double t3379;
  double t3381;
  double t3386;
  double t3552;
  double t3559;
  double t3566;
  double t3582;
  double t3583;
  double t3585;
  double t3691;
  double t3705;
  double t3707;
  double t3731;
  double t3733;
  double t3734;
  double t3801;
  double t3815;
  double t3826;
  double t4043;
  double t4081;
  double t4213;
  double t4224;
  double t4359;
  double t4371;
  double t4375;
  double t4377;
  double t4660;
  double t4664;
  double t4715;
  double t4736;
  double t4737;
  double t4749;
  double t4799;
  double t4874;
  double t4875;
  double t4879;
  double t4890;
  double t4896;
  double t4904;
  double t4905;
  double t4906;
  double t4926;
  double t4927;
  double t4934;
  double t5334;
  double t5337;
  double t5589;
  double t5645;
  double t8189;
  double t12257;
  double t12876;
  double t13124;
  double t13138;
  double t13141;
  double t13142;
  double t13188;
  double t13415;
  double t13528;
  double t13529;
  double t13531;
  double t13538;
  double t13548;
  double t13742;
  double t13743;
  double t13744;
  double t13935;
  double t13977;
  double t13978;
  double t13982;
  double t13988;
  double t13993;
  double t14106;
  double t14107;
  double t14109;
  double t14084;
  double t14085;
  double t14096;
  double t14114;
  double t14115;
  double t14116;
  double t14344;
  double t14360;
  double t14369;
  double t14374;
  double t14375;
  double t14376;
  double t14391;
  double t14392;
  double t14396;
  double t14418;
  double t14419;
  double t14427;
  double t14429;
  double t14432;
  double t14435;
  double t17158;
  double t17182;
  double t17188;
  double t17611;
  double t17614;
  double t17615;
  double t17687;
  double t17703;
  double t17767;
  double t17870;
  double t17871;
  double t17872;
  double t17875;
  double t17881;
  double t17888;
  double t18440;
  double t18441;
  double t18444;
  t1807 = Cos(var1[4]);
  t2240 = Cos(var1[5]);
  t2241 = Sin(var1[4]);
  t2368 = Sin(var1[5]);
  t1863 = Sin(var1[9]);
  t2277 = Cos(var1[9]);
  t2107 = Sin(var1[15]);
  t2434 = Cos(var1[15]);
  t2473 = Sin(var1[10]);
  t2221 = Cos(var1[10]);
  t2474 = t2277*t1807;
  t2476 = -1.*t1863*t2241*t2368;
  t2483 = t2474 + t2476;
  t2492 = Sin(var1[16]);
  t2253 = Cos(var1[16]);
  t2494 = t2434*t1807;
  t2495 = -1.*t2107*t2241*t2368;
  t2521 = t2494 + t2495;
  t2593 = Sin(var1[11]);
  t2594 = t2240*t2473*t2241;
  t2599 = t2221*t2483;
  t2600 = t2594 + t2599;
  t2606 = Cos(var1[11]);
  t2610 = -1.*t2221*t2240*t2241;
  t2615 = t2473*t2483;
  t2619 = t2610 + t2615;
  t2650 = Sin(var1[17]);
  t2688 = t2240*t2492*t2241;
  t2708 = t2253*t2521;
  t2747 = t2688 + t2708;
  t2750 = Cos(var1[17]);
  t2759 = -1.*t2253*t2240*t2241;
  t2768 = t2492*t2521;
  t2769 = t2759 + t2768;
  t2283 = -1.*t2277;
  t2300 = 1. + t2283;
  t2443 = -1.*t2434;
  t2444 = 1. + t2443;
  t2238 = -1.*t2221;
  t2239 = 1. + t2238;
  t2255 = -1.*t2253;
  t2256 = 1. + t2255;
  t2607 = -1.*t2606;
  t2609 = 1. + t2607;
  t2751 = -1.*t2750;
  t2757 = 1. + t2751;
  t2947 = t1807*t2240*t1863*t2473;
  t2951 = -1.*t2221*t1807*t2368;
  t2952 = t2947 + t2951;
  t2967 = t2221*t1807*t2240*t1863;
  t2968 = t1807*t2473*t2368;
  t2988 = t2967 + t2968;
  t2957 = t1807*t2240*t2107*t2492;
  t2958 = -1.*t2253*t1807*t2368;
  t2959 = t2957 + t2958;
  t3002 = t2253*t1807*t2240*t2107;
  t3004 = t1807*t2492*t2368;
  t3005 = t3002 + t3004;
  t3048 = -1.*t1863*t2241;
  t3051 = t2277*t1807*t2368;
  t3053 = t3048 + t3051;
  t3060 = t2277*t2241;
  t3063 = t1807*t1863*t2368;
  t3075 = t3060 + t3063;
  t3219 = -1.*t1807*t2240*t2473;
  t3231 = t2221*t3075;
  t3232 = t3219 + t3231;
  t3238 = -1.*t2221*t1807*t2240;
  t3239 = -1.*t2473*t3075;
  t3240 = t3238 + t3239;
  t3379 = t2221*t1807*t2240;
  t3381 = t2473*t3075;
  t3386 = t3379 + t3381;
  t3552 = -1.*t2107*t2241;
  t3559 = t2434*t1807*t2368;
  t3566 = t3552 + t3559;
  t3582 = t2434*t2241;
  t3583 = t1807*t2107*t2368;
  t3585 = t3582 + t3583;
  t3691 = -1.*t1807*t2240*t2492;
  t3705 = t2253*t3585;
  t3707 = t3691 + t3705;
  t3731 = -1.*t2253*t1807*t2240;
  t3733 = -1.*t2492*t3585;
  t3734 = t3731 + t3733;
  t3801 = t2253*t1807*t2240;
  t3815 = t2492*t3585;
  t3826 = t3801 + t3815;
  t4043 = Cos(var1[3]);
  t4081 = t4043*t2240*t2241;
  t4213 = Sin(var1[3]);
  t4224 = -1.*t4213*t2368;
  t4359 = t4081 + t4224;
  t4371 = -1.*t2240*t4213;
  t4375 = -1.*t4043*t2241*t2368;
  t4377 = t4371 + t4375;
  t4660 = -1.*t2277*t4043*t1807;
  t4664 = -1.*t1863*t4377;
  t4715 = t4660 + t4664;
  t4736 = -1.*t2434*t4043*t1807;
  t4737 = -1.*t2107*t4377;
  t4749 = t4736 + t4737;
  t4799 = -1.*t2473*t4359;
  t4874 = t2221*t4715;
  t4875 = t4799 + t4874;
  t4879 = t2221*t4359;
  t4890 = t2473*t4715;
  t4896 = t4879 + t4890;
  t4904 = -1.*t2492*t4359;
  t4905 = t2253*t4749;
  t4906 = t4904 + t4905;
  t4926 = t2253*t4359;
  t4927 = t2492*t4749;
  t4934 = t4926 + t4927;
  t5334 = t2277*t4213*t2241;
  t5337 = t1807*t1863*t4213*t2368;
  t5589 = t5334 + t5337;
  t5645 = t2434*t4213*t2241;
  t8189 = t1807*t2107*t4213*t2368;
  t12257 = t5645 + t8189;
  t12876 = -1.*t1807*t2240*t2473*t4213;
  t13124 = t2221*t5589;
  t13138 = t12876 + t13124;
  t13141 = t2221*t1807*t2240*t4213;
  t13142 = t2473*t5589;
  t13188 = t13141 + t13142;
  t13415 = -1.*t1807*t2240*t2492*t4213;
  t13528 = t2253*t12257;
  t13529 = t13415 + t13528;
  t13531 = t2253*t1807*t2240*t4213;
  t13538 = t2492*t12257;
  t13548 = t13531 + t13538;
  t13742 = -1.*t2240*t4213*t2241;
  t13743 = -1.*t4043*t2368;
  t13744 = t13742 + t13743;
  t13935 = t4043*t2240;
  t13977 = -1.*t4213*t2241*t2368;
  t13978 = t13935 + t13977;
  t13982 = -1.*t1863*t2473*t13744;
  t13988 = t2221*t13978;
  t13993 = t13982 + t13988;
  t14106 = -1.*t2221*t1863*t13744;
  t14107 = -1.*t2473*t13978;
  t14109 = t14106 + t14107;
  t14084 = -1.*t2107*t2492*t13744;
  t14085 = t2253*t13978;
  t14096 = t14084 + t14085;
  t14114 = -1.*t2253*t2107*t13744;
  t14115 = -1.*t2492*t13978;
  t14116 = t14114 + t14115;
  t14344 = t1807*t1863*t4213;
  t14360 = -1.*t2277*t13978;
  t14369 = t14344 + t14360;
  t14374 = -1.*t2277*t1807*t4213;
  t14375 = -1.*t1863*t13978;
  t14376 = t14374 + t14375;
  t14391 = t2240*t4213*t2241;
  t14392 = t4043*t2368;
  t14396 = t14391 + t14392;
  t14418 = -1.*t2473*t14396;
  t14419 = t2221*t14376;
  t14427 = t14418 + t14419;
  t14429 = -1.*t2221*t14396;
  t14432 = -1.*t2473*t14376;
  t14435 = t14429 + t14432;
  t17158 = t2221*t14396;
  t17182 = t2473*t14376;
  t17188 = t17158 + t17182;
  t17611 = t1807*t2107*t4213;
  t17614 = -1.*t2434*t13978;
  t17615 = t17611 + t17614;
  t17687 = -1.*t2434*t1807*t4213;
  t17703 = -1.*t2107*t13978;
  t17767 = t17687 + t17703;
  t17870 = -1.*t2492*t14396;
  t17871 = t2253*t17767;
  t17872 = t17870 + t17871;
  t17875 = -1.*t2253*t14396;
  t17881 = -1.*t2492*t17767;
  t17888 = t17875 + t17881;
  t18440 = t2253*t14396;
  t18441 = t2492*t17767;
  t18444 = t18440 + t18441;
  p_output1[0]=-0.1575*t1807*t1863 - 0.1575*t1807*t2107 + 0.325*t2239*t2240*t2241 - 0.325*t2240*t2241*t2256 + 0.1575*t2241*t2300*t2368 + 0.2255*(t1807*t1863 + t2241*t2277*t2368) + 0.2255*(t1807*t2107 + t2241*t2368*t2434) + 0.1575*t2241*t2368*t2444 + 0.325*t2473*t2483 - 0.325*t2492*t2521 - 0.575*t2593*t2600 - 0.575*t2609*t2619 - 0.0641*(t2600*t2606 + t2593*t2619) - 0.295*(-1.*t2593*t2600 + t2606*t2619) + 0.575*t2650*t2747 + 0.575*t2757*t2769 + 0.0641*(t2747*t2750 + t2650*t2769) + 0.295*(-1.*t2650*t2747 + t2750*t2769);
  p_output1[1]=-0.2255*t1807*t2240*t2277 - 0.1575*t1807*t2240*t2300 + 0.325*t1807*t2239*t2368 - 0.325*t1807*t2256*t2368 - 0.2255*t1807*t2240*t2434 - 0.1575*t1807*t2240*t2444 + 0.325*t1807*t1863*t2240*t2473 - 0.325*t1807*t2107*t2240*t2492 - 0.575*t2609*t2952 + 0.575*t2757*t2959 - 0.575*t2593*t2988 - 0.295*(t2606*t2952 - 1.*t2593*t2988) - 0.0641*(t2593*t2952 + t2606*t2988) + 0.575*t2650*t3005 + 0.295*(t2750*t2959 - 1.*t2650*t3005) + 0.0641*(t2650*t2959 + t2750*t3005);
  p_output1[2]=-0.1575*t2241*t2277 - 0.1575*t1807*t1863*t2368 + 0.325*t2473*t3053 - 0.575*t2221*t2593*t3053 - 0.575*t2473*t2609*t3053 - 0.0641*(t2473*t2593*t3053 + t2221*t2606*t3053) - 0.295*(-1.*t2221*t2593*t3053 + t2473*t2606*t3053) + 0.2255*t3075;
  p_output1[3]=-0.325*t1807*t2240*t2473 + 0.325*t2221*t3075 - 0.575*t2609*t3232 - 0.575*t2593*t3240 - 0.295*(t2606*t3232 - 1.*t2593*t3240) - 0.0641*(t2593*t3232 + t2606*t3240);
  p_output1[4]=-0.575*t2606*t3232 - 0.575*t2593*t3386 - 0.295*(-1.*t2606*t3232 - 1.*t2593*t3386) - 0.0641*(-1.*t2593*t3232 + t2606*t3386);
  p_output1[5]=-0.1575*t1807*t2107*t2368 - 0.1575*t2241*t2434 - 0.325*t2492*t3566 + 0.575*t2253*t2650*t3566 + 0.575*t2492*t2757*t3566 + 0.0641*(t2492*t2650*t3566 + t2253*t2750*t3566) + 0.295*(-1.*t2253*t2650*t3566 + t2492*t2750*t3566) + 0.2255*t3585;
  p_output1[6]=0.325*t1807*t2240*t2492 - 0.325*t2253*t3585 + 0.575*t2757*t3707 + 0.575*t2650*t3734 + 0.295*(t2750*t3707 - 1.*t2650*t3734) + 0.0641*(t2650*t3707 + t2750*t3734);
  p_output1[7]=0.575*t2750*t3707 + 0.575*t2650*t3826 + 0.295*(-1.*t2750*t3707 - 1.*t2650*t3826) + 0.0641*(-1.*t2650*t3707 + t2750*t3826);
  p_output1[8]=0.1575*t1807*t1863*t4043 + 0.1575*t1807*t2107*t4043 - 0.325*t2239*t4359 + 0.325*t2256*t4359 + 0.1575*t2300*t4377 + 0.1575*t2444*t4377 + 0.2255*(-1.*t1807*t1863*t4043 + t2277*t4377) + 0.2255*(-1.*t1807*t2107*t4043 + t2434*t4377) + 0.325*t2473*t4715 - 0.325*t2492*t4749 - 0.575*t2593*t4875 - 0.575*t2609*t4896 - 0.0641*(t2606*t4875 + t2593*t4896) - 0.295*(-1.*t2593*t4875 + t2606*t4896) + 0.575*t2650*t4906 + 0.575*t2757*t4934 + 0.0641*(t2750*t4906 + t2650*t4934) + 0.295*(-1.*t2650*t4906 + t2750*t4934);
  p_output1[9]=-0.325*t12257*t2492 - 0.575*t13138*t2593 - 0.0641*(t13188*t2593 + t13138*t2606) - 0.295*(-1.*t13138*t2593 + t13188*t2606) - 0.575*t13188*t2609 + 0.575*t13529*t2650 + 0.0641*(t13548*t2650 + t13529*t2750) + 0.295*(-1.*t13529*t2650 + t13548*t2750) + 0.575*t13548*t2757 - 0.325*t1807*t2239*t2240*t4213 - 0.1575*t1863*t2241*t4213 - 0.1575*t2107*t2241*t4213 + 0.325*t1807*t2240*t2256*t4213 - 0.1575*t1807*t2300*t2368*t4213 - 0.1575*t1807*t2368*t2444*t4213 + 0.2255*(t1863*t2241*t4213 - 1.*t1807*t2277*t2368*t4213) + 0.2255*(t2107*t2241*t4213 - 1.*t1807*t2368*t2434*t4213) + 0.325*t2473*t5589;
  p_output1[10]=-0.325*t13978*t2239 + 0.325*t13978*t2256 + 0.2255*t13744*t2277 + 0.1575*t13744*t2300 + 0.2255*t13744*t2434 + 0.1575*t13744*t2444 - 0.325*t13744*t1863*t2473 + 0.325*t13744*t2107*t2492 - 0.575*t14109*t2593 - 0.295*(-1.*t14109*t2593 + t13993*t2606) - 0.0641*(t13993*t2593 + t14109*t2606) - 0.575*t13993*t2609 + 0.575*t14116*t2650 + 0.295*(-1.*t14116*t2650 + t14096*t2750) + 0.0641*(t14096*t2650 + t14116*t2750) + 0.575*t14096*t2757;
  p_output1[11]=0.2255*t14376 + 0.1575*t13978*t1863 + 0.325*t14369*t2473 - 0.575*t14369*t2221*t2593 - 0.0641*(t14369*t2473*t2593 + t14369*t2221*t2606) - 0.295*(-1.*t14369*t2221*t2593 + t14369*t2473*t2606) - 0.575*t14369*t2473*t2609 + 0.1575*t1807*t2277*t4213;
  p_output1[12]=0.325*t14376*t2221 - 0.325*t14396*t2473 - 0.575*t14435*t2593 - 0.295*(-1.*t14435*t2593 + t14427*t2606) - 0.0641*(t14427*t2593 + t14435*t2606) - 0.575*t14427*t2609;
  p_output1[13]=-0.575*t17188*t2593 - 0.575*t14427*t2606 - 0.295*(-1.*t17188*t2593 - 1.*t14427*t2606) - 0.0641*(-1.*t14427*t2593 + t17188*t2606);
  p_output1[14]=0.2255*t17767 + 0.1575*t13978*t2107 - 0.325*t17615*t2492 + 0.575*t17615*t2253*t2650 + 0.0641*(t17615*t2492*t2650 + t17615*t2253*t2750) + 0.295*(-1.*t17615*t2253*t2650 + t17615*t2492*t2750) + 0.575*t17615*t2492*t2757 + 0.1575*t1807*t2434*t4213;
  p_output1[15]=-0.325*t17767*t2253 + 0.325*t14396*t2492 + 0.575*t17888*t2650 + 0.295*(-1.*t17888*t2650 + t17872*t2750) + 0.0641*(t17872*t2650 + t17888*t2750) + 0.575*t17872*t2757;
  p_output1[16]=0.575*t18444*t2650 + 0.575*t17872*t2750 + 0.295*(-1.*t18444*t2650 - 1.*t17872*t2750) + 0.0641*(-1.*t17872*t2650 + t18444*t2750);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
