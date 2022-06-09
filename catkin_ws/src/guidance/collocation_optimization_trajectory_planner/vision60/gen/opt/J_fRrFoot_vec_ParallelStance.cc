/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:38 GMT+02:00
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
  double t1694;
  double t1495;
  double t1695;
  double t1737;
  double t1716;
  double t1720;
  double t1742;
  double t1609;
  double t1721;
  double t1743;
  double t1761;
  double t1700;
  double t1815;
  double t1817;
  double t1818;
  double t1775;
  double t1834;
  double t1835;
  double t1836;
  double t1840;
  double t1844;
  double t1848;
  double t1819;
  double t1823;
  double t1824;
  double t1893;
  double t1894;
  double t1895;
  double t1922;
  double t1923;
  double t1924;
  double t1914;
  double t1915;
  double t1919;
  double t1693;
  double t1705;
  double t1706;
  double t1989;
  double t1991;
  double t1774;
  double t1825;
  double t1826;
  double t1833;
  double t1849;
  double t1850;
  double t1858;
  double t1859;
  double t1860;
  double t1854;
  double t1855;
  double t1856;
  double t1899;
  double t1900;
  double t1904;
  double t2004;
  double t2005;
  double t2006;
  double t1995;
  double t1996;
  double t1997;
  double t1927;
  double t1928;
  double t1929;
  double t2284;
  double t2285;
  double t2286;
  double t2275;
  double t2276;
  double t2280;
  double t2304;
  double t2305;
  double t2306;
  double t2015;
  double t2019;
  double t2021;
  double t2029;
  double t2032;
  double t2041;
  double t2043;
  double t2045;
  double t2115;
  double t2228;
  double t2229;
  double t2230;
  double t2239;
  double t2240;
  double t2241;
  double t2250;
  double t2251;
  double t2252;
  double t2261;
  double t2262;
  double t2263;
  double t2265;
  double t2266;
  double t2267;
  double t2290;
  double t2291;
  double t2293;
  double t2295;
  double t2296;
  double t2297;
  double t2468;
  double t2469;
  double t2472;
  double t2463;
  double t2464;
  double t2465;
  double t2493;
  double t2494;
  double t2495;
  double t2507;
  double t2509;
  double t2513;
  double t2514;
  double t2515;
  double t2516;
  double t2491;
  double t2498;
  double t2517;
  double t2522;
  double t2490;
  double t2523;
  double t2524;
  double t2530;
  double t2531;
  double t2532;
  double t2533;
  double t2534;
  double t2535;
  double t2536;
  double t2563;
  double t2568;
  double t2573;
  double t2574;
  double t2577;
  double t2583;
  double t2584;
  double t2585;
  double t1986;
  double t1987;
  double t1988;
  double t2610;
  double t2613;
  double t2614;
  double t2592;
  double t2594;
  double t2600;
  double t2526;
  double t2586;
  double t2588;
  double t2619;
  double t2620;
  double t2621;
  double t2866;
  double t2877;
  double t2878;
  double t2623;
  double t2624;
  double t2625;
  double t2626;
  double t2636;
  double t2637;
  double t2638;
  double t2765;
  double t2780;
  double t2781;
  double t2782;
  double t2785;
  double t2796;
  double t2797;
  double t2799;
  double t2800;
  double t2825;
  double t2826;
  double t2827;
  double t2829;
  double t2840;
  double t2841;
  double t2850;
  double t2851;
  double t1870;
  double t1874;
  double t1875;
  double t4520;
  double t4521;
  double t4522;
  double t4525;
  double t4528;
  double t1863;
  double t1867;
  double t1868;
  double t4529;
  double t4530;
  double t4531;
  double t4534;
  double t4536;
  double t4537;
  double t1877;
  double t1881;
  double t1883;
  double t4519;
  double t6554;
  double t6556;
  double t6607;
  double t6612;
  double t6613;
  double t6623;
  double t6776;
  double t6777;
  double t6787;
  double t6561;
  double t6629;
  double t6734;
  double t6741;
  double t6822;
  double t6960;
  double t6983;
  double t7013;
  double t7016;
  double t1889;
  double t1908;
  double t1912;
  double t1926;
  double t1934;
  double t1938;
  double t8229;
  double t8231;
  double t8232;
  double t8227;
  double t8256;
  double t8260;
  double t8270;
  double t8276;
  double t8751;
  double t8815;
  double t8905;
  double t8266;
  double t8277;
  double t8281;
  double t8612;
  double t8907;
  double t8922;
  double t8936;
  double t8992;
  double t9110;
  double t2881;
  double t3030;
  double t3062;
  double t3485;
  double t3523;
  double t3681;
  double t3699;
  double t4222;
  double t4433;
  double t4435;
  double t9854;
  double t9875;
  double t9876;
  double t4524;
  double t4533;
  double t4545;
  double t4546;
  double t10267;
  double t10272;
  double t10290;
  double t4572;
  double t4578;
  double t10305;
  double t10308;
  double t10311;
  double t4628;
  double t4629;
  double t10315;
  double t10318;
  double t10320;
  double t10518;
  double t10521;
  double t10522;
  double t5206;
  double t10585;
  double t5274;
  double t5823;
  double t5970;
  double t10551;
  double t10554;
  double t10556;
  double t6735;
  double t7053;
  double t10767;
  double t7230;
  double t7281;
  double t7282;
  double t7748;
  double t7989;
  double t8008;
  double t8609;
  double t9179;
  double t9198;
  double t9288;
  double t9296;
  double t9343;
  double t9438;
  double t9449;
  double t10721;
  double t10724;
  double t10734;
  double t10738;
  double t10583;
  double t10584;
  double t10608;
  double t10613;
  double t10645;
  double t10651;
  double t10664;
  double t10665;
  double t11200;
  double t11201;
  double t10838;
  double t10844;
  double t11350;
  double t11355;
  double t10768;
  double t11439;
  double t11395;
  double t11397;
  double t11400;
  double t11412;
  double t11414;
  double t11415;
  double t10798;
  double t10799;
  double t10786;
  double t11324;
  double t11328;
  double t11000;
  double t10871;
  double t10872;
  double t11374;
  double t11375;
  double t10936;
  double t10890;
  double t10896;
  double t11337;
  double t11378;
  double t11505;
  double t11511;
  double t11520;
  double t11687;
  double t11697;
  double t11741;
  double t11748;
  double t11566;
  double t11584;
  double t11598;
  double t12192;
  double t12196;
  t1694 = Cos(var1[15]);
  t1495 = Cos(var1[4]);
  t1695 = Sin(var1[4]);
  t1737 = Cos(var1[16]);
  t1716 = Cos(var1[17]);
  t1720 = Sin(var1[16]);
  t1742 = Sin(var1[17]);
  t1609 = Sin(var1[15]);
  t1721 = t1716*t1720;
  t1743 = -1.*t1737*t1742;
  t1761 = t1721 + t1743;
  t1700 = Sin(var1[5]);
  t1815 = t1737*t1716;
  t1817 = t1720*t1742;
  t1818 = t1815 + t1817;
  t1775 = Cos(var1[5]);
  t1834 = -1.*t1716*t1720;
  t1835 = t1737*t1742;
  t1836 = t1834 + t1835;
  t1840 = t1775*t1836;
  t1844 = t1609*t1818*t1700;
  t1848 = t1840 + t1844;
  t1819 = t1775*t1818;
  t1823 = t1609*t1761*t1700;
  t1824 = t1819 + t1823;
  t1893 = -1.*t1737*t1716;
  t1894 = -1.*t1720*t1742;
  t1895 = t1893 + t1894;
  t1922 = t1694*t1761*t1695;
  t1923 = t1495*t1824;
  t1924 = t1922 + t1923;
  t1914 = t1694*t1818*t1695;
  t1915 = t1495*t1848;
  t1919 = t1914 + t1915;
  t1693 = t1495*t1609;
  t1705 = t1694*t1695*t1700;
  t1706 = t1693 + t1705;
  t1989 = Sin(var1[3]);
  t1991 = Cos(var1[3]);
  t1774 = t1694*t1495*t1761;
  t1825 = -1.*t1695*t1824;
  t1826 = t1774 + t1825;
  t1833 = t1694*t1495*t1818;
  t1849 = -1.*t1695*t1848;
  t1850 = t1833 + t1849;
  t1858 = t1775*t1609*t1761;
  t1859 = -1.*t1818*t1700;
  t1860 = t1858 + t1859;
  t1854 = t1775*t1609*t1818;
  t1855 = -1.*t1836*t1700;
  t1856 = t1854 + t1855;
  t1899 = t1775*t1895;
  t1900 = t1609*t1836*t1700;
  t1904 = t1899 + t1900;
  t2004 = -1.*t1775*t1609*t1818;
  t2005 = t1836*t1700;
  t2006 = t2004 + t2005;
  t1995 = -1.*t1775*t1609*t1761;
  t1996 = t1818*t1700;
  t1997 = t1995 + t1996;
  t1927 = t1775*t1761;
  t1928 = t1609*t1895*t1700;
  t1929 = t1927 + t1928;
  t2284 = t1991*t1997;
  t2285 = -1.*t1989*t1826;
  t2286 = t2284 + t2285;
  t2275 = t1991*t2006;
  t2276 = -1.*t1989*t1850;
  t2280 = t2275 + t2276;
  t2304 = t1694*t1991*t1775;
  t2305 = -1.*t1989*t1706;
  t2306 = t2304 + t2305;
  t2015 = -1.*t1609*t1695;
  t2019 = t1694*t1495*t1700;
  t2021 = t2015 + t2019;
  t2029 = -1.*t1694*t1761*t1695;
  t2032 = -1.*t1495*t1824;
  t2041 = t2029 + t2032;
  t2043 = -1.*t1694*t1818*t1695;
  t2045 = -1.*t1495*t1848;
  t2115 = t2043 + t2045;
  t2228 = t1694*t1495;
  t2229 = -1.*t1609*t1695*t1700;
  t2230 = t2228 + t2229;
  t2239 = -1.*t1495*t1609*t1761;
  t2240 = -1.*t1694*t1761*t1695*t1700;
  t2241 = t2239 + t2240;
  t2250 = -1.*t1495*t1609*t1818;
  t2251 = -1.*t1694*t1818*t1695*t1700;
  t2252 = t2250 + t2251;
  t2261 = -1.*t1775*t1609*t1836;
  t2262 = t1895*t1700;
  t2263 = t2261 + t2262;
  t2265 = t1694*t1495*t1836;
  t2266 = -1.*t1695*t1904;
  t2267 = t2265 + t2266;
  t2290 = -1.*t1775*t1609*t1895;
  t2291 = t1761*t1700;
  t2293 = t2290 + t2291;
  t2295 = t1694*t1495*t1895;
  t2296 = -1.*t1695*t1929;
  t2297 = t2295 + t2296;
  t2468 = t1989*t1997;
  t2469 = t1991*t1826;
  t2472 = t2468 + t2469;
  t2463 = t1989*t2006;
  t2464 = t1991*t1850;
  t2465 = t2463 + t2464;
  t2493 = -0.0641*t1716;
  t2494 = -0.28*t1742;
  t2495 = t2493 + t2494;
  t2507 = -1.*t1716;
  t2509 = 1. + t2507;
  t2513 = -0.575*t2509;
  t2514 = -0.295*t1716;
  t2515 = -0.0641*t1742;
  t2516 = t2513 + t2514 + t2515;
  t2491 = 0.325*t1720;
  t2498 = t1737*t2495;
  t2517 = t1720*t2516;
  t2522 = t2491 + t2498 + t2517;
  t2490 = -0.068*t1609;
  t2523 = t1694*t2522;
  t2524 = t2490 + t2523;
  t2530 = -1.*t1737;
  t2531 = 1. + t2530;
  t2532 = -0.325*t2531;
  t2533 = -1.*t1720*t2495;
  t2534 = t1737*t2516;
  t2535 = t2532 + t2533 + t2534;
  t2536 = t1775*t2535;
  t2563 = -1.*t1694;
  t2568 = 1. + t2563;
  t2573 = -0.1575*t2568;
  t2574 = -0.2255*t1694;
  t2577 = -1.*t1609*t2522;
  t2583 = t2573 + t2574 + t2577;
  t2584 = -1.*t2583*t1700;
  t2585 = t2536 + t2584;
  t1986 = t1609*t1695;
  t1987 = -1.*t1694*t1495*t1700;
  t1988 = t1986 + t1987;
  t2610 = t1495*t2524;
  t2613 = -1.*t1695*t2585;
  t2614 = t2610 + t2613;
  t2592 = t2524*t1695;
  t2594 = t1495*t2585;
  t2600 = t2592 + t2594;
  t2526 = -1.*t2524*t1695;
  t2586 = -1.*t1495*t2585;
  t2588 = t2526 + t2586;
  t2619 = t1775*t2583;
  t2620 = t2535*t1700;
  t2621 = t2619 + t2620;
  t2866 = -1.*t1775*t2583;
  t2877 = -1.*t2535*t1700;
  t2878 = t2866 + t2877;
  t2623 = t1694*t1775*t2621;
  t2624 = t1988*t2600;
  t2625 = t1706*t2614;
  t2626 = t2623 + t2624 + t2625;
  t2636 = -1.*t2621*t1997;
  t2637 = -1.*t2600*t1924;
  t2638 = -1.*t2614*t1826;
  t2765 = t2636 + t2637 + t2638;
  t2780 = t2621*t1997;
  t2781 = t2600*t1924;
  t2782 = t2614*t1826;
  t2785 = t2780 + t2781 + t2782;
  t2796 = -1.*t2621*t2006;
  t2797 = -1.*t2600*t1919;
  t2799 = -1.*t2614*t1850;
  t2800 = t2796 + t2797 + t2799;
  t2825 = -1.*t1694*t1775*t2621;
  t2826 = -1.*t1988*t2600;
  t2827 = -1.*t1706*t2614;
  t2829 = t2825 + t2826 + t2827;
  t2840 = t2621*t2006;
  t2841 = t2600*t1919;
  t2850 = t2614*t1850;
  t2851 = t2840 + t2841 + t2850;
  t1870 = -1.*t1609*t1761*t1695;
  t1874 = t1694*t1495*t1761*t1700;
  t1875 = t1870 + t1874;
  t4520 = 0.068*t1609;
  t4521 = -1.*t1694*t2522;
  t4522 = t4520 + t4521;
  t4525 = -0.068*t1694;
  t4528 = t4525 + t2577;
  t1863 = t1694*t1695;
  t1867 = t1495*t1609*t1700;
  t1868 = t1863 + t1867;
  t4529 = t4528*t1695;
  t4530 = -1.*t1495*t4522*t1700;
  t4531 = t4529 + t4530;
  t4534 = t1495*t4528;
  t4536 = t4522*t1695*t1700;
  t4537 = t4534 + t4536;
  t1877 = -1.*t1609*t1818*t1695;
  t1881 = t1694*t1495*t1818*t1700;
  t1883 = t1877 + t1881;
  t4519 = Power(t1775,2);
  t6554 = 0.325*t1737;
  t6556 = t6554 + t2533 + t2534;
  t6607 = -0.325*t1720;
  t6612 = -1.*t1737*t2495;
  t6613 = -1.*t1720*t2516;
  t6623 = t6607 + t6612 + t6613;
  t6776 = t1775*t6623;
  t6777 = t1609*t6556*t1700;
  t6787 = t6776 + t6777;
  t6561 = -1.*t1775*t1609*t6556;
  t6629 = t6623*t1700;
  t6734 = t6561 + t6629;
  t6741 = t1694*t6556*t1695;
  t6822 = t1495*t6787;
  t6960 = t6741 + t6822;
  t6983 = t1694*t1495*t6556;
  t7013 = -1.*t1695*t6787;
  t7016 = t6983 + t7013;
  t1889 = t1694*t1836*t1695;
  t1908 = t1495*t1904;
  t1912 = t1889 + t1908;
  t1926 = t1694*t1895*t1695;
  t1934 = t1495*t1929;
  t1938 = t1926 + t1934;
  t8229 = -0.28*t1716;
  t8231 = 0.0641*t1742;
  t8232 = t8229 + t8231;
  t8227 = t1720*t2495;
  t8256 = t1737*t8232;
  t8260 = t8227 + t8256;
  t8270 = -1.*t1720*t8232;
  t8276 = t2498 + t8270;
  t8751 = t1775*t8276;
  t8815 = t1609*t8260*t1700;
  t8905 = t8751 + t8815;
  t8266 = -1.*t1775*t1609*t8260;
  t8277 = t8276*t1700;
  t8281 = t8266 + t8277;
  t8612 = t1694*t8260*t1695;
  t8907 = t1495*t8905;
  t8922 = t8612 + t8907;
  t8936 = t1694*t1495*t8260;
  t8992 = -1.*t1695*t8905;
  t9110 = t8936 + t8992;
  t2881 = -1.*t1694*t1700*t2621;
  t3030 = -1.*t2621*t1824;
  t3062 = -1.*t2585*t1997;
  t3485 = t2621*t1824;
  t3523 = t2585*t1997;
  t3681 = -1.*t2585*t2006;
  t3699 = -1.*t2621*t1848;
  t4222 = t1694*t1700*t2621;
  t4433 = t2585*t2006;
  t4435 = t2621*t1848;
  t9854 = t1609*t2524;
  t9875 = -1.*t1694*t1700*t2585;
  t9876 = t9854 + t9875 + t2623;
  t4524 = t1694*t4519*t4522;
  t4533 = -1.*t1775*t1609*t2621;
  t4545 = t1694*t1775*t1761*t2621;
  t4546 = -1.*t1775*t4522*t1997;
  t10267 = -1.*t1694*t2524*t1761;
  t10272 = -1.*t2585*t1824;
  t10290 = t10267 + t10272 + t2636;
  t4572 = -1.*t1694*t1775*t1761*t2621;
  t4578 = t1775*t4522*t1997;
  t10305 = t1694*t2524*t1761;
  t10308 = t2585*t1824;
  t10311 = t10305 + t10308 + t2780;
  t4628 = t1694*t1775*t1818*t2621;
  t4629 = -1.*t1775*t4522*t2006;
  t10315 = -1.*t1694*t2524*t1818;
  t10318 = -1.*t2585*t1848;
  t10320 = t10315 + t2796 + t10318;
  t10518 = -1.*t1609*t2524;
  t10521 = t1694*t1700*t2585;
  t10522 = t10518 + t10521 + t2825;
  t5206 = -1.*t1694*t4519*t4522;
  t10585 = Power(t1700,2);
  t5274 = t1775*t1609*t2621;
  t5823 = -1.*t1694*t1775*t1818*t2621;
  t5970 = t1775*t4522*t2006;
  t10551 = t1694*t2524*t1818;
  t10554 = t2585*t1848;
  t10556 = t10551 + t2840 + t10554;
  t6735 = t1694*t1775*t6734;
  t7053 = -1.*t6734*t1997;
  t10767 = Power(t1694,2);
  t7230 = t6734*t1997;
  t7281 = -1.*t6734*t2006;
  t7282 = -1.*t2621*t2263;
  t7748 = -1.*t1694*t1775*t6734;
  t7989 = t6734*t2006;
  t8008 = t2621*t2263;
  t8609 = t1694*t1775*t8281;
  t9179 = -1.*t2621*t2293;
  t9198 = -1.*t8281*t1997;
  t9288 = t2621*t2293;
  t9296 = t8281*t1997;
  t9343 = -1.*t8281*t2006;
  t9438 = -1.*t1694*t1775*t8281;
  t9449 = t8281*t2006;
  t10721 = -1.*t1694*t2524;
  t10724 = -1.*t1609*t4528;
  t10734 = -1.*t1609*t2524*t1818;
  t10738 = t1694*t4528*t1818;
  t10583 = t1694*t2524;
  t10584 = t1609*t4528;
  t10608 = t1609*t2524*t1761;
  t10613 = -1.*t1694*t4528*t1761;
  t10645 = -1.*t1609*t2524*t1761;
  t10651 = t1694*t4528*t1761;
  t10664 = t1609*t2524*t1818;
  t10665 = -1.*t1694*t4528*t1818;
  t11200 = -1.*t1694*t2583;
  t11201 = t10518 + t11200;
  t10838 = t1694*t2524*t1836;
  t10844 = t10767*t6556*t1818;
  t11350 = t1694*t2583;
  t11355 = t9854 + t11350;
  t10768 = -1.*t10767*t6556*t1761;
  t11439 = Power(t1609,2);
  t11395 = -1.*t2535*t1836;
  t11397 = t1609*t2583*t1818;
  t11400 = t11395 + t10315 + t11397;
  t11412 = -1.*t1609*t2583*t1761;
  t11414 = t2535*t1818;
  t11415 = t10305 + t11412 + t11414;
  t10798 = -1.*t1694*t2524*t1836;
  t10799 = -1.*t10767*t6556*t1818;
  t10786 = t10767*t6556*t1761;
  t11324 = t2535*t1836;
  t11328 = -1.*t1609*t2583*t1818;
  t11000 = t10767*t8260*t1818;
  t10871 = -1.*t10767*t8260*t1761;
  t10872 = -1.*t1694*t2524*t1895;
  t11374 = t1609*t2583*t1761;
  t11375 = -1.*t2535*t1818;
  t10936 = -1.*t10767*t8260*t1818;
  t10890 = t10767*t8260*t1761;
  t10896 = t1694*t2524*t1895;
  t11337 = t11324 + t10551 + t11328;
  t11378 = t10267 + t11374 + t11375;
  t11505 = -1.*t6623*t1836;
  t11511 = -1.*t2535*t1895;
  t11520 = t6623*t1818;
  t11687 = t2522*t1761;
  t11697 = t11687 + t11414;
  t11741 = -1.*t2522*t1818;
  t11748 = t11395 + t11741;
  t11566 = -1.*t8276*t1836;
  t11584 = t2535*t1761;
  t11598 = t8276*t1818;
  t12192 = -0.325*t1742;
  t12196 = -1.*t2516*t1742;
  p_output1[0]=t1826*var2[0] + t1706*var2[1] + t1850*var2[2];
  p_output1[1]=t1495*t1860*var2[0] - 1.*t1495*t1694*t1775*var2[1] + t1495*t1856*var2[2];
  p_output1[2]=t1875*var2[0] + t1868*var2[1] + t1883*var2[2];
  p_output1[3]=t1919*var2[0] + t1912*var2[2];
  p_output1[4]=t1938*var2[0] + t1924*var2[2];
  p_output1[5]=t1924;
  p_output1[6]=t1988;
  p_output1[7]=t1919;
  p_output1[8]=(-1.*t1826*t1991 - 1.*t1989*t1997)*var2[0] + (-1.*t1694*t1775*t1989 - 1.*t1706*t1991)*var2[1] + (-1.*t1850*t1991 - 1.*t1989*t2006)*var2[2];
  p_output1[9]=-1.*t1989*t2041*var2[0] - 1.*t1989*t2021*var2[1] - 1.*t1989*t2115*var2[2];
  p_output1[10]=(t1695*t1860*t1989 + t1824*t1991)*var2[0] + (-1.*t1694*t1695*t1775*t1989 - 1.*t1694*t1700*t1991)*var2[1] + (t1695*t1856*t1989 + t1848*t1991)*var2[2];
  p_output1[11]=(-1.*t1694*t1761*t1775*t1991 - 1.*t1989*t2241)*var2[0] + (-1.*t1609*t1775*t1991 - 1.*t1989*t2230)*var2[1] + (-1.*t1694*t1775*t1818*t1991 - 1.*t1989*t2252)*var2[2];
  p_output1[12]=t2280*var2[0] + (t1991*t2263 - 1.*t1989*t2267)*var2[2];
  p_output1[13]=(t1991*t2293 - 1.*t1989*t2297)*var2[0] + t2286*var2[2];
  p_output1[14]=t2286;
  p_output1[15]=t2306;
  p_output1[16]=t2280;
  p_output1[17]=t2286*var2[0] + t2306*var2[1] + t2280*var2[2];
  p_output1[18]=t1991*t2041*var2[0] + t1991*t2021*var2[1] + t1991*t2115*var2[2];
  p_output1[19]=(t1824*t1989 - 1.*t1695*t1860*t1991)*var2[0] + (-1.*t1694*t1700*t1989 + t1694*t1695*t1775*t1991)*var2[1] + (t1848*t1989 - 1.*t1695*t1856*t1991)*var2[2];
  p_output1[20]=(-1.*t1694*t1761*t1775*t1989 + t1991*t2241)*var2[0] + (-1.*t1609*t1775*t1989 + t1991*t2230)*var2[1] + (-1.*t1694*t1775*t1818*t1989 + t1991*t2252)*var2[2];
  p_output1[21]=t2465*var2[0] + (t1989*t2263 + t1991*t2267)*var2[2];
  p_output1[22]=(t1989*t2293 + t1991*t2297)*var2[0] + t2472*var2[2];
  p_output1[23]=t2472;
  p_output1[24]=t1694*t1775*t1989 + t1706*t1991;
  p_output1[25]=t2465;
  p_output1[26]=(t1919*(-1.*t1706*t2588 - 1.*t1706*t2600 - 1.*t1988*t2614 - 1.*t2021*t2614) + t1988*(t1850*t2588 + t1850*t2600 + t1919*t2614 + t2115*t2614) + t1850*t2829 + t1706*t2851)*var2[0] + (t1919*(t1826*t2588 + t1826*t2600 + t1924*t2614 + t2041*t2614) + t1924*(-1.*t1850*t2588 - 1.*t1850*t2600 - 1.*t1919*t2614 - 1.*t2115*t2614) + t1850*t2785 + t1826*t2800)*var2[1] + (t1924*(t1706*t2588 + t1706*t2600 + t1988*t2614 + t2021*t2614) + t1988*(-1.*t1826*t2588 - 1.*t1826*t2600 - 1.*t1924*t2614 - 1.*t2041*t2614) + t1826*t2626 + t1706*t2765)*var2[2];
  p_output1[27]=(t1495*t1856*t2829 - 1.*t1495*t1694*t1775*t2851 + t1919*(-1.*t1694*t1775*t2585 + t1495*t1694*t1775*t2600 - 1.*t1694*t1695*t1775*t2614 + t1695*t1706*t2878 - 1.*t1495*t1988*t2878 + t4222) + t1988*(t1495*t1856*t2600 - 1.*t1695*t1856*t2614 - 1.*t1695*t1850*t2878 + t1495*t1919*t2878 + t4433 + t4435))*var2[0] + (t1495*t1856*t2785 + t1495*t1860*t2800 + t1919*(t1495*t1860*t2600 - 1.*t1695*t1860*t2614 - 1.*t1695*t1826*t2878 + t1495*t1924*t2878 + t3485 + t3523) + t1924*(-1.*t1495*t1856*t2600 + t1695*t1856*t2614 + t1695*t1850*t2878 - 1.*t1495*t1919*t2878 + t3681 + t3699))*var2[1] + (t1495*t1860*t2626 - 1.*t1495*t1694*t1775*t2765 + t1924*(t1694*t1775*t2585 - 1.*t1495*t1694*t1775*t2600 + t1694*t1695*t1775*t2614 - 1.*t1695*t1706*t2878 + t1495*t1988*t2878 + t2881) + t1988*(-1.*t1495*t1860*t2600 + t1695*t1860*t2614 + t1695*t1826*t2878 - 1.*t1495*t1924*t2878 + t3030 + t3062))*var2[2];
  p_output1[28]=(t1883*t2829 + t1868*t2851 + t1919*(-1.*t1868*t2600 - 1.*t2230*t2614 - 1.*t1988*t4531 - 1.*t1706*t4537 + t5206 + t5274) + t1988*(t1883*t2600 + t2252*t2614 + t1919*t4531 + t1850*t4537 + t5823 + t5970))*var2[0] + (t1883*t2785 + t1875*t2800 + t1919*(t1875*t2600 + t2241*t2614 + t1924*t4531 + t1826*t4537 + t4572 + t4578) + t1924*(-1.*t1883*t2600 - 1.*t2252*t2614 - 1.*t1919*t4531 - 1.*t1850*t4537 + t4628 + t4629))*var2[1] + (t1875*t2626 + t1868*t2765 + t1924*(t1868*t2600 + t2230*t2614 + t4524 + t1988*t4531 + t4533 + t1706*t4537) + t1988*(-1.*t1875*t2600 - 1.*t2241*t2614 - 1.*t1924*t4531 - 1.*t1826*t4537 + t4545 + t4546))*var2[2];
  p_output1[29]=(t1912*t2829 + t1919*(-1.*t1988*t6960 - 1.*t1706*t7016 + t7748) + t1988*(t1912*t2600 + t2267*t2614 + t1919*t6960 + t1850*t7016 + t7989 + t8008))*var2[0] + (t1912*t2785 + t1919*t2800 + t1919*(t2840 + t2841 + t2850 + t1924*t6960 + t1826*t7016 + t7230) + t1924*(-1.*t1912*t2600 - 1.*t2267*t2614 - 1.*t1919*t6960 - 1.*t1850*t7016 + t7281 + t7282))*var2[1] + (t1919*t2626 + t1924*(t6735 + t1988*t6960 + t1706*t7016) + t1988*(t2796 + t2797 + t2799 - 1.*t1924*t6960 - 1.*t1826*t7016 + t7053))*var2[2];
  p_output1[30]=(t1924*t2829 + t1919*(-1.*t1988*t8922 - 1.*t1706*t9110 + t9438) + t1988*(t2780 + t2781 + t2782 + t1919*t8922 + t1850*t9110 + t9449))*var2[0] + (t1924*t2785 + t1938*t2800 + t1919*(t1938*t2600 + t2297*t2614 + t1924*t8922 + t1826*t9110 + t9288 + t9296) + t1924*(t2636 + t2637 + t2638 - 1.*t1919*t8922 - 1.*t1850*t9110 + t9343))*var2[1] + (t1938*t2626 + t1924*(t8609 + t1988*t8922 + t1706*t9110) + t1988*(-1.*t1938*t2600 - 1.*t2297*t2614 - 1.*t1924*t8922 - 1.*t1826*t9110 + t9179 + t9198))*var2[2];
  p_output1[31]=t1919*t2829 + t1988*t2851;
  p_output1[32]=t1919*t2785 + t1924*t2800;
  p_output1[33]=t1924*t2626 + t1988*t2765;
  p_output1[34]=(-1.*t10556*t1694*t1700 + t10522*t1848 + t2006*(t1694*t1700*t2878 + t4222) + t1694*t1775*(t1856*t2585 + t1848*t2878 + t4433 + t4435))*var2[0] + (t10320*t1824 + t10311*t1848 + t2006*(t1860*t2585 + t1824*t2878 + t3485 + t3523) + t1997*(-1.*t1856*t2585 - 1.*t1848*t2878 + t3681 + t3699))*var2[1] + (-1.*t10290*t1694*t1700 + t1997*(-1.*t1694*t1700*t2878 + t2881) + t1694*t1775*(-1.*t1860*t2585 - 1.*t1824*t2878 + t3030 + t3062) + t1824*t9876)*var2[2];
  p_output1[35]=(-1.*t10556*t1609*t1775 - 1.*t10522*t1694*t1775*t1818 + t2006*(t10721 + t10724 - 1.*t1609*t1700*t2585 - 1.*t10585*t1694*t4522 + t5206 + t5274) + t1694*t1775*(t10734 + t10738 + t1694*t1700*t1818*t2585 - 1.*t1700*t1848*t4522 + t5823 + t5970))*var2[0] + (-1.*t10320*t1694*t1761*t1775 - 1.*t10311*t1694*t1775*t1818 + t2006*(t10645 + t10651 + t1694*t1700*t1761*t2585 - 1.*t1700*t1824*t4522 + t4572 + t4578) + t1997*(t10664 + t10665 - 1.*t1694*t1700*t1818*t2585 + t1700*t1848*t4522 + t4628 + t4629))*var2[1] + (-1.*t10290*t1609*t1775 + t1997*(t10583 + t10584 + t1609*t1700*t2585 + t10585*t1694*t4522 + t4524 + t4533) + t1694*t1775*(t10608 + t10613 - 1.*t1694*t1700*t1761*t2585 + t1700*t1824*t4522 + t4545 + t4546) - 1.*t1694*t1761*t1775*t9876)*var2[2];
  p_output1[36]=(t10522*t2263 + t2006*(-1.*t1609*t1694*t6556 + t1694*t1700*t6787 + t7748) + t1694*t1775*(t10838 + t10844 + t1904*t2585 + t1848*t6787 + t7989 + t8008))*var2[0] + (t10320*t2006 + t10311*t2263 + t2006*(t10551 + t10554 + t10786 + t2840 + t1824*t6787 + t7230) + t1997*(t10798 + t10799 - 1.*t1904*t2585 - 1.*t1848*t6787 + t7281 + t7282))*var2[1] + (t1997*(t1609*t1694*t6556 + t6735 - 1.*t1694*t1700*t6787) + t1694*t1775*(t10315 + t10318 + t10768 + t2796 - 1.*t1824*t6787 + t7053) + t2006*t9876)*var2[2];
  p_output1[37]=(t10522*t1997 + t2006*(-1.*t1609*t1694*t8260 + t1694*t1700*t8905 + t9438) + t1694*t1775*(t10305 + t10308 + t11000 + t2780 + t1848*t8905 + t9449))*var2[0] + (t10311*t1997 + t10320*t2293 + t2006*(t10890 + t10896 + t1929*t2585 + t1824*t8905 + t9288 + t9296) + t1997*(t10267 + t10272 + t10936 + t2636 - 1.*t1848*t8905 + t9343))*var2[1] + (t1997*(t1609*t1694*t8260 + t8609 - 1.*t1694*t1700*t8905) + t1694*t1775*(t10871 + t10872 - 1.*t1929*t2585 - 1.*t1824*t8905 + t9179 + t9198) + t2293*t9876)*var2[2];
  p_output1[38]=t10556*t1694*t1775 + t10522*t2006;
  p_output1[39]=t10320*t1997 + t10311*t2006;
  p_output1[40]=t10290*t1694*t1775 + t1997*t9876;
  p_output1[41]=(t11337*t1694 - 1.*t11201*t1609*t1818 + t1694*t1818*(t10721 + t10724 + t1609*t2583 - 1.*t1694*t4522) + t1609*(t10734 + t10738 - 1.*t1694*t1818*t2583 - 1.*t1609*t1818*t4522))*var2[0] + (-1.*t11400*t1609*t1761 - 1.*t11415*t1609*t1818 + t1694*t1818*(t10645 + t10651 - 1.*t1694*t1761*t2583 - 1.*t1609*t1761*t4522) + t1694*t1761*(t10664 + t10665 + t1694*t1818*t2583 + t1609*t1818*t4522))*var2[1] + (t11378*t1694 - 1.*t11355*t1609*t1761 + t1694*t1761*(t10583 + t10584 - 1.*t1609*t2583 + t1694*t4522) + t1609*(t10608 + t10613 + t1694*t1761*t2583 + t1609*t1761*t4522))*var2[2];
  p_output1[42]=(t11201*t1694*t1836 + t1609*(t10838 + t10844 + t1895*t2535 - 1.*t1609*t1836*t2583 + t11439*t1818*t6556 + t1836*t6623))*var2[0] + (t11400*t1694*t1818 + t11415*t1694*t1836 + t1694*t1818*(t10551 + t10786 + t11324 + t11328 + t11520 + t11439*t1761*t6556) + t1694*t1761*(t10798 + t10799 + t11505 + t11511 + t1609*t1836*t2583 - 1.*t11439*t1818*t6556))*var2[1] + (t11355*t1694*t1818 + t1609*(t10315 + t10768 + t11395 + t11397 - 1.*t11439*t1761*t6556 - 1.*t1818*t6623))*var2[2];
  p_output1[43]=(t11201*t1694*t1761 + t1609*(t10305 + t11000 + t11412 + t11414 + t11439*t1818*t8260 + t1836*t8276))*var2[0] + (t11415*t1694*t1761 + t11400*t1694*t1895 + t1694*t1818*(t10890 + t10896 + t11584 + t11598 - 1.*t1609*t1895*t2583 + t11439*t1761*t8260) + t1694*t1761*(t10267 + t10936 + t11374 + t11375 + t11566 - 1.*t11439*t1818*t8260))*var2[1] + (t11355*t1694*t1895 + t1609*(t10871 + t10872 - 1.*t1761*t2535 + t1609*t1895*t2583 - 1.*t11439*t1761*t8260 - 1.*t1818*t8276))*var2[2];
  p_output1[44]=t11337*t1609 + t11201*t1694*t1818;
  p_output1[45]=t11400*t1694*t1761 + t11415*t1694*t1818;
  p_output1[46]=t11378*t1609 + t11355*t1694*t1761;
  p_output1[47]=(0.1575*t1818 + 0.2255*t1895)*var2[0] + (t11748*t1836 + t11697*t1895 + t1836*(t11324 + t11520 + t1818*t2522 + t1761*t6556) + t1818*(t11505 + t11511 - 1.*t1836*t2522 - 1.*t1818*t6556))*var2[1] - 0.068*t1836*var2[2];
  p_output1[48]=(0.2255*t1818 + 0.1575*t1895)*var2[0] + (t11748*t1761 + t11697*t1818 + t1836*(t11584 + t11598 + t1895*t2522 + t1761*t8260) + t1818*(t11375 + t11566 - 1.*t1761*t2522 - 1.*t1818*t8260))*var2[1] - 0.068*t1761*var2[2];
  p_output1[49]=0.1575*t1761 + 0.2255*t1836;
  p_output1[50]=t11748*t1818 + t11697*t1836;
  p_output1[51]=-0.068*t1818;
  p_output1[52]=(-0.325*t1716 - 1.*t1716*t2516 - 1.*t1716*t8232)*var2[0] + (t12192 + t12196 - 1.*t1742*t8232)*var2[2];
  p_output1[53]=t12192 + t12196 - 1.*t1716*t2495;
  p_output1[54]=0.325*t1716 - 1.*t1742*t2495 + t1716*t2516;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
