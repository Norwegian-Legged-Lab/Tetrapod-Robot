/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:00 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t3711;
  double t4622;
  double t4819;
  double t4887;
  double t4926;
  double t4094;
  double t4979;
  double t5071;
  double t5164;
  double t4036;
  double t5177;
  double t4342;
  double t4507;
  double t4590;
  double t4758;
  double t4784;
  double t4822;
  double t4937;
  double t4941;
  double t4950;
  double t4951;
  double t5188;
  double t5237;
  double t5263;
  double t5271;
  double t5300;
  double t5302;
  double t5318;
  double t5343;
  double t4975;
  double t5295;
  double t5358;
  double t8002;
  double t7944;
  double t8019;
  double t8022;
  double t8023;
  double t8048;
  double t8049;
  double t8050;
  double t8001;
  double t8004;
  double t8005;
  double t8006;
  double t8024;
  double t8036;
  double t8037;
  double t8041;
  double t8042;
  double t8053;
  double t8055;
  double t8064;
  double t8065;
  double t8070;
  double t8075;
  double t8076;
  double t8085;
  double t8044;
  double t8067;
  double t8087;
  double t8439;
  double t8441;
  double t8443;
  double t8457;
  double t8486;
  double t8488;
  double t8426;
  double t8430;
  double t8437;
  double t8438;
  double t8444;
  double t8446;
  double t8447;
  double t8448;
  double t8455;
  double t8492;
  double t8495;
  double t8498;
  double t8505;
  double t8517;
  double t8518;
  double t8522;
  double t8526;
  double t8456;
  double t8512;
  double t8538;
  double t5401;
  double t5488;
  double t8940;
  double t5516;
  double t5521;
  double t5558;
  double t5579;
  double t5886;
  double t6324;
  double t6962;
  double t6969;
  double t7041;
  double t7149;
  double t7156;
  double t7169;
  double t7332;
  double t7352;
  double t7417;
  double t7423;
  double t7442;
  double t7453;
  double t7473;
  double t7476;
  double t7617;
  double t7668;
  double t7704;
  double t7705;
  double t7712;
  double t7750;
  double t7759;
  double t7761;
  double t7776;
  double t7786;
  double t7796;
  double t7816;
  double t7824;
  double t7825;
  double t8942;
  double t8088;
  double t8090;
  double t9237;
  double t8092;
  double t8094;
  double t8098;
  double t8101;
  double t8103;
  double t8105;
  double t8115;
  double t8136;
  double t8143;
  double t8147;
  double t8162;
  double t8163;
  double t8188;
  double t8189;
  double t8191;
  double t8194;
  double t8196;
  double t8197;
  double t8212;
  double t8213;
  double t8222;
  double t8225;
  double t8227;
  double t8230;
  double t8232;
  double t8235;
  double t8291;
  double t8325;
  double t8363;
  double t8371;
  double t8399;
  double t8406;
  double t8422;
  double t8424;
  double t9241;
  double t8539;
  double t8546;
  double t9529;
  double t8612;
  double t8618;
  double t8620;
  double t8622;
  double t8626;
  double t8629;
  double t8631;
  double t8636;
  double t8638;
  double t8649;
  double t8651;
  double t8653;
  double t8655;
  double t8656;
  double t8660;
  double t8661;
  double t8668;
  double t8669;
  double t8696;
  double t8700;
  double t8725;
  double t8739;
  double t8776;
  double t8812;
  double t8826;
  double t8848;
  double t8857;
  double t8870;
  double t8883;
  double t8890;
  double t8892;
  double t8909;
  double t8922;
  double t8923;
  double t9530;
  t3711 = Cos(var1[4]);
  t4622 = Cos(var1[6]);
  t4819 = Sin(var1[5]);
  t4887 = Sin(var1[4]);
  t4926 = Sin(var1[6]);
  t4094 = Cos(var1[7]);
  t4979 = t4622*t4887;
  t5071 = t3711*t4819*t4926;
  t5164 = t4979 + t5071;
  t4036 = Cos(var1[5]);
  t5177 = Sin(var1[7]);
  t4342 = -1.*t4094;
  t4507 = 1. + t4342;
  t4590 = 0.325*t3711*t4036*t4507;
  t4758 = -1.*t4622;
  t4784 = 1. + t4758;
  t4822 = -0.1575*t3711*t4784*t4819;
  t4937 = -0.1575*t4887*t4926;
  t4941 = -1.*t3711*t4622*t4819;
  t4950 = t4887*t4926;
  t4951 = t4941 + t4950;
  t5188 = -0.325*t5164*t5177;
  t5237 = t4094*t5164;
  t5263 = -1.*t3711*t4036*t5177;
  t5271 = t5237 + t5263;
  t5300 = t3711*t4036*t4094;
  t5302 = t5164*t5177;
  t5318 = t5300 + t5302;
  t5343 = 0.325*t5318;
  t4975 = 0.234014*t4951;
  t5295 = 0.01235*t5271;
  t5358 = var1[0] + t4590 + t4822 + t4937 + t4975 + t5188 + t5295 + t5343;
  t8002 = Cos(var1[3]);
  t7944 = Sin(var1[3]);
  t8019 = t8002*t4036;
  t8022 = -1.*t7944*t4887*t4819;
  t8023 = t8019 + t8022;
  t8048 = -1.*t3711*t4622*t7944;
  t8049 = -1.*t8023*t4926;
  t8050 = t8048 + t8049;
  t8001 = t4036*t7944*t4887;
  t8004 = t8002*t4819;
  t8005 = t8001 + t8004;
  t8006 = 0.325*t4507*t8005;
  t8024 = 0.1575*t4784*t8023;
  t8036 = 0.1575*t3711*t7944*t4926;
  t8037 = t4622*t8023;
  t8041 = -1.*t3711*t7944*t4926;
  t8042 = t8037 + t8041;
  t8053 = -0.325*t8050*t5177;
  t8055 = t4094*t8050;
  t8064 = -1.*t8005*t5177;
  t8065 = t8055 + t8064;
  t8070 = t4094*t8005;
  t8075 = t8050*t5177;
  t8076 = t8070 + t8075;
  t8085 = 0.325*t8076;
  t8044 = 0.234014*t8042;
  t8067 = 0.01235*t8065;
  t8087 = var1[1] + t8006 + t8024 + t8036 + t8044 + t8053 + t8067 + t8085;
  t8439 = t4036*t7944;
  t8441 = t8002*t4887*t4819;
  t8443 = t8439 + t8441;
  t8457 = t8002*t3711*t4622;
  t8486 = -1.*t8443*t4926;
  t8488 = t8457 + t8486;
  t8426 = -1.*t8002*t4036*t4887;
  t8430 = t7944*t4819;
  t8437 = t8426 + t8430;
  t8438 = 0.325*t4507*t8437;
  t8444 = 0.1575*t4784*t8443;
  t8446 = -0.1575*t8002*t3711*t4926;
  t8447 = t4622*t8443;
  t8448 = t8002*t3711*t4926;
  t8455 = t8447 + t8448;
  t8492 = -0.325*t8488*t5177;
  t8495 = t4094*t8488;
  t8498 = -1.*t8437*t5177;
  t8505 = t8495 + t8498;
  t8517 = t4094*t8437;
  t8518 = t8488*t5177;
  t8522 = t8517 + t8518;
  t8526 = 0.325*t8522;
  t8456 = 0.234014*t8455;
  t8512 = 0.01235*t8505;
  t8538 = var1[2] + t8438 + t8444 + t8446 + t8456 + t8492 + t8512 + t8526;
  t5401 = 0.237563*t4951;
  t5488 = 0.008916*t5271;
  t8940 = 0.075*t5318;
  t5516 = 0.239804*t4951;
  t5521 = 0.004516*t5271;
  t5558 = 0.240495*t4951;
  t5579 = -0.000373*t5271;
  t5886 = 0.239562*t4951;
  t6324 = -0.005222*t5271;
  t6962 = 0.237104*t4951;
  t6969 = -0.009505*t5271;
  t7041 = 0.233389*t4951;
  t7149 = -0.012758*t5271;
  t7156 = 0.228819*t4951;
  t7169 = -0.014628*t5271;
  t7332 = 0.22389*t4951;
  t7352 = -0.014913*t5271;
  t7417 = 0.219135*t4951;
  t7423 = -0.013582*t5271;
  t7442 = 0.215069*t4951;
  t7453 = -0.01078*t5271;
  t7473 = 0.212134*t4951;
  t7476 = -0.006809*t5271;
  t7617 = 0.210648*t4951;
  t7668 = -0.0021*t5271;
  t7704 = 0.210771*t4951;
  t7705 = 0.002836*t5271;
  t7712 = 0.21249*t4951;
  t7750 = 0.007465*t5271;
  t7759 = 0.215618*t4951;
  t7761 = 0.011285*t5271;
  t7776 = 0.219818*t4951;
  t7786 = 0.013882*t5271;
  t7796 = 0.224634*t4951;
  t7816 = 0.014975*t5271;
  t7824 = 0.229543*t4951;
  t7825 = 0.014445*t5271;
  t8942 = var1[0] + t4590 + t4822 + t4937 + t4975 + t5188 + t5295 + t8940;
  t8088 = 0.237563*t8042;
  t8090 = 0.008916*t8065;
  t9237 = 0.075*t8076;
  t8092 = 0.239804*t8042;
  t8094 = 0.004516*t8065;
  t8098 = 0.240495*t8042;
  t8101 = -0.000373*t8065;
  t8103 = 0.239562*t8042;
  t8105 = -0.005222*t8065;
  t8115 = 0.237104*t8042;
  t8136 = -0.009505*t8065;
  t8143 = 0.233389*t8042;
  t8147 = -0.012758*t8065;
  t8162 = 0.228819*t8042;
  t8163 = -0.014628*t8065;
  t8188 = 0.22389*t8042;
  t8189 = -0.014913*t8065;
  t8191 = 0.219135*t8042;
  t8194 = -0.013582*t8065;
  t8196 = 0.215069*t8042;
  t8197 = -0.01078*t8065;
  t8212 = 0.212134*t8042;
  t8213 = -0.006809*t8065;
  t8222 = 0.210648*t8042;
  t8225 = -0.0021*t8065;
  t8227 = 0.210771*t8042;
  t8230 = 0.002836*t8065;
  t8232 = 0.21249*t8042;
  t8235 = 0.007465*t8065;
  t8291 = 0.215618*t8042;
  t8325 = 0.011285*t8065;
  t8363 = 0.219818*t8042;
  t8371 = 0.013882*t8065;
  t8399 = 0.224634*t8042;
  t8406 = 0.014975*t8065;
  t8422 = 0.229543*t8042;
  t8424 = 0.014445*t8065;
  t9241 = var1[1] + t8006 + t8024 + t8036 + t8044 + t8053 + t8067 + t9237;
  t8539 = 0.237563*t8455;
  t8546 = 0.008916*t8505;
  t9529 = 0.075*t8522;
  t8612 = 0.239804*t8455;
  t8618 = 0.004516*t8505;
  t8620 = 0.240495*t8455;
  t8622 = -0.000373*t8505;
  t8626 = 0.239562*t8455;
  t8629 = -0.005222*t8505;
  t8631 = 0.237104*t8455;
  t8636 = -0.009505*t8505;
  t8638 = 0.233389*t8455;
  t8649 = -0.012758*t8505;
  t8651 = 0.228819*t8455;
  t8653 = -0.014628*t8505;
  t8655 = 0.22389*t8455;
  t8656 = -0.014913*t8505;
  t8660 = 0.219135*t8455;
  t8661 = -0.013582*t8505;
  t8668 = 0.215069*t8455;
  t8669 = -0.01078*t8505;
  t8696 = 0.212134*t8455;
  t8700 = -0.006809*t8505;
  t8725 = 0.210648*t8455;
  t8739 = -0.0021*t8505;
  t8776 = 0.210771*t8455;
  t8812 = 0.002836*t8505;
  t8826 = 0.21249*t8455;
  t8848 = 0.007465*t8505;
  t8857 = 0.215618*t8455;
  t8870 = 0.011285*t8505;
  t8883 = 0.219818*t8455;
  t8890 = 0.013882*t8505;
  t8892 = 0.224634*t8455;
  t8909 = 0.014975*t8505;
  t8922 = 0.229543*t8455;
  t8923 = 0.014445*t8505;
  t9530 = var1[2] + t8438 + t8444 + t8446 + t8456 + t8492 + t8512 + t9529;
  p_output1[0]=t5358;
  p_output1[1]=t4590 + t4822 + t4937 + t5188 + t5343 + t5401 + t5488 + var1[0];
  p_output1[2]=t4590 + t4822 + t4937 + t5188 + t5343 + t5516 + t5521 + var1[0];
  p_output1[3]=t4590 + t4822 + t4937 + t5188 + t5343 + t5558 + t5579 + var1[0];
  p_output1[4]=t4590 + t4822 + t4937 + t5188 + t5343 + t5886 + t6324 + var1[0];
  p_output1[5]=t4590 + t4822 + t4937 + t5188 + t5343 + t6962 + t6969 + var1[0];
  p_output1[6]=t4590 + t4822 + t4937 + t5188 + t5343 + t7041 + t7149 + var1[0];
  p_output1[7]=t4590 + t4822 + t4937 + t5188 + t5343 + t7156 + t7169 + var1[0];
  p_output1[8]=t4590 + t4822 + t4937 + t5188 + t5343 + t7332 + t7352 + var1[0];
  p_output1[9]=t4590 + t4822 + t4937 + t5188 + t5343 + t7417 + t7423 + var1[0];
  p_output1[10]=t4590 + t4822 + t4937 + t5188 + t5343 + t7442 + t7453 + var1[0];
  p_output1[11]=t4590 + t4822 + t4937 + t5188 + t5343 + t7473 + t7476 + var1[0];
  p_output1[12]=t4590 + t4822 + t4937 + t5188 + t5343 + t7617 + t7668 + var1[0];
  p_output1[13]=t4590 + t4822 + t4937 + t5188 + t5343 + t7704 + t7705 + var1[0];
  p_output1[14]=t4590 + t4822 + t4937 + t5188 + t5343 + t7712 + t7750 + var1[0];
  p_output1[15]=t4590 + t4822 + t4937 + t5188 + t5343 + t7759 + t7761 + var1[0];
  p_output1[16]=t4590 + t4822 + t4937 + t5188 + t5343 + t7776 + t7786 + var1[0];
  p_output1[17]=t4590 + t4822 + t4937 + t5188 + t5343 + t7796 + t7816 + var1[0];
  p_output1[18]=t4590 + t4822 + t4937 + t5188 + t5343 + t7824 + t7825 + var1[0];
  p_output1[19]=t5358;
  p_output1[20]=t8087;
  p_output1[21]=t8006 + t8024 + t8036 + t8053 + t8085 + t8088 + t8090 + var1[1];
  p_output1[22]=t8006 + t8024 + t8036 + t8053 + t8085 + t8092 + t8094 + var1[1];
  p_output1[23]=t8006 + t8024 + t8036 + t8053 + t8085 + t8098 + t8101 + var1[1];
  p_output1[24]=t8006 + t8024 + t8036 + t8053 + t8085 + t8103 + t8105 + var1[1];
  p_output1[25]=t8006 + t8024 + t8036 + t8053 + t8085 + t8115 + t8136 + var1[1];
  p_output1[26]=t8006 + t8024 + t8036 + t8053 + t8085 + t8143 + t8147 + var1[1];
  p_output1[27]=t8006 + t8024 + t8036 + t8053 + t8085 + t8162 + t8163 + var1[1];
  p_output1[28]=t8006 + t8024 + t8036 + t8053 + t8085 + t8188 + t8189 + var1[1];
  p_output1[29]=t8006 + t8024 + t8036 + t8053 + t8085 + t8191 + t8194 + var1[1];
  p_output1[30]=t8006 + t8024 + t8036 + t8053 + t8085 + t8196 + t8197 + var1[1];
  p_output1[31]=t8006 + t8024 + t8036 + t8053 + t8085 + t8212 + t8213 + var1[1];
  p_output1[32]=t8006 + t8024 + t8036 + t8053 + t8085 + t8222 + t8225 + var1[1];
  p_output1[33]=t8006 + t8024 + t8036 + t8053 + t8085 + t8227 + t8230 + var1[1];
  p_output1[34]=t8006 + t8024 + t8036 + t8053 + t8085 + t8232 + t8235 + var1[1];
  p_output1[35]=t8006 + t8024 + t8036 + t8053 + t8085 + t8291 + t8325 + var1[1];
  p_output1[36]=t8006 + t8024 + t8036 + t8053 + t8085 + t8363 + t8371 + var1[1];
  p_output1[37]=t8006 + t8024 + t8036 + t8053 + t8085 + t8399 + t8406 + var1[1];
  p_output1[38]=t8006 + t8024 + t8036 + t8053 + t8085 + t8422 + t8424 + var1[1];
  p_output1[39]=t8087;
  p_output1[40]=t8538;
  p_output1[41]=t8438 + t8444 + t8446 + t8492 + t8526 + t8539 + t8546 + var1[2];
  p_output1[42]=t8438 + t8444 + t8446 + t8492 + t8526 + t8612 + t8618 + var1[2];
  p_output1[43]=t8438 + t8444 + t8446 + t8492 + t8526 + t8620 + t8622 + var1[2];
  p_output1[44]=t8438 + t8444 + t8446 + t8492 + t8526 + t8626 + t8629 + var1[2];
  p_output1[45]=t8438 + t8444 + t8446 + t8492 + t8526 + t8631 + t8636 + var1[2];
  p_output1[46]=t8438 + t8444 + t8446 + t8492 + t8526 + t8638 + t8649 + var1[2];
  p_output1[47]=t8438 + t8444 + t8446 + t8492 + t8526 + t8651 + t8653 + var1[2];
  p_output1[48]=t8438 + t8444 + t8446 + t8492 + t8526 + t8655 + t8656 + var1[2];
  p_output1[49]=t8438 + t8444 + t8446 + t8492 + t8526 + t8660 + t8661 + var1[2];
  p_output1[50]=t8438 + t8444 + t8446 + t8492 + t8526 + t8668 + t8669 + var1[2];
  p_output1[51]=t8438 + t8444 + t8446 + t8492 + t8526 + t8696 + t8700 + var1[2];
  p_output1[52]=t8438 + t8444 + t8446 + t8492 + t8526 + t8725 + t8739 + var1[2];
  p_output1[53]=t8438 + t8444 + t8446 + t8492 + t8526 + t8776 + t8812 + var1[2];
  p_output1[54]=t8438 + t8444 + t8446 + t8492 + t8526 + t8826 + t8848 + var1[2];
  p_output1[55]=t8438 + t8444 + t8446 + t8492 + t8526 + t8857 + t8870 + var1[2];
  p_output1[56]=t8438 + t8444 + t8446 + t8492 + t8526 + t8883 + t8890 + var1[2];
  p_output1[57]=t8438 + t8444 + t8446 + t8492 + t8526 + t8892 + t8909 + var1[2];
  p_output1[58]=t8438 + t8444 + t8446 + t8492 + t8526 + t8922 + t8923 + var1[2];
  p_output1[59]=t8538;
  p_output1[60]=t8942;
  p_output1[61]=t4590 + t4822 + t4937 + t5188 + t5401 + t5488 + t8940 + var1[0];
  p_output1[62]=t4590 + t4822 + t4937 + t5188 + t5516 + t5521 + t8940 + var1[0];
  p_output1[63]=t4590 + t4822 + t4937 + t5188 + t5558 + t5579 + t8940 + var1[0];
  p_output1[64]=t4590 + t4822 + t4937 + t5188 + t5886 + t6324 + t8940 + var1[0];
  p_output1[65]=t4590 + t4822 + t4937 + t5188 + t6962 + t6969 + t8940 + var1[0];
  p_output1[66]=t4590 + t4822 + t4937 + t5188 + t7041 + t7149 + t8940 + var1[0];
  p_output1[67]=t4590 + t4822 + t4937 + t5188 + t7156 + t7169 + t8940 + var1[0];
  p_output1[68]=t4590 + t4822 + t4937 + t5188 + t7332 + t7352 + t8940 + var1[0];
  p_output1[69]=t4590 + t4822 + t4937 + t5188 + t7417 + t7423 + t8940 + var1[0];
  p_output1[70]=t4590 + t4822 + t4937 + t5188 + t7442 + t7453 + t8940 + var1[0];
  p_output1[71]=t4590 + t4822 + t4937 + t5188 + t7473 + t7476 + t8940 + var1[0];
  p_output1[72]=t4590 + t4822 + t4937 + t5188 + t7617 + t7668 + t8940 + var1[0];
  p_output1[73]=t4590 + t4822 + t4937 + t5188 + t7704 + t7705 + t8940 + var1[0];
  p_output1[74]=t4590 + t4822 + t4937 + t5188 + t7712 + t7750 + t8940 + var1[0];
  p_output1[75]=t4590 + t4822 + t4937 + t5188 + t7759 + t7761 + t8940 + var1[0];
  p_output1[76]=t4590 + t4822 + t4937 + t5188 + t7776 + t7786 + t8940 + var1[0];
  p_output1[77]=t4590 + t4822 + t4937 + t5188 + t7796 + t7816 + t8940 + var1[0];
  p_output1[78]=t4590 + t4822 + t4937 + t5188 + t7824 + t7825 + t8940 + var1[0];
  p_output1[79]=t8942;
  p_output1[80]=t9241;
  p_output1[81]=t8006 + t8024 + t8036 + t8053 + t8088 + t8090 + t9237 + var1[1];
  p_output1[82]=t8006 + t8024 + t8036 + t8053 + t8092 + t8094 + t9237 + var1[1];
  p_output1[83]=t8006 + t8024 + t8036 + t8053 + t8098 + t8101 + t9237 + var1[1];
  p_output1[84]=t8006 + t8024 + t8036 + t8053 + t8103 + t8105 + t9237 + var1[1];
  p_output1[85]=t8006 + t8024 + t8036 + t8053 + t8115 + t8136 + t9237 + var1[1];
  p_output1[86]=t8006 + t8024 + t8036 + t8053 + t8143 + t8147 + t9237 + var1[1];
  p_output1[87]=t8006 + t8024 + t8036 + t8053 + t8162 + t8163 + t9237 + var1[1];
  p_output1[88]=t8006 + t8024 + t8036 + t8053 + t8188 + t8189 + t9237 + var1[1];
  p_output1[89]=t8006 + t8024 + t8036 + t8053 + t8191 + t8194 + t9237 + var1[1];
  p_output1[90]=t8006 + t8024 + t8036 + t8053 + t8196 + t8197 + t9237 + var1[1];
  p_output1[91]=t8006 + t8024 + t8036 + t8053 + t8212 + t8213 + t9237 + var1[1];
  p_output1[92]=t8006 + t8024 + t8036 + t8053 + t8222 + t8225 + t9237 + var1[1];
  p_output1[93]=t8006 + t8024 + t8036 + t8053 + t8227 + t8230 + t9237 + var1[1];
  p_output1[94]=t8006 + t8024 + t8036 + t8053 + t8232 + t8235 + t9237 + var1[1];
  p_output1[95]=t8006 + t8024 + t8036 + t8053 + t8291 + t8325 + t9237 + var1[1];
  p_output1[96]=t8006 + t8024 + t8036 + t8053 + t8363 + t8371 + t9237 + var1[1];
  p_output1[97]=t8006 + t8024 + t8036 + t8053 + t8399 + t8406 + t9237 + var1[1];
  p_output1[98]=t8006 + t8024 + t8036 + t8053 + t8422 + t8424 + t9237 + var1[1];
  p_output1[99]=t9241;
  p_output1[100]=t9530;
  p_output1[101]=t8438 + t8444 + t8446 + t8492 + t8539 + t8546 + t9529 + var1[2];
  p_output1[102]=t8438 + t8444 + t8446 + t8492 + t8612 + t8618 + t9529 + var1[2];
  p_output1[103]=t8438 + t8444 + t8446 + t8492 + t8620 + t8622 + t9529 + var1[2];
  p_output1[104]=t8438 + t8444 + t8446 + t8492 + t8626 + t8629 + t9529 + var1[2];
  p_output1[105]=t8438 + t8444 + t8446 + t8492 + t8631 + t8636 + t9529 + var1[2];
  p_output1[106]=t8438 + t8444 + t8446 + t8492 + t8638 + t8649 + t9529 + var1[2];
  p_output1[107]=t8438 + t8444 + t8446 + t8492 + t8651 + t8653 + t9529 + var1[2];
  p_output1[108]=t8438 + t8444 + t8446 + t8492 + t8655 + t8656 + t9529 + var1[2];
  p_output1[109]=t8438 + t8444 + t8446 + t8492 + t8660 + t8661 + t9529 + var1[2];
  p_output1[110]=t8438 + t8444 + t8446 + t8492 + t8668 + t8669 + t9529 + var1[2];
  p_output1[111]=t8438 + t8444 + t8446 + t8492 + t8696 + t8700 + t9529 + var1[2];
  p_output1[112]=t8438 + t8444 + t8446 + t8492 + t8725 + t8739 + t9529 + var1[2];
  p_output1[113]=t8438 + t8444 + t8446 + t8492 + t8776 + t8812 + t9529 + var1[2];
  p_output1[114]=t8438 + t8444 + t8446 + t8492 + t8826 + t8848 + t9529 + var1[2];
  p_output1[115]=t8438 + t8444 + t8446 + t8492 + t8857 + t8870 + t9529 + var1[2];
  p_output1[116]=t8438 + t8444 + t8446 + t8492 + t8883 + t8890 + t9529 + var1[2];
  p_output1[117]=t8438 + t8444 + t8446 + t8492 + t8892 + t8909 + t9529 + var1[2];
  p_output1[118]=t8438 + t8444 + t8446 + t8492 + t8922 + t8923 + t9529 + var1[2];
  p_output1[119]=t9530;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_upper0_to_1_bar.hh"

namespace SymFunction
{

void Link_upper0_to_1_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
