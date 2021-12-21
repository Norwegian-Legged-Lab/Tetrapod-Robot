/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:16 GMT+01:00
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
  double t332;
  double t412;
  double t413;
  double t67;
  double t68;
  double t126;
  double t177;
  double t513;
  double t575;
  double t420;
  double t431;
  double t639;
  double t640;
  double t662;
  double t746;
  double t747;
  double t761;
  double t766;
  double t778;
  double t801;
  double t805;
  double t129;
  double t823;
  double t830;
  double t836;
  double t841;
  double t842;
  double t707;
  double t1066;
  double t1085;
  double t930;
  double t1054;
  double t934;
  double t998;
  double t1123;
  double t1001;
  double t1008;
  double t884;
  double t885;
  double t303;
  double t1133;
  double t1058;
  double t1090;
  double t1135;
  double t1136;
  double t1171;
  double t1185;
  double t1194;
  double t708;
  double t721;
  double t1240;
  double t1250;
  double t819;
  double t820;
  double t1323;
  double t1332;
  double t320;
  double t1339;
  double t1360;
  double t1430;
  double t1034;
  double t1467;
  double t1471;
  double t1478;
  double t1494;
  double t1496;
  double t1504;
  double t1506;
  double t1507;
  double t1511;
  double t1512;
  double t1521;
  double t1523;
  double t1524;
  double t1526;
  double t1529;
  double t1531;
  double t1540;
  double t1543;
  double t1544;
  double t1545;
  double t1547;
  double t1557;
  double t1573;
  double t1597;
  double t1608;
  double t1611;
  double t1614;
  double t1616;
  double t1617;
  double t1622;
  double t1623;
  double t1625;
  double t1119;
  double t1122;
  double t1044;
  double t1169;
  double t1447;
  double t1670;
  double t1681;
  double t1754;
  double t1755;
  double t1766;
  double t1777;
  double t1422;
  double t1424;
  double t1432;
  double t1446;
  double t1452;
  double t1462;
  double t1518;
  double t1572;
  double t1630;
  double t1633;
  double t1051;
  double t1063;
  double t1093;
  double t1105;
  double t1125;
  double t1128;
  double t1140;
  double t1141;
  double t1193;
  double t1204;
  double t1206;
  double t1657;
  double t1662;
  double t1668;
  double t1669;
  double t1684;
  double t1700;
  double t1711;
  double t1719;
  double t1725;
  double t1733;
  double t1778;
  double t1790;
  double t1796;
  double t1803;
  double t1805;
  double t1810;
  double t1813;
  double t1818;
  double t1820;
  double t1821;
  double t1117;
  double t1144;
  double t1229;
  double t1233;
  double t1943;
  double t1948;
  double t1949;
  double t1960;
  double t1965;
  double t1975;
  double t1976;
  double t1989;
  double t1831;
  double t1300;
  double t1336;
  double t1392;
  double t1417;
  double t1641;
  double t1645;
  double t1647;
  double t1655;
  double t2067;
  double t2059;
  double t2078;
  double t2080;
  double t2085;
  double t1890;
  double t2088;
  double t2095;
  double t2099;
  double t2114;
  double t1843;
  double t1848;
  double t1851;
  double t1853;
  double t1862;
  double t1872;
  double t1873;
  double t1881;
  double t2157;
  double t2160;
  double t2172;
  double t2173;
  double t691;
  double t811;
  double t850;
  double t877;
  double t915;
  double t1000;
  double t1011;
  double t1025;
  double t2337;
  double t2376;
  double t2397;
  double t2405;
  double t2339;
  double t2341;
  double t2351;
  double t2410;
  double t2312;
  double t2285;
  double t2289;
  double t2292;
  double t2295;
  double t2302;
  double t2372;
  double t2414;
  double t2415;
  double t2461;
  double t2446;
  double t2454;
  double t2457;
  double t2444;
  double t2467;
  double t2469;
  double t2472;
  double t2193;
  double t2210;
  double t2222;
  double t2241;
  double t2244;
  double t2246;
  double t2142;
  double t2154;
  double t2156;
  double t2060;
  double t2072;
  double t2075;
  double t2581;
  double t2589;
  double t2600;
  double t2557;
  double t2559;
  double t2567;
  double t2711;
  double t2727;
  double t2766;
  double t2536;
  double t2541;
  double t2543;
  double t2778;
  double t2779;
  double t2782;
  double t2769;
  double t2552;
  double t2554;
  double t2555;
  double t2808;
  double t2809;
  double t2810;
  double t2784;
  double t2816;
  double t2818;
  double t2820;
  double t2795;
  double t2801;
  double t2807;
  double t2828;
  double t2830;
  double t2833;
  double t2967;
  double t2979;
  double t3014;
  double t3016;
  double t3041;
  double t3080;
  double t3084;
  double t3090;
  double t2910;
  double t2928;
  double t2824;
  double t2825;
  double t2826;
  double t3345;
  double t2306;
  double t2418;
  double t2429;
  double t3377;
  double t2858;
  double t2862;
  double t2870;
  double t3637;
  double t3638;
  double t3640;
  double t3643;
  double t3658;
  double t3666;
  double t3680;
  double t3687;
  double t3602;
  double t3610;
  double t3824;
  double t3835;
  t332 = Cos(var1[17]);
  t412 = -1.*t332;
  t413 = 1. + t412;
  t67 = Cos(var1[16]);
  t68 = -1.*t67;
  t126 = 1. + t68;
  t177 = Sin(var1[16]);
  t513 = Sin(var1[17]);
  t575 = 4.e-6*t513;
  t420 = 1.000000000016*t413;
  t431 = -7.e-6*t413;
  t639 = t431 + t575;
  t640 = -7.e-6*t639;
  t662 = -1. + t420 + t640;
  t746 = 2.8e-11*t413;
  t747 = 4.e-6*t413;
  t761 = 7.e-6*t513;
  t766 = t747 + t761;
  t778 = -7.e-6*t766;
  t801 = -1.*t513;
  t805 = t746 + t778 + t801;
  t129 = -7.e-6*t126;
  t823 = -6.5e-11*t413;
  t830 = 1. + t823;
  t836 = -7.e-6*t830;
  t841 = 7.e-6*t413;
  t842 = t836 + t841 + t575;
  t707 = 4.e-6*t126;
  t1066 = -1. + t332;
  t1085 = 4.e-6*t1066;
  t930 = -2.8e-11*t126;
  t1054 = -4.e-6*t513;
  t934 = -1.*t177;
  t998 = t930 + t934;
  t1123 = 1.000000000049*t413;
  t1001 = 4.e-6*t177;
  t1008 = t129 + t1001;
  t884 = -1.000000000016*t126;
  t885 = 1. + t884;
  t303 = -4.e-6*t177;
  t1133 = -7.e-6*t513;
  t1058 = t431 + t1054;
  t1090 = t1085 + t761;
  t1135 = -2.8e-11*t413;
  t1136 = t1135 + t513;
  t1171 = -1.000000000016*t413;
  t1185 = 1. + t1171;
  t1194 = t746 + t513;
  t708 = -7.e-6*t177;
  t721 = t707 + t708;
  t1240 = 4.e-6*t766;
  t1250 = -1. + t1123 + t1240;
  t819 = -6.5e-11*t126;
  t820 = 1. + t819;
  t1323 = 4.e-6*t830;
  t1332 = t1323 + t1085 + t761;
  t320 = t129 + t303;
  t1339 = 4.e-6*t639;
  t1360 = t746 + t1339 + t513;
  t1430 = 7.e-6*t126;
  t1034 = 7.e-6*t177;
  t1467 = 2.826290000000002e-7*var1[17];
  t1471 = -0.148715*t830;
  t1478 = -2.18904205e-16*t413;
  t1494 = t747 + t1133;
  t1496 = -0.038576*t1494;
  t1504 = -0.80315*t1058;
  t1506 = t841 + t575;
  t1507 = -0.5031510000080001*t1506;
  t1511 = -0.038575000014*t1090;
  t1512 = t1467 + t1471 + t1478 + t1496 + t1504 + t1507 + t1511;
  t1521 = 1.1305160000000008e-12*var1[17];
  t1523 = -1.000000000049*t413;
  t1524 = 1. + t1523;
  t1526 = -0.038576*t1524;
  t1529 = -0.03857500001589017*t413;
  t1531 = t746 + t801;
  t1540 = -0.5031510000080001*t1531;
  t1543 = t1085 + t1133;
  t1544 = -3.367757e-6*t1543;
  t1545 = -0.148715*t766;
  t1547 = -0.80315*t1136;
  t1557 = t1521 + t1526 + t1529 + t1540 + t1544 + t1545 + t1547;
  t1573 = -1.9784030000000015e-12*var1[17];
  t1597 = -0.80315*t1185;
  t1608 = -0.5031510000160505*t413;
  t1611 = t1135 + t801;
  t1614 = -0.038576*t1611;
  t1616 = t841 + t1054;
  t1617 = -3.367757e-6*t1616;
  t1622 = -0.148715*t639;
  t1623 = -0.038575000014*t1194;
  t1625 = t1573 + t1597 + t1608 + t1614 + t1617 + t1622 + t1623;
  t1119 = -1.000000000049*t126;
  t1122 = 1. + t1119;
  t1044 = t707 + t1034;
  t1169 = t930 + t177;
  t1447 = 2.8e-11*t126;
  t1670 = -1. + t67;
  t1681 = 4.e-6*t1670;
  t1754 = t1122*t1250;
  t1755 = t1044*t1332;
  t1766 = t1169*t1360;
  t1777 = t1754 + t1755 + t1766;
  t1422 = -2.7726089999999997e-12*var1[16];
  t1424 = -0.2812110000084994*t126;
  t1432 = t1430 + t303;
  t1446 = -1.8134809999999998e-6*t1432;
  t1452 = t1447 + t177;
  t1462 = -0.038749000006999997*t1452;
  t1518 = t1008*t1512;
  t1572 = t998*t1557;
  t1630 = t885*t1625;
  t1633 = t1422 + t1424 + t1446 + t1462 + t1518 + t1572 + t1630;
  t1051 = 6.5e-11*t413;
  t1063 = 7.e-6*t1058;
  t1093 = 4.e-6*t1090;
  t1105 = -1. + t1051 + t1063 + t1093;
  t1125 = -1. + t1123;
  t1128 = 4.e-6*t1125;
  t1140 = 7.e-6*t1136;
  t1141 = t1128 + t1085 + t1133 + t1140;
  t1193 = 7.e-6*t1185;
  t1204 = 4.e-6*t1194;
  t1206 = t1193 + t841 + t1054 + t1204;
  t1657 = 3.9608699999999997e-7*var1[16];
  t1662 = -1.1787626499999999e-16*t126;
  t1668 = t1430 + t1001;
  t1669 = -0.281211000004*t1668;
  t1684 = t1681 + t1034;
  t1700 = -0.038749000006999997*t1684;
  t1711 = t820*t1512;
  t1719 = t721*t1557;
  t1725 = t320*t1625;
  t1733 = t1657 + t1662 + t1669 + t1700 + t1711 + t1719 + t1725;
  t1778 = 1.5843479999999999e-12*var1[16];
  t1790 = -0.03874900000889869*t126;
  t1796 = t1447 + t934;
  t1803 = -0.281211000004*t1796;
  t1805 = t1681 + t708;
  t1810 = -1.8134809999999998e-6*t1805;
  t1813 = t1044*t1512;
  t1818 = t1122*t1557;
  t1820 = t1169*t1625;
  t1821 = t1778 + t1790 + t1803 + t1810 + t1813 + t1818 + t1820;
  t1117 = t1044*t1105;
  t1144 = t1122*t1141;
  t1229 = t1169*t1206;
  t1233 = t1117 + t1144 + t1229;
  t1943 = -1.*t1512*t1332;
  t1948 = -1.*t1250*t1557;
  t1949 = -1.*t1360*t1625;
  t1960 = t1943 + t1948 + t1949;
  t1965 = t1512*t1105;
  t1975 = t1557*t1141;
  t1976 = t1625*t1206;
  t1989 = t1965 + t1975 + t1976;
  t1831 = -1.*t1777*t1821;
  t1300 = t998*t1250;
  t1336 = t1008*t1332;
  t1392 = t885*t1360;
  t1417 = t1300 + t1336 + t1392;
  t1641 = t721*t1250;
  t1645 = t820*t1332;
  t1647 = t320*t1360;
  t1655 = t1641 + t1645 + t1647;
  t2067 = Cos(var1[15]);
  t2059 = Sin(var1[15]);
  t2078 = -1.*t2067;
  t2080 = 1. + t2078;
  t2085 = -0.15121*t2080;
  t1890 = t1821*t1233;
  t2088 = 0.15121*t2059;
  t2095 = t2059*t1633;
  t2099 = t2067*t1733;
  t2114 = t2085 + t2088 + t2095 + t2099;
  t1843 = t1008*t1105;
  t1848 = t998*t1141;
  t1851 = t885*t1206;
  t1853 = t1843 + t1848 + t1851;
  t1862 = t820*t1105;
  t1872 = t721*t1141;
  t1873 = t320*t1206;
  t1881 = t1862 + t1872 + t1873;
  t2157 = -0.15121*t2059;
  t2160 = t2067*t1633;
  t2172 = -1.*t2059*t1733;
  t2173 = t2085 + t2157 + t2160 + t2172;
  t691 = t320*t662;
  t811 = t721*t805;
  t850 = t820*t842;
  t877 = t691 + t811 + t850;
  t915 = t885*t662;
  t1000 = t998*t805;
  t1011 = t1008*t842;
  t1025 = t915 + t1000 + t1011;
  t2337 = Cos(var1[5]);
  t2376 = t2067*t877;
  t2397 = t2059*t1025;
  t2405 = t2376 + t2397;
  t2339 = -1.*t2059*t877;
  t2341 = t2067*t1025;
  t2351 = t2339 + t2341;
  t2410 = Sin(var1[5]);
  t2312 = Cos(var1[4]);
  t2285 = t1169*t662;
  t2289 = t1122*t805;
  t2292 = t1044*t842;
  t2295 = t2285 + t2289 + t2292;
  t2302 = Sin(var1[4]);
  t2372 = t2337*t2351;
  t2414 = -1.*t2405*t2410;
  t2415 = t2372 + t2414;
  t2461 = Cos(var1[3]);
  t2446 = t2337*t2405;
  t2454 = t2351*t2410;
  t2457 = t2446 + t2454;
  t2444 = Sin(var1[3]);
  t2467 = t2312*t2295;
  t2469 = -1.*t2302*t2415;
  t2472 = t2467 + t2469;
  t2193 = t2059*t1853;
  t2210 = t2067*t1881;
  t2222 = t2193 + t2210;
  t2241 = t2067*t1853;
  t2244 = -1.*t2059*t1881;
  t2246 = t2241 + t2244;
  t2142 = t2067*t1417;
  t2154 = -1.*t2059*t1655;
  t2156 = t2142 + t2154;
  t2060 = t2059*t1417;
  t2072 = t2067*t1655;
  t2075 = t2060 + t2072;
  t2581 = t2337*t2075;
  t2589 = t2156*t2410;
  t2600 = t2581 + t2589;
  t2557 = t2337*t2173;
  t2559 = -1.*t2114*t2410;
  t2567 = t2557 + t2559;
  t2711 = t2337*t2114;
  t2727 = t2173*t2410;
  t2766 = t2711 + t2727;
  t2536 = t2337*t2222;
  t2541 = t2246*t2410;
  t2543 = t2536 + t2541;
  t2778 = t2337*t2246;
  t2779 = -1.*t2222*t2410;
  t2782 = t2778 + t2779;
  t2769 = -1.*t2600*t2766;
  t2552 = t2337*t2156;
  t2554 = -1.*t2075*t2410;
  t2555 = t2552 + t2554;
  t2808 = t1777*t2302;
  t2809 = t2312*t2555;
  t2810 = t2808 + t2809;
  t2784 = t2766*t2543;
  t2816 = t1821*t2302;
  t2818 = t2312*t2567;
  t2820 = t2816 + t2818;
  t2795 = t1233*t2302;
  t2801 = t2312*t2782;
  t2807 = t2795 + t2801;
  t2828 = t2312*t1821;
  t2830 = -1.*t2302*t2567;
  t2833 = t2828 + t2830;
  t2967 = t1512*t842;
  t2979 = t805*t1557;
  t3014 = t662*t1625;
  t3016 = t2967 + t2979 + t3014;
  t3041 = -1.*t1512*t1105;
  t3080 = -1.*t1557*t1141;
  t3084 = -1.*t1625*t1206;
  t3090 = t3041 + t3080 + t3084;
  t2910 = t2295*t1821;
  t2928 = -1.*t1821*t1233;
  t2824 = t2312*t1777;
  t2825 = -1.*t2302*t2555;
  t2826 = t2824 + t2825;
  t3345 = t2457*t2766;
  t2306 = t2295*t2302;
  t2418 = t2312*t2415;
  t2429 = t2306 + t2418;
  t3377 = -1.*t2766*t2543;
  t2858 = t2312*t1233;
  t2862 = -1.*t2302*t2782;
  t2870 = t2858 + t2862;
  t3637 = -1.*t1512*t842;
  t3638 = -1.*t805*t1557;
  t3640 = -1.*t662*t1625;
  t3643 = t3637 + t3638 + t3640;
  t3658 = t1512*t1332;
  t3666 = t1250*t1557;
  t3680 = t1360*t1625;
  t3687 = t3658 + t3666 + t3680;
  t3602 = -1.*t2295*t1821;
  t3610 = t1777*t1821;
  t3824 = -1.*t2457*t2766;
  t3835 = t2600*t2766;
  p_output1[0]=t2429*var2[0] + (t2457*t2461 - 1.*t2444*t2472)*var2[1] + (t2444*t2457 + t2461*t2472)*var2[2] + (t2807*(t2769 - 1.*t2810*t2820 - 1.*t2826*t2833) + t2810*(t2784 + t2807*t2820 + t2833*t2870))*var2[3] + (t2543*(t1831 - 1.*t2555*t2567 + t2769) + t2600*(t1890 + t2567*t2782 + t2784))*var2[4] + (t1233*(t1831 - 1.*t2075*t2114 - 1.*t2156*t2173) + t1777*(t1890 + t2114*t2222 + t2173*t2246))*var2[5] + (-0.15121*t1025 + t1233*(-1.*t1417*t1633 - 1.*t1655*t1733 + t1831) + t1777*(t1633*t1853 + t1733*t1881 + t1890) + 0.15121*t877)*var2[15] + (-1.*t1105*t1960 - 1.*t1332*t1989 + 4.e-6*(-1.*t1141*t1960 - 1.*t1250*t1989) + 7.e-6*(t1206*t1960 + t1360*t1989) - 0.038749*t662 + 0.281211*t805 + 1.e-6*(t1054 + t431 + 7.e-6*t830))*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t2810*var2[0] + (t2461*t2600 - 1.*t2444*t2826)*var2[1] + (t2444*t2600 + t2461*t2826)*var2[2] + (t2807*(t2429*t2820 + t2472*t2833 + t3345) + t2429*(-1.*t2807*t2820 - 1.*t2833*t2870 + t3377))*var2[3] + (t2543*(t2415*t2567 + t2910 + t3345) + t2457*(-1.*t2567*t2782 + t2928 + t3377))*var2[4] + (t1233*(t2173*t2351 + t2114*t2405 + t2910) + t2295*(-1.*t2114*t2222 - 1.*t2173*t2246 + t2928))*var2[5] + (-0.15121*t1417 + 0.15121*t1655 + t2295*(-1.*t1633*t1853 - 1.*t1733*t1881 + t2928) + t1233*(t1025*t1633 + t2910 + t1733*t877))*var2[15] + (0.281211*t1250 - 0.038749*t1360 - 1.*t1105*t3016 + 7.e-6*(t1206*t3016 + t3090*t662) + 1.e-6*(4.e-6*(-1. + t1051) + t1133 + t747) + 4.e-6*(-1.*t1141*t3016 - 1.*t3090*t805) - 1.*t3090*t842)*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t2807*var2[0] + (t2461*t2543 - 1.*t2444*t2870)*var2[1] + (t2444*t2543 + t2461*t2870)*var2[2] + (t2810*(-1.*t2429*t2820 - 1.*t2472*t2833 + t3824) + t2429*(t2810*t2820 + t2826*t2833 + t3835))*var2[3] + (t2600*(-1.*t2415*t2567 + t3602 + t3824) + t2457*(t2555*t2567 + t3610 + t3835))*var2[4] + (t1777*(-1.*t2173*t2351 - 1.*t2114*t2405 + t3602) + t2295*(t2075*t2114 + t2156*t2173 + t3610))*var2[5] + (-0.15121*t1853 + 0.15121*t1881 + t2295*(t1417*t1633 + t1655*t1733 + t3610) + t1777*(-1.*t1025*t1633 + t3602 - 1.*t1733*t877))*var2[15] + (0.281211*t1141 - 0.038749*t1206 - 1.*t1332*t3643 + 7.e-6*(t1360*t3643 + t3687*t662) + 4.e-6*(-1.*t1250*t3643 - 1.*t3687*t805) + 1.e-6*(1. - 7.e-6*t1058 + 4.e-6*t1494 + t823) - 1.*t3687*t842)*var2[16] - 2.826290000000002e-7*var2[17];
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

#include "dh_RrFoot_DiagonalStance2.hh"

namespace TrotStance2
{

void dh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
