/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:27:58 GMT+01:00
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
  double t209;
  double t227;
  double t287;
  double t317;
  double t145;
  double t335;
  double t505;
  double t534;
  double t176;
  double t373;
  double t693;
  double t300;
  double t307;
  double t339;
  double t367;
  double t380;
  double t391;
  double t454;
  double t469;
  double t743;
  double t606;
  double t611;
  double t629;
  double t639;
  double t687;
  double t690;
  double t698;
  double t708;
  double t709;
  double t780;
  double t792;
  double t810;
  double t814;
  double t827;
  double t837;
  double t839;
  double t871;
  double t161;
  double t167;
  double t982;
  double t1077;
  double t1004;
  double t1008;
  double t1014;
  double t1018;
  double t1020;
  double t1026;
  double t1037;
  double t1053;
  double t1072;
  double t977;
  double t1090;
  double t1093;
  double t1105;
  double t1107;
  double t1117;
  double t1127;
  double t1130;
  double t1136;
  double t1137;
  double t1151;
  double t754;
  double t755;
  double t188;
  double t191;
  double t562;
  double t600;
  double t951;
  double t953;
  double t963;
  double t1239;
  double t1241;
  double t1242;
  double t1263;
  double t1286;
  double t1290;
  double t1295;
  double t1302;
  double t1382;
  double t1386;
  double t1509;
  double t1579;
  double t1589;
  double t1602;
  double t1608;
  double t1643;
  double t1659;
  double t1668;
  double t1680;
  double t1200;
  double t1809;
  double t1815;
  double t1829;
  double t1839;
  double t1842;
  double t1845;
  double t1848;
  double t1849;
  double t1896;
  double t1897;
  double t1903;
  double t1904;
  double t1943;
  double t1947;
  double t1948;
  double t1951;
  double t1193;
  double t1198;
  double t1199;
  double t1074;
  double t1160;
  double t1164;
  double t475;
  double t727;
  double t875;
  double t930;
  double t1186;
  double t1209;
  double t1215;
  double t2040;
  double t1737;
  double t1739;
  double t1757;
  double t1623;
  double t1711;
  double t1724;
  double t2071;
  double t1271;
  double t1311;
  double t1525;
  double t1529;
  double t1726;
  double t1766;
  double t1777;
  double t1969;
  double t1984;
  double t1988;
  double t1911;
  double t1953;
  double t1962;
  double t1832;
  double t1847;
  double t1850;
  double t1874;
  double t1966;
  double t1989;
  double t2001;
  double t2044;
  double t2046;
  double t2051;
  double t2072;
  double t2073;
  double t2081;
  double t2099;
  double t2102;
  double t2125;
  double t2141;
  double t2151;
  double t2158;
  double t2175;
  double t2176;
  double t2179;
  double t2198;
  double t2215;
  double t2216;
  double t1544;
  double t1778;
  double t1796;
  double t2376;
  double t2424;
  double t2434;
  double t2438;
  double t2442;
  double t2452;
  double t2458;
  double t2497;
  double t2506;
  double t2509;
  double t2512;
  double t2529;
  double t2536;
  double t2558;
  double t2566;
  double t2570;
  double t2578;
  double t2584;
  double t2586;
  double t2590;
  double t2592;
  double t2611;
  double t2622;
  double t2625;
  double t2637;
  double t2644;
  double t2662;
  double t2664;
  double t2679;
  double t2682;
  double t2687;
  double t2689;
  double t2319;
  double t2334;
  double t2340;
  double t2357;
  double t2365;
  double t2366;
  double t2367;
  double t2370;
  double t2392;
  double t2422;
  double t2515;
  double t2615;
  double t2694;
  double t2697;
  double t2703;
  double t2705;
  double t2707;
  double t2708;
  double t2711;
  double t2716;
  double t2721;
  double t2722;
  double t2729;
  double t2731;
  double t2732;
  double t952;
  double t1219;
  double t1222;
  double t2743;
  double t2744;
  double t2769;
  double t2770;
  double t2336;
  double t2699;
  double t2734;
  double t2735;
  double t2804;
  double t2818;
  double t2819;
  double t2823;
  double t2825;
  double t2827;
  double t2832;
  double t2840;
  double t2842;
  double t2843;
  double t2864;
  double t2871;
  double t2892;
  double t2740;
  double t2784;
  double t2785;
  double t2855;
  double t2893;
  double t2895;
  double t2907;
  double t2924;
  double t2927;
  double t1884;
  double t2028;
  double t2030;
  double t2799;
  double t2947;
  double t3043;
  double t3075;
  double t3132;
  double t3166;
  double t3243;
  double t3259;
  double t3276;
  double t3297;
  double t3318;
  double t3346;
  double t3730;
  double t3739;
  double t3740;
  double t3751;
  double t3766;
  double t3773;
  double t3778;
  double t3782;
  double t3842;
  double t3846;
  double t3850;
  double t3853;
  double t3857;
  double t3859;
  double t3863;
  double t3864;
  double t3662;
  double t3922;
  double t3931;
  double t3935;
  double t3936;
  double t3941;
  double t3942;
  double t3943;
  double t3967;
  t209 = Cos(var1[14]);
  t227 = -1.*t209;
  t287 = 1. + t227;
  t317 = Sin(var1[14]);
  t145 = Cos(var1[13]);
  t335 = -7.e-6*t317;
  t505 = -1.*t145;
  t534 = 1. + t505;
  t176 = Sin(var1[13]);
  t373 = -7.e-6*t287;
  t693 = -1.*t317;
  t300 = -6.5e-11*t287;
  t307 = 4.e-6*t287;
  t339 = t307 + t335;
  t367 = 4.e-6*t339;
  t380 = -4.e-6*t317;
  t391 = t373 + t380;
  t454 = -7.e-6*t391;
  t469 = 1. + t300 + t367 + t454;
  t743 = 2.8e-11*t534;
  t606 = 1.000000000049*t287;
  t611 = -1. + t606;
  t629 = 4.e-6*t611;
  t639 = -1. + t209;
  t687 = 4.e-6*t639;
  t690 = 2.8e-11*t287;
  t698 = t690 + t693;
  t708 = -7.e-6*t698;
  t709 = t629 + t687 + t708 + t335;
  t780 = -1.000000000016*t287;
  t792 = 1. + t780;
  t810 = -7.e-6*t792;
  t814 = -2.8e-11*t287;
  t827 = t814 + t693;
  t837 = 4.e-6*t827;
  t839 = 4.e-6*t317;
  t871 = t810 + t373 + t837 + t839;
  t161 = -1. + t145;
  t167 = 4.e-6*t161;
  t982 = -7.e-6*t534;
  t1077 = Sin(var1[12]);
  t1004 = 4.e-6*t176;
  t1008 = t982 + t1004;
  t1014 = t1008*t469;
  t1018 = t743 + t176;
  t1020 = t1018*t709;
  t1026 = -1.000000000016*t534;
  t1037 = 1. + t1026;
  t1053 = t1037*t871;
  t1072 = t1014 + t1020 + t1053;
  t977 = Cos(var1[12]);
  t1090 = -6.5e-11*t534;
  t1093 = 1. + t1090;
  t1105 = t1093*t469;
  t1107 = 7.e-6*t176;
  t1117 = t167 + t1107;
  t1127 = t1117*t709;
  t1130 = -4.e-6*t176;
  t1136 = t982 + t1130;
  t1137 = t1136*t871;
  t1151 = t1105 + t1127 + t1137;
  t754 = -1.*t176;
  t755 = t743 + t754;
  t188 = -7.e-6*t176;
  t191 = t167 + t188;
  t562 = -1.000000000049*t534;
  t600 = 1. + t562;
  t951 = Sin(var1[4]);
  t953 = Cos(var1[4]);
  t963 = Cos(var1[5]);
  t1239 = 1.000000000016*t287;
  t1241 = t373 + t839;
  t1242 = -7.e-6*t1241;
  t1263 = -1. + t1239 + t1242;
  t1286 = 1. + t300;
  t1290 = -7.e-6*t1286;
  t1295 = 7.e-6*t287;
  t1302 = t1290 + t1295 + t839;
  t1382 = t687 + t335;
  t1386 = -7.e-6*t1382;
  t1509 = t814 + t1386 + t317;
  t1579 = t1136*t1263;
  t1589 = t1093*t1302;
  t1602 = t1117*t1509;
  t1608 = t1579 + t1589 + t1602;
  t1643 = t1037*t1263;
  t1659 = t1008*t1302;
  t1668 = t1018*t1509;
  t1680 = t1643 + t1659 + t1668;
  t1200 = Sin(var1[5]);
  t1809 = -1.000000000049*t287;
  t1815 = 4.e-6*t1382;
  t1829 = 1. + t1809 + t1815;
  t1839 = 4.e-6*t1286;
  t1842 = 7.e-6*t317;
  t1845 = t1839 + t687 + t1842;
  t1848 = 4.e-6*t1241;
  t1849 = t690 + t1848 + t317;
  t1896 = t1018*t1829;
  t1897 = t1008*t1845;
  t1903 = t1037*t1849;
  t1904 = t1896 + t1897 + t1903;
  t1943 = t1117*t1829;
  t1947 = t1093*t1845;
  t1948 = t1136*t1849;
  t1951 = t1943 + t1947 + t1948;
  t1193 = t1077*t1072;
  t1198 = t977*t1151;
  t1199 = t1193 + t1198;
  t1074 = t977*t1072;
  t1160 = -1.*t1077*t1151;
  t1164 = t1074 + t1160;
  t475 = t191*t469;
  t727 = t600*t709;
  t875 = t755*t871;
  t930 = t475 + t727 + t875;
  t1186 = t963*t1164;
  t1209 = -1.*t1199*t1200;
  t1215 = t1186 + t1209;
  t2040 = Cos(var1[3]);
  t1737 = t977*t1608;
  t1739 = t1077*t1680;
  t1757 = t1737 + t1739;
  t1623 = -1.*t1077*t1608;
  t1711 = t977*t1680;
  t1724 = t1623 + t1711;
  t2071 = Sin(var1[3]);
  t1271 = t755*t1263;
  t1311 = t191*t1302;
  t1525 = t600*t1509;
  t1529 = t1271 + t1311 + t1525;
  t1726 = t963*t1724;
  t1766 = -1.*t1757*t1200;
  t1777 = t1726 + t1766;
  t1969 = t1077*t1904;
  t1984 = t977*t1951;
  t1988 = t1969 + t1984;
  t1911 = t977*t1904;
  t1953 = -1.*t1077*t1951;
  t1962 = t1911 + t1953;
  t1832 = t600*t1829;
  t1847 = t191*t1845;
  t1850 = t755*t1849;
  t1874 = t1832 + t1847 + t1850;
  t1966 = t963*t1962;
  t1989 = -1.*t1988*t1200;
  t2001 = t1966 + t1989;
  t2044 = t963*t1199;
  t2046 = t1164*t1200;
  t2051 = t2044 + t2046;
  t2072 = t953*t930;
  t2073 = -1.*t951*t1215;
  t2081 = t2072 + t2073;
  t2099 = t963*t1757;
  t2102 = t1724*t1200;
  t2125 = t2099 + t2102;
  t2141 = t953*t1529;
  t2151 = -1.*t951*t1777;
  t2158 = t2141 + t2151;
  t2175 = t963*t1988;
  t2176 = t1962*t1200;
  t2179 = t2175 + t2176;
  t2198 = t953*t1874;
  t2215 = -1.*t951*t2001;
  t2216 = t2198 + t2215;
  t1544 = t1529*t951;
  t1778 = t953*t1777;
  t1796 = t1544 + t1778;
  t2376 = 7.e-6*t534;
  t2424 = -2.598649999999999e-7*var1[14];
  t2434 = 0.148705*t1286;
  t2438 = -2.3905277499999995e-16*t287;
  t2442 = -0.038922999986*t339;
  t2452 = -0.80315*t391;
  t2458 = t1295 + t839;
  t2497 = -0.503149000008*t2458;
  t2506 = t687 + t1842;
  t2509 = -0.038924*t2506;
  t2512 = t2424 + t2434 + t2438 + t2442 + t2452 + t2497 + t2509;
  t2529 = 1.0394599999999997e-12*var1[14];
  t2536 = 1. + t1809;
  t2558 = -0.038924*t2536;
  t2566 = -0.03892299998790722*t287;
  t2570 = -0.80315*t698;
  t2578 = 0.148705*t1382;
  t2584 = t307 + t1842;
  t2586 = -3.6777349999999994e-6*t2584;
  t2590 = t814 + t317;
  t2592 = -0.503149000008*t2590;
  t2611 = t2529 + t2558 + t2566 + t2570 + t2578 + t2586 + t2592;
  t2622 = 1.8190549999999993e-12*var1[14];
  t2625 = -0.80315*t792;
  t2637 = -0.5031490000160505*t287;
  t2644 = -0.038922999986*t827;
  t2662 = t1295 + t380;
  t2664 = -3.6777349999999994e-6*t2662;
  t2679 = 0.148705*t1241;
  t2682 = t690 + t317;
  t2687 = -0.038924*t2682;
  t2689 = t2622 + t2625 + t2637 + t2644 + t2664 + t2679 + t2687;
  t2319 = -1.*t977;
  t2334 = 1. + t2319;
  t2340 = 0.15121*t1077;
  t2357 = 1.0248489999999998e-12*var1[13];
  t2365 = -0.28120900000849935*t534;
  t2366 = -2.8e-11*t534;
  t2367 = t2366 + t754;
  t2370 = -0.038748999993*t2367;
  t2392 = t2376 + t1130;
  t2422 = -2.123459e-6*t2392;
  t2515 = t1008*t2512;
  t2615 = t1018*t2611;
  t2694 = t1037*t2689;
  t2697 = t2357 + t2365 + t2370 + t2422 + t2515 + t2615 + t2694;
  t2703 = -1.4640699999999997e-7*var1[13];
  t2705 = -1.38024835e-16*t534;
  t2707 = 4.e-6*t534;
  t2708 = t2707 + t188;
  t2711 = -0.038748999993*t2708;
  t2716 = t2376 + t1004;
  t2721 = -0.281209000004*t2716;
  t2722 = t1093*t2512;
  t2729 = t1117*t2611;
  t2731 = t1136*t2689;
  t2732 = t2703 + t2705 + t2711 + t2721 + t2722 + t2729 + t2731;
  t952 = t930*t951;
  t1219 = t953*t1215;
  t1222 = t952 + t1219;
  t2743 = -0.15121*t2334;
  t2744 = t977*t2697;
  t2769 = -1.*t1077*t2732;
  t2770 = t2743 + t2340 + t2744 + t2769;
  t2336 = 0.15121*t2334;
  t2699 = t1077*t2697;
  t2734 = t977*t2732;
  t2735 = t2336 + t2340 + t2699 + t2734;
  t2804 = 5.856279999999999e-13*var1[13];
  t2818 = -0.0387489999948987*t534;
  t2819 = t2707 + t1107;
  t2823 = -2.123459e-6*t2819;
  t2825 = t2366 + t176;
  t2827 = -0.281209000004*t2825;
  t2832 = t191*t2512;
  t2840 = t600*t2611;
  t2842 = t755*t2689;
  t2843 = t2804 + t2818 + t2823 + t2827 + t2832 + t2840 + t2842;
  t2864 = t963*t2770;
  t2871 = -1.*t2735*t1200;
  t2892 = t2864 + t2871;
  t2740 = t963*t2735;
  t2784 = t2770*t1200;
  t2785 = t2740 + t2784;
  t2855 = t2843*t951;
  t2893 = t953*t2892;
  t2895 = t2855 + t2893;
  t2907 = t953*t2843;
  t2924 = -1.*t951*t2892;
  t2927 = t2907 + t2924;
  t1884 = t1874*t951;
  t2028 = t953*t2001;
  t2030 = t1884 + t2028;
  t2799 = -1.*t2051*t2785;
  t2947 = t2125*t2785;
  t3043 = t2051*t2785;
  t3075 = -1.*t2179*t2785;
  t3132 = -1.*t2125*t2785;
  t3166 = t2179*t2785;
  t3243 = -1.*t930*t2843;
  t3259 = t1529*t2843;
  t3276 = t930*t2843;
  t3297 = -1.*t1874*t2843;
  t3318 = -1.*t1529*t2843;
  t3346 = t1874*t2843;
  t3730 = t2512*t1302;
  t3739 = t1509*t2611;
  t3740 = t1263*t2689;
  t3751 = t3730 + t3739 + t3740;
  t3766 = -1.*t469*t2512;
  t3773 = -1.*t709*t2611;
  t3778 = -1.*t871*t2689;
  t3782 = t3766 + t3773 + t3778;
  t3842 = t469*t2512;
  t3846 = t709*t2611;
  t3850 = t871*t2689;
  t3853 = t3842 + t3846 + t3850;
  t3857 = -1.*t2512*t1845;
  t3859 = -1.*t1829*t2611;
  t3863 = -1.*t1849*t2689;
  t3864 = t3857 + t3859 + t3863;
  t3662 = 6.5e-11*t287;
  t3922 = -1.*t2512*t1302;
  t3931 = -1.*t1509*t2611;
  t3935 = -1.*t1263*t2689;
  t3936 = t3922 + t3931 + t3935;
  t3941 = t2512*t1845;
  t3942 = t1829*t2611;
  t3943 = t1849*t2689;
  t3967 = t3941 + t3942 + t3943;
  p_output1[0]=t1796*var2[0] + t2030*var2[1] + t1222*var2[2];
  p_output1[1]=(t2040*t2125 - 1.*t2071*t2158)*var2[0] + (t2040*t2179 - 1.*t2071*t2216)*var2[1] + (t2040*t2051 - 1.*t2071*t2081)*var2[2];
  p_output1[2]=(t2071*t2125 + t2040*t2158)*var2[0] + (t2071*t2179 + t2040*t2216)*var2[1] + (t2051*t2071 + t2040*t2081)*var2[2];
  p_output1[3]=(t2030*(t1222*t2895 + t2081*t2927 + t3043) + t1222*(-1.*t2030*t2895 - 1.*t2216*t2927 + t3075))*var2[0] + (t1796*(t2799 - 1.*t1222*t2895 - 1.*t2081*t2927) + t1222*(t1796*t2895 + t2158*t2927 + t2947))*var2[1] + (t2030*(-1.*t1796*t2895 - 1.*t2158*t2927 + t3132) + t1796*(t2030*t2895 + t2216*t2927 + t3166))*var2[2];
  p_output1[4]=(t2179*(t1215*t2892 + t3043 + t3276) + t2051*(-1.*t2001*t2892 + t3075 + t3297))*var2[0] + (t2125*(t2799 - 1.*t1215*t2892 + t3243) + t2051*(t1777*t2892 + t2947 + t3259))*var2[1] + (t2179*(-1.*t1777*t2892 + t3132 + t3318) + t2125*(t2001*t2892 + t3166 + t3346))*var2[2];
  p_output1[5]=(t1874*(t1199*t2735 + t1164*t2770 + t3276) + (-1.*t1988*t2735 - 1.*t1962*t2770 + t3297)*t930)*var2[0] + (t1529*(-1.*t1199*t2735 - 1.*t1164*t2770 + t3243) + (t1757*t2735 + t1724*t2770 + t3259)*t930)*var2[1] + (t1874*(-1.*t1757*t2735 - 1.*t1724*t2770 + t3318) + t1529*(t1988*t2735 + t1962*t2770 + t3346))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.15121*t1608 + 0.15121*t1680 + t1874*(t1072*t2697 + t1151*t2732 + t3276) + (-1.*t1904*t2697 - 1.*t1951*t2732 + t3297)*t930)*var2[0] + (0.15121*t1904 + 0.15121*t1951 + t1529*(-1.*t1072*t2697 - 1.*t1151*t2732 + t3243) + (t1680*t2697 + t1608*t2732 + t3259)*t930)*var2[1] + (0.15121*t1072 + 0.15121*t1151 + t1874*(-1.*t1680*t2697 - 1.*t1608*t2732 + t3318) + t1529*(t1904*t2697 + t1951*t2732 + t3346))*var2[2];
  p_output1[13]=(0.038749*t1263 - 0.281209*t1509 + 1.e-6*(7.e-6*t1286 + t373 + t380) + t1845*t3853 + t3864*t469 + 4.e-6*(-1.*t1829*t3853 - 1.*t3864*t709) - 7.e-6*(t1849*t3853 + t3864*t871))*var2[0] + (-0.281209*t1829 + 0.038749*t1849 + 1.e-6*(t307 + t335 + 4.e-6*(-1. + t3662)) + t1302*t3782 + t3751*t469 + 4.e-6*(-1.*t1509*t3782 - 1.*t3751*t709) - 7.e-6*(t1263*t3782 + t3751*t871))*var2[1] + (1.e-6*(-1. + 4.e-6*t2506 + t3662 + 7.e-6*t391) + t1845*t3936 + t1302*t3967 - 7.e-6*(t1849*t3936 + t1263*t3967) + 4.e-6*(-1.*t1829*t3936 - 1.*t1509*t3967) - 0.281209*t709 + 0.038749*t871)*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
