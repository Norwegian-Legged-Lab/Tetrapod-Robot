/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:41 GMT+01:00
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
  double t316;
  double t340;
  double t353;
  double t79;
  double t112;
  double t151;
  double t208;
  double t507;
  double t527;
  double t404;
  double t478;
  double t546;
  double t558;
  double t565;
  double t639;
  double t640;
  double t944;
  double t982;
  double t1066;
  double t1118;
  double t1151;
  double t155;
  double t1233;
  double t1282;
  double t1283;
  double t1426;
  double t1521;
  double t583;
  double t2349;
  double t2370;
  double t1751;
  double t2166;
  double t1796;
  double t1824;
  double t2452;
  double t1941;
  double t1949;
  double t1685;
  double t1691;
  double t276;
  double t2486;
  double t2215;
  double t2372;
  double t2505;
  double t2519;
  double t2740;
  double t2746;
  double t2821;
  double t615;
  double t616;
  double t2951;
  double t2965;
  double t1203;
  double t1223;
  double t2992;
  double t2997;
  double t298;
  double t3024;
  double t3026;
  double t3146;
  double t2069;
  double t3232;
  double t3265;
  double t3272;
  double t3273;
  double t3296;
  double t3300;
  double t3306;
  double t3349;
  double t3360;
  double t3397;
  double t3420;
  double t3430;
  double t3436;
  double t3478;
  double t3521;
  double t3524;
  double t3550;
  double t3551;
  double t3567;
  double t3609;
  double t3620;
  double t3642;
  double t3683;
  double t3687;
  double t3695;
  double t3698;
  double t3699;
  double t3709;
  double t3710;
  double t3712;
  double t3720;
  double t3735;
  double t2437;
  double t2445;
  double t2072;
  double t2694;
  double t3182;
  double t3826;
  double t3869;
  double t3908;
  double t3923;
  double t3937;
  double t3939;
  double t3093;
  double t3098;
  double t3166;
  double t3169;
  double t3193;
  double t3210;
  double t3408;
  double t3682;
  double t3739;
  double t3764;
  double t2079;
  double t2318;
  double t2398;
  double t2426;
  double t2457;
  double t2464;
  double t2545;
  double t2561;
  double t2749;
  double t2891;
  double t2913;
  double t3803;
  double t3810;
  double t3815;
  double t3820;
  double t3871;
  double t3875;
  double t3890;
  double t3891;
  double t3893;
  double t3903;
  double t3942;
  double t3948;
  double t3952;
  double t3957;
  double t3958;
  double t3967;
  double t3968;
  double t3972;
  double t3988;
  double t3994;
  double t2430;
  double t2621;
  double t2926;
  double t2936;
  double t4400;
  double t4405;
  double t4413;
  double t4414;
  double t4466;
  double t4514;
  double t4542;
  double t4590;
  double t4034;
  double t2991;
  double t3015;
  double t3071;
  double t3073;
  double t3785;
  double t3791;
  double t3795;
  double t3802;
  double t4782;
  double t4775;
  double t4865;
  double t4888;
  double t4940;
  double t4208;
  double t4962;
  double t5015;
  double t5019;
  double t5031;
  double t4113;
  double t4117;
  double t4121;
  double t4137;
  double t4163;
  double t4173;
  double t4181;
  double t4186;
  double t5185;
  double t5212;
  double t5243;
  double t5263;
  double t581;
  double t1183;
  double t1544;
  double t1586;
  double t1708;
  double t1841;
  double t2017;
  double t2062;
  double t5662;
  double t5891;
  double t5909;
  double t5930;
  double t5707;
  double t5741;
  double t5781;
  double t5980;
  double t5577;
  double t5445;
  double t5466;
  double t5467;
  double t5475;
  double t5505;
  double t5868;
  double t5985;
  double t5988;
  double t6329;
  double t6267;
  double t6268;
  double t6289;
  double t6218;
  double t6333;
  double t6335;
  double t6355;
  double t5336;
  double t5363;
  double t5367;
  double t5371;
  double t5379;
  double t5390;
  double t5085;
  double t5099;
  double t5168;
  double t4779;
  double t4786;
  double t4808;
  double t6543;
  double t6547;
  double t6548;
  double t6528;
  double t6530;
  double t6541;
  double t6549;
  double t6551;
  double t6552;
  double t6429;
  double t6478;
  double t6480;
  double t6562;
  double t6564;
  double t6567;
  double t6554;
  double t6488;
  double t6514;
  double t6521;
  double t6703;
  double t6730;
  double t6747;
  double t6575;
  double t6758;
  double t6765;
  double t6784;
  double t6670;
  double t6671;
  double t6699;
  double t6939;
  double t6942;
  double t7018;
  double t7846;
  double t7847;
  double t7848;
  double t7849;
  double t7851;
  double t7855;
  double t7856;
  double t7858;
  double t7353;
  double t7564;
  double t6790;
  double t6800;
  double t6867;
  double t8715;
  double t5551;
  double t6009;
  double t6100;
  double t8766;
  double t7135;
  double t7166;
  double t7188;
  double t8984;
  double t8990;
  double t8992;
  double t8994;
  double t8997;
  double t9001;
  double t9011;
  double t9012;
  double t8942;
  double t8951;
  double t9282;
  double t9309;
  t316 = Cos(var1[17]);
  t340 = -1.*t316;
  t353 = 1. + t340;
  t79 = Cos(var1[16]);
  t112 = -1.*t79;
  t151 = 1. + t112;
  t208 = Sin(var1[16]);
  t507 = Sin(var1[17]);
  t527 = 4.e-6*t507;
  t404 = 1.000000000016*t353;
  t478 = -7.e-6*t353;
  t546 = t478 + t527;
  t558 = -7.e-6*t546;
  t565 = -1. + t404 + t558;
  t639 = 2.8e-11*t353;
  t640 = 4.e-6*t353;
  t944 = 7.e-6*t507;
  t982 = t640 + t944;
  t1066 = -7.e-6*t982;
  t1118 = -1.*t507;
  t1151 = t639 + t1066 + t1118;
  t155 = -7.e-6*t151;
  t1233 = -6.5e-11*t353;
  t1282 = 1. + t1233;
  t1283 = -7.e-6*t1282;
  t1426 = 7.e-6*t353;
  t1521 = t1283 + t1426 + t527;
  t583 = 4.e-6*t151;
  t2349 = -1. + t316;
  t2370 = 4.e-6*t2349;
  t1751 = -2.8e-11*t151;
  t2166 = -4.e-6*t507;
  t1796 = -1.*t208;
  t1824 = t1751 + t1796;
  t2452 = 1.000000000049*t353;
  t1941 = 4.e-6*t208;
  t1949 = t155 + t1941;
  t1685 = -1.000000000016*t151;
  t1691 = 1. + t1685;
  t276 = -4.e-6*t208;
  t2486 = -7.e-6*t507;
  t2215 = t478 + t2166;
  t2372 = t2370 + t944;
  t2505 = -2.8e-11*t353;
  t2519 = t2505 + t507;
  t2740 = -1.000000000016*t353;
  t2746 = 1. + t2740;
  t2821 = t639 + t507;
  t615 = -7.e-6*t208;
  t616 = t583 + t615;
  t2951 = 4.e-6*t982;
  t2965 = -1. + t2452 + t2951;
  t1203 = -6.5e-11*t151;
  t1223 = 1. + t1203;
  t2992 = 4.e-6*t1282;
  t2997 = t2992 + t2370 + t944;
  t298 = t155 + t276;
  t3024 = 4.e-6*t546;
  t3026 = t639 + t3024 + t507;
  t3146 = 7.e-6*t151;
  t2069 = 7.e-6*t208;
  t3232 = 2.826290000000002e-7*var1[17];
  t3265 = -0.148715*t1282;
  t3272 = -2.18904205e-16*t353;
  t3273 = t640 + t2486;
  t3296 = -0.038576*t3273;
  t3300 = -0.80315*t2215;
  t3306 = t1426 + t527;
  t3349 = -0.5031510000080001*t3306;
  t3360 = -0.038575000014*t2372;
  t3397 = t3232 + t3265 + t3272 + t3296 + t3300 + t3349 + t3360;
  t3420 = 1.1305160000000008e-12*var1[17];
  t3430 = -1.000000000049*t353;
  t3436 = 1. + t3430;
  t3478 = -0.038576*t3436;
  t3521 = -0.03857500001589017*t353;
  t3524 = t639 + t1118;
  t3550 = -0.5031510000080001*t3524;
  t3551 = t2370 + t2486;
  t3567 = -3.367757e-6*t3551;
  t3609 = -0.148715*t982;
  t3620 = -0.80315*t2519;
  t3642 = t3420 + t3478 + t3521 + t3550 + t3567 + t3609 + t3620;
  t3683 = -1.9784030000000015e-12*var1[17];
  t3687 = -0.80315*t2746;
  t3695 = -0.5031510000160505*t353;
  t3698 = t2505 + t1118;
  t3699 = -0.038576*t3698;
  t3709 = t1426 + t2166;
  t3710 = -3.367757e-6*t3709;
  t3712 = -0.148715*t546;
  t3720 = -0.038575000014*t2821;
  t3735 = t3683 + t3687 + t3695 + t3699 + t3710 + t3712 + t3720;
  t2437 = -1.000000000049*t151;
  t2445 = 1. + t2437;
  t2072 = t583 + t2069;
  t2694 = t1751 + t208;
  t3182 = 2.8e-11*t151;
  t3826 = -1. + t79;
  t3869 = 4.e-6*t3826;
  t3908 = t2445*t2965;
  t3923 = t2072*t2997;
  t3937 = t2694*t3026;
  t3939 = t3908 + t3923 + t3937;
  t3093 = -2.7726089999999997e-12*var1[16];
  t3098 = -0.2812110000084994*t151;
  t3166 = t3146 + t276;
  t3169 = -1.8134809999999998e-6*t3166;
  t3193 = t3182 + t208;
  t3210 = -0.038749000006999997*t3193;
  t3408 = t1949*t3397;
  t3682 = t1824*t3642;
  t3739 = t1691*t3735;
  t3764 = t3093 + t3098 + t3169 + t3210 + t3408 + t3682 + t3739;
  t2079 = 6.5e-11*t353;
  t2318 = 7.e-6*t2215;
  t2398 = 4.e-6*t2372;
  t2426 = -1. + t2079 + t2318 + t2398;
  t2457 = -1. + t2452;
  t2464 = 4.e-6*t2457;
  t2545 = 7.e-6*t2519;
  t2561 = t2464 + t2370 + t2486 + t2545;
  t2749 = 7.e-6*t2746;
  t2891 = 4.e-6*t2821;
  t2913 = t2749 + t1426 + t2166 + t2891;
  t3803 = 3.9608699999999997e-7*var1[16];
  t3810 = -1.1787626499999999e-16*t151;
  t3815 = t3146 + t1941;
  t3820 = -0.281211000004*t3815;
  t3871 = t3869 + t2069;
  t3875 = -0.038749000006999997*t3871;
  t3890 = t1223*t3397;
  t3891 = t616*t3642;
  t3893 = t298*t3735;
  t3903 = t3803 + t3810 + t3820 + t3875 + t3890 + t3891 + t3893;
  t3942 = 1.5843479999999999e-12*var1[16];
  t3948 = -0.03874900000889869*t151;
  t3952 = t3182 + t1796;
  t3957 = -0.281211000004*t3952;
  t3958 = t3869 + t615;
  t3967 = -1.8134809999999998e-6*t3958;
  t3968 = t2072*t3397;
  t3972 = t2445*t3642;
  t3988 = t2694*t3735;
  t3994 = t3942 + t3948 + t3957 + t3967 + t3968 + t3972 + t3988;
  t2430 = t2072*t2426;
  t2621 = t2445*t2561;
  t2926 = t2694*t2913;
  t2936 = t2430 + t2621 + t2926;
  t4400 = -1.*t3397*t2997;
  t4405 = -1.*t2965*t3642;
  t4413 = -1.*t3026*t3735;
  t4414 = t4400 + t4405 + t4413;
  t4466 = t3397*t2426;
  t4514 = t3642*t2561;
  t4542 = t3735*t2913;
  t4590 = t4466 + t4514 + t4542;
  t4034 = -1.*t3939*t3994;
  t2991 = t1824*t2965;
  t3015 = t1949*t2997;
  t3071 = t1691*t3026;
  t3073 = t2991 + t3015 + t3071;
  t3785 = t616*t2965;
  t3791 = t1223*t2997;
  t3795 = t298*t3026;
  t3802 = t3785 + t3791 + t3795;
  t4782 = Cos(var1[15]);
  t4775 = Sin(var1[15]);
  t4865 = -1.*t4782;
  t4888 = 1. + t4865;
  t4940 = -0.15121*t4888;
  t4208 = t3994*t2936;
  t4962 = 0.15121*t4775;
  t5015 = t4775*t3764;
  t5019 = t4782*t3903;
  t5031 = t4940 + t4962 + t5015 + t5019;
  t4113 = t1949*t2426;
  t4117 = t1824*t2561;
  t4121 = t1691*t2913;
  t4137 = t4113 + t4117 + t4121;
  t4163 = t1223*t2426;
  t4173 = t616*t2561;
  t4181 = t298*t2913;
  t4186 = t4163 + t4173 + t4181;
  t5185 = -0.15121*t4775;
  t5212 = t4782*t3764;
  t5243 = -1.*t4775*t3903;
  t5263 = t4940 + t5185 + t5212 + t5243;
  t581 = t298*t565;
  t1183 = t616*t1151;
  t1544 = t1223*t1521;
  t1586 = t581 + t1183 + t1544;
  t1708 = t1691*t565;
  t1841 = t1824*t1151;
  t2017 = t1949*t1521;
  t2062 = t1708 + t1841 + t2017;
  t5662 = Cos(var1[5]);
  t5891 = t4782*t1586;
  t5909 = t4775*t2062;
  t5930 = t5891 + t5909;
  t5707 = -1.*t4775*t1586;
  t5741 = t4782*t2062;
  t5781 = t5707 + t5741;
  t5980 = Sin(var1[5]);
  t5577 = Cos(var1[4]);
  t5445 = t2694*t565;
  t5466 = t2445*t1151;
  t5467 = t2072*t1521;
  t5475 = t5445 + t5466 + t5467;
  t5505 = Sin(var1[4]);
  t5868 = t5662*t5781;
  t5985 = -1.*t5930*t5980;
  t5988 = t5868 + t5985;
  t6329 = Cos(var1[3]);
  t6267 = t5662*t5930;
  t6268 = t5781*t5980;
  t6289 = t6267 + t6268;
  t6218 = Sin(var1[3]);
  t6333 = t5577*t5475;
  t6335 = -1.*t5505*t5988;
  t6355 = t6333 + t6335;
  t5336 = t4775*t4137;
  t5363 = t4782*t4186;
  t5367 = t5336 + t5363;
  t5371 = t4782*t4137;
  t5379 = -1.*t4775*t4186;
  t5390 = t5371 + t5379;
  t5085 = t4782*t3073;
  t5099 = -1.*t4775*t3802;
  t5168 = t5085 + t5099;
  t4779 = t4775*t3073;
  t4786 = t4782*t3802;
  t4808 = t4779 + t4786;
  t6543 = t5662*t4808;
  t6547 = t5168*t5980;
  t6548 = t6543 + t6547;
  t6528 = t5662*t5263;
  t6530 = -1.*t5031*t5980;
  t6541 = t6528 + t6530;
  t6549 = t5662*t5031;
  t6551 = t5263*t5980;
  t6552 = t6549 + t6551;
  t6429 = t5662*t5367;
  t6478 = t5390*t5980;
  t6480 = t6429 + t6478;
  t6562 = t5662*t5390;
  t6564 = -1.*t5367*t5980;
  t6567 = t6562 + t6564;
  t6554 = -1.*t6548*t6552;
  t6488 = t5662*t5168;
  t6514 = -1.*t4808*t5980;
  t6521 = t6488 + t6514;
  t6703 = t3939*t5505;
  t6730 = t5577*t6521;
  t6747 = t6703 + t6730;
  t6575 = t6552*t6480;
  t6758 = t3994*t5505;
  t6765 = t5577*t6541;
  t6784 = t6758 + t6765;
  t6670 = t2936*t5505;
  t6671 = t5577*t6567;
  t6699 = t6670 + t6671;
  t6939 = t5577*t3994;
  t6942 = -1.*t5505*t6541;
  t7018 = t6939 + t6942;
  t7846 = t3397*t1521;
  t7847 = t1151*t3642;
  t7848 = t565*t3735;
  t7849 = t7846 + t7847 + t7848;
  t7851 = -1.*t3397*t2426;
  t7855 = -1.*t3642*t2561;
  t7856 = -1.*t3735*t2913;
  t7858 = t7851 + t7855 + t7856;
  t7353 = t5475*t3994;
  t7564 = -1.*t3994*t2936;
  t6790 = t5577*t3939;
  t6800 = -1.*t5505*t6521;
  t6867 = t6790 + t6800;
  t8715 = t6289*t6552;
  t5551 = t5475*t5505;
  t6009 = t5577*t5988;
  t6100 = t5551 + t6009;
  t8766 = -1.*t6552*t6480;
  t7135 = t5577*t2936;
  t7166 = -1.*t5505*t6567;
  t7188 = t7135 + t7166;
  t8984 = -1.*t3397*t1521;
  t8990 = -1.*t1151*t3642;
  t8992 = -1.*t565*t3735;
  t8994 = t8984 + t8990 + t8992;
  t8997 = t3397*t2997;
  t9001 = t2965*t3642;
  t9011 = t3026*t3735;
  t9012 = t8997 + t9001 + t9011;
  t8942 = -1.*t5475*t3994;
  t8951 = t3939*t3994;
  t9282 = -1.*t6289*t6552;
  t9309 = t6548*t6552;
  p_output1[0]=t6100*var2[0] + (t6289*t6329 - 1.*t6218*t6355)*var2[1] + (t6218*t6289 + t6329*t6355)*var2[2] + (t6699*(t6554 - 1.*t6747*t6784 - 1.*t6867*t7018) + t6747*(t6575 + t6699*t6784 + t7018*t7188))*var2[3] + (t6480*(t4034 - 1.*t6521*t6541 + t6554) + t6548*(t4208 + t6541*t6567 + t6575))*var2[4] + (t2936*(t4034 - 1.*t4808*t5031 - 1.*t5168*t5263) + t3939*(t4208 + t5031*t5367 + t5263*t5390))*var2[5] + (0.15121*t1586 - 0.15121*t2062 + t2936*(-1.*t3073*t3764 - 1.*t3802*t3903 + t4034) + t3939*(t3764*t4137 + t3903*t4186 + t4208))*var2[15] + (0.281211*t1151 - 1.*t2426*t4414 - 1.*t2997*t4590 + 4.e-6*(-1.*t2561*t4414 - 1.*t2965*t4590) + 7.e-6*(t2913*t4414 + t3026*t4590) + 1.e-6*(7.e-6*t1282 + t2166 + t478) - 0.038749*t565)*var2[16] - 4.051285074010787e-7*var2[17];
  p_output1[1]=t6747*var2[0] + (t6329*t6548 - 1.*t6218*t6867)*var2[1] + (t6218*t6548 + t6329*t6867)*var2[2] + (t6699*(t6100*t6784 + t6355*t7018 + t8715) + t6100*(-1.*t6699*t6784 - 1.*t7018*t7188 + t8766))*var2[3] + (t6480*(t5988*t6541 + t7353 + t8715) + t6289*(-1.*t6541*t6567 + t7564 + t8766))*var2[4] + (t2936*(t5263*t5781 + t5031*t5930 + t7353) + t5475*(-1.*t5031*t5367 - 1.*t5263*t5390 + t7564))*var2[5] + (-0.15121*t3073 + 0.15121*t3802 + t2936*(t2062*t3764 + t1586*t3903 + t7353) + t5475*(-1.*t3764*t4137 - 1.*t3903*t4186 + t7564))*var2[15] + (0.281211*t2965 - 0.038749*t3026 + 1.e-6*(4.e-6*(-1. + t2079) + t2486 + t640) - 1.*t2426*t7849 - 1.*t1521*t7858 + 4.e-6*(-1.*t2561*t7849 - 1.*t1151*t7858) + 7.e-6*(t2913*t7849 + t565*t7858))*var2[16] + 0.3000000410492048*var2[17];
  p_output1[2]=t6699*var2[0] + (t6329*t6480 - 1.*t6218*t7188)*var2[1] + (t6218*t6480 + t6329*t7188)*var2[2] + (t6747*(-1.*t6100*t6784 - 1.*t6355*t7018 + t9282) + t6100*(t6747*t6784 + t6867*t7018 + t9309))*var2[3] + (t6548*(-1.*t5988*t6541 + t8942 + t9282) + t6289*(t6521*t6541 + t8951 + t9309))*var2[4] + (t3939*(-1.*t5263*t5781 - 1.*t5031*t5930 + t8942) + t5475*(t4808*t5031 + t5168*t5263 + t8951))*var2[5] + (-0.15121*t4137 + 0.15121*t4186 + t3939*(-1.*t2062*t3764 - 1.*t1586*t3903 + t8942) + t5475*(t3073*t3764 + t3802*t3903 + t8951))*var2[15] + (0.281211*t2561 - 0.038749*t2913 + 1.e-6*(1. + t1233 - 7.e-6*t2215 + 4.e-6*t3273) - 1.*t2997*t8994 - 1.*t1521*t9012 + 4.e-6*(-1.*t2965*t8994 - 1.*t1151*t9012) + 7.e-6*(t3026*t8994 + t565*t9012))*var2[16] - 2.826290000000002e-7*var2[17];
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

#include "dh_RrFoot_DiagonalStance2.hh"

namespace DiagonalStance2
{

void dh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
