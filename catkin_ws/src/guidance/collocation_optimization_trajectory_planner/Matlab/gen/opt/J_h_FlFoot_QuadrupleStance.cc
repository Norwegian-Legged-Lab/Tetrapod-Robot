/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:09 GMT+01:00
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
  double t125;
  double t503;
  double t582;
  double t690;
  double t799;
  double t875;
  double t249;
  double t1078;
  double t1708;
  double t1808;
  double t1857;
  double t2069;
  double t2310;
  double t2366;
  double t1356;
  double t1402;
  double t1600;
  double t2094;
  double t2125;
  double t2135;
  double t2790;
  double t2866;
  double t2907;
  double t2911;
  double t2403;
  double t2440;
  double t2491;
  double t2513;
  double t2592;
  double t2612;
  double t3302;
  double t2999;
  double t3000;
  double t3004;
  double t3006;
  double t2927;
  double t2929;
  double t2934;
  double t2969;
  double t2977;
  double t2978;
  double t882;
  double t914;
  double t1235;
  double t1330;
  double t1685;
  double t1865;
  double t2082;
  double t2087;
  double t2156;
  double t2158;
  double t2185;
  double t4011;
  double t4013;
  double t4056;
  double t4105;
  double t4129;
  double t4197;
  double t2729;
  double t2908;
  double t2913;
  double t2916;
  double t2991;
  double t2992;
  double t2996;
  double t3047;
  double t3100;
  double t3144;
  double t3265;
  double t3840;
  double t3844;
  double t4357;
  double t4402;
  double t4407;
  double t4229;
  double t4294;
  double t4303;
  double t4440;
  double t4444;
  double t4453;
  double t3465;
  double t3509;
  double t4088;
  double t4206;
  double t4341;
  double t4415;
  double t4483;
  double t4503;
  double t4546;
  double t4555;
  double t4564;
  double t4568;
  double t4570;
  double t4585;
  double t4587;
  double t4602;
  double t4603;
  double t4604;
  double t4614;
  double t4623;
  double t4627;
  double t4651;
  double t4889;
  double t4892;
  double t4898;
  double t5058;
  double t5069;
  double t5075;
  double t5081;
  double t5117;
  double t5121;
  double t5123;
  double t5133;
  double t4930;
  double t4953;
  double t4975;
  double t4984;
  double t5355;
  double t5367;
  double t5368;
  double t5373;
  double t5272;
  double t5289;
  double t5299;
  double t5326;
  double t5403;
  double t5414;
  double t5632;
  double t5593;
  double t5629;
  double t5633;
  double t5635;
  double t5639;
  double t5640;
  double t5641;
  double t2326;
  double t2331;
  double t2334;
  double t2336;
  double t5646;
  double t5647;
  double t5648;
  double t5665;
  double t5673;
  double t5691;
  double t5704;
  double t5716;
  double t5725;
  double t5739;
  double t5795;
  double t5804;
  double t5806;
  double t5813;
  double t5760;
  double t5762;
  double t5763;
  double t5778;
  double t5973;
  double t5976;
  double t5977;
  double t5999;
  double t6013;
  double t6015;
  double t6023;
  double t6025;
  double t6026;
  double t6033;
  double t6072;
  double t6073;
  double t6074;
  double t6075;
  double t6039;
  double t6048;
  double t6053;
  double t6059;
  double t6109;
  double t6110;
  double t6114;
  double t6121;
  double t6125;
  double t6126;
  double t6132;
  double t6133;
  double t6135;
  double t6138;
  double t6139;
  double t6154;
  double t6188;
  double t6190;
  double t6197;
  double t6169;
  double t6182;
  double t6186;
  double t6201;
  double t6209;
  double t6210;
  double t4659;
  double t4660;
  double t4693;
  double t4707;
  double t6335;
  double t6339;
  double t6345;
  double t6370;
  double t6374;
  double t6380;
  double t6382;
  double t6442;
  double t6445;
  double t6447;
  double t6404;
  double t6428;
  double t6432;
  double t6449;
  double t6453;
  double t6455;
  double t4739;
  double t4759;
  double t4777;
  double t4811;
  double t4838;
  double t4842;
  double t4901;
  double t4912;
  double t4926;
  double t6609;
  double t6615;
  double t6623;
  double t6642;
  double t6643;
  double t6645;
  double t6647;
  double t6651;
  double t6652;
  double t6654;
  double t6656;
  double t6635;
  double t6636;
  double t6639;
  double t6640;
  double t5341;
  double t5343;
  double t5352;
  double t5375;
  double t5380;
  double t5381;
  double t5417;
  double t5433;
  double t5436;
  double t6725;
  double t6738;
  double t6739;
  double t6743;
  double t6715;
  double t6716;
  double t6719;
  double t6720;
  double t6749;
  double t6750;
  double t6765;
  double t6772;
  double t6888;
  double t6893;
  double t6896;
  double t6913;
  double t6914;
  double t6917;
  double t6924;
  double t6930;
  double t6935;
  double t6940;
  double t6980;
  double t6984;
  double t6986;
  double t6988;
  double t6961;
  double t6969;
  double t6971;
  double t6974;
  double t7063;
  double t7067;
  double t7068;
  double t7070;
  double t7075;
  double t7087;
  double t7088;
  double t7089;
  double t7095;
  double t7096;
  double t7097;
  double t7091;
  double t7092;
  double t7093;
  double t7103;
  double t7104;
  double t7105;
  double t7160;
  double t7162;
  double t7167;
  double t7172;
  double t7178;
  double t7191;
  double t7192;
  double t7238;
  double t7239;
  double t7241;
  double t7219;
  double t7221;
  double t7232;
  double t7249;
  double t7251;
  double t7263;
  double t7329;
  double t7332;
  double t7334;
  double t7352;
  double t7353;
  double t7355;
  double t7358;
  double t7361;
  double t7362;
  double t7363;
  double t7337;
  double t7338;
  double t7339;
  double t7341;
  double t7466;
  double t7467;
  double t7475;
  double t7476;
  double t7424;
  double t7443;
  double t7451;
  double t7457;
  double t7481;
  double t7488;
  t125 = Sin(var1[4]);
  t503 = Cos(var1[6]);
  t582 = -1.*t503;
  t690 = 1. + t582;
  t799 = 0.15121*t690;
  t875 = Sin(var1[6]);
  t249 = Sin(var1[5]);
  t1078 = Cos(var1[5]);
  t1708 = Cos(var1[7]);
  t1808 = -1.*t1708;
  t1857 = 1. + t1808;
  t2069 = Sin(var1[7]);
  t2310 = Cos(var1[4]);
  t2366 = -1. + t1708;
  t1356 = t503*t125*t249;
  t1402 = t1078*t125*t875;
  t1600 = t1356 + t1402;
  t2094 = -1.*t1078*t503*t125;
  t2125 = t125*t249*t875;
  t2135 = t2094 + t2125;
  t2790 = Cos(var1[8]);
  t2866 = -1.*t2790;
  t2907 = 1. + t2866;
  t2911 = Sin(var1[8]);
  t2403 = 4.e-6*t2310*t2366;
  t2440 = 1.6e-11*t2366;
  t2491 = 1. + t2440;
  t2513 = t2491*t1600;
  t2592 = 4.e-6*t2135*t2069;
  t2612 = t2403 + t2513 + t2592;
  t3302 = -1. + t2790;
  t2999 = t2310*t1708;
  t3000 = 4.e-6*t2366*t1600;
  t3004 = t2135*t2069;
  t3006 = t2999 + t3000 + t3004;
  t2927 = -1.000000000016*t1857;
  t2929 = 1. + t2927;
  t2934 = t2929*t2135;
  t2969 = -1.*t2310*t2069;
  t2977 = -4.e-6*t1600*t2069;
  t2978 = t2934 + t2969 + t2977;
  t882 = -0.15121*t875;
  t914 = t799 + t882;
  t1235 = 0.15121*t875;
  t1330 = t799 + t1235;
  t1685 = -1.2484e-7*var1[7];
  t1865 = -1.5499600000248e-7*t1857;
  t2082 = 1.124840000016e-6*t2069;
  t2087 = t1685 + t1865 + t2082;
  t2156 = 0.281210000008499*t1857;
  t2158 = 0.03874900000062*t2069;
  t2185 = t2156 + t2158;
  t4011 = -1.*t2310*t1078*t503;
  t4013 = t2310*t249*t875;
  t4056 = t4011 + t4013;
  t4105 = -1.*t2310*t503*t249;
  t4129 = -1.*t2310*t1078*t875;
  t4197 = t4105 + t4129;
  t2729 = -1.284e-8*var1[8];
  t2908 = -1.5499600000248e-7*t2907;
  t2913 = 2.012840000032e-6*t2911;
  t2916 = t2729 + t2908 + t2913;
  t2991 = 0.503210000016051*t2907;
  t2992 = 0.03874900000062*t2911;
  t2996 = t2991 + t2992;
  t3047 = 5.136e-14*var1[8];
  t3100 = -0.03874900000062*t2907;
  t3144 = 0.503210000008*t2911;
  t3265 = t3047 + t3100 + t3144;
  t3840 = -1.000000000016*t2907;
  t3844 = 1. + t3840;
  t4357 = t2929*t4197;
  t4402 = -4.e-6*t4056*t2069;
  t4407 = t4357 + t4402;
  t4229 = t2491*t4056;
  t4294 = 4.e-6*t4197*t2069;
  t4303 = t4229 + t4294;
  t4440 = 4.e-6*t2366*t4056;
  t4444 = t4197*t2069;
  t4453 = t4440 + t4444;
  t3465 = 1.6e-11*t3302;
  t3509 = 1. + t3465;
  t4088 = t4056*t2087;
  t4206 = t4197*t2185;
  t4341 = t4303*t2916;
  t4415 = t4407*t2996;
  t4483 = t4453*t3265;
  t4503 = t3844*t4407;
  t4546 = -4.e-6*t4303*t2911;
  t4555 = -1.*t4453*t2911;
  t4564 = t4503 + t4546 + t4555;
  t4568 = 0.80321*t4564;
  t4570 = t3509*t4303;
  t4585 = 4.e-6*t3302*t4453;
  t4587 = 4.e-6*t4407*t2911;
  t4602 = t4570 + t4585 + t4587;
  t4603 = 0.14871*t4602;
  t4604 = 4.e-6*t3302*t4303;
  t4614 = t2790*t4453;
  t4623 = t4407*t2911;
  t4627 = t4604 + t4614 + t4623;
  t4651 = -0.03875*t4627;
  t4889 = t2310*t1078*t503;
  t4892 = -1.*t2310*t249*t875;
  t4898 = t4889 + t4892;
  t5058 = -1.*t1708*t125;
  t5069 = -4.e-6*t1708*t4197;
  t5075 = -1.000000000016*t4898*t2069;
  t5081 = t5058 + t5069 + t5075;
  t5117 = t1708*t4898;
  t5121 = -1.*t125*t2069;
  t5123 = -4.e-6*t4197*t2069;
  t5133 = t5117 + t5121 + t5123;
  t4930 = 4.e-6*t1708*t4898;
  t4953 = -4.e-6*t125*t2069;
  t4975 = -1.6e-11*t4197*t2069;
  t4984 = t4930 + t4953 + t4975;
  t5355 = 4.e-6*t2366*t125;
  t5367 = t2491*t4197;
  t5368 = 4.e-6*t4898*t2069;
  t5373 = t5355 + t5367 + t5368;
  t5272 = t1708*t125;
  t5289 = 4.e-6*t2366*t4197;
  t5299 = t4898*t2069;
  t5326 = t5272 + t5289 + t5299;
  t5403 = t2929*t4898;
  t5414 = t5403 + t5121 + t5123;
  t5632 = Cos(var1[3]);
  t5593 = Sin(var1[3]);
  t5629 = -1.*t1078*t5593;
  t5633 = -1.*t5632*t125*t249;
  t5635 = t5629 + t5633;
  t5639 = t5632*t1078*t125;
  t5640 = -1.*t5593*t249;
  t5641 = t5639 + t5640;
  t2326 = 4.9936e-13*var1[7];
  t2331 = -0.03874900000062*t1857;
  t2334 = 0.281210000004*t2069;
  t2336 = t2326 + t2331 + t2334;
  t5646 = t503*t5635;
  t5647 = -1.*t5641*t875;
  t5648 = t5646 + t5647;
  t5665 = t503*t5641;
  t5673 = t5635*t875;
  t5691 = t5665 + t5673;
  t5704 = -4.e-6*t5632*t2310*t2366;
  t5716 = t2491*t5648;
  t5725 = 4.e-6*t5691*t2069;
  t5739 = t5704 + t5716 + t5725;
  t5795 = -1.*t5632*t2310*t1708;
  t5804 = 4.e-6*t2366*t5648;
  t5806 = t5691*t2069;
  t5813 = t5795 + t5804 + t5806;
  t5760 = t2929*t5691;
  t5762 = t5632*t2310*t2069;
  t5763 = -4.e-6*t5648*t2069;
  t5778 = t5760 + t5762 + t5763;
  t5973 = -1.*t2310*t503*t5593*t249;
  t5976 = -1.*t2310*t1078*t5593*t875;
  t5977 = t5973 + t5976;
  t5999 = t2310*t1078*t503*t5593;
  t6013 = -1.*t2310*t5593*t249*t875;
  t6015 = t5999 + t6013;
  t6023 = 4.e-6*t2366*t5593*t125;
  t6025 = t2491*t5977;
  t6026 = 4.e-6*t6015*t2069;
  t6033 = t6023 + t6025 + t6026;
  t6072 = t1708*t5593*t125;
  t6073 = 4.e-6*t2366*t5977;
  t6074 = t6015*t2069;
  t6075 = t6072 + t6073 + t6074;
  t6039 = t2929*t6015;
  t6048 = -1.*t5593*t125*t2069;
  t6053 = -4.e-6*t5977*t2069;
  t6059 = t6039 + t6048 + t6053;
  t6109 = -1.*t1078*t5593*t125;
  t6110 = -1.*t5632*t249;
  t6114 = t6109 + t6110;
  t6121 = t5632*t1078;
  t6125 = -1.*t5593*t125*t249;
  t6126 = t6121 + t6125;
  t6132 = t503*t6114;
  t6133 = -1.*t6126*t875;
  t6135 = t6132 + t6133;
  t6138 = t503*t6126;
  t6139 = t6114*t875;
  t6154 = t6138 + t6139;
  t6188 = t2929*t6154;
  t6190 = -4.e-6*t6135*t2069;
  t6197 = t6188 + t6190;
  t6169 = t2491*t6135;
  t6182 = 4.e-6*t6154*t2069;
  t6186 = t6169 + t6182;
  t6201 = 4.e-6*t2366*t6135;
  t6209 = t6154*t2069;
  t6210 = t6201 + t6209;
  t4659 = -0.15121*t503;
  t4660 = t4659 + t1235;
  t4693 = 0.15121*t503;
  t4707 = t4693 + t1235;
  t6335 = t1078*t5593*t125;
  t6339 = t5632*t249;
  t6345 = t6335 + t6339;
  t6370 = -1.*t503*t6345;
  t6374 = t6370 + t6133;
  t6380 = -1.*t6345*t875;
  t6382 = t6138 + t6380;
  t6442 = t2929*t6382;
  t6445 = -4.e-6*t6374*t2069;
  t6447 = t6442 + t6445;
  t6404 = t2491*t6374;
  t6428 = 4.e-6*t6382*t2069;
  t6432 = t6404 + t6428;
  t6449 = 4.e-6*t2366*t6374;
  t6453 = t6382*t2069;
  t6455 = t6449 + t6453;
  t4739 = 0.281210000004*t1708;
  t4759 = -0.03874900000062*t2069;
  t4777 = 4.9936e-13 + t4739 + t4759;
  t4811 = 1.124840000016e-6*t1708;
  t4838 = -1.5499600000248e-7*t2069;
  t4842 = -1.2484e-7 + t4811 + t4838;
  t4901 = 0.03874900000062*t1708;
  t4912 = 0.281210000008499*t2069;
  t4926 = t4901 + t4912;
  t6609 = t503*t6345;
  t6615 = t6126*t875;
  t6623 = t6609 + t6615;
  t6642 = t2310*t1708*t5593;
  t6643 = -4.e-6*t1708*t6382;
  t6645 = -1.000000000016*t6623*t2069;
  t6647 = t6642 + t6643 + t6645;
  t6651 = t1708*t6623;
  t6652 = t2310*t5593*t2069;
  t6654 = -4.e-6*t6382*t2069;
  t6656 = t6651 + t6652 + t6654;
  t6635 = 4.e-6*t1708*t6623;
  t6636 = 4.e-6*t2310*t5593*t2069;
  t6639 = -1.6e-11*t6382*t2069;
  t6640 = t6635 + t6636 + t6639;
  t5341 = 0.503210000008*t2790;
  t5343 = -0.03874900000062*t2911;
  t5352 = 5.136e-14 + t5341 + t5343;
  t5375 = 2.012840000032e-6*t2790;
  t5380 = -1.5499600000248e-7*t2911;
  t5381 = -1.284e-8 + t5375 + t5380;
  t5417 = 0.03874900000062*t2790;
  t5433 = 0.503210000016051*t2911;
  t5436 = t5417 + t5433;
  t6725 = -4.e-6*t2310*t2366*t5593;
  t6738 = t2491*t6382;
  t6739 = 4.e-6*t6623*t2069;
  t6743 = t6725 + t6738 + t6739;
  t6715 = -1.*t2310*t1708*t5593;
  t6716 = 4.e-6*t2366*t6382;
  t6719 = t6623*t2069;
  t6720 = t6715 + t6716 + t6719;
  t6749 = t2929*t6623;
  t6750 = t6749 + t6652 + t6654;
  t6765 = -4.e-6*t6743*t2911;
  t6772 = -1.*t6720*t2911;
  t6888 = t5632*t2310*t503*t249;
  t6893 = t5632*t2310*t1078*t875;
  t6896 = t6888 + t6893;
  t6913 = -1.*t5632*t2310*t1078*t503;
  t6914 = t5632*t2310*t249*t875;
  t6917 = t6913 + t6914;
  t6924 = -4.e-6*t5632*t2366*t125;
  t6930 = t2491*t6896;
  t6935 = 4.e-6*t6917*t2069;
  t6940 = t6924 + t6930 + t6935;
  t6980 = -1.*t5632*t1708*t125;
  t6984 = 4.e-6*t2366*t6896;
  t6986 = t6917*t2069;
  t6988 = t6980 + t6984 + t6986;
  t6961 = t2929*t6917;
  t6969 = t5632*t125*t2069;
  t6971 = -4.e-6*t6896*t2069;
  t6974 = t6961 + t6969 + t6971;
  t7063 = t1078*t5593;
  t7067 = t5632*t125*t249;
  t7068 = t7063 + t7067;
  t7070 = -1.*t7068*t875;
  t7075 = t5665 + t7070;
  t7087 = t503*t7068;
  t7088 = t5641*t875;
  t7089 = t7087 + t7088;
  t7095 = t2929*t7089;
  t7096 = -4.e-6*t7075*t2069;
  t7097 = t7095 + t7096;
  t7091 = t2491*t7075;
  t7092 = 4.e-6*t7089*t2069;
  t7093 = t7091 + t7092;
  t7103 = 4.e-6*t2366*t7075;
  t7104 = t7089*t2069;
  t7105 = t7103 + t7104;
  t7160 = -1.*t5632*t1078*t125;
  t7162 = t5593*t249;
  t7167 = t7160 + t7162;
  t7172 = -1.*t503*t7167;
  t7178 = t7172 + t7070;
  t7191 = -1.*t7167*t875;
  t7192 = t7087 + t7191;
  t7238 = t2929*t7192;
  t7239 = -4.e-6*t7178*t2069;
  t7241 = t7238 + t7239;
  t7219 = t2491*t7178;
  t7221 = 4.e-6*t7192*t2069;
  t7232 = t7219 + t7221;
  t7249 = 4.e-6*t2366*t7178;
  t7251 = t7192*t2069;
  t7263 = t7249 + t7251;
  t7329 = t503*t7167;
  t7332 = t7068*t875;
  t7334 = t7329 + t7332;
  t7352 = -4.e-6*t1708*t7192;
  t7353 = -1.000000000016*t7334*t2069;
  t7355 = t5795 + t7352 + t7353;
  t7358 = t1708*t7334;
  t7361 = -1.*t5632*t2310*t2069;
  t7362 = -4.e-6*t7192*t2069;
  t7363 = t7358 + t7361 + t7362;
  t7337 = 4.e-6*t1708*t7334;
  t7338 = -4.e-6*t5632*t2310*t2069;
  t7339 = -1.6e-11*t7192*t2069;
  t7341 = t7337 + t7338 + t7339;
  t7466 = 4.e-6*t5632*t2310*t2366;
  t7467 = t2491*t7192;
  t7475 = 4.e-6*t7334*t2069;
  t7476 = t7466 + t7467 + t7475;
  t7424 = t5632*t2310*t1708;
  t7443 = 4.e-6*t2366*t7192;
  t7451 = t7334*t2069;
  t7457 = t7424 + t7443 + t7451;
  t7481 = t2929*t7334;
  t7488 = t7481 + t7361 + t7362;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1078*t125*t1330 + t1600*t2087 + t2135*t2185 + t2310*t2336 + t2612*t2916 + t2978*t2996 + t3006*t3265 - 0.03875*(t2911*t2978 + t2790*t3006 + 4.e-6*t2612*t3302) + 0.14871*(4.e-6*t2911*t2978 + 4.e-6*t3006*t3302 + t2612*t3509) + 0.80321*(-4.e-6*t2612*t2911 - 1.*t2911*t3006 + t2978*t3844) + t125*t249*t914;
  p_output1[2]=-1.*t1330*t2310*t249 + t4088 + t4206 + t4341 + t4415 + t4483 + t4568 + t4603 + t4651 - 1.*t1078*t2310*t914;
  p_output1[3]=t4088 + t4206 + t4341 + t4415 + t4483 + t4568 + t4603 + t4651 - 1.*t2310*t249*t4660 + t1078*t2310*t4707;
  p_output1[4]=t125*t4777 + t4197*t4842 + t4898*t4926 + t2916*t4984 + t2996*t5081 + t3265*t5133 - 0.03875*(4.e-6*t3302*t4984 + t2911*t5081 + t2790*t5133) + 0.80321*(-4.e-6*t2911*t4984 + t3844*t5081 - 1.*t2911*t5133) + 0.14871*(t3509*t4984 + 4.e-6*t2911*t5081 + 4.e-6*t3302*t5133);
  p_output1[5]=t5326*t5352 + t5373*t5381 + 0.14871*(-4.e-6*t2911*t5326 - 1.6e-11*t2911*t5373 + 4.e-6*t2790*t5414) - 0.03875*(-1.*t2911*t5326 - 4.e-6*t2911*t5373 + t2790*t5414) + 0.80321*(-1.*t2790*t5326 - 4.e-6*t2790*t5373 - 1.000000000016*t2911*t5414) + t5414*t5436;
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t2310*t2336*t5632 + t1330*t5641 + t2087*t5648 + t2185*t5691 + t2916*t5739 + t2996*t5778 + t3265*t5813 - 0.03875*(4.e-6*t3302*t5739 + t2911*t5778 + t2790*t5813) + 0.80321*(-4.e-6*t2911*t5739 + t3844*t5778 - 1.*t2911*t5813) + 0.14871*(t3509*t5739 + 4.e-6*t2911*t5778 + 4.e-6*t3302*t5813) + t5635*t914;
  p_output1[9]=t1078*t1330*t2310*t5593 + t125*t2336*t5593 + t2087*t5977 + t2185*t6015 + t2916*t6033 + t2996*t6059 + t3265*t6075 - 0.03875*(4.e-6*t3302*t6033 + t2911*t6059 + t2790*t6075) + 0.80321*(-4.e-6*t2911*t6033 + t3844*t6059 - 1.*t2911*t6075) + 0.14871*(t3509*t6033 + 4.e-6*t2911*t6059 + 4.e-6*t3302*t6075) - 1.*t2310*t249*t5593*t914;
  p_output1[10]=t1330*t6126 + t2087*t6135 + t2185*t6154 + t2916*t6186 + t2996*t6197 + t3265*t6210 - 0.03875*(4.e-6*t3302*t6186 + t2911*t6197 + t2790*t6210) + 0.80321*(-4.e-6*t2911*t6186 + t3844*t6197 - 1.*t2911*t6210) + 0.14871*(t3509*t6186 + 4.e-6*t2911*t6197 + 4.e-6*t3302*t6210) + t6114*t914;
  p_output1[11]=t4660*t6126 + t4707*t6345 + t2087*t6374 + t2185*t6382 + t2916*t6432 + t2996*t6447 + t3265*t6455 - 0.03875*(4.e-6*t3302*t6432 + t2911*t6447 + t2790*t6455) + 0.80321*(-4.e-6*t2911*t6432 + t3844*t6447 - 1.*t2911*t6455) + 0.14871*(t3509*t6432 + 4.e-6*t2911*t6447 + 4.e-6*t3302*t6455);
  p_output1[12]=-1.*t2310*t4777*t5593 + t4842*t6382 + t4926*t6623 + t2916*t6640 + t2996*t6647 + t3265*t6656 - 0.03875*(4.e-6*t3302*t6640 + t2911*t6647 + t2790*t6656) + 0.80321*(-4.e-6*t2911*t6640 + t3844*t6647 - 1.*t2911*t6656) + 0.14871*(t3509*t6640 + 4.e-6*t2911*t6647 + 4.e-6*t3302*t6656);
  p_output1[13]=t5352*t6720 + t5381*t6743 + t5436*t6750 + 0.14871*(-4.e-6*t2911*t6720 - 1.6e-11*t2911*t6743 + 4.e-6*t2790*t6750) + 0.80321*(-1.*t2790*t6720 - 4.e-6*t2790*t6743 - 1.000000000016*t2911*t6750) - 0.03875*(t2790*t6750 + t6765 + t6772);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t2310*t2336*t5593 + t1330*t6345 + t2087*t6382 + t2185*t6623 + t3265*t6720 + t2916*t6743 + t2996*t6750 + 0.14871*(4.e-6*t3302*t6720 + t3509*t6743 + 4.e-6*t2911*t6750) - 0.03875*(t2790*t6720 + 4.e-6*t3302*t6743 + t2911*t6750) + 0.80321*(t3844*t6750 + t6765 + t6772) + t6126*t914;
  p_output1[17]=-1.*t1078*t1330*t2310*t5632 - 1.*t125*t2336*t5632 + t2087*t6896 + t2185*t6917 + t2916*t6940 + t2996*t6974 + t3265*t6988 - 0.03875*(4.e-6*t3302*t6940 + t2911*t6974 + t2790*t6988) + 0.80321*(-4.e-6*t2911*t6940 + t3844*t6974 - 1.*t2911*t6988) + 0.14871*(t3509*t6940 + 4.e-6*t2911*t6974 + 4.e-6*t3302*t6988) + t2310*t249*t5632*t914;
  p_output1[18]=t1330*t7068 + t2087*t7075 + t2185*t7089 + t2916*t7093 + t2996*t7097 + t3265*t7105 - 0.03875*(4.e-6*t3302*t7093 + t2911*t7097 + t2790*t7105) + 0.80321*(-4.e-6*t2911*t7093 + t3844*t7097 - 1.*t2911*t7105) + 0.14871*(t3509*t7093 + 4.e-6*t2911*t7097 + 4.e-6*t3302*t7105) + t5641*t914;
  p_output1[19]=t4660*t7068 + t4707*t7167 + t2087*t7178 + t2185*t7192 + t2916*t7232 + t2996*t7241 + t3265*t7263 - 0.03875*(4.e-6*t3302*t7232 + t2911*t7241 + t2790*t7263) + 0.80321*(-4.e-6*t2911*t7232 + t3844*t7241 - 1.*t2911*t7263) + 0.14871*(t3509*t7232 + 4.e-6*t2911*t7241 + 4.e-6*t3302*t7263);
  p_output1[20]=t2310*t4777*t5632 + t4842*t7192 + t4926*t7334 + t2916*t7341 + t2996*t7355 + t3265*t7363 - 0.03875*(4.e-6*t3302*t7341 + t2911*t7355 + t2790*t7363) + 0.80321*(-4.e-6*t2911*t7341 + t3844*t7355 - 1.*t2911*t7363) + 0.14871*(t3509*t7341 + 4.e-6*t2911*t7355 + 4.e-6*t3302*t7363);
  p_output1[21]=t5352*t7457 + t5381*t7476 + t5436*t7488 + 0.14871*(-4.e-6*t2911*t7457 - 1.6e-11*t2911*t7476 + 4.e-6*t2790*t7488) - 0.03875*(-1.*t2911*t7457 - 4.e-6*t2911*t7476 + t2790*t7488) + 0.80321*(-1.*t2790*t7457 - 4.e-6*t2790*t7476 - 1.000000000016*t2911*t7488);
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

#include "J_h_FlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
