/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:26:33 GMT+01:00
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
  double t13;
  double t14;
  double t15;
  double t18;
  double t5;
  double t22;
  double t590;
  double t595;
  double t8;
  double t389;
  double t790;
  double t16;
  double t17;
  double t259;
  double t381;
  double t436;
  double t453;
  double t473;
  double t529;
  double t878;
  double t686;
  double t692;
  double t726;
  double t759;
  double t783;
  double t787;
  double t796;
  double t838;
  double t847;
  double t890;
  double t905;
  double t916;
  double t931;
  double t940;
  double t944;
  double t946;
  double t957;
  double t6;
  double t7;
  double t1063;
  double t1164;
  double t1069;
  double t1117;
  double t1129;
  double t1131;
  double t1151;
  double t1154;
  double t1155;
  double t1156;
  double t1157;
  double t1046;
  double t1165;
  double t1168;
  double t1171;
  double t1175;
  double t1181;
  double t1182;
  double t1185;
  double t1186;
  double t1194;
  double t1200;
  double t884;
  double t885;
  double t9;
  double t10;
  double t645;
  double t653;
  double t1011;
  double t1019;
  double t1025;
  double t1254;
  double t1260;
  double t1261;
  double t1309;
  double t1337;
  double t1338;
  double t1398;
  double t1420;
  double t1460;
  double t1466;
  double t1470;
  double t1517;
  double t1524;
  double t1525;
  double t1529;
  double t1559;
  double t1583;
  double t1587;
  double t1596;
  double t1229;
  double t1724;
  double t1730;
  double t1743;
  double t1753;
  double t1768;
  double t1772;
  double t1776;
  double t1778;
  double t1788;
  double t1792;
  double t1793;
  double t1794;
  double t1811;
  double t1813;
  double t1835;
  double t1842;
  double t1213;
  double t1214;
  double t1215;
  double t1162;
  double t1201;
  double t1210;
  double t534;
  double t868;
  double t960;
  double t982;
  double t1211;
  double t1234;
  double t1235;
  double t1906;
  double t1635;
  double t1637;
  double t1670;
  double t1548;
  double t1605;
  double t1622;
  double t1955;
  double t1310;
  double t1435;
  double t1486;
  double t1488;
  double t1633;
  double t1702;
  double t1712;
  double t1859;
  double t1864;
  double t1868;
  double t1795;
  double t1854;
  double t1855;
  double t1745;
  double t1775;
  double t1780;
  double t1782;
  double t1856;
  double t1873;
  double t1880;
  double t1914;
  double t1932;
  double t1934;
  double t1959;
  double t1963;
  double t1964;
  double t1975;
  double t1977;
  double t1978;
  double t1982;
  double t1983;
  double t1985;
  double t1994;
  double t1996;
  double t1998;
  double t2002;
  double t2004;
  double t2006;
  double t1510;
  double t1714;
  double t1715;
  double t2080;
  double t2083;
  double t2084;
  double t2088;
  double t2089;
  double t2092;
  double t2096;
  double t2097;
  double t2098;
  double t2099;
  double t2100;
  double t2104;
  double t2105;
  double t2106;
  double t2107;
  double t2110;
  double t2111;
  double t2116;
  double t2117;
  double t2118;
  double t2119;
  double t2120;
  double t2135;
  double t2136;
  double t2137;
  double t2139;
  double t2141;
  double t2142;
  double t2155;
  double t2158;
  double t2160;
  double t2164;
  double t2063;
  double t2064;
  double t2068;
  double t2069;
  double t2070;
  double t2073;
  double t2074;
  double t2079;
  double t2081;
  double t2082;
  double t2101;
  double t2121;
  double t2171;
  double t2172;
  double t2181;
  double t2185;
  double t2188;
  double t2194;
  double t2199;
  double t2201;
  double t2205;
  double t2208;
  double t2214;
  double t2215;
  double t2216;
  double t1014;
  double t1236;
  double t1241;
  double t2222;
  double t2224;
  double t2225;
  double t2226;
  double t2067;
  double t2179;
  double t2217;
  double t2218;
  double t2243;
  double t2244;
  double t2246;
  double t2248;
  double t2249;
  double t2250;
  double t2256;
  double t2258;
  double t2262;
  double t2265;
  double t2269;
  double t2270;
  double t2274;
  double t2220;
  double t2234;
  double t2236;
  double t2268;
  double t2275;
  double t2279;
  double t2286;
  double t2287;
  double t2288;
  double t1783;
  double t1886;
  double t1887;
  double t2239;
  double t2305;
  double t2342;
  double t2358;
  double t2376;
  double t2388;
  double t2413;
  double t2424;
  double t2435;
  double t2444;
  double t2454;
  double t2459;
  double t2669;
  double t2673;
  double t2676;
  double t2680;
  double t2686;
  double t2687;
  double t2689;
  double t2690;
  double t2722;
  double t2725;
  double t2749;
  double t2750;
  double t2766;
  double t2777;
  double t2790;
  double t2799;
  double t2640;
  double t2852;
  double t2855;
  double t2856;
  double t2857;
  double t2860;
  double t2861;
  double t2864;
  double t2868;
  t13 = Cos(var1[14]);
  t14 = -1.*t13;
  t15 = 1. + t14;
  t18 = Sin(var1[14]);
  t5 = Cos(var1[13]);
  t22 = -7.e-6*t18;
  t590 = -1.*t5;
  t595 = 1. + t590;
  t8 = Sin(var1[13]);
  t389 = -7.e-6*t15;
  t790 = -1.*t18;
  t16 = -6.5e-11*t15;
  t17 = 4.e-6*t15;
  t259 = t17 + t22;
  t381 = 4.e-6*t259;
  t436 = -4.e-6*t18;
  t453 = t389 + t436;
  t473 = -7.e-6*t453;
  t529 = 1. + t16 + t381 + t473;
  t878 = 2.8e-11*t595;
  t686 = 1.000000000049*t15;
  t692 = -1. + t686;
  t726 = 4.e-6*t692;
  t759 = -1. + t13;
  t783 = 4.e-6*t759;
  t787 = 2.8e-11*t15;
  t796 = t787 + t790;
  t838 = -7.e-6*t796;
  t847 = t726 + t783 + t838 + t22;
  t890 = -1.000000000016*t15;
  t905 = 1. + t890;
  t916 = -7.e-6*t905;
  t931 = -2.8e-11*t15;
  t940 = t931 + t790;
  t944 = 4.e-6*t940;
  t946 = 4.e-6*t18;
  t957 = t916 + t389 + t944 + t946;
  t6 = -1. + t5;
  t7 = 4.e-6*t6;
  t1063 = -7.e-6*t595;
  t1164 = Sin(var1[12]);
  t1069 = 4.e-6*t8;
  t1117 = t1063 + t1069;
  t1129 = t1117*t529;
  t1131 = t878 + t8;
  t1151 = t1131*t847;
  t1154 = -1.000000000016*t595;
  t1155 = 1. + t1154;
  t1156 = t1155*t957;
  t1157 = t1129 + t1151 + t1156;
  t1046 = Cos(var1[12]);
  t1165 = -6.5e-11*t595;
  t1168 = 1. + t1165;
  t1171 = t1168*t529;
  t1175 = 7.e-6*t8;
  t1181 = t7 + t1175;
  t1182 = t1181*t847;
  t1185 = -4.e-6*t8;
  t1186 = t1063 + t1185;
  t1194 = t1186*t957;
  t1200 = t1171 + t1182 + t1194;
  t884 = -1.*t8;
  t885 = t878 + t884;
  t9 = -7.e-6*t8;
  t10 = t7 + t9;
  t645 = -1.000000000049*t595;
  t653 = 1. + t645;
  t1011 = Sin(var1[4]);
  t1019 = Cos(var1[4]);
  t1025 = Cos(var1[5]);
  t1254 = 1.000000000016*t15;
  t1260 = t389 + t946;
  t1261 = -7.e-6*t1260;
  t1309 = -1. + t1254 + t1261;
  t1337 = 1. + t16;
  t1338 = -7.e-6*t1337;
  t1398 = 7.e-6*t15;
  t1420 = t1338 + t1398 + t946;
  t1460 = t783 + t22;
  t1466 = -7.e-6*t1460;
  t1470 = t931 + t1466 + t18;
  t1517 = t1186*t1309;
  t1524 = t1168*t1420;
  t1525 = t1181*t1470;
  t1529 = t1517 + t1524 + t1525;
  t1559 = t1155*t1309;
  t1583 = t1117*t1420;
  t1587 = t1131*t1470;
  t1596 = t1559 + t1583 + t1587;
  t1229 = Sin(var1[5]);
  t1724 = -1.000000000049*t15;
  t1730 = 4.e-6*t1460;
  t1743 = 1. + t1724 + t1730;
  t1753 = 4.e-6*t1337;
  t1768 = 7.e-6*t18;
  t1772 = t1753 + t783 + t1768;
  t1776 = 4.e-6*t1260;
  t1778 = t787 + t1776 + t18;
  t1788 = t1131*t1743;
  t1792 = t1117*t1772;
  t1793 = t1155*t1778;
  t1794 = t1788 + t1792 + t1793;
  t1811 = t1181*t1743;
  t1813 = t1168*t1772;
  t1835 = t1186*t1778;
  t1842 = t1811 + t1813 + t1835;
  t1213 = t1164*t1157;
  t1214 = t1046*t1200;
  t1215 = t1213 + t1214;
  t1162 = t1046*t1157;
  t1201 = -1.*t1164*t1200;
  t1210 = t1162 + t1201;
  t534 = t10*t529;
  t868 = t653*t847;
  t960 = t885*t957;
  t982 = t534 + t868 + t960;
  t1211 = t1025*t1210;
  t1234 = -1.*t1215*t1229;
  t1235 = t1211 + t1234;
  t1906 = Cos(var1[3]);
  t1635 = t1046*t1529;
  t1637 = t1164*t1596;
  t1670 = t1635 + t1637;
  t1548 = -1.*t1164*t1529;
  t1605 = t1046*t1596;
  t1622 = t1548 + t1605;
  t1955 = Sin(var1[3]);
  t1310 = t885*t1309;
  t1435 = t10*t1420;
  t1486 = t653*t1470;
  t1488 = t1310 + t1435 + t1486;
  t1633 = t1025*t1622;
  t1702 = -1.*t1670*t1229;
  t1712 = t1633 + t1702;
  t1859 = t1164*t1794;
  t1864 = t1046*t1842;
  t1868 = t1859 + t1864;
  t1795 = t1046*t1794;
  t1854 = -1.*t1164*t1842;
  t1855 = t1795 + t1854;
  t1745 = t653*t1743;
  t1775 = t10*t1772;
  t1780 = t885*t1778;
  t1782 = t1745 + t1775 + t1780;
  t1856 = t1025*t1855;
  t1873 = -1.*t1868*t1229;
  t1880 = t1856 + t1873;
  t1914 = t1025*t1215;
  t1932 = t1210*t1229;
  t1934 = t1914 + t1932;
  t1959 = t1019*t982;
  t1963 = -1.*t1011*t1235;
  t1964 = t1959 + t1963;
  t1975 = t1025*t1670;
  t1977 = t1622*t1229;
  t1978 = t1975 + t1977;
  t1982 = t1019*t1488;
  t1983 = -1.*t1011*t1712;
  t1985 = t1982 + t1983;
  t1994 = t1025*t1868;
  t1996 = t1855*t1229;
  t1998 = t1994 + t1996;
  t2002 = t1019*t1782;
  t2004 = -1.*t1011*t1880;
  t2006 = t2002 + t2004;
  t1510 = t1488*t1011;
  t1714 = t1019*t1712;
  t1715 = t1510 + t1714;
  t2080 = 7.e-6*t595;
  t2083 = -2.598649999999999e-7*var1[14];
  t2084 = 0.148705*t1337;
  t2088 = -2.3905277499999995e-16*t15;
  t2089 = -0.038922999986*t259;
  t2092 = -0.80315*t453;
  t2096 = t1398 + t946;
  t2097 = -0.503149000008*t2096;
  t2098 = t783 + t1768;
  t2099 = -0.038924*t2098;
  t2100 = t2083 + t2084 + t2088 + t2089 + t2092 + t2097 + t2099;
  t2104 = 1.0394599999999997e-12*var1[14];
  t2105 = 1. + t1724;
  t2106 = -0.038924*t2105;
  t2107 = -0.03892299998790722*t15;
  t2110 = -0.80315*t796;
  t2111 = 0.148705*t1460;
  t2116 = t17 + t1768;
  t2117 = -3.6777349999999994e-6*t2116;
  t2118 = t931 + t18;
  t2119 = -0.503149000008*t2118;
  t2120 = t2104 + t2106 + t2107 + t2110 + t2111 + t2117 + t2119;
  t2135 = 1.8190549999999993e-12*var1[14];
  t2136 = -0.80315*t905;
  t2137 = -0.5031490000160505*t15;
  t2139 = -0.038922999986*t940;
  t2141 = t1398 + t436;
  t2142 = -3.6777349999999994e-6*t2141;
  t2155 = 0.148705*t1260;
  t2158 = t787 + t18;
  t2160 = -0.038924*t2158;
  t2164 = t2135 + t2136 + t2137 + t2139 + t2142 + t2155 + t2160;
  t2063 = -1.*t1046;
  t2064 = 1. + t2063;
  t2068 = 0.15121*t1164;
  t2069 = 1.0248489999999998e-12*var1[13];
  t2070 = -0.28120900000849935*t595;
  t2073 = -2.8e-11*t595;
  t2074 = t2073 + t884;
  t2079 = -0.038748999993*t2074;
  t2081 = t2080 + t1185;
  t2082 = -2.123459e-6*t2081;
  t2101 = t1117*t2100;
  t2121 = t1131*t2120;
  t2171 = t1155*t2164;
  t2172 = t2069 + t2070 + t2079 + t2082 + t2101 + t2121 + t2171;
  t2181 = -1.4640699999999997e-7*var1[13];
  t2185 = -1.38024835e-16*t595;
  t2188 = 4.e-6*t595;
  t2194 = t2188 + t9;
  t2199 = -0.038748999993*t2194;
  t2201 = t2080 + t1069;
  t2205 = -0.281209000004*t2201;
  t2208 = t1168*t2100;
  t2214 = t1181*t2120;
  t2215 = t1186*t2164;
  t2216 = t2181 + t2185 + t2199 + t2205 + t2208 + t2214 + t2215;
  t1014 = t982*t1011;
  t1236 = t1019*t1235;
  t1241 = t1014 + t1236;
  t2222 = -0.15121*t2064;
  t2224 = t1046*t2172;
  t2225 = -1.*t1164*t2216;
  t2226 = t2222 + t2068 + t2224 + t2225;
  t2067 = 0.15121*t2064;
  t2179 = t1164*t2172;
  t2217 = t1046*t2216;
  t2218 = t2067 + t2068 + t2179 + t2217;
  t2243 = 5.856279999999999e-13*var1[13];
  t2244 = -0.0387489999948987*t595;
  t2246 = t2188 + t1175;
  t2248 = -2.123459e-6*t2246;
  t2249 = t2073 + t8;
  t2250 = -0.281209000004*t2249;
  t2256 = t10*t2100;
  t2258 = t653*t2120;
  t2262 = t885*t2164;
  t2265 = t2243 + t2244 + t2248 + t2250 + t2256 + t2258 + t2262;
  t2269 = t1025*t2226;
  t2270 = -1.*t2218*t1229;
  t2274 = t2269 + t2270;
  t2220 = t1025*t2218;
  t2234 = t2226*t1229;
  t2236 = t2220 + t2234;
  t2268 = t2265*t1011;
  t2275 = t1019*t2274;
  t2279 = t2268 + t2275;
  t2286 = t1019*t2265;
  t2287 = -1.*t1011*t2274;
  t2288 = t2286 + t2287;
  t1783 = t1782*t1011;
  t1886 = t1019*t1880;
  t1887 = t1783 + t1886;
  t2239 = -1.*t1934*t2236;
  t2305 = t1978*t2236;
  t2342 = t1934*t2236;
  t2358 = -1.*t1998*t2236;
  t2376 = -1.*t1978*t2236;
  t2388 = t1998*t2236;
  t2413 = -1.*t982*t2265;
  t2424 = t1488*t2265;
  t2435 = t982*t2265;
  t2444 = -1.*t1782*t2265;
  t2454 = -1.*t1488*t2265;
  t2459 = t1782*t2265;
  t2669 = t2100*t1420;
  t2673 = t1470*t2120;
  t2676 = t1309*t2164;
  t2680 = t2669 + t2673 + t2676;
  t2686 = -1.*t529*t2100;
  t2687 = -1.*t847*t2120;
  t2689 = -1.*t957*t2164;
  t2690 = t2686 + t2687 + t2689;
  t2722 = t529*t2100;
  t2725 = t847*t2120;
  t2749 = t957*t2164;
  t2750 = t2722 + t2725 + t2749;
  t2766 = -1.*t2100*t1772;
  t2777 = -1.*t1743*t2120;
  t2790 = -1.*t1778*t2164;
  t2799 = t2766 + t2777 + t2790;
  t2640 = 6.5e-11*t15;
  t2852 = -1.*t2100*t1420;
  t2855 = -1.*t1470*t2120;
  t2856 = -1.*t1309*t2164;
  t2857 = t2852 + t2855 + t2856;
  t2860 = t2100*t1772;
  t2861 = t1743*t2120;
  t2864 = t1778*t2164;
  t2868 = t2860 + t2861 + t2864;
  p_output1[0]=t1715*var2[0] + t1887*var2[1] + t1241*var2[2];
  p_output1[1]=(t1906*t1978 - 1.*t1955*t1985)*var2[0] + (t1906*t1998 - 1.*t1955*t2006)*var2[1] + (t1906*t1934 - 1.*t1955*t1964)*var2[2];
  p_output1[2]=(t1955*t1978 + t1906*t1985)*var2[0] + (t1955*t1998 + t1906*t2006)*var2[1] + (t1934*t1955 + t1906*t1964)*var2[2];
  p_output1[3]=(t1887*(t1241*t2279 + t1964*t2288 + t2342) + t1241*(-1.*t1887*t2279 - 1.*t2006*t2288 + t2358))*var2[0] + (t1715*(t2239 - 1.*t1241*t2279 - 1.*t1964*t2288) + t1241*(t1715*t2279 + t1985*t2288 + t2305))*var2[1] + (t1887*(-1.*t1715*t2279 - 1.*t1985*t2288 + t2376) + t1715*(t1887*t2279 + t2006*t2288 + t2388))*var2[2];
  p_output1[4]=(t1998*(t1235*t2274 + t2342 + t2435) + t1934*(-1.*t1880*t2274 + t2358 + t2444))*var2[0] + (t1978*(t2239 - 1.*t1235*t2274 + t2413) + t1934*(t1712*t2274 + t2305 + t2424))*var2[1] + (t1998*(-1.*t1712*t2274 + t2376 + t2454) + t1978*(t1880*t2274 + t2388 + t2459))*var2[2];
  p_output1[5]=(t1782*(t1215*t2218 + t1210*t2226 + t2435) + (-1.*t1868*t2218 - 1.*t1855*t2226 + t2444)*t982)*var2[0] + (t1488*(-1.*t1215*t2218 - 1.*t1210*t2226 + t2413) + (t1670*t2218 + t1622*t2226 + t2424)*t982)*var2[1] + (t1782*(-1.*t1670*t2218 - 1.*t1622*t2226 + t2454) + t1488*(t1868*t2218 + t1855*t2226 + t2459))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t1529 + 0.15121*t1596 + t1782*(t1157*t2172 + t1200*t2216 + t2435) + (-1.*t1794*t2172 - 1.*t1842*t2216 + t2444)*t982)*var2[0] + (0.15121*t1794 + 0.15121*t1842 + t1488*(-1.*t1157*t2172 - 1.*t1200*t2216 + t2413) + (t1596*t2172 + t1529*t2216 + t2424)*t982)*var2[1] + (0.15121*t1157 + 0.15121*t1200 + t1782*(-1.*t1596*t2172 - 1.*t1529*t2216 + t2454) + t1488*(t1794*t2172 + t1842*t2216 + t2459))*var2[2];
  p_output1[13]=(0.038749*t1309 - 0.281209*t1470 + t1772*t2750 + 1.e-6*(7.e-6*t1337 + t389 + t436) + t2799*t529 + 4.e-6*(-1.*t1743*t2750 - 1.*t2799*t847) - 7.e-6*(t1778*t2750 + t2799*t957))*var2[0] + (-0.281209*t1743 + 0.038749*t1778 + 1.e-6*(t17 + t22 + 4.e-6*(-1. + t2640)) + t1420*t2690 + t2680*t529 + 4.e-6*(-1.*t1470*t2690 - 1.*t2680*t847) - 7.e-6*(t1309*t2690 + t2680*t957))*var2[1] + (t1772*t2857 + t1420*t2868 - 7.e-6*(t1778*t2857 + t1309*t2868) + 4.e-6*(-1.*t1743*t2857 - 1.*t1470*t2868) + 1.e-6*(-1. + 4.e-6*t2098 + t2640 + 7.e-6*t453) - 0.281209*t847 + 0.038749*t957)*var2[2];
  p_output1[14]=4.0519653002457196e-7*var2[0] + 0.29999995910920463*var2[1] - 2.5986500000000035e-7*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalStance1.hh"

namespace DiagonalStance1
{

void fRlFoot_vec_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
