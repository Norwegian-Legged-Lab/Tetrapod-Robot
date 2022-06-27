/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:20 GMT+02:00
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
  double t15668;
  double t16428;
  double t17291;
  double t17616;
  double t17620;
  double t17842;
  double t18442;
  double t19684;
  double t13740;
  double t13860;
  double t19688;
  double t20189;
  double t18535;
  double t19689;
  double t20135;
  double t11088;
  double t20192;
  double t20220;
  double t20367;
  double t20376;
  double t20391;
  double t20479;
  double t20509;
  double t20513;
  double t20538;
  double t20550;
  double t20554;
  double t20722;
  double t20731;
  double t20735;
  double t20821;
  double t20822;
  double t20823;
  double t20825;
  double t20826;
  double t20831;
  double t20835;
  double t20836;
  double t20843;
  double t20846;
  double t20858;
  double t20898;
  double t20909;
  double t20919;
  double t20804;
  double t20806;
  double t20807;
  double t20817;
  double t20827;
  double t20828;
  double t20829;
  double t20924;
  double t20939;
  double t20941;
  double t20942;
  double t20943;
  double t20951;
  double t20957;
  double t20958;
  double t20959;
  double t20752;
  double t20754;
  double t20755;
  double t20757;
  double t20771;
  double t20800;
  double t20970;
  double t20971;
  double t20972;
  double t20979;
  double t20983;
  double t20987;
  double t20830;
  double t20960;
  double t20961;
  double t21008;
  double t21009;
  double t21010;
  double t20756;
  double t20802;
  double t20803;
  double t21000;
  double t21001;
  double t21002;
  double t21063;
  double t21064;
  double t21065;
  double t20991;
  double t20996;
  double t20999;
  double t21006;
  double t21039;
  double t21041;
  double t21043;
  double t21330;
  double t21331;
  double t21332;
  double t21045;
  double t21345;
  double t21346;
  double t21347;
  double t21007;
  double t21011;
  double t21012;
  double t21334;
  double t21339;
  double t21335;
  double t21336;
  double t21337;
  double t21344;
  double t21349;
  double t21047;
  double t21048;
  double t21049;
  double t21066;
  double t21067;
  double t21070;
  double t21085;
  double t21120;
  double t21270;
  double t21305;
  double t21325;
  double t21326;
  double t21327;
  double t21328;
  double t21329;
  double t21860;
  double t21861;
  double t21862;
  double t21855;
  double t21857;
  double t21338;
  double t21924;
  double t21939;
  double t21943;
  double t21955;
  double t21960;
  double t21968;
  double t21348;
  double t21352;
  double t21353;
  double t21354;
  double t21358;
  double t21461;
  double t21462;
  double t21465;
  double t21984;
  double t21482;
  double t21484;
  double t22057;
  double t21496;
  double t21829;
  double t21837;
  double t23027;
  double t23033;
  double t23034;
  double t23088;
  double t23100;
  double t23139;
  double t23169;
  double t23176;
  double t23177;
  double t23193;
  double t23201;
  double t23207;
  double t23284;
  double t23315;
  double t23331;
  double t23334;
  double t23337;
  double t23370;
  double t23375;
  double t23433;
  double t23434;
  double t23435;
  double t23377;
  double t23495;
  double t23648;
  double t23848;
  double t24100;
  double t24163;
  double t24170;
  double t24171;
  double t24196;
  double t24199;
  double t24201;
  double t24230;
  double t24232;
  double t24234;
  double t23047;
  double t23059;
  double t23062;
  double t23067;
  double t23070;
  double t23072;
  double t23079;
  double t24305;
  double t24307;
  double t24308;
  double t24310;
  double t24311;
  double t24317;
  double t24319;
  double t24321;
  double t24332;
  double t24333;
  double t24335;
  double t24316;
  double t24344;
  double t24346;
  double t24347;
  double t24360;
  double t24563;
  double t24567;
  double t24356;
  double t24359;
  double t25599;
  double t25610;
  double t25611;
  double t25620;
  double t25621;
  double t25622;
  double t25632;
  double t25634;
  double t25641;
  double t20702;
  double t20708;
  double t20718;
  double t21028;
  double t21032;
  double t21033;
  double t24253;
  double t24254;
  double t25748;
  double t23494;
  double t24103;
  double t25928;
  double t25932;
  double t25942;
  double t25944;
  double t25751;
  double t25752;
  double t25760;
  double t25821;
  double t25857;
  double t25861;
  double t25895;
  double t25896;
  double t25898;
  double t25907;
  double t25916;
  double t25917;
  double t25919;
  double t25931;
  double t25935;
  double t25937;
  double t25938;
  double t25939;
  double t25943;
  double t25990;
  double t25994;
  double t26061;
  double t26000;
  double t26001;
  double t26065;
  double t26008;
  double t26010;
  double t26013;
  double t26018;
  double t26134;
  double t26576;
  double t26734;
  double t26742;
  double t26744;
  double t26737;
  double t26851;
  double t26857;
  double t23086;
  double t23151;
  double t23158;
  double t26867;
  double t26926;
  double t26102;
  double t26114;
  double t26730;
  double t26731;
  double t26751;
  double t26752;
  double t26753;
  double t29186;
  double t26782;
  double t26816;
  double t26818;
  double t29192;
  double t29194;
  double t29406;
  double t29555;
  double t29657;
  double t25649;
  double t25650;
  double t25651;
  double t25707;
  double t25709;
  double t25710;
  double t24296;
  double t24300;
  double t24301;
  double t29169;
  double t29170;
  double t29737;
  double t26934;
  double t29741;
  double t29745;
  double t29746;
  double t29866;
  double t29869;
  double t29873;
  double t29875;
  double t29761;
  double t29810;
  double t29811;
  double t29817;
  double t29819;
  double t29830;
  double t29856;
  double t29858;
  double t29859;
  double t29860;
  double t29861;
  double t29862;
  double t29863;
  double t29868;
  double t29874;
  double t29903;
  double t29918;
  double t29922;
  double t29996;
  double t29926;
  double t29932;
  double t30031;
  double t29947;
  double t29949;
  double t29952;
  double t25658;
  double t25661;
  double t25662;
  double t30061;
  double t30068;
  double t30071;
  double t30052;
  double t30053;
  double t30055;
  double t30114;
  double t30120;
  double t24287;
  double t24289;
  double t24290;
  double t24269;
  double t24270;
  t15668 = Cos(var1[16]);
  t16428 = Cos(var1[17]);
  t17291 = -1.*t15668*t16428;
  t17616 = Sin(var1[16]);
  t17620 = Sin(var1[17]);
  t17842 = -1.*t17616*t17620;
  t18442 = t17291 + t17842;
  t19684 = Cos(var1[15]);
  t13740 = Cos(var1[5]);
  t13860 = Sin(var1[15]);
  t19688 = Sin(var1[5]);
  t20189 = Cos(var1[3]);
  t18535 = t13740*t13860*t18442;
  t19689 = t19684*t18442*t19688;
  t20135 = t18535 + t19689;
  t11088 = Sin(var1[3]);
  t20192 = Cos(var1[4]);
  t20220 = -1.*t16428*t17616;
  t20367 = t15668*t17620;
  t20376 = t20220 + t20367;
  t20391 = t20192*t20376;
  t20479 = Sin(var1[4]);
  t20509 = t19684*t13740*t18442;
  t20513 = -1.*t13860*t18442*t19688;
  t20538 = t20509 + t20513;
  t20550 = -1.*t20479*t20538;
  t20554 = t20391 + t20550;
  t20722 = -1.*t20376*t20479;
  t20731 = -1.*t20192*t20538;
  t20735 = t20722 + t20731;
  t20821 = -1.*t16428;
  t20822 = 1. + t20821;
  t20823 = -0.50321*t20822;
  t20825 = -0.19821*t16428;
  t20826 = t20823 + t20825;
  t20831 = -1.*t19684;
  t20835 = 1. + t20831;
  t20836 = -0.15121*t20835;
  t20843 = -1.*t15668;
  t20846 = 1. + t20843;
  t20858 = -0.28121*t20846;
  t20898 = t15668*t20826;
  t20909 = 0.305*t17616*t17620;
  t20919 = t20858 + t20898 + t20909;
  t20804 = t13740*t13860;
  t20806 = t19684*t19688;
  t20807 = t20804 + t20806;
  t20817 = 0.28121*t17616;
  t20827 = t20826*t17616;
  t20828 = -0.305*t15668*t17620;
  t20829 = t20817 + t20827 + t20828;
  t20924 = t19684*t20919;
  t20939 = t20836 + t20924;
  t20941 = t13740*t20939;
  t20942 = -0.15121*t19684;
  t20943 = 0.15121*t13860;
  t20951 = t13860*t20919;
  t20957 = t20836 + t20942 + t20943 + t20951;
  t20958 = -1.*t20957*t19688;
  t20959 = t20941 + t20958;
  t20752 = t15668*t16428;
  t20754 = t17616*t17620;
  t20755 = t20752 + t20754;
  t20757 = t19684*t13740*t20376;
  t20771 = -1.*t13860*t20376*t19688;
  t20800 = t20757 + t20771;
  t20970 = t20829*t20479;
  t20971 = t20192*t20959;
  t20972 = t20970 + t20971;
  t20979 = t20192*t20755;
  t20983 = -1.*t20479*t20800;
  t20987 = t20979 + t20983;
  t20830 = -1.*t20829*t20479;
  t20960 = -1.*t20192*t20959;
  t20961 = t20830 + t20960;
  t21008 = t20192*t20829;
  t21009 = -1.*t20479*t20959;
  t21010 = t21008 + t21009;
  t20756 = t20755*t20479;
  t20802 = t20192*t20800;
  t20803 = t20756 + t20802;
  t21000 = t13740*t20957;
  t21001 = t20939*t19688;
  t21002 = t21000 + t21001;
  t21063 = -1.*t13740*t13860*t18442;
  t21064 = -1.*t19684*t18442*t19688;
  t21065 = t21063 + t21064;
  t20991 = -1.*t19684*t13740;
  t20996 = t13860*t19688;
  t20999 = t20991 + t20996;
  t21006 = -1.*t20999*t21002;
  t21039 = t13740*t13860*t20376;
  t21041 = t19684*t20376*t19688;
  t21043 = t21039 + t21041;
  t21330 = -1.*t13740*t20957;
  t21331 = -1.*t20939*t19688;
  t21332 = t21330 + t21331;
  t21045 = t21043*t21002;
  t21345 = -1.*t13740*t13860*t20376;
  t21346 = -1.*t19684*t20376*t19688;
  t21347 = t21345 + t21346;
  t21007 = -1.*t20192*t20807*t20972;
  t21011 = t20479*t20807*t21010;
  t21012 = t21006 + t21007 + t21011;
  t21334 = -1.*t20807*t21002;
  t21339 = -1.*t20999*t20959;
  t21335 = t19684*t13740;
  t21336 = -1.*t13860*t19688;
  t21337 = t21335 + t21336;
  t21344 = t20800*t21002;
  t21349 = t21043*t20959;
  t21047 = t20803*t20972;
  t21048 = t20987*t21010;
  t21049 = t21045 + t21047 + t21048;
  t21066 = var2[0]*t20192*t21065;
  t21067 = t11088*t20479*t21065;
  t21070 = t20189*t20538;
  t21085 = t21067 + t21070;
  t21120 = var2[1]*t21085;
  t21270 = -1.*t20189*t20479*t21065;
  t21305 = t11088*t20538;
  t21325 = t21270 + t21305;
  t21326 = var2[2]*t21325;
  t21327 = -1.*t20807*t20959;
  t21328 = t21006 + t21327;
  t21329 = t20800*t21328;
  t21860 = -0.15121*t13860;
  t21861 = -1.*t13860*t20919;
  t21862 = t21860 + t21861;
  t21855 = 0.15121*t19684;
  t21857 = t21855 + t20924;
  t21338 = -1.*t21337*t20959;
  t21924 = t13740*t21862;
  t21939 = -1.*t21857*t19688;
  t21943 = t21924 + t21939;
  t21955 = t13740*t21857;
  t21960 = t21862*t19688;
  t21968 = t21955 + t21960;
  t21348 = t21347*t20959;
  t21352 = t20829*t20755;
  t21353 = t20800*t20959;
  t21354 = t21352 + t21045 + t21353;
  t21358 = t20807*t21354;
  t21461 = t20192*t21347*t21012;
  t21462 = Power(t20192,2);
  t21465 = Power(t20479,2);
  t21984 = -1.*t20999*t21968;
  t21482 = -1.*t20192*t21337*t20972;
  t21484 = t20479*t21337*t21010;
  t22057 = t21043*t21968;
  t21496 = t20192*t21347*t20972;
  t21829 = -1.*t20479*t21347*t21010;
  t21837 = t20192*t21337*t21049;
  t23027 = t16428*t17616;
  t23033 = -1.*t15668*t17620;
  t23034 = t23027 + t23033;
  t23088 = t19684*t13740*t23034;
  t23100 = -1.*t13860*t23034*t19688;
  t23139 = t23088 + t23100;
  t23169 = t13740*t13860*t23034;
  t23176 = t19684*t23034*t19688;
  t23177 = t23169 + t23176;
  t23193 = t20192*t18442;
  t23201 = -1.*t20479*t23139;
  t23207 = t23193 + t23201;
  t23284 = -0.28121*t17616;
  t23315 = -1.*t20826*t17616;
  t23331 = 0.305*t15668*t17620;
  t23334 = t23284 + t23315 + t23331;
  t23337 = t13740*t13860*t23334;
  t23370 = t19684*t23334*t19688;
  t23375 = t23337 + t23370;
  t23433 = t19684*t13740*t23334;
  t23434 = -1.*t13860*t23334*t19688;
  t23435 = t23433 + t23434;
  t23377 = -1.*t20999*t23375;
  t23495 = 0.28121*t15668;
  t23648 = t23495 + t20898 + t20909;
  t23848 = t23375*t21043;
  t24100 = t20135*t21002;
  t24163 = t23648*t20479;
  t24170 = t20192*t23435;
  t24171 = t24163 + t24170;
  t24196 = t20192*t23648;
  t24199 = -1.*t20479*t23435;
  t24201 = t24196 + t24199;
  t24230 = t20376*t20479;
  t24232 = t20192*t20538;
  t24234 = t24230 + t24232;
  t23047 = -0.15121*t23034;
  t23059 = -0.15121*t20376;
  t23062 = t23047 + t23059;
  t23067 = var2[15]*t23062;
  t23070 = -1.*t13860*t20939;
  t23072 = t19684*t20957;
  t23079 = t23070 + t23072;
  t24305 = 0.305*t16428*t17616;
  t24307 = t24305 + t20828;
  t24308 = t13740*t13860*t24307;
  t24310 = t19684*t24307*t19688;
  t24311 = t24308 + t24310;
  t24317 = t19684*t13740*t24307;
  t24319 = -1.*t13860*t24307*t19688;
  t24321 = t24317 + t24319;
  t24332 = t13740*t13860*t20755;
  t24333 = t19684*t20755*t19688;
  t24335 = t24332 + t24333;
  t24316 = -1.*t20999*t24311;
  t24344 = -0.305*t15668*t16428;
  t24346 = -0.305*t17616*t17620;
  t24347 = t24344 + t24346;
  t24360 = t19684*t13740*t20755;
  t24563 = -1.*t13860*t20755*t19688;
  t24567 = t24360 + t24563;
  t24356 = t24311*t21043;
  t24359 = t24335*t21002;
  t25599 = t24347*t20479;
  t25610 = t20192*t24321;
  t25611 = t25599 + t25610;
  t25620 = t20192*t24347;
  t25621 = -1.*t20479*t24321;
  t25622 = t25620 + t25621;
  t25632 = t23034*t20479;
  t25634 = t20192*t24567;
  t25641 = t25632 + t25634;
  t20702 = t20189*t20135;
  t20708 = -1.*t11088*t20554;
  t20718 = t20702 + t20708;
  t21028 = -1.*t20755*t20479;
  t21032 = -1.*t20192*t20800;
  t21033 = t21028 + t21032;
  t24253 = t24234*t20972;
  t24254 = t20554*t21010;
  t25748 = -1.*t21043*t21002;
  t23494 = t20829*t20376;
  t24103 = t20538*t20959;
  t25928 = -1.*t20800*t21002;
  t25932 = -1.*t21043*t20959;
  t25942 = t20538*t21002;
  t25944 = t20135*t20959;
  t25751 = -1.*t20803*t20972;
  t25752 = -1.*t20987*t21010;
  t25760 = t25748 + t25751 + t25752;
  t25821 = t24100 + t24253 + t24254;
  t25857 = var2[0]*t20192*t21337;
  t25861 = t11088*t20807;
  t25895 = -1.*t20189*t20479*t21337;
  t25896 = t25861 + t25895;
  t25898 = var2[2]*t25896;
  t25907 = t20189*t20807;
  t25916 = t11088*t20479*t21337;
  t25917 = t25907 + t25916;
  t25919 = var2[1]*t25917;
  t25931 = -1.*t21347*t20959;
  t25935 = -1.*t20829*t20755;
  t25937 = -1.*t20800*t20959;
  t25938 = t25935 + t25748 + t25937;
  t25939 = t20538*t25938;
  t25943 = t21065*t20959;
  t25990 = t23494 + t24100 + t24103;
  t25994 = t20800*t25990;
  t26061 = -1.*t21043*t21968;
  t26000 = -1.*t20192*t21347*t20972;
  t26001 = t20479*t21347*t21010;
  t26065 = t20135*t21968;
  t26008 = t20192*t21065*t20972;
  t26010 = -1.*t20479*t21065*t21010;
  t26013 = t20192*t21065*t25760;
  t26018 = t20192*t21347*t25821;
  t26134 = t20829*t18442;
  t26576 = t20376*t23648;
  t26734 = -1.*t20829*t20376;
  t26742 = Power(t19684,2);
  t26744 = Power(t13860,2);
  t26737 = -1.*t23648*t20755;
  t26851 = t23375*t20135;
  t26857 = t23177*t21002;
  t23086 = t18442*t20479;
  t23151 = t20192*t23139;
  t23158 = t23086 + t23151;
  t26867 = -1.*t23375*t21043;
  t26926 = -1.*t20135*t21002;
  t26102 = t18442*t20919;
  t26114 = t23494 + t26102;
  t26730 = -1.*t20376*t20919;
  t26731 = t26730 + t25935;
  t26751 = -1.*t19684*t20376*t20939;
  t26752 = -1.*t13860*t20376*t20957;
  t26753 = t25935 + t26751 + t26752;
  t29186 = t20376*t24347;
  t26782 = t19684*t18442*t20939;
  t26816 = t13860*t18442*t20957;
  t26818 = t23494 + t26782 + t26816;
  t29192 = -1.*t23034*t20829;
  t29194 = -1.*t24347*t20755;
  t29406 = t24311*t20135;
  t29555 = -1.*t24311*t21043;
  t29657 = -1.*t24335*t21002;
  t25649 = t20192*t23034;
  t25650 = -1.*t20479*t24567;
  t25651 = t25649 + t25650;
  t25707 = t11088*t20479*t20807;
  t25709 = t20189*t20999;
  t25710 = t25707 + t25709;
  t24296 = t20189*t21043;
  t24300 = -1.*t11088*t20987;
  t24301 = t24296 + t24300;
  t29169 = -1.*t24234*t20972;
  t29170 = -1.*t20554*t21010;
  t29737 = t20999*t21002;
  t26934 = -1.*t20538*t20959;
  t29741 = t20192*t20807*t20972;
  t29745 = -1.*t20479*t20807*t21010;
  t29746 = t29737 + t29741 + t29745;
  t29866 = t20807*t21002;
  t29869 = t20999*t20959;
  t29873 = -1.*t20538*t21002;
  t29875 = -1.*t20135*t20959;
  t29761 = t26926 + t29169 + t29170;
  t29810 = var2[0]*t20192*t21347;
  t29811 = t11088*t20479*t21347;
  t29817 = t20189*t20800;
  t29819 = t29811 + t29817;
  t29830 = var2[1]*t29819;
  t29856 = -1.*t20189*t20479*t21347;
  t29858 = t11088*t20800;
  t29859 = t29856 + t29858;
  t29860 = var2[2]*t29859;
  t29861 = t20807*t20959;
  t29862 = t29737 + t29861;
  t29863 = t20538*t29862;
  t29868 = t21337*t20959;
  t29874 = -1.*t21065*t20959;
  t29903 = t26734 + t26926 + t26934;
  t29918 = t20807*t29903;
  t29922 = t20192*t21065*t29746;
  t29996 = t20999*t21968;
  t29926 = t20192*t21337*t20972;
  t29932 = -1.*t20479*t21337*t21010;
  t30031 = -1.*t20135*t21968;
  t29947 = -1.*t20192*t21065*t20972;
  t29949 = t20479*t21065*t21010;
  t29952 = t20192*t21337*t29761;
  t25658 = t11088*t20135;
  t25661 = t20189*t20554;
  t25662 = t25658 + t25661;
  t30061 = t20999*t23375;
  t30068 = -1.*t23375*t20135;
  t30071 = -1.*t23177*t21002;
  t30052 = t13860*t20939;
  t30053 = -1.*t19684*t20957;
  t30055 = t30052 + t30053;
  t30114 = t20999*t24311;
  t30120 = -1.*t24311*t20135;
  t24287 = t11088*t21043;
  t24289 = t20189*t20987;
  t24290 = t24287 + t24289;
  t24269 = 0.28121*t16428;
  t24270 = t20826*t16428;
  p_output1[0]=(-1.*t11088*t20135 - 1.*t20189*t20554)*var2[1] + t20718*var2[2];
  p_output1[1]=t20554*var2[0] - 1.*t11088*t20735*var2[1] + t20189*t20735*var2[2] + (t20803*(t20479*t20807*t20961 + t20479*t20807*t20972) + t20987*t21012 + t20192*t20807*(t20961*t20987 + t20972*t20987 + t20803*t21010 + t21010*t21033) - 1.*t20479*t20807*t21049)*var2[3];
  p_output1[2]=t21066 + t21120 + t21326 + (t21461 + t20803*(t21334 + t21339 - 1.*t20807*t21332*t21462 - 1.*t20807*t21332*t21465 + t21482 + t21484) + t20192*t20807*(t20192*t20803*t21332 - 1.*t20479*t20987*t21332 + t21344 + t21349 + t21496 + t21829) + t21837)*var2[3] + (t21329 + t21043*(-1.*t20807*t21332 + t21334 + t21338 + t21339) + t20999*(t20800*t21332 + t21344 + t21348 + t21349) + t21358)*var2[4];
  p_output1[3]=t21066 + t21120 + t21326 + (t21461 + t21837 + t20803*(t21334 + t21482 + t21484 - 1.*t20807*t21462*t21943 - 1.*t20807*t21465*t21943 + t21984) + t20192*t20807*(t21344 + t21496 + t21829 + t20192*t20803*t21943 - 1.*t20479*t20987*t21943 + t22057))*var2[3] + (t21329 + t21358 + t21043*(t21334 + t21338 - 1.*t20807*t21943 + t21984) + t20999*(t21344 + t21348 + t20800*t21943 + t22057))*var2[4] + t20755*(-1.*t19684*t20939 - 1.*t13860*t20957 + t19684*t21857 - 1.*t13860*t21862)*var2[5];
  p_output1[4]=t23067 + t23158*var2[0] + (t20189*t23177 - 1.*t11088*t23207)*var2[1] + (t11088*t23177 + t20189*t23207)*var2[2] + (t20803*(t23377 - 1.*t20192*t20807*t24171 + t20479*t20807*t24201) + t21012*t24234 + t20192*t20807*(t23848 + t24100 + t20803*t24171 + t20987*t24201 + t24253 + t24254))*var2[3] + (t20135*t21328 + t21043*(t23377 - 1.*t20807*t23435) + t20999*(t20800*t23435 + t23494 + t20755*t23648 + t23848 + t24100 + t24103))*var2[4] + t20376*t23079*var2[5];
  p_output1[5]=t23067 + t20803*var2[0] + t24301*var2[1] + t24290*var2[2] + (t20803*(t24316 - 1.*t20192*t20807*t25611 + t20479*t20807*t25622) + t21012*t25641 + t20192*t20807*(t24356 + t24359 + t20803*t25611 + t20987*t25622 + t20972*t25641 + t21010*t25651))*var2[3] + (t21043*(t24316 - 1.*t20807*t24321) + t21328*t24335 + t20999*(t20829*t23034 + t20800*t24321 + t20755*t24347 + t24356 + t24359 + t20959*t24567))*var2[4] + t23034*t23079*var2[5] + (-0.305*Power(t16428,2) + t24269 + t24270)*var2[16];
  p_output1[6]=t24234;
  p_output1[7]=t20718;
  p_output1[8]=t25662;
  p_output1[9]=t20803*t21012 + t20192*t20807*t21049;
  p_output1[10]=t21043*t21328 + t20999*t21354;
  p_output1[11]=t20755*t23079;
  p_output1[12]=-0.15121*t18442 - 0.15121*t20755;
  p_output1[13]=0.28121*t17620 - 0.305*t16428*t17620 + t17620*t20826;
  p_output1[14]=(t20189*t20479*t20807 - 1.*t11088*t20999)*var2[1] + t25710*var2[2];
  p_output1[15]=-1.*t20479*t20807*var2[0] + t11088*t20192*t20807*var2[1] - 1.*t20189*t20192*t20807*var2[2] + ((-1.*t20961*t20987 - 1.*t20972*t20987 - 1.*t20803*t21010 - 1.*t21010*t21033)*t24234 + t20803*(t20554*t20961 + t20554*t20972 + t20735*t21010 + t21010*t24234) + t20554*t25760 + t20987*t25821)*var2[3];
  p_output1[16]=t25857 + t25898 + t25919 + (t24234*(-1.*t20192*t20803*t21332 + t20479*t20987*t21332 + t25928 + t25932 + t26000 + t26001) + t20803*(-1.*t20479*t20554*t21332 + t20192*t21332*t24234 + t25942 + t25944 + t26008 + t26010) + t26013 + t26018)*var2[3] + (t20135*(-1.*t20800*t21332 + t25928 + t25931 + t25932) + t25939 + t21043*(t20538*t21332 + t25942 + t25943 + t25944) + t25994)*var2[4];
  p_output1[17]=t25857 + t25898 + t25919 + (t26013 + t26018 + t24234*(-1.*t20192*t20803*t21943 + t20479*t20987*t21943 + t25928 + t26000 + t26001 + t26061) + t20803*(-1.*t20479*t20554*t21943 + t20192*t21943*t24234 + t25942 + t26008 + t26010 + t26065))*var2[3] + (t25939 + t25994 + t20135*(-1.*t20800*t21943 + t25928 + t25931 + t26061) + t21043*(t20538*t21943 + t25942 + t25943 + t26065))*var2[4] + (t20755*(-1.*t13860*t18442*t20939 + t18442*t19684*t20957 + t13860*t18442*t21857 + t18442*t19684*t21862) + t20376*(t13860*t20376*t20939 - 1.*t19684*t20376*t20957 - 1.*t13860*t20376*t21857 - 1.*t19684*t20376*t21862))*var2[5];
  p_output1[18]=(t23158*t25760 + t24234*t25821 + t20803*(t20972*t23158 + t21010*t23207 + t20554*t24201 + t24171*t24234 + t26851 + t26857) + t24234*(-1.*t20803*t24171 - 1.*t20987*t24201 + t26867 + t26926 + t29169 + t29170))*var2[3] + (t23177*t25938 + t20135*t25990 + t21043*(t20959*t23139 + t20538*t23435 + t26134 + t26576 + t26851 + t26857) + t20135*(-1.*t20800*t23435 + t26734 + t26737 + t26867 + t26926 + t26934))*var2[4] + (t20755*(t19684*t20939*t23034 + t13860*t20957*t23034 + t26134 + t26576 + t18442*t23334*t26742 + t18442*t23334*t26744) + t20376*(-1.*t18442*t19684*t20939 - 1.*t13860*t18442*t20957 + t26734 + t26737 - 1.*t20376*t23334*t26742 - 1.*t20376*t23334*t26744) + t18442*t26753 + t20376*t26818)*var2[5] + (t20376*t26114 + t20755*(t20919*t23034 + t18442*t23334 + t26134 + t26576) + t18442*t26731 + t20376*(-1.*t18442*t20919 - 1.*t20376*t23334 + t26734 + t26737))*var2[15];
  p_output1[19]=(t20803*t25760 + t25641*t25821 + t20803*(t21045 + t21047 + t21048 + t24234*t25611 + t20554*t25622 + t29406) + t24234*(-1.*t20803*t25611 - 1.*t20987*t25622 - 1.*t20972*t25641 - 1.*t21010*t25651 + t29555 + t29657))*var2[3] + (t21043*t25938 + t24335*t25990 + t21043*(t21045 + t21352 + t21353 + t20538*t24321 + t29186 + t29406) + t20135*(-1.*t20800*t24321 - 1.*t20959*t24567 + t29192 + t29194 + t29555 + t29657))*var2[4] + (t20755*t26753 + t23034*t26818 + t20755*(t19684*t20376*t20939 + t13860*t20376*t20957 + t21352 + t18442*t24307*t26742 + t18442*t24307*t26744 + t29186) + t20376*(-1.*t19684*t20755*t20939 - 1.*t13860*t20755*t20957 - 1.*t20376*t24307*t26742 - 1.*t20376*t24307*t26744 + t29192 + t29194))*var2[5] + (t23034*t26114 + t20755*t26731 + t20755*(t20376*t20919 + t21352 + t18442*t24307 + t29186) + t20376*(-1.*t20755*t20919 - 1.*t20376*t24307 + t29192 + t29194))*var2[15];
  p_output1[20]=t20192*t20807;
  p_output1[21]=t25710;
  p_output1[22]=-1.*t20189*t20479*t20807 + t11088*t20999;
  p_output1[23]=t24234*t25760 + t20803*t25821;
  p_output1[24]=t20135*t25938 + t21043*t25990;
  p_output1[25]=t20376*t26753 + t20755*t26818;
  p_output1[26]=-0.15121 + t20755*t26114 + t20376*t26731;
  p_output1[27]=(-1.*t20189*t20987 - 1.*t11088*t21043)*var2[1] + t24301*var2[2];
  p_output1[28]=t20987*var2[0] - 1.*t11088*t21033*var2[1] + t20189*t21033*var2[2] + ((-1.*t20479*t20807*t20961 - 1.*t20479*t20807*t20972)*t24234 + t20192*t20807*(-1.*t20554*t20961 - 1.*t20554*t20972 - 1.*t20735*t21010 - 1.*t21010*t24234) + t20554*t29746 - 1.*t20479*t20807*t29761)*var2[3];
  p_output1[29]=t29810 + t29830 + t29860 + (t29922 + t24234*(t20807*t21332*t21462 + t20807*t21332*t21465 + t29866 + t29869 + t29926 + t29932) + t20192*t20807*(t20479*t20554*t21332 - 1.*t20192*t21332*t24234 + t29873 + t29875 + t29947 + t29949) + t29952)*var2[3] + (t29863 + t20135*(t20807*t21332 + t29866 + t29868 + t29869) + t20999*(-1.*t20538*t21332 + t29873 + t29874 + t29875) + t29918)*var2[4];
  p_output1[30]=t29810 + t29830 + t29860 + (t29922 + t29952 + t24234*(t20807*t21462*t21943 + t20807*t21465*t21943 + t29866 + t29926 + t29932 + t29996) + t20192*t20807*(t20479*t20554*t21943 - 1.*t20192*t21943*t24234 + t29873 + t29947 + t29949 + t30031))*var2[3] + (t29863 + t29918 + t20135*(t20807*t21943 + t29866 + t29868 + t29996) + t20999*(-1.*t20538*t21943 + t29873 + t29874 + t30031))*var2[4] + t20376*(t19684*t20939 + t13860*t20957 - 1.*t19684*t21857 + t13860*t21862)*var2[5];
  p_output1[31]=t24234*var2[0] + t20718*var2[1] + t25662*var2[2] + (t23158*t29746 + t24234*(t20192*t20807*t24171 - 1.*t20479*t20807*t24201 + t30061) + t20192*t20807*(-1.*t20972*t23158 - 1.*t21010*t23207 - 1.*t20554*t24201 - 1.*t24171*t24234 + t30068 + t30071))*var2[3] + (t23177*t29862 + t20135*(t20807*t23435 + t30061) + t20999*(-1.*t18442*t20829 - 1.*t20959*t23139 - 1.*t20538*t23435 - 1.*t20376*t23648 + t30068 + t30071))*var2[4] + t18442*t30055*var2[5];
  p_output1[32]=t25641*var2[0] + (t20189*t24335 - 1.*t11088*t25651)*var2[1] + (t11088*t24335 + t20189*t25651)*var2[2] + (t20803*t29746 + t24234*(t20192*t20807*t25611 - 1.*t20479*t20807*t25622 + t30114) + t20192*t20807*(-1.*t24234*t25611 - 1.*t20554*t25622 + t25748 + t25751 + t25752 + t30120))*var2[3] + (t21043*t29862 + t20135*(t20807*t24321 + t30114) + t20999*(-1.*t20538*t24321 - 1.*t20376*t24347 + t25748 + t25935 + t25937 + t30120))*var2[4] + t20755*t30055*var2[5] + (-0.28121*t17620 + 0.305*t16428*t17620 - 1.*t17620*t20826)*var2[16];
  p_output1[33]=t20803;
  p_output1[34]=t24301;
  p_output1[35]=t24290;
  p_output1[36]=t24234*t29746 + t20192*t20807*t29761;
  p_output1[37]=t20135*t29862 + t20999*t29903;
  p_output1[38]=t20376*t30055;
  p_output1[39]=0.305*Power(t17620,2) + t24269 + t24270;
  p_output1[40]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
