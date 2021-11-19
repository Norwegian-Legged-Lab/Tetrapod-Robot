/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:43 GMT+01:00
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
  double t464;
  double t250;
  double t314;
  double t580;
  double t505;
  double t528;
  double t582;
  double t849;
  double t882;
  double t999;
  double t142;
  double t555;
  double t657;
  double t659;
  double t1305;
  double t1388;
  double t1434;
  double t1655;
  double t1709;
  double t1737;
  double t1747;
  double t1758;
  double t1913;
  double t1985;
  double t2002;
  double t2040;
  double t1165;
  double t1173;
  double t1197;
  double t1206;
  double t2317;
  double t2786;
  double t2841;
  double t2851;
  double t2852;
  double t2858;
  double t2880;
  double t2892;
  double t2764;
  double t2797;
  double t2801;
  double t2810;
  double t2937;
  double t2941;
  double t2942;
  double t2952;
  double t2959;
  double t2975;
  double t3263;
  double t3269;
  double t3274;
  double t3290;
  double t3292;
  double t3295;
  double t1256;
  double t1490;
  double t1675;
  double t1687;
  double t1795;
  double t1826;
  double t1841;
  double t2081;
  double t2112;
  double t2113;
  double t2120;
  double t2150;
  double t2179;
  double t3374;
  double t3375;
  double t3381;
  double t3341;
  double t3353;
  double t3357;
  double t3392;
  double t3402;
  double t3406;
  double t2328;
  double t2389;
  double t3284;
  double t3297;
  double t3298;
  double t3299;
  double t3301;
  double t3303;
  double t3304;
  double t3307;
  double t3315;
  double t3327;
  double t3373;
  double t3388;
  double t3410;
  double t3428;
  double t3446;
  double t3459;
  double t3464;
  double t3466;
  double t3477;
  double t3486;
  double t3487;
  double t3491;
  double t3498;
  double t3503;
  double t3509;
  double t3519;
  double t3525;
  double t3527;
  double t3275;
  double t3279;
  double t3285;
  double t3595;
  double t3598;
  double t3599;
  double t3608;
  double t3613;
  double t3614;
  double t3629;
  double t3633;
  double t3636;
  double t3652;
  double t3694;
  double t3696;
  double t3697;
  double t3699;
  double t3671;
  double t3675;
  double t3676;
  double t3692;
  double t3794;
  double t3617;
  double t3618;
  double t3621;
  double t3622;
  double t3840;
  double t3842;
  double t3843;
  double t3847;
  double t3849;
  double t3854;
  double t3858;
  double t3862;
  double t3864;
  double t3867;
  double t3893;
  double t3897;
  double t3910;
  double t3917;
  double t3879;
  double t3880;
  double t3881;
  double t3886;
  double t3968;
  double t3967;
  double t3973;
  double t3981;
  double t3988;
  double t3989;
  double t3991;
  double t4018;
  double t4027;
  double t4047;
  double t4055;
  double t4058;
  double t4067;
  double t4072;
  double t4076;
  double t4079;
  double t4085;
  double t4095;
  double t4099;
  double t4100;
  double t4101;
  double t4090;
  double t4091;
  double t4092;
  double t4093;
  double t4217;
  double t4218;
  double t4219;
  double t4221;
  double t4222;
  double t4224;
  double t4229;
  double t4231;
  double t4236;
  double t4239;
  double t4244;
  double t4250;
  double t4307;
  double t4309;
  double t4311;
  double t4267;
  double t4280;
  double t4281;
  double t4318;
  double t4323;
  double t4327;
  double t3551;
  double t3561;
  double t3568;
  double t3569;
  double t4374;
  double t4377;
  double t4385;
  double t4402;
  double t4403;
  double t4410;
  double t4411;
  double t4424;
  double t4441;
  double t4442;
  double t4417;
  double t4420;
  double t4422;
  double t4459;
  double t4470;
  double t4471;
  double t263;
  double t325;
  double t384;
  double t690;
  double t701;
  double t734;
  double t1054;
  double t1119;
  double t1149;
  double t4547;
  double t4550;
  double t4551;
  double t4579;
  double t4581;
  double t4582;
  double t4586;
  double t4588;
  double t4592;
  double t4594;
  double t4595;
  double t4559;
  double t4561;
  double t4569;
  double t4570;
  double t2816;
  double t2817;
  double t2820;
  double t2894;
  double t2898;
  double t2900;
  double t3003;
  double t3004;
  double t3012;
  double t4714;
  double t4716;
  double t4722;
  double t4727;
  double t4686;
  double t4687;
  double t4695;
  double t4700;
  double t4730;
  double t4732;
  double t4811;
  double t4813;
  double t4823;
  double t4826;
  double t4827;
  double t4828;
  double t4843;
  double t4844;
  double t4850;
  double t4852;
  double t4876;
  double t4877;
  double t4878;
  double t4882;
  double t4865;
  double t4866;
  double t4867;
  double t4869;
  double t4932;
  double t4936;
  double t4937;
  double t4943;
  double t4944;
  double t4946;
  double t4949;
  double t4952;
  double t4963;
  double t4968;
  double t4973;
  double t4956;
  double t4958;
  double t4960;
  double t4977;
  double t4981;
  double t4982;
  double t5021;
  double t5022;
  double t5026;
  double t5030;
  double t5033;
  double t5054;
  double t5068;
  double t5086;
  double t5089;
  double t5090;
  double t5077;
  double t5080;
  double t5083;
  double t5096;
  double t5106;
  double t5108;
  double t5207;
  double t5208;
  double t5210;
  double t5230;
  double t5233;
  double t5238;
  double t5244;
  double t5245;
  double t5246;
  double t5248;
  double t5217;
  double t5218;
  double t5220;
  double t5225;
  double t5328;
  double t5330;
  double t5332;
  double t5335;
  double t5312;
  double t5316;
  double t5317;
  double t5319;
  double t5338;
  double t5339;
  double t4775;
  double t4785;
  t464 = Cos(var1[4]);
  t250 = Cos(var1[7]);
  t314 = Sin(var1[7]);
  t580 = Cos(var1[5]);
  t505 = Cos(var1[6]);
  t528 = Sin(var1[5]);
  t582 = Sin(var1[6]);
  t849 = t464*t580*t505;
  t882 = -1.*t464*t528*t582;
  t999 = t849 + t882;
  t142 = Sin(var1[4]);
  t555 = -1.*t464*t505*t528;
  t657 = -1.*t464*t580*t582;
  t659 = t555 + t657;
  t1305 = Cos(var1[8]);
  t1388 = -1.*t1305;
  t1434 = 1. + t1388;
  t1655 = Sin(var1[8]);
  t1709 = -1.*t250*t142;
  t1737 = -4.e-6*t250*t659;
  t1747 = -1.000000000016*t999*t314;
  t1758 = t1709 + t1737 + t1747;
  t1913 = t250*t999;
  t1985 = -1.*t142*t314;
  t2002 = -4.e-6*t659*t314;
  t2040 = t1913 + t1985 + t2002;
  t1165 = 4.e-6*t250*t999;
  t1173 = -4.e-6*t142*t314;
  t1197 = -1.6e-11*t659*t314;
  t1206 = t1165 + t1173 + t1197;
  t2317 = -1. + t1305;
  t2786 = -1. + t250;
  t2841 = 4.e-6*t2786*t142;
  t2851 = 1.6e-11*t2786;
  t2852 = 1. + t2851;
  t2858 = t2852*t659;
  t2880 = 4.e-6*t999*t314;
  t2892 = t2841 + t2858 + t2880;
  t2764 = t250*t142;
  t2797 = 4.e-6*t2786*t659;
  t2801 = t999*t314;
  t2810 = t2764 + t2797 + t2801;
  t2937 = -1.*t250;
  t2941 = 1. + t2937;
  t2942 = -1.000000000016*t2941;
  t2952 = 1. + t2942;
  t2959 = t2952*t999;
  t2975 = t2959 + t1985 + t2002;
  t3263 = -1.*t505;
  t3269 = 1. + t3263;
  t3274 = 0.15121*t3269;
  t3290 = -1.*t464*t580*t505;
  t3292 = t464*t528*t582;
  t3295 = t3290 + t3292;
  t1256 = -1.284e-8*var1[8];
  t1490 = -1.5499600000248e-7*t1434;
  t1675 = 2.012840000032e-6*t1655;
  t1687 = t1256 + t1490 + t1675;
  t1795 = 0.503210000016051*t1434;
  t1826 = 0.03874900000062*t1655;
  t1841 = t1795 + t1826;
  t2081 = 5.136e-14*var1[8];
  t2112 = -0.03874900000062*t1434;
  t2113 = 0.503210000008*t1655;
  t2120 = t2081 + t2112 + t2113;
  t2150 = -1.000000000016*t1434;
  t2179 = 1. + t2150;
  t3374 = t2952*t659;
  t3375 = -4.e-6*t3295*t314;
  t3381 = t3374 + t3375;
  t3341 = t2852*t3295;
  t3353 = 4.e-6*t659*t314;
  t3357 = t3341 + t3353;
  t3392 = 4.e-6*t2786*t3295;
  t3402 = t659*t314;
  t3406 = t3392 + t3402;
  t2328 = 1.6e-11*t2317;
  t2389 = 1. + t2328;
  t3284 = 0.15121*t582;
  t3297 = -1.2484e-7*var1[7];
  t3298 = -1.5499600000248e-7*t2941;
  t3299 = 1.124840000016e-6*t314;
  t3301 = t3297 + t3298 + t3299;
  t3303 = t3295*t3301;
  t3304 = 0.281210000008499*t2941;
  t3307 = 0.03874900000062*t314;
  t3315 = t3304 + t3307;
  t3327 = t659*t3315;
  t3373 = t3357*t1687;
  t3388 = t3381*t1841;
  t3410 = t3406*t2120;
  t3428 = t2179*t3381;
  t3446 = -4.e-6*t3357*t1655;
  t3459 = -1.*t3406*t1655;
  t3464 = t3428 + t3446 + t3459;
  t3466 = 0.80321*t3464;
  t3477 = t2389*t3357;
  t3486 = 4.e-6*t2317*t3406;
  t3487 = 4.e-6*t3381*t1655;
  t3491 = t3477 + t3486 + t3487;
  t3498 = 0.14871*t3491;
  t3503 = 4.e-6*t2317*t3357;
  t3509 = t1305*t3406;
  t3519 = t3381*t1655;
  t3525 = t3503 + t3509 + t3519;
  t3527 = -0.03875*t3525;
  t3275 = -0.15121*t582;
  t3279 = t3274 + t3275;
  t3285 = t3274 + t3284;
  t3595 = t505*t142*t528;
  t3598 = t580*t142*t582;
  t3599 = t3595 + t3598;
  t3608 = -1.*t580*t505*t142;
  t3613 = t142*t528*t582;
  t3614 = t3608 + t3613;
  t3629 = 4.e-6*t464*t2786;
  t3633 = t2852*t3599;
  t3636 = 4.e-6*t3614*t314;
  t3652 = t3629 + t3633 + t3636;
  t3694 = t464*t250;
  t3696 = 4.e-6*t2786*t3599;
  t3697 = t3614*t314;
  t3699 = t3694 + t3696 + t3697;
  t3671 = t2952*t3614;
  t3675 = -1.*t464*t314;
  t3676 = -4.e-6*t3599*t314;
  t3692 = t3671 + t3675 + t3676;
  t3794 = Sin(var1[3]);
  t3617 = 4.9936e-13*var1[7];
  t3618 = -0.03874900000062*t2941;
  t3621 = 0.281210000004*t314;
  t3622 = t3617 + t3618 + t3621;
  t3840 = -1.*t464*t505*t3794*t528;
  t3842 = -1.*t464*t580*t3794*t582;
  t3843 = t3840 + t3842;
  t3847 = t464*t580*t505*t3794;
  t3849 = -1.*t464*t3794*t528*t582;
  t3854 = t3847 + t3849;
  t3858 = 4.e-6*t2786*t3794*t142;
  t3862 = t2852*t3843;
  t3864 = 4.e-6*t3854*t314;
  t3867 = t3858 + t3862 + t3864;
  t3893 = t250*t3794*t142;
  t3897 = 4.e-6*t2786*t3843;
  t3910 = t3854*t314;
  t3917 = t3893 + t3897 + t3910;
  t3879 = t2952*t3854;
  t3880 = -1.*t3794*t142*t314;
  t3881 = -4.e-6*t3843*t314;
  t3886 = t3879 + t3880 + t3881;
  t3968 = Cos(var1[3]);
  t3967 = -1.*t580*t3794;
  t3973 = -1.*t3968*t142*t528;
  t3981 = t3967 + t3973;
  t3988 = t3968*t580*t142;
  t3989 = -1.*t3794*t528;
  t3991 = t3988 + t3989;
  t4018 = t505*t3981;
  t4027 = -1.*t3991*t582;
  t4047 = t4018 + t4027;
  t4055 = t505*t3991;
  t4058 = t3981*t582;
  t4067 = t4055 + t4058;
  t4072 = -4.e-6*t3968*t464*t2786;
  t4076 = t2852*t4047;
  t4079 = 4.e-6*t4067*t314;
  t4085 = t4072 + t4076 + t4079;
  t4095 = -1.*t3968*t464*t250;
  t4099 = 4.e-6*t2786*t4047;
  t4100 = t4067*t314;
  t4101 = t4095 + t4099 + t4100;
  t4090 = t2952*t4067;
  t4091 = t3968*t464*t314;
  t4092 = -4.e-6*t4047*t314;
  t4093 = t4090 + t4091 + t4092;
  t4217 = -1.*t580*t3794*t142;
  t4218 = -1.*t3968*t528;
  t4219 = t4217 + t4218;
  t4221 = t3968*t580;
  t4222 = -1.*t3794*t142*t528;
  t4224 = t4221 + t4222;
  t4229 = t505*t4219;
  t4231 = -1.*t4224*t582;
  t4236 = t4229 + t4231;
  t4239 = t505*t4224;
  t4244 = t4219*t582;
  t4250 = t4239 + t4244;
  t4307 = t2952*t4250;
  t4309 = -4.e-6*t4236*t314;
  t4311 = t4307 + t4309;
  t4267 = t2852*t4236;
  t4280 = 4.e-6*t4250*t314;
  t4281 = t4267 + t4280;
  t4318 = 4.e-6*t2786*t4236;
  t4323 = t4250*t314;
  t4327 = t4318 + t4323;
  t3551 = -0.15121*t505;
  t3561 = t3551 + t3284;
  t3568 = 0.15121*t505;
  t3569 = t3568 + t3284;
  t4374 = t580*t3794*t142;
  t4377 = t3968*t528;
  t4385 = t4374 + t4377;
  t4402 = -1.*t505*t4385;
  t4403 = t4402 + t4231;
  t4410 = -1.*t4385*t582;
  t4411 = t4239 + t4410;
  t4424 = t2952*t4411;
  t4441 = -4.e-6*t4403*t314;
  t4442 = t4424 + t4441;
  t4417 = t2852*t4403;
  t4420 = 4.e-6*t4411*t314;
  t4422 = t4417 + t4420;
  t4459 = 4.e-6*t2786*t4403;
  t4470 = t4411*t314;
  t4471 = t4459 + t4470;
  t263 = 0.281210000004*t250;
  t325 = -0.03874900000062*t314;
  t384 = 4.9936e-13 + t263 + t325;
  t690 = 1.124840000016e-6*t250;
  t701 = -1.5499600000248e-7*t314;
  t734 = -1.2484e-7 + t690 + t701;
  t1054 = 0.03874900000062*t250;
  t1119 = 0.281210000008499*t314;
  t1149 = t1054 + t1119;
  t4547 = t505*t4385;
  t4550 = t4224*t582;
  t4551 = t4547 + t4550;
  t4579 = t464*t250*t3794;
  t4581 = -4.e-6*t250*t4411;
  t4582 = -1.000000000016*t4551*t314;
  t4586 = t4579 + t4581 + t4582;
  t4588 = t250*t4551;
  t4592 = t464*t3794*t314;
  t4594 = -4.e-6*t4411*t314;
  t4595 = t4588 + t4592 + t4594;
  t4559 = 4.e-6*t250*t4551;
  t4561 = 4.e-6*t464*t3794*t314;
  t4569 = -1.6e-11*t4411*t314;
  t4570 = t4559 + t4561 + t4569;
  t2816 = 0.503210000008*t1305;
  t2817 = -0.03874900000062*t1655;
  t2820 = 5.136e-14 + t2816 + t2817;
  t2894 = 2.012840000032e-6*t1305;
  t2898 = -1.5499600000248e-7*t1655;
  t2900 = -1.284e-8 + t2894 + t2898;
  t3003 = 0.03874900000062*t1305;
  t3004 = 0.503210000016051*t1655;
  t3012 = t3003 + t3004;
  t4714 = -4.e-6*t464*t2786*t3794;
  t4716 = t2852*t4411;
  t4722 = 4.e-6*t4551*t314;
  t4727 = t4714 + t4716 + t4722;
  t4686 = -1.*t464*t250*t3794;
  t4687 = 4.e-6*t2786*t4411;
  t4695 = t4551*t314;
  t4700 = t4686 + t4687 + t4695;
  t4730 = t2952*t4551;
  t4732 = t4730 + t4592 + t4594;
  t4811 = t3968*t464*t505*t528;
  t4813 = t3968*t464*t580*t582;
  t4823 = t4811 + t4813;
  t4826 = -1.*t3968*t464*t580*t505;
  t4827 = t3968*t464*t528*t582;
  t4828 = t4826 + t4827;
  t4843 = -4.e-6*t3968*t2786*t142;
  t4844 = t2852*t4823;
  t4850 = 4.e-6*t4828*t314;
  t4852 = t4843 + t4844 + t4850;
  t4876 = -1.*t3968*t250*t142;
  t4877 = 4.e-6*t2786*t4823;
  t4878 = t4828*t314;
  t4882 = t4876 + t4877 + t4878;
  t4865 = t2952*t4828;
  t4866 = t3968*t142*t314;
  t4867 = -4.e-6*t4823*t314;
  t4869 = t4865 + t4866 + t4867;
  t4932 = t580*t3794;
  t4936 = t3968*t142*t528;
  t4937 = t4932 + t4936;
  t4943 = -1.*t4937*t582;
  t4944 = t4055 + t4943;
  t4946 = t505*t4937;
  t4949 = t3991*t582;
  t4952 = t4946 + t4949;
  t4963 = t2952*t4952;
  t4968 = -4.e-6*t4944*t314;
  t4973 = t4963 + t4968;
  t4956 = t2852*t4944;
  t4958 = 4.e-6*t4952*t314;
  t4960 = t4956 + t4958;
  t4977 = 4.e-6*t2786*t4944;
  t4981 = t4952*t314;
  t4982 = t4977 + t4981;
  t5021 = -1.*t3968*t580*t142;
  t5022 = t3794*t528;
  t5026 = t5021 + t5022;
  t5030 = -1.*t505*t5026;
  t5033 = t5030 + t4943;
  t5054 = -1.*t5026*t582;
  t5068 = t4946 + t5054;
  t5086 = t2952*t5068;
  t5089 = -4.e-6*t5033*t314;
  t5090 = t5086 + t5089;
  t5077 = t2852*t5033;
  t5080 = 4.e-6*t5068*t314;
  t5083 = t5077 + t5080;
  t5096 = 4.e-6*t2786*t5033;
  t5106 = t5068*t314;
  t5108 = t5096 + t5106;
  t5207 = t505*t5026;
  t5208 = t4937*t582;
  t5210 = t5207 + t5208;
  t5230 = -4.e-6*t250*t5068;
  t5233 = -1.000000000016*t5210*t314;
  t5238 = t4095 + t5230 + t5233;
  t5244 = t250*t5210;
  t5245 = -1.*t3968*t464*t314;
  t5246 = -4.e-6*t5068*t314;
  t5248 = t5244 + t5245 + t5246;
  t5217 = 4.e-6*t250*t5210;
  t5218 = -4.e-6*t3968*t464*t314;
  t5220 = -1.6e-11*t5068*t314;
  t5225 = t5217 + t5218 + t5220;
  t5328 = 4.e-6*t3968*t464*t2786;
  t5330 = t2852*t5068;
  t5332 = 4.e-6*t5210*t314;
  t5335 = t5328 + t5330 + t5332;
  t5312 = t3968*t464*t250;
  t5316 = 4.e-6*t2786*t5068;
  t5317 = t5210*t314;
  t5319 = t5312 + t5316 + t5317;
  t5338 = t2952*t5210;
  t5339 = t5338 + t5245 + t5246;
  t4775 = -4.e-6*t4727*t1655;
  t4785 = -1.*t4700*t1655;
  p_output1[0]=var2[0] + (t3301*t3599 + t3315*t3614 + t1687*t3652 + t1841*t3692 + t2120*t3699 - 0.03875*(4.e-6*t2317*t3652 + t1655*t3692 + t1305*t3699) + 0.80321*(-4.e-6*t1655*t3652 + t2179*t3692 - 1.*t1655*t3699) + 0.14871*(t2389*t3652 + 4.e-6*t1655*t3692 + 4.e-6*t2317*t3699) + t3622*t464 + t142*t3279*t528 - 1.*t142*t3285*t580)*var2[4] + (t3303 + t3327 + t3373 + t3388 + t3410 + t3466 + t3498 + t3527 - 1.*t3285*t464*t528 - 1.*t3279*t464*t580)*var2[5] + (t3303 + t3327 + t3373 + t3388 + t3410 + t3466 + t3498 + t3527 - 1.*t3561*t464*t528 + t3569*t464*t580)*var2[6] + (t1206*t1687 + t1758*t1841 + t2040*t2120 + 0.80321*(-4.e-6*t1206*t1655 - 1.*t1655*t2040 + t1758*t2179) - 0.03875*(t1655*t1758 + t1305*t2040 + 4.e-6*t1206*t2317) + 0.14871*(4.e-6*t1655*t1758 + 4.e-6*t2040*t2317 + t1206*t2389) + t142*t384 + t659*t734 + t1149*t999)*var2[7] + (t2810*t2820 + t2892*t2900 + 0.14871*(-4.e-6*t1655*t2810 - 1.6e-11*t1655*t2892 + 4.e-6*t1305*t2975) - 0.03875*(-1.*t1655*t2810 - 4.e-6*t1655*t2892 + t1305*t2975) + 0.80321*(-1.*t1305*t2810 - 4.e-6*t1305*t2892 - 1.000000000016*t1655*t2975) + t2975*t3012)*var2[8];
  p_output1[1]=var2[1] + (t3279*t3981 + t3285*t3991 + t3301*t4047 + t3315*t4067 + t1687*t4085 + t1841*t4093 + t2120*t4101 - 0.03875*(4.e-6*t2317*t4085 + t1655*t4093 + t1305*t4101) + 0.80321*(-4.e-6*t1655*t4085 + t2179*t4093 - 1.*t1655*t4101) + 0.14871*(t2389*t4085 + 4.e-6*t1655*t4093 + 4.e-6*t2317*t4101) - 1.*t3622*t3968*t464)*var2[3] + (t142*t3622*t3794 + t3301*t3843 + t3315*t3854 + t1687*t3867 + t1841*t3886 + t2120*t3917 - 0.03875*(4.e-6*t2317*t3867 + t1655*t3886 + t1305*t3917) + 0.80321*(-4.e-6*t1655*t3867 + t2179*t3886 - 1.*t1655*t3917) + 0.14871*(t2389*t3867 + 4.e-6*t1655*t3886 + 4.e-6*t2317*t3917) - 1.*t3279*t3794*t464*t528 + t3285*t3794*t464*t580)*var2[4] + (t3279*t4219 + t3285*t4224 + t3301*t4236 + t3315*t4250 + t1687*t4281 + t1841*t4311 + t2120*t4327 - 0.03875*(4.e-6*t2317*t4281 + t1655*t4311 + t1305*t4327) + 0.80321*(-4.e-6*t1655*t4281 + t2179*t4311 - 1.*t1655*t4327) + 0.14871*(t2389*t4281 + 4.e-6*t1655*t4311 + 4.e-6*t2317*t4327))*var2[5] + (t3561*t4224 + t3569*t4385 + t3301*t4403 + t3315*t4411 + t1687*t4422 + t1841*t4442 + t2120*t4471 - 0.03875*(4.e-6*t2317*t4422 + t1655*t4442 + t1305*t4471) + 0.80321*(-4.e-6*t1655*t4422 + t2179*t4442 - 1.*t1655*t4471) + 0.14871*(t2389*t4422 + 4.e-6*t1655*t4442 + 4.e-6*t2317*t4471))*var2[6] + (t1149*t4551 + t1687*t4570 + t1841*t4586 + t2120*t4595 - 0.03875*(4.e-6*t2317*t4570 + t1655*t4586 + t1305*t4595) + 0.80321*(-4.e-6*t1655*t4570 + t2179*t4586 - 1.*t1655*t4595) + 0.14871*(t2389*t4570 + 4.e-6*t1655*t4586 + 4.e-6*t2317*t4595) - 1.*t3794*t384*t464 + t4411*t734)*var2[7] + (t2820*t4700 + t2900*t4727 + t3012*t4732 + 0.14871*(-4.e-6*t1655*t4700 - 1.6e-11*t1655*t4727 + 4.e-6*t1305*t4732) + 0.80321*(-1.*t1305*t4700 - 4.e-6*t1305*t4727 - 1.000000000016*t1655*t4732) - 0.03875*(t1305*t4732 + t4775 + t4785))*var2[8];
  p_output1[2]=var2[2] + (t3279*t4224 + t3285*t4385 + t3301*t4411 + t3315*t4551 - 1.*t3622*t3794*t464 + t2120*t4700 + t1687*t4727 + t1841*t4732 + 0.14871*(4.e-6*t2317*t4700 + t2389*t4727 + 4.e-6*t1655*t4732) - 0.03875*(t1305*t4700 + 4.e-6*t2317*t4727 + t1655*t4732) + 0.80321*(t2179*t4732 + t4775 + t4785))*var2[3] + (-1.*t142*t3622*t3968 + t3301*t4823 + t3315*t4828 + t1687*t4852 + t1841*t4869 + t2120*t4882 - 0.03875*(4.e-6*t2317*t4852 + t1655*t4869 + t1305*t4882) + 0.80321*(-4.e-6*t1655*t4852 + t2179*t4869 - 1.*t1655*t4882) + 0.14871*(t2389*t4852 + 4.e-6*t1655*t4869 + 4.e-6*t2317*t4882) + t3279*t3968*t464*t528 - 1.*t3285*t3968*t464*t580)*var2[4] + (t3279*t3991 + t3285*t4937 + t3301*t4944 + t3315*t4952 + t1687*t4960 + t1841*t4973 + t2120*t4982 - 0.03875*(4.e-6*t2317*t4960 + t1655*t4973 + t1305*t4982) + 0.80321*(-4.e-6*t1655*t4960 + t2179*t4973 - 1.*t1655*t4982) + 0.14871*(t2389*t4960 + 4.e-6*t1655*t4973 + 4.e-6*t2317*t4982))*var2[5] + (t3561*t4937 + t3569*t5026 + t3301*t5033 + t3315*t5068 + t1687*t5083 + t1841*t5090 + t2120*t5108 - 0.03875*(4.e-6*t2317*t5083 + t1655*t5090 + t1305*t5108) + 0.80321*(-4.e-6*t1655*t5083 + t2179*t5090 - 1.*t1655*t5108) + 0.14871*(t2389*t5083 + 4.e-6*t1655*t5090 + 4.e-6*t2317*t5108))*var2[6] + (t384*t3968*t464 + t1149*t5210 + t1687*t5225 + t1841*t5238 + t2120*t5248 - 0.03875*(4.e-6*t2317*t5225 + t1655*t5238 + t1305*t5248) + 0.80321*(-4.e-6*t1655*t5225 + t2179*t5238 - 1.*t1655*t5248) + 0.14871*(t2389*t5225 + 4.e-6*t1655*t5238 + 4.e-6*t2317*t5248) + t5068*t734)*var2[7] + (t2820*t5319 + t2900*t5335 + t3012*t5339 + 0.14871*(-4.e-6*t1655*t5319 - 1.6e-11*t1655*t5335 + 4.e-6*t1305*t5339) - 0.03875*(-1.*t1655*t5319 - 4.e-6*t1655*t5335 + t1305*t5339) + 0.80321*(-1.*t1305*t5319 - 4.e-6*t1305*t5335 - 1.000000000016*t1655*t5339))*var2[8];
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

#include "impact_velocity_FlFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void impact_velocity_FlFootDiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
