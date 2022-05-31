/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:58:59 GMT+02:00
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
  double t9;
  double t139;
  double t50;
  double t191;
  double t209;
  double t190;
  double t247;
  double t98;
  double t282;
  double t298;
  double t302;
  double t140;
  double t155;
  double t419;
  double t423;
  double t426;
  double t488;
  double t498;
  double t508;
  double t516;
  double t523;
  double t530;
  double t531;
  double t542;
  double t559;
  double t572;
  double t605;
  double t737;
  double t797;
  double t853;
  double t854;
  double t894;
  double t429;
  double t435;
  double t438;
  double t207;
  double t263;
  double t275;
  double t330;
  double t350;
  double t370;
  double t1006;
  double t1258;
  double t1285;
  double t135;
  double t145;
  double t147;
  double t1507;
  double t1614;
  double t1619;
  double t1793;
  double t1775;
  double t280;
  double t383;
  double t384;
  double t398;
  double t439;
  double t444;
  double t2126;
  double t2131;
  double t2134;
  double t2151;
  double t2166;
  double t2168;
  double t2173;
  double t2187;
  double t2190;
  double t2202;
  double t2208;
  double t2210;
  double t2214;
  double t900;
  double t927;
  double t942;
  double t1923;
  double t1927;
  double t1961;
  double t1842;
  double t1843;
  double t1852;
  double t1668;
  double t1687;
  double t1690;
  double t2297;
  double t2300;
  double t2334;
  double t1794;
  double t1796;
  double t1802;
  double t2354;
  double t2360;
  double t2361;
  double t2502;
  double t2537;
  double t2538;
  double t2030;
  double t2048;
  double t2054;
  double t2068;
  double t2070;
  double t2081;
  double t2691;
  double t2726;
  double t2732;
  double t2733;
  double t2874;
  double t2879;
  double t2910;
  double t2911;
  double t2976;
  double t2990;
  double t2999;
  double t3047;
  double t3109;
  double t2222;
  double t2227;
  double t2246;
  double t2286;
  double t2289;
  double t2290;
  double t2403;
  double t2421;
  double t2423;
  double t2442;
  double t2445;
  double t2448;
  double t3227;
  double t3232;
  double t3273;
  double t3278;
  double t3310;
  double t3336;
  double t3497;
  double t3531;
  double t3550;
  double t3552;
  double t3592;
  double t3655;
  double t3662;
  double t3681;
  double t3697;
  double t3699;
  double t3705;
  double t3706;
  double t3707;
  double t3496;
  double t3621;
  double t3635;
  double t3643;
  double t3676;
  double t3724;
  double t3735;
  double t3741;
  double t3742;
  double t3743;
  double t3744;
  double t3746;
  double t3757;
  double t3758;
  double t3765;
  double t3896;
  double t3951;
  double t4058;
  double t3652;
  double t3823;
  double t3852;
  double t4374;
  double t4375;
  double t4380;
  double t4360;
  double t4362;
  double t4369;
  double t4371;
  double t4372;
  double t4384;
  double t4386;
  double t4687;
  double t4688;
  double t4689;
  double t4457;
  double t4458;
  double t4462;
  double t4463;
  double t4482;
  double t4485;
  double t4486;
  double t4487;
  double t4684;
  double t4693;
  double t4523;
  double t4531;
  double t4538;
  double t4539;
  double t4576;
  double t4582;
  double t4583;
  double t4597;
  double t4628;
  double t4634;
  double t4638;
  double t4665;
  double t4683;
  double t4697;
  double t5249;
  double t5273;
  double t5400;
  double t5417;
  double t5418;
  double t5495;
  double t5520;
  double t4700;
  double t4701;
  double t4706;
  double t5596;
  double t5598;
  double t5604;
  double t4711;
  double t4712;
  double t4716;
  double t4733;
  double t4746;
  double t4756;
  double t4760;
  double t4797;
  double t4881;
  double t4897;
  double t4966;
  double t4980;
  double t5063;
  double t5083;
  double t5106;
  double t5153;
  double t5157;
  double t5200;
  double t5213;
  double t6939;
  double t6940;
  double t6942;
  double t6985;
  double t7018;
  double t7025;
  double t7068;
  double t7086;
  double t7089;
  double t850;
  double t960;
  double t976;
  double t6989;
  double t6996;
  double t7007;
  double t7057;
  double t7090;
  double t7095;
  double t7118;
  double t7119;
  double t7127;
  double t7595;
  double t7596;
  double t7618;
  double t7619;
  double t7620;
  double t7630;
  double t7631;
  double t7637;
  double t7598;
  double t7604;
  double t7606;
  double t7622;
  double t7649;
  double t7658;
  double t7664;
  double t7665;
  double t7673;
  double t1629;
  double t1692;
  double t1695;
  double t4699;
  double t4707;
  double t4752;
  double t4811;
  double t4992;
  double t5117;
  double t8262;
  double t8288;
  double t8306;
  double t5615;
  double t8394;
  double t5647;
  double t8429;
  double t8488;
  double t8490;
  double t8501;
  double t8510;
  double t8535;
  double t8536;
  double t8549;
  double t6264;
  double t8575;
  double t6473;
  double t8590;
  double t8598;
  double t8603;
  double t8604;
  double t8611;
  double t6805;
  double t8616;
  double t8770;
  double t8784;
  double t8788;
  double t8812;
  double t6878;
  double t8836;
  double t8855;
  double t8906;
  double t8907;
  double t8920;
  double t7011;
  double t7164;
  double t7165;
  double t7253;
  double t7270;
  double t7415;
  double t7462;
  double t7503;
  double t7615;
  double t7744;
  double t7813;
  double t7949;
  double t7955;
  double t8053;
  double t8139;
  double t8140;
  double t9477;
  double t9479;
  double t10045;
  double t10049;
  double t9539;
  double t10035;
  double t10036;
  double t10037;
  double t10039;
  double t10042;
  double t10043;
  double t10058;
  double t10059;
  double t10060;
  double t9642;
  double t10101;
  double t10102;
  double t10112;
  double t9648;
  double t9649;
  double t10308;
  double t10309;
  double t10310;
  double t10311;
  double t10312;
  double t10314;
  double t10511;
  double t10518;
  double t10617;
  double t10618;
  t9 = Sin(var1[4]);
  t139 = Cos(var1[9]);
  t50 = Cos(var1[5]);
  t191 = Cos(var1[11]);
  t209 = Sin(var1[10]);
  t190 = Cos(var1[10]);
  t247 = Sin(var1[11]);
  t98 = Sin(var1[9]);
  t282 = -1.*t191*t209;
  t298 = t190*t247;
  t302 = t282 + t298;
  t140 = Sin(var1[5]);
  t155 = Cos(var1[4]);
  t419 = -1.*t190*t191;
  t423 = -1.*t209*t247;
  t426 = t419 + t423;
  t488 = t139*t50;
  t498 = -1.*t98*t140;
  t508 = t488 + t498;
  t516 = var2[1]*t155*t508;
  t523 = -1.*t50*t98*t302;
  t530 = -1.*t139*t302*t140;
  t531 = t523 + t530;
  t542 = var2[2]*t155*t531;
  t559 = -1.*t50*t98*t426;
  t572 = -1.*t139*t426*t140;
  t605 = t559 + t572;
  t737 = var2[0]*t155*t605;
  t797 = t516 + t542 + t737;
  t853 = t191*t209;
  t854 = -1.*t190*t247;
  t894 = t853 + t854;
  t429 = t139*t50*t426;
  t435 = -1.*t98*t426*t140;
  t438 = t429 + t435;
  t207 = t190*t191;
  t263 = t209*t247;
  t275 = t207 + t263;
  t330 = t139*t50*t302;
  t350 = -1.*t98*t302*t140;
  t370 = t330 + t350;
  t1006 = t302*t9;
  t1258 = t155*t438;
  t1285 = t1006 + t1258;
  t135 = t50*t98;
  t145 = t139*t140;
  t147 = t135 + t145;
  t1507 = t275*t9;
  t1614 = t155*t370;
  t1619 = t1507 + t1614;
  t1793 = Sin(var1[3]);
  t1775 = Cos(var1[3]);
  t280 = t155*t275;
  t383 = -1.*t9*t370;
  t384 = t280 + t383;
  t398 = t155*t302;
  t439 = -1.*t9*t438;
  t444 = t398 + t439;
  t2126 = t1775*t147;
  t2131 = t1793*t9*t508;
  t2134 = t2126 + t2131;
  t2151 = var2[1]*t2134;
  t2166 = t1793*t9*t531;
  t2168 = t1775*t370;
  t2173 = t2166 + t2168;
  t2187 = var2[2]*t2173;
  t2190 = t1793*t9*t605;
  t2202 = t1775*t438;
  t2208 = t2190 + t2202;
  t2210 = var2[0]*t2208;
  t2214 = t2151 + t2187 + t2210;
  t900 = t139*t50*t894;
  t927 = -1.*t98*t894*t140;
  t942 = t900 + t927;
  t1923 = t50*t98*t426;
  t1927 = t139*t426*t140;
  t1961 = t1923 + t1927;
  t1842 = t50*t98*t302;
  t1843 = t139*t302*t140;
  t1852 = t1842 + t1843;
  t1668 = t139*t50*t275;
  t1687 = -1.*t98*t275*t140;
  t1690 = t1668 + t1687;
  t2297 = t1775*t1961;
  t2300 = -1.*t1793*t444;
  t2334 = t2297 + t2300;
  t1794 = -1.*t139*t50;
  t1796 = t98*t140;
  t1802 = t1794 + t1796;
  t2354 = t1775*t1852;
  t2360 = -1.*t1793*t384;
  t2361 = t2354 + t2360;
  t2502 = t1793*t9*t147;
  t2537 = t1775*t1802;
  t2538 = t2502 + t2537;
  t2030 = -1.*t275*t9;
  t2048 = -1.*t155*t370;
  t2054 = t2030 + t2048;
  t2068 = -1.*t302*t9;
  t2070 = -1.*t155*t438;
  t2081 = t2068 + t2070;
  t2691 = t1793*t147;
  t2726 = -1.*t1775*t9*t508;
  t2732 = t2691 + t2726;
  t2733 = var2[1]*t2732;
  t2874 = -1.*t1775*t9*t531;
  t2879 = t1793*t370;
  t2910 = t2874 + t2879;
  t2911 = var2[2]*t2910;
  t2976 = -1.*t1775*t9*t605;
  t2990 = t1793*t438;
  t2999 = t2976 + t2990;
  t3047 = var2[0]*t2999;
  t3109 = t2733 + t2911 + t3047;
  t2222 = t50*t98*t894;
  t2227 = t139*t894*t140;
  t2246 = t2222 + t2227;
  t2286 = t155*t426;
  t2289 = -1.*t9*t942;
  t2290 = t2286 + t2289;
  t2403 = t50*t98*t275;
  t2421 = t139*t275*t140;
  t2423 = t2403 + t2421;
  t2442 = t155*t894;
  t2445 = -1.*t9*t1690;
  t2448 = t2442 + t2445;
  t3227 = t1793*t1961;
  t3232 = t1775*t444;
  t3273 = t3227 + t3232;
  t3278 = t1793*t1852;
  t3310 = t1775*t384;
  t3336 = t3278 + t3310;
  t3497 = -1.*t191;
  t3531 = 1. + t3497;
  t3550 = -0.50321*t3531;
  t3552 = -0.19821*t191;
  t3592 = t3550 + t3552;
  t3655 = -1.*t139;
  t3662 = 1. + t3655;
  t3681 = -1.*t190;
  t3697 = 1. + t3681;
  t3699 = -0.28121*t3697;
  t3705 = t190*t3592;
  t3706 = 0.305*t209*t247;
  t3707 = t3699 + t3705 + t3706;
  t3496 = 0.28121*t209;
  t3621 = t3592*t209;
  t3635 = -0.305*t190*t247;
  t3643 = t3496 + t3621 + t3635;
  t3676 = -0.15121*t3662;
  t3724 = t139*t3707;
  t3735 = t3676 + t3724;
  t3741 = t50*t3735;
  t3742 = 0.15121*t3662;
  t3743 = 0.15121*t139;
  t3744 = 0.15121*t98;
  t3746 = t98*t3707;
  t3757 = t3742 + t3743 + t3744 + t3746;
  t3758 = -1.*t3757*t140;
  t3765 = t3741 + t3758;
  t3896 = t3643*t9;
  t3951 = t155*t3765;
  t4058 = t3896 + t3951;
  t3652 = -1.*t3643*t9;
  t3823 = -1.*t155*t3765;
  t3852 = t3652 + t3823;
  t4374 = t155*t3643;
  t4375 = -1.*t9*t3765;
  t4380 = t4374 + t4375;
  t4360 = t50*t3757;
  t4362 = t3735*t140;
  t4369 = t4360 + t4362;
  t4371 = -1.*t1802*t4369;
  t4372 = -1.*t155*t147*t4058;
  t4384 = t9*t147*t4380;
  t4386 = t4371 + t4372 + t4384;
  t4687 = -1.*t50*t3757;
  t4688 = -1.*t3735*t140;
  t4689 = t4687 + t4688;
  t4457 = t1852*t4369;
  t4458 = t1619*t4058;
  t4462 = t384*t4380;
  t4463 = t4457 + t4458 + t4462;
  t4482 = t1802*t4369;
  t4485 = t155*t147*t4058;
  t4486 = -1.*t9*t147*t4380;
  t4487 = t4482 + t4485 + t4486;
  t4684 = Power(t155,2);
  t4693 = Power(t9,2);
  t4523 = -1.*t1961*t4369;
  t4531 = -1.*t1285*t4058;
  t4538 = -1.*t444*t4380;
  t4539 = t4523 + t4531 + t4538;
  t4576 = -1.*t1852*t4369;
  t4582 = -1.*t1619*t4058;
  t4583 = -1.*t384*t4380;
  t4597 = t4576 + t4582 + t4583;
  t4628 = t1961*t4369;
  t4634 = t1285*t4058;
  t4638 = t444*t4380;
  t4665 = t4628 + t4634 + t4638;
  t4683 = t155*t531*t4386;
  t4697 = -1.*t147*t4369;
  t5249 = -0.15121*t98;
  t5273 = -1.*t98*t3707;
  t5400 = t5249 + t5273;
  t5417 = t50*t5400;
  t5418 = t3743 + t3724;
  t5495 = -1.*t5418*t140;
  t5520 = t5417 + t5495;
  t4700 = -1.*t155*t508*t4058;
  t4701 = t9*t508*t4380;
  t4706 = t370*t4369;
  t5596 = t50*t5418;
  t5598 = t5400*t140;
  t5604 = t5596 + t5598;
  t4711 = t155*t531*t4058;
  t4712 = -1.*t9*t531*t4380;
  t4716 = t155*t508*t4463;
  t4733 = t155*t605*t4487;
  t4746 = t147*t4369;
  t4756 = t155*t508*t4058;
  t4760 = -1.*t9*t508*t4380;
  t4797 = -1.*t438*t4369;
  t4881 = -1.*t155*t605*t4058;
  t4897 = t9*t605*t4380;
  t4966 = t155*t508*t4539;
  t4980 = -1.*t370*t4369;
  t5063 = -1.*t155*t531*t4058;
  t5083 = t9*t531*t4380;
  t5106 = t438*t4369;
  t5153 = t155*t605*t4058;
  t5157 = -1.*t9*t605*t4380;
  t5200 = t155*t605*t4597;
  t5213 = t155*t531*t4665;
  t6939 = -0.28121*t209;
  t6940 = -1.*t3592*t209;
  t6942 = 0.305*t190*t247;
  t6985 = t6939 + t6940 + t6942;
  t7018 = 0.28121*t190;
  t7025 = t7018 + t3705 + t3706;
  t7068 = t139*t50*t6985;
  t7086 = -1.*t98*t6985*t140;
  t7089 = t7068 + t7086;
  t850 = t426*t9;
  t960 = t155*t942;
  t976 = t850 + t960;
  t6989 = t50*t98*t6985;
  t6996 = t139*t6985*t140;
  t7007 = t6989 + t6996;
  t7057 = t7025*t9;
  t7090 = t155*t7089;
  t7095 = t7057 + t7090;
  t7118 = t155*t7025;
  t7119 = -1.*t9*t7089;
  t7127 = t7118 + t7119;
  t7595 = 0.305*t191*t209;
  t7596 = t7595 + t3635;
  t7618 = -0.305*t190*t191;
  t7619 = -0.305*t209*t247;
  t7620 = t7618 + t7619;
  t7630 = t139*t50*t7596;
  t7631 = -1.*t98*t7596*t140;
  t7637 = t7630 + t7631;
  t7598 = t50*t98*t7596;
  t7604 = t139*t7596*t140;
  t7606 = t7598 + t7604;
  t7622 = t7620*t9;
  t7649 = t155*t7637;
  t7658 = t7622 + t7649;
  t7664 = t155*t7620;
  t7665 = -1.*t9*t7637;
  t7673 = t7664 + t7665;
  t1629 = t894*t9;
  t1692 = t155*t1690;
  t1695 = t1629 + t1692;
  t4699 = -1.*t1802*t3765;
  t4707 = t1852*t3765;
  t4752 = t1802*t3765;
  t4811 = -1.*t1961*t3765;
  t4992 = -1.*t1852*t3765;
  t5117 = t1961*t3765;
  t8262 = -1.*t147*t3765;
  t8288 = t4371 + t8262;
  t8306 = t370*t8288;
  t5615 = -1.*t1802*t5604;
  t8394 = -1.*t508*t3765;
  t5647 = t1852*t5604;
  t8429 = t531*t3765;
  t8488 = t3643*t275;
  t8490 = t370*t3765;
  t8501 = t8488 + t4457 + t8490;
  t8510 = t147*t8501;
  t8535 = t147*t3765;
  t8536 = t4482 + t8535;
  t8549 = t438*t8536;
  t6264 = t1802*t5604;
  t8575 = t508*t3765;
  t6473 = -1.*t1961*t5604;
  t8590 = -1.*t605*t3765;
  t8598 = -1.*t3643*t302;
  t8603 = -1.*t438*t3765;
  t8604 = t8598 + t4523 + t8603;
  t8611 = t147*t8604;
  t6805 = -1.*t1852*t5604;
  t8616 = -1.*t531*t3765;
  t8770 = -1.*t3643*t275;
  t8784 = -1.*t370*t3765;
  t8788 = t8770 + t4576 + t8784;
  t8812 = t438*t8788;
  t6878 = t1961*t5604;
  t8836 = t605*t3765;
  t8855 = t3643*t302;
  t8906 = t438*t3765;
  t8907 = t8855 + t4628 + t8906;
  t8920 = t370*t8907;
  t7011 = t1802*t7007;
  t7164 = -1.*t7007*t1961;
  t7165 = -1.*t2246*t4369;
  t7253 = t7007*t1961;
  t7270 = t2246*t4369;
  t7415 = -1.*t7007*t1852;
  t7462 = -1.*t1802*t7007;
  t7503 = t7007*t1852;
  t7615 = t1802*t7606;
  t7744 = -1.*t7606*t1961;
  t7813 = t7606*t1961;
  t7949 = -1.*t7606*t1852;
  t7955 = -1.*t2423*t4369;
  t8053 = -1.*t1802*t7606;
  t8139 = t7606*t1852;
  t8140 = t2423*t4369;
  t9477 = t3643*t426;
  t9479 = t302*t7025;
  t10045 = Power(t139,2);
  t10049 = Power(t98,2);
  t9539 = -1.*t7025*t275;
  t10035 = t98*t3735;
  t10036 = -1.*t139*t3757;
  t10037 = t10035 + t10036;
  t10039 = -1.*t98*t3735;
  t10042 = t139*t3757;
  t10043 = t10039 + t10042;
  t10058 = -1.*t139*t302*t3735;
  t10059 = -1.*t98*t302*t3757;
  t10060 = t8770 + t10058 + t10059;
  t9642 = t302*t7620;
  t10101 = t139*t426*t3735;
  t10102 = t98*t426*t3757;
  t10112 = t8855 + t10101 + t10102;
  t9648 = -1.*t894*t3643;
  t9649 = -1.*t7620*t275;
  t10308 = 0.15121*t894;
  t10309 = 0.15121*t302;
  t10310 = t10308 + t10309;
  t10311 = var2[0]*t10310;
  t10312 = t426*t3707;
  t10314 = t8855 + t10312;
  t10511 = -1.*t302*t3707;
  t10518 = t10511 + t8770;
  t10617 = 0.28121*t191;
  t10618 = t3592*t191;
  p_output1[0]=t444*var2[0] - 1.*t147*t9*var2[1] + t384*var2[2];
  p_output1[1]=t797;
  p_output1[2]=t797;
  p_output1[3]=t976*var2[0] + t1285*var2[2];
  p_output1[4]=t1619*var2[0] + t1695*var2[2];
  p_output1[5]=t1285;
  p_output1[6]=t147*t155;
  p_output1[7]=t1619;
  p_output1[8]=(-1.*t1793*t1961 - 1.*t1775*t444)*var2[0] + (-1.*t1793*t1802 + t147*t1775*t9)*var2[1] + (-1.*t1793*t1852 - 1.*t1775*t384)*var2[2];
  p_output1[9]=-1.*t1793*t2081*var2[0] + t147*t155*t1793*var2[1] - 1.*t1793*t2054*var2[2];
  p_output1[10]=t2214;
  p_output1[11]=t2214;
  p_output1[12]=(t1775*t2246 - 1.*t1793*t2290)*var2[0] + t2334*var2[2];
  p_output1[13]=t2361*var2[0] + (t1775*t2423 - 1.*t1793*t2448)*var2[2];
  p_output1[14]=t2334;
  p_output1[15]=t2538;
  p_output1[16]=t2361;
  p_output1[17]=t2334*var2[0] + t2538*var2[1] + t2361*var2[2];
  p_output1[18]=t1775*t2081*var2[0] - 1.*t147*t155*t1775*var2[1] + t1775*t2054*var2[2];
  p_output1[19]=t3109;
  p_output1[20]=t3109;
  p_output1[21]=(t1793*t2246 + t1775*t2290)*var2[0] + t3273*var2[2];
  p_output1[22]=t3336*var2[0] + (t1793*t2423 + t1775*t2448)*var2[2];
  p_output1[23]=t3273;
  p_output1[24]=t1793*t1802 - 1.*t147*t1775*t9;
  p_output1[25]=t3336;
  p_output1[26]=(t147*t155*(t384*t3852 + t384*t4058 + t1619*t4380 + t2054*t4380) + t384*t4386 - 1.*t147*t4463*t9 + t1619*(t147*t3852*t9 + t147*t4058*t9))*var2[0] + (t1285*(-1.*t384*t3852 - 1.*t384*t4058 - 1.*t1619*t4380 - 1.*t2054*t4380) + t1619*(t1285*t4380 + t2081*t4380 + t3852*t444 + t4058*t444) + t444*t4597 + t384*t4665)*var2[1] + (t147*t155*(-1.*t1285*t4380 - 1.*t2081*t4380 - 1.*t3852*t444 - 1.*t4058*t444) + t444*t4487 - 1.*t147*t4539*t9 + t1285*(-1.*t147*t3852*t9 - 1.*t147*t4058*t9))*var2[2];
  p_output1[27]=(t4683 + t1619*(-1.*t147*t4684*t4689 - 1.*t147*t4689*t4693 + t4697 + t4699 + t4700 + t4701) + t4716 + t147*t155*(t155*t1619*t4689 + t4706 + t4707 + t4711 + t4712 - 1.*t384*t4689*t9))*var2[0] + (t5200 + t5213 + t1285*(-1.*t155*t1619*t4689 + t4980 + t4992 + t5063 + t5083 + t384*t4689*t9) + t1619*(t1285*t155*t4689 + t5106 + t5117 + t5153 + t5157 - 1.*t444*t4689*t9))*var2[1] + (t4733 + t1285*(t147*t4684*t4689 + t147*t4689*t4693 + t4746 + t4752 + t4756 + t4760) + t4966 + t147*t155*(-1.*t1285*t155*t4689 + t4797 + t4811 + t4881 + t4897 + t444*t4689*t9))*var2[2];
  p_output1[28]=(t4683 + t4716 + t1619*(t4697 + t4700 + t4701 - 1.*t147*t4684*t5520 - 1.*t147*t4693*t5520 + t5615) + t147*t155*(t4706 + t4711 + t4712 + t155*t1619*t5520 + t5647 - 1.*t384*t5520*t9))*var2[0] + (t5200 + t5213 + t1285*(t4980 + t5063 + t5083 - 1.*t155*t1619*t5520 + t6805 + t384*t5520*t9) + t1619*(t5106 + t5153 + t5157 + t1285*t155*t5520 + t6878 - 1.*t444*t5520*t9))*var2[1] + (t4733 + t4966 + t1285*(t4746 + t4756 + t4760 + t147*t4684*t5520 + t147*t4693*t5520 + t6264) + t147*t155*(t4797 + t4881 + t4897 - 1.*t1285*t155*t5520 + t6473 + t444*t5520*t9))*var2[2];
  p_output1[29]=(t1285*t4386 + t147*t155*(t4628 + t4634 + t4638 + t1619*t7095 + t384*t7127 + t7503) + t1619*(-1.*t147*t155*t7095 + t7462 + t147*t7127*t9))*var2[0] + (t1285*t4665 + t1285*(t4523 + t4531 + t4538 - 1.*t1619*t7095 - 1.*t384*t7127 + t7415) + t4597*t976 + t1619*(t2290*t4380 + t1285*t7095 + t444*t7127 + t7253 + t7270 + t4058*t976))*var2[1] + (t1285*(t7011 + t147*t155*t7095 - 1.*t147*t7127*t9) + t4487*t976 + t147*t155*(-1.*t2290*t4380 - 1.*t1285*t7095 - 1.*t444*t7127 + t7164 + t7165 - 1.*t4058*t976))*var2[2];
  p_output1[30]=(t1695*t4386 + t147*t155*(t1695*t4058 + t2448*t4380 + t1619*t7658 + t384*t7673 + t8139 + t8140) + t1619*(-1.*t147*t155*t7658 + t8053 + t147*t7673*t9))*var2[0] + (t1619*t4597 + t1695*t4665 + t1619*(t4457 + t4458 + t4462 + t1285*t7658 + t444*t7673 + t7813) + t1285*(-1.*t1695*t4058 - 1.*t2448*t4380 - 1.*t1619*t7658 - 1.*t384*t7673 + t7949 + t7955))*var2[1] + (t1619*t4487 + t147*t155*(t4576 + t4582 + t4583 - 1.*t1285*t7658 - 1.*t444*t7673 + t7744) + t1285*(t7615 + t147*t155*t7658 - 1.*t147*t7673*t9))*var2[2];
  p_output1[31]=t1619*t4386 + t147*t155*t4463;
  p_output1[32]=t1285*t4597 + t1619*t4665;
  p_output1[33]=t1285*t4487 + t147*t155*t4539;
  p_output1[34]=(t8306 + t1852*(-1.*t147*t4689 + t4697 + t4699 + t8394) + t1802*(t370*t4689 + t4706 + t4707 + t8429) + t8510)*var2[0] + (t1961*(-1.*t370*t4689 + t4980 + t4992 + t8616) + t8812 + t1852*(t438*t4689 + t5106 + t5117 + t8836) + t8920)*var2[1] + (t8549 + t1961*(t147*t4689 + t4746 + t4752 + t8575) + t1802*(-1.*t438*t4689 + t4797 + t4811 + t8590) + t8611)*var2[2];
  p_output1[35]=(t8306 + t1852*(t4697 - 1.*t147*t5520 + t5615 + t8394) + t1802*(t4706 + t370*t5520 + t5647 + t8429) + t8510)*var2[0] + (t1961*(t4980 - 1.*t370*t5520 + t6805 + t8616) + t8812 + t1852*(t5106 + t438*t5520 + t6878 + t8836) + t8920)*var2[1] + (t8549 + t1961*(t4746 + t147*t5520 + t6264 + t8575) + t1802*(t4797 - 1.*t438*t5520 + t6473 + t8590) + t8611)*var2[2];
  p_output1[36]=(t1852*(-1.*t147*t7089 + t7462) + t1961*t8288 + t1802*(t4628 + t275*t7025 + t370*t7089 + t7503 + t8855 + t8906))*var2[0] + (t2246*t8788 + t1961*t8907 + t1852*(t438*t7089 + t7253 + t7270 + t3765*t942 + t9477 + t9479) + t1961*(t4523 - 1.*t370*t7089 + t7415 + t8598 + t8603 + t9539))*var2[1] + (t1961*(t7011 + t147*t7089) + t2246*t8536 + t1802*(-1.*t3643*t426 - 1.*t302*t7025 - 1.*t438*t7089 + t7164 + t7165 - 1.*t3765*t942))*var2[2];
  p_output1[37]=(t1852*(-1.*t147*t7637 + t8053) + t2423*t8288 + t1802*(t1690*t3765 + t275*t7620 + t370*t7637 + t8139 + t8140 + t3643*t894))*var2[0] + (t1852*t8788 + t2423*t8907 + t1852*(t4457 + t438*t7637 + t7813 + t8488 + t8490 + t9642) + t1961*(-1.*t1690*t3765 - 1.*t370*t7637 + t7949 + t7955 + t9648 + t9649))*var2[1] + (t1961*(t7615 + t147*t7637) + t1852*t8536 + t1802*(t4576 - 1.*t302*t7620 - 1.*t438*t7637 + t7744 + t8770 + t8784))*var2[2];
  p_output1[38]=t1852*t8288 + t1802*t8501;
  p_output1[39]=t1961*t8788 + t1852*t8907;
  p_output1[40]=t1961*t8536 + t1802*t8604;
  p_output1[41]=t275*(-1.*t139*t3735 + t139*t5418 - 1.*t3757*t98 - 1.*t5400*t98)*var2[0] + (t302*(-1.*t139*t302*t3757 - 1.*t139*t302*t5400 + t302*t3735*t98 - 1.*t302*t5418*t98) + t275*(t139*t3757*t426 + t139*t426*t5400 - 1.*t3735*t426*t98 + t426*t5418*t98))*var2[1] + t302*(t139*t3735 - 1.*t139*t5418 + t3757*t98 + t5400*t98)*var2[2];
  p_output1[42]=t10043*t302*var2[0] + (t10112*t302 + t10060*t426 + t302*(-1.*t139*t3735*t426 - 1.*t10045*t302*t6985 - 1.*t10049*t302*t6985 + t8598 + t9539 - 1.*t3757*t426*t98) + t275*(t10045*t426*t6985 + t10049*t426*t6985 + t139*t3735*t894 + t9477 + t9479 + t3757*t894*t98))*var2[1] + t10037*t426*var2[2];
  p_output1[43]=t10043*t894*var2[0] + (t10060*t275 + t10112*t894 + t302*(-1.*t139*t275*t3735 - 1.*t10045*t302*t7596 - 1.*t10049*t302*t7596 + t9648 + t9649 - 1.*t275*t3757*t98) + t275*(t139*t302*t3735 + t10045*t426*t7596 + t10049*t426*t7596 + t8488 + t9642 + t302*t3757*t98))*var2[1] + t10037*t275*var2[2];
  p_output1[44]=t10043*t275;
  p_output1[45]=t10112*t275 + t10060*t302;
  p_output1[46]=t10037*t302;
  p_output1[47]=t10311 + (t10314*t302 + t10518*t426 + t275*(t426*t6985 + t3707*t894 + t9477 + t9479) + t302*(-1.*t3707*t426 - 1.*t302*t6985 + t8598 + t9539))*var2[1];
  p_output1[48]=t10311 + (t10518*t275 + t10314*t894 + t275*(t302*t3707 + t426*t7596 + t8488 + t9642) + t302*(-1.*t275*t3707 - 1.*t302*t7596 + t9648 + t9649))*var2[1];
  p_output1[49]=0.15121*t275 + 0.15121*t426;
  p_output1[50]=-0.15121 + t10314*t275 + t10518*t302;
  p_output1[51]=(t10617 + t10618 - 0.305*Power(t191,2))*var2[0] + (-0.28121*t247 + 0.305*t191*t247 - 1.*t247*t3592)*var2[2];
  p_output1[52]=0.28121*t247 - 0.305*t191*t247 + t247*t3592;
  p_output1[53]=t10617 + t10618 + 0.305*Power(t247,2);
  p_output1[54]=-0.305;
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
