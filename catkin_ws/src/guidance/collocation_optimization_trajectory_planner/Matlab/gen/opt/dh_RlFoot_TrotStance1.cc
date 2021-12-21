/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:12 GMT+01:00
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
  double t221;
  double t230;
  double t314;
  double t86;
  double t135;
  double t168;
  double t412;
  double t427;
  double t195;
  double t323;
  double t395;
  double t450;
  double t455;
  double t463;
  double t171;
  double t508;
  double t515;
  double t516;
  double t518;
  double t522;
  double t604;
  double t610;
  double t620;
  double t628;
  double t647;
  double t648;
  double t651;
  double t572;
  double t573;
  double t802;
  double t757;
  double t768;
  double t822;
  double t983;
  double t685;
  double t747;
  double t1082;
  double t937;
  double t205;
  double t1037;
  double t1045;
  double t1051;
  double t1052;
  double t907;
  double t858;
  double t1083;
  double t1129;
  double t1143;
  double t1150;
  double t886;
  double t892;
  double t1049;
  double t1057;
  double t1059;
  double t856;
  double t857;
  double t1063;
  double t1077;
  double t1081;
  double t1101;
  double t1108;
  double t971;
  double t1149;
  double t1160;
  double t1186;
  double t580;
  double t1212;
  double t1249;
  double t1251;
  double t1253;
  double t1276;
  double t1278;
  double t1281;
  double t1287;
  double t1289;
  double t1292;
  double t1296;
  double t1302;
  double t1305;
  double t1306;
  double t1314;
  double t1325;
  double t1326;
  double t1327;
  double t1334;
  double t1354;
  double t1356;
  double t1373;
  double t1390;
  double t1402;
  double t1406;
  double t1412;
  double t1417;
  double t1422;
  double t1424;
  double t1427;
  double t1429;
  double t1437;
  double t473;
  double t493;
  double t588;
  double t215;
  double t1493;
  double t1235;
  double t1476;
  double t1479;
  double t1485;
  double t1486;
  double t861;
  double t871;
  double t906;
  double t921;
  double t985;
  double t1015;
  double t1205;
  double t1209;
  double t1218;
  double t1225;
  double t1236;
  double t1239;
  double t1300;
  double t1383;
  double t1441;
  double t1454;
  double t884;
  double t936;
  double t1030;
  double t1033;
  double t1489;
  double t1490;
  double t1501;
  double t1507;
  double t1517;
  double t1534;
  double t1542;
  double t1553;
  double t1556;
  double t1573;
  double t1605;
  double t1609;
  double t1614;
  double t1621;
  double t1631;
  double t1647;
  double t1648;
  double t1651;
  double t1662;
  double t1664;
  double t1756;
  double t1771;
  double t1778;
  double t1783;
  double t1793;
  double t1795;
  double t1798;
  double t1804;
  double t1577;
  double t1062;
  double t1115;
  double t1196;
  double t1204;
  double t1582;
  double t1584;
  double t1597;
  double t1600;
  double t1909;
  double t1891;
  double t1916;
  double t1917;
  double t1929;
  double t1696;
  double t1685;
  double t1687;
  double t1690;
  double t1693;
  double t1698;
  double t1699;
  double t1705;
  double t1708;
  double t1921;
  double t1930;
  double t1932;
  double t1943;
  double t1957;
  double t1973;
  double t1977;
  double t1991;
  double t466;
  double t569;
  double t663;
  double t673;
  double t753;
  double t782;
  double t828;
  double t834;
  double t2131;
  double t2157;
  double t2172;
  double t2178;
  double t2136;
  double t2143;
  double t2154;
  double t2183;
  double t2126;
  double t2100;
  double t2103;
  double t2114;
  double t2117;
  double t2118;
  double t2156;
  double t2192;
  double t2193;
  double t2242;
  double t2211;
  double t2217;
  double t2218;
  double t2205;
  double t2245;
  double t2260;
  double t2262;
  double t2025;
  double t2028;
  double t2029;
  double t2036;
  double t2040;
  double t2059;
  double t1949;
  double t1950;
  double t1952;
  double t1900;
  double t1914;
  double t1915;
  double t2365;
  double t2369;
  double t2375;
  double t2343;
  double t2345;
  double t2348;
  double t2305;
  double t2309;
  double t2313;
  double t2380;
  double t2382;
  double t2388;
  double t2408;
  double t2409;
  double t2411;
  double t2399;
  double t2328;
  double t2335;
  double t2341;
  double t2463;
  double t2465;
  double t2466;
  double t2414;
  double t2455;
  double t2457;
  double t2458;
  double t2475;
  double t2476;
  double t2479;
  double t2506;
  double t2507;
  double t2509;
  double t2699;
  double t2702;
  double t2705;
  double t2706;
  double t2709;
  double t2718;
  double t2722;
  double t2725;
  double t2595;
  double t2623;
  double t2542;
  double t2543;
  double t2546;
  double t2123;
  double t2195;
  double t2200;
  double t2873;
  double t2491;
  double t2496;
  double t2502;
  double t2895;
  double t2663;
  double t3013;
  double t3017;
  double t3018;
  double t3019;
  double t3025;
  double t3035;
  double t3036;
  double t3037;
  double t2952;
  double t2966;
  double t3228;
  double t3246;
  t221 = Cos(var1[14]);
  t230 = -1.*t221;
  t314 = 1. + t230;
  t86 = Cos(var1[13]);
  t135 = -1.*t86;
  t168 = 1. + t135;
  t412 = Sin(var1[14]);
  t427 = 4.e-6*t412;
  t195 = Sin(var1[13]);
  t323 = 1.000000000016*t314;
  t395 = -7.e-6*t314;
  t450 = t395 + t427;
  t455 = -7.e-6*t450;
  t463 = -1. + t323 + t455;
  t171 = -7.e-6*t168;
  t508 = -6.5e-11*t314;
  t515 = 1. + t508;
  t516 = -7.e-6*t515;
  t518 = 7.e-6*t314;
  t522 = t516 + t518 + t427;
  t604 = -2.8e-11*t314;
  t610 = -1. + t221;
  t620 = 4.e-6*t610;
  t628 = -7.e-6*t412;
  t647 = t620 + t628;
  t648 = -7.e-6*t647;
  t651 = t604 + t648 + t412;
  t572 = -1. + t86;
  t573 = 4.e-6*t572;
  t802 = 2.8e-11*t168;
  t757 = 4.e-6*t195;
  t768 = t171 + t757;
  t822 = t802 + t195;
  t983 = 2.8e-11*t314;
  t685 = -1.000000000016*t168;
  t747 = 1. + t685;
  t1082 = -1.*t412;
  t937 = -1.*t195;
  t205 = -4.e-6*t195;
  t1037 = 4.e-6*t314;
  t1045 = t1037 + t628;
  t1051 = -4.e-6*t412;
  t1052 = t395 + t1051;
  t907 = 7.e-6*t412;
  t858 = -1.000000000049*t314;
  t1083 = t983 + t1082;
  t1129 = -1.000000000016*t314;
  t1143 = 1. + t1129;
  t1150 = t604 + t1082;
  t886 = -7.e-6*t195;
  t892 = t573 + t886;
  t1049 = 4.e-6*t1045;
  t1057 = -7.e-6*t1052;
  t1059 = 1. + t508 + t1049 + t1057;
  t856 = -1.000000000049*t168;
  t857 = 1. + t856;
  t1063 = 1.000000000049*t314;
  t1077 = -1. + t1063;
  t1081 = 4.e-6*t1077;
  t1101 = -7.e-6*t1083;
  t1108 = t1081 + t620 + t1101 + t628;
  t971 = t802 + t937;
  t1149 = -7.e-6*t1143;
  t1160 = 4.e-6*t1150;
  t1186 = t1149 + t395 + t1160 + t427;
  t580 = 7.e-6*t195;
  t1212 = -2.8e-11*t168;
  t1249 = -2.598649999999999e-7*var1[14];
  t1251 = 0.148705*t515;
  t1253 = -2.3905277499999995e-16*t314;
  t1276 = -0.038922999986*t1045;
  t1278 = -0.80315*t1052;
  t1281 = t518 + t427;
  t1287 = -0.503149000008*t1281;
  t1289 = t620 + t907;
  t1292 = -0.038924*t1289;
  t1296 = t1249 + t1251 + t1253 + t1276 + t1278 + t1287 + t1292;
  t1302 = 1.0394599999999997e-12*var1[14];
  t1305 = 1. + t858;
  t1306 = -0.038924*t1305;
  t1314 = -0.03892299998790722*t314;
  t1325 = -0.80315*t1083;
  t1326 = 0.148705*t647;
  t1327 = t1037 + t907;
  t1334 = -3.6777349999999994e-6*t1327;
  t1354 = t604 + t412;
  t1356 = -0.503149000008*t1354;
  t1373 = t1302 + t1306 + t1314 + t1325 + t1326 + t1334 + t1356;
  t1390 = 1.8190549999999993e-12*var1[14];
  t1402 = -0.80315*t1143;
  t1406 = -0.5031490000160505*t314;
  t1412 = -0.038922999986*t1150;
  t1417 = t518 + t1051;
  t1422 = -3.6777349999999994e-6*t1417;
  t1424 = 0.148705*t450;
  t1427 = t983 + t412;
  t1429 = -0.038924*t1427;
  t1437 = t1390 + t1402 + t1406 + t1412 + t1422 + t1424 + t1429;
  t473 = -6.5e-11*t168;
  t493 = 1. + t473;
  t588 = t573 + t580;
  t215 = t171 + t205;
  t1493 = 4.e-6*t168;
  t1235 = 7.e-6*t168;
  t1476 = t892*t1059;
  t1479 = t857*t1108;
  t1485 = t971*t1186;
  t1486 = t1476 + t1479 + t1485;
  t861 = 4.e-6*t647;
  t871 = 1. + t858 + t861;
  t906 = 4.e-6*t515;
  t921 = t906 + t620 + t907;
  t985 = 4.e-6*t450;
  t1015 = t983 + t985 + t412;
  t1205 = 1.0248489999999998e-12*var1[13];
  t1209 = -0.28120900000849935*t168;
  t1218 = t1212 + t937;
  t1225 = -0.038748999993*t1218;
  t1236 = t1235 + t205;
  t1239 = -2.123459e-6*t1236;
  t1300 = t768*t1296;
  t1383 = t822*t1373;
  t1441 = t747*t1437;
  t1454 = t1205 + t1209 + t1225 + t1239 + t1300 + t1383 + t1441;
  t884 = t857*t871;
  t936 = t892*t921;
  t1030 = t971*t1015;
  t1033 = t884 + t936 + t1030;
  t1489 = 5.856279999999999e-13*var1[13];
  t1490 = -0.0387489999948987*t168;
  t1501 = t1493 + t580;
  t1507 = -2.123459e-6*t1501;
  t1517 = t1212 + t195;
  t1534 = -0.281209000004*t1517;
  t1542 = t892*t1296;
  t1553 = t857*t1373;
  t1556 = t971*t1437;
  t1573 = t1489 + t1490 + t1507 + t1534 + t1542 + t1553 + t1556;
  t1605 = -1.4640699999999997e-7*var1[13];
  t1609 = -1.38024835e-16*t168;
  t1614 = t1493 + t886;
  t1621 = -0.038748999993*t1614;
  t1631 = t1235 + t757;
  t1647 = -0.281209000004*t1631;
  t1648 = t493*t1296;
  t1651 = t588*t1373;
  t1662 = t215*t1437;
  t1664 = t1605 + t1609 + t1621 + t1647 + t1648 + t1651 + t1662;
  t1756 = t1059*t1296;
  t1771 = t1108*t1373;
  t1778 = t1186*t1437;
  t1783 = t1756 + t1771 + t1778;
  t1793 = -1.*t1296*t921;
  t1795 = -1.*t871*t1373;
  t1798 = -1.*t1015*t1437;
  t1804 = t1793 + t1795 + t1798;
  t1577 = t1486*t1573;
  t1062 = t768*t1059;
  t1115 = t822*t1108;
  t1196 = t747*t1186;
  t1204 = t1062 + t1115 + t1196;
  t1582 = t493*t1059;
  t1584 = t588*t1108;
  t1597 = t215*t1186;
  t1600 = t1582 + t1584 + t1597;
  t1909 = Cos(var1[12]);
  t1891 = Sin(var1[12]);
  t1916 = -1.*t1909;
  t1917 = 1. + t1916;
  t1929 = 0.15121*t1891;
  t1696 = -1.*t1033*t1573;
  t1685 = t822*t871;
  t1687 = t768*t921;
  t1690 = t747*t1015;
  t1693 = t1685 + t1687 + t1690;
  t1698 = t588*t871;
  t1699 = t493*t921;
  t1705 = t215*t1015;
  t1708 = t1698 + t1699 + t1705;
  t1921 = 0.15121*t1917;
  t1930 = t1891*t1454;
  t1932 = t1909*t1664;
  t1943 = t1921 + t1929 + t1930 + t1932;
  t1957 = -0.15121*t1917;
  t1973 = t1909*t1454;
  t1977 = -1.*t1891*t1664;
  t1991 = t1957 + t1929 + t1973 + t1977;
  t466 = t215*t463;
  t569 = t493*t522;
  t663 = t588*t651;
  t673 = t466 + t569 + t663;
  t753 = t747*t463;
  t782 = t768*t522;
  t828 = t822*t651;
  t834 = t753 + t782 + t828;
  t2131 = Cos(var1[5]);
  t2157 = t1909*t673;
  t2172 = t1891*t834;
  t2178 = t2157 + t2172;
  t2136 = -1.*t1891*t673;
  t2143 = t1909*t834;
  t2154 = t2136 + t2143;
  t2183 = Sin(var1[5]);
  t2126 = Cos(var1[4]);
  t2100 = t971*t463;
  t2103 = t892*t522;
  t2114 = t857*t651;
  t2117 = t2100 + t2103 + t2114;
  t2118 = Sin(var1[4]);
  t2156 = t2131*t2154;
  t2192 = -1.*t2178*t2183;
  t2193 = t2156 + t2192;
  t2242 = Cos(var1[3]);
  t2211 = t2131*t2178;
  t2217 = t2154*t2183;
  t2218 = t2211 + t2217;
  t2205 = Sin(var1[3]);
  t2245 = t2126*t2117;
  t2260 = -1.*t2118*t2193;
  t2262 = t2245 + t2260;
  t2025 = t1891*t1693;
  t2028 = t1909*t1708;
  t2029 = t2025 + t2028;
  t2036 = t1909*t1693;
  t2040 = -1.*t1891*t1708;
  t2059 = t2036 + t2040;
  t1949 = t1909*t1204;
  t1950 = -1.*t1891*t1600;
  t1952 = t1949 + t1950;
  t1900 = t1891*t1204;
  t1914 = t1909*t1600;
  t1915 = t1900 + t1914;
  t2365 = t2131*t1915;
  t2369 = t1952*t2183;
  t2375 = t2365 + t2369;
  t2343 = t2131*t1991;
  t2345 = -1.*t1943*t2183;
  t2348 = t2343 + t2345;
  t2305 = t2131*t2029;
  t2309 = t2059*t2183;
  t2313 = t2305 + t2309;
  t2380 = t2131*t1943;
  t2382 = t1991*t2183;
  t2388 = t2380 + t2382;
  t2408 = t2131*t2059;
  t2409 = -1.*t2029*t2183;
  t2411 = t2408 + t2409;
  t2399 = t2375*t2388;
  t2328 = t2131*t1952;
  t2335 = -1.*t1915*t2183;
  t2341 = t2328 + t2335;
  t2463 = t1486*t2118;
  t2465 = t2126*t2341;
  t2466 = t2463 + t2465;
  t2414 = -1.*t2313*t2388;
  t2455 = t1033*t2118;
  t2457 = t2126*t2411;
  t2458 = t2455 + t2457;
  t2475 = t1573*t2118;
  t2476 = t2126*t2348;
  t2479 = t2475 + t2476;
  t2506 = t2126*t1573;
  t2507 = -1.*t2118*t2348;
  t2509 = t2506 + t2507;
  t2699 = t1296*t522;
  t2702 = t651*t1373;
  t2705 = t463*t1437;
  t2706 = t2699 + t2702 + t2705;
  t2709 = -1.*t1059*t1296;
  t2718 = -1.*t1108*t1373;
  t2722 = -1.*t1186*t1437;
  t2725 = t2709 + t2718 + t2722;
  t2595 = -1.*t1486*t1573;
  t2623 = t2117*t1573;
  t2542 = t2126*t1033;
  t2543 = -1.*t2118*t2411;
  t2546 = t2542 + t2543;
  t2123 = t2117*t2118;
  t2195 = t2126*t2193;
  t2200 = t2123 + t2195;
  t2873 = -1.*t2375*t2388;
  t2491 = t2126*t1486;
  t2496 = -1.*t2118*t2341;
  t2502 = t2491 + t2496;
  t2895 = t2218*t2388;
  t2663 = 6.5e-11*t314;
  t3013 = -1.*t1296*t522;
  t3017 = -1.*t651*t1373;
  t3018 = -1.*t463*t1437;
  t3019 = t3013 + t3017 + t3018;
  t3025 = t1296*t921;
  t3035 = t871*t1373;
  t3036 = t1015*t1437;
  t3037 = t3025 + t3035 + t3036;
  t2952 = -1.*t2117*t1573;
  t2966 = t1033*t1573;
  t3228 = -1.*t2218*t2388;
  t3246 = t2313*t2388;
  p_output1[0]=t2200*var2[0] + (t2218*t2242 - 1.*t2205*t2262)*var2[1] + (t2205*t2218 + t2242*t2262)*var2[2] + (t2458*(t2399 + t2466*t2479 + t2502*t2509) + t2466*(t2414 - 1.*t2458*t2479 - 1.*t2509*t2546))*var2[3] + (t2313*(t1577 + t2341*t2348 + t2399) + t2375*(t1696 - 1.*t2348*t2411 + t2414))*var2[4] + (t1033*(t1577 + t1915*t1943 + t1952*t1991) + t1486*(t1696 - 1.*t1943*t2029 - 1.*t1991*t2059))*var2[5] + (t1033*(t1204*t1454 + t1577 + t1600*t1664) + t1486*(-1.*t1454*t1693 + t1696 - 1.*t1664*t1708) + 0.15121*t673 + 0.15121*t834)*var2[12] + (t1059*t1804 - 7.e-6*(t1015*t1783 + t1186*t1804) + 0.038749*t463 + 1.e-6*(t1051 + t395 + 7.e-6*t515) - 0.281209*t651 + 4.e-6*(-1.*t1108*t1804 - 1.*t1783*t871) + t1783*t921)*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t2458*var2[0] + (t2242*t2313 - 1.*t2205*t2546)*var2[1] + (t2205*t2313 + t2242*t2546)*var2[2] + (t2200*(-1.*t2466*t2479 - 1.*t2502*t2509 + t2873) + t2466*(t2200*t2479 + t2262*t2509 + t2895))*var2[3] + (t2218*(-1.*t2341*t2348 + t2595 + t2873) + t2375*(t2193*t2348 + t2623 + t2895))*var2[4] + (t2117*(-1.*t1915*t1943 - 1.*t1952*t1991 + t2595) + t1486*(t1991*t2154 + t1943*t2178 + t2623))*var2[5] + (0.15121*t1693 + 0.15121*t1708 + t2117*(-1.*t1204*t1454 - 1.*t1600*t1664 + t2595) + t1486*(t2623 + t1664*t673 + t1454*t834))*var2[12] + (0.038749*t1015 + t1059*t2706 - 7.e-6*(t1186*t2706 + t2725*t463) + t2725*t522 + 1.e-6*(t1037 + 4.e-6*(-1. + t2663) + t628) + 4.e-6*(-1.*t1108*t2706 - 1.*t2725*t651) - 0.281209*t871)*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t2466*var2[0] + (t2242*t2375 - 1.*t2205*t2502)*var2[1] + (t2205*t2375 + t2242*t2502)*var2[2] + (t2458*(-1.*t2200*t2479 - 1.*t2262*t2509 + t3228) + t2200*(t2458*t2479 + t2509*t2546 + t3246))*var2[3] + (t2313*(-1.*t2193*t2348 + t2952 + t3228) + t2218*(t2348*t2411 + t2966 + t3246))*var2[4] + (t1033*(-1.*t1991*t2154 - 1.*t1943*t2178 + t2952) + t2117*(t1943*t2029 + t1991*t2059 + t2966))*var2[5] + (0.15121*t1204 + 0.15121*t1600 + t2117*(t1454*t1693 + t1664*t1708 + t2966) + t1033*(t2952 - 1.*t1664*t673 - 1.*t1454*t834))*var2[12] + (-0.281209*t1108 + 0.038749*t1186 + 1.e-6*(-1. + 7.e-6*t1052 + 4.e-6*t1289 + t2663) - 7.e-6*(t1015*t3019 + t3037*t463) + t3037*t522 + 4.e-6*(-1.*t3037*t651 - 1.*t3019*t871) + t3019*t921)*var2[13] - 2.5986500000000035e-7*var2[14];
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

#include "dh_RlFoot_TrotStance1.hh"

namespace TrotStance1
{

void dh_RlFoot_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
