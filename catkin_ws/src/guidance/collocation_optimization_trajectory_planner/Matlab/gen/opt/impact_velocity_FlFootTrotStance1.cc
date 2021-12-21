/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:53:43 GMT+01:00
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
  double t404;
  double t68;
  double t209;
  double t599;
  double t529;
  double t547;
  double t619;
  double t803;
  double t822;
  double t868;
  double t45;
  double t593;
  double t630;
  double t631;
  double t1437;
  double t1469;
  double t1484;
  double t1495;
  double t1650;
  double t1670;
  double t1679;
  double t1690;
  double t1789;
  double t1795;
  double t1808;
  double t1825;
  double t1044;
  double t1245;
  double t1270;
  double t1277;
  double t1996;
  double t2396;
  double t2466;
  double t2467;
  double t2497;
  double t2503;
  double t2520;
  double t2529;
  double t2374;
  double t2409;
  double t2416;
  double t2417;
  double t2554;
  double t2560;
  double t2563;
  double t2564;
  double t2584;
  double t2593;
  double t2722;
  double t2726;
  double t2742;
  double t2796;
  double t2802;
  double t2835;
  double t1316;
  double t1486;
  double t1517;
  double t1537;
  double t1715;
  double t1716;
  double t1757;
  double t1833;
  double t1878;
  double t1881;
  double t1882;
  double t1889;
  double t1903;
  double t2980;
  double t2985;
  double t2987;
  double t2935;
  double t2942;
  double t2953;
  double t3026;
  double t3035;
  double t3039;
  double t2090;
  double t2145;
  double t2767;
  double t2839;
  double t2844;
  double t2863;
  double t2864;
  double t2871;
  double t2882;
  double t2920;
  double t2932;
  double t2934;
  double t2966;
  double t3014;
  double t3053;
  double t3068;
  double t3076;
  double t3077;
  double t3087;
  double t3100;
  double t3113;
  double t3116;
  double t3127;
  double t3138;
  double t3146;
  double t3155;
  double t3158;
  double t3167;
  double t3182;
  double t3184;
  double t2746;
  double t2750;
  double t2769;
  double t3301;
  double t3313;
  double t3314;
  double t3337;
  double t3343;
  double t3362;
  double t3411;
  double t3413;
  double t3416;
  double t3420;
  double t3454;
  double t3470;
  double t3476;
  double t3477;
  double t3427;
  double t3437;
  double t3438;
  double t3439;
  double t3587;
  double t3377;
  double t3385;
  double t3394;
  double t3407;
  double t3606;
  double t3611;
  double t3615;
  double t3625;
  double t3627;
  double t3628;
  double t3632;
  double t3636;
  double t3653;
  double t3654;
  double t3694;
  double t3699;
  double t3701;
  double t3702;
  double t3678;
  double t3681;
  double t3682;
  double t3689;
  double t3822;
  double t3821;
  double t3826;
  double t3831;
  double t3834;
  double t3840;
  double t3850;
  double t3857;
  double t3863;
  double t3868;
  double t3874;
  double t3875;
  double t3877;
  double t3883;
  double t3890;
  double t3891;
  double t3892;
  double t3909;
  double t3913;
  double t3917;
  double t3922;
  double t3897;
  double t3902;
  double t3905;
  double t3906;
  double t3951;
  double t3955;
  double t3956;
  double t3959;
  double t3960;
  double t3962;
  double t3971;
  double t3974;
  double t3976;
  double t3981;
  double t3988;
  double t3990;
  double t4002;
  double t4009;
  double t4012;
  double t3994;
  double t3995;
  double t3996;
  double t4015;
  double t4019;
  double t4021;
  double t3220;
  double t3221;
  double t3233;
  double t3254;
  double t4100;
  double t4113;
  double t4116;
  double t4121;
  double t4128;
  double t4136;
  double t4145;
  double t4165;
  double t4166;
  double t4173;
  double t4148;
  double t4149;
  double t4153;
  double t4178;
  double t4183;
  double t4185;
  double t150;
  double t215;
  double t241;
  double t642;
  double t715;
  double t741;
  double t914;
  double t938;
  double t946;
  double t4254;
  double t4255;
  double t4277;
  double t4305;
  double t4306;
  double t4311;
  double t4312;
  double t4315;
  double t4317;
  double t4320;
  double t4326;
  double t4284;
  double t4288;
  double t4297;
  double t4303;
  double t2439;
  double t2442;
  double t2443;
  double t2533;
  double t2540;
  double t2541;
  double t2599;
  double t2604;
  double t2609;
  double t4406;
  double t4407;
  double t4410;
  double t4417;
  double t4392;
  double t4396;
  double t4400;
  double t4403;
  double t4419;
  double t4424;
  double t4496;
  double t4498;
  double t4500;
  double t4509;
  double t4512;
  double t4513;
  double t4528;
  double t4537;
  double t4539;
  double t4541;
  double t4555;
  double t4559;
  double t4562;
  double t4563;
  double t4545;
  double t4547;
  double t4549;
  double t4551;
  double t4627;
  double t4630;
  double t4635;
  double t4641;
  double t4646;
  double t4659;
  double t4668;
  double t4670;
  double t4700;
  double t4702;
  double t4705;
  double t4684;
  double t4686;
  double t4688;
  double t4715;
  double t4728;
  double t4730;
  double t4790;
  double t4793;
  double t4797;
  double t4800;
  double t4803;
  double t4807;
  double t4808;
  double t4822;
  double t4825;
  double t4826;
  double t4812;
  double t4813;
  double t4815;
  double t4828;
  double t4829;
  double t4831;
  double t4897;
  double t4898;
  double t4899;
  double t4917;
  double t4918;
  double t4921;
  double t4924;
  double t4929;
  double t4930;
  double t4931;
  double t4909;
  double t4911;
  double t4912;
  double t4915;
  double t4990;
  double t4992;
  double t4993;
  double t4994;
  double t4981;
  double t4982;
  double t4984;
  double t4987;
  double t4996;
  double t4998;
  double t4452;
  double t4453;
  t404 = Cos(var1[4]);
  t68 = Cos(var1[7]);
  t209 = Sin(var1[7]);
  t599 = Cos(var1[5]);
  t529 = Cos(var1[6]);
  t547 = Sin(var1[5]);
  t619 = Sin(var1[6]);
  t803 = t404*t599*t529;
  t822 = -1.*t404*t547*t619;
  t868 = t803 + t822;
  t45 = Sin(var1[4]);
  t593 = -1.*t404*t529*t547;
  t630 = -1.*t404*t599*t619;
  t631 = t593 + t630;
  t1437 = Cos(var1[8]);
  t1469 = -1.*t1437;
  t1484 = 1. + t1469;
  t1495 = Sin(var1[8]);
  t1650 = -1.*t68*t45;
  t1670 = -4.e-6*t68*t631;
  t1679 = -1.000000000016*t868*t209;
  t1690 = t1650 + t1670 + t1679;
  t1789 = t68*t868;
  t1795 = -1.*t45*t209;
  t1808 = -4.e-6*t631*t209;
  t1825 = t1789 + t1795 + t1808;
  t1044 = 4.e-6*t68*t868;
  t1245 = -4.e-6*t45*t209;
  t1270 = -1.6e-11*t631*t209;
  t1277 = t1044 + t1245 + t1270;
  t1996 = -1. + t1437;
  t2396 = -1. + t68;
  t2466 = 4.e-6*t2396*t45;
  t2467 = 1.6e-11*t2396;
  t2497 = 1. + t2467;
  t2503 = t2497*t631;
  t2520 = 4.e-6*t868*t209;
  t2529 = t2466 + t2503 + t2520;
  t2374 = t68*t45;
  t2409 = 4.e-6*t2396*t631;
  t2416 = t868*t209;
  t2417 = t2374 + t2409 + t2416;
  t2554 = -1.*t68;
  t2560 = 1. + t2554;
  t2563 = -1.000000000016*t2560;
  t2564 = 1. + t2563;
  t2584 = t2564*t868;
  t2593 = t2584 + t1795 + t1808;
  t2722 = -1.*t529;
  t2726 = 1. + t2722;
  t2742 = 0.15121*t2726;
  t2796 = -1.*t404*t599*t529;
  t2802 = t404*t547*t619;
  t2835 = t2796 + t2802;
  t1316 = -1.284e-8*var1[8];
  t1486 = -1.5499600000248e-7*t1484;
  t1517 = 2.012840000032e-6*t1495;
  t1537 = t1316 + t1486 + t1517;
  t1715 = 0.503210000016051*t1484;
  t1716 = 0.03874900000062*t1495;
  t1757 = t1715 + t1716;
  t1833 = 5.136e-14*var1[8];
  t1878 = -0.03874900000062*t1484;
  t1881 = 0.503210000008*t1495;
  t1882 = t1833 + t1878 + t1881;
  t1889 = -1.000000000016*t1484;
  t1903 = 1. + t1889;
  t2980 = t2564*t631;
  t2985 = -4.e-6*t2835*t209;
  t2987 = t2980 + t2985;
  t2935 = t2497*t2835;
  t2942 = 4.e-6*t631*t209;
  t2953 = t2935 + t2942;
  t3026 = 4.e-6*t2396*t2835;
  t3035 = t631*t209;
  t3039 = t3026 + t3035;
  t2090 = 1.6e-11*t1996;
  t2145 = 1. + t2090;
  t2767 = 0.15121*t619;
  t2839 = -1.2484e-7*var1[7];
  t2844 = -1.5499600000248e-7*t2560;
  t2863 = 1.124840000016e-6*t209;
  t2864 = t2839 + t2844 + t2863;
  t2871 = t2835*t2864;
  t2882 = 0.281210000008499*t2560;
  t2920 = 0.03874900000062*t209;
  t2932 = t2882 + t2920;
  t2934 = t631*t2932;
  t2966 = t2953*t1537;
  t3014 = t2987*t1757;
  t3053 = t3039*t1882;
  t3068 = t1903*t2987;
  t3076 = -4.e-6*t2953*t1495;
  t3077 = -1.*t3039*t1495;
  t3087 = t3068 + t3076 + t3077;
  t3100 = 0.80321*t3087;
  t3113 = t2145*t2953;
  t3116 = 4.e-6*t1996*t3039;
  t3127 = 4.e-6*t2987*t1495;
  t3138 = t3113 + t3116 + t3127;
  t3146 = 0.14871*t3138;
  t3155 = 4.e-6*t1996*t2953;
  t3158 = t1437*t3039;
  t3167 = t2987*t1495;
  t3182 = t3155 + t3158 + t3167;
  t3184 = -0.03875*t3182;
  t2746 = -0.15121*t619;
  t2750 = t2742 + t2746;
  t2769 = t2742 + t2767;
  t3301 = t529*t45*t547;
  t3313 = t599*t45*t619;
  t3314 = t3301 + t3313;
  t3337 = -1.*t599*t529*t45;
  t3343 = t45*t547*t619;
  t3362 = t3337 + t3343;
  t3411 = 4.e-6*t404*t2396;
  t3413 = t2497*t3314;
  t3416 = 4.e-6*t3362*t209;
  t3420 = t3411 + t3413 + t3416;
  t3454 = t404*t68;
  t3470 = 4.e-6*t2396*t3314;
  t3476 = t3362*t209;
  t3477 = t3454 + t3470 + t3476;
  t3427 = t2564*t3362;
  t3437 = -1.*t404*t209;
  t3438 = -4.e-6*t3314*t209;
  t3439 = t3427 + t3437 + t3438;
  t3587 = Sin(var1[3]);
  t3377 = 4.9936e-13*var1[7];
  t3385 = -0.03874900000062*t2560;
  t3394 = 0.281210000004*t209;
  t3407 = t3377 + t3385 + t3394;
  t3606 = -1.*t404*t529*t3587*t547;
  t3611 = -1.*t404*t599*t3587*t619;
  t3615 = t3606 + t3611;
  t3625 = t404*t599*t529*t3587;
  t3627 = -1.*t404*t3587*t547*t619;
  t3628 = t3625 + t3627;
  t3632 = 4.e-6*t2396*t3587*t45;
  t3636 = t2497*t3615;
  t3653 = 4.e-6*t3628*t209;
  t3654 = t3632 + t3636 + t3653;
  t3694 = t68*t3587*t45;
  t3699 = 4.e-6*t2396*t3615;
  t3701 = t3628*t209;
  t3702 = t3694 + t3699 + t3701;
  t3678 = t2564*t3628;
  t3681 = -1.*t3587*t45*t209;
  t3682 = -4.e-6*t3615*t209;
  t3689 = t3678 + t3681 + t3682;
  t3822 = Cos(var1[3]);
  t3821 = -1.*t599*t3587;
  t3826 = -1.*t3822*t45*t547;
  t3831 = t3821 + t3826;
  t3834 = t3822*t599*t45;
  t3840 = -1.*t3587*t547;
  t3850 = t3834 + t3840;
  t3857 = t529*t3831;
  t3863 = -1.*t3850*t619;
  t3868 = t3857 + t3863;
  t3874 = t529*t3850;
  t3875 = t3831*t619;
  t3877 = t3874 + t3875;
  t3883 = -4.e-6*t3822*t404*t2396;
  t3890 = t2497*t3868;
  t3891 = 4.e-6*t3877*t209;
  t3892 = t3883 + t3890 + t3891;
  t3909 = -1.*t3822*t404*t68;
  t3913 = 4.e-6*t2396*t3868;
  t3917 = t3877*t209;
  t3922 = t3909 + t3913 + t3917;
  t3897 = t2564*t3877;
  t3902 = t3822*t404*t209;
  t3905 = -4.e-6*t3868*t209;
  t3906 = t3897 + t3902 + t3905;
  t3951 = -1.*t599*t3587*t45;
  t3955 = -1.*t3822*t547;
  t3956 = t3951 + t3955;
  t3959 = t3822*t599;
  t3960 = -1.*t3587*t45*t547;
  t3962 = t3959 + t3960;
  t3971 = t529*t3956;
  t3974 = -1.*t3962*t619;
  t3976 = t3971 + t3974;
  t3981 = t529*t3962;
  t3988 = t3956*t619;
  t3990 = t3981 + t3988;
  t4002 = t2564*t3990;
  t4009 = -4.e-6*t3976*t209;
  t4012 = t4002 + t4009;
  t3994 = t2497*t3976;
  t3995 = 4.e-6*t3990*t209;
  t3996 = t3994 + t3995;
  t4015 = 4.e-6*t2396*t3976;
  t4019 = t3990*t209;
  t4021 = t4015 + t4019;
  t3220 = -0.15121*t529;
  t3221 = t3220 + t2767;
  t3233 = 0.15121*t529;
  t3254 = t3233 + t2767;
  t4100 = t599*t3587*t45;
  t4113 = t3822*t547;
  t4116 = t4100 + t4113;
  t4121 = -1.*t529*t4116;
  t4128 = t4121 + t3974;
  t4136 = -1.*t4116*t619;
  t4145 = t3981 + t4136;
  t4165 = t2564*t4145;
  t4166 = -4.e-6*t4128*t209;
  t4173 = t4165 + t4166;
  t4148 = t2497*t4128;
  t4149 = 4.e-6*t4145*t209;
  t4153 = t4148 + t4149;
  t4178 = 4.e-6*t2396*t4128;
  t4183 = t4145*t209;
  t4185 = t4178 + t4183;
  t150 = 0.281210000004*t68;
  t215 = -0.03874900000062*t209;
  t241 = 4.9936e-13 + t150 + t215;
  t642 = 1.124840000016e-6*t68;
  t715 = -1.5499600000248e-7*t209;
  t741 = -1.2484e-7 + t642 + t715;
  t914 = 0.03874900000062*t68;
  t938 = 0.281210000008499*t209;
  t946 = t914 + t938;
  t4254 = t529*t4116;
  t4255 = t3962*t619;
  t4277 = t4254 + t4255;
  t4305 = t404*t68*t3587;
  t4306 = -4.e-6*t68*t4145;
  t4311 = -1.000000000016*t4277*t209;
  t4312 = t4305 + t4306 + t4311;
  t4315 = t68*t4277;
  t4317 = t404*t3587*t209;
  t4320 = -4.e-6*t4145*t209;
  t4326 = t4315 + t4317 + t4320;
  t4284 = 4.e-6*t68*t4277;
  t4288 = 4.e-6*t404*t3587*t209;
  t4297 = -1.6e-11*t4145*t209;
  t4303 = t4284 + t4288 + t4297;
  t2439 = 0.503210000008*t1437;
  t2442 = -0.03874900000062*t1495;
  t2443 = 5.136e-14 + t2439 + t2442;
  t2533 = 2.012840000032e-6*t1437;
  t2540 = -1.5499600000248e-7*t1495;
  t2541 = -1.284e-8 + t2533 + t2540;
  t2599 = 0.03874900000062*t1437;
  t2604 = 0.503210000016051*t1495;
  t2609 = t2599 + t2604;
  t4406 = -4.e-6*t404*t2396*t3587;
  t4407 = t2497*t4145;
  t4410 = 4.e-6*t4277*t209;
  t4417 = t4406 + t4407 + t4410;
  t4392 = -1.*t404*t68*t3587;
  t4396 = 4.e-6*t2396*t4145;
  t4400 = t4277*t209;
  t4403 = t4392 + t4396 + t4400;
  t4419 = t2564*t4277;
  t4424 = t4419 + t4317 + t4320;
  t4496 = t3822*t404*t529*t547;
  t4498 = t3822*t404*t599*t619;
  t4500 = t4496 + t4498;
  t4509 = -1.*t3822*t404*t599*t529;
  t4512 = t3822*t404*t547*t619;
  t4513 = t4509 + t4512;
  t4528 = -4.e-6*t3822*t2396*t45;
  t4537 = t2497*t4500;
  t4539 = 4.e-6*t4513*t209;
  t4541 = t4528 + t4537 + t4539;
  t4555 = -1.*t3822*t68*t45;
  t4559 = 4.e-6*t2396*t4500;
  t4562 = t4513*t209;
  t4563 = t4555 + t4559 + t4562;
  t4545 = t2564*t4513;
  t4547 = t3822*t45*t209;
  t4549 = -4.e-6*t4500*t209;
  t4551 = t4545 + t4547 + t4549;
  t4627 = t599*t3587;
  t4630 = t3822*t45*t547;
  t4635 = t4627 + t4630;
  t4641 = -1.*t4635*t619;
  t4646 = t3874 + t4641;
  t4659 = t529*t4635;
  t4668 = t3850*t619;
  t4670 = t4659 + t4668;
  t4700 = t2564*t4670;
  t4702 = -4.e-6*t4646*t209;
  t4705 = t4700 + t4702;
  t4684 = t2497*t4646;
  t4686 = 4.e-6*t4670*t209;
  t4688 = t4684 + t4686;
  t4715 = 4.e-6*t2396*t4646;
  t4728 = t4670*t209;
  t4730 = t4715 + t4728;
  t4790 = -1.*t3822*t599*t45;
  t4793 = t3587*t547;
  t4797 = t4790 + t4793;
  t4800 = -1.*t529*t4797;
  t4803 = t4800 + t4641;
  t4807 = -1.*t4797*t619;
  t4808 = t4659 + t4807;
  t4822 = t2564*t4808;
  t4825 = -4.e-6*t4803*t209;
  t4826 = t4822 + t4825;
  t4812 = t2497*t4803;
  t4813 = 4.e-6*t4808*t209;
  t4815 = t4812 + t4813;
  t4828 = 4.e-6*t2396*t4803;
  t4829 = t4808*t209;
  t4831 = t4828 + t4829;
  t4897 = t529*t4797;
  t4898 = t4635*t619;
  t4899 = t4897 + t4898;
  t4917 = -4.e-6*t68*t4808;
  t4918 = -1.000000000016*t4899*t209;
  t4921 = t3909 + t4917 + t4918;
  t4924 = t68*t4899;
  t4929 = -1.*t3822*t404*t209;
  t4930 = -4.e-6*t4808*t209;
  t4931 = t4924 + t4929 + t4930;
  t4909 = 4.e-6*t68*t4899;
  t4911 = -4.e-6*t3822*t404*t209;
  t4912 = -1.6e-11*t4808*t209;
  t4915 = t4909 + t4911 + t4912;
  t4990 = 4.e-6*t3822*t404*t2396;
  t4992 = t2497*t4808;
  t4993 = 4.e-6*t4899*t209;
  t4994 = t4990 + t4992 + t4993;
  t4981 = t3822*t404*t68;
  t4982 = 4.e-6*t2396*t4808;
  t4984 = t4899*t209;
  t4987 = t4981 + t4982 + t4984;
  t4996 = t2564*t4899;
  t4998 = t4996 + t4929 + t4930;
  t4452 = -4.e-6*t4417*t1495;
  t4453 = -1.*t4403*t1495;
  p_output1[0]=var2[0] + (t2864*t3314 + t2932*t3362 + t1537*t3420 + t1757*t3439 + t1882*t3477 - 0.03875*(4.e-6*t1996*t3420 + t1495*t3439 + t1437*t3477) + 0.80321*(-4.e-6*t1495*t3420 + t1903*t3439 - 1.*t1495*t3477) + 0.14871*(t2145*t3420 + 4.e-6*t1495*t3439 + 4.e-6*t1996*t3477) + t3407*t404 + t2750*t45*t547 - 1.*t2769*t45*t599)*var2[4] + (t2871 + t2934 + t2966 + t3014 + t3053 + t3100 + t3146 + t3184 - 1.*t2769*t404*t547 - 1.*t2750*t404*t599)*var2[5] + (t2871 + t2934 + t2966 + t3014 + t3053 + t3100 + t3146 + t3184 - 1.*t3221*t404*t547 + t3254*t404*t599)*var2[6] + (t1277*t1537 + t1690*t1757 + t1825*t1882 + 0.80321*(-4.e-6*t1277*t1495 - 1.*t1495*t1825 + t1690*t1903) - 0.03875*(t1495*t1690 + t1437*t1825 + 4.e-6*t1277*t1996) + 0.14871*(4.e-6*t1495*t1690 + 4.e-6*t1825*t1996 + t1277*t2145) + t241*t45 + t631*t741 + t868*t946)*var2[7] + (t2417*t2443 + t2529*t2541 + 0.14871*(-4.e-6*t1495*t2417 - 1.6e-11*t1495*t2529 + 4.e-6*t1437*t2593) - 0.03875*(-1.*t1495*t2417 - 4.e-6*t1495*t2529 + t1437*t2593) + 0.80321*(-1.*t1437*t2417 - 4.e-6*t1437*t2529 - 1.000000000016*t1495*t2593) + t2593*t2609)*var2[8];
  p_output1[1]=var2[1] + (t2750*t3831 + t2769*t3850 + t2864*t3868 + t2932*t3877 + t1537*t3892 + t1757*t3906 + t1882*t3922 - 0.03875*(4.e-6*t1996*t3892 + t1495*t3906 + t1437*t3922) + 0.80321*(-4.e-6*t1495*t3892 + t1903*t3906 - 1.*t1495*t3922) + 0.14871*(t2145*t3892 + 4.e-6*t1495*t3906 + 4.e-6*t1996*t3922) - 1.*t3407*t3822*t404)*var2[3] + (t2864*t3615 + t2932*t3628 + t1537*t3654 + t1757*t3689 + t1882*t3702 - 0.03875*(4.e-6*t1996*t3654 + t1495*t3689 + t1437*t3702) + 0.80321*(-4.e-6*t1495*t3654 + t1903*t3689 - 1.*t1495*t3702) + 0.14871*(t2145*t3654 + 4.e-6*t1495*t3689 + 4.e-6*t1996*t3702) + t3407*t3587*t45 - 1.*t2750*t3587*t404*t547 + t2769*t3587*t404*t599)*var2[4] + (t2750*t3956 + t2769*t3962 + t2864*t3976 + t2932*t3990 + t1537*t3996 + t1757*t4012 + t1882*t4021 - 0.03875*(4.e-6*t1996*t3996 + t1495*t4012 + t1437*t4021) + 0.80321*(-4.e-6*t1495*t3996 + t1903*t4012 - 1.*t1495*t4021) + 0.14871*(t2145*t3996 + 4.e-6*t1495*t4012 + 4.e-6*t1996*t4021))*var2[5] + (t3221*t3962 + t3254*t4116 + t2864*t4128 + t2932*t4145 + t1537*t4153 + t1757*t4173 + t1882*t4185 - 0.03875*(4.e-6*t1996*t4153 + t1495*t4173 + t1437*t4185) + 0.80321*(-4.e-6*t1495*t4153 + t1903*t4173 - 1.*t1495*t4185) + 0.14871*(t2145*t4153 + 4.e-6*t1495*t4173 + 4.e-6*t1996*t4185))*var2[6] + (-1.*t241*t3587*t404 + t1537*t4303 + t1757*t4312 + t1882*t4326 - 0.03875*(4.e-6*t1996*t4303 + t1495*t4312 + t1437*t4326) + 0.80321*(-4.e-6*t1495*t4303 + t1903*t4312 - 1.*t1495*t4326) + 0.14871*(t2145*t4303 + 4.e-6*t1495*t4312 + 4.e-6*t1996*t4326) + t4145*t741 + t4277*t946)*var2[7] + (t2443*t4403 + t2541*t4417 + t2609*t4424 + 0.14871*(-4.e-6*t1495*t4403 - 1.6e-11*t1495*t4417 + 4.e-6*t1437*t4424) + 0.80321*(-1.*t1437*t4403 - 4.e-6*t1437*t4417 - 1.000000000016*t1495*t4424) - 0.03875*(t1437*t4424 + t4452 + t4453))*var2[8];
  p_output1[2]=var2[2] + (t2750*t3962 - 1.*t3407*t3587*t404 + t2769*t4116 + t2864*t4145 + t2932*t4277 + t1882*t4403 + t1537*t4417 + t1757*t4424 + 0.14871*(4.e-6*t1996*t4403 + t2145*t4417 + 4.e-6*t1495*t4424) - 0.03875*(t1437*t4403 + 4.e-6*t1996*t4417 + t1495*t4424) + 0.80321*(t1903*t4424 + t4452 + t4453))*var2[3] + (-1.*t3407*t3822*t45 + t2864*t4500 + t2932*t4513 + t1537*t4541 + t1757*t4551 + t1882*t4563 - 0.03875*(4.e-6*t1996*t4541 + t1495*t4551 + t1437*t4563) + 0.80321*(-4.e-6*t1495*t4541 + t1903*t4551 - 1.*t1495*t4563) + 0.14871*(t2145*t4541 + 4.e-6*t1495*t4551 + 4.e-6*t1996*t4563) + t2750*t3822*t404*t547 - 1.*t2769*t3822*t404*t599)*var2[4] + (t2750*t3850 + t2769*t4635 + t2864*t4646 + t2932*t4670 + t1537*t4688 + t1757*t4705 + t1882*t4730 - 0.03875*(4.e-6*t1996*t4688 + t1495*t4705 + t1437*t4730) + 0.80321*(-4.e-6*t1495*t4688 + t1903*t4705 - 1.*t1495*t4730) + 0.14871*(t2145*t4688 + 4.e-6*t1495*t4705 + 4.e-6*t1996*t4730))*var2[5] + (t3221*t4635 + t3254*t4797 + t2864*t4803 + t2932*t4808 + t1537*t4815 + t1757*t4826 + t1882*t4831 - 0.03875*(4.e-6*t1996*t4815 + t1495*t4826 + t1437*t4831) + 0.80321*(-4.e-6*t1495*t4815 + t1903*t4826 - 1.*t1495*t4831) + 0.14871*(t2145*t4815 + 4.e-6*t1495*t4826 + 4.e-6*t1996*t4831))*var2[6] + (t241*t3822*t404 + t1537*t4915 + t1757*t4921 + t1882*t4931 - 0.03875*(4.e-6*t1996*t4915 + t1495*t4921 + t1437*t4931) + 0.80321*(-4.e-6*t1495*t4915 + t1903*t4921 - 1.*t1495*t4931) + 0.14871*(t2145*t4915 + 4.e-6*t1495*t4921 + 4.e-6*t1996*t4931) + t4808*t741 + t4899*t946)*var2[7] + (t2443*t4987 + t2541*t4994 + t2609*t4998 + 0.14871*(-4.e-6*t1495*t4987 - 1.6e-11*t1495*t4994 + 4.e-6*t1437*t4998) - 0.03875*(-1.*t1495*t4987 - 4.e-6*t1495*t4994 + t1437*t4998) + 0.80321*(-1.*t1437*t4987 - 4.e-6*t1437*t4994 - 1.000000000016*t1495*t4998))*var2[8];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_FlFootTrotStance1.hh"

namespace TrotStance1
{

void impact_velocity_FlFootTrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
