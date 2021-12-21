/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:32 GMT+01:00
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
  double t160;
  double t166;
  double t169;
  double t62;
  double t67;
  double t104;
  double t128;
  double t225;
  double t289;
  double t198;
  double t204;
  double t323;
  double t329;
  double t336;
  double t382;
  double t390;
  double t402;
  double t405;
  double t406;
  double t410;
  double t417;
  double t119;
  double t465;
  double t467;
  double t478;
  double t497;
  double t506;
  double t347;
  double t692;
  double t693;
  double t572;
  double t667;
  double t576;
  double t589;
  double t729;
  double t604;
  double t606;
  double t544;
  double t548;
  double t151;
  double t754;
  double t679;
  double t698;
  double t768;
  double t775;
  double t800;
  double t811;
  double t836;
  double t349;
  double t353;
  double t860;
  double t867;
  double t440;
  double t446;
  double t876;
  double t884;
  double t153;
  double t902;
  double t903;
  double t925;
  double t634;
  double t947;
  double t949;
  double t951;
  double t952;
  double t955;
  double t961;
  double t962;
  double t963;
  double t973;
  double t976;
  double t982;
  double t984;
  double t987;
  double t994;
  double t995;
  double t1002;
  double t1009;
  double t1017;
  double t1024;
  double t1027;
  double t1034;
  double t1035;
  double t1041;
  double t1055;
  double t1062;
  double t1069;
  double t1071;
  double t1075;
  double t1076;
  double t1079;
  double t1084;
  double t1093;
  double t712;
  double t721;
  double t648;
  double t789;
  double t932;
  double t1125;
  double t1127;
  double t1154;
  double t1155;
  double t1156;
  double t1163;
  double t910;
  double t911;
  double t926;
  double t928;
  double t938;
  double t944;
  double t978;
  double t1040;
  double t1095;
  double t1101;
  double t654;
  double t682;
  double t704;
  double t705;
  double t736;
  double t753;
  double t780;
  double t783;
  double t823;
  double t838;
  double t840;
  double t1116;
  double t1119;
  double t1121;
  double t1122;
  double t1129;
  double t1132;
  double t1141;
  double t1144;
  double t1145;
  double t1147;
  double t1172;
  double t1175;
  double t1177;
  double t1183;
  double t1185;
  double t1188;
  double t1189;
  double t1192;
  double t1195;
  double t1196;
  double t711;
  double t785;
  double t845;
  double t847;
  double t1321;
  double t1332;
  double t1333;
  double t1334;
  double t1338;
  double t1357;
  double t1362;
  double t1364;
  double t1197;
  double t875;
  double t896;
  double t904;
  double t906;
  double t1103;
  double t1107;
  double t1111;
  double t1113;
  double t1448;
  double t1431;
  double t1455;
  double t1462;
  double t1471;
  double t1246;
  double t1475;
  double t1480;
  double t1481;
  double t1484;
  double t1208;
  double t1211;
  double t1215;
  double t1216;
  double t1223;
  double t1229;
  double t1236;
  double t1238;
  double t1521;
  double t1524;
  double t1527;
  double t1536;
  double t340;
  double t439;
  double t522;
  double t524;
  double t568;
  double t601;
  double t612;
  double t623;
  double t1669;
  double t1686;
  double t1690;
  double t1700;
  double t1672;
  double t1677;
  double t1681;
  double t1717;
  double t1656;
  double t1635;
  double t1636;
  double t1643;
  double t1652;
  double t1653;
  double t1685;
  double t1730;
  double t1733;
  double t1800;
  double t1777;
  double t1787;
  double t1789;
  double t1761;
  double t1804;
  double t1810;
  double t1815;
  double t1554;
  double t1564;
  double t1567;
  double t1578;
  double t1582;
  double t1585;
  double t1490;
  double t1491;
  double t1504;
  double t1439;
  double t1449;
  double t1454;
  double t1920;
  double t1933;
  double t1934;
  double t1887;
  double t1888;
  double t1903;
  double t1937;
  double t1944;
  double t1965;
  double t1865;
  double t1869;
  double t1880;
  double t1985;
  double t2005;
  double t2006;
  double t1966;
  double t1883;
  double t1884;
  double t1886;
  double t2043;
  double t2045;
  double t2047;
  double t2015;
  double t2057;
  double t2059;
  double t2062;
  double t2025;
  double t2033;
  double t2038;
  double t2085;
  double t2088;
  double t2091;
  double t2283;
  double t2286;
  double t2287;
  double t2289;
  double t2293;
  double t2294;
  double t2296;
  double t2305;
  double t2189;
  double t2213;
  double t2076;
  double t2079;
  double t2084;
  double t2469;
  double t1654;
  double t1734;
  double t1741;
  double t2483;
  double t2120;
  double t2121;
  double t2122;
  double t2663;
  double t2666;
  double t2668;
  double t2669;
  double t2679;
  double t2680;
  double t2683;
  double t2684;
  double t2616;
  double t2633;
  double t2799;
  double t2826;
  t160 = Cos(var1[17]);
  t166 = -1.*t160;
  t169 = 1. + t166;
  t62 = Cos(var1[16]);
  t67 = -1.*t62;
  t104 = 1. + t67;
  t128 = Sin(var1[16]);
  t225 = Sin(var1[17]);
  t289 = 4.e-6*t225;
  t198 = 1.000000000016*t169;
  t204 = -7.e-6*t169;
  t323 = t204 + t289;
  t329 = -7.e-6*t323;
  t336 = -1. + t198 + t329;
  t382 = 2.8e-11*t169;
  t390 = 4.e-6*t169;
  t402 = 7.e-6*t225;
  t405 = t390 + t402;
  t406 = -7.e-6*t405;
  t410 = -1.*t225;
  t417 = t382 + t406 + t410;
  t119 = -7.e-6*t104;
  t465 = -6.5e-11*t169;
  t467 = 1. + t465;
  t478 = -7.e-6*t467;
  t497 = 7.e-6*t169;
  t506 = t478 + t497 + t289;
  t347 = 4.e-6*t104;
  t692 = -1. + t160;
  t693 = 4.e-6*t692;
  t572 = -2.8e-11*t104;
  t667 = -4.e-6*t225;
  t576 = -1.*t128;
  t589 = t572 + t576;
  t729 = 1.000000000049*t169;
  t604 = 4.e-6*t128;
  t606 = t119 + t604;
  t544 = -1.000000000016*t104;
  t548 = 1. + t544;
  t151 = -4.e-6*t128;
  t754 = -7.e-6*t225;
  t679 = t204 + t667;
  t698 = t693 + t402;
  t768 = -2.8e-11*t169;
  t775 = t768 + t225;
  t800 = -1.000000000016*t169;
  t811 = 1. + t800;
  t836 = t382 + t225;
  t349 = -7.e-6*t128;
  t353 = t347 + t349;
  t860 = 4.e-6*t405;
  t867 = -1. + t729 + t860;
  t440 = -6.5e-11*t104;
  t446 = 1. + t440;
  t876 = 4.e-6*t467;
  t884 = t876 + t693 + t402;
  t153 = t119 + t151;
  t902 = 4.e-6*t323;
  t903 = t382 + t902 + t225;
  t925 = 7.e-6*t104;
  t634 = 7.e-6*t128;
  t947 = 2.826290000000002e-7*var1[17];
  t949 = -0.148715*t467;
  t951 = -2.18904205e-16*t169;
  t952 = t390 + t754;
  t955 = -0.038576*t952;
  t961 = -0.80315*t679;
  t962 = t497 + t289;
  t963 = -0.5031510000080001*t962;
  t973 = -0.038575000014*t698;
  t976 = t947 + t949 + t951 + t955 + t961 + t963 + t973;
  t982 = 1.1305160000000008e-12*var1[17];
  t984 = -1.000000000049*t169;
  t987 = 1. + t984;
  t994 = -0.038576*t987;
  t995 = -0.03857500001589017*t169;
  t1002 = t382 + t410;
  t1009 = -0.5031510000080001*t1002;
  t1017 = t693 + t754;
  t1024 = -3.367757e-6*t1017;
  t1027 = -0.148715*t405;
  t1034 = -0.80315*t775;
  t1035 = t982 + t994 + t995 + t1009 + t1024 + t1027 + t1034;
  t1041 = -1.9784030000000015e-12*var1[17];
  t1055 = -0.80315*t811;
  t1062 = -0.5031510000160505*t169;
  t1069 = t768 + t410;
  t1071 = -0.038576*t1069;
  t1075 = t497 + t667;
  t1076 = -3.367757e-6*t1075;
  t1079 = -0.148715*t323;
  t1084 = -0.038575000014*t836;
  t1093 = t1041 + t1055 + t1062 + t1071 + t1076 + t1079 + t1084;
  t712 = -1.000000000049*t104;
  t721 = 1. + t712;
  t648 = t347 + t634;
  t789 = t572 + t128;
  t932 = 2.8e-11*t104;
  t1125 = -1. + t62;
  t1127 = 4.e-6*t1125;
  t1154 = t721*t867;
  t1155 = t648*t884;
  t1156 = t789*t903;
  t1163 = t1154 + t1155 + t1156;
  t910 = -2.7726089999999997e-12*var1[16];
  t911 = -0.2812110000084994*t104;
  t926 = t925 + t151;
  t928 = -1.8134809999999998e-6*t926;
  t938 = t932 + t128;
  t944 = -0.038749000006999997*t938;
  t978 = t606*t976;
  t1040 = t589*t1035;
  t1095 = t548*t1093;
  t1101 = t910 + t911 + t928 + t944 + t978 + t1040 + t1095;
  t654 = 6.5e-11*t169;
  t682 = 7.e-6*t679;
  t704 = 4.e-6*t698;
  t705 = -1. + t654 + t682 + t704;
  t736 = -1. + t729;
  t753 = 4.e-6*t736;
  t780 = 7.e-6*t775;
  t783 = t753 + t693 + t754 + t780;
  t823 = 7.e-6*t811;
  t838 = 4.e-6*t836;
  t840 = t823 + t497 + t667 + t838;
  t1116 = 3.9608699999999997e-7*var1[16];
  t1119 = -1.1787626499999999e-16*t104;
  t1121 = t925 + t604;
  t1122 = -0.281211000004*t1121;
  t1129 = t1127 + t634;
  t1132 = -0.038749000006999997*t1129;
  t1141 = t446*t976;
  t1144 = t353*t1035;
  t1145 = t153*t1093;
  t1147 = t1116 + t1119 + t1122 + t1132 + t1141 + t1144 + t1145;
  t1172 = 1.5843479999999999e-12*var1[16];
  t1175 = -0.03874900000889869*t104;
  t1177 = t932 + t576;
  t1183 = -0.281211000004*t1177;
  t1185 = t1127 + t349;
  t1188 = -1.8134809999999998e-6*t1185;
  t1189 = t648*t976;
  t1192 = t721*t1035;
  t1195 = t789*t1093;
  t1196 = t1172 + t1175 + t1183 + t1188 + t1189 + t1192 + t1195;
  t711 = t648*t705;
  t785 = t721*t783;
  t845 = t789*t840;
  t847 = t711 + t785 + t845;
  t1321 = -1.*t976*t884;
  t1332 = -1.*t867*t1035;
  t1333 = -1.*t903*t1093;
  t1334 = t1321 + t1332 + t1333;
  t1338 = t976*t705;
  t1357 = t1035*t783;
  t1362 = t1093*t840;
  t1364 = t1338 + t1357 + t1362;
  t1197 = -1.*t1163*t1196;
  t875 = t589*t867;
  t896 = t606*t884;
  t904 = t548*t903;
  t906 = t875 + t896 + t904;
  t1103 = t353*t867;
  t1107 = t446*t884;
  t1111 = t153*t903;
  t1113 = t1103 + t1107 + t1111;
  t1448 = Cos(var1[15]);
  t1431 = Sin(var1[15]);
  t1455 = -1.*t1448;
  t1462 = 1. + t1455;
  t1471 = -0.15121*t1462;
  t1246 = t1196*t847;
  t1475 = 0.15121*t1431;
  t1480 = t1431*t1101;
  t1481 = t1448*t1147;
  t1484 = t1471 + t1475 + t1480 + t1481;
  t1208 = t606*t705;
  t1211 = t589*t783;
  t1215 = t548*t840;
  t1216 = t1208 + t1211 + t1215;
  t1223 = t446*t705;
  t1229 = t353*t783;
  t1236 = t153*t840;
  t1238 = t1223 + t1229 + t1236;
  t1521 = -0.15121*t1431;
  t1524 = t1448*t1101;
  t1527 = -1.*t1431*t1147;
  t1536 = t1471 + t1521 + t1524 + t1527;
  t340 = t153*t336;
  t439 = t353*t417;
  t522 = t446*t506;
  t524 = t340 + t439 + t522;
  t568 = t548*t336;
  t601 = t589*t417;
  t612 = t606*t506;
  t623 = t568 + t601 + t612;
  t1669 = Cos(var1[5]);
  t1686 = t1448*t524;
  t1690 = t1431*t623;
  t1700 = t1686 + t1690;
  t1672 = -1.*t1431*t524;
  t1677 = t1448*t623;
  t1681 = t1672 + t1677;
  t1717 = Sin(var1[5]);
  t1656 = Cos(var1[4]);
  t1635 = t789*t336;
  t1636 = t721*t417;
  t1643 = t648*t506;
  t1652 = t1635 + t1636 + t1643;
  t1653 = Sin(var1[4]);
  t1685 = t1669*t1681;
  t1730 = -1.*t1700*t1717;
  t1733 = t1685 + t1730;
  t1800 = Cos(var1[3]);
  t1777 = t1669*t1700;
  t1787 = t1681*t1717;
  t1789 = t1777 + t1787;
  t1761 = Sin(var1[3]);
  t1804 = t1656*t1652;
  t1810 = -1.*t1653*t1733;
  t1815 = t1804 + t1810;
  t1554 = t1431*t1216;
  t1564 = t1448*t1238;
  t1567 = t1554 + t1564;
  t1578 = t1448*t1216;
  t1582 = -1.*t1431*t1238;
  t1585 = t1578 + t1582;
  t1490 = t1448*t906;
  t1491 = -1.*t1431*t1113;
  t1504 = t1490 + t1491;
  t1439 = t1431*t906;
  t1449 = t1448*t1113;
  t1454 = t1439 + t1449;
  t1920 = t1669*t1454;
  t1933 = t1504*t1717;
  t1934 = t1920 + t1933;
  t1887 = t1669*t1536;
  t1888 = -1.*t1484*t1717;
  t1903 = t1887 + t1888;
  t1937 = t1669*t1484;
  t1944 = t1536*t1717;
  t1965 = t1937 + t1944;
  t1865 = t1669*t1567;
  t1869 = t1585*t1717;
  t1880 = t1865 + t1869;
  t1985 = t1669*t1585;
  t2005 = -1.*t1567*t1717;
  t2006 = t1985 + t2005;
  t1966 = -1.*t1934*t1965;
  t1883 = t1669*t1504;
  t1884 = -1.*t1454*t1717;
  t1886 = t1883 + t1884;
  t2043 = t1163*t1653;
  t2045 = t1656*t1886;
  t2047 = t2043 + t2045;
  t2015 = t1965*t1880;
  t2057 = t1196*t1653;
  t2059 = t1656*t1903;
  t2062 = t2057 + t2059;
  t2025 = t847*t1653;
  t2033 = t1656*t2006;
  t2038 = t2025 + t2033;
  t2085 = t1656*t1196;
  t2088 = -1.*t1653*t1903;
  t2091 = t2085 + t2088;
  t2283 = t976*t506;
  t2286 = t417*t1035;
  t2287 = t336*t1093;
  t2289 = t2283 + t2286 + t2287;
  t2293 = -1.*t976*t705;
  t2294 = -1.*t1035*t783;
  t2296 = -1.*t1093*t840;
  t2305 = t2293 + t2294 + t2296;
  t2189 = t1652*t1196;
  t2213 = -1.*t1196*t847;
  t2076 = t1656*t1163;
  t2079 = -1.*t1653*t1886;
  t2084 = t2076 + t2079;
  t2469 = t1789*t1965;
  t1654 = t1652*t1653;
  t1734 = t1656*t1733;
  t1741 = t1654 + t1734;
  t2483 = -1.*t1965*t1880;
  t2120 = t1656*t847;
  t2121 = -1.*t1653*t2006;
  t2122 = t2120 + t2121;
  t2663 = -1.*t976*t506;
  t2666 = -1.*t417*t1035;
  t2668 = -1.*t336*t1093;
  t2669 = t2663 + t2666 + t2668;
  t2679 = t976*t884;
  t2680 = t867*t1035;
  t2683 = t903*t1093;
  t2684 = t2679 + t2680 + t2683;
  t2616 = -1.*t1652*t1196;
  t2633 = t1163*t1196;
  t2799 = -1.*t1789*t1965;
  t2826 = t1934*t1965;
  p_output1[0]=t1741*var2[0] + (t1789*t1800 - 1.*t1761*t1815)*var2[1] + (t1761*t1789 + t1800*t1815)*var2[2] + (t2038*(t1966 - 1.*t2047*t2062 - 1.*t2084*t2091) + t2047*(t2015 + t2038*t2062 + t2091*t2122))*var2[3] + (t1880*(t1197 - 1.*t1886*t1903 + t1966) + t1934*(t1246 + t1903*t2006 + t2015))*var2[4] + (t1163*(t1246 + t1484*t1567 + t1536*t1585) + (t1197 - 1.*t1454*t1484 - 1.*t1504*t1536)*t847)*var2[5] + (t1163*(t1101*t1216 + t1147*t1238 + t1246) + 0.15121*t524 - 0.15121*t623 + t847*(-1.*t1113*t1147 + t1197 - 1.*t1101*t906))*var2[15] + (-0.038749*t336 + 0.281211*t417 + 1.e-6*(t204 + 7.e-6*t467 + t667) - 1.*t1334*t705 + 4.e-6*(-1.*t1334*t783 - 1.*t1364*t867) - 1.*t1364*t884 + 7.e-6*(t1334*t840 + t1364*t903))*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t2047*var2[0] + (t1800*t1934 - 1.*t1761*t2084)*var2[1] + (t1761*t1934 + t1800*t2084)*var2[2] + (t2038*(t1741*t2062 + t1815*t2091 + t2469) + t1741*(-1.*t2038*t2062 - 1.*t2091*t2122 + t2483))*var2[3] + (t1880*(t1733*t1903 + t2189 + t2469) + t1789*(-1.*t1903*t2006 + t2213 + t2483))*var2[4] + (t1652*(-1.*t1484*t1567 - 1.*t1536*t1585 + t2213) + (t1536*t1681 + t1484*t1700 + t2189)*t847)*var2[5] + (0.15121*t1113 + t1652*(-1.*t1101*t1216 - 1.*t1147*t1238 + t2213) + (t2189 + t1147*t524 + t1101*t623)*t847 - 0.15121*t906)*var2[15] + (-1.*t2305*t506 - 1.*t2289*t705 + 1.e-6*(t390 + 4.e-6*(-1. + t654) + t754) + 4.e-6*(-1.*t2305*t417 - 1.*t2289*t783) + 7.e-6*(t2305*t336 + t2289*t840) + 0.281211*t867 - 0.038749*t903)*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t2038*var2[0] + (t1800*t1880 - 1.*t1761*t2122)*var2[1] + (t1761*t1880 + t1800*t2122)*var2[2] + (t2047*(-1.*t1741*t2062 - 1.*t1815*t2091 + t2799) + t1741*(t2047*t2062 + t2084*t2091 + t2826))*var2[3] + (t1934*(-1.*t1733*t1903 + t2616 + t2799) + t1789*(t1886*t1903 + t2633 + t2826))*var2[4] + (t1163*(-1.*t1536*t1681 - 1.*t1484*t1700 + t2616) + t1652*(t1454*t1484 + t1504*t1536 + t2633))*var2[5] + (-0.15121*t1216 + 0.15121*t1238 + t1163*(t2616 - 1.*t1147*t524 - 1.*t1101*t623) + t1652*(t1113*t1147 + t2633 + t1101*t906))*var2[15] + (-1.*t2684*t506 + 0.281211*t783 - 0.038749*t840 + 4.e-6*(-1.*t2684*t417 - 1.*t2669*t867) - 1.*t2669*t884 + 7.e-6*(t2684*t336 + t2669*t903) + 1.e-6*(1. + t465 - 7.e-6*t679 + 4.e-6*t952))*var2[16] - 2.826290000000002e-7*var2[17];
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

#include "dh_RrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void dh_RrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
