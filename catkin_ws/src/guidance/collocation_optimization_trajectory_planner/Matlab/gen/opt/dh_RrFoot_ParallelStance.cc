/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:17 GMT+01:00
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
  double t254;
  double t370;
  double t415;
  double t142;
  double t188;
  double t192;
  double t213;
  double t423;
  double t433;
  double t418;
  double t422;
  double t450;
  double t456;
  double t460;
  double t504;
  double t515;
  double t522;
  double t523;
  double t524;
  double t530;
  double t531;
  double t212;
  double t570;
  double t572;
  double t597;
  double t609;
  double t614;
  double t480;
  double t744;
  double t750;
  double t653;
  double t738;
  double t661;
  double t671;
  double t772;
  double t679;
  double t688;
  double t644;
  double t648;
  double t217;
  double t787;
  double t742;
  double t752;
  double t790;
  double t802;
  double t829;
  double t836;
  double t861;
  double t483;
  double t496;
  double t905;
  double t906;
  double t538;
  double t562;
  double t930;
  double t932;
  double t219;
  double t947;
  double t949;
  double t981;
  double t714;
  double t1020;
  double t1028;
  double t1039;
  double t1056;
  double t1057;
  double t1065;
  double t1070;
  double t1075;
  double t1079;
  double t1088;
  double t1096;
  double t1106;
  double t1107;
  double t1108;
  double t1121;
  double t1134;
  double t1139;
  double t1147;
  double t1156;
  double t1160;
  double t1163;
  double t1174;
  double t1179;
  double t1185;
  double t1196;
  double t1199;
  double t1209;
  double t1210;
  double t1211;
  double t1212;
  double t1215;
  double t1224;
  double t763;
  double t767;
  double t721;
  double t824;
  double t1008;
  double t1276;
  double t1288;
  double t1348;
  double t1349;
  double t1354;
  double t1371;
  double t973;
  double t976;
  double t999;
  double t1001;
  double t1010;
  double t1014;
  double t1089;
  double t1175;
  double t1225;
  double t1226;
  double t733;
  double t743;
  double t753;
  double t754;
  double t773;
  double t780;
  double t803;
  double t808;
  double t855;
  double t862;
  double t866;
  double t1255;
  double t1262;
  double t1263;
  double t1266;
  double t1296;
  double t1302;
  double t1309;
  double t1324;
  double t1330;
  double t1340;
  double t1376;
  double t1379;
  double t1381;
  double t1383;
  double t1384;
  double t1397;
  double t1400;
  double t1402;
  double t1405;
  double t1410;
  double t762;
  double t809;
  double t883;
  double t900;
  double t1538;
  double t1539;
  double t1551;
  double t1561;
  double t1569;
  double t1570;
  double t1574;
  double t1582;
  double t1413;
  double t920;
  double t940;
  double t952;
  double t954;
  double t1234;
  double t1241;
  double t1243;
  double t1251;
  double t1686;
  double t1677;
  double t1703;
  double t1711;
  double t1714;
  double t1498;
  double t1725;
  double t1727;
  double t1735;
  double t1742;
  double t1420;
  double t1446;
  double t1453;
  double t1456;
  double t1466;
  double t1471;
  double t1479;
  double t1485;
  double t1802;
  double t1806;
  double t1807;
  double t1815;
  double t476;
  double t536;
  double t617;
  double t620;
  double t652;
  double t673;
  double t695;
  double t696;
  double t1956;
  double t1976;
  double t1980;
  double t1981;
  double t1962;
  double t1964;
  double t1966;
  double t1985;
  double t1951;
  double t1928;
  double t1931;
  double t1941;
  double t1943;
  double t1944;
  double t1970;
  double t1991;
  double t1993;
  double t2048;
  double t2022;
  double t2024;
  double t2031;
  double t2018;
  double t2054;
  double t2056;
  double t2057;
  double t1846;
  double t1854;
  double t1855;
  double t1870;
  double t1882;
  double t1897;
  double t1768;
  double t1783;
  double t1792;
  double t1683;
  double t1693;
  double t1701;
  double t2125;
  double t2127;
  double t2128;
  double t2106;
  double t2108;
  double t2113;
  double t2129;
  double t2134;
  double t2137;
  double t2090;
  double t2099;
  double t2100;
  double t2174;
  double t2176;
  double t2185;
  double t2153;
  double t2101;
  double t2102;
  double t2105;
  double t2233;
  double t2245;
  double t2254;
  double t2190;
  double t2257;
  double t2263;
  double t2266;
  double t2217;
  double t2226;
  double t2227;
  double t2292;
  double t2294;
  double t2300;
  double t2489;
  double t2494;
  double t2501;
  double t2502;
  double t2508;
  double t2515;
  double t2516;
  double t2520;
  double t2400;
  double t2426;
  double t2276;
  double t2286;
  double t2287;
  double t2739;
  double t1950;
  double t1997;
  double t2008;
  double t2780;
  double t2319;
  double t2320;
  double t2322;
  double t2939;
  double t2941;
  double t2947;
  double t2948;
  double t2954;
  double t2956;
  double t2958;
  double t2963;
  double t2899;
  double t2908;
  double t3141;
  double t3153;
  t254 = Cos(var1[17]);
  t370 = -1.*t254;
  t415 = 1. + t370;
  t142 = Cos(var1[16]);
  t188 = -1.*t142;
  t192 = 1. + t188;
  t213 = Sin(var1[16]);
  t423 = Sin(var1[17]);
  t433 = 4.e-6*t423;
  t418 = 1.000000000016*t415;
  t422 = -7.e-6*t415;
  t450 = t422 + t433;
  t456 = -7.e-6*t450;
  t460 = -1. + t418 + t456;
  t504 = 2.8e-11*t415;
  t515 = 4.e-6*t415;
  t522 = 7.e-6*t423;
  t523 = t515 + t522;
  t524 = -7.e-6*t523;
  t530 = -1.*t423;
  t531 = t504 + t524 + t530;
  t212 = -7.e-6*t192;
  t570 = -6.5e-11*t415;
  t572 = 1. + t570;
  t597 = -7.e-6*t572;
  t609 = 7.e-6*t415;
  t614 = t597 + t609 + t433;
  t480 = 4.e-6*t192;
  t744 = -1. + t254;
  t750 = 4.e-6*t744;
  t653 = -2.8e-11*t192;
  t738 = -4.e-6*t423;
  t661 = -1.*t213;
  t671 = t653 + t661;
  t772 = 1.000000000049*t415;
  t679 = 4.e-6*t213;
  t688 = t212 + t679;
  t644 = -1.000000000016*t192;
  t648 = 1. + t644;
  t217 = -4.e-6*t213;
  t787 = -7.e-6*t423;
  t742 = t422 + t738;
  t752 = t750 + t522;
  t790 = -2.8e-11*t415;
  t802 = t790 + t423;
  t829 = -1.000000000016*t415;
  t836 = 1. + t829;
  t861 = t504 + t423;
  t483 = -7.e-6*t213;
  t496 = t480 + t483;
  t905 = 4.e-6*t523;
  t906 = -1. + t772 + t905;
  t538 = -6.5e-11*t192;
  t562 = 1. + t538;
  t930 = 4.e-6*t572;
  t932 = t930 + t750 + t522;
  t219 = t212 + t217;
  t947 = 4.e-6*t450;
  t949 = t504 + t947 + t423;
  t981 = 7.e-6*t192;
  t714 = 7.e-6*t213;
  t1020 = 2.826290000000002e-7*var1[17];
  t1028 = -0.148715*t572;
  t1039 = -2.18904205e-16*t415;
  t1056 = t515 + t787;
  t1057 = -0.038576*t1056;
  t1065 = -0.80315*t742;
  t1070 = t609 + t433;
  t1075 = -0.5031510000080001*t1070;
  t1079 = -0.038575000014*t752;
  t1088 = t1020 + t1028 + t1039 + t1057 + t1065 + t1075 + t1079;
  t1096 = 1.1305160000000008e-12*var1[17];
  t1106 = -1.000000000049*t415;
  t1107 = 1. + t1106;
  t1108 = -0.038576*t1107;
  t1121 = -0.03857500001589017*t415;
  t1134 = t504 + t530;
  t1139 = -0.5031510000080001*t1134;
  t1147 = t750 + t787;
  t1156 = -3.367757e-6*t1147;
  t1160 = -0.148715*t523;
  t1163 = -0.80315*t802;
  t1174 = t1096 + t1108 + t1121 + t1139 + t1156 + t1160 + t1163;
  t1179 = -1.9784030000000015e-12*var1[17];
  t1185 = -0.80315*t836;
  t1196 = -0.5031510000160505*t415;
  t1199 = t790 + t530;
  t1209 = -0.038576*t1199;
  t1210 = t609 + t738;
  t1211 = -3.367757e-6*t1210;
  t1212 = -0.148715*t450;
  t1215 = -0.038575000014*t861;
  t1224 = t1179 + t1185 + t1196 + t1209 + t1211 + t1212 + t1215;
  t763 = -1.000000000049*t192;
  t767 = 1. + t763;
  t721 = t480 + t714;
  t824 = t653 + t213;
  t1008 = 2.8e-11*t192;
  t1276 = -1. + t142;
  t1288 = 4.e-6*t1276;
  t1348 = t767*t906;
  t1349 = t721*t932;
  t1354 = t824*t949;
  t1371 = t1348 + t1349 + t1354;
  t973 = -2.7726089999999997e-12*var1[16];
  t976 = -0.2812110000084994*t192;
  t999 = t981 + t217;
  t1001 = -1.8134809999999998e-6*t999;
  t1010 = t1008 + t213;
  t1014 = -0.038749000006999997*t1010;
  t1089 = t688*t1088;
  t1175 = t671*t1174;
  t1225 = t648*t1224;
  t1226 = t973 + t976 + t1001 + t1014 + t1089 + t1175 + t1225;
  t733 = 6.5e-11*t415;
  t743 = 7.e-6*t742;
  t753 = 4.e-6*t752;
  t754 = -1. + t733 + t743 + t753;
  t773 = -1. + t772;
  t780 = 4.e-6*t773;
  t803 = 7.e-6*t802;
  t808 = t780 + t750 + t787 + t803;
  t855 = 7.e-6*t836;
  t862 = 4.e-6*t861;
  t866 = t855 + t609 + t738 + t862;
  t1255 = 3.9608699999999997e-7*var1[16];
  t1262 = -1.1787626499999999e-16*t192;
  t1263 = t981 + t679;
  t1266 = -0.281211000004*t1263;
  t1296 = t1288 + t714;
  t1302 = -0.038749000006999997*t1296;
  t1309 = t562*t1088;
  t1324 = t496*t1174;
  t1330 = t219*t1224;
  t1340 = t1255 + t1262 + t1266 + t1302 + t1309 + t1324 + t1330;
  t1376 = 1.5843479999999999e-12*var1[16];
  t1379 = -0.03874900000889869*t192;
  t1381 = t1008 + t661;
  t1383 = -0.281211000004*t1381;
  t1384 = t1288 + t483;
  t1397 = -1.8134809999999998e-6*t1384;
  t1400 = t721*t1088;
  t1402 = t767*t1174;
  t1405 = t824*t1224;
  t1410 = t1376 + t1379 + t1383 + t1397 + t1400 + t1402 + t1405;
  t762 = t721*t754;
  t809 = t767*t808;
  t883 = t824*t866;
  t900 = t762 + t809 + t883;
  t1538 = -1.*t1088*t932;
  t1539 = -1.*t906*t1174;
  t1551 = -1.*t949*t1224;
  t1561 = t1538 + t1539 + t1551;
  t1569 = t1088*t754;
  t1570 = t1174*t808;
  t1574 = t1224*t866;
  t1582 = t1569 + t1570 + t1574;
  t1413 = -1.*t1371*t1410;
  t920 = t671*t906;
  t940 = t688*t932;
  t952 = t648*t949;
  t954 = t920 + t940 + t952;
  t1234 = t496*t906;
  t1241 = t562*t932;
  t1243 = t219*t949;
  t1251 = t1234 + t1241 + t1243;
  t1686 = Cos(var1[15]);
  t1677 = Sin(var1[15]);
  t1703 = -1.*t1686;
  t1711 = 1. + t1703;
  t1714 = -0.15121*t1711;
  t1498 = t1410*t900;
  t1725 = 0.15121*t1677;
  t1727 = t1677*t1226;
  t1735 = t1686*t1340;
  t1742 = t1714 + t1725 + t1727 + t1735;
  t1420 = t688*t754;
  t1446 = t671*t808;
  t1453 = t648*t866;
  t1456 = t1420 + t1446 + t1453;
  t1466 = t562*t754;
  t1471 = t496*t808;
  t1479 = t219*t866;
  t1485 = t1466 + t1471 + t1479;
  t1802 = -0.15121*t1677;
  t1806 = t1686*t1226;
  t1807 = -1.*t1677*t1340;
  t1815 = t1714 + t1802 + t1806 + t1807;
  t476 = t219*t460;
  t536 = t496*t531;
  t617 = t562*t614;
  t620 = t476 + t536 + t617;
  t652 = t648*t460;
  t673 = t671*t531;
  t695 = t688*t614;
  t696 = t652 + t673 + t695;
  t1956 = Cos(var1[5]);
  t1976 = t1686*t620;
  t1980 = t1677*t696;
  t1981 = t1976 + t1980;
  t1962 = -1.*t1677*t620;
  t1964 = t1686*t696;
  t1966 = t1962 + t1964;
  t1985 = Sin(var1[5]);
  t1951 = Cos(var1[4]);
  t1928 = t824*t460;
  t1931 = t767*t531;
  t1941 = t721*t614;
  t1943 = t1928 + t1931 + t1941;
  t1944 = Sin(var1[4]);
  t1970 = t1956*t1966;
  t1991 = -1.*t1981*t1985;
  t1993 = t1970 + t1991;
  t2048 = Cos(var1[3]);
  t2022 = t1956*t1981;
  t2024 = t1966*t1985;
  t2031 = t2022 + t2024;
  t2018 = Sin(var1[3]);
  t2054 = t1951*t1943;
  t2056 = -1.*t1944*t1993;
  t2057 = t2054 + t2056;
  t1846 = t1677*t1456;
  t1854 = t1686*t1485;
  t1855 = t1846 + t1854;
  t1870 = t1686*t1456;
  t1882 = -1.*t1677*t1485;
  t1897 = t1870 + t1882;
  t1768 = t1686*t954;
  t1783 = -1.*t1677*t1251;
  t1792 = t1768 + t1783;
  t1683 = t1677*t954;
  t1693 = t1686*t1251;
  t1701 = t1683 + t1693;
  t2125 = t1956*t1701;
  t2127 = t1792*t1985;
  t2128 = t2125 + t2127;
  t2106 = t1956*t1815;
  t2108 = -1.*t1742*t1985;
  t2113 = t2106 + t2108;
  t2129 = t1956*t1742;
  t2134 = t1815*t1985;
  t2137 = t2129 + t2134;
  t2090 = t1956*t1855;
  t2099 = t1897*t1985;
  t2100 = t2090 + t2099;
  t2174 = t1956*t1897;
  t2176 = -1.*t1855*t1985;
  t2185 = t2174 + t2176;
  t2153 = -1.*t2128*t2137;
  t2101 = t1956*t1792;
  t2102 = -1.*t1701*t1985;
  t2105 = t2101 + t2102;
  t2233 = t1371*t1944;
  t2245 = t1951*t2105;
  t2254 = t2233 + t2245;
  t2190 = t2137*t2100;
  t2257 = t1410*t1944;
  t2263 = t1951*t2113;
  t2266 = t2257 + t2263;
  t2217 = t900*t1944;
  t2226 = t1951*t2185;
  t2227 = t2217 + t2226;
  t2292 = t1951*t1410;
  t2294 = -1.*t1944*t2113;
  t2300 = t2292 + t2294;
  t2489 = t1088*t614;
  t2494 = t531*t1174;
  t2501 = t460*t1224;
  t2502 = t2489 + t2494 + t2501;
  t2508 = -1.*t1088*t754;
  t2515 = -1.*t1174*t808;
  t2516 = -1.*t1224*t866;
  t2520 = t2508 + t2515 + t2516;
  t2400 = t1943*t1410;
  t2426 = -1.*t1410*t900;
  t2276 = t1951*t1371;
  t2286 = -1.*t1944*t2105;
  t2287 = t2276 + t2286;
  t2739 = t2031*t2137;
  t1950 = t1943*t1944;
  t1997 = t1951*t1993;
  t2008 = t1950 + t1997;
  t2780 = -1.*t2137*t2100;
  t2319 = t1951*t900;
  t2320 = -1.*t1944*t2185;
  t2322 = t2319 + t2320;
  t2939 = -1.*t1088*t614;
  t2941 = -1.*t531*t1174;
  t2947 = -1.*t460*t1224;
  t2948 = t2939 + t2941 + t2947;
  t2954 = t1088*t932;
  t2956 = t906*t1174;
  t2958 = t949*t1224;
  t2963 = t2954 + t2956 + t2958;
  t2899 = -1.*t1943*t1410;
  t2908 = t1371*t1410;
  t3141 = -1.*t2031*t2137;
  t3153 = t2128*t2137;
  p_output1[0]=t2008*var2[0] + (t2031*t2048 - 1.*t2018*t2057)*var2[1] + (t2018*t2031 + t2048*t2057)*var2[2] + (t2227*(t2153 - 1.*t2254*t2266 - 1.*t2287*t2300) + t2254*(t2190 + t2227*t2266 + t2300*t2322))*var2[3] + (t2100*(t1413 - 1.*t2105*t2113 + t2153) + t2128*(t1498 + t2113*t2185 + t2190))*var2[4] + (t1371*(t1498 + t1742*t1855 + t1815*t1897) + (t1413 - 1.*t1701*t1742 - 1.*t1792*t1815)*t900)*var2[5] + (t1371*(t1226*t1456 + t1340*t1485 + t1498) + 0.15121*t620 - 0.15121*t696 + t900*(-1.*t1251*t1340 + t1413 - 1.*t1226*t954))*var2[15] + (-0.038749*t460 + 0.281211*t531 + 1.e-6*(t422 + 7.e-6*t572 + t738) - 1.*t1561*t754 + 4.e-6*(-1.*t1561*t808 - 1.*t1582*t906) - 1.*t1582*t932 + 7.e-6*(t1561*t866 + t1582*t949))*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t2254*var2[0] + (t2048*t2128 - 1.*t2018*t2287)*var2[1] + (t2018*t2128 + t2048*t2287)*var2[2] + (t2227*(t2008*t2266 + t2057*t2300 + t2739) + t2008*(-1.*t2227*t2266 - 1.*t2300*t2322 + t2780))*var2[3] + (t2100*(t1993*t2113 + t2400 + t2739) + t2031*(-1.*t2113*t2185 + t2426 + t2780))*var2[4] + (t1943*(-1.*t1742*t1855 - 1.*t1815*t1897 + t2426) + (t1815*t1966 + t1742*t1981 + t2400)*t900)*var2[5] + (0.15121*t1251 + t1943*(-1.*t1226*t1456 - 1.*t1340*t1485 + t2426) + (t2400 + t1340*t620 + t1226*t696)*t900 - 0.15121*t954)*var2[15] + (-1.*t2520*t614 - 1.*t2502*t754 + 1.e-6*(t515 + 4.e-6*(-1. + t733) + t787) + 4.e-6*(-1.*t2520*t531 - 1.*t2502*t808) + 7.e-6*(t2520*t460 + t2502*t866) + 0.281211*t906 - 0.038749*t949)*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t2227*var2[0] + (t2048*t2100 - 1.*t2018*t2322)*var2[1] + (t2018*t2100 + t2048*t2322)*var2[2] + (t2254*(-1.*t2008*t2266 - 1.*t2057*t2300 + t3141) + t2008*(t2254*t2266 + t2287*t2300 + t3153))*var2[3] + (t2128*(-1.*t1993*t2113 + t2899 + t3141) + t2031*(t2105*t2113 + t2908 + t3153))*var2[4] + (t1371*(-1.*t1815*t1966 - 1.*t1742*t1981 + t2899) + t1943*(t1701*t1742 + t1792*t1815 + t2908))*var2[5] + (-0.15121*t1456 + 0.15121*t1485 + t1371*(t2899 - 1.*t1340*t620 - 1.*t1226*t696) + t1943*(t1251*t1340 + t2908 + t1226*t954))*var2[15] + (-1.*t2963*t614 + 1.e-6*(1. + 4.e-6*t1056 + t570 - 7.e-6*t742) + 0.281211*t808 - 0.038749*t866 + 4.e-6*(-1.*t2963*t531 - 1.*t2948*t906) - 1.*t2948*t932 + 7.e-6*(t2963*t460 + t2948*t949))*var2[16] - 2.826290000000002e-7*var2[17];
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
