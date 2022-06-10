/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:07 GMT+02:00
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
  double t18820;
  double t19377;
  double t19488;
  double t19494;
  double t19497;
  double t19510;
  double t19522;
  double t19561;
  double t997;
  double t4916;
  double t19563;
  double t19674;
  double t19545;
  double t19565;
  double t19653;
  double t114;
  double t19677;
  double t19713;
  double t19714;
  double t19753;
  double t19774;
  double t20076;
  double t20096;
  double t20102;
  double t20103;
  double t20105;
  double t20115;
  double t20175;
  double t20187;
  double t20189;
  double t20202;
  double t20205;
  double t20209;
  double t20236;
  double t20237;
  double t20241;
  double t20244;
  double t20246;
  double t20250;
  double t20251;
  double t20252;
  double t20268;
  double t20269;
  double t20270;
  double t20271;
  double t20294;
  double t20296;
  double t20297;
  double t20337;
  double t20340;
  double t20345;
  double t20346;
  double t20347;
  double t20368;
  double t20369;
  double t20378;
  double t20381;
  double t20384;
  double t20385;
  double t20389;
  double t20393;
  double t20327;
  double t20348;
  double t20352;
  double t20354;
  double t20372;
  double t20394;
  double t20395;
  double t20397;
  double t20400;
  double t20402;
  double t20405;
  double t20409;
  double t20411;
  double t20413;
  double t20460;
  double t20493;
  double t20500;
  double t20502;
  double t20358;
  double t20468;
  double t20482;
  double t20562;
  double t20565;
  double t20567;
  double t20308;
  double t20316;
  double t20320;
  double t20531;
  double t20537;
  double t20538;
  double t20618;
  double t20627;
  double t20630;
  double t20686;
  double t20697;
  double t20719;
  double t20926;
  double t20927;
  double t20930;
  double t20539;
  double t20951;
  double t20952;
  double t20953;
  double t20640;
  double t20970;
  double t20971;
  double t20973;
  double t20556;
  double t20569;
  double t20570;
  double t20955;
  double t20961;
  double t20956;
  double t20957;
  double t20958;
  double t20969;
  double t20975;
  double t20642;
  double t20650;
  double t20660;
  double t20756;
  double t20849;
  double t21139;
  double t21142;
  double t21173;
  double t21177;
  double t20759;
  double t20761;
  double t20764;
  double t20850;
  double t20854;
  double t20855;
  double t20877;
  double t20911;
  double t20879;
  double t20880;
  double t20881;
  double t21028;
  double t21031;
  double t21350;
  double t21357;
  double t21361;
  double t21379;
  double t20913;
  double t20916;
  double t20918;
  double t20933;
  double t20935;
  double t20936;
  double t20937;
  double t20940;
  double t20942;
  double t20944;
  double t20945;
  double t20946;
  double t20947;
  double t20948;
  double t20949;
  double t21484;
  double t21485;
  double t21486;
  double t21480;
  double t20960;
  double t21504;
  double t21508;
  double t21513;
  double t21517;
  double t21519;
  double t21522;
  double t20974;
  double t20995;
  double t20997;
  double t21006;
  double t21009;
  double t21027;
  double t21531;
  double t21038;
  double t21049;
  double t21541;
  double t21066;
  double t21067;
  double t21082;
  double t21091;
  double t21096;
  double t21108;
  double t21109;
  double t21110;
  double t21115;
  double t21125;
  double t21128;
  double t21136;
  double t21141;
  double t21158;
  double t21164;
  double t21165;
  double t21167;
  double t21174;
  double t21185;
  double t21189;
  double t21191;
  double t21193;
  double t21603;
  double t21224;
  double t21225;
  double t21612;
  double t21243;
  double t21245;
  double t21266;
  double t21267;
  double t21278;
  double t21281;
  double t21297;
  double t21300;
  double t21306;
  double t21308;
  double t21310;
  double t21322;
  double t21323;
  double t21325;
  double t21333;
  double t21338;
  double t21354;
  double t21363;
  double t21388;
  double t21391;
  double t21410;
  double t21412;
  double t21421;
  double t21662;
  double t21431;
  double t21432;
  double t21675;
  double t21456;
  double t21457;
  double t21463;
  double t21705;
  double t21706;
  double t21709;
  double t21729;
  double t21731;
  double t21733;
  double t21739;
  double t21741;
  double t21742;
  double t21744;
  double t21751;
  double t21752;
  double t21773;
  double t21774;
  double t21775;
  double t21776;
  double t21777;
  double t21781;
  double t21782;
  double t21789;
  double t21790;
  double t21794;
  double t21785;
  double t21805;
  double t21809;
  double t21812;
  double t21824;
  double t21825;
  double t21826;
  double t21830;
  double t21832;
  double t21833;
  double t21859;
  double t21863;
  double t21884;
  double t21886;
  double t21878;
  double t21937;
  double t21940;
  double t21728;
  double t21734;
  double t21736;
  double t21968;
  double t20142;
  double t20146;
  double t20156;
  double t22066;
  double t22093;
  double t22096;
  double t21710;
  double t21717;
  double t21718;
  double t21719;
  double t21720;
  double t21721;
  double t21722;
  double t20283;
  double t20284;
  double t20290;
  double t22238;
  double t22242;
  double t22245;
  double t22246;
  double t22248;
  double t22256;
  double t22260;
  double t22261;
  double t22293;
  double t22300;
  double t22312;
  double t22255;
  double t22334;
  double t22383;
  double t22393;
  double t22409;
  double t22411;
  double t22413;
  double t22395;
  double t22403;
  double t22437;
  double t22440;
  double t22441;
  double t22454;
  double t22457;
  double t22463;
  double t22479;
  double t22492;
  double t22495;
  double t21856;
  double t21857;
  double t21870;
  double t21872;
  double t21894;
  double t21897;
  double t21900;
  double t22573;
  double t21918;
  double t21923;
  double t21925;
  double t22620;
  double t22630;
  double t22840;
  double t22850;
  double t22856;
  double t22506;
  double t22516;
  double t22522;
  double t22029;
  double t22035;
  double t22036;
  double t23136;
  double t23169;
  t18820 = Cos(var1[10]);
  t19377 = Cos(var1[11]);
  t19488 = -1.*t18820*t19377;
  t19494 = Sin(var1[10]);
  t19497 = Sin(var1[11]);
  t19510 = -1.*t19494*t19497;
  t19522 = t19488 + t19510;
  t19561 = Cos(var1[9]);
  t997 = Cos(var1[5]);
  t4916 = Sin(var1[9]);
  t19563 = Sin(var1[5]);
  t19674 = Cos(var1[3]);
  t19545 = t997*t4916*t19522;
  t19565 = t19561*t19522*t19563;
  t19653 = t19545 + t19565;
  t114 = Sin(var1[3]);
  t19677 = Cos(var1[4]);
  t19713 = -1.*t19377*t19494;
  t19714 = t18820*t19497;
  t19753 = t19713 + t19714;
  t19774 = t19677*t19753;
  t20076 = Sin(var1[4]);
  t20096 = t19561*t997*t19522;
  t20102 = -1.*t4916*t19522*t19563;
  t20103 = t20096 + t20102;
  t20105 = -1.*t20076*t20103;
  t20115 = t19774 + t20105;
  t20175 = t997*t4916;
  t20187 = t19561*t19563;
  t20189 = t20175 + t20187;
  t20202 = -1.*t19561*t997;
  t20205 = t4916*t19563;
  t20209 = t20202 + t20205;
  t20236 = t997*t4916*t19753;
  t20237 = t19561*t19753*t19563;
  t20241 = t20236 + t20237;
  t20244 = t18820*t19377;
  t20246 = t19494*t19497;
  t20250 = t20244 + t20246;
  t20251 = t19677*t20250;
  t20252 = t19561*t997*t19753;
  t20268 = -1.*t4916*t19753*t19563;
  t20269 = t20252 + t20268;
  t20270 = -1.*t20076*t20269;
  t20271 = t20251 + t20270;
  t20294 = -1.*t19753*t20076;
  t20296 = -1.*t19677*t20103;
  t20297 = t20294 + t20296;
  t20337 = -1.*t19377;
  t20340 = 1. + t20337;
  t20345 = -0.50321*t20340;
  t20346 = -0.19821*t19377;
  t20347 = t20345 + t20346;
  t20368 = -1.*t19561;
  t20369 = 1. + t20368;
  t20378 = -1.*t18820;
  t20381 = 1. + t20378;
  t20384 = -0.28121*t20381;
  t20385 = t18820*t20347;
  t20389 = 0.305*t19494*t19497;
  t20393 = t20384 + t20385 + t20389;
  t20327 = 0.28121*t19494;
  t20348 = t20347*t19494;
  t20352 = -0.305*t18820*t19497;
  t20354 = t20327 + t20348 + t20352;
  t20372 = -0.15121*t20369;
  t20394 = t19561*t20393;
  t20395 = t20372 + t20394;
  t20397 = t997*t20395;
  t20400 = 0.15121*t20369;
  t20402 = 0.15121*t19561;
  t20405 = 0.15121*t4916;
  t20409 = t4916*t20393;
  t20411 = t20400 + t20402 + t20405 + t20409;
  t20413 = -1.*t20411*t19563;
  t20460 = t20397 + t20413;
  t20493 = t20354*t20076;
  t20500 = t19677*t20460;
  t20502 = t20493 + t20500;
  t20358 = -1.*t20354*t20076;
  t20468 = -1.*t19677*t20460;
  t20482 = t20358 + t20468;
  t20562 = t19677*t20354;
  t20565 = -1.*t20076*t20460;
  t20567 = t20562 + t20565;
  t20308 = t20250*t20076;
  t20316 = t19677*t20269;
  t20320 = t20308 + t20316;
  t20531 = t997*t20411;
  t20537 = t20395*t19563;
  t20538 = t20531 + t20537;
  t20618 = -1.*t20250*t20076;
  t20627 = -1.*t19677*t20269;
  t20630 = t20618 + t20627;
  t20686 = t19753*t20076;
  t20697 = t19677*t20103;
  t20719 = t20686 + t20697;
  t20926 = -1.*t997*t4916*t19522;
  t20927 = -1.*t19561*t19522*t19563;
  t20930 = t20926 + t20927;
  t20539 = -1.*t20209*t20538;
  t20951 = -1.*t997*t20411;
  t20952 = -1.*t20395*t19563;
  t20953 = t20951 + t20952;
  t20640 = t20241*t20538;
  t20970 = -1.*t997*t4916*t19753;
  t20971 = -1.*t19561*t19753*t19563;
  t20973 = t20970 + t20971;
  t20556 = -1.*t19677*t20189*t20502;
  t20569 = t20076*t20189*t20567;
  t20570 = t20539 + t20556 + t20569;
  t20955 = -1.*t20189*t20538;
  t20961 = -1.*t20209*t20460;
  t20956 = t19561*t997;
  t20957 = -1.*t4916*t19563;
  t20958 = t20956 + t20957;
  t20969 = t20269*t20538;
  t20975 = t20241*t20460;
  t20642 = t20320*t20502;
  t20650 = t20271*t20567;
  t20660 = t20640 + t20642 + t20650;
  t20756 = -1.*t20241*t20538;
  t20849 = t19653*t20538;
  t21139 = -1.*t20269*t20538;
  t21142 = -1.*t20241*t20460;
  t21173 = t20103*t20538;
  t21177 = t19653*t20460;
  t20759 = -1.*t20320*t20502;
  t20761 = -1.*t20271*t20567;
  t20764 = t20756 + t20759 + t20761;
  t20850 = t20719*t20502;
  t20854 = t20115*t20567;
  t20855 = t20849 + t20850 + t20854;
  t20877 = t20209*t20538;
  t20911 = -1.*t19653*t20538;
  t20879 = t19677*t20189*t20502;
  t20880 = -1.*t20076*t20189*t20567;
  t20881 = t20877 + t20879 + t20880;
  t21028 = Power(t19677,2);
  t21031 = Power(t20076,2);
  t21350 = t20189*t20538;
  t21357 = t20209*t20460;
  t21361 = -1.*t20103*t20538;
  t21379 = -1.*t19653*t20460;
  t20913 = -1.*t20719*t20502;
  t20916 = -1.*t20115*t20567;
  t20918 = t20911 + t20913 + t20916;
  t20933 = var2[0]*t19677*t20930;
  t20935 = t114*t20076*t20930;
  t20936 = t19674*t20103;
  t20937 = t20935 + t20936;
  t20940 = var2[1]*t20937;
  t20942 = -1.*t19674*t20076*t20930;
  t20944 = t114*t20103;
  t20945 = t20942 + t20944;
  t20946 = var2[2]*t20945;
  t20947 = -1.*t20189*t20460;
  t20948 = t20539 + t20947;
  t20949 = t20269*t20948;
  t21484 = -0.15121*t4916;
  t21485 = -1.*t4916*t20393;
  t21486 = t21484 + t21485;
  t21480 = t20402 + t20394;
  t20960 = -1.*t20958*t20460;
  t21504 = t997*t21486;
  t21508 = -1.*t21480*t19563;
  t21513 = t21504 + t21508;
  t21517 = t997*t21480;
  t21519 = t21486*t19563;
  t21522 = t21517 + t21519;
  t20974 = t20973*t20460;
  t20995 = t20354*t20250;
  t20997 = t20269*t20460;
  t21006 = t20995 + t20640 + t20997;
  t21009 = t20189*t21006;
  t21027 = t19677*t20973*t20570;
  t21531 = -1.*t20209*t21522;
  t21038 = -1.*t19677*t20958*t20502;
  t21049 = t20076*t20958*t20567;
  t21541 = t20241*t21522;
  t21066 = t19677*t20973*t20502;
  t21067 = -1.*t20076*t20973*t20567;
  t21082 = t19677*t20958*t20660;
  t21091 = var2[0]*t19677*t20958;
  t21096 = t114*t20189;
  t21108 = -1.*t19674*t20076*t20958;
  t21109 = t21096 + t21108;
  t21110 = var2[2]*t21109;
  t21115 = t19674*t20189;
  t21125 = t114*t20076*t20958;
  t21128 = t21115 + t21125;
  t21136 = var2[1]*t21128;
  t21141 = -1.*t20973*t20460;
  t21158 = -1.*t20354*t20250;
  t21164 = -1.*t20269*t20460;
  t21165 = t21158 + t20756 + t21164;
  t21167 = t20103*t21165;
  t21174 = t20930*t20460;
  t21185 = t20354*t19753;
  t21189 = t20103*t20460;
  t21191 = t21185 + t20849 + t21189;
  t21193 = t20269*t21191;
  t21603 = -1.*t20241*t21522;
  t21224 = -1.*t19677*t20973*t20502;
  t21225 = t20076*t20973*t20567;
  t21612 = t19653*t21522;
  t21243 = t19677*t20930*t20502;
  t21245 = -1.*t20076*t20930*t20567;
  t21266 = t19677*t20930*t20764;
  t21267 = t19677*t20973*t20855;
  t21278 = var2[0]*t19677*t20973;
  t21281 = t114*t20076*t20973;
  t21297 = t19674*t20269;
  t21300 = t21281 + t21297;
  t21306 = var2[1]*t21300;
  t21308 = -1.*t19674*t20076*t20973;
  t21310 = t114*t20269;
  t21322 = t21308 + t21310;
  t21323 = var2[2]*t21322;
  t21325 = t20189*t20460;
  t21333 = t20877 + t21325;
  t21338 = t20103*t21333;
  t21354 = t20958*t20460;
  t21363 = -1.*t20930*t20460;
  t21388 = -1.*t20354*t19753;
  t21391 = -1.*t20103*t20460;
  t21410 = t21388 + t20911 + t21391;
  t21412 = t20189*t21410;
  t21421 = t19677*t20930*t20881;
  t21662 = t20209*t21522;
  t21431 = t19677*t20958*t20502;
  t21432 = -1.*t20076*t20958*t20567;
  t21675 = -1.*t19653*t21522;
  t21456 = -1.*t19677*t20930*t20502;
  t21457 = t20076*t20930*t20567;
  t21463 = t19677*t20958*t20918;
  t21705 = t19377*t19494;
  t21706 = -1.*t18820*t19497;
  t21709 = t21705 + t21706;
  t21729 = t19561*t997*t21709;
  t21731 = -1.*t4916*t21709*t19563;
  t21733 = t21729 + t21731;
  t21739 = t997*t4916*t21709;
  t21741 = t19561*t21709*t19563;
  t21742 = t21739 + t21741;
  t21744 = t19677*t19522;
  t21751 = -1.*t20076*t21733;
  t21752 = t21744 + t21751;
  t21773 = -0.28121*t19494;
  t21774 = -1.*t20347*t19494;
  t21775 = 0.305*t18820*t19497;
  t21776 = t21773 + t21774 + t21775;
  t21777 = t997*t4916*t21776;
  t21781 = t19561*t21776*t19563;
  t21782 = t21777 + t21781;
  t21789 = t19561*t997*t21776;
  t21790 = -1.*t4916*t21776*t19563;
  t21794 = t21789 + t21790;
  t21785 = -1.*t20209*t21782;
  t21805 = 0.28121*t18820;
  t21809 = t21805 + t20385 + t20389;
  t21812 = t21782*t20241;
  t21824 = t21809*t20076;
  t21825 = t19677*t21794;
  t21826 = t21824 + t21825;
  t21830 = t19677*t21809;
  t21832 = -1.*t20076*t21794;
  t21833 = t21830 + t21832;
  t21859 = t20354*t19522;
  t21863 = t19753*t21809;
  t21884 = Power(t19561,2);
  t21886 = Power(t4916,2);
  t21878 = -1.*t21809*t20250;
  t21937 = t21782*t19653;
  t21940 = t21742*t20538;
  t21728 = t19522*t20076;
  t21734 = t19677*t21733;
  t21736 = t21728 + t21734;
  t21968 = -1.*t21782*t20241;
  t20142 = t19674*t19653;
  t20146 = -1.*t114*t20115;
  t20156 = t20142 + t20146;
  t22066 = t20209*t21782;
  t22093 = -1.*t21782*t19653;
  t22096 = -1.*t21742*t20538;
  t21710 = 0.15121*t21709;
  t21717 = 0.15121*t19753;
  t21718 = t21710 + t21717;
  t21719 = var2[9]*t21718;
  t21720 = -1.*t4916*t20395;
  t21721 = t19561*t20411;
  t21722 = t21720 + t21721;
  t20283 = t19674*t20241;
  t20284 = -1.*t114*t20271;
  t20290 = t20283 + t20284;
  t22238 = 0.305*t19377*t19494;
  t22242 = t22238 + t20352;
  t22245 = t997*t4916*t22242;
  t22246 = t19561*t22242*t19563;
  t22248 = t22245 + t22246;
  t22256 = t19561*t997*t22242;
  t22260 = -1.*t4916*t22242*t19563;
  t22261 = t22256 + t22260;
  t22293 = t997*t4916*t20250;
  t22300 = t19561*t20250*t19563;
  t22312 = t22293 + t22300;
  t22255 = -1.*t20209*t22248;
  t22334 = -0.305*t18820*t19377;
  t22383 = -0.305*t19494*t19497;
  t22393 = t22334 + t22383;
  t22409 = t19561*t997*t20250;
  t22411 = -1.*t4916*t20250*t19563;
  t22413 = t22409 + t22411;
  t22395 = t22248*t20241;
  t22403 = t22312*t20538;
  t22437 = t22393*t20076;
  t22440 = t19677*t22261;
  t22441 = t22437 + t22440;
  t22454 = t19677*t22393;
  t22457 = -1.*t20076*t22261;
  t22463 = t22454 + t22457;
  t22479 = t21709*t20076;
  t22492 = t19677*t22413;
  t22495 = t22479 + t22492;
  t21856 = t19522*t20393;
  t21857 = t21185 + t21856;
  t21870 = -1.*t19753*t20393;
  t21872 = t21870 + t21158;
  t21894 = -1.*t19561*t19753*t20395;
  t21897 = -1.*t4916*t19753*t20411;
  t21900 = t21158 + t21894 + t21897;
  t22573 = t19753*t22393;
  t21918 = t19561*t19522*t20395;
  t21923 = t4916*t19522*t20411;
  t21925 = t21185 + t21918 + t21923;
  t22620 = -1.*t21709*t20354;
  t22630 = -1.*t22393*t20250;
  t22840 = t22248*t19653;
  t22850 = -1.*t22248*t20241;
  t22856 = -1.*t22312*t20538;
  t22506 = t19677*t21709;
  t22516 = -1.*t20076*t22413;
  t22522 = t22506 + t22516;
  t22029 = t4916*t20395;
  t22035 = -1.*t19561*t20411;
  t22036 = t22029 + t22035;
  t23136 = t20209*t22248;
  t23169 = -1.*t22248*t19653;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t114*t19653 - 1.*t19674*t20115)*var2[1] + t20156*var2[2];
  p_output1[10]=(t19674*t20076*t20189 - 1.*t114*t20209)*var2[1] + (t114*t20076*t20189 + t19674*t20209)*var2[2];
  p_output1[11]=(-1.*t114*t20241 - 1.*t19674*t20271)*var2[1] + t20290*var2[2];
  p_output1[12]=t20115*var2[0] - 1.*t114*t20297*var2[1] + t19674*t20297*var2[2] + (t20320*(t20076*t20189*t20482 + t20076*t20189*t20502) + t20271*t20570 + t19677*t20189*(t20271*t20482 + t20271*t20502 + t20320*t20567 + t20567*t20630) - 1.*t20076*t20189*t20660)*var2[3];
  p_output1[13]=-1.*t20076*t20189*var2[0] + t114*t19677*t20189*var2[1] - 1.*t19674*t19677*t20189*var2[2] + ((-1.*t20271*t20482 - 1.*t20271*t20502 - 1.*t20320*t20567 - 1.*t20567*t20630)*t20719 + t20320*(t20115*t20482 + t20115*t20502 + t20297*t20567 + t20567*t20719) + t20115*t20764 + t20271*t20855)*var2[3];
  p_output1[14]=t20271*var2[0] - 1.*t114*t20630*var2[1] + t19674*t20630*var2[2] + ((-1.*t20076*t20189*t20482 - 1.*t20076*t20189*t20502)*t20719 + t19677*t20189*(-1.*t20115*t20482 - 1.*t20115*t20502 - 1.*t20297*t20567 - 1.*t20567*t20719) + t20115*t20881 - 1.*t20076*t20189*t20918)*var2[3];
  p_output1[15]=t20933 + t20940 + t20946 + (t21027 + t20320*(t20955 + t20961 - 1.*t20189*t20953*t21028 - 1.*t20189*t20953*t21031 + t21038 + t21049) + t19677*t20189*(-1.*t20076*t20271*t20953 + t19677*t20320*t20953 + t20969 + t20975 + t21066 + t21067) + t21082)*var2[3] + (t20949 + t20241*(-1.*t20189*t20953 + t20955 + t20960 + t20961) + t20209*(t20269*t20953 + t20969 + t20974 + t20975) + t21009)*var2[4];
  p_output1[16]=t21091 + t21110 + t21136 + (t20719*(t20076*t20271*t20953 - 1.*t19677*t20320*t20953 + t21139 + t21142 + t21224 + t21225) + t20320*(-1.*t20076*t20115*t20953 + t19677*t20719*t20953 + t21173 + t21177 + t21243 + t21245) + t21266 + t21267)*var2[3] + (t19653*(-1.*t20269*t20953 + t21139 + t21141 + t21142) + t21167 + t20241*(t20103*t20953 + t21173 + t21174 + t21177) + t21193)*var2[4];
  p_output1[17]=t21278 + t21306 + t21323 + (t21421 + t20719*(t20189*t20953*t21028 + t20189*t20953*t21031 + t21350 + t21357 + t21431 + t21432) + t19677*t20189*(t20076*t20115*t20953 - 1.*t19677*t20719*t20953 + t21361 + t21379 + t21456 + t21457) + t21463)*var2[3] + (t21338 + t19653*(t20189*t20953 + t21350 + t21354 + t21357) + t20209*(-1.*t20103*t20953 + t21361 + t21363 + t21379) + t21412)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t20933 + t20940 + t20946 + (t21027 + t21082 + t20320*(t20955 + t21038 + t21049 - 1.*t20189*t21028*t21513 - 1.*t20189*t21031*t21513 + t21531) + t19677*t20189*(t20969 + t21066 + t21067 - 1.*t20076*t20271*t21513 + t19677*t20320*t21513 + t21541))*var2[3] + (t20949 + t21009 + t20241*(t20955 + t20960 - 1.*t20189*t21513 + t21531) + t20209*(t20969 + t20974 + t20269*t21513 + t21541))*var2[4] + t20250*(-1.*t19561*t20395 + t19561*t21480 - 1.*t20411*t4916 - 1.*t21486*t4916)*var2[5];
  p_output1[28]=t21091 + t21110 + t21136 + (t21266 + t21267 + t20719*(t21139 + t21224 + t21225 + t20076*t20271*t21513 - 1.*t19677*t20320*t21513 + t21603) + t20320*(t21173 + t21243 + t21245 - 1.*t20076*t20115*t21513 + t19677*t20719*t21513 + t21612))*var2[3] + (t21167 + t21193 + t19653*(t21139 + t21141 - 1.*t20269*t21513 + t21603) + t20241*(t21173 + t21174 + t20103*t21513 + t21612))*var2[4] + (t20250*(t19522*t19561*t20411 + t19522*t19561*t21486 - 1.*t19522*t20395*t4916 + t19522*t21480*t4916) + t19753*(-1.*t19561*t19753*t20411 - 1.*t19561*t19753*t21486 + t19753*t20395*t4916 - 1.*t19753*t21480*t4916))*var2[5];
  p_output1[29]=t21278 + t21306 + t21323 + (t21421 + t21463 + t20719*(t21350 + t21431 + t21432 + t20189*t21028*t21513 + t20189*t21031*t21513 + t21662) + t19677*t20189*(t21361 + t21456 + t21457 + t20076*t20115*t21513 - 1.*t19677*t20719*t21513 + t21675))*var2[3] + (t21338 + t21412 + t19653*(t21350 + t21354 + t20189*t21513 + t21662) + t20209*(t21361 + t21363 - 1.*t20103*t21513 + t21675))*var2[4] + t19753*(t19561*t20395 - 1.*t19561*t21480 + t20411*t4916 + t21486*t4916)*var2[5];
  p_output1[30]=t21719 + t21736*var2[0] + (t19674*t21742 - 1.*t114*t21752)*var2[1] + (t114*t21742 + t19674*t21752)*var2[2] + (t20570*t20719 + t20320*(t21785 - 1.*t19677*t20189*t21826 + t20076*t20189*t21833) + t19677*t20189*(t20849 + t20850 + t20854 + t21812 + t20320*t21826 + t20271*t21833))*var2[3] + (t19653*t20948 + t20241*(t21785 - 1.*t20189*t21794) + t20209*(t20849 + t21185 + t21189 + t20269*t21794 + t20250*t21809 + t21812))*var2[4] + t19753*t21722*var2[5];
  p_output1[31]=(t20719*t20855 + t20764*t21736 + t20320*(t20502*t21736 + t20567*t21752 + t20719*t21826 + t20115*t21833 + t21937 + t21940) + t20719*(t20911 + t20913 + t20916 - 1.*t20320*t21826 - 1.*t20271*t21833 + t21968))*var2[3] + (t19653*t21191 + t21165*t21742 + t20241*(t20460*t21733 + t20103*t21794 + t21859 + t21863 + t21937 + t21940) + t19653*(t20911 + t21388 + t21391 - 1.*t20269*t21794 + t21878 + t21968))*var2[4] + (t19522*t21900 + t19753*t21925 + t19753*(-1.*t19522*t19561*t20395 + t21388 + t21878 - 1.*t19753*t21776*t21884 - 1.*t19753*t21776*t21886 - 1.*t19522*t20411*t4916) + t20250*(t19561*t20395*t21709 + t21859 + t21863 + t19522*t21776*t21884 + t19522*t21776*t21886 + t20411*t21709*t4916))*var2[5] + (t19753*t21857 + t20250*(t20393*t21709 + t19522*t21776 + t21859 + t21863) + t19522*t21872 + t19753*(-1.*t19522*t20393 + t21388 - 1.*t19753*t21776 + t21878))*var2[9];
  p_output1[32]=t20719*var2[0] + t20156*var2[1] + (t114*t19653 + t19674*t20115)*var2[2] + (t20881*t21736 + t20719*(t19677*t20189*t21826 - 1.*t20076*t20189*t21833 + t22066) + t19677*t20189*(-1.*t20502*t21736 - 1.*t20567*t21752 - 1.*t20719*t21826 - 1.*t20115*t21833 + t22093 + t22096))*var2[3] + (t21333*t21742 + t19653*(t20189*t21794 + t22066) + t20209*(-1.*t19522*t20354 - 1.*t20460*t21733 - 1.*t20103*t21794 - 1.*t19753*t21809 + t22093 + t22096))*var2[4] + t19522*t22036*var2[5];
  p_output1[33]=t21719 + t20320*var2[0] + t20290*var2[1] + (t114*t20241 + t19674*t20271)*var2[2] + (t20320*(t22255 - 1.*t19677*t20189*t22441 + t20076*t20189*t22463) + t20570*t22495 + t19677*t20189*(t22395 + t22403 + t20320*t22441 + t20271*t22463 + t20502*t22495 + t20567*t22522))*var2[3] + (t20241*(t22255 - 1.*t20189*t22261) + t20948*t22312 + t20209*(t20354*t21709 + t20269*t22261 + t20250*t22393 + t22395 + t22403 + t20460*t22413))*var2[4] + t21709*t21722*var2[5] + (0.28121*t19377 - 0.305*Power(t19377,2) + t19377*t20347)*var2[10];
  p_output1[34]=(t20320*t20764 + t20855*t22495 + t20320*(t20640 + t20642 + t20650 + t20719*t22441 + t20115*t22463 + t22840) + t20719*(-1.*t20320*t22441 - 1.*t20271*t22463 - 1.*t20502*t22495 - 1.*t20567*t22522 + t22850 + t22856))*var2[3] + (t20241*t21165 + t21191*t22312 + t20241*(t20640 + t20995 + t20997 + t20103*t22261 + t22573 + t22840) + t19653*(-1.*t20269*t22261 - 1.*t20460*t22413 + t22620 + t22630 + t22850 + t22856))*var2[4] + (t20250*t21900 + t21709*t21925 + t20250*(t19561*t19753*t20395 + t20995 + t19522*t21884*t22242 + t19522*t21886*t22242 + t22573 + t19753*t20411*t4916) + t19753*(-1.*t19561*t20250*t20395 - 1.*t19753*t21884*t22242 - 1.*t19753*t21886*t22242 + t22620 + t22630 - 1.*t20250*t20411*t4916))*var2[5] + (t21709*t21857 + t20250*t21872 + t20250*(t19753*t20393 + t20995 + t19522*t22242 + t22573) + t19753*(-1.*t20250*t20393 - 1.*t19753*t22242 + t22620 + t22630))*var2[9];
  p_output1[35]=t22495*var2[0] + (t19674*t22312 - 1.*t114*t22522)*var2[1] + (t114*t22312 + t19674*t22522)*var2[2] + (t20320*t20881 + t20719*(t19677*t20189*t22441 - 1.*t20076*t20189*t22463 + t23136) + t19677*t20189*(t20756 + t20759 + t20761 - 1.*t20719*t22441 - 1.*t20115*t22463 + t23169))*var2[3] + (t20241*t21333 + t19653*(t20189*t22261 + t23136) + t20209*(t20756 + t21158 + t21164 - 1.*t20103*t22261 - 1.*t19753*t22393 + t23169))*var2[4] + t20250*t22036*var2[5] + (-0.28121*t19497 + 0.305*t19377*t19497 - 1.*t19497*t20347)*var2[10];
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
