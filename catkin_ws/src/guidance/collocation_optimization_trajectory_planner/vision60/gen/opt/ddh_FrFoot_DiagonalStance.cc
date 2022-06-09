/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:26 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t339;
  double t360;
  double t343;
  double t365;
  double t366;
  double t367;
  double t385;
  double t392;
  double t396;
  double t400;
  double t401;
  double t402;
  double t403;
  double t414;
  double t415;
  double t205;
  double t421;
  double t422;
  double t423;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  double t433;
  double t444;
  double t440;
  double t450;
  double t452;
  double t453;
  double t454;
  double t218;
  double t219;
  double t448;
  double t455;
  double t456;
  double t466;
  double t467;
  double t468;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t463;
  double t457;
  double t464;
  double t465;
  double t469;
  double t470;
  double t471;
  double t472;
  double t473;
  double t476;
  double t480;
  double t482;
  double t486;
  double t487;
  double t491;
  double t256;
  double t496;
  double t498;
  double t257;
  double t510;
  double t511;
  double t512;
  double t528;
  double t529;
  double t530;
  double t531;
  double t532;
  double t536;
  double t514;
  double t515;
  double t519;
  double t522;
  double t523;
  double t524;
  double t562;
  double t563;
  double t564;
  double t565;
  double t566;
  double t567;
  double t571;
  double t572;
  double t573;
  double t574;
  double t575;
  double t583;
  double t589;
  double t590;
  double t616;
  double t617;
  double t622;
  double t593;
  double t594;
  double t598;
  double t602;
  double t606;
  double t607;
  double t611;
  double t624;
  double t625;
  double t626;
  double t627;
  double t628;
  double t632;
  double t636;
  double t640;
  double t641;
  double t642;
  double t643;
  double t503;
  double t504;
  double t508;
  double t662;
  double t663;
  double t664;
  double t656;
  double t660;
  double t661;
  double t678;
  double t679;
  double t680;
  double t665;
  double t666;
  double t667;
  double t672;
  double t681;
  double t682;
  double t689;
  double t693;
  double t697;
  double t698;
  double t699;
  double t700;
  double t701;
  double t702;
  double t703;
  double t709;
  double t714;
  double t715;
  double t740;
  double t741;
  double t742;
  double t744;
  double t751;
  double t752;
  double t753;
  double t755;
  double t757;
  double t788;
  double t789;
  double t790;
  double t798;
  double t799;
  double t825;
  double t826;
  double t827;
  double t796;
  double t800;
  double t805;
  double t807;
  double t836;
  double t837;
  double t841;
  double t845;
  double t846;
  double t860;
  double t861;
  double t863;
  double t865;
  double t866;
  double t867;
  double t869;
  double t870;
  double t871;
  double t898;
  double t899;
  double t900;
  double t904;
  double t905;
  double t906;
  double t941;
  double t942;
  double t943;
  double t961;
  double t962;
  double t954;
  double t955;
  double t956;
  double t957;
  double t952;
  double t960;
  double t963;
  double t997;
  double t998;
  double t999;
  double t988;
  double t989;
  double t990;
  double t993;
  double t994;
  double t995;
  double t1005;
  double t1007;
  double t1008;
  double t1000;
  double t1004;
  double t1013;
  double t1019;
  double t1020;
  double t1021;
  double t1023;
  double t1024;
  double t1025;
  double t1029;
  double t1030;
  double t1031;
  double t1050;
  double t1051;
  double t1052;
  double t964;
  double t1071;
  double t1072;
  double t1073;
  double t1082;
  double t1083;
  double t1084;
  double t1088;
  double t1089;
  double t1093;
  double t1096;
  double t1097;
  double t1098;
  double t1063;
  double t1064;
  double t1061;
  double t1074;
  double t1115;
  double t1116;
  double t1117;
  double t1111;
  double t1112;
  double t1113;
  double t1118;
  double t1122;
  double t1123;
  double t1134;
  double t1135;
  double t1137;
  double t1140;
  double t1142;
  double t1143;
  double t1062;
  double t1070;
  double t1161;
  double t1163;
  double t1165;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1170;
  double t1173;
  double t1174;
  double t1175;
  double t1176;
  double t1177;
  double t1178;
  double t1179;
  double t1194;
  double t1195;
  double t1196;
  double t1199;
  double t1200;
  double t1201;
  double t1190;
  double t1191;
  double t1192;
  double t1121;
  double t1214;
  double t1215;
  double t1216;
  double t1217;
  double t1218;
  double t1219;
  double t1220;
  double t1183;
  double t1184;
  double t1185;
  double t1209;
  double t1210;
  double t1211;
  double t1147;
  double t1148;
  double t1240;
  double t1241;
  double t1242;
  double t1243;
  double t1244;
  double t1245;
  double t1246;
  double t1230;
  double t1231;
  double t1232;
  double t1234;
  double t1236;
  double t1238;
  double t874;
  double t875;
  double t877;
  double t1261;
  double t1263;
  double t1268;
  double t1270;
  double t1286;
  double t1288;
  double t814;
  double t816;
  double t820;
  double t1293;
  double t1294;
  double t885;
  double t886;
  double t887;
  double t1329;
  double t1331;
  double t1337;
  double t1339;
  double t911;
  double t915;
  double t916;
  double t923;
  double t924;
  double t927;
  double t1387;
  double t1388;
  double t1395;
  double t1393;
  double t1385;
  double t1389;
  double t1415;
  double t1418;
  double t1420;
  double t1036;
  double t1037;
  double t1038;
  double t1446;
  double t1447;
  double t1452;
  double t1457;
  double t1453;
  double t1455;
  double t1444;
  double t1448;
  double t1475;
  double t1478;
  double t1081;
  double t1085;
  double t1086;
  double t1483;
  double t1484;
  double t1515;
  double t1516;
  double t1517;
  double t1518;
  double t1445;
  double t1521;
  double t1522;
  double t1523;
  double t1524;
  double t1525;
  double t1526;
  double t1527;
  double t970;
  double t1534;
  double t1535;
  double t1536;
  double t1482;
  double t1547;
  double t1548;
  double t1549;
  double t1550;
  double t1551;
  double t1552;
  double t1553;
  double t971;
  double t977;
  double t978;
  double t979;
  double t982;
  double t984;
  double t986;
  double t987;
  double t1530;
  double t1531;
  double t1532;
  double t1543;
  double t1544;
  double t1545;
  double t1498;
  double t1499;
  double t1566;
  double t1567;
  double t1568;
  double t1569;
  double t1570;
  double t1571;
  double t1572;
  double t1558;
  double t1559;
  double t1560;
  double t1562;
  double t1563;
  double t1564;
  double t1601;
  double t1605;
  double t1607;
  double t1634;
  double t1636;
  double t838;
  double t1640;
  double t1642;
  double t1658;
  double t1661;
  double t1665;
  double t1667;
  double t544;
  double t582;
  double t592;
  double t1718;
  double t1720;
  double t1730;
  double t1733;
  double t1736;
  double t1758;
  double t1777;
  double t1781;
  t339 = Cos(var1[14]);
  t360 = Sin(var1[14]);
  t343 = -0.0641*t339;
  t365 = -0.28*t360;
  t366 = t343 + t365;
  t367 = -1.*t339*t366;
  t385 = 0.325*t360;
  t392 = -1.*t339;
  t396 = 1. + t392;
  t400 = 0.075*t396;
  t401 = 0.355*t339;
  t402 = -0.0641*t360;
  t403 = t400 + t401 + t402;
  t414 = -1.*t403*t360;
  t415 = t367 + t385 + t414;
  t205 = Cos(var1[13]);
  t421 = Sin(var1[13]);
  t422 = t339*t421;
  t423 = -1.*t205*t360;
  t424 = t422 + t423;
  t425 = 0.1575*t424;
  t426 = -1.*t339*t421;
  t427 = t205*t360;
  t428 = t426 + t427;
  t429 = 0.2255*t428;
  t433 = t425 + t429;
  t444 = Sin(var1[12]);
  t440 = Cos(var1[12]);
  t450 = -0.325*t421;
  t452 = t205*t366;
  t453 = t421*t403;
  t454 = t450 + t452 + t453;
  t218 = -1.*t205;
  t219 = 1. + t218;
  t448 = -0.068*t444;
  t455 = t440*t454;
  t456 = t448 + t455;
  t466 = t205*t339;
  t467 = t421*t360;
  t468 = t466 + t467;
  t458 = -1.*t440;
  t459 = 1. + t458;
  t460 = -0.1575*t459;
  t461 = -0.2255*t440;
  t462 = -1.*t444*t454;
  t463 = t460 + t461 + t462;
  t457 = -1.*t444*t456;
  t464 = -1.*t440*t463;
  t465 = t457 + t464;
  t469 = t440*t465*t468;
  t470 = 0.325*t219;
  t471 = -1.*t421*t366;
  t472 = t205*t403;
  t473 = t470 + t471 + t472;
  t476 = t473*t428;
  t480 = t440*t456*t468;
  t482 = -1.*t444*t463*t468;
  t486 = t476 + t480 + t482;
  t487 = t444*t486;
  t491 = t469 + t487;
  t256 = Cos(var1[4]);
  t496 = Sin(var1[4]);
  t498 = Sin(var1[5]);
  t257 = Cos(var1[5]);
  t510 = t440*t496;
  t511 = t256*t444*t498;
  t512 = t510 + t511;
  t528 = t440*t424*t496;
  t529 = t257*t468;
  t530 = t444*t424*t498;
  t531 = t529 + t530;
  t532 = t256*t531;
  t536 = t528 + t532;
  t514 = -1.*t256*t257*t421;
  t515 = t205*t512;
  t519 = t514 + t515;
  t522 = t205*t256*t257;
  t523 = t421*t512;
  t524 = t522 + t523;
  t562 = Sin(var1[3]);
  t563 = -1.*t257*t444*t424;
  t564 = t468*t498;
  t565 = t563 + t564;
  t566 = t562*t565;
  t567 = Cos(var1[3]);
  t571 = t440*t256*t424;
  t572 = -1.*t496*t531;
  t573 = t571 + t572;
  t574 = t567*t573;
  t575 = t566 + t574;
  t583 = t567*t565;
  t589 = -1.*t562*t573;
  t590 = t583 + t589;
  t616 = t257*t463;
  t617 = t473*t498;
  t622 = t616 + t617;
  t593 = -1.*t257*t444*t468;
  t594 = t428*t498;
  t598 = t593 + t594;
  t602 = t257*t473;
  t606 = -1.*t463*t498;
  t607 = t602 + t606;
  t611 = t440*t498*t607;
  t624 = -1.*t440*t257*t622;
  t625 = t457 + t611 + t624;
  t626 = t598*t625;
  t627 = t622*t598;
  t628 = t257*t428;
  t632 = t444*t468*t498;
  t636 = t628 + t632;
  t640 = t607*t636;
  t641 = t480 + t627 + t640;
  t642 = t440*t257*t641;
  t643 = t626 + t642;
  t503 = t444*t496;
  t504 = -1.*t440*t256*t498;
  t508 = t503 + t504;
  t662 = t456*t496;
  t663 = t256*t607;
  t664 = t662 + t663;
  t656 = t440*t468*t496;
  t660 = t256*t636;
  t661 = t656 + t660;
  t678 = t256*t456;
  t679 = -1.*t496*t607;
  t680 = t678 + t679;
  t665 = -1.*t508*t664;
  t666 = t256*t444;
  t667 = t440*t496*t498;
  t672 = t666 + t667;
  t681 = -1.*t672*t680;
  t682 = t624 + t665 + t681;
  t689 = t661*t682;
  t693 = t664*t661;
  t697 = t440*t256*t468;
  t698 = -1.*t496*t636;
  t699 = t697 + t698;
  t700 = t680*t699;
  t701 = t627 + t693 + t700;
  t702 = t508*t701;
  t703 = t689 + t702;
  t709 = t257*t444*t424;
  t714 = -1.*t468*t498;
  t715 = t709 + t714;
  t740 = -1.*t257*t463;
  t741 = -1.*t473*t498;
  t742 = t740 + t741;
  t744 = t440*t498*t622;
  t751 = t257*t444*t468;
  t752 = -1.*t428*t498;
  t753 = t751 + t752;
  t755 = t607*t598;
  t757 = t622*t636;
  t788 = 0.068*t444;
  t789 = -1.*t440*t454;
  t790 = t788 + t789;
  t798 = -0.068*t440;
  t799 = t798 + t462;
  t825 = -1.*t256*t444*t424;
  t826 = -1.*t440*t424*t496*t498;
  t827 = t825 + t826;
  t796 = -1.*t440*t456;
  t800 = -1.*t444*t799;
  t805 = -1.*t444*t456*t468;
  t807 = t440*t799*t468;
  t836 = Power(t257,2);
  t837 = -1.*t440*t836*t790;
  t841 = t257*t444*t622;
  t845 = -1.*t440*t257*t468*t622;
  t846 = t257*t790*t598;
  t860 = -1.*t444*t468*t496;
  t861 = t440*t256*t468*t498;
  t863 = t860 + t861;
  t865 = t799*t496;
  t866 = -1.*t256*t790*t498;
  t867 = t865 + t866;
  t869 = t256*t799;
  t870 = t790*t496*t498;
  t871 = t869 + t870;
  t898 = -1.*t440*t424*t496;
  t899 = -1.*t256*t531;
  t900 = t898 + t899;
  t904 = -1.*t456*t496;
  t905 = -1.*t256*t607;
  t906 = t904 + t905;
  t941 = -1.*t205*t339;
  t942 = -1.*t421*t360;
  t943 = t941 + t942;
  t961 = -0.325*t205;
  t962 = t961 + t471 + t472;
  t954 = 0.325*t421;
  t955 = -1.*t205*t366;
  t956 = -1.*t421*t403;
  t957 = t954 + t955 + t956;
  t952 = t440*t456*t428;
  t960 = Power(t440,2);
  t963 = t960*t962*t468;
  t997 = -1.*t257*t444*t962;
  t998 = t957*t498;
  t999 = t997 + t998;
  t988 = -1.*t257*t444*t428;
  t989 = t943*t498;
  t990 = t988 + t989;
  t993 = t257*t957;
  t994 = t444*t962*t498;
  t995 = t993 + t994;
  t1005 = t257*t943;
  t1007 = t444*t428*t498;
  t1008 = t1005 + t1007;
  t1000 = -1.*t440*t257*t999;
  t1004 = t999*t598;
  t1013 = t622*t990;
  t1019 = t440*t428*t496;
  t1020 = t256*t1008;
  t1021 = t1019 + t1020;
  t1023 = t440*t962*t496;
  t1024 = t256*t995;
  t1025 = t1023 + t1024;
  t1029 = t440*t256*t962;
  t1030 = -1.*t496*t995;
  t1031 = t1029 + t1030;
  t1050 = -0.28*t339;
  t1051 = 0.0641*t360;
  t1052 = t1050 + t1051;
  t964 = Power(t444,2);
  t1071 = t421*t366;
  t1072 = t205*t1052;
  t1073 = t1071 + t1072;
  t1082 = t257*t424;
  t1083 = t444*t943*t498;
  t1084 = t1082 + t1083;
  t1088 = -1.*t257*t444*t943;
  t1089 = t424*t498;
  t1093 = t1088 + t1089;
  t1096 = t440*t256*t943;
  t1097 = -1.*t496*t1084;
  t1098 = t1096 + t1097;
  t1063 = -1.*t421*t1052;
  t1064 = t452 + t1063;
  t1061 = t440*t456*t424;
  t1074 = t960*t1073*t468;
  t1115 = -1.*t257*t444*t1073;
  t1116 = t1064*t498;
  t1117 = t1115 + t1116;
  t1111 = t257*t1064;
  t1112 = t444*t1073*t498;
  t1113 = t1111 + t1112;
  t1118 = -1.*t440*t257*t1117;
  t1122 = t1117*t598;
  t1123 = t622*t565;
  t1134 = t440*t1073*t496;
  t1135 = t256*t1113;
  t1137 = t1134 + t1135;
  t1140 = t440*t256*t1073;
  t1142 = -1.*t496*t1113;
  t1143 = t1140 + t1142;
  t1062 = -1.*t444*t463*t424;
  t1070 = t473*t468;
  t1161 = -1.*t473*t428;
  t1163 = -1.*t440*t456*t468;
  t1165 = t444*t463*t468;
  t1166 = t1161 + t1163 + t1165;
  t1167 = t440*t424*t1166;
  t1168 = t1061 + t1062 + t1070;
  t1169 = t440*t468*t1168;
  t1170 = t1167 + t1169;
  t1173 = t454*t424;
  t1174 = t1173 + t1070;
  t1175 = t428*t1174;
  t1176 = -1.*t454*t468;
  t1177 = t1161 + t1176;
  t1178 = t468*t1177;
  t1179 = t1175 + t1178;
  t1194 = t440*t257*t562;
  t1195 = t567*t672;
  t1196 = t1194 + t1195;
  t1199 = t440*t567*t257;
  t1200 = -1.*t562*t672;
  t1201 = t1199 + t1200;
  t1190 = t567*t257;
  t1191 = -1.*t562*t496*t498;
  t1192 = t1190 + t1191;
  t1121 = t607*t531;
  t1214 = t1061 + t1121 + t1123;
  t1215 = t598*t1214;
  t1216 = -1.*t622*t598;
  t1217 = -1.*t607*t636;
  t1218 = t1163 + t1216 + t1217;
  t1219 = t565*t1218;
  t1220 = t1215 + t1219;
  t1183 = t257*t562*t496;
  t1184 = t567*t498;
  t1185 = t1183 + t1184;
  t1209 = -1.*t440*t256*t562;
  t1210 = -1.*t444*t1192;
  t1211 = t1209 + t1210;
  t1147 = t664*t536;
  t1148 = t680*t573;
  t1240 = t1123 + t1147 + t1148;
  t1241 = t661*t1240;
  t1242 = -1.*t664*t661;
  t1243 = -1.*t680*t699;
  t1244 = t1216 + t1242 + t1243;
  t1245 = t536*t1244;
  t1246 = t1241 + t1245;
  t1230 = -1.*t421*t1185;
  t1231 = t205*t1211;
  t1232 = t1230 + t1231;
  t1234 = t205*t1185;
  t1236 = t421*t1211;
  t1238 = t1234 + t1236;
  t874 = t440*t256;
  t875 = -1.*t444*t496*t498;
  t877 = t874 + t875;
  t1261 = -1.*t444*t456*t424;
  t1263 = t440*t799*t424;
  t1268 = t444*t456*t468;
  t1270 = -1.*t440*t799*t468;
  t1286 = -1.*t440*t257*t424*t622;
  t1288 = t257*t790*t565;
  t814 = -1.*t444*t424*t496;
  t816 = t440*t256*t424*t498;
  t820 = t814 + t816;
  t1293 = t440*t257*t468*t622;
  t1294 = -1.*t257*t790*t598;
  t885 = -1.*t256*t444*t468;
  t886 = -1.*t440*t468*t496*t498;
  t887 = t885 + t886;
  t1329 = t622*t531;
  t1331 = t607*t565;
  t1337 = -1.*t607*t598;
  t1339 = -1.*t622*t636;
  t911 = -1.*t444*t496;
  t915 = t440*t256*t498;
  t916 = t911 + t915;
  t923 = -1.*t440*t468*t496;
  t924 = -1.*t256*t636;
  t927 = t923 + t924;
  t1387 = -1.*t957*t428;
  t1388 = -1.*t473*t943;
  t1395 = t957*t468;
  t1393 = t960*t962*t424;
  t1385 = -1.*t440*t456*t428;
  t1389 = -1.*t960*t962*t468;
  t1415 = t999*t565;
  t1418 = -1.*t999*t598;
  t1420 = -1.*t622*t990;
  t1036 = t440*t256*t428;
  t1037 = -1.*t496*t1008;
  t1038 = t1036 + t1037;
  t1446 = -1.*t1064*t428;
  t1447 = -1.*t473*t468;
  t1452 = t473*t424;
  t1457 = t1064*t468;
  t1453 = t960*t1073*t424;
  t1455 = t440*t456*t943;
  t1444 = -1.*t440*t456*t424;
  t1448 = -1.*t960*t1073*t468;
  t1475 = t622*t1093;
  t1478 = t1117*t565;
  t1081 = t440*t943*t496;
  t1085 = t256*t1084;
  t1086 = t1081 + t1085;
  t1483 = -1.*t1117*t598;
  t1484 = -1.*t622*t565;
  t1515 = -0.325*t339;
  t1516 = t339*t403;
  t1517 = -1.*t366*t360;
  t1518 = t1515 + t1516 + t1517;
  t1445 = t444*t463*t424;
  t1521 = t444*t456;
  t1522 = t440*t463;
  t1523 = t1521 + t1522;
  t1524 = t440*t1523*t424;
  t1525 = t1444 + t1445 + t1447;
  t1526 = t444*t1525;
  t1527 = t1524 + t1526;
  t970 = var2[0]*t661;
  t1534 = t257*t562;
  t1535 = t567*t496*t498;
  t1536 = t1534 + t1535;
  t1482 = -1.*t607*t531;
  t1547 = -1.*t440*t498*t607;
  t1548 = t440*t257*t622;
  t1549 = t1521 + t1547 + t1548;
  t1550 = t565*t1549;
  t1551 = t1444 + t1482 + t1484;
  t1552 = t440*t257*t1551;
  t1553 = t1550 + t1552;
  t971 = t562*t598;
  t977 = t567*t699;
  t978 = t971 + t977;
  t979 = var2[2]*t978;
  t982 = t567*t598;
  t984 = -1.*t562*t699;
  t986 = t982 + t984;
  t987 = var2[1]*t986;
  t1530 = -1.*t567*t257*t496;
  t1531 = t562*t498;
  t1532 = t1530 + t1531;
  t1543 = t440*t567*t256;
  t1544 = -1.*t444*t1536;
  t1545 = t1543 + t1544;
  t1498 = -1.*t664*t536;
  t1499 = -1.*t680*t573;
  t1566 = t508*t664;
  t1567 = t672*t680;
  t1568 = t1548 + t1566 + t1567;
  t1569 = t536*t1568;
  t1570 = t1484 + t1498 + t1499;
  t1571 = t508*t1570;
  t1572 = t1569 + t1571;
  t1558 = -1.*t421*t1532;
  t1559 = t205*t1545;
  t1560 = t1558 + t1559;
  t1562 = t205*t1532;
  t1563 = t421*t1545;
  t1564 = t1562 + t1563;
  t1601 = -1.*t440*t498*t622;
  t1605 = -1.*t622*t531;
  t1607 = -1.*t607*t565;
  t1634 = t440*t456;
  t1636 = t444*t799;
  t838 = Power(t498,2);
  t1640 = t444*t456*t424;
  t1642 = -1.*t440*t799*t424;
  t1658 = t440*t836*t790;
  t1661 = -1.*t257*t444*t622;
  t1665 = t440*t257*t424*t622;
  t1667 = -1.*t257*t790*t565;
  t544 = var2[0]*t536;
  t582 = var2[2]*t575;
  t592 = var2[1]*t590;
  t1718 = -1.*t960*t1073*t424;
  t1720 = -1.*t440*t456*t943;
  t1730 = t440*t257*t1117;
  t1733 = -1.*t622*t1093;
  t1736 = -1.*t1117*t565;
  t1758 = -1.*t960*t962*t424;
  t1777 = t440*t257*t999;
  t1781 = -1.*t999*t565;
  p_output1[0]=0.325*t219*t256*t257 + 0.1575*t444*t496 + 0.1575*t256*t459*t498 - 0.2255*t508 - 0.325*t421*t512 + 0.075*t360*t519 + 0.075*t396*t524 + 0.355*(-1.*t360*t519 + t339*t524) - 0.0641*(t339*t519 + t360*t524) + t544 + t582 + t592 + var1[0] + t703*var2[3] + ((-1.*t562*t565 - 1.*t567*t573)*var2[1] + t590*var2[2])*var2[3] + t643*var2[4] + (t573*var2[0] - 1.*t562*t900*var2[1] + t567*t900*var2[2] + (t682*t699 + t672*t701 + t661*(-1.*t664*t672 - 1.*t508*t680 - 1.*t672*t906 - 1.*t680*t916) + t508*(t661*t680 + t664*t699 + t699*t906 + t680*t927))*var2[3])*var2[4] + t491*var2[5] + (t256*t715*var2[0] + (t531*t567 + t496*t562*t715)*var2[1] + (t531*t562 - 1.*t496*t567*t715)*var2[2] + (-1.*t256*t257*t440*t701 + t661*(-1.*t257*t440*t607 + t256*t257*t440*t664 - 1.*t257*t440*t496*t680 - 1.*t256*t508*t742 + t496*t672*t742 + t744) + t256*t682*t753 + t508*(t256*t661*t742 - 1.*t496*t699*t742 + t256*t664*t753 - 1.*t496*t680*t753 + t755 + t757))*var2[3] + (t625*t636 - 1.*t440*t498*t641 + t598*(t440*t498*t742 + t744) + t257*t440*(t636*t742 + t607*t753 + t755 + t757))*var2[4])*var2[5] + t433*var2[12] + (t820*var2[0] + (-1.*t257*t424*t440*t567 - 1.*t562*t827)*var2[1] + (-1.*t257*t424*t440*t562 + t567*t827)*var2[2] + (t512*t701 + t682*t863 + t661*(-1.*t512*t664 + t837 + t841 - 1.*t508*t867 - 1.*t672*t871 - 1.*t680*t877) + t508*(t845 + t846 + t664*t863 + t661*t867 + t699*t871 + t680*t887))*var2[3] + (-1.*t257*t440*t468*t625 - 1.*t257*t444*t641 + t598*(-1.*t444*t498*t607 + t796 + t800 + t837 - 1.*t440*t790*t838 + t841) + t257*t440*(t440*t468*t498*t607 - 1.*t498*t636*t790 + t805 + t807 + t845 + t846))*var2[4] + (-1.*t444*t465*t468 + t440*t486 + t440*t468*(t444*t463 - 1.*t440*t790 + t796 + t800) + t444*(-1.*t440*t463*t468 - 1.*t444*t468*t790 + t805 + t807))*var2[5])*var2[12] + t415*var2[13] + (t970 + t979 + t987 + (t661*(t1000 - 1.*t1025*t508 - 1.*t1031*t672) + t1021*t682 + t508*(t1004 + t1013 + t1025*t661 + t1021*t664 + t1038*t680 + t1031*t699))*var2[3] + (t625*t990 + t598*(t1000 - 1.*t440*t444*t962 + t440*t498*t995) + t257*t440*(t1004 + t1013 + t1008*t607 + t952 + t963 + t636*t995))*var2[4] + (t428*t440*t465 + t444*(-1.*t428*t444*t463 + t473*t943 + t952 + t428*t957 + t963 + t468*t962*t964))*var2[5] + (0.1575*t468 + 0.2255*t943)*var2[12])*var2[13] - 0.0641*var2[14] + (t1086*var2[0] + (-1.*t1098*t562 + t1093*t567)*var2[1] + (t1093*t562 + t1098*t567)*var2[2] + (t661*(t1118 - 1.*t1137*t508 - 1.*t1143*t672) + t536*t682 + t508*(t1122 + t1123 + t1147 + t1148 + t1137*t661 + t1143*t699))*var2[3] + ((t1118 - 1.*t1073*t440*t444 + t1113*t440*t498)*t598 + t565*t625 + t257*t440*(t1061 + t1074 + t1121 + t1122 + t1123 + t1113*t636))*var2[4] + (t424*t440*t465 + t444*(t1061 + t1062 + t1070 + t1074 + t1064*t428 + t1073*t468*t964))*var2[5] + (0.2255*t468 + 0.1575*t943)*var2[12] + (0.325*t339 - 1.*t1052*t339 - 1.*t339*t403)*var2[13])*var2[14] + t536*var3[0] + t590*var3[1] + t575*var3[2] + t703*var3[3] + t643*var3[4] + t491*var3[5] + t433*var3[12] + t415*var3[13] - 0.0641*var3[14] - 1.*var4[0];
  p_output1[1]=0.325*t1185*t219 + 0.075*t1232*t360 + 0.355*(t1238*t339 - 1.*t1232*t360) - 0.0641*(t1232*t339 + t1238*t360) + 0.075*t1238*t396 - 0.325*t1211*t421 - 0.1575*t1192*t459 - 0.1575*t256*t444*t562 - 0.2255*(t1192*t440 - 1.*t256*t444*t562) + var1[1] + t508*var2[0] + t1201*var2[1] + t1196*var2[2] + t1246*var2[3] + ((-1.*t257*t440*t562 - 1.*t567*t672)*var2[1] + t1201*var2[2])*var2[3] + t1220*var2[4] + (t672*var2[0] - 1.*t562*t916*var2[1] + t567*t916*var2[2] + (t1244*t573 + t1240*t699 + t661*(t573*t664 + t536*t680 + t680*t900 + t573*t906) + t536*(-1.*t661*t680 - 1.*t664*t699 - 1.*t699*t906 - 1.*t680*t927))*var2[3])*var2[4] + t1170*var2[5] + (-1.*t256*t257*t440*var2[0] + (-1.*t257*t440*t496*t562 - 1.*t440*t498*t567)*var2[1] + (-1.*t440*t498*t562 + t257*t440*t496*t567)*var2[2] + (t1244*t256*t715 + t661*(t1329 + t1331 + t256*t664*t715 - 1.*t496*t680*t715 + t256*t536*t742 - 1.*t496*t573*t742) + t1240*t256*t753 + t536*(t1337 + t1339 - 1.*t256*t661*t742 + t496*t699*t742 - 1.*t256*t664*t753 + t496*t680*t753))*var2[3] + (t1218*t531 + t1214*t636 + t598*(t1329 + t1331 + t607*t715 + t531*t742) + t565*(t1337 + t1339 - 1.*t636*t742 - 1.*t607*t753))*var2[4])*var2[5] + t1179*var2[12] + (t512*var2[0] + (-1.*t257*t444*t567 - 1.*t562*t877)*var2[1] + (-1.*t257*t444*t562 + t567*t877)*var2[2] + (t1244*t820 + t1240*t863 + t661*(t1286 + t1288 + t664*t820 + t680*t827 + t536*t867 + t573*t871) + t536*(t1293 + t1294 - 1.*t664*t863 - 1.*t661*t867 - 1.*t699*t871 - 1.*t680*t887))*var2[3] + (-1.*t1218*t257*t424*t440 - 1.*t1214*t257*t440*t468 + t598*(t1261 + t1263 + t1286 + t1288 + t424*t440*t498*t607 - 1.*t498*t531*t790) + t565*(t1268 + t1270 + t1293 + t1294 - 1.*t440*t468*t498*t607 + t498*t636*t790))*var2[4] + (-1.*t1166*t424*t444 - 1.*t1168*t444*t468 + t440*t468*(t1261 + t1263 - 1.*t424*t440*t463 - 1.*t424*t444*t790) + t424*t440*(t1268 + t1270 + t440*t463*t468 + t444*t468*t790))*var2[5])*var2[12] + ((t1021*t1240 + t1244*t661 + t536*(t1418 + t1420 - 1.*t1025*t661 - 1.*t1021*t664 - 1.*t1038*t680 - 1.*t1031*t699) + t661*(t1415 + t1025*t536 + t1031*t573 + t627 + t693 + t700))*var2[3] + (t1218*t598 + t1214*t990 + t598*(t1393 + t1415 + t480 + t627 + t640 + t531*t995) + t565*(t1385 + t1389 + t1418 + t1420 - 1.*t1008*t607 - 1.*t636*t995))*var2[4] + (t1168*t428*t440 + t1166*t440*t468 + t440*t468*(t1393 + t1395 + t476 + t480 + t482 + t424*t962*t964) + t424*t440*(t1385 + t1387 + t1388 + t1389 + t428*t444*t463 - 1.*t468*t962*t964))*var2[5] + (t1177*t428 + t1174*t943 + t428*(t1395 + t454*t468 + t476 + t424*t962) + t468*(t1387 + t1388 - 1.*t428*t454 - 1.*t468*t962))*var2[12])*var2[13] + ((t1086*t1244 + t1240*t536 + t661*(t1475 + t1478 + t1137*t536 + t1143*t573 + t1086*t664 + t1098*t680) + t536*(t1483 + t1484 + t1498 + t1499 - 1.*t1137*t661 - 1.*t1143*t699))*var2[3] + (t1093*t1218 + t1214*t565 + t598*(t1453 + t1455 + t1475 + t1478 + t1113*t531 + t1084*t607) + t565*(t1444 + t1448 + t1482 + t1483 + t1484 - 1.*t1113*t636))*var2[4] + (t1168*t424*t440 + t1166*t440*t943 + t440*t468*(t1452 + t1453 + t1455 + t1457 - 1.*t444*t463*t943 + t1073*t424*t964) + t424*t440*(t1444 + t1445 + t1446 + t1447 + t1448 - 1.*t1073*t468*t964))*var2[5] + (t1177*t424 + t1174*t468 + t468*(t1446 + t1447 - 1.*t424*t454 - 1.*t1073*t468) + t428*(t1452 + t1457 + t1073*t424 + t454*t943))*var2[12])*var2[14] + t508*var3[0] + t1201*var3[1] + t1196*var3[2] + t1246*var3[3] + t1220*var3[4] + t1170*var3[5] + t1179*var3[12] - 1.*var4[1];
  p_output1[2]=0.325*t1532*t219 + 0.075*t1560*t360 + 0.355*(t1564*t339 - 1.*t1560*t360) - 0.0641*(t1560*t339 + t1564*t360) + 0.075*t1564*t396 - 0.325*t1545*t421 - 0.1575*t1536*t459 + 0.1575*t256*t444*t567 - 0.2255*(t1536*t440 + t256*t444*t567) + t970 + t979 + t987 + var1[2] + t1572*var2[3] + ((-1.*t562*t598 - 1.*t567*t699)*var2[1] + t986*var2[2])*var2[3] + t1553*var2[4] + (t699*var2[0] - 1.*t562*t927*var2[1] + t567*t927*var2[2] + (t1568*t573 + t1570*t672 + t508*(-1.*t573*t664 - 1.*t536*t680 - 1.*t680*t900 - 1.*t573*t906) + t536*(t664*t672 + t508*t680 + t672*t906 + t680*t916))*var2[3])*var2[4] + t1527*var2[5] + (t256*t753*var2[0] + (t567*t636 + t496*t562*t753)*var2[1] + (t562*t636 - 1.*t496*t567*t753)*var2[2] + (-1.*t1570*t256*t257*t440 + t1568*t256*t715 + t508*(t1605 + t1607 - 1.*t256*t664*t715 + t496*t680*t715 - 1.*t256*t536*t742 + t496*t573*t742) + t536*(t1601 + t257*t440*t607 - 1.*t256*t257*t440*t664 + t257*t440*t496*t680 + t256*t508*t742 - 1.*t496*t672*t742))*var2[3] + (-1.*t1551*t440*t498 + t1549*t531 + t565*(t1601 - 1.*t440*t498*t742) + t257*t440*(t1605 + t1607 - 1.*t607*t715 - 1.*t531*t742))*var2[4])*var2[5] - 0.068*t468*var2[12] + (t863*var2[0] + (-1.*t257*t440*t468*t567 - 1.*t562*t887)*var2[1] + (-1.*t257*t440*t468*t562 + t567*t887)*var2[2] + (t1570*t512 + t1568*t820 + t508*(t1665 + t1667 - 1.*t664*t820 - 1.*t680*t827 - 1.*t536*t867 - 1.*t573*t871) + t536*(t1658 + t1661 + t512*t664 + t508*t867 + t672*t871 + t680*t877))*var2[3] + (-1.*t1549*t257*t424*t440 - 1.*t1551*t257*t444 + t257*t440*(t1640 + t1642 + t1665 + t1667 - 1.*t424*t440*t498*t607 + t498*t531*t790) + t565*(t1634 + t1636 + t1658 + t1661 + t444*t498*t607 + t440*t790*t838))*var2[4] + (t1525*t440 - 1.*t1523*t424*t444 + t424*t440*(t1634 + t1636 - 1.*t444*t463 + t440*t790) + t444*(t1640 + t1642 + t424*t440*t463 + t424*t444*t790))*var2[5])*var2[12] + t1518*var2[13] + (t1021*var2[0] + (-1.*t1038*t562 + t567*t990)*var2[1] + (t1038*t567 + t562*t990)*var2[2] + (t508*(t1216 + t1242 + t1243 + t1781 - 1.*t1025*t536 - 1.*t1031*t573) + t1568*t661 + t536*(t1777 + t1025*t508 + t1031*t672))*var2[3] + (t1549*t598 + t565*(t1777 + t440*t444*t962 - 1.*t440*t498*t995) + t257*t440*(t1163 + t1216 + t1217 + t1758 + t1781 - 1.*t531*t995))*var2[4] + (t1523*t440*t468 + t444*(t1161 + t1163 + t1165 + t1758 - 1.*t468*t957 - 1.*t424*t962*t964))*var2[5] - 0.068*t428*var2[12])*var2[13] - 0.28*var2[14] + (t544 + t582 + t592 + (t1086*t1568 + t536*(t1730 + t1137*t508 + t1143*t672) + t508*(t1733 + t1736 - 1.*t1137*t536 - 1.*t1143*t573 - 1.*t1086*t664 - 1.*t1098*t680))*var2[3] + (t1093*t1549 + (t1730 + t1073*t440*t444 - 1.*t1113*t440*t498)*t565 + t257*t440*(t1718 + t1720 + t1733 + t1736 - 1.*t1113*t531 - 1.*t1084*t607))*var2[4] + (t1523*t440*t943 + t444*(t1718 + t1720 - 1.*t1064*t468 - 1.*t424*t473 + t444*t463*t943 - 1.*t1073*t424*t964))*var2[5] - 0.068*t424*var2[12] + (-1.*t1052*t360 + t385 + t414)*var2[13])*var2[14] + t661*var3[0] + t986*var3[1] + t978*var3[2] + t1572*var3[3] + t1553*var3[4] + t1527*var3[5] - 0.068*t468*var3[12] + t1518*var3[13] - 0.28*var3[14] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
