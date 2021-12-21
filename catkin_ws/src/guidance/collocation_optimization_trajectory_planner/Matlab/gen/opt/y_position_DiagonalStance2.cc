/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:29 GMT+01:00
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
  double t34;
  double t49;
  double t58;
  double t66;
  double t72;
  double t76;
  double t79;
  double t83;
  double t89;
  double t100;
  double t101;
  double t113;
  double t228;
  double t178;
  double t192;
  double t197;
  double t198;
  double t201;
  double t208;
  double t235;
  double t237;
  double t246;
  double t250;
  double t182;
  double t289;
  double t267;
  double t338;
  double t340;
  double t348;
  double t363;
  double t372;
  double t373;
  double t389;
  double t390;
  double t403;
  double t410;
  double t463;
  double t432;
  double t434;
  double t440;
  double t441;
  double t443;
  double t450;
  double t482;
  double t483;
  double t489;
  double t491;
  double t517;
  double t519;
  double t521;
  double t523;
  double t524;
  double t529;
  double t53;
  double t91;
  double t94;
  double t95;
  double t120;
  double t121;
  double t133;
  double t137;
  double t140;
  double t149;
  double t153;
  double t158;
  double t227;
  double t240;
  double t248;
  double t257;
  double t265;
  double t200;
  double t214;
  double t820;
  double t277;
  double t281;
  double t828;
  double t296;
  double t309;
  double t316;
  double t325;
  double t326;
  double t825;
  double t843;
  double t844;
  double t864;
  double t886;
  double t889;
  double t358;
  double t359;
  double t360;
  double t406;
  double t425;
  double t430;
  double t897;
  double t898;
  double t899;
  double t909;
  double t935;
  double t936;
  double t456;
  double t462;
  double t470;
  double t475;
  double t476;
  double t499;
  double t500;
  double t507;
  double t509;
  double t515;
  double t947;
  double t949;
  double t950;
  double t951;
  double t958;
  double t966;
  double t972;
  double t987;
  double t540;
  double t542;
  double t1017;
  double t1033;
  double t1049;
  double t1054;
  double t635;
  double t642;
  double t1264;
  double t1267;
  double t1290;
  double t1311;
  double t1323;
  double t1335;
  double t1355;
  double t1357;
  double t1358;
  double t1382;
  double t1395;
  double t1416;
  double t1426;
  double t1429;
  double t1438;
  double t1441;
  double t1450;
  double t1453;
  double t1454;
  double t1455;
  double t1466;
  double t1475;
  double t1481;
  double t1486;
  double t1707;
  double t1718;
  double t1720;
  double t1764;
  double t1659;
  double t1660;
  double t1674;
  double t1678;
  double t1688;
  double t1739;
  double t1775;
  double t1858;
  double t1966;
  double t1968;
  double t1972;
  double t2004;
  double t1897;
  double t1925;
  double t1879;
  double t1884;
  double t1887;
  double t1950;
  double t1951;
  double t1953;
  double t2022;
  double t1833;
  double t2081;
  double t1867;
  double t2169;
  double t1990;
  double t2203;
  double t2206;
  double t1769;
  double t2070;
  double t2072;
  double t2074;
  double t2083;
  double t2093;
  double t2097;
  double t2100;
  double t2105;
  double t2119;
  double t2278;
  double t2221;
  double t2224;
  double t2226;
  double t2229;
  double t2232;
  double t2235;
  double t2248;
  double t2252;
  double t2326;
  double t2335;
  double t2338;
  double t2341;
  double t2344;
  double t2359;
  double t2361;
  double t2365;
  double t2041;
  double t2376;
  double t2009;
  double t2536;
  double t2186;
  double t2441;
  double t2464;
  double t2171;
  double t1703;
  double t1738;
  double t1771;
  double t1773;
  double t1783;
  double t1792;
  double t1797;
  double t1677;
  double t1697;
  double t1801;
  double t1812;
  double t1818;
  double t1826;
  double t1837;
  double t1854;
  double t1869;
  double t1877;
  double t1878;
  double t1895;
  double t1896;
  double t1921;
  double t1922;
  double t1933;
  double t1942;
  double t1943;
  double t1961;
  double t1973;
  double t2010;
  double t2020;
  double t2045;
  double t2056;
  double t2057;
  double t2747;
  double t2752;
  double t2759;
  double t2774;
  double t2779;
  double t2788;
  double t2136;
  double t2150;
  double t2175;
  double t2185;
  double t2188;
  double t2194;
  double t2200;
  double t2276;
  double t2277;
  double t2283;
  double t2288;
  double t2301;
  double t2312;
  double t2317;
  double t2385;
  double t2803;
  double t2809;
  double t2813;
  double t2821;
  double t2477;
  double t2825;
  double t2838;
  double t2846;
  double t2848;
  double t2499;
  double t2500;
  double t2852;
  double t2854;
  double t2861;
  double t2862;
  double t2524;
  double t2527;
  double t2549;
  double t2573;
  double t2631;
  double t2651;
  double t2659;
  double t2668;
  double t3005;
  double t3006;
  double t3010;
  double t3020;
  double t3027;
  double t3030;
  double t3034;
  double t3035;
  double t3042;
  double t3046;
  double t3073;
  double t3082;
  double t3094;
  double t3096;
  double t3111;
  double t3112;
  double t3116;
  double t3120;
  double t1300;
  double t1337;
  t34 = -1.*var4[0];
  t49 = t34 + var4[1];
  t58 = -1. + var5[0];
  t66 = -1. + var6[0];
  t72 = 1/t66;
  t76 = -1.*var1[0];
  t79 = t76 + var1[1];
  t83 = t58*t72*t79;
  t89 = t34 + var1[0] + t83;
  t100 = 1/t49;
  t101 = -1.*t100*t89;
  t113 = 1. + t101;
  t228 = Cos(var2[10]);
  t178 = Cos(var2[4]);
  t192 = Cos(var2[9]);
  t197 = -1.*t192;
  t198 = 1. + t197;
  t201 = Sin(var2[9]);
  t208 = -0.15121*t201;
  t235 = -1.*t228;
  t237 = 1. + t235;
  t246 = -1. + t228;
  t250 = Sin(var2[10]);
  t182 = Cos(var2[5]);
  t289 = Sin(var2[5]);
  t267 = Sin(var2[4]);
  t338 = -1.*t178*t182*t201;
  t340 = -1.*t192*t178*t289;
  t348 = t338 + t340;
  t363 = t192*t178*t182;
  t372 = -1.*t178*t201*t289;
  t373 = t363 + t372;
  t389 = Cos(var2[11]);
  t390 = -1.*t389;
  t403 = 1. + t390;
  t410 = Sin(var2[11]);
  t463 = -1. + t389;
  t432 = t250*t267;
  t434 = -4.e-6*t250*t348;
  t440 = -1.000000000016*t237;
  t441 = 1. + t440;
  t443 = t441*t373;
  t450 = t432 + t434 + t443;
  t482 = t228*t267;
  t483 = 4.e-6*t237*t348;
  t489 = -1.*t250*t373;
  t491 = t482 + t483 + t489;
  t517 = 4.e-6*t237*t267;
  t519 = 1.6e-11*t246;
  t521 = 1. + t519;
  t523 = t521*t348;
  t524 = 4.e-6*t250*t373;
  t529 = t517 + t523 + t524;
  t53 = Power(t49,-5);
  t91 = Power(t89,5);
  t94 = Power(t49,-4);
  t95 = Power(t89,4);
  t120 = Power(t49,-3);
  t121 = Power(t89,3);
  t133 = Power(t113,2);
  t137 = Power(t49,-2);
  t140 = Power(t89,2);
  t149 = Power(t113,3);
  t153 = Power(t113,4);
  t158 = Power(t113,5);
  t227 = -4.9936e-13*var2[10];
  t240 = -0.038749*t237;
  t248 = 6.19984e-13*t246;
  t257 = -0.281210000004*t250;
  t265 = t227 + t240 + t248 + t257;
  t200 = 0.15121*t198;
  t214 = t200 + t208;
  t820 = Sin(var2[3]);
  t277 = -0.15121*t198;
  t281 = t277 + t208;
  t828 = Cos(var2[3]);
  t296 = -1.2484e-7*var2[10];
  t309 = 2.479936e-18*t237;
  t316 = -1.54996e-7*t246;
  t325 = 1.124840000016e-6*t250;
  t326 = t296 + t309 + t316 + t325;
  t825 = t182*t820*t267;
  t843 = t828*t289;
  t844 = t825 + t843;
  t864 = t828*t182;
  t886 = -1.*t820*t267*t289;
  t889 = t864 + t886;
  t358 = 0.281210000008499*t237;
  t359 = -0.03874900000062*t250;
  t360 = t358 + t359;
  t406 = 0.50315000001605*t403;
  t425 = -0.0398890000006382*t410;
  t430 = t406 + t425;
  t897 = -1.*t201*t844;
  t898 = t192*t889;
  t899 = t897 + t898;
  t909 = t192*t844;
  t935 = t201*t889;
  t936 = t909 + t935;
  t456 = -5.04e-14*var2[11];
  t462 = -0.039889*t403;
  t470 = 6.38224e-13*t463;
  t475 = -0.503150000008*t410;
  t476 = t456 + t462 + t470 + t475;
  t499 = -1.26e-8*var2[11];
  t500 = 2.552896e-18*t403;
  t507 = -1.59556e-7*t463;
  t509 = 2.012600000032e-6*t410;
  t515 = t499 + t500 + t507 + t509;
  t947 = -1.*t178*t250*t820;
  t949 = -4.e-6*t250*t899;
  t950 = t441*t936;
  t951 = t947 + t949 + t950;
  t958 = -1.*t228*t178*t820;
  t966 = 4.e-6*t237*t899;
  t972 = -1.*t250*t936;
  t987 = t958 + t966 + t972;
  t540 = 1.6e-11*t463;
  t542 = 1. + t540;
  t1017 = -4.e-6*t237*t178*t820;
  t1033 = t521*t899;
  t1049 = 4.e-6*t250*t936;
  t1054 = t1017 + t1033 + t1049;
  t635 = -1.000000000016*t403;
  t642 = 1. + t635;
  t1264 = -1.*t828*t182*t267;
  t1267 = t820*t289;
  t1290 = t1264 + t1267;
  t1311 = t182*t820;
  t1323 = t828*t267*t289;
  t1335 = t1311 + t1323;
  t1355 = -1.*t201*t1290;
  t1357 = t192*t1335;
  t1358 = t1355 + t1357;
  t1382 = t192*t1290;
  t1395 = t201*t1335;
  t1416 = t1382 + t1395;
  t1426 = t828*t178*t250;
  t1429 = -4.e-6*t250*t1358;
  t1438 = t441*t1416;
  t1441 = t1426 + t1429 + t1438;
  t1450 = t228*t828*t178;
  t1453 = 4.e-6*t237*t1358;
  t1454 = -1.*t250*t1416;
  t1455 = t1450 + t1453 + t1454;
  t1466 = 4.e-6*t237*t828*t178;
  t1475 = t521*t1358;
  t1481 = 4.e-6*t250*t1416;
  t1486 = t1466 + t1475 + t1481;
  t1707 = Cos(var2[13]);
  t1718 = -1.*t1707;
  t1720 = 1. + t1718;
  t1764 = Sin(var2[13]);
  t1659 = Cos(var2[12]);
  t1660 = -1.*t1659;
  t1674 = 1. + t1660;
  t1678 = Sin(var2[12]);
  t1688 = 0.15121*t1678;
  t1739 = 4.e-6*t1720;
  t1775 = -2.8e-11*t1720;
  t1858 = 7.e-6*t1720;
  t1966 = Cos(var2[14]);
  t1968 = -1.*t1966;
  t1972 = 1. + t1968;
  t2004 = Sin(var2[14]);
  t1897 = -1.*t1764;
  t1925 = -4.e-6*t1764;
  t1879 = -1.*t178*t182*t1678;
  t1884 = -1.*t1659*t178*t289;
  t1887 = t1879 + t1884;
  t1950 = t1659*t178*t182;
  t1951 = -1.*t178*t1678*t289;
  t1953 = t1950 + t1951;
  t2022 = 7.e-6*t1972;
  t1833 = -7.e-6*t1764;
  t2081 = -7.e-6*t1720;
  t1867 = 4.e-6*t1764;
  t2169 = 4.e-6*t1972;
  t1990 = -2.8e-11*t1972;
  t2203 = -1. + t1707;
  t2206 = 4.e-6*t2203;
  t1769 = 7.e-6*t1764;
  t2070 = 2.8e-11*t1720;
  t2072 = t2070 + t1897;
  t2074 = t2072*t267;
  t2083 = t2081 + t1925;
  t2093 = t2083*t1887;
  t2097 = -1.000000000016*t1720;
  t2100 = 1. + t2097;
  t2105 = t2100*t1953;
  t2119 = t2074 + t2093 + t2105;
  t2278 = 7.e-6*t2004;
  t2221 = t2206 + t1833;
  t2224 = t2221*t267;
  t2226 = -6.5e-11*t1720;
  t2229 = 1. + t2226;
  t2232 = t2229*t1887;
  t2235 = t2081 + t1867;
  t2248 = t2235*t1953;
  t2252 = t2224 + t2232 + t2248;
  t2326 = -1.000000000049*t1720;
  t2335 = 1. + t2326;
  t2338 = t2335*t267;
  t2341 = t2206 + t1769;
  t2344 = t2341*t1887;
  t2359 = t2070 + t1764;
  t2361 = t2359*t1953;
  t2365 = t2338 + t2344 + t2361;
  t2041 = -4.e-6*t2004;
  t2376 = 2.8e-11*t1972;
  t2009 = -1.*t2004;
  t2536 = -7.e-6*t1972;
  t2186 = 4.e-6*t2004;
  t2441 = -1. + t1966;
  t2464 = 4.e-6*t2441;
  t2171 = -7.e-6*t2004;
  t1703 = 5.856279999999999e-13*var2[13];
  t1738 = -0.0387489999948987*t1720;
  t1771 = t1739 + t1769;
  t1773 = -2.123459e-6*t1771;
  t1783 = t1775 + t1764;
  t1792 = -0.281209000004*t1783;
  t1797 = t1703 + t1738 + t1773 + t1792;
  t1677 = -0.15121*t1674;
  t1697 = t1677 + t1688;
  t1801 = 0.15121*t1674;
  t1812 = t1801 + t1688;
  t1818 = -1.4640699999999997e-7*var2[13];
  t1826 = -1.38024835e-16*t1720;
  t1837 = t1739 + t1833;
  t1854 = -0.038748999993*t1837;
  t1869 = t1858 + t1867;
  t1877 = -0.281209000004*t1869;
  t1878 = t1818 + t1826 + t1854 + t1877;
  t1895 = 1.0248489999999998e-12*var2[13];
  t1896 = -0.28120900000849935*t1720;
  t1921 = t1775 + t1897;
  t1922 = -0.038748999993*t1921;
  t1933 = t1858 + t1925;
  t1942 = -2.123459e-6*t1933;
  t1943 = t1895 + t1896 + t1922 + t1942;
  t1961 = 1.8190549999999993e-12*var2[14];
  t1973 = -0.5031490000160505*t1972;
  t2010 = t1990 + t2009;
  t2020 = -0.038922999986*t2010;
  t2045 = t2022 + t2041;
  t2056 = -3.6777349999999994e-6*t2045;
  t2057 = t1961 + t1973 + t2020 + t2056;
  t2747 = -1.*t1678*t844;
  t2752 = t1659*t889;
  t2759 = t2747 + t2752;
  t2774 = t1659*t844;
  t2779 = t1678*t889;
  t2788 = t2774 + t2779;
  t2136 = -2.598649999999999e-7*var2[14];
  t2150 = -2.3905277499999995e-16*t1972;
  t2175 = t2169 + t2171;
  t2185 = -0.038922999986*t2175;
  t2188 = t2022 + t2186;
  t2194 = -0.503149000008*t2188;
  t2200 = t2136 + t2150 + t2185 + t2194;
  t2276 = 1.0394599999999997e-12*var2[14];
  t2277 = -0.03892299998790722*t1972;
  t2283 = t2169 + t2278;
  t2288 = -3.6777349999999994e-6*t2283;
  t2301 = t1990 + t2004;
  t2312 = -0.503149000008*t2301;
  t2317 = t2276 + t2277 + t2288 + t2312;
  t2385 = t2376 + t2004;
  t2803 = -1.*t178*t2072*t820;
  t2809 = t2083*t2759;
  t2813 = t2100*t2788;
  t2821 = t2803 + t2809 + t2813;
  t2477 = t2464 + t2278;
  t2825 = -1.*t178*t2221*t820;
  t2838 = t2229*t2759;
  t2846 = t2235*t2788;
  t2848 = t2825 + t2838 + t2846;
  t2499 = -1.000000000049*t1972;
  t2500 = 1. + t2499;
  t2852 = -1.*t2335*t178*t820;
  t2854 = t2341*t2759;
  t2861 = t2359*t2788;
  t2862 = t2852 + t2854 + t2861;
  t2524 = -1.000000000016*t1972;
  t2527 = 1. + t2524;
  t2549 = t2536 + t2041;
  t2573 = t2376 + t2009;
  t2631 = t2536 + t2186;
  t2651 = -6.5e-11*t1972;
  t2659 = 1. + t2651;
  t2668 = t2464 + t2171;
  t3005 = -1.*t1678*t1290;
  t3006 = t1659*t1335;
  t3010 = t3005 + t3006;
  t3020 = t1659*t1290;
  t3027 = t1678*t1335;
  t3030 = t3020 + t3027;
  t3034 = t828*t178*t2072;
  t3035 = t2083*t3010;
  t3042 = t2100*t3030;
  t3046 = t3034 + t3035 + t3042;
  t3073 = t828*t178*t2221;
  t3082 = t2229*t3010;
  t3094 = t2235*t3030;
  t3096 = t3073 + t3082 + t3094;
  t3111 = t2335*t828*t178;
  t3112 = t2341*t3010;
  t3116 = t2359*t3030;
  t3120 = t3111 + t3112 + t3116;
  t1300 = t214*t1290;
  t1337 = t281*t1335;
  p_output1[0]=t178*t182*t214 + t265*t267 - 1.*t178*t281*t289 + t326*t348 + t360*t373 + t430*t450 + t476*t491 + t515*t529 - 0.041195*(-1.*t410*t450 + t389*t491 + 4.e-6*t403*t529) - 0.14871*(4.e-6*t410*t450 + 4.e-6*t403*t491 + t529*t542) + 0.803147*(t410*t491 - 4.e-6*t410*t529 + t450*t642) + var2[0] - 1.*t158*var3[0] - 5.*t100*t153*t89*var3[10] - 10.*t137*t140*t149*var3[20] - 10.*t120*t121*t133*var3[30] - 5.*t113*t94*t95*var3[40] - 1.*t53*t91*var3[50];
  p_output1[1]=t1054*t515 - 1.*t178*t265*t820 + t214*t844 + t281*t889 + t326*t899 + t360*t936 + t430*t951 + t476*t987 - 0.041195*(4.e-6*t1054*t403 - 1.*t410*t951 + t389*t987) - 0.14871*(t1054*t542 + 4.e-6*t410*t951 + 4.e-6*t403*t987) + 0.803147*(-4.e-6*t1054*t410 + t642*t951 + t410*t987) + var2[1] - 1.*t158*var3[1] - 5.*t100*t153*t89*var3[11] - 10.*t137*t140*t149*var3[21] - 10.*t120*t121*t133*var3[31] - 5.*t113*t94*t95*var3[41] - 1.*t53*t91*var3[51];
  p_output1[2]=t1300 + t1337 + t1358*t326 + t1416*t360 - 0.041195*(t1455*t389 + 4.e-6*t1486*t403 - 1.*t1441*t410) + t1441*t430 + t1455*t476 + t1486*t515 - 0.14871*(4.e-6*t1455*t403 + 4.e-6*t1441*t410 + t1486*t542) + 0.803147*(t1455*t410 - 4.e-6*t1486*t410 + t1441*t642) + t178*t265*t828 + var2[2] - 1.*t158*var3[2] - 5.*t100*t153*t89*var3[12] - 10.*t137*t140*t149*var3[22] - 10.*t120*t121*t133*var3[32] - 5.*t113*t94*t95*var3[42] - 1.*t53*t91*var3[52];
  p_output1[3]=t1697*t178*t182 + t1878*t1887 + t1943*t1953 + t2057*t2119 + t2200*t2252 + t2317*t2365 - 0.038924*(t2119*t2385 + t2252*t2477 + t2365*t2500) - 0.80315*(t2119*t2527 + t2252*t2549 + t2365*t2573) + 0.148705*(t2119*t2631 + t2252*t2659 + t2365*t2668) + t1797*t267 - 1.*t178*t1812*t289 + var2[0] - 1.*t158*var3[3] - 5.*t100*t153*t89*var3[13] - 10.*t137*t140*t149*var3[23] - 10.*t120*t121*t133*var3[33] - 5.*t113*t94*t95*var3[43] - 1.*t53*t91*var3[53];
  p_output1[4]=t1878*t2759 + t1943*t2788 + t2057*t2821 + t2200*t2848 + t2317*t2862 - 0.038924*(t2385*t2821 + t2477*t2848 + t2500*t2862) - 0.80315*(t2527*t2821 + t2549*t2848 + t2573*t2862) + 0.148705*(t2631*t2821 + t2659*t2848 + t2668*t2862) - 1.*t178*t1797*t820 + t1697*t844 + t1812*t889 + var2[1] - 1.*t158*var3[4] - 5.*t100*t153*t89*var3[14] - 10.*t137*t140*t149*var3[24] - 10.*t120*t121*t133*var3[34] - 5.*t113*t94*t95*var3[44] - 1.*t53*t91*var3[54];
  p_output1[5]=t1290*t1697 + t1335*t1812 + t1878*t3010 + t1943*t3030 + t2057*t3046 + t2200*t3096 + t2317*t3120 - 0.038924*(t2385*t3046 + t2477*t3096 + t2500*t3120) - 0.80315*(t2527*t3046 + t2549*t3096 + t2573*t3120) + 0.148705*(t2631*t3046 + t2659*t3096 + t2668*t3120) + t178*t1797*t828 + var2[2] - 1.*t158*var3[5] - 5.*t100*t153*t89*var3[15] - 10.*t137*t140*t149*var3[25] - 10.*t120*t121*t133*var3[35] - 5.*t113*t94*t95*var3[45] - 1.*t53*t91*var3[55];
  p_output1[6]=0.024028*t178*t820 + 0.00183*t844 - 0.002264*t889 + var2[1] - 1.*t158*var3[6] - 5.*t100*t153*t89*var3[16] - 10.*t137*t140*t149*var3[26] - 10.*t120*t121*t133*var3[36] - 5.*t113*t94*t95*var3[46] - 1.*t53*t91*var3[56];
  p_output1[7]=0.00183*t1290 - 0.002264*t1335 - 0.024028*t178*t828 + var2[2] - 1.*t158*var3[7] - 5.*t100*t153*t89*var3[17] - 10.*t137*t140*t149*var3[27] - 10.*t120*t121*t133*var3[37] - 5.*t113*t94*t95*var3[47] - 1.*t53*t91*var3[57];
  p_output1[8]=ArcTan(t178*t182,t844) - 1.*t158*var3[8] - 5.*t100*t153*t89*var3[18] - 10.*t137*t140*t149*var3[28] - 10.*t120*t121*t133*var3[38] - 5.*t113*t94*t95*var3[48] - 1.*t53*t91*var3[58];
  p_output1[9]=t1300 + t1337 - 0.15121*t1358 + 0.15121*t1416 - 1.*t1290*t1697 - 1.*t1335*t1812 - 0.15121*t3010 + 0.15121*t3030 - 1.*t158*var3[9] - 5.*t100*t153*t89*var3[19] - 10.*t137*t140*t149*var3[29] - 10.*t120*t121*t133*var3[39] - 5.*t113*t94*t95*var3[49] - 1.*t53*t91*var3[59];
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

#include "y_position_DiagonalStance2.hh"

namespace TrotStance2
{

void y_position_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
