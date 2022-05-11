/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:25:02 GMT+01:00
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
  double t413;
  double t461;
  double t463;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t311;
  double t474;
  double t479;
  double t481;
  double t483;
  double t498;
  double t529;
  double t521;
  double t523;
  double t525;
  double t530;
  double t532;
  double t534;
  double t538;
  double t546;
  double t551;
  double t556;
  double t557;
  double t558;
  double t559;
  double t566;
  double t567;
  double t568;
  double t569;
  double t576;
  double t580;
  double t584;
  double t585;
  double t590;
  double t595;
  double t335;
  double t344;
  double t375;
  double t430;
  double t454;
  double t482;
  double t485;
  double t486;
  double t627;
  double t632;
  double t637;
  double t492;
  double t493;
  double t504;
  double t509;
  double t514;
  double t516;
  double t517;
  double t518;
  double t519;
  double t520;
  double t528;
  double t533;
  double t537;
  double t539;
  double t540;
  double t645;
  double t646;
  double t647;
  double t561;
  double t562;
  double t563;
  double t564;
  double t565;
  double t571;
  double t572;
  double t573;
  double t649;
  double t650;
  double t651;
  double t652;
  double t654;
  double t655;
  double t656;
  double t657;
  double t603;
  double t604;
  double t659;
  double t660;
  double t664;
  double t668;
  double t613;
  double t614;
  double t698;
  double t706;
  double t710;
  double t714;
  double t719;
  double t729;
  double t730;
  double t731;
  double t732;
  double t734;
  double t735;
  double t736;
  double t737;
  double t781;
  double t782;
  double t783;
  double t785;
  double t788;
  double t789;
  double t793;
  double t796;
  double t800;
  double t801;
  double t809;
  double t813;
  double t814;
  double t815;
  double t817;
  double t818;
  double t819;
  double t820;
  double t777;
  double t778;
  double t858;
  double t859;
  double t860;
  double t862;
  double t863;
  double t864;
  double t866;
  double t867;
  double t868;
  double t869;
  double t871;
  double t875;
  double t879;
  double t883;
  double t891;
  double t892;
  double t893;
  double t894;
  double t934;
  double t935;
  double t936;
  double t938;
  double t939;
  double t940;
  double t942;
  double t943;
  double t944;
  double t945;
  double t947;
  double t948;
  double t949;
  double t950;
  double t959;
  double t964;
  double t969;
  double t970;
  double t996;
  double t1001;
  double t1006;
  double t1009;
  double t1010;
  double t1011;
  double t1013;
  double t1014;
  double t1015;
  double t1017;
  double t1018;
  double t1019;
  double t1020;
  double t1022;
  double t1026;
  double t1030;
  double t1034;
  double t1036;
  double t1037;
  double t1038;
  double t1039;
  double t1069;
  double t1070;
  double t1071;
  double t1073;
  double t1074;
  double t1075;
  double t1077;
  double t1082;
  double t1087;
  double t1091;
  double t1092;
  double t1093;
  double t1094;
  double t1096;
  double t1097;
  double t1098;
  double t1099;
  double t1101;
  double t1102;
  double t1103;
  double t1104;
  double t1122;
  double t1129;
  double t1130;
  double t1131;
  double t1133;
  double t1134;
  double t1135;
  double t1137;
  double t1138;
  double t1139;
  double t1141;
  double t1142;
  double t1143;
  double t1123;
  double t1124;
  double t1126;
  double t1162;
  double t1163;
  double t1164;
  double t1166;
  double t1167;
  double t1168;
  double t1170;
  double t1171;
  double t1173;
  double t1174;
  double t1175;
  double t1177;
  double t1178;
  double t1179;
  double t1181;
  double t1182;
  double t1183;
  double t1203;
  double t1204;
  double t1205;
  double t1207;
  double t1208;
  double t1209;
  double t1211;
  double t1212;
  double t1213;
  double t1215;
  double t1216;
  double t1217;
  double t1219;
  double t1220;
  double t1221;
  double t1250;
  double t1251;
  double t1252;
  double t1254;
  double t1255;
  double t1256;
  double t1257;
  double t1259;
  double t1260;
  double t1261;
  double t1239;
  double t1240;
  double t1242;
  double t1243;
  double t1244;
  double t1246;
  double t1247;
  double t1248;
  double t1281;
  double t1282;
  double t1283;
  double t1285;
  double t1286;
  double t1287;
  double t1289;
  double t1290;
  double t1291;
  double t1292;
  double t1294;
  double t1295;
  double t1296;
  double t1297;
  double t1317;
  double t1318;
  double t1319;
  double t1321;
  double t1322;
  double t1323;
  double t1325;
  double t1326;
  double t1327;
  double t1328;
  double t1330;
  double t1331;
  double t1332;
  double t1333;
  double t1112;
  double t1351;
  double t1352;
  double t1353;
  double t1355;
  double t1356;
  double t1358;
  double t1359;
  double t1360;
  double t1377;
  double t1378;
  double t1379;
  double t1380;
  double t1382;
  double t1383;
  double t1384;
  double t1386;
  double t1387;
  double t1388;
  double t1389;
  double t1407;
  double t1408;
  double t1409;
  double t1410;
  double t1412;
  double t1413;
  double t1414;
  double t1416;
  double t1417;
  double t1418;
  double t1419;
  t413 = Sin(var1[6]);
  t461 = Cos(var1[5]);
  t463 = Cos(var1[3]);
  t465 = Sin(var1[4]);
  t466 = t461*t463*t465;
  t467 = Sin(var1[5]);
  t468 = Sin(var1[3]);
  t469 = t467*t468;
  t470 = t466 + t469;
  t311 = Cos(var1[6]);
  t474 = Cos(var1[7]);
  t479 = -1.*t474;
  t481 = 1. + t479;
  t483 = Sin(var1[7]);
  t498 = -1. + t474;
  t529 = Cos(var1[8]);
  t521 = t463*t467;
  t523 = -1.*t461*t465*t468;
  t525 = t521 + t523;
  t530 = -1.*t529;
  t532 = 1. + t530;
  t534 = -1. + t529;
  t538 = Sin(var1[8]);
  t546 = 1.6e-11*t498;
  t551 = 1. + t546;
  t556 = t311*t551*t470;
  t557 = 4.e-6*t413*t483*t470;
  t558 = 4.e-6*t481*t525;
  t559 = t556 + t557 + t558;
  t566 = 4.e-6*t311*t481*t470;
  t567 = -1.*t413*t483*t470;
  t568 = t474*t525;
  t569 = t566 + t567 + t568;
  t576 = -1.000000000016*t481;
  t580 = 1. + t576;
  t584 = t580*t413*t470;
  t585 = -4.e-6*t311*t483*t470;
  t590 = t483*t525;
  t595 = t584 + t585 + t590;
  t335 = -1.*t311;
  t344 = 1. + t335;
  t375 = -0.15121*t344;
  t430 = -0.15121*t413;
  t454 = t375 + t430;
  t482 = 0.281210000008499*t481;
  t485 = -0.03874900000062*t483;
  t486 = t482 + t485;
  t627 = t463*t467*t465;
  t632 = -1.*t461*t468;
  t637 = t627 + t632;
  t492 = -1.2484e-7*var1[7];
  t493 = 2.479936e-18*t481;
  t504 = -1.54996e-7*t498;
  t509 = 1.124840000016e-6*t483;
  t514 = t492 + t493 + t504 + t509;
  t516 = -4.9936e-13*var1[7];
  t517 = -0.038749*t481;
  t518 = 6.19984e-13*t498;
  t519 = -0.281210000004*t483;
  t520 = t516 + t517 + t518 + t519;
  t528 = -1.26e-8*var1[8];
  t533 = 2.552896e-18*t532;
  t537 = -1.59556e-7*t534;
  t539 = 2.012600000032e-6*t538;
  t540 = t528 + t533 + t537 + t539;
  t645 = -1.*t461*t463;
  t646 = -1.*t467*t465*t468;
  t647 = t645 + t646;
  t561 = -5.04e-14*var1[8];
  t562 = -0.039889*t532;
  t563 = 6.38224e-13*t534;
  t564 = -0.503150000008*t538;
  t565 = t561 + t562 + t563 + t564;
  t571 = 0.50315000001605*t532;
  t572 = -0.0398890000006382*t538;
  t573 = t571 + t572;
  t649 = t311*t551*t637;
  t650 = 4.e-6*t413*t483*t637;
  t651 = 4.e-6*t481*t647;
  t652 = t649 + t650 + t651;
  t654 = 4.e-6*t311*t481*t637;
  t655 = -1.*t413*t483*t637;
  t656 = t474*t647;
  t657 = t654 + t655 + t656;
  t603 = -1.000000000016*t532;
  t604 = 1. + t603;
  t659 = t580*t413*t637;
  t660 = -4.e-6*t311*t483*t637;
  t664 = t483*t647;
  t668 = t659 + t660 + t664;
  t613 = 1.6e-11*t534;
  t614 = 1. + t613;
  t698 = Cos(var1[4]);
  t706 = t311*t551*t698*t463;
  t710 = 4.e-6*t698*t463*t413*t483;
  t714 = -4.e-6*t481*t698*t468;
  t719 = t706 + t710 + t714;
  t729 = 4.e-6*t311*t481*t698*t463;
  t730 = -1.*t698*t463*t413*t483;
  t731 = -1.*t474*t698*t468;
  t732 = t729 + t730 + t731;
  t734 = t580*t698*t463*t413;
  t735 = -4.e-6*t311*t698*t463*t483;
  t736 = -1.*t698*t483*t468;
  t737 = t734 + t735 + t736;
  t781 = t461*t413*t465;
  t782 = t311*t461*t698*t468;
  t783 = t781 + t782;
  t785 = -1.*t311*t461*t465;
  t788 = t461*t698*t413*t468;
  t789 = t785 + t788;
  t793 = t461*t698*t463*t483;
  t796 = -4.e-6*t483*t783;
  t800 = t580*t789;
  t801 = t793 + t796 + t800;
  t809 = t474*t461*t698*t463;
  t813 = 4.e-6*t481*t783;
  t814 = -1.*t483*t789;
  t815 = t809 + t813 + t814;
  t817 = 4.e-6*t481*t461*t698*t463;
  t818 = t551*t783;
  t819 = 4.e-6*t483*t789;
  t820 = t817 + t818 + t819;
  t777 = 0.15121*t344;
  t778 = t777 + t430;
  t858 = t413*t467*t465;
  t859 = t311*t698*t467*t468;
  t860 = t858 + t859;
  t862 = -1.*t311*t467*t465;
  t863 = t698*t413*t467*t468;
  t864 = t862 + t863;
  t866 = t698*t463*t483*t467;
  t867 = -4.e-6*t483*t860;
  t868 = t580*t864;
  t869 = t866 + t867 + t868;
  t871 = t474*t698*t463*t467;
  t875 = 4.e-6*t481*t860;
  t879 = -1.*t483*t864;
  t883 = t871 + t875 + t879;
  t891 = 4.e-6*t481*t698*t463*t467;
  t892 = t551*t860;
  t893 = 4.e-6*t483*t864;
  t894 = t891 + t892 + t893;
  t934 = t698*t413;
  t935 = -1.*t311*t465*t468;
  t936 = t934 + t935;
  t938 = -1.*t311*t698;
  t939 = -1.*t413*t465*t468;
  t940 = t938 + t939;
  t942 = -1.*t463*t483*t465;
  t943 = -4.e-6*t483*t936;
  t944 = t580*t940;
  t945 = t942 + t943 + t944;
  t947 = -1.*t474*t463*t465;
  t948 = 4.e-6*t481*t936;
  t949 = -1.*t483*t940;
  t950 = t947 + t948 + t949;
  t959 = -4.e-6*t481*t463*t465;
  t964 = t551*t936;
  t969 = 4.e-6*t483*t940;
  t970 = t959 + t964 + t969;
  t996 = -1.*t463*t467*t465;
  t1001 = t461*t468;
  t1006 = t996 + t1001;
  t1009 = t698*t413*t467;
  t1010 = t311*t647;
  t1011 = t1009 + t1010;
  t1013 = -1.*t311*t698*t467;
  t1014 = t413*t647;
  t1015 = t1013 + t1014;
  t1017 = t483*t1006;
  t1018 = -4.e-6*t483*t1011;
  t1019 = t580*t1015;
  t1020 = t1017 + t1018 + t1019;
  t1022 = t474*t1006;
  t1026 = 4.e-6*t481*t1011;
  t1030 = -1.*t483*t1015;
  t1034 = t1022 + t1026 + t1030;
  t1036 = 4.e-6*t481*t1006;
  t1037 = t551*t1011;
  t1038 = 4.e-6*t483*t1015;
  t1039 = t1036 + t1037 + t1038;
  t1069 = -1.*t463*t467;
  t1070 = t461*t465*t468;
  t1071 = t1069 + t1070;
  t1073 = -1.*t461*t698*t413;
  t1074 = t311*t1071;
  t1075 = t1073 + t1074;
  t1077 = t311*t461*t698;
  t1082 = t413*t1071;
  t1087 = t1077 + t1082;
  t1091 = t483*t470;
  t1092 = -4.e-6*t483*t1075;
  t1093 = t580*t1087;
  t1094 = t1091 + t1092 + t1093;
  t1096 = t474*t470;
  t1097 = 4.e-6*t481*t1075;
  t1098 = -1.*t483*t1087;
  t1099 = t1096 + t1097 + t1098;
  t1101 = 4.e-6*t481*t470;
  t1102 = t551*t1075;
  t1103 = 4.e-6*t483*t1087;
  t1104 = t1101 + t1102 + t1103;
  t1122 = -0.15121*t311;
  t1129 = -1.*t311*t461*t698;
  t1130 = -1.*t413*t1071;
  t1131 = t1129 + t1130;
  t1133 = 4.e-6*t483*t1075;
  t1134 = t551*t1131;
  t1135 = t1133 + t1134;
  t1137 = -1.*t483*t1075;
  t1138 = 4.e-6*t481*t1131;
  t1139 = t1137 + t1138;
  t1141 = t580*t1075;
  t1142 = -4.e-6*t483*t1131;
  t1143 = t1141 + t1142;
  t1123 = 0.15121*t413;
  t1124 = t1122 + t1123;
  t1126 = t1122 + t430;
  t1162 = t461*t463;
  t1163 = t467*t465*t468;
  t1164 = t1162 + t1163;
  t1166 = -1.*t698*t413*t467;
  t1167 = t311*t1164;
  t1168 = t1166 + t1167;
  t1170 = -1.*t413*t1164;
  t1171 = t1013 + t1170;
  t1173 = 4.e-6*t483*t1168;
  t1174 = t551*t1171;
  t1175 = t1173 + t1174;
  t1177 = -1.*t483*t1168;
  t1178 = 4.e-6*t481*t1171;
  t1179 = t1177 + t1178;
  t1181 = t580*t1168;
  t1182 = -4.e-6*t483*t1171;
  t1183 = t1181 + t1182;
  t1203 = t413*t465;
  t1204 = t311*t698*t468;
  t1205 = t1203 + t1204;
  t1207 = t311*t465;
  t1208 = -1.*t698*t413*t468;
  t1209 = t1207 + t1208;
  t1211 = 4.e-6*t483*t1205;
  t1212 = t551*t1209;
  t1213 = t1211 + t1212;
  t1215 = -1.*t483*t1205;
  t1216 = 4.e-6*t481*t1209;
  t1217 = t1215 + t1216;
  t1219 = t580*t1205;
  t1220 = -4.e-6*t483*t1209;
  t1221 = t1219 + t1220;
  t1250 = -1.*t483*t470;
  t1251 = -1.*t474*t1087;
  t1252 = t1250 + t1133 + t1251;
  t1254 = 4.e-6*t483*t470;
  t1255 = -1.6e-11*t483*t1075;
  t1256 = 4.e-6*t474*t1087;
  t1257 = t1254 + t1255 + t1256;
  t1259 = -4.e-6*t474*t1075;
  t1260 = -1.000000000016*t483*t1087;
  t1261 = t1096 + t1259 + t1260;
  t1239 = -0.281210000004*t474;
  t1240 = -4.9936e-13 + t1239 + t485;
  t1242 = 1.124840000016e-6*t474;
  t1243 = 1.5499600000248e-7*t483;
  t1244 = -1.2484e-7 + t1242 + t1243;
  t1246 = -0.03874900000062*t474;
  t1247 = 0.281210000008499*t483;
  t1248 = t1246 + t1247;
  t1281 = t311*t698*t467;
  t1282 = t413*t1164;
  t1283 = t1281 + t1282;
  t1285 = -1.*t483*t637;
  t1286 = -1.*t474*t1283;
  t1287 = t1285 + t1173 + t1286;
  t1289 = 4.e-6*t483*t637;
  t1290 = -1.6e-11*t483*t1168;
  t1291 = 4.e-6*t474*t1283;
  t1292 = t1289 + t1290 + t1291;
  t1294 = t474*t637;
  t1295 = -4.e-6*t474*t1168;
  t1296 = -1.000000000016*t483*t1283;
  t1297 = t1294 + t1295 + t1296;
  t1317 = -1.*t311*t465;
  t1318 = t698*t413*t468;
  t1319 = t1317 + t1318;
  t1321 = -1.*t698*t463*t483;
  t1322 = -1.*t474*t1319;
  t1323 = t1321 + t1211 + t1322;
  t1325 = 4.e-6*t698*t463*t483;
  t1326 = -1.6e-11*t483*t1205;
  t1327 = 4.e-6*t474*t1319;
  t1328 = t1325 + t1326 + t1327;
  t1330 = t474*t698*t463;
  t1331 = -4.e-6*t474*t1205;
  t1332 = -1.000000000016*t483*t1319;
  t1333 = t1330 + t1331 + t1332;
  t1112 = t529*t1099;
  t1351 = -0.0398890000006382*t529;
  t1352 = 0.50315000001605*t538;
  t1353 = t1351 + t1352;
  t1355 = -0.503150000008*t529;
  t1356 = -5.04e-14 + t1355 + t572;
  t1358 = 2.012600000032e-6*t529;
  t1359 = 1.59556000002553e-7*t538;
  t1360 = -1.26e-8 + t1358 + t1359;
  t1377 = t483*t637;
  t1378 = -4.e-6*t483*t1168;
  t1379 = t580*t1283;
  t1380 = t1377 + t1378 + t1379;
  t1382 = 4.e-6*t481*t1168;
  t1383 = -1.*t483*t1283;
  t1384 = t1294 + t1382 + t1383;
  t1386 = 4.e-6*t481*t637;
  t1387 = t551*t1168;
  t1388 = 4.e-6*t483*t1283;
  t1389 = t1386 + t1387 + t1388;
  t1407 = t698*t463*t483;
  t1408 = -4.e-6*t483*t1205;
  t1409 = t580*t1319;
  t1410 = t1407 + t1408 + t1409;
  t1412 = 4.e-6*t481*t1205;
  t1413 = -1.*t483*t1319;
  t1414 = t1330 + t1412 + t1413;
  t1416 = 4.e-6*t481*t698*t463;
  t1417 = t551*t1205;
  t1418 = 4.e-6*t483*t1319;
  t1419 = t1416 + t1417 + t1418;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t454*t470 + t413*t470*t486 + t311*t470*t514 + t520*t525 + t540*t559 + t565*t569 + t573*t595 - 0.041195*(4.e-6*t532*t559 + t529*t569 - 1.*t538*t595) + 0.803147*(-4.e-6*t538*t559 + t538*t569 + t595*t604) - 0.14871*(4.e-6*t532*t569 + 4.e-6*t538*t595 + t559*t614);
  p_output1[10]=t454*t637 + t413*t486*t637 + t311*t514*t637 + t520*t647 + t540*t652 + t565*t657 + t573*t668 - 0.041195*(4.e-6*t532*t652 + t529*t657 - 1.*t538*t668) - 0.14871*(t614*t652 + 4.e-6*t532*t657 + 4.e-6*t538*t668) + 0.803147*(-4.e-6*t538*t652 + t538*t657 + t604*t668);
  p_output1[11]=t454*t463*t698 + t413*t463*t486*t698 + t311*t463*t514*t698 - 1.*t468*t520*t698 + t540*t719 + t565*t732 + t573*t737 - 0.041195*(4.e-6*t532*t719 + t529*t732 - 1.*t538*t737) - 0.14871*(t614*t719 + 4.e-6*t532*t732 + 4.e-6*t538*t737) + 0.803147*(-4.e-6*t538*t719 + t538*t732 + t604*t737);
  p_output1[12]=t454*t461*t468*t698 + t461*t463*t520*t698 - 1.*t461*t465*t778 + t514*t783 + t486*t789 + t573*t801 + t565*t815 + t540*t820 - 0.041195*(-1.*t538*t801 + t529*t815 + 4.e-6*t532*t820) + 0.803147*(t604*t801 + t538*t815 - 4.e-6*t538*t820) - 0.14871*(4.e-6*t538*t801 + 4.e-6*t532*t815 + t614*t820);
  p_output1[13]=t454*t467*t468*t698 + t463*t467*t520*t698 - 1.*t465*t467*t778 + t514*t860 + t486*t864 + t573*t869 + t565*t883 + t540*t894 - 0.041195*(-1.*t538*t869 + t529*t883 + 4.e-6*t532*t894) + 0.803147*(t604*t869 + t538*t883 - 4.e-6*t538*t894) - 0.14871*(4.e-6*t538*t869 + 4.e-6*t532*t883 + t614*t894);
  p_output1[14]=-1.*t454*t465*t468 - 1.*t463*t465*t520 - 1.*t698*t778 + t514*t936 + t486*t940 + t573*t945 + t565*t950 + t540*t970 - 0.041195*(-1.*t538*t945 + t529*t950 + 4.e-6*t532*t970) + 0.803147*(t604*t945 + t538*t950 - 4.e-6*t538*t970) - 0.14871*(4.e-6*t538*t945 + 4.e-6*t532*t950 + t614*t970);
  p_output1[15]=t1015*t486 + t1011*t514 + t1006*t520 - 0.041195*(t1034*t529 + 4.e-6*t1039*t532 - 1.*t1020*t538) + t1039*t540 + t1034*t565 + t1020*t573 + 0.803147*(t1034*t538 - 4.e-6*t1039*t538 + t1020*t604) - 0.14871*(4.e-6*t1034*t532 + 4.e-6*t1020*t538 + t1039*t614) + t454*t647 - 1.*t467*t698*t778;
  p_output1[16]=t1071*t454 + t1087*t486 + t1075*t514 + t470*t520 - 0.041195*(t1112 + 4.e-6*t1104*t532 - 1.*t1094*t538) + t1104*t540 + t1099*t565 + t1094*t573 + 0.803147*(t1099*t538 - 4.e-6*t1104*t538 + t1094*t604) - 0.14871*(4.e-6*t1099*t532 + 4.e-6*t1094*t538 + t1104*t614) + t461*t698*t778;
  p_output1[17]=0;
  p_output1[18]=t1071*t1126 + t1075*t486 + t1131*t514 - 0.041195*(t1139*t529 + 4.e-6*t1135*t532 - 1.*t1143*t538) + t1135*t540 + t1139*t565 + t1143*t573 + 0.803147*(-4.e-6*t1135*t538 + t1139*t538 + t1143*t604) - 0.14871*(4.e-6*t1139*t532 + 4.e-6*t1143*t538 + t1135*t614) + t1124*t461*t698;
  p_output1[19]=t1126*t1164 + t1168*t486 + t1171*t514 - 0.041195*(t1179*t529 + 4.e-6*t1175*t532 - 1.*t1183*t538) + t1175*t540 + t1179*t565 + t1183*t573 + 0.803147*(-4.e-6*t1175*t538 + t1179*t538 + t1183*t604) - 0.14871*(4.e-6*t1179*t532 + 4.e-6*t1183*t538 + t1175*t614) + t1124*t467*t698;
  p_output1[20]=-1.*t1124*t465 + t1205*t486 + t1209*t514 - 0.041195*(t1217*t529 + 4.e-6*t1213*t532 - 1.*t1221*t538) + t1213*t540 + t1217*t565 + t1221*t573 + 0.803147*(-4.e-6*t1213*t538 + t1217*t538 + t1221*t604) - 0.14871*(4.e-6*t1217*t532 + 4.e-6*t1221*t538 + t1213*t614) + t1126*t468*t698;
  p_output1[21]=t1075*t1244 + t1087*t1248 + t1240*t470 - 0.041195*(t1252*t529 + 4.e-6*t1257*t532 - 1.*t1261*t538) + t1257*t540 + t1252*t565 + t1261*t573 + 0.803147*(t1252*t538 - 4.e-6*t1257*t538 + t1261*t604) - 0.14871*(4.e-6*t1252*t532 + 4.e-6*t1261*t538 + t1257*t614);
  p_output1[22]=t1168*t1244 + t1248*t1283 - 0.041195*(t1287*t529 + 4.e-6*t1292*t532 - 1.*t1297*t538) + t1292*t540 + t1287*t565 + t1297*t573 + 0.803147*(t1287*t538 - 4.e-6*t1292*t538 + t1297*t604) - 0.14871*(4.e-6*t1287*t532 + 4.e-6*t1297*t538 + t1292*t614) + t1240*t637;
  p_output1[23]=t1205*t1244 + t1248*t1319 - 0.041195*(t1323*t529 + 4.e-6*t1328*t532 - 1.*t1333*t538) + t1328*t540 + t1323*t565 + t1333*t573 + 0.803147*(t1323*t538 - 4.e-6*t1328*t538 + t1333*t604) - 0.14871*(4.e-6*t1323*t532 + 4.e-6*t1333*t538 + t1328*t614) + t1240*t463*t698;
  p_output1[24]=t1094*t1353 + t1099*t1356 + t1104*t1360 + 0.803147*(t1112 - 4.e-6*t1104*t529 - 1.000000000016*t1094*t538) - 0.14871*(4.e-6*t1094*t529 + 4.e-6*t1099*t538 - 1.6e-11*t1104*t538) - 0.041195*(-1.*t1094*t529 - 1.*t1099*t538 + 4.e-6*t1104*t538);
  p_output1[25]=t1353*t1380 + t1356*t1384 + t1360*t1389 + 0.803147*(t1384*t529 - 4.e-6*t1389*t529 - 1.000000000016*t1380*t538) - 0.14871*(4.e-6*t1380*t529 + 4.e-6*t1384*t538 - 1.6e-11*t1389*t538) - 0.041195*(-1.*t1380*t529 - 1.*t1384*t538 + 4.e-6*t1389*t538);
  p_output1[26]=t1353*t1410 + t1356*t1414 + t1360*t1419 + 0.803147*(t1414*t529 - 4.e-6*t1419*t529 - 1.000000000016*t1410*t538) - 0.14871*(4.e-6*t1410*t529 + 4.e-6*t1414*t538 - 1.6e-11*t1419*t538) - 0.041195*(-1.*t1410*t529 - 1.*t1414*t538 + 4.e-6*t1419*t538);
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_fr.hh"

namespace SymFunction
{

void J_fr_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
