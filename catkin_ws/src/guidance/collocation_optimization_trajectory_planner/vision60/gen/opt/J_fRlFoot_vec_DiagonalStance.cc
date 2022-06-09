/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:20 GMT+02:00
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
  double t2407;
  double t2369;
  double t2657;
  double t3497;
  double t3469;
  double t3473;
  double t3513;
  double t2372;
  double t3477;
  double t3520;
  double t3527;
  double t2899;
  double t3553;
  double t3557;
  double t3627;
  double t3539;
  double t3941;
  double t3969;
  double t3970;
  double t3996;
  double t4014;
  double t4015;
  double t3654;
  double t3663;
  double t3711;
  double t4563;
  double t4621;
  double t4633;
  double t4809;
  double t4824;
  double t4918;
  double t4730;
  double t4748;
  double t4767;
  double t2386;
  double t2924;
  double t3391;
  double t5246;
  double t5290;
  double t3530;
  double t3791;
  double t3831;
  double t3921;
  double t4042;
  double t4093;
  double t4246;
  double t4250;
  double t4252;
  double t4127;
  double t4149;
  double t4216;
  double t4638;
  double t4640;
  double t4660;
  double t5416;
  double t5538;
  double t5778;
  double t5344;
  double t5375;
  double t5376;
  double t5109;
  double t5115;
  double t5134;
  double t6825;
  double t6829;
  double t6846;
  double t6758;
  double t6759;
  double t6772;
  double t6963;
  double t6964;
  double t6968;
  double t5846;
  double t5898;
  double t5910;
  double t5924;
  double t5926;
  double t5928;
  double t5958;
  double t5959;
  double t5965;
  double t6568;
  double t6569;
  double t6570;
  double t6614;
  double t6618;
  double t6622;
  double t6634;
  double t6635;
  double t6636;
  double t6667;
  double t6685;
  double t6687;
  double t6701;
  double t6705;
  double t6731;
  double t6859;
  double t6861;
  double t6867;
  double t6914;
  double t6924;
  double t6926;
  double t7395;
  double t7403;
  double t7412;
  double t7356;
  double t7382;
  double t7383;
  double t7514;
  double t7517;
  double t7518;
  double t7531;
  double t7533;
  double t7547;
  double t7550;
  double t7565;
  double t7567;
  double t7505;
  double t7530;
  double t7568;
  double t7570;
  double t7502;
  double t7574;
  double t7577;
  double t7601;
  double t7605;
  double t7609;
  double t7611;
  double t7613;
  double t7615;
  double t7621;
  double t7626;
  double t7630;
  double t7632;
  double t7643;
  double t7646;
  double t7654;
  double t7657;
  double t7658;
  double t5187;
  double t5196;
  double t5234;
  double t7686;
  double t7701;
  double t7719;
  double t7672;
  double t7674;
  double t7678;
  double t7582;
  double t7659;
  double t7669;
  double t7889;
  double t7928;
  double t7934;
  double t9226;
  double t9231;
  double t9256;
  double t7944;
  double t7954;
  double t7978;
  double t7985;
  double t8055;
  double t8075;
  double t8106;
  double t8168;
  double t8507;
  double t8516;
  double t8594;
  double t8595;
  double t8613;
  double t8702;
  double t8791;
  double t8883;
  double t9111;
  double t9113;
  double t9120;
  double t9123;
  double t9203;
  double t9206;
  double t9210;
  double t9215;
  double t4365;
  double t4370;
  double t4390;
  double t9905;
  double t9908;
  double t9912;
  double t9923;
  double t9935;
  double t4287;
  double t4289;
  double t4330;
  double t9945;
  double t9959;
  double t9964;
  double t10009;
  double t10040;
  double t10055;
  double t4416;
  double t4427;
  double t4452;
  double t9898;
  double t10379;
  double t10419;
  double t10466;
  double t10490;
  double t10498;
  double t10500;
  double t10524;
  double t10526;
  double t10527;
  double t10446;
  double t10502;
  double t10510;
  double t10522;
  double t10530;
  double t10531;
  double t10536;
  double t10544;
  double t10546;
  double t4558;
  double t4665;
  double t4666;
  double t5105;
  double t5135;
  double t5179;
  double t10671;
  double t10672;
  double t10674;
  double t10669;
  double t10675;
  double t10678;
  double t10681;
  double t10682;
  double t10692;
  double t10693;
  double t10695;
  double t10680;
  double t10684;
  double t10686;
  double t10690;
  double t10697;
  double t10702;
  double t10704;
  double t10709;
  double t10710;
  double t9262;
  double t9315;
  double t9317;
  double t9362;
  double t9363;
  double t9421;
  double t9422;
  double t9534;
  double t9798;
  double t9803;
  double t10862;
  double t10864;
  double t10865;
  double t9922;
  double t9973;
  double t10121;
  double t10125;
  double t10881;
  double t10883;
  double t10885;
  double t10218;
  double t10221;
  double t10898;
  double t10900;
  double t10904;
  double t10246;
  double t10251;
  double t10912;
  double t10913;
  double t10916;
  double t10938;
  double t10939;
  double t10941;
  double t10294;
  double t11001;
  double t10297;
  double t10306;
  double t10307;
  double t10962;
  double t10963;
  double t10964;
  double t10515;
  double t10555;
  double t11165;
  double t10574;
  double t10589;
  double t10593;
  double t10619;
  double t10638;
  double t10640;
  double t10689;
  double t10720;
  double t10730;
  double t10755;
  double t10766;
  double t10787;
  double t10818;
  double t10833;
  double t11103;
  double t11105;
  double t11117;
  double t11119;
  double t10997;
  double t11000;
  double t11009;
  double t11011;
  double t11043;
  double t11045;
  double t11064;
  double t11066;
  double t11370;
  double t11371;
  double t11215;
  double t11217;
  double t11398;
  double t11399;
  double t11167;
  double t11507;
  double t11470;
  double t11481;
  double t11485;
  double t11492;
  double t11493;
  double t11494;
  double t11191;
  double t11195;
  double t11183;
  double t11389;
  double t11391;
  double t11343;
  double t11237;
  double t11238;
  double t11425;
  double t11426;
  double t11266;
  double t11253;
  double t11255;
  double t11393;
  double t11429;
  double t11540;
  double t11541;
  double t11549;
  double t12009;
  double t12076;
  double t12104;
  double t12109;
  double t11649;
  double t11662;
  double t11680;
  double t12231;
  double t12235;
  t2407 = Cos(var1[9]);
  t2369 = Cos(var1[4]);
  t2657 = Sin(var1[4]);
  t3497 = Cos(var1[10]);
  t3469 = Cos(var1[11]);
  t3473 = Sin(var1[10]);
  t3513 = Sin(var1[11]);
  t2372 = Sin(var1[9]);
  t3477 = t3469*t3473;
  t3520 = -1.*t3497*t3513;
  t3527 = t3477 + t3520;
  t2899 = Sin(var1[5]);
  t3553 = t3497*t3469;
  t3557 = t3473*t3513;
  t3627 = t3553 + t3557;
  t3539 = Cos(var1[5]);
  t3941 = -1.*t3469*t3473;
  t3969 = t3497*t3513;
  t3970 = t3941 + t3969;
  t3996 = t3539*t3970;
  t4014 = t2372*t3627*t2899;
  t4015 = t3996 + t4014;
  t3654 = t3539*t3627;
  t3663 = t2372*t3527*t2899;
  t3711 = t3654 + t3663;
  t4563 = -1.*t3497*t3469;
  t4621 = -1.*t3473*t3513;
  t4633 = t4563 + t4621;
  t4809 = t2407*t3527*t2657;
  t4824 = t2369*t3711;
  t4918 = t4809 + t4824;
  t4730 = t2407*t3627*t2657;
  t4748 = t2369*t4015;
  t4767 = t4730 + t4748;
  t2386 = t2369*t2372;
  t2924 = t2407*t2657*t2899;
  t3391 = t2386 + t2924;
  t5246 = Sin(var1[3]);
  t5290 = Cos(var1[3]);
  t3530 = t2407*t2369*t3527;
  t3791 = -1.*t2657*t3711;
  t3831 = t3530 + t3791;
  t3921 = t2407*t2369*t3627;
  t4042 = -1.*t2657*t4015;
  t4093 = t3921 + t4042;
  t4246 = t3539*t2372*t3527;
  t4250 = -1.*t3627*t2899;
  t4252 = t4246 + t4250;
  t4127 = t3539*t2372*t3627;
  t4149 = -1.*t3970*t2899;
  t4216 = t4127 + t4149;
  t4638 = t3539*t4633;
  t4640 = t2372*t3970*t2899;
  t4660 = t4638 + t4640;
  t5416 = -1.*t3539*t2372*t3627;
  t5538 = t3970*t2899;
  t5778 = t5416 + t5538;
  t5344 = -1.*t3539*t2372*t3527;
  t5375 = t3627*t2899;
  t5376 = t5344 + t5375;
  t5109 = t3539*t3527;
  t5115 = t2372*t4633*t2899;
  t5134 = t5109 + t5115;
  t6825 = t5290*t5376;
  t6829 = -1.*t5246*t3831;
  t6846 = t6825 + t6829;
  t6758 = t5290*t5778;
  t6759 = -1.*t5246*t4093;
  t6772 = t6758 + t6759;
  t6963 = t2407*t5290*t3539;
  t6964 = -1.*t5246*t3391;
  t6968 = t6963 + t6964;
  t5846 = -1.*t2372*t2657;
  t5898 = t2407*t2369*t2899;
  t5910 = t5846 + t5898;
  t5924 = -1.*t2407*t3527*t2657;
  t5926 = -1.*t2369*t3711;
  t5928 = t5924 + t5926;
  t5958 = -1.*t2407*t3627*t2657;
  t5959 = -1.*t2369*t4015;
  t5965 = t5958 + t5959;
  t6568 = t2407*t2369;
  t6569 = -1.*t2372*t2657*t2899;
  t6570 = t6568 + t6569;
  t6614 = -1.*t2369*t2372*t3527;
  t6618 = -1.*t2407*t3527*t2657*t2899;
  t6622 = t6614 + t6618;
  t6634 = -1.*t2369*t2372*t3627;
  t6635 = -1.*t2407*t3627*t2657*t2899;
  t6636 = t6634 + t6635;
  t6667 = -1.*t3539*t2372*t3970;
  t6685 = t4633*t2899;
  t6687 = t6667 + t6685;
  t6701 = t2407*t2369*t3970;
  t6705 = -1.*t2657*t4660;
  t6731 = t6701 + t6705;
  t6859 = -1.*t3539*t2372*t4633;
  t6861 = t3527*t2899;
  t6867 = t6859 + t6861;
  t6914 = t2407*t2369*t4633;
  t6924 = -1.*t2657*t5134;
  t6926 = t6914 + t6924;
  t7395 = t5246*t5376;
  t7403 = t5290*t3831;
  t7412 = t7395 + t7403;
  t7356 = t5246*t5778;
  t7382 = t5290*t4093;
  t7383 = t7356 + t7382;
  t7514 = -0.0641*t3469;
  t7517 = -0.28*t3513;
  t7518 = t7514 + t7517;
  t7531 = -1.*t3469;
  t7533 = 1. + t7531;
  t7547 = -0.575*t7533;
  t7550 = -0.295*t3469;
  t7565 = -0.0641*t3513;
  t7567 = t7547 + t7550 + t7565;
  t7505 = 0.325*t3473;
  t7530 = t3497*t7518;
  t7568 = t3473*t7567;
  t7570 = t7505 + t7530 + t7568;
  t7502 = 0.068*t2372;
  t7574 = t2407*t7570;
  t7577 = t7502 + t7574;
  t7601 = -1.*t3497;
  t7605 = 1. + t7601;
  t7609 = -0.325*t7605;
  t7611 = -1.*t3473*t7518;
  t7613 = t3497*t7567;
  t7615 = t7609 + t7611 + t7613;
  t7621 = t3539*t7615;
  t7626 = -1.*t2407;
  t7630 = 1. + t7626;
  t7632 = 0.1575*t7630;
  t7643 = 0.2255*t2407;
  t7646 = -1.*t2372*t7570;
  t7654 = t7632 + t7643 + t7646;
  t7657 = -1.*t7654*t2899;
  t7658 = t7621 + t7657;
  t5187 = t2372*t2657;
  t5196 = -1.*t2407*t2369*t2899;
  t5234 = t5187 + t5196;
  t7686 = t2369*t7577;
  t7701 = -1.*t2657*t7658;
  t7719 = t7686 + t7701;
  t7672 = t7577*t2657;
  t7674 = t2369*t7658;
  t7678 = t7672 + t7674;
  t7582 = -1.*t7577*t2657;
  t7659 = -1.*t2369*t7658;
  t7669 = t7582 + t7659;
  t7889 = t3539*t7654;
  t7928 = t7615*t2899;
  t7934 = t7889 + t7928;
  t9226 = -1.*t3539*t7654;
  t9231 = -1.*t7615*t2899;
  t9256 = t9226 + t9231;
  t7944 = t2407*t3539*t7934;
  t7954 = t5234*t7678;
  t7978 = t3391*t7719;
  t7985 = t7944 + t7954 + t7978;
  t8055 = -1.*t7934*t5376;
  t8075 = -1.*t7678*t4918;
  t8106 = -1.*t7719*t3831;
  t8168 = t8055 + t8075 + t8106;
  t8507 = t7934*t5376;
  t8516 = t7678*t4918;
  t8594 = t7719*t3831;
  t8595 = t8507 + t8516 + t8594;
  t8613 = -1.*t7934*t5778;
  t8702 = -1.*t7678*t4767;
  t8791 = -1.*t7719*t4093;
  t8883 = t8613 + t8702 + t8791;
  t9111 = -1.*t2407*t3539*t7934;
  t9113 = -1.*t5234*t7678;
  t9120 = -1.*t3391*t7719;
  t9123 = t9111 + t9113 + t9120;
  t9203 = t7934*t5778;
  t9206 = t7678*t4767;
  t9210 = t7719*t4093;
  t9215 = t9203 + t9206 + t9210;
  t4365 = -1.*t2372*t3527*t2657;
  t4370 = t2407*t2369*t3527*t2899;
  t4390 = t4365 + t4370;
  t9905 = -0.068*t2372;
  t9908 = -1.*t2407*t7570;
  t9912 = t9905 + t9908;
  t9923 = 0.068*t2407;
  t9935 = t9923 + t7646;
  t4287 = t2407*t2657;
  t4289 = t2369*t2372*t2899;
  t4330 = t4287 + t4289;
  t9945 = t9935*t2657;
  t9959 = -1.*t2369*t9912*t2899;
  t9964 = t9945 + t9959;
  t10009 = t2369*t9935;
  t10040 = t9912*t2657*t2899;
  t10055 = t10009 + t10040;
  t4416 = -1.*t2372*t3627*t2657;
  t4427 = t2407*t2369*t3627*t2899;
  t4452 = t4416 + t4427;
  t9898 = Power(t3539,2);
  t10379 = 0.325*t3497;
  t10419 = t10379 + t7611 + t7613;
  t10466 = -0.325*t3473;
  t10490 = -1.*t3497*t7518;
  t10498 = -1.*t3473*t7567;
  t10500 = t10466 + t10490 + t10498;
  t10524 = t3539*t10500;
  t10526 = t2372*t10419*t2899;
  t10527 = t10524 + t10526;
  t10446 = -1.*t3539*t2372*t10419;
  t10502 = t10500*t2899;
  t10510 = t10446 + t10502;
  t10522 = t2407*t10419*t2657;
  t10530 = t2369*t10527;
  t10531 = t10522 + t10530;
  t10536 = t2407*t2369*t10419;
  t10544 = -1.*t2657*t10527;
  t10546 = t10536 + t10544;
  t4558 = t2407*t3970*t2657;
  t4665 = t2369*t4660;
  t4666 = t4558 + t4665;
  t5105 = t2407*t4633*t2657;
  t5135 = t2369*t5134;
  t5179 = t5105 + t5135;
  t10671 = -0.28*t3469;
  t10672 = 0.0641*t3513;
  t10674 = t10671 + t10672;
  t10669 = t3473*t7518;
  t10675 = t3497*t10674;
  t10678 = t10669 + t10675;
  t10681 = -1.*t3473*t10674;
  t10682 = t7530 + t10681;
  t10692 = t3539*t10682;
  t10693 = t2372*t10678*t2899;
  t10695 = t10692 + t10693;
  t10680 = -1.*t3539*t2372*t10678;
  t10684 = t10682*t2899;
  t10686 = t10680 + t10684;
  t10690 = t2407*t10678*t2657;
  t10697 = t2369*t10695;
  t10702 = t10690 + t10697;
  t10704 = t2407*t2369*t10678;
  t10709 = -1.*t2657*t10695;
  t10710 = t10704 + t10709;
  t9262 = -1.*t2407*t2899*t7934;
  t9315 = -1.*t7934*t3711;
  t9317 = -1.*t7658*t5376;
  t9362 = t7934*t3711;
  t9363 = t7658*t5376;
  t9421 = -1.*t7658*t5778;
  t9422 = -1.*t7934*t4015;
  t9534 = t2407*t2899*t7934;
  t9798 = t7658*t5778;
  t9803 = t7934*t4015;
  t10862 = t2372*t7577;
  t10864 = -1.*t2407*t2899*t7658;
  t10865 = t10862 + t10864 + t7944;
  t9922 = t2407*t9898*t9912;
  t9973 = -1.*t3539*t2372*t7934;
  t10121 = t2407*t3539*t3527*t7934;
  t10125 = -1.*t3539*t9912*t5376;
  t10881 = -1.*t2407*t7577*t3527;
  t10883 = -1.*t7658*t3711;
  t10885 = t10881 + t10883 + t8055;
  t10218 = -1.*t2407*t3539*t3527*t7934;
  t10221 = t3539*t9912*t5376;
  t10898 = t2407*t7577*t3527;
  t10900 = t7658*t3711;
  t10904 = t10898 + t10900 + t8507;
  t10246 = t2407*t3539*t3627*t7934;
  t10251 = -1.*t3539*t9912*t5778;
  t10912 = -1.*t2407*t7577*t3627;
  t10913 = -1.*t7658*t4015;
  t10916 = t10912 + t8613 + t10913;
  t10938 = -1.*t2372*t7577;
  t10939 = t2407*t2899*t7658;
  t10941 = t10938 + t10939 + t9111;
  t10294 = -1.*t2407*t9898*t9912;
  t11001 = Power(t2899,2);
  t10297 = t3539*t2372*t7934;
  t10306 = -1.*t2407*t3539*t3627*t7934;
  t10307 = t3539*t9912*t5778;
  t10962 = t2407*t7577*t3627;
  t10963 = t7658*t4015;
  t10964 = t10962 + t9203 + t10963;
  t10515 = t2407*t3539*t10510;
  t10555 = -1.*t10510*t5376;
  t11165 = Power(t2407,2);
  t10574 = t10510*t5376;
  t10589 = -1.*t10510*t5778;
  t10593 = -1.*t7934*t6687;
  t10619 = -1.*t2407*t3539*t10510;
  t10638 = t10510*t5778;
  t10640 = t7934*t6687;
  t10689 = t2407*t3539*t10686;
  t10720 = -1.*t7934*t6867;
  t10730 = -1.*t10686*t5376;
  t10755 = t7934*t6867;
  t10766 = t10686*t5376;
  t10787 = -1.*t10686*t5778;
  t10818 = -1.*t2407*t3539*t10686;
  t10833 = t10686*t5778;
  t11103 = -1.*t2407*t7577;
  t11105 = -1.*t2372*t9935;
  t11117 = -1.*t2372*t7577*t3627;
  t11119 = t2407*t9935*t3627;
  t10997 = t2407*t7577;
  t11000 = t2372*t9935;
  t11009 = t2372*t7577*t3527;
  t11011 = -1.*t2407*t9935*t3527;
  t11043 = -1.*t2372*t7577*t3527;
  t11045 = t2407*t9935*t3527;
  t11064 = t2372*t7577*t3627;
  t11066 = -1.*t2407*t9935*t3627;
  t11370 = -1.*t2407*t7654;
  t11371 = t10938 + t11370;
  t11215 = t2407*t7577*t3970;
  t11217 = t11165*t10419*t3627;
  t11398 = t2407*t7654;
  t11399 = t10862 + t11398;
  t11167 = -1.*t11165*t10419*t3527;
  t11507 = Power(t2372,2);
  t11470 = -1.*t7615*t3970;
  t11481 = t2372*t7654*t3627;
  t11485 = t11470 + t10912 + t11481;
  t11492 = -1.*t2372*t7654*t3527;
  t11493 = t7615*t3627;
  t11494 = t10898 + t11492 + t11493;
  t11191 = -1.*t2407*t7577*t3970;
  t11195 = -1.*t11165*t10419*t3627;
  t11183 = t11165*t10419*t3527;
  t11389 = t7615*t3970;
  t11391 = -1.*t2372*t7654*t3627;
  t11343 = t11165*t10678*t3627;
  t11237 = -1.*t11165*t10678*t3527;
  t11238 = -1.*t2407*t7577*t4633;
  t11425 = t2372*t7654*t3527;
  t11426 = -1.*t7615*t3627;
  t11266 = -1.*t11165*t10678*t3627;
  t11253 = t11165*t10678*t3527;
  t11255 = t2407*t7577*t4633;
  t11393 = t11389 + t10962 + t11391;
  t11429 = t10881 + t11425 + t11426;
  t11540 = -1.*t10500*t3970;
  t11541 = -1.*t7615*t4633;
  t11549 = t10500*t3627;
  t12009 = t7570*t3527;
  t12076 = t12009 + t11493;
  t12104 = -1.*t7570*t3627;
  t12109 = t11470 + t12104;
  t11649 = -1.*t10682*t3970;
  t11662 = t7615*t3527;
  t11680 = t10682*t3627;
  t12231 = -0.325*t3513;
  t12235 = -1.*t7567*t3513;
  p_output1[0]=t3831*var2[0] + t3391*var2[1] + t4093*var2[2];
  p_output1[1]=t2369*t4252*var2[0] - 1.*t2369*t2407*t3539*var2[1] + t2369*t4216*var2[2];
  p_output1[2]=t4390*var2[0] + t4330*var2[1] + t4452*var2[2];
  p_output1[3]=t4767*var2[0] + t4666*var2[2];
  p_output1[4]=t5179*var2[0] + t4918*var2[2];
  p_output1[5]=t4918;
  p_output1[6]=t5234;
  p_output1[7]=t4767;
  p_output1[8]=(-1.*t3831*t5290 - 1.*t5246*t5376)*var2[0] + (-1.*t2407*t3539*t5246 - 1.*t3391*t5290)*var2[1] + (-1.*t4093*t5290 - 1.*t5246*t5778)*var2[2];
  p_output1[9]=-1.*t5246*t5928*var2[0] - 1.*t5246*t5910*var2[1] - 1.*t5246*t5965*var2[2];
  p_output1[10]=(t2657*t4252*t5246 + t3711*t5290)*var2[0] + (-1.*t2407*t2657*t3539*t5246 - 1.*t2407*t2899*t5290)*var2[1] + (t2657*t4216*t5246 + t4015*t5290)*var2[2];
  p_output1[11]=(-1.*t2407*t3527*t3539*t5290 - 1.*t5246*t6622)*var2[0] + (-1.*t2372*t3539*t5290 - 1.*t5246*t6570)*var2[1] + (-1.*t2407*t3539*t3627*t5290 - 1.*t5246*t6636)*var2[2];
  p_output1[12]=t6772*var2[0] + (t5290*t6687 - 1.*t5246*t6731)*var2[2];
  p_output1[13]=(t5290*t6867 - 1.*t5246*t6926)*var2[0] + t6846*var2[2];
  p_output1[14]=t6846;
  p_output1[15]=t6968;
  p_output1[16]=t6772;
  p_output1[17]=t6846*var2[0] + t6968*var2[1] + t6772*var2[2];
  p_output1[18]=t5290*t5928*var2[0] + t5290*t5910*var2[1] + t5290*t5965*var2[2];
  p_output1[19]=(t3711*t5246 - 1.*t2657*t4252*t5290)*var2[0] + (-1.*t2407*t2899*t5246 + t2407*t2657*t3539*t5290)*var2[1] + (t4015*t5246 - 1.*t2657*t4216*t5290)*var2[2];
  p_output1[20]=(-1.*t2407*t3527*t3539*t5246 + t5290*t6622)*var2[0] + (-1.*t2372*t3539*t5246 + t5290*t6570)*var2[1] + (-1.*t2407*t3539*t3627*t5246 + t5290*t6636)*var2[2];
  p_output1[21]=t7383*var2[0] + (t5246*t6687 + t5290*t6731)*var2[2];
  p_output1[22]=(t5246*t6867 + t5290*t6926)*var2[0] + t7412*var2[2];
  p_output1[23]=t7412;
  p_output1[24]=t2407*t3539*t5246 + t3391*t5290;
  p_output1[25]=t7383;
  p_output1[26]=(t4767*(-1.*t3391*t7669 - 1.*t3391*t7678 - 1.*t5234*t7719 - 1.*t5910*t7719) + t5234*(t4093*t7669 + t4093*t7678 + t4767*t7719 + t5965*t7719) + t4093*t9123 + t3391*t9215)*var2[0] + (t4767*(t3831*t7669 + t3831*t7678 + t4918*t7719 + t5928*t7719) + t4918*(-1.*t4093*t7669 - 1.*t4093*t7678 - 1.*t4767*t7719 - 1.*t5965*t7719) + t4093*t8595 + t3831*t8883)*var2[1] + (t4918*(t3391*t7669 + t3391*t7678 + t5234*t7719 + t5910*t7719) + t5234*(-1.*t3831*t7669 - 1.*t3831*t7678 - 1.*t4918*t7719 - 1.*t5928*t7719) + t3831*t7985 + t3391*t8168)*var2[2];
  p_output1[27]=(t2369*t4216*t9123 - 1.*t2369*t2407*t3539*t9215 + t4767*(-1.*t2407*t3539*t7658 + t2369*t2407*t3539*t7678 - 1.*t2407*t2657*t3539*t7719 + t2657*t3391*t9256 - 1.*t2369*t5234*t9256 + t9534) + t5234*(t2369*t4216*t7678 - 1.*t2657*t4216*t7719 - 1.*t2657*t4093*t9256 + t2369*t4767*t9256 + t9798 + t9803))*var2[0] + (t2369*t4216*t8595 + t2369*t4252*t8883 + t4767*(t2369*t4252*t7678 - 1.*t2657*t4252*t7719 - 1.*t2657*t3831*t9256 + t2369*t4918*t9256 + t9362 + t9363) + t4918*(-1.*t2369*t4216*t7678 + t2657*t4216*t7719 + t2657*t4093*t9256 - 1.*t2369*t4767*t9256 + t9421 + t9422))*var2[1] + (t2369*t4252*t7985 - 1.*t2369*t2407*t3539*t8168 + t4918*(t2407*t3539*t7658 - 1.*t2369*t2407*t3539*t7678 + t2407*t2657*t3539*t7719 - 1.*t2657*t3391*t9256 + t2369*t5234*t9256 + t9262) + t5234*(-1.*t2369*t4252*t7678 + t2657*t4252*t7719 + t2657*t3831*t9256 - 1.*t2369*t4918*t9256 + t9315 + t9317))*var2[2];
  p_output1[28]=(t4452*t9123 + t4330*t9215 + t5234*(t10306 + t10307 + t10055*t4093 + t4452*t7678 + t6636*t7719 + t4767*t9964) + t4767*(t10294 + t10297 - 1.*t10055*t3391 - 1.*t4330*t7678 - 1.*t6570*t7719 - 1.*t5234*t9964))*var2[0] + (t4452*t8595 + t4390*t8883 + t4918*(t10246 + t10251 - 1.*t10055*t4093 - 1.*t4452*t7678 - 1.*t6636*t7719 - 1.*t4767*t9964) + t4767*(t10218 + t10221 + t10055*t3831 + t4390*t7678 + t6622*t7719 + t4918*t9964))*var2[1] + (t4390*t7985 + t4330*t8168 + t5234*(t10121 + t10125 - 1.*t10055*t3831 - 1.*t4390*t7678 - 1.*t6622*t7719 - 1.*t4918*t9964) + t4918*(t10055*t3391 + t4330*t7678 + t6570*t7719 + t9922 + t5234*t9964 + t9973))*var2[2];
  p_output1[29]=(t4767*(t10619 - 1.*t10546*t3391 - 1.*t10531*t5234) + t5234*(t10638 + t10640 + t10546*t4093 + t10531*t4767 + t4666*t7678 + t6731*t7719) + t4666*t9123)*var2[0] + (t4918*(t10589 + t10593 - 1.*t10546*t4093 - 1.*t10531*t4767 - 1.*t4666*t7678 - 1.*t6731*t7719) + t4666*t8595 + t4767*t8883 + t4767*(t10574 + t10546*t3831 + t10531*t4918 + t9203 + t9206 + t9210))*var2[1] + (t4918*(t10515 + t10546*t3391 + t10531*t5234) + t4767*t7985 + t5234*(t10555 - 1.*t10546*t3831 - 1.*t10531*t4918 + t8613 + t8702 + t8791))*var2[2];
  p_output1[30]=(t4767*(t10818 - 1.*t10710*t3391 - 1.*t10702*t5234) + t5234*(t10833 + t10710*t4093 + t10702*t4767 + t8507 + t8516 + t8594) + t4918*t9123)*var2[0] + (t4767*(t10755 + t10766 + t10710*t3831 + t10702*t4918 + t5179*t7678 + t6926*t7719) + t4918*(t10787 - 1.*t10710*t4093 - 1.*t10702*t4767 + t8055 + t8075 + t8106) + t4918*t8595 + t5179*t8883)*var2[1] + (t4918*(t10689 + t10710*t3391 + t10702*t5234) + t5234*(t10720 + t10730 - 1.*t10710*t3831 - 1.*t10702*t4918 - 1.*t5179*t7678 - 1.*t6926*t7719) + t5179*t7985)*var2[2];
  p_output1[31]=t4767*t9123 + t5234*t9215;
  p_output1[32]=t4767*t8595 + t4918*t8883;
  p_output1[33]=t4918*t7985 + t5234*t8168;
  p_output1[34]=(-1.*t10964*t2407*t2899 + t10941*t4015 + t5778*(t2407*t2899*t9256 + t9534) + t2407*t3539*(t4216*t7658 + t4015*t9256 + t9798 + t9803))*var2[0] + (t10916*t3711 + t10904*t4015 + t5778*(t4252*t7658 + t3711*t9256 + t9362 + t9363) + t5376*(-1.*t4216*t7658 - 1.*t4015*t9256 + t9421 + t9422))*var2[1] + (-1.*t10885*t2407*t2899 + t10865*t3711 + t5376*(-1.*t2407*t2899*t9256 + t9262) + t2407*t3539*(-1.*t4252*t7658 - 1.*t3711*t9256 + t9315 + t9317))*var2[2];
  p_output1[35]=(-1.*t10964*t2372*t3539 - 1.*t10941*t2407*t3539*t3627 + t5778*(t10294 + t10297 + t11103 + t11105 - 1.*t2372*t2899*t7658 - 1.*t11001*t2407*t9912) + t2407*t3539*(t10306 + t10307 + t11117 + t11119 + t2407*t2899*t3627*t7658 - 1.*t2899*t4015*t9912))*var2[0] + (-1.*t10916*t2407*t3527*t3539 - 1.*t10904*t2407*t3539*t3627 + t5778*(t10218 + t10221 + t11043 + t11045 + t2407*t2899*t3527*t7658 - 1.*t2899*t3711*t9912) + t5376*(t10246 + t10251 + t11064 + t11066 - 1.*t2407*t2899*t3627*t7658 + t2899*t4015*t9912))*var2[1] + (-1.*t10885*t2372*t3539 - 1.*t10865*t2407*t3527*t3539 + t2407*t3539*(t10121 + t10125 + t11009 + t11011 - 1.*t2407*t2899*t3527*t7658 + t2899*t3711*t9912) + t5376*(t10997 + t11000 + t2372*t2899*t7658 + t11001*t2407*t9912 + t9922 + t9973))*var2[2];
  p_output1[36]=((t10619 - 1.*t10419*t2372*t2407 + t10527*t2407*t2899)*t5778 + t10941*t6687 + t2407*t3539*(t10638 + t10640 + t11215 + t11217 + t10527*t4015 + t4660*t7658))*var2[0] + (t10916*t5778 + t10904*t6687 + t5376*(t10589 + t10593 + t11191 + t11195 - 1.*t10527*t4015 - 1.*t4660*t7658) + t5778*(t10574 + t10962 + t10963 + t11183 + t10527*t3711 + t9203))*var2[1] + ((t10515 + t10419*t2372*t2407 - 1.*t10527*t2407*t2899)*t5376 + t10865*t5778 + t2407*t3539*(t10555 + t10912 + t10913 + t11167 - 1.*t10527*t3711 + t8613))*var2[2];
  p_output1[37]=(t10941*t5376 + (t10818 - 1.*t10678*t2372*t2407 + t10695*t2407*t2899)*t5778 + t2407*t3539*(t10833 + t10898 + t10900 + t11343 + t10695*t4015 + t8507))*var2[0] + (t10904*t5376 + t10916*t6867 + t5778*(t10755 + t10766 + t11253 + t11255 + t10695*t3711 + t5134*t7658) + t5376*(t10787 + t10881 + t10883 + t11266 - 1.*t10695*t4015 + t8055))*var2[1] + ((t10689 + t10678*t2372*t2407 - 1.*t10695*t2407*t2899)*t5376 + t10865*t6867 + t2407*t3539*(t10720 + t10730 + t11237 + t11238 - 1.*t10695*t3711 - 1.*t5134*t7658))*var2[2];
  p_output1[38]=t10964*t2407*t3539 + t10941*t5778;
  p_output1[39]=t10916*t5376 + t10904*t5778;
  p_output1[40]=t10885*t2407*t3539 + t10865*t5376;
  p_output1[41]=(t11393*t2407 - 1.*t11371*t2372*t3627 + t2407*t3627*(t11103 + t11105 + t2372*t7654 - 1.*t2407*t9912) + t2372*(t11117 + t11119 - 1.*t2407*t3627*t7654 - 1.*t2372*t3627*t9912))*var2[0] + (-1.*t11485*t2372*t3527 - 1.*t11494*t2372*t3627 + t2407*t3627*(t11043 + t11045 - 1.*t2407*t3527*t7654 - 1.*t2372*t3527*t9912) + t2407*t3527*(t11064 + t11066 + t2407*t3627*t7654 + t2372*t3627*t9912))*var2[1] + (t11429*t2407 - 1.*t11399*t2372*t3527 + t2407*t3527*(t10997 + t11000 - 1.*t2372*t7654 + t2407*t9912) + t2372*(t11009 + t11011 + t2407*t3527*t7654 + t2372*t3527*t9912))*var2[2];
  p_output1[42]=(t11371*t2407*t3970 + t2372*(t11215 + t11217 + t10419*t11507*t3627 + t10500*t3970 + t4633*t7615 - 1.*t2372*t3970*t7654))*var2[0] + (t11485*t2407*t3627 + t2407*(t10962 + t11183 + t11389 + t11391 + t11549 + t10419*t11507*t3527)*t3627 + t11494*t2407*t3970 + t2407*t3527*(t11191 + t11195 + t11540 + t11541 - 1.*t10419*t11507*t3627 + t2372*t3970*t7654))*var2[1] + (t11399*t2407*t3627 + t2372*(t10912 + t11167 + t11470 + t11481 - 1.*t10419*t11507*t3527 - 1.*t10500*t3627))*var2[2];
  p_output1[43]=(t11371*t2407*t3527 + t2372*(t10898 + t11343 + t11492 + t11493 + t10678*t11507*t3627 + t10682*t3970))*var2[0] + (t11494*t2407*t3527 + t2407*t3527*(t10881 + t11266 + t11425 + t11426 + t11649 - 1.*t10678*t11507*t3627) + t11485*t2407*t4633 + t2407*t3627*(t11253 + t11255 + t11662 + t11680 + t10678*t11507*t3527 - 1.*t2372*t4633*t7654))*var2[1] + (t11399*t2407*t4633 + t2372*(t11237 + t11238 - 1.*t10678*t11507*t3527 - 1.*t10682*t3627 - 1.*t3527*t7615 + t2372*t4633*t7654))*var2[2];
  p_output1[44]=t11393*t2372 + t11371*t2407*t3627;
  p_output1[45]=t11485*t2407*t3527 + t11494*t2407*t3627;
  p_output1[46]=t11429*t2372 + t11399*t2407*t3527;
  p_output1[47]=(-0.1575*t3627 - 0.2255*t4633)*var2[0] + (t12109*t3970 + t12076*t4633 + t3970*(t11389 + t11549 + t10419*t3527 + t3627*t7570) + t3627*(t11540 + t11541 - 1.*t10419*t3627 - 1.*t3970*t7570))*var2[1] + 0.068*t3970*var2[2];
  p_output1[48]=(-0.2255*t3627 - 0.1575*t4633)*var2[0] + (t12109*t3527 + t12076*t3627 + t3627*(t11426 + t11649 - 1.*t10678*t3627 - 1.*t3527*t7570) + t3970*(t11662 + t11680 + t10678*t3527 + t4633*t7570))*var2[1] + 0.068*t3527*var2[2];
  p_output1[49]=-0.1575*t3527 - 0.2255*t3970;
  p_output1[50]=t12109*t3627 + t12076*t3970;
  p_output1[51]=0.068*t3627;
  p_output1[52]=(-0.325*t3469 - 1.*t10674*t3469 - 1.*t3469*t7567)*var2[0] + (t12231 + t12235 - 1.*t10674*t3513)*var2[2];
  p_output1[53]=t12231 + t12235 - 1.*t3469*t7518;
  p_output1[54]=0.325*t3469 - 1.*t3513*t7518 + t3469*t7567;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
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
