/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:55 GMT+02:00
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
  double t5435;
  double t4683;
  double t5401;
  double t5857;
  double t6570;
  double t6925;
  double t7081;
  double t7082;
  double t7083;
  double t7158;
  double t7159;
  double t7314;
  double t7459;
  double t7317;
  double t7464;
  double t7465;
  double t7466;
  double t7511;
  double t7515;
  double t7519;
  double t7532;
  double t7535;
  double t3693;
  double t3521;
  double t3587;
  double t3591;
  double t3640;
  double t3768;
  double t7563;
  double t7565;
  double t7570;
  double t7575;
  double t7612;
  double t7642;
  double t7656;
  double t7678;
  double t7789;
  double t7790;
  double t7795;
  double t7796;
  double t7805;
  double t7807;
  double t7810;
  double t3358;
  double t3486;
  double t7822;
  double t7814;
  double t7857;
  double t7859;
  double t7860;
  double t7989;
  double t7990;
  double t7992;
  double t7993;
  double t7994;
  double t7995;
  double t7996;
  double t7997;
  double t7998;
  double t7975;
  double t7976;
  double t7977;
  double t7983;
  double t7984;
  double t7985;
  double t8192;
  double t8196;
  double t8197;
  double t8198;
  double t8200;
  double t8224;
  double t8227;
  double t8228;
  double t8229;
  double t8237;
  double t8241;
  double t8248;
  double t8250;
  double t8256;
  double t8270;
  double t8273;
  double t8274;
  double t8263;
  double t8268;
  double t8269;
  double t8275;
  double t8276;
  double t8277;
  double t8327;
  double t8331;
  double t8343;
  double t8280;
  double t8281;
  double t8283;
  double t8323;
  double t8390;
  double t8432;
  double t8471;
  double t8472;
  double t8473;
  double t8478;
  double t8479;
  double t8493;
  double t8496;
  double t8505;
  double t8506;
  double t8507;
  double t8508;
  double t8513;
  double t8517;
  double t8523;
  double t8553;
  double t8556;
  double t8557;
  double t8565;
  double t8568;
  double t8569;
  double t8571;
  double t8572;
  double t8573;
  double t8570;
  double t8574;
  double t8575;
  double t8576;
  double t8578;
  double t8579;
  double t8580;
  double t8581;
  double t8699;
  double t8702;
  double t8703;
  double t8711;
  double t8729;
  double t8730;
  double t8732;
  double t8746;
  double t8747;
  double t8748;
  double t8804;
  double t8809;
  double t8810;
  double t8832;
  double t8833;
  double t8834;
  double t8850;
  double t8851;
  double t8856;
  double t8837;
  double t8844;
  double t8838;
  double t8841;
  double t8842;
  double t8849;
  double t8858;
  double t8811;
  double t8812;
  double t8816;
  double t8817;
  double t8818;
  double t8820;
  double t8823;
  double t8825;
  double t8829;
  double t8831;
  double t8910;
  double t8912;
  double t8914;
  double t8906;
  double t8843;
  double t8931;
  double t8932;
  double t8933;
  double t8936;
  double t8940;
  double t8941;
  double t8857;
  double t8863;
  double t8866;
  double t8867;
  double t8869;
  double t8942;
  double t8871;
  double t8872;
  double t8958;
  double t8880;
  double t8881;
  double t8888;
  double t9123;
  double t9125;
  double t9127;
  double t9141;
  double t9143;
  double t9145;
  double t9152;
  double t9153;
  double t9154;
  double t9160;
  double t9166;
  double t9167;
  double t9191;
  double t9192;
  double t9195;
  double t9199;
  double t9214;
  double t9222;
  double t9247;
  double t9263;
  double t9269;
  double t9272;
  double t9261;
  double t9312;
  double t9317;
  double t9330;
  double t9334;
  double t9371;
  double t9373;
  double t9374;
  double t9385;
  double t9387;
  double t9427;
  double t9129;
  double t9131;
  double t9133;
  double t9135;
  double t9521;
  double t9522;
  double t9527;
  double t9529;
  double t9530;
  double t9542;
  double t9543;
  double t9546;
  double t9551;
  double t9602;
  double t9618;
  double t9537;
  double t9624;
  double t9631;
  double t9632;
  double t9647;
  double t9648;
  double t9650;
  double t9640;
  double t9643;
  double t9659;
  double t9660;
  double t9661;
  double t9663;
  double t9664;
  double t9665;
  double t9670;
  double t9672;
  double t9673;
  double t9300;
  double t9725;
  double t9727;
  double t9729;
  double t9730;
  double t9732;
  double t9734;
  double t9735;
  double t9737;
  double t9741;
  double t9742;
  double t9743;
  double t9745;
  double t9746;
  double t9747;
  double t9748;
  double t9749;
  double t9750;
  double t3868;
  double t7820;
  double t9802;
  double t9803;
  double t9804;
  double t9812;
  double t9817;
  double t9818;
  double t9757;
  double t9758;
  double t9759;
  double t9797;
  double t9798;
  double t9799;
  double t9339;
  double t9846;
  double t9848;
  double t9850;
  double t9852;
  double t9853;
  double t9854;
  double t9855;
  double t9831;
  double t9833;
  double t9834;
  double t9487;
  double t9490;
  double t9869;
  double t9870;
  double t9872;
  double t9874;
  double t9875;
  double t9876;
  double t9878;
  double t9859;
  double t9860;
  double t9861;
  double t9864;
  double t9865;
  double t9867;
  double t9896;
  double t9898;
  double t9904;
  double t9906;
  double t9886;
  double t9887;
  double t9888;
  double t9889;
  double t9890;
  double t9891;
  double t9892;
  double t9893;
  double t9894;
  double t9897;
  double t9902;
  double t9905;
  double t9910;
  double t9974;
  double t9916;
  double t9918;
  double t9978;
  double t9949;
  double t9950;
  double t9953;
  double t9954;
  double t8763;
  double t8766;
  double t8767;
  double t10020;
  double t10023;
  double t10027;
  double t10036;
  double t10038;
  double t10031;
  double t10055;
  double t10057;
  double t9138;
  double t9148;
  double t9150;
  double t10062;
  double t10064;
  double t10092;
  double t10096;
  double t10098;
  double t10121;
  double t10127;
  double t10130;
  double t9688;
  double t9689;
  double t9694;
  double t9504;
  double t9505;
  double t10166;
  double t10167;
  double t10168;
  double t10171;
  double t10172;
  double t10173;
  double t9511;
  double t10176;
  double t10178;
  double t10180;
  double t10182;
  double t10183;
  double t10185;
  double t9513;
  double t9514;
  double t9515;
  double t9516;
  double t9517;
  double t9518;
  double t9519;
  double t9520;
  double t10065;
  double t10200;
  double t10201;
  double t10202;
  double t10203;
  double t10204;
  double t10205;
  double t10206;
  double t10192;
  double t10193;
  double t10194;
  double t10080;
  double t10081;
  double t10227;
  double t10228;
  double t10229;
  double t10231;
  double t10234;
  double t10236;
  double t10238;
  double t10209;
  double t10210;
  double t10211;
  double t10215;
  double t10216;
  double t10217;
  double t8011;
  double t8245;
  double t8262;
  double t10248;
  double t10255;
  double t10258;
  double t10299;
  double t10307;
  double t10363;
  double t10366;
  double t10371;
  double t10374;
  double t10351;
  double t10352;
  double t10354;
  double t10355;
  double t10356;
  double t10357;
  double t10358;
  double t10359;
  double t10360;
  double t10361;
  double t10364;
  double t10372;
  double t10378;
  double t10381;
  double t10411;
  double t10385;
  double t10386;
  double t10416;
  double t10392;
  double t10393;
  double t10396;
  t5435 = Cos(var1[11]);
  t4683 = Sin(var1[11]);
  t5401 = 0.28121*t4683;
  t5857 = -1.*t5435;
  t6570 = 1. + t5857;
  t6925 = -0.50321*t6570;
  t7081 = -0.19821*t5435;
  t7082 = t6925 + t7081;
  t7083 = t7082*t4683;
  t7158 = -0.305*t5435*t4683;
  t7159 = t5401 + t7083 + t7158;
  t7314 = Cos(var1[10]);
  t7459 = Sin(var1[10]);
  t7317 = -1.*t7314*t5435;
  t7464 = -1.*t7459*t4683;
  t7465 = t7317 + t7464;
  t7466 = 0.15121*t7465;
  t7511 = t7314*t5435;
  t7515 = t7459*t4683;
  t7519 = t7511 + t7515;
  t7532 = 0.15121*t7519;
  t7535 = t7466 + t7532;
  t3693 = Sin(var1[9]);
  t3521 = Cos(var1[9]);
  t3587 = -1.*t3521;
  t3591 = 1. + t3587;
  t3640 = -0.15121*t3591;
  t3768 = 0.15121*t3693;
  t7563 = -1.*t7314;
  t7565 = 1. + t7563;
  t7570 = -0.28121*t7565;
  t7575 = t7314*t7082;
  t7612 = 0.305*t7459*t4683;
  t7642 = t7570 + t7575 + t7612;
  t7656 = t3521*t7642;
  t7678 = t3640 + t7656;
  t7789 = -1.*t3693*t7678;
  t7790 = 0.15121*t3591;
  t7795 = 0.15121*t3521;
  t7796 = t3693*t7642;
  t7805 = t7790 + t7795 + t3768 + t7796;
  t7807 = t3521*t7805;
  t7810 = t7789 + t7807;
  t3358 = Cos(var1[4]);
  t3486 = Cos(var1[5]);
  t7822 = Sin(var1[5]);
  t7814 = Sin(var1[4]);
  t7857 = t3521*t3358*t3486;
  t7859 = -1.*t3358*t3693*t7822;
  t7860 = t7857 + t7859;
  t7989 = -1.*t5435*t7459;
  t7990 = t7314*t4683;
  t7992 = t7989 + t7990;
  t7993 = t7992*t7814;
  t7994 = t3521*t3486*t7465;
  t7995 = -1.*t3693*t7465*t7822;
  t7996 = t7994 + t7995;
  t7997 = t3358*t7996;
  t7998 = t7993 + t7997;
  t7975 = t7459*t7814;
  t7976 = t7314*t7860;
  t7977 = t7975 + t7976;
  t7983 = t7314*t7814;
  t7984 = -1.*t7459*t7860;
  t7985 = t7983 + t7984;
  t8192 = Sin(var1[3]);
  t8196 = t3486*t3693*t7465;
  t8197 = t3521*t7465*t7822;
  t8198 = t8196 + t8197;
  t8200 = t8192*t8198;
  t8224 = Cos(var1[3]);
  t8227 = t3358*t7992;
  t8228 = -1.*t7814*t7996;
  t8229 = t8227 + t8228;
  t8237 = t8224*t8229;
  t8241 = t8200 + t8237;
  t8248 = t8224*t8198;
  t8250 = -1.*t8192*t8229;
  t8256 = t8248 + t8250;
  t8270 = -1.*t3521*t3486;
  t8273 = t3693*t7822;
  t8274 = t8270 + t8273;
  t8263 = t3486*t3693*t7992;
  t8268 = t3521*t7992*t7822;
  t8269 = t8263 + t8268;
  t8275 = t3486*t7805;
  t8276 = t7678*t7822;
  t8277 = t8275 + t8276;
  t8327 = t3486*t7678;
  t8331 = -1.*t7805*t7822;
  t8343 = t8327 + t8331;
  t8280 = -1.*t8274*t8277;
  t8281 = t3486*t3693;
  t8283 = t3521*t7822;
  t8323 = t8281 + t8283;
  t8390 = -1.*t8323*t8343;
  t8432 = t8280 + t8390;
  t8471 = t8269*t8432;
  t8472 = 0.28121*t7459;
  t8473 = t7082*t7459;
  t8478 = -0.305*t7314*t4683;
  t8479 = t8472 + t8473 + t8478;
  t8493 = t8479*t7519;
  t8496 = t8269*t8277;
  t8505 = t3521*t3486*t7992;
  t8506 = -1.*t3693*t7992*t7822;
  t8507 = t8505 + t8506;
  t8508 = t8507*t8343;
  t8513 = t8493 + t8496 + t8508;
  t8517 = t8274*t8513;
  t8523 = t8471 + t8517;
  t8553 = t7519*t7814;
  t8556 = t3358*t8507;
  t8557 = t8553 + t8556;
  t8565 = t8479*t7814;
  t8568 = t3358*t8343;
  t8569 = t8565 + t8568;
  t8571 = t3358*t8479;
  t8572 = -1.*t7814*t8343;
  t8573 = t8571 + t8572;
  t8570 = -1.*t3358*t8323*t8569;
  t8574 = t7814*t8323*t8573;
  t8575 = t8280 + t8570 + t8574;
  t8576 = t8557*t8575;
  t8578 = t8557*t8569;
  t8579 = t3358*t7519;
  t8580 = -1.*t7814*t8507;
  t8581 = t8579 + t8580;
  t8699 = t8581*t8573;
  t8702 = t8496 + t8578 + t8699;
  t8703 = t3358*t8323*t8702;
  t8711 = t8576 + t8703;
  t8729 = -1.*t7992*t7814;
  t8730 = -1.*t3358*t7996;
  t8732 = t8729 + t8730;
  t8746 = -1.*t8479*t7814;
  t8747 = -1.*t3358*t8343;
  t8748 = t8746 + t8747;
  t8804 = -1.*t3486*t3693*t7465;
  t8809 = -1.*t3521*t7465*t7822;
  t8810 = t8804 + t8809;
  t8832 = -1.*t3486*t7805;
  t8833 = -1.*t7678*t7822;
  t8834 = t8832 + t8833;
  t8850 = -1.*t3486*t3693*t7992;
  t8851 = -1.*t3521*t7992*t7822;
  t8856 = t8850 + t8851;
  t8837 = -1.*t8323*t8277;
  t8844 = -1.*t8274*t8343;
  t8838 = t3521*t3486;
  t8841 = -1.*t3693*t7822;
  t8842 = t8838 + t8841;
  t8849 = t8507*t8277;
  t8858 = t8269*t8343;
  t8811 = var2[0]*t3358*t8810;
  t8812 = t8192*t7814*t8810;
  t8816 = t8224*t7996;
  t8817 = t8812 + t8816;
  t8818 = var2[1]*t8817;
  t8820 = -1.*t8224*t7814*t8810;
  t8823 = t8192*t7996;
  t8825 = t8820 + t8823;
  t8829 = var2[2]*t8825;
  t8831 = t8507*t8432;
  t8910 = -0.15121*t3693;
  t8912 = -1.*t3693*t7642;
  t8914 = t8910 + t8912;
  t8906 = t7795 + t7656;
  t8843 = -1.*t8842*t8343;
  t8931 = t3486*t8914;
  t8932 = -1.*t8906*t7822;
  t8933 = t8931 + t8932;
  t8936 = t3486*t8906;
  t8940 = t8914*t7822;
  t8941 = t8936 + t8940;
  t8857 = t8856*t8343;
  t8863 = t8323*t8513;
  t8866 = t3358*t8856*t8575;
  t8867 = Power(t3358,2);
  t8869 = Power(t7814,2);
  t8942 = -1.*t8274*t8941;
  t8871 = -1.*t3358*t8842*t8569;
  t8872 = t7814*t8842*t8573;
  t8958 = t8269*t8941;
  t8880 = t3358*t8856*t8569;
  t8881 = -1.*t7814*t8856*t8573;
  t8888 = t3358*t8842*t8702;
  t9123 = t5435*t7459;
  t9125 = -1.*t7314*t4683;
  t9127 = t9123 + t9125;
  t9141 = t3521*t3486*t9127;
  t9143 = -1.*t3693*t9127*t7822;
  t9145 = t9141 + t9143;
  t9152 = t3486*t3693*t9127;
  t9153 = t3521*t9127*t7822;
  t9154 = t9152 + t9153;
  t9160 = t3358*t7465;
  t9166 = -1.*t7814*t9145;
  t9167 = t9160 + t9166;
  t9191 = -0.28121*t7459;
  t9192 = -1.*t7082*t7459;
  t9195 = 0.305*t7314*t4683;
  t9199 = t9191 + t9192 + t9195;
  t9214 = t3486*t3693*t9199;
  t9222 = t3521*t9199*t7822;
  t9247 = t9214 + t9222;
  t9263 = t3521*t3486*t9199;
  t9269 = -1.*t3693*t9199*t7822;
  t9272 = t9263 + t9269;
  t9261 = -1.*t8274*t9247;
  t9312 = 0.28121*t7314;
  t9317 = t9312 + t7575 + t7612;
  t9330 = t9247*t8269;
  t9334 = t8198*t8277;
  t9371 = t9317*t7814;
  t9373 = t3358*t9272;
  t9374 = t9371 + t9373;
  t9385 = t3358*t9317;
  t9387 = -1.*t7814*t9272;
  t9427 = t9385 + t9387;
  t9129 = 0.15121*t9127;
  t9131 = 0.15121*t7992;
  t9133 = t9129 + t9131;
  t9135 = var2[9]*t9133;
  t9521 = 0.305*t5435*t7459;
  t9522 = t9521 + t8478;
  t9527 = t3486*t3693*t9522;
  t9529 = t3521*t9522*t7822;
  t9530 = t9527 + t9529;
  t9542 = t3521*t3486*t9522;
  t9543 = -1.*t3693*t9522*t7822;
  t9546 = t9542 + t9543;
  t9551 = t3486*t3693*t7519;
  t9602 = t3521*t7519*t7822;
  t9618 = t9551 + t9602;
  t9537 = -1.*t8274*t9530;
  t9624 = -0.305*t7314*t5435;
  t9631 = -0.305*t7459*t4683;
  t9632 = t9624 + t9631;
  t9647 = t3521*t3486*t7519;
  t9648 = -1.*t3693*t7519*t7822;
  t9650 = t9647 + t9648;
  t9640 = t9530*t8269;
  t9643 = t9618*t8277;
  t9659 = t9632*t7814;
  t9660 = t3358*t9546;
  t9661 = t9659 + t9660;
  t9663 = t3358*t9632;
  t9664 = -1.*t7814*t9546;
  t9665 = t9663 + t9664;
  t9670 = t9127*t7814;
  t9672 = t3358*t9650;
  t9673 = t9670 + t9672;
  t9300 = t8479*t7992;
  t9725 = t7465*t7642;
  t9727 = t9300 + t9725;
  t9729 = t7519*t9727;
  t9730 = -1.*t7992*t7642;
  t9732 = -1.*t8479*t7519;
  t9734 = t9730 + t9732;
  t9735 = t7992*t9734;
  t9737 = -0.15121 + t9729 + t9735;
  t9741 = -1.*t3521*t7992*t7678;
  t9742 = -1.*t3693*t7992*t7805;
  t9743 = t9732 + t9741 + t9742;
  t9745 = t7992*t9743;
  t9746 = t3521*t7465*t7678;
  t9747 = t3693*t7465*t7805;
  t9748 = t9300 + t9746 + t9747;
  t9749 = t7519*t9748;
  t9750 = t9745 + t9749;
  t3868 = t3640 + t3768;
  t7820 = t7790 + t3768;
  t9802 = t8192*t7814*t8323;
  t9803 = t8224*t8274;
  t9804 = t9802 + t9803;
  t9812 = -1.*t8224*t7814*t8323;
  t9817 = t8192*t8274;
  t9818 = t9812 + t9817;
  t9757 = t3486*t8192*t7814;
  t9758 = t8224*t7822;
  t9759 = t9757 + t9758;
  t9797 = t8224*t3486;
  t9798 = -1.*t8192*t7814*t7822;
  t9799 = t9797 + t9798;
  t9339 = t7996*t8343;
  t9846 = -1.*t8269*t8277;
  t9848 = -1.*t8507*t8343;
  t9850 = t9732 + t9846 + t9848;
  t9852 = t8198*t9850;
  t9853 = t9300 + t9334 + t9339;
  t9854 = t8269*t9853;
  t9855 = t9852 + t9854;
  t9831 = t3521*t9759;
  t9833 = t3693*t9799;
  t9834 = t9831 + t9833;
  t9487 = t7998*t8569;
  t9490 = t8229*t8573;
  t9869 = -1.*t8557*t8569;
  t9870 = -1.*t8581*t8573;
  t9872 = t9846 + t9869 + t9870;
  t9874 = t7998*t9872;
  t9875 = t9334 + t9487 + t9490;
  t9876 = t8557*t9875;
  t9878 = t9874 + t9876;
  t9859 = -1.*t3358*t7459*t8192;
  t9860 = t7314*t9834;
  t9861 = t9859 + t9860;
  t9864 = -1.*t7314*t3358*t8192;
  t9865 = -1.*t7459*t9834;
  t9867 = t9864 + t9865;
  t9896 = -1.*t8507*t8277;
  t9898 = -1.*t8269*t8343;
  t9904 = t7996*t8277;
  t9906 = t8198*t8343;
  t9886 = var2[0]*t3358*t8842;
  t9887 = t8192*t8323;
  t9888 = -1.*t8224*t7814*t8842;
  t9889 = t9887 + t9888;
  t9890 = var2[2]*t9889;
  t9891 = t8224*t8323;
  t9892 = t8192*t7814*t8842;
  t9893 = t9891 + t9892;
  t9894 = var2[1]*t9893;
  t9897 = -1.*t8856*t8343;
  t9902 = t7996*t9850;
  t9905 = t8810*t8343;
  t9910 = t8507*t9853;
  t9974 = -1.*t8269*t8941;
  t9916 = -1.*t3358*t8856*t8569;
  t9918 = t7814*t8856*t8573;
  t9978 = t8198*t8941;
  t9949 = t3358*t8810*t8569;
  t9950 = -1.*t7814*t8810*t8573;
  t9953 = t3358*t8810*t9872;
  t9954 = t3358*t8856*t9875;
  t8763 = -1.*t7519*t7814;
  t8766 = -1.*t3358*t8507;
  t8767 = t8763 + t8766;
  t10020 = t8479*t7465;
  t10023 = t7992*t9317;
  t10027 = -1.*t8479*t7992;
  t10036 = Power(t3521,2);
  t10038 = Power(t3693,2);
  t10031 = -1.*t9317*t7519;
  t10055 = t9247*t8198;
  t10057 = t9154*t8277;
  t9138 = t7465*t7814;
  t9148 = t3358*t9145;
  t9150 = t9138 + t9148;
  t10062 = -1.*t9247*t8269;
  t10064 = -1.*t8198*t8277;
  t10092 = t7992*t9632;
  t10096 = -1.*t9127*t8479;
  t10098 = -1.*t9632*t7519;
  t10121 = t9530*t8198;
  t10127 = -1.*t9530*t8269;
  t10130 = -1.*t9618*t8277;
  t9688 = t3358*t9127;
  t9689 = -1.*t7814*t9650;
  t9694 = t9688 + t9689;
  t9504 = 0.28121*t5435;
  t9505 = t7082*t5435;
  t10166 = Power(t4683,2);
  t10167 = 0.305*t10166;
  t10168 = t9504 + t9505 + t10167;
  t10171 = t3693*t7678;
  t10172 = -1.*t3521*t7805;
  t10173 = t10171 + t10172;
  t9511 = var2[0]*t8557;
  t10176 = -1.*t8224*t3486*t7814;
  t10178 = t8192*t7822;
  t10180 = t10176 + t10178;
  t10182 = t3486*t8192;
  t10183 = t8224*t7814*t7822;
  t10185 = t10182 + t10183;
  t9513 = t8192*t8269;
  t9514 = t8224*t8581;
  t9515 = t9513 + t9514;
  t9516 = var2[2]*t9515;
  t9517 = t8224*t8269;
  t9518 = -1.*t8192*t8581;
  t9519 = t9517 + t9518;
  t9520 = var2[1]*t9519;
  t10065 = -1.*t7996*t8343;
  t10200 = t8274*t8277;
  t10201 = t8323*t8343;
  t10202 = t10200 + t10201;
  t10203 = t8198*t10202;
  t10204 = t10027 + t10064 + t10065;
  t10205 = t8274*t10204;
  t10206 = t10203 + t10205;
  t10192 = t3521*t10180;
  t10193 = t3693*t10185;
  t10194 = t10192 + t10193;
  t10080 = -1.*t7998*t8569;
  t10081 = -1.*t8229*t8573;
  t10227 = t3358*t8323*t8569;
  t10228 = -1.*t7814*t8323*t8573;
  t10229 = t10200 + t10227 + t10228;
  t10231 = t7998*t10229;
  t10234 = t10064 + t10080 + t10081;
  t10236 = t3358*t8323*t10234;
  t10238 = t10231 + t10236;
  t10209 = t8224*t3358*t7459;
  t10210 = t7314*t10194;
  t10211 = t10209 + t10210;
  t10215 = t7314*t8224*t3358;
  t10216 = -1.*t7459*t10194;
  t10217 = t10215 + t10216;
  t8011 = var2[0]*t7998;
  t8245 = var2[2]*t8241;
  t8262 = var2[1]*t8256;
  t10248 = t8274*t9247;
  t10255 = -1.*t9247*t8198;
  t10258 = -1.*t9154*t8277;
  t10299 = t8274*t9530;
  t10307 = -1.*t9530*t8198;
  t10363 = t8323*t8277;
  t10366 = t8274*t8343;
  t10371 = -1.*t7996*t8277;
  t10374 = -1.*t8198*t8343;
  t10351 = var2[0]*t3358*t8856;
  t10352 = t8192*t7814*t8856;
  t10354 = t8224*t8507;
  t10355 = t10352 + t10354;
  t10356 = var2[1]*t10355;
  t10357 = -1.*t8224*t7814*t8856;
  t10358 = t8192*t8507;
  t10359 = t10357 + t10358;
  t10360 = var2[2]*t10359;
  t10361 = t7996*t10202;
  t10364 = t8842*t8343;
  t10372 = -1.*t8810*t8343;
  t10378 = t8323*t10204;
  t10381 = t3358*t8810*t10229;
  t10411 = t8274*t8941;
  t10385 = t3358*t8842*t8569;
  t10386 = -1.*t7814*t8842*t8573;
  t10416 = -1.*t8198*t8941;
  t10392 = -1.*t3358*t8810*t8569;
  t10393 = t7814*t8810*t8573;
  t10396 = t3358*t8842*t10234;
  p_output1[0]=t3358*t3486*t3868 + 0.28121*t7459*t7814 - 1.*t3358*t7820*t7822 + 0.15121*(-1.*t3358*t3486*t3693 - 1.*t3358*t3521*t7822) - 0.28121*t7565*t7860 - 0.50321*t6570*t7977 - 0.50321*t4683*t7985 - 0.19821*(t5435*t7977 - 1.*t4683*t7985) + t8011 + t8245 + t8262 + var1[0] + t8711*var2[3] + ((-1.*t8192*t8198 - 1.*t8224*t8229)*var2[1] + t8256*var2[2])*var2[3] + t8523*var2[4] + (t8229*var2[0] - 1.*t8192*t8732*var2[1] + t8224*t8732*var2[2] + (t8575*t8581 - 1.*t7814*t8323*t8702 + t8557*(t7814*t8323*t8569 + t7814*t8323*t8748) + t3358*t8323*(t8557*t8573 + t8569*t8581 + t8581*t8748 + t8573*t8767))*var2[3])*var2[4] + t7519*t7810*var2[5] + (t8811 + t8818 + t8829 + (t8866 + t8557*(t8837 + t8844 - 1.*t8323*t8834*t8867 - 1.*t8323*t8834*t8869 + t8871 + t8872) + t3358*t8323*(t3358*t8557*t8834 - 1.*t7814*t8581*t8834 + t8849 + t8858 + t8880 + t8881) + t8888)*var2[3] + (t8831 + t8269*(-1.*t8323*t8834 + t8837 + t8843 + t8844) + t8274*(t8507*t8834 + t8849 + t8857 + t8858) + t8863)*var2[4])*var2[5] + t7535*var2[9] + (t8811 + t8818 + t8829 + (t8866 + t8888 + t8557*(t8837 + t8871 + t8872 - 1.*t8323*t8867*t8933 - 1.*t8323*t8869*t8933 + t8942) + t3358*t8323*(t8849 + t8880 + t8881 + t3358*t8557*t8933 - 1.*t7814*t8581*t8933 + t8958))*var2[3] + (t8831 + t8863 + t8269*(t8837 + t8843 - 1.*t8323*t8933 + t8942) + t8274*(t8849 + t8857 + t8507*t8933 + t8958))*var2[4] + t7519*(-1.*t3521*t7678 - 1.*t3693*t7805 + t3521*t8906 - 1.*t3693*t8914)*var2[5])*var2[9] + t7159*var2[10] + (t9135 + t9150*var2[0] + (t8224*t9154 - 1.*t8192*t9167)*var2[1] + (t8192*t9154 + t8224*t9167)*var2[2] + (t7998*t8575 + t8557*(t9261 - 1.*t3358*t8323*t9374 + t7814*t8323*t9427) + t3358*t8323*(t9330 + t9334 + t8557*t9374 + t8581*t9427 + t9487 + t9490))*var2[3] + (t8198*t8432 + t8269*(t9261 - 1.*t8323*t9272) + t8274*(t8507*t9272 + t9300 + t7519*t9317 + t9330 + t9334 + t9339))*var2[4] + t7810*t7992*var2[5])*var2[10] + (t9135 + t9511 + t9516 + t9520 + (t8557*(t9537 - 1.*t3358*t8323*t9661 + t7814*t8323*t9665) + t8575*t9673 + t3358*t8323*(t9640 + t9643 + t8557*t9661 + t8581*t9665 + t8569*t9673 + t8573*t9694))*var2[3] + (t8269*(t9537 - 1.*t8323*t9546) + t8432*t9618 + t8274*(t8479*t9127 + t8507*t9546 + t7519*t9632 + t9640 + t9643 + t8343*t9650))*var2[4] + t7810*t9127*var2[5] + (-0.305*Power(t5435,2) + t9504 + t9505)*var2[10])*var2[11] + t7998*var3[0] + t8256*var3[1] + t8241*var3[2] + t8711*var3[3] + t8523*var3[4] + t7519*t7810*var3[5] + t7535*var3[9] + t7159*var3[10] - 1.*var4[0];
  p_output1[1]=-0.28121*t3358*t7459*t8192 + t3868*t9759 + t7820*t9799 + 0.15121*(-1.*t3693*t9759 + t3521*t9799) - 0.28121*t7565*t9834 - 0.50321*t6570*t9861 - 0.50321*t4683*t9867 - 0.19821*(t5435*t9861 - 1.*t4683*t9867) + var1[1] + t3358*t8323*var2[0] + t9804*var2[1] + t9818*var2[2] + t9878*var2[3] + ((-1.*t8192*t8274 + t7814*t8224*t8323)*var2[1] + t9804*var2[2])*var2[3] + t9855*var2[4] + (-1.*t7814*t8323*var2[0] + t3358*t8192*t8323*var2[1] - 1.*t3358*t8224*t8323*var2[2] + (t8557*(t8229*t8569 + t7998*t8573 + t8573*t8732 + t8229*t8748) + t7998*(-1.*t8557*t8573 - 1.*t8569*t8581 - 1.*t8581*t8748 - 1.*t8573*t8767) + t8229*t9872 + t8581*t9875)*var2[3])*var2[4] + t9750*var2[5] + (t9886 + t9890 + t9894 + (t7998*(-1.*t3358*t8557*t8834 + t7814*t8581*t8834 + t9896 + t9898 + t9916 + t9918) + t8557*(t3358*t7998*t8834 - 1.*t7814*t8229*t8834 + t9904 + t9906 + t9949 + t9950) + t9953 + t9954)*var2[3] + (t8198*(-1.*t8507*t8834 + t9896 + t9897 + t9898) + t9902 + t8269*(t7996*t8834 + t9904 + t9905 + t9906) + t9910)*var2[4])*var2[5] + t9737*var2[9] + (t9886 + t9890 + t9894 + (t9953 + t9954 + t7998*(-1.*t3358*t8557*t8933 + t7814*t8581*t8933 + t9896 + t9916 + t9918 + t9974) + t8557*(t3358*t7998*t8933 - 1.*t7814*t8229*t8933 + t9904 + t9949 + t9950 + t9978))*var2[3] + (t9902 + t9910 + t8198*(-1.*t8507*t8933 + t9896 + t9897 + t9974) + t8269*(t7996*t8933 + t9904 + t9905 + t9978))*var2[4] + (t7519*(-1.*t3693*t7465*t7678 + t3521*t7465*t7805 + t3693*t7465*t8906 + t3521*t7465*t8914) + t7992*(t3693*t7678*t7992 - 1.*t3521*t7805*t7992 - 1.*t3693*t7992*t8906 - 1.*t3521*t7992*t8914))*var2[5])*var2[9] + ((t8557*(t10055 + t10057 + t8569*t9150 + t8573*t9167 + t7998*t9374 + t8229*t9427) + t7998*(t10062 + t10064 + t10080 + t10081 - 1.*t8557*t9374 - 1.*t8581*t9427) + t9150*t9872 + t7998*t9875)*var2[3] + (t8269*(t10020 + t10023 + t10055 + t10057 + t8343*t9145 + t7996*t9272) + t8198*(t10027 + t10031 + t10062 + t10064 + t10065 - 1.*t8507*t9272) + t9154*t9850 + t8198*t9853)*var2[4] + (t7519*(t10020 + t10023 + t3521*t7678*t9127 + t3693*t7805*t9127 + t10036*t7465*t9199 + t10038*t7465*t9199) + t7992*(t10027 + t10031 - 1.*t3521*t7465*t7678 - 1.*t3693*t7465*t7805 - 1.*t10036*t7992*t9199 - 1.*t10038*t7992*t9199) + t7465*t9743 + t7992*t9748)*var2[5] + (t7519*(t10020 + t10023 + t7642*t9127 + t7465*t9199) + t7992*(t10027 + t10031 - 1.*t7465*t7642 - 1.*t7992*t9199) + t7992*t9727 + t7465*t9734)*var2[9])*var2[10] + ((t8557*(t10121 + t8496 + t8578 + t8699 + t7998*t9661 + t8229*t9665) + t7998*(t10127 + t10130 - 1.*t8557*t9661 - 1.*t8581*t9665 - 1.*t8569*t9673 - 1.*t8573*t9694) + t8557*t9872 + t9673*t9875)*var2[3] + (t8269*(t10092 + t10121 + t8493 + t8496 + t8508 + t7996*t9546) + t8198*(t10096 + t10098 + t10127 + t10130 - 1.*t8507*t9546 - 1.*t8343*t9650) + t8269*t9850 + t9618*t9853)*var2[4] + (t7519*(t10092 + t3521*t7678*t7992 + t3693*t7805*t7992 + t8493 + t10036*t7465*t9522 + t10038*t7465*t9522) + t7992*(t10096 + t10098 - 1.*t3521*t7519*t7678 - 1.*t3693*t7519*t7805 - 1.*t10036*t7992*t9522 - 1.*t10038*t7992*t9522) + t7519*t9743 + t9127*t9748)*var2[5] + (t7519*(t10092 + t7642*t7992 + t8493 + t7465*t9522) + t7992*(t10096 + t10098 - 1.*t7519*t7642 - 1.*t7992*t9522) + t9127*t9727 + t7519*t9734)*var2[9])*var2[11] + t3358*t8323*var3[0] + t9804*var3[1] + t9818*var3[2] + t9878*var3[3] + t9855*var3[4] + t9750*var3[5] + t9737*var3[9] - 1.*var4[1];
  p_output1[2]=0.15121*(t10185*t3521 - 1.*t10180*t3693) + t10180*t3868 - 0.50321*t10217*t4683 - 0.19821*(-1.*t10217*t4683 + t10211*t5435) - 0.50321*t10211*t6570 - 0.28121*t10194*t7565 + t10185*t7820 + 0.28121*t3358*t7459*t8224 + t9511 + t9516 + t9520 + var1[2] + t10238*var2[3] + ((-1.*t8192*t8269 - 1.*t8224*t8581)*var2[1] + t9519*var2[2])*var2[3] + t10206*var2[4] + (t8581*var2[0] - 1.*t8192*t8767*var2[1] + t8224*t8767*var2[2] + (t10229*t8229 - 1.*t10234*t7814*t8323 + t3358*t8323*(-1.*t8229*t8569 - 1.*t7998*t8573 - 1.*t8573*t8732 - 1.*t8229*t8748) + t7998*(-1.*t7814*t8323*t8569 - 1.*t7814*t8323*t8748))*var2[3])*var2[4] + t10173*t7992*var2[5] + (t10351 + t10356 + t10360 + (t10381 + t10396 + t3358*t8323*(t10371 + t10374 + t10392 + t10393 - 1.*t3358*t7998*t8834 + t7814*t8229*t8834) + t7998*(t10363 + t10366 + t10385 + t10386 + t8323*t8834*t8867 + t8323*t8834*t8869))*var2[3] + (t10361 + t10378 + t8274*(t10371 + t10372 + t10374 - 1.*t7996*t8834) + t8198*(t10363 + t10364 + t10366 + t8323*t8834))*var2[4])*var2[5] + (t10351 + t10356 + t10360 + (t10381 + t10396 + t3358*t8323*(t10371 + t10392 + t10393 + t10416 - 1.*t3358*t7998*t8933 + t7814*t8229*t8933) + t7998*(t10363 + t10385 + t10386 + t10411 + t8323*t8867*t8933 + t8323*t8869*t8933))*var2[3] + (t10361 + t10378 + t8274*(t10371 + t10372 + t10416 - 1.*t7996*t8933) + t8198*(t10363 + t10364 + t10411 + t8323*t8933))*var2[4] + t7992*(t3521*t7678 + t3693*t7805 - 1.*t3521*t8906 + t3693*t8914)*var2[5])*var2[9] + t10168*var2[10] + (t8011 + t8245 + t8262 + (t10229*t9150 + t3358*t8323*(t10255 + t10258 - 1.*t8569*t9150 - 1.*t8573*t9167 - 1.*t7998*t9374 - 1.*t8229*t9427) + t7998*(t10248 + t3358*t8323*t9374 - 1.*t7814*t8323*t9427))*var2[3] + (t10202*t9154 + t8198*(t10248 + t8323*t9272) + t8274*(t10255 + t10258 - 1.*t7465*t8479 - 1.*t8343*t9145 - 1.*t7996*t9272 - 1.*t7992*t9317))*var2[4] + t10173*t7465*var2[5])*var2[10] - 0.305*var2[11] + (t9673*var2[0] + (t8224*t9618 - 1.*t8192*t9694)*var2[1] + (t8192*t9618 + t8224*t9694)*var2[2] + (t10229*t8557 + t7998*(t10299 + t3358*t8323*t9661 - 1.*t7814*t8323*t9665) + t3358*t8323*(t10307 - 1.*t7998*t9661 - 1.*t8229*t9665 + t9846 + t9869 + t9870))*var2[3] + (t10202*t8269 + t8198*(t10299 + t8323*t9546) + t8274*(t10307 - 1.*t7996*t9546 - 1.*t7992*t9632 + t9732 + t9846 + t9848))*var2[4] + t10173*t7519*var2[5] + (-0.28121*t4683 + 0.305*t4683*t5435 - 1.*t4683*t7082)*var2[10])*var2[11] + t8557*var3[0] + t9519*var3[1] + t9515*var3[2] + t10238*var3[3] + t10206*var3[4] + t10173*t7992*var3[5] + t10168*var3[10] - 0.305*var3[11] - 1.*var4[2];
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

#include "ddh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
