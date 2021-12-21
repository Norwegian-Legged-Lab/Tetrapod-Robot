/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:14 GMT+01:00
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
  double t69;
  double t119;
  double t155;
  double t224;
  double t522;
  double t536;
  double t541;
  double t549;
  double t569;
  double t609;
  double t329;
  double t379;
  double t516;
  double t663;
  double t734;
  double t212;
  double t906;
  double t914;
  double t925;
  double t952;
  double t13;
  double t835;
  double t801;
  double t811;
  double t813;
  double t865;
  double t877;
  double t878;
  double t1002;
  double t383;
  double t1021;
  double t252;
  double t931;
  double t1068;
  double t1072;
  double t1118;
  double t756;
  double t1030;
  double t745;
  double t1159;
  double t1022;
  double t1025;
  double t1033;
  double t1034;
  double t1038;
  double t1043;
  double t1044;
  double t1048;
  double t1173;
  double t1101;
  double t1108;
  double t1117;
  double t1119;
  double t1122;
  double t1123;
  double t1125;
  double t1132;
  double t1196;
  double t1206;
  double t1216;
  double t1225;
  double t1229;
  double t1233;
  double t1240;
  double t1242;
  double t1060;
  double t1311;
  double t1080;
  double t1341;
  double t1262;
  double t970;
  double t648;
  double t656;
  double t592;
  double t594;
  double t823;
  double t830;
  double t836;
  double t841;
  double t842;
  double t850;
  double t851;
  double t707;
  double t708;
  double t746;
  double t747;
  double t761;
  double t778;
  double t779;
  double t1136;
  double t1140;
  double t1169;
  double t1171;
  double t1185;
  double t1194;
  double t1195;
  double t1476;
  double t1478;
  double t1485;
  double t1493;
  double t1494;
  double t1496;
  double t1054;
  double t1058;
  double t1063;
  double t1066;
  double t1085;
  double t1090;
  double t1099;
  double t884;
  double t930;
  double t998;
  double t1000;
  double t1008;
  double t1011;
  double t1015;
  double t1443;
  double t1504;
  double t1506;
  double t1507;
  double t1431;
  double t1511;
  double t1512;
  double t1518;
  double t1425;
  double t1427;
  double t1521;
  double t1523;
  double t1524;
  double t1402;
  double t1383;
  double t1384;
  double t1344;
  double t1327;
  double t1329;
  double t1315;
  double t1285;
  double t1488;
  double t1497;
  double t1509;
  double t1519;
  double t1525;
  double t1526;
  double t1529;
  double t1531;
  double t1534;
  double t1535;
  double t1543;
  double t1544;
  double t1545;
  double t1546;
  double t1555;
  double t1557;
  double t1572;
  double t1573;
  double t1584;
  double t1592;
  double t1618;
  double t1632;
  double t1636;
  double t1681;
  double t1682;
  double t1683;
  double t1615;
  double t1753;
  double t1665;
  double t1698;
  double t1700;
  double t1701;
  double t1711;
  double t1719;
  double t1723;
  double t1728;
  double t1733;
  double t1749;
  double t1754;
  double t1755;
  double t1761;
  double t1774;
  double t1777;
  double t1778;
  double t1790;
  double t1793;
  double t1795;
  double t1863;
  double t1893;
  double t1904;
  double t1913;
  double t1915;
  double t1943;
  double t1948;
  double t1949;
  double t1955;
  double t1879;
  double t1995;
  double t1996;
  double t1997;
  double t2008;
  double t2025;
  double t1922;
  double t1974;
  double t1962;
  double t67;
  double t177;
  double t303;
  double t320;
  double t413;
  double t431;
  double t501;
  double t2089;
  double t2102;
  double t2099;
  double t2106;
  double t2109;
  double t2115;
  double t2120;
  double t2122;
  double t2132;
  double t2142;
  double t2145;
  double t2156;
  double t2157;
  double t2159;
  double t2166;
  double t2172;
  double t2173;
  double t2177;
  double t2183;
  double t2185;
  double t2187;
  double t2191;
  double t2206;
  double t2210;
  double t2222;
  double t2223;
  double t2356;
  double t2364;
  double t2370;
  double t2376;
  double t2383;
  double t2402;
  double t2414;
  double t2415;
  double t2418;
  double t2422;
  double t2441;
  double t2444;
  double t2446;
  double t2448;
  double t2457;
  double t2458;
  double t2461;
  double t2466;
  double t2560;
  double t2565;
  double t2566;
  double t2568;
  double t2569;
  double t2575;
  double t2589;
  double t2600;
  double t2670;
  double t2727;
  double t2735;
  double t2749;
  double t2769;
  double t2771;
  double t2775;
  double t2778;
  double t2779;
  double t2780;
  double t2783;
  double t2784;
  double t2785;
  double t1598;
  double t1606;
  double t1609;
  double t1610;
  double t2828;
  double t2830;
  double t2831;
  double t2838;
  double t2842;
  double t2852;
  double t2853;
  double t2857;
  double t2858;
  double t2859;
  double t2870;
  double t2872;
  double t2873;
  double t2877;
  double t2878;
  double t2881;
  double t1616;
  double t1617;
  double t1622;
  double t1623;
  double t1625;
  double t1628;
  double t1633;
  double t1634;
  double t1641;
  double t1645;
  double t1647;
  double t1649;
  double t1657;
  double t1662;
  double t1668;
  double t1669;
  double t1670;
  double t1673;
  double t2955;
  double t2957;
  double t2958;
  double t2960;
  double t2966;
  double t2967;
  double t2976;
  double t2996;
  double t3014;
  double t3016;
  double t3018;
  double t3031;
  double t3041;
  double t3044;
  double t3069;
  double t1872;
  double t1873;
  double t1881;
  double t1882;
  double t1890;
  double t1891;
  double t1924;
  double t1925;
  double t1930;
  double t1932;
  double t1934;
  double t1941;
  double t1963;
  double t1965;
  double t1975;
  double t1976;
  double t1989;
  double t1991;
  double t3182;
  double t3183;
  double t3186;
  double t3203;
  double t2028;
  double t3220;
  double t3223;
  double t3232;
  double t3253;
  double t2036;
  double t3271;
  double t3284;
  double t3292;
  double t3304;
  double t2048;
  double t2058;
  double t2069;
  double t2073;
  double t3643;
  double t3651;
  double t3655;
  double t3661;
  double t3666;
  double t3676;
  double t3681;
  double t3687;
  double t3692;
  double t3693;
  double t3710;
  double t3715;
  double t3730;
  double t3732;
  double t3738;
  double t3757;
  double t3758;
  double t3772;
  double t3828;
  double t3829;
  double t3832;
  double t3841;
  double t3843;
  double t3848;
  double t3862;
  double t3865;
  double t3870;
  double t3871;
  double t3872;
  double t3884;
  double t3885;
  double t3889;
  double t3892;
  double t3897;
  double t3898;
  double t4014;
  double t4019;
  double t4037;
  double t4072;
  double t4080;
  double t4093;
  double t4096;
  double t4103;
  double t4122;
  double t4125;
  double t4135;
  double t4147;
  double t4149;
  double t4155;
  double t4162;
  double t4163;
  double t4312;
  double t4315;
  double t4334;
  double t4345;
  double t4353;
  double t4359;
  double t4375;
  double t4383;
  double t4384;
  double t4394;
  double t4429;
  double t4462;
  double t4464;
  double t4469;
  double t4484;
  double t4793;
  double t4799;
  double t4804;
  double t4805;
  double t4822;
  double t4825;
  double t4828;
  double t4835;
  double t4838;
  double t4841;
  double t4852;
  double t4860;
  t69 = Cos(var1[16]);
  t119 = -1.*t69;
  t155 = 1. + t119;
  t224 = Sin(var1[16]);
  t522 = Cos(var1[15]);
  t536 = -1.*t522;
  t541 = 1. + t536;
  t549 = -0.15121*t541;
  t569 = Sin(var1[15]);
  t609 = Sin(var1[4]);
  t329 = -1. + t69;
  t379 = 4.e-6*t329;
  t516 = Cos(var1[5]);
  t663 = Sin(var1[5]);
  t734 = 7.e-6*t155;
  t212 = 2.8e-11*t155;
  t906 = Cos(var1[17]);
  t914 = -1.*t906;
  t925 = 1. + t914;
  t952 = Sin(var1[17]);
  t13 = Cos(var1[4]);
  t835 = -4.e-6*t224;
  t801 = t516*t569*t609;
  t811 = t522*t609*t663;
  t813 = t801 + t811;
  t865 = -1.*t522*t516*t609;
  t877 = t569*t609*t663;
  t878 = t865 + t877;
  t1002 = 2.8e-11*t925;
  t383 = -7.e-6*t224;
  t1021 = -2.8e-11*t155;
  t252 = -1.*t224;
  t931 = 7.e-6*t925;
  t1068 = -1. + t906;
  t1072 = 4.e-6*t1068;
  t1118 = 4.e-6*t155;
  t756 = 7.e-6*t224;
  t1030 = -7.e-6*t155;
  t745 = 4.e-6*t224;
  t1159 = 4.e-6*t952;
  t1022 = t1021 + t224;
  t1025 = t13*t1022;
  t1033 = t1030 + t835;
  t1034 = t1033*t813;
  t1038 = -1.000000000016*t155;
  t1043 = 1. + t1038;
  t1044 = t1043*t878;
  t1048 = t1025 + t1034 + t1044;
  t1173 = 7.e-6*t952;
  t1101 = -1.000000000049*t155;
  t1108 = 1. + t1101;
  t1117 = t1108*t13;
  t1119 = t1118 + t383;
  t1122 = t1119*t813;
  t1123 = t1021 + t252;
  t1125 = t1123*t878;
  t1132 = t1117 + t1122 + t1125;
  t1196 = t1118 + t756;
  t1206 = t13*t1196;
  t1216 = -6.5e-11*t155;
  t1225 = 1. + t1216;
  t1229 = t1225*t813;
  t1233 = t1030 + t745;
  t1240 = t1233*t878;
  t1242 = t1206 + t1229 + t1240;
  t1060 = -1.*t952;
  t1311 = 4.e-6*t925;
  t1080 = -7.e-6*t952;
  t1341 = -2.8e-11*t925;
  t1262 = -7.e-6*t925;
  t970 = -4.e-6*t952;
  t648 = 0.15121*t569;
  t656 = t549 + t648;
  t592 = -0.15121*t569;
  t594 = t549 + t592;
  t823 = -2.7726089999999997e-12*var1[16];
  t830 = -0.2812110000084994*t155;
  t836 = t734 + t835;
  t841 = -1.8134809999999998e-6*t836;
  t842 = t212 + t224;
  t850 = -0.038749000006999997*t842;
  t851 = t823 + t830 + t841 + t850;
  t707 = 3.9608699999999997e-7*var1[16];
  t708 = -1.1787626499999999e-16*t155;
  t746 = t734 + t745;
  t747 = -0.281211000004*t746;
  t761 = t379 + t756;
  t778 = -0.038749000006999997*t761;
  t779 = t707 + t708 + t747 + t778;
  t1136 = 2.826290000000002e-7*var1[17];
  t1140 = -2.18904205e-16*t925;
  t1169 = t931 + t1159;
  t1171 = -0.5031510000080001*t1169;
  t1185 = t1072 + t1173;
  t1194 = -0.038575000014*t1185;
  t1195 = t1136 + t1140 + t1171 + t1194;
  t1476 = -1.*t13*t516*t569;
  t1478 = -1.*t522*t13*t663;
  t1485 = t1476 + t1478;
  t1493 = -1.*t522*t13*t516;
  t1494 = t13*t569*t663;
  t1496 = t1493 + t1494;
  t1054 = 1.1305160000000008e-12*var1[17];
  t1058 = -0.03857500001589017*t925;
  t1063 = t1002 + t1060;
  t1066 = -0.5031510000080001*t1063;
  t1085 = t1072 + t1080;
  t1090 = -3.367757e-6*t1085;
  t1099 = t1054 + t1058 + t1066 + t1090;
  t884 = -1.9784030000000015e-12*var1[17];
  t930 = -0.5031510000160505*t925;
  t998 = t931 + t970;
  t1000 = -3.367757e-6*t998;
  t1008 = t1002 + t952;
  t1011 = -0.038575000014*t1008;
  t1015 = t884 + t930 + t1000 + t1011;
  t1443 = t1262 + t970;
  t1504 = t1233*t1485;
  t1506 = t1225*t1496;
  t1507 = t1504 + t1506;
  t1431 = t1341 + t952;
  t1511 = t1123*t1485;
  t1512 = t1119*t1496;
  t1518 = t1511 + t1512;
  t1425 = -1.000000000016*t925;
  t1427 = 1. + t1425;
  t1521 = t1043*t1485;
  t1523 = t1033*t1496;
  t1524 = t1521 + t1523;
  t1402 = t1311 + t1080;
  t1383 = -1.000000000049*t925;
  t1384 = 1. + t1383;
  t1344 = t1341 + t1060;
  t1327 = -6.5e-11*t925;
  t1329 = 1. + t1327;
  t1315 = t1311 + t1173;
  t1285 = t1262 + t1159;
  t1488 = t851*t1485;
  t1497 = t779*t1496;
  t1509 = t1195*t1507;
  t1519 = t1099*t1518;
  t1525 = t1015*t1524;
  t1526 = t1443*t1507;
  t1529 = t1431*t1518;
  t1531 = t1427*t1524;
  t1534 = t1526 + t1529 + t1531;
  t1535 = -0.80315*t1534;
  t1543 = t1402*t1507;
  t1544 = t1384*t1518;
  t1545 = t1344*t1524;
  t1546 = t1543 + t1544 + t1545;
  t1555 = -0.038576*t1546;
  t1557 = t1329*t1507;
  t1572 = t1315*t1518;
  t1573 = t1285*t1524;
  t1584 = t1557 + t1572 + t1573;
  t1592 = -0.148715*t1584;
  t1618 = 2.8e-11*t224;
  t1632 = 7.e-6*t69;
  t1636 = 4.e-6*t69;
  t1681 = t522*t13*t516;
  t1682 = -1.*t13*t569*t663;
  t1683 = t1681 + t1682;
  t1615 = -7.e-6*t69;
  t1753 = -2.8e-11*t224;
  t1665 = -4.e-6*t69;
  t1698 = t1632 + t745;
  t1700 = t1698*t609;
  t1701 = -6.5e-11*t224*t1485;
  t1711 = t1636 + t383;
  t1719 = t1711*t1683;
  t1723 = t1700 + t1701 + t1719;
  t1728 = -1.000000000049*t224*t609;
  t1733 = t1615 + t745;
  t1749 = t1733*t1485;
  t1754 = t119 + t1753;
  t1755 = t1754*t1683;
  t1761 = t1728 + t1749 + t1755;
  t1774 = t69 + t1753;
  t1777 = t1774*t609;
  t1778 = t1665 + t383;
  t1790 = t1778*t1485;
  t1793 = -1.000000000016*t224*t1683;
  t1795 = t1777 + t1790 + t1793;
  t1863 = 2.8e-11*t952;
  t1893 = t1022*t609;
  t1904 = t1033*t1485;
  t1913 = t1043*t1683;
  t1915 = t1893 + t1904 + t1913;
  t1943 = t1108*t609;
  t1948 = t1119*t1485;
  t1949 = t1123*t1683;
  t1955 = t1943 + t1948 + t1949;
  t1879 = -4.e-6*t906;
  t1995 = t1196*t609;
  t1996 = t1225*t1485;
  t1997 = t1233*t1683;
  t2008 = t1995 + t1996 + t1997;
  t2025 = -2.8e-11*t952;
  t1922 = -7.e-6*t906;
  t1974 = 4.e-6*t906;
  t1962 = 7.e-6*t906;
  t67 = 1.5843479999999999e-12*var1[16];
  t177 = -0.03874900000889869*t155;
  t303 = t212 + t252;
  t320 = -0.281211000004*t303;
  t413 = t379 + t383;
  t431 = -1.8134809999999998e-6*t413;
  t501 = t67 + t177 + t320 + t431;
  t2089 = Cos(var1[3]);
  t2102 = Sin(var1[3]);
  t2099 = t2089*t516*t609;
  t2106 = -1.*t2102*t663;
  t2109 = t2099 + t2106;
  t2115 = -1.*t516*t2102;
  t2120 = -1.*t2089*t609*t663;
  t2122 = t2115 + t2120;
  t2132 = -1.*t569*t2109;
  t2142 = t522*t2122;
  t2145 = t2132 + t2142;
  t2156 = t522*t2109;
  t2157 = t569*t2122;
  t2159 = t2156 + t2157;
  t2166 = -1.*t2089*t13*t1022;
  t2172 = t1033*t2145;
  t2173 = t1043*t2159;
  t2177 = t2166 + t2172 + t2173;
  t2183 = -1.*t1108*t2089*t13;
  t2185 = t1119*t2145;
  t2187 = t1123*t2159;
  t2191 = t2183 + t2185 + t2187;
  t2206 = -1.*t2089*t13*t1196;
  t2210 = t1225*t2145;
  t2222 = t1233*t2159;
  t2223 = t2206 + t2210 + t2222;
  t2356 = -1.*t13*t516*t569*t2102;
  t2364 = -1.*t522*t13*t2102*t663;
  t2370 = t2356 + t2364;
  t2376 = t522*t13*t516*t2102;
  t2383 = -1.*t13*t569*t2102*t663;
  t2402 = t2376 + t2383;
  t2414 = t1022*t2102*t609;
  t2415 = t1033*t2370;
  t2418 = t1043*t2402;
  t2422 = t2414 + t2415 + t2418;
  t2441 = t1108*t2102*t609;
  t2444 = t1119*t2370;
  t2446 = t1123*t2402;
  t2448 = t2441 + t2444 + t2446;
  t2457 = t1196*t2102*t609;
  t2458 = t1225*t2370;
  t2461 = t1233*t2402;
  t2466 = t2457 + t2458 + t2461;
  t2560 = -1.*t516*t2102*t609;
  t2565 = -1.*t2089*t663;
  t2566 = t2560 + t2565;
  t2568 = t2089*t516;
  t2569 = -1.*t2102*t609*t663;
  t2575 = t2568 + t2569;
  t2589 = t569*t2566;
  t2600 = t522*t2575;
  t2670 = t2589 + t2600;
  t2727 = t522*t2566;
  t2735 = -1.*t569*t2575;
  t2749 = t2727 + t2735;
  t2769 = t1233*t2670;
  t2771 = t1225*t2749;
  t2775 = t2769 + t2771;
  t2778 = t1123*t2670;
  t2779 = t1119*t2749;
  t2780 = t2778 + t2779;
  t2783 = t1043*t2670;
  t2784 = t1033*t2749;
  t2785 = t2783 + t2784;
  t1598 = -0.15121*t522;
  t1606 = t1598 + t592;
  t1609 = 0.15121*t522;
  t1610 = t1609 + t592;
  t2828 = t516*t2102*t609;
  t2830 = t2089*t663;
  t2831 = t2828 + t2830;
  t2838 = -1.*t569*t2831;
  t2842 = t2838 + t2600;
  t2852 = -1.*t522*t2831;
  t2853 = t2852 + t2735;
  t2857 = t1233*t2842;
  t2858 = t1225*t2853;
  t2859 = t2857 + t2858;
  t2870 = t1123*t2842;
  t2872 = t1119*t2853;
  t2873 = t2870 + t2872;
  t2877 = t1043*t2842;
  t2878 = t1033*t2853;
  t2881 = t2877 + t2878;
  t1616 = t1615 + t835;
  t1617 = -1.8134809999999998e-6*t1616;
  t1622 = t119 + t1618;
  t1623 = -0.281211000004*t1622;
  t1625 = -0.03874900000889869*t224;
  t1628 = 1.5843479999999999e-12 + t1617 + t1623 + t1625;
  t1633 = t1632 + t835;
  t1634 = -0.038749000006999997*t1633;
  t1641 = t1636 + t756;
  t1645 = -0.281211000004*t1641;
  t1647 = -1.1787626499999999e-16*t224;
  t1649 = 3.9608699999999997e-7 + t1634 + t1645 + t1647;
  t1657 = t69 + t1618;
  t1662 = -0.038749000006999997*t1657;
  t1668 = t1665 + t756;
  t1669 = -1.8134809999999998e-6*t1668;
  t1670 = -0.2812110000084994*t224;
  t1673 = -2.7726089999999997e-12 + t1662 + t1669 + t1670;
  t2955 = t522*t2831;
  t2957 = t569*t2575;
  t2958 = t2955 + t2957;
  t2960 = -1.*t13*t1698*t2102;
  t2966 = -6.5e-11*t224*t2842;
  t2967 = t1711*t2958;
  t2976 = t2960 + t2966 + t2967;
  t2996 = 1.000000000049*t13*t224*t2102;
  t3014 = t1733*t2842;
  t3016 = t1754*t2958;
  t3018 = t2996 + t3014 + t3016;
  t3031 = -1.*t13*t1774*t2102;
  t3041 = t1778*t2842;
  t3044 = -1.000000000016*t224*t2958;
  t3069 = t3031 + t3041 + t3044;
  t1872 = t906 + t1863;
  t1873 = -0.038575000014*t1872;
  t1881 = t1879 + t1173;
  t1882 = -3.367757e-6*t1881;
  t1890 = -0.5031510000160505*t952;
  t1891 = -1.9784030000000015e-12 + t1873 + t1882 + t1890;
  t1924 = t1922 + t970;
  t1925 = -3.367757e-6*t1924;
  t1930 = t914 + t1863;
  t1932 = -0.5031510000080001*t1930;
  t1934 = -0.03857500001589017*t952;
  t1941 = 1.1305160000000008e-12 + t1925 + t1932 + t1934;
  t1963 = t1962 + t970;
  t1965 = -0.038575000014*t1963;
  t1975 = t1974 + t1173;
  t1976 = -0.5031510000080001*t1975;
  t1989 = -2.18904205e-16*t952;
  t1991 = 2.826290000000002e-7 + t1965 + t1976 + t1989;
  t3182 = -1.*t13*t1022*t2102;
  t3183 = t1033*t2842;
  t3186 = t1043*t2958;
  t3203 = t3182 + t3183 + t3186;
  t2028 = t906 + t2025;
  t3220 = -1.*t1108*t13*t2102;
  t3223 = t1119*t2842;
  t3232 = t1123*t2958;
  t3253 = t3220 + t3223 + t3232;
  t2036 = t1879 + t1080;
  t3271 = -1.*t13*t1196*t2102;
  t3284 = t1225*t2842;
  t3292 = t1233*t2958;
  t3304 = t3271 + t3284 + t3292;
  t2048 = t914 + t2025;
  t2058 = t1922 + t1159;
  t2069 = t1974 + t1080;
  t2073 = t1962 + t1159;
  t3643 = t2089*t13*t516*t569;
  t3651 = t522*t2089*t13*t663;
  t3655 = t3643 + t3651;
  t3661 = -1.*t522*t2089*t13*t516;
  t3666 = t2089*t13*t569*t663;
  t3676 = t3661 + t3666;
  t3681 = -1.*t2089*t1022*t609;
  t3687 = t1033*t3655;
  t3692 = t1043*t3676;
  t3693 = t3681 + t3687 + t3692;
  t3710 = -1.*t1108*t2089*t609;
  t3715 = t1119*t3655;
  t3730 = t1123*t3676;
  t3732 = t3710 + t3715 + t3730;
  t3738 = -1.*t2089*t1196*t609;
  t3757 = t1225*t3655;
  t3758 = t1233*t3676;
  t3772 = t3738 + t3757 + t3758;
  t3828 = t516*t2102;
  t3829 = t2089*t609*t663;
  t3832 = t3828 + t3829;
  t3841 = t569*t2109;
  t3843 = t522*t3832;
  t3848 = t3841 + t3843;
  t3862 = -1.*t569*t3832;
  t3865 = t2156 + t3862;
  t3870 = t1233*t3848;
  t3871 = t1225*t3865;
  t3872 = t3870 + t3871;
  t3884 = t1123*t3848;
  t3885 = t1119*t3865;
  t3889 = t3884 + t3885;
  t3892 = t1043*t3848;
  t3897 = t1033*t3865;
  t3898 = t3892 + t3897;
  t4014 = -1.*t2089*t516*t609;
  t4019 = t2102*t663;
  t4037 = t4014 + t4019;
  t4072 = -1.*t569*t4037;
  t4080 = t4072 + t3843;
  t4093 = -1.*t522*t4037;
  t4096 = t4093 + t3862;
  t4103 = t1233*t4080;
  t4122 = t1225*t4096;
  t4125 = t4103 + t4122;
  t4135 = t1123*t4080;
  t4147 = t1119*t4096;
  t4149 = t4135 + t4147;
  t4155 = t1043*t4080;
  t4162 = t1033*t4096;
  t4163 = t4155 + t4162;
  t4312 = t522*t4037;
  t4315 = t569*t3832;
  t4334 = t4312 + t4315;
  t4345 = t2089*t13*t1698;
  t4353 = -6.5e-11*t224*t4080;
  t4359 = t1711*t4334;
  t4375 = t4345 + t4353 + t4359;
  t4383 = -1.000000000049*t2089*t13*t224;
  t4384 = t1733*t4080;
  t4394 = t1754*t4334;
  t4429 = t4383 + t4384 + t4394;
  t4462 = t2089*t13*t1774;
  t4464 = t1778*t4080;
  t4469 = -1.000000000016*t224*t4334;
  t4484 = t4462 + t4464 + t4469;
  t4793 = t2089*t13*t1022;
  t4799 = t1033*t4080;
  t4804 = t1043*t4334;
  t4805 = t4793 + t4799 + t4804;
  t4822 = t1108*t2089*t13;
  t4825 = t1119*t4080;
  t4828 = t1123*t4334;
  t4835 = t4822 + t4825 + t4828;
  t4838 = t2089*t13*t1196;
  t4841 = t1225*t4080;
  t4852 = t1233*t4334;
  t4860 = t4838 + t4841 + t4852;
  p_output1[0]=1.;
  p_output1[1]=t1015*t1048 + t1099*t1132 + t1195*t1242 - 0.148715*(t1048*t1285 + t1132*t1315 + t1242*t1329) - 0.038576*(t1048*t1344 + t1132*t1384 + t1242*t1402) - 0.80315*(t1048*t1427 + t1132*t1431 + t1242*t1443) + t13*t501 - 1.*t516*t594*t609 + t609*t656*t663 + t779*t813 + t851*t878;
  p_output1[2]=t1488 + t1497 + t1509 + t1519 + t1525 + t1535 + t1555 + t1592 - 1.*t13*t516*t656 - 1.*t13*t594*t663;
  p_output1[3]=t1488 + t1497 + t1509 + t1519 + t1525 + t1535 + t1555 + t1592 + t13*t1606*t516 - 1.*t13*t1610*t663;
  p_output1[4]=t1485*t1649 + t1673*t1683 + t1195*t1723 + t1099*t1761 + t1015*t1795 - 0.148715*(t1329*t1723 + t1315*t1761 + t1285*t1795) - 0.038576*(t1402*t1723 + t1384*t1761 + t1344*t1795) - 0.80315*(t1443*t1723 + t1431*t1761 + t1427*t1795) + t1628*t609;
  p_output1[5]=t1891*t1915 + t1941*t1955 + t1991*t2008 - 0.80315*(t1955*t2028 + t2008*t2036 - 1.000000000016*t1915*t952) - 0.038576*(t1915*t2048 + t2008*t2058 - 1.000000000049*t1955*t952) - 0.148715*(t1915*t2069 + t1955*t2073 - 6.5e-11*t2008*t952);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1015*t2177 + t1099*t2191 + t1195*t2223 - 0.148715*(t1285*t2177 + t1315*t2191 + t1329*t2223) - 0.038576*(t1344*t2177 + t1384*t2191 + t1402*t2223) - 0.80315*(t1427*t2177 + t1431*t2191 + t1443*t2223) - 1.*t13*t2089*t501 + t2109*t594 + t2122*t656 + t2145*t779 + t2159*t851;
  p_output1[9]=t1015*t2422 + t1099*t2448 + t1195*t2466 - 0.148715*(t1285*t2422 + t1315*t2448 + t1329*t2466) - 0.038576*(t1344*t2422 + t1384*t2448 + t1402*t2466) - 0.80315*(t1427*t2422 + t1431*t2448 + t1443*t2466) + t13*t2102*t516*t594 + t2102*t501*t609 - 1.*t13*t2102*t656*t663 + t2370*t779 + t2402*t851;
  p_output1[10]=t1195*t2775 + t1099*t2780 + t1015*t2785 - 0.148715*(t1329*t2775 + t1315*t2780 + t1285*t2785) - 0.038576*(t1402*t2775 + t1384*t2780 + t1344*t2785) - 0.80315*(t1443*t2775 + t1431*t2780 + t1427*t2785) + t2575*t594 + t2566*t656 + t2749*t779 + t2670*t851;
  p_output1[11]=t1610*t2575 + t1606*t2831 + t1195*t2859 + t1099*t2873 + t1015*t2881 - 0.148715*(t1329*t2859 + t1315*t2873 + t1285*t2881) - 0.038576*(t1402*t2859 + t1384*t2873 + t1344*t2881) - 0.80315*(t1443*t2859 + t1431*t2873 + t1427*t2881) + t2853*t779 + t2842*t851;
  p_output1[12]=-1.*t13*t1628*t2102 + t1649*t2842 + t1673*t2958 + t1195*t2976 + t1099*t3018 + t1015*t3069 - 0.148715*(t1329*t2976 + t1315*t3018 + t1285*t3069) - 0.038576*(t1402*t2976 + t1384*t3018 + t1344*t3069) - 0.80315*(t1443*t2976 + t1431*t3018 + t1427*t3069);
  p_output1[13]=t1891*t3203 + t1941*t3253 + t1991*t3304 - 0.80315*(t2028*t3253 + t2036*t3304 - 1.000000000016*t3203*t952) - 0.038576*(t2048*t3203 + t2058*t3304 - 1.000000000049*t3253*t952) - 0.148715*(t2069*t3203 + t2073*t3253 - 6.5e-11*t3304*t952);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1015*t3203 + t1099*t3253 + t1195*t3304 - 0.148715*(t1285*t3203 + t1315*t3253 + t1329*t3304) - 0.038576*(t1344*t3203 + t1384*t3253 + t1402*t3304) - 0.80315*(t1427*t3203 + t1431*t3253 + t1443*t3304) - 1.*t13*t2102*t501 + t2831*t594 + t2575*t656 + t2842*t779 + t2958*t851;
  p_output1[17]=t1015*t3693 + t1099*t3732 + t1195*t3772 - 0.148715*(t1285*t3693 + t1315*t3732 + t1329*t3772) - 0.038576*(t1344*t3693 + t1384*t3732 + t1402*t3772) - 0.80315*(t1427*t3693 + t1431*t3732 + t1443*t3772) - 1.*t13*t2089*t516*t594 - 1.*t2089*t501*t609 + t13*t2089*t656*t663 + t3655*t779 + t3676*t851;
  p_output1[18]=t1195*t3872 + t1099*t3889 + t1015*t3898 - 0.148715*(t1329*t3872 + t1315*t3889 + t1285*t3898) - 0.038576*(t1402*t3872 + t1384*t3889 + t1344*t3898) - 0.80315*(t1443*t3872 + t1431*t3889 + t1427*t3898) + t3832*t594 + t2109*t656 + t3865*t779 + t3848*t851;
  p_output1[19]=t1610*t3832 + t1606*t4037 + t1195*t4125 + t1099*t4149 + t1015*t4163 - 0.148715*(t1329*t4125 + t1315*t4149 + t1285*t4163) - 0.038576*(t1402*t4125 + t1384*t4149 + t1344*t4163) - 0.80315*(t1443*t4125 + t1431*t4149 + t1427*t4163) + t4096*t779 + t4080*t851;
  p_output1[20]=t13*t1628*t2089 + t1649*t4080 + t1673*t4334 + t1195*t4375 + t1099*t4429 + t1015*t4484 - 0.148715*(t1329*t4375 + t1315*t4429 + t1285*t4484) - 0.038576*(t1402*t4375 + t1384*t4429 + t1344*t4484) - 0.80315*(t1443*t4375 + t1431*t4429 + t1427*t4484);
  p_output1[21]=t1891*t4805 + t1941*t4835 + t1991*t4860 - 0.80315*(t2028*t4835 + t2036*t4860 - 1.000000000016*t4805*t952) - 0.038576*(t2048*t4805 + t2058*t4860 - 1.000000000049*t4835*t952) - 0.148715*(t2069*t4805 + t2073*t4835 - 6.5e-11*t4860*t952);
  p_output1[22]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RrFoot_DiagonalStance2.hh"

namespace TrotStance2
{

void J_h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
