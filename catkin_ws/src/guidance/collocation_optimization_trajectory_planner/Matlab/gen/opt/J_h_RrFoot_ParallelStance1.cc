/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:30 GMT+01:00
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
  double t72;
  double t85;
  double t112;
  double t136;
  double t241;
  double t250;
  double t251;
  double t256;
  double t265;
  double t277;
  double t176;
  double t185;
  double t227;
  double t316;
  double t344;
  double t132;
  double t485;
  double t496;
  double t505;
  double t511;
  double t10;
  double t416;
  double t390;
  double t402;
  double t404;
  double t459;
  double t465;
  double t466;
  double t535;
  double t188;
  double t564;
  double t149;
  double t510;
  double t629;
  double t636;
  double t676;
  double t352;
  double t570;
  double t346;
  double t713;
  double t565;
  double t568;
  double t572;
  double t576;
  double t583;
  double t584;
  double t589;
  double t594;
  double t742;
  double t663;
  double t664;
  double t667;
  double t679;
  double t682;
  double t692;
  double t693;
  double t697;
  double t773;
  double t775;
  double t776;
  double t777;
  double t780;
  double t783;
  double t785;
  double t797;
  double t614;
  double t813;
  double t647;
  double t842;
  double t801;
  double t517;
  double t291;
  double t297;
  double t270;
  double t272;
  double t406;
  double t410;
  double t417;
  double t439;
  double t440;
  double t446;
  double t449;
  double t336;
  double t340;
  double t347;
  double t349;
  double t353;
  double t382;
  double t384;
  double t704;
  double t711;
  double t721;
  double t729;
  double t754;
  double t768;
  double t770;
  double t912;
  double t914;
  double t916;
  double t923;
  double t925;
  double t926;
  double t606;
  double t612;
  double t623;
  double t624;
  double t648;
  double t654;
  double t660;
  double t478;
  double t506;
  double t524;
  double t527;
  double t544;
  double t548;
  double t557;
  double t898;
  double t928;
  double t932;
  double t938;
  double t886;
  double t944;
  double t947;
  double t949;
  double t880;
  double t882;
  double t951;
  double t952;
  double t955;
  double t864;
  double t849;
  double t859;
  double t843;
  double t827;
  double t835;
  double t821;
  double t804;
  double t917;
  double t927;
  double t939;
  double t950;
  double t960;
  double t961;
  double t962;
  double t963;
  double t964;
  double t968;
  double t973;
  double t976;
  double t978;
  double t980;
  double t981;
  double t982;
  double t984;
  double t987;
  double t988;
  double t993;
  double t1032;
  double t1066;
  double t1073;
  double t1111;
  double t1112;
  double t1114;
  double t1018;
  double t1149;
  double t1097;
  double t1120;
  double t1122;
  double t1124;
  double t1125;
  double t1127;
  double t1128;
  double t1136;
  double t1141;
  double t1144;
  double t1154;
  double t1155;
  double t1158;
  double t1168;
  double t1172;
  double t1175;
  double t1177;
  double t1178;
  double t1180;
  double t1232;
  double t1269;
  double t1276;
  double t1279;
  double t1281;
  double t1332;
  double t1334;
  double t1335;
  double t1349;
  double t1239;
  double t1383;
  double t1390;
  double t1400;
  double t1401;
  double t1417;
  double t1297;
  double t1367;
  double t1359;
  double t67;
  double t119;
  double t166;
  double t169;
  double t198;
  double t204;
  double t224;
  double t1488;
  double t1495;
  double t1491;
  double t1498;
  double t1499;
  double t1510;
  double t1512;
  double t1515;
  double t1523;
  double t1524;
  double t1531;
  double t1540;
  double t1543;
  double t1552;
  double t1563;
  double t1564;
  double t1567;
  double t1569;
  double t1577;
  double t1578;
  double t1587;
  double t1592;
  double t1594;
  double t1595;
  double t1612;
  double t1617;
  double t1754;
  double t1757;
  double t1759;
  double t1777;
  double t1783;
  double t1786;
  double t1789;
  double t1791;
  double t1800;
  double t1801;
  double t1810;
  double t1815;
  double t1816;
  double t1819;
  double t1831;
  double t1835;
  double t1837;
  double t1840;
  double t1947;
  double t1960;
  double t1961;
  double t1966;
  double t1972;
  double t1974;
  double t1978;
  double t1985;
  double t2003;
  double t2006;
  double t2008;
  double t2014;
  double t2017;
  double t2022;
  double t2023;
  double t2033;
  double t2038;
  double t2041;
  double t2045;
  double t2047;
  double t2053;
  double t997;
  double t1001;
  double t1006;
  double t1007;
  double t2131;
  double t2135;
  double t2137;
  double t2144;
  double t2151;
  double t2156;
  double t2157;
  double t2166;
  double t2173;
  double t2177;
  double t2190;
  double t2200;
  double t2201;
  double t2213;
  double t2223;
  double t2224;
  double t1024;
  double t1027;
  double t1034;
  double t1041;
  double t1055;
  double t1061;
  double t1069;
  double t1071;
  double t1075;
  double t1076;
  double t1079;
  double t1080;
  double t1093;
  double t1095;
  double t1101;
  double t1102;
  double t1103;
  double t1108;
  double t2332;
  double t2342;
  double t2352;
  double t2361;
  double t2362;
  double t2366;
  double t2369;
  double t2380;
  double t2382;
  double t2389;
  double t2395;
  double t2405;
  double t2408;
  double t2420;
  double t2421;
  double t1236;
  double t1238;
  double t1240;
  double t1246;
  double t1264;
  double t1268;
  double t1299;
  double t1311;
  double t1313;
  double t1316;
  double t1321;
  double t1329;
  double t1364;
  double t1365;
  double t1369;
  double t1370;
  double t1375;
  double t1381;
  double t2493;
  double t2506;
  double t2507;
  double t2512;
  double t1418;
  double t2520;
  double t2526;
  double t2535;
  double t2542;
  double t1423;
  double t2567;
  double t2571;
  double t2572;
  double t2574;
  double t1444;
  double t1452;
  double t1463;
  double t1474;
  double t2736;
  double t2737;
  double t2738;
  double t2756;
  double t2761;
  double t2768;
  double t2777;
  double t2782;
  double t2793;
  double t2795;
  double t2797;
  double t2799;
  double t2801;
  double t2807;
  double t2816;
  double t2826;
  double t2832;
  double t2833;
  double t2905;
  double t2911;
  double t2915;
  double t2928;
  double t2931;
  double t2932;
  double t2939;
  double t2941;
  double t2944;
  double t2945;
  double t2946;
  double t2955;
  double t2958;
  double t2959;
  double t2965;
  double t2966;
  double t2967;
  double t3036;
  double t3038;
  double t3041;
  double t3059;
  double t3064;
  double t3078;
  double t3091;
  double t3097;
  double t3098;
  double t3103;
  double t3113;
  double t3127;
  double t3132;
  double t3141;
  double t3143;
  double t3150;
  double t3226;
  double t3228;
  double t3231;
  double t3241;
  double t3243;
  double t3247;
  double t3250;
  double t3253;
  double t3254;
  double t3265;
  double t3271;
  double t3274;
  double t3278;
  double t3283;
  double t3286;
  double t3352;
  double t3353;
  double t3355;
  double t3358;
  double t3370;
  double t3371;
  double t3380;
  double t3381;
  double t3391;
  double t3392;
  double t3394;
  double t3400;
  t72 = Cos(var1[16]);
  t85 = -1.*t72;
  t112 = 1. + t85;
  t136 = Sin(var1[16]);
  t241 = Cos(var1[15]);
  t250 = -1.*t241;
  t251 = 1. + t250;
  t256 = -0.15121*t251;
  t265 = Sin(var1[15]);
  t277 = Sin(var1[4]);
  t176 = -1. + t72;
  t185 = 4.e-6*t176;
  t227 = Cos(var1[5]);
  t316 = Sin(var1[5]);
  t344 = 7.e-6*t112;
  t132 = 2.8e-11*t112;
  t485 = Cos(var1[17]);
  t496 = -1.*t485;
  t505 = 1. + t496;
  t511 = Sin(var1[17]);
  t10 = Cos(var1[4]);
  t416 = -4.e-6*t136;
  t390 = t227*t265*t277;
  t402 = t241*t277*t316;
  t404 = t390 + t402;
  t459 = -1.*t241*t227*t277;
  t465 = t265*t277*t316;
  t466 = t459 + t465;
  t535 = 2.8e-11*t505;
  t188 = -7.e-6*t136;
  t564 = -2.8e-11*t112;
  t149 = -1.*t136;
  t510 = 7.e-6*t505;
  t629 = -1. + t485;
  t636 = 4.e-6*t629;
  t676 = 4.e-6*t112;
  t352 = 7.e-6*t136;
  t570 = -7.e-6*t112;
  t346 = 4.e-6*t136;
  t713 = 4.e-6*t511;
  t565 = t564 + t136;
  t568 = t10*t565;
  t572 = t570 + t416;
  t576 = t572*t404;
  t583 = -1.000000000016*t112;
  t584 = 1. + t583;
  t589 = t584*t466;
  t594 = t568 + t576 + t589;
  t742 = 7.e-6*t511;
  t663 = -1.000000000049*t112;
  t664 = 1. + t663;
  t667 = t664*t10;
  t679 = t676 + t188;
  t682 = t679*t404;
  t692 = t564 + t149;
  t693 = t692*t466;
  t697 = t667 + t682 + t693;
  t773 = t676 + t352;
  t775 = t10*t773;
  t776 = -6.5e-11*t112;
  t777 = 1. + t776;
  t780 = t777*t404;
  t783 = t570 + t346;
  t785 = t783*t466;
  t797 = t775 + t780 + t785;
  t614 = -1.*t511;
  t813 = 4.e-6*t505;
  t647 = -7.e-6*t511;
  t842 = -2.8e-11*t505;
  t801 = -7.e-6*t505;
  t517 = -4.e-6*t511;
  t291 = 0.15121*t265;
  t297 = t256 + t291;
  t270 = -0.15121*t265;
  t272 = t256 + t270;
  t406 = -2.7726089999999997e-12*var1[16];
  t410 = -0.2812110000084994*t112;
  t417 = t344 + t416;
  t439 = -1.8134809999999998e-6*t417;
  t440 = t132 + t136;
  t446 = -0.038749000006999997*t440;
  t449 = t406 + t410 + t439 + t446;
  t336 = 3.9608699999999997e-7*var1[16];
  t340 = -1.1787626499999999e-16*t112;
  t347 = t344 + t346;
  t349 = -0.281211000004*t347;
  t353 = t185 + t352;
  t382 = -0.038749000006999997*t353;
  t384 = t336 + t340 + t349 + t382;
  t704 = 2.826290000000002e-7*var1[17];
  t711 = -2.18904205e-16*t505;
  t721 = t510 + t713;
  t729 = -0.5031510000080001*t721;
  t754 = t636 + t742;
  t768 = -0.038575000014*t754;
  t770 = t704 + t711 + t729 + t768;
  t912 = -1.*t10*t227*t265;
  t914 = -1.*t241*t10*t316;
  t916 = t912 + t914;
  t923 = -1.*t241*t10*t227;
  t925 = t10*t265*t316;
  t926 = t923 + t925;
  t606 = 1.1305160000000008e-12*var1[17];
  t612 = -0.03857500001589017*t505;
  t623 = t535 + t614;
  t624 = -0.5031510000080001*t623;
  t648 = t636 + t647;
  t654 = -3.367757e-6*t648;
  t660 = t606 + t612 + t624 + t654;
  t478 = -1.9784030000000015e-12*var1[17];
  t506 = -0.5031510000160505*t505;
  t524 = t510 + t517;
  t527 = -3.367757e-6*t524;
  t544 = t535 + t511;
  t548 = -0.038575000014*t544;
  t557 = t478 + t506 + t527 + t548;
  t898 = t801 + t517;
  t928 = t783*t916;
  t932 = t777*t926;
  t938 = t928 + t932;
  t886 = t842 + t511;
  t944 = t692*t916;
  t947 = t679*t926;
  t949 = t944 + t947;
  t880 = -1.000000000016*t505;
  t882 = 1. + t880;
  t951 = t584*t916;
  t952 = t572*t926;
  t955 = t951 + t952;
  t864 = t813 + t647;
  t849 = -1.000000000049*t505;
  t859 = 1. + t849;
  t843 = t842 + t614;
  t827 = -6.5e-11*t505;
  t835 = 1. + t827;
  t821 = t813 + t742;
  t804 = t801 + t713;
  t917 = t449*t916;
  t927 = t384*t926;
  t939 = t770*t938;
  t950 = t660*t949;
  t960 = t557*t955;
  t961 = t898*t938;
  t962 = t886*t949;
  t963 = t882*t955;
  t964 = t961 + t962 + t963;
  t968 = -0.80315*t964;
  t973 = t864*t938;
  t976 = t859*t949;
  t978 = t843*t955;
  t980 = t973 + t976 + t978;
  t981 = -0.038576*t980;
  t982 = t835*t938;
  t984 = t821*t949;
  t987 = t804*t955;
  t988 = t982 + t984 + t987;
  t993 = -0.148715*t988;
  t1032 = 2.8e-11*t136;
  t1066 = 7.e-6*t72;
  t1073 = 4.e-6*t72;
  t1111 = t241*t10*t227;
  t1112 = -1.*t10*t265*t316;
  t1114 = t1111 + t1112;
  t1018 = -7.e-6*t72;
  t1149 = -2.8e-11*t136;
  t1097 = -4.e-6*t72;
  t1120 = t1066 + t346;
  t1122 = t1120*t277;
  t1124 = -6.5e-11*t136*t916;
  t1125 = t1073 + t188;
  t1127 = t1125*t1114;
  t1128 = t1122 + t1124 + t1127;
  t1136 = -1.000000000049*t136*t277;
  t1141 = t1018 + t346;
  t1144 = t1141*t916;
  t1154 = t85 + t1149;
  t1155 = t1154*t1114;
  t1158 = t1136 + t1144 + t1155;
  t1168 = t72 + t1149;
  t1172 = t1168*t277;
  t1175 = t1097 + t188;
  t1177 = t1175*t916;
  t1178 = -1.000000000016*t136*t1114;
  t1180 = t1172 + t1177 + t1178;
  t1232 = 2.8e-11*t511;
  t1269 = t565*t277;
  t1276 = t572*t916;
  t1279 = t584*t1114;
  t1281 = t1269 + t1276 + t1279;
  t1332 = t664*t277;
  t1334 = t679*t916;
  t1335 = t692*t1114;
  t1349 = t1332 + t1334 + t1335;
  t1239 = -4.e-6*t485;
  t1383 = t773*t277;
  t1390 = t777*t916;
  t1400 = t783*t1114;
  t1401 = t1383 + t1390 + t1400;
  t1417 = -2.8e-11*t511;
  t1297 = -7.e-6*t485;
  t1367 = 4.e-6*t485;
  t1359 = 7.e-6*t485;
  t67 = 1.5843479999999999e-12*var1[16];
  t119 = -0.03874900000889869*t112;
  t166 = t132 + t149;
  t169 = -0.281211000004*t166;
  t198 = t185 + t188;
  t204 = -1.8134809999999998e-6*t198;
  t224 = t67 + t119 + t169 + t204;
  t1488 = Cos(var1[3]);
  t1495 = Sin(var1[3]);
  t1491 = t1488*t227*t277;
  t1498 = -1.*t1495*t316;
  t1499 = t1491 + t1498;
  t1510 = -1.*t227*t1495;
  t1512 = -1.*t1488*t277*t316;
  t1515 = t1510 + t1512;
  t1523 = -1.*t265*t1499;
  t1524 = t241*t1515;
  t1531 = t1523 + t1524;
  t1540 = t241*t1499;
  t1543 = t265*t1515;
  t1552 = t1540 + t1543;
  t1563 = -1.*t1488*t10*t565;
  t1564 = t572*t1531;
  t1567 = t584*t1552;
  t1569 = t1563 + t1564 + t1567;
  t1577 = -1.*t664*t1488*t10;
  t1578 = t679*t1531;
  t1587 = t692*t1552;
  t1592 = t1577 + t1578 + t1587;
  t1594 = -1.*t1488*t10*t773;
  t1595 = t777*t1531;
  t1612 = t783*t1552;
  t1617 = t1594 + t1595 + t1612;
  t1754 = -1.*t10*t227*t265*t1495;
  t1757 = -1.*t241*t10*t1495*t316;
  t1759 = t1754 + t1757;
  t1777 = t241*t10*t227*t1495;
  t1783 = -1.*t10*t265*t1495*t316;
  t1786 = t1777 + t1783;
  t1789 = t565*t1495*t277;
  t1791 = t572*t1759;
  t1800 = t584*t1786;
  t1801 = t1789 + t1791 + t1800;
  t1810 = t664*t1495*t277;
  t1815 = t679*t1759;
  t1816 = t692*t1786;
  t1819 = t1810 + t1815 + t1816;
  t1831 = t773*t1495*t277;
  t1835 = t777*t1759;
  t1837 = t783*t1786;
  t1840 = t1831 + t1835 + t1837;
  t1947 = -1.*t227*t1495*t277;
  t1960 = -1.*t1488*t316;
  t1961 = t1947 + t1960;
  t1966 = t1488*t227;
  t1972 = -1.*t1495*t277*t316;
  t1974 = t1966 + t1972;
  t1978 = t265*t1961;
  t1985 = t241*t1974;
  t2003 = t1978 + t1985;
  t2006 = t241*t1961;
  t2008 = -1.*t265*t1974;
  t2014 = t2006 + t2008;
  t2017 = t783*t2003;
  t2022 = t777*t2014;
  t2023 = t2017 + t2022;
  t2033 = t692*t2003;
  t2038 = t679*t2014;
  t2041 = t2033 + t2038;
  t2045 = t584*t2003;
  t2047 = t572*t2014;
  t2053 = t2045 + t2047;
  t997 = -0.15121*t241;
  t1001 = t997 + t270;
  t1006 = 0.15121*t241;
  t1007 = t1006 + t270;
  t2131 = t227*t1495*t277;
  t2135 = t1488*t316;
  t2137 = t2131 + t2135;
  t2144 = -1.*t265*t2137;
  t2151 = t2144 + t1985;
  t2156 = -1.*t241*t2137;
  t2157 = t2156 + t2008;
  t2166 = t783*t2151;
  t2173 = t777*t2157;
  t2177 = t2166 + t2173;
  t2190 = t692*t2151;
  t2200 = t679*t2157;
  t2201 = t2190 + t2200;
  t2213 = t584*t2151;
  t2223 = t572*t2157;
  t2224 = t2213 + t2223;
  t1024 = t1018 + t416;
  t1027 = -1.8134809999999998e-6*t1024;
  t1034 = t85 + t1032;
  t1041 = -0.281211000004*t1034;
  t1055 = -0.03874900000889869*t136;
  t1061 = 1.5843479999999999e-12 + t1027 + t1041 + t1055;
  t1069 = t1066 + t416;
  t1071 = -0.038749000006999997*t1069;
  t1075 = t1073 + t352;
  t1076 = -0.281211000004*t1075;
  t1079 = -1.1787626499999999e-16*t136;
  t1080 = 3.9608699999999997e-7 + t1071 + t1076 + t1079;
  t1093 = t72 + t1032;
  t1095 = -0.038749000006999997*t1093;
  t1101 = t1097 + t352;
  t1102 = -1.8134809999999998e-6*t1101;
  t1103 = -0.2812110000084994*t136;
  t1108 = -2.7726089999999997e-12 + t1095 + t1102 + t1103;
  t2332 = t241*t2137;
  t2342 = t265*t1974;
  t2352 = t2332 + t2342;
  t2361 = -1.*t10*t1120*t1495;
  t2362 = -6.5e-11*t136*t2151;
  t2366 = t1125*t2352;
  t2369 = t2361 + t2362 + t2366;
  t2380 = 1.000000000049*t10*t136*t1495;
  t2382 = t1141*t2151;
  t2389 = t1154*t2352;
  t2395 = t2380 + t2382 + t2389;
  t2405 = -1.*t10*t1168*t1495;
  t2408 = t1175*t2151;
  t2420 = -1.000000000016*t136*t2352;
  t2421 = t2405 + t2408 + t2420;
  t1236 = t485 + t1232;
  t1238 = -0.038575000014*t1236;
  t1240 = t1239 + t742;
  t1246 = -3.367757e-6*t1240;
  t1264 = -0.5031510000160505*t511;
  t1268 = -1.9784030000000015e-12 + t1238 + t1246 + t1264;
  t1299 = t1297 + t517;
  t1311 = -3.367757e-6*t1299;
  t1313 = t496 + t1232;
  t1316 = -0.5031510000080001*t1313;
  t1321 = -0.03857500001589017*t511;
  t1329 = 1.1305160000000008e-12 + t1311 + t1316 + t1321;
  t1364 = t1359 + t517;
  t1365 = -0.038575000014*t1364;
  t1369 = t1367 + t742;
  t1370 = -0.5031510000080001*t1369;
  t1375 = -2.18904205e-16*t511;
  t1381 = 2.826290000000002e-7 + t1365 + t1370 + t1375;
  t2493 = -1.*t10*t565*t1495;
  t2506 = t572*t2151;
  t2507 = t584*t2352;
  t2512 = t2493 + t2506 + t2507;
  t1418 = t485 + t1417;
  t2520 = -1.*t664*t10*t1495;
  t2526 = t679*t2151;
  t2535 = t692*t2352;
  t2542 = t2520 + t2526 + t2535;
  t1423 = t1239 + t647;
  t2567 = -1.*t10*t773*t1495;
  t2571 = t777*t2151;
  t2572 = t783*t2352;
  t2574 = t2567 + t2571 + t2572;
  t1444 = t496 + t1417;
  t1452 = t1297 + t713;
  t1463 = t1367 + t647;
  t1474 = t1359 + t713;
  t2736 = t1488*t10*t227*t265;
  t2737 = t241*t1488*t10*t316;
  t2738 = t2736 + t2737;
  t2756 = -1.*t241*t1488*t10*t227;
  t2761 = t1488*t10*t265*t316;
  t2768 = t2756 + t2761;
  t2777 = -1.*t1488*t565*t277;
  t2782 = t572*t2738;
  t2793 = t584*t2768;
  t2795 = t2777 + t2782 + t2793;
  t2797 = -1.*t664*t1488*t277;
  t2799 = t679*t2738;
  t2801 = t692*t2768;
  t2807 = t2797 + t2799 + t2801;
  t2816 = -1.*t1488*t773*t277;
  t2826 = t777*t2738;
  t2832 = t783*t2768;
  t2833 = t2816 + t2826 + t2832;
  t2905 = t227*t1495;
  t2911 = t1488*t277*t316;
  t2915 = t2905 + t2911;
  t2928 = t265*t1499;
  t2931 = t241*t2915;
  t2932 = t2928 + t2931;
  t2939 = -1.*t265*t2915;
  t2941 = t1540 + t2939;
  t2944 = t783*t2932;
  t2945 = t777*t2941;
  t2946 = t2944 + t2945;
  t2955 = t692*t2932;
  t2958 = t679*t2941;
  t2959 = t2955 + t2958;
  t2965 = t584*t2932;
  t2966 = t572*t2941;
  t2967 = t2965 + t2966;
  t3036 = -1.*t1488*t227*t277;
  t3038 = t1495*t316;
  t3041 = t3036 + t3038;
  t3059 = -1.*t265*t3041;
  t3064 = t3059 + t2931;
  t3078 = -1.*t241*t3041;
  t3091 = t3078 + t2939;
  t3097 = t783*t3064;
  t3098 = t777*t3091;
  t3103 = t3097 + t3098;
  t3113 = t692*t3064;
  t3127 = t679*t3091;
  t3132 = t3113 + t3127;
  t3141 = t584*t3064;
  t3143 = t572*t3091;
  t3150 = t3141 + t3143;
  t3226 = t241*t3041;
  t3228 = t265*t2915;
  t3231 = t3226 + t3228;
  t3241 = t1488*t10*t1120;
  t3243 = -6.5e-11*t136*t3064;
  t3247 = t1125*t3231;
  t3250 = t3241 + t3243 + t3247;
  t3253 = -1.000000000049*t1488*t10*t136;
  t3254 = t1141*t3064;
  t3265 = t1154*t3231;
  t3271 = t3253 + t3254 + t3265;
  t3274 = t1488*t10*t1168;
  t3278 = t1175*t3064;
  t3283 = -1.000000000016*t136*t3231;
  t3286 = t3274 + t3278 + t3283;
  t3352 = t1488*t10*t565;
  t3353 = t572*t3064;
  t3355 = t584*t3231;
  t3358 = t3352 + t3353 + t3355;
  t3370 = t664*t1488*t10;
  t3371 = t679*t3064;
  t3380 = t692*t3231;
  t3381 = t3370 + t3371 + t3380;
  t3391 = t1488*t10*t773;
  t3392 = t777*t3064;
  t3394 = t783*t3231;
  t3400 = t3391 + t3392 + t3394;
  p_output1[0]=1.;
  p_output1[1]=t10*t224 - 1.*t227*t272*t277 + t277*t297*t316 + t384*t404 + t449*t466 + t557*t594 + t660*t697 + t770*t797 - 0.148715*(t594*t804 + t697*t821 + t797*t835) - 0.038576*(t594*t843 + t697*t859 + t797*t864) - 0.80315*(t594*t882 + t697*t886 + t797*t898);
  p_output1[2]=-1.*t10*t227*t297 - 1.*t10*t272*t316 + t917 + t927 + t939 + t950 + t960 + t968 + t981 + t993;
  p_output1[3]=t10*t1001*t227 - 1.*t10*t1007*t316 + t917 + t927 + t939 + t950 + t960 + t968 + t981 + t993;
  p_output1[4]=t1108*t1114 + t1061*t277 + t1180*t557 + t1158*t660 + t1128*t770 - 0.148715*(t1180*t804 + t1158*t821 + t1128*t835) - 0.038576*(t1180*t843 + t1158*t859 + t1128*t864) - 0.80315*(t1180*t882 + t1158*t886 + t1128*t898) + t1080*t916;
  p_output1[5]=t1268*t1281 + t1329*t1349 + t1381*t1401 - 0.80315*(t1349*t1418 + t1401*t1423 - 1.000000000016*t1281*t511) - 0.038576*(t1281*t1444 + t1401*t1452 - 1.000000000049*t1349*t511) - 0.148715*(t1281*t1463 + t1349*t1474 - 6.5e-11*t1401*t511);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t10*t1488*t224 + t1499*t272 + t1515*t297 + t1531*t384 + t1552*t449 + t1569*t557 + t1592*t660 + t1617*t770 - 0.148715*(t1569*t804 + t1592*t821 + t1617*t835) - 0.038576*(t1569*t843 + t1592*t859 + t1617*t864) - 0.80315*(t1569*t882 + t1592*t886 + t1617*t898);
  p_output1[9]=t10*t1495*t227*t272 + t1495*t224*t277 - 1.*t10*t1495*t297*t316 + t1759*t384 + t1786*t449 + t1801*t557 + t1819*t660 + t1840*t770 - 0.148715*(t1801*t804 + t1819*t821 + t1840*t835) - 0.038576*(t1801*t843 + t1819*t859 + t1840*t864) - 0.80315*(t1801*t882 + t1819*t886 + t1840*t898);
  p_output1[10]=t1974*t272 + t1961*t297 + t2014*t384 + t2003*t449 + t2053*t557 + t2041*t660 + t2023*t770 - 0.148715*(t2053*t804 + t2041*t821 + t2023*t835) - 0.038576*(t2053*t843 + t2041*t859 + t2023*t864) - 0.80315*(t2053*t882 + t2041*t886 + t2023*t898);
  p_output1[11]=t1007*t1974 + t1001*t2137 + t2157*t384 + t2151*t449 + t2224*t557 + t2201*t660 + t2177*t770 - 0.148715*(t2224*t804 + t2201*t821 + t2177*t835) - 0.038576*(t2224*t843 + t2201*t859 + t2177*t864) - 0.80315*(t2224*t882 + t2201*t886 + t2177*t898);
  p_output1[12]=-1.*t10*t1061*t1495 + t1080*t2151 + t1108*t2352 + t2421*t557 + t2395*t660 + t2369*t770 - 0.148715*(t2421*t804 + t2395*t821 + t2369*t835) - 0.038576*(t2421*t843 + t2395*t859 + t2369*t864) - 0.80315*(t2421*t882 + t2395*t886 + t2369*t898);
  p_output1[13]=t1268*t2512 + t1329*t2542 + t1381*t2574 - 0.80315*(t1418*t2542 + t1423*t2574 - 1.000000000016*t2512*t511) - 0.038576*(t1444*t2512 + t1452*t2574 - 1.000000000049*t2542*t511) - 0.148715*(t1463*t2512 + t1474*t2542 - 6.5e-11*t2574*t511);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t10*t1495*t224 + t2137*t272 + t1974*t297 + t2151*t384 + t2352*t449 + t2512*t557 + t2542*t660 + t2574*t770 - 0.148715*(t2512*t804 + t2542*t821 + t2574*t835) - 0.038576*(t2512*t843 + t2542*t859 + t2574*t864) - 0.80315*(t2512*t882 + t2542*t886 + t2574*t898);
  p_output1[17]=-1.*t10*t1488*t227*t272 - 1.*t1488*t224*t277 + t10*t1488*t297*t316 + t2738*t384 + t2768*t449 + t2795*t557 + t2807*t660 + t2833*t770 - 0.148715*(t2795*t804 + t2807*t821 + t2833*t835) - 0.038576*(t2795*t843 + t2807*t859 + t2833*t864) - 0.80315*(t2795*t882 + t2807*t886 + t2833*t898);
  p_output1[18]=t272*t2915 + t1499*t297 + t2941*t384 + t2932*t449 + t2967*t557 + t2959*t660 + t2946*t770 - 0.148715*(t2967*t804 + t2959*t821 + t2946*t835) - 0.038576*(t2967*t843 + t2959*t859 + t2946*t864) - 0.80315*(t2967*t882 + t2959*t886 + t2946*t898);
  p_output1[19]=t1007*t2915 + t1001*t3041 + t3091*t384 + t3064*t449 + t3150*t557 + t3132*t660 + t3103*t770 - 0.148715*(t3150*t804 + t3132*t821 + t3103*t835) - 0.038576*(t3150*t843 + t3132*t859 + t3103*t864) - 0.80315*(t3150*t882 + t3132*t886 + t3103*t898);
  p_output1[20]=t10*t1061*t1488 + t1080*t3064 + t1108*t3231 + t3286*t557 + t3271*t660 + t3250*t770 - 0.148715*(t3286*t804 + t3271*t821 + t3250*t835) - 0.038576*(t3286*t843 + t3271*t859 + t3250*t864) - 0.80315*(t3286*t882 + t3271*t886 + t3250*t898);
  p_output1[21]=t1268*t3358 + t1329*t3381 + t1381*t3400 - 0.80315*(t1418*t3381 + t1423*t3400 - 1.000000000016*t3358*t511) - 0.038576*(t1444*t3358 + t1452*t3400 - 1.000000000049*t3381*t511) - 0.148715*(t1463*t3358 + t1474*t3381 - 6.5e-11*t3400*t511);
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

#include "J_h_RrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void J_h_RrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
