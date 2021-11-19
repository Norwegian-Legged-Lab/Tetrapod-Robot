/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:19 GMT+01:00
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
  double t44;
  double t64;
  double t77;
  double t109;
  double t202;
  double t203;
  double t217;
  double t227;
  double t228;
  double t247;
  double t105;
  double t201;
  double t307;
  double t148;
  double t387;
  double t731;
  double t846;
  double t888;
  double t1000;
  double t5;
  double t489;
  double t503;
  double t433;
  double t438;
  double t439;
  double t521;
  double t580;
  double t706;
  double t1122;
  double t359;
  double t1216;
  double t399;
  double t1352;
  double t992;
  double t1642;
  double t1662;
  double t121;
  double t1197;
  double t1199;
  double t1203;
  double t1219;
  double t1230;
  double t1236;
  double t1259;
  double t1298;
  double t1299;
  double t1833;
  double t1664;
  double t1691;
  double t1716;
  double t1768;
  double t1776;
  double t1793;
  double t1803;
  double t1805;
  double t2050;
  double t2057;
  double t2059;
  double t2062;
  double t2084;
  double t2099;
  double t2102;
  double t2117;
  double t1125;
  double t2157;
  double t1025;
  double t2353;
  double t1422;
  double t2181;
  double t2208;
  double t1376;
  double t278;
  double t282;
  double t219;
  double t237;
  double t482;
  double t483;
  double t496;
  double t500;
  double t514;
  double t516;
  double t518;
  double t337;
  double t339;
  double t367;
  double t369;
  double t408;
  double t419;
  double t426;
  double t1320;
  double t1343;
  double t1383;
  double t1400;
  double t1484;
  double t1529;
  double t1538;
  double t2464;
  double t2470;
  double t2495;
  double t2589;
  double t2604;
  double t2688;
  double t729;
  double t972;
  double t1076;
  double t1117;
  double t1128;
  double t1137;
  double t1187;
  double t1819;
  double t1820;
  double t1836;
  double t1846;
  double t1880;
  double t2020;
  double t2045;
  double t2209;
  double t2704;
  double t2715;
  double t2723;
  double t2169;
  double t2750;
  double t2759;
  double t2774;
  double t2220;
  double t2254;
  double t2791;
  double t2792;
  double t2796;
  double t2370;
  double t2319;
  double t2339;
  double t2393;
  double t2412;
  double t2423;
  double t2405;
  double t2427;
  double t2941;
  double t2581;
  double t2696;
  double t2746;
  double t2786;
  double t2797;
  double t2801;
  double t2804;
  double t2818;
  double t2821;
  double t2823;
  double t2828;
  double t2844;
  double t2852;
  double t2853;
  double t2856;
  double t2863;
  double t2865;
  double t2870;
  double t2901;
  double t2905;
  double t3011;
  double t3074;
  double t3100;
  double t3250;
  double t3255;
  double t3257;
  double t3026;
  double t3330;
  double t3194;
  double t3264;
  double t3268;
  double t3271;
  double t3278;
  double t3279;
  double t3284;
  double t3296;
  double t3313;
  double t3321;
  double t3335;
  double t3339;
  double t3341;
  double t3397;
  double t3453;
  double t3542;
  double t3546;
  double t3571;
  double t3573;
  double t3755;
  double t3955;
  double t3857;
  double t3861;
  double t3878;
  double t3887;
  double t4056;
  double t4061;
  double t4062;
  double t4091;
  double t3899;
  double t4173;
  double t4179;
  double t4187;
  double t4190;
  double t3816;
  double t4312;
  double t4140;
  double t40;
  double t84;
  double t132;
  double t142;
  double t165;
  double t168;
  double t174;
  double t4439;
  double t4470;
  double t4467;
  double t4511;
  double t4526;
  double t4568;
  double t4569;
  double t4607;
  double t4641;
  double t4667;
  double t4687;
  double t4728;
  double t4765;
  double t4774;
  double t4824;
  double t4839;
  double t4849;
  double t4913;
  double t4997;
  double t5018;
  double t5022;
  double t5025;
  double t5173;
  double t5185;
  double t5200;
  double t5306;
  double t5716;
  double t5726;
  double t5766;
  double t5819;
  double t5827;
  double t5831;
  double t5846;
  double t5855;
  double t5892;
  double t5894;
  double t5933;
  double t5937;
  double t5945;
  double t5947;
  double t5963;
  double t5965;
  double t5966;
  double t5968;
  double t6162;
  double t6166;
  double t6225;
  double t6248;
  double t6369;
  double t6410;
  double t6505;
  double t6528;
  double t6565;
  double t6591;
  double t6615;
  double t6619;
  double t6658;
  double t6796;
  double t6802;
  double t6835;
  double t6871;
  double t6921;
  double t6957;
  double t7119;
  double t7185;
  double t2945;
  double t2973;
  double t2987;
  double t7295;
  double t7298;
  double t7299;
  double t7302;
  double t7306;
  double t7309;
  double t7310;
  double t7312;
  double t7313;
  double t7349;
  double t7385;
  double t7482;
  double t7530;
  double t7549;
  double t7571;
  double t7580;
  double t3023;
  double t3025;
  double t3037;
  double t3039;
  double t3050;
  double t3064;
  double t3083;
  double t3098;
  double t3101;
  double t3112;
  double t3158;
  double t3167;
  double t3175;
  double t3183;
  double t3214;
  double t3229;
  double t3247;
  double t3248;
  double t7991;
  double t8048;
  double t8078;
  double t8119;
  double t8184;
  double t8192;
  double t8200;
  double t8206;
  double t8208;
  double t8210;
  double t8215;
  double t8219;
  double t8220;
  double t8221;
  double t8223;
  double t3768;
  double t3771;
  double t3831;
  double t3832;
  double t3841;
  double t3852;
  double t3916;
  double t3938;
  double t3963;
  double t3972;
  double t3993;
  double t4032;
  double t4105;
  double t4120;
  double t4158;
  double t4164;
  double t4165;
  double t4171;
  double t4199;
  double t8280;
  double t8282;
  double t8284;
  double t8286;
  double t8304;
  double t8306;
  double t8314;
  double t8318;
  double t4222;
  double t8321;
  double t8323;
  double t8324;
  double t8325;
  double t4276;
  double t4328;
  double t4358;
  double t4381;
  double t8681;
  double t8682;
  double t8683;
  double t8687;
  double t8688;
  double t8689;
  double t8699;
  double t8700;
  double t8701;
  double t8702;
  double t8706;
  double t8710;
  double t8716;
  double t8722;
  double t8736;
  double t8737;
  double t8740;
  double t8741;
  double t8793;
  double t8795;
  double t8796;
  double t8801;
  double t8805;
  double t8806;
  double t8809;
  double t8812;
  double t8815;
  double t8817;
  double t8818;
  double t8821;
  double t8822;
  double t8827;
  double t8861;
  double t8908;
  double t8910;
  double t9169;
  double t9174;
  double t9175;
  double t9182;
  double t9184;
  double t9186;
  double t9188;
  double t9192;
  double t9193;
  double t9195;
  double t9197;
  double t9198;
  double t9230;
  double t9240;
  double t9265;
  double t9272;
  double t9346;
  double t9354;
  double t9366;
  double t9383;
  double t9384;
  double t9385;
  double t9386;
  double t9389;
  double t9394;
  double t9395;
  double t9402;
  double t9409;
  double t9411;
  double t9412;
  double t9413;
  double t9480;
  double t9482;
  double t9483;
  double t9484;
  double t9488;
  double t9489;
  double t9490;
  double t9491;
  double t9496;
  double t9503;
  double t9504;
  double t9505;
  t44 = Cos(var1[13]);
  t64 = -1.*t44;
  t77 = 1. + t64;
  t109 = Sin(var1[13]);
  t202 = Cos(var1[12]);
  t203 = -1.*t202;
  t217 = 1. + t203;
  t227 = Sin(var1[12]);
  t228 = 0.15121*t227;
  t247 = Sin(var1[4]);
  t105 = 4.e-6*t77;
  t201 = Cos(var1[5]);
  t307 = Sin(var1[5]);
  t148 = -2.8e-11*t77;
  t387 = 7.e-6*t77;
  t731 = Cos(var1[14]);
  t846 = -1.*t731;
  t888 = 1. + t846;
  t1000 = Sin(var1[14]);
  t5 = Cos(var1[4]);
  t489 = -1.*t109;
  t503 = -4.e-6*t109;
  t433 = t201*t227*t247;
  t438 = t202*t247*t307;
  t439 = t433 + t438;
  t521 = -1.*t202*t201*t247;
  t580 = t227*t247*t307;
  t706 = t521 + t580;
  t1122 = 7.e-6*t888;
  t359 = -7.e-6*t109;
  t1216 = -7.e-6*t77;
  t399 = 4.e-6*t109;
  t1352 = 4.e-6*t888;
  t992 = -2.8e-11*t888;
  t1642 = -1. + t44;
  t1662 = 4.e-6*t1642;
  t121 = 7.e-6*t109;
  t1197 = 2.8e-11*t77;
  t1199 = t1197 + t489;
  t1203 = t5*t1199;
  t1219 = t1216 + t503;
  t1230 = t1219*t439;
  t1236 = -1.000000000016*t77;
  t1259 = 1. + t1236;
  t1298 = t1259*t706;
  t1299 = t1203 + t1230 + t1298;
  t1833 = 7.e-6*t1000;
  t1664 = t1662 + t359;
  t1691 = t5*t1664;
  t1716 = -6.5e-11*t77;
  t1768 = 1. + t1716;
  t1776 = t1768*t439;
  t1793 = t1216 + t399;
  t1803 = t1793*t706;
  t1805 = t1691 + t1776 + t1803;
  t2050 = -1.000000000049*t77;
  t2057 = 1. + t2050;
  t2059 = t2057*t5;
  t2062 = t1662 + t121;
  t2084 = t2062*t439;
  t2099 = t1197 + t109;
  t2102 = t2099*t706;
  t2117 = t2059 + t2084 + t2102;
  t1125 = -4.e-6*t1000;
  t2157 = 2.8e-11*t888;
  t1025 = -1.*t1000;
  t2353 = -7.e-6*t888;
  t1422 = 4.e-6*t1000;
  t2181 = -1. + t731;
  t2208 = 4.e-6*t2181;
  t1376 = -7.e-6*t1000;
  t278 = 0.15121*t217;
  t282 = t278 + t228;
  t219 = -0.15121*t217;
  t237 = t219 + t228;
  t482 = 1.0248489999999998e-12*var1[13];
  t483 = -0.28120900000849935*t77;
  t496 = t148 + t489;
  t500 = -0.038748999993*t496;
  t514 = t387 + t503;
  t516 = -2.123459e-6*t514;
  t518 = t482 + t483 + t500 + t516;
  t337 = -1.4640699999999997e-7*var1[13];
  t339 = -1.38024835e-16*t77;
  t367 = t105 + t359;
  t369 = -0.038748999993*t367;
  t408 = t387 + t399;
  t419 = -0.281209000004*t408;
  t426 = t337 + t339 + t369 + t419;
  t1320 = -2.598649999999999e-7*var1[14];
  t1343 = -2.3905277499999995e-16*t888;
  t1383 = t1352 + t1376;
  t1400 = -0.038922999986*t1383;
  t1484 = t1122 + t1422;
  t1529 = -0.503149000008*t1484;
  t1538 = t1320 + t1343 + t1400 + t1529;
  t2464 = -1.*t5*t201*t227;
  t2470 = -1.*t202*t5*t307;
  t2495 = t2464 + t2470;
  t2589 = -1.*t202*t5*t201;
  t2604 = t5*t227*t307;
  t2688 = t2589 + t2604;
  t729 = 1.8190549999999993e-12*var1[14];
  t972 = -0.5031490000160505*t888;
  t1076 = t992 + t1025;
  t1117 = -0.038922999986*t1076;
  t1128 = t1122 + t1125;
  t1137 = -3.6777349999999994e-6*t1128;
  t1187 = t729 + t972 + t1117 + t1137;
  t1819 = 1.0394599999999997e-12*var1[14];
  t1820 = -0.03892299998790722*t888;
  t1836 = t1352 + t1833;
  t1846 = -3.6777349999999994e-6*t1836;
  t1880 = t992 + t1000;
  t2020 = -0.503149000008*t1880;
  t2045 = t1819 + t1820 + t1846 + t2020;
  t2209 = t2208 + t1833;
  t2704 = t1793*t2495;
  t2715 = t1768*t2688;
  t2723 = t2704 + t2715;
  t2169 = t2157 + t1000;
  t2750 = t1259*t2495;
  t2759 = t1219*t2688;
  t2774 = t2750 + t2759;
  t2220 = -1.000000000049*t888;
  t2254 = 1. + t2220;
  t2791 = t2099*t2495;
  t2792 = t2062*t2688;
  t2796 = t2791 + t2792;
  t2370 = t2353 + t1125;
  t2319 = -1.000000000016*t888;
  t2339 = 1. + t2319;
  t2393 = t2157 + t1025;
  t2412 = -6.5e-11*t888;
  t2423 = 1. + t2412;
  t2405 = t2353 + t1422;
  t2427 = t2208 + t1376;
  t2941 = 0.15121*t202;
  t2581 = t518*t2495;
  t2696 = t426*t2688;
  t2746 = t1538*t2723;
  t2786 = t1187*t2774;
  t2797 = t2045*t2796;
  t2801 = t2209*t2723;
  t2804 = t2169*t2774;
  t2818 = t2254*t2796;
  t2821 = t2801 + t2804 + t2818;
  t2823 = -0.038924*t2821;
  t2828 = t2370*t2723;
  t2844 = t2339*t2774;
  t2852 = t2393*t2796;
  t2853 = t2828 + t2844 + t2852;
  t2856 = -0.80315*t2853;
  t2863 = t2423*t2723;
  t2865 = t2405*t2774;
  t2870 = t2427*t2796;
  t2901 = t2863 + t2865 + t2870;
  t2905 = 0.148705*t2901;
  t3011 = -2.8e-11*t109;
  t3074 = -7.e-6*t44;
  t3100 = 4.e-6*t44;
  t3250 = t202*t5*t201;
  t3255 = -1.*t5*t227*t307;
  t3257 = t3250 + t3255;
  t3026 = 7.e-6*t44;
  t3330 = 2.8e-11*t109;
  t3194 = -4.e-6*t44;
  t3264 = t3074 + t503;
  t3268 = t3264*t247;
  t3271 = -6.5e-11*t109*t2495;
  t3278 = t3100 + t359;
  t3279 = t3278*t3257;
  t3284 = t3268 + t3271 + t3279;
  t3296 = -1.000000000049*t109*t247;
  t3313 = t3026 + t503;
  t3321 = t3313*t2495;
  t3335 = t44 + t3330;
  t3339 = t3335*t3257;
  t3341 = t3296 + t3321 + t3339;
  t3397 = t64 + t3330;
  t3453 = t3397*t247;
  t3542 = t3194 + t359;
  t3546 = t3542*t2495;
  t3571 = -1.000000000016*t109*t3257;
  t3573 = t3453 + t3546 + t3571;
  t3755 = -2.8e-11*t1000;
  t3955 = 4.e-6*t731;
  t3857 = t1199*t247;
  t3861 = t1219*t2495;
  t3878 = t1259*t3257;
  t3887 = t3857 + t3861 + t3878;
  t4056 = t1664*t247;
  t4061 = t1768*t2495;
  t4062 = t1793*t3257;
  t4091 = t4056 + t4061 + t4062;
  t3899 = -7.e-6*t731;
  t4173 = t2057*t247;
  t4179 = t2062*t2495;
  t4187 = t2099*t3257;
  t4190 = t4173 + t4179 + t4187;
  t3816 = -4.e-6*t731;
  t4312 = 2.8e-11*t1000;
  t4140 = 7.e-6*t731;
  t40 = 5.856279999999999e-13*var1[13];
  t84 = -0.0387489999948987*t77;
  t132 = t105 + t121;
  t142 = -2.123459e-6*t132;
  t165 = t148 + t109;
  t168 = -0.281209000004*t165;
  t174 = t40 + t84 + t142 + t168;
  t4439 = Cos(var1[3]);
  t4470 = Sin(var1[3]);
  t4467 = t4439*t201*t247;
  t4511 = -1.*t4470*t307;
  t4526 = t4467 + t4511;
  t4568 = -1.*t201*t4470;
  t4569 = -1.*t4439*t247*t307;
  t4607 = t4568 + t4569;
  t4641 = -1.*t227*t4526;
  t4667 = t202*t4607;
  t4687 = t4641 + t4667;
  t4728 = t202*t4526;
  t4765 = t227*t4607;
  t4774 = t4728 + t4765;
  t4824 = -1.*t4439*t5*t1199;
  t4839 = t1219*t4687;
  t4849 = t1259*t4774;
  t4913 = t4824 + t4839 + t4849;
  t4997 = -1.*t4439*t5*t1664;
  t5018 = t1768*t4687;
  t5022 = t1793*t4774;
  t5025 = t4997 + t5018 + t5022;
  t5173 = -1.*t2057*t4439*t5;
  t5185 = t2062*t4687;
  t5200 = t2099*t4774;
  t5306 = t5173 + t5185 + t5200;
  t5716 = -1.*t5*t201*t227*t4470;
  t5726 = -1.*t202*t5*t4470*t307;
  t5766 = t5716 + t5726;
  t5819 = t202*t5*t201*t4470;
  t5827 = -1.*t5*t227*t4470*t307;
  t5831 = t5819 + t5827;
  t5846 = t1199*t4470*t247;
  t5855 = t1219*t5766;
  t5892 = t1259*t5831;
  t5894 = t5846 + t5855 + t5892;
  t5933 = t1664*t4470*t247;
  t5937 = t1768*t5766;
  t5945 = t1793*t5831;
  t5947 = t5933 + t5937 + t5945;
  t5963 = t2057*t4470*t247;
  t5965 = t2062*t5766;
  t5966 = t2099*t5831;
  t5968 = t5963 + t5965 + t5966;
  t6162 = -1.*t201*t4470*t247;
  t6166 = -1.*t4439*t307;
  t6225 = t6162 + t6166;
  t6248 = t4439*t201;
  t6369 = -1.*t4470*t247*t307;
  t6410 = t6248 + t6369;
  t6505 = t227*t6225;
  t6528 = t202*t6410;
  t6565 = t6505 + t6528;
  t6591 = t202*t6225;
  t6615 = -1.*t227*t6410;
  t6619 = t6591 + t6615;
  t6658 = t1793*t6565;
  t6796 = t1768*t6619;
  t6802 = t6658 + t6796;
  t6835 = t1259*t6565;
  t6871 = t1219*t6619;
  t6921 = t6835 + t6871;
  t6957 = t2099*t6565;
  t7119 = t2062*t6619;
  t7185 = t6957 + t7119;
  t2945 = -0.15121*t227;
  t2973 = t2941 + t2945;
  t2987 = t2941 + t228;
  t7295 = t201*t4470*t247;
  t7298 = t4439*t307;
  t7299 = t7295 + t7298;
  t7302 = -1.*t227*t7299;
  t7306 = t7302 + t6528;
  t7309 = -1.*t202*t7299;
  t7310 = t7309 + t6615;
  t7312 = t1793*t7306;
  t7313 = t1768*t7310;
  t7349 = t7312 + t7313;
  t7385 = t1259*t7306;
  t7482 = t1219*t7310;
  t7530 = t7385 + t7482;
  t7549 = t2099*t7306;
  t7571 = t2062*t7310;
  t7580 = t7549 + t7571;
  t3023 = t44 + t3011;
  t3025 = -0.281209000004*t3023;
  t3037 = t3026 + t399;
  t3039 = -2.123459e-6*t3037;
  t3050 = -0.0387489999948987*t109;
  t3064 = 5.856279999999999e-13 + t3025 + t3039 + t3050;
  t3083 = t3074 + t399;
  t3098 = -0.038748999993*t3083;
  t3101 = t3100 + t121;
  t3112 = -0.281209000004*t3101;
  t3158 = -1.38024835e-16*t109;
  t3167 = -1.4640699999999997e-7 + t3098 + t3112 + t3158;
  t3175 = t64 + t3011;
  t3183 = -0.038748999993*t3175;
  t3214 = t3194 + t121;
  t3229 = -2.123459e-6*t3214;
  t3247 = -0.28120900000849935*t109;
  t3248 = 1.0248489999999998e-12 + t3183 + t3229 + t3247;
  t7991 = t202*t7299;
  t8048 = t227*t6410;
  t8078 = t7991 + t8048;
  t8119 = -1.*t5*t3264*t4470;
  t8184 = -6.5e-11*t109*t7306;
  t8192 = t3278*t8078;
  t8200 = t8119 + t8184 + t8192;
  t8206 = 1.000000000049*t5*t109*t4470;
  t8208 = t3313*t7306;
  t8210 = t3335*t8078;
  t8215 = t8206 + t8208 + t8210;
  t8219 = -1.*t5*t3397*t4470;
  t8220 = t3542*t7306;
  t8221 = -1.000000000016*t109*t8078;
  t8223 = t8219 + t8220 + t8221;
  t3768 = t846 + t3755;
  t3771 = -0.038922999986*t3768;
  t3831 = t3816 + t1833;
  t3832 = -3.6777349999999994e-6*t3831;
  t3841 = -0.5031490000160505*t1000;
  t3852 = 1.8190549999999993e-12 + t3771 + t3832 + t3841;
  t3916 = t3899 + t1422;
  t3938 = -0.038922999986*t3916;
  t3963 = t3955 + t1833;
  t3972 = -0.503149000008*t3963;
  t3993 = -2.3905277499999995e-16*t1000;
  t4032 = -2.598649999999999e-7 + t3938 + t3972 + t3993;
  t4105 = t731 + t3755;
  t4120 = -0.503149000008*t4105;
  t4158 = t4140 + t1422;
  t4164 = -3.6777349999999994e-6*t4158;
  t4165 = -0.03892299998790722*t1000;
  t4171 = 1.0394599999999997e-12 + t4120 + t4164 + t4165;
  t4199 = t3955 + t1376;
  t8280 = -1.*t5*t1199*t4470;
  t8282 = t1219*t7306;
  t8284 = t1259*t8078;
  t8286 = t8280 + t8282 + t8284;
  t8304 = -1.*t5*t1664*t4470;
  t8306 = t1768*t7306;
  t8314 = t1793*t8078;
  t8318 = t8304 + t8306 + t8314;
  t4222 = t3899 + t1125;
  t8321 = -1.*t2057*t5*t4470;
  t8323 = t2062*t7306;
  t8324 = t2099*t8078;
  t8325 = t8321 + t8323 + t8324;
  t4276 = t3816 + t1376;
  t4328 = t846 + t4312;
  t4358 = t731 + t4312;
  t4381 = t4140 + t1125;
  t8681 = t4439*t5*t201*t227;
  t8682 = t202*t4439*t5*t307;
  t8683 = t8681 + t8682;
  t8687 = -1.*t202*t4439*t5*t201;
  t8688 = t4439*t5*t227*t307;
  t8689 = t8687 + t8688;
  t8699 = -1.*t4439*t1199*t247;
  t8700 = t1219*t8683;
  t8701 = t1259*t8689;
  t8702 = t8699 + t8700 + t8701;
  t8706 = -1.*t4439*t1664*t247;
  t8710 = t1768*t8683;
  t8716 = t1793*t8689;
  t8722 = t8706 + t8710 + t8716;
  t8736 = -1.*t2057*t4439*t247;
  t8737 = t2062*t8683;
  t8740 = t2099*t8689;
  t8741 = t8736 + t8737 + t8740;
  t8793 = t201*t4470;
  t8795 = t4439*t247*t307;
  t8796 = t8793 + t8795;
  t8801 = t227*t4526;
  t8805 = t202*t8796;
  t8806 = t8801 + t8805;
  t8809 = -1.*t227*t8796;
  t8812 = t4728 + t8809;
  t8815 = t1793*t8806;
  t8817 = t1768*t8812;
  t8818 = t8815 + t8817;
  t8821 = t1259*t8806;
  t8822 = t1219*t8812;
  t8827 = t8821 + t8822;
  t8861 = t2099*t8806;
  t8908 = t2062*t8812;
  t8910 = t8861 + t8908;
  t9169 = -1.*t4439*t201*t247;
  t9174 = t4470*t307;
  t9175 = t9169 + t9174;
  t9182 = -1.*t227*t9175;
  t9184 = t9182 + t8805;
  t9186 = -1.*t202*t9175;
  t9188 = t9186 + t8809;
  t9192 = t1793*t9184;
  t9193 = t1768*t9188;
  t9195 = t9192 + t9193;
  t9197 = t1259*t9184;
  t9198 = t1219*t9188;
  t9230 = t9197 + t9198;
  t9240 = t2099*t9184;
  t9265 = t2062*t9188;
  t9272 = t9240 + t9265;
  t9346 = t202*t9175;
  t9354 = t227*t8796;
  t9366 = t9346 + t9354;
  t9383 = t4439*t5*t3264;
  t9384 = -6.5e-11*t109*t9184;
  t9385 = t3278*t9366;
  t9386 = t9383 + t9384 + t9385;
  t9389 = -1.000000000049*t4439*t5*t109;
  t9394 = t3313*t9184;
  t9395 = t3335*t9366;
  t9402 = t9389 + t9394 + t9395;
  t9409 = t4439*t5*t3397;
  t9411 = t3542*t9184;
  t9412 = -1.000000000016*t109*t9366;
  t9413 = t9409 + t9411 + t9412;
  t9480 = t4439*t5*t1199;
  t9482 = t1219*t9184;
  t9483 = t1259*t9366;
  t9484 = t9480 + t9482 + t9483;
  t9488 = t4439*t5*t1664;
  t9489 = t1768*t9184;
  t9490 = t1793*t9366;
  t9491 = t9488 + t9489 + t9490;
  t9496 = t2057*t4439*t5;
  t9503 = t2062*t9184;
  t9504 = t2099*t9366;
  t9505 = t9496 + t9503 + t9504;
  p_output1[0]=1.;
  p_output1[1]=t1187*t1299 + t1538*t1805 + t2045*t2117 - 0.038924*(t1299*t2169 + t1805*t2209 + t2117*t2254) - 0.80315*(t1299*t2339 + t1805*t2370 + t2117*t2393) + 0.148705*(t1299*t2405 + t1805*t2423 + t2117*t2427) - 1.*t201*t237*t247 + t247*t282*t307 + t426*t439 + t174*t5 + t518*t706;
  p_output1[2]=t2581 + t2696 + t2746 + t2786 + t2797 + t2823 + t2856 + t2905 - 1.*t201*t282*t5 - 1.*t237*t307*t5;
  p_output1[3]=t2581 + t2696 + t2746 + t2786 + t2797 + t2823 + t2856 + t2905 + t201*t2973*t5 - 1.*t2987*t307*t5;
  p_output1[4]=t247*t3064 + t2495*t3167 + t3248*t3257 + t1538*t3284 + t2045*t3341 + t1187*t3573 - 0.038924*(t2209*t3284 + t2254*t3341 + t2169*t3573) - 0.80315*(t2370*t3284 + t2393*t3341 + t2339*t3573) + 0.148705*(t2423*t3284 + t2427*t3341 + t2405*t3573);
  p_output1[5]=t3852*t3887 + t4032*t4091 + t4171*t4190 + 0.148705*(-6.5e-11*t1000*t4091 + t3887*t4199 + t4190*t4222) - 0.80315*(-1.000000000016*t1000*t3887 + t4091*t4276 + t4190*t4328) - 0.038924*(-1.000000000049*t1000*t4190 + t3887*t4358 + t4091*t4381);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t237*t4526 + t282*t4607 + t426*t4687 + t1187*t4913 - 1.*t174*t4439*t5 + t1538*t5025 + t4774*t518 + t2045*t5306 - 0.038924*(t2169*t4913 + t2209*t5025 + t2254*t5306) - 0.80315*(t2339*t4913 + t2370*t5025 + t2393*t5306) + 0.148705*(t2405*t4913 + t2423*t5025 + t2427*t5306);
  p_output1[9]=t174*t247*t4470 + t201*t237*t4470*t5 - 1.*t282*t307*t4470*t5 + t426*t5766 + t518*t5831 + t1187*t5894 + t1538*t5947 + t2045*t5968 - 0.038924*(t2169*t5894 + t2209*t5947 + t2254*t5968) - 0.80315*(t2339*t5894 + t2370*t5947 + t2393*t5968) + 0.148705*(t2405*t5894 + t2423*t5947 + t2427*t5968);
  p_output1[10]=t282*t6225 + t237*t6410 + t518*t6565 + t426*t6619 + t1538*t6802 + t1187*t6921 + t2045*t7185 - 0.038924*(t2209*t6802 + t2169*t6921 + t2254*t7185) - 0.80315*(t2370*t6802 + t2339*t6921 + t2393*t7185) + 0.148705*(t2423*t6802 + t2405*t6921 + t2427*t7185);
  p_output1[11]=t2987*t6410 + t2973*t7299 + t518*t7306 + t426*t7310 + t1538*t7349 + t1187*t7530 + t2045*t7580 - 0.038924*(t2209*t7349 + t2169*t7530 + t2254*t7580) - 0.80315*(t2370*t7349 + t2339*t7530 + t2393*t7580) + 0.148705*(t2423*t7349 + t2405*t7530 + t2427*t7580);
  p_output1[12]=-1.*t3064*t4470*t5 + t3167*t7306 + t3248*t8078 + t1538*t8200 + t2045*t8215 + t1187*t8223 - 0.038924*(t2209*t8200 + t2254*t8215 + t2169*t8223) - 0.80315*(t2370*t8200 + t2393*t8215 + t2339*t8223) + 0.148705*(t2423*t8200 + t2427*t8215 + t2405*t8223);
  p_output1[13]=t3852*t8286 + t4032*t8318 + t4171*t8325 - 0.038924*(t4358*t8286 + t4381*t8318 - 1.000000000049*t1000*t8325) + 0.148705*(t4199*t8286 - 6.5e-11*t1000*t8318 + t4222*t8325) - 0.80315*(-1.000000000016*t1000*t8286 + t4276*t8318 + t4328*t8325);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t174*t4470*t5 + t282*t6410 + t237*t7299 + t426*t7306 + t518*t8078 + t1187*t8286 + t1538*t8318 + t2045*t8325 - 0.038924*(t2169*t8286 + t2209*t8318 + t2254*t8325) - 0.80315*(t2339*t8286 + t2370*t8318 + t2393*t8325) + 0.148705*(t2405*t8286 + t2423*t8318 + t2427*t8325);
  p_output1[17]=-1.*t174*t247*t4439 - 1.*t201*t237*t4439*t5 + t282*t307*t4439*t5 + t426*t8683 + t518*t8689 + t1187*t8702 + t1538*t8722 + t2045*t8741 - 0.038924*(t2169*t8702 + t2209*t8722 + t2254*t8741) - 0.80315*(t2339*t8702 + t2370*t8722 + t2393*t8741) + 0.148705*(t2405*t8702 + t2423*t8722 + t2427*t8741);
  p_output1[18]=t282*t4526 + t237*t8796 + t518*t8806 + t426*t8812 + t1538*t8818 + t1187*t8827 + t2045*t8910 - 0.038924*(t2209*t8818 + t2169*t8827 + t2254*t8910) - 0.80315*(t2370*t8818 + t2339*t8827 + t2393*t8910) + 0.148705*(t2423*t8818 + t2405*t8827 + t2427*t8910);
  p_output1[19]=t2987*t8796 + t2973*t9175 + t518*t9184 + t426*t9188 + t1538*t9195 + t1187*t9230 + t2045*t9272 - 0.038924*(t2209*t9195 + t2169*t9230 + t2254*t9272) - 0.80315*(t2370*t9195 + t2339*t9230 + t2393*t9272) + 0.148705*(t2423*t9195 + t2405*t9230 + t2427*t9272);
  p_output1[20]=t3064*t4439*t5 + t3167*t9184 + t3248*t9366 + t1538*t9386 + t2045*t9402 + t1187*t9413 - 0.038924*(t2209*t9386 + t2254*t9402 + t2169*t9413) - 0.80315*(t2370*t9386 + t2393*t9402 + t2339*t9413) + 0.148705*(t2423*t9386 + t2427*t9402 + t2405*t9413);
  p_output1[21]=t3852*t9484 + t4032*t9491 + t4171*t9505 - 0.038924*(t4358*t9484 + t4381*t9491 - 1.000000000049*t1000*t9505) + 0.148705*(t4199*t9484 - 6.5e-11*t1000*t9491 + t4222*t9505) - 0.80315*(-1.000000000016*t1000*t9484 + t4276*t9491 + t4328*t9505);
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

#include "J_h_RlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void J_h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
