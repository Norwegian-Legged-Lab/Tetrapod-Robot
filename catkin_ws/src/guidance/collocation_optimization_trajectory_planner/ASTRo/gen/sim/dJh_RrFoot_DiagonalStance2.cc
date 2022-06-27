/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:44 GMT+02:00
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
  double t3198;
  double t9714;
  double t13231;
  double t14097;
  double t16166;
  double t16810;
  double t16824;
  double t17788;
  double t3046;
  double t3122;
  double t18042;
  double t18135;
  double t17499;
  double t18110;
  double t18111;
  double t370;
  double t18136;
  double t18144;
  double t18148;
  double t18149;
  double t18154;
  double t18155;
  double t18156;
  double t18157;
  double t18158;
  double t18159;
  double t18160;
  double t18283;
  double t18284;
  double t18285;
  double t18293;
  double t18294;
  double t18295;
  double t18331;
  double t18333;
  double t18334;
  double t18338;
  double t18340;
  double t18341;
  double t18342;
  double t18343;
  double t18347;
  double t18351;
  double t18352;
  double t18353;
  double t18372;
  double t18373;
  double t18374;
  double t18382;
  double t18383;
  double t18384;
  double t18385;
  double t18386;
  double t18391;
  double t18392;
  double t18393;
  double t18394;
  double t18395;
  double t18396;
  double t18398;
  double t18399;
  double t18400;
  double t18381;
  double t18387;
  double t18388;
  double t18389;
  double t18402;
  double t18403;
  double t18404;
  double t18405;
  double t18406;
  double t18407;
  double t18408;
  double t18409;
  double t18410;
  double t18414;
  double t18415;
  double t18416;
  double t18390;
  double t18411;
  double t18412;
  double t18427;
  double t18428;
  double t18430;
  double t18378;
  double t18379;
  double t18380;
  double t18421;
  double t18422;
  double t18423;
  double t18436;
  double t18437;
  double t18438;
  double t18472;
  double t18481;
  double t18482;
  double t18565;
  double t18567;
  double t18568;
  double t18424;
  double t18581;
  double t18582;
  double t18583;
  double t18443;
  double t18603;
  double t18604;
  double t18605;
  double t18426;
  double t18431;
  double t18432;
  double t18585;
  double t18597;
  double t18586;
  double t18587;
  double t18595;
  double t18601;
  double t18607;
  double t18444;
  double t18454;
  double t18458;
  double t18494;
  double t18511;
  double t18662;
  double t18666;
  double t18685;
  double t18687;
  double t18495;
  double t18496;
  double t18500;
  double t18512;
  double t18513;
  double t18514;
  double t18539;
  double t18551;
  double t18541;
  double t18542;
  double t18543;
  double t18619;
  double t18622;
  double t18735;
  double t18738;
  double t18746;
  double t18749;
  double t18555;
  double t18556;
  double t18557;
  double t18569;
  double t18570;
  double t18571;
  double t18572;
  double t18573;
  double t18574;
  double t18575;
  double t18576;
  double t18577;
  double t18578;
  double t18579;
  double t18580;
  double t18779;
  double t18780;
  double t18781;
  double t18776;
  double t18777;
  double t18596;
  double t18787;
  double t18789;
  double t18790;
  double t18792;
  double t18793;
  double t18794;
  double t18606;
  double t18612;
  double t18613;
  double t18614;
  double t18615;
  double t18618;
  double t18795;
  double t18625;
  double t18626;
  double t18799;
  double t18631;
  double t18632;
  double t18635;
  double t18639;
  double t18640;
  double t18641;
  double t18642;
  double t18643;
  double t18644;
  double t18645;
  double t18656;
  double t18657;
  double t18663;
  double t18674;
  double t18675;
  double t18676;
  double t18677;
  double t18686;
  double t18693;
  double t18694;
  double t18698;
  double t18699;
  double t18830;
  double t18704;
  double t18705;
  double t18834;
  double t18711;
  double t18712;
  double t18716;
  double t18717;
  double t18722;
  double t18723;
  double t18724;
  double t18725;
  double t18726;
  double t18727;
  double t18728;
  double t18729;
  double t18730;
  double t18731;
  double t18732;
  double t18733;
  double t18737;
  double t18747;
  double t18752;
  double t18753;
  double t18754;
  double t18755;
  double t18758;
  double t18858;
  double t18761;
  double t18762;
  double t18862;
  double t18767;
  double t18768;
  double t18771;
  double t18878;
  double t18879;
  double t18880;
  double t18891;
  double t18892;
  double t18893;
  double t18897;
  double t18898;
  double t18899;
  double t18901;
  double t18902;
  double t18904;
  double t18913;
  double t18914;
  double t18915;
  double t18916;
  double t18917;
  double t18918;
  double t18919;
  double t18921;
  double t18922;
  double t18923;
  double t18920;
  double t18928;
  double t18930;
  double t18932;
  double t18938;
  double t18939;
  double t18940;
  double t18942;
  double t18943;
  double t18944;
  double t18960;
  double t18963;
  double t18976;
  double t18978;
  double t18971;
  double t19001;
  double t19003;
  double t18890;
  double t18894;
  double t18895;
  double t19008;
  double t18271;
  double t18276;
  double t18277;
  double t19040;
  double t19047;
  double t19049;
  double t18881;
  double t18882;
  double t18883;
  double t18884;
  double t18885;
  double t18887;
  double t18888;
  double t18365;
  double t18368;
  double t18369;
  double t19084;
  double t19085;
  double t19086;
  double t19087;
  double t19088;
  double t19090;
  double t19091;
  double t19092;
  double t19096;
  double t19097;
  double t19098;
  double t19089;
  double t19101;
  double t19102;
  double t19103;
  double t19108;
  double t19109;
  double t19110;
  double t19105;
  double t19107;
  double t19116;
  double t19117;
  double t19118;
  double t19120;
  double t19121;
  double t19122;
  double t19126;
  double t19127;
  double t19128;
  double t18957;
  double t18958;
  double t18966;
  double t18967;
  double t18984;
  double t18985;
  double t18986;
  double t19145;
  double t18994;
  double t18995;
  double t18996;
  double t19149;
  double t19151;
  double t19175;
  double t19180;
  double t19182;
  double t19133;
  double t19134;
  double t19135;
  double t19030;
  double t19031;
  double t19032;
  double t19219;
  double t19225;
  t3198 = Cos(var1[16]);
  t9714 = Cos(var1[17]);
  t13231 = -1.*t3198*t9714;
  t14097 = Sin(var1[16]);
  t16166 = Sin(var1[17]);
  t16810 = -1.*t14097*t16166;
  t16824 = t13231 + t16810;
  t17788 = Cos(var1[15]);
  t3046 = Cos(var1[5]);
  t3122 = Sin(var1[15]);
  t18042 = Sin(var1[5]);
  t18135 = Cos(var1[3]);
  t17499 = t3046*t3122*t16824;
  t18110 = t17788*t16824*t18042;
  t18111 = t17499 + t18110;
  t370 = Sin(var1[3]);
  t18136 = Cos(var1[4]);
  t18144 = -1.*t9714*t14097;
  t18148 = t3198*t16166;
  t18149 = t18144 + t18148;
  t18154 = t18136*t18149;
  t18155 = Sin(var1[4]);
  t18156 = t17788*t3046*t16824;
  t18157 = -1.*t3122*t16824*t18042;
  t18158 = t18156 + t18157;
  t18159 = -1.*t18155*t18158;
  t18160 = t18154 + t18159;
  t18283 = t3046*t3122;
  t18284 = t17788*t18042;
  t18285 = t18283 + t18284;
  t18293 = -1.*t17788*t3046;
  t18294 = t3122*t18042;
  t18295 = t18293 + t18294;
  t18331 = t3046*t3122*t18149;
  t18333 = t17788*t18149*t18042;
  t18334 = t18331 + t18333;
  t18338 = t3198*t9714;
  t18340 = t14097*t16166;
  t18341 = t18338 + t18340;
  t18342 = t18136*t18341;
  t18343 = t17788*t3046*t18149;
  t18347 = -1.*t3122*t18149*t18042;
  t18351 = t18343 + t18347;
  t18352 = -1.*t18155*t18351;
  t18353 = t18342 + t18352;
  t18372 = -1.*t18149*t18155;
  t18373 = -1.*t18136*t18158;
  t18374 = t18372 + t18373;
  t18382 = -1.*t9714;
  t18383 = 1. + t18382;
  t18384 = -0.50321*t18383;
  t18385 = -0.19821*t9714;
  t18386 = t18384 + t18385;
  t18391 = -1.*t17788;
  t18392 = 1. + t18391;
  t18393 = -0.15121*t18392;
  t18394 = -1.*t3198;
  t18395 = 1. + t18394;
  t18396 = -0.28121*t18395;
  t18398 = t3198*t18386;
  t18399 = 0.305*t14097*t16166;
  t18400 = t18396 + t18398 + t18399;
  t18381 = 0.28121*t14097;
  t18387 = t18386*t14097;
  t18388 = -0.305*t3198*t16166;
  t18389 = t18381 + t18387 + t18388;
  t18402 = t17788*t18400;
  t18403 = t18393 + t18402;
  t18404 = t3046*t18403;
  t18405 = -0.15121*t17788;
  t18406 = 0.15121*t3122;
  t18407 = t3122*t18400;
  t18408 = t18393 + t18405 + t18406 + t18407;
  t18409 = -1.*t18408*t18042;
  t18410 = t18404 + t18409;
  t18414 = t18389*t18155;
  t18415 = t18136*t18410;
  t18416 = t18414 + t18415;
  t18390 = -1.*t18389*t18155;
  t18411 = -1.*t18136*t18410;
  t18412 = t18390 + t18411;
  t18427 = t18136*t18389;
  t18428 = -1.*t18155*t18410;
  t18430 = t18427 + t18428;
  t18378 = t18341*t18155;
  t18379 = t18136*t18351;
  t18380 = t18378 + t18379;
  t18421 = t3046*t18408;
  t18422 = t18403*t18042;
  t18423 = t18421 + t18422;
  t18436 = -1.*t18341*t18155;
  t18437 = -1.*t18136*t18351;
  t18438 = t18436 + t18437;
  t18472 = t18149*t18155;
  t18481 = t18136*t18158;
  t18482 = t18472 + t18481;
  t18565 = -1.*t3046*t3122*t16824;
  t18567 = -1.*t17788*t16824*t18042;
  t18568 = t18565 + t18567;
  t18424 = -1.*t18295*t18423;
  t18581 = -1.*t3046*t18408;
  t18582 = -1.*t18403*t18042;
  t18583 = t18581 + t18582;
  t18443 = t18334*t18423;
  t18603 = -1.*t3046*t3122*t18149;
  t18604 = -1.*t17788*t18149*t18042;
  t18605 = t18603 + t18604;
  t18426 = -1.*t18136*t18285*t18416;
  t18431 = t18155*t18285*t18430;
  t18432 = t18424 + t18426 + t18431;
  t18585 = -1.*t18285*t18423;
  t18597 = -1.*t18295*t18410;
  t18586 = t17788*t3046;
  t18587 = -1.*t3122*t18042;
  t18595 = t18586 + t18587;
  t18601 = t18351*t18423;
  t18607 = t18334*t18410;
  t18444 = t18380*t18416;
  t18454 = t18353*t18430;
  t18458 = t18443 + t18444 + t18454;
  t18494 = -1.*t18334*t18423;
  t18511 = t18111*t18423;
  t18662 = -1.*t18351*t18423;
  t18666 = -1.*t18334*t18410;
  t18685 = t18158*t18423;
  t18687 = t18111*t18410;
  t18495 = -1.*t18380*t18416;
  t18496 = -1.*t18353*t18430;
  t18500 = t18494 + t18495 + t18496;
  t18512 = t18482*t18416;
  t18513 = t18160*t18430;
  t18514 = t18511 + t18512 + t18513;
  t18539 = t18295*t18423;
  t18551 = -1.*t18111*t18423;
  t18541 = t18136*t18285*t18416;
  t18542 = -1.*t18155*t18285*t18430;
  t18543 = t18539 + t18541 + t18542;
  t18619 = Power(t18136,2);
  t18622 = Power(t18155,2);
  t18735 = t18285*t18423;
  t18738 = t18295*t18410;
  t18746 = -1.*t18158*t18423;
  t18749 = -1.*t18111*t18410;
  t18555 = -1.*t18482*t18416;
  t18556 = -1.*t18160*t18430;
  t18557 = t18551 + t18555 + t18556;
  t18569 = var2[0]*t18136*t18568;
  t18570 = t370*t18155*t18568;
  t18571 = t18135*t18158;
  t18572 = t18570 + t18571;
  t18573 = var2[1]*t18572;
  t18574 = -1.*t18135*t18155*t18568;
  t18575 = t370*t18158;
  t18576 = t18574 + t18575;
  t18577 = var2[2]*t18576;
  t18578 = -1.*t18285*t18410;
  t18579 = t18424 + t18578;
  t18580 = t18351*t18579;
  t18779 = -0.15121*t3122;
  t18780 = -1.*t3122*t18400;
  t18781 = t18779 + t18780;
  t18776 = 0.15121*t17788;
  t18777 = t18776 + t18402;
  t18596 = -1.*t18595*t18410;
  t18787 = t3046*t18781;
  t18789 = -1.*t18777*t18042;
  t18790 = t18787 + t18789;
  t18792 = t3046*t18777;
  t18793 = t18781*t18042;
  t18794 = t18792 + t18793;
  t18606 = t18605*t18410;
  t18612 = t18389*t18341;
  t18613 = t18351*t18410;
  t18614 = t18612 + t18443 + t18613;
  t18615 = t18285*t18614;
  t18618 = t18136*t18605*t18432;
  t18795 = -1.*t18295*t18794;
  t18625 = -1.*t18136*t18595*t18416;
  t18626 = t18155*t18595*t18430;
  t18799 = t18334*t18794;
  t18631 = t18136*t18605*t18416;
  t18632 = -1.*t18155*t18605*t18430;
  t18635 = t18136*t18595*t18458;
  t18639 = var2[0]*t18136*t18595;
  t18640 = t370*t18285;
  t18641 = -1.*t18135*t18155*t18595;
  t18642 = t18640 + t18641;
  t18643 = var2[2]*t18642;
  t18644 = t18135*t18285;
  t18645 = t370*t18155*t18595;
  t18656 = t18644 + t18645;
  t18657 = var2[1]*t18656;
  t18663 = -1.*t18605*t18410;
  t18674 = -1.*t18389*t18341;
  t18675 = -1.*t18351*t18410;
  t18676 = t18674 + t18494 + t18675;
  t18677 = t18158*t18676;
  t18686 = t18568*t18410;
  t18693 = t18389*t18149;
  t18694 = t18158*t18410;
  t18698 = t18693 + t18511 + t18694;
  t18699 = t18351*t18698;
  t18830 = -1.*t18334*t18794;
  t18704 = -1.*t18136*t18605*t18416;
  t18705 = t18155*t18605*t18430;
  t18834 = t18111*t18794;
  t18711 = t18136*t18568*t18416;
  t18712 = -1.*t18155*t18568*t18430;
  t18716 = t18136*t18568*t18500;
  t18717 = t18136*t18605*t18514;
  t18722 = var2[0]*t18136*t18605;
  t18723 = t370*t18155*t18605;
  t18724 = t18135*t18351;
  t18725 = t18723 + t18724;
  t18726 = var2[1]*t18725;
  t18727 = -1.*t18135*t18155*t18605;
  t18728 = t370*t18351;
  t18729 = t18727 + t18728;
  t18730 = var2[2]*t18729;
  t18731 = t18285*t18410;
  t18732 = t18539 + t18731;
  t18733 = t18158*t18732;
  t18737 = t18595*t18410;
  t18747 = -1.*t18568*t18410;
  t18752 = -1.*t18389*t18149;
  t18753 = -1.*t18158*t18410;
  t18754 = t18752 + t18551 + t18753;
  t18755 = t18285*t18754;
  t18758 = t18136*t18568*t18543;
  t18858 = t18295*t18794;
  t18761 = t18136*t18595*t18416;
  t18762 = -1.*t18155*t18595*t18430;
  t18862 = -1.*t18111*t18794;
  t18767 = -1.*t18136*t18568*t18416;
  t18768 = t18155*t18568*t18430;
  t18771 = t18136*t18595*t18557;
  t18878 = t9714*t14097;
  t18879 = -1.*t3198*t16166;
  t18880 = t18878 + t18879;
  t18891 = t17788*t3046*t18880;
  t18892 = -1.*t3122*t18880*t18042;
  t18893 = t18891 + t18892;
  t18897 = t3046*t3122*t18880;
  t18898 = t17788*t18880*t18042;
  t18899 = t18897 + t18898;
  t18901 = t18136*t16824;
  t18902 = -1.*t18155*t18893;
  t18904 = t18901 + t18902;
  t18913 = -0.28121*t14097;
  t18914 = -1.*t18386*t14097;
  t18915 = 0.305*t3198*t16166;
  t18916 = t18913 + t18914 + t18915;
  t18917 = t3046*t3122*t18916;
  t18918 = t17788*t18916*t18042;
  t18919 = t18917 + t18918;
  t18921 = t17788*t3046*t18916;
  t18922 = -1.*t3122*t18916*t18042;
  t18923 = t18921 + t18922;
  t18920 = -1.*t18295*t18919;
  t18928 = 0.28121*t3198;
  t18930 = t18928 + t18398 + t18399;
  t18932 = t18919*t18334;
  t18938 = t18930*t18155;
  t18939 = t18136*t18923;
  t18940 = t18938 + t18939;
  t18942 = t18136*t18930;
  t18943 = -1.*t18155*t18923;
  t18944 = t18942 + t18943;
  t18960 = t18389*t16824;
  t18963 = t18149*t18930;
  t18976 = Power(t17788,2);
  t18978 = Power(t3122,2);
  t18971 = -1.*t18930*t18341;
  t19001 = t18919*t18111;
  t19003 = t18899*t18423;
  t18890 = t16824*t18155;
  t18894 = t18136*t18893;
  t18895 = t18890 + t18894;
  t19008 = -1.*t18919*t18334;
  t18271 = t18135*t18111;
  t18276 = -1.*t370*t18160;
  t18277 = t18271 + t18276;
  t19040 = t18295*t18919;
  t19047 = -1.*t18919*t18111;
  t19049 = -1.*t18899*t18423;
  t18881 = -0.15121*t18880;
  t18882 = -0.15121*t18149;
  t18883 = t18881 + t18882;
  t18884 = var2[15]*t18883;
  t18885 = -1.*t3122*t18403;
  t18887 = t17788*t18408;
  t18888 = t18885 + t18887;
  t18365 = t18135*t18334;
  t18368 = -1.*t370*t18353;
  t18369 = t18365 + t18368;
  t19084 = 0.305*t9714*t14097;
  t19085 = t19084 + t18388;
  t19086 = t3046*t3122*t19085;
  t19087 = t17788*t19085*t18042;
  t19088 = t19086 + t19087;
  t19090 = t17788*t3046*t19085;
  t19091 = -1.*t3122*t19085*t18042;
  t19092 = t19090 + t19091;
  t19096 = t3046*t3122*t18341;
  t19097 = t17788*t18341*t18042;
  t19098 = t19096 + t19097;
  t19089 = -1.*t18295*t19088;
  t19101 = -0.305*t3198*t9714;
  t19102 = -0.305*t14097*t16166;
  t19103 = t19101 + t19102;
  t19108 = t17788*t3046*t18341;
  t19109 = -1.*t3122*t18341*t18042;
  t19110 = t19108 + t19109;
  t19105 = t19088*t18334;
  t19107 = t19098*t18423;
  t19116 = t19103*t18155;
  t19117 = t18136*t19092;
  t19118 = t19116 + t19117;
  t19120 = t18136*t19103;
  t19121 = -1.*t18155*t19092;
  t19122 = t19120 + t19121;
  t19126 = t18880*t18155;
  t19127 = t18136*t19110;
  t19128 = t19126 + t19127;
  t18957 = t16824*t18400;
  t18958 = t18693 + t18957;
  t18966 = -1.*t18149*t18400;
  t18967 = t18966 + t18674;
  t18984 = -1.*t17788*t18149*t18403;
  t18985 = -1.*t3122*t18149*t18408;
  t18986 = t18674 + t18984 + t18985;
  t19145 = t18149*t19103;
  t18994 = t17788*t16824*t18403;
  t18995 = t3122*t16824*t18408;
  t18996 = t18693 + t18994 + t18995;
  t19149 = -1.*t18880*t18389;
  t19151 = -1.*t19103*t18341;
  t19175 = t19088*t18111;
  t19180 = -1.*t19088*t18334;
  t19182 = -1.*t19098*t18423;
  t19133 = t18136*t18880;
  t19134 = -1.*t18155*t19110;
  t19135 = t19133 + t19134;
  t19030 = t3122*t18403;
  t19031 = -1.*t17788*t18408;
  t19032 = t19030 + t19031;
  t19219 = t18295*t19088;
  t19225 = -1.*t19088*t18111;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t18135*t18160 - 1.*t18111*t370)*var2[1] + t18277*var2[2];
  p_output1[10]=(t18135*t18155*t18285 - 1.*t18295*t370)*var2[1] + (t18135*t18295 + t18155*t18285*t370)*var2[2];
  p_output1[11]=(-1.*t18135*t18353 - 1.*t18334*t370)*var2[1] + t18369*var2[2];
  p_output1[12]=t18160*var2[0] - 1.*t18374*t370*var2[1] + t18135*t18374*var2[2] + (t18380*(t18155*t18285*t18412 + t18155*t18285*t18416) + t18353*t18432 + t18136*t18285*(t18353*t18412 + t18353*t18416 + t18380*t18430 + t18430*t18438) - 1.*t18155*t18285*t18458)*var2[3];
  p_output1[13]=-1.*t18155*t18285*var2[0] + t18136*t18285*t370*var2[1] - 1.*t18135*t18136*t18285*var2[2] + ((-1.*t18353*t18412 - 1.*t18353*t18416 - 1.*t18380*t18430 - 1.*t18430*t18438)*t18482 + t18380*(t18160*t18412 + t18160*t18416 + t18374*t18430 + t18430*t18482) + t18160*t18500 + t18353*t18514)*var2[3];
  p_output1[14]=t18353*var2[0] - 1.*t18438*t370*var2[1] + t18135*t18438*var2[2] + ((-1.*t18155*t18285*t18412 - 1.*t18155*t18285*t18416)*t18482 + t18136*t18285*(-1.*t18160*t18412 - 1.*t18160*t18416 - 1.*t18374*t18430 - 1.*t18430*t18482) + t18160*t18543 - 1.*t18155*t18285*t18557)*var2[3];
  p_output1[15]=t18569 + t18573 + t18577 + (t18618 + t18380*(t18585 + t18597 - 1.*t18285*t18583*t18619 - 1.*t18285*t18583*t18622 + t18625 + t18626) + t18136*t18285*(-1.*t18155*t18353*t18583 + t18136*t18380*t18583 + t18601 + t18607 + t18631 + t18632) + t18635)*var2[3] + (t18580 + t18334*(-1.*t18285*t18583 + t18585 + t18596 + t18597) + t18295*(t18351*t18583 + t18601 + t18606 + t18607) + t18615)*var2[4];
  p_output1[16]=t18639 + t18643 + t18657 + (t18482*(t18155*t18353*t18583 - 1.*t18136*t18380*t18583 + t18662 + t18666 + t18704 + t18705) + t18380*(-1.*t18155*t18160*t18583 + t18136*t18482*t18583 + t18685 + t18687 + t18711 + t18712) + t18716 + t18717)*var2[3] + (t18111*(-1.*t18351*t18583 + t18662 + t18663 + t18666) + t18677 + t18334*(t18158*t18583 + t18685 + t18686 + t18687) + t18699)*var2[4];
  p_output1[17]=t18722 + t18726 + t18730 + (t18758 + t18482*(t18285*t18583*t18619 + t18285*t18583*t18622 + t18735 + t18738 + t18761 + t18762) + t18136*t18285*(t18155*t18160*t18583 - 1.*t18136*t18482*t18583 + t18746 + t18749 + t18767 + t18768) + t18771)*var2[3] + (t18733 + t18111*(t18285*t18583 + t18735 + t18737 + t18738) + t18295*(-1.*t18158*t18583 + t18746 + t18747 + t18749) + t18755)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t18569 + t18573 + t18577 + (t18618 + t18635 + t18380*(t18585 + t18625 + t18626 - 1.*t18285*t18619*t18790 - 1.*t18285*t18622*t18790 + t18795) + t18136*t18285*(t18601 + t18631 + t18632 - 1.*t18155*t18353*t18790 + t18136*t18380*t18790 + t18799))*var2[3] + (t18580 + t18615 + t18334*(t18585 + t18596 - 1.*t18285*t18790 + t18795) + t18295*(t18601 + t18606 + t18351*t18790 + t18799))*var2[4] + t18341*(-1.*t17788*t18403 + t17788*t18777 - 1.*t18408*t3122 - 1.*t18781*t3122)*var2[5];
  p_output1[46]=t18639 + t18643 + t18657 + (t18716 + t18717 + t18482*(t18662 + t18704 + t18705 + t18155*t18353*t18790 - 1.*t18136*t18380*t18790 + t18830) + t18380*(t18685 + t18711 + t18712 - 1.*t18155*t18160*t18790 + t18136*t18482*t18790 + t18834))*var2[3] + (t18677 + t18699 + t18111*(t18662 + t18663 - 1.*t18351*t18790 + t18830) + t18334*(t18685 + t18686 + t18158*t18790 + t18834))*var2[4] + (t18341*(t16824*t17788*t18408 + t16824*t17788*t18781 - 1.*t16824*t18403*t3122 + t16824*t18777*t3122) + t18149*(-1.*t17788*t18149*t18408 - 1.*t17788*t18149*t18781 + t18149*t18403*t3122 - 1.*t18149*t18777*t3122))*var2[5];
  p_output1[47]=t18722 + t18726 + t18730 + (t18758 + t18771 + t18482*(t18735 + t18761 + t18762 + t18285*t18619*t18790 + t18285*t18622*t18790 + t18858) + t18136*t18285*(t18746 + t18767 + t18768 + t18155*t18160*t18790 - 1.*t18136*t18482*t18790 + t18862))*var2[3] + (t18733 + t18755 + t18111*(t18735 + t18737 + t18285*t18790 + t18858) + t18295*(t18746 + t18747 - 1.*t18158*t18790 + t18862))*var2[4] + t18149*(t17788*t18403 - 1.*t17788*t18777 + t18408*t3122 + t18781*t3122)*var2[5];
  p_output1[48]=t18884 + t18895*var2[0] + (t18135*t18899 - 1.*t18904*t370)*var2[1] + (t18135*t18904 + t18899*t370)*var2[2] + (t18432*t18482 + t18380*(t18920 - 1.*t18136*t18285*t18940 + t18155*t18285*t18944) + t18136*t18285*(t18511 + t18512 + t18513 + t18932 + t18380*t18940 + t18353*t18944))*var2[3] + (t18111*t18579 + t18334*(t18920 - 1.*t18285*t18923) + t18295*(t18511 + t18693 + t18694 + t18351*t18923 + t18341*t18930 + t18932))*var2[4] + t18149*t18888*var2[5];
  p_output1[49]=(t18482*t18514 + t18500*t18895 + t18380*(t18416*t18895 + t18430*t18904 + t18482*t18940 + t18160*t18944 + t19001 + t19003) + t18482*(t18551 + t18555 + t18556 - 1.*t18380*t18940 - 1.*t18353*t18944 + t19008))*var2[3] + (t18111*t18698 + t18676*t18899 + t18334*(t18410*t18893 + t18158*t18923 + t18960 + t18963 + t19001 + t19003) + t18111*(t18551 + t18752 + t18753 - 1.*t18351*t18923 + t18971 + t19008))*var2[4] + (t16824*t18986 + t18149*t18996 + t18149*(-1.*t16824*t17788*t18403 + t18752 + t18971 - 1.*t18149*t18916*t18976 - 1.*t18149*t18916*t18978 - 1.*t16824*t18408*t3122) + t18341*(t17788*t18403*t18880 + t18960 + t18963 + t16824*t18916*t18976 + t16824*t18916*t18978 + t18408*t18880*t3122))*var2[5] + (t18149*t18958 + t18341*(t18400*t18880 + t16824*t18916 + t18960 + t18963) + t16824*t18967 + t18149*(-1.*t16824*t18400 + t18752 - 1.*t18149*t18916 + t18971))*var2[15];
  p_output1[50]=t18482*var2[0] + t18277*var2[1] + (t18135*t18160 + t18111*t370)*var2[2] + (t18543*t18895 + t18482*(t18136*t18285*t18940 - 1.*t18155*t18285*t18944 + t19040) + t18136*t18285*(-1.*t18416*t18895 - 1.*t18430*t18904 - 1.*t18482*t18940 - 1.*t18160*t18944 + t19047 + t19049))*var2[3] + (t18732*t18899 + t18111*(t18285*t18923 + t19040) + t18295*(-1.*t16824*t18389 - 1.*t18410*t18893 - 1.*t18158*t18923 - 1.*t18149*t18930 + t19047 + t19049))*var2[4] + t16824*t19032*var2[5];
  p_output1[51]=t18884 + t18380*var2[0] + t18369*var2[1] + (t18135*t18353 + t18334*t370)*var2[2] + (t18380*(t19089 - 1.*t18136*t18285*t19118 + t18155*t18285*t19122) + t18432*t19128 + t18136*t18285*(t19105 + t19107 + t18380*t19118 + t18353*t19122 + t18416*t19128 + t18430*t19135))*var2[3] + (t18334*(t19089 - 1.*t18285*t19092) + t18579*t19098 + t18295*(t18389*t18880 + t18351*t19092 + t18341*t19103 + t19105 + t19107 + t18410*t19110))*var2[4] + t18880*t18888*var2[5] + (0.28121*t9714 + t18386*t9714 - 0.305*Power(t9714,2))*var2[16];
  p_output1[52]=(t18380*t18500 + t18514*t19128 + t18380*(t18443 + t18444 + t18454 + t18482*t19118 + t18160*t19122 + t19175) + t18482*(-1.*t18380*t19118 - 1.*t18353*t19122 - 1.*t18416*t19128 - 1.*t18430*t19135 + t19180 + t19182))*var2[3] + (t18334*t18676 + t18698*t19098 + t18334*(t18443 + t18612 + t18613 + t18158*t19092 + t19145 + t19175) + t18111*(-1.*t18351*t19092 - 1.*t18410*t19110 + t19149 + t19151 + t19180 + t19182))*var2[4] + (t18341*t18986 + t18880*t18996 + t18341*(t17788*t18149*t18403 + t18612 + t16824*t18976*t19085 + t16824*t18978*t19085 + t19145 + t18149*t18408*t3122) + t18149*(-1.*t17788*t18341*t18403 - 1.*t18149*t18976*t19085 - 1.*t18149*t18978*t19085 + t19149 + t19151 - 1.*t18341*t18408*t3122))*var2[5] + (t18880*t18958 + t18341*t18967 + t18341*(t18149*t18400 + t18612 + t16824*t19085 + t19145) + t18149*(-1.*t18341*t18400 - 1.*t18149*t19085 + t19149 + t19151))*var2[15];
  p_output1[53]=t19128*var2[0] + (t18135*t19098 - 1.*t19135*t370)*var2[1] + (t18135*t19135 + t19098*t370)*var2[2] + (t18380*t18543 + t18482*(t18136*t18285*t19118 - 1.*t18155*t18285*t19122 + t19219) + t18136*t18285*(t18494 + t18495 + t18496 - 1.*t18482*t19118 - 1.*t18160*t19122 + t19225))*var2[3] + (t18334*t18732 + t18111*(t18285*t19092 + t19219) + t18295*(t18494 + t18674 + t18675 - 1.*t18158*t19092 - 1.*t18149*t19103 + t19225))*var2[4] + t18341*t19032*var2[5] + (-0.28121*t16166 - 1.*t16166*t18386 + 0.305*t16166*t9714)*var2[16];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
