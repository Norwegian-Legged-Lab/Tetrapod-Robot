/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:14 GMT+02:00
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
  double t978;
  double t979;
  double t2418;
  double t2573;
  double t4678;
  double t4878;
  double t4933;
  double t6856;
  double t180;
  double t317;
  double t7113;
  double t7383;
  double t5934;
  double t7119;
  double t7282;
  double t32;
  double t7414;
  double t7419;
  double t7436;
  double t7442;
  double t7508;
  double t7509;
  double t7515;
  double t7538;
  double t7591;
  double t7660;
  double t7664;
  double t8901;
  double t8909;
  double t8952;
  double t8959;
  double t8961;
  double t9045;
  double t9425;
  double t9454;
  double t9483;
  double t9547;
  double t9548;
  double t9550;
  double t9582;
  double t9583;
  double t9586;
  double t9587;
  double t9627;
  double t9629;
  double t10169;
  double t10187;
  double t10233;
  double t10571;
  double t10573;
  double t10600;
  double t10609;
  double t10639;
  double t10677;
  double t10726;
  double t10777;
  double t10778;
  double t10823;
  double t10889;
  double t10891;
  double t10898;
  double t10565;
  double t10641;
  double t10655;
  double t10656;
  double t10774;
  double t10910;
  double t10912;
  double t10914;
  double t10919;
  double t10922;
  double t10923;
  double t10928;
  double t10936;
  double t10937;
  double t10938;
  double t10972;
  double t11016;
  double t11017;
  double t10667;
  double t10966;
  double t10968;
  double t11057;
  double t11063;
  double t11069;
  double t10473;
  double t10498;
  double t10540;
  double t11024;
  double t11025;
  double t11040;
  double t11134;
  double t11142;
  double t11144;
  double t11275;
  double t11322;
  double t11323;
  double t12368;
  double t12385;
  double t12421;
  double t11041;
  double t12645;
  double t12648;
  double t12649;
  double t11167;
  double t12730;
  double t12731;
  double t12745;
  double t11048;
  double t11082;
  double t11088;
  double t12684;
  double t12711;
  double t12685;
  double t12688;
  double t12702;
  double t12729;
  double t12776;
  double t11169;
  double t11200;
  double t11201;
  double t11440;
  double t11521;
  double t13254;
  double t13259;
  double t13387;
  double t13412;
  double t11444;
  double t11457;
  double t11461;
  double t11541;
  double t11587;
  double t11600;
  double t11838;
  double t12131;
  double t11845;
  double t11878;
  double t11880;
  double t12970;
  double t12987;
  double t14240;
  double t14297;
  double t14369;
  double t14384;
  double t12158;
  double t12266;
  double t12312;
  double t12423;
  double t12434;
  double t12496;
  double t12505;
  double t12506;
  double t12508;
  double t12509;
  double t12515;
  double t12561;
  double t12576;
  double t12594;
  double t12617;
  double t15043;
  double t15044;
  double t15045;
  double t14973;
  double t12710;
  double t15082;
  double t15084;
  double t15090;
  double t15097;
  double t15098;
  double t15110;
  double t12747;
  double t12831;
  double t12846;
  double t12847;
  double t12851;
  double t12969;
  double t15121;
  double t13043;
  double t13071;
  double t15141;
  double t13083;
  double t13085;
  double t13103;
  double t13143;
  double t13178;
  double t13197;
  double t13198;
  double t13203;
  double t13220;
  double t13224;
  double t13241;
  double t13246;
  double t13256;
  double t13280;
  double t13282;
  double t13323;
  double t13357;
  double t13394;
  double t13497;
  double t13516;
  double t13580;
  double t13642;
  double t15425;
  double t13754;
  double t13755;
  double t15462;
  double t13778;
  double t13782;
  double t13787;
  double t13796;
  double t13896;
  double t13902;
  double t13912;
  double t13944;
  double t13966;
  double t14012;
  double t14067;
  double t14077;
  double t14097;
  double t14122;
  double t14145;
  double t14152;
  double t14296;
  double t14372;
  double t14400;
  double t14404;
  double t14410;
  double t14412;
  double t14415;
  double t15762;
  double t14458;
  double t14603;
  double t15782;
  double t14759;
  double t14772;
  double t14840;
  double t16053;
  double t16056;
  double t16063;
  double t16264;
  double t16300;
  double t16322;
  double t16403;
  double t16423;
  double t16426;
  double t16440;
  double t16466;
  double t16517;
  double t16637;
  double t16717;
  double t16724;
  double t16776;
  double t16779;
  double t16829;
  double t16835;
  double t16881;
  double t16919;
  double t16945;
  double t16870;
  double t17202;
  double t17225;
  double t17295;
  double t17660;
  double t17703;
  double t17749;
  double t17835;
  double t17877;
  double t17886;
  double t17993;
  double t17997;
  double t18031;
  double t18038;
  double t18012;
  double t18338;
  double t18372;
  double t16224;
  double t16330;
  double t16372;
  double t18477;
  double t8793;
  double t8803;
  double t8829;
  double t18946;
  double t18999;
  double t19021;
  double t16073;
  double t16083;
  double t16109;
  double t16133;
  double t16134;
  double t16138;
  double t16158;
  double t10008;
  double t10069;
  double t10142;
  double t19501;
  double t19518;
  double t19521;
  double t19523;
  double t19524;
  double t19527;
  double t19528;
  double t19533;
  double t19539;
  double t19541;
  double t19543;
  double t19525;
  double t19559;
  double t19564;
  double t19568;
  double t19579;
  double t19581;
  double t19588;
  double t19571;
  double t19574;
  double t19606;
  double t19609;
  double t19613;
  double t19619;
  double t19620;
  double t19630;
  double t19643;
  double t19647;
  double t19649;
  double t17989;
  double t17990;
  double t18002;
  double t18003;
  double t18050;
  double t18051;
  double t18064;
  double t19692;
  double t18202;
  double t18276;
  double t18320;
  double t19773;
  double t19841;
  double t20124;
  double t20131;
  double t20134;
  double t19661;
  double t19663;
  double t19664;
  double t18876;
  double t18879;
  double t18885;
  double t20215;
  double t20224;
  t978 = Cos(var1[10]);
  t979 = Cos(var1[11]);
  t2418 = -1.*t978*t979;
  t2573 = Sin(var1[10]);
  t4678 = Sin(var1[11]);
  t4878 = -1.*t2573*t4678;
  t4933 = t2418 + t4878;
  t6856 = Cos(var1[9]);
  t180 = Cos(var1[5]);
  t317 = Sin(var1[9]);
  t7113 = Sin(var1[5]);
  t7383 = Cos(var1[3]);
  t5934 = t180*t317*t4933;
  t7119 = t6856*t4933*t7113;
  t7282 = t5934 + t7119;
  t32 = Sin(var1[3]);
  t7414 = Cos(var1[4]);
  t7419 = -1.*t979*t2573;
  t7436 = t978*t4678;
  t7442 = t7419 + t7436;
  t7508 = t7414*t7442;
  t7509 = Sin(var1[4]);
  t7515 = t6856*t180*t4933;
  t7538 = -1.*t317*t4933*t7113;
  t7591 = t7515 + t7538;
  t7660 = -1.*t7509*t7591;
  t7664 = t7508 + t7660;
  t8901 = t180*t317;
  t8909 = t6856*t7113;
  t8952 = t8901 + t8909;
  t8959 = -1.*t6856*t180;
  t8961 = t317*t7113;
  t9045 = t8959 + t8961;
  t9425 = t180*t317*t7442;
  t9454 = t6856*t7442*t7113;
  t9483 = t9425 + t9454;
  t9547 = t978*t979;
  t9548 = t2573*t4678;
  t9550 = t9547 + t9548;
  t9582 = t7414*t9550;
  t9583 = t6856*t180*t7442;
  t9586 = -1.*t317*t7442*t7113;
  t9587 = t9583 + t9586;
  t9627 = -1.*t7509*t9587;
  t9629 = t9582 + t9627;
  t10169 = -1.*t7442*t7509;
  t10187 = -1.*t7414*t7591;
  t10233 = t10169 + t10187;
  t10571 = -1.*t979;
  t10573 = 1. + t10571;
  t10600 = -0.50321*t10573;
  t10609 = -0.19821*t979;
  t10639 = t10600 + t10609;
  t10677 = -1.*t6856;
  t10726 = 1. + t10677;
  t10777 = -1.*t978;
  t10778 = 1. + t10777;
  t10823 = -0.28121*t10778;
  t10889 = t978*t10639;
  t10891 = 0.305*t2573*t4678;
  t10898 = t10823 + t10889 + t10891;
  t10565 = 0.28121*t2573;
  t10641 = t10639*t2573;
  t10655 = -0.305*t978*t4678;
  t10656 = t10565 + t10641 + t10655;
  t10774 = -0.15121*t10726;
  t10910 = t6856*t10898;
  t10912 = t10774 + t10910;
  t10914 = t180*t10912;
  t10919 = 0.15121*t10726;
  t10922 = 0.15121*t6856;
  t10923 = 0.15121*t317;
  t10928 = t317*t10898;
  t10936 = t10919 + t10922 + t10923 + t10928;
  t10937 = -1.*t10936*t7113;
  t10938 = t10914 + t10937;
  t10972 = t10656*t7509;
  t11016 = t7414*t10938;
  t11017 = t10972 + t11016;
  t10667 = -1.*t10656*t7509;
  t10966 = -1.*t7414*t10938;
  t10968 = t10667 + t10966;
  t11057 = t7414*t10656;
  t11063 = -1.*t7509*t10938;
  t11069 = t11057 + t11063;
  t10473 = t9550*t7509;
  t10498 = t7414*t9587;
  t10540 = t10473 + t10498;
  t11024 = t180*t10936;
  t11025 = t10912*t7113;
  t11040 = t11024 + t11025;
  t11134 = -1.*t9550*t7509;
  t11142 = -1.*t7414*t9587;
  t11144 = t11134 + t11142;
  t11275 = t7442*t7509;
  t11322 = t7414*t7591;
  t11323 = t11275 + t11322;
  t12368 = -1.*t180*t317*t4933;
  t12385 = -1.*t6856*t4933*t7113;
  t12421 = t12368 + t12385;
  t11041 = -1.*t9045*t11040;
  t12645 = -1.*t180*t10936;
  t12648 = -1.*t10912*t7113;
  t12649 = t12645 + t12648;
  t11167 = t9483*t11040;
  t12730 = -1.*t180*t317*t7442;
  t12731 = -1.*t6856*t7442*t7113;
  t12745 = t12730 + t12731;
  t11048 = -1.*t7414*t8952*t11017;
  t11082 = t7509*t8952*t11069;
  t11088 = t11041 + t11048 + t11082;
  t12684 = -1.*t8952*t11040;
  t12711 = -1.*t9045*t10938;
  t12685 = t6856*t180;
  t12688 = -1.*t317*t7113;
  t12702 = t12685 + t12688;
  t12729 = t9587*t11040;
  t12776 = t9483*t10938;
  t11169 = t10540*t11017;
  t11200 = t9629*t11069;
  t11201 = t11167 + t11169 + t11200;
  t11440 = -1.*t9483*t11040;
  t11521 = t7282*t11040;
  t13254 = -1.*t9587*t11040;
  t13259 = -1.*t9483*t10938;
  t13387 = t7591*t11040;
  t13412 = t7282*t10938;
  t11444 = -1.*t10540*t11017;
  t11457 = -1.*t9629*t11069;
  t11461 = t11440 + t11444 + t11457;
  t11541 = t11323*t11017;
  t11587 = t7664*t11069;
  t11600 = t11521 + t11541 + t11587;
  t11838 = t9045*t11040;
  t12131 = -1.*t7282*t11040;
  t11845 = t7414*t8952*t11017;
  t11878 = -1.*t7509*t8952*t11069;
  t11880 = t11838 + t11845 + t11878;
  t12970 = Power(t7414,2);
  t12987 = Power(t7509,2);
  t14240 = t8952*t11040;
  t14297 = t9045*t10938;
  t14369 = -1.*t7591*t11040;
  t14384 = -1.*t7282*t10938;
  t12158 = -1.*t11323*t11017;
  t12266 = -1.*t7664*t11069;
  t12312 = t12131 + t12158 + t12266;
  t12423 = var2[0]*t7414*t12421;
  t12434 = t32*t7509*t12421;
  t12496 = t7383*t7591;
  t12505 = t12434 + t12496;
  t12506 = var2[1]*t12505;
  t12508 = -1.*t7383*t7509*t12421;
  t12509 = t32*t7591;
  t12515 = t12508 + t12509;
  t12561 = var2[2]*t12515;
  t12576 = -1.*t8952*t10938;
  t12594 = t11041 + t12576;
  t12617 = t9587*t12594;
  t15043 = -0.15121*t317;
  t15044 = -1.*t317*t10898;
  t15045 = t15043 + t15044;
  t14973 = t10922 + t10910;
  t12710 = -1.*t12702*t10938;
  t15082 = t180*t15045;
  t15084 = -1.*t14973*t7113;
  t15090 = t15082 + t15084;
  t15097 = t180*t14973;
  t15098 = t15045*t7113;
  t15110 = t15097 + t15098;
  t12747 = t12745*t10938;
  t12831 = t10656*t9550;
  t12846 = t9587*t10938;
  t12847 = t12831 + t11167 + t12846;
  t12851 = t8952*t12847;
  t12969 = t7414*t12745*t11088;
  t15121 = -1.*t9045*t15110;
  t13043 = -1.*t7414*t12702*t11017;
  t13071 = t7509*t12702*t11069;
  t15141 = t9483*t15110;
  t13083 = t7414*t12745*t11017;
  t13085 = -1.*t7509*t12745*t11069;
  t13103 = t7414*t12702*t11201;
  t13143 = var2[0]*t7414*t12702;
  t13178 = t32*t8952;
  t13197 = -1.*t7383*t7509*t12702;
  t13198 = t13178 + t13197;
  t13203 = var2[2]*t13198;
  t13220 = t7383*t8952;
  t13224 = t32*t7509*t12702;
  t13241 = t13220 + t13224;
  t13246 = var2[1]*t13241;
  t13256 = -1.*t12745*t10938;
  t13280 = -1.*t10656*t9550;
  t13282 = -1.*t9587*t10938;
  t13323 = t13280 + t11440 + t13282;
  t13357 = t7591*t13323;
  t13394 = t12421*t10938;
  t13497 = t10656*t7442;
  t13516 = t7591*t10938;
  t13580 = t13497 + t11521 + t13516;
  t13642 = t9587*t13580;
  t15425 = -1.*t9483*t15110;
  t13754 = -1.*t7414*t12745*t11017;
  t13755 = t7509*t12745*t11069;
  t15462 = t7282*t15110;
  t13778 = t7414*t12421*t11017;
  t13782 = -1.*t7509*t12421*t11069;
  t13787 = t7414*t12421*t11461;
  t13796 = t7414*t12745*t11600;
  t13896 = var2[0]*t7414*t12745;
  t13902 = t32*t7509*t12745;
  t13912 = t7383*t9587;
  t13944 = t13902 + t13912;
  t13966 = var2[1]*t13944;
  t14012 = -1.*t7383*t7509*t12745;
  t14067 = t32*t9587;
  t14077 = t14012 + t14067;
  t14097 = var2[2]*t14077;
  t14122 = t8952*t10938;
  t14145 = t11838 + t14122;
  t14152 = t7591*t14145;
  t14296 = t12702*t10938;
  t14372 = -1.*t12421*t10938;
  t14400 = -1.*t10656*t7442;
  t14404 = -1.*t7591*t10938;
  t14410 = t14400 + t12131 + t14404;
  t14412 = t8952*t14410;
  t14415 = t7414*t12421*t11880;
  t15762 = t9045*t15110;
  t14458 = t7414*t12702*t11017;
  t14603 = -1.*t7509*t12702*t11069;
  t15782 = -1.*t7282*t15110;
  t14759 = -1.*t7414*t12421*t11017;
  t14772 = t7509*t12421*t11069;
  t14840 = t7414*t12702*t12312;
  t16053 = t979*t2573;
  t16056 = -1.*t978*t4678;
  t16063 = t16053 + t16056;
  t16264 = t6856*t180*t16063;
  t16300 = -1.*t317*t16063*t7113;
  t16322 = t16264 + t16300;
  t16403 = t180*t317*t16063;
  t16423 = t6856*t16063*t7113;
  t16426 = t16403 + t16423;
  t16440 = t7414*t4933;
  t16466 = -1.*t7509*t16322;
  t16517 = t16440 + t16466;
  t16637 = -0.28121*t2573;
  t16717 = -1.*t10639*t2573;
  t16724 = 0.305*t978*t4678;
  t16776 = t16637 + t16717 + t16724;
  t16779 = t180*t317*t16776;
  t16829 = t6856*t16776*t7113;
  t16835 = t16779 + t16829;
  t16881 = t6856*t180*t16776;
  t16919 = -1.*t317*t16776*t7113;
  t16945 = t16881 + t16919;
  t16870 = -1.*t9045*t16835;
  t17202 = 0.28121*t978;
  t17225 = t17202 + t10889 + t10891;
  t17295 = t16835*t9483;
  t17660 = t17225*t7509;
  t17703 = t7414*t16945;
  t17749 = t17660 + t17703;
  t17835 = t7414*t17225;
  t17877 = -1.*t7509*t16945;
  t17886 = t17835 + t17877;
  t17993 = t10656*t4933;
  t17997 = t7442*t17225;
  t18031 = Power(t6856,2);
  t18038 = Power(t317,2);
  t18012 = -1.*t17225*t9550;
  t18338 = t16835*t7282;
  t18372 = t16426*t11040;
  t16224 = t4933*t7509;
  t16330 = t7414*t16322;
  t16372 = t16224 + t16330;
  t18477 = -1.*t16835*t9483;
  t8793 = t7383*t7282;
  t8803 = -1.*t32*t7664;
  t8829 = t8793 + t8803;
  t18946 = t9045*t16835;
  t18999 = -1.*t16835*t7282;
  t19021 = -1.*t16426*t11040;
  t16073 = 0.15121*t16063;
  t16083 = 0.15121*t7442;
  t16109 = t16073 + t16083;
  t16133 = var2[9]*t16109;
  t16134 = -1.*t317*t10912;
  t16138 = t6856*t10936;
  t16158 = t16134 + t16138;
  t10008 = t7383*t9483;
  t10069 = -1.*t32*t9629;
  t10142 = t10008 + t10069;
  t19501 = 0.305*t979*t2573;
  t19518 = t19501 + t10655;
  t19521 = t180*t317*t19518;
  t19523 = t6856*t19518*t7113;
  t19524 = t19521 + t19523;
  t19527 = t6856*t180*t19518;
  t19528 = -1.*t317*t19518*t7113;
  t19533 = t19527 + t19528;
  t19539 = t180*t317*t9550;
  t19541 = t6856*t9550*t7113;
  t19543 = t19539 + t19541;
  t19525 = -1.*t9045*t19524;
  t19559 = -0.305*t978*t979;
  t19564 = -0.305*t2573*t4678;
  t19568 = t19559 + t19564;
  t19579 = t6856*t180*t9550;
  t19581 = -1.*t317*t9550*t7113;
  t19588 = t19579 + t19581;
  t19571 = t19524*t9483;
  t19574 = t19543*t11040;
  t19606 = t19568*t7509;
  t19609 = t7414*t19533;
  t19613 = t19606 + t19609;
  t19619 = t7414*t19568;
  t19620 = -1.*t7509*t19533;
  t19630 = t19619 + t19620;
  t19643 = t16063*t7509;
  t19647 = t7414*t19588;
  t19649 = t19643 + t19647;
  t17989 = t4933*t10898;
  t17990 = t13497 + t17989;
  t18002 = -1.*t7442*t10898;
  t18003 = t18002 + t13280;
  t18050 = -1.*t6856*t7442*t10912;
  t18051 = -1.*t317*t7442*t10936;
  t18064 = t13280 + t18050 + t18051;
  t19692 = t7442*t19568;
  t18202 = t6856*t4933*t10912;
  t18276 = t317*t4933*t10936;
  t18320 = t13497 + t18202 + t18276;
  t19773 = -1.*t16063*t10656;
  t19841 = -1.*t19568*t9550;
  t20124 = t19524*t7282;
  t20131 = -1.*t19524*t9483;
  t20134 = -1.*t19543*t11040;
  t19661 = t7414*t16063;
  t19663 = -1.*t7509*t19588;
  t19664 = t19661 + t19663;
  t18876 = t317*t10912;
  t18879 = -1.*t6856*t10936;
  t18885 = t18876 + t18879;
  t20215 = t9045*t19524;
  t20224 = -1.*t19524*t7282;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t32*t7282 - 1.*t7383*t7664)*var2[1] + t8829*var2[2];
  p_output1[10]=(t7383*t7509*t8952 - 1.*t32*t9045)*var2[1] + (t32*t7509*t8952 + t7383*t9045)*var2[2];
  p_output1[11]=(-1.*t32*t9483 - 1.*t7383*t9629)*var2[1] + t10142*var2[2];
  p_output1[12]=t7664*var2[0] - 1.*t10233*t32*var2[1] + t10233*t7383*var2[2] + (-1.*t11201*t7509*t8952 + t10540*(t10968*t7509*t8952 + t11017*t7509*t8952) + t11088*t9629 + t7414*t8952*(t10540*t11069 + t11069*t11144 + t10968*t9629 + t11017*t9629))*var2[3];
  p_output1[13]=-1.*t7509*t8952*var2[0] + t32*t7414*t8952*var2[1] - 1.*t7383*t7414*t8952*var2[2] + (t11461*t7664 + t10540*(t10233*t11069 + t11069*t11323 + t10968*t7664 + t11017*t7664) + t11600*t9629 + t11323*(-1.*t10540*t11069 - 1.*t11069*t11144 - 1.*t10968*t9629 - 1.*t11017*t9629))*var2[3];
  p_output1[14]=t9629*var2[0] - 1.*t11144*t32*var2[1] + t11144*t7383*var2[2] + (t11880*t7664 - 1.*t12312*t7509*t8952 + t7414*(-1.*t10233*t11069 - 1.*t11069*t11323 - 1.*t10968*t7664 - 1.*t11017*t7664)*t8952 + t11323*(-1.*t10968*t7509*t8952 - 1.*t11017*t7509*t8952))*var2[3];
  p_output1[15]=t12423 + t12506 + t12561 + (t12969 + t13103 + t10540*(t12684 + t12711 + t13043 + t13071 - 1.*t12649*t12970*t8952 - 1.*t12649*t12987*t8952) + t7414*t8952*(t12729 + t12776 + t13083 + t13085 + t10540*t12649*t7414 - 1.*t12649*t7509*t9629))*var2[3] + (t12617 + t12851 + (t12684 + t12710 + t12711 - 1.*t12649*t8952)*t9483 + t9045*(t12729 + t12747 + t12776 + t12649*t9587))*var2[4];
  p_output1[16]=t13143 + t13203 + t13246 + (t13787 + t13796 + t10540*(t13387 + t13412 + t13778 + t13782 + t11323*t12649*t7414 - 1.*t12649*t7509*t7664) + t11323*(t13254 + t13259 + t13754 + t13755 - 1.*t10540*t12649*t7414 + t12649*t7509*t9629))*var2[3] + (t13357 + t13642 + (t13387 + t13394 + t13412 + t12649*t7591)*t9483 + t7282*(t13254 + t13256 + t13259 - 1.*t12649*t9587))*var2[4];
  p_output1[17]=t13896 + t13966 + t14097 + (t14415 + t14840 + t7414*(t14369 + t14384 + t14759 + t14772 - 1.*t11323*t12649*t7414 + t12649*t7509*t7664)*t8952 + t11323*(t14240 + t14297 + t14458 + t14603 + t12649*t12970*t8952 + t12649*t12987*t8952))*var2[3] + (t14152 + t14412 + t7282*(t14240 + t14296 + t14297 + t12649*t8952) + (t14369 + t14372 + t14384 - 1.*t12649*t7591)*t9045)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t12423 + t12506 + t12561 + (t12969 + t13103 + t10540*(t12684 + t13043 + t13071 + t15121 - 1.*t12970*t15090*t8952 - 1.*t12987*t15090*t8952) + t7414*t8952*(t12729 + t13083 + t13085 + t15141 + t10540*t15090*t7414 - 1.*t15090*t7509*t9629))*var2[3] + (t12617 + t12851 + (t12684 + t12710 + t15121 - 1.*t15090*t8952)*t9483 + t9045*(t12729 + t12747 + t15141 + t15090*t9587))*var2[4] + (-1.*t10936*t317 - 1.*t15045*t317 - 1.*t10912*t6856 + t14973*t6856)*t9550*var2[5];
  p_output1[28]=t13143 + t13203 + t13246 + (t13787 + t13796 + t10540*(t13387 + t13778 + t13782 + t15462 + t11323*t15090*t7414 - 1.*t15090*t7509*t7664) + t11323*(t13254 + t13754 + t13755 + t15425 - 1.*t10540*t15090*t7414 + t15090*t7509*t9629))*var2[3] + (t13357 + t13642 + (t13387 + t13394 + t15462 + t15090*t7591)*t9483 + t7282*(t13254 + t13256 + t15425 - 1.*t15090*t9587))*var2[4] + (t7442*(t10912*t317*t7442 - 1.*t14973*t317*t7442 - 1.*t10936*t6856*t7442 - 1.*t15045*t6856*t7442) + (-1.*t10912*t317*t4933 + t14973*t317*t4933 + t10936*t4933*t6856 + t15045*t4933*t6856)*t9550)*var2[5];
  p_output1[29]=t13896 + t13966 + t14097 + (t14415 + t14840 + t7414*(t14369 + t14759 + t14772 + t15782 - 1.*t11323*t15090*t7414 + t15090*t7509*t7664)*t8952 + t11323*(t14240 + t14458 + t14603 + t15762 + t12970*t15090*t8952 + t12987*t15090*t8952))*var2[3] + (t14152 + t14412 + t7282*(t14240 + t14296 + t15762 + t15090*t8952) + (t14369 + t14372 + t15782 - 1.*t15090*t7591)*t9045)*var2[4] + (t10936*t317 + t15045*t317 + t10912*t6856 - 1.*t14973*t6856)*t7442*var2[5];
  p_output1[30]=t16133 + t16372*var2[0] + (-1.*t16517*t32 + t16426*t7383)*var2[1] + (t16426*t32 + t16517*t7383)*var2[2] + (t11088*t11323 + t10540*(t16870 - 1.*t17749*t7414*t8952 + t17886*t7509*t8952) + t7414*t8952*(t11521 + t11541 + t11587 + t17295 + t10540*t17749 + t17886*t9629))*var2[3] + (t12594*t7282 + (t16870 - 1.*t16945*t8952)*t9483 + t9045*(t11521 + t13497 + t13516 + t17295 + t17225*t9550 + t16945*t9587))*var2[4] + t16158*t7442*var2[5];
  p_output1[31]=(t11323*t11600 + t11461*t16372 + t10540*(t11017*t16372 + t11069*t16517 + t11323*t17749 + t18338 + t18372 + t17886*t7664) + t11323*(t12131 + t12158 + t12266 - 1.*t10540*t17749 + t18477 - 1.*t17886*t9629))*var2[3] + (t13323*t16426 + t13580*t7282 + (t10938*t16322 + t17993 + t17997 + t18338 + t18372 + t16945*t7591)*t9483 + t7282*(t12131 + t14400 + t14404 + t18012 + t18477 - 1.*t16945*t9587))*var2[4] + (t18064*t4933 + t18320*t7442 + t7442*(t14400 + t18012 - 1.*t10936*t317*t4933 - 1.*t10912*t4933*t6856 - 1.*t16776*t18031*t7442 - 1.*t16776*t18038*t7442) + (t17993 + t17997 + t10936*t16063*t317 + t16776*t18031*t4933 + t16776*t18038*t4933 + t10912*t16063*t6856)*t9550)*var2[5] + (t18003*t4933 + t17990*t7442 + t7442*(t14400 + t18012 - 1.*t10898*t4933 - 1.*t16776*t7442) + (t10898*t16063 + t17993 + t17997 + t16776*t4933)*t9550)*var2[9];
  p_output1[32]=t11323*var2[0] + t8829*var2[1] + (t32*t7282 + t7383*t7664)*var2[2] + (t11880*t16372 + t7414*(-1.*t11017*t16372 - 1.*t11069*t16517 - 1.*t11323*t17749 + t18999 + t19021 - 1.*t17886*t7664)*t8952 + t11323*(t18946 + t17749*t7414*t8952 - 1.*t17886*t7509*t8952))*var2[3] + (t14145*t16426 + t7282*(t18946 + t16945*t8952) + (-1.*t10938*t16322 + t18999 + t19021 - 1.*t10656*t4933 - 1.*t17225*t7442 - 1.*t16945*t7591)*t9045)*var2[4] + t18885*t4933*var2[5];
  p_output1[33]=t16133 + t10540*var2[0] + t10142*var2[1] + (t32*t9483 + t7383*t9629)*var2[2] + (t11088*t19649 + t10540*(t19525 - 1.*t19613*t7414*t8952 + t19630*t7509*t8952) + t7414*t8952*(t19571 + t19574 + t10540*t19613 + t11017*t19649 + t11069*t19664 + t19630*t9629))*var2[3] + (t12594*t19543 + (t19525 - 1.*t19533*t8952)*t9483 + t9045*(t10656*t16063 + t19571 + t19574 + t10938*t19588 + t19568*t9550 + t19533*t9587))*var2[4] + t16063*t16158*var2[5] + (0.28121*t979 + t10639*t979 - 0.305*Power(t979,2))*var2[10];
  p_output1[34]=(t10540*t11461 + t11600*t19649 + t10540*(t11167 + t11169 + t11200 + t11323*t19613 + t20124 + t19630*t7664) + t11323*(-1.*t10540*t19613 - 1.*t11017*t19649 - 1.*t11069*t19664 + t20131 + t20134 - 1.*t19630*t9629))*var2[3] + (t13580*t19543 + t13323*t9483 + (t11167 + t12831 + t12846 + t19692 + t20124 + t19533*t7591)*t9483 + t7282*(-1.*t10938*t19588 + t19773 + t19841 + t20131 + t20134 - 1.*t19533*t9587))*var2[4] + (t16063*t18320 + t18064*t9550 + (t12831 + t19692 + t18031*t19518*t4933 + t18038*t19518*t4933 + t10936*t317*t7442 + t10912*t6856*t7442)*t9550 + t7442*(t19773 + t19841 - 1.*t18031*t19518*t7442 - 1.*t18038*t19518*t7442 - 1.*t10936*t317*t9550 - 1.*t10912*t6856*t9550))*var2[5] + (t16063*t17990 + t18003*t9550 + (t12831 + t19692 + t19518*t4933 + t10898*t7442)*t9550 + t7442*(t19773 + t19841 - 1.*t19518*t7442 - 1.*t10898*t9550))*var2[9];
  p_output1[35]=t19649*var2[0] + (-1.*t19664*t32 + t19543*t7383)*var2[1] + (t19543*t32 + t19664*t7383)*var2[2] + (t10540*t11880 + t7414*(t11440 + t11444 + t11457 - 1.*t11323*t19613 + t20224 - 1.*t19630*t7664)*t8952 + t11323*(t20215 + t19613*t7414*t8952 - 1.*t19630*t7509*t8952))*var2[3] + (t7282*(t20215 + t19533*t8952) + (t11440 + t13280 + t13282 + t20224 - 1.*t19568*t7442 - 1.*t19533*t7591)*t9045 + t14145*t9483)*var2[4] + t18885*t9550*var2[5] + (-0.28121*t4678 - 1.*t10639*t4678 + 0.305*t4678*t979)*var2[10];
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
