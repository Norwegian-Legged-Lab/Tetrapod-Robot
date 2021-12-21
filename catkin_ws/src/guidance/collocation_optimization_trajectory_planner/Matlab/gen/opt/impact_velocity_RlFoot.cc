/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:58 GMT+01:00
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
  double t6;
  double t8;
  double t112;
  double t422;
  double t39;
  double t376;
  double t539;
  double t438;
  double t469;
  double t554;
  double t780;
  double t785;
  double t824;
  double t861;
  double t343;
  double t305;
  double t489;
  double t568;
  double t600;
  double t375;
  double t733;
  double t737;
  double t747;
  double t847;
  double t101;
  double t945;
  double t1104;
  double t894;
  double t610;
  double t1202;
  double t646;
  double t977;
  double t1287;
  double t952;
  double t956;
  double t965;
  double t980;
  double t1026;
  double t1036;
  double t1260;
  double t1166;
  double t1175;
  double t1190;
  double t1203;
  double t1226;
  double t1234;
  double t1306;
  double t1311;
  double t1316;
  double t1323;
  double t1325;
  double t1335;
  double t866;
  double t1341;
  double t909;
  double t1515;
  double t1521;
  double t1084;
  double t1361;
  double t1941;
  double t2014;
  double t1770;
  double t2144;
  double t2148;
  double t1948;
  double t2108;
  double t1958;
  double t1988;
  double t1998;
  double t2025;
  double t2031;
  double t2032;
  double t2044;
  double t2049;
  double t2056;
  double t2160;
  double t2164;
  double t2174;
  double t2179;
  double t2189;
  double t2203;
  double t2219;
  double t2227;
  double t2094;
  double t2287;
  double t2296;
  double t2297;
  double t2298;
  double t2299;
  double t2319;
  double t2328;
  double t2330;
  double t1812;
  double t2487;
  double t2243;
  double t2648;
  double t2649;
  double t2661;
  double t2757;
  double t766;
  double t838;
  double t871;
  double t888;
  double t911;
  double t928;
  double t941;
  double t2852;
  double t2867;
  double t2881;
  double t1243;
  double t1254;
  double t1271;
  double t1285;
  double t1290;
  double t1292;
  double t1300;
  double t1055;
  double t1083;
  double t1089;
  double t1097;
  double t1114;
  double t1161;
  double t1164;
  double t1609;
  double t2907;
  double t2918;
  double t2924;
  double t1697;
  double t2938;
  double t2962;
  double t2981;
  double t1634;
  double t1652;
  double t3010;
  double t3012;
  double t3022;
  double t1342;
  double t1400;
  double t1420;
  double t1385;
  double t1455;
  double t1459;
  double t1548;
  double t1522;
  double t3173;
  double t2698;
  double t2699;
  double t2726;
  double t2733;
  double t2740;
  double t2758;
  double t2770;
  double t2777;
  double t2783;
  double t2791;
  double t2794;
  double t2800;
  double t2821;
  double t2828;
  double t2836;
  double t2837;
  double t2839;
  double t2898;
  double t2934;
  double t2987;
  double t3030;
  double t3045;
  double t3048;
  double t3052;
  double t3062;
  double t3065;
  double t3067;
  double t3068;
  double t3070;
  double t3091;
  double t3093;
  double t3099;
  double t3105;
  double t3109;
  double t3135;
  double t3146;
  double t2689;
  double t2692;
  double t2660;
  double t2683;
  double t3299;
  double t3300;
  double t3303;
  double t3337;
  double t3343;
  double t3361;
  double t3379;
  double t3381;
  double t3389;
  double t3390;
  double t3400;
  double t3405;
  double t3421;
  double t3422;
  double t3426;
  double t3429;
  double t3435;
  double t3446;
  double t3212;
  double t3224;
  double t3230;
  double t3235;
  double t3251;
  double t3260;
  double t3267;
  double t3575;
  double t3592;
  double t3593;
  double t3601;
  double t3612;
  double t3613;
  double t3625;
  double t3665;
  double t3671;
  double t3679;
  double t3686;
  double t3691;
  double t3696;
  double t3701;
  double t3712;
  double t3717;
  double t3718;
  double t3727;
  double t3729;
  double t3841;
  double t3863;
  double t3870;
  double t3884;
  double t3893;
  double t3897;
  double t3899;
  double t3905;
  double t3910;
  double t3913;
  double t3929;
  double t3947;
  double t3954;
  double t3958;
  double t3959;
  double t3964;
  double t3967;
  double t3980;
  double t3984;
  double t3989;
  double t3994;
  double t4005;
  double t4006;
  double t4016;
  double t4017;
  double t4125;
  double t4136;
  double t4142;
  double t4149;
  double t4151;
  double t4162;
  double t4185;
  double t4186;
  double t4192;
  double t4247;
  double t4249;
  double t4250;
  double t4272;
  double t4276;
  double t4287;
  double t4292;
  double t4293;
  double t4301;
  double t4308;
  double t4315;
  double t4316;
  double t3183;
  double t3195;
  double t3200;
  double t4427;
  double t4428;
  double t4429;
  double t4437;
  double t4438;
  double t4456;
  double t4458;
  double t4465;
  double t4468;
  double t4469;
  double t4471;
  double t4479;
  double t4490;
  double t4501;
  double t4510;
  double t4519;
  double t40;
  double t77;
  double t134;
  double t164;
  double t204;
  double t295;
  double t370;
  double t374;
  double t380;
  double t394;
  double t409;
  double t421;
  double t618;
  double t628;
  double t682;
  double t714;
  double t722;
  double t726;
  double t4633;
  double t4638;
  double t4639;
  double t4646;
  double t4648;
  double t4650;
  double t4656;
  double t4671;
  double t4672;
  double t4675;
  double t4678;
  double t4685;
  double t4688;
  double t4689;
  double t4693;
  double t1790;
  double t1794;
  double t1838;
  double t1844;
  double t1863;
  double t1897;
  double t2101;
  double t2107;
  double t2109;
  double t2116;
  double t2129;
  double t2138;
  double t2230;
  double t2242;
  double t2249;
  double t2262;
  double t2267;
  double t2277;
  double t2341;
  double t4787;
  double t4791;
  double t4810;
  double t4813;
  double t4819;
  double t4821;
  double t4825;
  double t4830;
  double t2353;
  double t4833;
  double t4845;
  double t4859;
  double t4868;
  double t2428;
  double t2492;
  double t2515;
  double t2522;
  double t4923;
  double t4925;
  double t4927;
  double t4929;
  double t4930;
  double t4931;
  double t4934;
  double t4935;
  double t4936;
  double t4939;
  double t4941;
  double t4942;
  double t4946;
  double t4949;
  double t4953;
  double t4957;
  double t4960;
  double t4961;
  double t5081;
  double t5083;
  double t5091;
  double t5103;
  double t5105;
  double t5107;
  double t5115;
  double t5117;
  double t5134;
  double t5141;
  double t5143;
  double t5151;
  double t5156;
  double t5158;
  double t5167;
  double t5169;
  double t5174;
  double t5262;
  double t5263;
  double t5266;
  double t5286;
  double t5289;
  double t5302;
  double t5304;
  double t5307;
  double t5311;
  double t5314;
  double t5340;
  double t5342;
  double t5344;
  double t5355;
  double t5356;
  double t5358;
  double t5451;
  double t5452;
  double t5460;
  double t5468;
  double t5493;
  double t5495;
  double t5496;
  double t5504;
  double t5505;
  double t5507;
  double t5509;
  double t5512;
  double t5513;
  double t5516;
  double t5517;
  double t5567;
  double t5570;
  double t5572;
  double t5575;
  double t5589;
  double t5591;
  double t5592;
  double t5593;
  double t5597;
  double t5607;
  double t5609;
  double t5615;
  t6 = Cos(var1[13]);
  t8 = Sin(var1[13]);
  t112 = 4.e-6*t8;
  t422 = Cos(var1[4]);
  t39 = -2.8e-11*t8;
  t376 = 7.e-6*t8;
  t539 = Cos(var1[12]);
  t438 = Cos(var1[5]);
  t469 = Sin(var1[12]);
  t554 = Sin(var1[5]);
  t780 = Cos(var1[14]);
  t785 = -1.*t780;
  t824 = 1. + t785;
  t861 = Sin(var1[14]);
  t343 = -7.e-6*t6;
  t305 = Sin(var1[4]);
  t489 = -1.*t422*t438*t469;
  t568 = -1.*t539*t422*t554;
  t600 = t489 + t568;
  t375 = 4.e-6*t6;
  t733 = t539*t422*t438;
  t737 = -1.*t422*t469*t554;
  t747 = t733 + t737;
  t847 = 4.e-6*t824;
  t101 = 7.e-6*t6;
  t945 = -4.e-6*t8;
  t1104 = -2.8e-11*t824;
  t894 = 7.e-6*t824;
  t610 = -1.*t6;
  t1202 = 2.8e-11*t8;
  t646 = -4.e-6*t6;
  t977 = -7.e-6*t8;
  t1287 = -4.e-6*t861;
  t952 = t343 + t945;
  t956 = t952*t305;
  t965 = -6.5e-11*t8*t600;
  t980 = t375 + t977;
  t1026 = t980*t747;
  t1036 = t956 + t965 + t1026;
  t1260 = -1.*t861;
  t1166 = -1.000000000049*t8*t305;
  t1175 = t101 + t945;
  t1190 = t1175*t600;
  t1203 = t6 + t1202;
  t1226 = t1203*t747;
  t1234 = t1166 + t1190 + t1226;
  t1306 = t610 + t1202;
  t1311 = t1306*t305;
  t1316 = t646 + t977;
  t1323 = t1316*t600;
  t1325 = -1.000000000016*t8*t747;
  t1335 = t1311 + t1323 + t1325;
  t866 = -7.e-6*t861;
  t1341 = -7.e-6*t824;
  t909 = 4.e-6*t861;
  t1515 = -1. + t780;
  t1521 = 4.e-6*t1515;
  t1084 = 7.e-6*t861;
  t1361 = 2.8e-11*t824;
  t1941 = 1. + t610;
  t2014 = -7.e-6*t1941;
  t1770 = -2.8e-11*t861;
  t2144 = -1. + t6;
  t2148 = 4.e-6*t2144;
  t1948 = 2.8e-11*t1941;
  t2108 = 4.e-6*t780;
  t1958 = -1.*t8;
  t1988 = t1948 + t1958;
  t1998 = t1988*t305;
  t2025 = t2014 + t945;
  t2031 = t2025*t600;
  t2032 = -1.000000000016*t1941;
  t2044 = 1. + t2032;
  t2049 = t2044*t747;
  t2056 = t1998 + t2031 + t2049;
  t2160 = t2148 + t977;
  t2164 = t2160*t305;
  t2174 = -6.5e-11*t1941;
  t2179 = 1. + t2174;
  t2189 = t2179*t600;
  t2203 = t2014 + t112;
  t2219 = t2203*t747;
  t2227 = t2164 + t2189 + t2219;
  t2094 = -7.e-6*t780;
  t2287 = -1.000000000049*t1941;
  t2296 = 1. + t2287;
  t2297 = t2296*t305;
  t2298 = t2148 + t376;
  t2299 = t2298*t600;
  t2319 = t1948 + t8;
  t2328 = t2319*t747;
  t2330 = t2297 + t2299 + t2328;
  t1812 = -4.e-6*t780;
  t2487 = 2.8e-11*t861;
  t2243 = 7.e-6*t780;
  t2648 = -1.*t539;
  t2649 = 1. + t2648;
  t2661 = 0.15121*t469;
  t2757 = 7.e-6*t1941;
  t766 = -2.598649999999999e-7*var1[14];
  t838 = -2.3905277499999995e-16*t824;
  t871 = t847 + t866;
  t888 = -0.038922999986*t871;
  t911 = t894 + t909;
  t928 = -0.503149000008*t911;
  t941 = t766 + t838 + t888 + t928;
  t2852 = -1.*t539*t422*t438;
  t2867 = t422*t469*t554;
  t2881 = t2852 + t2867;
  t1243 = 1.8190549999999993e-12*var1[14];
  t1254 = -0.5031490000160505*t824;
  t1271 = t1104 + t1260;
  t1285 = -0.038922999986*t1271;
  t1290 = t894 + t1287;
  t1292 = -3.6777349999999994e-6*t1290;
  t1300 = t1243 + t1254 + t1285 + t1292;
  t1055 = 1.0394599999999997e-12*var1[14];
  t1083 = -0.03892299998790722*t824;
  t1089 = t847 + t1084;
  t1097 = -3.6777349999999994e-6*t1089;
  t1114 = t1104 + t861;
  t1161 = -0.503149000008*t1114;
  t1164 = t1055 + t1083 + t1097 + t1161;
  t1609 = t1521 + t1084;
  t2907 = t2203*t600;
  t2918 = t2179*t2881;
  t2924 = t2907 + t2918;
  t1697 = t1361 + t861;
  t2938 = t2044*t600;
  t2962 = t2025*t2881;
  t2981 = t2938 + t2962;
  t1634 = -1.000000000049*t824;
  t1652 = 1. + t1634;
  t3010 = t2319*t600;
  t3012 = t2298*t2881;
  t3022 = t3010 + t3012;
  t1342 = t1341 + t1287;
  t1400 = -1.000000000016*t824;
  t1420 = 1. + t1400;
  t1385 = t1361 + t1260;
  t1455 = -6.5e-11*t824;
  t1459 = 1. + t1455;
  t1548 = t1341 + t909;
  t1522 = t1521 + t866;
  t3173 = 0.15121*t539;
  t2698 = 1.0248489999999998e-12*var1[13];
  t2699 = -0.28120900000849935*t1941;
  t2726 = -2.8e-11*t1941;
  t2733 = t2726 + t1958;
  t2740 = -0.038748999993*t2733;
  t2758 = t2757 + t945;
  t2770 = -2.123459e-6*t2758;
  t2777 = t2698 + t2699 + t2740 + t2770;
  t2783 = t2777*t600;
  t2791 = -1.4640699999999997e-7*var1[13];
  t2794 = -1.38024835e-16*t1941;
  t2800 = 4.e-6*t1941;
  t2821 = t2800 + t977;
  t2828 = -0.038748999993*t2821;
  t2836 = t2757 + t112;
  t2837 = -0.281209000004*t2836;
  t2839 = t2791 + t2794 + t2828 + t2837;
  t2898 = t2839*t2881;
  t2934 = t941*t2924;
  t2987 = t1300*t2981;
  t3030 = t1164*t3022;
  t3045 = t1609*t2924;
  t3048 = t1697*t2981;
  t3052 = t1652*t3022;
  t3062 = t3045 + t3048 + t3052;
  t3065 = -0.038924*t3062;
  t3067 = t1342*t2924;
  t3068 = t1420*t2981;
  t3070 = t1385*t3022;
  t3091 = t3067 + t3068 + t3070;
  t3093 = -0.80315*t3091;
  t3099 = t1459*t2924;
  t3105 = t1548*t2981;
  t3109 = t1522*t3022;
  t3135 = t3099 + t3105 + t3109;
  t3146 = 0.148705*t3135;
  t2689 = -0.15121*t2649;
  t2692 = t2689 + t2661;
  t2660 = 0.15121*t2649;
  t2683 = t2660 + t2661;
  t3299 = t438*t469*t305;
  t3300 = t539*t305*t554;
  t3303 = t3299 + t3300;
  t3337 = -1.*t539*t438*t305;
  t3343 = t469*t305*t554;
  t3361 = t3337 + t3343;
  t3379 = t422*t1988;
  t3381 = t2025*t3303;
  t3389 = t2044*t3361;
  t3390 = t3379 + t3381 + t3389;
  t3400 = t422*t2160;
  t3405 = t2179*t3303;
  t3421 = t2203*t3361;
  t3422 = t3400 + t3405 + t3421;
  t3426 = t2296*t422;
  t3429 = t2298*t3303;
  t3435 = t2319*t3361;
  t3446 = t3426 + t3429 + t3435;
  t3212 = 5.856279999999999e-13*var1[13];
  t3224 = -0.0387489999948987*t1941;
  t3230 = t2800 + t376;
  t3235 = -2.123459e-6*t3230;
  t3251 = t2726 + t8;
  t3260 = -0.281209000004*t3251;
  t3267 = t3212 + t3224 + t3235 + t3260;
  t3575 = Sin(var1[3]);
  t3592 = -1.*t422*t438*t469*t3575;
  t3593 = -1.*t539*t422*t3575*t554;
  t3601 = t3592 + t3593;
  t3612 = t539*t422*t438*t3575;
  t3613 = -1.*t422*t469*t3575*t554;
  t3625 = t3612 + t3613;
  t3665 = t1988*t3575*t305;
  t3671 = t2025*t3601;
  t3679 = t2044*t3625;
  t3686 = t3665 + t3671 + t3679;
  t3691 = t2160*t3575*t305;
  t3696 = t2179*t3601;
  t3701 = t2203*t3625;
  t3712 = t3691 + t3696 + t3701;
  t3717 = t2296*t3575*t305;
  t3718 = t2298*t3601;
  t3727 = t2319*t3625;
  t3729 = t3717 + t3718 + t3727;
  t3841 = Cos(var1[3]);
  t3863 = t3841*t438*t305;
  t3870 = -1.*t3575*t554;
  t3884 = t3863 + t3870;
  t3893 = -1.*t438*t3575;
  t3897 = -1.*t3841*t305*t554;
  t3899 = t3893 + t3897;
  t3905 = -1.*t469*t3884;
  t3910 = t539*t3899;
  t3913 = t3905 + t3910;
  t3929 = t539*t3884;
  t3947 = t469*t3899;
  t3954 = t3929 + t3947;
  t3958 = -1.*t3841*t422*t1988;
  t3959 = t2025*t3913;
  t3964 = t2044*t3954;
  t3967 = t3958 + t3959 + t3964;
  t3980 = -1.*t3841*t422*t2160;
  t3984 = t2179*t3913;
  t3989 = t2203*t3954;
  t3994 = t3980 + t3984 + t3989;
  t4005 = -1.*t2296*t3841*t422;
  t4006 = t2298*t3913;
  t4016 = t2319*t3954;
  t4017 = t4005 + t4006 + t4016;
  t4125 = -1.*t438*t3575*t305;
  t4136 = -1.*t3841*t554;
  t4142 = t4125 + t4136;
  t4149 = t3841*t438;
  t4151 = -1.*t3575*t305*t554;
  t4162 = t4149 + t4151;
  t4185 = t469*t4142;
  t4186 = t539*t4162;
  t4192 = t4185 + t4186;
  t4247 = t539*t4142;
  t4249 = -1.*t469*t4162;
  t4250 = t4247 + t4249;
  t4272 = t2203*t4192;
  t4276 = t2179*t4250;
  t4287 = t4272 + t4276;
  t4292 = t2044*t4192;
  t4293 = t2025*t4250;
  t4301 = t4292 + t4293;
  t4308 = t2319*t4192;
  t4315 = t2298*t4250;
  t4316 = t4308 + t4315;
  t3183 = -0.15121*t469;
  t3195 = t3173 + t3183;
  t3200 = t3173 + t2661;
  t4427 = t438*t3575*t305;
  t4428 = t3841*t554;
  t4429 = t4427 + t4428;
  t4437 = -1.*t469*t4429;
  t4438 = t4437 + t4186;
  t4456 = -1.*t539*t4429;
  t4458 = t4456 + t4249;
  t4465 = t2203*t4438;
  t4468 = t2179*t4458;
  t4469 = t4465 + t4468;
  t4471 = t2044*t4438;
  t4479 = t2025*t4458;
  t4490 = t4471 + t4479;
  t4501 = t2319*t4438;
  t4510 = t2298*t4458;
  t4519 = t4501 + t4510;
  t40 = t6 + t39;
  t77 = -0.281209000004*t40;
  t134 = t101 + t112;
  t164 = -2.123459e-6*t134;
  t204 = -0.0387489999948987*t8;
  t295 = 5.856279999999999e-13 + t77 + t164 + t204;
  t370 = t343 + t112;
  t374 = -0.038748999993*t370;
  t380 = t375 + t376;
  t394 = -0.281209000004*t380;
  t409 = -1.38024835e-16*t8;
  t421 = -1.4640699999999997e-7 + t374 + t394 + t409;
  t618 = t610 + t39;
  t628 = -0.038748999993*t618;
  t682 = t646 + t376;
  t714 = -2.123459e-6*t682;
  t722 = -0.28120900000849935*t8;
  t726 = 1.0248489999999998e-12 + t628 + t714 + t722;
  t4633 = t539*t4429;
  t4638 = t469*t4162;
  t4639 = t4633 + t4638;
  t4646 = -1.*t422*t952*t3575;
  t4648 = -6.5e-11*t8*t4438;
  t4650 = t980*t4639;
  t4656 = t4646 + t4648 + t4650;
  t4671 = 1.000000000049*t422*t8*t3575;
  t4672 = t1175*t4438;
  t4675 = t1203*t4639;
  t4678 = t4671 + t4672 + t4675;
  t4685 = -1.*t422*t1306*t3575;
  t4688 = t1316*t4438;
  t4689 = -1.000000000016*t8*t4639;
  t4693 = t4685 + t4688 + t4689;
  t1790 = t785 + t1770;
  t1794 = -0.038922999986*t1790;
  t1838 = t1812 + t1084;
  t1844 = -3.6777349999999994e-6*t1838;
  t1863 = -0.5031490000160505*t861;
  t1897 = 1.8190549999999993e-12 + t1794 + t1844 + t1863;
  t2101 = t2094 + t909;
  t2107 = -0.038922999986*t2101;
  t2109 = t2108 + t1084;
  t2116 = -0.503149000008*t2109;
  t2129 = -2.3905277499999995e-16*t861;
  t2138 = -2.598649999999999e-7 + t2107 + t2116 + t2129;
  t2230 = t780 + t1770;
  t2242 = -0.503149000008*t2230;
  t2249 = t2243 + t909;
  t2262 = -3.6777349999999994e-6*t2249;
  t2267 = -0.03892299998790722*t861;
  t2277 = 1.0394599999999997e-12 + t2242 + t2262 + t2267;
  t2341 = t2108 + t866;
  t4787 = -1.*t422*t1988*t3575;
  t4791 = t2025*t4438;
  t4810 = t2044*t4639;
  t4813 = t4787 + t4791 + t4810;
  t4819 = -1.*t422*t2160*t3575;
  t4821 = t2179*t4438;
  t4825 = t2203*t4639;
  t4830 = t4819 + t4821 + t4825;
  t2353 = t2094 + t1287;
  t4833 = -1.*t2296*t422*t3575;
  t4845 = t2298*t4438;
  t4859 = t2319*t4639;
  t4868 = t4833 + t4845 + t4859;
  t2428 = t1812 + t866;
  t2492 = t785 + t2487;
  t2515 = t780 + t2487;
  t2522 = t2243 + t1287;
  t4923 = t3841*t422*t438*t469;
  t4925 = t539*t3841*t422*t554;
  t4927 = t4923 + t4925;
  t4929 = -1.*t539*t3841*t422*t438;
  t4930 = t3841*t422*t469*t554;
  t4931 = t4929 + t4930;
  t4934 = -1.*t3841*t1988*t305;
  t4935 = t2025*t4927;
  t4936 = t2044*t4931;
  t4939 = t4934 + t4935 + t4936;
  t4941 = -1.*t3841*t2160*t305;
  t4942 = t2179*t4927;
  t4946 = t2203*t4931;
  t4949 = t4941 + t4942 + t4946;
  t4953 = -1.*t2296*t3841*t305;
  t4957 = t2298*t4927;
  t4960 = t2319*t4931;
  t4961 = t4953 + t4957 + t4960;
  t5081 = t438*t3575;
  t5083 = t3841*t305*t554;
  t5091 = t5081 + t5083;
  t5103 = t469*t3884;
  t5105 = t539*t5091;
  t5107 = t5103 + t5105;
  t5115 = -1.*t469*t5091;
  t5117 = t3929 + t5115;
  t5134 = t2203*t5107;
  t5141 = t2179*t5117;
  t5143 = t5134 + t5141;
  t5151 = t2044*t5107;
  t5156 = t2025*t5117;
  t5158 = t5151 + t5156;
  t5167 = t2319*t5107;
  t5169 = t2298*t5117;
  t5174 = t5167 + t5169;
  t5262 = -1.*t3841*t438*t305;
  t5263 = t3575*t554;
  t5266 = t5262 + t5263;
  t5286 = -1.*t469*t5266;
  t5289 = t5286 + t5105;
  t5302 = -1.*t539*t5266;
  t5304 = t5302 + t5115;
  t5307 = t2203*t5289;
  t5311 = t2179*t5304;
  t5314 = t5307 + t5311;
  t5340 = t2044*t5289;
  t5342 = t2025*t5304;
  t5344 = t5340 + t5342;
  t5355 = t2319*t5289;
  t5356 = t2298*t5304;
  t5358 = t5355 + t5356;
  t5451 = t539*t5266;
  t5452 = t469*t5091;
  t5460 = t5451 + t5452;
  t5468 = t3841*t422*t952;
  t5493 = -6.5e-11*t8*t5289;
  t5495 = t980*t5460;
  t5496 = t5468 + t5493 + t5495;
  t5504 = -1.000000000049*t3841*t422*t8;
  t5505 = t1175*t5289;
  t5507 = t1203*t5460;
  t5509 = t5504 + t5505 + t5507;
  t5512 = t3841*t422*t1306;
  t5513 = t1316*t5289;
  t5516 = -1.000000000016*t8*t5460;
  t5517 = t5512 + t5513 + t5516;
  t5567 = t3841*t422*t1988;
  t5570 = t2025*t5289;
  t5572 = t2044*t5460;
  t5575 = t5567 + t5570 + t5572;
  t5589 = t3841*t422*t2160;
  t5591 = t2179*t5289;
  t5592 = t2203*t5460;
  t5593 = t5589 + t5591 + t5592;
  t5597 = t2296*t3841*t422;
  t5607 = t2298*t5289;
  t5609 = t2319*t5460;
  t5615 = t5597 + t5607 + t5609;
  p_output1[0]=var2[0] + (t2839*t3303 + t2777*t3361 + t1300*t3390 + t1164*t3446 - 0.80315*(t1420*t3390 + t1342*t3422 + t1385*t3446) + 0.148705*(t1548*t3390 + t1459*t3422 + t1522*t3446) - 0.038924*(t1697*t3390 + t1609*t3422 + t1652*t3446) + t3267*t422 - 1.*t2692*t305*t438 + t2683*t305*t554 + t3422*t941)*var2[4] + (t2783 + t2898 + t2934 + t2987 + t3030 + t3065 + t3093 + t3146 - 1.*t2683*t422*t438 - 1.*t2692*t422*t554)*var2[5] + (t2783 + t2898 + t2934 + t2987 + t3030 + t3065 + t3093 + t3146 + t3195*t422*t438 - 1.*t3200*t422*t554)*var2[12] + (t1164*t1234 + t1300*t1335 - 0.80315*(t1036*t1342 + t1234*t1385 + t1335*t1420) + 0.148705*(t1036*t1459 + t1234*t1522 + t1335*t1548) - 0.038924*(t1036*t1609 + t1234*t1652 + t1335*t1697) + t295*t305 + t421*t600 + t726*t747 + t1036*t941)*var2[13] + (t1897*t2056 + t2138*t2227 + t2277*t2330 - 0.80315*(t2227*t2428 + t2330*t2492 - 1.000000000016*t2056*t861) + 0.148705*(t2056*t2341 + t2330*t2353 - 6.5e-11*t2227*t861) - 0.038924*(t2056*t2515 + t2227*t2522 - 1.000000000049*t2330*t861))*var2[14];
  p_output1[1]=var2[1] + (t2692*t3884 + t2683*t3899 + t2839*t3913 + t2777*t3954 + t1300*t3967 + t1164*t4017 - 0.80315*(t1420*t3967 + t1342*t3994 + t1385*t4017) + 0.148705*(t1548*t3967 + t1459*t3994 + t1522*t4017) - 0.038924*(t1697*t3967 + t1609*t3994 + t1652*t4017) - 1.*t3267*t3841*t422 + t3994*t941)*var2[3] + (t305*t3267*t3575 + t2839*t3601 + t2777*t3625 + t1300*t3686 + t1164*t3729 - 0.80315*(t1420*t3686 + t1342*t3712 + t1385*t3729) + 0.148705*(t1548*t3686 + t1459*t3712 + t1522*t3729) - 0.038924*(t1697*t3686 + t1609*t3712 + t1652*t3729) + t2692*t3575*t422*t438 - 1.*t2683*t3575*t422*t554 + t3712*t941)*var2[4] + (t2683*t4142 + t2692*t4162 + t2777*t4192 + t2839*t4250 + t1300*t4301 + t1164*t4316 - 0.80315*(t1342*t4287 + t1420*t4301 + t1385*t4316) + 0.148705*(t1459*t4287 + t1548*t4301 + t1522*t4316) - 0.038924*(t1609*t4287 + t1697*t4301 + t1652*t4316) + t4287*t941)*var2[5] + (t3200*t4162 + t3195*t4429 + t2777*t4438 + t2839*t4458 + t1300*t4490 + t1164*t4519 - 0.80315*(t1342*t4469 + t1420*t4490 + t1385*t4519) + 0.148705*(t1459*t4469 + t1548*t4490 + t1522*t4519) - 0.038924*(t1609*t4469 + t1697*t4490 + t1652*t4519) + t4469*t941)*var2[12] + (-1.*t295*t3575*t422 + t421*t4438 + t1164*t4678 + t1300*t4693 - 0.80315*(t1342*t4656 + t1385*t4678 + t1420*t4693) + 0.148705*(t1459*t4656 + t1522*t4678 + t1548*t4693) - 0.038924*(t1609*t4656 + t1652*t4678 + t1697*t4693) + t4639*t726 + t4656*t941)*var2[13] + (t1897*t4813 + t2138*t4830 + t2277*t4868 - 0.80315*(t2428*t4830 + t2492*t4868 - 1.000000000016*t4813*t861) + 0.148705*(t2341*t4813 + t2353*t4868 - 6.5e-11*t4830*t861) - 0.038924*(t2515*t4813 + t2522*t4830 - 1.000000000049*t4868*t861))*var2[14];
  p_output1[2]=var2[2] + (t2683*t4162 - 1.*t3267*t3575*t422 + t2692*t4429 + t2839*t4438 + t2777*t4639 + t1300*t4813 + t1164*t4868 - 0.80315*(t1420*t4813 + t1342*t4830 + t1385*t4868) + 0.148705*(t1548*t4813 + t1459*t4830 + t1522*t4868) - 0.038924*(t1697*t4813 + t1609*t4830 + t1652*t4868) + t4830*t941)*var2[3] + (-1.*t305*t3267*t3841 - 1.*t2692*t3841*t422*t438 + t2839*t4927 + t2777*t4931 + t1300*t4939 + t1164*t4961 - 0.80315*(t1420*t4939 + t1342*t4949 + t1385*t4961) + 0.148705*(t1548*t4939 + t1459*t4949 + t1522*t4961) - 0.038924*(t1697*t4939 + t1609*t4949 + t1652*t4961) + t2683*t3841*t422*t554 + t4949*t941)*var2[4] + (t2683*t3884 + t2692*t5091 + t2777*t5107 + t2839*t5117 + t1300*t5158 + t1164*t5174 - 0.80315*(t1342*t5143 + t1420*t5158 + t1385*t5174) + 0.148705*(t1459*t5143 + t1548*t5158 + t1522*t5174) - 0.038924*(t1609*t5143 + t1697*t5158 + t1652*t5174) + t5143*t941)*var2[5] + (t3200*t5091 + t3195*t5266 + t2777*t5289 + t2839*t5304 + t1300*t5344 + t1164*t5358 - 0.80315*(t1342*t5314 + t1420*t5344 + t1385*t5358) + 0.148705*(t1459*t5314 + t1548*t5344 + t1522*t5358) - 0.038924*(t1609*t5314 + t1697*t5344 + t1652*t5358) + t5314*t941)*var2[12] + (t295*t3841*t422 + t421*t5289 + t1164*t5509 + t1300*t5517 - 0.80315*(t1342*t5496 + t1385*t5509 + t1420*t5517) + 0.148705*(t1459*t5496 + t1522*t5509 + t1548*t5517) - 0.038924*(t1609*t5496 + t1652*t5509 + t1697*t5517) + t5460*t726 + t5496*t941)*var2[13] + (t1897*t5575 + t2138*t5593 + t2277*t5615 - 0.80315*(t2428*t5593 + t2492*t5615 - 1.000000000016*t5575*t861) + 0.148705*(t2341*t5575 + t2353*t5615 - 6.5e-11*t5593*t861) - 0.038924*(t2515*t5575 + t2522*t5593 - 1.000000000049*t5615*t861))*var2[14];
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

#include "impact_velocity_RlFoot.hh"

namespace TrotStance2
{

void impact_velocity_RlFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
