/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:36 GMT+02:00
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
  double t2723;
  double t1369;
  double t1820;
  double t2819;
  double t2722;
  double t2878;
  double t2950;
  double t1033;
  double t3533;
  double t3538;
  double t3591;
  double t1122;
  double t3968;
  double t4124;
  double t2979;
  double t4094;
  double t4104;
  double t370;
  double t4225;
  double t4329;
  double t4866;
  double t4922;
  double t5013;
  double t5019;
  double t5066;
  double t5081;
  double t5085;
  double t5508;
  double t5509;
  double t5519;
  double t5990;
  double t5995;
  double t6007;
  double t6010;
  double t6021;
  double t6025;
  double t6033;
  double t6036;
  double t6038;
  double t5948;
  double t6009;
  double t6039;
  double t6048;
  double t5657;
  double t5716;
  double t5774;
  double t5814;
  double t6050;
  double t6057;
  double t6101;
  double t6102;
  double t6103;
  double t6104;
  double t6120;
  double t6124;
  double t6129;
  double t6139;
  double t6143;
  double t6146;
  double t6155;
  double t6166;
  double t6168;
  double t6169;
  double t6173;
  double t6237;
  double t6240;
  double t6244;
  double t5614;
  double t5646;
  double t5647;
  double t5649;
  double t5651;
  double t5652;
  double t6219;
  double t6221;
  double t6234;
  double t6188;
  double t6194;
  double t6195;
  double t5608;
  double t5653;
  double t5656;
  double t6098;
  double t6174;
  double t6182;
  double t6258;
  double t6261;
  double t6263;
  double t6264;
  double t6265;
  double t6266;
  double t6688;
  double t6690;
  double t6691;
  double t6314;
  double t6569;
  double t6576;
  double t6580;
  double t6581;
  double t6898;
  double t6906;
  double t6911;
  double t6923;
  double t6972;
  double t6975;
  double t6978;
  double t6363;
  double t6397;
  double t6513;
  double t6987;
  double t6990;
  double t6582;
  double t6595;
  double t6605;
  double t6757;
  double t7047;
  double t7048;
  double t7049;
  double t7052;
  double t7053;
  double t6935;
  double t7076;
  double t7078;
  double t7079;
  double t6758;
  double t6892;
  double t7051;
  double t7054;
  double t7060;
  double t7061;
  double t6943;
  double t6969;
  double t7089;
  double t7091;
  double t7095;
  double t7102;
  double t7103;
  double t7116;
  double t7121;
  double t7135;
  double t7145;
  double t7148;
  double t7150;
  double t7159;
  double t7160;
  double t7161;
  double t7170;
  double t7175;
  double t7176;
  double t7044;
  double t7045;
  double t7217;
  double t7218;
  double t7222;
  double t7343;
  double t7386;
  double t7238;
  double t7239;
  double t7240;
  double t7241;
  double t7236;
  double t7301;
  double t7446;
  double t7478;
  double t7479;
  double t7480;
  double t7464;
  double t7465;
  double t7466;
  double t7471;
  double t7473;
  double t7475;
  double t7489;
  double t7490;
  double t7496;
  double t7481;
  double t7488;
  double t7502;
  double t7528;
  double t7529;
  double t7531;
  double t7533;
  double t7534;
  double t7540;
  double t7615;
  double t7616;
  double t7617;
  double t7641;
  double t7642;
  double t7644;
  double t7448;
  double t7662;
  double t7663;
  double t7664;
  double t7672;
  double t7719;
  double t7745;
  double t7846;
  double t7847;
  double t7849;
  double t7857;
  double t7862;
  double t7863;
  double t7657;
  double t7658;
  double t7654;
  double t7665;
  double t7894;
  double t7895;
  double t7899;
  double t7883;
  double t7884;
  double t7885;
  double t7900;
  double t7905;
  double t7906;
  double t7913;
  double t7914;
  double t7915;
  double t7917;
  double t7918;
  double t7921;
  double t7925;
  double t7927;
  double t7929;
  double t5148;
  double t5152;
  double t5185;
  double t7065;
  double t7066;
  double t7067;
  double t6247;
  double t6249;
  double t6250;
  double t7934;
  double t7937;
  double t6531;
  double t6544;
  double t6548;
  double t7903;
  double t8275;
  double t8309;
  double t8313;
  double t8266;
  double t8330;
  double t8334;
  double t8276;
  double t8279;
  double t8281;
  double t8321;
  double t7656;
  double t7661;
  double t7181;
  double t7186;
  double t7197;
  double t8483;
  double t8484;
  double t8317;
  double t8515;
  double t8522;
  double t8322;
  double t8325;
  double t8556;
  double t8561;
  double t7071;
  double t7072;
  double t7073;
  double t8569;
  double t8570;
  double t7202;
  double t7203;
  double t7204;
  double t8530;
  double t8531;
  double t8532;
  double t8535;
  double t8604;
  double t8605;
  double t8618;
  double t8610;
  double t8602;
  double t8606;
  double t8661;
  double t8668;
  double t8671;
  double t7622;
  double t7623;
  double t7625;
  double t8624;
  double t8625;
  double t8634;
  double t8635;
  double t8713;
  double t8722;
  double t8727;
  double t8733;
  double t8728;
  double t8731;
  double t8709;
  double t8723;
  double t8762;
  double t8765;
  double t7671;
  double t7823;
  double t7825;
  double t8821;
  double t8878;
  double t8062;
  double t8067;
  double t8080;
  double t7460;
  double t7461;
  double t7462;
  double t8909;
  double t8912;
  double t9141;
  double t8785;
  double t9178;
  double t9142;
  double t9143;
  double t9144;
  double t9183;
  double t9185;
  double t9153;
  double t9172;
  double t8710;
  double t9173;
  double t9174;
  double t9386;
  double t9387;
  double t7092;
  double t9399;
  double t9400;
  double t9188;
  double t9422;
  double t9431;
  double t9435;
  double t9439;
  double t9382;
  double t9383;
  double t9470;
  double t9703;
  double t9719;
  double t7967;
  double t7968;
  double t7950;
  double t7951;
  double t7952;
  double t9756;
  double t9758;
  double t9774;
  double t9778;
  double t9781;
  double t7455;
  double t7456;
  double t7457;
  double t9407;
  t2723 = Cos(var1[10]);
  t1369 = Cos(var1[11]);
  t1820 = Sin(var1[10]);
  t2819 = Sin(var1[11]);
  t2722 = t1369*t1820;
  t2878 = -1.*t2723*t2819;
  t2950 = t2722 + t2878;
  t1033 = Cos(var1[5]);
  t3533 = t2723*t1369;
  t3538 = t1820*t2819;
  t3591 = t3533 + t3538;
  t1122 = Sin(var1[9]);
  t3968 = Sin(var1[5]);
  t4124 = Cos(var1[3]);
  t2979 = -1.*t1033*t1122*t2950;
  t4094 = t3591*t3968;
  t4104 = t2979 + t4094;
  t370 = Sin(var1[3]);
  t4225 = Cos(var1[9]);
  t4329 = Cos(var1[4]);
  t4866 = t4225*t4329*t2950;
  t4922 = Sin(var1[4]);
  t5013 = t1033*t3591;
  t5019 = t1122*t2950*t3968;
  t5066 = t5013 + t5019;
  t5081 = -1.*t4922*t5066;
  t5085 = t4866 + t5081;
  t5508 = -1.*t4225*t2950*t4922;
  t5509 = -1.*t4329*t5066;
  t5519 = t5508 + t5509;
  t5990 = -0.0641*t1369;
  t5995 = -0.28*t2819;
  t6007 = t5990 + t5995;
  t6010 = -1.*t1369;
  t6021 = 1. + t6010;
  t6025 = -0.575*t6021;
  t6033 = -0.295*t1369;
  t6036 = -0.0641*t2819;
  t6038 = t6025 + t6033 + t6036;
  t5948 = 0.325*t1820;
  t6009 = t2723*t6007;
  t6039 = t1820*t6038;
  t6048 = t5948 + t6009 + t6039;
  t5657 = t4329*t1122;
  t5716 = t4225*t4922*t3968;
  t5774 = t5657 + t5716;
  t5814 = 0.068*t1122;
  t6050 = t4225*t6048;
  t6057 = t5814 + t6050;
  t6101 = -1.*t2723;
  t6102 = 1. + t6101;
  t6103 = -0.325*t6102;
  t6104 = -1.*t1820*t6007;
  t6120 = t2723*t6038;
  t6124 = t6103 + t6104 + t6120;
  t6129 = t1033*t6124;
  t6139 = -1.*t4225;
  t6143 = 1. + t6139;
  t6146 = 0.1575*t6143;
  t6155 = 0.2255*t4225;
  t6166 = -1.*t1122*t6048;
  t6168 = t6146 + t6155 + t6166;
  t6169 = -1.*t6168*t3968;
  t6173 = t6129 + t6169;
  t6237 = t4329*t6057;
  t6240 = -1.*t4922*t6173;
  t6244 = t6237 + t6240;
  t5614 = -1.*t1369*t1820;
  t5646 = t2723*t2819;
  t5647 = t5614 + t5646;
  t5649 = t1033*t5647;
  t5651 = t1122*t3591*t3968;
  t5652 = t5649 + t5651;
  t6219 = t1122*t4922;
  t6221 = -1.*t4225*t4329*t3968;
  t6234 = t6219 + t6221;
  t6188 = t6057*t4922;
  t6194 = t4329*t6173;
  t6195 = t6188 + t6194;
  t5608 = t4225*t3591*t4922;
  t5653 = t4329*t5652;
  t5656 = t5608 + t5653;
  t6098 = -1.*t6057*t4922;
  t6174 = -1.*t4329*t6173;
  t6182 = t6098 + t6174;
  t6258 = t4225*t4329*t3591;
  t6261 = -1.*t4922*t5652;
  t6263 = t6258 + t6261;
  t6264 = t1033*t6168;
  t6265 = t6124*t3968;
  t6266 = t6264 + t6265;
  t6688 = t1033*t1122*t2950;
  t6690 = -1.*t3591*t3968;
  t6691 = t6688 + t6690;
  t6314 = -1.*t4225*t1033*t6266;
  t6569 = -1.*t1033*t1122*t3591;
  t6576 = t5647*t3968;
  t6580 = t6569 + t6576;
  t6581 = t6266*t6580;
  t6898 = -1.*t1033*t6168;
  t6906 = -1.*t6124*t3968;
  t6911 = t6898 + t6906;
  t6923 = t4225*t3968*t6266;
  t6972 = t1033*t1122*t3591;
  t6975 = -1.*t5647*t3968;
  t6978 = t6972 + t6975;
  t6363 = -1.*t6234*t6195;
  t6397 = -1.*t5774*t6244;
  t6513 = t6314 + t6363 + t6397;
  t6987 = t6173*t6580;
  t6990 = t6266*t5652;
  t6582 = t6195*t5656;
  t6595 = t6244*t6263;
  t6605 = t6581 + t6582 + t6595;
  t6757 = -1.*t1122*t6057;
  t7047 = -0.068*t1122;
  t7048 = -1.*t4225*t6048;
  t7049 = t7047 + t7048;
  t7052 = 0.068*t4225;
  t7053 = t7052 + t6166;
  t6935 = t4225*t6057*t3591;
  t7076 = -1.*t4329*t1122*t2950;
  t7078 = -1.*t4225*t2950*t4922*t3968;
  t7079 = t7076 + t7078;
  t6758 = t4225*t3968*t6173;
  t6892 = t6757 + t6758 + t6314;
  t7051 = -1.*t4225*t6057;
  t7054 = -1.*t1122*t7053;
  t7060 = -1.*t1122*t6057*t3591;
  t7061 = t4225*t7053*t3591;
  t6943 = t6173*t5652;
  t6969 = t6935 + t6581 + t6943;
  t7089 = Power(t1033,2);
  t7091 = -1.*t4225*t7089*t7049;
  t7095 = t1033*t1122*t6266;
  t7102 = -1.*t4225*t1033*t3591*t6266;
  t7103 = t1033*t7049*t6580;
  t7116 = -1.*t1122*t3591*t4922;
  t7121 = t4225*t4329*t3591*t3968;
  t7135 = t7116 + t7121;
  t7145 = t7053*t4922;
  t7148 = -1.*t4329*t7049*t3968;
  t7150 = t7145 + t7148;
  t7159 = t4329*t7053;
  t7160 = t7049*t4922*t3968;
  t7161 = t7159 + t7160;
  t7170 = t4225*t4922;
  t7175 = t4329*t1122*t3968;
  t7176 = t7170 + t7175;
  t7044 = -1.*t4225*t6168;
  t7045 = t6757 + t7044;
  t7217 = -1.*t2723*t1369;
  t7218 = -1.*t1820*t2819;
  t7222 = t7217 + t7218;
  t7343 = 0.325*t2723;
  t7386 = t7343 + t6104 + t6120;
  t7238 = -0.325*t1820;
  t7239 = -1.*t2723*t6007;
  t7240 = -1.*t1820*t6038;
  t7241 = t7238 + t7239 + t7240;
  t7236 = t4225*t6057*t5647;
  t7301 = Power(t4225,2);
  t7446 = t7301*t7386*t3591;
  t7478 = -1.*t1033*t1122*t7386;
  t7479 = t7241*t3968;
  t7480 = t7478 + t7479;
  t7464 = -1.*t1033*t1122*t5647;
  t7465 = t7222*t3968;
  t7466 = t7464 + t7465;
  t7471 = t1033*t7241;
  t7473 = t1122*t7386*t3968;
  t7475 = t7471 + t7473;
  t7489 = t1033*t7222;
  t7490 = t1122*t5647*t3968;
  t7496 = t7489 + t7490;
  t7481 = -1.*t4225*t1033*t7480;
  t7488 = t7480*t6580;
  t7502 = t6266*t7466;
  t7528 = t4225*t5647*t4922;
  t7529 = t4329*t7496;
  t7531 = t7528 + t7529;
  t7533 = t4225*t7386*t4922;
  t7534 = t4329*t7475;
  t7540 = t7533 + t7534;
  t7615 = t4225*t4329*t7386;
  t7616 = -1.*t4922*t7475;
  t7617 = t7615 + t7616;
  t7641 = -0.28*t1369;
  t7642 = 0.0641*t2819;
  t7644 = t7641 + t7642;
  t7448 = Power(t1122,2);
  t7662 = t1820*t6007;
  t7663 = t2723*t7644;
  t7664 = t7662 + t7663;
  t7672 = t1033*t2950;
  t7719 = t1122*t7222*t3968;
  t7745 = t7672 + t7719;
  t7846 = -1.*t1033*t1122*t7222;
  t7847 = t2950*t3968;
  t7849 = t7846 + t7847;
  t7857 = t4225*t4329*t7222;
  t7862 = -1.*t4922*t7745;
  t7863 = t7857 + t7862;
  t7657 = -1.*t1820*t7644;
  t7658 = t6009 + t7657;
  t7654 = t4225*t6057*t2950;
  t7665 = t7301*t7664*t3591;
  t7894 = -1.*t1033*t1122*t7664;
  t7895 = t7658*t3968;
  t7899 = t7894 + t7895;
  t7883 = t1033*t7658;
  t7884 = t1122*t7664*t3968;
  t7885 = t7883 + t7884;
  t7900 = -1.*t4225*t1033*t7899;
  t7905 = t7899*t6580;
  t7906 = t6266*t4104;
  t7913 = t4225*t2950*t4922;
  t7914 = t4329*t5066;
  t7915 = t7913 + t7914;
  t7917 = t4225*t7664*t4922;
  t7918 = t4329*t7885;
  t7921 = t7917 + t7918;
  t7925 = t4225*t4329*t7664;
  t7927 = -1.*t4922*t7885;
  t7929 = t7925 + t7927;
  t5148 = t4124*t4104;
  t5152 = -1.*t370*t5085;
  t5185 = t5148 + t5152;
  t7065 = t6124*t5647;
  t7066 = -1.*t1122*t6168*t3591;
  t7067 = t7065 + t6935 + t7066;
  t6247 = -1.*t1122*t4922;
  t6249 = t4225*t4329*t3968;
  t6250 = t6247 + t6249;
  t7934 = t6195*t7915;
  t7937 = t6244*t5085;
  t6531 = -1.*t4225*t3591*t4922;
  t6544 = -1.*t4329*t5652;
  t6548 = t6531 + t6544;
  t7903 = t6173*t5066;
  t8275 = -1.*t6266*t6580;
  t8309 = t6266*t5066;
  t8313 = t6173*t4104;
  t8266 = t7906 + t7934 + t7937;
  t8330 = -1.*t6173*t6580;
  t8334 = -1.*t6266*t5652;
  t8276 = -1.*t6195*t5656;
  t8279 = -1.*t6244*t6263;
  t8281 = t8275 + t8276 + t8279;
  t8321 = -1.*t4225*t6057*t3591;
  t7656 = -1.*t1122*t6168*t2950;
  t7661 = t6124*t3591;
  t7181 = t4225*t4329;
  t7186 = -1.*t1122*t4922*t3968;
  t7197 = t7181 + t7186;
  t8483 = -1.*t1122*t6057*t2950;
  t8484 = t4225*t7053*t2950;
  t8317 = t7654 + t7903 + t7906;
  t8515 = t1122*t6057*t3591;
  t8522 = -1.*t4225*t7053*t3591;
  t8322 = -1.*t6173*t5652;
  t8325 = t8321 + t8275 + t8322;
  t8556 = -1.*t4225*t1033*t2950*t6266;
  t8561 = t1033*t7049*t4104;
  t7071 = -1.*t1122*t2950*t4922;
  t7072 = t4225*t4329*t2950*t3968;
  t7073 = t7071 + t7072;
  t8569 = t4225*t1033*t3591*t6266;
  t8570 = -1.*t1033*t7049*t6580;
  t7202 = -1.*t4329*t1122*t3591;
  t7203 = -1.*t4225*t3591*t4922*t3968;
  t7204 = t7202 + t7203;
  t8530 = -1.*t6124*t5647;
  t8531 = t1122*t6168*t3591;
  t8532 = t8530 + t8321 + t8531;
  t8535 = t7654 + t7656 + t7661;
  t8604 = -1.*t7241*t5647;
  t8605 = -1.*t6124*t7222;
  t8618 = t7241*t3591;
  t8610 = t7301*t7386*t2950;
  t8602 = -1.*t4225*t6057*t5647;
  t8606 = -1.*t7301*t7386*t3591;
  t8661 = t7480*t4104;
  t8668 = -1.*t7480*t6580;
  t8671 = -1.*t6266*t7466;
  t7622 = t4225*t4329*t5647;
  t7623 = -1.*t4922*t7496;
  t7625 = t7622 + t7623;
  t8624 = t6048*t2950;
  t8625 = t8624 + t7661;
  t8634 = -1.*t6048*t3591;
  t8635 = t8530 + t8634;
  t8713 = -1.*t7658*t5647;
  t8722 = -1.*t6124*t3591;
  t8727 = t6124*t2950;
  t8733 = t7658*t3591;
  t8728 = t7301*t7664*t2950;
  t8731 = t4225*t6057*t7222;
  t8709 = -1.*t4225*t6057*t2950;
  t8723 = -1.*t7301*t7664*t3591;
  t8762 = t6266*t7849;
  t8765 = t7899*t4104;
  t7671 = t4225*t7222*t4922;
  t7823 = t4329*t7745;
  t7825 = t7671 + t7823;
  t8821 = -1.*t7899*t6580;
  t8878 = -1.*t6266*t4104;
  t8062 = t4225*t4124*t1033;
  t8067 = -1.*t370*t5774;
  t8080 = t8062 + t8067;
  t7460 = t4124*t6580;
  t7461 = -1.*t370*t6263;
  t7462 = t7460 + t7461;
  t8909 = -1.*t6195*t7915;
  t8912 = -1.*t6244*t5085;
  t9141 = t4225*t1033*t6266;
  t8785 = -1.*t6173*t5066;
  t9178 = -1.*t4225*t3968*t6266;
  t9142 = t6234*t6195;
  t9143 = t5774*t6244;
  t9144 = t9141 + t9142 + t9143;
  t9183 = -1.*t6266*t5066;
  t9185 = -1.*t6173*t4104;
  t9153 = t8878 + t8909 + t8912;
  t9172 = t1122*t6057;
  t8710 = t1122*t6168*t2950;
  t9173 = -1.*t4225*t3968*t6173;
  t9174 = t9172 + t9173 + t9141;
  t9386 = t4225*t6057;
  t9387 = t1122*t7053;
  t7092 = Power(t3968,2);
  t9399 = t1122*t6057*t2950;
  t9400 = -1.*t4225*t7053*t2950;
  t9188 = t8709 + t8785 + t8878;
  t9422 = t4225*t7089*t7049;
  t9431 = -1.*t1033*t1122*t6266;
  t9435 = t4225*t1033*t2950*t6266;
  t9439 = -1.*t1033*t7049*t4104;
  t9382 = t4225*t6168;
  t9383 = t9172 + t9382;
  t9470 = -1.*t7301*t7386*t2950;
  t9703 = t4225*t1033*t7480;
  t9719 = -1.*t7480*t4104;
  t7967 = -0.325*t2819;
  t7968 = -1.*t6038*t2819;
  t7950 = t370*t4104;
  t7951 = t4124*t5085;
  t7952 = t7950 + t7951;
  t9756 = -1.*t7301*t7664*t2950;
  t9758 = -1.*t4225*t6057*t7222;
  t9774 = t4225*t1033*t7899;
  t9778 = -1.*t6266*t7849;
  t9781 = -1.*t7899*t4104;
  t7455 = t370*t6580;
  t7456 = t4124*t6263;
  t7457 = t7455 + t7456;
  t9407 = t8709 + t8710 + t8722;
  p_output1[0]=(-1.*t370*t4104 - 1.*t4124*t5085)*var2[1] + t5185*var2[2];
  p_output1[1]=t5085*var2[0] - 1.*t370*t5519*var2[1] + t4124*t5519*var2[2] + (t5656*(-1.*t5774*t6182 - 1.*t5774*t6195 - 1.*t6234*t6244 - 1.*t6244*t6250) + t6263*t6513 + t6234*(t5656*t6244 + t6182*t6263 + t6195*t6263 + t6244*t6548) + t5774*t6605)*var2[3];
  p_output1[2]=t4329*t6691*var2[0] + (t4124*t5066 + t370*t4922*t6691)*var2[1] + (t370*t5066 - 1.*t4124*t4922*t6691)*var2[2] + (-1.*t1033*t4225*t4329*t6605 + t5656*(-1.*t1033*t4225*t6173 + t1033*t4225*t4329*t6195 - 1.*t1033*t4225*t4922*t6244 + t4922*t5774*t6911 - 1.*t4329*t6234*t6911 + t6923) + t4329*t6513*t6978 + t6234*(t4329*t5656*t6911 - 1.*t4922*t6263*t6911 + t4329*t6195*t6978 - 1.*t4922*t6244*t6978 + t6987 + t6990))*var2[3] + (t5652*t6892 + t6580*(t3968*t4225*t6911 + t6923) - 1.*t3968*t4225*t6969 + t1033*t4225*(t5652*t6911 + t6173*t6978 + t6987 + t6990))*var2[4];
  p_output1[3]=t7073*var2[0] + (-1.*t1033*t2950*t4124*t4225 - 1.*t370*t7079)*var2[1] + (-1.*t1033*t2950*t370*t4225 + t4124*t7079)*var2[2] + (t6513*t7135 + t6605*t7176 + t5656*(t7091 + t7095 - 1.*t6234*t7150 - 1.*t5774*t7161 - 1.*t6195*t7176 - 1.*t6244*t7197) + t6234*(t7102 + t7103 + t6195*t7135 + t5656*t7150 + t6263*t7161 + t6244*t7204))*var2[3] + (-1.*t1033*t3591*t4225*t6892 - 1.*t1033*t1122*t6969 + t6580*(-1.*t1122*t3968*t6173 + t7051 + t7054 + t7091 - 1.*t4225*t7049*t7092 + t7095) + t1033*t4225*(t3591*t3968*t4225*t6173 - 1.*t3968*t5652*t7049 + t7060 + t7061 + t7102 + t7103))*var2[4] + (-1.*t1122*t3591*t7045 + t3591*t4225*(t1122*t6168 - 1.*t4225*t7049 + t7051 + t7054) + t1122*(-1.*t3591*t4225*t6168 - 1.*t1122*t3591*t7049 + t7060 + t7061) + t4225*t7067)*var2[5];
  p_output1[4]=t5656*var2[0] + t7462*var2[1] + t7457*var2[2] + (t6513*t7531 + t5656*(t7481 - 1.*t6234*t7540 - 1.*t5774*t7617) + t6234*(t7488 + t7502 + t6195*t7531 + t5656*t7540 + t6263*t7617 + t6244*t7625))*var2[3] + (t6892*t7466 + t6580*(-1.*t1122*t4225*t7386 + t3968*t4225*t7475 + t7481) + t1033*t4225*(t7236 + t7446 + t5652*t7475 + t7488 + t6173*t7496 + t7502))*var2[4] + (t4225*t5647*t7045 + t1122*(-1.*t1122*t5647*t6168 + t6124*t7222 + t7236 + t5647*t7241 + t7446 + t3591*t7386*t7448))*var2[5] + (-0.1575*t3591 - 0.2255*t7222)*var2[9];
  p_output1[5]=t7825*var2[0] + (t4124*t7849 - 1.*t370*t7863)*var2[1] + (t370*t7849 + t4124*t7863)*var2[2] + (t6513*t7915 + t5656*(t7900 - 1.*t6234*t7921 - 1.*t5774*t7929) + t6234*(t7905 + t7906 + t5656*t7921 + t6263*t7929 + t7934 + t7937))*var2[3] + (t4104*t6892 + t6580*(-1.*t1122*t4225*t7664 + t3968*t4225*t7885 + t7900) + t1033*t4225*(t7654 + t7665 + t5652*t7885 + t7903 + t7905 + t7906))*var2[4] + (t2950*t4225*t7045 + t1122*(t7654 + t7656 + t5647*t7658 + t7661 + t3591*t7448*t7664 + t7665))*var2[5] + (-0.2255*t3591 - 0.1575*t7222)*var2[9] + (-0.325*t1369 - 1.*t1369*t6038 - 1.*t1369*t7644)*var2[10];
  p_output1[6]=t7915;
  p_output1[7]=t5185;
  p_output1[8]=t7952;
  p_output1[9]=t5656*t6513 + t6234*t6605;
  p_output1[10]=t6580*t6892 + t1033*t4225*t6969;
  p_output1[11]=t3591*t4225*t7045 + t1122*t7067;
  p_output1[12]=-0.1575*t2950 - 0.2255*t5647;
  p_output1[13]=-1.*t1369*t6007 + t7967 + t7968;
  p_output1[14]=-0.0641;
  p_output1[15]=(-1.*t1033*t370*t4225 - 1.*t4124*t5774)*var2[1] + t8080*var2[2];
  p_output1[16]=t5774*var2[0] - 1.*t370*t6250*var2[1] + t4124*t6250*var2[2] + ((-1.*t5656*t6244 - 1.*t6182*t6263 - 1.*t6195*t6263 - 1.*t6244*t6548)*t7915 + t5656*(t5085*t6182 + t5085*t6195 + t5519*t6244 + t6244*t7915) + t6263*t8266 + t5085*t8281)*var2[3];
  p_output1[17]=-1.*t1033*t4225*t4329*var2[0] + (-1.*t3968*t4124*t4225 - 1.*t1033*t370*t4225*t4922)*var2[1] + (-1.*t370*t3968*t4225 + t1033*t4124*t4225*t4922)*var2[2] + (t4329*t6978*t8266 + t4329*t6691*t8281 + t5656*(t4329*t6195*t6691 - 1.*t4922*t6244*t6691 - 1.*t4922*t5085*t6911 + t4329*t6911*t7915 + t8309 + t8313) + t7915*(-1.*t4329*t5656*t6911 + t4922*t6263*t6911 - 1.*t4329*t6195*t6978 + t4922*t6244*t6978 + t8330 + t8334))*var2[3] + (t6580*(t6173*t6691 + t5066*t6911 + t8309 + t8313) + t5652*t8317 + t5066*t8325 + t4104*(-1.*t5652*t6911 - 1.*t6173*t6978 + t8330 + t8334))*var2[4];
  p_output1[18]=t7176*var2[0] + (-1.*t1033*t1122*t4124 - 1.*t370*t7197)*var2[1] + (-1.*t1033*t1122*t370 + t4124*t7197)*var2[2] + (t7135*t8266 + t7073*t8281 + t5656*(t6195*t7073 + t6244*t7079 + t5085*t7161 + t7150*t7915 + t8556 + t8561) + t7915*(-1.*t6195*t7135 - 1.*t5656*t7150 - 1.*t6263*t7161 - 1.*t6244*t7204 + t8569 + t8570))*var2[3] + (-1.*t1033*t3591*t4225*t8317 - 1.*t1033*t2950*t4225*t8325 + t6580*(t2950*t3968*t4225*t6173 - 1.*t3968*t5066*t7049 + t8483 + t8484 + t8556 + t8561) + t4104*(-1.*t3591*t3968*t4225*t6173 + t3968*t5652*t7049 + t8515 + t8522 + t8569 + t8570))*var2[4] + (t3591*t4225*(-1.*t2950*t4225*t6168 - 1.*t1122*t2950*t7049 + t8483 + t8484) + t2950*t4225*(t3591*t4225*t6168 + t1122*t3591*t7049 + t8515 + t8522) - 1.*t1122*t2950*t8532 - 1.*t1122*t3591*t8535)*var2[5];
  p_output1[19]=(t7531*t8266 + t5656*t8281 + t5656*(t6581 + t6582 + t6595 + t5085*t7617 + t7540*t7915 + t8661) + t7915*(-1.*t6195*t7531 - 1.*t5656*t7540 - 1.*t6263*t7617 - 1.*t6244*t7625 + t8668 + t8671))*var2[3] + (t7466*t8317 + t6580*t8325 + t6580*(t6581 + t6935 + t6943 + t5066*t7475 + t8610 + t8661) + t4104*(-1.*t5652*t7475 - 1.*t6173*t7496 + t8602 + t8606 + t8668 + t8671))*var2[4] + (t3591*t4225*t8532 + t4225*t5647*t8535 + t2950*t4225*(t1122*t5647*t6168 - 1.*t3591*t7386*t7448 + t8602 + t8604 + t8605 + t8606) + t3591*t4225*(t6935 + t7065 + t7066 + t2950*t7386*t7448 + t8610 + t8618))*var2[5] + (t3591*(-1.*t5647*t6048 - 1.*t3591*t7386 + t8604 + t8605) + t5647*(t3591*t6048 + t7065 + t2950*t7386 + t8618) + t7222*t8625 + t5647*t8635)*var2[9];
  p_output1[20]=(t7915*t8266 + t7825*t8281 + t5656*(t6195*t7825 + t6244*t7863 + t7915*t7921 + t5085*t7929 + t8762 + t8765) + t7915*(-1.*t5656*t7921 - 1.*t6263*t7929 + t8821 + t8878 + t8909 + t8912))*var2[3] + (t4104*t8317 + t7849*t8325 + t6580*(t6173*t7745 + t5066*t7885 + t8728 + t8731 + t8762 + t8765) + t4104*(-1.*t5652*t7885 + t8709 + t8723 + t8785 + t8821 + t8878))*var2[4] + (t4225*t7222*t8532 + t2950*t4225*t8535 + t2950*t4225*(-1.*t3591*t7448*t7664 + t8709 + t8710 + t8713 + t8722 + t8723) + t3591*t4225*(-1.*t1122*t6168*t7222 + t2950*t7448*t7664 + t8727 + t8728 + t8731 + t8733))*var2[5] + (t3591*t8625 + t2950*t8635 + t3591*(-1.*t2950*t6048 - 1.*t3591*t7664 + t8713 + t8722) + t5647*(t6048*t7222 + t2950*t7664 + t8727 + t8733))*var2[9];
  p_output1[21]=t6234;
  p_output1[22]=t8080;
  p_output1[23]=t1033*t370*t4225 + t4124*t5774;
  p_output1[24]=t5656*t8266 + t7915*t8281;
  p_output1[25]=t6580*t8317 + t4104*t8325;
  p_output1[26]=t2950*t4225*t8532 + t3591*t4225*t8535;
  p_output1[27]=t5647*t8625 + t3591*t8635;
  p_output1[28]=(-1.*t4124*t6263 - 1.*t370*t6580)*var2[1] + t7462*var2[2];
  p_output1[29]=t6263*var2[0] - 1.*t370*t6548*var2[1] + t4124*t6548*var2[2] + ((t5774*t6182 + t5774*t6195 + t6234*t6244 + t6244*t6250)*t7915 + t6234*(-1.*t5085*t6182 - 1.*t5085*t6195 - 1.*t5519*t6244 - 1.*t6244*t7915) + t5085*t9144 + t5774*t9153)*var2[3];
  p_output1[30]=t4329*t6978*var2[0] + (t4124*t5652 + t370*t4922*t6978)*var2[1] + (t370*t5652 - 1.*t4124*t4922*t6978)*var2[2] + (t4329*t6691*t9144 - 1.*t1033*t4225*t4329*t9153 + t7915*(t1033*t4225*t6173 - 1.*t1033*t4225*t4329*t6195 + t1033*t4225*t4922*t6244 - 1.*t4922*t5774*t6911 + t4329*t6234*t6911 + t9178) + t6234*(-1.*t4329*t6195*t6691 + t4922*t6244*t6691 + t4922*t5085*t6911 - 1.*t4329*t6911*t7915 + t9183 + t9185))*var2[3] + (t5066*t9174 + t4104*(-1.*t3968*t4225*t6911 + t9178) + t1033*t4225*(-1.*t6173*t6691 - 1.*t5066*t6911 + t9183 + t9185) - 1.*t3968*t4225*t9188)*var2[4];
  p_output1[31]=t7135*var2[0] + (-1.*t1033*t3591*t4124*t4225 - 1.*t370*t7204)*var2[1] + (-1.*t1033*t3591*t370*t4225 + t4124*t7204)*var2[2] + (t7073*t9144 + t7176*t9153 + t7915*(t6234*t7150 + t5774*t7161 + t6195*t7176 + t6244*t7197 + t9422 + t9431) + t6234*(-1.*t6195*t7073 - 1.*t6244*t7079 - 1.*t5085*t7161 - 1.*t7150*t7915 + t9435 + t9439))*var2[3] + (-1.*t1033*t2950*t4225*t9174 - 1.*t1033*t1122*t9188 + t4104*(t1122*t3968*t6173 + t4225*t7049*t7092 + t9386 + t9387 + t9422 + t9431) + t1033*t4225*(-1.*t2950*t3968*t4225*t6173 + t3968*t5066*t7049 + t9399 + t9400 + t9435 + t9439))*var2[4] + (-1.*t1122*t2950*t9383 + t2950*t4225*(-1.*t1122*t6168 + t4225*t7049 + t9386 + t9387) + t1122*(t2950*t4225*t6168 + t1122*t2950*t7049 + t9399 + t9400) + t4225*t9407)*var2[5];
  p_output1[32]=t7531*var2[0] + (t4124*t7466 - 1.*t370*t7625)*var2[1] + (t370*t7466 + t4124*t7625)*var2[2] + (t5656*t9144 + t7915*(t6234*t7540 + t5774*t7617 + t9703) + t6234*(-1.*t5085*t7617 - 1.*t7540*t7915 + t8275 + t8276 + t8279 + t9719))*var2[3] + (t6580*t9174 + t4104*(t1122*t4225*t7386 - 1.*t3968*t4225*t7475 + t9703) + t1033*t4225*(-1.*t5066*t7475 + t8275 + t8321 + t8322 + t9470 + t9719))*var2[4] + (t3591*t4225*t9383 + t1122*(-1.*t3591*t7241 - 1.*t2950*t7386*t7448 + t8321 + t8530 + t8531 + t9470))*var2[5] + 0.068*t5647*var2[9];
  p_output1[33]=t7915*var2[0] + t5185*var2[1] + t7952*var2[2] + (t7825*t9144 + t7915*(t6234*t7921 + t5774*t7929 + t9774) + t6234*(-1.*t6195*t7825 - 1.*t6244*t7863 - 1.*t7915*t7921 - 1.*t5085*t7929 + t9778 + t9781))*var2[3] + (t7849*t9174 + t4104*(t1122*t4225*t7664 - 1.*t3968*t4225*t7885 + t9774) + t1033*t4225*(-1.*t6173*t7745 - 1.*t5066*t7885 + t9756 + t9758 + t9778 + t9781))*var2[4] + (t4225*t7222*t9383 + t1122*(-1.*t2950*t6124 + t1122*t6168*t7222 - 1.*t3591*t7658 - 1.*t2950*t7448*t7664 + t9756 + t9758))*var2[5] + 0.068*t2950*var2[9] + (-1.*t2819*t7644 + t7967 + t7968)*var2[10];
  p_output1[34]=t5656;
  p_output1[35]=t7462;
  p_output1[36]=t7457;
  p_output1[37]=t7915*t9144 + t6234*t9153;
  p_output1[38]=t4104*t9174 + t1033*t4225*t9188;
  p_output1[39]=t2950*t4225*t9383 + t1122*t9407;
  p_output1[40]=0.068*t3591;
  p_output1[41]=0.325*t1369 - 1.*t2819*t6007 + t1369*t6038;
  p_output1[42]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 43, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
