/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:45 GMT+01:00
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
  double t69;
  double t8;
  double t25;
  double t26;
  double t28;
  double t42;
  double t59;
  double t78;
  double t84;
  double t101;
  double t108;
  double t19;
  double t164;
  double t139;
  double t203;
  double t210;
  double t217;
  double t231;
  double t239;
  double t244;
  double t253;
  double t255;
  double t260;
  double t268;
  double t346;
  double t297;
  double t304;
  double t312;
  double t321;
  double t322;
  double t323;
  double t358;
  double t360;
  double t362;
  double t367;
  double t387;
  double t392;
  double t395;
  double t397;
  double t400;
  double t405;
  double t68;
  double t99;
  double t107;
  double t118;
  double t127;
  double t40;
  double t60;
  double t497;
  double t148;
  double t149;
  double t503;
  double t174;
  double t180;
  double t186;
  double t195;
  double t200;
  double t500;
  double t504;
  double t508;
  double t512;
  double t513;
  double t514;
  double t223;
  double t228;
  double t229;
  double t262;
  double t275;
  double t285;
  double t519;
  double t522;
  double t527;
  double t530;
  double t531;
  double t534;
  double t338;
  double t339;
  double t351;
  double t352;
  double t354;
  double t370;
  double t373;
  double t374;
  double t375;
  double t382;
  double t542;
  double t544;
  double t550;
  double t551;
  double t554;
  double t555;
  double t571;
  double t574;
  double t427;
  double t430;
  double t584;
  double t586;
  double t589;
  double t592;
  double t473;
  double t474;
  double t660;
  double t661;
  double t663;
  double t666;
  double t670;
  double t687;
  double t693;
  double t696;
  double t697;
  double t712;
  double t720;
  double t725;
  double t736;
  double t737;
  double t739;
  double t740;
  double t746;
  double t750;
  double t752;
  double t753;
  double t763;
  double t772;
  double t775;
  double t784;
  double t863;
  double t865;
  double t866;
  double t873;
  double t842;
  double t843;
  double t844;
  double t846;
  double t848;
  double t891;
  double t894;
  double t923;
  double t869;
  double t985;
  double t989;
  double t992;
  double t999;
  double t957;
  double t949;
  double t952;
  double t953;
  double t972;
  double t974;
  double t977;
  double t1007;
  double t895;
  double t1017;
  double t877;
  double t998;
  double t1048;
  double t1050;
  double t1073;
  double t942;
  double t1025;
  double t926;
  double t1098;
  double t1020;
  double t1024;
  double t1027;
  double t1029;
  double t1030;
  double t1032;
  double t1034;
  double t1036;
  double t1107;
  double t1066;
  double t1068;
  double t1071;
  double t1074;
  double t1075;
  double t1076;
  double t1077;
  double t1082;
  double t1116;
  double t1117;
  double t1119;
  double t1121;
  double t1122;
  double t1124;
  double t1125;
  double t1127;
  double t1041;
  double t1145;
  double t1051;
  double t1163;
  double t1139;
  double t1000;
  double t857;
  double t868;
  double t888;
  double t890;
  double t898;
  double t908;
  double t910;
  double t853;
  double t855;
  double t913;
  double t917;
  double t919;
  double t922;
  double t932;
  double t940;
  double t943;
  double t944;
  double t945;
  double t955;
  double t956;
  double t962;
  double t963;
  double t964;
  double t967;
  double t969;
  double t983;
  double t995;
  double t1004;
  double t1005;
  double t1008;
  double t1009;
  double t1011;
  double t1211;
  double t1214;
  double t1215;
  double t1219;
  double t1224;
  double t1230;
  double t1039;
  double t1040;
  double t1042;
  double t1043;
  double t1052;
  double t1059;
  double t1064;
  double t1087;
  double t1088;
  double t1101;
  double t1106;
  double t1110;
  double t1113;
  double t1115;
  double t1140;
  double t1233;
  double t1234;
  double t1235;
  double t1237;
  double t1146;
  double t1240;
  double t1248;
  double t1253;
  double t1255;
  double t1149;
  double t1150;
  double t1261;
  double t1267;
  double t1269;
  double t1279;
  double t1165;
  double t1168;
  double t1169;
  double t1171;
  double t1181;
  double t1182;
  double t1184;
  double t1189;
  double t1326;
  double t1328;
  double t1331;
  double t1336;
  double t1338;
  double t1339;
  double t1343;
  double t1344;
  double t1345;
  double t1347;
  double t1357;
  double t1359;
  double t1361;
  double t1363;
  double t1368;
  double t1370;
  double t1371;
  double t1372;
  t69 = Cos(var1[10]);
  t8 = Cos(var1[4]);
  t25 = Cos(var1[9]);
  t26 = -1.*t25;
  t28 = 1. + t26;
  t42 = Sin(var1[9]);
  t59 = -0.15121*t42;
  t78 = -1.*t69;
  t84 = 1. + t78;
  t101 = -1. + t69;
  t108 = Sin(var1[10]);
  t19 = Cos(var1[5]);
  t164 = Sin(var1[5]);
  t139 = Sin(var1[4]);
  t203 = -1.*t8*t19*t42;
  t210 = -1.*t25*t8*t164;
  t217 = t203 + t210;
  t231 = t25*t8*t19;
  t239 = -1.*t8*t42*t164;
  t244 = t231 + t239;
  t253 = Cos(var1[11]);
  t255 = -1.*t253;
  t260 = 1. + t255;
  t268 = Sin(var1[11]);
  t346 = -1. + t253;
  t297 = t108*t139;
  t304 = -4.e-6*t108*t217;
  t312 = -1.000000000016*t84;
  t321 = 1. + t312;
  t322 = t321*t244;
  t323 = t297 + t304 + t322;
  t358 = t69*t139;
  t360 = 4.e-6*t84*t217;
  t362 = -1.*t108*t244;
  t367 = t358 + t360 + t362;
  t387 = 4.e-6*t84*t139;
  t392 = 1.6e-11*t101;
  t395 = 1. + t392;
  t397 = t395*t217;
  t400 = 4.e-6*t108*t244;
  t405 = t387 + t397 + t400;
  t68 = -4.9936e-13*var1[10];
  t99 = -0.038749*t84;
  t107 = 6.19984e-13*t101;
  t118 = -0.281210000004*t108;
  t127 = t68 + t99 + t107 + t118;
  t40 = 0.15121*t28;
  t60 = t40 + t59;
  t497 = Sin(var1[3]);
  t148 = -0.15121*t28;
  t149 = t148 + t59;
  t503 = Cos(var1[3]);
  t174 = -1.2484e-7*var1[10];
  t180 = 2.479936e-18*t84;
  t186 = -1.54996e-7*t101;
  t195 = 1.124840000016e-6*t108;
  t200 = t174 + t180 + t186 + t195;
  t500 = t19*t497*t139;
  t504 = t503*t164;
  t508 = t500 + t504;
  t512 = t503*t19;
  t513 = -1.*t497*t139*t164;
  t514 = t512 + t513;
  t223 = 0.281210000008499*t84;
  t228 = -0.03874900000062*t108;
  t229 = t223 + t228;
  t262 = 0.50315000001605*t260;
  t275 = -0.0398890000006382*t268;
  t285 = t262 + t275;
  t519 = -1.*t42*t508;
  t522 = t25*t514;
  t527 = t519 + t522;
  t530 = t25*t508;
  t531 = t42*t514;
  t534 = t530 + t531;
  t338 = -5.04e-14*var1[11];
  t339 = -0.039889*t260;
  t351 = 6.38224e-13*t346;
  t352 = -0.503150000008*t268;
  t354 = t338 + t339 + t351 + t352;
  t370 = -1.26e-8*var1[11];
  t373 = 2.552896e-18*t260;
  t374 = -1.59556e-7*t346;
  t375 = 2.012600000032e-6*t268;
  t382 = t370 + t373 + t374 + t375;
  t542 = -1.*t8*t108*t497;
  t544 = -4.e-6*t108*t527;
  t550 = t321*t534;
  t551 = t542 + t544 + t550;
  t554 = -1.*t69*t8*t497;
  t555 = 4.e-6*t84*t527;
  t571 = -1.*t108*t534;
  t574 = t554 + t555 + t571;
  t427 = 1.6e-11*t346;
  t430 = 1. + t427;
  t584 = -4.e-6*t84*t8*t497;
  t586 = t395*t527;
  t589 = 4.e-6*t108*t534;
  t592 = t584 + t586 + t589;
  t473 = -1.000000000016*t260;
  t474 = 1. + t473;
  t660 = -1.*t503*t19*t139;
  t661 = t497*t164;
  t663 = t660 + t661;
  t666 = t19*t497;
  t670 = t503*t139*t164;
  t687 = t666 + t670;
  t693 = -1.*t42*t663;
  t696 = t25*t687;
  t697 = t693 + t696;
  t712 = t25*t663;
  t720 = t42*t687;
  t725 = t712 + t720;
  t736 = t503*t8*t108;
  t737 = -4.e-6*t108*t697;
  t739 = t321*t725;
  t740 = t736 + t737 + t739;
  t746 = t69*t503*t8;
  t750 = 4.e-6*t84*t697;
  t752 = -1.*t108*t725;
  t753 = t746 + t750 + t752;
  t763 = 4.e-6*t84*t503*t8;
  t772 = t395*t697;
  t775 = 4.e-6*t108*t725;
  t784 = t763 + t772 + t775;
  t863 = Cos(var1[16]);
  t865 = -1.*t863;
  t866 = 1. + t865;
  t873 = Sin(var1[16]);
  t842 = Cos(var1[15]);
  t843 = -1.*t842;
  t844 = 1. + t843;
  t846 = -0.15121*t844;
  t848 = Sin(var1[15]);
  t891 = -1. + t863;
  t894 = 4.e-6*t891;
  t923 = 7.e-6*t866;
  t869 = 2.8e-11*t866;
  t985 = Cos(var1[17]);
  t989 = -1.*t985;
  t992 = 1. + t989;
  t999 = Sin(var1[17]);
  t957 = -4.e-6*t873;
  t949 = -1.*t8*t19*t848;
  t952 = -1.*t842*t8*t164;
  t953 = t949 + t952;
  t972 = t842*t8*t19;
  t974 = -1.*t8*t848*t164;
  t977 = t972 + t974;
  t1007 = 2.8e-11*t992;
  t895 = -7.e-6*t873;
  t1017 = -2.8e-11*t866;
  t877 = -1.*t873;
  t998 = 7.e-6*t992;
  t1048 = -1. + t985;
  t1050 = 4.e-6*t1048;
  t1073 = 4.e-6*t866;
  t942 = 7.e-6*t873;
  t1025 = -7.e-6*t866;
  t926 = 4.e-6*t873;
  t1098 = 4.e-6*t999;
  t1020 = t1017 + t873;
  t1024 = t1020*t139;
  t1027 = t1025 + t957;
  t1029 = t1027*t953;
  t1030 = -1.000000000016*t866;
  t1032 = 1. + t1030;
  t1034 = t1032*t977;
  t1036 = t1024 + t1029 + t1034;
  t1107 = 7.e-6*t999;
  t1066 = -1.000000000049*t866;
  t1068 = 1. + t1066;
  t1071 = t1068*t139;
  t1074 = t1073 + t895;
  t1075 = t1074*t953;
  t1076 = t1017 + t877;
  t1077 = t1076*t977;
  t1082 = t1071 + t1075 + t1077;
  t1116 = t1073 + t942;
  t1117 = t1116*t139;
  t1119 = -6.5e-11*t866;
  t1121 = 1. + t1119;
  t1122 = t1121*t953;
  t1124 = t1025 + t926;
  t1125 = t1124*t977;
  t1127 = t1117 + t1122 + t1125;
  t1041 = -1.*t999;
  t1145 = 4.e-6*t992;
  t1051 = -7.e-6*t999;
  t1163 = -2.8e-11*t992;
  t1139 = -7.e-6*t992;
  t1000 = -4.e-6*t999;
  t857 = 1.5843479999999999e-12*var1[16];
  t868 = -0.03874900000889869*t866;
  t888 = t869 + t877;
  t890 = -0.281211000004*t888;
  t898 = t894 + t895;
  t908 = -1.8134809999999998e-6*t898;
  t910 = t857 + t868 + t890 + t908;
  t853 = -0.15121*t848;
  t855 = t846 + t853;
  t913 = 0.15121*t848;
  t917 = t846 + t913;
  t919 = 3.9608699999999997e-7*var1[16];
  t922 = -1.1787626499999999e-16*t866;
  t932 = t923 + t926;
  t940 = -0.281211000004*t932;
  t943 = t894 + t942;
  t944 = -0.038749000006999997*t943;
  t945 = t919 + t922 + t940 + t944;
  t955 = -2.7726089999999997e-12*var1[16];
  t956 = -0.2812110000084994*t866;
  t962 = t923 + t957;
  t963 = -1.8134809999999998e-6*t962;
  t964 = t869 + t873;
  t967 = -0.038749000006999997*t964;
  t969 = t955 + t956 + t963 + t967;
  t983 = -1.9784030000000015e-12*var1[17];
  t995 = -0.5031510000160505*t992;
  t1004 = t998 + t1000;
  t1005 = -3.367757e-6*t1004;
  t1008 = t1007 + t999;
  t1009 = -0.038575000014*t1008;
  t1011 = t983 + t995 + t1005 + t1009;
  t1211 = -1.*t848*t508;
  t1214 = t842*t514;
  t1215 = t1211 + t1214;
  t1219 = t842*t508;
  t1224 = t848*t514;
  t1230 = t1219 + t1224;
  t1039 = 1.1305160000000008e-12*var1[17];
  t1040 = -0.03857500001589017*t992;
  t1042 = t1007 + t1041;
  t1043 = -0.5031510000080001*t1042;
  t1052 = t1050 + t1051;
  t1059 = -3.367757e-6*t1052;
  t1064 = t1039 + t1040 + t1043 + t1059;
  t1087 = 2.826290000000002e-7*var1[17];
  t1088 = -2.18904205e-16*t992;
  t1101 = t998 + t1098;
  t1106 = -0.5031510000080001*t1101;
  t1110 = t1050 + t1107;
  t1113 = -0.038575000014*t1110;
  t1115 = t1087 + t1088 + t1106 + t1113;
  t1140 = t1139 + t1098;
  t1233 = -1.*t8*t1020*t497;
  t1234 = t1027*t1215;
  t1235 = t1032*t1230;
  t1237 = t1233 + t1234 + t1235;
  t1146 = t1145 + t1107;
  t1240 = -1.*t1068*t8*t497;
  t1248 = t1074*t1215;
  t1253 = t1076*t1230;
  t1255 = t1240 + t1248 + t1253;
  t1149 = -6.5e-11*t992;
  t1150 = 1. + t1149;
  t1261 = -1.*t8*t1116*t497;
  t1267 = t1121*t1215;
  t1269 = t1124*t1230;
  t1279 = t1261 + t1267 + t1269;
  t1165 = t1163 + t1041;
  t1168 = -1.000000000049*t992;
  t1169 = 1. + t1168;
  t1171 = t1145 + t1051;
  t1181 = -1.000000000016*t992;
  t1182 = 1. + t1181;
  t1184 = t1163 + t999;
  t1189 = t1139 + t1000;
  t1326 = -1.*t848*t663;
  t1328 = t842*t687;
  t1331 = t1326 + t1328;
  t1336 = t842*t663;
  t1338 = t848*t687;
  t1339 = t1336 + t1338;
  t1343 = t503*t8*t1020;
  t1344 = t1027*t1331;
  t1345 = t1032*t1339;
  t1347 = t1343 + t1344 + t1345;
  t1357 = t1068*t503*t8;
  t1359 = t1074*t1331;
  t1361 = t1076*t1339;
  t1363 = t1357 + t1359 + t1361;
  t1368 = t503*t8*t1116;
  t1370 = t1121*t1331;
  t1371 = t1124*t1339;
  t1372 = t1368 + t1370 + t1371;
  p_output1[0]=t127*t139 + t200*t217 + t229*t244 + t285*t323 + t354*t367 + t382*t405 - 0.041195*(-1.*t268*t323 + t253*t367 + 4.e-6*t260*t405) - 0.14871*(4.e-6*t268*t323 + 4.e-6*t260*t367 + t405*t430) + 0.803147*(t268*t367 - 4.e-6*t268*t405 + t323*t474) - 1.*t149*t164*t8 + t19*t60*t8 + var1[0];
  p_output1[1]=t149*t514 + t200*t527 + t229*t534 + t285*t551 + t354*t574 + t382*t592 - 0.041195*(-1.*t268*t551 + t253*t574 + 4.e-6*t260*t592) + 0.803147*(t474*t551 + t268*t574 - 4.e-6*t268*t592) - 0.14871*(4.e-6*t268*t551 + 4.e-6*t260*t574 + t430*t592) + t508*t60 - 1.*t127*t497*t8 + var1[1];
  p_output1[2]=t60*t663 + t149*t687 + t200*t697 + t229*t725 + t285*t740 + t354*t753 + t382*t784 - 0.041195*(-1.*t268*t740 + t253*t753 + 4.e-6*t260*t784) + 0.803147*(t474*t740 + t268*t753 - 4.e-6*t268*t784) - 0.14871*(4.e-6*t268*t740 + 4.e-6*t260*t753 + t430*t784) + t127*t503*t8 + var1[2];
  p_output1[3]=t1011*t1036 + t1064*t1082 + t1115*t1127 - 0.148715*(t1036*t1140 + t1082*t1146 + t1127*t1150) - 0.038576*(t1036*t1165 + t1082*t1169 + t1127*t1171) - 0.80315*(t1036*t1182 + t1082*t1184 + t1127*t1189) + t19*t8*t855 + t139*t910 - 1.*t164*t8*t917 + t945*t953 + t969*t977 + var1[0];
  p_output1[4]=t1011*t1237 + t1064*t1255 + t1115*t1279 - 0.148715*(t1140*t1237 + t1146*t1255 + t1150*t1279) - 0.038576*(t1165*t1237 + t1169*t1255 + t1171*t1279) - 0.80315*(t1182*t1237 + t1184*t1255 + t1189*t1279) + t508*t855 - 1.*t497*t8*t910 + t514*t917 + t1215*t945 + t1230*t969 + var1[1];
  p_output1[5]=t1011*t1347 + t1064*t1363 + t1115*t1372 - 0.148715*(t1140*t1347 + t1146*t1363 + t1150*t1372) - 0.038576*(t1165*t1347 + t1169*t1363 + t1171*t1372) - 0.80315*(t1182*t1347 + t1184*t1363 + t1189*t1372) + t663*t855 + t503*t8*t910 + t687*t917 + t1331*t945 + t1339*t969 + var1[2];
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

#include "output_boundary_ParallelStance2.hh"

namespace ParallelStance2
{

void output_boundary_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
