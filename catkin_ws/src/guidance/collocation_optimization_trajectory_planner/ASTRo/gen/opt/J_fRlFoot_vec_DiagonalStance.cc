/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:42 GMT+02:00
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
  double t214;
  double t681;
  double t304;
  double t1139;
  double t1192;
  double t1068;
  double t1195;
  double t418;
  double t1321;
  double t1376;
  double t1399;
  double t829;
  double t913;
  double t1718;
  double t1722;
  double t1735;
  double t1906;
  double t1927;
  double t2042;
  double t2087;
  double t2092;
  double t2110;
  double t2121;
  double t2162;
  double t2203;
  double t2204;
  double t2208;
  double t2211;
  double t2215;
  double t2240;
  double t2254;
  double t2279;
  double t1773;
  double t1778;
  double t1792;
  double t1175;
  double t1213;
  double t1266;
  double t1501;
  double t1527;
  double t1548;
  double t2644;
  double t2652;
  double t2692;
  double t599;
  double t850;
  double t851;
  double t2774;
  double t2820;
  double t2863;
  double t3119;
  double t3109;
  double t1309;
  double t1552;
  double t1558;
  double t1715;
  double t1831;
  double t1862;
  double t3763;
  double t3774;
  double t3780;
  double t3798;
  double t3811;
  double t3821;
  double t3839;
  double t3842;
  double t3843;
  double t3862;
  double t3864;
  double t3865;
  double t3886;
  double t2319;
  double t2342;
  double t2558;
  double t3561;
  double t3573;
  double t3607;
  double t3256;
  double t3335;
  double t3405;
  double t2958;
  double t2964;
  double t2996;
  double t4412;
  double t4438;
  double t4442;
  double t3121;
  double t3131;
  double t3135;
  double t4695;
  double t4720;
  double t4738;
  double t5100;
  double t5102;
  double t5141;
  double t3714;
  double t3716;
  double t3729;
  double t3739;
  double t3746;
  double t3748;
  double t5219;
  double t5244;
  double t5261;
  double t5272;
  double t5296;
  double t5305;
  double t5326;
  double t5327;
  double t5336;
  double t5356;
  double t5364;
  double t5367;
  double t5373;
  double t3894;
  double t3898;
  double t3914;
  double t4197;
  double t4272;
  double t4322;
  double t4751;
  double t4785;
  double t4791;
  double t4899;
  double t4901;
  double t4906;
  double t5407;
  double t5411;
  double t5415;
  double t5427;
  double t5428;
  double t5429;
  double t5511;
  double t5517;
  double t5520;
  double t5521;
  double t5522;
  double t5545;
  double t5551;
  double t5564;
  double t5570;
  double t5571;
  double t5572;
  double t5611;
  double t5618;
  double t5506;
  double t5523;
  double t5527;
  double t5533;
  double t5559;
  double t5631;
  double t5632;
  double t5633;
  double t5689;
  double t5690;
  double t5692;
  double t5744;
  double t5746;
  double t5785;
  double t5806;
  double t5884;
  double t5893;
  double t5894;
  double t5539;
  double t5808;
  double t5809;
  double t7809;
  double t7866;
  double t8073;
  double t6901;
  double t7519;
  double t7520;
  double t7792;
  double t7794;
  double t8095;
  double t8483;
  double t18216;
  double t18220;
  double t18221;
  double t10062;
  double t10076;
  double t10278;
  double t10298;
  double t13155;
  double t13200;
  double t14775;
  double t14791;
  double t18209;
  double t18333;
  double t15416;
  double t15494;
  double t15620;
  double t15629;
  double t16521;
  double t16706;
  double t17153;
  double t17231;
  double t17924;
  double t17934;
  double t17952;
  double t17959;
  double t18181;
  double t18423;
  double t19928;
  double t19932;
  double t19936;
  double t19941;
  double t19980;
  double t19991;
  double t19993;
  double t18445;
  double t18455;
  double t18550;
  double t20036;
  double t20038;
  double t20073;
  double t18573;
  double t18574;
  double t18653;
  double t18759;
  double t18782;
  double t19009;
  double t19074;
  double t19217;
  double t19411;
  double t19425;
  double t19441;
  double t19455;
  double t19476;
  double t19555;
  double t19579;
  double t19700;
  double t19784;
  double t19908;
  double t19909;
  double t22862;
  double t22895;
  double t22896;
  double t22897;
  double t22930;
  double t22931;
  double t22941;
  double t22953;
  double t23017;
  double t2231;
  double t2598;
  double t2608;
  double t22901;
  double t22902;
  double t22908;
  double t22937;
  double t23037;
  double t23070;
  double t23095;
  double t23097;
  double t23098;
  double t23316;
  double t23321;
  double t23339;
  double t23340;
  double t23344;
  double t23351;
  double t23352;
  double t23353;
  double t23328;
  double t23334;
  double t23335;
  double t23345;
  double t23362;
  double t23367;
  double t23407;
  double t23408;
  double t23409;
  double t2901;
  double t3000;
  double t3004;
  double t18440;
  double t18551;
  double t18789;
  double t19363;
  double t19456;
  double t19584;
  double t23728;
  double t23734;
  double t23770;
  double t20074;
  double t23772;
  double t20276;
  double t23824;
  double t23913;
  double t23934;
  double t23947;
  double t23954;
  double t23986;
  double t23993;
  double t24001;
  double t22203;
  double t24016;
  double t22251;
  double t24115;
  double t24167;
  double t24207;
  double t24425;
  double t24430;
  double t22464;
  double t24584;
  double t24642;
  double t24653;
  double t24711;
  double t24725;
  double t22570;
  double t24768;
  double t24785;
  double t24788;
  double t24810;
  double t24812;
  double t22929;
  double t23145;
  double t23155;
  double t23222;
  double t23238;
  double t23261;
  double t23274;
  double t23303;
  double t23336;
  double t23432;
  double t23451;
  double t23464;
  double t23465;
  double t23524;
  double t23536;
  double t23538;
  double t25151;
  double t25159;
  double t26153;
  double t26160;
  double t25207;
  double t26123;
  double t26126;
  double t26135;
  double t26137;
  double t26138;
  double t26139;
  double t26216;
  double t26230;
  double t26268;
  double t25573;
  double t26539;
  double t26566;
  double t26574;
  double t25594;
  double t25595;
  double t27520;
  double t27522;
  double t27527;
  double t27533;
  double t27537;
  double t27541;
  double t27574;
  double t27598;
  double t27937;
  double t27939;
  t214 = Sin(var1[4]);
  t681 = Cos(var1[9]);
  t304 = Cos(var1[5]);
  t1139 = Cos(var1[11]);
  t1192 = Sin(var1[10]);
  t1068 = Cos(var1[10]);
  t1195 = Sin(var1[11]);
  t418 = Sin(var1[9]);
  t1321 = -1.*t1139*t1192;
  t1376 = t1068*t1195;
  t1399 = t1321 + t1376;
  t829 = Sin(var1[5]);
  t913 = Cos(var1[4]);
  t1718 = -1.*t1068*t1139;
  t1722 = -1.*t1192*t1195;
  t1735 = t1718 + t1722;
  t1906 = t681*t304;
  t1927 = -1.*t418*t829;
  t2042 = t1906 + t1927;
  t2087 = var2[1]*t913*t2042;
  t2092 = -1.*t304*t418*t1399;
  t2110 = -1.*t681*t1399*t829;
  t2121 = t2092 + t2110;
  t2162 = var2[2]*t913*t2121;
  t2203 = -1.*t304*t418*t1735;
  t2204 = -1.*t681*t1735*t829;
  t2208 = t2203 + t2204;
  t2211 = var2[0]*t913*t2208;
  t2215 = t2087 + t2162 + t2211;
  t2240 = t1139*t1192;
  t2254 = -1.*t1068*t1195;
  t2279 = t2240 + t2254;
  t1773 = t681*t304*t1735;
  t1778 = -1.*t418*t1735*t829;
  t1792 = t1773 + t1778;
  t1175 = t1068*t1139;
  t1213 = t1192*t1195;
  t1266 = t1175 + t1213;
  t1501 = t681*t304*t1399;
  t1527 = -1.*t418*t1399*t829;
  t1548 = t1501 + t1527;
  t2644 = t1399*t214;
  t2652 = t913*t1792;
  t2692 = t2644 + t2652;
  t599 = t304*t418;
  t850 = t681*t829;
  t851 = t599 + t850;
  t2774 = t1266*t214;
  t2820 = t913*t1548;
  t2863 = t2774 + t2820;
  t3119 = Sin(var1[3]);
  t3109 = Cos(var1[3]);
  t1309 = t913*t1266;
  t1552 = -1.*t214*t1548;
  t1558 = t1309 + t1552;
  t1715 = t913*t1399;
  t1831 = -1.*t214*t1792;
  t1862 = t1715 + t1831;
  t3763 = t3109*t851;
  t3774 = t3119*t214*t2042;
  t3780 = t3763 + t3774;
  t3798 = var2[1]*t3780;
  t3811 = t3119*t214*t2121;
  t3821 = t3109*t1548;
  t3839 = t3811 + t3821;
  t3842 = var2[2]*t3839;
  t3843 = t3119*t214*t2208;
  t3862 = t3109*t1792;
  t3864 = t3843 + t3862;
  t3865 = var2[0]*t3864;
  t3886 = t3798 + t3842 + t3865;
  t2319 = t681*t304*t2279;
  t2342 = -1.*t418*t2279*t829;
  t2558 = t2319 + t2342;
  t3561 = t304*t418*t1735;
  t3573 = t681*t1735*t829;
  t3607 = t3561 + t3573;
  t3256 = t304*t418*t1399;
  t3335 = t681*t1399*t829;
  t3405 = t3256 + t3335;
  t2958 = t681*t304*t1266;
  t2964 = -1.*t418*t1266*t829;
  t2996 = t2958 + t2964;
  t4412 = t3109*t3607;
  t4438 = -1.*t3119*t1862;
  t4442 = t4412 + t4438;
  t3121 = -1.*t681*t304;
  t3131 = t418*t829;
  t3135 = t3121 + t3131;
  t4695 = t3109*t3405;
  t4720 = -1.*t3119*t1558;
  t4738 = t4695 + t4720;
  t5100 = t3119*t214*t851;
  t5102 = t3109*t3135;
  t5141 = t5100 + t5102;
  t3714 = -1.*t1266*t214;
  t3716 = -1.*t913*t1548;
  t3729 = t3714 + t3716;
  t3739 = -1.*t1399*t214;
  t3746 = -1.*t913*t1792;
  t3748 = t3739 + t3746;
  t5219 = t3119*t851;
  t5244 = -1.*t3109*t214*t2042;
  t5261 = t5219 + t5244;
  t5272 = var2[1]*t5261;
  t5296 = -1.*t3109*t214*t2121;
  t5305 = t3119*t1548;
  t5326 = t5296 + t5305;
  t5327 = var2[2]*t5326;
  t5336 = -1.*t3109*t214*t2208;
  t5356 = t3119*t1792;
  t5364 = t5336 + t5356;
  t5367 = var2[0]*t5364;
  t5373 = t5272 + t5327 + t5367;
  t3894 = t304*t418*t2279;
  t3898 = t681*t2279*t829;
  t3914 = t3894 + t3898;
  t4197 = t913*t1735;
  t4272 = -1.*t214*t2558;
  t4322 = t4197 + t4272;
  t4751 = t304*t418*t1266;
  t4785 = t681*t1266*t829;
  t4791 = t4751 + t4785;
  t4899 = t913*t2279;
  t4901 = -1.*t214*t2996;
  t4906 = t4899 + t4901;
  t5407 = t3119*t3607;
  t5411 = t3109*t1862;
  t5415 = t5407 + t5411;
  t5427 = t3119*t3405;
  t5428 = t3109*t1558;
  t5429 = t5427 + t5428;
  t5511 = -1.*t1139;
  t5517 = 1. + t5511;
  t5520 = -0.50321*t5517;
  t5521 = -0.23321*t1139;
  t5522 = t5520 + t5521;
  t5545 = -1.*t681;
  t5551 = 1. + t5545;
  t5564 = -1.*t1068;
  t5570 = 1. + t5564;
  t5571 = -0.28121*t5570;
  t5572 = t1068*t5522;
  t5611 = 0.27*t1192*t1195;
  t5618 = t5571 + t5572 + t5611;
  t5506 = 0.28121*t1192;
  t5523 = t5522*t1192;
  t5527 = -0.27*t1068*t1195;
  t5533 = t5506 + t5523 + t5527;
  t5559 = -0.15121*t5551;
  t5631 = t681*t5618;
  t5632 = t5559 + t5631;
  t5633 = t304*t5632;
  t5689 = 0.15121*t5551;
  t5690 = 0.15121*t681;
  t5692 = 0.15121*t418;
  t5744 = t418*t5618;
  t5746 = t5689 + t5690 + t5692 + t5744;
  t5785 = -1.*t5746*t829;
  t5806 = t5633 + t5785;
  t5884 = t5533*t214;
  t5893 = t913*t5806;
  t5894 = t5884 + t5893;
  t5539 = -1.*t5533*t214;
  t5808 = -1.*t913*t5806;
  t5809 = t5539 + t5808;
  t7809 = t913*t5533;
  t7866 = -1.*t214*t5806;
  t8073 = t7809 + t7866;
  t6901 = t304*t5746;
  t7519 = t5632*t829;
  t7520 = t6901 + t7519;
  t7792 = -1.*t3135*t7520;
  t7794 = -1.*t913*t851*t5894;
  t8095 = t214*t851*t8073;
  t8483 = t7792 + t7794 + t8095;
  t18216 = -1.*t304*t5746;
  t18220 = -1.*t5632*t829;
  t18221 = t18216 + t18220;
  t10062 = t3405*t7520;
  t10076 = t2863*t5894;
  t10278 = t1558*t8073;
  t10298 = t10062 + t10076 + t10278;
  t13155 = t3135*t7520;
  t13200 = t913*t851*t5894;
  t14775 = -1.*t214*t851*t8073;
  t14791 = t13155 + t13200 + t14775;
  t18209 = Power(t913,2);
  t18333 = Power(t214,2);
  t15416 = -1.*t3607*t7520;
  t15494 = -1.*t2692*t5894;
  t15620 = -1.*t1862*t8073;
  t15629 = t15416 + t15494 + t15620;
  t16521 = -1.*t3405*t7520;
  t16706 = -1.*t2863*t5894;
  t17153 = -1.*t1558*t8073;
  t17231 = t16521 + t16706 + t17153;
  t17924 = t3607*t7520;
  t17934 = t2692*t5894;
  t17952 = t1862*t8073;
  t17959 = t17924 + t17934 + t17952;
  t18181 = t913*t2121*t8483;
  t18423 = -1.*t851*t7520;
  t19928 = -0.15121*t418;
  t19932 = -1.*t418*t5618;
  t19936 = t19928 + t19932;
  t19941 = t304*t19936;
  t19980 = t5690 + t5631;
  t19991 = -1.*t19980*t829;
  t19993 = t19941 + t19991;
  t18445 = -1.*t913*t2042*t5894;
  t18455 = t214*t2042*t8073;
  t18550 = t1548*t7520;
  t20036 = t304*t19980;
  t20038 = t19936*t829;
  t20073 = t20036 + t20038;
  t18573 = t913*t2121*t5894;
  t18574 = -1.*t214*t2121*t8073;
  t18653 = t913*t2042*t10298;
  t18759 = t913*t2208*t14791;
  t18782 = t851*t7520;
  t19009 = t913*t2042*t5894;
  t19074 = -1.*t214*t2042*t8073;
  t19217 = -1.*t1792*t7520;
  t19411 = -1.*t913*t2208*t5894;
  t19425 = t214*t2208*t8073;
  t19441 = t913*t2042*t15629;
  t19455 = -1.*t1548*t7520;
  t19476 = -1.*t913*t2121*t5894;
  t19555 = t214*t2121*t8073;
  t19579 = t1792*t7520;
  t19700 = t913*t2208*t5894;
  t19784 = -1.*t214*t2208*t8073;
  t19908 = t913*t2208*t17231;
  t19909 = t913*t2121*t17959;
  t22862 = -0.28121*t1192;
  t22895 = -1.*t5522*t1192;
  t22896 = 0.27*t1068*t1195;
  t22897 = t22862 + t22895 + t22896;
  t22930 = 0.28121*t1068;
  t22931 = t22930 + t5572 + t5611;
  t22941 = t681*t304*t22897;
  t22953 = -1.*t418*t22897*t829;
  t23017 = t22941 + t22953;
  t2231 = t1735*t214;
  t2598 = t913*t2558;
  t2608 = t2231 + t2598;
  t22901 = t304*t418*t22897;
  t22902 = t681*t22897*t829;
  t22908 = t22901 + t22902;
  t22937 = t22931*t214;
  t23037 = t913*t23017;
  t23070 = t22937 + t23037;
  t23095 = t913*t22931;
  t23097 = -1.*t214*t23017;
  t23098 = t23095 + t23097;
  t23316 = 0.27*t1139*t1192;
  t23321 = t23316 + t5527;
  t23339 = -0.27*t1068*t1139;
  t23340 = -0.27*t1192*t1195;
  t23344 = t23339 + t23340;
  t23351 = t681*t304*t23321;
  t23352 = -1.*t418*t23321*t829;
  t23353 = t23351 + t23352;
  t23328 = t304*t418*t23321;
  t23334 = t681*t23321*t829;
  t23335 = t23328 + t23334;
  t23345 = t23344*t214;
  t23362 = t913*t23353;
  t23367 = t23345 + t23362;
  t23407 = t913*t23344;
  t23408 = -1.*t214*t23353;
  t23409 = t23407 + t23408;
  t2901 = t2279*t214;
  t3000 = t913*t2996;
  t3004 = t2901 + t3000;
  t18440 = -1.*t3135*t5806;
  t18551 = t3405*t5806;
  t18789 = t3135*t5806;
  t19363 = -1.*t3607*t5806;
  t19456 = -1.*t3405*t5806;
  t19584 = t3607*t5806;
  t23728 = -1.*t851*t5806;
  t23734 = t7792 + t23728;
  t23770 = t1548*t23734;
  t20074 = -1.*t3135*t20073;
  t23772 = -1.*t2042*t5806;
  t20276 = t3405*t20073;
  t23824 = t2121*t5806;
  t23913 = t5533*t1266;
  t23934 = t1548*t5806;
  t23947 = t23913 + t10062 + t23934;
  t23954 = t851*t23947;
  t23986 = t851*t5806;
  t23993 = t13155 + t23986;
  t24001 = t1792*t23993;
  t22203 = t3135*t20073;
  t24016 = t2042*t5806;
  t22251 = -1.*t3607*t20073;
  t24115 = -1.*t2208*t5806;
  t24167 = -1.*t5533*t1399;
  t24207 = -1.*t1792*t5806;
  t24425 = t24167 + t15416 + t24207;
  t24430 = t851*t24425;
  t22464 = -1.*t3405*t20073;
  t24584 = -1.*t2121*t5806;
  t24642 = -1.*t5533*t1266;
  t24653 = -1.*t1548*t5806;
  t24711 = t24642 + t16521 + t24653;
  t24725 = t1792*t24711;
  t22570 = t3607*t20073;
  t24768 = t2208*t5806;
  t24785 = t5533*t1399;
  t24788 = t1792*t5806;
  t24810 = t24785 + t17924 + t24788;
  t24812 = t1548*t24810;
  t22929 = t3135*t22908;
  t23145 = -1.*t22908*t3607;
  t23155 = -1.*t3914*t7520;
  t23222 = t22908*t3607;
  t23238 = t3914*t7520;
  t23261 = -1.*t22908*t3405;
  t23274 = -1.*t3135*t22908;
  t23303 = t22908*t3405;
  t23336 = t3135*t23335;
  t23432 = -1.*t23335*t3607;
  t23451 = t23335*t3607;
  t23464 = -1.*t23335*t3405;
  t23465 = -1.*t4791*t7520;
  t23524 = -1.*t3135*t23335;
  t23536 = t23335*t3405;
  t23538 = t4791*t7520;
  t25151 = t5533*t1735;
  t25159 = t1399*t22931;
  t26153 = Power(t681,2);
  t26160 = Power(t418,2);
  t25207 = -1.*t22931*t1266;
  t26123 = t418*t5632;
  t26126 = -1.*t681*t5746;
  t26135 = t26123 + t26126;
  t26137 = -1.*t418*t5632;
  t26138 = t681*t5746;
  t26139 = t26137 + t26138;
  t26216 = -1.*t681*t1399*t5632;
  t26230 = -1.*t418*t1399*t5746;
  t26268 = t24642 + t26216 + t26230;
  t25573 = t1399*t23344;
  t26539 = t681*t1735*t5632;
  t26566 = t418*t1735*t5746;
  t26574 = t24785 + t26539 + t26566;
  t25594 = -1.*t2279*t5533;
  t25595 = -1.*t23344*t1266;
  t27520 = 0.15121*t2279;
  t27522 = 0.15121*t1399;
  t27527 = t27520 + t27522;
  t27533 = var2[0]*t27527;
  t27537 = t1735*t5618;
  t27541 = t24785 + t27537;
  t27574 = -1.*t1399*t5618;
  t27598 = t27574 + t24642;
  t27937 = 0.28121*t1139;
  t27939 = t5522*t1139;
  p_output1[0]=t1862*var2[0] - 1.*t214*t851*var2[1] + t1558*var2[2];
  p_output1[1]=t2215;
  p_output1[2]=t2215;
  p_output1[3]=t2608*var2[0] + t2692*var2[2];
  p_output1[4]=t2863*var2[0] + t3004*var2[2];
  p_output1[5]=t2692;
  p_output1[6]=t851*t913;
  p_output1[7]=t2863;
  p_output1[8]=(-1.*t1862*t3109 - 1.*t3119*t3607)*var2[0] + (-1.*t3119*t3135 + t214*t3109*t851)*var2[1] + (-1.*t1558*t3109 - 1.*t3119*t3405)*var2[2];
  p_output1[9]=-1.*t3119*t3748*var2[0] + t3119*t851*t913*var2[1] - 1.*t3119*t3729*var2[2];
  p_output1[10]=t3886;
  p_output1[11]=t3886;
  p_output1[12]=(t3109*t3914 - 1.*t3119*t4322)*var2[0] + t4442*var2[2];
  p_output1[13]=t4738*var2[0] + (t3109*t4791 - 1.*t3119*t4906)*var2[2];
  p_output1[14]=t4442;
  p_output1[15]=t5141;
  p_output1[16]=t4738;
  p_output1[17]=t4442*var2[0] + t5141*var2[1] + t4738*var2[2];
  p_output1[18]=t3109*t3748*var2[0] - 1.*t3109*t851*t913*var2[1] + t3109*t3729*var2[2];
  p_output1[19]=t5373;
  p_output1[20]=t5373;
  p_output1[21]=(t3119*t3914 + t3109*t4322)*var2[0] + t5415*var2[2];
  p_output1[22]=t5429*var2[0] + (t3119*t4791 + t3109*t4906)*var2[2];
  p_output1[23]=t5415;
  p_output1[24]=t3119*t3135 - 1.*t214*t3109*t851;
  p_output1[25]=t5429;
  p_output1[26]=(t1558*t8483 - 1.*t10298*t214*t851 + t2863*(t214*t5809*t851 + t214*t5894*t851) + (t1558*t5809 + t1558*t5894 + t2863*t8073 + t3729*t8073)*t851*t913)*var2[0] + (t1558*t17959 + t17231*t1862 + t2692*(-1.*t1558*t5809 - 1.*t1558*t5894 - 1.*t2863*t8073 - 1.*t3729*t8073) + t2863*(t1862*t5809 + t1862*t5894 + t2692*t8073 + t3748*t8073))*var2[1] + (t14791*t1862 - 1.*t15629*t214*t851 + t2692*(-1.*t214*t5809*t851 - 1.*t214*t5894*t851) + (-1.*t1862*t5809 - 1.*t1862*t5894 - 1.*t2692*t8073 - 1.*t3748*t8073)*t851*t913)*var2[2];
  p_output1[27]=(t18181 + t18653 + t2863*(t18423 + t18440 + t18445 + t18455 - 1.*t18209*t18221*t851 - 1.*t18221*t18333*t851) + t851*t913*(t18550 + t18551 + t18573 + t18574 - 1.*t1558*t18221*t214 + t18221*t2863*t913))*var2[0] + (t19908 + t19909 + t2863*(t19579 + t19584 + t19700 + t19784 - 1.*t18221*t1862*t214 + t18221*t2692*t913) + t2692*(t19455 + t19456 + t19476 + t19555 + t1558*t18221*t214 - 1.*t18221*t2863*t913))*var2[1] + (t18759 + t19441 + t2692*(t18782 + t18789 + t19009 + t19074 + t18209*t18221*t851 + t18221*t18333*t851) + t851*t913*(t19217 + t19363 + t19411 + t19425 + t18221*t1862*t214 - 1.*t18221*t2692*t913))*var2[2];
  p_output1[28]=(t18181 + t18653 + t2863*(t18423 + t18445 + t18455 + t20074 - 1.*t18209*t19993*t851 - 1.*t18333*t19993*t851) + t851*t913*(t18550 + t18573 + t18574 + t20276 - 1.*t1558*t19993*t214 + t19993*t2863*t913))*var2[0] + (t19908 + t19909 + t2863*(t19579 + t19700 + t19784 - 1.*t1862*t19993*t214 + t22570 + t19993*t2692*t913) + t2692*(t19455 + t19476 + t19555 + t1558*t19993*t214 + t22464 - 1.*t19993*t2863*t913))*var2[1] + (t18759 + t19441 + t2692*(t18782 + t19009 + t19074 + t22203 + t18209*t19993*t851 + t18333*t19993*t851) + t851*t913*(t19217 + t19411 + t19425 + t1862*t19993*t214 + t22251 - 1.*t19993*t2692*t913))*var2[2];
  p_output1[29]=(t2692*t8483 + (t17924 + t17934 + t17952 + t1558*t23098 + t23303 + t23070*t2863)*t851*t913 + t2863*(t23274 + t214*t23098*t851 - 1.*t23070*t851*t913))*var2[0] + (t17231*t2608 + t17959*t2692 + t2692*(t15416 + t15494 + t15620 - 1.*t1558*t23098 + t23261 - 1.*t23070*t2863) + t2863*(t1862*t23098 + t23222 + t23238 + t23070*t2692 + t2608*t5894 + t4322*t8073))*var2[1] + (t14791*t2608 + (-1.*t1862*t23098 + t23145 + t23155 - 1.*t23070*t2692 - 1.*t2608*t5894 - 1.*t4322*t8073)*t851*t913 + t2692*(t22929 - 1.*t214*t23098*t851 + t23070*t851*t913))*var2[2];
  p_output1[30]=(t3004*t8483 + (t1558*t23409 + t23536 + t23538 + t23367*t2863 + t3004*t5894 + t4906*t8073)*t851*t913 + t2863*(t23524 + t214*t23409*t851 - 1.*t23367*t851*t913))*var2[0] + (t17231*t2863 + (t10062 + t10076 + t10278 + t1862*t23409 + t23451 + t23367*t2692)*t2863 + t17959*t3004 + t2692*(-1.*t1558*t23409 + t23464 + t23465 - 1.*t23367*t2863 - 1.*t3004*t5894 - 1.*t4906*t8073))*var2[1] + (t14791*t2863 + (t16521 + t16706 + t17153 - 1.*t1862*t23409 + t23432 - 1.*t23367*t2692)*t851*t913 + t2692*(t23336 - 1.*t214*t23409*t851 + t23367*t851*t913))*var2[2];
  p_output1[31]=t2863*t8483 + t10298*t851*t913;
  p_output1[32]=t17231*t2692 + t17959*t2863;
  p_output1[33]=t14791*t2692 + t15629*t851*t913;
  p_output1[34]=(t23770 + t23954 + (t1548*t18221 + t18550 + t18551 + t23824)*t3135 + t3405*(t18423 + t18440 + t23772 - 1.*t18221*t851))*var2[0] + (t24725 + t24812 + (t1792*t18221 + t19579 + t19584 + t24768)*t3405 + (-1.*t1548*t18221 + t19455 + t19456 + t24584)*t3607)*var2[1] + (t24001 + t24430 + (-1.*t1792*t18221 + t19217 + t19363 + t24115)*t3135 + t3607*(t18782 + t18789 + t24016 + t18221*t851))*var2[2];
  p_output1[35]=(t23770 + t23954 + (t18550 + t1548*t19993 + t20276 + t23824)*t3135 + t3405*(t18423 + t20074 + t23772 - 1.*t19993*t851))*var2[0] + (t24725 + t24812 + (t19579 + t1792*t19993 + t22570 + t24768)*t3405 + (t19455 - 1.*t1548*t19993 + t22464 + t24584)*t3607)*var2[1] + (t24001 + t24430 + (t19217 - 1.*t1792*t19993 + t22251 + t24115)*t3135 + t3607*(t18782 + t22203 + t24016 + t19993*t851))*var2[2];
  p_output1[36]=((t17924 + t1266*t22931 + t1548*t23017 + t23303 + t24785 + t24788)*t3135 + t23734*t3607 + t3405*(t23274 - 1.*t23017*t851))*var2[0] + (t24810*t3607 + (t15416 - 1.*t1548*t23017 + t23261 + t24167 + t24207 + t25207)*t3607 + t24711*t3914 + t3405*(t1792*t23017 + t23222 + t23238 + t25151 + t25159 + t2558*t5806))*var2[1] + (t23993*t3914 + t3135*(-1.*t1399*t22931 - 1.*t1792*t23017 + t23145 + t23155 - 1.*t1735*t5533 - 1.*t2558*t5806) + t3607*(t22929 + t23017*t851))*var2[2];
  p_output1[37]=(t23734*t4791 + t3135*(t1266*t23344 + t1548*t23353 + t23536 + t23538 + t2279*t5533 + t2996*t5806) + t3405*(t23524 - 1.*t23353*t851))*var2[0] + (t24711*t3405 + (t10062 + t1792*t23353 + t23451 + t23913 + t23934 + t25573)*t3405 + t24810*t4791 + t3607*(-1.*t1548*t23353 + t23464 + t23465 + t25594 + t25595 - 1.*t2996*t5806))*var2[1] + ((t16521 - 1.*t1399*t23344 - 1.*t1792*t23353 + t23432 + t24642 + t24653)*t3135 + t23993*t3405 + t3607*(t23336 + t23353*t851))*var2[2];
  p_output1[38]=t23947*t3135 + t23734*t3405;
  p_output1[39]=t24810*t3405 + t24711*t3607;
  p_output1[40]=t24425*t3135 + t23993*t3607;
  p_output1[41]=t1266*(-1.*t19936*t418 - 1.*t418*t5746 + t19980*t681 - 1.*t5632*t681)*var2[0] + (t1399*(-1.*t1399*t19980*t418 + t1399*t418*t5632 - 1.*t1399*t19936*t681 - 1.*t1399*t5746*t681) + t1266*(t1735*t19980*t418 - 1.*t1735*t418*t5632 + t1735*t19936*t681 + t1735*t5746*t681))*var2[1] + t1399*(t19936*t418 + t418*t5746 - 1.*t19980*t681 + t5632*t681)*var2[2];
  p_output1[42]=t1399*t26139*var2[0] + (t1735*t26268 + t1399*t26574 + t1399*(t24167 + t25207 - 1.*t1399*t22897*t26153 - 1.*t1399*t22897*t26160 - 1.*t1735*t418*t5746 - 1.*t1735*t5632*t681) + t1266*(t25151 + t25159 + t1735*t22897*t26153 + t1735*t22897*t26160 + t2279*t418*t5746 + t2279*t5632*t681))*var2[1] + t1735*t26135*var2[2];
  p_output1[43]=t2279*t26139*var2[0] + (t1266*t26268 + t2279*t26574 + t1399*(t25594 + t25595 - 1.*t1399*t23321*t26153 - 1.*t1399*t23321*t26160 - 1.*t1266*t418*t5746 - 1.*t1266*t5632*t681) + t1266*(t23913 + t25573 + t1735*t23321*t26153 + t1735*t23321*t26160 + t1399*t418*t5746 + t1399*t5632*t681))*var2[1] + t1266*t26135*var2[2];
  p_output1[44]=t1266*t26139;
  p_output1[45]=t1399*t26268 + t1266*t26574;
  p_output1[46]=t1399*t26135;
  p_output1[47]=t27533 + (t1399*t27541 + t1735*t27598 + t1399*(-1.*t1399*t22897 + t24167 + t25207 - 1.*t1735*t5618) + t1266*(t1735*t22897 + t25151 + t25159 + t2279*t5618))*var2[1];
  p_output1[48]=t27533 + (t2279*t27541 + t1266*t27598 + t1399*(-1.*t1399*t23321 + t25594 + t25595 - 1.*t1266*t5618) + t1266*(t1735*t23321 + t23913 + t25573 + t1399*t5618))*var2[1];
  p_output1[49]=0.15121*t1266 + 0.15121*t1735;
  p_output1[50]=-0.15121 + t1266*t27541 + t1399*t27598;
  p_output1[51]=(-0.27*Power(t1139,2) + t27937 + t27939)*var2[0] + (-0.28121*t1195 + 0.27*t1139*t1195 - 1.*t1195*t5522)*var2[2];
  p_output1[52]=0.28121*t1195 - 0.27*t1139*t1195 + t1195*t5522;
  p_output1[53]=0.27*Power(t1195,2) + t27937 + t27939;
  p_output1[54]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
