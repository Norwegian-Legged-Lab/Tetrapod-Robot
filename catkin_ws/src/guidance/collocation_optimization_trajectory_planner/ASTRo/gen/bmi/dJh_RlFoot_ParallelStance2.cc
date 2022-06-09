/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:04 GMT+02:00
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
  double t7380;
  double t7381;
  double t7387;
  double t7388;
  double t7396;
  double t7415;
  double t7416;
  double t7421;
  double t7339;
  double t7379;
  double t7426;
  double t7433;
  double t7420;
  double t7427;
  double t7429;
  double t7269;
  double t7434;
  double t7435;
  double t7487;
  double t7491;
  double t7492;
  double t7493;
  double t7495;
  double t7496;
  double t7497;
  double t7499;
  double t7500;
  double t7512;
  double t7514;
  double t7515;
  double t7517;
  double t7519;
  double t7520;
  double t7531;
  double t7532;
  double t7533;
  double t7536;
  double t7537;
  double t7539;
  double t7540;
  double t7541;
  double t7542;
  double t7543;
  double t7544;
  double t7554;
  double t7572;
  double t7580;
  double t7581;
  double t7594;
  double t7598;
  double t7602;
  double t7603;
  double t7604;
  double t7609;
  double t7610;
  double t7612;
  double t7615;
  double t7617;
  double t7619;
  double t7620;
  double t7623;
  double t7593;
  double t7605;
  double t7606;
  double t7607;
  double t7611;
  double t7625;
  double t7627;
  double t7628;
  double t7629;
  double t7630;
  double t7634;
  double t7636;
  double t7638;
  double t7639;
  double t7640;
  double t7644;
  double t7645;
  double t7646;
  double t7608;
  double t7641;
  double t7642;
  double t7660;
  double t7661;
  double t7663;
  double t7590;
  double t7591;
  double t7592;
  double t7653;
  double t7654;
  double t7655;
  double t7669;
  double t7670;
  double t7671;
  double t7694;
  double t7695;
  double t7696;
  double t7771;
  double t7775;
  double t7779;
  double t7657;
  double t7798;
  double t7799;
  double t7801;
  double t7676;
  double t7814;
  double t7815;
  double t7816;
  double t7659;
  double t7664;
  double t7665;
  double t7803;
  double t7809;
  double t7804;
  double t7805;
  double t7806;
  double t7813;
  double t7818;
  double t7677;
  double t7678;
  double t7679;
  double t7704;
  double t7717;
  double t7859;
  double t7861;
  double t7869;
  double t7871;
  double t7706;
  double t7708;
  double t7709;
  double t7718;
  double t7719;
  double t7720;
  double t7732;
  double t7756;
  double t7733;
  double t7734;
  double t7735;
  double t7828;
  double t7831;
  double t7912;
  double t7914;
  double t7918;
  double t7920;
  double t7757;
  double t7760;
  double t7762;
  double t7780;
  double t7781;
  double t7785;
  double t7786;
  double t7787;
  double t7788;
  double t7792;
  double t7793;
  double t7794;
  double t7795;
  double t7796;
  double t7797;
  double t7949;
  double t7950;
  double t7951;
  double t7947;
  double t7808;
  double t7956;
  double t7957;
  double t7958;
  double t7960;
  double t7961;
  double t7962;
  double t7817;
  double t7821;
  double t7822;
  double t7823;
  double t7824;
  double t7827;
  double t7963;
  double t7834;
  double t7836;
  double t7967;
  double t7841;
  double t7842;
  double t7845;
  double t7849;
  double t7850;
  double t7851;
  double t7852;
  double t7853;
  double t7854;
  double t7855;
  double t7856;
  double t7857;
  double t7860;
  double t7864;
  double t7865;
  double t7866;
  double t7867;
  double t7870;
  double t7875;
  double t7876;
  double t7877;
  double t7879;
  double t7998;
  double t7884;
  double t7885;
  double t8002;
  double t7890;
  double t7891;
  double t7894;
  double t7895;
  double t7899;
  double t7900;
  double t7901;
  double t7902;
  double t7903;
  double t7904;
  double t7905;
  double t7906;
  double t7907;
  double t7908;
  double t7909;
  double t7910;
  double t7913;
  double t7919;
  double t7923;
  double t7924;
  double t7925;
  double t7926;
  double t7929;
  double t8025;
  double t7932;
  double t7933;
  double t8029;
  double t7938;
  double t7939;
  double t7942;
  double t8045;
  double t8046;
  double t8047;
  double t8057;
  double t8058;
  double t8059;
  double t8063;
  double t8064;
  double t8065;
  double t8067;
  double t8068;
  double t8069;
  double t8077;
  double t8078;
  double t8079;
  double t8080;
  double t8081;
  double t8082;
  double t8083;
  double t8085;
  double t8086;
  double t8087;
  double t8084;
  double t8092;
  double t8093;
  double t8095;
  double t8101;
  double t8102;
  double t8103;
  double t8105;
  double t8106;
  double t8107;
  double t8122;
  double t8125;
  double t8138;
  double t8140;
  double t8133;
  double t8162;
  double t8164;
  double t8056;
  double t8060;
  double t8061;
  double t8169;
  double t7506;
  double t7508;
  double t7509;
  double t8201;
  double t8208;
  double t8210;
  double t8048;
  double t8049;
  double t8050;
  double t8051;
  double t8052;
  double t8053;
  double t8054;
  double t7567;
  double t7568;
  double t7569;
  double t8243;
  double t8244;
  double t8245;
  double t8246;
  double t8247;
  double t8249;
  double t8250;
  double t8251;
  double t8255;
  double t8256;
  double t8257;
  double t8248;
  double t8260;
  double t8261;
  double t8262;
  double t8267;
  double t8268;
  double t8269;
  double t8264;
  double t8266;
  double t8275;
  double t8276;
  double t8277;
  double t8279;
  double t8280;
  double t8281;
  double t8285;
  double t8286;
  double t8287;
  double t8119;
  double t8120;
  double t8128;
  double t8129;
  double t8146;
  double t8147;
  double t8148;
  double t8304;
  double t8156;
  double t8157;
  double t8158;
  double t8308;
  double t8310;
  double t8333;
  double t8338;
  double t8340;
  double t8292;
  double t8293;
  double t8294;
  double t8191;
  double t8192;
  double t8193;
  double t8376;
  double t8382;
  t7380 = Cos(var1[10]);
  t7381 = Cos(var1[11]);
  t7387 = -1.*t7380*t7381;
  t7388 = Sin(var1[10]);
  t7396 = Sin(var1[11]);
  t7415 = -1.*t7388*t7396;
  t7416 = t7387 + t7415;
  t7421 = Cos(var1[9]);
  t7339 = Cos(var1[5]);
  t7379 = Sin(var1[9]);
  t7426 = Sin(var1[5]);
  t7433 = Cos(var1[3]);
  t7420 = t7339*t7379*t7416;
  t7427 = t7421*t7416*t7426;
  t7429 = t7420 + t7427;
  t7269 = Sin(var1[3]);
  t7434 = Cos(var1[4]);
  t7435 = -1.*t7381*t7388;
  t7487 = t7380*t7396;
  t7491 = t7435 + t7487;
  t7492 = t7434*t7491;
  t7493 = Sin(var1[4]);
  t7495 = t7421*t7339*t7416;
  t7496 = -1.*t7379*t7416*t7426;
  t7497 = t7495 + t7496;
  t7499 = -1.*t7493*t7497;
  t7500 = t7492 + t7499;
  t7512 = t7339*t7379;
  t7514 = t7421*t7426;
  t7515 = t7512 + t7514;
  t7517 = -1.*t7421*t7339;
  t7519 = t7379*t7426;
  t7520 = t7517 + t7519;
  t7531 = t7339*t7379*t7491;
  t7532 = t7421*t7491*t7426;
  t7533 = t7531 + t7532;
  t7536 = t7380*t7381;
  t7537 = t7388*t7396;
  t7539 = t7536 + t7537;
  t7540 = t7434*t7539;
  t7541 = t7421*t7339*t7491;
  t7542 = -1.*t7379*t7491*t7426;
  t7543 = t7541 + t7542;
  t7544 = -1.*t7493*t7543;
  t7554 = t7540 + t7544;
  t7572 = -1.*t7491*t7493;
  t7580 = -1.*t7434*t7497;
  t7581 = t7572 + t7580;
  t7594 = -1.*t7381;
  t7598 = 1. + t7594;
  t7602 = -0.50321*t7598;
  t7603 = -0.19821*t7381;
  t7604 = t7602 + t7603;
  t7609 = -1.*t7421;
  t7610 = 1. + t7609;
  t7612 = -1.*t7380;
  t7615 = 1. + t7612;
  t7617 = -0.28121*t7615;
  t7619 = t7380*t7604;
  t7620 = 0.305*t7388*t7396;
  t7623 = t7617 + t7619 + t7620;
  t7593 = 0.28121*t7388;
  t7605 = t7604*t7388;
  t7606 = -0.305*t7380*t7396;
  t7607 = t7593 + t7605 + t7606;
  t7611 = -0.15121*t7610;
  t7625 = t7421*t7623;
  t7627 = t7611 + t7625;
  t7628 = t7339*t7627;
  t7629 = 0.15121*t7610;
  t7630 = 0.15121*t7421;
  t7634 = 0.15121*t7379;
  t7636 = t7379*t7623;
  t7638 = t7629 + t7630 + t7634 + t7636;
  t7639 = -1.*t7638*t7426;
  t7640 = t7628 + t7639;
  t7644 = t7607*t7493;
  t7645 = t7434*t7640;
  t7646 = t7644 + t7645;
  t7608 = -1.*t7607*t7493;
  t7641 = -1.*t7434*t7640;
  t7642 = t7608 + t7641;
  t7660 = t7434*t7607;
  t7661 = -1.*t7493*t7640;
  t7663 = t7660 + t7661;
  t7590 = t7539*t7493;
  t7591 = t7434*t7543;
  t7592 = t7590 + t7591;
  t7653 = t7339*t7638;
  t7654 = t7627*t7426;
  t7655 = t7653 + t7654;
  t7669 = -1.*t7539*t7493;
  t7670 = -1.*t7434*t7543;
  t7671 = t7669 + t7670;
  t7694 = t7491*t7493;
  t7695 = t7434*t7497;
  t7696 = t7694 + t7695;
  t7771 = -1.*t7339*t7379*t7416;
  t7775 = -1.*t7421*t7416*t7426;
  t7779 = t7771 + t7775;
  t7657 = -1.*t7520*t7655;
  t7798 = -1.*t7339*t7638;
  t7799 = -1.*t7627*t7426;
  t7801 = t7798 + t7799;
  t7676 = t7533*t7655;
  t7814 = -1.*t7339*t7379*t7491;
  t7815 = -1.*t7421*t7491*t7426;
  t7816 = t7814 + t7815;
  t7659 = -1.*t7434*t7515*t7646;
  t7664 = t7493*t7515*t7663;
  t7665 = t7657 + t7659 + t7664;
  t7803 = -1.*t7515*t7655;
  t7809 = -1.*t7520*t7640;
  t7804 = t7421*t7339;
  t7805 = -1.*t7379*t7426;
  t7806 = t7804 + t7805;
  t7813 = t7543*t7655;
  t7818 = t7533*t7640;
  t7677 = t7592*t7646;
  t7678 = t7554*t7663;
  t7679 = t7676 + t7677 + t7678;
  t7704 = -1.*t7533*t7655;
  t7717 = t7429*t7655;
  t7859 = -1.*t7543*t7655;
  t7861 = -1.*t7533*t7640;
  t7869 = t7497*t7655;
  t7871 = t7429*t7640;
  t7706 = -1.*t7592*t7646;
  t7708 = -1.*t7554*t7663;
  t7709 = t7704 + t7706 + t7708;
  t7718 = t7696*t7646;
  t7719 = t7500*t7663;
  t7720 = t7717 + t7718 + t7719;
  t7732 = t7520*t7655;
  t7756 = -1.*t7429*t7655;
  t7733 = t7434*t7515*t7646;
  t7734 = -1.*t7493*t7515*t7663;
  t7735 = t7732 + t7733 + t7734;
  t7828 = Power(t7434,2);
  t7831 = Power(t7493,2);
  t7912 = t7515*t7655;
  t7914 = t7520*t7640;
  t7918 = -1.*t7497*t7655;
  t7920 = -1.*t7429*t7640;
  t7757 = -1.*t7696*t7646;
  t7760 = -1.*t7500*t7663;
  t7762 = t7756 + t7757 + t7760;
  t7780 = var2[0]*t7434*t7779;
  t7781 = t7269*t7493*t7779;
  t7785 = t7433*t7497;
  t7786 = t7781 + t7785;
  t7787 = var2[1]*t7786;
  t7788 = -1.*t7433*t7493*t7779;
  t7792 = t7269*t7497;
  t7793 = t7788 + t7792;
  t7794 = var2[2]*t7793;
  t7795 = -1.*t7515*t7640;
  t7796 = t7657 + t7795;
  t7797 = t7543*t7796;
  t7949 = -0.15121*t7379;
  t7950 = -1.*t7379*t7623;
  t7951 = t7949 + t7950;
  t7947 = t7630 + t7625;
  t7808 = -1.*t7806*t7640;
  t7956 = t7339*t7951;
  t7957 = -1.*t7947*t7426;
  t7958 = t7956 + t7957;
  t7960 = t7339*t7947;
  t7961 = t7951*t7426;
  t7962 = t7960 + t7961;
  t7817 = t7816*t7640;
  t7821 = t7607*t7539;
  t7822 = t7543*t7640;
  t7823 = t7821 + t7676 + t7822;
  t7824 = t7515*t7823;
  t7827 = t7434*t7816*t7665;
  t7963 = -1.*t7520*t7962;
  t7834 = -1.*t7434*t7806*t7646;
  t7836 = t7493*t7806*t7663;
  t7967 = t7533*t7962;
  t7841 = t7434*t7816*t7646;
  t7842 = -1.*t7493*t7816*t7663;
  t7845 = t7434*t7806*t7679;
  t7849 = var2[0]*t7434*t7806;
  t7850 = t7269*t7515;
  t7851 = -1.*t7433*t7493*t7806;
  t7852 = t7850 + t7851;
  t7853 = var2[2]*t7852;
  t7854 = t7433*t7515;
  t7855 = t7269*t7493*t7806;
  t7856 = t7854 + t7855;
  t7857 = var2[1]*t7856;
  t7860 = -1.*t7816*t7640;
  t7864 = -1.*t7607*t7539;
  t7865 = -1.*t7543*t7640;
  t7866 = t7864 + t7704 + t7865;
  t7867 = t7497*t7866;
  t7870 = t7779*t7640;
  t7875 = t7607*t7491;
  t7876 = t7497*t7640;
  t7877 = t7875 + t7717 + t7876;
  t7879 = t7543*t7877;
  t7998 = -1.*t7533*t7962;
  t7884 = -1.*t7434*t7816*t7646;
  t7885 = t7493*t7816*t7663;
  t8002 = t7429*t7962;
  t7890 = t7434*t7779*t7646;
  t7891 = -1.*t7493*t7779*t7663;
  t7894 = t7434*t7779*t7709;
  t7895 = t7434*t7816*t7720;
  t7899 = var2[0]*t7434*t7816;
  t7900 = t7269*t7493*t7816;
  t7901 = t7433*t7543;
  t7902 = t7900 + t7901;
  t7903 = var2[1]*t7902;
  t7904 = -1.*t7433*t7493*t7816;
  t7905 = t7269*t7543;
  t7906 = t7904 + t7905;
  t7907 = var2[2]*t7906;
  t7908 = t7515*t7640;
  t7909 = t7732 + t7908;
  t7910 = t7497*t7909;
  t7913 = t7806*t7640;
  t7919 = -1.*t7779*t7640;
  t7923 = -1.*t7607*t7491;
  t7924 = -1.*t7497*t7640;
  t7925 = t7923 + t7756 + t7924;
  t7926 = t7515*t7925;
  t7929 = t7434*t7779*t7735;
  t8025 = t7520*t7962;
  t7932 = t7434*t7806*t7646;
  t7933 = -1.*t7493*t7806*t7663;
  t8029 = -1.*t7429*t7962;
  t7938 = -1.*t7434*t7779*t7646;
  t7939 = t7493*t7779*t7663;
  t7942 = t7434*t7806*t7762;
  t8045 = t7381*t7388;
  t8046 = -1.*t7380*t7396;
  t8047 = t8045 + t8046;
  t8057 = t7421*t7339*t8047;
  t8058 = -1.*t7379*t8047*t7426;
  t8059 = t8057 + t8058;
  t8063 = t7339*t7379*t8047;
  t8064 = t7421*t8047*t7426;
  t8065 = t8063 + t8064;
  t8067 = t7434*t7416;
  t8068 = -1.*t7493*t8059;
  t8069 = t8067 + t8068;
  t8077 = -0.28121*t7388;
  t8078 = -1.*t7604*t7388;
  t8079 = 0.305*t7380*t7396;
  t8080 = t8077 + t8078 + t8079;
  t8081 = t7339*t7379*t8080;
  t8082 = t7421*t8080*t7426;
  t8083 = t8081 + t8082;
  t8085 = t7421*t7339*t8080;
  t8086 = -1.*t7379*t8080*t7426;
  t8087 = t8085 + t8086;
  t8084 = -1.*t7520*t8083;
  t8092 = 0.28121*t7380;
  t8093 = t8092 + t7619 + t7620;
  t8095 = t8083*t7533;
  t8101 = t8093*t7493;
  t8102 = t7434*t8087;
  t8103 = t8101 + t8102;
  t8105 = t7434*t8093;
  t8106 = -1.*t7493*t8087;
  t8107 = t8105 + t8106;
  t8122 = t7607*t7416;
  t8125 = t7491*t8093;
  t8138 = Power(t7421,2);
  t8140 = Power(t7379,2);
  t8133 = -1.*t8093*t7539;
  t8162 = t8083*t7429;
  t8164 = t8065*t7655;
  t8056 = t7416*t7493;
  t8060 = t7434*t8059;
  t8061 = t8056 + t8060;
  t8169 = -1.*t8083*t7533;
  t7506 = t7433*t7429;
  t7508 = -1.*t7269*t7500;
  t7509 = t7506 + t7508;
  t8201 = t7520*t8083;
  t8208 = -1.*t8083*t7429;
  t8210 = -1.*t8065*t7655;
  t8048 = 0.15121*t8047;
  t8049 = 0.15121*t7491;
  t8050 = t8048 + t8049;
  t8051 = var2[9]*t8050;
  t8052 = -1.*t7379*t7627;
  t8053 = t7421*t7638;
  t8054 = t8052 + t8053;
  t7567 = t7433*t7533;
  t7568 = -1.*t7269*t7554;
  t7569 = t7567 + t7568;
  t8243 = 0.305*t7381*t7388;
  t8244 = t8243 + t7606;
  t8245 = t7339*t7379*t8244;
  t8246 = t7421*t8244*t7426;
  t8247 = t8245 + t8246;
  t8249 = t7421*t7339*t8244;
  t8250 = -1.*t7379*t8244*t7426;
  t8251 = t8249 + t8250;
  t8255 = t7339*t7379*t7539;
  t8256 = t7421*t7539*t7426;
  t8257 = t8255 + t8256;
  t8248 = -1.*t7520*t8247;
  t8260 = -0.305*t7380*t7381;
  t8261 = -0.305*t7388*t7396;
  t8262 = t8260 + t8261;
  t8267 = t7421*t7339*t7539;
  t8268 = -1.*t7379*t7539*t7426;
  t8269 = t8267 + t8268;
  t8264 = t8247*t7533;
  t8266 = t8257*t7655;
  t8275 = t8262*t7493;
  t8276 = t7434*t8251;
  t8277 = t8275 + t8276;
  t8279 = t7434*t8262;
  t8280 = -1.*t7493*t8251;
  t8281 = t8279 + t8280;
  t8285 = t8047*t7493;
  t8286 = t7434*t8269;
  t8287 = t8285 + t8286;
  t8119 = t7416*t7623;
  t8120 = t7875 + t8119;
  t8128 = -1.*t7491*t7623;
  t8129 = t8128 + t7864;
  t8146 = -1.*t7421*t7491*t7627;
  t8147 = -1.*t7379*t7491*t7638;
  t8148 = t7864 + t8146 + t8147;
  t8304 = t7491*t8262;
  t8156 = t7421*t7416*t7627;
  t8157 = t7379*t7416*t7638;
  t8158 = t7875 + t8156 + t8157;
  t8308 = -1.*t8047*t7607;
  t8310 = -1.*t8262*t7539;
  t8333 = t8247*t7429;
  t8338 = -1.*t8247*t7533;
  t8340 = -1.*t8257*t7655;
  t8292 = t7434*t8047;
  t8293 = -1.*t7493*t8269;
  t8294 = t8292 + t8293;
  t8191 = t7379*t7627;
  t8192 = -1.*t7421*t7638;
  t8193 = t8191 + t8192;
  t8376 = t7520*t8247;
  t8382 = -1.*t8247*t7429;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t7269*t7429 - 1.*t7433*t7500)*var2[1] + t7509*var2[2];
  p_output1[10]=(t7433*t7493*t7515 - 1.*t7269*t7520)*var2[1] + (t7269*t7493*t7515 + t7433*t7520)*var2[2];
  p_output1[11]=(-1.*t7269*t7533 - 1.*t7433*t7554)*var2[1] + t7569*var2[2];
  p_output1[12]=t7500*var2[0] - 1.*t7269*t7581*var2[1] + t7433*t7581*var2[2] + (t7592*(t7493*t7515*t7642 + t7493*t7515*t7646) + t7554*t7665 + t7434*t7515*(t7554*t7642 + t7554*t7646 + t7592*t7663 + t7663*t7671) - 1.*t7493*t7515*t7679)*var2[3];
  p_output1[13]=-1.*t7493*t7515*var2[0] + t7269*t7434*t7515*var2[1] - 1.*t7433*t7434*t7515*var2[2] + ((-1.*t7554*t7642 - 1.*t7554*t7646 - 1.*t7592*t7663 - 1.*t7663*t7671)*t7696 + t7592*(t7500*t7642 + t7500*t7646 + t7581*t7663 + t7663*t7696) + t7500*t7709 + t7554*t7720)*var2[3];
  p_output1[14]=t7554*var2[0] - 1.*t7269*t7671*var2[1] + t7433*t7671*var2[2] + ((-1.*t7493*t7515*t7642 - 1.*t7493*t7515*t7646)*t7696 + t7434*t7515*(-1.*t7500*t7642 - 1.*t7500*t7646 - 1.*t7581*t7663 - 1.*t7663*t7696) + t7500*t7735 - 1.*t7493*t7515*t7762)*var2[3];
  p_output1[15]=t7780 + t7787 + t7794 + (t7827 + t7592*(t7803 + t7809 - 1.*t7515*t7801*t7828 - 1.*t7515*t7801*t7831 + t7834 + t7836) + t7434*t7515*(-1.*t7493*t7554*t7801 + t7434*t7592*t7801 + t7813 + t7818 + t7841 + t7842) + t7845)*var2[3] + (t7797 + t7533*(-1.*t7515*t7801 + t7803 + t7808 + t7809) + t7520*(t7543*t7801 + t7813 + t7817 + t7818) + t7824)*var2[4];
  p_output1[16]=t7849 + t7853 + t7857 + (t7696*(t7493*t7554*t7801 - 1.*t7434*t7592*t7801 + t7859 + t7861 + t7884 + t7885) + t7592*(-1.*t7493*t7500*t7801 + t7434*t7696*t7801 + t7869 + t7871 + t7890 + t7891) + t7894 + t7895)*var2[3] + (t7429*(-1.*t7543*t7801 + t7859 + t7860 + t7861) + t7867 + t7533*(t7497*t7801 + t7869 + t7870 + t7871) + t7879)*var2[4];
  p_output1[17]=t7899 + t7903 + t7907 + (t7929 + t7696*(t7515*t7801*t7828 + t7515*t7801*t7831 + t7912 + t7914 + t7932 + t7933) + t7434*t7515*(t7493*t7500*t7801 - 1.*t7434*t7696*t7801 + t7918 + t7920 + t7938 + t7939) + t7942)*var2[3] + (t7910 + t7429*(t7515*t7801 + t7912 + t7913 + t7914) + t7520*(-1.*t7497*t7801 + t7918 + t7919 + t7920) + t7926)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t7780 + t7787 + t7794 + (t7827 + t7845 + t7592*(t7803 + t7834 + t7836 - 1.*t7515*t7828*t7958 - 1.*t7515*t7831*t7958 + t7963) + t7434*t7515*(t7813 + t7841 + t7842 - 1.*t7493*t7554*t7958 + t7434*t7592*t7958 + t7967))*var2[3] + (t7797 + t7824 + t7533*(t7803 + t7808 - 1.*t7515*t7958 + t7963) + t7520*(t7813 + t7817 + t7543*t7958 + t7967))*var2[4] + t7539*(-1.*t7421*t7627 - 1.*t7379*t7638 + t7421*t7947 - 1.*t7379*t7951)*var2[5];
  p_output1[28]=t7849 + t7853 + t7857 + (t7894 + t7895 + t7696*(t7859 + t7884 + t7885 + t7493*t7554*t7958 - 1.*t7434*t7592*t7958 + t7998) + t7592*(t7869 + t7890 + t7891 - 1.*t7493*t7500*t7958 + t7434*t7696*t7958 + t8002))*var2[3] + (t7867 + t7879 + t7429*(t7859 + t7860 - 1.*t7543*t7958 + t7998) + t7533*(t7869 + t7870 + t7497*t7958 + t8002))*var2[4] + (t7539*(-1.*t7379*t7416*t7627 + t7416*t7421*t7638 + t7379*t7416*t7947 + t7416*t7421*t7951) + t7491*(t7379*t7491*t7627 - 1.*t7421*t7491*t7638 - 1.*t7379*t7491*t7947 - 1.*t7421*t7491*t7951))*var2[5];
  p_output1[29]=t7899 + t7903 + t7907 + (t7929 + t7942 + t7696*(t7912 + t7932 + t7933 + t7515*t7828*t7958 + t7515*t7831*t7958 + t8025) + t7434*t7515*(t7918 + t7938 + t7939 + t7493*t7500*t7958 - 1.*t7434*t7696*t7958 + t8029))*var2[3] + (t7910 + t7926 + t7429*(t7912 + t7913 + t7515*t7958 + t8025) + t7520*(t7918 + t7919 - 1.*t7497*t7958 + t8029))*var2[4] + t7491*(t7421*t7627 + t7379*t7638 - 1.*t7421*t7947 + t7379*t7951)*var2[5];
  p_output1[30]=t8051 + t8061*var2[0] + (t7433*t8065 - 1.*t7269*t8069)*var2[1] + (t7269*t8065 + t7433*t8069)*var2[2] + (t7665*t7696 + t7592*(t8084 - 1.*t7434*t7515*t8103 + t7493*t7515*t8107) + t7434*t7515*(t7717 + t7718 + t7719 + t8095 + t7592*t8103 + t7554*t8107))*var2[3] + (t7429*t7796 + t7533*(t8084 - 1.*t7515*t8087) + t7520*(t7717 + t7875 + t7876 + t7543*t8087 + t7539*t8093 + t8095))*var2[4] + t7491*t8054*var2[5];
  p_output1[31]=(t7696*t7720 + t7709*t8061 + t7592*(t7646*t8061 + t7663*t8069 + t7696*t8103 + t7500*t8107 + t8162 + t8164) + t7696*(t7756 + t7757 + t7760 - 1.*t7592*t8103 - 1.*t7554*t8107 + t8169))*var2[3] + (t7429*t7877 + t7866*t8065 + t7533*(t7640*t8059 + t7497*t8087 + t8122 + t8125 + t8162 + t8164) + t7429*(t7756 + t7923 + t7924 - 1.*t7543*t8087 + t8133 + t8169))*var2[4] + (t7539*(t7421*t7627*t8047 + t7379*t7638*t8047 + t8122 + t8125 + t7416*t8080*t8138 + t7416*t8080*t8140) + t7491*(-1.*t7416*t7421*t7627 - 1.*t7379*t7416*t7638 + t7923 + t8133 - 1.*t7491*t8080*t8138 - 1.*t7491*t8080*t8140) + t7416*t8148 + t7491*t8158)*var2[5] + (t7491*t8120 + t7539*(t7623*t8047 + t7416*t8080 + t8122 + t8125) + t7416*t8129 + t7491*(-1.*t7416*t7623 + t7923 - 1.*t7491*t8080 + t8133))*var2[9];
  p_output1[32]=t7696*var2[0] + t7509*var2[1] + (t7269*t7429 + t7433*t7500)*var2[2] + (t7735*t8061 + t7696*(t7434*t7515*t8103 - 1.*t7493*t7515*t8107 + t8201) + t7434*t7515*(-1.*t7646*t8061 - 1.*t7663*t8069 - 1.*t7696*t8103 - 1.*t7500*t8107 + t8208 + t8210))*var2[3] + (t7909*t8065 + t7429*(t7515*t8087 + t8201) + t7520*(-1.*t7416*t7607 - 1.*t7640*t8059 - 1.*t7497*t8087 - 1.*t7491*t8093 + t8208 + t8210))*var2[4] + t7416*t8193*var2[5];
  p_output1[33]=t8051 + t7592*var2[0] + t7569*var2[1] + (t7269*t7533 + t7433*t7554)*var2[2] + (t7592*(t8248 - 1.*t7434*t7515*t8277 + t7493*t7515*t8281) + t7665*t8287 + t7434*t7515*(t8264 + t8266 + t7592*t8277 + t7554*t8281 + t7646*t8287 + t7663*t8294))*var2[3] + (t7533*(t8248 - 1.*t7515*t8251) + t7796*t8257 + t7520*(t7607*t8047 + t7543*t8251 + t7539*t8262 + t8264 + t8266 + t7640*t8269))*var2[4] + t8047*t8054*var2[5] + (0.28121*t7381 - 0.305*Power(t7381,2) + t7381*t7604)*var2[10];
  p_output1[34]=(t7592*t7709 + t7720*t8287 + t7592*(t7676 + t7677 + t7678 + t7696*t8277 + t7500*t8281 + t8333) + t7696*(-1.*t7592*t8277 - 1.*t7554*t8281 - 1.*t7646*t8287 - 1.*t7663*t8294 + t8338 + t8340))*var2[3] + (t7533*t7866 + t7877*t8257 + t7533*(t7676 + t7821 + t7822 + t7497*t8251 + t8304 + t8333) + t7429*(-1.*t7543*t8251 - 1.*t7640*t8269 + t8308 + t8310 + t8338 + t8340))*var2[4] + (t7539*t8148 + t8047*t8158 + t7539*(t7421*t7491*t7627 + t7379*t7491*t7638 + t7821 + t7416*t8138*t8244 + t7416*t8140*t8244 + t8304) + t7491*(-1.*t7421*t7539*t7627 - 1.*t7379*t7539*t7638 - 1.*t7491*t8138*t8244 - 1.*t7491*t8140*t8244 + t8308 + t8310))*var2[5] + (t8047*t8120 + t7539*t8129 + t7539*(t7491*t7623 + t7821 + t7416*t8244 + t8304) + t7491*(-1.*t7539*t7623 - 1.*t7491*t8244 + t8308 + t8310))*var2[9];
  p_output1[35]=t8287*var2[0] + (t7433*t8257 - 1.*t7269*t8294)*var2[1] + (t7269*t8257 + t7433*t8294)*var2[2] + (t7592*t7735 + t7696*(t7434*t7515*t8277 - 1.*t7493*t7515*t8281 + t8376) + t7434*t7515*(t7704 + t7706 + t7708 - 1.*t7696*t8277 - 1.*t7500*t8281 + t8382))*var2[3] + (t7533*t7909 + t7429*(t7515*t8251 + t8376) + t7520*(t7704 + t7864 + t7865 - 1.*t7497*t8251 - 1.*t7491*t8262 + t8382))*var2[4] + t7539*t8193*var2[5] + (-0.28121*t7396 + 0.305*t7381*t7396 - 1.*t7396*t7604)*var2[10];
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

#include "dJh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
