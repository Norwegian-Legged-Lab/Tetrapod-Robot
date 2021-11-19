/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:02 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t130;
  double t182;
  double t192;
  double t17;
  double t52;
  double t59;
  double t233;
  double t79;
  double t237;
  double t200;
  double t225;
  double t295;
  double t320;
  double t487;
  double t739;
  double t579;
  double t629;
  double t662;
  double t669;
  double t674;
  double t682;
  double t692;
  double t804;
  double t815;
  double t866;
  double t887;
  double t904;
  double t64;
  double t1053;
  double t1127;
  double t1060;
  double t1067;
  double t1074;
  double t1076;
  double t1089;
  double t1091;
  double t1092;
  double t1095;
  double t1101;
  double t1112;
  double t1039;
  double t1150;
  double t1166;
  double t1193;
  double t1199;
  double t1209;
  double t1217;
  double t1238;
  double t1241;
  double t1245;
  double t1264;
  double t1027;
  double t1280;
  double t1301;
  double t1307;
  double t1124;
  double t1272;
  double t1278;
  double t1324;
  double t991;
  double t127;
  double t504;
  double t527;
  double t572;
  double t702;
  double t759;
  double t797;
  double t970;
  double t983;
  double t989;
  double t1279;
  double t1339;
  double t1345;
  double t1461;
  double t1416;
  double t1420;
  double t1423;
  double t1366;
  double t1472;
  double t1498;
  double t1508;
  double t1616;
  double t1623;
  double t1573;
  double t1571;
  double t1583;
  double t1615;
  double t1627;
  double t1637;
  double t1642;
  double t1649;
  double t1667;
  double t1671;
  double t1675;
  double t1676;
  double t1683;
  double t1697;
  double t1699;
  double t1737;
  double t1738;
  double t1741;
  double t1745;
  double t1748;
  double t1749;
  double t1770;
  double t1774;
  double t1775;
  double t1795;
  double t1799;
  double t1813;
  double t1830;
  double t1837;
  double t1889;
  double t1890;
  double t1896;
  double t1898;
  double t1911;
  double t1912;
  double t1891;
  double t1899;
  double t1936;
  double t1940;
  double t1960;
  double t1963;
  double t1966;
  double t1979;
  double t2021;
  double t2055;
  double t2059;
  double t2078;
  double t2087;
  double t2093;
  double t2096;
  double t2097;
  double t2105;
  double t2110;
  double t2112;
  double t2115;
  double t2119;
  double t2126;
  double t2127;
  double t2129;
  double t2134;
  double t2138;
  double t2141;
  double t2147;
  double t2148;
  double t2149;
  double t2154;
  double t2156;
  double t2163;
  double t2164;
  double t2167;
  double t2168;
  double t2169;
  double t2173;
  double t2177;
  double t2178;
  double t2179;
  double t2006;
  double t2007;
  double t2008;
  double t2012;
  double t2019;
  double t2026;
  double t2034;
  double t2041;
  double t2046;
  double t2047;
  double t2114;
  double t2155;
  double t2186;
  double t2188;
  double t2196;
  double t2202;
  double t2205;
  double t2214;
  double t2220;
  double t2223;
  double t2237;
  double t2238;
  double t2260;
  double t2270;
  double t2272;
  double t2275;
  double t1993;
  double t1996;
  double t2001;
  double t1957;
  double t1980;
  double t1985;
  double t2295;
  double t2297;
  double t2298;
  double t2303;
  double t2009;
  double t2194;
  double t2286;
  double t2290;
  double t2334;
  double t2351;
  double t2366;
  double t2368;
  double t2373;
  double t2386;
  double t2387;
  double t2396;
  double t2407;
  double t2414;
  double t2417;
  double t2418;
  double t2420;
  double t2433;
  double t2437;
  double t2441;
  double t2446;
  double t2463;
  double t2468;
  double t2474;
  double t2370;
  double t2390;
  double t2392;
  double t2293;
  double t2320;
  double t2323;
  double t1856;
  double t1868;
  double t1871;
  double t1796;
  double t1842;
  double t1843;
  double t2453;
  double t2477;
  double t2478;
  double t1644;
  double t1710;
  double t1754;
  double t1756;
  double t1766;
  double t1853;
  double t1879;
  double t1880;
  double t1886;
  double t1888;
  double t2488;
  double t2489;
  double t2490;
  double t2514;
  double t2521;
  double t2533;
  double t1990;
  double t2002;
  double t2005;
  double t2328;
  double t2534;
  double t2596;
  double t2605;
  double t2729;
  double t2730;
  double t2732;
  double t2738;
  double t2749;
  double t2753;
  double t2757;
  double t2759;
  double t2484;
  double t2485;
  double t2486;
  double t990;
  double t1354;
  double t1357;
  double t2562;
  double t2566;
  double t2575;
  double t2887;
  double t2906;
  double t2931;
  double t2948;
  double t3068;
  double t3070;
  double t3079;
  double t3081;
  double t3089;
  double t3097;
  double t3099;
  double t3100;
  double t3153;
  double t3172;
  double t3191;
  double t3200;
  double t3300;
  double t3303;
  double t3304;
  double t3307;
  double t3312;
  double t3315;
  double t3327;
  double t3328;
  t130 = Cos(var1[17]);
  t182 = -1.*t130;
  t192 = 1. + t182;
  t17 = Cos(var1[16]);
  t52 = -1.*t17;
  t59 = 1. + t52;
  t233 = Sin(var1[17]);
  t79 = Sin(var1[16]);
  t237 = 4.e-6*t233;
  t200 = 1.000000000016*t192;
  t225 = -7.e-6*t192;
  t295 = t225 + t237;
  t320 = -7.e-6*t295;
  t487 = -1. + t200 + t320;
  t739 = 4.e-6*t59;
  t579 = 2.8e-11*t192;
  t629 = 4.e-6*t192;
  t662 = 7.e-6*t233;
  t669 = t629 + t662;
  t674 = -7.e-6*t669;
  t682 = -1.*t233;
  t692 = t579 + t674 + t682;
  t804 = -6.5e-11*t192;
  t815 = 1. + t804;
  t866 = -7.e-6*t815;
  t887 = 7.e-6*t192;
  t904 = t866 + t887 + t237;
  t64 = -2.8e-11*t59;
  t1053 = -7.e-6*t59;
  t1127 = Cos(var1[15]);
  t1060 = -4.e-6*t79;
  t1067 = t1053 + t1060;
  t1074 = t1067*t487;
  t1076 = -7.e-6*t79;
  t1089 = t739 + t1076;
  t1091 = t1089*t692;
  t1092 = -6.5e-11*t59;
  t1095 = 1. + t1092;
  t1101 = t1095*t904;
  t1112 = t1074 + t1091 + t1101;
  t1039 = Sin(var1[15]);
  t1150 = -1.000000000016*t59;
  t1166 = 1. + t1150;
  t1193 = t1166*t487;
  t1199 = -1.*t79;
  t1209 = t64 + t1199;
  t1217 = t1209*t692;
  t1238 = 4.e-6*t79;
  t1241 = t1053 + t1238;
  t1245 = t1241*t904;
  t1264 = t1193 + t1217 + t1245;
  t1027 = Cos(var1[5]);
  t1280 = t1127*t1112;
  t1301 = t1039*t1264;
  t1307 = t1280 + t1301;
  t1124 = -1.*t1039*t1112;
  t1272 = t1127*t1264;
  t1278 = t1124 + t1272;
  t1324 = Sin(var1[5]);
  t991 = Cos(var1[4]);
  t127 = t64 + t79;
  t504 = t127*t487;
  t527 = -1.000000000049*t59;
  t572 = 1. + t527;
  t702 = t572*t692;
  t759 = 7.e-6*t79;
  t797 = t739 + t759;
  t970 = t797*t904;
  t983 = t504 + t702 + t970;
  t989 = Sin(var1[4]);
  t1279 = t1027*t1278;
  t1339 = -1.*t1307*t1324;
  t1345 = t1279 + t1339;
  t1461 = Sin(var1[3]);
  t1416 = t1027*t1307;
  t1420 = t1278*t1324;
  t1423 = t1416 + t1420;
  t1366 = Cos(var1[3]);
  t1472 = t991*t983;
  t1498 = -1.*t989*t1345;
  t1508 = t1472 + t1498;
  t1616 = -1. + t130;
  t1623 = 4.e-6*t1616;
  t1573 = -4.e-6*t233;
  t1571 = 6.5e-11*t192;
  t1583 = t225 + t1573;
  t1615 = 7.e-6*t1583;
  t1627 = t1623 + t662;
  t1637 = 4.e-6*t1627;
  t1642 = -1. + t1571 + t1615 + t1637;
  t1649 = 1.000000000049*t192;
  t1667 = -1. + t1649;
  t1671 = 4.e-6*t1667;
  t1675 = -7.e-6*t233;
  t1676 = -2.8e-11*t192;
  t1683 = t1676 + t233;
  t1697 = 7.e-6*t1683;
  t1699 = t1671 + t1623 + t1675 + t1697;
  t1737 = -1.000000000016*t192;
  t1738 = 1. + t1737;
  t1741 = 7.e-6*t1738;
  t1745 = t579 + t233;
  t1748 = 4.e-6*t1745;
  t1749 = t1741 + t887 + t1573 + t1748;
  t1770 = t1241*t1642;
  t1774 = t1209*t1699;
  t1775 = t1166*t1749;
  t1795 = t1770 + t1774 + t1775;
  t1799 = t1095*t1642;
  t1813 = t1089*t1699;
  t1830 = t1067*t1749;
  t1837 = t1799 + t1813 + t1830;
  t1889 = 4.e-6*t669;
  t1890 = -1. + t1649 + t1889;
  t1896 = 4.e-6*t815;
  t1898 = t1896 + t1623 + t662;
  t1911 = 4.e-6*t295;
  t1912 = t579 + t1911 + t233;
  t1891 = t1209*t1890;
  t1899 = t1241*t1898;
  t1936 = t1166*t1912;
  t1940 = t1891 + t1899 + t1936;
  t1960 = t1089*t1890;
  t1963 = t1095*t1898;
  t1966 = t1067*t1912;
  t1979 = t1960 + t1963 + t1966;
  t2021 = 7.e-6*t59;
  t2055 = 2.826290000000002e-7*var1[17];
  t2059 = -0.148715*t815;
  t2078 = -2.18904205e-16*t192;
  t2087 = t629 + t1675;
  t2093 = -0.038576*t2087;
  t2096 = -0.80315*t1583;
  t2097 = t887 + t237;
  t2105 = -0.5031510000080001*t2097;
  t2110 = -0.038575000014*t1627;
  t2112 = t2055 + t2059 + t2078 + t2093 + t2096 + t2105 + t2110;
  t2115 = 1.1305160000000008e-12*var1[17];
  t2119 = -1.000000000049*t192;
  t2126 = 1. + t2119;
  t2127 = -0.038576*t2126;
  t2129 = -0.03857500001589017*t192;
  t2134 = t579 + t682;
  t2138 = -0.5031510000080001*t2134;
  t2141 = t1623 + t1675;
  t2147 = -3.367757e-6*t2141;
  t2148 = -0.148715*t669;
  t2149 = -0.80315*t1683;
  t2154 = t2115 + t2127 + t2129 + t2138 + t2147 + t2148 + t2149;
  t2156 = -1.9784030000000015e-12*var1[17];
  t2163 = -0.80315*t1738;
  t2164 = -0.5031510000160505*t192;
  t2167 = t1676 + t682;
  t2168 = -0.038576*t2167;
  t2169 = t887 + t1573;
  t2173 = -3.367757e-6*t2169;
  t2177 = -0.148715*t295;
  t2178 = -0.038575000014*t1745;
  t2179 = t2156 + t2163 + t2164 + t2168 + t2173 + t2177 + t2178;
  t2006 = -1.*t1127;
  t2007 = 1. + t2006;
  t2008 = -0.15121*t2007;
  t2012 = -2.7726089999999997e-12*var1[16];
  t2019 = -0.2812110000084994*t59;
  t2026 = t2021 + t1060;
  t2034 = -1.8134809999999998e-6*t2026;
  t2041 = 2.8e-11*t59;
  t2046 = t2041 + t79;
  t2047 = -0.038749000006999997*t2046;
  t2114 = t1241*t2112;
  t2155 = t1209*t2154;
  t2186 = t1166*t2179;
  t2188 = t2012 + t2019 + t2034 + t2047 + t2114 + t2155 + t2186;
  t2196 = 3.9608699999999997e-7*var1[16];
  t2202 = -1.1787626499999999e-16*t59;
  t2205 = t2021 + t1238;
  t2214 = -0.281211000004*t2205;
  t2220 = -1. + t17;
  t2223 = 4.e-6*t2220;
  t2237 = t2223 + t759;
  t2238 = -0.038749000006999997*t2237;
  t2260 = t1095*t2112;
  t2270 = t1089*t2154;
  t2272 = t1067*t2179;
  t2275 = t2196 + t2202 + t2214 + t2238 + t2260 + t2270 + t2272;
  t1993 = t1127*t1940;
  t1996 = -1.*t1039*t1979;
  t2001 = t1993 + t1996;
  t1957 = t1039*t1940;
  t1980 = t1127*t1979;
  t1985 = t1957 + t1980;
  t2295 = -0.15121*t1039;
  t2297 = t1127*t2188;
  t2298 = -1.*t1039*t2275;
  t2303 = t2008 + t2295 + t2297 + t2298;
  t2009 = 0.15121*t1039;
  t2194 = t1039*t2188;
  t2286 = t1127*t2275;
  t2290 = t2008 + t2009 + t2194 + t2286;
  t2334 = t572*t1890;
  t2351 = t797*t1898;
  t2366 = t127*t1912;
  t2368 = t2334 + t2351 + t2366;
  t2373 = t1027*t2001;
  t2386 = -1.*t1985*t1324;
  t2387 = t2373 + t2386;
  t2396 = 1.5843479999999999e-12*var1[16];
  t2407 = -0.03874900000889869*t59;
  t2414 = t2041 + t1199;
  t2417 = -0.281211000004*t2414;
  t2418 = t2223 + t1076;
  t2420 = -1.8134809999999998e-6*t2418;
  t2433 = t797*t2112;
  t2437 = t572*t2154;
  t2441 = t127*t2179;
  t2446 = t2396 + t2407 + t2417 + t2420 + t2433 + t2437 + t2441;
  t2463 = t1027*t2303;
  t2468 = -1.*t2290*t1324;
  t2474 = t2463 + t2468;
  t2370 = t2368*t989;
  t2390 = t991*t2387;
  t2392 = t2370 + t2390;
  t2293 = t1027*t2290;
  t2320 = t2303*t1324;
  t2323 = t2293 + t2320;
  t1856 = t1039*t1795;
  t1868 = t1127*t1837;
  t1871 = t1856 + t1868;
  t1796 = t1127*t1795;
  t1842 = -1.*t1039*t1837;
  t1843 = t1796 + t1842;
  t2453 = t2446*t989;
  t2477 = t991*t2474;
  t2478 = t2453 + t2477;
  t1644 = t797*t1642;
  t1710 = t572*t1699;
  t1754 = t127*t1749;
  t1756 = t1644 + t1710 + t1754;
  t1766 = t1756*t989;
  t1853 = t1027*t1843;
  t1879 = -1.*t1871*t1324;
  t1880 = t1853 + t1879;
  t1886 = t991*t1880;
  t1888 = t1766 + t1886;
  t2488 = t991*t2446;
  t2489 = -1.*t989*t2474;
  t2490 = t2488 + t2489;
  t2514 = t1027*t1871;
  t2521 = t1843*t1324;
  t2533 = t2514 + t2521;
  t1990 = t1027*t1985;
  t2002 = t2001*t1324;
  t2005 = t1990 + t2002;
  t2328 = -1.*t2005*t2323;
  t2534 = t2323*t2533;
  t2596 = -1.*t2368*t2446;
  t2605 = t2446*t1756;
  t2729 = -1.*t2112*t1898;
  t2730 = -1.*t1890*t2154;
  t2732 = -1.*t1912*t2179;
  t2738 = t2729 + t2730 + t2732;
  t2749 = t2112*t1642;
  t2753 = t2154*t1699;
  t2757 = t2179*t1749;
  t2759 = t2749 + t2753 + t2757;
  t2484 = t991*t2368;
  t2485 = -1.*t989*t2387;
  t2486 = t2484 + t2485;
  t990 = t983*t989;
  t1354 = t991*t1345;
  t1357 = t990 + t1354;
  t2562 = t991*t1756;
  t2566 = -1.*t989*t1880;
  t2575 = t2562 + t2566;
  t2887 = t1423*t2323;
  t2906 = -1.*t2323*t2533;
  t2931 = t983*t2446;
  t2948 = -1.*t2446*t1756;
  t3068 = t2112*t904;
  t3070 = t692*t2154;
  t3079 = t487*t2179;
  t3081 = t3068 + t3070 + t3079;
  t3089 = -1.*t2112*t1642;
  t3097 = -1.*t2154*t1699;
  t3099 = -1.*t2179*t1749;
  t3100 = t3089 + t3097 + t3099;
  t3153 = -1.*t1423*t2323;
  t3172 = t2005*t2323;
  t3191 = -1.*t983*t2446;
  t3200 = t2368*t2446;
  t3300 = -1.*t2112*t904;
  t3303 = -1.*t692*t2154;
  t3304 = -1.*t487*t2179;
  t3307 = t3300 + t3303 + t3304;
  t3312 = t2112*t1898;
  t3315 = t1890*t2154;
  t3327 = t1912*t2179;
  t3328 = t3312 + t3315 + t3327;
  p_output1[0]=t1357;
  p_output1[1]=t1366*t1423 - 1.*t1461*t1508;
  p_output1[2]=t1423*t1461 + t1366*t1508;
  p_output1[3]=t1888*(t2328 - 1.*t2392*t2478 - 1.*t2486*t2490) + t2392*(t1888*t2478 + t2534 + t2490*t2575);
  p_output1[4]=t2533*(t2328 - 1.*t2387*t2474 + t2596) + t2005*(t1880*t2474 + t2534 + t2605);
  p_output1[5]=t1756*(-1.*t1985*t2290 - 1.*t2001*t2303 + t2596) + t2368*(t1871*t2290 + t1843*t2303 + t2605);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.15121*t1112 - 0.15121*t1264 + t1756*(-1.*t1940*t2188 - 1.*t1979*t2275 + t2596) + t2368*(t1795*t2188 + t1837*t2275 + t2605);
  p_output1[16]=-1.*t1642*t2738 - 1.*t1898*t2759 + 4.e-6*(-1.*t1699*t2738 - 1.*t1890*t2759) + 7.e-6*(t1749*t2738 + t1912*t2759) - 0.038749*t487 + 0.281211*t692 + 1.e-6*(t1573 + t225 + 7.e-6*t815);
  p_output1[17]=-4.051285074010787e-7;
  p_output1[18]=t2392;
  p_output1[19]=t1366*t2005 - 1.*t1461*t2486;
  p_output1[20]=t1461*t2005 + t1366*t2486;
  p_output1[21]=t1888*(t1357*t2478 + t1508*t2490 + t2887) + t1357*(-1.*t1888*t2478 - 1.*t2490*t2575 + t2906);
  p_output1[22]=t2533*(t1345*t2474 + t2887 + t2931) + t1423*(-1.*t1880*t2474 + t2906 + t2948);
  p_output1[23]=t1756*(t1307*t2290 + t1278*t2303 + t2931) + (-1.*t1871*t2290 - 1.*t1843*t2303 + t2948)*t983;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121*t1940 + 0.15121*t1979 + t1756*(t1264*t2188 + t1112*t2275 + t2931) + (-1.*t1795*t2188 - 1.*t1837*t2275 + t2948)*t983;
  p_output1[34]=0.281211*t1890 - 0.038749*t1912 - 1.*t1642*t3081 + 7.e-6*(t1749*t3081 + t3100*t487) + 1.e-6*(4.e-6*(-1. + t1571) + t1675 + t629) + 4.e-6*(-1.*t1699*t3081 - 1.*t3100*t692) - 1.*t3100*t904;
  p_output1[35]=0.3000000410492048;
  p_output1[36]=t1888;
  p_output1[37]=t1366*t2533 - 1.*t1461*t2575;
  p_output1[38]=t1461*t2533 + t1366*t2575;
  p_output1[39]=t2392*(-1.*t1357*t2478 - 1.*t1508*t2490 + t3153) + t1357*(t2392*t2478 + t2486*t2490 + t3172);
  p_output1[40]=t2005*(-1.*t1345*t2474 + t3153 + t3191) + t1423*(t2387*t2474 + t3172 + t3200);
  p_output1[41]=t2368*(-1.*t1307*t2290 - 1.*t1278*t2303 + t3191) + (t1985*t2290 + t2001*t2303 + t3200)*t983;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.15121*t1795 + 0.15121*t1837 + t2368*(-1.*t1264*t2188 - 1.*t1112*t2275 + t3191) + (t1940*t2188 + t1979*t2275 + t3200)*t983;
  p_output1[52]=0.281211*t1699 - 0.038749*t1749 - 1.*t1898*t3307 + 7.e-6*(t1912*t3307 + t3328*t487) + 4.e-6*(-1.*t1890*t3307 - 1.*t3328*t692) + 1.e-6*(1. - 7.e-6*t1583 + 4.e-6*t2087 + t804) - 1.*t3328*t904;
  p_output1[53]=-2.826290000000002e-7;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
