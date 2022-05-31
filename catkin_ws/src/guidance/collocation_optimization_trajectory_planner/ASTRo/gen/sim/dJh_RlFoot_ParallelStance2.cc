/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:31 GMT+02:00
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
  double t6340;
  double t6362;
  double t6363;
  double t6364;
  double t6378;
  double t6379;
  double t6422;
  double t6430;
  double t6272;
  double t6300;
  double t6453;
  double t6702;
  double t6428;
  double t6549;
  double t6607;
  double t6251;
  double t6706;
  double t6709;
  double t6725;
  double t6728;
  double t6731;
  double t6902;
  double t6939;
  double t7707;
  double t7776;
  double t12459;
  double t12579;
  double t13638;
  double t15879;
  double t15996;
  double t16018;
  double t16019;
  double t16027;
  double t16046;
  double t16047;
  double t16052;
  double t16054;
  double t16159;
  double t16177;
  double t16181;
  double t16182;
  double t16187;
  double t16188;
  double t16193;
  double t16194;
  double t16211;
  double t16212;
  double t16219;
  double t16236;
  double t16237;
  double t16238;
  double t16239;
  double t16240;
  double t16246;
  double t16247;
  double t16250;
  double t16251;
  double t16252;
  double t16253;
  double t16254;
  double t16255;
  double t16235;
  double t16241;
  double t16242;
  double t16243;
  double t16248;
  double t16256;
  double t16257;
  double t16258;
  double t16259;
  double t16260;
  double t16261;
  double t16262;
  double t16263;
  double t16264;
  double t16266;
  double t16271;
  double t16272;
  double t16273;
  double t16244;
  double t16267;
  double t16268;
  double t16282;
  double t16283;
  double t16284;
  double t16231;
  double t16232;
  double t16233;
  double t16277;
  double t16278;
  double t16279;
  double t16290;
  double t16291;
  double t16293;
  double t16310;
  double t16311;
  double t16321;
  double t16413;
  double t16414;
  double t16415;
  double t16280;
  double t16434;
  double t16435;
  double t16436;
  double t16299;
  double t16448;
  double t16449;
  double t16450;
  double t16281;
  double t16285;
  double t16286;
  double t16438;
  double t16443;
  double t16439;
  double t16440;
  double t16441;
  double t16447;
  double t16459;
  double t16300;
  double t16301;
  double t16302;
  double t16337;
  double t16360;
  double t16500;
  double t16502;
  double t16523;
  double t16527;
  double t16338;
  double t16339;
  double t16347;
  double t16361;
  double t16365;
  double t16369;
  double t16384;
  double t16405;
  double t16386;
  double t16387;
  double t16390;
  double t16470;
  double t16473;
  double t16585;
  double t16587;
  double t16591;
  double t16593;
  double t16406;
  double t16407;
  double t16408;
  double t16419;
  double t16420;
  double t16421;
  double t16422;
  double t16424;
  double t16426;
  double t16427;
  double t16428;
  double t16430;
  double t16431;
  double t16432;
  double t16433;
  double t16625;
  double t16626;
  double t16627;
  double t16623;
  double t16442;
  double t16632;
  double t16633;
  double t16634;
  double t16636;
  double t16637;
  double t16638;
  double t16458;
  double t16462;
  double t16463;
  double t16464;
  double t16466;
  double t16469;
  double t16640;
  double t16476;
  double t16477;
  double t16644;
  double t16482;
  double t16483;
  double t16486;
  double t16490;
  double t16491;
  double t16492;
  double t16493;
  double t16494;
  double t16495;
  double t16496;
  double t16497;
  double t16498;
  double t16501;
  double t16505;
  double t16506;
  double t16517;
  double t16518;
  double t16524;
  double t16535;
  double t16536;
  double t16537;
  double t16538;
  double t16676;
  double t16552;
  double t16553;
  double t16680;
  double t16561;
  double t16562;
  double t16565;
  double t16566;
  double t16571;
  double t16572;
  double t16573;
  double t16575;
  double t16576;
  double t16577;
  double t16578;
  double t16579;
  double t16580;
  double t16581;
  double t16582;
  double t16583;
  double t16586;
  double t16592;
  double t16597;
  double t16598;
  double t16599;
  double t16601;
  double t16605;
  double t16703;
  double t16608;
  double t16609;
  double t16707;
  double t16614;
  double t16615;
  double t16618;
  double t16723;
  double t16724;
  double t16725;
  double t16735;
  double t16736;
  double t16737;
  double t16741;
  double t16742;
  double t16743;
  double t16745;
  double t16746;
  double t16747;
  double t16755;
  double t16756;
  double t16757;
  double t16758;
  double t16759;
  double t16760;
  double t16761;
  double t16763;
  double t16764;
  double t16765;
  double t16762;
  double t16770;
  double t16771;
  double t16773;
  double t16779;
  double t16780;
  double t16781;
  double t16783;
  double t16784;
  double t16785;
  double t16800;
  double t16803;
  double t16816;
  double t16818;
  double t16811;
  double t16840;
  double t16842;
  double t16734;
  double t16738;
  double t16739;
  double t16847;
  double t13617;
  double t13624;
  double t13629;
  double t16879;
  double t16886;
  double t16888;
  double t16726;
  double t16727;
  double t16728;
  double t16729;
  double t16730;
  double t16731;
  double t16732;
  double t16202;
  double t16203;
  double t16207;
  double t16921;
  double t16922;
  double t16923;
  double t16924;
  double t16925;
  double t16927;
  double t16928;
  double t16929;
  double t16933;
  double t16934;
  double t16935;
  double t16926;
  double t16938;
  double t16939;
  double t16940;
  double t16945;
  double t16946;
  double t16947;
  double t16942;
  double t16944;
  double t16953;
  double t16954;
  double t16955;
  double t16957;
  double t16958;
  double t16959;
  double t16963;
  double t16964;
  double t16965;
  double t16797;
  double t16798;
  double t16806;
  double t16807;
  double t16824;
  double t16825;
  double t16826;
  double t16982;
  double t16834;
  double t16835;
  double t16836;
  double t16986;
  double t16988;
  double t17011;
  double t17016;
  double t17018;
  double t16970;
  double t16971;
  double t16972;
  double t16869;
  double t16870;
  double t16871;
  double t17054;
  double t17060;
  t6340 = Cos(var1[10]);
  t6362 = Cos(var1[11]);
  t6363 = -1.*t6340*t6362;
  t6364 = Sin(var1[10]);
  t6378 = Sin(var1[11]);
  t6379 = -1.*t6364*t6378;
  t6422 = t6363 + t6379;
  t6430 = Cos(var1[9]);
  t6272 = Cos(var1[5]);
  t6300 = Sin(var1[9]);
  t6453 = Sin(var1[5]);
  t6702 = Cos(var1[3]);
  t6428 = t6272*t6300*t6422;
  t6549 = t6430*t6422*t6453;
  t6607 = t6428 + t6549;
  t6251 = Sin(var1[3]);
  t6706 = Cos(var1[4]);
  t6709 = -1.*t6362*t6364;
  t6725 = t6340*t6378;
  t6728 = t6709 + t6725;
  t6731 = t6706*t6728;
  t6902 = Sin(var1[4]);
  t6939 = t6430*t6272*t6422;
  t7707 = -1.*t6300*t6422*t6453;
  t7776 = t6939 + t7707;
  t12459 = -1.*t6902*t7776;
  t12579 = t6731 + t12459;
  t13638 = t6272*t6300;
  t15879 = t6430*t6453;
  t15996 = t13638 + t15879;
  t16018 = -1.*t6430*t6272;
  t16019 = t6300*t6453;
  t16027 = t16018 + t16019;
  t16046 = t6272*t6300*t6728;
  t16047 = t6430*t6728*t6453;
  t16052 = t16046 + t16047;
  t16054 = t6340*t6362;
  t16159 = t6364*t6378;
  t16177 = t16054 + t16159;
  t16181 = t6706*t16177;
  t16182 = t6430*t6272*t6728;
  t16187 = -1.*t6300*t6728*t6453;
  t16188 = t16182 + t16187;
  t16193 = -1.*t6902*t16188;
  t16194 = t16181 + t16193;
  t16211 = -1.*t6728*t6902;
  t16212 = -1.*t6706*t7776;
  t16219 = t16211 + t16212;
  t16236 = -1.*t6362;
  t16237 = 1. + t16236;
  t16238 = -0.50321*t16237;
  t16239 = -0.23321*t6362;
  t16240 = t16238 + t16239;
  t16246 = -1.*t6430;
  t16247 = 1. + t16246;
  t16250 = -1.*t6340;
  t16251 = 1. + t16250;
  t16252 = -0.28121*t16251;
  t16253 = t6340*t16240;
  t16254 = 0.27*t6364*t6378;
  t16255 = t16252 + t16253 + t16254;
  t16235 = 0.28121*t6364;
  t16241 = t16240*t6364;
  t16242 = -0.27*t6340*t6378;
  t16243 = t16235 + t16241 + t16242;
  t16248 = -0.15121*t16247;
  t16256 = t6430*t16255;
  t16257 = t16248 + t16256;
  t16258 = t6272*t16257;
  t16259 = 0.15121*t16247;
  t16260 = 0.15121*t6430;
  t16261 = 0.15121*t6300;
  t16262 = t6300*t16255;
  t16263 = t16259 + t16260 + t16261 + t16262;
  t16264 = -1.*t16263*t6453;
  t16266 = t16258 + t16264;
  t16271 = t16243*t6902;
  t16272 = t6706*t16266;
  t16273 = t16271 + t16272;
  t16244 = -1.*t16243*t6902;
  t16267 = -1.*t6706*t16266;
  t16268 = t16244 + t16267;
  t16282 = t6706*t16243;
  t16283 = -1.*t6902*t16266;
  t16284 = t16282 + t16283;
  t16231 = t16177*t6902;
  t16232 = t6706*t16188;
  t16233 = t16231 + t16232;
  t16277 = t6272*t16263;
  t16278 = t16257*t6453;
  t16279 = t16277 + t16278;
  t16290 = -1.*t16177*t6902;
  t16291 = -1.*t6706*t16188;
  t16293 = t16290 + t16291;
  t16310 = t6728*t6902;
  t16311 = t6706*t7776;
  t16321 = t16310 + t16311;
  t16413 = -1.*t6272*t6300*t6422;
  t16414 = -1.*t6430*t6422*t6453;
  t16415 = t16413 + t16414;
  t16280 = -1.*t16027*t16279;
  t16434 = -1.*t6272*t16263;
  t16435 = -1.*t16257*t6453;
  t16436 = t16434 + t16435;
  t16299 = t16052*t16279;
  t16448 = -1.*t6272*t6300*t6728;
  t16449 = -1.*t6430*t6728*t6453;
  t16450 = t16448 + t16449;
  t16281 = -1.*t6706*t15996*t16273;
  t16285 = t6902*t15996*t16284;
  t16286 = t16280 + t16281 + t16285;
  t16438 = -1.*t15996*t16279;
  t16443 = -1.*t16027*t16266;
  t16439 = t6430*t6272;
  t16440 = -1.*t6300*t6453;
  t16441 = t16439 + t16440;
  t16447 = t16188*t16279;
  t16459 = t16052*t16266;
  t16300 = t16233*t16273;
  t16301 = t16194*t16284;
  t16302 = t16299 + t16300 + t16301;
  t16337 = -1.*t16052*t16279;
  t16360 = t6607*t16279;
  t16500 = -1.*t16188*t16279;
  t16502 = -1.*t16052*t16266;
  t16523 = t7776*t16279;
  t16527 = t6607*t16266;
  t16338 = -1.*t16233*t16273;
  t16339 = -1.*t16194*t16284;
  t16347 = t16337 + t16338 + t16339;
  t16361 = t16321*t16273;
  t16365 = t12579*t16284;
  t16369 = t16360 + t16361 + t16365;
  t16384 = t16027*t16279;
  t16405 = -1.*t6607*t16279;
  t16386 = t6706*t15996*t16273;
  t16387 = -1.*t6902*t15996*t16284;
  t16390 = t16384 + t16386 + t16387;
  t16470 = Power(t6706,2);
  t16473 = Power(t6902,2);
  t16585 = t15996*t16279;
  t16587 = t16027*t16266;
  t16591 = -1.*t7776*t16279;
  t16593 = -1.*t6607*t16266;
  t16406 = -1.*t16321*t16273;
  t16407 = -1.*t12579*t16284;
  t16408 = t16405 + t16406 + t16407;
  t16419 = var2[0]*t6706*t16415;
  t16420 = t6251*t6902*t16415;
  t16421 = t6702*t7776;
  t16422 = t16420 + t16421;
  t16424 = var2[1]*t16422;
  t16426 = -1.*t6702*t6902*t16415;
  t16427 = t6251*t7776;
  t16428 = t16426 + t16427;
  t16430 = var2[2]*t16428;
  t16431 = -1.*t15996*t16266;
  t16432 = t16280 + t16431;
  t16433 = t16188*t16432;
  t16625 = -0.15121*t6300;
  t16626 = -1.*t6300*t16255;
  t16627 = t16625 + t16626;
  t16623 = t16260 + t16256;
  t16442 = -1.*t16441*t16266;
  t16632 = t6272*t16627;
  t16633 = -1.*t16623*t6453;
  t16634 = t16632 + t16633;
  t16636 = t6272*t16623;
  t16637 = t16627*t6453;
  t16638 = t16636 + t16637;
  t16458 = t16450*t16266;
  t16462 = t16243*t16177;
  t16463 = t16188*t16266;
  t16464 = t16462 + t16299 + t16463;
  t16466 = t15996*t16464;
  t16469 = t6706*t16450*t16286;
  t16640 = -1.*t16027*t16638;
  t16476 = -1.*t6706*t16441*t16273;
  t16477 = t6902*t16441*t16284;
  t16644 = t16052*t16638;
  t16482 = t6706*t16450*t16273;
  t16483 = -1.*t6902*t16450*t16284;
  t16486 = t6706*t16441*t16302;
  t16490 = var2[0]*t6706*t16441;
  t16491 = t6251*t15996;
  t16492 = -1.*t6702*t6902*t16441;
  t16493 = t16491 + t16492;
  t16494 = var2[2]*t16493;
  t16495 = t6702*t15996;
  t16496 = t6251*t6902*t16441;
  t16497 = t16495 + t16496;
  t16498 = var2[1]*t16497;
  t16501 = -1.*t16450*t16266;
  t16505 = -1.*t16243*t16177;
  t16506 = -1.*t16188*t16266;
  t16517 = t16505 + t16337 + t16506;
  t16518 = t7776*t16517;
  t16524 = t16415*t16266;
  t16535 = t16243*t6728;
  t16536 = t7776*t16266;
  t16537 = t16535 + t16360 + t16536;
  t16538 = t16188*t16537;
  t16676 = -1.*t16052*t16638;
  t16552 = -1.*t6706*t16450*t16273;
  t16553 = t6902*t16450*t16284;
  t16680 = t6607*t16638;
  t16561 = t6706*t16415*t16273;
  t16562 = -1.*t6902*t16415*t16284;
  t16565 = t6706*t16415*t16347;
  t16566 = t6706*t16450*t16369;
  t16571 = var2[0]*t6706*t16450;
  t16572 = t6251*t6902*t16450;
  t16573 = t6702*t16188;
  t16575 = t16572 + t16573;
  t16576 = var2[1]*t16575;
  t16577 = -1.*t6702*t6902*t16450;
  t16578 = t6251*t16188;
  t16579 = t16577 + t16578;
  t16580 = var2[2]*t16579;
  t16581 = t15996*t16266;
  t16582 = t16384 + t16581;
  t16583 = t7776*t16582;
  t16586 = t16441*t16266;
  t16592 = -1.*t16415*t16266;
  t16597 = -1.*t16243*t6728;
  t16598 = -1.*t7776*t16266;
  t16599 = t16597 + t16405 + t16598;
  t16601 = t15996*t16599;
  t16605 = t6706*t16415*t16390;
  t16703 = t16027*t16638;
  t16608 = t6706*t16441*t16273;
  t16609 = -1.*t6902*t16441*t16284;
  t16707 = -1.*t6607*t16638;
  t16614 = -1.*t6706*t16415*t16273;
  t16615 = t6902*t16415*t16284;
  t16618 = t6706*t16441*t16408;
  t16723 = t6362*t6364;
  t16724 = -1.*t6340*t6378;
  t16725 = t16723 + t16724;
  t16735 = t6430*t6272*t16725;
  t16736 = -1.*t6300*t16725*t6453;
  t16737 = t16735 + t16736;
  t16741 = t6272*t6300*t16725;
  t16742 = t6430*t16725*t6453;
  t16743 = t16741 + t16742;
  t16745 = t6706*t6422;
  t16746 = -1.*t6902*t16737;
  t16747 = t16745 + t16746;
  t16755 = -0.28121*t6364;
  t16756 = -1.*t16240*t6364;
  t16757 = 0.27*t6340*t6378;
  t16758 = t16755 + t16756 + t16757;
  t16759 = t6272*t6300*t16758;
  t16760 = t6430*t16758*t6453;
  t16761 = t16759 + t16760;
  t16763 = t6430*t6272*t16758;
  t16764 = -1.*t6300*t16758*t6453;
  t16765 = t16763 + t16764;
  t16762 = -1.*t16027*t16761;
  t16770 = 0.28121*t6340;
  t16771 = t16770 + t16253 + t16254;
  t16773 = t16761*t16052;
  t16779 = t16771*t6902;
  t16780 = t6706*t16765;
  t16781 = t16779 + t16780;
  t16783 = t6706*t16771;
  t16784 = -1.*t6902*t16765;
  t16785 = t16783 + t16784;
  t16800 = t16243*t6422;
  t16803 = t6728*t16771;
  t16816 = Power(t6430,2);
  t16818 = Power(t6300,2);
  t16811 = -1.*t16771*t16177;
  t16840 = t16761*t6607;
  t16842 = t16743*t16279;
  t16734 = t6422*t6902;
  t16738 = t6706*t16737;
  t16739 = t16734 + t16738;
  t16847 = -1.*t16761*t16052;
  t13617 = t6702*t6607;
  t13624 = -1.*t6251*t12579;
  t13629 = t13617 + t13624;
  t16879 = t16027*t16761;
  t16886 = -1.*t16761*t6607;
  t16888 = -1.*t16743*t16279;
  t16726 = 0.15121*t16725;
  t16727 = 0.15121*t6728;
  t16728 = t16726 + t16727;
  t16729 = var2[9]*t16728;
  t16730 = -1.*t6300*t16257;
  t16731 = t6430*t16263;
  t16732 = t16730 + t16731;
  t16202 = t6702*t16052;
  t16203 = -1.*t6251*t16194;
  t16207 = t16202 + t16203;
  t16921 = 0.27*t6362*t6364;
  t16922 = t16921 + t16242;
  t16923 = t6272*t6300*t16922;
  t16924 = t6430*t16922*t6453;
  t16925 = t16923 + t16924;
  t16927 = t6430*t6272*t16922;
  t16928 = -1.*t6300*t16922*t6453;
  t16929 = t16927 + t16928;
  t16933 = t6272*t6300*t16177;
  t16934 = t6430*t16177*t6453;
  t16935 = t16933 + t16934;
  t16926 = -1.*t16027*t16925;
  t16938 = -0.27*t6340*t6362;
  t16939 = -0.27*t6364*t6378;
  t16940 = t16938 + t16939;
  t16945 = t6430*t6272*t16177;
  t16946 = -1.*t6300*t16177*t6453;
  t16947 = t16945 + t16946;
  t16942 = t16925*t16052;
  t16944 = t16935*t16279;
  t16953 = t16940*t6902;
  t16954 = t6706*t16929;
  t16955 = t16953 + t16954;
  t16957 = t6706*t16940;
  t16958 = -1.*t6902*t16929;
  t16959 = t16957 + t16958;
  t16963 = t16725*t6902;
  t16964 = t6706*t16947;
  t16965 = t16963 + t16964;
  t16797 = t6422*t16255;
  t16798 = t16535 + t16797;
  t16806 = -1.*t6728*t16255;
  t16807 = t16806 + t16505;
  t16824 = -1.*t6430*t6728*t16257;
  t16825 = -1.*t6300*t6728*t16263;
  t16826 = t16505 + t16824 + t16825;
  t16982 = t6728*t16940;
  t16834 = t6430*t6422*t16257;
  t16835 = t6300*t6422*t16263;
  t16836 = t16535 + t16834 + t16835;
  t16986 = -1.*t16725*t16243;
  t16988 = -1.*t16940*t16177;
  t17011 = t16925*t6607;
  t17016 = -1.*t16925*t16052;
  t17018 = -1.*t16935*t16279;
  t16970 = t6706*t16725;
  t16971 = -1.*t6902*t16947;
  t16972 = t16970 + t16971;
  t16869 = t6300*t16257;
  t16870 = -1.*t6430*t16263;
  t16871 = t16869 + t16870;
  t17054 = t16027*t16925;
  t17060 = -1.*t16925*t6607;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t6251*t6607 - 1.*t12579*t6702)*var2[1] + t13629*var2[2];
  p_output1[10]=(-1.*t16027*t6251 + t15996*t6702*t6902)*var2[1] + (t16027*t6702 + t15996*t6251*t6902)*var2[2];
  p_output1[11]=(-1.*t16052*t6251 - 1.*t16194*t6702)*var2[1] + t16207*var2[2];
  p_output1[12]=t12579*var2[0] - 1.*t16219*t6251*var2[1] + t16219*t6702*var2[2] + (t16194*t16286 + t15996*(t16194*t16268 + t16194*t16273 + t16233*t16284 + t16284*t16293)*t6706 - 1.*t15996*t16302*t6902 + t16233*(t15996*t16268*t6902 + t15996*t16273*t6902))*var2[3];
  p_output1[13]=-1.*t15996*t6902*var2[0] + t15996*t6251*t6706*var2[1] - 1.*t15996*t6702*t6706*var2[2] + ((-1.*t16194*t16268 - 1.*t16194*t16273 - 1.*t16233*t16284 - 1.*t16284*t16293)*t16321 + t16233*(t12579*t16268 + t12579*t16273 + t16219*t16284 + t16284*t16321) + t12579*t16347 + t16194*t16369)*var2[3];
  p_output1[14]=t16194*var2[0] - 1.*t16293*t6251*var2[1] + t16293*t6702*var2[2] + (t12579*t16390 + t15996*(-1.*t12579*t16268 - 1.*t12579*t16273 - 1.*t16219*t16284 - 1.*t16284*t16321)*t6706 - 1.*t15996*t16408*t6902 + t16321*(-1.*t15996*t16268*t6902 - 1.*t15996*t16273*t6902))*var2[3];
  p_output1[15]=t16419 + t16424 + t16430 + (t16469 + t16233*(t16438 + t16443 - 1.*t15996*t16436*t16470 - 1.*t15996*t16436*t16473 + t16476 + t16477) + t16486 + t15996*t6706*(t16447 + t16459 + t16482 + t16483 + t16233*t16436*t6706 - 1.*t16194*t16436*t6902))*var2[3] + (t16433 + t16052*(-1.*t15996*t16436 + t16438 + t16442 + t16443) + t16027*(t16188*t16436 + t16447 + t16458 + t16459) + t16466)*var2[4];
  p_output1[16]=t16490 + t16494 + t16498 + (t16565 + t16566 + t16233*(t16523 + t16527 + t16561 + t16562 + t16321*t16436*t6706 - 1.*t12579*t16436*t6902) + t16321*(t16500 + t16502 + t16552 + t16553 - 1.*t16233*t16436*t6706 + t16194*t16436*t6902))*var2[3] + (t16518 + t16538 + (-1.*t16188*t16436 + t16500 + t16501 + t16502)*t6607 + t16052*(t16523 + t16524 + t16527 + t16436*t7776))*var2[4];
  p_output1[17]=t16571 + t16576 + t16580 + (t16605 + t16321*(t15996*t16436*t16470 + t15996*t16436*t16473 + t16585 + t16587 + t16608 + t16609) + t16618 + t15996*t6706*(t16591 + t16593 + t16614 + t16615 - 1.*t16321*t16436*t6706 + t12579*t16436*t6902))*var2[3] + (t16583 + t16601 + (t15996*t16436 + t16585 + t16586 + t16587)*t6607 + t16027*(t16591 + t16592 + t16593 - 1.*t16436*t7776))*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t16419 + t16424 + t16430 + (t16469 + t16486 + t16233*(t16438 + t16476 + t16477 - 1.*t15996*t16470*t16634 - 1.*t15996*t16473*t16634 + t16640) + t15996*t6706*(t16447 + t16482 + t16483 + t16644 + t16233*t16634*t6706 - 1.*t16194*t16634*t6902))*var2[3] + (t16433 + t16466 + t16052*(t16438 + t16442 - 1.*t15996*t16634 + t16640) + t16027*(t16447 + t16458 + t16188*t16634 + t16644))*var2[4] + t16177*(-1.*t16263*t6300 - 1.*t16627*t6300 - 1.*t16257*t6430 + t16623*t6430)*var2[5];
  p_output1[28]=t16490 + t16494 + t16498 + (t16565 + t16566 + t16233*(t16523 + t16561 + t16562 + t16680 + t16321*t16634*t6706 - 1.*t12579*t16634*t6902) + t16321*(t16500 + t16552 + t16553 + t16676 - 1.*t16233*t16634*t6706 + t16194*t16634*t6902))*var2[3] + (t16518 + t16538 + (t16500 + t16501 - 1.*t16188*t16634 + t16676)*t6607 + t16052*(t16523 + t16524 + t16680 + t16634*t7776))*var2[4] + (t16177*(-1.*t16257*t6300*t6422 + t16623*t6300*t6422 + t16263*t6422*t6430 + t16627*t6422*t6430) + t6728*(t16257*t6300*t6728 - 1.*t16623*t6300*t6728 - 1.*t16263*t6430*t6728 - 1.*t16627*t6430*t6728))*var2[5];
  p_output1[29]=t16571 + t16576 + t16580 + (t16605 + t16618 + t16321*(t16585 + t16608 + t16609 + t15996*t16470*t16634 + t15996*t16473*t16634 + t16703) + t15996*t6706*(t16591 + t16614 + t16615 + t16707 - 1.*t16321*t16634*t6706 + t12579*t16634*t6902))*var2[3] + (t16583 + t16601 + (t16585 + t16586 + t15996*t16634 + t16703)*t6607 + t16027*(t16591 + t16592 + t16707 - 1.*t16634*t7776))*var2[4] + (t16263*t6300 + t16627*t6300 + t16257*t6430 - 1.*t16623*t6430)*t6728*var2[5];
  p_output1[30]=t16729 + t16739*var2[0] + (-1.*t16747*t6251 + t16743*t6702)*var2[1] + (t16743*t6251 + t16747*t6702)*var2[2] + (t16286*t16321 + t15996*(t16360 + t16361 + t16365 + t16773 + t16233*t16781 + t16194*t16785)*t6706 + t16233*(t16762 - 1.*t15996*t16781*t6706 + t15996*t16785*t6902))*var2[3] + (t16052*(t16762 - 1.*t15996*t16765) + t16027*(t16360 + t16535 + t16536 + t16188*t16765 + t16177*t16771 + t16773) + t16432*t6607)*var2[4] + t16732*t6728*var2[5];
  p_output1[31]=(t16321*t16369 + t16347*t16739 + t16233*(t16273*t16739 + t16284*t16747 + t16321*t16781 + t12579*t16785 + t16840 + t16842) + t16321*(t16405 + t16406 + t16407 - 1.*t16233*t16781 - 1.*t16194*t16785 + t16847))*var2[3] + (t16517*t16743 + t16537*t6607 + (t16405 + t16597 + t16598 - 1.*t16188*t16765 + t16811 + t16847)*t6607 + t16052*(t16266*t16737 + t16800 + t16803 + t16840 + t16842 + t16765*t7776))*var2[4] + (t16826*t6422 + t16177*(t16800 + t16803 + t16263*t16725*t6300 + t16758*t16816*t6422 + t16758*t16818*t6422 + t16257*t16725*t6430) + t16836*t6728 + t6728*(t16597 + t16811 - 1.*t16263*t6300*t6422 - 1.*t16257*t6422*t6430 - 1.*t16758*t16816*t6728 - 1.*t16758*t16818*t6728))*var2[5] + (t16807*t6422 + t16177*(t16255*t16725 + t16800 + t16803 + t16758*t6422) + t16798*t6728 + t6728*(t16597 + t16811 - 1.*t16255*t6422 - 1.*t16758*t6728))*var2[9];
  p_output1[32]=t16321*var2[0] + t13629*var2[1] + (t6251*t6607 + t12579*t6702)*var2[2] + (t16390*t16739 + t15996*(-1.*t16273*t16739 - 1.*t16284*t16747 - 1.*t16321*t16781 - 1.*t12579*t16785 + t16886 + t16888)*t6706 + t16321*(t16879 + t15996*t16781*t6706 - 1.*t15996*t16785*t6902))*var2[3] + (t16582*t16743 + (t15996*t16765 + t16879)*t6607 + t16027*(-1.*t16266*t16737 + t16886 + t16888 - 1.*t16243*t6422 - 1.*t16771*t6728 - 1.*t16765*t7776))*var2[4] + t16871*t6422*var2[5];
  p_output1[33]=t16729 + t16233*var2[0] + t16207*var2[1] + (t16052*t6251 + t16194*t6702)*var2[2] + (t16286*t16965 + t15996*(t16942 + t16944 + t16233*t16955 + t16194*t16959 + t16273*t16965 + t16284*t16972)*t6706 + t16233*(t16926 - 1.*t15996*t16955*t6706 + t15996*t16959*t6902))*var2[3] + (t16052*(t16926 - 1.*t15996*t16929) + t16432*t16935 + t16027*(t16243*t16725 + t16188*t16929 + t16177*t16940 + t16942 + t16944 + t16266*t16947))*var2[4] + t16725*t16732*var2[5] + (0.28121*t6362 + t16240*t6362 - 0.27*Power(t6362,2))*var2[10];
  p_output1[34]=(t16233*t16347 + t16369*t16965 + t16233*(t16299 + t16300 + t16301 + t16321*t16955 + t12579*t16959 + t17011) + t16321*(-1.*t16233*t16955 - 1.*t16194*t16959 - 1.*t16273*t16965 - 1.*t16284*t16972 + t17016 + t17018))*var2[3] + (t16052*t16517 + t16537*t16935 + (-1.*t16188*t16929 - 1.*t16266*t16947 + t16986 + t16988 + t17016 + t17018)*t6607 + t16052*(t16299 + t16462 + t16463 + t16982 + t17011 + t16929*t7776))*var2[4] + (t16177*t16826 + t16725*t16836 + t6728*(t16986 + t16988 - 1.*t16177*t16263*t6300 - 1.*t16177*t16257*t6430 - 1.*t16816*t16922*t6728 - 1.*t16818*t16922*t6728) + t16177*(t16462 + t16982 + t16816*t16922*t6422 + t16818*t16922*t6422 + t16263*t6300*t6728 + t16257*t6430*t6728))*var2[5] + (t16725*t16798 + t16177*t16807 + t16177*(t16462 + t16982 + t16922*t6422 + t16255*t6728) + t6728*(-1.*t16177*t16255 + t16986 + t16988 - 1.*t16922*t6728))*var2[9];
  p_output1[35]=t16965*var2[0] + (-1.*t16972*t6251 + t16935*t6702)*var2[1] + (t16935*t6251 + t16972*t6702)*var2[2] + (t16233*t16390 + t15996*(t16337 + t16338 + t16339 - 1.*t16321*t16955 - 1.*t12579*t16959 + t17060)*t6706 + t16321*(t17054 + t15996*t16955*t6706 - 1.*t15996*t16959*t6902))*var2[3] + (t16052*t16582 + (t15996*t16929 + t17054)*t6607 + t16027*(t16337 + t16505 + t16506 + t17060 - 1.*t16940*t6728 - 1.*t16929*t7776))*var2[4] + t16177*t16871*var2[5] + (-0.28121*t6378 - 1.*t16240*t6378 + 0.27*t6362*t6378)*var2[10];
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
