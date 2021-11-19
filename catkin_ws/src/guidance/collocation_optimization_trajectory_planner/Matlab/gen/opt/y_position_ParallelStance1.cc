/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:10 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t56;
  double t57;
  double t64;
  double t66;
  double t86;
  double t94;
  double t97;
  double t100;
  double t107;
  double t151;
  double t166;
  double t171;
  double t224;
  double t240;
  double t262;
  double t263;
  double t267;
  double t268;
  double t238;
  double t292;
  double t317;
  double t324;
  double t326;
  double t328;
  double t387;
  double t402;
  double t297;
  double t298;
  double t307;
  double t345;
  double t346;
  double t353;
  double t441;
  double t445;
  double t449;
  double t453;
  double t404;
  double t406;
  double t410;
  double t427;
  double t431;
  double t433;
  double t519;
  double t489;
  double t495;
  double t496;
  double t499;
  double t461;
  double t472;
  double t473;
  double t474;
  double t476;
  double t478;
  double t58;
  double t112;
  double t134;
  double t146;
  double t181;
  double t182;
  double t185;
  double t194;
  double t201;
  double t204;
  double t209;
  double t218;
  double t275;
  double t285;
  double t605;
  double t602;
  double t293;
  double t294;
  double t603;
  double t606;
  double t607;
  double t611;
  double t614;
  double t616;
  double t312;
  double t327;
  double t335;
  double t336;
  double t354;
  double t364;
  double t384;
  double t391;
  double t393;
  double t395;
  double t398;
  double t619;
  double t620;
  double t622;
  double t624;
  double t626;
  double t629;
  double t434;
  double t450;
  double t457;
  double t459;
  double t480;
  double t481;
  double t485;
  double t500;
  double t503;
  double t513;
  double t514;
  double t522;
  double t528;
  double t635;
  double t637;
  double t643;
  double t644;
  double t658;
  double t663;
  double t666;
  double t667;
  double t652;
  double t653;
  double t654;
  double t656;
  double t559;
  double t564;
  double t716;
  double t723;
  double t725;
  double t728;
  double t729;
  double t730;
  double t735;
  double t736;
  double t739;
  double t747;
  double t759;
  double t768;
  double t782;
  double t784;
  double t785;
  double t796;
  double t834;
  double t836;
  double t849;
  double t852;
  double t817;
  double t819;
  double t824;
  double t827;
  double t1007;
  double t1011;
  double t1012;
  double t1018;
  double t982;
  double t983;
  double t984;
  double t990;
  double t991;
  double t1016;
  double t1033;
  double t1095;
  double t1260;
  double t1261;
  double t1264;
  double t1286;
  double t1183;
  double t1195;
  double t1148;
  double t1151;
  double t1159;
  double t1235;
  double t1239;
  double t1241;
  double t1304;
  double t1085;
  double t1331;
  double t1114;
  double t1407;
  double t1285;
  double t1437;
  double t1438;
  double t1025;
  double t1314;
  double t1326;
  double t1329;
  double t1333;
  double t1346;
  double t1362;
  double t1369;
  double t1385;
  double t1391;
  double t1474;
  double t1440;
  double t1442;
  double t1444;
  double t1448;
  double t1453;
  double t1454;
  double t1457;
  double t1460;
  double t1489;
  double t1490;
  double t1499;
  double t1500;
  double t1502;
  double t1509;
  double t1510;
  double t1513;
  double t1307;
  double t1519;
  double t1294;
  double t1607;
  double t1418;
  double t1528;
  double t1535;
  double t1409;
  double t1006;
  double t1015;
  double t1026;
  double t1031;
  double t1045;
  double t1049;
  double t1050;
  double t985;
  double t992;
  double t1069;
  double t1078;
  double t1081;
  double t1084;
  double t1086;
  double t1089;
  double t1121;
  double t1139;
  double t1144;
  double t1161;
  double t1163;
  double t1187;
  double t1188;
  double t1213;
  double t1219;
  double t1234;
  double t1254;
  double t1282;
  double t1302;
  double t1303;
  double t1309;
  double t1311;
  double t1312;
  double t1708;
  double t1709;
  double t1713;
  double t1722;
  double t1723;
  double t1728;
  double t1403;
  double t1404;
  double t1413;
  double t1415;
  double t1429;
  double t1430;
  double t1434;
  double t1467;
  double t1471;
  double t1475;
  double t1477;
  double t1479;
  double t1482;
  double t1483;
  double t1521;
  double t1740;
  double t1746;
  double t1751;
  double t1752;
  double t1545;
  double t1760;
  double t1762;
  double t1766;
  double t1771;
  double t1556;
  double t1571;
  double t1774;
  double t1779;
  double t1780;
  double t1781;
  double t1581;
  double t1591;
  double t1609;
  double t1615;
  double t1634;
  double t1641;
  double t1643;
  double t1649;
  double t1883;
  double t1889;
  double t1899;
  double t1902;
  double t1907;
  double t1915;
  double t1919;
  double t1924;
  double t1928;
  double t1929;
  double t1935;
  double t1937;
  double t1945;
  double t1946;
  double t1952;
  double t1956;
  double t1963;
  double t1965;
  double t2188;
  double t2189;
  double t2193;
  double t2198;
  double t2200;
  double t2222;
  double t2224;
  double t2227;
  double t2230;
  double t2232;
  t56 = -1.*var4[0];
  t57 = t56 + var4[1];
  t64 = -1. + var5[0];
  t66 = -1. + var6[0];
  t86 = 1/t66;
  t94 = -1.*var1[0];
  t97 = t94 + var1[1];
  t100 = t64*t86*t97;
  t107 = t56 + var1[0] + t100;
  t151 = 1/t57;
  t166 = -1.*t151*t107;
  t171 = 1. + t166;
  t224 = Cos(var2[4]);
  t240 = Cos(var2[6]);
  t262 = -1.*t240;
  t263 = 1. + t262;
  t267 = 0.15121*t263;
  t268 = Sin(var2[6]);
  t238 = Sin(var2[5]);
  t292 = Cos(var2[5]);
  t317 = Cos(var2[7]);
  t324 = -1.*t317;
  t326 = 1. + t324;
  t328 = Sin(var2[7]);
  t387 = Sin(var2[4]);
  t402 = -1. + t317;
  t297 = -1.*t224*t240*t238;
  t298 = -1.*t224*t292*t268;
  t307 = t297 + t298;
  t345 = t224*t292*t240;
  t346 = -1.*t224*t238*t268;
  t353 = t345 + t346;
  t441 = Cos(var2[8]);
  t445 = -1.*t441;
  t449 = 1. + t445;
  t453 = Sin(var2[8]);
  t404 = 4.e-6*t402*t387;
  t406 = 1.6e-11*t402;
  t410 = 1. + t406;
  t427 = t410*t307;
  t431 = 4.e-6*t353*t328;
  t433 = t404 + t427 + t431;
  t519 = -1. + t441;
  t489 = t317*t387;
  t495 = 4.e-6*t402*t307;
  t496 = t353*t328;
  t499 = t489 + t495 + t496;
  t461 = -1.000000000016*t326;
  t472 = 1. + t461;
  t473 = t472*t353;
  t474 = -1.*t387*t328;
  t476 = -4.e-6*t307*t328;
  t478 = t473 + t474 + t476;
  t58 = Power(t57,-5);
  t112 = Power(t107,5);
  t134 = Power(t57,-4);
  t146 = Power(t107,4);
  t181 = Power(t57,-3);
  t182 = Power(t107,3);
  t185 = Power(t171,2);
  t194 = Power(t57,-2);
  t201 = Power(t107,2);
  t204 = Power(t171,3);
  t209 = Power(t171,4);
  t218 = Power(t171,5);
  t275 = -0.15121*t268;
  t285 = t267 + t275;
  t605 = Sin(var2[3]);
  t602 = Cos(var2[3]);
  t293 = 0.15121*t268;
  t294 = t267 + t293;
  t603 = t602*t292;
  t606 = -1.*t605*t387*t238;
  t607 = t603 + t606;
  t611 = t292*t605*t387;
  t614 = t602*t238;
  t616 = t611 + t614;
  t312 = -1.2484e-7*var2[7];
  t327 = -1.5499600000248e-7*t326;
  t335 = 1.124840000016e-6*t328;
  t336 = t312 + t327 + t335;
  t354 = 0.281210000008499*t326;
  t364 = 0.03874900000062*t328;
  t384 = t354 + t364;
  t391 = 4.9936e-13*var2[7];
  t393 = -0.03874900000062*t326;
  t395 = 0.281210000004*t328;
  t398 = t391 + t393 + t395;
  t619 = t240*t607;
  t620 = -1.*t616*t268;
  t622 = t619 + t620;
  t624 = t240*t616;
  t626 = t607*t268;
  t629 = t624 + t626;
  t434 = -1.284e-8*var2[8];
  t450 = -1.5499600000248e-7*t449;
  t457 = 2.012840000032e-6*t453;
  t459 = t434 + t450 + t457;
  t480 = 0.503210000016051*t449;
  t481 = 0.03874900000062*t453;
  t485 = t480 + t481;
  t500 = 5.136e-14*var2[8];
  t503 = -0.03874900000062*t449;
  t513 = 0.503210000008*t453;
  t514 = t500 + t503 + t513;
  t522 = 1.6e-11*t519;
  t528 = 1. + t522;
  t635 = -4.e-6*t224*t402*t605;
  t637 = t410*t622;
  t643 = 4.e-6*t629*t328;
  t644 = t635 + t637 + t643;
  t658 = -1.*t224*t317*t605;
  t663 = 4.e-6*t402*t622;
  t666 = t629*t328;
  t667 = t658 + t663 + t666;
  t652 = t472*t629;
  t653 = t224*t605*t328;
  t654 = -4.e-6*t622*t328;
  t656 = t652 + t653 + t654;
  t559 = -1.000000000016*t449;
  t564 = 1. + t559;
  t716 = t292*t605;
  t723 = t602*t387*t238;
  t725 = t716 + t723;
  t728 = -1.*t602*t292*t387;
  t729 = t605*t238;
  t730 = t728 + t729;
  t735 = t240*t725;
  t736 = -1.*t730*t268;
  t739 = t735 + t736;
  t747 = t240*t730;
  t759 = t725*t268;
  t768 = t747 + t759;
  t782 = 4.e-6*t602*t224*t402;
  t784 = t410*t739;
  t785 = 4.e-6*t768*t328;
  t796 = t782 + t784 + t785;
  t834 = t602*t224*t317;
  t836 = 4.e-6*t402*t739;
  t849 = t768*t328;
  t852 = t834 + t836 + t849;
  t817 = t472*t768;
  t819 = -1.*t602*t224*t328;
  t824 = -4.e-6*t739*t328;
  t827 = t817 + t819 + t824;
  t1007 = Cos(var2[13]);
  t1011 = -1.*t1007;
  t1012 = 1. + t1011;
  t1018 = Sin(var2[13]);
  t982 = Cos(var2[12]);
  t983 = -1.*t982;
  t984 = 1. + t983;
  t990 = Sin(var2[12]);
  t991 = 0.15121*t990;
  t1016 = 4.e-6*t1012;
  t1033 = -2.8e-11*t1012;
  t1095 = 7.e-6*t1012;
  t1260 = Cos(var2[14]);
  t1261 = -1.*t1260;
  t1264 = 1. + t1261;
  t1286 = Sin(var2[14]);
  t1183 = -1.*t1018;
  t1195 = -4.e-6*t1018;
  t1148 = -1.*t224*t292*t990;
  t1151 = -1.*t982*t224*t238;
  t1159 = t1148 + t1151;
  t1235 = t982*t224*t292;
  t1239 = -1.*t224*t990*t238;
  t1241 = t1235 + t1239;
  t1304 = 7.e-6*t1264;
  t1085 = -7.e-6*t1018;
  t1331 = -7.e-6*t1012;
  t1114 = 4.e-6*t1018;
  t1407 = 4.e-6*t1264;
  t1285 = -2.8e-11*t1264;
  t1437 = -1. + t1007;
  t1438 = 4.e-6*t1437;
  t1025 = 7.e-6*t1018;
  t1314 = 2.8e-11*t1012;
  t1326 = t1314 + t1183;
  t1329 = t1326*t387;
  t1333 = t1331 + t1195;
  t1346 = t1333*t1159;
  t1362 = -1.000000000016*t1012;
  t1369 = 1. + t1362;
  t1385 = t1369*t1241;
  t1391 = t1329 + t1346 + t1385;
  t1474 = 7.e-6*t1286;
  t1440 = t1438 + t1085;
  t1442 = t1440*t387;
  t1444 = -6.5e-11*t1012;
  t1448 = 1. + t1444;
  t1453 = t1448*t1159;
  t1454 = t1331 + t1114;
  t1457 = t1454*t1241;
  t1460 = t1442 + t1453 + t1457;
  t1489 = -1.000000000049*t1012;
  t1490 = 1. + t1489;
  t1499 = t1490*t387;
  t1500 = t1438 + t1025;
  t1502 = t1500*t1159;
  t1509 = t1314 + t1018;
  t1510 = t1509*t1241;
  t1513 = t1499 + t1502 + t1510;
  t1307 = -4.e-6*t1286;
  t1519 = 2.8e-11*t1264;
  t1294 = -1.*t1286;
  t1607 = -7.e-6*t1264;
  t1418 = 4.e-6*t1286;
  t1528 = -1. + t1260;
  t1535 = 4.e-6*t1528;
  t1409 = -7.e-6*t1286;
  t1006 = 5.856279999999999e-13*var2[13];
  t1015 = -0.0387489999948987*t1012;
  t1026 = t1016 + t1025;
  t1031 = -2.123459e-6*t1026;
  t1045 = t1033 + t1018;
  t1049 = -0.281209000004*t1045;
  t1050 = t1006 + t1015 + t1031 + t1049;
  t985 = -0.15121*t984;
  t992 = t985 + t991;
  t1069 = 0.15121*t984;
  t1078 = t1069 + t991;
  t1081 = -1.4640699999999997e-7*var2[13];
  t1084 = -1.38024835e-16*t1012;
  t1086 = t1016 + t1085;
  t1089 = -0.038748999993*t1086;
  t1121 = t1095 + t1114;
  t1139 = -0.281209000004*t1121;
  t1144 = t1081 + t1084 + t1089 + t1139;
  t1161 = 1.0248489999999998e-12*var2[13];
  t1163 = -0.28120900000849935*t1012;
  t1187 = t1033 + t1183;
  t1188 = -0.038748999993*t1187;
  t1213 = t1095 + t1195;
  t1219 = -2.123459e-6*t1213;
  t1234 = t1161 + t1163 + t1188 + t1219;
  t1254 = 1.8190549999999993e-12*var2[14];
  t1282 = -0.5031490000160505*t1264;
  t1302 = t1285 + t1294;
  t1303 = -0.038922999986*t1302;
  t1309 = t1304 + t1307;
  t1311 = -3.6777349999999994e-6*t1309;
  t1312 = t1254 + t1282 + t1303 + t1311;
  t1708 = -1.*t990*t616;
  t1709 = t982*t607;
  t1713 = t1708 + t1709;
  t1722 = t982*t616;
  t1723 = t990*t607;
  t1728 = t1722 + t1723;
  t1403 = -2.598649999999999e-7*var2[14];
  t1404 = -2.3905277499999995e-16*t1264;
  t1413 = t1407 + t1409;
  t1415 = -0.038922999986*t1413;
  t1429 = t1304 + t1418;
  t1430 = -0.503149000008*t1429;
  t1434 = t1403 + t1404 + t1415 + t1430;
  t1467 = 1.0394599999999997e-12*var2[14];
  t1471 = -0.03892299998790722*t1264;
  t1475 = t1407 + t1474;
  t1477 = -3.6777349999999994e-6*t1475;
  t1479 = t1285 + t1286;
  t1482 = -0.503149000008*t1479;
  t1483 = t1467 + t1471 + t1477 + t1482;
  t1521 = t1519 + t1286;
  t1740 = -1.*t224*t1326*t605;
  t1746 = t1333*t1713;
  t1751 = t1369*t1728;
  t1752 = t1740 + t1746 + t1751;
  t1545 = t1535 + t1474;
  t1760 = -1.*t224*t1440*t605;
  t1762 = t1448*t1713;
  t1766 = t1454*t1728;
  t1771 = t1760 + t1762 + t1766;
  t1556 = -1.000000000049*t1264;
  t1571 = 1. + t1556;
  t1774 = -1.*t1490*t224*t605;
  t1779 = t1500*t1713;
  t1780 = t1509*t1728;
  t1781 = t1774 + t1779 + t1780;
  t1581 = -1.000000000016*t1264;
  t1591 = 1. + t1581;
  t1609 = t1607 + t1307;
  t1615 = t1519 + t1294;
  t1634 = t1607 + t1418;
  t1641 = -6.5e-11*t1264;
  t1643 = 1. + t1641;
  t1649 = t1535 + t1409;
  t1883 = -1.*t990*t730;
  t1889 = t982*t725;
  t1899 = t1883 + t1889;
  t1902 = t982*t730;
  t1907 = t990*t725;
  t1915 = t1902 + t1907;
  t1919 = t602*t224*t1326;
  t1924 = t1333*t1899;
  t1928 = t1369*t1915;
  t1929 = t1919 + t1924 + t1928;
  t1935 = t602*t224*t1440;
  t1937 = t1448*t1899;
  t1945 = t1454*t1915;
  t1946 = t1935 + t1937 + t1945;
  t1952 = t1490*t602*t224;
  t1956 = t1500*t1899;
  t1963 = t1509*t1915;
  t1965 = t1952 + t1956 + t1963;
  t2188 = Cos(var2[9]);
  t2189 = -1.*t2188;
  t2193 = 1. + t2189;
  t2198 = Sin(var2[9]);
  t2200 = -0.15121*t2198;
  t2222 = Cos(var2[15]);
  t2224 = -1.*t2222;
  t2227 = 1. + t2224;
  t2230 = -0.15121*t2227;
  t2232 = Sin(var2[15]);
  p_output1[0]=-1.*t224*t238*t285 + t224*t292*t294 + t307*t336 + t353*t384 + t387*t398 + t433*t459 + t478*t485 + t499*t514 - 0.03875*(t453*t478 + t441*t499 + 4.e-6*t433*t519) + 0.14871*(4.e-6*t453*t478 + 4.e-6*t499*t519 + t433*t528) + 0.80321*(-4.e-6*t433*t453 - 1.*t453*t499 + t478*t564) + var2[0] - 1.*t218*var3[0] - 5.*t107*t151*t209*var3[10] - 10.*t194*t201*t204*var3[20] - 10.*t181*t182*t185*var3[30] - 5.*t134*t146*t171*var3[40] - 1.*t112*t58*var3[50];
  p_output1[1]=-1.*t224*t398*t605 + t285*t607 + t294*t616 + t336*t622 + t384*t629 + t459*t644 + t485*t656 + t514*t667 - 0.03875*(4.e-6*t519*t644 + t453*t656 + t441*t667) + 0.80321*(-4.e-6*t453*t644 + t564*t656 - 1.*t453*t667) + 0.14871*(t528*t644 + 4.e-6*t453*t656 + 4.e-6*t519*t667) + var2[1] - 1.*t218*var3[1] - 5.*t107*t151*t209*var3[11] - 10.*t194*t201*t204*var3[21] - 10.*t181*t182*t185*var3[31] - 5.*t134*t146*t171*var3[41] - 1.*t112*t58*var3[51];
  p_output1[2]=t224*t398*t602 + t285*t725 + t294*t730 + t336*t739 + t384*t768 + t459*t796 + t485*t827 + t514*t852 - 0.03875*(4.e-6*t519*t796 + t453*t827 + t441*t852) + 0.80321*(-4.e-6*t453*t796 + t564*t827 - 1.*t453*t852) + 0.14871*(t528*t796 + 4.e-6*t453*t827 + 4.e-6*t519*t852) + var2[2] - 1.*t218*var3[2] - 5.*t107*t151*t209*var3[12] - 10.*t194*t201*t204*var3[22] - 10.*t181*t182*t185*var3[32] - 5.*t134*t146*t171*var3[42] - 1.*t112*t58*var3[52];
  p_output1[3]=t1144*t1159 + t1234*t1241 + t1312*t1391 + t1434*t1460 + t1483*t1513 - 0.038924*(t1391*t1521 + t1460*t1545 + t1513*t1571) - 0.80315*(t1391*t1591 + t1460*t1609 + t1513*t1615) + 0.148705*(t1391*t1634 + t1460*t1643 + t1513*t1649) - 1.*t1078*t224*t238 + t1050*t387 + t224*t292*t992 + var2[0] - 1.*t218*var3[3] - 5.*t107*t151*t209*var3[13] - 10.*t194*t201*t204*var3[23] - 10.*t181*t182*t185*var3[33] - 5.*t134*t146*t171*var3[43] - 1.*t112*t58*var3[53];
  p_output1[4]=t1144*t1713 + t1234*t1728 + t1312*t1752 + t1434*t1771 + t1483*t1781 - 0.038924*(t1521*t1752 + t1545*t1771 + t1571*t1781) - 0.80315*(t1591*t1752 + t1609*t1771 + t1615*t1781) + 0.148705*(t1634*t1752 + t1643*t1771 + t1649*t1781) - 1.*t1050*t224*t605 + t1078*t607 + t616*t992 + var2[1] - 1.*t218*var3[4] - 5.*t107*t151*t209*var3[14] - 10.*t194*t201*t204*var3[24] - 10.*t181*t182*t185*var3[34] - 5.*t134*t146*t171*var3[44] - 1.*t112*t58*var3[54];
  p_output1[5]=t1144*t1899 + t1234*t1915 + t1312*t1929 + t1434*t1946 + t1483*t1965 - 0.038924*(t1521*t1929 + t1545*t1946 + t1571*t1965) - 0.80315*(t1591*t1929 + t1609*t1946 + t1615*t1965) + 0.148705*(t1634*t1929 + t1643*t1946 + t1649*t1965) + t1050*t224*t602 + t1078*t725 + t730*t992 + var2[2] - 1.*t218*var3[5] - 5.*t107*t151*t209*var3[15] - 10.*t194*t201*t204*var3[25] - 10.*t181*t182*t185*var3[35] - 5.*t134*t146*t171*var3[45] - 1.*t112*t58*var3[55];
  p_output1[6]=0.024028*t224*t605 - 0.002264*t607 + 0.00183*t616 + var2[1] - 1.*t218*var3[6] - 5.*t107*t151*t209*var3[16] - 10.*t194*t201*t204*var3[26] - 10.*t181*t182*t185*var3[36] - 5.*t134*t146*t171*var3[46] - 1.*t112*t58*var3[56];
  p_output1[7]=-0.024028*t224*t602 - 0.002264*t725 + 0.00183*t730 + var2[2] - 1.*t218*var3[7] - 5.*t107*t151*t209*var3[17] - 10.*t194*t201*t204*var3[27] - 10.*t181*t182*t185*var3[37] - 5.*t134*t146*t171*var3[47] - 1.*t112*t58*var3[57];
  p_output1[8]=ArcTan(t224*t292,t616) - 1.*t218*var3[8] - 5.*t107*t151*t209*var3[18] - 10.*t194*t201*t204*var3[28] - 10.*t181*t182*t185*var3[38] - 5.*t134*t146*t171*var3[48] - 1.*t112*t58*var3[58];
  p_output1[9]=(-0.15121*t2193 + t2200)*t725 - 1.*(t2230 + 0.15121*t2232)*t725 + (0.15121*t2193 + t2200)*t730 - 1.*(t2230 - 0.15121*t2232)*t730 + 0.15121*(t2198*t725 + t2188*t730) - 0.15121*(t2188*t725 - 1.*t2198*t730) + 0.15121*(t2232*t725 + t2222*t730) + 0.15121*(t2222*t725 - 1.*t2232*t730) - 1.*t218*var3[9] - 5.*t107*t151*t209*var3[19] - 10.*t194*t201*t204*var3[29] - 10.*t181*t182*t185*var3[39] - 5.*t134*t146*t171*var3[49] - 1.*t112*t58*var3[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_position_ParallelStance1.hh"

namespace ParallelStance1
{

void y_position_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
