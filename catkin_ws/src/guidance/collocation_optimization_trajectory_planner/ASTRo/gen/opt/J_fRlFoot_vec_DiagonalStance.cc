/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:24 GMT+02:00
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
  double t694;
  double t857;
  double t751;
  double t893;
  double t912;
  double t891;
  double t916;
  double t752;
  double t1106;
  double t1108;
  double t1110;
  double t863;
  double t890;
  double t1146;
  double t1147;
  double t1157;
  double t1215;
  double t1223;
  double t1224;
  double t1225;
  double t1226;
  double t1228;
  double t1233;
  double t1245;
  double t1253;
  double t1254;
  double t1260;
  double t1261;
  double t1262;
  double t1280;
  double t1284;
  double t1292;
  double t1168;
  double t1170;
  double t1197;
  double t895;
  double t917;
  double t921;
  double t1112;
  double t1113;
  double t1119;
  double t1310;
  double t1311;
  double t1312;
  double t763;
  double t880;
  double t888;
  double t1321;
  double t1323;
  double t1326;
  double t1360;
  double t1351;
  double t1090;
  double t1122;
  double t1123;
  double t1145;
  double t1198;
  double t1207;
  double t1504;
  double t1505;
  double t1533;
  double t1538;
  double t1539;
  double t1550;
  double t1551;
  double t1552;
  double t1554;
  double t1566;
  double t1567;
  double t1571;
  double t1572;
  double t1295;
  double t1297;
  double t1298;
  double t1403;
  double t1404;
  double t1405;
  double t1377;
  double t1381;
  double t1383;
  double t1332;
  double t1334;
  double t1335;
  double t1644;
  double t1662;
  double t1663;
  double t1366;
  double t1368;
  double t1372;
  double t1668;
  double t1670;
  double t1672;
  double t1776;
  double t1777;
  double t1779;
  double t1456;
  double t1457;
  double t1471;
  double t1482;
  double t1486;
  double t1487;
  double t1824;
  double t1827;
  double t1831;
  double t1834;
  double t1837;
  double t1838;
  double t1839;
  double t1861;
  double t1862;
  double t1865;
  double t1866;
  double t1868;
  double t1872;
  double t1594;
  double t1599;
  double t1603;
  double t1626;
  double t1629;
  double t1630;
  double t1676;
  double t1677;
  double t1680;
  double t1682;
  double t1698;
  double t1700;
  double t1884;
  double t1895;
  double t1900;
  double t1908;
  double t1913;
  double t1915;
  double t2027;
  double t2028;
  double t2029;
  double t2033;
  double t2034;
  double t2054;
  double t2055;
  double t2063;
  double t2064;
  double t2065;
  double t2077;
  double t2079;
  double t2082;
  double t2021;
  double t2042;
  double t2049;
  double t2051;
  double t2057;
  double t2083;
  double t2084;
  double t2088;
  double t2090;
  double t2093;
  double t2095;
  double t2096;
  double t2118;
  double t2120;
  double t2131;
  double t2216;
  double t2218;
  double t2222;
  double t2052;
  double t2132;
  double t2191;
  double t2297;
  double t2298;
  double t2308;
  double t2254;
  double t2260;
  double t2265;
  double t2267;
  double t2296;
  double t2312;
  double t2315;
  double t2785;
  double t2786;
  double t2819;
  double t2342;
  double t2343;
  double t2344;
  double t2348;
  double t2474;
  double t2479;
  double t2492;
  double t2493;
  double t2784;
  double t2823;
  double t2514;
  double t2516;
  double t2517;
  double t2518;
  double t2549;
  double t2551;
  double t2555;
  double t2556;
  double t2610;
  double t2612;
  double t2614;
  double t2616;
  double t2767;
  double t2826;
  double t3551;
  double t3576;
  double t3579;
  double t3587;
  double t3595;
  double t3601;
  double t3603;
  double t2828;
  double t2829;
  double t2837;
  double t3613;
  double t3614;
  double t3622;
  double t2842;
  double t2843;
  double t2847;
  double t2851;
  double t2861;
  double t2864;
  double t2865;
  double t2877;
  double t2896;
  double t2914;
  double t2945;
  double t2977;
  double t2985;
  double t2987;
  double t3009;
  double t3068;
  double t3097;
  double t3354;
  double t3432;
  double t5400;
  double t5402;
  double t5403;
  double t5404;
  double t5512;
  double t5513;
  double t5535;
  double t5537;
  double t5538;
  double t1264;
  double t1304;
  double t1305;
  double t5405;
  double t5410;
  double t5506;
  double t5534;
  double t5539;
  double t5540;
  double t5551;
  double t5552;
  double t5556;
  double t6363;
  double t6511;
  double t6791;
  double t6797;
  double t6811;
  double t6885;
  double t6895;
  double t7040;
  double t6701;
  double t6702;
  double t6767;
  double t6844;
  double t7041;
  double t7043;
  double t7287;
  double t7334;
  double t7511;
  double t1329;
  double t1336;
  double t1337;
  double t2827;
  double t2838;
  double t2863;
  double t2882;
  double t2978;
  double t3012;
  double t10177;
  double t10178;
  double t10179;
  double t3623;
  double t10185;
  double t3758;
  double t10207;
  double t10235;
  double t10240;
  double t10241;
  double t10256;
  double t10379;
  double t10394;
  double t10400;
  double t3839;
  double t10450;
  double t3845;
  double t10834;
  double t11009;
  double t11037;
  double t11233;
  double t11257;
  double t4561;
  double t11388;
  double t11510;
  double t11572;
  double t11594;
  double t11623;
  double t5267;
  double t11676;
  double t11714;
  double t11717;
  double t11721;
  double t11742;
  double t5511;
  double t5568;
  double t5573;
  double t5645;
  double t5646;
  double t5706;
  double t5837;
  double t5917;
  double t6770;
  double t8209;
  double t8562;
  double t8997;
  double t9111;
  double t9595;
  double t9860;
  double t9891;
  double t13120;
  double t13126;
  double t22069;
  double t22079;
  double t13265;
  double t20865;
  double t21373;
  double t21763;
  double t21940;
  double t21967;
  double t21992;
  double t22125;
  double t22127;
  double t22138;
  double t13680;
  double t22232;
  double t22233;
  double t22235;
  double t13687;
  double t13689;
  double t22832;
  double t22834;
  double t22835;
  double t22850;
  double t22860;
  double t22862;
  double t22910;
  double t22920;
  double t23217;
  double t23221;
  t694 = Sin(var1[4]);
  t857 = Cos(var1[9]);
  t751 = Cos(var1[5]);
  t893 = Cos(var1[11]);
  t912 = Sin(var1[10]);
  t891 = Cos(var1[10]);
  t916 = Sin(var1[11]);
  t752 = Sin(var1[9]);
  t1106 = -1.*t893*t912;
  t1108 = t891*t916;
  t1110 = t1106 + t1108;
  t863 = Sin(var1[5]);
  t890 = Cos(var1[4]);
  t1146 = -1.*t891*t893;
  t1147 = -1.*t912*t916;
  t1157 = t1146 + t1147;
  t1215 = t857*t751;
  t1223 = -1.*t752*t863;
  t1224 = t1215 + t1223;
  t1225 = var2[1]*t890*t1224;
  t1226 = -1.*t751*t752*t1110;
  t1228 = -1.*t857*t1110*t863;
  t1233 = t1226 + t1228;
  t1245 = var2[2]*t890*t1233;
  t1253 = -1.*t751*t752*t1157;
  t1254 = -1.*t857*t1157*t863;
  t1260 = t1253 + t1254;
  t1261 = var2[0]*t890*t1260;
  t1262 = t1225 + t1245 + t1261;
  t1280 = t893*t912;
  t1284 = -1.*t891*t916;
  t1292 = t1280 + t1284;
  t1168 = t857*t751*t1157;
  t1170 = -1.*t752*t1157*t863;
  t1197 = t1168 + t1170;
  t895 = t891*t893;
  t917 = t912*t916;
  t921 = t895 + t917;
  t1112 = t857*t751*t1110;
  t1113 = -1.*t752*t1110*t863;
  t1119 = t1112 + t1113;
  t1310 = t1110*t694;
  t1311 = t890*t1197;
  t1312 = t1310 + t1311;
  t763 = t751*t752;
  t880 = t857*t863;
  t888 = t763 + t880;
  t1321 = t921*t694;
  t1323 = t890*t1119;
  t1326 = t1321 + t1323;
  t1360 = Sin(var1[3]);
  t1351 = Cos(var1[3]);
  t1090 = t890*t921;
  t1122 = -1.*t694*t1119;
  t1123 = t1090 + t1122;
  t1145 = t890*t1110;
  t1198 = -1.*t694*t1197;
  t1207 = t1145 + t1198;
  t1504 = t1351*t888;
  t1505 = t1360*t694*t1224;
  t1533 = t1504 + t1505;
  t1538 = var2[1]*t1533;
  t1539 = t1360*t694*t1233;
  t1550 = t1351*t1119;
  t1551 = t1539 + t1550;
  t1552 = var2[2]*t1551;
  t1554 = t1360*t694*t1260;
  t1566 = t1351*t1197;
  t1567 = t1554 + t1566;
  t1571 = var2[0]*t1567;
  t1572 = t1538 + t1552 + t1571;
  t1295 = t857*t751*t1292;
  t1297 = -1.*t752*t1292*t863;
  t1298 = t1295 + t1297;
  t1403 = t751*t752*t1157;
  t1404 = t857*t1157*t863;
  t1405 = t1403 + t1404;
  t1377 = t751*t752*t1110;
  t1381 = t857*t1110*t863;
  t1383 = t1377 + t1381;
  t1332 = t857*t751*t921;
  t1334 = -1.*t752*t921*t863;
  t1335 = t1332 + t1334;
  t1644 = t1351*t1405;
  t1662 = -1.*t1360*t1207;
  t1663 = t1644 + t1662;
  t1366 = -1.*t857*t751;
  t1368 = t752*t863;
  t1372 = t1366 + t1368;
  t1668 = t1351*t1383;
  t1670 = -1.*t1360*t1123;
  t1672 = t1668 + t1670;
  t1776 = t1360*t694*t888;
  t1777 = t1351*t1372;
  t1779 = t1776 + t1777;
  t1456 = -1.*t921*t694;
  t1457 = -1.*t890*t1119;
  t1471 = t1456 + t1457;
  t1482 = -1.*t1110*t694;
  t1486 = -1.*t890*t1197;
  t1487 = t1482 + t1486;
  t1824 = t1360*t888;
  t1827 = -1.*t1351*t694*t1224;
  t1831 = t1824 + t1827;
  t1834 = var2[1]*t1831;
  t1837 = -1.*t1351*t694*t1233;
  t1838 = t1360*t1119;
  t1839 = t1837 + t1838;
  t1861 = var2[2]*t1839;
  t1862 = -1.*t1351*t694*t1260;
  t1865 = t1360*t1197;
  t1866 = t1862 + t1865;
  t1868 = var2[0]*t1866;
  t1872 = t1834 + t1861 + t1868;
  t1594 = t751*t752*t1292;
  t1599 = t857*t1292*t863;
  t1603 = t1594 + t1599;
  t1626 = t890*t1157;
  t1629 = -1.*t694*t1298;
  t1630 = t1626 + t1629;
  t1676 = t751*t752*t921;
  t1677 = t857*t921*t863;
  t1680 = t1676 + t1677;
  t1682 = t890*t1292;
  t1698 = -1.*t694*t1335;
  t1700 = t1682 + t1698;
  t1884 = t1360*t1405;
  t1895 = t1351*t1207;
  t1900 = t1884 + t1895;
  t1908 = t1360*t1383;
  t1913 = t1351*t1123;
  t1915 = t1908 + t1913;
  t2027 = -1.*t893;
  t2028 = 1. + t2027;
  t2029 = -0.50321*t2028;
  t2033 = -0.19821*t893;
  t2034 = t2029 + t2033;
  t2054 = -1.*t857;
  t2055 = 1. + t2054;
  t2063 = -1.*t891;
  t2064 = 1. + t2063;
  t2065 = -0.28121*t2064;
  t2077 = t891*t2034;
  t2079 = 0.305*t912*t916;
  t2082 = t2065 + t2077 + t2079;
  t2021 = 0.28121*t912;
  t2042 = t2034*t912;
  t2049 = -0.305*t891*t916;
  t2051 = t2021 + t2042 + t2049;
  t2057 = -0.15121*t2055;
  t2083 = t857*t2082;
  t2084 = t2057 + t2083;
  t2088 = t751*t2084;
  t2090 = 0.15121*t2055;
  t2093 = 0.15121*t857;
  t2095 = 0.15121*t752;
  t2096 = t752*t2082;
  t2118 = t2090 + t2093 + t2095 + t2096;
  t2120 = -1.*t2118*t863;
  t2131 = t2088 + t2120;
  t2216 = t2051*t694;
  t2218 = t890*t2131;
  t2222 = t2216 + t2218;
  t2052 = -1.*t2051*t694;
  t2132 = -1.*t890*t2131;
  t2191 = t2052 + t2132;
  t2297 = t890*t2051;
  t2298 = -1.*t694*t2131;
  t2308 = t2297 + t2298;
  t2254 = t751*t2118;
  t2260 = t2084*t863;
  t2265 = t2254 + t2260;
  t2267 = -1.*t1372*t2265;
  t2296 = -1.*t890*t888*t2222;
  t2312 = t694*t888*t2308;
  t2315 = t2267 + t2296 + t2312;
  t2785 = -1.*t751*t2118;
  t2786 = -1.*t2084*t863;
  t2819 = t2785 + t2786;
  t2342 = t1383*t2265;
  t2343 = t1326*t2222;
  t2344 = t1123*t2308;
  t2348 = t2342 + t2343 + t2344;
  t2474 = t1372*t2265;
  t2479 = t890*t888*t2222;
  t2492 = -1.*t694*t888*t2308;
  t2493 = t2474 + t2479 + t2492;
  t2784 = Power(t890,2);
  t2823 = Power(t694,2);
  t2514 = -1.*t1405*t2265;
  t2516 = -1.*t1312*t2222;
  t2517 = -1.*t1207*t2308;
  t2518 = t2514 + t2516 + t2517;
  t2549 = -1.*t1383*t2265;
  t2551 = -1.*t1326*t2222;
  t2555 = -1.*t1123*t2308;
  t2556 = t2549 + t2551 + t2555;
  t2610 = t1405*t2265;
  t2612 = t1312*t2222;
  t2614 = t1207*t2308;
  t2616 = t2610 + t2612 + t2614;
  t2767 = t890*t1233*t2315;
  t2826 = -1.*t888*t2265;
  t3551 = -0.15121*t752;
  t3576 = -1.*t752*t2082;
  t3579 = t3551 + t3576;
  t3587 = t751*t3579;
  t3595 = t2093 + t2083;
  t3601 = -1.*t3595*t863;
  t3603 = t3587 + t3601;
  t2828 = -1.*t890*t1224*t2222;
  t2829 = t694*t1224*t2308;
  t2837 = t1119*t2265;
  t3613 = t751*t3595;
  t3614 = t3579*t863;
  t3622 = t3613 + t3614;
  t2842 = t890*t1233*t2222;
  t2843 = -1.*t694*t1233*t2308;
  t2847 = t890*t1224*t2348;
  t2851 = t890*t1260*t2493;
  t2861 = t888*t2265;
  t2864 = t890*t1224*t2222;
  t2865 = -1.*t694*t1224*t2308;
  t2877 = -1.*t1197*t2265;
  t2896 = -1.*t890*t1260*t2222;
  t2914 = t694*t1260*t2308;
  t2945 = t890*t1224*t2518;
  t2977 = -1.*t1119*t2265;
  t2985 = -1.*t890*t1233*t2222;
  t2987 = t694*t1233*t2308;
  t3009 = t1197*t2265;
  t3068 = t890*t1260*t2222;
  t3097 = -1.*t694*t1260*t2308;
  t3354 = t890*t1260*t2556;
  t3432 = t890*t1233*t2616;
  t5400 = -0.28121*t912;
  t5402 = -1.*t2034*t912;
  t5403 = 0.305*t891*t916;
  t5404 = t5400 + t5402 + t5403;
  t5512 = 0.28121*t891;
  t5513 = t5512 + t2077 + t2079;
  t5535 = t857*t751*t5404;
  t5537 = -1.*t752*t5404*t863;
  t5538 = t5535 + t5537;
  t1264 = t1157*t694;
  t1304 = t890*t1298;
  t1305 = t1264 + t1304;
  t5405 = t751*t752*t5404;
  t5410 = t857*t5404*t863;
  t5506 = t5405 + t5410;
  t5534 = t5513*t694;
  t5539 = t890*t5538;
  t5540 = t5534 + t5539;
  t5551 = t890*t5513;
  t5552 = -1.*t694*t5538;
  t5556 = t5551 + t5552;
  t6363 = 0.305*t893*t912;
  t6511 = t6363 + t2049;
  t6791 = -0.305*t891*t893;
  t6797 = -0.305*t912*t916;
  t6811 = t6791 + t6797;
  t6885 = t857*t751*t6511;
  t6895 = -1.*t752*t6511*t863;
  t7040 = t6885 + t6895;
  t6701 = t751*t752*t6511;
  t6702 = t857*t6511*t863;
  t6767 = t6701 + t6702;
  t6844 = t6811*t694;
  t7041 = t890*t7040;
  t7043 = t6844 + t7041;
  t7287 = t890*t6811;
  t7334 = -1.*t694*t7040;
  t7511 = t7287 + t7334;
  t1329 = t1292*t694;
  t1336 = t890*t1335;
  t1337 = t1329 + t1336;
  t2827 = -1.*t1372*t2131;
  t2838 = t1383*t2131;
  t2863 = t1372*t2131;
  t2882 = -1.*t1405*t2131;
  t2978 = -1.*t1383*t2131;
  t3012 = t1405*t2131;
  t10177 = -1.*t888*t2131;
  t10178 = t2267 + t10177;
  t10179 = t1119*t10178;
  t3623 = -1.*t1372*t3622;
  t10185 = -1.*t1224*t2131;
  t3758 = t1383*t3622;
  t10207 = t1233*t2131;
  t10235 = t2051*t921;
  t10240 = t1119*t2131;
  t10241 = t10235 + t2342 + t10240;
  t10256 = t888*t10241;
  t10379 = t888*t2131;
  t10394 = t2474 + t10379;
  t10400 = t1197*t10394;
  t3839 = t1372*t3622;
  t10450 = t1224*t2131;
  t3845 = -1.*t1405*t3622;
  t10834 = -1.*t1260*t2131;
  t11009 = -1.*t2051*t1110;
  t11037 = -1.*t1197*t2131;
  t11233 = t11009 + t2514 + t11037;
  t11257 = t888*t11233;
  t4561 = -1.*t1383*t3622;
  t11388 = -1.*t1233*t2131;
  t11510 = -1.*t2051*t921;
  t11572 = -1.*t1119*t2131;
  t11594 = t11510 + t2549 + t11572;
  t11623 = t1197*t11594;
  t5267 = t1405*t3622;
  t11676 = t1260*t2131;
  t11714 = t2051*t1110;
  t11717 = t1197*t2131;
  t11721 = t11714 + t2610 + t11717;
  t11742 = t1119*t11721;
  t5511 = t1372*t5506;
  t5568 = -1.*t5506*t1405;
  t5573 = -1.*t1603*t2265;
  t5645 = t5506*t1405;
  t5646 = t1603*t2265;
  t5706 = -1.*t5506*t1383;
  t5837 = -1.*t1372*t5506;
  t5917 = t5506*t1383;
  t6770 = t1372*t6767;
  t8209 = -1.*t6767*t1405;
  t8562 = t6767*t1405;
  t8997 = -1.*t6767*t1383;
  t9111 = -1.*t1680*t2265;
  t9595 = -1.*t1372*t6767;
  t9860 = t6767*t1383;
  t9891 = t1680*t2265;
  t13120 = t2051*t1157;
  t13126 = t1110*t5513;
  t22069 = Power(t857,2);
  t22079 = Power(t752,2);
  t13265 = -1.*t5513*t921;
  t20865 = t752*t2084;
  t21373 = -1.*t857*t2118;
  t21763 = t20865 + t21373;
  t21940 = -1.*t752*t2084;
  t21967 = t857*t2118;
  t21992 = t21940 + t21967;
  t22125 = -1.*t857*t1110*t2084;
  t22127 = -1.*t752*t1110*t2118;
  t22138 = t11510 + t22125 + t22127;
  t13680 = t1110*t6811;
  t22232 = t857*t1157*t2084;
  t22233 = t752*t1157*t2118;
  t22235 = t11714 + t22232 + t22233;
  t13687 = -1.*t1292*t2051;
  t13689 = -1.*t6811*t921;
  t22832 = 0.15121*t1292;
  t22834 = 0.15121*t1110;
  t22835 = t22832 + t22834;
  t22850 = var2[0]*t22835;
  t22860 = t1157*t2082;
  t22862 = t11714 + t22860;
  t22910 = -1.*t1110*t2082;
  t22920 = t22910 + t11510;
  t23217 = 0.28121*t893;
  t23221 = t2034*t893;
  p_output1[0]=t1207*var2[0] - 1.*t694*t888*var2[1] + t1123*var2[2];
  p_output1[1]=t1262;
  p_output1[2]=t1262;
  p_output1[3]=t1305*var2[0] + t1312*var2[2];
  p_output1[4]=t1326*var2[0] + t1337*var2[2];
  p_output1[5]=t1312;
  p_output1[6]=t888*t890;
  p_output1[7]=t1326;
  p_output1[8]=(-1.*t1207*t1351 - 1.*t1360*t1405)*var2[0] + (-1.*t1360*t1372 + t1351*t694*t888)*var2[1] + (-1.*t1123*t1351 - 1.*t1360*t1383)*var2[2];
  p_output1[9]=-1.*t1360*t1487*var2[0] + t1360*t888*t890*var2[1] - 1.*t1360*t1471*var2[2];
  p_output1[10]=t1572;
  p_output1[11]=t1572;
  p_output1[12]=(t1351*t1603 - 1.*t1360*t1630)*var2[0] + t1663*var2[2];
  p_output1[13]=t1672*var2[0] + (t1351*t1680 - 1.*t1360*t1700)*var2[2];
  p_output1[14]=t1663;
  p_output1[15]=t1779;
  p_output1[16]=t1672;
  p_output1[17]=t1663*var2[0] + t1779*var2[1] + t1672*var2[2];
  p_output1[18]=t1351*t1487*var2[0] - 1.*t1351*t888*t890*var2[1] + t1351*t1471*var2[2];
  p_output1[19]=t1872;
  p_output1[20]=t1872;
  p_output1[21]=(t1360*t1603 + t1351*t1630)*var2[0] + t1900*var2[2];
  p_output1[22]=t1915*var2[0] + (t1360*t1680 + t1351*t1700)*var2[2];
  p_output1[23]=t1900;
  p_output1[24]=t1360*t1372 - 1.*t1351*t694*t888;
  p_output1[25]=t1915;
  p_output1[26]=(t1123*t2315 - 1.*t2348*t694*t888 + t1326*(t2191*t694*t888 + t2222*t694*t888) + (t1123*t2191 + t1123*t2222 + t1326*t2308 + t1471*t2308)*t888*t890)*var2[0] + (t1312*(-1.*t1123*t2191 - 1.*t1123*t2222 - 1.*t1326*t2308 - 1.*t1471*t2308) + t1326*(t1207*t2191 + t1207*t2222 + t1312*t2308 + t1487*t2308) + t1207*t2556 + t1123*t2616)*var2[1] + (t1207*t2493 - 1.*t2518*t694*t888 + t1312*(-1.*t2191*t694*t888 - 1.*t2222*t694*t888) + (-1.*t1207*t2191 - 1.*t1207*t2222 - 1.*t1312*t2308 - 1.*t1487*t2308)*t888*t890)*var2[2];
  p_output1[27]=(t2767 + t2847 + t1326*(t2826 + t2827 + t2828 + t2829 - 1.*t2784*t2819*t888 - 1.*t2819*t2823*t888) + t888*t890*(t2837 + t2838 + t2842 + t2843 - 1.*t1123*t2819*t694 + t1326*t2819*t890))*var2[0] + (t3354 + t3432 + t1326*(t3009 + t3012 + t3068 + t3097 - 1.*t1207*t2819*t694 + t1312*t2819*t890) + t1312*(t2977 + t2978 + t2985 + t2987 + t1123*t2819*t694 - 1.*t1326*t2819*t890))*var2[1] + (t2851 + t2945 + t1312*(t2861 + t2863 + t2864 + t2865 + t2784*t2819*t888 + t2819*t2823*t888) + t888*t890*(t2877 + t2882 + t2896 + t2914 + t1207*t2819*t694 - 1.*t1312*t2819*t890))*var2[2];
  p_output1[28]=(t2767 + t2847 + t1326*(t2826 + t2828 + t2829 + t3623 - 1.*t2784*t3603*t888 - 1.*t2823*t3603*t888) + t888*t890*(t2837 + t2842 + t2843 + t3758 - 1.*t1123*t3603*t694 + t1326*t3603*t890))*var2[0] + (t3354 + t3432 + t1326*(t3009 + t3068 + t3097 + t5267 - 1.*t1207*t3603*t694 + t1312*t3603*t890) + t1312*(t2977 + t2985 + t2987 + t4561 + t1123*t3603*t694 - 1.*t1326*t3603*t890))*var2[1] + (t2851 + t2945 + t1312*(t2861 + t2864 + t2865 + t3839 + t2784*t3603*t888 + t2823*t3603*t888) + t888*t890*(t2877 + t2896 + t2914 + t3845 + t1207*t3603*t694 - 1.*t1312*t3603*t890))*var2[2];
  p_output1[29]=(t1312*t2315 + (t2610 + t2612 + t2614 + t1326*t5540 + t1123*t5556 + t5917)*t888*t890 + t1326*(t5837 + t5556*t694*t888 - 1.*t5540*t888*t890))*var2[0] + (t1305*t2556 + t1312*t2616 + t1326*(t1305*t2222 + t1630*t2308 + t1312*t5540 + t1207*t5556 + t5645 + t5646) + t1312*(t2514 + t2516 + t2517 - 1.*t1326*t5540 - 1.*t1123*t5556 + t5706))*var2[1] + (t1305*t2493 + (-1.*t1305*t2222 - 1.*t1630*t2308 - 1.*t1312*t5540 - 1.*t1207*t5556 + t5568 + t5573)*t888*t890 + t1312*(t5511 - 1.*t5556*t694*t888 + t5540*t888*t890))*var2[2];
  p_output1[30]=(t1337*t2315 + t1326*(t694*t7511*t888 - 1.*t7043*t888*t890 + t9595) + t888*t890*(t1337*t2222 + t1700*t2308 + t1326*t7043 + t1123*t7511 + t9860 + t9891))*var2[0] + (t1326*t2556 + t1337*t2616 + t1326*(t2342 + t2343 + t2344 + t1312*t7043 + t1207*t7511 + t8562) + t1312*(-1.*t1337*t2222 - 1.*t1700*t2308 - 1.*t1326*t7043 - 1.*t1123*t7511 + t8997 + t9111))*var2[1] + (t1326*t2493 + (t2549 + t2551 + t2555 - 1.*t1312*t7043 - 1.*t1207*t7511 + t8209)*t888*t890 + t1312*(t6770 - 1.*t694*t7511*t888 + t7043*t888*t890))*var2[2];
  p_output1[31]=t1326*t2315 + t2348*t888*t890;
  p_output1[32]=t1312*t2556 + t1326*t2616;
  p_output1[33]=t1312*t2493 + t2518*t888*t890;
  p_output1[34]=(t10179 + t10256 + t1372*(t10207 + t1119*t2819 + t2837 + t2838) + t1383*(t10185 + t2826 + t2827 - 1.*t2819*t888))*var2[0] + (t11623 + t11742 + t1405*(t11388 - 1.*t1119*t2819 + t2977 + t2978) + t1383*(t11676 + t1197*t2819 + t3009 + t3012))*var2[1] + (t10400 + t11257 + t1372*(t10834 - 1.*t1197*t2819 + t2877 + t2882) + t1405*(t10450 + t2861 + t2863 + t2819*t888))*var2[2];
  p_output1[35]=(t10179 + t10256 + t1372*(t10207 + t2837 + t1119*t3603 + t3758) + t1383*(t10185 + t2826 + t3623 - 1.*t3603*t888))*var2[0] + (t11623 + t11742 + t1405*(t11388 + t2977 - 1.*t1119*t3603 + t4561) + t1383*(t11676 + t3009 + t1197*t3603 + t5267))*var2[1] + (t10400 + t11257 + t1372*(t10834 + t2877 - 1.*t1197*t3603 + t3845) + t1405*(t10450 + t2861 + t3839 + t3603*t888))*var2[2];
  p_output1[36]=(t10178*t1405 + t1383*(t5837 - 1.*t5538*t888) + t1372*(t11714 + t11717 + t2610 + t1119*t5538 + t5917 + t5513*t921))*var2[0] + (t11721*t1405 + t11594*t1603 + t1383*(t13120 + t13126 + t1298*t2131 + t1197*t5538 + t5645 + t5646) + t1405*(t11009 + t11037 + t13265 + t2514 - 1.*t1119*t5538 + t5706))*var2[1] + (t10394*t1603 + t1372*(-1.*t1157*t2051 - 1.*t1298*t2131 - 1.*t1110*t5513 - 1.*t1197*t5538 + t5568 + t5573) + t1405*(t5511 + t5538*t888))*var2[2];
  p_output1[37]=(t10178*t1680 + t1383*(-1.*t7040*t888 + t9595) + t1372*(t1292*t2051 + t1335*t2131 + t1119*t7040 + t6811*t921 + t9860 + t9891))*var2[0] + (t11594*t1383 + t11721*t1680 + t1383*(t10235 + t10240 + t13680 + t2342 + t1197*t7040 + t8562) + t1405*(t13687 + t13689 - 1.*t1335*t2131 - 1.*t1119*t7040 + t8997 + t9111))*var2[1] + (t10394*t1383 + t1372*(t11510 + t11572 + t2549 - 1.*t1110*t6811 - 1.*t1197*t7040 + t8209) + t1405*(t6770 + t7040*t888))*var2[2];
  p_output1[38]=t10241*t1372 + t10178*t1383;
  p_output1[39]=t11721*t1383 + t11594*t1405;
  p_output1[40]=t11233*t1372 + t10394*t1405;
  p_output1[41]=(-1.*t2118*t752 - 1.*t3579*t752 - 1.*t2084*t857 + t3595*t857)*t921*var2[0] + (t1110*(t1110*t2084*t752 - 1.*t1110*t3595*t752 - 1.*t1110*t2118*t857 - 1.*t1110*t3579*t857) + (-1.*t1157*t2084*t752 + t1157*t3595*t752 + t1157*t2118*t857 + t1157*t3579*t857)*t921)*var2[1] + t1110*(t2118*t752 + t3579*t752 + t2084*t857 - 1.*t3595*t857)*var2[2];
  p_output1[42]=t1110*t21992*var2[0] + (t1157*t22138 + t1110*t22235 + t1110*(t11009 + t13265 - 1.*t1110*t22069*t5404 - 1.*t1110*t22079*t5404 - 1.*t1157*t2118*t752 - 1.*t1157*t2084*t857) + (t13120 + t13126 + t1157*t22069*t5404 + t1157*t22079*t5404 + t1292*t2118*t752 + t1292*t2084*t857)*t921)*var2[1] + t1157*t21763*var2[2];
  p_output1[43]=t1292*t21992*var2[0] + (t1292*t22235 + t22138*t921 + (t10235 + t13680 + t1157*t22069*t6511 + t1157*t22079*t6511 + t1110*t2118*t752 + t1110*t2084*t857)*t921 + t1110*(t13687 + t13689 - 1.*t1110*t22069*t6511 - 1.*t1110*t22079*t6511 - 1.*t2118*t752*t921 - 1.*t2084*t857*t921))*var2[1] + t21763*t921*var2[2];
  p_output1[44]=t21992*t921;
  p_output1[45]=t1110*t22138 + t22235*t921;
  p_output1[46]=t1110*t21763;
  p_output1[47]=t22850 + (t1110*t22862 + t1157*t22920 + t1110*(t11009 + t13265 - 1.*t1157*t2082 - 1.*t1110*t5404) + (t13120 + t13126 + t1292*t2082 + t1157*t5404)*t921)*var2[1];
  p_output1[48]=t22850 + (t1292*t22862 + t22920*t921 + (t10235 + t13680 + t1110*t2082 + t1157*t6511)*t921 + t1110*(t13687 + t13689 - 1.*t1110*t6511 - 1.*t2082*t921))*var2[1];
  p_output1[49]=0.15121*t1157 + 0.15121*t921;
  p_output1[50]=-0.15121 + t1110*t22920 + t22862*t921;
  p_output1[51]=(t23217 + t23221 - 0.305*Power(t893,2))*var2[0] + (-0.28121*t916 - 1.*t2034*t916 + 0.305*t893*t916)*var2[2];
  p_output1[52]=0.28121*t916 + t2034*t916 - 0.305*t893*t916;
  p_output1[53]=t23217 + t23221 + 0.305*Power(t916,2);
  p_output1[54]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
