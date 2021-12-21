/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:45 GMT+01:00
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
  double t67;
  double t17;
  double t26;
  double t27;
  double t30;
  double t36;
  double t59;
  double t68;
  double t69;
  double t78;
  double t84;
  double t19;
  double t135;
  double t103;
  double t181;
  double t196;
  double t200;
  double t228;
  double t229;
  double t233;
  double t238;
  double t239;
  double t244;
  double t257;
  double t310;
  double t269;
  double t270;
  double t277;
  double t285;
  double t288;
  double t294;
  double t318;
  double t325;
  double t328;
  double t329;
  double t359;
  double t365;
  double t366;
  double t373;
  double t377;
  double t379;
  double t64;
  double t76;
  double t80;
  double t85;
  double t98;
  double t31;
  double t62;
  double t440;
  double t131;
  double t132;
  double t444;
  double t143;
  double t163;
  double t166;
  double t167;
  double t170;
  double t443;
  double t445;
  double t451;
  double t458;
  double t463;
  double t465;
  double t209;
  double t212;
  double t213;
  double t249;
  double t259;
  double t261;
  double t467;
  double t468;
  double t470;
  double t474;
  double t475;
  double t477;
  double t302;
  double t309;
  double t312;
  double t313;
  double t316;
  double t341;
  double t348;
  double t350;
  double t354;
  double t358;
  double t483;
  double t484;
  double t486;
  double t494;
  double t500;
  double t502;
  double t503;
  double t507;
  double t398;
  double t402;
  double t510;
  double t511;
  double t514;
  double t517;
  double t427;
  double t430;
  double t575;
  double t577;
  double t578;
  double t587;
  double t589;
  double t595;
  double t603;
  double t605;
  double t607;
  double t612;
  double t616;
  double t621;
  double t626;
  double t629;
  double t632;
  double t636;
  double t641;
  double t643;
  double t644;
  double t649;
  double t655;
  double t656;
  double t658;
  double t664;
  double t723;
  double t727;
  double t728;
  double t739;
  double t695;
  double t700;
  double t703;
  double t708;
  double t714;
  double t734;
  double t751;
  double t778;
  double t856;
  double t863;
  double t865;
  double t879;
  double t808;
  double t819;
  double t790;
  double t791;
  double t792;
  double t835;
  double t839;
  double t842;
  double t891;
  double t775;
  double t917;
  double t780;
  double t955;
  double t871;
  double t967;
  double t968;
  double t741;
  double t903;
  double t910;
  double t916;
  double t919;
  double t921;
  double t923;
  double t929;
  double t934;
  double t936;
  double t999;
  double t969;
  double t971;
  double t972;
  double t974;
  double t978;
  double t979;
  double t986;
  double t989;
  double t1020;
  double t1021;
  double t1027;
  double t1030;
  double t1033;
  double t1039;
  double t1040;
  double t1046;
  double t897;
  double t1056;
  double t880;
  double t1078;
  double t959;
  double t1060;
  double t1061;
  double t956;
  double t721;
  double t731;
  double t742;
  double t748;
  double t757;
  double t758;
  double t760;
  double t707;
  double t715;
  double t764;
  double t768;
  double t773;
  double t774;
  double t776;
  double t777;
  double t781;
  double t786;
  double t787;
  double t796;
  double t806;
  double t815;
  double t817;
  double t828;
  double t829;
  double t833;
  double t846;
  double t868;
  double t884;
  double t885;
  double t898;
  double t901;
  double t902;
  double t1119;
  double t1120;
  double t1123;
  double t1131;
  double t1134;
  double t1136;
  double t940;
  double t950;
  double t957;
  double t958;
  double t960;
  double t961;
  double t966;
  double t996;
  double t997;
  double t1007;
  double t1008;
  double t1009;
  double t1011;
  double t1018;
  double t1057;
  double t1142;
  double t1143;
  double t1144;
  double t1145;
  double t1062;
  double t1147;
  double t1148;
  double t1149;
  double t1154;
  double t1065;
  double t1066;
  double t1157;
  double t1159;
  double t1169;
  double t1174;
  double t1072;
  double t1073;
  double t1079;
  double t1087;
  double t1094;
  double t1097;
  double t1099;
  double t1101;
  double t1244;
  double t1245;
  double t1247;
  double t1250;
  double t1252;
  double t1255;
  double t1264;
  double t1265;
  double t1273;
  double t1276;
  double t1279;
  double t1282;
  double t1283;
  double t1284;
  double t1291;
  double t1298;
  double t1299;
  double t1302;
  t67 = Cos(var1[10]);
  t17 = Cos(var1[4]);
  t26 = Cos(var1[9]);
  t27 = -1.*t26;
  t30 = 1. + t27;
  t36 = Sin(var1[9]);
  t59 = -0.15121*t36;
  t68 = -1.*t67;
  t69 = 1. + t68;
  t78 = -1. + t67;
  t84 = Sin(var1[10]);
  t19 = Cos(var1[5]);
  t135 = Sin(var1[5]);
  t103 = Sin(var1[4]);
  t181 = -1.*t17*t19*t36;
  t196 = -1.*t26*t17*t135;
  t200 = t181 + t196;
  t228 = t26*t17*t19;
  t229 = -1.*t17*t36*t135;
  t233 = t228 + t229;
  t238 = Cos(var1[11]);
  t239 = -1.*t238;
  t244 = 1. + t239;
  t257 = Sin(var1[11]);
  t310 = -1. + t238;
  t269 = t84*t103;
  t270 = -4.e-6*t84*t200;
  t277 = -1.000000000016*t69;
  t285 = 1. + t277;
  t288 = t285*t233;
  t294 = t269 + t270 + t288;
  t318 = t67*t103;
  t325 = 4.e-6*t69*t200;
  t328 = -1.*t84*t233;
  t329 = t318 + t325 + t328;
  t359 = 4.e-6*t69*t103;
  t365 = 1.6e-11*t78;
  t366 = 1. + t365;
  t373 = t366*t200;
  t377 = 4.e-6*t84*t233;
  t379 = t359 + t373 + t377;
  t64 = -4.9936e-13*var1[10];
  t76 = -0.038749*t69;
  t80 = 6.19984e-13*t78;
  t85 = -0.281210000004*t84;
  t98 = t64 + t76 + t80 + t85;
  t31 = 0.15121*t30;
  t62 = t31 + t59;
  t440 = Sin(var1[3]);
  t131 = -0.15121*t30;
  t132 = t131 + t59;
  t444 = Cos(var1[3]);
  t143 = -1.2484e-7*var1[10];
  t163 = 2.479936e-18*t69;
  t166 = -1.54996e-7*t78;
  t167 = 1.124840000016e-6*t84;
  t170 = t143 + t163 + t166 + t167;
  t443 = t19*t440*t103;
  t445 = t444*t135;
  t451 = t443 + t445;
  t458 = t444*t19;
  t463 = -1.*t440*t103*t135;
  t465 = t458 + t463;
  t209 = 0.281210000008499*t69;
  t212 = -0.03874900000062*t84;
  t213 = t209 + t212;
  t249 = 0.50315000001605*t244;
  t259 = -0.0398890000006382*t257;
  t261 = t249 + t259;
  t467 = -1.*t36*t451;
  t468 = t26*t465;
  t470 = t467 + t468;
  t474 = t26*t451;
  t475 = t36*t465;
  t477 = t474 + t475;
  t302 = -5.04e-14*var1[11];
  t309 = -0.039889*t244;
  t312 = 6.38224e-13*t310;
  t313 = -0.503150000008*t257;
  t316 = t302 + t309 + t312 + t313;
  t341 = -1.26e-8*var1[11];
  t348 = 2.552896e-18*t244;
  t350 = -1.59556e-7*t310;
  t354 = 2.012600000032e-6*t257;
  t358 = t341 + t348 + t350 + t354;
  t483 = -1.*t17*t84*t440;
  t484 = -4.e-6*t84*t470;
  t486 = t285*t477;
  t494 = t483 + t484 + t486;
  t500 = -1.*t67*t17*t440;
  t502 = 4.e-6*t69*t470;
  t503 = -1.*t84*t477;
  t507 = t500 + t502 + t503;
  t398 = 1.6e-11*t310;
  t402 = 1. + t398;
  t510 = -4.e-6*t69*t17*t440;
  t511 = t366*t470;
  t514 = 4.e-6*t84*t477;
  t517 = t510 + t511 + t514;
  t427 = -1.000000000016*t244;
  t430 = 1. + t427;
  t575 = -1.*t444*t19*t103;
  t577 = t440*t135;
  t578 = t575 + t577;
  t587 = t19*t440;
  t589 = t444*t103*t135;
  t595 = t587 + t589;
  t603 = -1.*t36*t578;
  t605 = t26*t595;
  t607 = t603 + t605;
  t612 = t26*t578;
  t616 = t36*t595;
  t621 = t612 + t616;
  t626 = t444*t17*t84;
  t629 = -4.e-6*t84*t607;
  t632 = t285*t621;
  t636 = t626 + t629 + t632;
  t641 = t67*t444*t17;
  t643 = 4.e-6*t69*t607;
  t644 = -1.*t84*t621;
  t649 = t641 + t643 + t644;
  t655 = 4.e-6*t69*t444*t17;
  t656 = t366*t607;
  t658 = 4.e-6*t84*t621;
  t664 = t655 + t656 + t658;
  t723 = Cos(var1[13]);
  t727 = -1.*t723;
  t728 = 1. + t727;
  t739 = Sin(var1[13]);
  t695 = Cos(var1[12]);
  t700 = -1.*t695;
  t703 = 1. + t700;
  t708 = Sin(var1[12]);
  t714 = 0.15121*t708;
  t734 = 4.e-6*t728;
  t751 = -2.8e-11*t728;
  t778 = 7.e-6*t728;
  t856 = Cos(var1[14]);
  t863 = -1.*t856;
  t865 = 1. + t863;
  t879 = Sin(var1[14]);
  t808 = -1.*t739;
  t819 = -4.e-6*t739;
  t790 = -1.*t17*t19*t708;
  t791 = -1.*t695*t17*t135;
  t792 = t790 + t791;
  t835 = t695*t17*t19;
  t839 = -1.*t17*t708*t135;
  t842 = t835 + t839;
  t891 = 7.e-6*t865;
  t775 = -7.e-6*t739;
  t917 = -7.e-6*t728;
  t780 = 4.e-6*t739;
  t955 = 4.e-6*t865;
  t871 = -2.8e-11*t865;
  t967 = -1. + t723;
  t968 = 4.e-6*t967;
  t741 = 7.e-6*t739;
  t903 = 2.8e-11*t728;
  t910 = t903 + t808;
  t916 = t910*t103;
  t919 = t917 + t819;
  t921 = t919*t792;
  t923 = -1.000000000016*t728;
  t929 = 1. + t923;
  t934 = t929*t842;
  t936 = t916 + t921 + t934;
  t999 = 7.e-6*t879;
  t969 = t968 + t775;
  t971 = t969*t103;
  t972 = -6.5e-11*t728;
  t974 = 1. + t972;
  t978 = t974*t792;
  t979 = t917 + t780;
  t986 = t979*t842;
  t989 = t971 + t978 + t986;
  t1020 = -1.000000000049*t728;
  t1021 = 1. + t1020;
  t1027 = t1021*t103;
  t1030 = t968 + t741;
  t1033 = t1030*t792;
  t1039 = t903 + t739;
  t1040 = t1039*t842;
  t1046 = t1027 + t1033 + t1040;
  t897 = -4.e-6*t879;
  t1056 = 2.8e-11*t865;
  t880 = -1.*t879;
  t1078 = -7.e-6*t865;
  t959 = 4.e-6*t879;
  t1060 = -1. + t856;
  t1061 = 4.e-6*t1060;
  t956 = -7.e-6*t879;
  t721 = 5.856279999999999e-13*var1[13];
  t731 = -0.0387489999948987*t728;
  t742 = t734 + t741;
  t748 = -2.123459e-6*t742;
  t757 = t751 + t739;
  t758 = -0.281209000004*t757;
  t760 = t721 + t731 + t748 + t758;
  t707 = -0.15121*t703;
  t715 = t707 + t714;
  t764 = 0.15121*t703;
  t768 = t764 + t714;
  t773 = -1.4640699999999997e-7*var1[13];
  t774 = -1.38024835e-16*t728;
  t776 = t734 + t775;
  t777 = -0.038748999993*t776;
  t781 = t778 + t780;
  t786 = -0.281209000004*t781;
  t787 = t773 + t774 + t777 + t786;
  t796 = 1.0248489999999998e-12*var1[13];
  t806 = -0.28120900000849935*t728;
  t815 = t751 + t808;
  t817 = -0.038748999993*t815;
  t828 = t778 + t819;
  t829 = -2.123459e-6*t828;
  t833 = t796 + t806 + t817 + t829;
  t846 = 1.8190549999999993e-12*var1[14];
  t868 = -0.5031490000160505*t865;
  t884 = t871 + t880;
  t885 = -0.038922999986*t884;
  t898 = t891 + t897;
  t901 = -3.6777349999999994e-6*t898;
  t902 = t846 + t868 + t885 + t901;
  t1119 = -1.*t708*t451;
  t1120 = t695*t465;
  t1123 = t1119 + t1120;
  t1131 = t695*t451;
  t1134 = t708*t465;
  t1136 = t1131 + t1134;
  t940 = -2.598649999999999e-7*var1[14];
  t950 = -2.3905277499999995e-16*t865;
  t957 = t955 + t956;
  t958 = -0.038922999986*t957;
  t960 = t891 + t959;
  t961 = -0.503149000008*t960;
  t966 = t940 + t950 + t958 + t961;
  t996 = 1.0394599999999997e-12*var1[14];
  t997 = -0.03892299998790722*t865;
  t1007 = t955 + t999;
  t1008 = -3.6777349999999994e-6*t1007;
  t1009 = t871 + t879;
  t1011 = -0.503149000008*t1009;
  t1018 = t996 + t997 + t1008 + t1011;
  t1057 = t1056 + t879;
  t1142 = -1.*t17*t910*t440;
  t1143 = t919*t1123;
  t1144 = t929*t1136;
  t1145 = t1142 + t1143 + t1144;
  t1062 = t1061 + t999;
  t1147 = -1.*t17*t969*t440;
  t1148 = t974*t1123;
  t1149 = t979*t1136;
  t1154 = t1147 + t1148 + t1149;
  t1065 = -1.000000000049*t865;
  t1066 = 1. + t1065;
  t1157 = -1.*t1021*t17*t440;
  t1159 = t1030*t1123;
  t1169 = t1039*t1136;
  t1174 = t1157 + t1159 + t1169;
  t1072 = -1.000000000016*t865;
  t1073 = 1. + t1072;
  t1079 = t1078 + t897;
  t1087 = t1056 + t880;
  t1094 = t1078 + t959;
  t1097 = -6.5e-11*t865;
  t1099 = 1. + t1097;
  t1101 = t1061 + t956;
  t1244 = -1.*t708*t578;
  t1245 = t695*t595;
  t1247 = t1244 + t1245;
  t1250 = t695*t578;
  t1252 = t708*t595;
  t1255 = t1250 + t1252;
  t1264 = t444*t17*t910;
  t1265 = t919*t1247;
  t1273 = t929*t1255;
  t1276 = t1264 + t1265 + t1273;
  t1279 = t444*t17*t969;
  t1282 = t974*t1247;
  t1283 = t979*t1255;
  t1284 = t1279 + t1282 + t1283;
  t1291 = t1021*t444*t17;
  t1298 = t1030*t1247;
  t1299 = t1039*t1255;
  t1302 = t1291 + t1298 + t1299;
  p_output1[0]=-1.*t132*t135*t17 + t170*t200 + t213*t233 + t261*t294 + t316*t329 + t358*t379 - 0.041195*(-1.*t257*t294 + t238*t329 + 4.e-6*t244*t379) - 0.14871*(4.e-6*t257*t294 + 4.e-6*t244*t329 + t379*t402) + 0.803147*(t257*t329 - 4.e-6*t257*t379 + t294*t430) + t17*t19*t62 + t103*t98 + var1[0];
  p_output1[1]=t132*t465 + t170*t470 + t213*t477 + t261*t494 + t316*t507 + t358*t517 - 0.041195*(-1.*t257*t494 + t238*t507 + 4.e-6*t244*t517) + 0.803147*(t430*t494 + t257*t507 - 4.e-6*t257*t517) - 0.14871*(4.e-6*t257*t494 + 4.e-6*t244*t507 + t402*t517) + t451*t62 - 1.*t17*t440*t98 + var1[1];
  p_output1[2]=t132*t595 + t170*t607 + t578*t62 + t213*t621 + t261*t636 + t316*t649 + t358*t664 - 0.041195*(-1.*t257*t636 + t238*t649 + 4.e-6*t244*t664) + 0.803147*(t430*t636 + t257*t649 - 4.e-6*t257*t664) - 0.14871*(4.e-6*t257*t636 + 4.e-6*t244*t649 + t402*t664) + t17*t444*t98 + var1[2];
  p_output1[3]=t1018*t1046 + t17*t19*t715 + t103*t760 - 1.*t135*t17*t768 + t787*t792 + t833*t842 + t902*t936 + t966*t989 - 0.038924*(t1046*t1066 + t1057*t936 + t1062*t989) - 0.80315*(t1046*t1087 + t1073*t936 + t1079*t989) + 0.148705*(t1046*t1101 + t1094*t936 + t1099*t989) + var1[0];
  p_output1[4]=t1018*t1174 - 0.038924*(t1057*t1145 + t1062*t1154 + t1066*t1174) - 0.80315*(t1073*t1145 + t1079*t1154 + t1087*t1174) + 0.148705*(t1094*t1145 + t1099*t1154 + t1101*t1174) + t451*t715 - 1.*t17*t440*t760 + t465*t768 + t1123*t787 + t1136*t833 + t1145*t902 + t1154*t966 + var1[1];
  p_output1[5]=t1018*t1302 - 0.038924*(t1057*t1276 + t1062*t1284 + t1066*t1302) - 0.80315*(t1073*t1276 + t1079*t1284 + t1087*t1302) + 0.148705*(t1094*t1276 + t1099*t1284 + t1101*t1302) + t578*t715 + t17*t444*t760 + t595*t768 + t1247*t787 + t1255*t833 + t1276*t902 + t1284*t966 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "output_boundary_DiagonalStance2.hh"

namespace TrotStance2
{

void output_boundary_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
