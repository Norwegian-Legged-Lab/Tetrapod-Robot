/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:40 GMT+02:00
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
  double t7465;
  double t7442;
  double t7449;
  double t7469;
  double t7454;
  double t7470;
  double t7471;
  double t7473;
  double t7441;
  double t7440;
  double t7474;
  double t7475;
  double t7476;
  double t7519;
  double t7472;
  double t7477;
  double t7478;
  double t7422;
  double t7523;
  double t7528;
  double t7529;
  double t7531;
  double t7532;
  double t7533;
  double t7534;
  double t7535;
  double t7537;
  double t7548;
  double t7550;
  double t7551;
  double t7563;
  double t7564;
  double t7565;
  double t7566;
  double t7568;
  double t7569;
  double t7572;
  double t7573;
  double t7574;
  double t7575;
  double t7576;
  double t7578;
  double t7588;
  double t7589;
  double t7590;
  double t7604;
  double t7605;
  double t7606;
  double t7608;
  double t7609;
  double t7610;
  double t7611;
  double t7612;
  double t7613;
  double t7603;
  double t7607;
  double t7614;
  double t7615;
  double t7599;
  double t7600;
  double t7601;
  double t7602;
  double t7616;
  double t7617;
  double t7618;
  double t7619;
  double t7620;
  double t7621;
  double t7622;
  double t7623;
  double t7624;
  double t7625;
  double t7626;
  double t7627;
  double t7628;
  double t7629;
  double t7630;
  double t7631;
  double t7632;
  double t7634;
  double t7635;
  double t7636;
  double t7642;
  double t7643;
  double t7644;
  double t7653;
  double t7654;
  double t7655;
  double t7647;
  double t7648;
  double t7649;
  double t7638;
  double t7639;
  double t7640;
  double t7595;
  double t7596;
  double t7597;
  double t7680;
  double t7681;
  double t7682;
  double t7664;
  double t7665;
  double t7666;
  double t7735;
  double t7736;
  double t7737;
  double t7656;
  double t7659;
  double t7747;
  double t7748;
  double t7749;
  double t7651;
  double t7652;
  double t7657;
  double t7763;
  double t7764;
  double t7765;
  double t7751;
  double t7660;
  double t7661;
  double t7662;
  double t7762;
  double t7768;
  double t7679;
  double t7693;
  double t7683;
  double t7684;
  double t7685;
  double t7801;
  double t7803;
  double t7694;
  double t7695;
  double t7696;
  double t7814;
  double t7817;
  double t7718;
  double t7721;
  double t7716;
  double t7717;
  double t7719;
  double t7853;
  double t7722;
  double t7723;
  double t7724;
  double t7857;
  double t7859;
  double t7891;
  double t7892;
  double t7893;
  double t7755;
  double t7904;
  double t7905;
  double t7906;
  double t7909;
  double t7910;
  double t7758;
  double t7754;
  double t7756;
  double t7908;
  double t7911;
  double t7759;
  double t7760;
  double t7916;
  double t7917;
  double t7929;
  double t7930;
  double t7931;
  double t7953;
  double t7954;
  double t7955;
  double t7938;
  double t7939;
  double t7945;
  double t7946;
  double t7947;
  double t7961;
  double t7962;
  double t7963;
  double t7957;
  double t7958;
  double t7959;
  double t7949;
  double t7950;
  double t7951;
  double t7810;
  double t7806;
  double t7807;
  double t7808;
  double t7990;
  double t7991;
  double t7811;
  double t7812;
  double t7996;
  double t7997;
  double t8013;
  double t7886;
  double t7887;
  double t7888;
  double t8015;
  double t8020;
  double t7968;
  double t7969;
  double t7970;
  double t8021;
  double t7849;
  double t7862;
  double t7848;
  double t7850;
  double t7932;
  double t8057;
  double t8058;
  double t7863;
  double t7864;
  double t8063;
  double t8064;
  double t8076;
  double t8077;
  double t8083;
  double t8085;
  double t7901;
  double t7902;
  double t8107;
  double t8108;
  double t8109;
  double t8125;
  double t8126;
  double t7583;
  double t7584;
  double t7585;
  double t8118;
  double t8119;
  double t8120;
  double t8121;
  double t8116;
  double t8124;
  double t8127;
  double t8139;
  double t8140;
  double t8141;
  double t8147;
  double t8148;
  double t8149;
  double t8143;
  double t8144;
  double t8145;
  double t8154;
  double t8155;
  double t8156;
  double t8150;
  double t8158;
  double t8159;
  double t8165;
  double t8166;
  double t8167;
  double t8173;
  double t8174;
  double t8175;
  double t8169;
  double t8170;
  double t8171;
  double t8001;
  double t8002;
  double t8003;
  double t8005;
  double t8006;
  double t8007;
  double t8128;
  double t7921;
  double t7922;
  double t8195;
  double t8196;
  double t8203;
  double t8201;
  double t8193;
  double t8197;
  double t8227;
  double t8231;
  double t8232;
  double t8180;
  double t8181;
  double t8182;
  double t8053;
  double t8054;
  double t8256;
  double t8272;
  double t8278;
  double t8297;
  double t8298;
  double t8299;
  double t8318;
  double t8319;
  double t8320;
  double t8308;
  double t8309;
  double t8310;
  double t8327;
  double t8328;
  double t8329;
  double t8331;
  double t8332;
  double t8333;
  double t8315;
  double t8316;
  double t8321;
  double t8346;
  double t8347;
  double t8348;
  double t8342;
  double t8343;
  double t8344;
  double t8349;
  double t8353;
  double t8364;
  double t8365;
  double t8366;
  double t8360;
  double t8361;
  double t8362;
  double t8068;
  double t8069;
  double t8208;
  double t8209;
  double t8215;
  double t8216;
  double t8379;
  double t8384;
  double t8389;
  double t8385;
  double t8387;
  double t8380;
  double t8407;
  double t8410;
  double t8307;
  double t8311;
  double t8312;
  double t8414;
  double t7542;
  double t7543;
  double t7544;
  double t8444;
  double t8446;
  double t8460;
  double t8464;
  double t8467;
  t7465 = Cos(var1[7]);
  t7442 = Cos(var1[8]);
  t7449 = Sin(var1[7]);
  t7469 = Sin(var1[8]);
  t7454 = t7442*t7449;
  t7470 = -1.*t7465*t7469;
  t7471 = t7454 + t7470;
  t7473 = Sin(var1[5]);
  t7441 = Sin(var1[6]);
  t7440 = Cos(var1[5]);
  t7474 = t7465*t7442;
  t7475 = t7449*t7469;
  t7476 = t7474 + t7475;
  t7519 = Cos(var1[3]);
  t7472 = -1.*t7440*t7441*t7471;
  t7477 = t7473*t7476;
  t7478 = t7472 + t7477;
  t7422 = Sin(var1[3]);
  t7523 = Cos(var1[4]);
  t7528 = Cos(var1[6]);
  t7529 = t7523*t7528*t7471;
  t7531 = Sin(var1[4]);
  t7532 = t7473*t7441*t7471;
  t7533 = t7440*t7476;
  t7534 = t7532 + t7533;
  t7535 = -1.*t7531*t7534;
  t7537 = t7529 + t7535;
  t7548 = t7528*t7531*t7473;
  t7550 = t7523*t7441;
  t7551 = t7548 + t7550;
  t7563 = -1.*t7442*t7449;
  t7564 = t7465*t7469;
  t7565 = t7563 + t7564;
  t7566 = t7473*t7565;
  t7568 = -1.*t7440*t7441*t7476;
  t7569 = t7566 + t7568;
  t7572 = t7523*t7528*t7476;
  t7573 = t7440*t7565;
  t7574 = t7473*t7441*t7476;
  t7575 = t7573 + t7574;
  t7576 = -1.*t7531*t7575;
  t7578 = t7572 + t7576;
  t7588 = -1.*t7528*t7531*t7471;
  t7589 = -1.*t7523*t7534;
  t7590 = t7588 + t7589;
  t7604 = -0.0641*t7442;
  t7605 = -0.28*t7469;
  t7606 = t7604 + t7605;
  t7608 = -1.*t7442;
  t7609 = 1. + t7608;
  t7610 = 0.075*t7609;
  t7611 = 0.355*t7442;
  t7612 = -0.0641*t7469;
  t7613 = t7610 + t7611 + t7612;
  t7603 = -0.325*t7449;
  t7607 = t7465*t7606;
  t7614 = t7449*t7613;
  t7615 = t7603 + t7607 + t7614;
  t7599 = -1.*t7528;
  t7600 = 1. + t7599;
  t7601 = 0.1575*t7600;
  t7602 = 0.2255*t7528;
  t7616 = -1.*t7441*t7615;
  t7617 = t7601 + t7602 + t7616;
  t7618 = -1.*t7473*t7617;
  t7619 = -1.*t7465;
  t7620 = 1. + t7619;
  t7621 = 0.325*t7620;
  t7622 = -1.*t7449*t7606;
  t7623 = t7465*t7613;
  t7624 = t7621 + t7622 + t7623;
  t7625 = t7440*t7624;
  t7626 = t7618 + t7625;
  t7627 = -1.*t7531*t7626;
  t7628 = 0.068*t7441;
  t7629 = t7528*t7615;
  t7630 = t7628 + t7629;
  t7631 = t7523*t7630;
  t7632 = t7627 + t7631;
  t7634 = -1.*t7523*t7528*t7473;
  t7635 = t7531*t7441;
  t7636 = t7634 + t7635;
  t7642 = t7523*t7626;
  t7643 = t7531*t7630;
  t7644 = t7642 + t7643;
  t7653 = t7440*t7617;
  t7654 = t7473*t7624;
  t7655 = t7653 + t7654;
  t7647 = t7528*t7531*t7476;
  t7648 = t7523*t7575;
  t7649 = t7647 + t7648;
  t7638 = -1.*t7523*t7626;
  t7639 = -1.*t7531*t7630;
  t7640 = t7638 + t7639;
  t7595 = t7523*t7528*t7473;
  t7596 = -1.*t7531*t7441;
  t7597 = t7595 + t7596;
  t7680 = t7528*t7531*t7471;
  t7681 = t7523*t7534;
  t7682 = t7680 + t7681;
  t7664 = -1.*t7528*t7531*t7476;
  t7665 = -1.*t7523*t7575;
  t7666 = t7664 + t7665;
  t7735 = t7440*t7441*t7471;
  t7736 = -1.*t7473*t7476;
  t7737 = t7735 + t7736;
  t7656 = -1.*t7440*t7528*t7655;
  t7659 = t7655*t7569;
  t7747 = -1.*t7440*t7617;
  t7748 = -1.*t7473*t7624;
  t7749 = t7747 + t7748;
  t7651 = -1.*t7551*t7632;
  t7652 = -1.*t7636*t7644;
  t7657 = t7651 + t7652 + t7656;
  t7763 = -1.*t7473*t7565;
  t7764 = t7440*t7441*t7476;
  t7765 = t7763 + t7764;
  t7751 = t7528*t7473*t7655;
  t7660 = t7644*t7649;
  t7661 = t7632*t7578;
  t7662 = t7659 + t7660 + t7661;
  t7762 = t7626*t7569;
  t7768 = t7655*t7575;
  t7679 = t7655*t7478;
  t7693 = -1.*t7655*t7569;
  t7683 = t7644*t7682;
  t7684 = t7632*t7537;
  t7685 = t7679 + t7683 + t7684;
  t7801 = t7655*t7534;
  t7803 = t7626*t7478;
  t7694 = -1.*t7644*t7649;
  t7695 = -1.*t7632*t7578;
  t7696 = t7693 + t7694 + t7695;
  t7814 = -1.*t7626*t7569;
  t7817 = -1.*t7655*t7575;
  t7718 = t7440*t7528*t7655;
  t7721 = -1.*t7655*t7478;
  t7716 = t7551*t7632;
  t7717 = t7636*t7644;
  t7719 = t7716 + t7717 + t7718;
  t7853 = -1.*t7528*t7473*t7655;
  t7722 = -1.*t7644*t7682;
  t7723 = -1.*t7632*t7537;
  t7724 = t7721 + t7722 + t7723;
  t7857 = -1.*t7655*t7534;
  t7859 = -1.*t7626*t7478;
  t7891 = -1.*t7528*t7531*t7473*t7471;
  t7892 = -1.*t7523*t7441*t7471;
  t7893 = t7891 + t7892;
  t7755 = -1.*t7441*t7630;
  t7904 = -0.068*t7441;
  t7905 = -1.*t7528*t7615;
  t7906 = t7904 + t7905;
  t7909 = 0.068*t7528;
  t7910 = t7909 + t7616;
  t7758 = t7528*t7630*t7476;
  t7754 = t7528*t7473*t7626;
  t7756 = t7754 + t7656 + t7755;
  t7908 = -1.*t7528*t7630;
  t7911 = -1.*t7441*t7910;
  t7759 = t7626*t7575;
  t7760 = t7758 + t7659 + t7759;
  t7916 = -1.*t7441*t7630*t7476;
  t7917 = t7528*t7910*t7476;
  t7929 = t7440*t7441*t7655;
  t7930 = Power(t7440,2);
  t7931 = -1.*t7930*t7528*t7906;
  t7953 = t7528*t7531;
  t7954 = t7523*t7473*t7441;
  t7955 = t7953 + t7954;
  t7938 = -1.*t7440*t7528*t7655*t7476;
  t7939 = t7440*t7906*t7569;
  t7945 = t7523*t7528*t7473*t7476;
  t7946 = -1.*t7531*t7441*t7476;
  t7947 = t7945 + t7946;
  t7961 = -1.*t7523*t7473*t7906;
  t7962 = t7531*t7910;
  t7963 = t7961 + t7962;
  t7957 = t7531*t7473*t7906;
  t7958 = t7523*t7910;
  t7959 = t7957 + t7958;
  t7949 = t7523*t7528;
  t7950 = -1.*t7531*t7473*t7441;
  t7951 = t7949 + t7950;
  t7810 = -1.*t7528*t7630*t7476;
  t7806 = t7528*t7630*t7471;
  t7807 = t7626*t7534;
  t7808 = t7806 + t7807 + t7679;
  t7990 = -1.*t7441*t7630*t7471;
  t7991 = t7528*t7910*t7471;
  t7811 = -1.*t7626*t7575;
  t7812 = t7810 + t7693 + t7811;
  t7996 = t7441*t7630*t7476;
  t7997 = -1.*t7528*t7910*t7476;
  t8013 = -1.*t7440*t7528*t7655*t7471;
  t7886 = t7523*t7528*t7473*t7471;
  t7887 = -1.*t7531*t7441*t7471;
  t7888 = t7886 + t7887;
  t8015 = t7440*t7906*t7478;
  t8020 = t7440*t7528*t7655*t7476;
  t7968 = -1.*t7528*t7531*t7473*t7476;
  t7969 = -1.*t7523*t7441*t7476;
  t7970 = t7968 + t7969;
  t8021 = -1.*t7440*t7906*t7569;
  t7849 = t7441*t7630;
  t7862 = -1.*t7528*t7630*t7471;
  t7848 = -1.*t7528*t7473*t7626;
  t7850 = t7848 + t7718 + t7849;
  t7932 = Power(t7473,2);
  t8057 = t7528*t7630;
  t8058 = t7441*t7910;
  t7863 = -1.*t7626*t7534;
  t7864 = t7862 + t7863 + t7721;
  t8063 = t7441*t7630*t7471;
  t8064 = -1.*t7528*t7910*t7471;
  t8076 = -1.*t7440*t7441*t7655;
  t8077 = t7930*t7528*t7906;
  t8083 = t7440*t7528*t7655*t7471;
  t8085 = -1.*t7440*t7906*t7478;
  t7901 = -1.*t7528*t7617;
  t7902 = t7755 + t7901;
  t8107 = -1.*t7465*t7442;
  t8108 = -1.*t7449*t7469;
  t8109 = t8107 + t8108;
  t8125 = -0.325*t7465;
  t8126 = t8125 + t7622 + t7623;
  t7583 = t7519*t7569;
  t7584 = -1.*t7422*t7578;
  t7585 = t7583 + t7584;
  t8118 = 0.325*t7449;
  t8119 = -1.*t7465*t7606;
  t8120 = -1.*t7449*t7613;
  t8121 = t8118 + t8119 + t8120;
  t8116 = t7528*t7630*t7565;
  t8124 = Power(t7528,2);
  t8127 = t8124*t8126*t7476;
  t8139 = -1.*t7440*t7441*t7565;
  t8140 = t7473*t8109;
  t8141 = t8139 + t8140;
  t8147 = -1.*t7440*t7441*t8126;
  t8148 = t7473*t8121;
  t8149 = t8147 + t8148;
  t8143 = t7473*t7441*t8126;
  t8144 = t7440*t8121;
  t8145 = t8143 + t8144;
  t8154 = t7473*t7441*t7565;
  t8155 = t7440*t8109;
  t8156 = t8154 + t8155;
  t8150 = -1.*t7440*t7528*t8149;
  t8158 = t7655*t8141;
  t8159 = t8149*t7569;
  t8165 = t7528*t7531*t7565;
  t8166 = t7523*t8156;
  t8167 = t8165 + t8166;
  t8173 = t7523*t8145;
  t8174 = t7528*t7531*t8126;
  t8175 = t8173 + t8174;
  t8169 = -1.*t7531*t8145;
  t8170 = t7523*t7528*t8126;
  t8171 = t8169 + t8170;
  t8001 = -1.*t7624*t7565;
  t8002 = t7441*t7617*t7476;
  t8003 = t8001 + t7810 + t8002;
  t8005 = -1.*t7441*t7617*t7471;
  t8006 = t7624*t7476;
  t8007 = t7806 + t8005 + t8006;
  t8128 = Power(t7441,2);
  t7921 = t7624*t7565;
  t7922 = -1.*t7441*t7617*t7476;
  t8195 = -1.*t8121*t7565;
  t8196 = -1.*t7624*t8109;
  t8203 = t8121*t7476;
  t8201 = t8124*t8126*t7471;
  t8193 = -1.*t7528*t7630*t7565;
  t8197 = -1.*t8124*t8126*t7476;
  t8227 = t8149*t7478;
  t8231 = -1.*t7655*t8141;
  t8232 = -1.*t8149*t7569;
  t8180 = t7523*t7528*t7565;
  t8181 = -1.*t7531*t8156;
  t8182 = t8180 + t8181;
  t8053 = t7528*t7617;
  t8054 = t7849 + t8053;
  t8256 = -1.*t8124*t8126*t7471;
  t8272 = t7440*t7528*t8149;
  t8278 = -1.*t8149*t7478;
  t8297 = -0.28*t7442;
  t8298 = 0.0641*t7469;
  t8299 = t8297 + t8298;
  t8318 = t7449*t7606;
  t8319 = t7465*t8299;
  t8320 = t8318 + t8319;
  t8308 = t7440*t7471;
  t8309 = t7473*t7441*t8109;
  t8310 = t8308 + t8309;
  t8327 = t7473*t7471;
  t8328 = -1.*t7440*t7441*t8109;
  t8329 = t8327 + t8328;
  t8331 = t7523*t7528*t8109;
  t8332 = -1.*t7531*t8310;
  t8333 = t8331 + t8332;
  t8315 = -1.*t7449*t8299;
  t8316 = t7607 + t8315;
  t8321 = t8124*t8320*t7476;
  t8346 = -1.*t7440*t7441*t8320;
  t8347 = t7473*t8316;
  t8348 = t8346 + t8347;
  t8342 = t7473*t7441*t8320;
  t8343 = t7440*t8316;
  t8344 = t8342 + t8343;
  t8349 = -1.*t7440*t7528*t8348;
  t8353 = t8348*t7569;
  t8364 = t7523*t8344;
  t8365 = t7528*t7531*t8320;
  t8366 = t8364 + t8365;
  t8360 = -1.*t7531*t8344;
  t8361 = t7523*t7528*t8320;
  t8362 = t8360 + t8361;
  t8068 = t7441*t7617*t7471;
  t8069 = -1.*t7624*t7476;
  t8208 = t7615*t7471;
  t8209 = t8208 + t8006;
  t8215 = -1.*t7615*t7476;
  t8216 = t8001 + t8215;
  t8379 = -1.*t8316*t7565;
  t8384 = t7624*t7471;
  t8389 = t8316*t7476;
  t8385 = t8124*t8320*t7471;
  t8387 = t7528*t7630*t8109;
  t8380 = -1.*t8124*t8320*t7476;
  t8407 = t7655*t8329;
  t8410 = t8348*t7478;
  t8307 = t7528*t7531*t8109;
  t8311 = t7523*t8310;
  t8312 = t8307 + t8311;
  t8414 = -1.*t8348*t7569;
  t7542 = t7519*t7478;
  t7543 = -1.*t7422*t7537;
  t7544 = t7542 + t7543;
  t8444 = -1.*t8124*t8320*t7471;
  t8446 = -1.*t7528*t7630*t8109;
  t8460 = t7440*t7528*t8348;
  t8464 = -1.*t7655*t8329;
  t8467 = -1.*t8348*t7478;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t7422*t7478 - 1.*t7519*t7537)*var2[1] + t7544*var2[2];
  p_output1[10]=(-1.*t7422*t7440*t7528 - 1.*t7519*t7551)*var2[1] + (t7440*t7519*t7528 - 1.*t7422*t7551)*var2[2];
  p_output1[11]=(-1.*t7422*t7569 - 1.*t7519*t7578)*var2[1] + t7585*var2[2];
  p_output1[12]=t7537*var2[0] - 1.*t7422*t7590*var2[1] + t7519*t7590*var2[2] + ((-1.*t7597*t7632 - 1.*t7632*t7636 - 1.*t7551*t7640 - 1.*t7551*t7644)*t7649 + t7578*t7657 + t7551*t7662 + t7636*(t7578*t7640 + t7578*t7644 + t7632*t7649 + t7632*t7666))*var2[3];
  p_output1[13]=t7551*var2[0] - 1.*t7422*t7597*var2[1] + t7519*t7597*var2[2] + ((-1.*t7578*t7640 - 1.*t7578*t7644 - 1.*t7632*t7649 - 1.*t7632*t7666)*t7682 + t7649*(t7590*t7632 + t7537*t7640 + t7537*t7644 + t7632*t7682) + t7578*t7685 + t7537*t7696)*var2[3];
  p_output1[14]=t7578*var2[0] - 1.*t7422*t7666*var2[1] + t7519*t7666*var2[2] + ((t7597*t7632 + t7632*t7636 + t7551*t7640 + t7551*t7644)*t7682 + t7636*(-1.*t7590*t7632 - 1.*t7537*t7640 - 1.*t7537*t7644 - 1.*t7632*t7682) + t7537*t7719 + t7551*t7724)*var2[3];
  p_output1[15]=t7523*t7737*var2[0] + (t7519*t7534 + t7422*t7531*t7737)*var2[1] + (t7422*t7534 - 1.*t7519*t7531*t7737)*var2[2] + (-1.*t7440*t7523*t7528*t7662 + t7649*(-1.*t7440*t7528*t7626 - 1.*t7440*t7528*t7531*t7632 + t7440*t7523*t7528*t7644 + t7531*t7551*t7749 - 1.*t7523*t7636*t7749 + t7751) + t7523*t7657*t7765 + t7636*(-1.*t7531*t7578*t7749 + t7523*t7649*t7749 + t7762 - 1.*t7531*t7632*t7765 + t7523*t7644*t7765 + t7768))*var2[3] + (t7569*(t7473*t7528*t7749 + t7751) + t7575*t7756 - 1.*t7473*t7528*t7760 + t7440*t7528*(t7575*t7749 + t7762 + t7626*t7765 + t7768))*var2[4];
  p_output1[16]=-1.*t7440*t7523*t7528*var2[0] + (-1.*t7473*t7519*t7528 - 1.*t7422*t7440*t7528*t7531)*var2[1] + (-1.*t7422*t7473*t7528 + t7440*t7519*t7528*t7531)*var2[2] + (t7523*t7696*t7737 + t7523*t7685*t7765 + t7649*(-1.*t7531*t7632*t7737 + t7523*t7644*t7737 - 1.*t7531*t7537*t7749 + t7523*t7682*t7749 + t7801 + t7803) + t7682*(t7531*t7578*t7749 - 1.*t7523*t7649*t7749 + t7531*t7632*t7765 - 1.*t7523*t7644*t7765 + t7814 + t7817))*var2[3] + (t7569*(t7626*t7737 + t7534*t7749 + t7801 + t7803) + t7575*t7808 + t7534*t7812 + t7478*(-1.*t7575*t7749 - 1.*t7626*t7765 + t7814 + t7817))*var2[4];
  p_output1[17]=t7523*t7765*var2[0] + (t7519*t7575 + t7422*t7531*t7765)*var2[1] + (t7422*t7575 - 1.*t7519*t7531*t7765)*var2[2] + (-1.*t7440*t7523*t7528*t7724 + t7523*t7719*t7737 + t7682*(t7440*t7528*t7626 + t7440*t7528*t7531*t7632 - 1.*t7440*t7523*t7528*t7644 - 1.*t7531*t7551*t7749 + t7523*t7636*t7749 + t7853) + t7636*(t7531*t7632*t7737 - 1.*t7523*t7644*t7737 + t7531*t7537*t7749 - 1.*t7523*t7682*t7749 + t7857 + t7859))*var2[3] + (t7534*t7850 + t7478*(-1.*t7473*t7528*t7749 + t7853) + t7440*t7528*(-1.*t7626*t7737 - 1.*t7534*t7749 + t7857 + t7859) - 1.*t7473*t7528*t7864)*var2[4];
  p_output1[18]=t7888*var2[0] + (-1.*t7440*t7471*t7519*t7528 - 1.*t7422*t7893)*var2[1] + (-1.*t7422*t7440*t7471*t7528 + t7519*t7893)*var2[2] + (t7657*t7947 + t7662*t7955 + t7649*(t7929 + t7931 - 1.*t7632*t7951 - 1.*t7644*t7955 - 1.*t7551*t7959 - 1.*t7636*t7963) + t7636*(t7938 + t7939 + t7644*t7947 + t7578*t7959 + t7649*t7963 + t7632*t7970))*var2[3] + (-1.*t7440*t7476*t7528*t7756 - 1.*t7440*t7441*t7760 + t7569*(-1.*t7441*t7473*t7626 + t7908 + t7911 + t7929 + t7931 - 1.*t7528*t7906*t7932) + t7440*t7528*(t7473*t7476*t7528*t7626 - 1.*t7473*t7575*t7906 + t7916 + t7917 + t7938 + t7939))*var2[4] + (-1.*t7441*t7476*t7902 + t7476*t7528*(t7441*t7617 - 1.*t7528*t7906 + t7908 + t7911) + t7441*(-1.*t7476*t7528*t7617 - 1.*t7441*t7476*t7906 + t7916 + t7917) + t7528*(t7758 + t7921 + t7922))*var2[5];
  p_output1[19]=t7955*var2[0] + (-1.*t7440*t7441*t7519 - 1.*t7422*t7951)*var2[1] + (-1.*t7422*t7440*t7441 + t7519*t7951)*var2[2] + (t7696*t7888 + t7685*t7947 + t7649*(t7644*t7888 + t7632*t7893 + t7537*t7959 + t7682*t7963 + t8013 + t8015) + t7682*(-1.*t7644*t7947 - 1.*t7578*t7959 - 1.*t7649*t7963 - 1.*t7632*t7970 + t8020 + t8021))*var2[3] + (-1.*t7440*t7476*t7528*t7808 - 1.*t7440*t7471*t7528*t7812 + t7569*(t7471*t7473*t7528*t7626 - 1.*t7473*t7534*t7906 + t7990 + t7991 + t8013 + t8015) + t7478*(-1.*t7473*t7476*t7528*t7626 + t7473*t7575*t7906 + t7996 + t7997 + t8020 + t8021))*var2[4] + (t7476*t7528*(-1.*t7471*t7528*t7617 - 1.*t7441*t7471*t7906 + t7990 + t7991) + t7471*t7528*(t7476*t7528*t7617 + t7441*t7476*t7906 + t7996 + t7997) - 1.*t7441*t7471*t8003 - 1.*t7441*t7476*t8007)*var2[5];
  p_output1[20]=t7947*var2[0] + (-1.*t7440*t7476*t7519*t7528 - 1.*t7422*t7970)*var2[1] + (-1.*t7422*t7440*t7476*t7528 + t7519*t7970)*var2[2] + (t7719*t7888 + t7724*t7955 + t7682*(t7632*t7951 + t7644*t7955 + t7551*t7959 + t7636*t7963 + t8076 + t8077) + t7636*(-1.*t7644*t7888 - 1.*t7632*t7893 - 1.*t7537*t7959 - 1.*t7682*t7963 + t8083 + t8085))*var2[3] + (-1.*t7440*t7471*t7528*t7850 - 1.*t7440*t7441*t7864 + t7478*(t7441*t7473*t7626 + t7528*t7906*t7932 + t8057 + t8058 + t8076 + t8077) + t7440*t7528*(-1.*t7471*t7473*t7528*t7626 + t7473*t7534*t7906 + t8063 + t8064 + t8083 + t8085))*var2[4] + (-1.*t7441*t7471*t8054 + t7471*t7528*(-1.*t7441*t7617 + t7528*t7906 + t8057 + t8058) + t7441*(t7471*t7528*t7617 + t7441*t7471*t7906 + t8063 + t8064) + t7528*(t7862 + t8068 + t8069))*var2[5];
  p_output1[21]=t7649*var2[0] + t7585*var2[1] + (t7422*t7569 + t7519*t7578)*var2[2] + (t7657*t8167 + t7649*(t8150 - 1.*t7551*t8171 - 1.*t7636*t8175) + t7636*(t8158 + t8159 + t7644*t8167 + t7578*t8171 + t7649*t8175 + t7632*t8182))*var2[3] + (t7756*t8141 + t7569*(-1.*t7441*t7528*t8126 + t7473*t7528*t8145 + t8150) + t7440*t7528*(t8116 + t8127 + t7575*t8145 + t7626*t8156 + t8158 + t8159))*var2[4] + (t7528*t7565*t7902 + t7441*(-1.*t7441*t7565*t7617 + t7624*t8109 + t8116 + t7565*t8121 + t8127 + t7476*t8126*t8128))*var2[5] + (-0.1575*t7476 - 0.2255*t8109)*var2[6];
  p_output1[22]=(t7649*t7696 + t7685*t8167 + t7649*(t7659 + t7660 + t7661 + t7537*t8171 + t7682*t8175 + t8227) + t7682*(-1.*t7644*t8167 - 1.*t7578*t8171 - 1.*t7649*t8175 - 1.*t7632*t8182 + t8231 + t8232))*var2[3] + (t7569*t7812 + t7808*t8141 + t7569*(t7659 + t7758 + t7759 + t7534*t8145 + t8201 + t8227) + t7478*(-1.*t7575*t8145 - 1.*t7626*t8156 + t8193 + t8197 + t8231 + t8232))*var2[4] + (t7476*t7528*t8003 + t7528*t7565*t8007 + t7471*t7528*(t7441*t7565*t7617 - 1.*t7476*t8126*t8128 + t8193 + t8195 + t8196 + t8197) + t7476*t7528*(t7758 + t7921 + t7922 + t7471*t8126*t8128 + t8201 + t8203))*var2[5] + (t7476*(-1.*t7565*t7615 - 1.*t7476*t8126 + t8195 + t8196) + t7565*(t7476*t7615 + t7921 + t7471*t8126 + t8203) + t8109*t8209 + t7565*t8216)*var2[6];
  p_output1[23]=t8167*var2[0] + (t7519*t8141 - 1.*t7422*t8182)*var2[1] + (t7422*t8141 + t7519*t8182)*var2[2] + (t7649*t7719 + t7682*(t7551*t8171 + t7636*t8175 + t8272) + t7636*(t7693 + t7694 + t7695 - 1.*t7537*t8171 - 1.*t7682*t8175 + t8278))*var2[3] + (t7569*t7850 + t7478*(t7441*t7528*t8126 - 1.*t7473*t7528*t8145 + t8272) + t7440*t7528*(t7693 + t7810 + t7811 - 1.*t7534*t8145 + t8256 + t8278))*var2[4] + (t7476*t7528*t8054 + t7441*(t7810 + t8001 + t8002 - 1.*t7476*t8121 - 1.*t7471*t8126*t8128 + t8256))*var2[5] + 0.068*t7565*var2[6];
  p_output1[24]=t8312*var2[0] + (t7519*t8329 - 1.*t7422*t8333)*var2[1] + (t7422*t8329 + t7519*t8333)*var2[2] + (t7657*t7682 + t7649*(t8349 - 1.*t7551*t8362 - 1.*t7636*t8366) + t7636*(t7679 + t7683 + t7684 + t8353 + t7578*t8362 + t7649*t8366))*var2[3] + (t7478*t7756 + t7569*(-1.*t7441*t7528*t8320 + t7473*t7528*t8344 + t8349) + t7440*t7528*(t7679 + t7806 + t7807 + t8321 + t7575*t8344 + t8353))*var2[4] + (t7471*t7528*t7902 + t7441*(t7806 + t8005 + t8006 + t7565*t8316 + t7476*t8128*t8320 + t8321))*var2[5] + (-0.2255*t7476 - 0.1575*t8109)*var2[6] + (0.325*t7442 - 1.*t7442*t7613 - 1.*t7442*t8299)*var2[7];
  p_output1[25]=(t7682*t7685 + t7696*t8312 + t7649*(t7644*t8312 + t7632*t8333 + t7537*t8362 + t7682*t8366 + t8407 + t8410) + t7682*(t7721 + t7722 + t7723 - 1.*t7578*t8362 - 1.*t7649*t8366 + t8414))*var2[3] + (t7478*t7808 + t7812*t8329 + t7569*(t7626*t8310 + t7534*t8344 + t8385 + t8387 + t8407 + t8410) + t7478*(t7721 + t7862 + t7863 - 1.*t7575*t8344 + t8380 + t8414))*var2[4] + (t7471*t7528*t8007 + t7528*t8003*t8109 + t7471*t7528*(t7862 + t8068 + t8069 - 1.*t7476*t8128*t8320 + t8379 + t8380) + t7476*t7528*(-1.*t7441*t7617*t8109 + t7471*t8128*t8320 + t8384 + t8385 + t8387 + t8389))*var2[5] + (t7476*t8209 + t7471*t8216 + t7476*(-1.*t7471*t7615 + t8069 - 1.*t7476*t8320 + t8379) + t7565*(t7615*t8109 + t7471*t8320 + t8384 + t8389))*var2[6];
  p_output1[26]=t7682*var2[0] + t7544*var2[1] + (t7422*t7478 + t7519*t7537)*var2[2] + (t7719*t8312 + t7682*(t7551*t8362 + t7636*t8366 + t8460) + t7636*(-1.*t7644*t8312 - 1.*t7632*t8333 - 1.*t7537*t8362 - 1.*t7682*t8366 + t8464 + t8467))*var2[3] + (t7850*t8329 + t7478*(t7441*t7528*t8320 - 1.*t7473*t7528*t8344 + t8460) + t7440*t7528*(-1.*t7626*t8310 - 1.*t7534*t8344 + t8444 + t8446 + t8464 + t8467))*var2[4] + (t7528*t8054*t8109 + t7441*(-1.*t7471*t7624 + t7441*t7617*t8109 - 1.*t7476*t8316 - 1.*t7471*t8128*t8320 + t8444 + t8446))*var2[5] + 0.068*t7471*var2[6] + (0.325*t7469 - 1.*t7469*t7613 - 1.*t7469*t8299)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
