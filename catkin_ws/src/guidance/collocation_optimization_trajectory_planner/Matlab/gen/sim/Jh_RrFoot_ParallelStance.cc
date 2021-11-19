/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:52 GMT+01:00
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
  double t145;
  double t147;
  double t203;
  double t5;
  double t83;
  double t85;
  double t296;
  double t124;
  double t311;
  double t259;
  double t291;
  double t313;
  double t327;
  double t329;
  double t605;
  double t447;
  double t481;
  double t490;
  double t494;
  double t521;
  double t539;
  double t569;
  double t671;
  double t704;
  double t711;
  double t750;
  double t767;
  double t107;
  double t922;
  double t1273;
  double t953;
  double t1066;
  double t1073;
  double t1146;
  double t1156;
  double t1188;
  double t1194;
  double t1201;
  double t1214;
  double t1225;
  double t893;
  double t1293;
  double t1307;
  double t1309;
  double t1342;
  double t1346;
  double t1349;
  double t1372;
  double t1384;
  double t1395;
  double t1430;
  double t431;
  double t442;
  double t634;
  double t648;
  double t137;
  double t839;
  double t880;
  double t886;
  double t1674;
  double t1714;
  double t1717;
  double t1767;
  double t1773;
  double t1815;
  double t1832;
  double t1855;
  double t1859;
  double t1910;
  double t1917;
  double t1941;
  double t1970;
  double t1999;
  double t2013;
  double t2054;
  double t2099;
  double t1530;
  double t2372;
  double t2322;
  double t2374;
  double t2433;
  double t2461;
  double t2467;
  double t2494;
  double t2515;
  double t2535;
  double t2556;
  double t2559;
  double t2573;
  double t2575;
  double t2583;
  double t2620;
  double t2624;
  double t2627;
  double t2629;
  double t2630;
  double t2644;
  double t2711;
  double t2736;
  double t2787;
  double t2802;
  double t2813;
  double t2821;
  double t2844;
  double t2870;
  double t1450;
  double t1479;
  double t1519;
  double t1259;
  double t1432;
  double t1447;
  double t418;
  double t593;
  double t829;
  double t836;
  double t1448;
  double t1540;
  double t1580;
  double t3009;
  double t2130;
  double t2134;
  double t2208;
  double t1981;
  double t2100;
  double t2111;
  double t3105;
  double t1761;
  double t1850;
  double t1860;
  double t1862;
  double t2124;
  double t2228;
  double t2256;
  double t2930;
  double t2937;
  double t2963;
  double t2811;
  double t2874;
  double t2884;
  double t2499;
  double t2602;
  double t2649;
  double t2686;
  double t2911;
  double t2971;
  double t2974;
  double t3036;
  double t3054;
  double t3071;
  double t3114;
  double t3127;
  double t3136;
  double t3171;
  double t3172;
  double t3186;
  double t3233;
  double t3241;
  double t3262;
  double t3271;
  double t3275;
  double t3294;
  double t3308;
  double t3310;
  double t3316;
  double t2704;
  double t2999;
  double t3008;
  double t3420;
  double t3481;
  double t3482;
  double t3487;
  double t3499;
  double t3507;
  double t3524;
  double t3530;
  double t3533;
  double t3536;
  double t3544;
  double t3553;
  double t3561;
  double t3562;
  double t3563;
  double t3573;
  double t3582;
  double t3587;
  double t3590;
  double t3592;
  double t3594;
  double t3598;
  double t3614;
  double t3619;
  double t3628;
  double t3630;
  double t3632;
  double t3642;
  double t3643;
  double t3645;
  double t3656;
  double t3660;
  double t3666;
  double t3355;
  double t3357;
  double t3364;
  double t3405;
  double t3409;
  double t3425;
  double t3426;
  double t3439;
  double t3444;
  double t3470;
  double t3546;
  double t3618;
  double t3672;
  double t3676;
  double t3688;
  double t3693;
  double t3702;
  double t3716;
  double t3730;
  double t3734;
  double t3736;
  double t3740;
  double t3748;
  double t3749;
  double t3753;
  double t3756;
  double t1895;
  double t2263;
  double t2268;
  double t3773;
  double t3776;
  double t3785;
  double t3786;
  double t3398;
  double t3684;
  double t3757;
  double t3763;
  double t3825;
  double t3832;
  double t3841;
  double t3844;
  double t3849;
  double t3854;
  double t3856;
  double t3857;
  double t3859;
  double t3872;
  double t3881;
  double t3886;
  double t3902;
  double t3766;
  double t3788;
  double t3797;
  double t3877;
  double t3908;
  double t3913;
  double t3923;
  double t3936;
  double t3939;
  double t862;
  double t1623;
  double t1635;
  double t3816;
  double t3956;
  double t3989;
  double t4007;
  double t4052;
  double t4068;
  double t4086;
  double t4096;
  double t4124;
  double t4130;
  double t4146;
  double t4179;
  double t4384;
  double t4390;
  double t4392;
  double t4394;
  double t4404;
  double t4406;
  double t4408;
  double t4409;
  double t4443;
  double t4453;
  double t4454;
  double t4457;
  double t4462;
  double t4465;
  double t4469;
  double t4470;
  double t4497;
  double t4498;
  double t4499;
  double t4501;
  double t4504;
  double t4506;
  double t4509;
  double t4511;
  t145 = Cos(var1[17]);
  t147 = -1.*t145;
  t203 = 1. + t147;
  t5 = Cos(var1[16]);
  t83 = -1.*t5;
  t85 = 1. + t83;
  t296 = Sin(var1[17]);
  t124 = Sin(var1[16]);
  t311 = 4.e-6*t296;
  t259 = 1.000000000016*t203;
  t291 = -7.e-6*t203;
  t313 = t291 + t311;
  t327 = -7.e-6*t313;
  t329 = -1. + t259 + t327;
  t605 = 4.e-6*t85;
  t447 = 2.8e-11*t203;
  t481 = 4.e-6*t203;
  t490 = 7.e-6*t296;
  t494 = t481 + t490;
  t521 = -7.e-6*t494;
  t539 = -1.*t296;
  t569 = t447 + t521 + t539;
  t671 = -6.5e-11*t203;
  t704 = 1. + t671;
  t711 = -7.e-6*t704;
  t750 = 7.e-6*t203;
  t767 = t711 + t750 + t311;
  t107 = -2.8e-11*t85;
  t922 = -7.e-6*t85;
  t1273 = Cos(var1[15]);
  t953 = -4.e-6*t124;
  t1066 = t922 + t953;
  t1073 = t1066*t329;
  t1146 = -7.e-6*t124;
  t1156 = t605 + t1146;
  t1188 = t1156*t569;
  t1194 = -6.5e-11*t85;
  t1201 = 1. + t1194;
  t1214 = t1201*t767;
  t1225 = t1073 + t1188 + t1214;
  t893 = Sin(var1[15]);
  t1293 = -1.000000000016*t85;
  t1307 = 1. + t1293;
  t1309 = t1307*t329;
  t1342 = -1.*t124;
  t1346 = t107 + t1342;
  t1349 = t1346*t569;
  t1372 = 4.e-6*t124;
  t1384 = t922 + t1372;
  t1395 = t1384*t767;
  t1430 = t1309 + t1349 + t1395;
  t431 = -1.000000000049*t85;
  t442 = 1. + t431;
  t634 = 7.e-6*t124;
  t648 = t605 + t634;
  t137 = t107 + t124;
  t839 = Sin(var1[4]);
  t880 = Cos(var1[4]);
  t886 = Cos(var1[5]);
  t1674 = 1.000000000049*t203;
  t1714 = 4.e-6*t494;
  t1717 = -1. + t1674 + t1714;
  t1767 = 4.e-6*t704;
  t1773 = -1. + t145;
  t1815 = 4.e-6*t1773;
  t1832 = t1767 + t1815 + t490;
  t1855 = 4.e-6*t313;
  t1859 = t447 + t1855 + t296;
  t1910 = t1346*t1717;
  t1917 = t1384*t1832;
  t1941 = t1307*t1859;
  t1970 = t1910 + t1917 + t1941;
  t1999 = t1156*t1717;
  t2013 = t1201*t1832;
  t2054 = t1066*t1859;
  t2099 = t1999 + t2013 + t2054;
  t1530 = Sin(var1[5]);
  t2372 = -4.e-6*t296;
  t2322 = 6.5e-11*t203;
  t2374 = t291 + t2372;
  t2433 = 7.e-6*t2374;
  t2461 = t1815 + t490;
  t2467 = 4.e-6*t2461;
  t2494 = -1. + t2322 + t2433 + t2467;
  t2515 = -1. + t1674;
  t2535 = 4.e-6*t2515;
  t2556 = -7.e-6*t296;
  t2559 = -2.8e-11*t203;
  t2573 = t2559 + t296;
  t2575 = 7.e-6*t2573;
  t2583 = t2535 + t1815 + t2556 + t2575;
  t2620 = -1.000000000016*t203;
  t2624 = 1. + t2620;
  t2627 = 7.e-6*t2624;
  t2629 = t447 + t296;
  t2630 = 4.e-6*t2629;
  t2644 = t2627 + t750 + t2372 + t2630;
  t2711 = t1384*t2494;
  t2736 = t1346*t2583;
  t2787 = t1307*t2644;
  t2802 = t2711 + t2736 + t2787;
  t2813 = t1201*t2494;
  t2821 = t1156*t2583;
  t2844 = t1066*t2644;
  t2870 = t2813 + t2821 + t2844;
  t1450 = t1273*t1225;
  t1479 = t893*t1430;
  t1519 = t1450 + t1479;
  t1259 = -1.*t893*t1225;
  t1432 = t1273*t1430;
  t1447 = t1259 + t1432;
  t418 = t137*t329;
  t593 = t442*t569;
  t829 = t648*t767;
  t836 = t418 + t593 + t829;
  t1448 = t886*t1447;
  t1540 = -1.*t1519*t1530;
  t1580 = t1448 + t1540;
  t3009 = Cos(var1[3]);
  t2130 = t893*t1970;
  t2134 = t1273*t2099;
  t2208 = t2130 + t2134;
  t1981 = t1273*t1970;
  t2100 = -1.*t893*t2099;
  t2111 = t1981 + t2100;
  t3105 = Sin(var1[3]);
  t1761 = t442*t1717;
  t1850 = t648*t1832;
  t1860 = t137*t1859;
  t1862 = t1761 + t1850 + t1860;
  t2124 = t886*t2111;
  t2228 = -1.*t2208*t1530;
  t2256 = t2124 + t2228;
  t2930 = t893*t2802;
  t2937 = t1273*t2870;
  t2963 = t2930 + t2937;
  t2811 = t1273*t2802;
  t2874 = -1.*t893*t2870;
  t2884 = t2811 + t2874;
  t2499 = t648*t2494;
  t2602 = t442*t2583;
  t2649 = t137*t2644;
  t2686 = t2499 + t2602 + t2649;
  t2911 = t886*t2884;
  t2971 = -1.*t2963*t1530;
  t2974 = t2911 + t2971;
  t3036 = t886*t1519;
  t3054 = t1447*t1530;
  t3071 = t3036 + t3054;
  t3114 = t880*t836;
  t3127 = -1.*t839*t1580;
  t3136 = t3114 + t3127;
  t3171 = t886*t2208;
  t3172 = t2111*t1530;
  t3186 = t3171 + t3172;
  t3233 = t880*t1862;
  t3241 = -1.*t839*t2256;
  t3262 = t3233 + t3241;
  t3271 = t886*t2963;
  t3275 = t2884*t1530;
  t3294 = t3271 + t3275;
  t3308 = t880*t2686;
  t3310 = -1.*t839*t2974;
  t3316 = t3308 + t3310;
  t2704 = t2686*t839;
  t2999 = t880*t2974;
  t3008 = t2704 + t2999;
  t3420 = 7.e-6*t85;
  t3481 = 2.826290000000002e-7*var1[17];
  t3482 = -0.148715*t704;
  t3487 = -2.18904205e-16*t203;
  t3499 = t481 + t2556;
  t3507 = -0.038576*t3499;
  t3524 = -0.80315*t2374;
  t3530 = t750 + t311;
  t3533 = -0.5031510000080001*t3530;
  t3536 = -0.038575000014*t2461;
  t3544 = t3481 + t3482 + t3487 + t3507 + t3524 + t3533 + t3536;
  t3553 = 1.1305160000000008e-12*var1[17];
  t3561 = -1.000000000049*t203;
  t3562 = 1. + t3561;
  t3563 = -0.038576*t3562;
  t3573 = -0.03857500001589017*t203;
  t3582 = t447 + t539;
  t3587 = -0.5031510000080001*t3582;
  t3590 = t1815 + t2556;
  t3592 = -3.367757e-6*t3590;
  t3594 = -0.148715*t494;
  t3598 = -0.80315*t2573;
  t3614 = t3553 + t3563 + t3573 + t3587 + t3592 + t3594 + t3598;
  t3619 = -1.9784030000000015e-12*var1[17];
  t3628 = -0.80315*t2624;
  t3630 = -0.5031510000160505*t203;
  t3632 = t2559 + t539;
  t3642 = -0.038576*t3632;
  t3643 = t750 + t2372;
  t3645 = -3.367757e-6*t3643;
  t3656 = -0.148715*t313;
  t3660 = -0.038575000014*t2629;
  t3666 = t3619 + t3628 + t3630 + t3642 + t3645 + t3656 + t3660;
  t3355 = -1.*t1273;
  t3357 = 1. + t3355;
  t3364 = -0.15121*t3357;
  t3405 = -2.7726089999999997e-12*var1[16];
  t3409 = -0.2812110000084994*t85;
  t3425 = t3420 + t953;
  t3426 = -1.8134809999999998e-6*t3425;
  t3439 = 2.8e-11*t85;
  t3444 = t3439 + t124;
  t3470 = -0.038749000006999997*t3444;
  t3546 = t1384*t3544;
  t3618 = t1346*t3614;
  t3672 = t1307*t3666;
  t3676 = t3405 + t3409 + t3426 + t3470 + t3546 + t3618 + t3672;
  t3688 = 3.9608699999999997e-7*var1[16];
  t3693 = -1.1787626499999999e-16*t85;
  t3702 = t3420 + t1372;
  t3716 = -0.281211000004*t3702;
  t3730 = -1. + t5;
  t3734 = 4.e-6*t3730;
  t3736 = t3734 + t634;
  t3740 = -0.038749000006999997*t3736;
  t3748 = t1201*t3544;
  t3749 = t1156*t3614;
  t3753 = t1066*t3666;
  t3756 = t3688 + t3693 + t3716 + t3740 + t3748 + t3749 + t3753;
  t1895 = t1862*t839;
  t2263 = t880*t2256;
  t2268 = t1895 + t2263;
  t3773 = -0.15121*t893;
  t3776 = t1273*t3676;
  t3785 = -1.*t893*t3756;
  t3786 = t3364 + t3773 + t3776 + t3785;
  t3398 = 0.15121*t893;
  t3684 = t893*t3676;
  t3757 = t1273*t3756;
  t3763 = t3364 + t3398 + t3684 + t3757;
  t3825 = 1.5843479999999999e-12*var1[16];
  t3832 = -0.03874900000889869*t85;
  t3841 = t3439 + t1342;
  t3844 = -0.281211000004*t3841;
  t3849 = t3734 + t1146;
  t3854 = -1.8134809999999998e-6*t3849;
  t3856 = t648*t3544;
  t3857 = t442*t3614;
  t3859 = t137*t3666;
  t3872 = t3825 + t3832 + t3844 + t3854 + t3856 + t3857 + t3859;
  t3881 = t886*t3786;
  t3886 = -1.*t3763*t1530;
  t3902 = t3881 + t3886;
  t3766 = t886*t3763;
  t3788 = t3786*t1530;
  t3797 = t3766 + t3788;
  t3877 = t3872*t839;
  t3908 = t880*t3902;
  t3913 = t3877 + t3908;
  t3923 = t880*t3872;
  t3936 = -1.*t839*t3902;
  t3939 = t3923 + t3936;
  t862 = t836*t839;
  t1623 = t880*t1580;
  t1635 = t862 + t1623;
  t3816 = -1.*t3186*t3797;
  t3956 = t3797*t3294;
  t3989 = t3071*t3797;
  t4007 = -1.*t3797*t3294;
  t4052 = -1.*t3071*t3797;
  t4068 = t3186*t3797;
  t4086 = -1.*t1862*t3872;
  t4096 = t3872*t2686;
  t4124 = t836*t3872;
  t4130 = -1.*t3872*t2686;
  t4146 = -1.*t836*t3872;
  t4179 = t1862*t3872;
  t4384 = -1.*t3544*t1832;
  t4390 = -1.*t1717*t3614;
  t4392 = -1.*t1859*t3666;
  t4394 = t4384 + t4390 + t4392;
  t4404 = t3544*t2494;
  t4406 = t3614*t2583;
  t4408 = t3666*t2644;
  t4409 = t4404 + t4406 + t4408;
  t4443 = t3544*t767;
  t4453 = t569*t3614;
  t4454 = t329*t3666;
  t4457 = t4443 + t4453 + t4454;
  t4462 = -1.*t3544*t2494;
  t4465 = -1.*t3614*t2583;
  t4469 = -1.*t3666*t2644;
  t4470 = t4462 + t4465 + t4469;
  t4497 = -1.*t3544*t767;
  t4498 = -1.*t569*t3614;
  t4499 = -1.*t329*t3666;
  t4501 = t4497 + t4498 + t4499;
  t4504 = t3544*t1832;
  t4506 = t1717*t3614;
  t4509 = t1859*t3666;
  t4511 = t4504 + t4506 + t4509;
  p_output1[0]=t1635;
  p_output1[1]=t2268;
  p_output1[2]=t3008;
  p_output1[3]=t3009*t3071 - 1.*t3105*t3136;
  p_output1[4]=t3009*t3186 - 1.*t3105*t3262;
  p_output1[5]=t3009*t3294 - 1.*t3105*t3316;
  p_output1[6]=t3071*t3105 + t3009*t3136;
  p_output1[7]=t3105*t3186 + t3009*t3262;
  p_output1[8]=t3105*t3294 + t3009*t3316;
  p_output1[9]=t3008*(t3816 - 1.*t2268*t3913 - 1.*t3262*t3939) + t2268*(t3008*t3913 + t3316*t3939 + t3956);
  p_output1[10]=t3008*(t1635*t3913 + t3136*t3939 + t3989) + t1635*(-1.*t3008*t3913 - 1.*t3316*t3939 + t4007);
  p_output1[11]=t2268*(-1.*t1635*t3913 - 1.*t3136*t3939 + t4052) + t1635*(t2268*t3913 + t3262*t3939 + t4068);
  p_output1[12]=t3294*(t3816 - 1.*t2256*t3902 + t4086) + t3186*(t2974*t3902 + t3956 + t4096);
  p_output1[13]=t3294*(t1580*t3902 + t3989 + t4124) + t3071*(-1.*t2974*t3902 + t4007 + t4130);
  p_output1[14]=t3186*(-1.*t1580*t3902 + t4052 + t4146) + t3071*(t2256*t3902 + t4068 + t4179);
  p_output1[15]=t2686*(-1.*t2208*t3763 - 1.*t2111*t3786 + t4086) + t1862*(t2963*t3763 + t2884*t3786 + t4096);
  p_output1[16]=t2686*(t1519*t3763 + t1447*t3786 + t4124) + (-1.*t2963*t3763 - 1.*t2884*t3786 + t4130)*t836;
  p_output1[17]=t1862*(-1.*t1519*t3763 - 1.*t1447*t3786 + t4146) + (t2208*t3763 + t2111*t3786 + t4179)*t836;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.15121*t1225 - 0.15121*t1430 + t2686*(-1.*t1970*t3676 - 1.*t2099*t3756 + t4086) + t1862*(t2802*t3676 + t2870*t3756 + t4096);
  p_output1[46]=-0.15121*t1970 + 0.15121*t2099 + t2686*(t1430*t3676 + t1225*t3756 + t4124) + (-1.*t2802*t3676 - 1.*t2870*t3756 + t4130)*t836;
  p_output1[47]=-0.15121*t2802 + 0.15121*t2870 + t1862*(-1.*t1430*t3676 - 1.*t1225*t3756 + t4146) + (t1970*t3676 + t2099*t3756 + t4179)*t836;
  p_output1[48]=-0.038749*t329 - 1.*t2494*t4394 - 1.*t1832*t4409 + 4.e-6*(-1.*t2583*t4394 - 1.*t1717*t4409) + 7.e-6*(t2644*t4394 + t1859*t4409) + 0.281211*t569 + 1.e-6*(t2372 + t291 + 7.e-6*t704);
  p_output1[49]=0.281211*t1717 - 0.038749*t1859 - 1.*t2494*t4457 + 7.e-6*(t2644*t4457 + t329*t4470) + 1.e-6*(4.e-6*(-1. + t2322) + t2556 + t481) + 4.e-6*(-1.*t2583*t4457 - 1.*t4470*t569) - 1.*t4470*t767;
  p_output1[50]=0.281211*t2583 - 0.038749*t2644 - 1.*t1832*t4501 + 7.e-6*(t1859*t4501 + t329*t4511) + 4.e-6*(-1.*t1717*t4501 - 1.*t4511*t569) + 1.e-6*(1. - 7.e-6*t2374 + 4.e-6*t3499 + t671) - 1.*t4511*t767;
  p_output1[51]=-4.051285074010787e-7;
  p_output1[52]=0.3000000410492048;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
