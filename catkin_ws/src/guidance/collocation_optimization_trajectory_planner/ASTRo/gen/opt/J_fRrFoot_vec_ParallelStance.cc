/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:16 GMT+02:00
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
  double t4372;
  double t15451;
  double t15061;
  double t15665;
  double t15671;
  double t15663;
  double t15679;
  double t15244;
  double t15689;
  double t15691;
  double t15692;
  double t15452;
  double t15653;
  double t15716;
  double t15717;
  double t15742;
  double t15776;
  double t15778;
  double t15779;
  double t15780;
  double t15786;
  double t15788;
  double t15789;
  double t15790;
  double t15793;
  double t15796;
  double t15797;
  double t15798;
  double t15899;
  double t15902;
  double t15903;
  double t15905;
  double t15747;
  double t15749;
  double t15751;
  double t15666;
  double t15681;
  double t15682;
  double t15697;
  double t15699;
  double t15701;
  double t15923;
  double t15925;
  double t15926;
  double t15253;
  double t15641;
  double t15646;
  double t15971;
  double t15977;
  double t15978;
  double t16028;
  double t16026;
  double t15687;
  double t15702;
  double t15703;
  double t15711;
  double t15756;
  double t15757;
  double t16136;
  double t16137;
  double t16140;
  double t16141;
  double t16146;
  double t16147;
  double t16149;
  double t16150;
  double t16152;
  double t16153;
  double t16160;
  double t16161;
  double t16164;
  double t15910;
  double t15911;
  double t15918;
  double t16067;
  double t16068;
  double t16070;
  double t16056;
  double t16057;
  double t16058;
  double t15996;
  double t15997;
  double t15998;
  double t16184;
  double t16185;
  double t16189;
  double t16029;
  double t16031;
  double t16037;
  double t16194;
  double t16195;
  double t16205;
  double t16225;
  double t16227;
  double t16228;
  double t16109;
  double t16110;
  double t16111;
  double t16118;
  double t16119;
  double t16120;
  double t16239;
  double t16241;
  double t16242;
  double t16243;
  double t16244;
  double t16245;
  double t16246;
  double t16263;
  double t16267;
  double t16268;
  double t16269;
  double t16270;
  double t16274;
  double t16165;
  double t16168;
  double t16169;
  double t16172;
  double t16175;
  double t16176;
  double t16212;
  double t16213;
  double t16215;
  double t16217;
  double t16218;
  double t16219;
  double t16279;
  double t16280;
  double t16281;
  double t16284;
  double t16287;
  double t16288;
  double t16300;
  double t16302;
  double t16304;
  double t16305;
  double t16306;
  double t16312;
  double t16313;
  double t16314;
  double t16316;
  double t16333;
  double t16338;
  double t16339;
  double t16340;
  double t16341;
  double t16299;
  double t16307;
  double t16309;
  double t16310;
  double t16343;
  double t16344;
  double t16345;
  double t16346;
  double t16347;
  double t16348;
  double t16350;
  double t16351;
  double t16352;
  double t16358;
  double t16359;
  double t16360;
  double t16311;
  double t16353;
  double t16354;
  double t16371;
  double t16374;
  double t16375;
  double t16364;
  double t16366;
  double t16368;
  double t16369;
  double t16370;
  double t16376;
  double t16378;
  double t16475;
  double t16476;
  double t16477;
  double t16386;
  double t16387;
  double t16388;
  double t16390;
  double t16402;
  double t16404;
  double t16405;
  double t16411;
  double t16474;
  double t16479;
  double t16429;
  double t16430;
  double t16432;
  double t16434;
  double t16454;
  double t16455;
  double t16456;
  double t16457;
  double t16465;
  double t16466;
  double t16467;
  double t16468;
  double t16473;
  double t16482;
  double t16552;
  double t16553;
  double t16554;
  double t16555;
  double t16556;
  double t16558;
  double t16559;
  double t16560;
  double t16484;
  double t16485;
  double t16488;
  double t16563;
  double t16564;
  double t16565;
  double t16495;
  double t16496;
  double t16500;
  double t16503;
  double t16507;
  double t16509;
  double t16510;
  double t16513;
  double t16517;
  double t16518;
  double t16522;
  double t16526;
  double t16530;
  double t16531;
  double t16534;
  double t16540;
  double t16541;
  double t16545;
  double t16546;
  double t16615;
  double t16616;
  double t16617;
  double t16618;
  double t16623;
  double t16627;
  double t16630;
  double t16631;
  double t16632;
  double t15901;
  double t15919;
  double t15921;
  double t16619;
  double t16620;
  double t16621;
  double t16628;
  double t16633;
  double t16634;
  double t16636;
  double t16637;
  double t16638;
  double t16701;
  double t16702;
  double t16710;
  double t16711;
  double t16712;
  double t16715;
  double t16716;
  double t16717;
  double t16706;
  double t16707;
  double t16708;
  double t16713;
  double t16718;
  double t16719;
  double t16721;
  double t16723;
  double t16724;
  double t15995;
  double t15999;
  double t16000;
  double t16483;
  double t16489;
  double t16508;
  double t16514;
  double t16527;
  double t16536;
  double t16788;
  double t16789;
  double t16792;
  double t16566;
  double t16794;
  double t16570;
  double t16799;
  double t16802;
  double t16803;
  double t16804;
  double t16805;
  double t16809;
  double t16810;
  double t16811;
  double t16580;
  double t16813;
  double t16583;
  double t16818;
  double t16821;
  double t16822;
  double t16823;
  double t16825;
  double t16590;
  double t16829;
  double t16832;
  double t16833;
  double t16835;
  double t16836;
  double t16596;
  double t16838;
  double t16841;
  double t16843;
  double t16844;
  double t16845;
  double t16622;
  double t16644;
  double t16645;
  double t16656;
  double t16657;
  double t16675;
  double t16684;
  double t16692;
  double t16709;
  double t16729;
  double t16741;
  double t16748;
  double t16749;
  double t16759;
  double t16766;
  double t16767;
  double t16891;
  double t16892;
  double t17036;
  double t17039;
  double t16902;
  double t17021;
  double t17023;
  double t17024;
  double t17028;
  double t17029;
  double t17032;
  double t17047;
  double t17048;
  double t17049;
  double t16937;
  double t17061;
  double t17062;
  double t17063;
  double t16942;
  double t16945;
  double t17110;
  double t17111;
  double t17112;
  double t17113;
  double t17115;
  double t17117;
  double t17127;
  double t17128;
  double t17178;
  double t17179;
  t4372 = Sin(var1[4]);
  t15451 = Cos(var1[15]);
  t15061 = Cos(var1[5]);
  t15665 = Cos(var1[17]);
  t15671 = Sin(var1[16]);
  t15663 = Cos(var1[16]);
  t15679 = Sin(var1[17]);
  t15244 = Sin(var1[15]);
  t15689 = -1.*t15665*t15671;
  t15691 = t15663*t15679;
  t15692 = t15689 + t15691;
  t15452 = Sin(var1[5]);
  t15653 = Cos(var1[4]);
  t15716 = -1.*t15663*t15665;
  t15717 = -1.*t15671*t15679;
  t15742 = t15716 + t15717;
  t15776 = t15451*t15061;
  t15778 = -1.*t15244*t15452;
  t15779 = t15776 + t15778;
  t15780 = var2[1]*t15653*t15779;
  t15786 = -1.*t15061*t15244*t15692;
  t15788 = -1.*t15451*t15692*t15452;
  t15789 = t15786 + t15788;
  t15790 = var2[2]*t15653*t15789;
  t15793 = -1.*t15061*t15244*t15742;
  t15796 = -1.*t15451*t15742*t15452;
  t15797 = t15793 + t15796;
  t15798 = var2[0]*t15653*t15797;
  t15899 = t15780 + t15790 + t15798;
  t15902 = t15665*t15671;
  t15903 = -1.*t15663*t15679;
  t15905 = t15902 + t15903;
  t15747 = t15451*t15061*t15742;
  t15749 = -1.*t15244*t15742*t15452;
  t15751 = t15747 + t15749;
  t15666 = t15663*t15665;
  t15681 = t15671*t15679;
  t15682 = t15666 + t15681;
  t15697 = t15451*t15061*t15692;
  t15699 = -1.*t15244*t15692*t15452;
  t15701 = t15697 + t15699;
  t15923 = t15692*t4372;
  t15925 = t15653*t15751;
  t15926 = t15923 + t15925;
  t15253 = t15061*t15244;
  t15641 = t15451*t15452;
  t15646 = t15253 + t15641;
  t15971 = t15682*t4372;
  t15977 = t15653*t15701;
  t15978 = t15971 + t15977;
  t16028 = Sin(var1[3]);
  t16026 = Cos(var1[3]);
  t15687 = t15653*t15682;
  t15702 = -1.*t4372*t15701;
  t15703 = t15687 + t15702;
  t15711 = t15653*t15692;
  t15756 = -1.*t4372*t15751;
  t15757 = t15711 + t15756;
  t16136 = t16026*t15646;
  t16137 = t16028*t4372*t15779;
  t16140 = t16136 + t16137;
  t16141 = var2[1]*t16140;
  t16146 = t16028*t4372*t15789;
  t16147 = t16026*t15701;
  t16149 = t16146 + t16147;
  t16150 = var2[2]*t16149;
  t16152 = t16028*t4372*t15797;
  t16153 = t16026*t15751;
  t16160 = t16152 + t16153;
  t16161 = var2[0]*t16160;
  t16164 = t16141 + t16150 + t16161;
  t15910 = t15451*t15061*t15905;
  t15911 = -1.*t15244*t15905*t15452;
  t15918 = t15910 + t15911;
  t16067 = t15061*t15244*t15742;
  t16068 = t15451*t15742*t15452;
  t16070 = t16067 + t16068;
  t16056 = t15061*t15244*t15692;
  t16057 = t15451*t15692*t15452;
  t16058 = t16056 + t16057;
  t15996 = t15451*t15061*t15682;
  t15997 = -1.*t15244*t15682*t15452;
  t15998 = t15996 + t15997;
  t16184 = t16026*t16070;
  t16185 = -1.*t16028*t15757;
  t16189 = t16184 + t16185;
  t16029 = -1.*t15451*t15061;
  t16031 = t15244*t15452;
  t16037 = t16029 + t16031;
  t16194 = t16026*t16058;
  t16195 = -1.*t16028*t15703;
  t16205 = t16194 + t16195;
  t16225 = t16028*t4372*t15646;
  t16227 = t16026*t16037;
  t16228 = t16225 + t16227;
  t16109 = -1.*t15682*t4372;
  t16110 = -1.*t15653*t15701;
  t16111 = t16109 + t16110;
  t16118 = -1.*t15692*t4372;
  t16119 = -1.*t15653*t15751;
  t16120 = t16118 + t16119;
  t16239 = t16028*t15646;
  t16241 = -1.*t16026*t4372*t15779;
  t16242 = t16239 + t16241;
  t16243 = var2[1]*t16242;
  t16244 = -1.*t16026*t4372*t15789;
  t16245 = t16028*t15701;
  t16246 = t16244 + t16245;
  t16263 = var2[2]*t16246;
  t16267 = -1.*t16026*t4372*t15797;
  t16268 = t16028*t15751;
  t16269 = t16267 + t16268;
  t16270 = var2[0]*t16269;
  t16274 = t16243 + t16263 + t16270;
  t16165 = t15061*t15244*t15905;
  t16168 = t15451*t15905*t15452;
  t16169 = t16165 + t16168;
  t16172 = t15653*t15742;
  t16175 = -1.*t4372*t15918;
  t16176 = t16172 + t16175;
  t16212 = t15061*t15244*t15682;
  t16213 = t15451*t15682*t15452;
  t16215 = t16212 + t16213;
  t16217 = t15653*t15905;
  t16218 = -1.*t4372*t15998;
  t16219 = t16217 + t16218;
  t16279 = t16028*t16070;
  t16280 = t16026*t15757;
  t16281 = t16279 + t16280;
  t16284 = t16028*t16058;
  t16287 = t16026*t15703;
  t16288 = t16284 + t16287;
  t16300 = -1.*t15665;
  t16302 = 1. + t16300;
  t16304 = -0.50321*t16302;
  t16305 = -0.19821*t15665;
  t16306 = t16304 + t16305;
  t16312 = -1.*t15451;
  t16313 = 1. + t16312;
  t16314 = -0.15121*t16313;
  t16316 = -1.*t15663;
  t16333 = 1. + t16316;
  t16338 = -0.28121*t16333;
  t16339 = t15663*t16306;
  t16340 = 0.305*t15671*t15679;
  t16341 = t16338 + t16339 + t16340;
  t16299 = 0.28121*t15671;
  t16307 = t16306*t15671;
  t16309 = -0.305*t15663*t15679;
  t16310 = t16299 + t16307 + t16309;
  t16343 = t15451*t16341;
  t16344 = t16314 + t16343;
  t16345 = t15061*t16344;
  t16346 = -0.15121*t15451;
  t16347 = 0.15121*t15244;
  t16348 = t15244*t16341;
  t16350 = t16314 + t16346 + t16347 + t16348;
  t16351 = -1.*t16350*t15452;
  t16352 = t16345 + t16351;
  t16358 = t16310*t4372;
  t16359 = t15653*t16352;
  t16360 = t16358 + t16359;
  t16311 = -1.*t16310*t4372;
  t16353 = -1.*t15653*t16352;
  t16354 = t16311 + t16353;
  t16371 = t15653*t16310;
  t16374 = -1.*t4372*t16352;
  t16375 = t16371 + t16374;
  t16364 = t15061*t16350;
  t16366 = t16344*t15452;
  t16368 = t16364 + t16366;
  t16369 = -1.*t16037*t16368;
  t16370 = -1.*t15653*t15646*t16360;
  t16376 = t4372*t15646*t16375;
  t16378 = t16369 + t16370 + t16376;
  t16475 = -1.*t15061*t16350;
  t16476 = -1.*t16344*t15452;
  t16477 = t16475 + t16476;
  t16386 = t16058*t16368;
  t16387 = t15978*t16360;
  t16388 = t15703*t16375;
  t16390 = t16386 + t16387 + t16388;
  t16402 = t16037*t16368;
  t16404 = t15653*t15646*t16360;
  t16405 = -1.*t4372*t15646*t16375;
  t16411 = t16402 + t16404 + t16405;
  t16474 = Power(t15653,2);
  t16479 = Power(t4372,2);
  t16429 = -1.*t16070*t16368;
  t16430 = -1.*t15926*t16360;
  t16432 = -1.*t15757*t16375;
  t16434 = t16429 + t16430 + t16432;
  t16454 = -1.*t16058*t16368;
  t16455 = -1.*t15978*t16360;
  t16456 = -1.*t15703*t16375;
  t16457 = t16454 + t16455 + t16456;
  t16465 = t16070*t16368;
  t16466 = t15926*t16360;
  t16467 = t15757*t16375;
  t16468 = t16465 + t16466 + t16467;
  t16473 = t15653*t15789*t16378;
  t16482 = -1.*t15646*t16368;
  t16552 = -0.15121*t15244;
  t16553 = -1.*t15244*t16341;
  t16554 = t16552 + t16553;
  t16555 = t15061*t16554;
  t16556 = 0.15121*t15451;
  t16558 = t16556 + t16343;
  t16559 = -1.*t16558*t15452;
  t16560 = t16555 + t16559;
  t16484 = -1.*t15653*t15779*t16360;
  t16485 = t4372*t15779*t16375;
  t16488 = t15701*t16368;
  t16563 = t15061*t16558;
  t16564 = t16554*t15452;
  t16565 = t16563 + t16564;
  t16495 = t15653*t15789*t16360;
  t16496 = -1.*t4372*t15789*t16375;
  t16500 = t15653*t15779*t16390;
  t16503 = t15653*t15797*t16411;
  t16507 = t15646*t16368;
  t16509 = t15653*t15779*t16360;
  t16510 = -1.*t4372*t15779*t16375;
  t16513 = -1.*t15751*t16368;
  t16517 = -1.*t15653*t15797*t16360;
  t16518 = t4372*t15797*t16375;
  t16522 = t15653*t15779*t16434;
  t16526 = -1.*t15701*t16368;
  t16530 = -1.*t15653*t15789*t16360;
  t16531 = t4372*t15789*t16375;
  t16534 = t15751*t16368;
  t16540 = t15653*t15797*t16360;
  t16541 = -1.*t4372*t15797*t16375;
  t16545 = t15653*t15797*t16457;
  t16546 = t15653*t15789*t16468;
  t16615 = -0.28121*t15671;
  t16616 = -1.*t16306*t15671;
  t16617 = 0.305*t15663*t15679;
  t16618 = t16615 + t16616 + t16617;
  t16623 = 0.28121*t15663;
  t16627 = t16623 + t16339 + t16340;
  t16630 = t15451*t15061*t16618;
  t16631 = -1.*t15244*t16618*t15452;
  t16632 = t16630 + t16631;
  t15901 = t15742*t4372;
  t15919 = t15653*t15918;
  t15921 = t15901 + t15919;
  t16619 = t15061*t15244*t16618;
  t16620 = t15451*t16618*t15452;
  t16621 = t16619 + t16620;
  t16628 = t16627*t4372;
  t16633 = t15653*t16632;
  t16634 = t16628 + t16633;
  t16636 = t15653*t16627;
  t16637 = -1.*t4372*t16632;
  t16638 = t16636 + t16637;
  t16701 = 0.305*t15665*t15671;
  t16702 = t16701 + t16309;
  t16710 = -0.305*t15663*t15665;
  t16711 = -0.305*t15671*t15679;
  t16712 = t16710 + t16711;
  t16715 = t15451*t15061*t16702;
  t16716 = -1.*t15244*t16702*t15452;
  t16717 = t16715 + t16716;
  t16706 = t15061*t15244*t16702;
  t16707 = t15451*t16702*t15452;
  t16708 = t16706 + t16707;
  t16713 = t16712*t4372;
  t16718 = t15653*t16717;
  t16719 = t16713 + t16718;
  t16721 = t15653*t16712;
  t16723 = -1.*t4372*t16717;
  t16724 = t16721 + t16723;
  t15995 = t15905*t4372;
  t15999 = t15653*t15998;
  t16000 = t15995 + t15999;
  t16483 = -1.*t16037*t16352;
  t16489 = t16058*t16352;
  t16508 = t16037*t16352;
  t16514 = -1.*t16070*t16352;
  t16527 = -1.*t16058*t16352;
  t16536 = t16070*t16352;
  t16788 = -1.*t15646*t16352;
  t16789 = t16369 + t16788;
  t16792 = t15701*t16789;
  t16566 = -1.*t16037*t16565;
  t16794 = -1.*t15779*t16352;
  t16570 = t16058*t16565;
  t16799 = t15789*t16352;
  t16802 = t16310*t15682;
  t16803 = t15701*t16352;
  t16804 = t16802 + t16386 + t16803;
  t16805 = t15646*t16804;
  t16809 = t15646*t16352;
  t16810 = t16402 + t16809;
  t16811 = t15751*t16810;
  t16580 = t16037*t16565;
  t16813 = t15779*t16352;
  t16583 = -1.*t16070*t16565;
  t16818 = -1.*t15797*t16352;
  t16821 = -1.*t16310*t15692;
  t16822 = -1.*t15751*t16352;
  t16823 = t16821 + t16429 + t16822;
  t16825 = t15646*t16823;
  t16590 = -1.*t16058*t16565;
  t16829 = -1.*t15789*t16352;
  t16832 = -1.*t16310*t15682;
  t16833 = -1.*t15701*t16352;
  t16835 = t16832 + t16454 + t16833;
  t16836 = t15751*t16835;
  t16596 = t16070*t16565;
  t16838 = t15797*t16352;
  t16841 = t16310*t15692;
  t16843 = t15751*t16352;
  t16844 = t16841 + t16465 + t16843;
  t16845 = t15701*t16844;
  t16622 = t16037*t16621;
  t16644 = -1.*t16621*t16070;
  t16645 = -1.*t16169*t16368;
  t16656 = t16621*t16070;
  t16657 = t16169*t16368;
  t16675 = -1.*t16621*t16058;
  t16684 = -1.*t16037*t16621;
  t16692 = t16621*t16058;
  t16709 = t16037*t16708;
  t16729 = -1.*t16708*t16070;
  t16741 = t16708*t16070;
  t16748 = -1.*t16708*t16058;
  t16749 = -1.*t16215*t16368;
  t16759 = -1.*t16037*t16708;
  t16766 = t16708*t16058;
  t16767 = t16215*t16368;
  t16891 = t16310*t15742;
  t16892 = t15692*t16627;
  t17036 = Power(t15451,2);
  t17039 = Power(t15244,2);
  t16902 = -1.*t16627*t15682;
  t17021 = t15244*t16344;
  t17023 = -1.*t15451*t16350;
  t17024 = t17021 + t17023;
  t17028 = -1.*t15244*t16344;
  t17029 = t15451*t16350;
  t17032 = t17028 + t17029;
  t17047 = -1.*t15451*t15692*t16344;
  t17048 = -1.*t15244*t15692*t16350;
  t17049 = t16832 + t17047 + t17048;
  t16937 = t15692*t16712;
  t17061 = t15451*t15742*t16344;
  t17062 = t15244*t15742*t16350;
  t17063 = t16841 + t17061 + t17062;
  t16942 = -1.*t15905*t16310;
  t16945 = -1.*t16712*t15682;
  t17110 = -0.15121*t15905;
  t17111 = -0.15121*t15692;
  t17112 = t17110 + t17111;
  t17113 = var2[0]*t17112;
  t17115 = t15742*t16341;
  t17117 = t16841 + t17115;
  t17127 = -1.*t15692*t16341;
  t17128 = t17127 + t16832;
  t17178 = 0.28121*t15665;
  t17179 = t16306*t15665;
  p_output1[0]=t15757*var2[0] - 1.*t15646*t4372*var2[1] + t15703*var2[2];
  p_output1[1]=t15899;
  p_output1[2]=t15899;
  p_output1[3]=t15921*var2[0] + t15926*var2[2];
  p_output1[4]=t15978*var2[0] + t16000*var2[2];
  p_output1[5]=t15926;
  p_output1[6]=t15646*t15653;
  p_output1[7]=t15978;
  p_output1[8]=(-1.*t15757*t16026 - 1.*t16028*t16070)*var2[0] + (-1.*t16028*t16037 + t15646*t16026*t4372)*var2[1] + (-1.*t15703*t16026 - 1.*t16028*t16058)*var2[2];
  p_output1[9]=-1.*t16028*t16120*var2[0] + t15646*t15653*t16028*var2[1] - 1.*t16028*t16111*var2[2];
  p_output1[10]=t16164;
  p_output1[11]=t16164;
  p_output1[12]=(t16026*t16169 - 1.*t16028*t16176)*var2[0] + t16189*var2[2];
  p_output1[13]=t16205*var2[0] + (t16026*t16215 - 1.*t16028*t16219)*var2[2];
  p_output1[14]=t16189;
  p_output1[15]=t16228;
  p_output1[16]=t16205;
  p_output1[17]=t16189*var2[0] + t16228*var2[1] + t16205*var2[2];
  p_output1[18]=t16026*t16120*var2[0] - 1.*t15646*t15653*t16026*var2[1] + t16026*t16111*var2[2];
  p_output1[19]=t16274;
  p_output1[20]=t16274;
  p_output1[21]=(t16028*t16169 + t16026*t16176)*var2[0] + t16281*var2[2];
  p_output1[22]=t16288*var2[0] + (t16028*t16215 + t16026*t16219)*var2[2];
  p_output1[23]=t16281;
  p_output1[24]=t16028*t16037 - 1.*t15646*t16026*t4372;
  p_output1[25]=t16288;
  p_output1[26]=(t15646*t15653*(t15703*t16354 + t15703*t16360 + t15978*t16375 + t16111*t16375) + t15703*t16378 - 1.*t15646*t16390*t4372 + t15978*(t15646*t16354*t4372 + t15646*t16360*t4372))*var2[0] + (t15926*(-1.*t15703*t16354 - 1.*t15703*t16360 - 1.*t15978*t16375 - 1.*t16111*t16375) + t15978*(t15757*t16354 + t15757*t16360 + t15926*t16375 + t16120*t16375) + t15757*t16457 + t15703*t16468)*var2[1] + (t15646*t15653*(-1.*t15757*t16354 - 1.*t15757*t16360 - 1.*t15926*t16375 - 1.*t16120*t16375) + t15757*t16411 - 1.*t15646*t16434*t4372 + t15926*(-1.*t15646*t16354*t4372 - 1.*t15646*t16360*t4372))*var2[2];
  p_output1[27]=(t16473 + t15978*(-1.*t15646*t16474*t16477 - 1.*t15646*t16477*t16479 + t16482 + t16483 + t16484 + t16485) + t16500 + t15646*t15653*(t15653*t15978*t16477 + t16488 + t16489 + t16495 + t16496 - 1.*t15703*t16477*t4372))*var2[0] + (t16545 + t16546 + t15926*(-1.*t15653*t15978*t16477 + t16526 + t16527 + t16530 + t16531 + t15703*t16477*t4372) + t15978*(t15653*t15926*t16477 + t16534 + t16536 + t16540 + t16541 - 1.*t15757*t16477*t4372))*var2[1] + (t16503 + t15926*(t15646*t16474*t16477 + t15646*t16477*t16479 + t16507 + t16508 + t16509 + t16510) + t16522 + t15646*t15653*(-1.*t15653*t15926*t16477 + t16513 + t16514 + t16517 + t16518 + t15757*t16477*t4372))*var2[2];
  p_output1[28]=(t16473 + t16500 + t15978*(t16482 + t16484 + t16485 - 1.*t15646*t16474*t16560 - 1.*t15646*t16479*t16560 + t16566) + t15646*t15653*(t16488 + t16495 + t16496 + t15653*t15978*t16560 + t16570 - 1.*t15703*t16560*t4372))*var2[0] + (t16545 + t16546 + t15926*(t16526 + t16530 + t16531 - 1.*t15653*t15978*t16560 + t16590 + t15703*t16560*t4372) + t15978*(t16534 + t16540 + t16541 + t15653*t15926*t16560 + t16596 - 1.*t15757*t16560*t4372))*var2[1] + (t16503 + t16522 + t15926*(t16507 + t16509 + t16510 + t15646*t16474*t16560 + t15646*t16479*t16560 + t16580) + t15646*t15653*(t16513 + t16517 + t16518 - 1.*t15653*t15926*t16560 + t16583 + t15757*t16560*t4372))*var2[2];
  p_output1[29]=(t15926*t16378 + t15646*t15653*(t16465 + t16466 + t16467 + t15978*t16634 + t15703*t16638 + t16692) + t15978*(-1.*t15646*t15653*t16634 + t16684 + t15646*t16638*t4372))*var2[0] + (t15921*t16457 + t15926*t16468 + t15978*(t15921*t16360 + t16176*t16375 + t15926*t16634 + t15757*t16638 + t16656 + t16657) + t15926*(t16429 + t16430 + t16432 - 1.*t15978*t16634 - 1.*t15703*t16638 + t16675))*var2[1] + (t15921*t16411 + t15646*t15653*(-1.*t15921*t16360 - 1.*t16176*t16375 - 1.*t15926*t16634 - 1.*t15757*t16638 + t16644 + t16645) + t15926*(t16622 + t15646*t15653*t16634 - 1.*t15646*t16638*t4372))*var2[2];
  p_output1[30]=(t16000*t16378 + t15646*t15653*(t16000*t16360 + t16219*t16375 + t15978*t16719 + t15703*t16724 + t16766 + t16767) + t15978*(-1.*t15646*t15653*t16719 + t16759 + t15646*t16724*t4372))*var2[0] + (t15978*t16457 + t16000*t16468 + t15978*(t16386 + t16387 + t16388 + t15926*t16719 + t15757*t16724 + t16741) + t15926*(-1.*t16000*t16360 - 1.*t16219*t16375 - 1.*t15978*t16719 - 1.*t15703*t16724 + t16748 + t16749))*var2[1] + (t15978*t16411 + t15646*t15653*(t16454 + t16455 + t16456 - 1.*t15926*t16719 - 1.*t15757*t16724 + t16729) + t15926*(t16709 + t15646*t15653*t16719 - 1.*t15646*t16724*t4372))*var2[2];
  p_output1[31]=t15978*t16378 + t15646*t15653*t16390;
  p_output1[32]=t15926*t16457 + t15978*t16468;
  p_output1[33]=t15926*t16411 + t15646*t15653*t16434;
  p_output1[34]=(t16792 + t16058*(-1.*t15646*t16477 + t16482 + t16483 + t16794) + t16037*(t15701*t16477 + t16488 + t16489 + t16799) + t16805)*var2[0] + (t16070*(-1.*t15701*t16477 + t16526 + t16527 + t16829) + t16836 + t16058*(t15751*t16477 + t16534 + t16536 + t16838) + t16845)*var2[1] + (t16811 + t16070*(t15646*t16477 + t16507 + t16508 + t16813) + t16037*(-1.*t15751*t16477 + t16513 + t16514 + t16818) + t16825)*var2[2];
  p_output1[35]=(t16792 + t16058*(t16482 - 1.*t15646*t16560 + t16566 + t16794) + t16037*(t16488 + t15701*t16560 + t16570 + t16799) + t16805)*var2[0] + (t16070*(t16526 - 1.*t15701*t16560 + t16590 + t16829) + t16836 + t16058*(t16534 + t15751*t16560 + t16596 + t16838) + t16845)*var2[1] + (t16811 + t16070*(t16507 + t15646*t16560 + t16580 + t16813) + t16037*(t16513 - 1.*t15751*t16560 + t16583 + t16818) + t16825)*var2[2];
  p_output1[36]=(t16058*(-1.*t15646*t16632 + t16684) + t16070*t16789 + t16037*(t16465 + t15682*t16627 + t15701*t16632 + t16692 + t16841 + t16843))*var2[0] + (t16169*t16835 + t16070*t16844 + t16058*(t15918*t16352 + t15751*t16632 + t16656 + t16657 + t16891 + t16892) + t16070*(t16429 - 1.*t15701*t16632 + t16675 + t16821 + t16822 + t16902))*var2[1] + (t16070*(t16622 + t15646*t16632) + t16037*(-1.*t15742*t16310 - 1.*t15918*t16352 - 1.*t15692*t16627 - 1.*t15751*t16632 + t16644 + t16645) + t16169*t16810)*var2[2];
  p_output1[37]=(t16058*(-1.*t15646*t16717 + t16759) + t16037*(t15905*t16310 + t15998*t16352 + t15682*t16712 + t15701*t16717 + t16766 + t16767) + t16215*t16789)*var2[0] + (t16058*t16835 + t16215*t16844 + t16058*(t16386 + t15751*t16717 + t16741 + t16802 + t16803 + t16937) + t16070*(-1.*t15998*t16352 - 1.*t15701*t16717 + t16748 + t16749 + t16942 + t16945))*var2[1] + (t16070*(t16709 + t15646*t16717) + t16058*t16810 + t16037*(t16454 - 1.*t15692*t16712 - 1.*t15751*t16717 + t16729 + t16832 + t16833))*var2[2];
  p_output1[38]=t16058*t16789 + t16037*t16804;
  p_output1[39]=t16070*t16835 + t16058*t16844;
  p_output1[40]=t16070*t16810 + t16037*t16823;
  p_output1[41]=t15682*(-1.*t15451*t16344 - 1.*t15244*t16350 - 1.*t15244*t16554 + t15451*t16558)*var2[0] + (t15692*(t15244*t15692*t16344 - 1.*t15451*t15692*t16350 - 1.*t15451*t15692*t16554 - 1.*t15244*t15692*t16558) + t15682*(-1.*t15244*t15742*t16344 + t15451*t15742*t16350 + t15451*t15742*t16554 + t15244*t15742*t16558))*var2[1] + t15692*(t15451*t16344 + t15244*t16350 + t15244*t16554 - 1.*t15451*t16558)*var2[2];
  p_output1[42]=t15692*t17032*var2[0] + (t15692*(-1.*t15451*t15742*t16344 - 1.*t15244*t15742*t16350 + t16821 + t16902 - 1.*t15692*t16618*t17036 - 1.*t15692*t16618*t17039) + t15682*(t15451*t15905*t16344 + t15244*t15905*t16350 + t16891 + t16892 + t15742*t16618*t17036 + t15742*t16618*t17039) + t15742*t17049 + t15692*t17063)*var2[1] + t15742*t17024*var2[2];
  p_output1[43]=t15905*t17032*var2[0] + (t15692*(-1.*t15451*t15682*t16344 - 1.*t15244*t15682*t16350 + t16942 + t16945 - 1.*t15692*t16702*t17036 - 1.*t15692*t16702*t17039) + t15682*(t15451*t15692*t16344 + t15244*t15692*t16350 + t16802 + t16937 + t15742*t16702*t17036 + t15742*t16702*t17039) + t15682*t17049 + t15905*t17063)*var2[1] + t15682*t17024*var2[2];
  p_output1[44]=t15682*t17032;
  p_output1[45]=t15692*t17049 + t15682*t17063;
  p_output1[46]=t15692*t17024;
  p_output1[47]=t17113 + (t15682*(t15905*t16341 + t15742*t16618 + t16891 + t16892) + t15692*(-1.*t15742*t16341 - 1.*t15692*t16618 + t16821 + t16902) + t15692*t17117 + t15742*t17128)*var2[1];
  p_output1[48]=t17113 + (t15682*(t15692*t16341 + t15742*t16702 + t16802 + t16937) + t15692*(-1.*t15682*t16341 - 1.*t15692*t16702 + t16942 + t16945) + t15905*t17117 + t15682*t17128)*var2[1];
  p_output1[49]=-0.15121*t15682 - 0.15121*t15742;
  p_output1[50]=-0.15121 + t15682*t17117 + t15692*t17128;
  p_output1[51]=(-0.305*Power(t15665,2) + t17178 + t17179)*var2[0] + (-0.28121*t15679 + 0.305*t15665*t15679 - 1.*t15679*t16306)*var2[2];
  p_output1[52]=0.28121*t15679 - 0.305*t15665*t15679 + t15679*t16306;
  p_output1[53]=0.305*Power(t15679,2) + t17178 + t17179;
  p_output1[54]=-0.305;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
