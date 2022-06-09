/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:42 GMT+02:00
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
  double t7780;
  double t7750;
  double t7772;
  double t7784;
  double t7776;
  double t7785;
  double t7786;
  double t7745;
  double t7788;
  double t7789;
  double t7790;
  double t7746;
  double t7791;
  double t7843;
  double t7787;
  double t7792;
  double t7793;
  double t7731;
  double t7847;
  double t7851;
  double t7852;
  double t7855;
  double t7856;
  double t7858;
  double t7860;
  double t7861;
  double t7866;
  double t7878;
  double t7879;
  double t7880;
  double t7899;
  double t7900;
  double t7903;
  double t7898;
  double t7912;
  double t7913;
  double t7918;
  double t7919;
  double t7920;
  double t7923;
  double t7925;
  double t7926;
  double t7942;
  double t7943;
  double t7944;
  double t7973;
  double t7974;
  double t7975;
  double t7977;
  double t7978;
  double t7979;
  double t7980;
  double t7981;
  double t7982;
  double t7972;
  double t7976;
  double t7983;
  double t7984;
  double t7971;
  double t7985;
  double t7986;
  double t7988;
  double t7989;
  double t7992;
  double t7993;
  double t7994;
  double t7995;
  double t7998;
  double t7999;
  double t8000;
  double t8004;
  double t8008;
  double t8009;
  double t8010;
  double t8011;
  double t8012;
  double t8027;
  double t8028;
  double t8029;
  double t8024;
  double t8025;
  double t8026;
  double t8018;
  double t8019;
  double t8022;
  double t7964;
  double t7965;
  double t7966;
  double t7987;
  double t8014;
  double t8016;
  double t8037;
  double t8038;
  double t8039;
  double t8031;
  double t8032;
  double t8033;
  double t8074;
  double t8075;
  double t8078;
  double t8045;
  double t8046;
  double t8047;
  double t8161;
  double t8162;
  double t8163;
  double t8040;
  double t8056;
  double t8189;
  double t8190;
  double t8191;
  double t8194;
  double t8206;
  double t8207;
  double t8210;
  double t8041;
  double t8042;
  double t8043;
  double t8212;
  double t8214;
  double t8059;
  double t8060;
  double t8061;
  double t8086;
  double t8097;
  double t8252;
  double t8254;
  double t8087;
  double t8088;
  double t8089;
  double t8267;
  double t8269;
  double t8098;
  double t8099;
  double t8100;
  double t8122;
  double t8138;
  double t8322;
  double t8123;
  double t8129;
  double t8130;
  double t8326;
  double t8334;
  double t8142;
  double t8146;
  double t8151;
  double t8185;
  double t8378;
  double t8381;
  double t8382;
  double t8388;
  double t8390;
  double t8200;
  double t8415;
  double t8416;
  double t8417;
  double t8186;
  double t8187;
  double t8386;
  double t8391;
  double t8396;
  double t8397;
  double t8202;
  double t8204;
  double t8426;
  double t8427;
  double t8431;
  double t8435;
  double t8436;
  double t8443;
  double t8445;
  double t8447;
  double t8449;
  double t8450;
  double t8451;
  double t8453;
  double t8454;
  double t8455;
  double t8457;
  double t8458;
  double t8459;
  double t8262;
  double t8258;
  double t8462;
  double t8463;
  double t8465;
  double t8484;
  double t8485;
  double t8259;
  double t8260;
  double t8490;
  double t8491;
  double t8263;
  double t8264;
  double t8515;
  double t8517;
  double t8408;
  double t8409;
  double t8411;
  double t8522;
  double t8523;
  double t8471;
  double t8472;
  double t8473;
  double t8305;
  double t8337;
  double t8306;
  double t8313;
  double t8551;
  double t8552;
  double t8428;
  double t8557;
  double t8558;
  double t8338;
  double t8339;
  double t8578;
  double t8581;
  double t8585;
  double t8587;
  double t8375;
  double t8376;
  double t8610;
  double t8611;
  double t8612;
  double t8627;
  double t8628;
  double t7935;
  double t7936;
  double t7937;
  double t8620;
  double t8621;
  double t8622;
  double t8623;
  double t8618;
  double t8626;
  double t8629;
  double t8651;
  double t8652;
  double t8653;
  double t8642;
  double t8643;
  double t8644;
  double t8647;
  double t8648;
  double t8649;
  double t8658;
  double t8659;
  double t8660;
  double t8654;
  double t8657;
  double t8662;
  double t8668;
  double t8669;
  double t8670;
  double t8672;
  double t8673;
  double t8674;
  double t8676;
  double t8677;
  double t8678;
  double t8495;
  double t8496;
  double t8497;
  double t8499;
  double t8500;
  double t8501;
  double t8630;
  double t8401;
  double t8402;
  double t8698;
  double t8699;
  double t8706;
  double t8704;
  double t8696;
  double t8700;
  double t8730;
  double t8733;
  double t8735;
  double t8683;
  double t8684;
  double t8685;
  double t8547;
  double t8548;
  double t8758;
  double t8777;
  double t8781;
  double t8800;
  double t8801;
  double t8802;
  double t8814;
  double t8815;
  double t8816;
  double t8824;
  double t8825;
  double t8826;
  double t8830;
  double t8831;
  double t8832;
  double t8834;
  double t8835;
  double t8836;
  double t8811;
  double t8812;
  double t8817;
  double t8850;
  double t8851;
  double t8852;
  double t8846;
  double t8847;
  double t8848;
  double t8853;
  double t8856;
  double t8863;
  double t8864;
  double t8865;
  double t8867;
  double t8868;
  double t8869;
  double t8562;
  double t8563;
  double t8711;
  double t8712;
  double t8718;
  double t8719;
  double t8882;
  double t8887;
  double t8892;
  double t8888;
  double t8890;
  double t8883;
  double t8910;
  double t8913;
  double t8823;
  double t8827;
  double t8828;
  double t8917;
  double t7871;
  double t7872;
  double t7873;
  double t8946;
  double t8948;
  double t8964;
  double t8967;
  double t8970;
  t7780 = Cos(var1[10]);
  t7750 = Cos(var1[11]);
  t7772 = Sin(var1[10]);
  t7784 = Sin(var1[11]);
  t7776 = t7750*t7772;
  t7785 = -1.*t7780*t7784;
  t7786 = t7776 + t7785;
  t7745 = Cos(var1[5]);
  t7788 = t7780*t7750;
  t7789 = t7772*t7784;
  t7790 = t7788 + t7789;
  t7746 = Sin(var1[9]);
  t7791 = Sin(var1[5]);
  t7843 = Cos(var1[3]);
  t7787 = -1.*t7745*t7746*t7786;
  t7792 = t7790*t7791;
  t7793 = t7787 + t7792;
  t7731 = Sin(var1[3]);
  t7847 = Cos(var1[9]);
  t7851 = Cos(var1[4]);
  t7852 = t7847*t7851*t7786;
  t7855 = Sin(var1[4]);
  t7856 = t7745*t7790;
  t7858 = t7746*t7786*t7791;
  t7860 = t7856 + t7858;
  t7861 = -1.*t7855*t7860;
  t7866 = t7852 + t7861;
  t7878 = t7851*t7746;
  t7879 = t7847*t7855*t7791;
  t7880 = t7878 + t7879;
  t7899 = -1.*t7750*t7772;
  t7900 = t7780*t7784;
  t7903 = t7899 + t7900;
  t7898 = -1.*t7745*t7746*t7790;
  t7912 = t7903*t7791;
  t7913 = t7898 + t7912;
  t7918 = t7847*t7851*t7790;
  t7919 = t7745*t7903;
  t7920 = t7746*t7790*t7791;
  t7923 = t7919 + t7920;
  t7925 = -1.*t7855*t7923;
  t7926 = t7918 + t7925;
  t7942 = -1.*t7847*t7786*t7855;
  t7943 = -1.*t7851*t7860;
  t7944 = t7942 + t7943;
  t7973 = -0.0641*t7750;
  t7974 = -0.28*t7784;
  t7975 = t7973 + t7974;
  t7977 = -1.*t7750;
  t7978 = 1. + t7977;
  t7979 = -0.575*t7978;
  t7980 = -0.295*t7750;
  t7981 = -0.0641*t7784;
  t7982 = t7979 + t7980 + t7981;
  t7972 = 0.325*t7772;
  t7976 = t7780*t7975;
  t7983 = t7772*t7982;
  t7984 = t7972 + t7976 + t7983;
  t7971 = 0.068*t7746;
  t7985 = t7847*t7984;
  t7986 = t7971 + t7985;
  t7988 = -1.*t7780;
  t7989 = 1. + t7988;
  t7992 = -0.325*t7989;
  t7993 = -1.*t7772*t7975;
  t7994 = t7780*t7982;
  t7995 = t7992 + t7993 + t7994;
  t7998 = t7745*t7995;
  t7999 = -1.*t7847;
  t8000 = 1. + t7999;
  t8004 = 0.1575*t8000;
  t8008 = 0.2255*t7847;
  t8009 = -1.*t7746*t7984;
  t8010 = t8004 + t8008 + t8009;
  t8011 = -1.*t8010*t7791;
  t8012 = t7998 + t8011;
  t8027 = t7851*t7986;
  t8028 = -1.*t7855*t8012;
  t8029 = t8027 + t8028;
  t8024 = t7746*t7855;
  t8025 = -1.*t7847*t7851*t7791;
  t8026 = t8024 + t8025;
  t8018 = t7986*t7855;
  t8019 = t7851*t8012;
  t8022 = t8018 + t8019;
  t7964 = t7847*t7790*t7855;
  t7965 = t7851*t7923;
  t7966 = t7964 + t7965;
  t7987 = -1.*t7986*t7855;
  t8014 = -1.*t7851*t8012;
  t8016 = t7987 + t8014;
  t8037 = t7745*t8010;
  t8038 = t7995*t7791;
  t8039 = t8037 + t8038;
  t8031 = -1.*t7746*t7855;
  t8032 = t7847*t7851*t7791;
  t8033 = t8031 + t8032;
  t8074 = t7847*t7786*t7855;
  t8075 = t7851*t7860;
  t8078 = t8074 + t8075;
  t8045 = -1.*t7847*t7790*t7855;
  t8046 = -1.*t7851*t7923;
  t8047 = t8045 + t8046;
  t8161 = t7745*t7746*t7786;
  t8162 = -1.*t7790*t7791;
  t8163 = t8161 + t8162;
  t8040 = -1.*t7847*t7745*t8039;
  t8056 = t8039*t7913;
  t8189 = -1.*t7745*t8010;
  t8190 = -1.*t7995*t7791;
  t8191 = t8189 + t8190;
  t8194 = t7847*t7791*t8039;
  t8206 = t7745*t7746*t7790;
  t8207 = -1.*t7903*t7791;
  t8210 = t8206 + t8207;
  t8041 = -1.*t8026*t8022;
  t8042 = -1.*t7880*t8029;
  t8043 = t8040 + t8041 + t8042;
  t8212 = t8012*t7913;
  t8214 = t8039*t7923;
  t8059 = t8022*t7966;
  t8060 = t8029*t7926;
  t8061 = t8056 + t8059 + t8060;
  t8086 = t8039*t7793;
  t8097 = -1.*t8039*t7913;
  t8252 = t8039*t7860;
  t8254 = t8012*t7793;
  t8087 = t8022*t8078;
  t8088 = t8029*t7866;
  t8089 = t8086 + t8087 + t8088;
  t8267 = -1.*t8012*t7913;
  t8269 = -1.*t8039*t7923;
  t8098 = -1.*t8022*t7966;
  t8099 = -1.*t8029*t7926;
  t8100 = t8097 + t8098 + t8099;
  t8122 = t7847*t7745*t8039;
  t8138 = -1.*t8039*t7793;
  t8322 = -1.*t7847*t7791*t8039;
  t8123 = t8026*t8022;
  t8129 = t7880*t8029;
  t8130 = t8122 + t8123 + t8129;
  t8326 = -1.*t8039*t7860;
  t8334 = -1.*t8012*t7793;
  t8142 = -1.*t8022*t8078;
  t8146 = -1.*t8029*t7866;
  t8151 = t8138 + t8142 + t8146;
  t8185 = -1.*t7746*t7986;
  t8378 = -0.068*t7746;
  t8381 = -1.*t7847*t7984;
  t8382 = t8378 + t8381;
  t8388 = 0.068*t7847;
  t8390 = t8388 + t8009;
  t8200 = t7847*t7986*t7790;
  t8415 = -1.*t7851*t7746*t7786;
  t8416 = -1.*t7847*t7786*t7855*t7791;
  t8417 = t8415 + t8416;
  t8186 = t7847*t7791*t8012;
  t8187 = t8185 + t8186 + t8040;
  t8386 = -1.*t7847*t7986;
  t8391 = -1.*t7746*t8390;
  t8396 = -1.*t7746*t7986*t7790;
  t8397 = t7847*t8390*t7790;
  t8202 = t8012*t7923;
  t8204 = t8200 + t8056 + t8202;
  t8426 = Power(t7745,2);
  t8427 = -1.*t7847*t8426*t8382;
  t8431 = t7745*t7746*t8039;
  t8435 = -1.*t7847*t7745*t7790*t8039;
  t8436 = t7745*t8382*t7913;
  t8443 = -1.*t7746*t7790*t7855;
  t8445 = t7847*t7851*t7790*t7791;
  t8447 = t8443 + t8445;
  t8449 = t8390*t7855;
  t8450 = -1.*t7851*t8382*t7791;
  t8451 = t8449 + t8450;
  t8453 = t7851*t8390;
  t8454 = t8382*t7855*t7791;
  t8455 = t8453 + t8454;
  t8457 = t7847*t7855;
  t8458 = t7851*t7746*t7791;
  t8459 = t8457 + t8458;
  t8262 = -1.*t7847*t7986*t7790;
  t8258 = t7847*t7986*t7786;
  t8462 = t7847*t7851;
  t8463 = -1.*t7746*t7855*t7791;
  t8465 = t8462 + t8463;
  t8484 = -1.*t7746*t7986*t7786;
  t8485 = t7847*t8390*t7786;
  t8259 = t8012*t7860;
  t8260 = t8258 + t8259 + t8086;
  t8490 = t7746*t7986*t7790;
  t8491 = -1.*t7847*t8390*t7790;
  t8263 = -1.*t8012*t7923;
  t8264 = t8262 + t8097 + t8263;
  t8515 = -1.*t7847*t7745*t7786*t8039;
  t8517 = t7745*t8382*t7793;
  t8408 = -1.*t7746*t7786*t7855;
  t8409 = t7847*t7851*t7786*t7791;
  t8411 = t8408 + t8409;
  t8522 = t7847*t7745*t7790*t8039;
  t8523 = -1.*t7745*t8382*t7913;
  t8471 = -1.*t7851*t7746*t7790;
  t8472 = -1.*t7847*t7790*t7855*t7791;
  t8473 = t8471 + t8472;
  t8305 = t7746*t7986;
  t8337 = -1.*t7847*t7986*t7786;
  t8306 = -1.*t7847*t7791*t8012;
  t8313 = t8305 + t8306 + t8122;
  t8551 = t7847*t7986;
  t8552 = t7746*t8390;
  t8428 = Power(t7791,2);
  t8557 = t7746*t7986*t7786;
  t8558 = -1.*t7847*t8390*t7786;
  t8338 = -1.*t8012*t7860;
  t8339 = t8337 + t8338 + t8138;
  t8578 = t7847*t8426*t8382;
  t8581 = -1.*t7745*t7746*t8039;
  t8585 = t7847*t7745*t7786*t8039;
  t8587 = -1.*t7745*t8382*t7793;
  t8375 = -1.*t7847*t8010;
  t8376 = t8185 + t8375;
  t8610 = -1.*t7780*t7750;
  t8611 = -1.*t7772*t7784;
  t8612 = t8610 + t8611;
  t8627 = 0.325*t7780;
  t8628 = t8627 + t7993 + t7994;
  t7935 = t7843*t7913;
  t7936 = -1.*t7731*t7926;
  t7937 = t7935 + t7936;
  t8620 = -0.325*t7772;
  t8621 = -1.*t7780*t7975;
  t8622 = -1.*t7772*t7982;
  t8623 = t8620 + t8621 + t8622;
  t8618 = t7847*t7986*t7903;
  t8626 = Power(t7847,2);
  t8629 = t8626*t8628*t7790;
  t8651 = -1.*t7745*t7746*t8628;
  t8652 = t8623*t7791;
  t8653 = t8651 + t8652;
  t8642 = -1.*t7745*t7746*t7903;
  t8643 = t8612*t7791;
  t8644 = t8642 + t8643;
  t8647 = t7745*t8623;
  t8648 = t7746*t8628*t7791;
  t8649 = t8647 + t8648;
  t8658 = t7745*t8612;
  t8659 = t7746*t7903*t7791;
  t8660 = t8658 + t8659;
  t8654 = -1.*t7847*t7745*t8653;
  t8657 = t8653*t7913;
  t8662 = t8039*t8644;
  t8668 = t7847*t7903*t7855;
  t8669 = t7851*t8660;
  t8670 = t8668 + t8669;
  t8672 = t7847*t8628*t7855;
  t8673 = t7851*t8649;
  t8674 = t8672 + t8673;
  t8676 = t7847*t7851*t8628;
  t8677 = -1.*t7855*t8649;
  t8678 = t8676 + t8677;
  t8495 = -1.*t7995*t7903;
  t8496 = t7746*t8010*t7790;
  t8497 = t8495 + t8262 + t8496;
  t8499 = -1.*t7746*t8010*t7786;
  t8500 = t7995*t7790;
  t8501 = t8258 + t8499 + t8500;
  t8630 = Power(t7746,2);
  t8401 = t7995*t7903;
  t8402 = -1.*t7746*t8010*t7790;
  t8698 = -1.*t8623*t7903;
  t8699 = -1.*t7995*t8612;
  t8706 = t8623*t7790;
  t8704 = t8626*t8628*t7786;
  t8696 = -1.*t7847*t7986*t7903;
  t8700 = -1.*t8626*t8628*t7790;
  t8730 = t8653*t7793;
  t8733 = -1.*t8653*t7913;
  t8735 = -1.*t8039*t8644;
  t8683 = t7847*t7851*t7903;
  t8684 = -1.*t7855*t8660;
  t8685 = t8683 + t8684;
  t8547 = t7847*t8010;
  t8548 = t8305 + t8547;
  t8758 = -1.*t8626*t8628*t7786;
  t8777 = t7847*t7745*t8653;
  t8781 = -1.*t8653*t7793;
  t8800 = -0.28*t7750;
  t8801 = 0.0641*t7784;
  t8802 = t8800 + t8801;
  t8814 = t7772*t7975;
  t8815 = t7780*t8802;
  t8816 = t8814 + t8815;
  t8824 = t7745*t7786;
  t8825 = t7746*t8612*t7791;
  t8826 = t8824 + t8825;
  t8830 = -1.*t7745*t7746*t8612;
  t8831 = t7786*t7791;
  t8832 = t8830 + t8831;
  t8834 = t7847*t7851*t8612;
  t8835 = -1.*t7855*t8826;
  t8836 = t8834 + t8835;
  t8811 = -1.*t7772*t8802;
  t8812 = t7976 + t8811;
  t8817 = t8626*t8816*t7790;
  t8850 = -1.*t7745*t7746*t8816;
  t8851 = t8812*t7791;
  t8852 = t8850 + t8851;
  t8846 = t7745*t8812;
  t8847 = t7746*t8816*t7791;
  t8848 = t8846 + t8847;
  t8853 = -1.*t7847*t7745*t8852;
  t8856 = t8852*t7913;
  t8863 = t7847*t8816*t7855;
  t8864 = t7851*t8848;
  t8865 = t8863 + t8864;
  t8867 = t7847*t7851*t8816;
  t8868 = -1.*t7855*t8848;
  t8869 = t8867 + t8868;
  t8562 = t7746*t8010*t7786;
  t8563 = -1.*t7995*t7790;
  t8711 = t7984*t7786;
  t8712 = t8711 + t8500;
  t8718 = -1.*t7984*t7790;
  t8719 = t8495 + t8718;
  t8882 = -1.*t8812*t7903;
  t8887 = t7995*t7786;
  t8892 = t8812*t7790;
  t8888 = t8626*t8816*t7786;
  t8890 = t7847*t7986*t8612;
  t8883 = -1.*t8626*t8816*t7790;
  t8910 = t8039*t8832;
  t8913 = t8852*t7793;
  t8823 = t7847*t8612*t7855;
  t8827 = t7851*t8826;
  t8828 = t8823 + t8827;
  t8917 = -1.*t8852*t7913;
  t7871 = t7843*t7793;
  t7872 = -1.*t7731*t7866;
  t7873 = t7871 + t7872;
  t8946 = -1.*t8626*t8816*t7786;
  t8948 = -1.*t7847*t7986*t8612;
  t8964 = t7847*t7745*t8852;
  t8967 = -1.*t8039*t8832;
  t8970 = -1.*t8852*t7793;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t7731*t7793 - 1.*t7843*t7866)*var2[1] + t7873*var2[2];
  p_output1[10]=(-1.*t7731*t7745*t7847 - 1.*t7843*t7880)*var2[1] + (t7745*t7843*t7847 - 1.*t7731*t7880)*var2[2];
  p_output1[11]=(-1.*t7731*t7913 - 1.*t7843*t7926)*var2[1] + t7937*var2[2];
  p_output1[12]=t7866*var2[0] - 1.*t7731*t7944*var2[1] + t7843*t7944*var2[2] + (t7966*(-1.*t7880*t8016 - 1.*t7880*t8022 - 1.*t8026*t8029 - 1.*t8029*t8033) + t7926*t8043 + t8026*(t7926*t8016 + t7926*t8022 + t7966*t8029 + t8029*t8047) + t7880*t8061)*var2[3];
  p_output1[13]=t7880*var2[0] - 1.*t7731*t8033*var2[1] + t7843*t8033*var2[2] + ((-1.*t7926*t8016 - 1.*t7926*t8022 - 1.*t7966*t8029 - 1.*t8029*t8047)*t8078 + t7966*(t7866*t8016 + t7866*t8022 + t7944*t8029 + t8029*t8078) + t7926*t8089 + t7866*t8100)*var2[3];
  p_output1[14]=t7926*var2[0] - 1.*t7731*t8047*var2[1] + t7843*t8047*var2[2] + ((t7880*t8016 + t7880*t8022 + t8026*t8029 + t8029*t8033)*t8078 + t8026*(-1.*t7866*t8016 - 1.*t7866*t8022 - 1.*t7944*t8029 - 1.*t8029*t8078) + t7866*t8130 + t7880*t8151)*var2[3];
  p_output1[15]=t7851*t8163*var2[0] + (t7843*t7860 + t7731*t7855*t8163)*var2[1] + (t7731*t7860 - 1.*t7843*t7855*t8163)*var2[2] + (-1.*t7745*t7847*t7851*t8061 + t7966*(-1.*t7745*t7847*t8012 + t7745*t7847*t7851*t8022 - 1.*t7745*t7847*t7855*t8029 + t7855*t7880*t8191 - 1.*t7851*t8026*t8191 + t8194) + t7851*t8043*t8210 + t8026*(-1.*t7855*t7926*t8191 + t7851*t7966*t8191 + t7851*t8022*t8210 - 1.*t7855*t8029*t8210 + t8212 + t8214))*var2[3] + (t7923*t8187 + t7913*(t7791*t7847*t8191 + t8194) - 1.*t7791*t7847*t8204 + t7745*t7847*(t7923*t8191 + t8012*t8210 + t8212 + t8214))*var2[4];
  p_output1[16]=-1.*t7745*t7847*t7851*var2[0] + (-1.*t7791*t7843*t7847 - 1.*t7731*t7745*t7847*t7855)*var2[1] + (-1.*t7731*t7791*t7847 + t7745*t7843*t7847*t7855)*var2[2] + (t7851*t8100*t8163 + t7851*t8089*t8210 + t7966*(t7851*t8022*t8163 - 1.*t7855*t8029*t8163 - 1.*t7855*t7866*t8191 + t7851*t8078*t8191 + t8252 + t8254) + t8078*(t7855*t7926*t8191 - 1.*t7851*t7966*t8191 - 1.*t7851*t8022*t8210 + t7855*t8029*t8210 + t8267 + t8269))*var2[3] + (t7913*(t8012*t8163 + t7860*t8191 + t8252 + t8254) + t7923*t8260 + t7860*t8264 + t7793*(-1.*t7923*t8191 - 1.*t8012*t8210 + t8267 + t8269))*var2[4];
  p_output1[17]=t7851*t8210*var2[0] + (t7843*t7923 + t7731*t7855*t8210)*var2[1] + (t7731*t7923 - 1.*t7843*t7855*t8210)*var2[2] + (-1.*t7745*t7847*t7851*t8151 + t7851*t8130*t8163 + t8078*(t7745*t7847*t8012 - 1.*t7745*t7847*t7851*t8022 + t7745*t7847*t7855*t8029 - 1.*t7855*t7880*t8191 + t7851*t8026*t8191 + t8322) + t8026*(-1.*t7851*t8022*t8163 + t7855*t8029*t8163 + t7855*t7866*t8191 - 1.*t7851*t8078*t8191 + t8326 + t8334))*var2[3] + (t7860*t8313 + t7793*(-1.*t7791*t7847*t8191 + t8322) + t7745*t7847*(-1.*t8012*t8163 - 1.*t7860*t8191 + t8326 + t8334) - 1.*t7791*t7847*t8339)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t8411*var2[0] + (-1.*t7745*t7786*t7843*t7847 - 1.*t7731*t8417)*var2[1] + (-1.*t7731*t7745*t7786*t7847 + t7843*t8417)*var2[2] + (t8043*t8447 + t8061*t8459 + t7966*(t8427 + t8431 - 1.*t8026*t8451 - 1.*t7880*t8455 - 1.*t8022*t8459 - 1.*t8029*t8465) + t8026*(t8435 + t8436 + t8022*t8447 + t7966*t8451 + t7926*t8455 + t8029*t8473))*var2[3] + (-1.*t7745*t7790*t7847*t8187 - 1.*t7745*t7746*t8204 + t7913*(-1.*t7746*t7791*t8012 + t8386 + t8391 + t8427 - 1.*t7847*t8382*t8428 + t8431) + t7745*t7847*(t7790*t7791*t7847*t8012 - 1.*t7791*t7923*t8382 + t8396 + t8397 + t8435 + t8436))*var2[4] + (-1.*t7746*t7790*t8376 + t7790*t7847*(t7746*t8010 - 1.*t7847*t8382 + t8386 + t8391) + t7746*(-1.*t7790*t7847*t8010 - 1.*t7746*t7790*t8382 + t8396 + t8397) + t7847*(t8200 + t8401 + t8402))*var2[5];
  p_output1[28]=t8459*var2[0] + (-1.*t7745*t7746*t7843 - 1.*t7731*t8465)*var2[1] + (-1.*t7731*t7745*t7746 + t7843*t8465)*var2[2] + (t8100*t8411 + t8089*t8447 + t7966*(t8022*t8411 + t8029*t8417 + t8078*t8451 + t7866*t8455 + t8515 + t8517) + t8078*(-1.*t8022*t8447 - 1.*t7966*t8451 - 1.*t7926*t8455 - 1.*t8029*t8473 + t8522 + t8523))*var2[3] + (-1.*t7745*t7790*t7847*t8260 - 1.*t7745*t7786*t7847*t8264 + t7913*(t7786*t7791*t7847*t8012 - 1.*t7791*t7860*t8382 + t8484 + t8485 + t8515 + t8517) + t7793*(-1.*t7790*t7791*t7847*t8012 + t7791*t7923*t8382 + t8490 + t8491 + t8522 + t8523))*var2[4] + (t7790*t7847*(-1.*t7786*t7847*t8010 - 1.*t7746*t7786*t8382 + t8484 + t8485) + t7786*t7847*(t7790*t7847*t8010 + t7746*t7790*t8382 + t8490 + t8491) - 1.*t7746*t7786*t8497 - 1.*t7746*t7790*t8501)*var2[5];
  p_output1[29]=t8447*var2[0] + (-1.*t7745*t7790*t7843*t7847 - 1.*t7731*t8473)*var2[1] + (-1.*t7731*t7745*t7790*t7847 + t7843*t8473)*var2[2] + (t8130*t8411 + t8151*t8459 + t8078*(t8026*t8451 + t7880*t8455 + t8022*t8459 + t8029*t8465 + t8578 + t8581) + t8026*(-1.*t8022*t8411 - 1.*t8029*t8417 - 1.*t8078*t8451 - 1.*t7866*t8455 + t8585 + t8587))*var2[3] + (-1.*t7745*t7786*t7847*t8313 - 1.*t7745*t7746*t8339 + t7793*(t7746*t7791*t8012 + t7847*t8382*t8428 + t8551 + t8552 + t8578 + t8581) + t7745*t7847*(-1.*t7786*t7791*t7847*t8012 + t7791*t7860*t8382 + t8557 + t8558 + t8585 + t8587))*var2[4] + (-1.*t7746*t7786*t8548 + t7786*t7847*(-1.*t7746*t8010 + t7847*t8382 + t8551 + t8552) + t7746*(t7786*t7847*t8010 + t7746*t7786*t8382 + t8557 + t8558) + t7847*(t8337 + t8562 + t8563))*var2[5];
  p_output1[30]=t7966*var2[0] + t7937*var2[1] + (t7731*t7913 + t7843*t7926)*var2[2] + (t8043*t8670 + t7966*(t8654 - 1.*t8026*t8674 - 1.*t7880*t8678) + t8026*(t8657 + t8662 + t8022*t8670 + t7966*t8674 + t7926*t8678 + t8029*t8685))*var2[3] + (t8187*t8644 + t7913*(-1.*t7746*t7847*t8628 + t7791*t7847*t8649 + t8654) + t7745*t7847*(t8618 + t8629 + t7923*t8649 + t8657 + t8012*t8660 + t8662))*var2[4] + (t7847*t7903*t8376 + t7746*(-1.*t7746*t7903*t8010 + t7995*t8612 + t8618 + t7903*t8623 + t8629 + t7790*t8628*t8630))*var2[5] + (-0.1575*t7790 - 0.2255*t8612)*var2[9];
  p_output1[31]=(t7966*t8100 + t8089*t8670 + t7966*(t8056 + t8059 + t8060 + t8078*t8674 + t7866*t8678 + t8730) + t8078*(-1.*t8022*t8670 - 1.*t7966*t8674 - 1.*t7926*t8678 - 1.*t8029*t8685 + t8733 + t8735))*var2[3] + (t7913*t8264 + t8260*t8644 + t7913*(t8056 + t8200 + t8202 + t7860*t8649 + t8704 + t8730) + t7793*(-1.*t7923*t8649 - 1.*t8012*t8660 + t8696 + t8700 + t8733 + t8735))*var2[4] + (t7790*t7847*t8497 + t7847*t7903*t8501 + t7786*t7847*(t7746*t7903*t8010 - 1.*t7790*t8628*t8630 + t8696 + t8698 + t8699 + t8700) + t7790*t7847*(t8200 + t8401 + t8402 + t7786*t8628*t8630 + t8704 + t8706))*var2[5] + (t7790*(-1.*t7903*t7984 - 1.*t7790*t8628 + t8698 + t8699) + t7903*(t7790*t7984 + t8401 + t7786*t8628 + t8706) + t8612*t8712 + t7903*t8719)*var2[9];
  p_output1[32]=t8670*var2[0] + (t7843*t8644 - 1.*t7731*t8685)*var2[1] + (t7731*t8644 + t7843*t8685)*var2[2] + (t7966*t8130 + t8078*(t8026*t8674 + t7880*t8678 + t8777) + t8026*(t8097 + t8098 + t8099 - 1.*t8078*t8674 - 1.*t7866*t8678 + t8781))*var2[3] + (t7913*t8313 + t7793*(t7746*t7847*t8628 - 1.*t7791*t7847*t8649 + t8777) + t7745*t7847*(t8097 + t8262 + t8263 - 1.*t7860*t8649 + t8758 + t8781))*var2[4] + (t7790*t7847*t8548 + t7746*(t8262 + t8495 + t8496 - 1.*t7790*t8623 - 1.*t7786*t8628*t8630 + t8758))*var2[5] + 0.068*t7903*var2[9];
  p_output1[33]=t8828*var2[0] + (t7843*t8832 - 1.*t7731*t8836)*var2[1] + (t7731*t8832 + t7843*t8836)*var2[2] + (t8043*t8078 + t7966*(t8853 - 1.*t8026*t8865 - 1.*t7880*t8869) + t8026*(t8086 + t8087 + t8088 + t8856 + t7966*t8865 + t7926*t8869))*var2[3] + (t7793*t8187 + t7913*(-1.*t7746*t7847*t8816 + t7791*t7847*t8848 + t8853) + t7745*t7847*(t8086 + t8258 + t8259 + t8817 + t7923*t8848 + t8856))*var2[4] + (t7786*t7847*t8376 + t7746*(t8258 + t8499 + t8500 + t7903*t8812 + t7790*t8630*t8816 + t8817))*var2[5] + (-0.2255*t7790 - 0.1575*t8612)*var2[9] + (-0.325*t7750 - 1.*t7750*t7982 - 1.*t7750*t8802)*var2[10];
  p_output1[34]=(t8078*t8089 + t8100*t8828 + t7966*(t8022*t8828 + t8029*t8836 + t8078*t8865 + t7866*t8869 + t8910 + t8913) + t8078*(t8138 + t8142 + t8146 - 1.*t7966*t8865 - 1.*t7926*t8869 + t8917))*var2[3] + (t7793*t8260 + t8264*t8832 + t7913*(t8012*t8826 + t7860*t8848 + t8888 + t8890 + t8910 + t8913) + t7793*(t8138 + t8337 + t8338 - 1.*t7923*t8848 + t8883 + t8917))*var2[4] + (t7786*t7847*t8501 + t7847*t8497*t8612 + t7786*t7847*(t8337 + t8562 + t8563 - 1.*t7790*t8630*t8816 + t8882 + t8883) + t7790*t7847*(-1.*t7746*t8010*t8612 + t7786*t8630*t8816 + t8887 + t8888 + t8890 + t8892))*var2[5] + (t7790*t8712 + t7786*t8719 + t7790*(-1.*t7786*t7984 + t8563 - 1.*t7790*t8816 + t8882) + t7903*(t7984*t8612 + t7786*t8816 + t8887 + t8892))*var2[9];
  p_output1[35]=t8078*var2[0] + t7873*var2[1] + (t7731*t7793 + t7843*t7866)*var2[2] + (t8130*t8828 + t8078*(t8026*t8865 + t7880*t8869 + t8964) + t8026*(-1.*t8022*t8828 - 1.*t8029*t8836 - 1.*t8078*t8865 - 1.*t7866*t8869 + t8967 + t8970))*var2[3] + (t8313*t8832 + t7793*(t7746*t7847*t8816 - 1.*t7791*t7847*t8848 + t8964) + t7745*t7847*(-1.*t8012*t8826 - 1.*t7860*t8848 + t8946 + t8948 + t8967 + t8970))*var2[4] + (t7847*t8548*t8612 + t7746*(-1.*t7786*t7995 + t7746*t8010*t8612 - 1.*t7790*t8812 - 1.*t7786*t8630*t8816 + t8946 + t8948))*var2[5] + 0.068*t7786*var2[9] + (-0.325*t7784 - 1.*t7784*t7982 - 1.*t7784*t8802)*var2[10];
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
