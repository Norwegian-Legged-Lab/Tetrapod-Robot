/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:28 GMT+01:00
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
  double t221;
  double t880;
  double t916;
  double t927;
  double t1039;
  double t1079;
  double t1155;
  double t232;
  double t233;
  double t307;
  double t676;
  double t869;
  double t1316;
  double t13;
  double t1597;
  double t1607;
  double t1637;
  double t1735;
  double t1750;
  double t1771;
  double t1796;
  double t1800;
  double t1812;
  double t1818;
  double t1986;
  double t1848;
  double t1870;
  double t1897;
  double t1932;
  double t1947;
  double t1948;
  double t2064;
  double t2135;
  double t2150;
  double t2179;
  double t2261;
  double t2270;
  double t2275;
  double t2276;
  double t2281;
  double t2287;
  double t1193;
  double t1279;
  double t984;
  double t1121;
  double t1674;
  double t1679;
  double t1702;
  double t1390;
  double t1405;
  double t1431;
  double t1468;
  double t1540;
  double t2189;
  double t2191;
  double t2212;
  double t2248;
  double t2253;
  double t2535;
  double t2550;
  double t2587;
  double t2598;
  double t2599;
  double t2615;
  double t1957;
  double t1985;
  double t2018;
  double t2043;
  double t2052;
  double t1817;
  double t1839;
  double t1845;
  double t2623;
  double t2629;
  double t2636;
  double t2644;
  double t2647;
  double t2652;
  double t2406;
  double t2434;
  double t2662;
  double t2663;
  double t2664;
  double t2332;
  double t2333;
  double t2772;
  double t2595;
  double t2622;
  double t2641;
  double t2656;
  double t2665;
  double t2670;
  double t2671;
  double t2672;
  double t2673;
  double t2677;
  double t2679;
  double t2680;
  double t2684;
  double t2693;
  double t2700;
  double t2714;
  double t2733;
  double t2747;
  double t2756;
  double t2758;
  double t2837;
  double t2838;
  double t2842;
  double t2844;
  double t2847;
  double t2849;
  double t2886;
  double t2891;
  double t2936;
  double t2939;
  double t2946;
  double t2948;
  double t2957;
  double t2965;
  double t3146;
  double t3149;
  double t3180;
  double t3182;
  double t3199;
  double t3202;
  double t3207;
  double t3221;
  double t3222;
  double t3230;
  double t3238;
  double t188;
  double t255;
  double t625;
  double t736;
  double t753;
  double t3384;
  double t3394;
  double t3393;
  double t3396;
  double t3399;
  double t3408;
  double t3421;
  double t3422;
  double t3436;
  double t3442;
  double t3444;
  double t3447;
  double t3448;
  double t3452;
  double t3459;
  double t3463;
  double t3471;
  double t3481;
  double t3487;
  double t3491;
  double t3497;
  double t3503;
  double t3508;
  double t3516;
  double t3518;
  double t3528;
  double t3675;
  double t3681;
  double t3699;
  double t3702;
  double t3703;
  double t3704;
  double t3724;
  double t3728;
  double t3730;
  double t3731;
  double t3734;
  double t3736;
  double t3737;
  double t3740;
  double t3750;
  double t3753;
  double t3756;
  double t3758;
  double t3811;
  double t3820;
  double t3829;
  double t3845;
  double t3848;
  double t3850;
  double t3856;
  double t3860;
  double t3863;
  double t3881;
  double t3884;
  double t3886;
  double t3890;
  double t3893;
  double t3897;
  double t3904;
  double t3905;
  double t3907;
  double t3909;
  double t3910;
  double t3911;
  double t2784;
  double t2786;
  double t2789;
  double t3975;
  double t3977;
  double t3980;
  double t3986;
  double t3988;
  double t4001;
  double t4007;
  double t4012;
  double t4016;
  double t4019;
  double t4024;
  double t4032;
  double t4034;
  double t4037;
  double t4039;
  double t4050;
  double t2798;
  double t2799;
  double t2809;
  double t2817;
  double t2823;
  double t2830;
  double t2833;
  double t2834;
  double t4155;
  double t4170;
  double t4186;
  double t4193;
  double t4196;
  double t4198;
  double t4210;
  double t4212;
  double t4222;
  double t4224;
  double t4236;
  double t4250;
  double t4269;
  double t4273;
  double t3125;
  double t3128;
  double t3136;
  double t3188;
  double t3190;
  double t3216;
  double t3217;
  double t3219;
  double t4358;
  double t4361;
  double t4366;
  double t4368;
  double t4374;
  double t4377;
  double t4391;
  double t4429;
  double t4432;
  double t4434;
  double t4438;
  double t4463;
  double t4720;
  double t4728;
  double t4729;
  double t4732;
  double t4734;
  double t4735;
  double t4740;
  double t4741;
  double t4742;
  double t4743;
  double t4746;
  double t4747;
  double t4750;
  double t4753;
  double t4756;
  double t4759;
  double t4761;
  double t4762;
  double t4842;
  double t4850;
  double t4854;
  double t4861;
  double t4865;
  double t4869;
  double t4874;
  double t4882;
  double t4890;
  double t4894;
  double t4905;
  double t4916;
  double t4917;
  double t4918;
  double t4925;
  double t4926;
  double t4927;
  double t4981;
  double t4982;
  double t4991;
  double t5000;
  double t5006;
  double t5008;
  double t5012;
  double t5031;
  double t5033;
  double t5034;
  double t5039;
  double t5046;
  double t5057;
  double t5064;
  double t5066;
  double t5067;
  double t5173;
  double t5174;
  double t5187;
  double t5190;
  double t5194;
  double t5198;
  double t5203;
  double t5205;
  double t5206;
  double t5208;
  double t5213;
  double t5226;
  double t5229;
  double t5299;
  double t5304;
  double t5305;
  double t5314;
  double t5325;
  double t5326;
  double t5330;
  double t5334;
  double t5336;
  double t5337;
  double t5338;
  t221 = Cos(var1[10]);
  t880 = Cos(var1[9]);
  t916 = -1.*t880;
  t927 = 1. + t916;
  t1039 = Sin(var1[9]);
  t1079 = -0.15121*t1039;
  t1155 = Sin(var1[4]);
  t232 = -1.*t221;
  t233 = 1. + t232;
  t307 = -1. + t221;
  t676 = Sin(var1[10]);
  t869 = Cos(var1[5]);
  t1316 = Sin(var1[5]);
  t13 = Cos(var1[4]);
  t1597 = t869*t1039*t1155;
  t1607 = t880*t1155*t1316;
  t1637 = t1597 + t1607;
  t1735 = -1.*t880*t869*t1155;
  t1750 = t1039*t1155*t1316;
  t1771 = t1735 + t1750;
  t1796 = Cos(var1[11]);
  t1800 = -1.*t1796;
  t1812 = 1. + t1800;
  t1818 = Sin(var1[11]);
  t1986 = -1. + t1796;
  t1848 = t13*t676;
  t1870 = -4.e-6*t676*t1637;
  t1897 = -1.000000000016*t233;
  t1932 = 1. + t1897;
  t1947 = t1932*t1771;
  t1948 = t1848 + t1870 + t1947;
  t2064 = t221*t13;
  t2135 = 4.e-6*t233*t1637;
  t2150 = -1.*t676*t1771;
  t2179 = t2064 + t2135 + t2150;
  t2261 = 4.e-6*t233*t13;
  t2270 = 1.6e-11*t307;
  t2275 = 1. + t2270;
  t2276 = t2275*t1637;
  t2281 = 4.e-6*t676*t1771;
  t2287 = t2261 + t2276 + t2281;
  t1193 = -0.15121*t927;
  t1279 = t1193 + t1079;
  t984 = 0.15121*t927;
  t1121 = t984 + t1079;
  t1674 = 0.281210000008499*t233;
  t1679 = -0.03874900000062*t676;
  t1702 = t1674 + t1679;
  t1390 = -1.2484e-7*var1[10];
  t1405 = 2.479936e-18*t233;
  t1431 = -1.54996e-7*t307;
  t1468 = 1.124840000016e-6*t676;
  t1540 = t1390 + t1405 + t1431 + t1468;
  t2189 = -1.26e-8*var1[11];
  t2191 = 2.552896e-18*t1812;
  t2212 = -1.59556e-7*t1986;
  t2248 = 2.012600000032e-6*t1818;
  t2253 = t2189 + t2191 + t2212 + t2248;
  t2535 = -1.*t13*t869*t1039;
  t2550 = -1.*t880*t13*t1316;
  t2587 = t2535 + t2550;
  t2598 = -1.*t880*t13*t869;
  t2599 = t13*t1039*t1316;
  t2615 = t2598 + t2599;
  t1957 = -5.04e-14*var1[11];
  t1985 = -0.039889*t1812;
  t2018 = 6.38224e-13*t1986;
  t2043 = -0.503150000008*t1818;
  t2052 = t1957 + t1985 + t2018 + t2043;
  t1817 = 0.50315000001605*t1812;
  t1839 = -0.0398890000006382*t1818;
  t1845 = t1817 + t1839;
  t2623 = 4.e-6*t676*t2587;
  t2629 = t2275*t2615;
  t2636 = t2623 + t2629;
  t2644 = -1.*t676*t2587;
  t2647 = 4.e-6*t233*t2615;
  t2652 = t2644 + t2647;
  t2406 = -1.000000000016*t1812;
  t2434 = 1. + t2406;
  t2662 = t1932*t2587;
  t2663 = -4.e-6*t676*t2615;
  t2664 = t2662 + t2663;
  t2332 = 1.6e-11*t1986;
  t2333 = 1. + t2332;
  t2772 = -0.15121*t880;
  t2595 = t1702*t2587;
  t2622 = t1540*t2615;
  t2641 = t2253*t2636;
  t2656 = t2052*t2652;
  t2665 = t1845*t2664;
  t2670 = -4.e-6*t1818*t2636;
  t2671 = t1818*t2652;
  t2672 = t2434*t2664;
  t2673 = t2670 + t2671 + t2672;
  t2677 = 0.803147*t2673;
  t2679 = 4.e-6*t1812*t2636;
  t2680 = t1796*t2652;
  t2684 = -1.*t1818*t2664;
  t2693 = t2679 + t2680 + t2684;
  t2700 = -0.041195*t2693;
  t2714 = t2333*t2636;
  t2733 = 4.e-6*t1812*t2652;
  t2747 = 4.e-6*t1818*t2664;
  t2756 = t2714 + t2733 + t2747;
  t2758 = -0.14871*t2756;
  t2837 = t880*t13*t869;
  t2838 = -1.*t13*t1039*t1316;
  t2842 = t2837 + t2838;
  t2844 = -1.*t676*t1155;
  t2847 = -1.*t221*t2842;
  t2849 = t2844 + t2623 + t2847;
  t2886 = 4.e-6*t676*t1155;
  t2891 = -1.6e-11*t676*t2587;
  t2936 = 4.e-6*t221*t2842;
  t2939 = t2886 + t2891 + t2936;
  t2946 = t221*t1155;
  t2948 = -4.e-6*t221*t2587;
  t2957 = -1.000000000016*t676*t2842;
  t2965 = t2946 + t2948 + t2957;
  t3146 = t676*t1155;
  t3149 = -4.e-6*t676*t2587;
  t3180 = t1932*t2842;
  t3182 = t3146 + t3149 + t3180;
  t3199 = 4.e-6*t233*t2587;
  t3202 = -1.*t676*t2842;
  t3207 = t2946 + t3199 + t3202;
  t3221 = 4.e-6*t233*t1155;
  t3222 = t2275*t2587;
  t3230 = 4.e-6*t676*t2842;
  t3238 = t3221 + t3222 + t3230;
  t188 = -4.9936e-13*var1[10];
  t255 = -0.038749*t233;
  t625 = 6.19984e-13*t307;
  t736 = -0.281210000004*t676;
  t753 = t188 + t255 + t625 + t736;
  t3384 = Cos(var1[3]);
  t3394 = Sin(var1[3]);
  t3393 = t3384*t869*t1155;
  t3396 = -1.*t3394*t1316;
  t3399 = t3393 + t3396;
  t3408 = -1.*t869*t3394;
  t3421 = -1.*t3384*t1155*t1316;
  t3422 = t3408 + t3421;
  t3436 = -1.*t1039*t3399;
  t3442 = t880*t3422;
  t3444 = t3436 + t3442;
  t3447 = t880*t3399;
  t3448 = t1039*t3422;
  t3452 = t3447 + t3448;
  t3459 = -1.*t3384*t13*t676;
  t3463 = -4.e-6*t676*t3444;
  t3471 = t1932*t3452;
  t3481 = t3459 + t3463 + t3471;
  t3487 = -1.*t221*t3384*t13;
  t3491 = 4.e-6*t233*t3444;
  t3497 = -1.*t676*t3452;
  t3503 = t3487 + t3491 + t3497;
  t3508 = -4.e-6*t233*t3384*t13;
  t3516 = t2275*t3444;
  t3518 = 4.e-6*t676*t3452;
  t3528 = t3508 + t3516 + t3518;
  t3675 = -1.*t13*t869*t1039*t3394;
  t3681 = -1.*t880*t13*t3394*t1316;
  t3699 = t3675 + t3681;
  t3702 = t880*t13*t869*t3394;
  t3703 = -1.*t13*t1039*t3394*t1316;
  t3704 = t3702 + t3703;
  t3724 = t676*t3394*t1155;
  t3728 = -4.e-6*t676*t3699;
  t3730 = t1932*t3704;
  t3731 = t3724 + t3728 + t3730;
  t3734 = t221*t3394*t1155;
  t3736 = 4.e-6*t233*t3699;
  t3737 = -1.*t676*t3704;
  t3740 = t3734 + t3736 + t3737;
  t3750 = 4.e-6*t233*t3394*t1155;
  t3753 = t2275*t3699;
  t3756 = 4.e-6*t676*t3704;
  t3758 = t3750 + t3753 + t3756;
  t3811 = -1.*t869*t3394*t1155;
  t3820 = -1.*t3384*t1316;
  t3829 = t3811 + t3820;
  t3845 = t3384*t869;
  t3848 = -1.*t3394*t1155*t1316;
  t3850 = t3845 + t3848;
  t3856 = t1039*t3829;
  t3860 = t880*t3850;
  t3863 = t3856 + t3860;
  t3881 = t880*t3829;
  t3884 = -1.*t1039*t3850;
  t3886 = t3881 + t3884;
  t3890 = 4.e-6*t676*t3863;
  t3893 = t2275*t3886;
  t3897 = t3890 + t3893;
  t3904 = -1.*t676*t3863;
  t3905 = 4.e-6*t233*t3886;
  t3907 = t3904 + t3905;
  t3909 = t1932*t3863;
  t3910 = -4.e-6*t676*t3886;
  t3911 = t3909 + t3910;
  t2784 = 0.15121*t1039;
  t2786 = t2772 + t2784;
  t2789 = t2772 + t1079;
  t3975 = t869*t3394*t1155;
  t3977 = t3384*t1316;
  t3980 = t3975 + t3977;
  t3986 = -1.*t1039*t3980;
  t3988 = t3986 + t3860;
  t4001 = -1.*t880*t3980;
  t4007 = t4001 + t3884;
  t4012 = 4.e-6*t676*t3988;
  t4016 = t2275*t4007;
  t4019 = t4012 + t4016;
  t4024 = -1.*t676*t3988;
  t4032 = 4.e-6*t233*t4007;
  t4034 = t4024 + t4032;
  t4037 = t1932*t3988;
  t4039 = -4.e-6*t676*t4007;
  t4050 = t4037 + t4039;
  t2798 = -0.281210000004*t221;
  t2799 = -4.9936e-13 + t2798 + t1679;
  t2809 = 1.124840000016e-6*t221;
  t2817 = 1.5499600000248e-7*t676;
  t2823 = -1.2484e-7 + t2809 + t2817;
  t2830 = -0.03874900000062*t221;
  t2833 = 0.281210000008499*t676;
  t2834 = t2830 + t2833;
  t4155 = t880*t3980;
  t4170 = t1039*t3850;
  t4186 = t4155 + t4170;
  t4193 = t13*t676*t3394;
  t4196 = -1.*t221*t4186;
  t4198 = t4193 + t4012 + t4196;
  t4210 = -4.e-6*t13*t676*t3394;
  t4212 = -1.6e-11*t676*t3988;
  t4222 = 4.e-6*t221*t4186;
  t4224 = t4210 + t4212 + t4222;
  t4236 = -1.*t221*t13*t3394;
  t4250 = -4.e-6*t221*t3988;
  t4269 = -1.000000000016*t676*t4186;
  t4273 = t4236 + t4250 + t4269;
  t3125 = -0.0398890000006382*t1796;
  t3128 = 0.50315000001605*t1818;
  t3136 = t3125 + t3128;
  t3188 = -0.503150000008*t1796;
  t3190 = -5.04e-14 + t3188 + t1839;
  t3216 = 2.012600000032e-6*t1796;
  t3217 = 1.59556000002553e-7*t1818;
  t3219 = -1.26e-8 + t3216 + t3217;
  t4358 = -1.*t13*t676*t3394;
  t4361 = -4.e-6*t676*t3988;
  t4366 = t1932*t4186;
  t4368 = t4358 + t4361 + t4366;
  t4374 = 4.e-6*t233*t3988;
  t4377 = -1.*t676*t4186;
  t4391 = t4236 + t4374 + t4377;
  t4429 = -4.e-6*t233*t13*t3394;
  t4432 = t2275*t3988;
  t4434 = 4.e-6*t676*t4186;
  t4438 = t4429 + t4432 + t4434;
  t4463 = t1796*t4391;
  t4720 = t3384*t13*t869*t1039;
  t4728 = t880*t3384*t13*t1316;
  t4729 = t4720 + t4728;
  t4732 = -1.*t880*t3384*t13*t869;
  t4734 = t3384*t13*t1039*t1316;
  t4735 = t4732 + t4734;
  t4740 = -1.*t3384*t676*t1155;
  t4741 = -4.e-6*t676*t4729;
  t4742 = t1932*t4735;
  t4743 = t4740 + t4741 + t4742;
  t4746 = -1.*t221*t3384*t1155;
  t4747 = 4.e-6*t233*t4729;
  t4750 = -1.*t676*t4735;
  t4753 = t4746 + t4747 + t4750;
  t4756 = -4.e-6*t233*t3384*t1155;
  t4759 = t2275*t4729;
  t4761 = 4.e-6*t676*t4735;
  t4762 = t4756 + t4759 + t4761;
  t4842 = t869*t3394;
  t4850 = t3384*t1155*t1316;
  t4854 = t4842 + t4850;
  t4861 = t1039*t3399;
  t4865 = t880*t4854;
  t4869 = t4861 + t4865;
  t4874 = -1.*t1039*t4854;
  t4882 = t3447 + t4874;
  t4890 = 4.e-6*t676*t4869;
  t4894 = t2275*t4882;
  t4905 = t4890 + t4894;
  t4916 = -1.*t676*t4869;
  t4917 = 4.e-6*t233*t4882;
  t4918 = t4916 + t4917;
  t4925 = t1932*t4869;
  t4926 = -4.e-6*t676*t4882;
  t4927 = t4925 + t4926;
  t4981 = -1.*t3384*t869*t1155;
  t4982 = t3394*t1316;
  t4991 = t4981 + t4982;
  t5000 = -1.*t1039*t4991;
  t5006 = t5000 + t4865;
  t5008 = -1.*t880*t4991;
  t5012 = t5008 + t4874;
  t5031 = 4.e-6*t676*t5006;
  t5033 = t2275*t5012;
  t5034 = t5031 + t5033;
  t5039 = -1.*t676*t5006;
  t5046 = 4.e-6*t233*t5012;
  t5057 = t5039 + t5046;
  t5064 = t1932*t5006;
  t5066 = -4.e-6*t676*t5012;
  t5067 = t5064 + t5066;
  t5173 = t880*t4991;
  t5174 = t1039*t4854;
  t5187 = t5173 + t5174;
  t5190 = -1.*t221*t5187;
  t5194 = t3459 + t5031 + t5190;
  t5198 = 4.e-6*t3384*t13*t676;
  t5203 = -1.6e-11*t676*t5006;
  t5205 = 4.e-6*t221*t5187;
  t5206 = t5198 + t5203 + t5205;
  t5208 = t221*t3384*t13;
  t5213 = -4.e-6*t221*t5006;
  t5226 = -1.000000000016*t676*t5187;
  t5229 = t5208 + t5213 + t5226;
  t5299 = t3384*t13*t676;
  t5304 = -4.e-6*t676*t5006;
  t5305 = t1932*t5187;
  t5314 = t5299 + t5304 + t5305;
  t5325 = 4.e-6*t233*t5006;
  t5326 = -1.*t676*t5187;
  t5330 = t5208 + t5325 + t5326;
  t5334 = 4.e-6*t233*t3384*t13;
  t5336 = t2275*t5006;
  t5337 = 4.e-6*t676*t5187;
  t5338 = t5334 + t5336 + t5337;
  p_output1[0]=1.;
  p_output1[1]=t1155*t1279*t1316 + t1540*t1637 + t1702*t1771 + t1845*t1948 + t2052*t2179 + t2253*t2287 - 0.041195*(-1.*t1818*t1948 + t1796*t2179 + 4.e-6*t1812*t2287) - 0.14871*(4.e-6*t1818*t1948 + 4.e-6*t1812*t2179 + t2287*t2333) + 0.803147*(t1818*t2179 - 4.e-6*t1818*t2287 + t1948*t2434) + t13*t753 - 1.*t1121*t1155*t869;
  p_output1[2]=-1.*t1121*t13*t1316 + t2595 + t2622 + t2641 + t2656 + t2665 + t2677 + t2700 + t2758 - 1.*t1279*t13*t869;
  p_output1[3]=t2595 + t2622 + t2641 + t2656 + t2665 + t2677 + t2700 + t2758 - 1.*t13*t1316*t2789 + t13*t2786*t869;
  p_output1[4]=t1155*t2799 + t2587*t2823 + t2834*t2842 + t2052*t2849 + t2253*t2939 + t1845*t2965 - 0.041195*(t1796*t2849 + 4.e-6*t1812*t2939 - 1.*t1818*t2965) - 0.14871*(4.e-6*t1812*t2849 + t2333*t2939 + 4.e-6*t1818*t2965) + 0.803147*(t1818*t2849 - 4.e-6*t1818*t2939 + t2434*t2965);
  p_output1[5]=t3136*t3182 + t3190*t3207 + t3219*t3238 + 0.803147*(-1.000000000016*t1818*t3182 + t1796*t3207 - 4.e-6*t1796*t3238) - 0.14871*(4.e-6*t1796*t3182 + 4.e-6*t1818*t3207 - 1.6e-11*t1818*t3238) - 0.041195*(-1.*t1796*t3182 - 1.*t1818*t3207 + 4.e-6*t1818*t3238);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1121*t3399 + t1279*t3422 + t1540*t3444 + t1702*t3452 + t1845*t3481 + t2052*t3503 + t2253*t3528 - 0.041195*(-1.*t1818*t3481 + t1796*t3503 + 4.e-6*t1812*t3528) + 0.803147*(t2434*t3481 + t1818*t3503 - 4.e-6*t1818*t3528) - 0.14871*(4.e-6*t1818*t3481 + 4.e-6*t1812*t3503 + t2333*t3528) - 1.*t13*t3384*t753;
  p_output1[9]=-1.*t1279*t13*t1316*t3394 + t1540*t3699 + t1702*t3704 + t1845*t3731 + t2052*t3740 + t2253*t3758 - 0.041195*(-1.*t1818*t3731 + t1796*t3740 + 4.e-6*t1812*t3758) + 0.803147*(t2434*t3731 + t1818*t3740 - 4.e-6*t1818*t3758) - 0.14871*(4.e-6*t1818*t3731 + 4.e-6*t1812*t3740 + t2333*t3758) + t1155*t3394*t753 + t1121*t13*t3394*t869;
  p_output1[10]=t1279*t3829 + t1121*t3850 + t1702*t3863 + t1540*t3886 + t2253*t3897 + t2052*t3907 + t1845*t3911 - 0.041195*(4.e-6*t1812*t3897 + t1796*t3907 - 1.*t1818*t3911) - 0.14871*(t2333*t3897 + 4.e-6*t1812*t3907 + 4.e-6*t1818*t3911) + 0.803147*(-4.e-6*t1818*t3897 + t1818*t3907 + t2434*t3911);
  p_output1[11]=t2789*t3850 + t2786*t3980 + t1702*t3988 + t1540*t4007 + t2253*t4019 + t2052*t4034 + t1845*t4050 - 0.041195*(4.e-6*t1812*t4019 + t1796*t4034 - 1.*t1818*t4050) - 0.14871*(t2333*t4019 + 4.e-6*t1812*t4034 + 4.e-6*t1818*t4050) + 0.803147*(-4.e-6*t1818*t4019 + t1818*t4034 + t2434*t4050);
  p_output1[12]=-1.*t13*t2799*t3394 + t2823*t3988 + t2834*t4186 + t2052*t4198 + t2253*t4224 + t1845*t4273 - 0.041195*(t1796*t4198 + 4.e-6*t1812*t4224 - 1.*t1818*t4273) - 0.14871*(4.e-6*t1812*t4198 + t2333*t4224 + 4.e-6*t1818*t4273) + 0.803147*(t1818*t4198 - 4.e-6*t1818*t4224 + t2434*t4273);
  p_output1[13]=t3136*t4368 + t3190*t4391 + t3219*t4438 - 0.14871*(4.e-6*t1796*t4368 + 4.e-6*t1818*t4391 - 1.6e-11*t1818*t4438) - 0.041195*(-1.*t1796*t4368 - 1.*t1818*t4391 + 4.e-6*t1818*t4438) + 0.803147*(-1.000000000016*t1818*t4368 - 4.e-6*t1796*t4438 + t4463);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1279*t3850 + t1121*t3980 + t1540*t3988 + t1702*t4186 + t1845*t4368 + t2052*t4391 + t2253*t4438 + 0.803147*(t2434*t4368 + t1818*t4391 - 4.e-6*t1818*t4438) - 0.14871*(4.e-6*t1818*t4368 + 4.e-6*t1812*t4391 + t2333*t4438) - 0.041195*(-1.*t1818*t4368 + 4.e-6*t1812*t4438 + t4463) - 1.*t13*t3394*t753;
  p_output1[17]=t1279*t13*t1316*t3384 + t1540*t4729 + t1702*t4735 + t1845*t4743 + t2052*t4753 + t2253*t4762 - 0.041195*(-1.*t1818*t4743 + t1796*t4753 + 4.e-6*t1812*t4762) + 0.803147*(t2434*t4743 + t1818*t4753 - 4.e-6*t1818*t4762) - 0.14871*(4.e-6*t1818*t4743 + 4.e-6*t1812*t4753 + t2333*t4762) - 1.*t1155*t3384*t753 - 1.*t1121*t13*t3384*t869;
  p_output1[18]=t1279*t3399 + t1121*t4854 + t1702*t4869 + t1540*t4882 + t2253*t4905 + t2052*t4918 + t1845*t4927 - 0.041195*(4.e-6*t1812*t4905 + t1796*t4918 - 1.*t1818*t4927) - 0.14871*(t2333*t4905 + 4.e-6*t1812*t4918 + 4.e-6*t1818*t4927) + 0.803147*(-4.e-6*t1818*t4905 + t1818*t4918 + t2434*t4927);
  p_output1[19]=t2789*t4854 + t2786*t4991 + t1702*t5006 + t1540*t5012 + t2253*t5034 + t2052*t5057 + t1845*t5067 - 0.041195*(4.e-6*t1812*t5034 + t1796*t5057 - 1.*t1818*t5067) - 0.14871*(t2333*t5034 + 4.e-6*t1812*t5057 + 4.e-6*t1818*t5067) + 0.803147*(-4.e-6*t1818*t5034 + t1818*t5057 + t2434*t5067);
  p_output1[20]=t13*t2799*t3384 + t2823*t5006 + t2834*t5187 + t2052*t5194 + t2253*t5206 + t1845*t5229 - 0.041195*(t1796*t5194 + 4.e-6*t1812*t5206 - 1.*t1818*t5229) - 0.14871*(4.e-6*t1812*t5194 + t2333*t5206 + 4.e-6*t1818*t5229) + 0.803147*(t1818*t5194 - 4.e-6*t1818*t5206 + t2434*t5229);
  p_output1[21]=t3136*t5314 + t3190*t5330 + t3219*t5338 + 0.803147*(-1.000000000016*t1818*t5314 + t1796*t5330 - 4.e-6*t1796*t5338) - 0.14871*(4.e-6*t1796*t5314 + 4.e-6*t1818*t5330 - 1.6e-11*t1818*t5338) - 0.041195*(-1.*t1796*t5314 - 1.*t1818*t5330 + 4.e-6*t1818*t5338);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void J_h_FrFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
