/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 14:27:11 GMT+02:00
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
  double t210;
  double t601;
  double t468;
  double t491;
  double t604;
  double t68;
  double t188;
  double t987;
  double t1286;
  double t1293;
  double t1327;
  double t584;
  double t627;
  double t966;
  double t1808;
  double t1902;
  double t976;
  double t2107;
  double t2119;
  double t305;
  double t1056;
  double t1203;
  double t1507;
  double t1608;
  double t1647;
  double t1707;
  double t2502;
  double t2924;
  double t2939;
  double t2994;
  double t3022;
  double t1826;
  double t1919;
  double t1954;
  double t2009;
  double t2010;
  double t2075;
  double t2081;
  double t3504;
  double t4055;
  double t4857;
  double t4872;
  double t4896;
  double t2113;
  double t2127;
  double t2142;
  double t2235;
  double t2247;
  double t2251;
  double t2281;
  double t5609;
  double t5878;
  double t5881;
  double t5898;
  double t5906;
  double t2522;
  double t2533;
  double t2874;
  double t2903;
  double t3077;
  double t3302;
  double t3322;
  double t3331;
  double t5978;
  double t5987;
  double t5995;
  double t6059;
  double t6287;
  double t3728;
  double t3736;
  double t3782;
  double t3791;
  double t4907;
  double t5044;
  double t5233;
  double t5248;
  double t6507;
  double t6511;
  double t6568;
  double t6667;
  double t6678;
  double t5701;
  double t5735;
  double t5749;
  double t5857;
  double t5922;
  double t5935;
  double t5939;
  double t5941;
  double t6845;
  double t6848;
  double t6849;
  double t6870;
  double t6886;
  double t1857;
  double t7215;
  double t7230;
  double t7220;
  double t7222;
  double t7226;
  double t7233;
  double t7234;
  double t7235;
  double t7236;
  double t7348;
  double t7453;
  double t7457;
  double t7471;
  double t7475;
  double t7393;
  double t7408;
  double t7427;
  double t7428;
  double t7486;
  double t7493;
  double t7516;
  double t7518;
  double t7527;
  double t7560;
  double t7565;
  double t7566;
  double t7598;
  double t7688;
  double t7697;
  double t7781;
  double t7790;
  double t7793;
  double t7794;
  double t8193;
  double t8194;
  double t8200;
  double t7843;
  double t7848;
  double t7853;
  double t7861;
  double t7950;
  double t8668;
  double t8669;
  double t8673;
  double t8117;
  double t8122;
  double t8123;
  double t8134;
  double t8143;
  double t9319;
  double t9741;
  double t10191;
  double t8172;
  double t8177;
  double t8201;
  double t6341;
  double t6378;
  double t8204;
  double t8206;
  double t8226;
  double t15019;
  double t15078;
  double t15088;
  double t8654;
  double t8656;
  double t8675;
  double t6679;
  double t6691;
  double t8861;
  double t8900;
  double t8934;
  double t15204;
  double t15215;
  double t15222;
  double t8989;
  double t9142;
  double t10596;
  double t6888;
  double t7104;
  double t10772;
  double t11718;
  double t14975;
  double t16968;
  double t16969;
  double t16970;
  double t7834;
  double t16979;
  double t16980;
  double t16981;
  double t16982;
  double t16983;
  double t16989;
  double t16990;
  double t16991;
  double t16987;
  double t16988;
  double t16992;
  double t7529;
  double t7530;
  double t16993;
  double t16994;
  double t16995;
  double t17000;
  double t17001;
  double t17002;
  double t17011;
  double t17012;
  double t17013;
  double t17016;
  double t17017;
  double t17018;
  double t17019;
  double t17204;
  double t17014;
  double t17202;
  double t17198;
  double t17211;
  double t17212;
  double t17213;
  double t17214;
  double t17215;
  double t17216;
  double t17239;
  double t17240;
  double t17241;
  double t17220;
  double t17221;
  double t17222;
  double t17223;
  double t17224;
  double t17225;
  double t17250;
  double t17251;
  double t17399;
  double t17229;
  double t17230;
  double t17231;
  double t17232;
  double t17233;
  double t17234;
  double t17408;
  double t17409;
  double t17410;
  double t17207;
  double t17418;
  double t17419;
  double t17420;
  double t17421;
  double t17422;
  double t17423;
  double t17428;
  double t17429;
  double t17430;
  double t17440;
  double t17441;
  double t17442;
  double t17443;
  double t17444;
  double t17448;
  double t17451;
  double t17452;
  double t17453;
  double t17465;
  double t17466;
  double t17467;
  double t17464;
  double t17469;
  double t17470;
  double t17471;
  double t17472;
  double t17477;
  double t17478;
  double t17479;
  double t17489;
  double t17490;
  double t17491;
  double t17499;
  double t17500;
  double t17688;
  double t17689;
  double t17690;
  double t17697;
  double t17698;
  double t17699;
  double t17694;
  double t17710;
  double t17711;
  double t17712;
  double t17713;
  double t17714;
  double t17719;
  double t17720;
  double t17721;
  double t17731;
  double t17732;
  double t17733;
  double t17741;
  double t17742;
  double t17743;
  double t17744;
  double t17745;
  double t17752;
  double t17753;
  double t17754;
  double t17746;
  double t17765;
  double t17766;
  double t17767;
  double t17768;
  double t17769;
  double t17774;
  double t17775;
  double t17776;
  double t17786;
  double t17787;
  double t17788;
  double t17796;
  double t17797;
  double t17798;
  double t17799;
  double t17800;
  double t17927;
  double t17929;
  double t17930;
  double t17801;
  double t17943;
  double t17944;
  double t17945;
  double t17947;
  double t17948;
  double t17953;
  double t17954;
  double t17955;
  double t17966;
  double t17968;
  double t17969;
  t210 = Sin(var1[3]);
  t601 = Cos(var1[3]);
  t468 = Cos(var1[5]);
  t491 = Sin(var1[4]);
  t604 = Sin(var1[5]);
  t68 = Cos(var1[4]);
  t188 = Sin(var1[9]);
  t987 = Cos(var1[9]);
  t1286 = t601*t468;
  t1293 = -1.*t210*t491*t604;
  t1327 = t1286 + t1293;
  t584 = t468*t210*t491;
  t627 = t601*t604;
  t966 = t584 + t627;
  t1808 = Sin(var1[12]);
  t1902 = Cos(var1[12]);
  t976 = -0.325*t966;
  t2107 = Sin(var1[15]);
  t2119 = Cos(var1[15]);
  t305 = 0.1575*t68*t188*t210;
  t1056 = -1.*t987;
  t1203 = 1. + t1056;
  t1507 = 0.1575*t1203*t1327;
  t1608 = -1.*t68*t188*t210;
  t1647 = t987*t1327;
  t1707 = t1608 + t1647;
  t2502 = Cos(var1[10]);
  t2924 = Sin(var1[10]);
  t2939 = -1.*t987*t68*t210;
  t2994 = -1.*t188*t1327;
  t3022 = t2939 + t2994;
  t1826 = -0.1575*t68*t1808*t210;
  t1919 = -1.*t1902;
  t1954 = 1. + t1919;
  t2009 = -0.1575*t1954*t1327;
  t2010 = -1.*t68*t1808*t210;
  t2075 = t1902*t1327;
  t2081 = t2010 + t2075;
  t3504 = Cos(var1[13]);
  t4055 = Sin(var1[13]);
  t4857 = -1.*t1902*t68*t210;
  t4872 = -1.*t1808*t1327;
  t4896 = t4857 + t4872;
  t2113 = -0.1575*t68*t2107*t210;
  t2127 = -1.*t2119;
  t2142 = 1. + t2127;
  t2235 = -0.1575*t2142*t1327;
  t2247 = -1.*t68*t2107*t210;
  t2251 = t2119*t1327;
  t2281 = t2247 + t2251;
  t5609 = Cos(var1[16]);
  t5878 = Sin(var1[16]);
  t5881 = -1.*t2119*t68*t210;
  t5898 = -1.*t2107*t1327;
  t5906 = t5881 + t5898;
  t2522 = -1.*t2502;
  t2533 = 1. + t2522;
  t2874 = -0.325*t2533*t966;
  t2903 = 0.2255*t1707;
  t3077 = 0.325*t2924*t3022;
  t3302 = t2502*t966;
  t3322 = t2924*t3022;
  t3331 = t3302 + t3322;
  t5978 = Sin(var1[11]);
  t5987 = -1.*t2924*t966;
  t5995 = t2502*t3022;
  t6059 = t5987 + t5995;
  t6287 = Cos(var1[11]);
  t3728 = -1.*t3504;
  t3736 = 1. + t3728;
  t3782 = 0.325*t3736*t966;
  t3791 = -0.2255*t2081;
  t4907 = -0.325*t4055*t4896;
  t5044 = t3504*t966;
  t5233 = t4055*t4896;
  t5248 = t5044 + t5233;
  t6507 = Sin(var1[14]);
  t6511 = -1.*t4055*t966;
  t6568 = t3504*t4896;
  t6667 = t6511 + t6568;
  t6678 = Cos(var1[14]);
  t5701 = -1.*t5609;
  t5735 = 1. + t5701;
  t5749 = -0.325*t5735*t966;
  t5857 = -0.2255*t2281;
  t5922 = 0.325*t5878*t5906;
  t5935 = t5609*t966;
  t5939 = t5878*t5906;
  t5941 = t5935 + t5939;
  t6845 = Sin(var1[17]);
  t6848 = -1.*t5878*t966;
  t6849 = t5609*t5906;
  t6870 = t6848 + t6849;
  t6886 = Cos(var1[17]);
  t1857 = 0.325*t966;
  t7215 = Cos(var1[6]);
  t7230 = Sin(var1[6]);
  t7220 = -1.*t7215;
  t7222 = 1. + t7220;
  t7226 = 0.1575*t7222*t1327;
  t7233 = 0.1575*t68*t210*t7230;
  t7234 = t7215*t1327;
  t7235 = -1.*t68*t210*t7230;
  t7236 = t7234 + t7235;
  t7348 = Cos(var1[7]);
  t7453 = -1.*t68*t7215*t210;
  t7457 = -1.*t1327*t7230;
  t7471 = t7453 + t7457;
  t7475 = Sin(var1[7]);
  t7393 = -1.*t7348;
  t7408 = 1. + t7393;
  t7427 = 0.325*t7408*t966;
  t7428 = 0.2255*t7236;
  t7486 = -0.325*t7471*t7475;
  t7493 = t7348*t966;
  t7516 = t7471*t7475;
  t7518 = t7493 + t7516;
  t7527 = Cos(var1[8]);
  t7560 = t7348*t7471;
  t7565 = -1.*t966*t7475;
  t7566 = t7560 + t7565;
  t7598 = Sin(var1[8]);
  t7688 = 0.325*t601*t68*t468;
  t7697 = 0.1575*t601*t188*t491;
  t7781 = 0.1575*t1203*t601*t68*t604;
  t7790 = -1.*t601*t188*t491;
  t7793 = t987*t601*t68*t604;
  t7794 = t7790 + t7793;
  t8193 = -1.*t987*t601*t491;
  t8194 = -1.*t601*t68*t188*t604;
  t8200 = t8193 + t8194;
  t7843 = -0.1575*t601*t1808*t491;
  t7848 = -0.1575*t1954*t601*t68*t604;
  t7853 = -1.*t601*t1808*t491;
  t7861 = t1902*t601*t68*t604;
  t7950 = t7853 + t7861;
  t8668 = -1.*t1902*t601*t491;
  t8669 = -1.*t601*t68*t1808*t604;
  t8673 = t8668 + t8669;
  t8117 = -0.1575*t601*t2107*t491;
  t8122 = -0.1575*t2142*t601*t68*t604;
  t8123 = -1.*t601*t2107*t491;
  t8134 = t2119*t601*t68*t604;
  t8143 = t8123 + t8134;
  t9319 = -1.*t2119*t601*t491;
  t9741 = -1.*t601*t68*t2107*t604;
  t10191 = t9319 + t9741;
  t8172 = 0.325*t2533*t601*t68*t468;
  t8177 = 0.2255*t7794;
  t8201 = 0.325*t2924*t8200;
  t6341 = -1.*t6287;
  t6378 = 1. + t6341;
  t8204 = -1.*t2502*t601*t68*t468;
  t8206 = t2924*t8200;
  t8226 = t8204 + t8206;
  t15019 = t601*t68*t468*t2924;
  t15078 = t2502*t8200;
  t15088 = t15019 + t15078;
  t8654 = -0.325*t3736*t601*t68*t468;
  t8656 = -0.2255*t7950;
  t8675 = -0.325*t4055*t8673;
  t6679 = -1.*t6678;
  t6691 = 1. + t6679;
  t8861 = -1.*t3504*t601*t68*t468;
  t8900 = t4055*t8673;
  t8934 = t8861 + t8900;
  t15204 = t601*t68*t468*t4055;
  t15215 = t3504*t8673;
  t15222 = t15204 + t15215;
  t8989 = 0.325*t5735*t601*t68*t468;
  t9142 = -0.2255*t8143;
  t10596 = 0.325*t5878*t10191;
  t6888 = -1.*t6886;
  t7104 = 1. + t6888;
  t10772 = -1.*t5609*t601*t68*t468;
  t11718 = t5878*t10191;
  t14975 = t10772 + t11718;
  t16968 = t601*t68*t468*t5878;
  t16969 = t5609*t10191;
  t16970 = t16968 + t16969;
  t7834 = -0.325*t601*t68*t468;
  t16979 = 0.1575*t601*t68*t7222*t604;
  t16980 = 0.1575*t601*t491*t7230;
  t16981 = t601*t68*t7215*t604;
  t16982 = -1.*t601*t491*t7230;
  t16983 = t16981 + t16982;
  t16989 = -1.*t601*t7215*t491;
  t16990 = -1.*t601*t68*t604*t7230;
  t16991 = t16989 + t16990;
  t16987 = -0.325*t601*t68*t468*t7408;
  t16988 = 0.2255*t16983;
  t16992 = -0.325*t16991*t7475;
  t7529 = -1.*t7527;
  t7530 = 1. + t7529;
  t16993 = -1.*t601*t68*t468*t7348;
  t16994 = t16991*t7475;
  t16995 = t16993 + t16994;
  t17000 = t7348*t16991;
  t17001 = t601*t68*t468*t7475;
  t17002 = t17000 + t17001;
  t17011 = t601*t468*t491;
  t17012 = -1.*t210*t604;
  t17013 = t17011 + t17012;
  t17016 = t468*t210;
  t17017 = t601*t491*t604;
  t17018 = t17016 + t17017;
  t17019 = -0.325*t17018;
  t17204 = 0.325*t17018;
  t17014 = 0.1575*t1203*t17013;
  t17202 = -0.1575*t1954*t17013;
  t17198 = -0.1575*t2142*t17013;
  t17211 = 0.2255*t987*t17013;
  t17212 = -0.325*t188*t2924*t17013;
  t17213 = -0.325*t2533*t17018;
  t17214 = -1.*t188*t2924*t17013;
  t17215 = t2502*t17018;
  t17216 = t17214 + t17215;
  t17239 = -1.*t2502*t188*t17013;
  t17240 = -1.*t2924*t17018;
  t17241 = t17239 + t17240;
  t17220 = -0.2255*t1902*t17013;
  t17221 = 0.325*t1808*t4055*t17013;
  t17222 = 0.325*t3736*t17018;
  t17223 = -1.*t1808*t4055*t17013;
  t17224 = t3504*t17018;
  t17225 = t17223 + t17224;
  t17250 = -1.*t3504*t1808*t17013;
  t17251 = -1.*t4055*t17018;
  t17399 = t17250 + t17251;
  t17229 = -0.2255*t2119*t17013;
  t17230 = -0.325*t2107*t5878*t17013;
  t17231 = -0.325*t5735*t17018;
  t17232 = -1.*t2107*t5878*t17013;
  t17233 = t5609*t17018;
  t17234 = t17232 + t17233;
  t17408 = -1.*t5609*t2107*t17013;
  t17409 = -1.*t5878*t17018;
  t17410 = t17408 + t17409;
  t17207 = 0.1575*t7222*t17013;
  t17418 = 0.2255*t7215*t17013;
  t17419 = 0.325*t7408*t17018;
  t17420 = 0.325*t17013*t7230*t7475;
  t17421 = t7348*t17018;
  t17422 = -1.*t17013*t7230*t7475;
  t17423 = t17421 + t17422;
  t17428 = -1.*t7348*t17013*t7230;
  t17429 = -1.*t17018*t7475;
  t17430 = t17428 + t17429;
  t17440 = -0.1575*t601*t68*t7215;
  t17441 = 0.1575*t17018*t7230;
  t17442 = t601*t68*t7215;
  t17443 = -1.*t17018*t7230;
  t17444 = t17442 + t17443;
  t17448 = 0.2255*t17444;
  t17451 = -1.*t7215*t17018;
  t17452 = -1.*t601*t68*t7230;
  t17453 = t17451 + t17452;
  t17465 = -1.*t601*t468*t491;
  t17466 = t210*t604;
  t17467 = t17465 + t17466;
  t17464 = -0.325*t7348*t17444;
  t17469 = 0.325*t17467*t7475;
  t17470 = t7348*t17444;
  t17471 = -1.*t17467*t7475;
  t17472 = t17470 + t17471;
  t17477 = -1.*t7348*t17467;
  t17478 = -1.*t17444*t7475;
  t17479 = t17477 + t17478;
  t17489 = t7348*t17467;
  t17490 = t17444*t7475;
  t17491 = t17489 + t17490;
  t17499 = -0.1575*t987*t601*t68;
  t17500 = 0.1575*t188*t17018;
  t17688 = t987*t601*t68;
  t17689 = -1.*t188*t17018;
  t17690 = t17688 + t17689;
  t17697 = -1.*t601*t68*t188;
  t17698 = -1.*t987*t17018;
  t17699 = t17697 + t17698;
  t17694 = 0.2255*t17690;
  t17710 = -0.325*t2924*t17467;
  t17711 = 0.325*t2502*t17690;
  t17712 = -1.*t2924*t17467;
  t17713 = t2502*t17690;
  t17714 = t17712 + t17713;
  t17719 = -1.*t2502*t17467;
  t17720 = -1.*t2924*t17690;
  t17721 = t17719 + t17720;
  t17731 = t2502*t17467;
  t17732 = t2924*t17690;
  t17733 = t17731 + t17732;
  t17741 = 0.1575*t1902*t601*t68;
  t17742 = -0.1575*t1808*t17018;
  t17743 = t1902*t601*t68;
  t17744 = -1.*t1808*t17018;
  t17745 = t17743 + t17744;
  t17752 = -1.*t601*t68*t1808;
  t17753 = -1.*t1902*t17018;
  t17754 = t17752 + t17753;
  t17746 = -0.2255*t17745;
  t17765 = 0.325*t4055*t17467;
  t17766 = -0.325*t3504*t17745;
  t17767 = -1.*t4055*t17467;
  t17768 = t3504*t17745;
  t17769 = t17767 + t17768;
  t17774 = -1.*t3504*t17467;
  t17775 = -1.*t4055*t17745;
  t17776 = t17774 + t17775;
  t17786 = t3504*t17467;
  t17787 = t4055*t17745;
  t17788 = t17786 + t17787;
  t17796 = 0.1575*t2119*t601*t68;
  t17797 = -0.1575*t2107*t17018;
  t17798 = t2119*t601*t68;
  t17799 = -1.*t2107*t17018;
  t17800 = t17798 + t17799;
  t17927 = -1.*t601*t68*t2107;
  t17929 = -1.*t2119*t17018;
  t17930 = t17927 + t17929;
  t17801 = -0.2255*t17800;
  t17943 = -0.325*t5878*t17467;
  t17944 = 0.325*t5609*t17800;
  t17945 = -1.*t5878*t17467;
  t17947 = t5609*t17800;
  t17948 = t17945 + t17947;
  t17953 = -1.*t5609*t17467;
  t17954 = -1.*t5878*t17800;
  t17955 = t17953 + t17954;
  t17966 = t5609*t17467;
  t17968 = t5878*t17800;
  t17969 = t17966 + t17968;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-26.977500000000003*(t1826 + t1857 + t2009 - 0.1575*t2081) - 6.1312500000000005*(t1507 + t2874 + t2903 + t305 + t3077 - 0.325*t3331) - 6.1312500000000005*(t1826 + t2009 + t3782 + t3791 + t4907 + 0.325*t5248) - 6.1312500000000005*(t2113 + t2235 + t5749 + t5857 + t5922 - 0.325*t5941) - 1.9620000000000002*(t1507 + t2874 + t2903 + t305 + t3077 - 0.575*t5978*t6059 - 0.575*(-1.*t5978*t6059 + t3331*t6287) - 0.575*t3331*t6378) - 1.9620000000000002*(t1826 + t2009 + t3782 + t3791 + t4907 + 0.075*t6507*t6667 + 0.075*(-1.*t6507*t6667 + t5248*t6678) + 0.075*t5248*t6691) - 1.9620000000000002*(t2113 + t2235 + t5749 + t5857 + t5922 - 0.575*t6845*t6870 - 0.575*(-1.*t6845*t6870 + t5941*t6886) - 0.575*t5941*t7104) - 26.977500000000003*(t1857 + t7226 + t7233 + 0.1575*t7236) - 6.1312500000000005*(t7226 + t7233 + t7427 + t7428 + t7486 + 0.325*t7518) - 1.9620000000000002*(t7226 + t7233 + t7427 + t7428 + t7486 + 0.075*t7518*t7530 + 0.075*t7566*t7598 + 0.075*(t7518*t7527 - 1.*t7566*t7598)) - 26.977500000000003*(t2113 + t2235 - 0.1575*t2281 + t976) - 26.977500000000003*(t1507 + 0.1575*t1707 + t305 + t976);
  p_output1[4]=-6.1312500000000005*(t16979 + t16980 + t16987 + t16988 + t16992 + 0.325*t16995) - 1.9620000000000002*(t16979 + t16980 + t16987 + t16988 + t16992 + 0.075*t16995*t7530 + 0.075*t17002*t7598 + 0.075*(t16995*t7527 - 1.*t17002*t7598)) - 26.977500000000003*(t7688 + t7697 + t7781 + 0.1575*t7794) - 26.977500000000003*(t16979 + t16980 + 0.1575*t16983 + t7834) - 26.977500000000003*(t7834 + t7843 + t7848 - 0.1575*t7950) - 26.977500000000003*(t7688 + t8117 + t8122 - 0.1575*t8143) - 6.1312500000000005*(t7697 + t7781 + t8172 + t8177 + t8201 - 0.325*t8226) - 1.9620000000000002*(-0.575*t15088*t5978 + t7697 + t7781 + t8172 + t8177 + t8201 - 0.575*t6378*t8226 - 0.575*(-1.*t15088*t5978 + t6287*t8226)) - 6.1312500000000005*(t7843 + t7848 + t8654 + t8656 + t8675 + 0.325*t8934) - 1.9620000000000002*(0.075*t15222*t6507 + t7843 + t7848 + t8654 + t8656 + t8675 + 0.075*t6691*t8934 + 0.075*(-1.*t15222*t6507 + t6678*t8934)) - 6.1312500000000005*(t10596 - 0.325*t14975 + t8117 + t8122 + t8989 + t9142) - 1.9620000000000002*(t10596 - 0.575*t16970*t6845 - 0.575*(-1.*t16970*t6845 + t14975*t6886) - 0.575*t14975*t7104 + t8117 + t8122 + t8989 + t9142);
  p_output1[5]=-6.1312500000000005*(t17014 + t17211 + t17212 + t17213 - 0.325*t17216) - 6.1312500000000005*(t17202 + t17220 + t17221 + t17222 + 0.325*t17225) - 6.1312500000000005*(t17198 + t17229 + t17230 + t17231 - 0.325*t17234) - 6.1312500000000005*(t17207 + t17418 + t17419 + t17420 + 0.325*t17423) - 26.977500000000003*(t17202 + t17204 - 0.1575*t17013*t1902) - 26.977500000000003*(t17019 + t17198 - 0.1575*t17013*t2119) - 1.9620000000000002*(t17014 + t17211 + t17212 + t17213 - 0.575*t17241*t5978 - 0.575*(-1.*t17241*t5978 + t17216*t6287) - 0.575*t17216*t6378) - 1.9620000000000002*(t17202 + t17220 + t17221 + t17222 + 0.075*t17399*t6507 + 0.075*(-1.*t17399*t6507 + t17225*t6678) + 0.075*t17225*t6691) - 1.9620000000000002*(t17198 + t17229 + t17230 + t17231 - 0.575*t17410*t6845 - 0.575*(-1.*t17410*t6845 + t17234*t6886) - 0.575*t17234*t7104) - 26.977500000000003*(t17204 + t17207 + 0.1575*t17013*t7215) - 1.9620000000000002*(t17207 + t17418 + t17419 + t17420 + 0.075*t17423*t7530 + 0.075*t17430*t7598 + 0.075*(t17423*t7527 - 1.*t17430*t7598)) - 26.977500000000003*(t17014 + t17019 + 0.1575*t17013*t987);
  p_output1[6]=-26.977500000000003*(t17440 + t17441 + 0.1575*t17444) - 6.1312500000000005*(t17440 + t17441 + t17448) - 1.9620000000000002*(t17440 + t17441 + t17448 - 0.325*t17453*t7475 + 0.075*t17453*t7475*t7530 + 0.075*t17453*t7348*t7598 + 0.075*(t17453*t7475*t7527 - 1.*t17453*t7348*t7598));
  p_output1[7]=-6.1312500000000005*(t17464 + t17469 + 0.325*t17472) - 1.9620000000000002*(t17464 + t17469 + 0.075*t17472*t7530 + 0.075*t17479*t7598 + 0.075*(t17472*t7527 - 1.*t17479*t7598));
  p_output1[8]=-1.9620000000000002*(0.075*t17472*t7527 + 0.075*t17491*t7598 + 0.075*(-1.*t17472*t7527 - 1.*t17491*t7598));
  p_output1[9]=-26.977500000000003*(t17499 + t17500 + 0.1575*t17690) - 6.1312500000000005*(t17499 + t17500 + t17694) - 1.9620000000000002*(t17499 + t17500 + t17694 + 0.325*t17699*t2924 - 0.575*t17699*t2502*t5978 - 0.575*(-1.*t17699*t2502*t5978 + t17699*t2924*t6287) - 0.575*t17699*t2924*t6378);
  p_output1[10]=-6.1312500000000005*(t17710 + t17711 - 0.325*t17714) - 1.9620000000000002*(t17710 + t17711 - 0.575*t17721*t5978 - 0.575*(-1.*t17721*t5978 + t17714*t6287) - 0.575*t17714*t6378);
  p_output1[11]=-1.9620000000000002*(-0.575*t17733*t5978 - 0.575*t17714*t6287 - 0.575*(-1.*t17733*t5978 - 1.*t17714*t6287));
  p_output1[12]=-26.977500000000003*(t17741 + t17742 - 0.1575*t17745) - 6.1312500000000005*(t17741 + t17742 + t17746) - 1.9620000000000002*(t17741 + t17742 + t17746 - 0.325*t17754*t4055 + 0.075*t17754*t3504*t6507 + 0.075*(-1.*t17754*t3504*t6507 + t17754*t4055*t6678) + 0.075*t17754*t4055*t6691);
  p_output1[13]=-6.1312500000000005*(t17765 + t17766 + 0.325*t17769) - 1.9620000000000002*(t17765 + t17766 + 0.075*t17776*t6507 + 0.075*(-1.*t17776*t6507 + t17769*t6678) + 0.075*t17769*t6691);
  p_output1[14]=-1.9620000000000002*(0.075*t17788*t6507 + 0.075*t17769*t6678 + 0.075*(-1.*t17788*t6507 - 1.*t17769*t6678));
  p_output1[15]=-26.977500000000003*(t17796 + t17797 - 0.1575*t17800) - 6.1312500000000005*(t17796 + t17797 + t17801) - 1.9620000000000002*(t17796 + t17797 + t17801 + 0.325*t17930*t5878 - 0.575*t17930*t5609*t6845 - 0.575*(-1.*t17930*t5609*t6845 + t17930*t5878*t6886) - 0.575*t17930*t5878*t7104);
  p_output1[16]=-6.1312500000000005*(t17943 + t17944 - 0.325*t17948) - 1.9620000000000002*(t17943 + t17944 - 0.575*t17955*t6845 - 0.575*(-1.*t17955*t6845 + t17948*t6886) - 0.575*t17948*t7104);
  p_output1[17]=-1.9620000000000002*(-0.575*t17969*t6845 - 0.575*t17948*t6886 - 0.575*(-1.*t17969*t6845 - 1.*t17948*t6886));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_vision60.hh"

namespace SymFunction
{

void Ge_vec_vision60_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
