/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:02 GMT+02:00
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
  double t2339;
  double t7316;
  double t7370;
  double t8298;
  double t2347;
  double t8183;
  double t2853;
  double t8373;
  double t9353;
  double t3853;
  double t9474;
  double t9510;
  double t9529;
  double t9870;
  double t7578;
  double t9906;
  double t9912;
  double t9917;
  double t9924;
  double t9926;
  double t9940;
  double t9945;
  double t10003;
  double t10076;
  double t10078;
  double t10093;
  double t10114;
  double t10153;
  double t10195;
  double t10196;
  double t10214;
  double t10230;
  double t10231;
  double t10232;
  double t8196;
  double t8226;
  double t8395;
  double t8418;
  double t5759;
  double t6714;
  double t7953;
  double t8122;
  double t10009;
  double t10062;
  double t10216;
  double t10229;
  double t10460;
  double t10470;
  double t10483;
  double t10696;
  double t10773;
  double t10801;
  double t10582;
  double t10625;
  double t10630;
  double t10829;
  double t10830;
  double t10854;
  double t10974;
  double t10983;
  double t10984;
  double t11028;
  double t11039;
  double t11062;
  double t11279;
  double t11280;
  double t11281;
  double t11287;
  double t11291;
  double t11292;
  double t11350;
  double t11355;
  double t11359;
  double t11484;
  double t11485;
  double t11486;
  double t11506;
  double t11517;
  double t11518;
  double t11570;
  double t11572;
  double t11573;
  double t11575;
  double t11579;
  double t11581;
  double t11613;
  double t11614;
  double t11618;
  double t11657;
  double t11673;
  double t11677;
  double t11682;
  double t11684;
  double t11716;
  double t11745;
  double t11751;
  double t11812;
  double t11813;
  double t11821;
  double t11829;
  double t11837;
  double t11841;
  double t11843;
  double t11844;
  double t11853;
  double t11858;
  double t11859;
  double t11860;
  double t11863;
  double t11867;
  double t11868;
  double t11873;
  double t11877;
  double t11880;
  double t12039;
  double t12054;
  double t12065;
  double t12195;
  double t12197;
  double t12205;
  double t12207;
  double t12208;
  double t12209;
  double t12212;
  double t12213;
  double t12214;
  double t12216;
  double t12217;
  double t12218;
  double t12223;
  double t12227;
  double t12228;
  double t12388;
  double t12389;
  double t12393;
  double t12432;
  double t12495;
  double t12504;
  double t12524;
  double t12534;
  double t12536;
  double t12647;
  double t12648;
  double t12649;
  double t12580;
  double t12605;
  double t12633;
  double t12651;
  double t12652;
  double t12653;
  double t12674;
  double t12676;
  double t12677;
  double t12736;
  double t12752;
  double t12755;
  double t12873;
  double t12879;
  double t12884;
  double t12896;
  double t12897;
  double t12898;
  double t12900;
  double t12902;
  double t12904;
  double t12930;
  double t12931;
  double t12932;
  double t12956;
  double t12957;
  double t12958;
  double t12966;
  double t12967;
  double t12968;
  double t12986;
  double t12987;
  double t12988;
  double t12990;
  double t12994;
  double t13008;
  double t13124;
  double t13126;
  double t13130;
  t2339 = Cos(var1[4]);
  t7316 = Cos(var1[5]);
  t7370 = Sin(var1[4]);
  t8298 = Sin(var1[5]);
  t2347 = Sin(var1[9]);
  t8183 = Cos(var1[9]);
  t2853 = Sin(var1[15]);
  t8373 = Cos(var1[15]);
  t9353 = Sin(var1[10]);
  t3853 = Cos(var1[10]);
  t9474 = t8183*t2339;
  t9510 = -1.*t2347*t7370*t8298;
  t9529 = t9474 + t9510;
  t9870 = Sin(var1[16]);
  t7578 = Cos(var1[16]);
  t9906 = t8373*t2339;
  t9912 = -1.*t2853*t7370*t8298;
  t9917 = t9906 + t9912;
  t9924 = Sin(var1[11]);
  t9926 = t7316*t9353*t7370;
  t9940 = t3853*t9529;
  t9945 = t9926 + t9940;
  t10003 = Cos(var1[11]);
  t10076 = -1.*t3853*t7316*t7370;
  t10078 = t9353*t9529;
  t10093 = t10076 + t10078;
  t10114 = Sin(var1[17]);
  t10153 = t7316*t9870*t7370;
  t10195 = t7578*t9917;
  t10196 = t10153 + t10195;
  t10214 = Cos(var1[17]);
  t10230 = -1.*t7578*t7316*t7370;
  t10231 = t9870*t9917;
  t10232 = t10230 + t10231;
  t8196 = -1.*t8183;
  t8226 = 1. + t8196;
  t8395 = -1.*t8373;
  t8418 = 1. + t8395;
  t5759 = -1.*t3853;
  t6714 = 1. + t5759;
  t7953 = -1.*t7578;
  t8122 = 1. + t7953;
  t10009 = -1.*t10003;
  t10062 = 1. + t10009;
  t10216 = -1.*t10214;
  t10229 = 1. + t10216;
  t10460 = t2339*t7316*t2347*t9353;
  t10470 = -1.*t3853*t2339*t8298;
  t10483 = t10460 + t10470;
  t10696 = t3853*t2339*t7316*t2347;
  t10773 = t2339*t9353*t8298;
  t10801 = t10696 + t10773;
  t10582 = t2339*t7316*t2853*t9870;
  t10625 = -1.*t7578*t2339*t8298;
  t10630 = t10582 + t10625;
  t10829 = t7578*t2339*t7316*t2853;
  t10830 = t2339*t9870*t8298;
  t10854 = t10829 + t10830;
  t10974 = -1.*t2347*t7370;
  t10983 = t8183*t2339*t8298;
  t10984 = t10974 + t10983;
  t11028 = t8183*t7370;
  t11039 = t2339*t2347*t8298;
  t11062 = t11028 + t11039;
  t11279 = -1.*t2339*t7316*t9353;
  t11280 = t3853*t11062;
  t11281 = t11279 + t11280;
  t11287 = -1.*t3853*t2339*t7316;
  t11291 = -1.*t9353*t11062;
  t11292 = t11287 + t11291;
  t11350 = t3853*t2339*t7316;
  t11355 = t9353*t11062;
  t11359 = t11350 + t11355;
  t11484 = -1.*t2853*t7370;
  t11485 = t8373*t2339*t8298;
  t11486 = t11484 + t11485;
  t11506 = t8373*t7370;
  t11517 = t2339*t2853*t8298;
  t11518 = t11506 + t11517;
  t11570 = -1.*t2339*t7316*t9870;
  t11572 = t7578*t11518;
  t11573 = t11570 + t11572;
  t11575 = -1.*t7578*t2339*t7316;
  t11579 = -1.*t9870*t11518;
  t11581 = t11575 + t11579;
  t11613 = t7578*t2339*t7316;
  t11614 = t9870*t11518;
  t11618 = t11613 + t11614;
  t11657 = Cos(var1[3]);
  t11673 = t11657*t7316*t7370;
  t11677 = Sin(var1[3]);
  t11682 = -1.*t11677*t8298;
  t11684 = t11673 + t11682;
  t11716 = -1.*t7316*t11677;
  t11745 = -1.*t11657*t7370*t8298;
  t11751 = t11716 + t11745;
  t11812 = -1.*t8183*t11657*t2339;
  t11813 = -1.*t2347*t11751;
  t11821 = t11812 + t11813;
  t11829 = -1.*t8373*t11657*t2339;
  t11837 = -1.*t2853*t11751;
  t11841 = t11829 + t11837;
  t11843 = -1.*t9353*t11684;
  t11844 = t3853*t11821;
  t11853 = t11843 + t11844;
  t11858 = t3853*t11684;
  t11859 = t9353*t11821;
  t11860 = t11858 + t11859;
  t11863 = -1.*t9870*t11684;
  t11867 = t7578*t11841;
  t11868 = t11863 + t11867;
  t11873 = t7578*t11684;
  t11877 = t9870*t11841;
  t11880 = t11873 + t11877;
  t12039 = t8183*t11677*t7370;
  t12054 = t2339*t2347*t11677*t8298;
  t12065 = t12039 + t12054;
  t12195 = t8373*t11677*t7370;
  t12197 = t2339*t2853*t11677*t8298;
  t12205 = t12195 + t12197;
  t12207 = -1.*t2339*t7316*t9353*t11677;
  t12208 = t3853*t12065;
  t12209 = t12207 + t12208;
  t12212 = t3853*t2339*t7316*t11677;
  t12213 = t9353*t12065;
  t12214 = t12212 + t12213;
  t12216 = -1.*t2339*t7316*t9870*t11677;
  t12217 = t7578*t12205;
  t12218 = t12216 + t12217;
  t12223 = t7578*t2339*t7316*t11677;
  t12227 = t9870*t12205;
  t12228 = t12223 + t12227;
  t12388 = -1.*t7316*t11677*t7370;
  t12389 = -1.*t11657*t8298;
  t12393 = t12388 + t12389;
  t12432 = t11657*t7316;
  t12495 = -1.*t11677*t7370*t8298;
  t12504 = t12432 + t12495;
  t12524 = -1.*t2347*t9353*t12393;
  t12534 = t3853*t12504;
  t12536 = t12524 + t12534;
  t12647 = -1.*t3853*t2347*t12393;
  t12648 = -1.*t9353*t12504;
  t12649 = t12647 + t12648;
  t12580 = -1.*t2853*t9870*t12393;
  t12605 = t7578*t12504;
  t12633 = t12580 + t12605;
  t12651 = -1.*t7578*t2853*t12393;
  t12652 = -1.*t9870*t12504;
  t12653 = t12651 + t12652;
  t12674 = t2339*t2347*t11677;
  t12676 = -1.*t8183*t12504;
  t12677 = t12674 + t12676;
  t12736 = -1.*t8183*t2339*t11677;
  t12752 = -1.*t2347*t12504;
  t12755 = t12736 + t12752;
  t12873 = t7316*t11677*t7370;
  t12879 = t11657*t8298;
  t12884 = t12873 + t12879;
  t12896 = -1.*t9353*t12884;
  t12897 = t3853*t12755;
  t12898 = t12896 + t12897;
  t12900 = -1.*t3853*t12884;
  t12902 = -1.*t9353*t12755;
  t12904 = t12900 + t12902;
  t12930 = t3853*t12884;
  t12931 = t9353*t12755;
  t12932 = t12930 + t12931;
  t12956 = t2339*t2853*t11677;
  t12957 = -1.*t8373*t12504;
  t12958 = t12956 + t12957;
  t12966 = -1.*t8373*t2339*t11677;
  t12967 = -1.*t2853*t12504;
  t12968 = t12966 + t12967;
  t12986 = -1.*t9870*t12884;
  t12987 = t7578*t12968;
  t12988 = t12986 + t12987;
  t12990 = -1.*t7578*t12884;
  t12994 = -1.*t9870*t12968;
  t13008 = t12990 + t12994;
  t13124 = t7578*t12884;
  t13126 = t9870*t12968;
  t13130 = t13124 + t13126;
  p_output1[0]=-0.575*t10062*t10093 + 0.575*t10114*t10196 + 0.575*t10229*t10232 + 0.0641*(t10196*t10214 + t10114*t10232) + 0.295*(-1.*t10114*t10196 + t10214*t10232) - 0.1575*t2339*t2347 - 0.1575*t2339*t2853 + 0.325*t6714*t7316*t7370 - 0.325*t7316*t7370*t8122 + 0.1575*t7370*t8226*t8298 + 0.2255*(t2339*t2347 + t7370*t8183*t8298) + 0.2255*(t2339*t2853 + t7370*t8298*t8373) + 0.1575*t7370*t8298*t8418 + 0.325*t9353*t9529 - 0.325*t9870*t9917 - 0.575*t9924*t9945 - 0.0641*(t10093*t9924 + t10003*t9945) - 0.295*(t10003*t10093 - 1.*t9924*t9945);
  p_output1[1]=-0.575*t10062*t10483 + 0.575*t10229*t10630 + 0.575*t10114*t10854 + 0.295*(t10214*t10630 - 1.*t10114*t10854) + 0.0641*(t10114*t10630 + t10214*t10854) - 0.2255*t2339*t7316*t8183 - 0.1575*t2339*t7316*t8226 + 0.325*t2339*t6714*t8298 - 0.325*t2339*t8122*t8298 - 0.2255*t2339*t7316*t8373 - 0.1575*t2339*t7316*t8418 + 0.325*t2339*t2347*t7316*t9353 - 0.325*t2339*t2853*t7316*t9870 - 0.575*t10801*t9924 - 0.0641*(t10003*t10801 + t10483*t9924) - 0.295*(t10003*t10483 - 1.*t10801*t9924);
  p_output1[2]=0.2255*t11062 - 0.1575*t7370*t8183 - 0.1575*t2339*t2347*t8298 + 0.325*t10984*t9353 - 0.575*t10062*t10984*t9353 - 0.575*t10984*t3853*t9924 - 0.295*(t10003*t10984*t9353 - 1.*t10984*t3853*t9924) - 0.0641*(t10003*t10984*t3853 + t10984*t9353*t9924);
  p_output1[3]=-0.575*t10062*t11281 + 0.325*t11062*t3853 - 0.325*t2339*t7316*t9353 - 0.575*t11292*t9924 - 0.0641*(t10003*t11292 + t11281*t9924) - 0.295*(t10003*t11281 - 1.*t11292*t9924);
  p_output1[4]=-0.575*t10003*t11281 - 0.575*t11359*t9924 - 0.0641*(t10003*t11359 - 1.*t11281*t9924) - 0.295*(-1.*t10003*t11281 - 1.*t11359*t9924);
  p_output1[5]=0.2255*t11518 + 0.575*t10114*t11486*t7578 - 0.1575*t2339*t2853*t8298 - 0.1575*t7370*t8373 - 0.325*t11486*t9870 + 0.575*t10229*t11486*t9870 + 0.0641*(t10214*t11486*t7578 + t10114*t11486*t9870) + 0.295*(-1.*t10114*t11486*t7578 + t10214*t11486*t9870);
  p_output1[6]=0.575*t10229*t11573 + 0.575*t10114*t11581 + 0.295*(t10214*t11573 - 1.*t10114*t11581) + 0.0641*(t10114*t11573 + t10214*t11581) - 0.325*t11518*t7578 + 0.325*t2339*t7316*t9870;
  p_output1[7]=0.575*t10214*t11573 + 0.575*t10114*t11618 + 0.295*(-1.*t10214*t11573 - 1.*t10114*t11618) + 0.0641*(-1.*t10114*t11573 + t10214*t11618);
  p_output1[8]=-0.575*t10062*t11860 + 0.575*t10114*t11868 + 0.575*t10229*t11880 + 0.0641*(t10214*t11868 + t10114*t11880) + 0.295*(-1.*t10114*t11868 + t10214*t11880) + 0.1575*t11657*t2339*t2347 + 0.1575*t11657*t2339*t2853 - 0.325*t11684*t6714 + 0.325*t11684*t8122 + 0.2255*(-1.*t11657*t2339*t2347 + t11751*t8183) + 0.1575*t11751*t8226 + 0.2255*(-1.*t11657*t2339*t2853 + t11751*t8373) + 0.1575*t11751*t8418 + 0.325*t11821*t9353 - 0.325*t11841*t9870 - 0.575*t11853*t9924 - 0.295*(t10003*t11860 - 1.*t11853*t9924) - 0.0641*(t10003*t11853 + t11860*t9924);
  p_output1[9]=-0.575*t10062*t12214 + 0.575*t10114*t12218 + 0.575*t10229*t12228 + 0.0641*(t10214*t12218 + t10114*t12228) + 0.295*(-1.*t10114*t12218 + t10214*t12228) - 0.325*t11677*t2339*t6714*t7316 - 0.1575*t11677*t2347*t7370 - 0.1575*t11677*t2853*t7370 + 0.325*t11677*t2339*t7316*t8122 - 0.1575*t11677*t2339*t8226*t8298 + 0.2255*(t11677*t2347*t7370 - 1.*t11677*t2339*t8183*t8298) + 0.2255*(t11677*t2853*t7370 - 1.*t11677*t2339*t8298*t8373) - 0.1575*t11677*t2339*t8298*t8418 + 0.325*t12065*t9353 - 0.325*t12205*t9870 - 0.575*t12209*t9924 - 0.295*(t10003*t12214 - 1.*t12209*t9924) - 0.0641*(t10003*t12209 + t12214*t9924);
  p_output1[10]=-0.575*t10062*t12536 + 0.575*t10229*t12633 + 0.575*t10114*t12653 + 0.295*(t10214*t12633 - 1.*t10114*t12653) + 0.0641*(t10114*t12633 + t10214*t12653) - 0.325*t12504*t6714 + 0.325*t12504*t8122 + 0.2255*t12393*t8183 + 0.1575*t12393*t8226 + 0.2255*t12393*t8373 + 0.1575*t12393*t8418 - 0.325*t12393*t2347*t9353 + 0.325*t12393*t2853*t9870 - 0.575*t12649*t9924 - 0.0641*(t10003*t12649 + t12536*t9924) - 0.295*(t10003*t12536 - 1.*t12649*t9924);
  p_output1[11]=0.2255*t12755 + 0.1575*t12504*t2347 + 0.1575*t11677*t2339*t8183 + 0.325*t12677*t9353 - 0.575*t10062*t12677*t9353 - 0.575*t12677*t3853*t9924 - 0.295*(t10003*t12677*t9353 - 1.*t12677*t3853*t9924) - 0.0641*(t10003*t12677*t3853 + t12677*t9353*t9924);
  p_output1[12]=-0.575*t10062*t12898 + 0.325*t12755*t3853 - 0.325*t12884*t9353 - 0.575*t12904*t9924 - 0.0641*(t10003*t12904 + t12898*t9924) - 0.295*(t10003*t12898 - 1.*t12904*t9924);
  p_output1[13]=-0.575*t10003*t12898 - 0.575*t12932*t9924 - 0.0641*(t10003*t12932 - 1.*t12898*t9924) - 0.295*(-1.*t10003*t12898 - 1.*t12932*t9924);
  p_output1[14]=0.2255*t12968 + 0.1575*t12504*t2853 + 0.575*t10114*t12958*t7578 + 0.1575*t11677*t2339*t8373 - 0.325*t12958*t9870 + 0.575*t10229*t12958*t9870 + 0.0641*(t10214*t12958*t7578 + t10114*t12958*t9870) + 0.295*(-1.*t10114*t12958*t7578 + t10214*t12958*t9870);
  p_output1[15]=0.575*t10229*t12988 + 0.575*t10114*t13008 + 0.295*(t10214*t12988 - 1.*t10114*t13008) + 0.0641*(t10114*t12988 + t10214*t13008) - 0.325*t12968*t7578 + 0.325*t12884*t9870;
  p_output1[16]=0.575*t10214*t12988 + 0.575*t10114*t13130 + 0.295*(-1.*t10214*t12988 - 1.*t10114*t13130) + 0.0641*(-1.*t10114*t12988 + t10214*t13130);
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

#include "J_step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
