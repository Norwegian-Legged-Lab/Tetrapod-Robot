/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:29 GMT+02:00
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
  double t1171;
  double t1133;
  double t1134;
  double t1172;
  double t1135;
  double t1204;
  double t1255;
  double t569;
  double t1266;
  double t1269;
  double t1270;
  double t1104;
  double t1278;
  double t1291;
  double t1263;
  double t1283;
  double t1288;
  double t548;
  double t1308;
  double t1368;
  double t1413;
  double t1465;
  double t1466;
  double t1469;
  double t1476;
  double t1477;
  double t1479;
  double t1500;
  double t1502;
  double t1505;
  double t1527;
  double t1528;
  double t1544;
  double t1523;
  double t1556;
  double t1561;
  double t1580;
  double t1582;
  double t1584;
  double t1610;
  double t1611;
  double t1616;
  double t1658;
  double t1661;
  double t1663;
  double t1705;
  double t1717;
  double t1730;
  double t1734;
  double t1738;
  double t1740;
  double t1741;
  double t1744;
  double t1745;
  double t1701;
  double t1732;
  double t1799;
  double t1801;
  double t1692;
  double t1805;
  double t1822;
  double t1830;
  double t1832;
  double t1833;
  double t1834;
  double t1836;
  double t1837;
  double t1839;
  double t1840;
  double t1844;
  double t1851;
  double t1852;
  double t1856;
  double t1862;
  double t1867;
  double t1872;
  double t1950;
  double t1951;
  double t1959;
  double t1898;
  double t1900;
  double t1930;
  double t1888;
  double t1894;
  double t1896;
  double t1669;
  double t1670;
  double t1678;
  double t1828;
  double t1882;
  double t1883;
  double t2033;
  double t2045;
  double t2053;
  double t1994;
  double t2017;
  double t2018;
  double t2162;
  double t2163;
  double t2168;
  double t2074;
  double t2076;
  double t2084;
  double t2327;
  double t2328;
  double t2329;
  double t2055;
  double t2109;
  double t2359;
  double t2361;
  double t2362;
  double t2365;
  double t2380;
  double t2383;
  double t2385;
  double t2059;
  double t2060;
  double t2064;
  double t2396;
  double t2404;
  double t2110;
  double t2116;
  double t2119;
  double t2191;
  double t2223;
  double t2528;
  double t2531;
  double t2194;
  double t2197;
  double t2204;
  double t2566;
  double t2582;
  double t2224;
  double t2229;
  double t2232;
  double t2260;
  double t2303;
  double t2748;
  double t2262;
  double t2267;
  double t2270;
  double t2763;
  double t2768;
  double t2304;
  double t2315;
  double t2319;
  double t2350;
  double t2848;
  double t2850;
  double t2852;
  double t2856;
  double t2859;
  double t2370;
  double t2935;
  double t2942;
  double t2943;
  double t2354;
  double t2357;
  double t2855;
  double t2862;
  double t2876;
  double t2877;
  double t2374;
  double t2377;
  double t2977;
  double t2979;
  double t2987;
  double t3001;
  double t3003;
  double t3043;
  double t3044;
  double t3045;
  double t3048;
  double t3049;
  double t3055;
  double t3057;
  double t3063;
  double t3073;
  double t3077;
  double t3079;
  double t3080;
  double t2548;
  double t2534;
  double t3092;
  double t3099;
  double t3100;
  double t3174;
  double t3178;
  double t2537;
  double t2541;
  double t3206;
  double t3208;
  double t2553;
  double t2560;
  double t3298;
  double t3300;
  double t2917;
  double t2924;
  double t2928;
  double t3325;
  double t3326;
  double t3118;
  double t3119;
  double t3123;
  double t2727;
  double t2786;
  double t2728;
  double t2732;
  double t3401;
  double t3402;
  double t2982;
  double t3436;
  double t3438;
  double t2787;
  double t2788;
  double t3512;
  double t3522;
  double t3527;
  double t3529;
  double t2840;
  double t2841;
  double t3604;
  double t3605;
  double t3609;
  double t3641;
  double t3642;
  double t1633;
  double t1636;
  double t1640;
  double t3626;
  double t3630;
  double t3631;
  double t3634;
  double t3620;
  double t3640;
  double t3651;
  double t3695;
  double t3696;
  double t3697;
  double t3671;
  double t3675;
  double t3678;
  double t3689;
  double t3690;
  double t3693;
  double t3710;
  double t3712;
  double t3714;
  double t3699;
  double t3706;
  double t3718;
  double t3738;
  double t3739;
  double t3740;
  double t3743;
  double t3744;
  double t3745;
  double t3749;
  double t3750;
  double t3751;
  double t3215;
  double t3217;
  double t3218;
  double t3221;
  double t3224;
  double t3227;
  double t3653;
  double t2901;
  double t2903;
  double t3791;
  double t3792;
  double t3807;
  double t3797;
  double t3788;
  double t3793;
  double t3880;
  double t3885;
  double t3888;
  double t3762;
  double t3763;
  double t3765;
  double t3384;
  double t3393;
  double t3954;
  double t4033;
  double t4045;
  double t4089;
  double t4092;
  double t4094;
  double t4118;
  double t4119;
  double t4123;
  double t4137;
  double t4157;
  double t4159;
  double t4171;
  double t4172;
  double t4174;
  double t4177;
  double t4186;
  double t4188;
  double t4114;
  double t4115;
  double t4124;
  double t4229;
  double t4230;
  double t4235;
  double t4215;
  double t4219;
  double t4222;
  double t4237;
  double t4255;
  double t4267;
  double t4269;
  double t4271;
  double t4275;
  double t4282;
  double t4288;
  double t3453;
  double t3459;
  double t3813;
  double t3815;
  double t3832;
  double t3833;
  double t4318;
  double t4327;
  double t4340;
  double t4328;
  double t4330;
  double t4320;
  double t4391;
  double t4395;
  double t4135;
  double t4161;
  double t4162;
  double t4407;
  double t1485;
  double t1486;
  double t1487;
  double t4500;
  double t4512;
  double t4563;
  double t4568;
  double t4573;
  t1171 = Cos(var1[10]);
  t1133 = Cos(var1[11]);
  t1134 = Sin(var1[10]);
  t1172 = Sin(var1[11]);
  t1135 = t1133*t1134;
  t1204 = -1.*t1171*t1172;
  t1255 = t1135 + t1204;
  t569 = Cos(var1[5]);
  t1266 = t1171*t1133;
  t1269 = t1134*t1172;
  t1270 = t1266 + t1269;
  t1104 = Sin(var1[9]);
  t1278 = Sin(var1[5]);
  t1291 = Cos(var1[3]);
  t1263 = -1.*t569*t1104*t1255;
  t1283 = t1270*t1278;
  t1288 = t1263 + t1283;
  t548 = Sin(var1[3]);
  t1308 = Cos(var1[9]);
  t1368 = Cos(var1[4]);
  t1413 = t1308*t1368*t1255;
  t1465 = Sin(var1[4]);
  t1466 = t569*t1270;
  t1469 = t1104*t1255*t1278;
  t1476 = t1466 + t1469;
  t1477 = -1.*t1465*t1476;
  t1479 = t1413 + t1477;
  t1500 = t1368*t1104;
  t1502 = t1308*t1465*t1278;
  t1505 = t1500 + t1502;
  t1527 = -1.*t1133*t1134;
  t1528 = t1171*t1172;
  t1544 = t1527 + t1528;
  t1523 = -1.*t569*t1104*t1270;
  t1556 = t1544*t1278;
  t1561 = t1523 + t1556;
  t1580 = t1308*t1368*t1270;
  t1582 = t569*t1544;
  t1584 = t1104*t1270*t1278;
  t1610 = t1582 + t1584;
  t1611 = -1.*t1465*t1610;
  t1616 = t1580 + t1611;
  t1658 = -1.*t1308*t1255*t1465;
  t1661 = -1.*t1368*t1476;
  t1663 = t1658 + t1661;
  t1705 = -0.0641*t1133;
  t1717 = -0.28*t1172;
  t1730 = t1705 + t1717;
  t1734 = -1.*t1133;
  t1738 = 1. + t1734;
  t1740 = -0.575*t1738;
  t1741 = -0.295*t1133;
  t1744 = -0.0641*t1172;
  t1745 = t1740 + t1741 + t1744;
  t1701 = 0.325*t1134;
  t1732 = t1171*t1730;
  t1799 = t1134*t1745;
  t1801 = t1701 + t1732 + t1799;
  t1692 = 0.068*t1104;
  t1805 = t1308*t1801;
  t1822 = t1692 + t1805;
  t1830 = -1.*t1171;
  t1832 = 1. + t1830;
  t1833 = -0.325*t1832;
  t1834 = -1.*t1134*t1730;
  t1836 = t1171*t1745;
  t1837 = t1833 + t1834 + t1836;
  t1839 = t569*t1837;
  t1840 = -1.*t1308;
  t1844 = 1. + t1840;
  t1851 = 0.1575*t1844;
  t1852 = 0.2255*t1308;
  t1856 = -1.*t1104*t1801;
  t1862 = t1851 + t1852 + t1856;
  t1867 = -1.*t1862*t1278;
  t1872 = t1839 + t1867;
  t1950 = t1368*t1822;
  t1951 = -1.*t1465*t1872;
  t1959 = t1950 + t1951;
  t1898 = t1104*t1465;
  t1900 = -1.*t1308*t1368*t1278;
  t1930 = t1898 + t1900;
  t1888 = t1822*t1465;
  t1894 = t1368*t1872;
  t1896 = t1888 + t1894;
  t1669 = t1308*t1270*t1465;
  t1670 = t1368*t1610;
  t1678 = t1669 + t1670;
  t1828 = -1.*t1822*t1465;
  t1882 = -1.*t1368*t1872;
  t1883 = t1828 + t1882;
  t2033 = t569*t1862;
  t2045 = t1837*t1278;
  t2053 = t2033 + t2045;
  t1994 = -1.*t1104*t1465;
  t2017 = t1308*t1368*t1278;
  t2018 = t1994 + t2017;
  t2162 = t1308*t1255*t1465;
  t2163 = t1368*t1476;
  t2168 = t2162 + t2163;
  t2074 = -1.*t1308*t1270*t1465;
  t2076 = -1.*t1368*t1610;
  t2084 = t2074 + t2076;
  t2327 = t569*t1104*t1255;
  t2328 = -1.*t1270*t1278;
  t2329 = t2327 + t2328;
  t2055 = -1.*t1308*t569*t2053;
  t2109 = t2053*t1561;
  t2359 = -1.*t569*t1862;
  t2361 = -1.*t1837*t1278;
  t2362 = t2359 + t2361;
  t2365 = t1308*t1278*t2053;
  t2380 = t569*t1104*t1270;
  t2383 = -1.*t1544*t1278;
  t2385 = t2380 + t2383;
  t2059 = -1.*t1930*t1896;
  t2060 = -1.*t1505*t1959;
  t2064 = t2055 + t2059 + t2060;
  t2396 = t1872*t1561;
  t2404 = t2053*t1610;
  t2110 = t1896*t1678;
  t2116 = t1959*t1616;
  t2119 = t2109 + t2110 + t2116;
  t2191 = t2053*t1288;
  t2223 = -1.*t2053*t1561;
  t2528 = t2053*t1476;
  t2531 = t1872*t1288;
  t2194 = t1896*t2168;
  t2197 = t1959*t1479;
  t2204 = t2191 + t2194 + t2197;
  t2566 = -1.*t1872*t1561;
  t2582 = -1.*t2053*t1610;
  t2224 = -1.*t1896*t1678;
  t2229 = -1.*t1959*t1616;
  t2232 = t2223 + t2224 + t2229;
  t2260 = t1308*t569*t2053;
  t2303 = -1.*t2053*t1288;
  t2748 = -1.*t1308*t1278*t2053;
  t2262 = t1930*t1896;
  t2267 = t1505*t1959;
  t2270 = t2260 + t2262 + t2267;
  t2763 = -1.*t2053*t1476;
  t2768 = -1.*t1872*t1288;
  t2304 = -1.*t1896*t2168;
  t2315 = -1.*t1959*t1479;
  t2319 = t2303 + t2304 + t2315;
  t2350 = -1.*t1104*t1822;
  t2848 = -0.068*t1104;
  t2850 = -1.*t1308*t1801;
  t2852 = t2848 + t2850;
  t2856 = 0.068*t1308;
  t2859 = t2856 + t1856;
  t2370 = t1308*t1822*t1270;
  t2935 = -1.*t1368*t1104*t1255;
  t2942 = -1.*t1308*t1255*t1465*t1278;
  t2943 = t2935 + t2942;
  t2354 = t1308*t1278*t1872;
  t2357 = t2350 + t2354 + t2055;
  t2855 = -1.*t1308*t1822;
  t2862 = -1.*t1104*t2859;
  t2876 = -1.*t1104*t1822*t1270;
  t2877 = t1308*t2859*t1270;
  t2374 = t1872*t1610;
  t2377 = t2370 + t2109 + t2374;
  t2977 = Power(t569,2);
  t2979 = -1.*t1308*t2977*t2852;
  t2987 = t569*t1104*t2053;
  t3001 = -1.*t1308*t569*t1270*t2053;
  t3003 = t569*t2852*t1561;
  t3043 = -1.*t1104*t1270*t1465;
  t3044 = t1308*t1368*t1270*t1278;
  t3045 = t3043 + t3044;
  t3048 = t2859*t1465;
  t3049 = -1.*t1368*t2852*t1278;
  t3055 = t3048 + t3049;
  t3057 = t1368*t2859;
  t3063 = t2852*t1465*t1278;
  t3073 = t3057 + t3063;
  t3077 = t1308*t1465;
  t3079 = t1368*t1104*t1278;
  t3080 = t3077 + t3079;
  t2548 = -1.*t1308*t1822*t1270;
  t2534 = t1308*t1822*t1255;
  t3092 = t1308*t1368;
  t3099 = -1.*t1104*t1465*t1278;
  t3100 = t3092 + t3099;
  t3174 = -1.*t1104*t1822*t1255;
  t3178 = t1308*t2859*t1255;
  t2537 = t1872*t1476;
  t2541 = t2534 + t2537 + t2191;
  t3206 = t1104*t1822*t1270;
  t3208 = -1.*t1308*t2859*t1270;
  t2553 = -1.*t1872*t1610;
  t2560 = t2548 + t2223 + t2553;
  t3298 = -1.*t1308*t569*t1255*t2053;
  t3300 = t569*t2852*t1288;
  t2917 = -1.*t1104*t1255*t1465;
  t2924 = t1308*t1368*t1255*t1278;
  t2928 = t2917 + t2924;
  t3325 = t1308*t569*t1270*t2053;
  t3326 = -1.*t569*t2852*t1561;
  t3118 = -1.*t1368*t1104*t1270;
  t3119 = -1.*t1308*t1270*t1465*t1278;
  t3123 = t3118 + t3119;
  t2727 = t1104*t1822;
  t2786 = -1.*t1308*t1822*t1255;
  t2728 = -1.*t1308*t1278*t1872;
  t2732 = t2727 + t2728 + t2260;
  t3401 = t1308*t1822;
  t3402 = t1104*t2859;
  t2982 = Power(t1278,2);
  t3436 = t1104*t1822*t1255;
  t3438 = -1.*t1308*t2859*t1255;
  t2787 = -1.*t1872*t1476;
  t2788 = t2786 + t2787 + t2303;
  t3512 = t1308*t2977*t2852;
  t3522 = -1.*t569*t1104*t2053;
  t3527 = t1308*t569*t1255*t2053;
  t3529 = -1.*t569*t2852*t1288;
  t2840 = -1.*t1308*t1862;
  t2841 = t2350 + t2840;
  t3604 = -1.*t1171*t1133;
  t3605 = -1.*t1134*t1172;
  t3609 = t3604 + t3605;
  t3641 = 0.325*t1171;
  t3642 = t3641 + t1834 + t1836;
  t1633 = t1291*t1561;
  t1636 = -1.*t548*t1616;
  t1640 = t1633 + t1636;
  t3626 = -0.325*t1134;
  t3630 = -1.*t1171*t1730;
  t3631 = -1.*t1134*t1745;
  t3634 = t3626 + t3630 + t3631;
  t3620 = t1308*t1822*t1544;
  t3640 = Power(t1308,2);
  t3651 = t3640*t3642*t1270;
  t3695 = -1.*t569*t1104*t3642;
  t3696 = t3634*t1278;
  t3697 = t3695 + t3696;
  t3671 = -1.*t569*t1104*t1544;
  t3675 = t3609*t1278;
  t3678 = t3671 + t3675;
  t3689 = t569*t3634;
  t3690 = t1104*t3642*t1278;
  t3693 = t3689 + t3690;
  t3710 = t569*t3609;
  t3712 = t1104*t1544*t1278;
  t3714 = t3710 + t3712;
  t3699 = -1.*t1308*t569*t3697;
  t3706 = t3697*t1561;
  t3718 = t2053*t3678;
  t3738 = t1308*t1544*t1465;
  t3739 = t1368*t3714;
  t3740 = t3738 + t3739;
  t3743 = t1308*t3642*t1465;
  t3744 = t1368*t3693;
  t3745 = t3743 + t3744;
  t3749 = t1308*t1368*t3642;
  t3750 = -1.*t1465*t3693;
  t3751 = t3749 + t3750;
  t3215 = -1.*t1837*t1544;
  t3217 = t1104*t1862*t1270;
  t3218 = t3215 + t2548 + t3217;
  t3221 = -1.*t1104*t1862*t1255;
  t3224 = t1837*t1270;
  t3227 = t2534 + t3221 + t3224;
  t3653 = Power(t1104,2);
  t2901 = t1837*t1544;
  t2903 = -1.*t1104*t1862*t1270;
  t3791 = -1.*t3634*t1544;
  t3792 = -1.*t1837*t3609;
  t3807 = t3634*t1270;
  t3797 = t3640*t3642*t1255;
  t3788 = -1.*t1308*t1822*t1544;
  t3793 = -1.*t3640*t3642*t1270;
  t3880 = t3697*t1288;
  t3885 = -1.*t3697*t1561;
  t3888 = -1.*t2053*t3678;
  t3762 = t1308*t1368*t1544;
  t3763 = -1.*t1465*t3714;
  t3765 = t3762 + t3763;
  t3384 = t1308*t1862;
  t3393 = t2727 + t3384;
  t3954 = -1.*t3640*t3642*t1255;
  t4033 = t1308*t569*t3697;
  t4045 = -1.*t3697*t1288;
  t4089 = -0.28*t1133;
  t4092 = 0.0641*t1172;
  t4094 = t4089 + t4092;
  t4118 = t1134*t1730;
  t4119 = t1171*t4094;
  t4123 = t4118 + t4119;
  t4137 = t569*t1255;
  t4157 = t1104*t3609*t1278;
  t4159 = t4137 + t4157;
  t4171 = -1.*t569*t1104*t3609;
  t4172 = t1255*t1278;
  t4174 = t4171 + t4172;
  t4177 = t1308*t1368*t3609;
  t4186 = -1.*t1465*t4159;
  t4188 = t4177 + t4186;
  t4114 = -1.*t1134*t4094;
  t4115 = t1732 + t4114;
  t4124 = t3640*t4123*t1270;
  t4229 = -1.*t569*t1104*t4123;
  t4230 = t4115*t1278;
  t4235 = t4229 + t4230;
  t4215 = t569*t4115;
  t4219 = t1104*t4123*t1278;
  t4222 = t4215 + t4219;
  t4237 = -1.*t1308*t569*t4235;
  t4255 = t4235*t1561;
  t4267 = t1308*t4123*t1465;
  t4269 = t1368*t4222;
  t4271 = t4267 + t4269;
  t4275 = t1308*t1368*t4123;
  t4282 = -1.*t1465*t4222;
  t4288 = t4275 + t4282;
  t3453 = t1104*t1862*t1255;
  t3459 = -1.*t1837*t1270;
  t3813 = t1801*t1255;
  t3815 = t3813 + t3224;
  t3832 = -1.*t1801*t1270;
  t3833 = t3215 + t3832;
  t4318 = -1.*t4115*t1544;
  t4327 = t1837*t1255;
  t4340 = t4115*t1270;
  t4328 = t3640*t4123*t1255;
  t4330 = t1308*t1822*t3609;
  t4320 = -1.*t3640*t4123*t1270;
  t4391 = t2053*t4174;
  t4395 = t4235*t1288;
  t4135 = t1308*t3609*t1465;
  t4161 = t1368*t4159;
  t4162 = t4135 + t4161;
  t4407 = -1.*t4235*t1561;
  t1485 = t1291*t1288;
  t1486 = -1.*t548*t1479;
  t1487 = t1485 + t1486;
  t4500 = -1.*t3640*t4123*t1255;
  t4512 = -1.*t1308*t1822*t3609;
  t4563 = t1308*t569*t4235;
  t4568 = -1.*t2053*t4174;
  t4573 = -1.*t4235*t1288;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1291*t1479 - 1.*t1288*t548)*var2[1] + t1487*var2[2];
  p_output1[10]=(-1.*t1291*t1505 - 1.*t1308*t548*t569)*var2[1] + (-1.*t1505*t548 + t1291*t1308*t569)*var2[2];
  p_output1[11]=(-1.*t1291*t1616 - 1.*t1561*t548)*var2[1] + t1640*var2[2];
  p_output1[12]=t1479*var2[0] - 1.*t1663*t548*var2[1] + t1291*t1663*var2[2] + (t1678*(-1.*t1505*t1883 - 1.*t1505*t1896 - 1.*t1930*t1959 - 1.*t1959*t2018) + t1616*t2064 + t1930*(t1616*t1883 + t1616*t1896 + t1678*t1959 + t1959*t2084) + t1505*t2119)*var2[3];
  p_output1[13]=t1505*var2[0] - 1.*t2018*t548*var2[1] + t1291*t2018*var2[2] + ((-1.*t1616*t1883 - 1.*t1616*t1896 - 1.*t1678*t1959 - 1.*t1959*t2084)*t2168 + t1678*(t1479*t1883 + t1479*t1896 + t1663*t1959 + t1959*t2168) + t1616*t2204 + t1479*t2232)*var2[3];
  p_output1[14]=t1616*var2[0] - 1.*t2084*t548*var2[1] + t1291*t2084*var2[2] + ((t1505*t1883 + t1505*t1896 + t1930*t1959 + t1959*t2018)*t2168 + t1930*(-1.*t1479*t1883 - 1.*t1479*t1896 - 1.*t1663*t1959 - 1.*t1959*t2168) + t1479*t2270 + t1505*t2319)*var2[3];
  p_output1[15]=t1368*t2329*var2[0] + (t1291*t1476 + t1465*t2329*t548)*var2[1] + (-1.*t1291*t1465*t2329 + t1476*t548)*var2[2] + (t1368*t2064*t2385 + t1930*(-1.*t1465*t1616*t2362 + t1368*t1678*t2362 + t1368*t1896*t2385 - 1.*t1465*t1959*t2385 + t2396 + t2404) - 1.*t1308*t1368*t2119*t569 + t1678*(t1465*t1505*t2362 - 1.*t1368*t1930*t2362 + t2365 - 1.*t1308*t1872*t569 + t1308*t1368*t1896*t569 - 1.*t1308*t1465*t1959*t569))*var2[3] + (t1610*t2357 + t1561*(t1278*t1308*t2362 + t2365) - 1.*t1278*t1308*t2377 + t1308*(t1610*t2362 + t1872*t2385 + t2396 + t2404)*t569)*var2[4];
  p_output1[16]=-1.*t1308*t1368*t569*var2[0] + (-1.*t1278*t1291*t1308 - 1.*t1308*t1465*t548*t569)*var2[1] + (-1.*t1278*t1308*t548 + t1291*t1308*t1465*t569)*var2[2] + (t1368*t2232*t2329 + t1368*t2204*t2385 + t1678*(t1368*t1896*t2329 - 1.*t1465*t1959*t2329 - 1.*t1465*t1479*t2362 + t1368*t2168*t2362 + t2528 + t2531) + t2168*(t1465*t1616*t2362 - 1.*t1368*t1678*t2362 - 1.*t1368*t1896*t2385 + t1465*t1959*t2385 + t2566 + t2582))*var2[3] + (t1561*(t1872*t2329 + t1476*t2362 + t2528 + t2531) + t1610*t2541 + t1476*t2560 + t1288*(-1.*t1610*t2362 - 1.*t1872*t2385 + t2566 + t2582))*var2[4];
  p_output1[17]=t1368*t2385*var2[0] + (t1291*t1610 + t1465*t2385*t548)*var2[1] + (-1.*t1291*t1465*t2385 + t1610*t548)*var2[2] + (t1368*t2270*t2329 + t1930*(-1.*t1368*t1896*t2329 + t1465*t1959*t2329 + t1465*t1479*t2362 - 1.*t1368*t2168*t2362 + t2763 + t2768) - 1.*t1308*t1368*t2319*t569 + t2168*(-1.*t1465*t1505*t2362 + t1368*t1930*t2362 + t2748 + t1308*t1872*t569 - 1.*t1308*t1368*t1896*t569 + t1308*t1465*t1959*t569))*var2[3] + (t1476*t2732 + t1288*(-1.*t1278*t1308*t2362 + t2748) - 1.*t1278*t1308*t2788 + t1308*(-1.*t1872*t2329 - 1.*t1476*t2362 + t2763 + t2768)*t569)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t2928*var2[0] + (-1.*t2943*t548 - 1.*t1255*t1291*t1308*t569)*var2[1] + (t1291*t2943 - 1.*t1255*t1308*t548*t569)*var2[2] + (t2064*t3045 + t2119*t3080 + t1678*(t2979 + t2987 - 1.*t1930*t3055 - 1.*t1505*t3073 - 1.*t1896*t3080 - 1.*t1959*t3100) + t1930*(t3001 + t3003 + t1896*t3045 + t1678*t3055 + t1616*t3073 + t1959*t3123))*var2[3] + (t1561*(-1.*t1104*t1278*t1872 + t2855 + t2862 + t2979 - 1.*t1308*t2852*t2982 + t2987) - 1.*t1270*t1308*t2357*t569 - 1.*t1104*t2377*t569 + t1308*(t1270*t1278*t1308*t1872 - 1.*t1278*t1610*t2852 + t2876 + t2877 + t3001 + t3003)*t569)*var2[4] + (-1.*t1104*t1270*t2841 + t1270*t1308*(t1104*t1862 - 1.*t1308*t2852 + t2855 + t2862) + t1104*(-1.*t1270*t1308*t1862 - 1.*t1104*t1270*t2852 + t2876 + t2877) + t1308*(t2370 + t2901 + t2903))*var2[5];
  p_output1[28]=t3080*var2[0] + (-1.*t3100*t548 - 1.*t1104*t1291*t569)*var2[1] + (t1291*t3100 - 1.*t1104*t548*t569)*var2[2] + (t2232*t2928 + t2204*t3045 + t1678*(t1896*t2928 + t1959*t2943 + t2168*t3055 + t1479*t3073 + t3298 + t3300) + t2168*(-1.*t1896*t3045 - 1.*t1678*t3055 - 1.*t1616*t3073 - 1.*t1959*t3123 + t3325 + t3326))*var2[3] + (t1561*(t1255*t1278*t1308*t1872 - 1.*t1278*t1476*t2852 + t3174 + t3178 + t3298 + t3300) + t1288*(-1.*t1270*t1278*t1308*t1872 + t1278*t1610*t2852 + t3206 + t3208 + t3325 + t3326) - 1.*t1270*t1308*t2541*t569 - 1.*t1255*t1308*t2560*t569)*var2[4] + (t1270*t1308*(-1.*t1255*t1308*t1862 - 1.*t1104*t1255*t2852 + t3174 + t3178) + t1255*t1308*(t1270*t1308*t1862 + t1104*t1270*t2852 + t3206 + t3208) - 1.*t1104*t1255*t3218 - 1.*t1104*t1270*t3227)*var2[5];
  p_output1[29]=t3045*var2[0] + (-1.*t3123*t548 - 1.*t1270*t1291*t1308*t569)*var2[1] + (t1291*t3123 - 1.*t1270*t1308*t548*t569)*var2[2] + (t2270*t2928 + t2319*t3080 + t2168*(t1930*t3055 + t1505*t3073 + t1896*t3080 + t1959*t3100 + t3512 + t3522) + t1930*(-1.*t1896*t2928 - 1.*t1959*t2943 - 1.*t2168*t3055 - 1.*t1479*t3073 + t3527 + t3529))*var2[3] + (t1288*(t1104*t1278*t1872 + t1308*t2852*t2982 + t3401 + t3402 + t3512 + t3522) - 1.*t1255*t1308*t2732*t569 - 1.*t1104*t2788*t569 + t1308*(-1.*t1255*t1278*t1308*t1872 + t1278*t1476*t2852 + t3436 + t3438 + t3527 + t3529)*t569)*var2[4] + (-1.*t1104*t1255*t3393 + t1255*t1308*(-1.*t1104*t1862 + t1308*t2852 + t3401 + t3402) + t1104*(t1255*t1308*t1862 + t1104*t1255*t2852 + t3436 + t3438) + t1308*(t2786 + t3453 + t3459))*var2[5];
  p_output1[30]=t1678*var2[0] + t1640*var2[1] + (t1291*t1616 + t1561*t548)*var2[2] + (t2064*t3740 + t1678*(t3699 - 1.*t1930*t3745 - 1.*t1505*t3751) + t1930*(t3706 + t3718 + t1896*t3740 + t1678*t3745 + t1616*t3751 + t1959*t3765))*var2[3] + (t2357*t3678 + t1561*(-1.*t1104*t1308*t3642 + t1278*t1308*t3693 + t3699) + t1308*(t3620 + t3651 + t1610*t3693 + t3706 + t1872*t3714 + t3718)*t569)*var2[4] + (t1308*t1544*t2841 + t1104*(-1.*t1104*t1544*t1862 + t1837*t3609 + t3620 + t1544*t3634 + t3651 + t1270*t3642*t3653))*var2[5] + (-0.1575*t1270 - 0.2255*t3609)*var2[9];
  p_output1[31]=(t1678*t2232 + t2204*t3740 + t1678*(t2109 + t2110 + t2116 + t2168*t3745 + t1479*t3751 + t3880) + t2168*(-1.*t1896*t3740 - 1.*t1678*t3745 - 1.*t1616*t3751 - 1.*t1959*t3765 + t3885 + t3888))*var2[3] + (t1561*t2560 + t2541*t3678 + t1561*(t2109 + t2370 + t2374 + t1476*t3693 + t3797 + t3880) + t1288*(-1.*t1610*t3693 - 1.*t1872*t3714 + t3788 + t3793 + t3885 + t3888))*var2[4] + (t1270*t1308*t3218 + t1308*t1544*t3227 + t1255*t1308*(t1104*t1544*t1862 - 1.*t1270*t3642*t3653 + t3788 + t3791 + t3792 + t3793) + t1270*t1308*(t2370 + t2901 + t2903 + t1255*t3642*t3653 + t3797 + t3807))*var2[5] + (t1270*(-1.*t1544*t1801 - 1.*t1270*t3642 + t3791 + t3792) + t1544*(t1270*t1801 + t2901 + t1255*t3642 + t3807) + t3609*t3815 + t1544*t3833)*var2[9];
  p_output1[32]=t3740*var2[0] + (t1291*t3678 - 1.*t3765*t548)*var2[1] + (t1291*t3765 + t3678*t548)*var2[2] + (t1678*t2270 + t2168*(t1930*t3745 + t1505*t3751 + t4033) + t1930*(t2223 + t2224 + t2229 - 1.*t2168*t3745 - 1.*t1479*t3751 + t4045))*var2[3] + (t1561*t2732 + t1288*(t1104*t1308*t3642 - 1.*t1278*t1308*t3693 + t4033) + t1308*(t2223 + t2548 + t2553 - 1.*t1476*t3693 + t3954 + t4045)*t569)*var2[4] + (t1270*t1308*t3393 + t1104*(t2548 + t3215 + t3217 - 1.*t1270*t3634 - 1.*t1255*t3642*t3653 + t3954))*var2[5] + 0.068*t1544*var2[9];
  p_output1[33]=t4162*var2[0] + (t1291*t4174 - 1.*t4188*t548)*var2[1] + (t1291*t4188 + t4174*t548)*var2[2] + (t2064*t2168 + t1678*(t4237 - 1.*t1930*t4271 - 1.*t1505*t4288) + t1930*(t2191 + t2194 + t2197 + t4255 + t1678*t4271 + t1616*t4288))*var2[3] + (t1288*t2357 + t1561*(-1.*t1104*t1308*t4123 + t1278*t1308*t4222 + t4237) + t1308*(t2191 + t2534 + t2537 + t4124 + t1610*t4222 + t4255)*t569)*var2[4] + (t1255*t1308*t2841 + t1104*(t2534 + t3221 + t3224 + t1544*t4115 + t1270*t3653*t4123 + t4124))*var2[5] + (-0.2255*t1270 - 0.1575*t3609)*var2[9] + (-0.325*t1133 - 1.*t1133*t1745 - 1.*t1133*t4094)*var2[10];
  p_output1[34]=(t2168*t2204 + t2232*t4162 + t1678*(t1896*t4162 + t1959*t4188 + t2168*t4271 + t1479*t4288 + t4391 + t4395) + t2168*(t2303 + t2304 + t2315 - 1.*t1678*t4271 - 1.*t1616*t4288 + t4407))*var2[3] + (t1288*t2541 + t2560*t4174 + t1561*(t1872*t4159 + t1476*t4222 + t4328 + t4330 + t4391 + t4395) + t1288*(t2303 + t2786 + t2787 - 1.*t1610*t4222 + t4320 + t4407))*var2[4] + (t1255*t1308*t3227 + t1308*t3218*t3609 + t1255*t1308*(t2786 + t3453 + t3459 - 1.*t1270*t3653*t4123 + t4318 + t4320) + t1270*t1308*(-1.*t1104*t1862*t3609 + t1255*t3653*t4123 + t4327 + t4328 + t4330 + t4340))*var2[5] + (t1270*t3815 + t1255*t3833 + t1270*(-1.*t1255*t1801 + t3459 - 1.*t1270*t4123 + t4318) + t1544*(t1801*t3609 + t1255*t4123 + t4327 + t4340))*var2[9];
  p_output1[35]=t2168*var2[0] + t1487*var2[1] + (t1291*t1479 + t1288*t548)*var2[2] + (t2270*t4162 + t2168*(t1930*t4271 + t1505*t4288 + t4563) + t1930*(-1.*t1896*t4162 - 1.*t1959*t4188 - 1.*t2168*t4271 - 1.*t1479*t4288 + t4568 + t4573))*var2[3] + (t2732*t4174 + t1288*(t1104*t1308*t4123 - 1.*t1278*t1308*t4222 + t4563) + t1308*(-1.*t1872*t4159 - 1.*t1476*t4222 + t4500 + t4512 + t4568 + t4573)*t569)*var2[4] + (t1308*t3393*t3609 + t1104*(-1.*t1255*t1837 + t1104*t1862*t3609 - 1.*t1270*t4115 - 1.*t1255*t3653*t4123 + t4500 + t4512))*var2[5] + 0.068*t1255*var2[9] + (-0.325*t1172 - 1.*t1172*t1745 - 1.*t1172*t4094)*var2[10];
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
