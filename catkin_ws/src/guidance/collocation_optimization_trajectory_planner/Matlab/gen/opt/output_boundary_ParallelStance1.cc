/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:00 GMT+01:00
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
  double t21;
  double t30;
  double t32;
  double t44;
  double t46;
  double t48;
  double t28;
  double t70;
  double t120;
  double t127;
  double t131;
  double t153;
  double t212;
  double t237;
  double t85;
  double t93;
  double t109;
  double t175;
  double t180;
  double t181;
  double t288;
  double t292;
  double t297;
  double t310;
  double t238;
  double t240;
  double t256;
  double t274;
  double t281;
  double t285;
  double t416;
  double t384;
  double t385;
  double t393;
  double t401;
  double t321;
  double t341;
  double t344;
  double t348;
  double t350;
  double t351;
  double t65;
  double t66;
  double t499;
  double t492;
  double t75;
  double t76;
  double t496;
  double t501;
  double t507;
  double t514;
  double t517;
  double t518;
  double t113;
  double t147;
  double t167;
  double t168;
  double t187;
  double t188;
  double t203;
  double t214;
  double t216;
  double t224;
  double t231;
  double t526;
  double t527;
  double t530;
  double t536;
  double t540;
  double t541;
  double t287;
  double t300;
  double t312;
  double t319;
  double t375;
  double t379;
  double t381;
  double t404;
  double t407;
  double t409;
  double t411;
  double t417;
  double t430;
  double t548;
  double t549;
  double t554;
  double t555;
  double t570;
  double t576;
  double t591;
  double t592;
  double t560;
  double t561;
  double t564;
  double t565;
  double t461;
  double t466;
  double t642;
  double t652;
  double t653;
  double t655;
  double t658;
  double t660;
  double t665;
  double t666;
  double t675;
  double t688;
  double t689;
  double t691;
  double t696;
  double t697;
  double t701;
  double t707;
  double t743;
  double t744;
  double t745;
  double t746;
  double t713;
  double t715;
  double t721;
  double t723;
  double t834;
  double t841;
  double t848;
  double t861;
  double t804;
  double t805;
  double t811;
  double t814;
  double t823;
  double t860;
  double t884;
  double t917;
  double t1009;
  double t1010;
  double t1011;
  double t1021;
  double t960;
  double t968;
  double t939;
  double t945;
  double t947;
  double t1001;
  double t1002;
  double t1003;
  double t1039;
  double t910;
  double t1067;
  double t925;
  double t1094;
  double t1020;
  double t1113;
  double t1114;
  double t867;
  double t1060;
  double t1062;
  double t1064;
  double t1068;
  double t1069;
  double t1071;
  double t1080;
  double t1081;
  double t1082;
  double t1139;
  double t1116;
  double t1120;
  double t1121;
  double t1122;
  double t1124;
  double t1125;
  double t1130;
  double t1131;
  double t1150;
  double t1154;
  double t1156;
  double t1158;
  double t1163;
  double t1165;
  double t1169;
  double t1171;
  double t1042;
  double t1178;
  double t1023;
  double t1221;
  double t1105;
  double t1183;
  double t1184;
  double t1096;
  double t833;
  double t859;
  double t871;
  double t881;
  double t886;
  double t891;
  double t899;
  double t813;
  double t826;
  double t902;
  double t903;
  double t906;
  double t908;
  double t914;
  double t916;
  double t927;
  double t932;
  double t936;
  double t953;
  double t954;
  double t961;
  double t967;
  double t974;
  double t981;
  double t1000;
  double t1008;
  double t1014;
  double t1026;
  double t1035;
  double t1046;
  double t1058;
  double t1059;
  double t1276;
  double t1281;
  double t1285;
  double t1295;
  double t1296;
  double t1298;
  double t1087;
  double t1091;
  double t1101;
  double t1102;
  double t1106;
  double t1108;
  double t1112;
  double t1133;
  double t1136;
  double t1140;
  double t1146;
  double t1147;
  double t1148;
  double t1149;
  double t1180;
  double t1305;
  double t1311;
  double t1313;
  double t1314;
  double t1185;
  double t1318;
  double t1321;
  double t1322;
  double t1323;
  double t1188;
  double t1189;
  double t1328;
  double t1329;
  double t1332;
  double t1333;
  double t1212;
  double t1216;
  double t1224;
  double t1232;
  double t1242;
  double t1244;
  double t1248;
  double t1256;
  double t1382;
  double t1387;
  double t1393;
  double t1399;
  double t1402;
  double t1407;
  double t1412;
  double t1413;
  double t1417;
  double t1418;
  double t1432;
  double t1435;
  double t1440;
  double t1441;
  double t1446;
  double t1450;
  double t1452;
  double t1453;
  t21 = Cos(var1[4]);
  t30 = Cos(var1[6]);
  t32 = -1.*t30;
  t44 = 1. + t32;
  t46 = 0.15121*t44;
  t48 = Sin(var1[6]);
  t28 = Sin(var1[5]);
  t70 = Cos(var1[5]);
  t120 = Cos(var1[7]);
  t127 = -1.*t120;
  t131 = 1. + t127;
  t153 = Sin(var1[7]);
  t212 = Sin(var1[4]);
  t237 = -1. + t120;
  t85 = -1.*t21*t30*t28;
  t93 = -1.*t21*t70*t48;
  t109 = t85 + t93;
  t175 = t21*t70*t30;
  t180 = -1.*t21*t28*t48;
  t181 = t175 + t180;
  t288 = Cos(var1[8]);
  t292 = -1.*t288;
  t297 = 1. + t292;
  t310 = Sin(var1[8]);
  t238 = 4.e-6*t237*t212;
  t240 = 1.6e-11*t237;
  t256 = 1. + t240;
  t274 = t256*t109;
  t281 = 4.e-6*t181*t153;
  t285 = t238 + t274 + t281;
  t416 = -1. + t288;
  t384 = t120*t212;
  t385 = 4.e-6*t237*t109;
  t393 = t181*t153;
  t401 = t384 + t385 + t393;
  t321 = -1.000000000016*t131;
  t341 = 1. + t321;
  t344 = t341*t181;
  t348 = -1.*t212*t153;
  t350 = -4.e-6*t109*t153;
  t351 = t344 + t348 + t350;
  t65 = -0.15121*t48;
  t66 = t46 + t65;
  t499 = Sin(var1[3]);
  t492 = Cos(var1[3]);
  t75 = 0.15121*t48;
  t76 = t46 + t75;
  t496 = t492*t70;
  t501 = -1.*t499*t212*t28;
  t507 = t496 + t501;
  t514 = t70*t499*t212;
  t517 = t492*t28;
  t518 = t514 + t517;
  t113 = -1.2484e-7*var1[7];
  t147 = -1.5499600000248e-7*t131;
  t167 = 1.124840000016e-6*t153;
  t168 = t113 + t147 + t167;
  t187 = 0.281210000008499*t131;
  t188 = 0.03874900000062*t153;
  t203 = t187 + t188;
  t214 = 4.9936e-13*var1[7];
  t216 = -0.03874900000062*t131;
  t224 = 0.281210000004*t153;
  t231 = t214 + t216 + t224;
  t526 = t30*t507;
  t527 = -1.*t518*t48;
  t530 = t526 + t527;
  t536 = t30*t518;
  t540 = t507*t48;
  t541 = t536 + t540;
  t287 = -1.284e-8*var1[8];
  t300 = -1.5499600000248e-7*t297;
  t312 = 2.012840000032e-6*t310;
  t319 = t287 + t300 + t312;
  t375 = 0.503210000016051*t297;
  t379 = 0.03874900000062*t310;
  t381 = t375 + t379;
  t404 = 5.136e-14*var1[8];
  t407 = -0.03874900000062*t297;
  t409 = 0.503210000008*t310;
  t411 = t404 + t407 + t409;
  t417 = 1.6e-11*t416;
  t430 = 1. + t417;
  t548 = -4.e-6*t21*t237*t499;
  t549 = t256*t530;
  t554 = 4.e-6*t541*t153;
  t555 = t548 + t549 + t554;
  t570 = -1.*t21*t120*t499;
  t576 = 4.e-6*t237*t530;
  t591 = t541*t153;
  t592 = t570 + t576 + t591;
  t560 = t341*t541;
  t561 = t21*t499*t153;
  t564 = -4.e-6*t530*t153;
  t565 = t560 + t561 + t564;
  t461 = -1.000000000016*t297;
  t466 = 1. + t461;
  t642 = t70*t499;
  t652 = t492*t212*t28;
  t653 = t642 + t652;
  t655 = -1.*t492*t70*t212;
  t658 = t499*t28;
  t660 = t655 + t658;
  t665 = t30*t653;
  t666 = -1.*t660*t48;
  t675 = t665 + t666;
  t688 = t30*t660;
  t689 = t653*t48;
  t691 = t688 + t689;
  t696 = 4.e-6*t492*t21*t237;
  t697 = t256*t675;
  t701 = 4.e-6*t691*t153;
  t707 = t696 + t697 + t701;
  t743 = t492*t21*t120;
  t744 = 4.e-6*t237*t675;
  t745 = t691*t153;
  t746 = t743 + t744 + t745;
  t713 = t341*t691;
  t715 = -1.*t492*t21*t153;
  t721 = -4.e-6*t675*t153;
  t723 = t713 + t715 + t721;
  t834 = Cos(var1[13]);
  t841 = -1.*t834;
  t848 = 1. + t841;
  t861 = Sin(var1[13]);
  t804 = Cos(var1[12]);
  t805 = -1.*t804;
  t811 = 1. + t805;
  t814 = Sin(var1[12]);
  t823 = 0.15121*t814;
  t860 = 4.e-6*t848;
  t884 = -2.8e-11*t848;
  t917 = 7.e-6*t848;
  t1009 = Cos(var1[14]);
  t1010 = -1.*t1009;
  t1011 = 1. + t1010;
  t1021 = Sin(var1[14]);
  t960 = -1.*t861;
  t968 = -4.e-6*t861;
  t939 = -1.*t21*t70*t814;
  t945 = -1.*t804*t21*t28;
  t947 = t939 + t945;
  t1001 = t804*t21*t70;
  t1002 = -1.*t21*t814*t28;
  t1003 = t1001 + t1002;
  t1039 = 7.e-6*t1011;
  t910 = -7.e-6*t861;
  t1067 = -7.e-6*t848;
  t925 = 4.e-6*t861;
  t1094 = 4.e-6*t1011;
  t1020 = -2.8e-11*t1011;
  t1113 = -1. + t834;
  t1114 = 4.e-6*t1113;
  t867 = 7.e-6*t861;
  t1060 = 2.8e-11*t848;
  t1062 = t1060 + t960;
  t1064 = t1062*t212;
  t1068 = t1067 + t968;
  t1069 = t1068*t947;
  t1071 = -1.000000000016*t848;
  t1080 = 1. + t1071;
  t1081 = t1080*t1003;
  t1082 = t1064 + t1069 + t1081;
  t1139 = 7.e-6*t1021;
  t1116 = t1114 + t910;
  t1120 = t1116*t212;
  t1121 = -6.5e-11*t848;
  t1122 = 1. + t1121;
  t1124 = t1122*t947;
  t1125 = t1067 + t925;
  t1130 = t1125*t1003;
  t1131 = t1120 + t1124 + t1130;
  t1150 = -1.000000000049*t848;
  t1154 = 1. + t1150;
  t1156 = t1154*t212;
  t1158 = t1114 + t867;
  t1163 = t1158*t947;
  t1165 = t1060 + t861;
  t1169 = t1165*t1003;
  t1171 = t1156 + t1163 + t1169;
  t1042 = -4.e-6*t1021;
  t1178 = 2.8e-11*t1011;
  t1023 = -1.*t1021;
  t1221 = -7.e-6*t1011;
  t1105 = 4.e-6*t1021;
  t1183 = -1. + t1009;
  t1184 = 4.e-6*t1183;
  t1096 = -7.e-6*t1021;
  t833 = 5.856279999999999e-13*var1[13];
  t859 = -0.0387489999948987*t848;
  t871 = t860 + t867;
  t881 = -2.123459e-6*t871;
  t886 = t884 + t861;
  t891 = -0.281209000004*t886;
  t899 = t833 + t859 + t881 + t891;
  t813 = -0.15121*t811;
  t826 = t813 + t823;
  t902 = 0.15121*t811;
  t903 = t902 + t823;
  t906 = -1.4640699999999997e-7*var1[13];
  t908 = -1.38024835e-16*t848;
  t914 = t860 + t910;
  t916 = -0.038748999993*t914;
  t927 = t917 + t925;
  t932 = -0.281209000004*t927;
  t936 = t906 + t908 + t916 + t932;
  t953 = 1.0248489999999998e-12*var1[13];
  t954 = -0.28120900000849935*t848;
  t961 = t884 + t960;
  t967 = -0.038748999993*t961;
  t974 = t917 + t968;
  t981 = -2.123459e-6*t974;
  t1000 = t953 + t954 + t967 + t981;
  t1008 = 1.8190549999999993e-12*var1[14];
  t1014 = -0.5031490000160505*t1011;
  t1026 = t1020 + t1023;
  t1035 = -0.038922999986*t1026;
  t1046 = t1039 + t1042;
  t1058 = -3.6777349999999994e-6*t1046;
  t1059 = t1008 + t1014 + t1035 + t1058;
  t1276 = -1.*t814*t518;
  t1281 = t804*t507;
  t1285 = t1276 + t1281;
  t1295 = t804*t518;
  t1296 = t814*t507;
  t1298 = t1295 + t1296;
  t1087 = -2.598649999999999e-7*var1[14];
  t1091 = -2.3905277499999995e-16*t1011;
  t1101 = t1094 + t1096;
  t1102 = -0.038922999986*t1101;
  t1106 = t1039 + t1105;
  t1108 = -0.503149000008*t1106;
  t1112 = t1087 + t1091 + t1102 + t1108;
  t1133 = 1.0394599999999997e-12*var1[14];
  t1136 = -0.03892299998790722*t1011;
  t1140 = t1094 + t1139;
  t1146 = -3.6777349999999994e-6*t1140;
  t1147 = t1020 + t1021;
  t1148 = -0.503149000008*t1147;
  t1149 = t1133 + t1136 + t1146 + t1148;
  t1180 = t1178 + t1021;
  t1305 = -1.*t21*t1062*t499;
  t1311 = t1068*t1285;
  t1313 = t1080*t1298;
  t1314 = t1305 + t1311 + t1313;
  t1185 = t1184 + t1139;
  t1318 = -1.*t21*t1116*t499;
  t1321 = t1122*t1285;
  t1322 = t1125*t1298;
  t1323 = t1318 + t1321 + t1322;
  t1188 = -1.000000000049*t1011;
  t1189 = 1. + t1188;
  t1328 = -1.*t1154*t21*t499;
  t1329 = t1158*t1285;
  t1332 = t1165*t1298;
  t1333 = t1328 + t1329 + t1332;
  t1212 = -1.000000000016*t1011;
  t1216 = 1. + t1212;
  t1224 = t1221 + t1042;
  t1232 = t1178 + t1023;
  t1242 = t1221 + t1105;
  t1244 = -6.5e-11*t1011;
  t1248 = 1. + t1244;
  t1256 = t1184 + t1096;
  t1382 = -1.*t814*t660;
  t1387 = t804*t653;
  t1393 = t1382 + t1387;
  t1399 = t804*t660;
  t1402 = t814*t653;
  t1407 = t1399 + t1402;
  t1412 = t492*t21*t1062;
  t1413 = t1068*t1393;
  t1417 = t1080*t1407;
  t1418 = t1412 + t1413 + t1417;
  t1432 = t492*t21*t1116;
  t1435 = t1122*t1393;
  t1440 = t1125*t1407;
  t1441 = t1432 + t1435 + t1440;
  t1446 = t1154*t492*t21;
  t1450 = t1158*t1393;
  t1452 = t1165*t1407;
  t1453 = t1446 + t1450 + t1452;
  p_output1[0]=t109*t168 + t181*t203 + t212*t231 + t285*t319 + t351*t381 + t401*t411 - 0.03875*(t310*t351 + t288*t401 + 4.e-6*t285*t416) + 0.14871*(4.e-6*t310*t351 + 4.e-6*t401*t416 + t285*t430) + 0.80321*(-4.e-6*t285*t310 - 1.*t310*t401 + t351*t466) - 1.*t21*t28*t66 + t21*t70*t76 + var1[0];
  p_output1[1]=-1.*t21*t231*t499 + t168*t530 + t203*t541 + t319*t555 + t381*t565 + t411*t592 - 0.03875*(4.e-6*t416*t555 + t310*t565 + t288*t592) + 0.80321*(-4.e-6*t310*t555 + t466*t565 - 1.*t310*t592) + 0.14871*(t430*t555 + 4.e-6*t310*t565 + 4.e-6*t416*t592) + t507*t66 + t518*t76 + var1[1];
  p_output1[2]=t21*t231*t492 + t653*t66 + t168*t675 + t203*t691 + t319*t707 + t381*t723 + t411*t746 - 0.03875*(4.e-6*t416*t707 + t310*t723 + t288*t746) + 0.80321*(-4.e-6*t310*t707 + t466*t723 - 1.*t310*t746) + 0.14871*(t430*t707 + 4.e-6*t310*t723 + 4.e-6*t416*t746) + t660*t76 + var1[2];
  p_output1[3]=t1000*t1003 + t1059*t1082 + t1112*t1131 + t1149*t1171 - 0.038924*(t1082*t1180 + t1131*t1185 + t1171*t1189) - 0.80315*(t1082*t1216 + t1131*t1224 + t1171*t1232) + 0.148705*(t1082*t1242 + t1131*t1248 + t1171*t1256) + t21*t70*t826 + t212*t899 - 1.*t21*t28*t903 + t936*t947 + var1[0];
  p_output1[4]=t1000*t1298 + t1059*t1314 + t1112*t1323 + t1149*t1333 - 0.038924*(t1180*t1314 + t1185*t1323 + t1189*t1333) - 0.80315*(t1216*t1314 + t1224*t1323 + t1232*t1333) + 0.148705*(t1242*t1314 + t1248*t1323 + t1256*t1333) + t518*t826 - 1.*t21*t499*t899 + t507*t903 + t1285*t936 + var1[1];
  p_output1[5]=t1000*t1407 + t1059*t1418 + t1112*t1441 + t1149*t1453 - 0.038924*(t1180*t1418 + t1185*t1441 + t1189*t1453) - 0.80315*(t1216*t1418 + t1224*t1441 + t1232*t1453) + 0.148705*(t1242*t1418 + t1248*t1441 + t1256*t1453) + t660*t826 + t21*t492*t899 + t653*t903 + t1393*t936 + var1[2];
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

#include "output_boundary_ParallelStance1.hh"

namespace ParallelStance1
{

void output_boundary_ParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
