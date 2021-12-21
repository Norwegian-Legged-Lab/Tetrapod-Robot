/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:17 GMT+01:00
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
  double t203;
  double t975;
  double t1028;
  double t1159;
  double t1375;
  double t1400;
  double t1587;
  double t312;
  double t367;
  double t472;
  double t564;
  double t907;
  double t1704;
  double t42;
  double t1860;
  double t1870;
  double t1879;
  double t1954;
  double t1962;
  double t1963;
  double t1987;
  double t2004;
  double t2006;
  double t2041;
  double t2258;
  double t2094;
  double t2106;
  double t2125;
  double t2147;
  double t2208;
  double t2230;
  double t2302;
  double t2312;
  double t2318;
  double t2326;
  double t2365;
  double t2379;
  double t2414;
  double t2432;
  double t2445;
  double t2455;
  double t1636;
  double t1637;
  double t1165;
  double t1402;
  double t1893;
  double t1912;
  double t1952;
  double t1724;
  double t1726;
  double t1783;
  double t1804;
  double t1838;
  double t2333;
  double t2334;
  double t2338;
  double t2360;
  double t2361;
  double t2750;
  double t2751;
  double t2754;
  double t2789;
  double t2796;
  double t2801;
  double t2243;
  double t2244;
  double t2282;
  double t2288;
  double t2290;
  double t2021;
  double t2068;
  double t2082;
  double t2815;
  double t2827;
  double t2832;
  double t2838;
  double t2863;
  double t2866;
  double t2703;
  double t2708;
  double t2869;
  double t2890;
  double t2904;
  double t2514;
  double t2520;
  double t2992;
  double t2755;
  double t2811;
  double t2836;
  double t2867;
  double t2908;
  double t2913;
  double t2915;
  double t2919;
  double t2922;
  double t2927;
  double t2928;
  double t2929;
  double t2933;
  double t2934;
  double t2964;
  double t2968;
  double t2969;
  double t2975;
  double t2977;
  double t2979;
  double t3089;
  double t3096;
  double t3100;
  double t3125;
  double t3134;
  double t3135;
  double t3144;
  double t3158;
  double t3162;
  double t3184;
  double t3197;
  double t3218;
  double t3220;
  double t3225;
  double t3480;
  double t3482;
  double t3493;
  double t3496;
  double t3547;
  double t3550;
  double t3551;
  double t3565;
  double t3573;
  double t3574;
  double t3577;
  double t185;
  double t438;
  double t539;
  double t571;
  double t605;
  double t3716;
  double t3741;
  double t3728;
  double t3749;
  double t3754;
  double t3758;
  double t3768;
  double t3770;
  double t3780;
  double t3791;
  double t3798;
  double t3808;
  double t3810;
  double t3817;
  double t3835;
  double t3878;
  double t3891;
  double t3905;
  double t3960;
  double t3961;
  double t3971;
  double t4003;
  double t4013;
  double t4019;
  double t4031;
  double t4033;
  double t4141;
  double t4142;
  double t4143;
  double t4152;
  double t4153;
  double t4163;
  double t4168;
  double t4179;
  double t4186;
  double t4187;
  double t4196;
  double t4198;
  double t4207;
  double t4218;
  double t4228;
  double t4229;
  double t4236;
  double t4240;
  double t4381;
  double t4392;
  double t4402;
  double t4440;
  double t4444;
  double t4453;
  double t4463;
  double t4485;
  double t4486;
  double t4503;
  double t4513;
  double t4521;
  double t4544;
  double t4553;
  double t4554;
  double t4564;
  double t4567;
  double t4570;
  double t4587;
  double t4595;
  double t4598;
  double t2999;
  double t3000;
  double t3007;
  double t4749;
  double t4754;
  double t4756;
  double t4788;
  double t4801;
  double t4823;
  double t4836;
  double t4875;
  double t4889;
  double t4890;
  double t4892;
  double t4901;
  double t4910;
  double t4914;
  double t4920;
  double t4930;
  double t3027;
  double t3030;
  double t3037;
  double t3038;
  double t3047;
  double t3058;
  double t3061;
  double t3066;
  double t5151;
  double t5153;
  double t5172;
  double t5180;
  double t5224;
  double t5266;
  double t5278;
  double t5280;
  double t5284;
  double t5285;
  double t5341;
  double t5343;
  double t5367;
  double t5368;
  double t3456;
  double t3457;
  double t3465;
  double t3530;
  double t3545;
  double t3557;
  double t3560;
  double t3561;
  double t5442;
  double t5443;
  double t5445;
  double t5454;
  double t5457;
  double t5461;
  double t5476;
  double t5478;
  double t5479;
  double t5486;
  double t5489;
  double t5525;
  double t5806;
  double t5827;
  double t5830;
  double t5842;
  double t5845;
  double t5849;
  double t5861;
  double t5868;
  double t5881;
  double t5882;
  double t5905;
  double t5909;
  double t5912;
  double t5931;
  double t5976;
  double t5980;
  double t5990;
  double t5993;
  double t6101;
  double t6109;
  double t6110;
  double t6115;
  double t6121;
  double t6129;
  double t6132;
  double t6133;
  double t6135;
  double t6138;
  double t6139;
  double t6143;
  double t6144;
  double t6154;
  double t6157;
  double t6158;
  double t6160;
  double t6339;
  double t6340;
  double t6344;
  double t6361;
  double t6369;
  double t6371;
  double t6376;
  double t6395;
  double t6397;
  double t6398;
  double t6404;
  double t6411;
  double t6414;
  double t6428;
  double t6435;
  double t6442;
  double t6635;
  double t6636;
  double t6639;
  double t6643;
  double t6645;
  double t6652;
  double t6654;
  double t6664;
  double t6675;
  double t6678;
  double t6690;
  double t6691;
  double t6715;
  double t6914;
  double t6917;
  double t6920;
  double t6923;
  double t6930;
  double t6935;
  double t6942;
  double t6951;
  double t6956;
  double t6957;
  double t6961;
  t203 = Cos(var1[10]);
  t975 = Cos(var1[9]);
  t1028 = -1.*t975;
  t1159 = 1. + t1028;
  t1375 = Sin(var1[9]);
  t1400 = -0.15121*t1375;
  t1587 = Sin(var1[4]);
  t312 = -1.*t203;
  t367 = 1. + t312;
  t472 = -1. + t203;
  t564 = Sin(var1[10]);
  t907 = Cos(var1[5]);
  t1704 = Sin(var1[5]);
  t42 = Cos(var1[4]);
  t1860 = t907*t1375*t1587;
  t1870 = t975*t1587*t1704;
  t1879 = t1860 + t1870;
  t1954 = -1.*t975*t907*t1587;
  t1962 = t1375*t1587*t1704;
  t1963 = t1954 + t1962;
  t1987 = Cos(var1[11]);
  t2004 = -1.*t1987;
  t2006 = 1. + t2004;
  t2041 = Sin(var1[11]);
  t2258 = -1. + t1987;
  t2094 = t42*t564;
  t2106 = -4.e-6*t564*t1879;
  t2125 = -1.000000000016*t367;
  t2147 = 1. + t2125;
  t2208 = t2147*t1963;
  t2230 = t2094 + t2106 + t2208;
  t2302 = t203*t42;
  t2312 = 4.e-6*t367*t1879;
  t2318 = -1.*t564*t1963;
  t2326 = t2302 + t2312 + t2318;
  t2365 = 4.e-6*t367*t42;
  t2379 = 1.6e-11*t472;
  t2414 = 1. + t2379;
  t2432 = t2414*t1879;
  t2445 = 4.e-6*t564*t1963;
  t2455 = t2365 + t2432 + t2445;
  t1636 = -0.15121*t1159;
  t1637 = t1636 + t1400;
  t1165 = 0.15121*t1159;
  t1402 = t1165 + t1400;
  t1893 = 0.281210000008499*t367;
  t1912 = -0.03874900000062*t564;
  t1952 = t1893 + t1912;
  t1724 = -1.2484e-7*var1[10];
  t1726 = 2.479936e-18*t367;
  t1783 = -1.54996e-7*t472;
  t1804 = 1.124840000016e-6*t564;
  t1838 = t1724 + t1726 + t1783 + t1804;
  t2333 = -1.26e-8*var1[11];
  t2334 = 2.552896e-18*t2006;
  t2338 = -1.59556e-7*t2258;
  t2360 = 2.012600000032e-6*t2041;
  t2361 = t2333 + t2334 + t2338 + t2360;
  t2750 = -1.*t42*t907*t1375;
  t2751 = -1.*t975*t42*t1704;
  t2754 = t2750 + t2751;
  t2789 = -1.*t975*t42*t907;
  t2796 = t42*t1375*t1704;
  t2801 = t2789 + t2796;
  t2243 = -5.04e-14*var1[11];
  t2244 = -0.039889*t2006;
  t2282 = 6.38224e-13*t2258;
  t2288 = -0.503150000008*t2041;
  t2290 = t2243 + t2244 + t2282 + t2288;
  t2021 = 0.50315000001605*t2006;
  t2068 = -0.0398890000006382*t2041;
  t2082 = t2021 + t2068;
  t2815 = 4.e-6*t564*t2754;
  t2827 = t2414*t2801;
  t2832 = t2815 + t2827;
  t2838 = -1.*t564*t2754;
  t2863 = 4.e-6*t367*t2801;
  t2866 = t2838 + t2863;
  t2703 = -1.000000000016*t2006;
  t2708 = 1. + t2703;
  t2869 = t2147*t2754;
  t2890 = -4.e-6*t564*t2801;
  t2904 = t2869 + t2890;
  t2514 = 1.6e-11*t2258;
  t2520 = 1. + t2514;
  t2992 = -0.15121*t975;
  t2755 = t1952*t2754;
  t2811 = t1838*t2801;
  t2836 = t2361*t2832;
  t2867 = t2290*t2866;
  t2908 = t2082*t2904;
  t2913 = -4.e-6*t2041*t2832;
  t2915 = t2041*t2866;
  t2919 = t2708*t2904;
  t2922 = t2913 + t2915 + t2919;
  t2927 = 0.803147*t2922;
  t2928 = 4.e-6*t2006*t2832;
  t2929 = t1987*t2866;
  t2933 = -1.*t2041*t2904;
  t2934 = t2928 + t2929 + t2933;
  t2964 = -0.041195*t2934;
  t2968 = t2520*t2832;
  t2969 = 4.e-6*t2006*t2866;
  t2975 = 4.e-6*t2041*t2904;
  t2977 = t2968 + t2969 + t2975;
  t2979 = -0.14871*t2977;
  t3089 = t975*t42*t907;
  t3096 = -1.*t42*t1375*t1704;
  t3100 = t3089 + t3096;
  t3125 = -1.*t564*t1587;
  t3134 = -1.*t203*t3100;
  t3135 = t3125 + t2815 + t3134;
  t3144 = 4.e-6*t564*t1587;
  t3158 = -1.6e-11*t564*t2754;
  t3162 = 4.e-6*t203*t3100;
  t3184 = t3144 + t3158 + t3162;
  t3197 = t203*t1587;
  t3218 = -4.e-6*t203*t2754;
  t3220 = -1.000000000016*t564*t3100;
  t3225 = t3197 + t3218 + t3220;
  t3480 = t564*t1587;
  t3482 = -4.e-6*t564*t2754;
  t3493 = t2147*t3100;
  t3496 = t3480 + t3482 + t3493;
  t3547 = 4.e-6*t367*t2754;
  t3550 = -1.*t564*t3100;
  t3551 = t3197 + t3547 + t3550;
  t3565 = 4.e-6*t367*t1587;
  t3573 = t2414*t2754;
  t3574 = 4.e-6*t564*t3100;
  t3577 = t3565 + t3573 + t3574;
  t185 = -4.9936e-13*var1[10];
  t438 = -0.038749*t367;
  t539 = 6.19984e-13*t472;
  t571 = -0.281210000004*t564;
  t605 = t185 + t438 + t539 + t571;
  t3716 = Cos(var1[3]);
  t3741 = Sin(var1[3]);
  t3728 = t3716*t907*t1587;
  t3749 = -1.*t3741*t1704;
  t3754 = t3728 + t3749;
  t3758 = -1.*t907*t3741;
  t3768 = -1.*t3716*t1587*t1704;
  t3770 = t3758 + t3768;
  t3780 = -1.*t1375*t3754;
  t3791 = t975*t3770;
  t3798 = t3780 + t3791;
  t3808 = t975*t3754;
  t3810 = t1375*t3770;
  t3817 = t3808 + t3810;
  t3835 = -1.*t3716*t42*t564;
  t3878 = -4.e-6*t564*t3798;
  t3891 = t2147*t3817;
  t3905 = t3835 + t3878 + t3891;
  t3960 = -1.*t203*t3716*t42;
  t3961 = 4.e-6*t367*t3798;
  t3971 = -1.*t564*t3817;
  t4003 = t3960 + t3961 + t3971;
  t4013 = -4.e-6*t367*t3716*t42;
  t4019 = t2414*t3798;
  t4031 = 4.e-6*t564*t3817;
  t4033 = t4013 + t4019 + t4031;
  t4141 = -1.*t42*t907*t1375*t3741;
  t4142 = -1.*t975*t42*t3741*t1704;
  t4143 = t4141 + t4142;
  t4152 = t975*t42*t907*t3741;
  t4153 = -1.*t42*t1375*t3741*t1704;
  t4163 = t4152 + t4153;
  t4168 = t564*t3741*t1587;
  t4179 = -4.e-6*t564*t4143;
  t4186 = t2147*t4163;
  t4187 = t4168 + t4179 + t4186;
  t4196 = t203*t3741*t1587;
  t4198 = 4.e-6*t367*t4143;
  t4207 = -1.*t564*t4163;
  t4218 = t4196 + t4198 + t4207;
  t4228 = 4.e-6*t367*t3741*t1587;
  t4229 = t2414*t4143;
  t4236 = 4.e-6*t564*t4163;
  t4240 = t4228 + t4229 + t4236;
  t4381 = -1.*t907*t3741*t1587;
  t4392 = -1.*t3716*t1704;
  t4402 = t4381 + t4392;
  t4440 = t3716*t907;
  t4444 = -1.*t3741*t1587*t1704;
  t4453 = t4440 + t4444;
  t4463 = t1375*t4402;
  t4485 = t975*t4453;
  t4486 = t4463 + t4485;
  t4503 = t975*t4402;
  t4513 = -1.*t1375*t4453;
  t4521 = t4503 + t4513;
  t4544 = 4.e-6*t564*t4486;
  t4553 = t2414*t4521;
  t4554 = t4544 + t4553;
  t4564 = -1.*t564*t4486;
  t4567 = 4.e-6*t367*t4521;
  t4570 = t4564 + t4567;
  t4587 = t2147*t4486;
  t4595 = -4.e-6*t564*t4521;
  t4598 = t4587 + t4595;
  t2999 = 0.15121*t1375;
  t3000 = t2992 + t2999;
  t3007 = t2992 + t1400;
  t4749 = t907*t3741*t1587;
  t4754 = t3716*t1704;
  t4756 = t4749 + t4754;
  t4788 = -1.*t1375*t4756;
  t4801 = t4788 + t4485;
  t4823 = -1.*t975*t4756;
  t4836 = t4823 + t4513;
  t4875 = 4.e-6*t564*t4801;
  t4889 = t2414*t4836;
  t4890 = t4875 + t4889;
  t4892 = -1.*t564*t4801;
  t4901 = 4.e-6*t367*t4836;
  t4910 = t4892 + t4901;
  t4914 = t2147*t4801;
  t4920 = -4.e-6*t564*t4836;
  t4930 = t4914 + t4920;
  t3027 = -0.281210000004*t203;
  t3030 = -4.9936e-13 + t3027 + t1912;
  t3037 = 1.124840000016e-6*t203;
  t3038 = 1.5499600000248e-7*t564;
  t3047 = -1.2484e-7 + t3037 + t3038;
  t3058 = -0.03874900000062*t203;
  t3061 = 0.281210000008499*t564;
  t3066 = t3058 + t3061;
  t5151 = t975*t4756;
  t5153 = t1375*t4453;
  t5172 = t5151 + t5153;
  t5180 = t42*t564*t3741;
  t5224 = -1.*t203*t5172;
  t5266 = t5180 + t4875 + t5224;
  t5278 = -4.e-6*t42*t564*t3741;
  t5280 = -1.6e-11*t564*t4801;
  t5284 = 4.e-6*t203*t5172;
  t5285 = t5278 + t5280 + t5284;
  t5341 = -1.*t203*t42*t3741;
  t5343 = -4.e-6*t203*t4801;
  t5367 = -1.000000000016*t564*t5172;
  t5368 = t5341 + t5343 + t5367;
  t3456 = -0.0398890000006382*t1987;
  t3457 = 0.50315000001605*t2041;
  t3465 = t3456 + t3457;
  t3530 = -0.503150000008*t1987;
  t3545 = -5.04e-14 + t3530 + t2068;
  t3557 = 2.012600000032e-6*t1987;
  t3560 = 1.59556000002553e-7*t2041;
  t3561 = -1.26e-8 + t3557 + t3560;
  t5442 = -1.*t42*t564*t3741;
  t5443 = -4.e-6*t564*t4801;
  t5445 = t2147*t5172;
  t5454 = t5442 + t5443 + t5445;
  t5457 = 4.e-6*t367*t4801;
  t5461 = -1.*t564*t5172;
  t5476 = t5341 + t5457 + t5461;
  t5478 = -4.e-6*t367*t42*t3741;
  t5479 = t2414*t4801;
  t5486 = 4.e-6*t564*t5172;
  t5489 = t5478 + t5479 + t5486;
  t5525 = t1987*t5476;
  t5806 = t3716*t42*t907*t1375;
  t5827 = t975*t3716*t42*t1704;
  t5830 = t5806 + t5827;
  t5842 = -1.*t975*t3716*t42*t907;
  t5845 = t3716*t42*t1375*t1704;
  t5849 = t5842 + t5845;
  t5861 = -1.*t3716*t564*t1587;
  t5868 = -4.e-6*t564*t5830;
  t5881 = t2147*t5849;
  t5882 = t5861 + t5868 + t5881;
  t5905 = -1.*t203*t3716*t1587;
  t5909 = 4.e-6*t367*t5830;
  t5912 = -1.*t564*t5849;
  t5931 = t5905 + t5909 + t5912;
  t5976 = -4.e-6*t367*t3716*t1587;
  t5980 = t2414*t5830;
  t5990 = 4.e-6*t564*t5849;
  t5993 = t5976 + t5980 + t5990;
  t6101 = t907*t3741;
  t6109 = t3716*t1587*t1704;
  t6110 = t6101 + t6109;
  t6115 = t1375*t3754;
  t6121 = t975*t6110;
  t6129 = t6115 + t6121;
  t6132 = -1.*t1375*t6110;
  t6133 = t3808 + t6132;
  t6135 = 4.e-6*t564*t6129;
  t6138 = t2414*t6133;
  t6139 = t6135 + t6138;
  t6143 = -1.*t564*t6129;
  t6144 = 4.e-6*t367*t6133;
  t6154 = t6143 + t6144;
  t6157 = t2147*t6129;
  t6158 = -4.e-6*t564*t6133;
  t6160 = t6157 + t6158;
  t6339 = -1.*t3716*t907*t1587;
  t6340 = t3741*t1704;
  t6344 = t6339 + t6340;
  t6361 = -1.*t1375*t6344;
  t6369 = t6361 + t6121;
  t6371 = -1.*t975*t6344;
  t6376 = t6371 + t6132;
  t6395 = 4.e-6*t564*t6369;
  t6397 = t2414*t6376;
  t6398 = t6395 + t6397;
  t6404 = -1.*t564*t6369;
  t6411 = 4.e-6*t367*t6376;
  t6414 = t6404 + t6411;
  t6428 = t2147*t6369;
  t6435 = -4.e-6*t564*t6376;
  t6442 = t6428 + t6435;
  t6635 = t975*t6344;
  t6636 = t1375*t6110;
  t6639 = t6635 + t6636;
  t6643 = -1.*t203*t6639;
  t6645 = t3835 + t6395 + t6643;
  t6652 = 4.e-6*t3716*t42*t564;
  t6654 = -1.6e-11*t564*t6369;
  t6664 = 4.e-6*t203*t6639;
  t6675 = t6652 + t6654 + t6664;
  t6678 = t203*t3716*t42;
  t6690 = -4.e-6*t203*t6369;
  t6691 = -1.000000000016*t564*t6639;
  t6715 = t6678 + t6690 + t6691;
  t6914 = t3716*t42*t564;
  t6917 = -4.e-6*t564*t6369;
  t6920 = t2147*t6639;
  t6923 = t6914 + t6917 + t6920;
  t6930 = 4.e-6*t367*t6369;
  t6935 = -1.*t564*t6639;
  t6942 = t6678 + t6930 + t6935;
  t6951 = 4.e-6*t367*t3716*t42;
  t6956 = t2414*t6369;
  t6957 = 4.e-6*t564*t6639;
  t6961 = t6951 + t6956 + t6957;
  p_output1[0]=1.;
  p_output1[1]=t1587*t1637*t1704 + t1838*t1879 + t1952*t1963 + t2082*t2230 + t2290*t2326 + t2361*t2455 - 0.041195*(-1.*t2041*t2230 + t1987*t2326 + 4.e-6*t2006*t2455) - 0.14871*(4.e-6*t2041*t2230 + 4.e-6*t2006*t2326 + t2455*t2520) + 0.803147*(t2041*t2326 - 4.e-6*t2041*t2455 + t2230*t2708) + t42*t605 - 1.*t1402*t1587*t907;
  p_output1[2]=t2755 + t2811 + t2836 + t2867 + t2908 + t2927 + t2964 + t2979 - 1.*t1402*t1704*t42 - 1.*t1637*t42*t907;
  p_output1[3]=t2755 + t2811 + t2836 + t2867 + t2908 + t2927 + t2964 + t2979 - 1.*t1704*t3007*t42 + t3000*t42*t907;
  p_output1[4]=t1587*t3030 + t2754*t3047 + t3066*t3100 + t2290*t3135 + t2361*t3184 + t2082*t3225 - 0.041195*(t1987*t3135 + 4.e-6*t2006*t3184 - 1.*t2041*t3225) - 0.14871*(4.e-6*t2006*t3135 + t2520*t3184 + 4.e-6*t2041*t3225) + 0.803147*(t2041*t3135 - 4.e-6*t2041*t3184 + t2708*t3225);
  p_output1[5]=t3465*t3496 + t3545*t3551 + t3561*t3577 + 0.803147*(-1.000000000016*t2041*t3496 + t1987*t3551 - 4.e-6*t1987*t3577) - 0.14871*(4.e-6*t1987*t3496 + 4.e-6*t2041*t3551 - 1.6e-11*t2041*t3577) - 0.041195*(-1.*t1987*t3496 - 1.*t2041*t3551 + 4.e-6*t2041*t3577);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1402*t3754 + t1637*t3770 + t1838*t3798 + t1952*t3817 + t2082*t3905 + t2290*t4003 + t2361*t4033 - 0.041195*(-1.*t2041*t3905 + t1987*t4003 + 4.e-6*t2006*t4033) + 0.803147*(t2708*t3905 + t2041*t4003 - 4.e-6*t2041*t4033) - 0.14871*(4.e-6*t2041*t3905 + 4.e-6*t2006*t4003 + t2520*t4033) - 1.*t3716*t42*t605;
  p_output1[9]=t1838*t4143 + t1952*t4163 + t2082*t4187 - 1.*t1637*t1704*t3741*t42 + t2290*t4218 + t2361*t4240 - 0.041195*(-1.*t2041*t4187 + t1987*t4218 + 4.e-6*t2006*t4240) + 0.803147*(t2708*t4187 + t2041*t4218 - 4.e-6*t2041*t4240) - 0.14871*(4.e-6*t2041*t4187 + 4.e-6*t2006*t4218 + t2520*t4240) + t1587*t3741*t605 + t1402*t3741*t42*t907;
  p_output1[10]=t1637*t4402 + t1402*t4453 + t1952*t4486 + t1838*t4521 + t2361*t4554 + t2290*t4570 + t2082*t4598 - 0.041195*(4.e-6*t2006*t4554 + t1987*t4570 - 1.*t2041*t4598) - 0.14871*(t2520*t4554 + 4.e-6*t2006*t4570 + 4.e-6*t2041*t4598) + 0.803147*(-4.e-6*t2041*t4554 + t2041*t4570 + t2708*t4598);
  p_output1[11]=t3007*t4453 + t3000*t4756 + t1952*t4801 + t1838*t4836 + t2361*t4890 + t2290*t4910 + t2082*t4930 - 0.041195*(4.e-6*t2006*t4890 + t1987*t4910 - 1.*t2041*t4930) - 0.14871*(t2520*t4890 + 4.e-6*t2006*t4910 + 4.e-6*t2041*t4930) + 0.803147*(-4.e-6*t2041*t4890 + t2041*t4910 + t2708*t4930);
  p_output1[12]=-1.*t3030*t3741*t42 + t3047*t4801 + t3066*t5172 + t2290*t5266 + t2361*t5285 + t2082*t5368 - 0.041195*(t1987*t5266 + 4.e-6*t2006*t5285 - 1.*t2041*t5368) - 0.14871*(4.e-6*t2006*t5266 + t2520*t5285 + 4.e-6*t2041*t5368) + 0.803147*(t2041*t5266 - 4.e-6*t2041*t5285 + t2708*t5368);
  p_output1[13]=t3465*t5454 + t3545*t5476 + t3561*t5489 - 0.14871*(4.e-6*t1987*t5454 + 4.e-6*t2041*t5476 - 1.6e-11*t2041*t5489) - 0.041195*(-1.*t1987*t5454 - 1.*t2041*t5476 + 4.e-6*t2041*t5489) + 0.803147*(-1.000000000016*t2041*t5454 - 4.e-6*t1987*t5489 + t5525);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1637*t4453 + t1402*t4756 + t1838*t4801 + t1952*t5172 + t2082*t5454 + t2290*t5476 + t2361*t5489 + 0.803147*(t2708*t5454 + t2041*t5476 - 4.e-6*t2041*t5489) - 0.14871*(4.e-6*t2041*t5454 + 4.e-6*t2006*t5476 + t2520*t5489) - 0.041195*(-1.*t2041*t5454 + 4.e-6*t2006*t5489 + t5525) - 1.*t3741*t42*t605;
  p_output1[17]=t1637*t1704*t3716*t42 + t1838*t5830 + t1952*t5849 + t2082*t5882 + t2290*t5931 + t2361*t5993 - 0.041195*(-1.*t2041*t5882 + t1987*t5931 + 4.e-6*t2006*t5993) + 0.803147*(t2708*t5882 + t2041*t5931 - 4.e-6*t2041*t5993) - 0.14871*(4.e-6*t2041*t5882 + 4.e-6*t2006*t5931 + t2520*t5993) - 1.*t1587*t3716*t605 - 1.*t1402*t3716*t42*t907;
  p_output1[18]=t1637*t3754 + t1402*t6110 + t1952*t6129 + t1838*t6133 + t2361*t6139 + t2290*t6154 + t2082*t6160 - 0.041195*(4.e-6*t2006*t6139 + t1987*t6154 - 1.*t2041*t6160) - 0.14871*(t2520*t6139 + 4.e-6*t2006*t6154 + 4.e-6*t2041*t6160) + 0.803147*(-4.e-6*t2041*t6139 + t2041*t6154 + t2708*t6160);
  p_output1[19]=t3007*t6110 + t3000*t6344 + t1952*t6369 + t1838*t6376 + t2361*t6398 + t2290*t6414 + t2082*t6442 - 0.041195*(4.e-6*t2006*t6398 + t1987*t6414 - 1.*t2041*t6442) - 0.14871*(t2520*t6398 + 4.e-6*t2006*t6414 + 4.e-6*t2041*t6442) + 0.803147*(-4.e-6*t2041*t6398 + t2041*t6414 + t2708*t6442);
  p_output1[20]=t3030*t3716*t42 + t3047*t6369 + t3066*t6639 + t2290*t6645 + t2361*t6675 + t2082*t6715 - 0.041195*(t1987*t6645 + 4.e-6*t2006*t6675 - 1.*t2041*t6715) - 0.14871*(4.e-6*t2006*t6645 + t2520*t6675 + 4.e-6*t2041*t6715) + 0.803147*(t2041*t6645 - 4.e-6*t2041*t6675 + t2708*t6715);
  p_output1[21]=t3465*t6923 + t3545*t6942 + t3561*t6961 + 0.803147*(-1.000000000016*t2041*t6923 + t1987*t6942 - 4.e-6*t1987*t6961) - 0.14871*(4.e-6*t1987*t6923 + 4.e-6*t2041*t6942 - 1.6e-11*t2041*t6961) - 0.041195*(-1.*t1987*t6923 - 1.*t2041*t6942 + 4.e-6*t2041*t6961);
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

#include "J_h_FrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_FrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
