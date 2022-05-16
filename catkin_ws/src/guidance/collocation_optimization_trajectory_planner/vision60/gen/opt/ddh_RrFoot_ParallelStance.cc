/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:29 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t6164;
  double t6237;
  double t6166;
  double t6450;
  double t6574;
  double t6600;
  double t6627;
  double t6672;
  double t6676;
  double t6699;
  double t6716;
  double t6724;
  double t6805;
  double t6809;
  double t6834;
  double t4460;
  double t6874;
  double t6907;
  double t6910;
  double t6921;
  double t6936;
  double t7057;
  double t7090;
  double t7113;
  double t7117;
  double t7136;
  double t7171;
  double t7165;
  double t7176;
  double t7179;
  double t7206;
  double t7208;
  double t4871;
  double t4977;
  double t7172;
  double t7212;
  double t7213;
  double t7288;
  double t7291;
  double t7315;
  double t7219;
  double t7236;
  double t7237;
  double t7239;
  double t7248;
  double t7249;
  double t7214;
  double t7250;
  double t7262;
  double t7358;
  double t7401;
  double t7412;
  double t7433;
  double t7523;
  double t7553;
  double t7572;
  double t7575;
  double t7589;
  double t7592;
  double t7599;
  double t5440;
  double t7626;
  double t7911;
  double t5872;
  double t8134;
  double t8151;
  double t8158;
  double t8311;
  double t8313;
  double t8315;
  double t8343;
  double t8353;
  double t8357;
  double t8179;
  double t8189;
  double t8198;
  double t8215;
  double t8216;
  double t8233;
  double t8618;
  double t8631;
  double t8637;
  double t8640;
  double t8647;
  double t8655;
  double t8670;
  double t8672;
  double t8686;
  double t8689;
  double t8696;
  double t8721;
  double t8770;
  double t8810;
  double t9002;
  double t9033;
  double t9074;
  double t8935;
  double t8936;
  double t8937;
  double t8951;
  double t8952;
  double t8953;
  double t8998;
  double t9080;
  double t9134;
  double t9138;
  double t9145;
  double t9146;
  double t9148;
  double t9159;
  double t9166;
  double t9167;
  double t9168;
  double t9169;
  double t7975;
  double t7977;
  double t8120;
  double t9446;
  double t9459;
  double t9462;
  double t9408;
  double t9432;
  double t9435;
  double t9506;
  double t9511;
  double t9516;
  double t9477;
  double t9489;
  double t9500;
  double t9501;
  double t9526;
  double t9537;
  double t9577;
  double t9578;
  double t9599;
  double t9602;
  double t9609;
  double t9618;
  double t9619;
  double t9638;
  double t9649;
  double t9680;
  double t9683;
  double t9687;
  double t9930;
  double t9931;
  double t9934;
  double t9947;
  double t9990;
  double t9992;
  double t10000;
  double t10012;
  double t10028;
  double t10322;
  double t10354;
  double t10355;
  double t10426;
  double t10428;
  double t10972;
  double t10976;
  double t10988;
  double t10376;
  double t10431;
  double t10481;
  double t10634;
  double t11024;
  double t11025;
  double t11042;
  double t11056;
  double t11060;
  double t11075;
  double t11077;
  double t11078;
  double t11095;
  double t11106;
  double t11108;
  double t11115;
  double t11118;
  double t11125;
  double t11472;
  double t11492;
  double t11496;
  double t11590;
  double t11599;
  double t11605;
  double t11980;
  double t11983;
  double t11986;
  double t13758;
  double t14164;
  double t12832;
  double t12836;
  double t12840;
  double t12848;
  double t12588;
  double t13506;
  double t14238;
  double t16271;
  double t16311;
  double t16319;
  double t15723;
  double t15800;
  double t15801;
  double t16141;
  double t16249;
  double t16264;
  double t16333;
  double t16344;
  double t16345;
  double t16320;
  double t16332;
  double t16353;
  double t16363;
  double t16364;
  double t16368;
  double t16374;
  double t16379;
  double t16381;
  double t16388;
  double t16392;
  double t16400;
  double t16460;
  double t16461;
  double t16462;
  double t14290;
  double t16665;
  double t16669;
  double t16670;
  double t16681;
  double t16683;
  double t16684;
  double t16690;
  double t16691;
  double t16692;
  double t16705;
  double t16719;
  double t16736;
  double t16499;
  double t16500;
  double t16496;
  double t16671;
  double t16838;
  double t16845;
  double t16846;
  double t16832;
  double t16833;
  double t16836;
  double t16847;
  double t16857;
  double t16858;
  double t16876;
  double t17006;
  double t17043;
  double t17061;
  double t17073;
  double t17087;
  double t16498;
  double t16663;
  double t17136;
  double t17137;
  double t17138;
  double t17139;
  double t17141;
  double t17142;
  double t17145;
  double t17146;
  double t17152;
  double t17153;
  double t17154;
  double t17155;
  double t17156;
  double t17157;
  double t17158;
  double t17508;
  double t17510;
  double t17511;
  double t17515;
  double t17525;
  double t17537;
  double t17490;
  double t17505;
  double t17506;
  double t16851;
  double t17574;
  double t17582;
  double t17583;
  double t17584;
  double t17585;
  double t17586;
  double t17587;
  double t17171;
  double t17172;
  double t17175;
  double t17556;
  double t17564;
  double t17572;
  double t17102;
  double t17104;
  double t17884;
  double t17885;
  double t17886;
  double t17890;
  double t17891;
  double t17892;
  double t17893;
  double t17784;
  double t17843;
  double t17844;
  double t17857;
  double t17865;
  double t17878;
  double t11141;
  double t11146;
  double t11147;
  double t17911;
  double t17914;
  double t17926;
  double t17929;
  double t18040;
  double t18049;
  double t10932;
  double t10947;
  double t10966;
  double t18058;
  double t18060;
  double t11245;
  double t11253;
  double t11261;
  double t18165;
  double t18171;
  double t18373;
  double t18415;
  double t11744;
  double t11747;
  double t11748;
  double t11770;
  double t11771;
  double t11791;
  double t22524;
  double t22550;
  double t22594;
  double t22575;
  double t22499;
  double t22552;
  double t23206;
  double t23220;
  double t23231;
  double t16427;
  double t16428;
  double t16432;
  double t24245;
  double t24251;
  double t24292;
  double t24328;
  double t24303;
  double t24315;
  double t24242;
  double t24258;
  double t29503;
  double t30029;
  double t16680;
  double t16685;
  double t16688;
  double t30601;
  double t30602;
  double t32160;
  double t32192;
  double t32202;
  double t32211;
  double t24243;
  double t32298;
  double t32911;
  double t33185;
  double t33374;
  double t33481;
  double t33492;
  double t33500;
  double t14631;
  double t33921;
  double t33927;
  double t33938;
  double t30424;
  double t35935;
  double t35960;
  double t36404;
  double t36577;
  double t36614;
  double t36820;
  double t37612;
  double t14712;
  double t14786;
  double t14792;
  double t15353;
  double t15533;
  double t15685;
  double t15707;
  double t15719;
  double t33711;
  double t33733;
  double t33770;
  double t35683;
  double t35733;
  double t35864;
  double t31304;
  double t31305;
  double t43848;
  double t44238;
  double t44449;
  double t45067;
  double t45367;
  double t46197;
  double t46456;
  double t38519;
  double t38614;
  double t38805;
  double t38895;
  double t38926;
  double t38974;
  double t47412;
  double t47425;
  double t47574;
  double t49760;
  double t49805;
  double t11032;
  double t49829;
  double t49860;
  double t53481;
  double t53492;
  double t53573;
  double t53605;
  double t8392;
  double t8700;
  double t8862;
  double t55884;
  double t55891;
  double t56028;
  double t56145;
  double t56151;
  double t56535;
  double t56613;
  double t56623;
  t6164 = Cos(var1[17]);
  t6237 = Sin(var1[17]);
  t6166 = -0.0641*t6164;
  t6450 = -0.28*t6237;
  t6574 = t6166 + t6450;
  t6600 = -1.*t6164*t6574;
  t6627 = -0.325*t6237;
  t6672 = -1.*t6164;
  t6676 = 1. + t6672;
  t6699 = -0.575*t6676;
  t6716 = -0.295*t6164;
  t6724 = -0.0641*t6237;
  t6805 = t6699 + t6716 + t6724;
  t6809 = -1.*t6805*t6237;
  t6834 = t6600 + t6627 + t6809;
  t4460 = Cos(var1[16]);
  t6874 = Sin(var1[16]);
  t6907 = t6164*t6874;
  t6910 = -1.*t4460*t6237;
  t6921 = t6907 + t6910;
  t6936 = 0.1575*t6921;
  t7057 = -1.*t6164*t6874;
  t7090 = t4460*t6237;
  t7113 = t7057 + t7090;
  t7117 = 0.2255*t7113;
  t7136 = t6936 + t7117;
  t7171 = Sin(var1[15]);
  t7165 = Cos(var1[15]);
  t7176 = 0.325*t6874;
  t7179 = t4460*t6574;
  t7206 = t6874*t6805;
  t7208 = t7176 + t7179 + t7206;
  t4871 = -1.*t4460;
  t4977 = 1. + t4871;
  t7172 = -0.068*t7171;
  t7212 = t7165*t7208;
  t7213 = t7172 + t7212;
  t7288 = t4460*t6164;
  t7291 = t6874*t6237;
  t7315 = t7288 + t7291;
  t7219 = -1.*t7165;
  t7236 = 1. + t7219;
  t7237 = -0.1575*t7236;
  t7239 = -0.2255*t7165;
  t7248 = -1.*t7171*t7208;
  t7249 = t7237 + t7239 + t7248;
  t7214 = -1.*t7171*t7213;
  t7250 = -1.*t7165*t7249;
  t7262 = t7214 + t7250;
  t7358 = t7165*t7262*t7315;
  t7401 = -0.325*t4977;
  t7412 = -1.*t6874*t6574;
  t7433 = t4460*t6805;
  t7523 = t7401 + t7412 + t7433;
  t7553 = t7523*t7113;
  t7572 = t7165*t7213*t7315;
  t7575 = -1.*t7171*t7249*t7315;
  t7589 = t7553 + t7572 + t7575;
  t7592 = t7171*t7589;
  t7599 = t7358 + t7592;
  t5440 = Cos(var1[4]);
  t7626 = Sin(var1[4]);
  t7911 = Sin(var1[5]);
  t5872 = Cos(var1[5]);
  t8134 = t7165*t7626;
  t8151 = t5440*t7171*t7911;
  t8158 = t8134 + t8151;
  t8311 = t7165*t6921*t7626;
  t8313 = t5872*t7315;
  t8315 = t7171*t6921*t7911;
  t8343 = t8313 + t8315;
  t8353 = t5440*t8343;
  t8357 = t8311 + t8353;
  t8179 = -1.*t5440*t5872*t6874;
  t8189 = t4460*t8158;
  t8198 = t8179 + t8189;
  t8215 = t4460*t5440*t5872;
  t8216 = t6874*t8158;
  t8233 = t8215 + t8216;
  t8618 = Sin(var1[3]);
  t8631 = -1.*t5872*t7171*t6921;
  t8637 = t7315*t7911;
  t8640 = t8631 + t8637;
  t8647 = t8618*t8640;
  t8655 = Cos(var1[3]);
  t8670 = t7165*t5440*t6921;
  t8672 = -1.*t7626*t8343;
  t8686 = t8670 + t8672;
  t8689 = t8655*t8686;
  t8696 = t8647 + t8689;
  t8721 = t8655*t8640;
  t8770 = -1.*t8618*t8686;
  t8810 = t8721 + t8770;
  t9002 = t5872*t7249;
  t9033 = t7523*t7911;
  t9074 = t9002 + t9033;
  t8935 = -1.*t5872*t7171*t7315;
  t8936 = t7113*t7911;
  t8937 = t8935 + t8936;
  t8951 = t5872*t7523;
  t8952 = -1.*t7249*t7911;
  t8953 = t8951 + t8952;
  t8998 = t7165*t7911*t8953;
  t9080 = -1.*t7165*t5872*t9074;
  t9134 = t7214 + t8998 + t9080;
  t9138 = t8937*t9134;
  t9145 = t9074*t8937;
  t9146 = t5872*t7113;
  t9148 = t7171*t7315*t7911;
  t9159 = t9146 + t9148;
  t9166 = t8953*t9159;
  t9167 = t7572 + t9145 + t9166;
  t9168 = t7165*t5872*t9167;
  t9169 = t9138 + t9168;
  t7975 = t7171*t7626;
  t7977 = -1.*t7165*t5440*t7911;
  t8120 = t7975 + t7977;
  t9446 = t7213*t7626;
  t9459 = t5440*t8953;
  t9462 = t9446 + t9459;
  t9408 = t7165*t7315*t7626;
  t9432 = t5440*t9159;
  t9435 = t9408 + t9432;
  t9506 = t5440*t7213;
  t9511 = -1.*t7626*t8953;
  t9516 = t9506 + t9511;
  t9477 = -1.*t8120*t9462;
  t9489 = t5440*t7171;
  t9500 = t7165*t7626*t7911;
  t9501 = t9489 + t9500;
  t9526 = -1.*t9501*t9516;
  t9537 = t9080 + t9477 + t9526;
  t9577 = t9435*t9537;
  t9578 = t9462*t9435;
  t9599 = t7165*t5440*t7315;
  t9602 = -1.*t7626*t9159;
  t9609 = t9599 + t9602;
  t9618 = t9516*t9609;
  t9619 = t9145 + t9578 + t9618;
  t9638 = t8120*t9619;
  t9649 = t9577 + t9638;
  t9680 = t5872*t7171*t6921;
  t9683 = -1.*t7315*t7911;
  t9687 = t9680 + t9683;
  t9930 = -1.*t5872*t7249;
  t9931 = -1.*t7523*t7911;
  t9934 = t9930 + t9931;
  t9947 = t7165*t7911*t9074;
  t9990 = t5872*t7171*t7315;
  t9992 = -1.*t7113*t7911;
  t10000 = t9990 + t9992;
  t10012 = t8953*t8937;
  t10028 = t9074*t9159;
  t10322 = 0.068*t7171;
  t10354 = -1.*t7165*t7208;
  t10355 = t10322 + t10354;
  t10426 = -0.068*t7165;
  t10428 = t10426 + t7248;
  t10972 = -1.*t5440*t7171*t6921;
  t10976 = -1.*t7165*t6921*t7626*t7911;
  t10988 = t10972 + t10976;
  t10376 = -1.*t7165*t7213;
  t10431 = -1.*t7171*t10428;
  t10481 = -1.*t7171*t7213*t7315;
  t10634 = t7165*t10428*t7315;
  t11024 = Power(t5872,2);
  t11025 = -1.*t7165*t11024*t10355;
  t11042 = t5872*t7171*t9074;
  t11056 = -1.*t7165*t5872*t7315*t9074;
  t11060 = t5872*t10355*t8937;
  t11075 = -1.*t7171*t7315*t7626;
  t11077 = t7165*t5440*t7315*t7911;
  t11078 = t11075 + t11077;
  t11095 = t10428*t7626;
  t11106 = -1.*t5440*t10355*t7911;
  t11108 = t11095 + t11106;
  t11115 = t5440*t10428;
  t11118 = t10355*t7626*t7911;
  t11125 = t11115 + t11118;
  t11472 = -1.*t7165*t6921*t7626;
  t11492 = -1.*t5440*t8343;
  t11496 = t11472 + t11492;
  t11590 = -1.*t7213*t7626;
  t11599 = -1.*t5440*t8953;
  t11605 = t11590 + t11599;
  t11980 = -1.*t4460*t6164;
  t11983 = -1.*t6874*t6237;
  t11986 = t11980 + t11983;
  t13758 = 0.325*t4460;
  t14164 = t13758 + t7412 + t7433;
  t12832 = -0.325*t6874;
  t12836 = -1.*t4460*t6574;
  t12840 = -1.*t6874*t6805;
  t12848 = t12832 + t12836 + t12840;
  t12588 = t7165*t7213*t7113;
  t13506 = Power(t7165,2);
  t14238 = t13506*t14164*t7315;
  t16271 = -1.*t5872*t7171*t14164;
  t16311 = t12848*t7911;
  t16319 = t16271 + t16311;
  t15723 = -1.*t5872*t7171*t7113;
  t15800 = t11986*t7911;
  t15801 = t15723 + t15800;
  t16141 = t5872*t12848;
  t16249 = t7171*t14164*t7911;
  t16264 = t16141 + t16249;
  t16333 = t5872*t11986;
  t16344 = t7171*t7113*t7911;
  t16345 = t16333 + t16344;
  t16320 = -1.*t7165*t5872*t16319;
  t16332 = t16319*t8937;
  t16353 = t9074*t15801;
  t16363 = t7165*t7113*t7626;
  t16364 = t5440*t16345;
  t16368 = t16363 + t16364;
  t16374 = t7165*t14164*t7626;
  t16379 = t5440*t16264;
  t16381 = t16374 + t16379;
  t16388 = t7165*t5440*t14164;
  t16392 = -1.*t7626*t16264;
  t16400 = t16388 + t16392;
  t16460 = -0.28*t6164;
  t16461 = 0.0641*t6237;
  t16462 = t16460 + t16461;
  t14290 = Power(t7171,2);
  t16665 = t6874*t6574;
  t16669 = t4460*t16462;
  t16670 = t16665 + t16669;
  t16681 = t5872*t6921;
  t16683 = t7171*t11986*t7911;
  t16684 = t16681 + t16683;
  t16690 = -1.*t5872*t7171*t11986;
  t16691 = t6921*t7911;
  t16692 = t16690 + t16691;
  t16705 = t7165*t5440*t11986;
  t16719 = -1.*t7626*t16684;
  t16736 = t16705 + t16719;
  t16499 = -1.*t6874*t16462;
  t16500 = t7179 + t16499;
  t16496 = t7165*t7213*t6921;
  t16671 = t13506*t16670*t7315;
  t16838 = -1.*t5872*t7171*t16670;
  t16845 = t16500*t7911;
  t16846 = t16838 + t16845;
  t16832 = t5872*t16500;
  t16833 = t7171*t16670*t7911;
  t16836 = t16832 + t16833;
  t16847 = -1.*t7165*t5872*t16846;
  t16857 = t16846*t8937;
  t16858 = t9074*t8640;
  t16876 = t7165*t16670*t7626;
  t17006 = t5440*t16836;
  t17043 = t16876 + t17006;
  t17061 = t7165*t5440*t16670;
  t17073 = -1.*t7626*t16836;
  t17087 = t17061 + t17073;
  t16498 = -1.*t7171*t7249*t6921;
  t16663 = t7523*t7315;
  t17136 = -1.*t7523*t7113;
  t17137 = -1.*t7165*t7213*t7315;
  t17138 = t7171*t7249*t7315;
  t17139 = t17136 + t17137 + t17138;
  t17141 = t7165*t6921*t17139;
  t17142 = t16496 + t16498 + t16663;
  t17145 = t7165*t7315*t17142;
  t17146 = t17141 + t17145;
  t17152 = t7208*t6921;
  t17153 = t17152 + t16663;
  t17154 = t7113*t17153;
  t17155 = -1.*t7208*t7315;
  t17156 = t17136 + t17155;
  t17157 = t7315*t17156;
  t17158 = t17154 + t17157;
  t17508 = t7165*t5872*t8618;
  t17510 = t8655*t9501;
  t17511 = t17508 + t17510;
  t17515 = t7165*t8655*t5872;
  t17525 = -1.*t8618*t9501;
  t17537 = t17515 + t17525;
  t17490 = t8655*t5872;
  t17505 = -1.*t8618*t7626*t7911;
  t17506 = t17490 + t17505;
  t16851 = t8953*t8343;
  t17574 = t16496 + t16851 + t16858;
  t17582 = t8937*t17574;
  t17583 = -1.*t9074*t8937;
  t17584 = -1.*t8953*t9159;
  t17585 = t17137 + t17583 + t17584;
  t17586 = t8640*t17585;
  t17587 = t17582 + t17586;
  t17171 = t5872*t8618*t7626;
  t17172 = t8655*t7911;
  t17175 = t17171 + t17172;
  t17556 = -1.*t7165*t5440*t8618;
  t17564 = -1.*t7171*t17506;
  t17572 = t17556 + t17564;
  t17102 = t9462*t8357;
  t17104 = t9516*t8686;
  t17884 = t16858 + t17102 + t17104;
  t17885 = t9435*t17884;
  t17886 = -1.*t9462*t9435;
  t17890 = -1.*t9516*t9609;
  t17891 = t17583 + t17886 + t17890;
  t17892 = t8357*t17891;
  t17893 = t17885 + t17892;
  t17784 = -1.*t6874*t17175;
  t17843 = t4460*t17572;
  t17844 = t17784 + t17843;
  t17857 = t4460*t17175;
  t17865 = t6874*t17572;
  t17878 = t17857 + t17865;
  t11141 = t7165*t5440;
  t11146 = -1.*t7171*t7626*t7911;
  t11147 = t11141 + t11146;
  t17911 = -1.*t7171*t7213*t6921;
  t17914 = t7165*t10428*t6921;
  t17926 = t7171*t7213*t7315;
  t17929 = -1.*t7165*t10428*t7315;
  t18040 = -1.*t7165*t5872*t6921*t9074;
  t18049 = t5872*t10355*t8640;
  t10932 = -1.*t7171*t6921*t7626;
  t10947 = t7165*t5440*t6921*t7911;
  t10966 = t10932 + t10947;
  t18058 = t7165*t5872*t7315*t9074;
  t18060 = -1.*t5872*t10355*t8937;
  t11245 = -1.*t5440*t7171*t7315;
  t11253 = -1.*t7165*t7315*t7626*t7911;
  t11261 = t11245 + t11253;
  t18165 = t9074*t8343;
  t18171 = t8953*t8640;
  t18373 = -1.*t8953*t8937;
  t18415 = -1.*t9074*t9159;
  t11744 = -1.*t7171*t7626;
  t11747 = t7165*t5440*t7911;
  t11748 = t11744 + t11747;
  t11770 = -1.*t7165*t7315*t7626;
  t11771 = -1.*t5440*t9159;
  t11791 = t11770 + t11771;
  t22524 = -1.*t12848*t7113;
  t22550 = -1.*t7523*t11986;
  t22594 = t12848*t7315;
  t22575 = t13506*t14164*t6921;
  t22499 = -1.*t7165*t7213*t7113;
  t22552 = -1.*t13506*t14164*t7315;
  t23206 = t16319*t8640;
  t23220 = -1.*t16319*t8937;
  t23231 = -1.*t9074*t15801;
  t16427 = t7165*t5440*t7113;
  t16428 = -1.*t7626*t16345;
  t16432 = t16427 + t16428;
  t24245 = -1.*t16500*t7113;
  t24251 = -1.*t7523*t7315;
  t24292 = t7523*t6921;
  t24328 = t16500*t7315;
  t24303 = t13506*t16670*t6921;
  t24315 = t7165*t7213*t11986;
  t24242 = -1.*t7165*t7213*t6921;
  t24258 = -1.*t13506*t16670*t7315;
  t29503 = t9074*t16692;
  t30029 = t16846*t8640;
  t16680 = t7165*t11986*t7626;
  t16685 = t5440*t16684;
  t16688 = t16680 + t16685;
  t30601 = -1.*t16846*t8937;
  t30602 = -1.*t9074*t8640;
  t32160 = 0.325*t6164;
  t32192 = t6164*t6805;
  t32202 = -1.*t6574*t6237;
  t32211 = t32160 + t32192 + t32202;
  t24243 = t7171*t7249*t6921;
  t32298 = t7171*t7213;
  t32911 = t7165*t7249;
  t33185 = t32298 + t32911;
  t33374 = t7165*t33185*t6921;
  t33481 = t24242 + t24243 + t24251;
  t33492 = t7171*t33481;
  t33500 = t33374 + t33492;
  t14631 = var2[0]*t9435;
  t33921 = t5872*t8618;
  t33927 = t8655*t7626*t7911;
  t33938 = t33921 + t33927;
  t30424 = -1.*t8953*t8343;
  t35935 = -1.*t7165*t7911*t8953;
  t35960 = t7165*t5872*t9074;
  t36404 = t32298 + t35935 + t35960;
  t36577 = t8640*t36404;
  t36614 = t24242 + t30424 + t30602;
  t36820 = t7165*t5872*t36614;
  t37612 = t36577 + t36820;
  t14712 = t8618*t8937;
  t14786 = t8655*t9609;
  t14792 = t14712 + t14786;
  t15353 = var2[2]*t14792;
  t15533 = t8655*t8937;
  t15685 = -1.*t8618*t9609;
  t15707 = t15533 + t15685;
  t15719 = var2[1]*t15707;
  t33711 = -1.*t8655*t5872*t7626;
  t33733 = t8618*t7911;
  t33770 = t33711 + t33733;
  t35683 = t7165*t8655*t5440;
  t35733 = -1.*t7171*t33938;
  t35864 = t35683 + t35733;
  t31304 = -1.*t9462*t8357;
  t31305 = -1.*t9516*t8686;
  t43848 = t8120*t9462;
  t44238 = t9501*t9516;
  t44449 = t35960 + t43848 + t44238;
  t45067 = t8357*t44449;
  t45367 = t30602 + t31304 + t31305;
  t46197 = t8120*t45367;
  t46456 = t45067 + t46197;
  t38519 = -1.*t6874*t33770;
  t38614 = t4460*t35864;
  t38805 = t38519 + t38614;
  t38895 = t4460*t33770;
  t38926 = t6874*t35864;
  t38974 = t38895 + t38926;
  t47412 = -1.*t7165*t7911*t9074;
  t47425 = -1.*t9074*t8343;
  t47574 = -1.*t8953*t8640;
  t49760 = t7165*t7213;
  t49805 = t7171*t10428;
  t11032 = Power(t7911,2);
  t49829 = t7171*t7213*t6921;
  t49860 = -1.*t7165*t10428*t6921;
  t53481 = t7165*t11024*t10355;
  t53492 = -1.*t5872*t7171*t9074;
  t53573 = t7165*t5872*t6921*t9074;
  t53605 = -1.*t5872*t10355*t8640;
  t8392 = var2[0]*t8357;
  t8700 = var2[2]*t8696;
  t8862 = var2[1]*t8810;
  t55884 = -1.*t13506*t16670*t6921;
  t55891 = -1.*t7165*t7213*t11986;
  t56028 = t7165*t5872*t16846;
  t56145 = -1.*t9074*t16692;
  t56151 = -1.*t16846*t8640;
  t56535 = -1.*t13506*t14164*t6921;
  t56613 = t7165*t5872*t16319;
  t56623 = -1.*t16319*t8640;
  p_output1[0]=-0.325*t4977*t5440*t5872 + 0.1575*t7171*t7626 + 0.1575*t5440*t7236*t7911 - 0.2255*t8120 + 0.325*t6874*t8158 - 0.575*t6237*t8198 - 0.575*t6676*t8233 - 0.295*(-1.*t6237*t8198 + t6164*t8233) - 0.0641*(t6164*t8198 + t6237*t8233) + t8392 + t8700 + t8862 + var1[0] + t9649*var2[3] + ((-1.*t8618*t8640 - 1.*t8655*t8686)*var2[1] + t8810*var2[2])*var2[3] + t9169*var2[4] + (t8686*var2[0] - 1.*t11496*t8618*var2[1] + t11496*t8655*var2[2] + (t9435*(-1.*t11605*t9501 - 1.*t9462*t9501 - 1.*t11748*t9516 - 1.*t8120*t9516) + t9537*t9609 + t8120*(t11791*t9516 + t9435*t9516 + t11605*t9609 + t9462*t9609) + t9501*t9619)*var2[3])*var2[4] + t7599*var2[5] + (t5440*t9687*var2[0] + (t8343*t8655 + t7626*t8618*t9687)*var2[1] + (t8343*t8618 - 1.*t7626*t8655*t9687)*var2[2] + (t10000*t5440*t9537 - 1.*t5440*t5872*t7165*t9619 + t8120*(t10012 + t10028 + t10000*t5440*t9462 - 1.*t10000*t7626*t9516 + t5440*t9435*t9934 - 1.*t7626*t9609*t9934) + t9435*(-1.*t5872*t7165*t8953 + t5440*t5872*t7165*t9462 - 1.*t5872*t7165*t7626*t9516 - 1.*t5440*t8120*t9934 + t7626*t9501*t9934 + t9947))*var2[3] + (t9134*t9159 - 1.*t7165*t7911*t9167 + t5872*t7165*(t10012 + t10028 + t10000*t8953 + t9159*t9934) + t8937*(t7165*t7911*t9934 + t9947))*var2[4])*var2[5] + t7136*var2[15] + (t10966*var2[0] + (-1.*t10988*t8618 - 1.*t5872*t6921*t7165*t8655)*var2[1] + (-1.*t5872*t6921*t7165*t8618 + t10988*t8655)*var2[2] + (t9435*(t11025 + t11042 - 1.*t11108*t8120 - 1.*t8158*t9462 - 1.*t11125*t9501 - 1.*t11147*t9516) + t11078*t9537 + t8120*(t11056 + t11060 + t11108*t9435 + t11078*t9462 + t11261*t9516 + t11125*t9609) + t8158*t9619)*var2[3] + (t8937*(t10376 + t10431 + t11025 + t11042 - 1.*t10355*t11032*t7165 - 1.*t7171*t7911*t8953) - 1.*t5872*t7165*t7315*t9134 + t5872*t7165*(t10481 + t10634 + t11056 + t11060 + t7165*t7315*t7911*t8953 - 1.*t10355*t7911*t9159) - 1.*t5872*t7171*t9167)*var2[4] + (t7165*(t10376 + t10431 - 1.*t10355*t7165 + t7171*t7249)*t7315 - 1.*t7171*t7262*t7315 + t7171*(t10481 + t10634 - 1.*t10355*t7171*t7315 - 1.*t7165*t7249*t7315) + t7165*t7589)*var2[5])*var2[15] + t6834*var2[16] + (t14631 + t15353 + t15719 + (t9435*(t16320 - 1.*t16381*t8120 - 1.*t16400*t9501) + t16368*t9537 + t8120*(t16332 + t16353 + t16381*t9435 + t16368*t9462 + t16432*t9516 + t16400*t9609))*var2[3] + ((t16320 - 1.*t14164*t7165*t7171 + t16264*t7165*t7911)*t8937 + t15801*t9134 + t5872*t7165*(t12588 + t14238 + t16332 + t16353 + t16345*t8953 + t16264*t9159))*var2[4] + (t7113*t7165*t7262 + t7171*(t12588 + t14238 + t12848*t7113 - 1.*t7113*t7171*t7249 + t14164*t14290*t7315 + t11986*t7523))*var2[5] + (0.2255*t11986 + 0.1575*t7315)*var2[15])*var2[16] - 0.0641*var2[17] + (t16688*var2[0] + (-1.*t16736*t8618 + t16692*t8655)*var2[1] + (t16692*t8618 + t16736*t8655)*var2[2] + (t9435*(t16847 - 1.*t17043*t8120 - 1.*t17087*t9501) + t8357*t9537 + t8120*(t16857 + t16858 + t17102 + t17104 + t17043*t9435 + t17087*t9609))*var2[3] + ((t16847 - 1.*t16670*t7165*t7171 + t16836*t7165*t7911)*t8937 + t8640*t9134 + t5872*t7165*(t16496 + t16671 + t16851 + t16857 + t16858 + t16836*t9159))*var2[4] + (t6921*t7165*t7262 + t7171*(t16496 + t16498 + t16663 + t16671 + t16500*t7113 + t14290*t16670*t7315))*var2[5] + (0.1575*t11986 + 0.2255*t7315)*var2[15] + (-0.325*t6164 - 1.*t16462*t6164 - 1.*t6164*t6805)*var2[16])*var2[17] + t8357*var3[0] + t8810*var3[1] + t8696*var3[2] + t9649*var3[3] + t9169*var3[4] + t7599*var3[5] + t7136*var3[15] + t6834*var3[16] - 0.0641*var3[17] - 1.*var4[0];
  p_output1[1]=-0.325*t17175*t4977 - 0.575*t17844*t6237 - 0.295*(t17878*t6164 - 1.*t17844*t6237) - 0.0641*(t17844*t6164 + t17878*t6237) - 0.575*t17878*t6676 + 0.325*t17572*t6874 - 0.1575*t17506*t7236 - 0.1575*t5440*t7171*t8618 - 0.2255*(t17506*t7165 - 1.*t5440*t7171*t8618) + var1[1] + t8120*var2[0] + t17537*var2[1] + t17511*var2[2] + t17893*var2[3] + ((-1.*t5872*t7165*t8618 - 1.*t8655*t9501)*var2[1] + t17537*var2[2])*var2[3] + t17587*var2[4] + (t9501*var2[0] - 1.*t11748*t8618*var2[1] + t11748*t8655*var2[2] + (t17891*t8686 + t9435*(t11605*t8686 + t8686*t9462 + t11496*t9516 + t8357*t9516) + t17884*t9609 + t8357*(-1.*t11791*t9516 - 1.*t9435*t9516 - 1.*t11605*t9609 - 1.*t9462*t9609))*var2[3])*var2[4] + t17146*var2[5] + (-1.*t5440*t5872*t7165*var2[0] + (-1.*t5872*t7165*t7626*t8618 - 1.*t7165*t7911*t8655)*var2[1] + (-1.*t7165*t7911*t8618 + t5872*t7165*t7626*t8655)*var2[2] + (t10000*t17884*t5440 + t17891*t5440*t9687 + t9435*(t18165 + t18171 + t5440*t9462*t9687 - 1.*t7626*t9516*t9687 + t5440*t8357*t9934 - 1.*t7626*t8686*t9934) + t8357*(t18373 + t18415 - 1.*t10000*t5440*t9462 + t10000*t7626*t9516 - 1.*t5440*t9435*t9934 + t7626*t9609*t9934))*var2[3] + (t17585*t8343 + t17574*t9159 + t8937*(t18165 + t18171 + t8953*t9687 + t8343*t9934) + t8640*(t18373 + t18415 - 1.*t10000*t8953 - 1.*t9159*t9934))*var2[4])*var2[5] + t17158*var2[15] + (t8158*var2[0] + (-1.*t11147*t8618 - 1.*t5872*t7171*t8655)*var2[1] + (-1.*t5872*t7171*t8618 + t11147*t8655)*var2[2] + (t11078*t17884 + t10966*t17891 + t9435*(t18040 + t18049 + t11108*t8357 + t11125*t8686 + t10966*t9462 + t10988*t9516) + t8357*(t18058 + t18060 - 1.*t11108*t9435 - 1.*t11078*t9462 - 1.*t11261*t9516 - 1.*t11125*t9609))*var2[3] + (-1.*t17585*t5872*t6921*t7165 - 1.*t17574*t5872*t7165*t7315 + t8937*(t17911 + t17914 + t18040 + t18049 - 1.*t10355*t7911*t8343 + t6921*t7165*t7911*t8953) + t8640*(t17926 + t17929 + t18058 + t18060 - 1.*t7165*t7315*t7911*t8953 + t10355*t7911*t9159))*var2[4] + (-1.*t17139*t6921*t7171 - 1.*t17142*t7171*t7315 + t7165*(t17911 + t17914 - 1.*t10355*t6921*t7171 - 1.*t6921*t7165*t7249)*t7315 + t6921*t7165*(t17926 + t17929 + t10355*t7171*t7315 + t7165*t7249*t7315))*var2[5])*var2[15] + ((t16368*t17884 + t17891*t9435 + t8357*(t23220 + t23231 - 1.*t16381*t9435 - 1.*t16368*t9462 - 1.*t16432*t9516 - 1.*t16400*t9609) + t9435*(t23206 + t16381*t8357 + t16400*t8686 + t9145 + t9578 + t9618))*var2[3] + (t15801*t17574 + t17585*t8937 + t8640*(t22499 + t22552 + t23220 + t23231 - 1.*t16345*t8953 - 1.*t16264*t9159) + t8937*(t22575 + t23206 + t7572 + t16264*t8343 + t9145 + t9166))*var2[4] + (t17142*t7113*t7165 + t17139*t7165*t7315 + t6921*t7165*(t22499 + t22524 + t22550 + t22552 + t7113*t7171*t7249 - 1.*t14164*t14290*t7315) + t7165*t7315*(t22575 + t22594 + t14164*t14290*t6921 + t7553 + t7572 + t7575))*var2[5] + (t11986*t17153 + t17156*t7113 + t7315*(t22524 + t22550 - 1.*t7113*t7208 - 1.*t14164*t7315) + t7113*(t22594 + t14164*t6921 + t7208*t7315 + t7553))*var2[15])*var2[16] + ((t16688*t17891 + t17884*t8357 + t9435*(t29503 + t30029 + t17043*t8357 + t17087*t8686 + t16688*t9462 + t16736*t9516) + t8357*(t30601 + t30602 + t31304 + t31305 - 1.*t17043*t9435 - 1.*t17087*t9609))*var2[3] + (t16692*t17585 + t17574*t8640 + t8937*(t24303 + t24315 + t29503 + t30029 + t16836*t8343 + t16684*t8953) + t8640*(t24242 + t24258 + t30424 + t30601 + t30602 - 1.*t16836*t9159))*var2[4] + (t11986*t17139*t7165 + t17142*t6921*t7165 + t7165*(t24292 + t24303 + t24315 + t24328 + t14290*t16670*t6921 - 1.*t11986*t7171*t7249)*t7315 + t6921*t7165*(t24242 + t24243 + t24245 + t24251 + t24258 - 1.*t14290*t16670*t7315))*var2[5] + (t17156*t6921 + t7113*(t24292 + t24328 + t16670*t6921 + t11986*t7208) + t17153*t7315 + t7315*(t24245 + t24251 - 1.*t6921*t7208 - 1.*t16670*t7315))*var2[15])*var2[17] + t8120*var3[0] + t17537*var3[1] + t17511*var3[2] + t17893*var3[3] + t17587*var3[4] + t17146*var3[5] + t17158*var3[15] - 1.*var4[1];
  p_output1[2]=t14631 + t15353 + t15719 - 0.325*t33770*t4977 - 0.575*t38805*t6237 - 0.295*(t38974*t6164 - 1.*t38805*t6237) - 0.0641*(t38805*t6164 + t38974*t6237) - 0.575*t38974*t6676 + 0.325*t35864*t6874 - 0.1575*t33938*t7236 + 0.1575*t5440*t7171*t8655 - 0.2255*(t33938*t7165 + t5440*t7171*t8655) + var1[2] + t46456*var2[3] + ((-1.*t8618*t8937 - 1.*t8655*t9609)*var2[1] + t15707*var2[2])*var2[3] + t37612*var2[4] + (t9609*var2[0] - 1.*t11791*t8618*var2[1] + t11791*t8655*var2[2] + (t44449*t8686 + t45367*t9501 + t8357*(t11605*t9501 + t9462*t9501 + t11748*t9516 + t8120*t9516) + t8120*(-1.*t11605*t8686 - 1.*t8686*t9462 - 1.*t11496*t9516 - 1.*t8357*t9516))*var2[3])*var2[4] + t33500*var2[5] + (t10000*t5440*var2[0] + (t10000*t7626*t8618 + t8655*t9159)*var2[1] + (-1.*t10000*t7626*t8655 + t8618*t9159)*var2[2] + (-1.*t45367*t5440*t5872*t7165 + t44449*t5440*t9687 + t8120*(t47425 + t47574 - 1.*t5440*t9462*t9687 + t7626*t9516*t9687 - 1.*t5440*t8357*t9934 + t7626*t8686*t9934) + t8357*(t47412 + t5872*t7165*t8953 - 1.*t5440*t5872*t7165*t9462 + t5872*t7165*t7626*t9516 + t5440*t8120*t9934 - 1.*t7626*t9501*t9934))*var2[3] + (-1.*t36614*t7165*t7911 + t36404*t8343 + t8640*(t47412 - 1.*t7165*t7911*t9934) + t5872*t7165*(t47425 + t47574 - 1.*t8953*t9687 - 1.*t8343*t9934))*var2[4])*var2[5] - 0.068*t7315*var2[15] + (t11078*var2[0] + (-1.*t11261*t8618 - 1.*t5872*t7165*t7315*t8655)*var2[1] + (-1.*t5872*t7165*t7315*t8618 + t11261*t8655)*var2[2] + (t10966*t44449 + t45367*t8158 + t8120*(t53573 + t53605 - 1.*t11108*t8357 - 1.*t11125*t8686 - 1.*t10966*t9462 - 1.*t10988*t9516) + t8357*(t53481 + t53492 + t11108*t8120 + t8158*t9462 + t11125*t9501 + t11147*t9516))*var2[3] + (-1.*t36404*t5872*t6921*t7165 - 1.*t36614*t5872*t7171 + t5872*t7165*(t49829 + t49860 + t53573 + t53605 + t10355*t7911*t8343 - 1.*t6921*t7165*t7911*t8953) + t8640*(t49760 + t49805 + t53481 + t53492 + t10355*t11032*t7165 + t7171*t7911*t8953))*var2[4] + (t33481*t7165 - 1.*t33185*t6921*t7171 + t7171*(t49829 + t49860 + t10355*t6921*t7171 + t6921*t7165*t7249) + t6921*t7165*(t49760 + t49805 + t10355*t7165 - 1.*t7171*t7249))*var2[5])*var2[15] + t32211*var2[16] + (t16368*var2[0] + (-1.*t16432*t8618 + t15801*t8655)*var2[1] + (t15801*t8618 + t16432*t8655)*var2[2] + (t8120*(t17583 + t17886 + t17890 + t56623 - 1.*t16381*t8357 - 1.*t16400*t8686) + t44449*t9435 + t8357*(t56613 + t16381*t8120 + t16400*t9501))*var2[3] + (t5872*t7165*(t17137 + t17583 + t17584 + t56535 + t56623 - 1.*t16264*t8343) + (t56613 + t14164*t7165*t7171 - 1.*t16264*t7165*t7911)*t8640 + t36404*t8937)*var2[4] + (t33185*t7165*t7315 + t7171*(t17136 + t17137 + t17138 + t56535 - 1.*t14164*t14290*t6921 - 1.*t12848*t7315))*var2[5] - 0.068*t7113*var2[15])*var2[16] - 0.28*var2[17] + (t8392 + t8700 + t8862 + (t16688*t44449 + t8357*(t56028 + t17043*t8120 + t17087*t9501) + t8120*(t56145 + t56151 - 1.*t17043*t8357 - 1.*t17087*t8686 - 1.*t16688*t9462 - 1.*t16736*t9516))*var2[3] + (t16692*t36404 + (t56028 + t16670*t7165*t7171 - 1.*t16836*t7165*t7911)*t8640 + t5872*t7165*(t55884 + t55891 + t56145 + t56151 - 1.*t16836*t8343 - 1.*t16684*t8953))*var2[4] + (t11986*t33185*t7165 + t7171*(t55884 + t55891 - 1.*t14290*t16670*t6921 + t11986*t7171*t7249 - 1.*t16500*t7315 - 1.*t6921*t7523))*var2[5] - 0.068*t6921*var2[15] + (-1.*t16462*t6237 + t6627 + t6809)*var2[16])*var2[17] + t9435*var3[0] + t15707*var3[1] + t14792*var3[2] + t46456*var3[3] + t37612*var3[4] + t33500*var3[5] - 0.068*t7315*var3[15] + t32211*var3[16] - 0.28*var3[17] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void ddh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
