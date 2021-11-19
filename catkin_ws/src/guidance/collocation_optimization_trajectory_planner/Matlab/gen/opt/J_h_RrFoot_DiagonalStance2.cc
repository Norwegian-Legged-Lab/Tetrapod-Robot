/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:39 GMT+01:00
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
  double t154;
  double t174;
  double t204;
  double t250;
  double t417;
  double t428;
  double t433;
  double t438;
  double t441;
  double t466;
  double t320;
  double t322;
  double t405;
  double t506;
  double t556;
  double t221;
  double t1309;
  double t1365;
  double t1388;
  double t1479;
  double t15;
  double t1069;
  double t639;
  double t640;
  double t820;
  double t1212;
  double t1233;
  double t1278;
  double t1557;
  double t337;
  double t1658;
  double t251;
  double t1466;
  double t1972;
  double t1983;
  double t2286;
  double t591;
  double t1690;
  double t574;
  double t2432;
  double t1668;
  double t1685;
  double t1691;
  double t1708;
  double t1712;
  double t1725;
  double t1751;
  double t1752;
  double t2449;
  double t2163;
  double t2193;
  double t2215;
  double t2318;
  double t2349;
  double t2370;
  double t2372;
  double t2373;
  double t2463;
  double t2464;
  double t2476;
  double t2485;
  double t2486;
  double t2505;
  double t2519;
  double t2523;
  double t1901;
  double t2631;
  double t2050;
  double t2752;
  double t2556;
  double t1485;
  double t490;
  double t491;
  double t455;
  double t463;
  double t982;
  double t1066;
  double t1118;
  double t1151;
  double t1183;
  double t1203;
  double t1204;
  double t527;
  double t546;
  double t581;
  double t583;
  double t615;
  double t616;
  double t617;
  double t2426;
  double t2430;
  double t2437;
  double t2445;
  double t2452;
  double t2457;
  double t2459;
  double t3035;
  double t3036;
  double t3040;
  double t3059;
  double t3071;
  double t3073;
  double t1824;
  double t1841;
  double t1941;
  double t1949;
  double t2062;
  double t2072;
  double t2138;
  double t1283;
  double t1426;
  double t1521;
  double t1544;
  double t1586;
  double t1587;
  double t1600;
  double t2968;
  double t3093;
  double t3098;
  double t3146;
  double t2953;
  double t3166;
  double t3169;
  double t3182;
  double t2938;
  double t2943;
  double t3193;
  double t3210;
  double t3232;
  double t2903;
  double t2873;
  double t2880;
  double t2772;
  double t2712;
  double t2721;
  double t2647;
  double t2611;
  double t3057;
  double t3078;
  double t3158;
  double t3190;
  double t3243;
  double t3265;
  double t3272;
  double t3273;
  double t3274;
  double t3291;
  double t3296;
  double t3300;
  double t3306;
  double t3316;
  double t3318;
  double t3349;
  double t3360;
  double t3397;
  double t3401;
  double t3402;
  double t3522;
  double t3594;
  double t3678;
  double t3720;
  double t3726;
  double t3728;
  double t3462;
  double t3798;
  double t3703;
  double t3736;
  double t3739;
  double t3759;
  double t3764;
  double t3765;
  double t3776;
  double t3786;
  double t3791;
  double t3795;
  double t3802;
  double t3803;
  double t3806;
  double t3813;
  double t3815;
  double t3820;
  double t3826;
  double t3864;
  double t3865;
  double t3974;
  double t4113;
  double t4117;
  double t4121;
  double t4132;
  double t4208;
  double t4214;
  double t4217;
  double t4218;
  double t4026;
  double t4400;
  double t4413;
  double t4414;
  double t4440;
  double t4508;
  double t4154;
  double t4264;
  double t4230;
  double t151;
  double t208;
  double t298;
  double t316;
  double t340;
  double t353;
  double t370;
  double t4780;
  double t4794;
  double t4786;
  double t4797;
  double t4804;
  double t4825;
  double t4828;
  double t4838;
  double t4876;
  double t4888;
  double t4947;
  double t5015;
  double t5019;
  double t5023;
  double t5054;
  double t5080;
  double t5085;
  double t5092;
  double t5143;
  double t5168;
  double t5185;
  double t5199;
  double t5242;
  double t5243;
  double t5263;
  double t5284;
  double t5507;
  double t5513;
  double t5533;
  double t5577;
  double t5596;
  double t5621;
  double t5707;
  double t5741;
  double t5781;
  double t5864;
  double t5891;
  double t5909;
  double t5930;
  double t5957;
  double t5988;
  double t6009;
  double t6100;
  double t6181;
  double t6456;
  double t6470;
  double t6473;
  double t6480;
  double t6484;
  double t6485;
  double t6514;
  double t6521;
  double t6527;
  double t6530;
  double t6534;
  double t6536;
  double t6542;
  double t6543;
  double t6545;
  double t6548;
  double t6549;
  double t6550;
  double t6552;
  double t6554;
  double t6555;
  double t3413;
  double t3419;
  double t3425;
  double t3428;
  double t6765;
  double t6784;
  double t6785;
  double t6793;
  double t6797;
  double t6811;
  double t6849;
  double t6939;
  double t6942;
  double t6949;
  double t7025;
  double t7050;
  double t7054;
  double t7062;
  double t7135;
  double t7136;
  double t3478;
  double t3521;
  double t3524;
  double t3550;
  double t3551;
  double t3554;
  double t3609;
  double t3642;
  double t3682;
  double t3683;
  double t3687;
  double t3690;
  double t3698;
  double t3699;
  double t3709;
  double t3710;
  double t3712;
  double t3716;
  double t7588;
  double t7650;
  double t7658;
  double t7815;
  double t7822;
  double t7823;
  double t7824;
  double t7829;
  double t7833;
  double t7836;
  double t7837;
  double t7839;
  double t7840;
  double t7843;
  double t7845;
  double t3988;
  double t3994;
  double t4034;
  double t4067;
  double t4071;
  double t4097;
  double t4163;
  double t4173;
  double t4181;
  double t4186;
  double t4191;
  double t4206;
  double t4232;
  double t4246;
  double t4276;
  double t4283;
  double t4284;
  double t4286;
  double t7933;
  double t7934;
  double t8136;
  double t8139;
  double t4510;
  double t8251;
  double t8282;
  double t8283;
  double t8287;
  double t4537;
  double t8369;
  double t8553;
  double t8555;
  double t8556;
  double t4615;
  double t4659;
  double t4706;
  double t4750;
  double t8956;
  double t8957;
  double t8958;
  double t8960;
  double t8963;
  double t8964;
  double t8967;
  double t8968;
  double t8969;
  double t8971;
  double t8975;
  double t8978;
  double t8982;
  double t8983;
  double t8987;
  double t8990;
  double t8992;
  double t8993;
  double t9129;
  double t9160;
  double t9172;
  double t9191;
  double t9209;
  double t9223;
  double t9244;
  double t9262;
  double t9272;
  double t9273;
  double t9276;
  double t9282;
  double t9284;
  double t9290;
  double t9307;
  double t9309;
  double t9312;
  double t9363;
  double t9372;
  double t9373;
  double t9376;
  double t9377;
  double t9379;
  double t9388;
  double t9390;
  double t9391;
  double t9393;
  double t9398;
  double t9399;
  double t9400;
  double t9411;
  double t9413;
  double t9415;
  double t9463;
  double t9464;
  double t9466;
  double t9469;
  double t9470;
  double t9474;
  double t9478;
  double t9482;
  double t9484;
  double t9487;
  double t9488;
  double t9490;
  double t9495;
  double t9497;
  double t9498;
  double t9723;
  double t9724;
  double t9727;
  double t9782;
  double t9797;
  double t9841;
  double t9871;
  double t9883;
  double t9887;
  double t9888;
  double t9890;
  double t9893;
  t154 = Cos(var1[16]);
  t174 = -1.*t154;
  t204 = 1. + t174;
  t250 = Sin(var1[16]);
  t417 = Cos(var1[15]);
  t428 = -1.*t417;
  t433 = 1. + t428;
  t438 = -0.15121*t433;
  t441 = Sin(var1[15]);
  t466 = Sin(var1[4]);
  t320 = -1. + t154;
  t322 = 4.e-6*t320;
  t405 = Cos(var1[5]);
  t506 = Sin(var1[5]);
  t556 = 7.e-6*t204;
  t221 = 2.8e-11*t204;
  t1309 = Cos(var1[17]);
  t1365 = -1.*t1309;
  t1388 = 1. + t1365;
  t1479 = Sin(var1[17]);
  t15 = Cos(var1[4]);
  t1069 = -4.e-6*t250;
  t639 = t405*t441*t466;
  t640 = t417*t466*t506;
  t820 = t639 + t640;
  t1212 = -1.*t417*t405*t466;
  t1233 = t441*t466*t506;
  t1278 = t1212 + t1233;
  t1557 = 2.8e-11*t1388;
  t337 = -7.e-6*t250;
  t1658 = -2.8e-11*t204;
  t251 = -1.*t250;
  t1466 = 7.e-6*t1388;
  t1972 = -1. + t1309;
  t1983 = 4.e-6*t1972;
  t2286 = 4.e-6*t204;
  t591 = 7.e-6*t250;
  t1690 = -7.e-6*t204;
  t574 = 4.e-6*t250;
  t2432 = 4.e-6*t1479;
  t1668 = t1658 + t250;
  t1685 = t15*t1668;
  t1691 = t1690 + t1069;
  t1708 = t1691*t820;
  t1712 = -1.000000000016*t204;
  t1725 = 1. + t1712;
  t1751 = t1725*t1278;
  t1752 = t1685 + t1708 + t1751;
  t2449 = 7.e-6*t1479;
  t2163 = -1.000000000049*t204;
  t2193 = 1. + t2163;
  t2215 = t2193*t15;
  t2318 = t2286 + t337;
  t2349 = t2318*t820;
  t2370 = t1658 + t251;
  t2372 = t2370*t1278;
  t2373 = t2215 + t2349 + t2372;
  t2463 = t2286 + t591;
  t2464 = t15*t2463;
  t2476 = -6.5e-11*t204;
  t2485 = 1. + t2476;
  t2486 = t2485*t820;
  t2505 = t1690 + t574;
  t2519 = t2505*t1278;
  t2523 = t2464 + t2486 + t2519;
  t1901 = -1.*t1479;
  t2631 = 4.e-6*t1388;
  t2050 = -7.e-6*t1479;
  t2752 = -2.8e-11*t1388;
  t2556 = -7.e-6*t1388;
  t1485 = -4.e-6*t1479;
  t490 = 0.15121*t441;
  t491 = t438 + t490;
  t455 = -0.15121*t441;
  t463 = t438 + t455;
  t982 = -2.7726089999999997e-12*var1[16];
  t1066 = -0.2812110000084994*t204;
  t1118 = t556 + t1069;
  t1151 = -1.8134809999999998e-6*t1118;
  t1183 = t221 + t250;
  t1203 = -0.038749000006999997*t1183;
  t1204 = t982 + t1066 + t1151 + t1203;
  t527 = 3.9608699999999997e-7*var1[16];
  t546 = -1.1787626499999999e-16*t204;
  t581 = t556 + t574;
  t583 = -0.281211000004*t581;
  t615 = t322 + t591;
  t616 = -0.038749000006999997*t615;
  t617 = t527 + t546 + t583 + t616;
  t2426 = 2.826290000000002e-7*var1[17];
  t2430 = -2.18904205e-16*t1388;
  t2437 = t1466 + t2432;
  t2445 = -0.5031510000080001*t2437;
  t2452 = t1983 + t2449;
  t2457 = -0.038575000014*t2452;
  t2459 = t2426 + t2430 + t2445 + t2457;
  t3035 = -1.*t15*t405*t441;
  t3036 = -1.*t417*t15*t506;
  t3040 = t3035 + t3036;
  t3059 = -1.*t417*t15*t405;
  t3071 = t15*t441*t506;
  t3073 = t3059 + t3071;
  t1824 = 1.1305160000000008e-12*var1[17];
  t1841 = -0.03857500001589017*t1388;
  t1941 = t1557 + t1901;
  t1949 = -0.5031510000080001*t1941;
  t2062 = t1983 + t2050;
  t2072 = -3.367757e-6*t2062;
  t2138 = t1824 + t1841 + t1949 + t2072;
  t1283 = -1.9784030000000015e-12*var1[17];
  t1426 = -0.5031510000160505*t1388;
  t1521 = t1466 + t1485;
  t1544 = -3.367757e-6*t1521;
  t1586 = t1557 + t1479;
  t1587 = -0.038575000014*t1586;
  t1600 = t1283 + t1426 + t1544 + t1587;
  t2968 = t2556 + t1485;
  t3093 = t2505*t3040;
  t3098 = t2485*t3073;
  t3146 = t3093 + t3098;
  t2953 = t2752 + t1479;
  t3166 = t2370*t3040;
  t3169 = t2318*t3073;
  t3182 = t3166 + t3169;
  t2938 = -1.000000000016*t1388;
  t2943 = 1. + t2938;
  t3193 = t1725*t3040;
  t3210 = t1691*t3073;
  t3232 = t3193 + t3210;
  t2903 = t2631 + t2050;
  t2873 = -1.000000000049*t1388;
  t2880 = 1. + t2873;
  t2772 = t2752 + t1901;
  t2712 = -6.5e-11*t1388;
  t2721 = 1. + t2712;
  t2647 = t2631 + t2449;
  t2611 = t2556 + t2432;
  t3057 = t1204*t3040;
  t3078 = t617*t3073;
  t3158 = t2459*t3146;
  t3190 = t2138*t3182;
  t3243 = t1600*t3232;
  t3265 = t2968*t3146;
  t3272 = t2953*t3182;
  t3273 = t2943*t3232;
  t3274 = t3265 + t3272 + t3273;
  t3291 = -0.80315*t3274;
  t3296 = t2903*t3146;
  t3300 = t2880*t3182;
  t3306 = t2772*t3232;
  t3316 = t3296 + t3300 + t3306;
  t3318 = -0.038576*t3316;
  t3349 = t2721*t3146;
  t3360 = t2647*t3182;
  t3397 = t2611*t3232;
  t3401 = t3349 + t3360 + t3397;
  t3402 = -0.148715*t3401;
  t3522 = 2.8e-11*t250;
  t3594 = 7.e-6*t154;
  t3678 = 4.e-6*t154;
  t3720 = t417*t15*t405;
  t3726 = -1.*t15*t441*t506;
  t3728 = t3720 + t3726;
  t3462 = -7.e-6*t154;
  t3798 = -2.8e-11*t250;
  t3703 = -4.e-6*t154;
  t3736 = t3594 + t574;
  t3739 = t3736*t466;
  t3759 = -6.5e-11*t250*t3040;
  t3764 = t3678 + t337;
  t3765 = t3764*t3728;
  t3776 = t3739 + t3759 + t3765;
  t3786 = -1.000000000049*t250*t466;
  t3791 = t3462 + t574;
  t3795 = t3791*t3040;
  t3802 = t174 + t3798;
  t3803 = t3802*t3728;
  t3806 = t3786 + t3795 + t3803;
  t3813 = t154 + t3798;
  t3815 = t3813*t466;
  t3820 = t3703 + t337;
  t3826 = t3820*t3040;
  t3864 = -1.000000000016*t250*t3728;
  t3865 = t3815 + t3826 + t3864;
  t3974 = 2.8e-11*t1479;
  t4113 = t1668*t466;
  t4117 = t1691*t3040;
  t4121 = t1725*t3728;
  t4132 = t4113 + t4117 + t4121;
  t4208 = t2193*t466;
  t4214 = t2318*t3040;
  t4217 = t2370*t3728;
  t4218 = t4208 + t4214 + t4217;
  t4026 = -4.e-6*t1309;
  t4400 = t2463*t466;
  t4413 = t2485*t3040;
  t4414 = t2505*t3728;
  t4440 = t4400 + t4413 + t4414;
  t4508 = -2.8e-11*t1479;
  t4154 = -7.e-6*t1309;
  t4264 = 4.e-6*t1309;
  t4230 = 7.e-6*t1309;
  t151 = 1.5843479999999999e-12*var1[16];
  t208 = -0.03874900000889869*t204;
  t298 = t221 + t251;
  t316 = -0.281211000004*t298;
  t340 = t322 + t337;
  t353 = -1.8134809999999998e-6*t340;
  t370 = t151 + t208 + t316 + t353;
  t4780 = Cos(var1[3]);
  t4794 = Sin(var1[3]);
  t4786 = t4780*t405*t466;
  t4797 = -1.*t4794*t506;
  t4804 = t4786 + t4797;
  t4825 = -1.*t405*t4794;
  t4828 = -1.*t4780*t466*t506;
  t4838 = t4825 + t4828;
  t4876 = -1.*t441*t4804;
  t4888 = t417*t4838;
  t4947 = t4876 + t4888;
  t5015 = t417*t4804;
  t5019 = t441*t4838;
  t5023 = t5015 + t5019;
  t5054 = -1.*t4780*t15*t1668;
  t5080 = t1691*t4947;
  t5085 = t1725*t5023;
  t5092 = t5054 + t5080 + t5085;
  t5143 = -1.*t2193*t4780*t15;
  t5168 = t2318*t4947;
  t5185 = t2370*t5023;
  t5199 = t5143 + t5168 + t5185;
  t5242 = -1.*t4780*t15*t2463;
  t5243 = t2485*t4947;
  t5263 = t2505*t5023;
  t5284 = t5242 + t5243 + t5263;
  t5507 = -1.*t15*t405*t441*t4794;
  t5513 = -1.*t417*t15*t4794*t506;
  t5533 = t5507 + t5513;
  t5577 = t417*t15*t405*t4794;
  t5596 = -1.*t15*t441*t4794*t506;
  t5621 = t5577 + t5596;
  t5707 = t1668*t4794*t466;
  t5741 = t1691*t5533;
  t5781 = t1725*t5621;
  t5864 = t5707 + t5741 + t5781;
  t5891 = t2193*t4794*t466;
  t5909 = t2318*t5533;
  t5930 = t2370*t5621;
  t5957 = t5891 + t5909 + t5930;
  t5988 = t2463*t4794*t466;
  t6009 = t2485*t5533;
  t6100 = t2505*t5621;
  t6181 = t5988 + t6009 + t6100;
  t6456 = -1.*t405*t4794*t466;
  t6470 = -1.*t4780*t506;
  t6473 = t6456 + t6470;
  t6480 = t4780*t405;
  t6484 = -1.*t4794*t466*t506;
  t6485 = t6480 + t6484;
  t6514 = t441*t6473;
  t6521 = t417*t6485;
  t6527 = t6514 + t6521;
  t6530 = t417*t6473;
  t6534 = -1.*t441*t6485;
  t6536 = t6530 + t6534;
  t6542 = t2505*t6527;
  t6543 = t2485*t6536;
  t6545 = t6542 + t6543;
  t6548 = t2370*t6527;
  t6549 = t2318*t6536;
  t6550 = t6548 + t6549;
  t6552 = t1725*t6527;
  t6554 = t1691*t6536;
  t6555 = t6552 + t6554;
  t3413 = -0.15121*t417;
  t3419 = t3413 + t455;
  t3425 = 0.15121*t417;
  t3428 = t3425 + t455;
  t6765 = t405*t4794*t466;
  t6784 = t4780*t506;
  t6785 = t6765 + t6784;
  t6793 = -1.*t441*t6785;
  t6797 = t6793 + t6521;
  t6811 = -1.*t417*t6785;
  t6849 = t6811 + t6534;
  t6939 = t2505*t6797;
  t6942 = t2485*t6849;
  t6949 = t6939 + t6942;
  t7025 = t2370*t6797;
  t7050 = t2318*t6849;
  t7054 = t7025 + t7050;
  t7062 = t1725*t6797;
  t7135 = t1691*t6849;
  t7136 = t7062 + t7135;
  t3478 = t3462 + t1069;
  t3521 = -1.8134809999999998e-6*t3478;
  t3524 = t174 + t3522;
  t3550 = -0.281211000004*t3524;
  t3551 = -0.03874900000889869*t250;
  t3554 = 1.5843479999999999e-12 + t3521 + t3550 + t3551;
  t3609 = t3594 + t1069;
  t3642 = -0.038749000006999997*t3609;
  t3682 = t3678 + t591;
  t3683 = -0.281211000004*t3682;
  t3687 = -1.1787626499999999e-16*t250;
  t3690 = 3.9608699999999997e-7 + t3642 + t3683 + t3687;
  t3698 = t154 + t3522;
  t3699 = -0.038749000006999997*t3698;
  t3709 = t3703 + t591;
  t3710 = -1.8134809999999998e-6*t3709;
  t3712 = -0.2812110000084994*t250;
  t3716 = -2.7726089999999997e-12 + t3699 + t3710 + t3712;
  t7588 = t417*t6785;
  t7650 = t441*t6485;
  t7658 = t7588 + t7650;
  t7815 = -1.*t15*t3736*t4794;
  t7822 = -6.5e-11*t250*t6797;
  t7823 = t3764*t7658;
  t7824 = t7815 + t7822 + t7823;
  t7829 = 1.000000000049*t15*t250*t4794;
  t7833 = t3791*t6797;
  t7836 = t3802*t7658;
  t7837 = t7829 + t7833 + t7836;
  t7839 = -1.*t15*t3813*t4794;
  t7840 = t3820*t6797;
  t7843 = -1.000000000016*t250*t7658;
  t7845 = t7839 + t7840 + t7843;
  t3988 = t1309 + t3974;
  t3994 = -0.038575000014*t3988;
  t4034 = t4026 + t2449;
  t4067 = -3.367757e-6*t4034;
  t4071 = -0.5031510000160505*t1479;
  t4097 = -1.9784030000000015e-12 + t3994 + t4067 + t4071;
  t4163 = t4154 + t1485;
  t4173 = -3.367757e-6*t4163;
  t4181 = t1365 + t3974;
  t4186 = -0.5031510000080001*t4181;
  t4191 = -0.03857500001589017*t1479;
  t4206 = 1.1305160000000008e-12 + t4173 + t4186 + t4191;
  t4232 = t4230 + t1485;
  t4246 = -0.038575000014*t4232;
  t4276 = t4264 + t2449;
  t4283 = -0.5031510000080001*t4276;
  t4284 = -2.18904205e-16*t1479;
  t4286 = 2.826290000000002e-7 + t4246 + t4283 + t4284;
  t7933 = -1.*t15*t1668*t4794;
  t7934 = t1691*t6797;
  t8136 = t1725*t7658;
  t8139 = t7933 + t7934 + t8136;
  t4510 = t1309 + t4508;
  t8251 = -1.*t2193*t15*t4794;
  t8282 = t2318*t6797;
  t8283 = t2370*t7658;
  t8287 = t8251 + t8282 + t8283;
  t4537 = t4026 + t2050;
  t8369 = -1.*t15*t2463*t4794;
  t8553 = t2485*t6797;
  t8555 = t2505*t7658;
  t8556 = t8369 + t8553 + t8555;
  t4615 = t1365 + t4508;
  t4659 = t4154 + t2432;
  t4706 = t4264 + t2050;
  t4750 = t4230 + t2432;
  t8956 = t4780*t15*t405*t441;
  t8957 = t417*t4780*t15*t506;
  t8958 = t8956 + t8957;
  t8960 = -1.*t417*t4780*t15*t405;
  t8963 = t4780*t15*t441*t506;
  t8964 = t8960 + t8963;
  t8967 = -1.*t4780*t1668*t466;
  t8968 = t1691*t8958;
  t8969 = t1725*t8964;
  t8971 = t8967 + t8968 + t8969;
  t8975 = -1.*t2193*t4780*t466;
  t8978 = t2318*t8958;
  t8982 = t2370*t8964;
  t8983 = t8975 + t8978 + t8982;
  t8987 = -1.*t4780*t2463*t466;
  t8990 = t2485*t8958;
  t8992 = t2505*t8964;
  t8993 = t8987 + t8990 + t8992;
  t9129 = t405*t4794;
  t9160 = t4780*t466*t506;
  t9172 = t9129 + t9160;
  t9191 = t441*t4804;
  t9209 = t417*t9172;
  t9223 = t9191 + t9209;
  t9244 = -1.*t441*t9172;
  t9262 = t5015 + t9244;
  t9272 = t2505*t9223;
  t9273 = t2485*t9262;
  t9276 = t9272 + t9273;
  t9282 = t2370*t9223;
  t9284 = t2318*t9262;
  t9290 = t9282 + t9284;
  t9307 = t1725*t9223;
  t9309 = t1691*t9262;
  t9312 = t9307 + t9309;
  t9363 = -1.*t4780*t405*t466;
  t9372 = t4794*t506;
  t9373 = t9363 + t9372;
  t9376 = -1.*t441*t9373;
  t9377 = t9376 + t9209;
  t9379 = -1.*t417*t9373;
  t9388 = t9379 + t9244;
  t9390 = t2505*t9377;
  t9391 = t2485*t9388;
  t9393 = t9390 + t9391;
  t9398 = t2370*t9377;
  t9399 = t2318*t9388;
  t9400 = t9398 + t9399;
  t9411 = t1725*t9377;
  t9413 = t1691*t9388;
  t9415 = t9411 + t9413;
  t9463 = t417*t9373;
  t9464 = t441*t9172;
  t9466 = t9463 + t9464;
  t9469 = t4780*t15*t3736;
  t9470 = -6.5e-11*t250*t9377;
  t9474 = t3764*t9466;
  t9478 = t9469 + t9470 + t9474;
  t9482 = -1.000000000049*t4780*t15*t250;
  t9484 = t3791*t9377;
  t9487 = t3802*t9466;
  t9488 = t9482 + t9484 + t9487;
  t9490 = t4780*t15*t3813;
  t9495 = t3820*t9377;
  t9497 = -1.000000000016*t250*t9466;
  t9498 = t9490 + t9495 + t9497;
  t9723 = t4780*t15*t1668;
  t9724 = t1691*t9377;
  t9727 = t1725*t9466;
  t9782 = t9723 + t9724 + t9727;
  t9797 = t2193*t4780*t15;
  t9841 = t2318*t9377;
  t9871 = t2370*t9466;
  t9883 = t9797 + t9841 + t9871;
  t9887 = t4780*t15*t2463;
  t9888 = t2485*t9377;
  t9890 = t2505*t9466;
  t9893 = t9887 + t9888 + t9890;
  p_output1[0]=1.;
  p_output1[1]=t1204*t1278 + t1600*t1752 + t2138*t2373 + t2459*t2523 - 0.148715*(t1752*t2611 + t2373*t2647 + t2523*t2721) - 0.038576*(t1752*t2772 + t2373*t2880 + t2523*t2903) - 0.80315*(t1752*t2943 + t2373*t2953 + t2523*t2968) + t15*t370 - 1.*t405*t463*t466 + t466*t491*t506 + t617*t820;
  p_output1[2]=t3057 + t3078 + t3158 + t3190 + t3243 + t3291 + t3318 + t3402 - 1.*t15*t405*t491 - 1.*t15*t463*t506;
  p_output1[3]=t3057 + t3078 + t3158 + t3190 + t3243 + t3291 + t3318 + t3402 + t15*t3419*t405 - 1.*t15*t3428*t506;
  p_output1[4]=t3040*t3690 + t3716*t3728 + t2459*t3776 + t2138*t3806 + t1600*t3865 - 0.148715*(t2721*t3776 + t2647*t3806 + t2611*t3865) - 0.038576*(t2903*t3776 + t2880*t3806 + t2772*t3865) - 0.80315*(t2968*t3776 + t2953*t3806 + t2943*t3865) + t3554*t466;
  p_output1[5]=t4097*t4132 + t4206*t4218 + t4286*t4440 - 0.80315*(-1.000000000016*t1479*t4132 + t4218*t4510 + t4440*t4537) - 0.038576*(-1.000000000049*t1479*t4218 + t4132*t4615 + t4440*t4659) - 0.148715*(-6.5e-11*t1479*t4440 + t4132*t4706 + t4218*t4750);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t15*t370*t4780 + t463*t4804 + t4838*t491 + t1204*t5023 + t1600*t5092 + t2138*t5199 + t2459*t5284 - 0.148715*(t2611*t5092 + t2647*t5199 + t2721*t5284) - 0.038576*(t2772*t5092 + t2880*t5199 + t2903*t5284) - 0.80315*(t2943*t5092 + t2953*t5199 + t2968*t5284) + t4947*t617;
  p_output1[9]=t15*t405*t463*t4794 + t370*t466*t4794 - 1.*t15*t4794*t491*t506 + t1204*t5621 + t1600*t5864 + t2138*t5957 + t5533*t617 + t2459*t6181 - 0.148715*(t2611*t5864 + t2647*t5957 + t2721*t6181) - 0.038576*(t2772*t5864 + t2880*t5957 + t2903*t6181) - 0.80315*(t2943*t5864 + t2953*t5957 + t2968*t6181);
  p_output1[10]=t491*t6473 + t463*t6485 + t1204*t6527 + t617*t6536 + t2459*t6545 + t2138*t6550 + t1600*t6555 - 0.148715*(t2721*t6545 + t2647*t6550 + t2611*t6555) - 0.038576*(t2903*t6545 + t2880*t6550 + t2772*t6555) - 0.80315*(t2968*t6545 + t2953*t6550 + t2943*t6555);
  p_output1[11]=t3428*t6485 + t3419*t6785 + t1204*t6797 + t617*t6849 + t2459*t6949 + t2138*t7054 + t1600*t7136 - 0.148715*(t2721*t6949 + t2647*t7054 + t2611*t7136) - 0.038576*(t2903*t6949 + t2880*t7054 + t2772*t7136) - 0.80315*(t2968*t6949 + t2953*t7054 + t2943*t7136);
  p_output1[12]=-1.*t15*t3554*t4794 + t3690*t6797 + t3716*t7658 + t2459*t7824 + t2138*t7837 + t1600*t7845 - 0.148715*(t2721*t7824 + t2647*t7837 + t2611*t7845) - 0.038576*(t2903*t7824 + t2880*t7837 + t2772*t7845) - 0.80315*(t2968*t7824 + t2953*t7837 + t2943*t7845);
  p_output1[13]=t4097*t8139 + t4206*t8287 + t4286*t8556 - 0.148715*(t4706*t8139 + t4750*t8287 - 6.5e-11*t1479*t8556) - 0.80315*(-1.000000000016*t1479*t8139 + t4510*t8287 + t4537*t8556) - 0.038576*(t4615*t8139 - 1.000000000049*t1479*t8287 + t4659*t8556);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t15*t370*t4794 + t491*t6485 + t463*t6785 + t617*t6797 + t1204*t7658 + t1600*t8139 + t2138*t8287 + t2459*t8556 - 0.148715*(t2611*t8139 + t2647*t8287 + t2721*t8556) - 0.038576*(t2772*t8139 + t2880*t8287 + t2903*t8556) - 0.80315*(t2943*t8139 + t2953*t8287 + t2968*t8556);
  p_output1[17]=-1.*t15*t405*t463*t4780 - 1.*t370*t466*t4780 + t15*t4780*t491*t506 + t617*t8958 + t1204*t8964 + t1600*t8971 + t2138*t8983 + t2459*t8993 - 0.148715*(t2611*t8971 + t2647*t8983 + t2721*t8993) - 0.038576*(t2772*t8971 + t2880*t8983 + t2903*t8993) - 0.80315*(t2943*t8971 + t2953*t8983 + t2968*t8993);
  p_output1[18]=t4804*t491 + t463*t9172 + t1204*t9223 + t617*t9262 + t2459*t9276 + t2138*t9290 + t1600*t9312 - 0.148715*(t2721*t9276 + t2647*t9290 + t2611*t9312) - 0.038576*(t2903*t9276 + t2880*t9290 + t2772*t9312) - 0.80315*(t2968*t9276 + t2953*t9290 + t2943*t9312);
  p_output1[19]=t3428*t9172 + t3419*t9373 + t1204*t9377 + t617*t9388 + t2459*t9393 + t2138*t9400 + t1600*t9415 - 0.148715*(t2721*t9393 + t2647*t9400 + t2611*t9415) - 0.038576*(t2903*t9393 + t2880*t9400 + t2772*t9415) - 0.80315*(t2968*t9393 + t2953*t9400 + t2943*t9415);
  p_output1[20]=t15*t3554*t4780 + t3690*t9377 + t3716*t9466 + t2459*t9478 + t2138*t9488 + t1600*t9498 - 0.148715*(t2721*t9478 + t2647*t9488 + t2611*t9498) - 0.038576*(t2903*t9478 + t2880*t9488 + t2772*t9498) - 0.80315*(t2968*t9478 + t2953*t9488 + t2943*t9498);
  p_output1[21]=t4097*t9782 + t4206*t9883 + t4286*t9893 - 0.148715*(t4706*t9782 + t4750*t9883 - 6.5e-11*t1479*t9893) - 0.80315*(-1.000000000016*t1479*t9782 + t4510*t9883 + t4537*t9893) - 0.038576*(t4615*t9782 - 1.000000000049*t1479*t9883 + t4659*t9893);
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

#include "J_h_RrFoot_DiagonalStance2.hh"

namespace DiagonalStance2
{

void J_h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
