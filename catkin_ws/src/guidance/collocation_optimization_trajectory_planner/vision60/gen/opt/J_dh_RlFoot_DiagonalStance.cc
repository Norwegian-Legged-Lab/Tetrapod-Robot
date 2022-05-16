/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:58 GMT+02:00
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
  double t3801;
  double t3635;
  double t3657;
  double t3850;
  double t3677;
  double t3854;
  double t3857;
  double t3410;
  double t4285;
  double t4306;
  double t4411;
  double t3427;
  double t4423;
  double t4479;
  double t4270;
  double t4433;
  double t4444;
  double t7;
  double t4599;
  double t4624;
  double t4655;
  double t4667;
  double t4674;
  double t4675;
  double t4677;
  double t4678;
  double t4733;
  double t5018;
  double t5038;
  double t5073;
  double t5245;
  double t5249;
  double t5269;
  double t5273;
  double t5282;
  double t5298;
  double t5314;
  double t5389;
  double t5422;
  double t5228;
  double t5270;
  double t5424;
  double t5468;
  double t5197;
  double t5210;
  double t5218;
  double t5220;
  double t5469;
  double t5472;
  double t5477;
  double t5511;
  double t5518;
  double t5562;
  double t5577;
  double t5608;
  double t5609;
  double t5620;
  double t5631;
  double t5728;
  double t5781;
  double t5846;
  double t5904;
  double t5951;
  double t5955;
  double t6202;
  double t6248;
  double t6297;
  double t5132;
  double t5135;
  double t5147;
  double t5163;
  double t5165;
  double t5170;
  double t6034;
  double t6048;
  double t6079;
  double t5990;
  double t6003;
  double t6006;
  double t5124;
  double t5176;
  double t5190;
  double t5474;
  double t5963;
  double t5965;
  double t6554;
  double t6796;
  double t6831;
  double t6865;
  double t7091;
  double t7099;
  double t7936;
  double t7940;
  double t7943;
  double t7119;
  double t7851;
  double t7857;
  double t7858;
  double t7861;
  double t8119;
  double t8133;
  double t8141;
  double t8149;
  double t8280;
  double t8294;
  double t8327;
  double t7386;
  double t7456;
  double t7512;
  double t8338;
  double t8367;
  double t7862;
  double t7875;
  double t7909;
  double t8086;
  double t9497;
  double t9549;
  double t9581;
  double t9665;
  double t9704;
  double t8192;
  double t11327;
  double t11329;
  double t11330;
  double t8087;
  double t8111;
  double t9629;
  double t9713;
  double t10496;
  double t10500;
  double t8232;
  double t8255;
  double t11984;
  double t12026;
  double t12086;
  double t12109;
  double t12110;
  double t12142;
  double t12143;
  double t12147;
  double t12155;
  double t12159;
  double t12165;
  double t12168;
  double t12169;
  double t12175;
  double t12196;
  double t12222;
  double t12243;
  double t9354;
  double t9384;
  double t12349;
  double t12369;
  double t12425;
  double t12585;
  double t12603;
  double t12561;
  double t12562;
  double t12564;
  double t12565;
  double t12554;
  double t12583;
  double t12610;
  double t13054;
  double t13158;
  double t13163;
  double t12784;
  double t12815;
  double t12816;
  double t12820;
  double t13021;
  double t13022;
  double t13586;
  double t13646;
  double t13691;
  double t13164;
  double t13570;
  double t13866;
  double t13942;
  double t13949;
  double t13951;
  double t13957;
  double t13959;
  double t13990;
  double t14153;
  double t14200;
  double t14214;
  double t14987;
  double t14995;
  double t15020;
  double t12618;
  double t15210;
  double t15212;
  double t16997;
  double t17309;
  double t17347;
  double t17353;
  double t17512;
  double t17576;
  double t17646;
  double t17654;
  double t17655;
  double t17660;
  double t15184;
  double t15200;
  double t15151;
  double t17001;
  double t19353;
  double t19359;
  double t19781;
  double t18568;
  double t18614;
  double t19301;
  double t19782;
  double t20086;
  double t20175;
  double t20424;
  double t20432;
  double t20486;
  double t20510;
  double t20522;
  double t20536;
  double t20562;
  double t20590;
  double t20599;
  double t4902;
  double t4930;
  double t4944;
  double t10668;
  double t10683;
  double t10687;
  double t6313;
  double t6317;
  double t6341;
  double t20815;
  double t20859;
  double t7533;
  double t7649;
  double t7657;
  double t20065;
  double t22860;
  double t23103;
  double t23140;
  double t22626;
  double t23207;
  double t23216;
  double t22863;
  double t22864;
  double t22934;
  double t23174;
  double t15152;
  double t15209;
  double t12248;
  double t12249;
  double t12262;
  double t23481;
  double t23497;
  double t23164;
  double t23575;
  double t23602;
  double t23176;
  double t23178;
  double t24253;
  double t24264;
  double t11116;
  double t11145;
  double t11196;
  double t24467;
  double t24488;
  double t12293;
  double t12294;
  double t12297;
  double t23758;
  double t23759;
  double t23762;
  double t23844;
  double t24607;
  double t24608;
  double t24642;
  double t24640;
  double t24604;
  double t24618;
  double t24833;
  double t24856;
  double t24865;
  double t14632;
  double t14846;
  double t14895;
  double t24651;
  double t24652;
  double t24674;
  double t24676;
  double t25325;
  double t25346;
  double t25405;
  double t25430;
  double t25425;
  double t25427;
  double t25222;
  double t25354;
  double t25527;
  double t25616;
  double t17225;
  double t17407;
  double t17436;
  double t25647;
  double t25653;
  double t22357;
  double t22359;
  double t22368;
  double t12774;
  double t12775;
  double t12777;
  double t25845;
  double t25852;
  double t26208;
  double t25646;
  double t26508;
  double t26216;
  double t26217;
  double t26228;
  double t26515;
  double t26517;
  double t26269;
  double t26502;
  double t25318;
  double t26503;
  double t26504;
  double t26563;
  double t26564;
  double t12029;
  double t26572;
  double t26576;
  double t26521;
  double t26738;
  double t26752;
  double t26770;
  double t26774;
  double t26559;
  double t26560;
  double t26804;
  double t26826;
  double t26833;
  double t22188;
  double t22232;
  double t21288;
  double t21291;
  double t21539;
  double t26889;
  double t26891;
  double t26911;
  double t26914;
  double t26917;
  double t12688;
  double t12694;
  double t12770;
  double t26586;
  t3801 = Cos(var1[10]);
  t3635 = Cos(var1[11]);
  t3657 = Sin(var1[10]);
  t3850 = Sin(var1[11]);
  t3677 = t3635*t3657;
  t3854 = -1.*t3801*t3850;
  t3857 = t3677 + t3854;
  t3410 = Cos(var1[5]);
  t4285 = t3801*t3635;
  t4306 = t3657*t3850;
  t4411 = t4285 + t4306;
  t3427 = Sin(var1[9]);
  t4423 = Sin(var1[5]);
  t4479 = Cos(var1[3]);
  t4270 = -1.*t3410*t3427*t3857;
  t4433 = t4411*t4423;
  t4444 = t4270 + t4433;
  t7 = Sin(var1[3]);
  t4599 = Cos(var1[9]);
  t4624 = Cos(var1[4]);
  t4655 = t4599*t4624*t3857;
  t4667 = Sin(var1[4]);
  t4674 = t3410*t4411;
  t4675 = t3427*t3857*t4423;
  t4677 = t4674 + t4675;
  t4678 = -1.*t4667*t4677;
  t4733 = t4655 + t4678;
  t5018 = -1.*t4599*t3857*t4667;
  t5038 = -1.*t4624*t4677;
  t5073 = t5018 + t5038;
  t5245 = -0.0641*t3635;
  t5249 = -0.28*t3850;
  t5269 = t5245 + t5249;
  t5273 = -1.*t3635;
  t5282 = 1. + t5273;
  t5298 = -0.575*t5282;
  t5314 = -0.295*t3635;
  t5389 = -0.0641*t3850;
  t5422 = t5298 + t5314 + t5389;
  t5228 = 0.325*t3657;
  t5270 = t3801*t5269;
  t5424 = t3657*t5422;
  t5468 = t5228 + t5270 + t5424;
  t5197 = t4624*t3427;
  t5210 = t4599*t4667*t4423;
  t5218 = t5197 + t5210;
  t5220 = 0.068*t3427;
  t5469 = t4599*t5468;
  t5472 = t5220 + t5469;
  t5477 = -1.*t3801;
  t5511 = 1. + t5477;
  t5518 = -0.325*t5511;
  t5562 = -1.*t3657*t5269;
  t5577 = t3801*t5422;
  t5608 = t5518 + t5562 + t5577;
  t5609 = t3410*t5608;
  t5620 = -1.*t4599;
  t5631 = 1. + t5620;
  t5728 = 0.1575*t5631;
  t5781 = 0.2255*t4599;
  t5846 = -1.*t3427*t5468;
  t5904 = t5728 + t5781 + t5846;
  t5951 = -1.*t5904*t4423;
  t5955 = t5609 + t5951;
  t6202 = t4624*t5472;
  t6248 = -1.*t4667*t5955;
  t6297 = t6202 + t6248;
  t5132 = -1.*t3635*t3657;
  t5135 = t3801*t3850;
  t5147 = t5132 + t5135;
  t5163 = t3410*t5147;
  t5165 = t3427*t4411*t4423;
  t5170 = t5163 + t5165;
  t6034 = t3427*t4667;
  t6048 = -1.*t4599*t4624*t4423;
  t6079 = t6034 + t6048;
  t5990 = t5472*t4667;
  t6003 = t4624*t5955;
  t6006 = t5990 + t6003;
  t5124 = t4599*t4411*t4667;
  t5176 = t4624*t5170;
  t5190 = t5124 + t5176;
  t5474 = -1.*t5472*t4667;
  t5963 = -1.*t4624*t5955;
  t5965 = t5474 + t5963;
  t6554 = t4599*t4624*t4411;
  t6796 = -1.*t4667*t5170;
  t6831 = t6554 + t6796;
  t6865 = t3410*t5904;
  t7091 = t5608*t4423;
  t7099 = t6865 + t7091;
  t7936 = t3410*t3427*t3857;
  t7940 = -1.*t4411*t4423;
  t7943 = t7936 + t7940;
  t7119 = -1.*t4599*t3410*t7099;
  t7851 = -1.*t3410*t3427*t4411;
  t7857 = t5147*t4423;
  t7858 = t7851 + t7857;
  t7861 = t7099*t7858;
  t8119 = -1.*t3410*t5904;
  t8133 = -1.*t5608*t4423;
  t8141 = t8119 + t8133;
  t8149 = t4599*t4423*t7099;
  t8280 = t3410*t3427*t4411;
  t8294 = -1.*t5147*t4423;
  t8327 = t8280 + t8294;
  t7386 = -1.*t6079*t6006;
  t7456 = -1.*t5218*t6297;
  t7512 = t7119 + t7386 + t7456;
  t8338 = t5955*t7858;
  t8367 = t7099*t5170;
  t7862 = t6006*t5190;
  t7875 = t6297*t6831;
  t7909 = t7861 + t7862 + t7875;
  t8086 = -1.*t3427*t5472;
  t9497 = -0.068*t3427;
  t9549 = -1.*t4599*t5468;
  t9581 = t9497 + t9549;
  t9665 = 0.068*t4599;
  t9704 = t9665 + t5846;
  t8192 = t4599*t5472*t4411;
  t11327 = -1.*t4624*t3427*t3857;
  t11329 = -1.*t4599*t3857*t4667*t4423;
  t11330 = t11327 + t11329;
  t8087 = t4599*t4423*t5955;
  t8111 = t8086 + t8087 + t7119;
  t9629 = -1.*t4599*t5472;
  t9713 = -1.*t3427*t9704;
  t10496 = -1.*t3427*t5472*t4411;
  t10500 = t4599*t9704*t4411;
  t8232 = t5955*t5170;
  t8255 = t8192 + t7861 + t8232;
  t11984 = Power(t3410,2);
  t12026 = -1.*t4599*t11984*t9581;
  t12086 = t3410*t3427*t7099;
  t12109 = -1.*t4599*t3410*t4411*t7099;
  t12110 = t3410*t9581*t7858;
  t12142 = -1.*t3427*t4411*t4667;
  t12143 = t4599*t4624*t4411*t4423;
  t12147 = t12142 + t12143;
  t12155 = t9704*t4667;
  t12159 = -1.*t4624*t9581*t4423;
  t12165 = t12155 + t12159;
  t12168 = t4624*t9704;
  t12169 = t9581*t4667*t4423;
  t12175 = t12168 + t12169;
  t12196 = t4599*t4667;
  t12222 = t4624*t3427*t4423;
  t12243 = t12196 + t12222;
  t9354 = -1.*t4599*t5904;
  t9384 = t8086 + t9354;
  t12349 = -1.*t3801*t3635;
  t12369 = -1.*t3657*t3850;
  t12425 = t12349 + t12369;
  t12585 = 0.325*t3801;
  t12603 = t12585 + t5562 + t5577;
  t12561 = -0.325*t3657;
  t12562 = -1.*t3801*t5269;
  t12564 = -1.*t3657*t5422;
  t12565 = t12561 + t12562 + t12564;
  t12554 = t4599*t5472*t5147;
  t12583 = Power(t4599,2);
  t12610 = t12583*t12603*t4411;
  t13054 = -1.*t3410*t3427*t12603;
  t13158 = t12565*t4423;
  t13163 = t13054 + t13158;
  t12784 = -1.*t3410*t3427*t5147;
  t12815 = t12425*t4423;
  t12816 = t12784 + t12815;
  t12820 = t3410*t12565;
  t13021 = t3427*t12603*t4423;
  t13022 = t12820 + t13021;
  t13586 = t3410*t12425;
  t13646 = t3427*t5147*t4423;
  t13691 = t13586 + t13646;
  t13164 = -1.*t4599*t3410*t13163;
  t13570 = t13163*t7858;
  t13866 = t7099*t12816;
  t13942 = t4599*t5147*t4667;
  t13949 = t4624*t13691;
  t13951 = t13942 + t13949;
  t13957 = t4599*t12603*t4667;
  t13959 = t4624*t13022;
  t13990 = t13957 + t13959;
  t14153 = t4599*t4624*t12603;
  t14200 = -1.*t4667*t13022;
  t14214 = t14153 + t14200;
  t14987 = -0.28*t3635;
  t14995 = 0.0641*t3850;
  t15020 = t14987 + t14995;
  t12618 = Power(t3427,2);
  t15210 = t3657*t5269;
  t15212 = t3801*t15020;
  t16997 = t15210 + t15212;
  t17309 = t3410*t3857;
  t17347 = t3427*t12425*t4423;
  t17353 = t17309 + t17347;
  t17512 = -1.*t3410*t3427*t12425;
  t17576 = t3857*t4423;
  t17646 = t17512 + t17576;
  t17654 = t4599*t4624*t12425;
  t17655 = -1.*t4667*t17353;
  t17660 = t17654 + t17655;
  t15184 = -1.*t3657*t15020;
  t15200 = t5270 + t15184;
  t15151 = t4599*t5472*t3857;
  t17001 = t12583*t16997*t4411;
  t19353 = -1.*t3410*t3427*t16997;
  t19359 = t15200*t4423;
  t19781 = t19353 + t19359;
  t18568 = t3410*t15200;
  t18614 = t3427*t16997*t4423;
  t19301 = t18568 + t18614;
  t19782 = -1.*t4599*t3410*t19781;
  t20086 = t19781*t7858;
  t20175 = t7099*t4444;
  t20424 = t4599*t3857*t4667;
  t20432 = t4624*t4677;
  t20486 = t20424 + t20432;
  t20510 = t4599*t16997*t4667;
  t20522 = t4624*t19301;
  t20536 = t20510 + t20522;
  t20562 = t4599*t4624*t16997;
  t20590 = -1.*t4667*t19301;
  t20599 = t20562 + t20590;
  t4902 = t4479*t4444;
  t4930 = -1.*t7*t4733;
  t4944 = t4902 + t4930;
  t10668 = t5608*t5147;
  t10683 = -1.*t3427*t5904*t4411;
  t10687 = t10668 + t8192 + t10683;
  t6313 = -1.*t3427*t4667;
  t6317 = t4599*t4624*t4423;
  t6341 = t6313 + t6317;
  t20815 = t6006*t20486;
  t20859 = t6297*t4733;
  t7533 = -1.*t4599*t4411*t4667;
  t7649 = -1.*t4624*t5170;
  t7657 = t7533 + t7649;
  t20065 = t5955*t4677;
  t22860 = -1.*t7099*t7858;
  t23103 = t7099*t4677;
  t23140 = t5955*t4444;
  t22626 = t20175 + t20815 + t20859;
  t23207 = -1.*t5955*t7858;
  t23216 = -1.*t7099*t5170;
  t22863 = -1.*t6006*t5190;
  t22864 = -1.*t6297*t6831;
  t22934 = t22860 + t22863 + t22864;
  t23174 = -1.*t4599*t5472*t4411;
  t15152 = -1.*t3427*t5904*t3857;
  t15209 = t5608*t4411;
  t12248 = t4599*t4624;
  t12249 = -1.*t3427*t4667*t4423;
  t12262 = t12248 + t12249;
  t23481 = -1.*t3427*t5472*t3857;
  t23497 = t4599*t9704*t3857;
  t23164 = t15151 + t20065 + t20175;
  t23575 = t3427*t5472*t4411;
  t23602 = -1.*t4599*t9704*t4411;
  t23176 = -1.*t5955*t5170;
  t23178 = t23174 + t22860 + t23176;
  t24253 = -1.*t4599*t3410*t3857*t7099;
  t24264 = t3410*t9581*t4444;
  t11116 = -1.*t3427*t3857*t4667;
  t11145 = t4599*t4624*t3857*t4423;
  t11196 = t11116 + t11145;
  t24467 = t4599*t3410*t4411*t7099;
  t24488 = -1.*t3410*t9581*t7858;
  t12293 = -1.*t4624*t3427*t4411;
  t12294 = -1.*t4599*t4411*t4667*t4423;
  t12297 = t12293 + t12294;
  t23758 = -1.*t5608*t5147;
  t23759 = t3427*t5904*t4411;
  t23762 = t23758 + t23174 + t23759;
  t23844 = t15151 + t15152 + t15209;
  t24607 = -1.*t12565*t5147;
  t24608 = -1.*t5608*t12425;
  t24642 = t12565*t4411;
  t24640 = t12583*t12603*t3857;
  t24604 = -1.*t4599*t5472*t5147;
  t24618 = -1.*t12583*t12603*t4411;
  t24833 = t13163*t4444;
  t24856 = -1.*t13163*t7858;
  t24865 = -1.*t7099*t12816;
  t14632 = t4599*t4624*t5147;
  t14846 = -1.*t4667*t13691;
  t14895 = t14632 + t14846;
  t24651 = t5468*t3857;
  t24652 = t24651 + t15209;
  t24674 = -1.*t5468*t4411;
  t24676 = t23758 + t24674;
  t25325 = -1.*t15200*t5147;
  t25346 = -1.*t5608*t4411;
  t25405 = t5608*t3857;
  t25430 = t15200*t4411;
  t25425 = t12583*t16997*t3857;
  t25427 = t4599*t5472*t12425;
  t25222 = -1.*t4599*t5472*t3857;
  t25354 = -1.*t12583*t16997*t4411;
  t25527 = t7099*t17646;
  t25616 = t19781*t4444;
  t17225 = t4599*t12425*t4667;
  t17407 = t4624*t17353;
  t17436 = t17225 + t17407;
  t25647 = -1.*t19781*t7858;
  t25653 = -1.*t7099*t4444;
  t22357 = t4599*t4479*t3410;
  t22359 = -1.*t7*t5218;
  t22368 = t22357 + t22359;
  t12774 = t4479*t7858;
  t12775 = -1.*t7*t6831;
  t12777 = t12774 + t12775;
  t25845 = -1.*t6006*t20486;
  t25852 = -1.*t6297*t4733;
  t26208 = t4599*t3410*t7099;
  t25646 = -1.*t5955*t4677;
  t26508 = -1.*t4599*t4423*t7099;
  t26216 = t6079*t6006;
  t26217 = t5218*t6297;
  t26228 = t26208 + t26216 + t26217;
  t26515 = -1.*t7099*t4677;
  t26517 = -1.*t5955*t4444;
  t26269 = t25653 + t25845 + t25852;
  t26502 = t3427*t5472;
  t25318 = t3427*t5904*t3857;
  t26503 = -1.*t4599*t4423*t5955;
  t26504 = t26502 + t26503 + t26208;
  t26563 = t4599*t5472;
  t26564 = t3427*t9704;
  t12029 = Power(t4423,2);
  t26572 = t3427*t5472*t3857;
  t26576 = -1.*t4599*t9704*t3857;
  t26521 = t25222 + t25646 + t25653;
  t26738 = t4599*t11984*t9581;
  t26752 = -1.*t3410*t3427*t7099;
  t26770 = t4599*t3410*t3857*t7099;
  t26774 = -1.*t3410*t9581*t4444;
  t26559 = t4599*t5904;
  t26560 = t26502 + t26559;
  t26804 = -1.*t12583*t12603*t3857;
  t26826 = t4599*t3410*t13163;
  t26833 = -1.*t13163*t4444;
  t22188 = -0.325*t3850;
  t22232 = -1.*t5422*t3850;
  t21288 = t7*t4444;
  t21291 = t4479*t4733;
  t21539 = t21288 + t21291;
  t26889 = -1.*t12583*t16997*t3857;
  t26891 = -1.*t4599*t5472*t12425;
  t26911 = t4599*t3410*t19781;
  t26914 = -1.*t7099*t17646;
  t26917 = -1.*t19781*t4444;
  t12688 = t7*t7858;
  t12694 = t4479*t6831;
  t12770 = t12688 + t12694;
  t26586 = t25222 + t25318 + t25346;
  p_output1[0]=(-1.*t4479*t4733 - 1.*t4444*t7)*var2[1] + t4944*var2[2];
  p_output1[1]=t4733*var2[0] - 1.*t5073*t7*var2[1] + t4479*t5073*var2[2] + (t5190*(-1.*t5218*t5965 - 1.*t5218*t6006 - 1.*t6079*t6297 - 1.*t6297*t6341) + t6831*t7512 + t6079*(t5190*t6297 + t5965*t6831 + t6006*t6831 + t6297*t7657) + t5218*t7909)*var2[3];
  p_output1[2]=t4624*t7943*var2[0] + (t4479*t4677 + t4667*t7*t7943)*var2[1] + (t4677*t7 - 1.*t4479*t4667*t7943)*var2[2] + (-1.*t3410*t4599*t4624*t7909 + t5190*(-1.*t3410*t4599*t5955 + t3410*t4599*t4624*t6006 - 1.*t3410*t4599*t4667*t6297 + t4667*t5218*t8141 - 1.*t4624*t6079*t8141 + t8149) + t4624*t7512*t8327 + t6079*(t4624*t5190*t8141 - 1.*t4667*t6831*t8141 + t4624*t6006*t8327 - 1.*t4667*t6297*t8327 + t8338 + t8367))*var2[3] + (t5170*t8111 + t7858*(t4423*t4599*t8141 + t8149) - 1.*t4423*t4599*t8255 + t3410*t4599*(t5170*t8141 + t5955*t8327 + t8338 + t8367))*var2[4];
  p_output1[3]=t11196*var2[0] + (-1.*t3410*t3857*t4479*t4599 - 1.*t11330*t7)*var2[1] + (t11330*t4479 - 1.*t3410*t3857*t4599*t7)*var2[2] + (t5190*(t12026 + t12086 - 1.*t12175*t5218 - 1.*t12243*t6006 - 1.*t12165*t6079 - 1.*t12262*t6297) + t6079*(t12109 + t12110 + t12165*t5190 + t12147*t6006 + t12297*t6297 + t12175*t6831) + t12147*t7512 + t12243*t7909)*var2[3] + (-1.*t3410*t4411*t4599*t8111 - 1.*t3410*t3427*t8255 + t3410*t4599*(t10496 + t10500 + t12109 + t12110 + t4411*t4423*t4599*t5955 - 1.*t4423*t5170*t9581) + t7858*(t12026 + t12086 - 1.*t3427*t4423*t5955 - 1.*t12029*t4599*t9581 + t9629 + t9713))*var2[4] + (t10687*t4599 - 1.*t3427*t4411*t9384 + t3427*(t10496 + t10500 - 1.*t4411*t4599*t5904 - 1.*t3427*t4411*t9581) + t4411*t4599*(t3427*t5904 - 1.*t4599*t9581 + t9629 + t9713))*var2[5];
  p_output1[4]=t5190*var2[0] + t12777*var2[1] + t12770*var2[2] + (t5190*(t13164 - 1.*t14214*t5218 - 1.*t13990*t6079) + t6079*(t13570 + t13866 + t13990*t5190 + t13951*t6006 + t14895*t6297 + t14214*t6831) + t13951*t7512)*var2[3] + (t3410*t4599*(t12554 + t12610 + t13570 + t13866 + t13022*t5170 + t13691*t5955) + (t13164 - 1.*t12603*t3427*t4599 + t13022*t4423*t4599)*t7858 + t12816*t8111)*var2[4] + (t3427*(t12554 + t12610 + t12603*t12618*t4411 + t12565*t5147 + t12425*t5608 - 1.*t3427*t5147*t5904) + t4599*t5147*t9384)*var2[5] + (-0.2255*t12425 - 0.1575*t4411)*var2[9];
  p_output1[5]=t17436*var2[0] + (t17646*t4479 - 1.*t17660*t7)*var2[1] + (t17660*t4479 + t17646*t7)*var2[2] + (t5190*(t19782 - 1.*t20599*t5218 - 1.*t20536*t6079) + t6079*(t20086 + t20175 + t20815 + t20859 + t20536*t5190 + t20599*t6831) + t20486*t7512)*var2[3] + (t3410*t4599*(t15151 + t17001 + t20065 + t20086 + t20175 + t19301*t5170) + (t19782 - 1.*t16997*t3427*t4599 + t19301*t4423*t4599)*t7858 + t4444*t8111)*var2[4] + (t3427*(t15151 + t15152 + t15209 + t17001 + t12618*t16997*t4411 + t15200*t5147) + t3857*t4599*t9384)*var2[5] + (-0.1575*t12425 - 0.2255*t4411)*var2[9] + (-0.325*t3635 - 1.*t15020*t3635 - 1.*t3635*t5422)*var2[10];
  p_output1[6]=t20486;
  p_output1[7]=t4944;
  p_output1[8]=t21539;
  p_output1[9]=t5190*t7512 + t6079*t7909;
  p_output1[10]=t7858*t8111 + t3410*t4599*t8255;
  p_output1[11]=t10687*t3427 + t4411*t4599*t9384;
  p_output1[12]=-0.1575*t3857 - 0.2255*t5147;
  p_output1[13]=t22188 + t22232 - 1.*t3635*t5269;
  p_output1[14]=-0.0641;
  p_output1[15]=(-1.*t4479*t5218 - 1.*t3410*t4599*t7)*var2[1] + t22368*var2[2];
  p_output1[16]=t5218*var2[0] - 1.*t6341*t7*var2[1] + t4479*t6341*var2[2] + (t22934*t4733 + t5190*(t4733*t5965 + t4733*t6006 + t20486*t6297 + t5073*t6297) + t22626*t6831 + t20486*(-1.*t5190*t6297 - 1.*t5965*t6831 - 1.*t6006*t6831 - 1.*t6297*t7657))*var2[3];
  p_output1[17]=-1.*t3410*t4599*t4624*var2[0] + (-1.*t4423*t4479*t4599 - 1.*t3410*t4599*t4667*t7)*var2[1] + (t3410*t4479*t4599*t4667 - 1.*t4423*t4599*t7)*var2[2] + (t22934*t4624*t7943 + t5190*(t23103 + t23140 + t4624*t6006*t7943 - 1.*t4667*t6297*t7943 + t20486*t4624*t8141 - 1.*t4667*t4733*t8141) + t22626*t4624*t8327 + t20486*(t23207 + t23216 - 1.*t4624*t5190*t8141 + t4667*t6831*t8141 - 1.*t4624*t6006*t8327 + t4667*t6297*t8327))*var2[3] + (t23178*t4677 + t23164*t5170 + t7858*(t23103 + t23140 + t5955*t7943 + t4677*t8141) + t4444*(t23207 + t23216 - 1.*t5170*t8141 - 1.*t5955*t8327))*var2[4];
  p_output1[18]=t12243*var2[0] + (-1.*t3410*t3427*t4479 - 1.*t12262*t7)*var2[1] + (t12262*t4479 - 1.*t3410*t3427*t7)*var2[2] + (t12147*t22626 + t11196*t22934 + t5190*(t12165*t20486 + t24253 + t24264 + t12175*t4733 + t11196*t6006 + t11330*t6297) + t20486*(t24467 + t24488 - 1.*t12165*t5190 - 1.*t12147*t6006 - 1.*t12297*t6297 - 1.*t12175*t6831))*var2[3] + (-1.*t23178*t3410*t3857*t4599 - 1.*t23164*t3410*t4411*t4599 + t7858*(t23481 + t23497 + t24253 + t24264 + t3857*t4423*t4599*t5955 - 1.*t4423*t4677*t9581) + t4444*(t23575 + t23602 + t24467 + t24488 - 1.*t4411*t4423*t4599*t5955 + t4423*t5170*t9581))*var2[4] + (-1.*t23762*t3427*t3857 - 1.*t23844*t3427*t4411 + t4411*t4599*(t23481 + t23497 - 1.*t3857*t4599*t5904 - 1.*t3427*t3857*t9581) + t3857*t4599*(t23575 + t23602 + t4411*t4599*t5904 + t3427*t4411*t9581))*var2[5];
  p_output1[19]=(t13951*t22626 + t22934*t5190 + t20486*(t24856 + t24865 - 1.*t13990*t5190 - 1.*t13951*t6006 - 1.*t14895*t6297 - 1.*t14214*t6831) + t5190*(t13990*t20486 + t24833 + t14214*t4733 + t7861 + t7862 + t7875))*var2[3] + (t12816*t23164 + t4444*(t24604 + t24618 + t24856 + t24865 - 1.*t13022*t5170 - 1.*t13691*t5955) + t23178*t7858 + t7858*(t24640 + t24833 + t13022*t4677 + t7861 + t8192 + t8232))*var2[4] + (t23762*t4411*t4599 + t23844*t4599*t5147 + t3857*t4599*(t24604 + t24607 + t24608 + t24618 - 1.*t12603*t12618*t4411 + t3427*t5147*t5904) + t4411*t4599*(t10668 + t10683 + t24640 + t24642 + t12603*t12618*t3857 + t8192))*var2[5] + (t12425*t24652 + t24676*t5147 + t5147*(t10668 + t24642 + t12603*t3857 + t4411*t5468) + t4411*(t24607 + t24608 - 1.*t12603*t4411 - 1.*t5147*t5468))*var2[9];
  p_output1[20]=(t20486*t22626 + t17436*t22934 + t5190*(t20486*t20536 + t25527 + t25616 + t20599*t4733 + t17436*t6006 + t17660*t6297) + t20486*(t25647 + t25653 + t25845 + t25852 - 1.*t20536*t5190 - 1.*t20599*t6831))*var2[3] + (t17646*t23178 + t23164*t4444 + t4444*(t25222 + t25354 + t25646 + t25647 + t25653 - 1.*t19301*t5170) + (t25425 + t25427 + t25527 + t25616 + t19301*t4677 + t17353*t5955)*t7858)*var2[4] + (t12425*t23762*t4599 + t23844*t3857*t4599 + t3857*(t25222 + t25318 + t25325 + t25346 + t25354 - 1.*t12618*t16997*t4411)*t4599 + t4411*t4599*(t25405 + t25425 + t25427 + t25430 + t12618*t16997*t3857 - 1.*t12425*t3427*t5904))*var2[5] + (t24676*t3857 + t24652*t4411 + t5147*(t25405 + t25430 + t16997*t3857 + t12425*t5468) + t4411*(t25325 + t25346 - 1.*t16997*t4411 - 1.*t3857*t5468))*var2[9];
  p_output1[21]=t6079;
  p_output1[22]=t22368;
  p_output1[23]=t4479*t5218 + t3410*t4599*t7;
  p_output1[24]=t20486*t22934 + t22626*t5190;
  p_output1[25]=t23178*t4444 + t23164*t7858;
  p_output1[26]=t23762*t3857*t4599 + t23844*t4411*t4599;
  p_output1[27]=t24676*t4411 + t24652*t5147;
  p_output1[28]=(-1.*t4479*t6831 - 1.*t7*t7858)*var2[1] + t12777*var2[2];
  p_output1[29]=t6831*var2[0] - 1.*t7*t7657*var2[1] + t4479*t7657*var2[2] + (t26228*t4733 + t26269*t5218 + t6079*(-1.*t4733*t5965 - 1.*t4733*t6006 - 1.*t20486*t6297 - 1.*t5073*t6297) + t20486*(t5218*t5965 + t5218*t6006 + t6079*t6297 + t6297*t6341))*var2[3];
  p_output1[30]=t4624*t8327*var2[0] + (t4479*t5170 + t4667*t7*t8327)*var2[1] + (t5170*t7 - 1.*t4479*t4667*t8327)*var2[2] + (-1.*t26269*t3410*t4599*t4624 + t26228*t4624*t7943 + t6079*(t26515 + t26517 - 1.*t4624*t6006*t7943 + t4667*t6297*t7943 - 1.*t20486*t4624*t8141 + t4667*t4733*t8141) + t20486*(t26508 + t3410*t4599*t5955 - 1.*t3410*t4599*t4624*t6006 + t3410*t4599*t4667*t6297 - 1.*t4667*t5218*t8141 + t4624*t6079*t8141))*var2[3] + (-1.*t26521*t4423*t4599 + t26504*t4677 + t4444*(t26508 - 1.*t4423*t4599*t8141) + t3410*t4599*(t26515 + t26517 - 1.*t5955*t7943 - 1.*t4677*t8141))*var2[4];
  p_output1[31]=t12147*var2[0] + (-1.*t3410*t4411*t4479*t4599 - 1.*t12297*t7)*var2[1] + (t12297*t4479 - 1.*t3410*t4411*t4599*t7)*var2[2] + (t11196*t26228 + t12243*t26269 + t6079*(-1.*t12165*t20486 + t26770 + t26774 - 1.*t12175*t4733 - 1.*t11196*t6006 - 1.*t11330*t6297) + t20486*(t26738 + t26752 + t12175*t5218 + t12243*t6006 + t12165*t6079 + t12262*t6297))*var2[3] + (-1.*t26521*t3410*t3427 - 1.*t26504*t3410*t3857*t4599 + t4444*(t26563 + t26564 + t26738 + t26752 + t3427*t4423*t5955 + t12029*t4599*t9581) + t3410*t4599*(t26572 + t26576 + t26770 + t26774 - 1.*t3857*t4423*t4599*t5955 + t4423*t4677*t9581))*var2[4] + (-1.*t26560*t3427*t3857 + t26586*t4599 + t3427*(t26572 + t26576 + t3857*t4599*t5904 + t3427*t3857*t9581) + t3857*t4599*(t26563 + t26564 - 1.*t3427*t5904 + t4599*t9581))*var2[5];
  p_output1[32]=t13951*var2[0] + (t12816*t4479 - 1.*t14895*t7)*var2[1] + (t14895*t4479 + t12816*t7)*var2[2] + (t26228*t5190 + (-1.*t13990*t20486 + t22860 + t22863 + t22864 + t26833 - 1.*t14214*t4733)*t6079 + t20486*(t26826 + t14214*t5218 + t13990*t6079))*var2[3] + (t4444*(t26826 + t12603*t3427*t4599 - 1.*t13022*t4423*t4599) + t3410*t4599*(t22860 + t23174 + t23176 + t26804 + t26833 - 1.*t13022*t4677) + t26504*t7858)*var2[4] + (t3427*(t23174 + t23758 + t23759 + t26804 - 1.*t12603*t12618*t3857 - 1.*t12565*t4411) + t26560*t4411*t4599)*var2[5] + 0.068*t5147*var2[9];
  p_output1[33]=t20486*var2[0] + t4944*var2[1] + t21539*var2[2] + (t17436*t26228 + t20486*(t26911 + t20599*t5218 + t20536*t6079) + t6079*(-1.*t20486*t20536 + t26914 + t26917 - 1.*t20599*t4733 - 1.*t17436*t6006 - 1.*t17660*t6297))*var2[3] + (t17646*t26504 + t4444*(t26911 + t16997*t3427*t4599 - 1.*t19301*t4423*t4599) + t3410*t4599*(t26889 + t26891 + t26914 + t26917 - 1.*t19301*t4677 - 1.*t17353*t5955))*var2[4] + (t12425*t26560*t4599 + t3427*(t26889 + t26891 - 1.*t12618*t16997*t3857 - 1.*t15200*t4411 - 1.*t3857*t5608 + t12425*t3427*t5904))*var2[5] + 0.068*t3857*var2[9] + (t22188 + t22232 - 1.*t15020*t3850)*var2[10];
  p_output1[34]=t5190;
  p_output1[35]=t12777;
  p_output1[36]=t12770;
  p_output1[37]=t20486*t26228 + t26269*t6079;
  p_output1[38]=t26504*t4444 + t26521*t3410*t4599;
  p_output1[39]=t26586*t3427 + t26560*t3857*t4599;
  p_output1[40]=0.068*t4411;
  p_output1[41]=0.325*t3635 - 1.*t3850*t5269 + t3635*t5422;
  p_output1[42]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 43, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
