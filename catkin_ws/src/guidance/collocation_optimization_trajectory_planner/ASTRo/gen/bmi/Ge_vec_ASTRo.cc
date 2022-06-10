/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:10 GMT+02:00
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
  double t7;
  double t8;
  double t24;
  double t47;
  double t56;
  double t143;
  double t63;
  double t66;
  double t76;
  double t153;
  double t130;
  double t154;
  double t173;
  double t254;
  double t263;
  double t277;
  double t460;
  double t477;
  double t487;
  double t509;
  double t517;
  double t749;
  double t759;
  double t788;
  double t834;
  double t877;
  double t34;
  double t58;
  double t183;
  double t186;
  double t243;
  double t307;
  double t320;
  double t353;
  double t356;
  double t382;
  double t391;
  double t394;
  double t1064;
  double t1083;
  double t1117;
  double t491;
  double t536;
  double t549;
  double t588;
  double t596;
  double t598;
  double t599;
  double t600;
  double t614;
  double t684;
  double t703;
  double t709;
  double t1350;
  double t1364;
  double t911;
  double t912;
  double t930;
  double t982;
  double t986;
  double t987;
  double t991;
  double t992;
  double t994;
  double t1002;
  double t1025;
  double t1026;
  double t1414;
  double t1419;
  double t1107;
  double t359;
  double t1130;
  double t1138;
  double t1156;
  double t1181;
  double t1199;
  double t1206;
  double t1934;
  double t2025;
  double t2035;
  double t2041;
  double t2047;
  double t1353;
  double t638;
  double t1371;
  double t1372;
  double t1374;
  double t1380;
  double t1384;
  double t1385;
  double t2164;
  double t2221;
  double t2235;
  double t2240;
  double t2244;
  double t1415;
  double t1000;
  double t1421;
  double t1439;
  double t1582;
  double t1652;
  double t1770;
  double t1780;
  double t2635;
  double t2698;
  double t2742;
  double t2751;
  double t2758;
  double t2859;
  double t2888;
  double t2893;
  double t2895;
  double t2898;
  double t3038;
  double t3056;
  double t3067;
  double t3100;
  double t3113;
  double t3117;
  double t3137;
  double t3170;
  double t3171;
  double t3202;
  double t3203;
  double t3205;
  double t3236;
  double t3308;
  double t3195;
  double t3237;
  double t3244;
  double t3305;
  double t3309;
  double t3318;
  double t3333;
  double t3349;
  double t3373;
  double t3399;
  double t3401;
  double t3402;
  double t3420;
  double t3529;
  double t3535;
  double t3536;
  double t3566;
  double t3586;
  double t3613;
  double t3625;
  double t3629;
  double t3677;
  double t3682;
  double t3693;
  double t3707;
  double t3709;
  double t3766;
  double t3778;
  double t3786;
  double t3874;
  double t3908;
  double t3921;
  double t3934;
  double t3964;
  double t3982;
  double t4015;
  double t4018;
  double t4035;
  double t3601;
  double t4086;
  double t1964;
  double t1966;
  double t4092;
  double t4106;
  double t4175;
  double t4711;
  double t4723;
  double t4726;
  double t4310;
  double t3710;
  double t4328;
  double t2173;
  double t2190;
  double t4336;
  double t4361;
  double t4397;
  double t4848;
  double t4849;
  double t4886;
  double t4466;
  double t3968;
  double t4539;
  double t2672;
  double t2676;
  double t4569;
  double t4578;
  double t4623;
  double t4978;
  double t4989;
  double t4994;
  double t5166;
  double t5169;
  double t5170;
  double t5243;
  double t5246;
  double t5254;
  double t5257;
  double t5265;
  double t5252;
  double t5334;
  double t5338;
  double t3388;
  double t3390;
  double t5361;
  double t5372;
  double t5377;
  double t5439;
  double t5454;
  double t5491;
  double t5753;
  double t5757;
  double t5774;
  double t5836;
  double t5846;
  double t5873;
  double t5811;
  double t5900;
  double t5953;
  double t5979;
  double t6021;
  double t6109;
  double t6111;
  double t6113;
  double t6328;
  double t6329;
  double t6364;
  double t6305;
  double t6317;
  double t6395;
  double t6398;
  double t6423;
  double t6509;
  double t6516;
  double t6518;
  double t6499;
  double t6500;
  double t6544;
  double t6548;
  double t6581;
  double t6206;
  double t6122;
  double t6366;
  double t6453;
  double t6530;
  double t6610;
  double t7131;
  double t7132;
  double t7133;
  double t7141;
  double t7175;
  double t7205;
  double t7228;
  double t7269;
  double t7322;
  double t7280;
  double t7927;
  double t7929;
  double t7935;
  double t7867;
  double t7885;
  double t7902;
  double t7947;
  double t7949;
  double t7997;
  double t8006;
  double t8011;
  double t8021;
  double t8023;
  double t8078;
  double t8025;
  double t8221;
  double t8242;
  double t8247;
  double t8213;
  double t8256;
  double t8258;
  double t8264;
  double t8272;
  double t8339;
  double t8347;
  double t8350;
  double t8499;
  double t8505;
  double t8510;
  double t8541;
  double t8574;
  double t8585;
  double t8599;
  double t8633;
  double t8643;
  double t8658;
  double t8668;
  double t8677;
  double t8678;
  double t8710;
  double t8689;
  double t8784;
  double t8785;
  double t8786;
  double t8771;
  double t8796;
  double t8803;
  double t8816;
  double t8818;
  double t8870;
  double t8871;
  double t8882;
  double t8959;
  double t8961;
  double t8967;
  double t9128;
  double t9241;
  double t9263;
  double t9142;
  double t9154;
  double t9177;
  double t9187;
  double t9233;
  double t9273;
  double t9278;
  double t9271;
  double t9333;
  double t9447;
  double t9454;
  double t9457;
  double t9439;
  double t9468;
  double t9483;
  double t9501;
  double t9506;
  double t9527;
  double t9535;
  double t9540;
  double t9653;
  double t9658;
  double t9689;
  double t9909;
  double t9939;
  double t9769;
  double t9838;
  double t9854;
  double t9866;
  double t9892;
  double t9905;
  double t10071;
  double t10080;
  double t9983;
  double t10178;
  double t10565;
  double t10573;
  double t10582;
  double t10514;
  double t10584;
  double t10600;
  double t10601;
  double t10606;
  double t10630;
  double t10635;
  double t10637;
  double t10691;
  double t10692;
  double t10694;
  t7 = Cos(var1[9]);
  t8 = -1.*t7;
  t24 = 1. + t8;
  t47 = Sin(var1[9]);
  t56 = 0.15121*t47;
  t143 = Cos(var1[3]);
  t63 = Cos(var1[5]);
  t66 = Sin(var1[3]);
  t76 = Sin(var1[4]);
  t153 = Sin(var1[5]);
  t130 = t63*t66*t76;
  t154 = t143*t153;
  t173 = t130 + t154;
  t254 = t143*t63;
  t263 = -1.*t66*t76*t153;
  t277 = t254 + t263;
  t460 = Cos(var1[12]);
  t477 = -1.*t460;
  t487 = 1. + t477;
  t509 = Sin(var1[12]);
  t517 = -0.15121*t509;
  t749 = Cos(var1[15]);
  t759 = -1.*t749;
  t788 = 1. + t759;
  t834 = -0.15121*t788;
  t877 = Sin(var1[15]);
  t34 = -0.15121*t24;
  t58 = t34 + t56;
  t183 = t58*t173;
  t186 = 0.15121*t24;
  t243 = t186 + t56;
  t307 = t243*t277;
  t320 = -1.*t47*t173;
  t353 = t7*t277;
  t356 = t320 + t353;
  t382 = t7*t173;
  t391 = t47*t277;
  t394 = t382 + t391;
  t1064 = Cos(var1[4]);
  t1083 = Sin(var1[10]);
  t1117 = Cos(var1[10]);
  t491 = 0.15121*t487;
  t536 = t491 + t517;
  t549 = t536*t173;
  t588 = -0.15121*t487;
  t596 = t588 + t517;
  t598 = t596*t277;
  t599 = -1.*t509*t173;
  t600 = t460*t277;
  t614 = t599 + t600;
  t684 = t460*t173;
  t703 = t509*t277;
  t709 = t684 + t703;
  t1350 = Sin(var1[13]);
  t1364 = Cos(var1[13]);
  t911 = -0.15121*t877;
  t912 = t834 + t911;
  t930 = t912*t173;
  t982 = 0.15121*t877;
  t986 = t834 + t982;
  t987 = t986*t277;
  t991 = -1.*t877*t173;
  t992 = t749*t277;
  t994 = t991 + t992;
  t1002 = t749*t173;
  t1025 = t877*t277;
  t1026 = t1002 + t1025;
  t1414 = Sin(var1[16]);
  t1419 = Cos(var1[16]);
  t1107 = -0.28121*t1064*t1083*t66;
  t359 = 0.15121*t356;
  t1130 = -1.*t1117;
  t1138 = 1. + t1130;
  t1156 = -0.28121*t1138*t394;
  t1181 = -1.*t1064*t1083*t66;
  t1199 = t1117*t394;
  t1206 = t1181 + t1199;
  t1934 = Cos(var1[11]);
  t2025 = Sin(var1[11]);
  t2035 = -1.*t1117*t1064*t66;
  t2041 = -1.*t1083*t394;
  t2047 = t2035 + t2041;
  t1353 = -0.28121*t1064*t1350*t66;
  t638 = -0.15121*t614;
  t1371 = -1.*t1364;
  t1372 = 1. + t1371;
  t1374 = 0.28121*t1372*t709;
  t1380 = t1064*t1350*t66;
  t1384 = t1364*t709;
  t1385 = t1380 + t1384;
  t2164 = Cos(var1[14]);
  t2221 = Sin(var1[14]);
  t2235 = -1.*t1364*t1064*t66;
  t2240 = t1350*t709;
  t2244 = t2235 + t2240;
  t1415 = -0.28121*t1064*t1414*t66;
  t1000 = -0.15121*t994;
  t1421 = -1.*t1419;
  t1439 = 1. + t1421;
  t1582 = -0.28121*t1439*t1026;
  t1652 = -1.*t1064*t1414*t66;
  t1770 = t1419*t1026;
  t1780 = t1652 + t1770;
  t2635 = Cos(var1[17]);
  t2698 = Sin(var1[17]);
  t2742 = -1.*t1419*t1064*t66;
  t2751 = -1.*t1414*t1026;
  t2758 = t2742 + t2751;
  t2859 = Cos(var1[6]);
  t2888 = -1.*t2859;
  t2893 = 1. + t2888;
  t2895 = 0.15121*t2893;
  t2898 = Sin(var1[6]);
  t3038 = -0.15121*t2898;
  t3056 = t2895 + t3038;
  t3067 = t277*t3056;
  t3100 = 0.15121*t2898;
  t3113 = t2895 + t3100;
  t3117 = t173*t3113;
  t3137 = t2859*t277;
  t3170 = -1.*t173*t2898;
  t3171 = t3137 + t3170;
  t3202 = t2859*t173;
  t3203 = t277*t2898;
  t3205 = t3202 + t3203;
  t3236 = Cos(var1[7]);
  t3308 = Sin(var1[7]);
  t3195 = 0.15121*t3171;
  t3237 = -1.*t3236;
  t3244 = 1. + t3237;
  t3305 = 0.28121*t3244*t3205;
  t3309 = -0.28121*t1064*t66*t3308;
  t3318 = t3236*t3205;
  t3333 = t1064*t66*t3308;
  t3349 = t3318 + t3333;
  t3373 = Cos(var1[8]);
  t3399 = -1.*t1064*t3236*t66;
  t3401 = t3205*t3308;
  t3402 = t3399 + t3401;
  t3420 = Sin(var1[8]);
  t3529 = -1.*t143*t1064*t63*t58;
  t3535 = t143*t1064*t243*t153;
  t3536 = t143*t1064*t63*t47;
  t3566 = t7*t143*t1064*t153;
  t3586 = t3536 + t3566;
  t3613 = -1.*t7*t143*t1064*t63;
  t3625 = t143*t1064*t47*t153;
  t3629 = t3613 + t3625;
  t3677 = -1.*t143*t1064*t63*t536;
  t3682 = t143*t1064*t596*t153;
  t3693 = t143*t1064*t63*t509;
  t3707 = t460*t143*t1064*t153;
  t3709 = t3693 + t3707;
  t3766 = -1.*t460*t143*t1064*t63;
  t3778 = t143*t1064*t509*t153;
  t3786 = t3766 + t3778;
  t3874 = -1.*t143*t1064*t63*t912;
  t3908 = t143*t1064*t986*t153;
  t3921 = t143*t1064*t63*t877;
  t3934 = t749*t143*t1064*t153;
  t3964 = t3921 + t3934;
  t3982 = -1.*t749*t143*t1064*t63;
  t4015 = t143*t1064*t877*t153;
  t4018 = t3982 + t4015;
  t4035 = -0.28121*t143*t1083*t76;
  t3601 = 0.15121*t3586;
  t4086 = -0.28121*t1138*t3629;
  t1964 = -1.*t1934;
  t1966 = 1. + t1964;
  t4092 = -1.*t143*t1083*t76;
  t4106 = t1117*t3629;
  t4175 = t4092 + t4106;
  t4711 = -1.*t1117*t143*t76;
  t4723 = -1.*t1083*t3629;
  t4726 = t4711 + t4723;
  t4310 = -0.28121*t143*t1350*t76;
  t3710 = -0.15121*t3709;
  t4328 = 0.28121*t1372*t3786;
  t2173 = -1.*t2164;
  t2190 = 1. + t2173;
  t4336 = t143*t1350*t76;
  t4361 = t1364*t3786;
  t4397 = t4336 + t4361;
  t4848 = -1.*t1364*t143*t76;
  t4849 = t1350*t3786;
  t4886 = t4848 + t4849;
  t4466 = -0.28121*t143*t1414*t76;
  t3968 = -0.15121*t3964;
  t4539 = -0.28121*t1439*t4018;
  t2672 = -1.*t2635;
  t2676 = 1. + t2672;
  t4569 = -1.*t143*t1414*t76;
  t4578 = t1419*t4018;
  t4623 = t4569 + t4578;
  t4978 = -1.*t1419*t143*t76;
  t4989 = -1.*t1414*t4018;
  t4994 = t4978 + t4989;
  t5166 = t143*t1064*t153*t3056;
  t5169 = -1.*t143*t1064*t63*t3113;
  t5170 = t143*t1064*t2859*t153;
  t5243 = t143*t1064*t63*t2898;
  t5246 = t5170 + t5243;
  t5254 = -1.*t143*t1064*t63*t2859;
  t5257 = t143*t1064*t153*t2898;
  t5265 = t5254 + t5257;
  t5252 = 0.15121*t5246;
  t5334 = 0.28121*t3244*t5265;
  t5338 = -0.28121*t143*t76*t3308;
  t3388 = -1.*t3373;
  t3390 = 1. + t3388;
  t5361 = t3236*t5265;
  t5372 = t143*t76*t3308;
  t5377 = t5361 + t5372;
  t5439 = -1.*t143*t3236*t76;
  t5454 = t5265*t3308;
  t5491 = t5439 + t5454;
  t5753 = t143*t63*t76;
  t5757 = -1.*t66*t153;
  t5774 = t5753 + t5757;
  t5836 = t63*t66;
  t5846 = t143*t76*t153;
  t5873 = t5836 + t5846;
  t5811 = t243*t5774;
  t5900 = t58*t5873;
  t5953 = t47*t5774;
  t5979 = t7*t5873;
  t6021 = t5953 + t5979;
  t6109 = t7*t5774;
  t6111 = -1.*t47*t5873;
  t6113 = t6109 + t6111;
  t6328 = t509*t5774;
  t6329 = t460*t5873;
  t6364 = t6328 + t6329;
  t6305 = t596*t5774;
  t6317 = t536*t5873;
  t6395 = t460*t5774;
  t6398 = -1.*t509*t5873;
  t6423 = t6395 + t6398;
  t6509 = t877*t5774;
  t6516 = t749*t5873;
  t6518 = t6509 + t6516;
  t6499 = t986*t5774;
  t6500 = t912*t5873;
  t6544 = t749*t5774;
  t6548 = -1.*t877*t5873;
  t6581 = t6544 + t6548;
  t6206 = -0.28121*t1138*t6021;
  t6122 = 0.15121*t6113;
  t6366 = 0.28121*t1372*t6364;
  t6453 = -0.15121*t6423;
  t6530 = -0.28121*t1439*t6518;
  t6610 = -0.15121*t6581;
  t7131 = t5774*t3056;
  t7132 = t5873*t3113;
  t7133 = t2859*t5873;
  t7141 = t5774*t2898;
  t7175 = t7133 + t7141;
  t7205 = t2859*t5774;
  t7228 = -1.*t5873*t2898;
  t7269 = t7205 + t7228;
  t7322 = 0.28121*t3244*t7175;
  t7280 = 0.15121*t7269;
  t7927 = -1.*t143*t63*t76;
  t7929 = t66*t153;
  t7935 = t7927 + t7929;
  t7867 = -0.15121*t2859;
  t7885 = t7867 + t3100;
  t7902 = t5873*t7885;
  t7947 = 0.15121*t2859;
  t7949 = t7947 + t3100;
  t7997 = t7935*t7949;
  t8006 = -1.*t7935*t2898;
  t8011 = t7133 + t8006;
  t8021 = -1.*t2859*t7935;
  t8023 = t8021 + t7228;
  t8078 = 0.28121*t3244*t8011;
  t8025 = 0.15121*t8023;
  t8221 = t2859*t7935;
  t8242 = t5873*t2898;
  t8247 = t8221 + t8242;
  t8213 = 0.28121*t143*t1064*t3236;
  t8256 = 0.28121*t8247*t3308;
  t8258 = -1.*t143*t1064*t3236;
  t8264 = -1.*t8247*t3308;
  t8272 = t8258 + t8264;
  t8339 = t3236*t8247;
  t8347 = -1.*t143*t1064*t3308;
  t8350 = t8339 + t8347;
  t8499 = t143*t1064*t3236;
  t8505 = t8247*t3308;
  t8510 = t8499 + t8505;
  t8541 = 0.15121*t7;
  t8574 = -0.15121*t47;
  t8585 = t8541 + t8574;
  t8599 = t8585*t7935;
  t8633 = t8541 + t56;
  t8643 = t8633*t5873;
  t8658 = -1.*t47*t7935;
  t8668 = t8658 + t5979;
  t8677 = -1.*t7*t7935;
  t8678 = t8677 + t6111;
  t8710 = -0.28121*t1138*t8668;
  t8689 = 0.15121*t8678;
  t8784 = t7*t7935;
  t8785 = t47*t5873;
  t8786 = t8784 + t8785;
  t8771 = 0.28121*t1117*t143*t1064;
  t8796 = -0.28121*t1083*t8786;
  t8803 = t1117*t143*t1064;
  t8816 = -1.*t1083*t8786;
  t8818 = t8803 + t8816;
  t8870 = -1.*t143*t1064*t1083;
  t8871 = -1.*t1117*t8786;
  t8882 = t8870 + t8871;
  t8959 = t143*t1064*t1083;
  t8961 = t1117*t8786;
  t8967 = t8959 + t8961;
  t9128 = -0.15121*t460;
  t9241 = -1.*t509*t7935;
  t9263 = t9241 + t6329;
  t9142 = 0.15121*t509;
  t9154 = t9128 + t9142;
  t9177 = t9154*t7935;
  t9187 = t9128 + t517;
  t9233 = t9187*t5873;
  t9273 = -1.*t460*t7935;
  t9278 = t9273 + t6398;
  t9271 = 0.28121*t1372*t9263;
  t9333 = -0.15121*t9278;
  t9447 = t460*t7935;
  t9454 = t509*t5873;
  t9457 = t9447 + t9454;
  t9439 = 0.28121*t1364*t143*t1064;
  t9468 = 0.28121*t1350*t9457;
  t9483 = -1.*t1364*t143*t1064;
  t9501 = -1.*t1350*t9457;
  t9506 = t9483 + t9501;
  t9527 = -1.*t143*t1064*t1350;
  t9535 = t1364*t9457;
  t9540 = t9527 + t9535;
  t9653 = t1364*t143*t1064;
  t9658 = t1350*t9457;
  t9689 = t9653 + t9658;
  t9909 = -1.*t877*t7935;
  t9939 = t9909 + t6516;
  t9769 = -0.15121*t749;
  t9838 = t9769 + t911;
  t9854 = t9838*t7935;
  t9866 = 0.15121*t749;
  t9892 = t9866 + t911;
  t9905 = t9892*t5873;
  t10071 = -1.*t749*t7935;
  t10080 = t10071 + t6548;
  t9983 = -0.28121*t1439*t9939;
  t10178 = -0.15121*t10080;
  t10565 = t749*t7935;
  t10573 = t877*t5873;
  t10582 = t10565 + t10573;
  t10514 = 0.28121*t1419*t143*t1064;
  t10584 = -0.28121*t1414*t10582;
  t10600 = t1419*t143*t1064;
  t10601 = -1.*t1414*t10582;
  t10606 = t10600 + t10601;
  t10630 = -1.*t143*t1064*t1414;
  t10635 = -1.*t1419*t10582;
  t10637 = t10630 + t10635;
  t10691 = t143*t1064*t1414;
  t10692 = t1419*t10582;
  t10694 = t10691 + t10692;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t3067 + t3117 + t3195 + 0.15121*t3205) - 13.6359*(t3067 + t3117 + 0.18121*t3171 + t3305 + t3309 + 0.28121*t3349) - 2.7468000000000004*(t3067 + t3117 + t3195 + t3305 + t3309 + 0.50321*t3349*t3390 - 0.50321*t3402*t3420 + 0.50321*(t3349*t3373 + t3402*t3420)) - 13.6359*(t1107 + t1156 - 0.28121*t1206 + t183 + t307 + 0.18121*t356) - 2.7468000000000004*(t1107 + t1156 + t183 - 0.50321*t1206*t1966 - 0.50321*t2025*t2047 - 0.50321*(t1206*t1934 - 1.*t2025*t2047) + t307 + t359) - 11.5758*(t183 + t307 + t359 - 0.15121*t394) - 13.6359*(t1353 + t1374 + 0.28121*t1385 + t549 + t598 - 0.18121*t614) - 2.7468000000000004*(t1353 + t1374 + 0.50321*t1385*t2190 - 0.50321*t2221*t2244 + 0.50321*(t1385*t2164 + t2221*t2244) + t549 + t598 + t638) - 11.5758*(t549 + t598 + t638 + 0.15121*t709) - 11.5758*(t1000 - 0.15121*t1026 + t930 + t987) - 2.7468000000000004*(t1000 + t1415 + t1582 - 0.50321*t1780*t2676 - 0.50321*t2698*t2758 - 0.50321*(t1780*t2635 - 1.*t2698*t2758) + t930 + t987) - 13.6359*(t1415 + t1582 - 0.28121*t1780 + t930 + t987 - 0.18121*t994);
  p_output1[4]=-11.5758*(t3529 + t3535 + t3601 - 0.15121*t3629) - 11.5758*(t3677 + t3682 + t3710 + 0.15121*t3786) - 11.5758*(t3874 + t3908 + t3968 - 0.15121*t4018) - 13.6359*(t3529 + t3535 + 0.18121*t3586 + t4035 + t4086 - 0.28121*t4175) - 13.6359*(t3677 + t3682 - 0.18121*t3709 + t4310 + t4328 + 0.28121*t4397) - 13.6359*(t3874 + t3908 - 0.18121*t3964 + t4466 + t4539 - 0.28121*t4623) - 2.7468000000000004*(t3529 + t3535 + t3601 + t4035 + t4086 - 0.50321*t1966*t4175 - 0.50321*t2025*t4726 - 0.50321*(t1934*t4175 - 1.*t2025*t4726)) - 2.7468000000000004*(t3677 + t3682 + t3710 + t4310 + t4328 + 0.50321*t2190*t4397 - 0.50321*t2221*t4886 + 0.50321*(t2164*t4397 + t2221*t4886)) - 2.7468000000000004*(t3874 + t3908 + t3968 + t4466 + t4539 - 0.50321*t2676*t4623 - 0.50321*t2698*t4994 - 0.50321*(t2635*t4623 - 1.*t2698*t4994)) - 11.5758*(t5166 + t5169 + t5252 + 0.15121*t5265) - 13.6359*(t5166 + t5169 + 0.18121*t5246 + t5334 + t5338 + 0.28121*t5377) - 2.7468000000000004*(t5166 + t5169 + t5252 + t5334 + t5338 + 0.50321*t3390*t5377 - 0.50321*t3420*t5491 + 0.50321*(t3373*t5377 + t3420*t5491));
  p_output1[5]=-11.5758*(t5811 + t5900 - 0.15121*t6021 + t6122) - 13.6359*(t5811 + t5900 - 0.28121*t1117*t6021 + 0.18121*t6113 + t6206) - 2.7468000000000004*(t5811 + t5900 - 0.50321*t1117*t1966*t6021 + 0.50321*t1083*t2025*t6021 - 0.50321*(t1117*t1934*t6021 + t1083*t2025*t6021) + t6122 + t6206) - 13.6359*(t6305 + t6317 + 0.28121*t1364*t6364 + t6366 - 0.18121*t6423) - 11.5758*(t6305 + t6317 + 0.15121*t6364 + t6453) - 2.7468000000000004*(t6305 + t6317 + 0.50321*t1364*t2190*t6364 - 0.50321*t1350*t2221*t6364 + 0.50321*(t1364*t2164*t6364 + t1350*t2221*t6364) + t6366 + t6453) - 13.6359*(t6499 + t6500 - 0.28121*t1419*t6518 + t6530 - 0.18121*t6581) - 11.5758*(t6499 + t6500 - 0.15121*t6518 + t6610) - 2.7468000000000004*(t6499 + t6500 - 0.50321*t1419*t2676*t6518 + 0.50321*t1414*t2698*t6518 - 0.50321*(t1419*t2635*t6518 + t1414*t2698*t6518) + t6530 + t6610) - 11.5758*(t7131 + t7132 + 0.15121*t7175 + t7280) - 13.6359*(t7131 + t7132 + 0.28121*t3236*t7175 + 0.18121*t7269 + t7322) - 2.7468000000000004*(t7131 + t7132 + 0.50321*t3236*t3390*t7175 - 0.50321*t3308*t3420*t7175 + 0.50321*(t3236*t3373*t7175 + t3308*t3420*t7175) + t7280 + t7322);
  p_output1[6]=-11.5758*(t7902 + t7997 + 0.15121*t8011 + t8025) - 13.6359*(t7902 + t7997 + 0.28121*t3236*t8011 + 0.18121*t8023 + t8078) - 2.7468000000000004*(t7902 + t7997 + 0.50321*t3236*t3390*t8011 - 0.50321*t3308*t3420*t8011 + 0.50321*(t3236*t3373*t8011 + t3308*t3420*t8011) + t8025 + t8078);
  p_output1[7]=-13.6359*(t8213 + t8256 + 0.28121*t8272) - 2.7468000000000004*(t8213 + t8256 + 0.50321*t3390*t8272 - 0.50321*t3420*t8350 + 0.50321*(t3373*t8272 + t3420*t8350));
  p_output1[8]=-2.7468000000000004*(0.50321*t3420*t8350 - 0.50321*t3373*t8510 + 0.50321*(-1.*t3420*t8350 + t3373*t8510));
  p_output1[9]=-11.5758*(t8599 + t8643 - 0.15121*t8668 + t8689) - 13.6359*(t8599 + t8643 - 0.28121*t1117*t8668 + 0.18121*t8678 + t8710) - 2.7468000000000004*(t8599 + t8643 - 0.50321*t1117*t1966*t8668 + 0.50321*t1083*t2025*t8668 - 0.50321*(t1117*t1934*t8668 + t1083*t2025*t8668) + t8689 + t8710);
  p_output1[10]=-13.6359*(t8771 + t8796 - 0.28121*t8818) - 2.7468000000000004*(t8771 + t8796 - 0.50321*t1966*t8818 - 0.50321*t2025*t8882 - 0.50321*(t1934*t8818 - 1.*t2025*t8882));
  p_output1[11]=-2.7468000000000004*(-0.50321*t1934*t8818 - 0.50321*t2025*t8967 - 0.50321*(-1.*t1934*t8818 - 1.*t2025*t8967));
  p_output1[12]=-13.6359*(t9177 + t9233 + 0.28121*t1364*t9263 + t9271 - 0.18121*t9278) - 11.5758*(t9177 + t9233 + 0.15121*t9263 + t9333) - 2.7468000000000004*(t9177 + t9233 + 0.50321*t1364*t2190*t9263 - 0.50321*t1350*t2221*t9263 + 0.50321*(t1364*t2164*t9263 + t1350*t2221*t9263) + t9271 + t9333);
  p_output1[13]=-13.6359*(t9439 + t9468 + 0.28121*t9506) - 2.7468000000000004*(t9439 + t9468 + 0.50321*t2190*t9506 - 0.50321*t2221*t9540 + 0.50321*(t2164*t9506 + t2221*t9540));
  p_output1[14]=-2.7468000000000004*(0.50321*t2221*t9540 - 0.50321*t2164*t9689 + 0.50321*(-1.*t2221*t9540 + t2164*t9689));
  p_output1[15]=-11.5758*(t10178 + t9854 + t9905 - 0.15121*t9939) - 13.6359*(-0.18121*t10080 + t9854 + t9905 - 0.28121*t1419*t9939 + t9983) - 2.7468000000000004*(t10178 + t9854 + t9905 - 0.50321*t1419*t2676*t9939 + 0.50321*t1414*t2698*t9939 - 0.50321*(t1419*t2635*t9939 + t1414*t2698*t9939) + t9983);
  p_output1[16]=-13.6359*(t10514 + t10584 - 0.28121*t10606) - 2.7468000000000004*(t10514 + t10584 - 0.50321*t10606*t2676 - 0.50321*t10637*t2698 - 0.50321*(t10606*t2635 - 1.*t10637*t2698));
  p_output1[17]=-2.7468000000000004*(-0.50321*t10606*t2635 - 0.50321*t10694*t2698 - 0.50321*(-1.*t10606*t2635 - 1.*t10694*t2698));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
