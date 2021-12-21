/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:15:35 GMT+01:00
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
  double t715;
  double t740;
  double t761;
  double t823;
  double t33;
  double t835;
  double t947;
  double t979;
  double t555;
  double t868;
  double t1244;
  double t768;
  double t796;
  double t845;
  double t858;
  double t899;
  double t906;
  double t907;
  double t921;
  double t1362;
  double t1011;
  double t1064;
  double t1133;
  double t1175;
  double t1196;
  double t1223;
  double t1273;
  double t1278;
  double t1314;
  double t1380;
  double t1388;
  double t1411;
  double t1425;
  double t1438;
  double t1458;
  double t1463;
  double t1473;
  double t115;
  double t231;
  double t1577;
  double t1653;
  double t1590;
  double t1591;
  double t1611;
  double t1618;
  double t1629;
  double t1636;
  double t1637;
  double t1638;
  double t1640;
  double t1564;
  double t1666;
  double t1668;
  double t1702;
  double t1716;
  double t1718;
  double t1719;
  double t1730;
  double t1745;
  double t1747;
  double t1794;
  double t1368;
  double t1370;
  double t701;
  double t708;
  double t986;
  double t995;
  double t1490;
  double t1504;
  double t1558;
  double t1937;
  double t1945;
  double t1946;
  double t1951;
  double t1967;
  double t1981;
  double t1982;
  double t1983;
  double t1995;
  double t1998;
  double t1999;
  double t2074;
  double t2091;
  double t2125;
  double t2158;
  double t2177;
  double t2185;
  double t2192;
  double t2214;
  double t1850;
  double t2319;
  double t2322;
  double t2328;
  double t2359;
  double t2363;
  double t2367;
  double t2383;
  double t2385;
  double t2426;
  double t2430;
  double t2433;
  double t2442;
  double t2457;
  double t2462;
  double t2466;
  double t2478;
  double t1819;
  double t1840;
  double t1844;
  double t1651;
  double t1798;
  double t1804;
  double t933;
  double t1347;
  double t1477;
  double t1485;
  double t1813;
  double t1870;
  double t1872;
  double t2587;
  double t2257;
  double t2277;
  double t2291;
  double t2169;
  double t2217;
  double t2218;
  double t2619;
  double t1955;
  double t1984;
  double t2003;
  double t2025;
  double t2255;
  double t2292;
  double t2293;
  double t2530;
  double t2537;
  double t2543;
  double t2455;
  double t2494;
  double t2502;
  double t2358;
  double t2380;
  double t2404;
  double t2405;
  double t2511;
  double t2550;
  double t2558;
  double t2595;
  double t2605;
  double t2607;
  double t2620;
  double t2627;
  double t2634;
  double t2664;
  double t2666;
  double t2668;
  double t2672;
  double t2673;
  double t2678;
  double t2742;
  double t2750;
  double t2766;
  double t2785;
  double t2786;
  double t2804;
  double t2050;
  double t2300;
  double t2306;
  double t2933;
  double t2939;
  double t2940;
  double t2954;
  double t2958;
  double t2960;
  double t2961;
  double t2962;
  double t2963;
  double t2979;
  double t2988;
  double t3000;
  double t3020;
  double t3025;
  double t3027;
  double t3036;
  double t3037;
  double t3061;
  double t3063;
  double t3071;
  double t3072;
  double t3078;
  double t3096;
  double t3102;
  double t3103;
  double t3108;
  double t3129;
  double t3141;
  double t3143;
  double t3158;
  double t3163;
  double t3164;
  double t2900;
  double t2902;
  double t2907;
  double t2909;
  double t2918;
  double t2923;
  double t2925;
  double t2932;
  double t2934;
  double t2938;
  double t2998;
  double t3093;
  double t3173;
  double t3175;
  double t3183;
  double t3195;
  double t3204;
  double t3208;
  double t3234;
  double t3244;
  double t3245;
  double t3254;
  double t3257;
  double t3267;
  double t3268;
  double t1495;
  double t1905;
  double t1908;
  double t3285;
  double t3288;
  double t3289;
  double t3304;
  double t2903;
  double t3177;
  double t3270;
  double t3277;
  double t3317;
  double t3319;
  double t3338;
  double t3340;
  double t3347;
  double t3351;
  double t3353;
  double t3361;
  double t3363;
  double t3364;
  double t3372;
  double t3376;
  double t3378;
  double t3281;
  double t3310;
  double t3311;
  double t3370;
  double t3379;
  double t3381;
  double t3387;
  double t3401;
  double t3402;
  double t2421;
  double t2569;
  double t2572;
  double t3314;
  double t3417;
  double t3450;
  double t3481;
  double t3496;
  double t3520;
  double t3537;
  double t3542;
  double t3561;
  double t3571;
  double t3587;
  double t3596;
  double t3987;
  double t3990;
  double t3997;
  double t4000;
  double t4003;
  double t4005;
  double t4006;
  double t4010;
  double t4111;
  double t4121;
  double t4129;
  double t4131;
  double t4136;
  double t4139;
  double t4142;
  double t4147;
  double t3966;
  double t4228;
  double t4229;
  double t4231;
  double t4238;
  double t4241;
  double t4243;
  double t4245;
  double t4246;
  t715 = Cos(var1[14]);
  t740 = -1.*t715;
  t761 = 1. + t740;
  t823 = Sin(var1[14]);
  t33 = Cos(var1[13]);
  t835 = -7.e-6*t823;
  t947 = -1.*t33;
  t979 = 1. + t947;
  t555 = Sin(var1[13]);
  t868 = -7.e-6*t761;
  t1244 = -1.*t823;
  t768 = -6.5e-11*t761;
  t796 = 4.e-6*t761;
  t845 = t796 + t835;
  t858 = 4.e-6*t845;
  t899 = -4.e-6*t823;
  t906 = t868 + t899;
  t907 = -7.e-6*t906;
  t921 = 1. + t768 + t858 + t907;
  t1362 = 2.8e-11*t979;
  t1011 = 1.000000000049*t761;
  t1064 = -1. + t1011;
  t1133 = 4.e-6*t1064;
  t1175 = -1. + t715;
  t1196 = 4.e-6*t1175;
  t1223 = 2.8e-11*t761;
  t1273 = t1223 + t1244;
  t1278 = -7.e-6*t1273;
  t1314 = t1133 + t1196 + t1278 + t835;
  t1380 = -1.000000000016*t761;
  t1388 = 1. + t1380;
  t1411 = -7.e-6*t1388;
  t1425 = -2.8e-11*t761;
  t1438 = t1425 + t1244;
  t1458 = 4.e-6*t1438;
  t1463 = 4.e-6*t823;
  t1473 = t1411 + t868 + t1458 + t1463;
  t115 = -1. + t33;
  t231 = 4.e-6*t115;
  t1577 = -7.e-6*t979;
  t1653 = Sin(var1[12]);
  t1590 = 4.e-6*t555;
  t1591 = t1577 + t1590;
  t1611 = t1591*t921;
  t1618 = t1362 + t555;
  t1629 = t1618*t1314;
  t1636 = -1.000000000016*t979;
  t1637 = 1. + t1636;
  t1638 = t1637*t1473;
  t1640 = t1611 + t1629 + t1638;
  t1564 = Cos(var1[12]);
  t1666 = -6.5e-11*t979;
  t1668 = 1. + t1666;
  t1702 = t1668*t921;
  t1716 = 7.e-6*t555;
  t1718 = t231 + t1716;
  t1719 = t1718*t1314;
  t1730 = -4.e-6*t555;
  t1745 = t1577 + t1730;
  t1747 = t1745*t1473;
  t1794 = t1702 + t1719 + t1747;
  t1368 = -1.*t555;
  t1370 = t1362 + t1368;
  t701 = -7.e-6*t555;
  t708 = t231 + t701;
  t986 = -1.000000000049*t979;
  t995 = 1. + t986;
  t1490 = Sin(var1[4]);
  t1504 = Cos(var1[4]);
  t1558 = Cos(var1[5]);
  t1937 = 1.000000000016*t761;
  t1945 = t868 + t1463;
  t1946 = -7.e-6*t1945;
  t1951 = -1. + t1937 + t1946;
  t1967 = 1. + t768;
  t1981 = -7.e-6*t1967;
  t1982 = 7.e-6*t761;
  t1983 = t1981 + t1982 + t1463;
  t1995 = t1196 + t835;
  t1998 = -7.e-6*t1995;
  t1999 = t1425 + t1998 + t823;
  t2074 = t1745*t1951;
  t2091 = t1668*t1983;
  t2125 = t1718*t1999;
  t2158 = t2074 + t2091 + t2125;
  t2177 = t1637*t1951;
  t2185 = t1591*t1983;
  t2192 = t1618*t1999;
  t2214 = t2177 + t2185 + t2192;
  t1850 = Sin(var1[5]);
  t2319 = -1.000000000049*t761;
  t2322 = 4.e-6*t1995;
  t2328 = 1. + t2319 + t2322;
  t2359 = 4.e-6*t1967;
  t2363 = 7.e-6*t823;
  t2367 = t2359 + t1196 + t2363;
  t2383 = 4.e-6*t1945;
  t2385 = t1223 + t2383 + t823;
  t2426 = t1618*t2328;
  t2430 = t1591*t2367;
  t2433 = t1637*t2385;
  t2442 = t2426 + t2430 + t2433;
  t2457 = t1718*t2328;
  t2462 = t1668*t2367;
  t2466 = t1745*t2385;
  t2478 = t2457 + t2462 + t2466;
  t1819 = t1653*t1640;
  t1840 = t1564*t1794;
  t1844 = t1819 + t1840;
  t1651 = t1564*t1640;
  t1798 = -1.*t1653*t1794;
  t1804 = t1651 + t1798;
  t933 = t708*t921;
  t1347 = t995*t1314;
  t1477 = t1370*t1473;
  t1485 = t933 + t1347 + t1477;
  t1813 = t1558*t1804;
  t1870 = -1.*t1844*t1850;
  t1872 = t1813 + t1870;
  t2587 = Cos(var1[3]);
  t2257 = t1564*t2158;
  t2277 = t1653*t2214;
  t2291 = t2257 + t2277;
  t2169 = -1.*t1653*t2158;
  t2217 = t1564*t2214;
  t2218 = t2169 + t2217;
  t2619 = Sin(var1[3]);
  t1955 = t1370*t1951;
  t1984 = t708*t1983;
  t2003 = t995*t1999;
  t2025 = t1955 + t1984 + t2003;
  t2255 = t1558*t2218;
  t2292 = -1.*t2291*t1850;
  t2293 = t2255 + t2292;
  t2530 = t1653*t2442;
  t2537 = t1564*t2478;
  t2543 = t2530 + t2537;
  t2455 = t1564*t2442;
  t2494 = -1.*t1653*t2478;
  t2502 = t2455 + t2494;
  t2358 = t995*t2328;
  t2380 = t708*t2367;
  t2404 = t1370*t2385;
  t2405 = t2358 + t2380 + t2404;
  t2511 = t1558*t2502;
  t2550 = -1.*t2543*t1850;
  t2558 = t2511 + t2550;
  t2595 = t1558*t1844;
  t2605 = t1804*t1850;
  t2607 = t2595 + t2605;
  t2620 = t1504*t1485;
  t2627 = -1.*t1490*t1872;
  t2634 = t2620 + t2627;
  t2664 = t1558*t2291;
  t2666 = t2218*t1850;
  t2668 = t2664 + t2666;
  t2672 = t1504*t2025;
  t2673 = -1.*t1490*t2293;
  t2678 = t2672 + t2673;
  t2742 = t1558*t2543;
  t2750 = t2502*t1850;
  t2766 = t2742 + t2750;
  t2785 = t1504*t2405;
  t2786 = -1.*t1490*t2558;
  t2804 = t2785 + t2786;
  t2050 = t2025*t1490;
  t2300 = t1504*t2293;
  t2306 = t2050 + t2300;
  t2933 = 7.e-6*t979;
  t2939 = -2.598649999999999e-7*var1[14];
  t2940 = 0.148705*t1967;
  t2954 = -2.3905277499999995e-16*t761;
  t2958 = -0.038922999986*t845;
  t2960 = -0.80315*t906;
  t2961 = t1982 + t1463;
  t2962 = -0.503149000008*t2961;
  t2963 = t1196 + t2363;
  t2979 = -0.038924*t2963;
  t2988 = t2939 + t2940 + t2954 + t2958 + t2960 + t2962 + t2979;
  t3000 = 1.0394599999999997e-12*var1[14];
  t3020 = 1. + t2319;
  t3025 = -0.038924*t3020;
  t3027 = -0.03892299998790722*t761;
  t3036 = -0.80315*t1273;
  t3037 = 0.148705*t1995;
  t3061 = t796 + t2363;
  t3063 = -3.6777349999999994e-6*t3061;
  t3071 = t1425 + t823;
  t3072 = -0.503149000008*t3071;
  t3078 = t3000 + t3025 + t3027 + t3036 + t3037 + t3063 + t3072;
  t3096 = 1.8190549999999993e-12*var1[14];
  t3102 = -0.80315*t1388;
  t3103 = -0.5031490000160505*t761;
  t3108 = -0.038922999986*t1438;
  t3129 = t1982 + t899;
  t3141 = -3.6777349999999994e-6*t3129;
  t3143 = 0.148705*t1945;
  t3158 = t1223 + t823;
  t3163 = -0.038924*t3158;
  t3164 = t3096 + t3102 + t3103 + t3108 + t3141 + t3143 + t3163;
  t2900 = -1.*t1564;
  t2902 = 1. + t2900;
  t2907 = 0.15121*t1653;
  t2909 = 1.0248489999999998e-12*var1[13];
  t2918 = -0.28120900000849935*t979;
  t2923 = -2.8e-11*t979;
  t2925 = t2923 + t1368;
  t2932 = -0.038748999993*t2925;
  t2934 = t2933 + t1730;
  t2938 = -2.123459e-6*t2934;
  t2998 = t1591*t2988;
  t3093 = t1618*t3078;
  t3173 = t1637*t3164;
  t3175 = t2909 + t2918 + t2932 + t2938 + t2998 + t3093 + t3173;
  t3183 = -1.4640699999999997e-7*var1[13];
  t3195 = -1.38024835e-16*t979;
  t3204 = 4.e-6*t979;
  t3208 = t3204 + t701;
  t3234 = -0.038748999993*t3208;
  t3244 = t2933 + t1590;
  t3245 = -0.281209000004*t3244;
  t3254 = t1668*t2988;
  t3257 = t1718*t3078;
  t3267 = t1745*t3164;
  t3268 = t3183 + t3195 + t3234 + t3245 + t3254 + t3257 + t3267;
  t1495 = t1485*t1490;
  t1905 = t1504*t1872;
  t1908 = t1495 + t1905;
  t3285 = -0.15121*t2902;
  t3288 = t1564*t3175;
  t3289 = -1.*t1653*t3268;
  t3304 = t3285 + t2907 + t3288 + t3289;
  t2903 = 0.15121*t2902;
  t3177 = t1653*t3175;
  t3270 = t1564*t3268;
  t3277 = t2903 + t2907 + t3177 + t3270;
  t3317 = 5.856279999999999e-13*var1[13];
  t3319 = -0.0387489999948987*t979;
  t3338 = t3204 + t1716;
  t3340 = -2.123459e-6*t3338;
  t3347 = t2923 + t555;
  t3351 = -0.281209000004*t3347;
  t3353 = t708*t2988;
  t3361 = t995*t3078;
  t3363 = t1370*t3164;
  t3364 = t3317 + t3319 + t3340 + t3351 + t3353 + t3361 + t3363;
  t3372 = t1558*t3304;
  t3376 = -1.*t3277*t1850;
  t3378 = t3372 + t3376;
  t3281 = t1558*t3277;
  t3310 = t3304*t1850;
  t3311 = t3281 + t3310;
  t3370 = t3364*t1490;
  t3379 = t1504*t3378;
  t3381 = t3370 + t3379;
  t3387 = t1504*t3364;
  t3401 = -1.*t1490*t3378;
  t3402 = t3387 + t3401;
  t2421 = t2405*t1490;
  t2569 = t1504*t2558;
  t2572 = t2421 + t2569;
  t3314 = -1.*t2607*t3311;
  t3417 = t2668*t3311;
  t3450 = t2607*t3311;
  t3481 = -1.*t2766*t3311;
  t3496 = -1.*t2668*t3311;
  t3520 = t2766*t3311;
  t3537 = -1.*t1485*t3364;
  t3542 = t2025*t3364;
  t3561 = t1485*t3364;
  t3571 = -1.*t2405*t3364;
  t3587 = -1.*t2025*t3364;
  t3596 = t2405*t3364;
  t3987 = t2988*t1983;
  t3990 = t1999*t3078;
  t3997 = t1951*t3164;
  t4000 = t3987 + t3990 + t3997;
  t4003 = -1.*t921*t2988;
  t4005 = -1.*t1314*t3078;
  t4006 = -1.*t1473*t3164;
  t4010 = t4003 + t4005 + t4006;
  t4111 = t921*t2988;
  t4121 = t1314*t3078;
  t4129 = t1473*t3164;
  t4131 = t4111 + t4121 + t4129;
  t4136 = -1.*t2988*t2367;
  t4139 = -1.*t2328*t3078;
  t4142 = -1.*t2385*t3164;
  t4147 = t4136 + t4139 + t4142;
  t3966 = 6.5e-11*t761;
  t4228 = -1.*t2988*t1983;
  t4229 = -1.*t1999*t3078;
  t4231 = -1.*t1951*t3164;
  t4238 = t4228 + t4229 + t4231;
  t4241 = t2988*t2367;
  t4243 = t2328*t3078;
  t4245 = t2385*t3164;
  t4246 = t4241 + t4243 + t4245;
  p_output1[0]=t2306*var2[0] + t2572*var2[1] + t1908*var2[2];
  p_output1[1]=(t2587*t2668 - 1.*t2619*t2678)*var2[0] + (t2587*t2766 - 1.*t2619*t2804)*var2[1] + (t2587*t2607 - 1.*t2619*t2634)*var2[2];
  p_output1[2]=(t2619*t2668 + t2587*t2678)*var2[0] + (t2619*t2766 + t2587*t2804)*var2[1] + (t2607*t2619 + t2587*t2634)*var2[2];
  p_output1[3]=(t2572*(t1908*t3381 + t2634*t3402 + t3450) + t1908*(-1.*t2572*t3381 - 1.*t2804*t3402 + t3481))*var2[0] + (t2306*(t3314 - 1.*t1908*t3381 - 1.*t2634*t3402) + t1908*(t2306*t3381 + t2678*t3402 + t3417))*var2[1] + (t2572*(-1.*t2306*t3381 - 1.*t2678*t3402 + t3496) + t2306*(t2572*t3381 + t2804*t3402 + t3520))*var2[2];
  p_output1[4]=(t2766*(t1872*t3378 + t3450 + t3561) + t2607*(-1.*t2558*t3378 + t3481 + t3571))*var2[0] + (t2668*(t3314 - 1.*t1872*t3378 + t3537) + t2607*(t2293*t3378 + t3417 + t3542))*var2[1] + (t2766*(-1.*t2293*t3378 + t3496 + t3587) + t2668*(t2558*t3378 + t3520 + t3596))*var2[2];
  p_output1[5]=(t2405*(t1844*t3277 + t1804*t3304 + t3561) + t1485*(-1.*t2543*t3277 - 1.*t2502*t3304 + t3571))*var2[0] + (t2025*(-1.*t1844*t3277 - 1.*t1804*t3304 + t3537) + t1485*(t2291*t3277 + t2218*t3304 + t3542))*var2[1] + (t2405*(-1.*t2291*t3277 - 1.*t2218*t3304 + t3587) + t2025*(t2543*t3277 + t2502*t3304 + t3596))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t2158 + 0.15121*t2214 + t2405*(t1640*t3175 + t1794*t3268 + t3561) + t1485*(-1.*t2442*t3175 - 1.*t2478*t3268 + t3571))*var2[0] + (0.15121*t2442 + 0.15121*t2478 + t2025*(-1.*t1640*t3175 - 1.*t1794*t3268 + t3537) + t1485*(t2214*t3175 + t2158*t3268 + t3542))*var2[1] + (0.15121*t1640 + 0.15121*t1794 + t2405*(-1.*t2214*t3175 - 1.*t2158*t3268 + t3587) + t2025*(t2442*t3175 + t2478*t3268 + t3596))*var2[2];
  p_output1[13]=(0.038749*t1951 - 0.281209*t1999 + t2367*t4131 + 4.e-6*(-1.*t2328*t4131 - 1.*t1314*t4147) - 7.e-6*(t2385*t4131 + t1473*t4147) + 1.e-6*(7.e-6*t1967 + t868 + t899) + t4147*t921)*var2[0] + (-0.281209*t2328 + 0.038749*t2385 + t1983*t4010 - 7.e-6*(t1473*t4000 + t1951*t4010) + 4.e-6*(-1.*t1314*t4000 - 1.*t1999*t4010) + 1.e-6*(4.e-6*(-1. + t3966) + t796 + t835) + t4000*t921)*var2[1] + (-0.281209*t1314 + 0.038749*t1473 + t2367*t4238 + t1983*t4246 - 7.e-6*(t2385*t4238 + t1951*t4246) + 4.e-6*(-1.*t2328*t4238 - 1.*t1999*t4246) + 1.e-6*(-1. + 4.e-6*t2963 + t3966 + 7.e-6*t906))*var2[2];
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

#include "fRlFoot_vec_TrotStance1.hh"

namespace TrotStance1
{

void fRlFoot_vec_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
