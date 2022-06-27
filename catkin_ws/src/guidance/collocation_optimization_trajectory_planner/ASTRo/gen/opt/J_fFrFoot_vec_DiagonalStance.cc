/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:22 GMT+02:00
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
  double t385;
  double t1089;
  double t527;
  double t1418;
  double t1488;
  double t1417;
  double t1527;
  double t965;
  double t1588;
  double t1590;
  double t1678;
  double t1097;
  double t1393;
  double t1477;
  double t1562;
  double t1581;
  double t1795;
  double t1796;
  double t1797;
  double t1802;
  double t1819;
  double t1840;
  double t1844;
  double t1846;
  double t1850;
  double t1855;
  double t1859;
  double t1871;
  double t1910;
  double t1755;
  double t1756;
  double t1767;
  double t1771;
  double t1773;
  double t1783;
  double t1697;
  double t1699;
  double t1704;
  double t1988;
  double t2075;
  double t2091;
  double t2469;
  double t2529;
  double t2537;
  double t1004;
  double t1156;
  double t1161;
  double t2582;
  double t2584;
  double t2586;
  double t2615;
  double t2613;
  double t1585;
  double t1751;
  double t1752;
  double t1769;
  double t1790;
  double t1791;
  double t3135;
  double t3153;
  double t3178;
  double t3185;
  double t3187;
  double t3208;
  double t3327;
  double t3352;
  double t3353;
  double t3359;
  double t3386;
  double t3397;
  double t3472;
  double t2176;
  double t2232;
  double t2249;
  double t2854;
  double t2855;
  double t2879;
  double t2770;
  double t2771;
  double t2791;
  double t2595;
  double t2597;
  double t2603;
  double t3786;
  double t3787;
  double t3793;
  double t2629;
  double t2647;
  double t2664;
  double t3803;
  double t3804;
  double t3805;
  double t3867;
  double t3985;
  double t4035;
  double t2991;
  double t3023;
  double t3043;
  double t3060;
  double t3063;
  double t3083;
  double t4681;
  double t4687;
  double t4707;
  double t4825;
  double t4872;
  double t4953;
  double t5044;
  double t5045;
  double t5223;
  double t5256;
  double t5263;
  double t5264;
  double t5265;
  double t3499;
  double t3689;
  double t3732;
  double t3759;
  double t3760;
  double t3767;
  double t3807;
  double t3808;
  double t3814;
  double t3825;
  double t3831;
  double t3835;
  double t5334;
  double t5364;
  double t5366;
  double t5387;
  double t5391;
  double t5395;
  double t5420;
  double t5424;
  double t5428;
  double t5429;
  double t5430;
  double t5451;
  double t5452;
  double t5454;
  double t5456;
  double t5460;
  double t5461;
  double t5463;
  double t5465;
  double t5418;
  double t5432;
  double t5445;
  double t5449;
  double t5453;
  double t5468;
  double t5469;
  double t5470;
  double t5472;
  double t5475;
  double t5479;
  double t5483;
  double t5493;
  double t5498;
  double t5499;
  double t5507;
  double t5508;
  double t5510;
  double t5450;
  double t5500;
  double t5505;
  double t5524;
  double t5526;
  double t5528;
  double t5514;
  double t5516;
  double t5518;
  double t5519;
  double t5523;
  double t5529;
  double t5533;
  double t5828;
  double t5830;
  double t5834;
  double t5543;
  double t5544;
  double t5547;
  double t5550;
  double t5563;
  double t5564;
  double t5566;
  double t5567;
  double t5827;
  double t5838;
  double t5620;
  double t5626;
  double t5629;
  double t5630;
  double t5664;
  double t5665;
  double t5666;
  double t5670;
  double t5773;
  double t5778;
  double t5781;
  double t5788;
  double t5823;
  double t5844;
  double t7524;
  double t7603;
  double t7620;
  double t7747;
  double t7889;
  double t7924;
  double t7933;
  double t5850;
  double t5862;
  double t5875;
  double t8024;
  double t8027;
  double t8132;
  double t5893;
  double t5924;
  double t5939;
  double t5947;
  double t5995;
  double t6000;
  double t6196;
  double t6380;
  double t6758;
  double t6766;
  double t6788;
  double t6800;
  double t6849;
  double t6854;
  double t6909;
  double t7107;
  double t7222;
  double t7296;
  double t7301;
  double t9710;
  double t9732;
  double t9735;
  double t9738;
  double t9832;
  double t9836;
  double t9845;
  double t2158;
  double t2305;
  double t2347;
  double t9660;
  double t9678;
  double t9684;
  double t9788;
  double t9847;
  double t9852;
  double t9868;
  double t9871;
  double t9881;
  double t10451;
  double t10461;
  double t10479;
  double t10499;
  double t10503;
  double t10593;
  double t10645;
  double t10650;
  double t10480;
  double t10493;
  double t10494;
  double t10504;
  double t10654;
  double t10659;
  double t10747;
  double t10766;
  double t10783;
  double t2588;
  double t2604;
  double t2605;
  double t5848;
  double t5876;
  double t5996;
  double t6392;
  double t6810;
  double t7039;
  double t12814;
  double t12839;
  double t12840;
  double t8170;
  double t12848;
  double t8228;
  double t12887;
  double t13042;
  double t13043;
  double t13047;
  double t13048;
  double t13051;
  double t13052;
  double t13062;
  double t8700;
  double t13081;
  double t8914;
  double t13115;
  double t13129;
  double t13131;
  double t13140;
  double t13151;
  double t9206;
  double t13168;
  double t13200;
  double t13231;
  double t13242;
  double t13249;
  double t9546;
  double t13383;
  double t13396;
  double t13403;
  double t13404;
  double t13405;
  double t9700;
  double t9931;
  double t10025;
  double t10133;
  double t10140;
  double t10180;
  double t10223;
  double t10292;
  double t10496;
  double t10925;
  double t11284;
  double t11568;
  double t11590;
  double t11728;
  double t12415;
  double t12423;
  double t13712;
  double t13721;
  double t22659;
  double t22681;
  double t13727;
  double t22299;
  double t22302;
  double t22304;
  double t22316;
  double t22321;
  double t22325;
  double t22337;
  double t22368;
  double t22624;
  double t19451;
  double t21172;
  double t21175;
  double t22837;
  double t22838;
  double t22839;
  double t23063;
  double t23064;
  double t23065;
  double t23066;
  double t23068;
  double t23071;
  double t23109;
  double t23141;
  double t23498;
  double t23499;
  t385 = Sin(var1[4]);
  t1089 = Cos(var1[12]);
  t527 = Cos(var1[5]);
  t1418 = Cos(var1[14]);
  t1488 = Sin(var1[13]);
  t1417 = Cos(var1[13]);
  t1527 = Sin(var1[14]);
  t965 = Sin(var1[12]);
  t1588 = t1418*t1488;
  t1590 = -1.*t1417*t1527;
  t1678 = t1588 + t1590;
  t1097 = Sin(var1[5]);
  t1393 = Cos(var1[4]);
  t1477 = t1417*t1418;
  t1562 = t1488*t1527;
  t1581 = t1477 + t1562;
  t1795 = -1.*t1089*t527;
  t1796 = t965*t1097;
  t1797 = t1795 + t1796;
  t1802 = var2[1]*t1393*t1797;
  t1819 = -1.*t527*t965*t1678;
  t1840 = -1.*t1089*t1678*t1097;
  t1844 = t1819 + t1840;
  t1846 = var2[2]*t1393*t1844;
  t1850 = -1.*t527*t965*t1581;
  t1855 = -1.*t1089*t1581*t1097;
  t1859 = t1850 + t1855;
  t1871 = var2[0]*t1393*t1859;
  t1910 = t1802 + t1846 + t1871;
  t1755 = -1.*t1418*t1488;
  t1756 = t1417*t1527;
  t1767 = t1755 + t1756;
  t1771 = t1089*t527*t1581;
  t1773 = -1.*t965*t1581*t1097;
  t1783 = t1771 + t1773;
  t1697 = t1089*t527*t1678;
  t1699 = -1.*t965*t1678*t1097;
  t1704 = t1697 + t1699;
  t1988 = -1.*t1417*t1418;
  t2075 = -1.*t1488*t1527;
  t2091 = t1988 + t2075;
  t2469 = t1767*t385;
  t2529 = t1393*t1783;
  t2537 = t2469 + t2529;
  t1004 = -1.*t527*t965;
  t1156 = -1.*t1089*t1097;
  t1161 = t1004 + t1156;
  t2582 = t1581*t385;
  t2584 = t1393*t1704;
  t2586 = t2582 + t2584;
  t2615 = Sin(var1[3]);
  t2613 = Cos(var1[3]);
  t1585 = t1393*t1581;
  t1751 = -1.*t385*t1704;
  t1752 = t1585 + t1751;
  t1769 = t1393*t1767;
  t1790 = -1.*t385*t1783;
  t1791 = t1769 + t1790;
  t3135 = t2613*t1161;
  t3153 = t2615*t385*t1797;
  t3178 = t3135 + t3153;
  t3185 = var2[1]*t3178;
  t3187 = t2615*t385*t1844;
  t3208 = t2613*t1704;
  t3327 = t3187 + t3208;
  t3352 = var2[2]*t3327;
  t3353 = t2615*t385*t1859;
  t3359 = t2613*t1783;
  t3386 = t3353 + t3359;
  t3397 = var2[0]*t3386;
  t3472 = t3185 + t3352 + t3397;
  t2176 = t1089*t527*t1767;
  t2232 = -1.*t965*t1767*t1097;
  t2249 = t2176 + t2232;
  t2854 = t527*t965*t1581;
  t2855 = t1089*t1581*t1097;
  t2879 = t2854 + t2855;
  t2770 = t527*t965*t1678;
  t2771 = t1089*t1678*t1097;
  t2791 = t2770 + t2771;
  t2595 = t1089*t527*t2091;
  t2597 = -1.*t965*t2091*t1097;
  t2603 = t2595 + t2597;
  t3786 = t2613*t2879;
  t3787 = -1.*t2615*t1791;
  t3793 = t3786 + t3787;
  t2629 = t1089*t527;
  t2647 = -1.*t965*t1097;
  t2664 = t2629 + t2647;
  t3803 = t2613*t2791;
  t3804 = -1.*t2615*t1752;
  t3805 = t3803 + t3804;
  t3867 = t2615*t385*t1161;
  t3985 = t2613*t2664;
  t4035 = t3867 + t3985;
  t2991 = -1.*t1581*t385;
  t3023 = -1.*t1393*t1704;
  t3043 = t2991 + t3023;
  t3060 = -1.*t1767*t385;
  t3063 = -1.*t1393*t1783;
  t3083 = t3060 + t3063;
  t4681 = t2615*t1161;
  t4687 = -1.*t2613*t385*t1797;
  t4707 = t4681 + t4687;
  t4825 = var2[1]*t4707;
  t4872 = -1.*t2613*t385*t1844;
  t4953 = t2615*t1704;
  t5044 = t4872 + t4953;
  t5045 = var2[2]*t5044;
  t5223 = -1.*t2613*t385*t1859;
  t5256 = t2615*t1783;
  t5263 = t5223 + t5256;
  t5264 = var2[0]*t5263;
  t5265 = t4825 + t5045 + t5264;
  t3499 = t527*t965*t1767;
  t3689 = t1089*t1767*t1097;
  t3732 = t3499 + t3689;
  t3759 = t1393*t2091;
  t3760 = -1.*t385*t2249;
  t3767 = t3759 + t3760;
  t3807 = t527*t965*t2091;
  t3808 = t1089*t2091*t1097;
  t3814 = t3807 + t3808;
  t3825 = t1393*t1678;
  t3831 = -1.*t385*t2603;
  t3835 = t3825 + t3831;
  t5334 = t2615*t2879;
  t5364 = t2613*t1791;
  t5366 = t5334 + t5364;
  t5387 = t2615*t2791;
  t5391 = t2613*t1752;
  t5395 = t5387 + t5391;
  t5420 = -1.*t1418;
  t5424 = 1. + t5420;
  t5428 = 0.50321*t5424;
  t5429 = 0.19821*t1418;
  t5430 = t5428 + t5429;
  t5451 = -1.*t1089;
  t5452 = 1. + t5451;
  t5454 = -1.*t1417;
  t5456 = 1. + t5454;
  t5460 = 0.28121*t5456;
  t5461 = t1417*t5430;
  t5463 = -0.305*t1488*t1527;
  t5465 = t5460 + t5461 + t5463;
  t5418 = 0.28121*t1488;
  t5432 = -1.*t5430*t1488;
  t5445 = -0.305*t1417*t1527;
  t5449 = t5418 + t5432 + t5445;
  t5453 = 0.15121*t5452;
  t5468 = t1089*t5465;
  t5469 = t5453 + t5468;
  t5470 = t527*t5469;
  t5472 = -0.15121*t5452;
  t5475 = -0.15121*t1089;
  t5479 = -0.15121*t965;
  t5483 = t965*t5465;
  t5493 = t5472 + t5475 + t5479 + t5483;
  t5498 = -1.*t5493*t1097;
  t5499 = t5470 + t5498;
  t5507 = t5449*t385;
  t5508 = t1393*t5499;
  t5510 = t5507 + t5508;
  t5450 = -1.*t5449*t385;
  t5500 = -1.*t1393*t5499;
  t5505 = t5450 + t5500;
  t5524 = t1393*t5449;
  t5526 = -1.*t385*t5499;
  t5528 = t5524 + t5526;
  t5514 = t527*t5493;
  t5516 = t5469*t1097;
  t5518 = t5514 + t5516;
  t5519 = -1.*t2664*t5518;
  t5523 = -1.*t1393*t1161*t5510;
  t5529 = t385*t1161*t5528;
  t5533 = t5519 + t5523 + t5529;
  t5828 = -1.*t527*t5493;
  t5830 = -1.*t5469*t1097;
  t5834 = t5828 + t5830;
  t5543 = t2791*t5518;
  t5544 = t2586*t5510;
  t5547 = t1752*t5528;
  t5550 = t5543 + t5544 + t5547;
  t5563 = t2664*t5518;
  t5564 = t1393*t1161*t5510;
  t5566 = -1.*t385*t1161*t5528;
  t5567 = t5563 + t5564 + t5566;
  t5827 = Power(t1393,2);
  t5838 = Power(t385,2);
  t5620 = -1.*t2879*t5518;
  t5626 = -1.*t2537*t5510;
  t5629 = -1.*t1791*t5528;
  t5630 = t5620 + t5626 + t5629;
  t5664 = -1.*t2791*t5518;
  t5665 = -1.*t2586*t5510;
  t5666 = -1.*t1752*t5528;
  t5670 = t5664 + t5665 + t5666;
  t5773 = t2879*t5518;
  t5778 = t2537*t5510;
  t5781 = t1791*t5528;
  t5788 = t5773 + t5778 + t5781;
  t5823 = t1393*t1844*t5533;
  t5844 = -1.*t1161*t5518;
  t7524 = 0.15121*t965;
  t7603 = -1.*t965*t5465;
  t7620 = t7524 + t7603;
  t7747 = t527*t7620;
  t7889 = t5475 + t5468;
  t7924 = -1.*t7889*t1097;
  t7933 = t7747 + t7924;
  t5850 = -1.*t1393*t1797*t5510;
  t5862 = t385*t1797*t5528;
  t5875 = t1704*t5518;
  t8024 = t527*t7889;
  t8027 = t7620*t1097;
  t8132 = t8024 + t8027;
  t5893 = t1393*t1844*t5510;
  t5924 = -1.*t385*t1844*t5528;
  t5939 = t1393*t1797*t5550;
  t5947 = t1393*t1859*t5567;
  t5995 = t1161*t5518;
  t6000 = t1393*t1797*t5510;
  t6196 = -1.*t385*t1797*t5528;
  t6380 = -1.*t1783*t5518;
  t6758 = -1.*t1393*t1859*t5510;
  t6766 = t385*t1859*t5528;
  t6788 = t1393*t1797*t5630;
  t6800 = -1.*t1704*t5518;
  t6849 = -1.*t1393*t1844*t5510;
  t6854 = t385*t1844*t5528;
  t6909 = t1783*t5518;
  t7107 = t1393*t1859*t5510;
  t7222 = -1.*t385*t1859*t5528;
  t7296 = t1393*t1859*t5670;
  t7301 = t1393*t1844*t5788;
  t9710 = 0.28121*t1417;
  t9732 = -1.*t1417*t5430;
  t9735 = 0.305*t1488*t1527;
  t9738 = t9710 + t9732 + t9735;
  t9832 = t1089*t527*t5449;
  t9836 = -1.*t965*t5449*t1097;
  t9845 = t9832 + t9836;
  t2158 = t2091*t385;
  t2305 = t1393*t2249;
  t2347 = t2158 + t2305;
  t9660 = t527*t965*t5449;
  t9678 = t1089*t5449*t1097;
  t9684 = t9660 + t9678;
  t9788 = t9738*t385;
  t9847 = t1393*t9845;
  t9852 = t9788 + t9847;
  t9868 = t1393*t9738;
  t9871 = -1.*t385*t9845;
  t9881 = t9868 + t9871;
  t10451 = -0.305*t1418*t1488;
  t10461 = 0.305*t1417*t1527;
  t10479 = t10451 + t10461;
  t10499 = -0.305*t1417*t1418;
  t10503 = t10499 + t5463;
  t10593 = t1089*t527*t10479;
  t10645 = -1.*t965*t10479*t1097;
  t10650 = t10593 + t10645;
  t10480 = t527*t965*t10479;
  t10493 = t1089*t10479*t1097;
  t10494 = t10480 + t10493;
  t10504 = t10503*t385;
  t10654 = t1393*t10650;
  t10659 = t10504 + t10654;
  t10747 = t1393*t10503;
  t10766 = -1.*t385*t10650;
  t10783 = t10747 + t10766;
  t2588 = t1678*t385;
  t2604 = t1393*t2603;
  t2605 = t2588 + t2604;
  t5848 = -1.*t2664*t5499;
  t5876 = t2791*t5499;
  t5996 = t2664*t5499;
  t6392 = -1.*t2879*t5499;
  t6810 = -1.*t2791*t5499;
  t7039 = t2879*t5499;
  t12814 = -1.*t1161*t5499;
  t12839 = t5519 + t12814;
  t12840 = t1704*t12839;
  t8170 = -1.*t2664*t8132;
  t12848 = -1.*t1797*t5499;
  t8228 = t2791*t8132;
  t12887 = t1844*t5499;
  t13042 = t5449*t1581;
  t13043 = t1704*t5499;
  t13047 = t13042 + t5543 + t13043;
  t13048 = t1161*t13047;
  t13051 = t1161*t5499;
  t13052 = t5563 + t13051;
  t13062 = t1783*t13052;
  t8700 = t2664*t8132;
  t13081 = t1797*t5499;
  t8914 = -1.*t2879*t8132;
  t13115 = -1.*t1859*t5499;
  t13129 = -1.*t5449*t1767;
  t13131 = -1.*t1783*t5499;
  t13140 = t13129 + t5620 + t13131;
  t13151 = t1161*t13140;
  t9206 = -1.*t2791*t8132;
  t13168 = -1.*t1844*t5499;
  t13200 = -1.*t5449*t1581;
  t13231 = -1.*t1704*t5499;
  t13242 = t13200 + t5664 + t13231;
  t13249 = t1783*t13242;
  t9546 = t2879*t8132;
  t13383 = t1859*t5499;
  t13396 = t5449*t1767;
  t13403 = t1783*t5499;
  t13404 = t13396 + t5773 + t13403;
  t13405 = t1704*t13404;
  t9700 = t2664*t9684;
  t9931 = -1.*t9684*t2879;
  t10025 = -1.*t3732*t5518;
  t10133 = t9684*t2879;
  t10140 = t3732*t5518;
  t10180 = -1.*t2791*t9684;
  t10223 = -1.*t2664*t9684;
  t10292 = t2791*t9684;
  t10496 = t2664*t10494;
  t10925 = -1.*t10494*t2879;
  t11284 = -1.*t2664*t10494;
  t11568 = t2791*t10494;
  t11590 = t3814*t5518;
  t11728 = t10494*t2879;
  t12415 = -1.*t2791*t10494;
  t12423 = -1.*t3814*t5518;
  t13712 = t5449*t2091;
  t13721 = t1767*t9738;
  t22659 = Power(t1089,2);
  t22681 = Power(t965,2);
  t13727 = -1.*t9738*t1581;
  t22299 = t965*t5469;
  t22302 = -1.*t1089*t5493;
  t22304 = t22299 + t22302;
  t22316 = -1.*t965*t5469;
  t22321 = t1089*t5493;
  t22325 = t22316 + t22321;
  t22337 = -1.*t1089*t1678*t5469;
  t22368 = -1.*t965*t1678*t5493;
  t22624 = t13200 + t22337 + t22368;
  t19451 = t1767*t10503;
  t21172 = -1.*t1678*t5449;
  t21175 = -1.*t10503*t1581;
  t22837 = t1089*t1581*t5469;
  t22838 = t965*t1581*t5493;
  t22839 = t13396 + t22837 + t22838;
  t23063 = -0.15121*t2091;
  t23064 = -0.15121*t1581;
  t23065 = t23063 + t23064;
  t23066 = var2[2]*t23065;
  t23068 = -1.*t1678*t5465;
  t23071 = t23068 + t13200;
  t23109 = t5465*t1581;
  t23141 = t13396 + t23109;
  t23498 = 0.28121*t1418;
  t23499 = -1.*t5430*t1418;
  p_output1[0]=t1791*var2[0] - 1.*t1161*t385*var2[1] + t1752*var2[2];
  p_output1[1]=t1910;
  p_output1[2]=t1910;
  p_output1[3]=t2347*var2[0] + t2537*var2[2];
  p_output1[4]=t2586*var2[0] + t2605*var2[2];
  p_output1[5]=t2537;
  p_output1[6]=t1161*t1393;
  p_output1[7]=t2586;
  p_output1[8]=(-1.*t1791*t2613 - 1.*t2615*t2879)*var2[0] + (-1.*t2615*t2664 + t1161*t2613*t385)*var2[1] + (-1.*t1752*t2613 - 1.*t2615*t2791)*var2[2];
  p_output1[9]=-1.*t2615*t3083*var2[0] + t1161*t1393*t2615*var2[1] - 1.*t2615*t3043*var2[2];
  p_output1[10]=t3472;
  p_output1[11]=t3472;
  p_output1[12]=(t2613*t3732 - 1.*t2615*t3767)*var2[0] + t3793*var2[2];
  p_output1[13]=t3805*var2[0] + (t2613*t3814 - 1.*t2615*t3835)*var2[2];
  p_output1[14]=t3793;
  p_output1[15]=t4035;
  p_output1[16]=t3805;
  p_output1[17]=t3793*var2[0] + t4035*var2[1] + t3805*var2[2];
  p_output1[18]=t2613*t3083*var2[0] - 1.*t1161*t1393*t2613*var2[1] + t2613*t3043*var2[2];
  p_output1[19]=t5265;
  p_output1[20]=t5265;
  p_output1[21]=(t2615*t3732 + t2613*t3767)*var2[0] + t5366*var2[2];
  p_output1[22]=t5395*var2[0] + (t2615*t3814 + t2613*t3835)*var2[2];
  p_output1[23]=t5366;
  p_output1[24]=t2615*t2664 - 1.*t1161*t2613*t385;
  p_output1[25]=t5395;
  p_output1[26]=(t2586*(t1161*t385*t5505 + t1161*t385*t5510) + t1161*t1393*(t1752*t5505 + t1752*t5510 + t2586*t5528 + t3043*t5528) + t1752*t5533 - 1.*t1161*t385*t5550)*var2[0] + (t2537*(-1.*t1752*t5505 - 1.*t1752*t5510 - 1.*t2586*t5528 - 1.*t3043*t5528) + t2586*(t1791*t5505 + t1791*t5510 + t2537*t5528 + t3083*t5528) + t1791*t5670 + t1752*t5788)*var2[1] + (t2537*(-1.*t1161*t385*t5505 - 1.*t1161*t385*t5510) + t1161*t1393*(-1.*t1791*t5505 - 1.*t1791*t5510 - 1.*t2537*t5528 - 1.*t3083*t5528) + t1791*t5567 - 1.*t1161*t385*t5630)*var2[2];
  p_output1[27]=(t5823 + t2586*(-1.*t1161*t5827*t5834 - 1.*t1161*t5834*t5838 + t5844 + t5848 + t5850 + t5862) + t1161*t1393*(t1393*t2586*t5834 - 1.*t1752*t385*t5834 + t5875 + t5876 + t5893 + t5924) + t5939)*var2[0] + (t2537*(-1.*t1393*t2586*t5834 + t1752*t385*t5834 + t6800 + t6810 + t6849 + t6854) + t2586*(t1393*t2537*t5834 - 1.*t1791*t385*t5834 + t6909 + t7039 + t7107 + t7222) + t7296 + t7301)*var2[1] + (t5947 + t2537*(t1161*t5827*t5834 + t1161*t5834*t5838 + t5995 + t5996 + t6000 + t6196) + t1161*t1393*(-1.*t1393*t2537*t5834 + t1791*t385*t5834 + t6380 + t6392 + t6758 + t6766) + t6788)*var2[2];
  p_output1[28]=(t5823 + t5939 + t2586*(t5844 + t5850 + t5862 - 1.*t1161*t5827*t7933 - 1.*t1161*t5838*t7933 + t8170) + t1161*t1393*(t5875 + t5893 + t5924 + t1393*t2586*t7933 - 1.*t1752*t385*t7933 + t8228))*var2[0] + (t7296 + t7301 + t2537*(t6800 + t6849 + t6854 - 1.*t1393*t2586*t7933 + t1752*t385*t7933 + t9206) + t2586*(t6909 + t7107 + t7222 + t1393*t2537*t7933 - 1.*t1791*t385*t7933 + t9546))*var2[1] + (t5947 + t6788 + t2537*(t5995 + t6000 + t6196 + t1161*t5827*t7933 + t1161*t5838*t7933 + t8700) + t1161*t1393*(t6380 + t6758 + t6766 - 1.*t1393*t2537*t7933 + t1791*t385*t7933 + t8914))*var2[2];
  p_output1[29]=(t2537*t5533 + t1161*t1393*(t10292 + t5773 + t5778 + t5781 + t2586*t9852 + t1752*t9881) + t2586*(t10223 - 1.*t1161*t1393*t9852 + t1161*t385*t9881))*var2[0] + (t2347*t5670 + t2537*t5788 + t2537*(t10180 + t5620 + t5626 + t5629 - 1.*t2586*t9852 - 1.*t1752*t9881) + t2586*(t10133 + t10140 + t2347*t5510 + t3767*t5528 + t2537*t9852 + t1791*t9881))*var2[1] + (t2347*t5567 + t2537*(t9700 + t1161*t1393*t9852 - 1.*t1161*t385*t9881) + t1161*t1393*(t10025 - 1.*t2347*t5510 - 1.*t3767*t5528 - 1.*t2537*t9852 - 1.*t1791*t9881 + t9931))*var2[2];
  p_output1[30]=(t2586*(t11284 - 1.*t10659*t1161*t1393 + t10783*t1161*t385) + t1161*t1393*(t11568 + t11590 + t10783*t1752 + t10659*t2586 + t2605*t5510 + t3835*t5528) + t2605*t5533)*var2[0] + (t2537*(t12415 + t12423 - 1.*t10783*t1752 - 1.*t10659*t2586 - 1.*t2605*t5510 - 1.*t3835*t5528) + t2586*(t11728 + t10783*t1791 + t10659*t2537 + t5543 + t5544 + t5547) + t2586*t5670 + t2605*t5788)*var2[1] + (t2537*(t10496 + t10659*t1161*t1393 - 1.*t10783*t1161*t385) + t2586*t5567 + t1161*t1393*(t10925 - 1.*t10783*t1791 - 1.*t10659*t2537 + t5664 + t5665 + t5666))*var2[2];
  p_output1[31]=t2586*t5533 + t1161*t1393*t5550;
  p_output1[32]=t2537*t5670 + t2586*t5788;
  p_output1[33]=t2537*t5567 + t1161*t1393*t5630;
  p_output1[34]=(t12840 + t13048 + t2791*(t12848 - 1.*t1161*t5834 + t5844 + t5848) + t2664*(t12887 + t1704*t5834 + t5875 + t5876))*var2[0] + (t13249 + t13405 + t2879*(t13168 - 1.*t1704*t5834 + t6800 + t6810) + t2791*(t13383 + t1783*t5834 + t6909 + t7039))*var2[1] + (t13062 + t13151 + t2879*(t13081 + t1161*t5834 + t5995 + t5996) + t2664*(t13115 - 1.*t1783*t5834 + t6380 + t6392))*var2[2];
  p_output1[35]=(t12840 + t13048 + t2791*(t12848 + t5844 - 1.*t1161*t7933 + t8170) + t2664*(t12887 + t5875 + t1704*t7933 + t8228))*var2[0] + (t13249 + t13405 + t2879*(t13168 + t6800 - 1.*t1704*t7933 + t9206) + t2791*(t13383 + t6909 + t1783*t7933 + t9546))*var2[1] + (t13062 + t13151 + t2879*(t13081 + t5995 + t1161*t7933 + t8700) + t2664*(t13115 + t6380 - 1.*t1783*t7933 + t8914))*var2[2];
  p_output1[36]=(t12839*t2879 + t2791*(t10223 - 1.*t1161*t9845) + t2664*(t10292 + t13396 + t13403 + t5773 + t1581*t9738 + t1704*t9845))*var2[0] + (t13404*t2879 + t13242*t3732 + t2879*(t10180 + t13129 + t13131 + t13727 + t5620 - 1.*t1704*t9845) + t2791*(t10133 + t10140 + t13712 + t13721 + t2249*t5499 + t1783*t9845))*var2[1] + (t13052*t3732 + t2879*(t9700 + t1161*t9845) + t2664*(t10025 - 1.*t2091*t5449 - 1.*t2249*t5499 - 1.*t1767*t9738 - 1.*t1783*t9845 + t9931))*var2[2];
  p_output1[37]=((t11284 - 1.*t10650*t1161)*t2791 + t12839*t3814 + t2664*(t11568 + t11590 + t10503*t1581 + t10650*t1704 + t1678*t5449 + t2603*t5499))*var2[0] + (t13242*t2791 + t13404*t3814 + t2879*(t12415 + t12423 - 1.*t10650*t1704 + t21172 + t21175 - 1.*t2603*t5499) + t2791*(t11728 + t13042 + t13043 + t10650*t1783 + t19451 + t5543))*var2[1] + (t13052*t2791 + (t10496 + t10650*t1161)*t2879 + t2664*(t10925 + t13200 + t13231 - 1.*t10503*t1767 - 1.*t10650*t1783 + t5664))*var2[2];
  p_output1[38]=t13047*t2664 + t12839*t2791;
  p_output1[39]=t13404*t2791 + t13242*t2879;
  p_output1[40]=t13140*t2664 + t13052*t2879;
  p_output1[41]=t1581*(t1089*t5469 - 1.*t1089*t7889 + t5493*t965 + t7620*t965)*var2[0] + (t1581*(t1089*t1581*t5493 + t1089*t1581*t7620 - 1.*t1581*t5469*t965 + t1581*t7889*t965) + t1767*(-1.*t1089*t1678*t5493 - 1.*t1089*t1678*t7620 + t1678*t5469*t965 - 1.*t1678*t7889*t965))*var2[1] + t1767*(-1.*t1089*t5469 + t1089*t7889 - 1.*t5493*t965 - 1.*t7620*t965)*var2[2];
  p_output1[42]=t1767*t22304*var2[0] + (t2091*t22624 + t1767*t22839 + t1767*(t13129 + t13727 - 1.*t1678*t22659*t5449 - 1.*t1678*t22681*t5449 - 1.*t1089*t1581*t5469 - 1.*t1581*t5493*t965) + t1581*(t13712 + t13721 + t1581*t22659*t5449 + t1581*t22681*t5449 + t1089*t1767*t5469 + t1767*t5493*t965))*var2[1] + t2091*t22325*var2[2];
  p_output1[43]=t1678*t22304*var2[0] + (t1581*t22624 + t1678*t22839 + t1581*(t13042 + t19451 + t10479*t1581*t22659 + t10479*t1581*t22681 + t1089*t1678*t5469 + t1678*t5493*t965) + t1767*(t21172 + t21175 - 1.*t10479*t1678*t22659 - 1.*t10479*t1678*t22681 - 1.*t1089*t2091*t5469 - 1.*t2091*t5493*t965))*var2[1] + t1581*t22325*var2[2];
  p_output1[44]=t1581*t22304;
  p_output1[45]=t1767*t22624 + t1581*t22839;
  p_output1[46]=t1767*t22325;
  p_output1[47]=t23066 + (t2091*t23071 + t1767*t23141 + t1767*(t13129 + t13727 + t21172 - 1.*t1581*t5465) + t1581*(t13042 + t13712 + t13721 + t1767*t5465))*var2[1];
  p_output1[48]=t23066 + (t1581*t23071 + t1678*t23141 + t1581*(t13042 + t10479*t1581 + t19451 + t1678*t5465) + t1767*(-1.*t10479*t1678 + t21172 + t21175 - 1.*t2091*t5465))*var2[1];
  p_output1[49]=-0.15121 + t1767*t23071 + t1581*t23141;
  p_output1[50]=-0.15121*t1678 - 0.15121*t1767;
  p_output1[51]=(-0.305*Power(t1418,2) + t23498 + t23499)*var2[0] + (-0.28121*t1527 + 0.305*t1418*t1527 + t1527*t5430)*var2[2];
  p_output1[52]=0.28121*t1527 - 0.305*t1418*t1527 - 1.*t1527*t5430;
  p_output1[53]=0.305*Power(t1527,2) + t23498 + t23499;
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

#include "J_fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
