/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:27 GMT+01:00
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
  double t267;
  double t286;
  double t303;
  double t118;
  double t133;
  double t145;
  double t336;
  double t350;
  double t155;
  double t308;
  double t331;
  double t351;
  double t392;
  double t398;
  double t148;
  double t439;
  double t444;
  double t447;
  double t459;
  double t466;
  double t567;
  double t595;
  double t597;
  double t616;
  double t621;
  double t623;
  double t636;
  double t486;
  double t487;
  double t770;
  double t716;
  double t751;
  double t773;
  double t887;
  double t693;
  double t695;
  double t992;
  double t882;
  double t165;
  double t919;
  double t923;
  double t946;
  double t948;
  double t839;
  double t799;
  double t993;
  double t1008;
  double t1023;
  double t1039;
  double t819;
  double t822;
  double t937;
  double t951;
  double t960;
  double t790;
  double t792;
  double t967;
  double t982;
  double t985;
  double t995;
  double t1001;
  double t886;
  double t1027;
  double t1047;
  double t1048;
  double t521;
  double t1089;
  double t1152;
  double t1164;
  double t1170;
  double t1178;
  double t1184;
  double t1189;
  double t1190;
  double t1192;
  double t1195;
  double t1196;
  double t1209;
  double t1215;
  double t1217;
  double t1223;
  double t1226;
  double t1228;
  double t1230;
  double t1231;
  double t1236;
  double t1241;
  double t1245;
  double t1253;
  double t1258;
  double t1263;
  double t1264;
  double t1268;
  double t1273;
  double t1288;
  double t1293;
  double t1298;
  double t1302;
  double t423;
  double t430;
  double t566;
  double t244;
  double t1331;
  double t1112;
  double t1324;
  double t1325;
  double t1327;
  double t1328;
  double t802;
  double t817;
  double t830;
  double t845;
  double t899;
  double t912;
  double t1078;
  double t1084;
  double t1105;
  double t1106;
  double t1121;
  double t1131;
  double t1208;
  double t1251;
  double t1312;
  double t1319;
  double t818;
  double t873;
  double t915;
  double t916;
  double t1329;
  double t1330;
  double t1337;
  double t1339;
  double t1341;
  double t1344;
  double t1348;
  double t1349;
  double t1353;
  double t1361;
  double t1379;
  double t1383;
  double t1385;
  double t1386;
  double t1388;
  double t1396;
  double t1405;
  double t1413;
  double t1425;
  double t1427;
  double t1579;
  double t1591;
  double t1592;
  double t1606;
  double t1626;
  double t1627;
  double t1629;
  double t1638;
  double t1362;
  double t964;
  double t1007;
  double t1053;
  double t1073;
  double t1363;
  double t1366;
  double t1373;
  double t1376;
  double t1751;
  double t1737;
  double t1770;
  double t1774;
  double t1797;
  double t1458;
  double t1443;
  double t1449;
  double t1451;
  double t1454;
  double t1460;
  double t1462;
  double t1474;
  double t1480;
  double t1776;
  double t1807;
  double t1808;
  double t1811;
  double t1821;
  double t1822;
  double t1824;
  double t1827;
  double t415;
  double t479;
  double t647;
  double t651;
  double t715;
  double t760;
  double t776;
  double t777;
  double t1997;
  double t2019;
  double t2020;
  double t2021;
  double t2002;
  double t2013;
  double t2014;
  double t2023;
  double t1992;
  double t1964;
  double t1966;
  double t1973;
  double t1989;
  double t1990;
  double t2017;
  double t2025;
  double t2029;
  double t2062;
  double t2056;
  double t2059;
  double t2060;
  double t2053;
  double t2065;
  double t2071;
  double t2079;
  double t1857;
  double t1858;
  double t1859;
  double t1864;
  double t1868;
  double t1879;
  double t1813;
  double t1816;
  double t1820;
  double t1741;
  double t1754;
  double t1759;
  double t2164;
  double t2165;
  double t2167;
  double t2145;
  double t2149;
  double t2160;
  double t2110;
  double t2118;
  double t2128;
  double t2168;
  double t2175;
  double t2176;
  double t2191;
  double t2192;
  double t2193;
  double t2178;
  double t2130;
  double t2135;
  double t2144;
  double t2306;
  double t2310;
  double t2311;
  double t2229;
  double t2267;
  double t2281;
  double t2292;
  double t2313;
  double t2316;
  double t2319;
  double t2336;
  double t2338;
  double t2339;
  double t2530;
  double t2549;
  double t2551;
  double t2572;
  double t2584;
  double t2585;
  double t2591;
  double t2597;
  double t2436;
  double t2454;
  double t2374;
  double t2382;
  double t2384;
  double t1991;
  double t2034;
  double t2035;
  double t2717;
  double t2322;
  double t2327;
  double t2333;
  double t2734;
  double t2500;
  double t2975;
  double t2976;
  double t2977;
  double t2988;
  double t2993;
  double t2996;
  double t2998;
  double t2999;
  double t2805;
  double t2848;
  double t3304;
  double t3333;
  t267 = Cos(var1[14]);
  t286 = -1.*t267;
  t303 = 1. + t286;
  t118 = Cos(var1[13]);
  t133 = -1.*t118;
  t145 = 1. + t133;
  t336 = Sin(var1[14]);
  t350 = 4.e-6*t336;
  t155 = Sin(var1[13]);
  t308 = 1.000000000016*t303;
  t331 = -7.e-6*t303;
  t351 = t331 + t350;
  t392 = -7.e-6*t351;
  t398 = -1. + t308 + t392;
  t148 = -7.e-6*t145;
  t439 = -6.5e-11*t303;
  t444 = 1. + t439;
  t447 = -7.e-6*t444;
  t459 = 7.e-6*t303;
  t466 = t447 + t459 + t350;
  t567 = -2.8e-11*t303;
  t595 = -1. + t267;
  t597 = 4.e-6*t595;
  t616 = -7.e-6*t336;
  t621 = t597 + t616;
  t623 = -7.e-6*t621;
  t636 = t567 + t623 + t336;
  t486 = -1. + t118;
  t487 = 4.e-6*t486;
  t770 = 2.8e-11*t145;
  t716 = 4.e-6*t155;
  t751 = t148 + t716;
  t773 = t770 + t155;
  t887 = 2.8e-11*t303;
  t693 = -1.000000000016*t145;
  t695 = 1. + t693;
  t992 = -1.*t336;
  t882 = -1.*t155;
  t165 = -4.e-6*t155;
  t919 = 4.e-6*t303;
  t923 = t919 + t616;
  t946 = -4.e-6*t336;
  t948 = t331 + t946;
  t839 = 7.e-6*t336;
  t799 = -1.000000000049*t303;
  t993 = t887 + t992;
  t1008 = -1.000000000016*t303;
  t1023 = 1. + t1008;
  t1039 = t567 + t992;
  t819 = -7.e-6*t155;
  t822 = t487 + t819;
  t937 = 4.e-6*t923;
  t951 = -7.e-6*t948;
  t960 = 1. + t439 + t937 + t951;
  t790 = -1.000000000049*t145;
  t792 = 1. + t790;
  t967 = 1.000000000049*t303;
  t982 = -1. + t967;
  t985 = 4.e-6*t982;
  t995 = -7.e-6*t993;
  t1001 = t985 + t597 + t995 + t616;
  t886 = t770 + t882;
  t1027 = -7.e-6*t1023;
  t1047 = 4.e-6*t1039;
  t1048 = t1027 + t331 + t1047 + t350;
  t521 = 7.e-6*t155;
  t1089 = -2.8e-11*t145;
  t1152 = -2.598649999999999e-7*var1[14];
  t1164 = 0.148705*t444;
  t1170 = -2.3905277499999995e-16*t303;
  t1178 = -0.038922999986*t923;
  t1184 = -0.80315*t948;
  t1189 = t459 + t350;
  t1190 = -0.503149000008*t1189;
  t1192 = t597 + t839;
  t1195 = -0.038924*t1192;
  t1196 = t1152 + t1164 + t1170 + t1178 + t1184 + t1190 + t1195;
  t1209 = 1.0394599999999997e-12*var1[14];
  t1215 = 1. + t799;
  t1217 = -0.038924*t1215;
  t1223 = -0.03892299998790722*t303;
  t1226 = -0.80315*t993;
  t1228 = 0.148705*t621;
  t1230 = t919 + t839;
  t1231 = -3.6777349999999994e-6*t1230;
  t1236 = t567 + t336;
  t1241 = -0.503149000008*t1236;
  t1245 = t1209 + t1217 + t1223 + t1226 + t1228 + t1231 + t1241;
  t1253 = 1.8190549999999993e-12*var1[14];
  t1258 = -0.80315*t1023;
  t1263 = -0.5031490000160505*t303;
  t1264 = -0.038922999986*t1039;
  t1268 = t459 + t946;
  t1273 = -3.6777349999999994e-6*t1268;
  t1288 = 0.148705*t351;
  t1293 = t887 + t336;
  t1298 = -0.038924*t1293;
  t1302 = t1253 + t1258 + t1263 + t1264 + t1273 + t1288 + t1298;
  t423 = -6.5e-11*t145;
  t430 = 1. + t423;
  t566 = t487 + t521;
  t244 = t148 + t165;
  t1331 = 4.e-6*t145;
  t1112 = 7.e-6*t145;
  t1324 = t822*t960;
  t1325 = t792*t1001;
  t1327 = t886*t1048;
  t1328 = t1324 + t1325 + t1327;
  t802 = 4.e-6*t621;
  t817 = 1. + t799 + t802;
  t830 = 4.e-6*t444;
  t845 = t830 + t597 + t839;
  t899 = 4.e-6*t351;
  t912 = t887 + t899 + t336;
  t1078 = 1.0248489999999998e-12*var1[13];
  t1084 = -0.28120900000849935*t145;
  t1105 = t1089 + t882;
  t1106 = -0.038748999993*t1105;
  t1121 = t1112 + t165;
  t1131 = -2.123459e-6*t1121;
  t1208 = t751*t1196;
  t1251 = t773*t1245;
  t1312 = t695*t1302;
  t1319 = t1078 + t1084 + t1106 + t1131 + t1208 + t1251 + t1312;
  t818 = t792*t817;
  t873 = t822*t845;
  t915 = t886*t912;
  t916 = t818 + t873 + t915;
  t1329 = 5.856279999999999e-13*var1[13];
  t1330 = -0.0387489999948987*t145;
  t1337 = t1331 + t521;
  t1339 = -2.123459e-6*t1337;
  t1341 = t1089 + t155;
  t1344 = -0.281209000004*t1341;
  t1348 = t822*t1196;
  t1349 = t792*t1245;
  t1353 = t886*t1302;
  t1361 = t1329 + t1330 + t1339 + t1344 + t1348 + t1349 + t1353;
  t1379 = -1.4640699999999997e-7*var1[13];
  t1383 = -1.38024835e-16*t145;
  t1385 = t1331 + t819;
  t1386 = -0.038748999993*t1385;
  t1388 = t1112 + t716;
  t1396 = -0.281209000004*t1388;
  t1405 = t430*t1196;
  t1413 = t566*t1245;
  t1425 = t244*t1302;
  t1427 = t1379 + t1383 + t1386 + t1396 + t1405 + t1413 + t1425;
  t1579 = t960*t1196;
  t1591 = t1001*t1245;
  t1592 = t1048*t1302;
  t1606 = t1579 + t1591 + t1592;
  t1626 = -1.*t1196*t845;
  t1627 = -1.*t817*t1245;
  t1629 = -1.*t912*t1302;
  t1638 = t1626 + t1627 + t1629;
  t1362 = t1328*t1361;
  t964 = t751*t960;
  t1007 = t773*t1001;
  t1053 = t695*t1048;
  t1073 = t964 + t1007 + t1053;
  t1363 = t430*t960;
  t1366 = t566*t1001;
  t1373 = t244*t1048;
  t1376 = t1363 + t1366 + t1373;
  t1751 = Cos(var1[12]);
  t1737 = Sin(var1[12]);
  t1770 = -1.*t1751;
  t1774 = 1. + t1770;
  t1797 = 0.15121*t1737;
  t1458 = -1.*t916*t1361;
  t1443 = t773*t817;
  t1449 = t751*t845;
  t1451 = t695*t912;
  t1454 = t1443 + t1449 + t1451;
  t1460 = t566*t817;
  t1462 = t430*t845;
  t1474 = t244*t912;
  t1480 = t1460 + t1462 + t1474;
  t1776 = 0.15121*t1774;
  t1807 = t1737*t1319;
  t1808 = t1751*t1427;
  t1811 = t1776 + t1797 + t1807 + t1808;
  t1821 = -0.15121*t1774;
  t1822 = t1751*t1319;
  t1824 = -1.*t1737*t1427;
  t1827 = t1821 + t1797 + t1822 + t1824;
  t415 = t244*t398;
  t479 = t430*t466;
  t647 = t566*t636;
  t651 = t415 + t479 + t647;
  t715 = t695*t398;
  t760 = t751*t466;
  t776 = t773*t636;
  t777 = t715 + t760 + t776;
  t1997 = Cos(var1[5]);
  t2019 = t1751*t651;
  t2020 = t1737*t777;
  t2021 = t2019 + t2020;
  t2002 = -1.*t1737*t651;
  t2013 = t1751*t777;
  t2014 = t2002 + t2013;
  t2023 = Sin(var1[5]);
  t1992 = Cos(var1[4]);
  t1964 = t886*t398;
  t1966 = t822*t466;
  t1973 = t792*t636;
  t1989 = t1964 + t1966 + t1973;
  t1990 = Sin(var1[4]);
  t2017 = t1997*t2014;
  t2025 = -1.*t2021*t2023;
  t2029 = t2017 + t2025;
  t2062 = Cos(var1[3]);
  t2056 = t1997*t2021;
  t2059 = t2014*t2023;
  t2060 = t2056 + t2059;
  t2053 = Sin(var1[3]);
  t2065 = t1992*t1989;
  t2071 = -1.*t1990*t2029;
  t2079 = t2065 + t2071;
  t1857 = t1737*t1454;
  t1858 = t1751*t1480;
  t1859 = t1857 + t1858;
  t1864 = t1751*t1454;
  t1868 = -1.*t1737*t1480;
  t1879 = t1864 + t1868;
  t1813 = t1751*t1073;
  t1816 = -1.*t1737*t1376;
  t1820 = t1813 + t1816;
  t1741 = t1737*t1073;
  t1754 = t1751*t1376;
  t1759 = t1741 + t1754;
  t2164 = t1997*t1759;
  t2165 = t1820*t2023;
  t2167 = t2164 + t2165;
  t2145 = t1997*t1827;
  t2149 = -1.*t1811*t2023;
  t2160 = t2145 + t2149;
  t2110 = t1997*t1859;
  t2118 = t1879*t2023;
  t2128 = t2110 + t2118;
  t2168 = t1997*t1811;
  t2175 = t1827*t2023;
  t2176 = t2168 + t2175;
  t2191 = t1997*t1879;
  t2192 = -1.*t1859*t2023;
  t2193 = t2191 + t2192;
  t2178 = t2167*t2176;
  t2130 = t1997*t1820;
  t2135 = -1.*t1759*t2023;
  t2144 = t2130 + t2135;
  t2306 = t1328*t1990;
  t2310 = t1992*t2144;
  t2311 = t2306 + t2310;
  t2229 = -1.*t2128*t2176;
  t2267 = t916*t1990;
  t2281 = t1992*t2193;
  t2292 = t2267 + t2281;
  t2313 = t1361*t1990;
  t2316 = t1992*t2160;
  t2319 = t2313 + t2316;
  t2336 = t1992*t1361;
  t2338 = -1.*t1990*t2160;
  t2339 = t2336 + t2338;
  t2530 = t1196*t466;
  t2549 = t636*t1245;
  t2551 = t398*t1302;
  t2572 = t2530 + t2549 + t2551;
  t2584 = -1.*t960*t1196;
  t2585 = -1.*t1001*t1245;
  t2591 = -1.*t1048*t1302;
  t2597 = t2584 + t2585 + t2591;
  t2436 = -1.*t1328*t1361;
  t2454 = t1989*t1361;
  t2374 = t1992*t916;
  t2382 = -1.*t1990*t2193;
  t2384 = t2374 + t2382;
  t1991 = t1989*t1990;
  t2034 = t1992*t2029;
  t2035 = t1991 + t2034;
  t2717 = -1.*t2167*t2176;
  t2322 = t1992*t1328;
  t2327 = -1.*t1990*t2144;
  t2333 = t2322 + t2327;
  t2734 = t2060*t2176;
  t2500 = 6.5e-11*t303;
  t2975 = -1.*t1196*t466;
  t2976 = -1.*t636*t1245;
  t2977 = -1.*t398*t1302;
  t2988 = t2975 + t2976 + t2977;
  t2993 = t1196*t845;
  t2996 = t817*t1245;
  t2998 = t912*t1302;
  t2999 = t2993 + t2996 + t2998;
  t2805 = -1.*t1989*t1361;
  t2848 = t916*t1361;
  t3304 = -1.*t2060*t2176;
  t3333 = t2128*t2176;
  p_output1[0]=t2035*var2[0] + (t2060*t2062 - 1.*t2053*t2079)*var2[1] + (t2053*t2060 + t2062*t2079)*var2[2] + (t2292*(t2178 + t2311*t2319 + t2333*t2339) + t2311*(t2229 - 1.*t2292*t2319 - 1.*t2339*t2384))*var2[3] + (t2128*(t1362 + t2144*t2160 + t2178) + t2167*(t1458 - 1.*t2160*t2193 + t2229))*var2[4] + (t1328*(t1458 - 1.*t1811*t1859 - 1.*t1827*t1879) + (t1362 + t1759*t1811 + t1820*t1827)*t916)*var2[5] + (t1328*(-1.*t1319*t1454 + t1458 - 1.*t1427*t1480) + 0.15121*t651 + 0.15121*t777 + (t1073*t1319 + t1362 + t1376*t1427)*t916)*var2[12] + (0.038749*t398 - 0.281209*t636 + 4.e-6*(-1.*t1001*t1638 - 1.*t1606*t817) + t1606*t845 - 7.e-6*(t1048*t1638 + t1606*t912) + 1.e-6*(t331 + 7.e-6*t444 + t946) + t1638*t960)*var2[13] + 4.0519653002457196e-7*var2[14];
  p_output1[1]=t2292*var2[0] + (t2062*t2128 - 1.*t2053*t2384)*var2[1] + (t2053*t2128 + t2062*t2384)*var2[2] + (t2035*(-1.*t2311*t2319 - 1.*t2333*t2339 + t2717) + t2311*(t2035*t2319 + t2079*t2339 + t2734))*var2[3] + (t2060*(-1.*t2144*t2160 + t2436 + t2717) + t2167*(t2029*t2160 + t2454 + t2734))*var2[4] + (t1989*(-1.*t1759*t1811 - 1.*t1820*t1827 + t2436) + t1328*(t1827*t2014 + t1811*t2021 + t2454))*var2[5] + (0.15121*t1454 + 0.15121*t1480 + t1989*(-1.*t1073*t1319 - 1.*t1376*t1427 + t2436) + t1328*(t2454 + t1427*t651 + t1319*t777))*var2[12] + (-7.e-6*(t1048*t2572 + t2597*t398) + t2597*t466 + 4.e-6*(-1.*t1001*t2572 - 1.*t2597*t636) - 0.281209*t817 + 0.038749*t912 + 1.e-6*(4.e-6*(-1. + t2500) + t616 + t919) + t2572*t960)*var2[13] + 0.29999995910920463*var2[14];
  p_output1[2]=t2311*var2[0] + (t2062*t2167 - 1.*t2053*t2333)*var2[1] + (t2053*t2167 + t2062*t2333)*var2[2] + (t2292*(-1.*t2035*t2319 - 1.*t2079*t2339 + t3304) + t2035*(t2292*t2319 + t2339*t2384 + t3333))*var2[3] + (t2128*(-1.*t2029*t2160 + t2805 + t3304) + t2060*(t2160*t2193 + t2848 + t3333))*var2[4] + (t1989*(t1811*t1859 + t1827*t1879 + t2848) + (-1.*t1827*t2014 - 1.*t1811*t2021 + t2805)*t916)*var2[5] + (0.15121*t1073 + 0.15121*t1376 + t1989*(t1319*t1454 + t1427*t1480 + t2848) + (t2805 - 1.*t1427*t651 - 1.*t1319*t777)*t916)*var2[12] + (-0.281209*t1001 + 0.038749*t1048 + t2999*t466 + 4.e-6*(-1.*t2999*t636 - 1.*t2988*t817) + t2988*t845 - 7.e-6*(t2999*t398 + t2988*t912) + 1.e-6*(-1. + 4.e-6*t1192 + t2500 + 7.e-6*t948))*var2[13] - 2.5986500000000035e-7*var2[14];
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

#include "dh_RlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_RlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
