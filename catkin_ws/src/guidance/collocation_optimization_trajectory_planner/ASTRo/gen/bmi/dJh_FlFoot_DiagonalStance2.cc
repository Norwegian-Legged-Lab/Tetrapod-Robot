/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:42 GMT+02:00
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
  double t24329;
  double t27553;
  double t29807;
  double t33640;
  double t35458;
  double t35722;
  double t35868;
  double t35870;
  double t5584;
  double t14831;
  double t35876;
  double t35892;
  double t35869;
  double t35877;
  double t35887;
  double t133;
  double t35893;
  double t35895;
  double t35897;
  double t35898;
  double t35899;
  double t35900;
  double t35904;
  double t35905;
  double t35908;
  double t35998;
  double t36002;
  double t36032;
  double t36034;
  double t36039;
  double t36043;
  double t36044;
  double t36046;
  double t36071;
  double t36072;
  double t36073;
  double t36077;
  double t36081;
  double t36082;
  double t36084;
  double t36085;
  double t36086;
  double t36088;
  double t36089;
  double t36090;
  double t36108;
  double t36109;
  double t36110;
  double t36123;
  double t36124;
  double t36125;
  double t36126;
  double t36127;
  double t36135;
  double t36136;
  double t36137;
  double t36139;
  double t36141;
  double t36142;
  double t36143;
  double t36145;
  double t36146;
  double t36122;
  double t36128;
  double t36129;
  double t36130;
  double t36147;
  double t36148;
  double t36149;
  double t36150;
  double t36151;
  double t36152;
  double t36153;
  double t36154;
  double t36155;
  double t36159;
  double t36160;
  double t36161;
  double t36134;
  double t36156;
  double t36157;
  double t36177;
  double t36178;
  double t36179;
  double t36119;
  double t36120;
  double t36121;
  double t36165;
  double t36173;
  double t36174;
  double t36186;
  double t36187;
  double t36189;
  double t36206;
  double t36207;
  double t36208;
  double t36294;
  double t36296;
  double t36297;
  double t36175;
  double t36311;
  double t36312;
  double t36313;
  double t36195;
  double t36325;
  double t36326;
  double t36328;
  double t36176;
  double t36180;
  double t36182;
  double t36315;
  double t36316;
  double t36317;
  double t36318;
  double t36319;
  double t36324;
  double t36331;
  double t36196;
  double t36197;
  double t36198;
  double t36215;
  double t36238;
  double t36371;
  double t36373;
  double t36383;
  double t36386;
  double t36216;
  double t36219;
  double t36220;
  double t36239;
  double t36240;
  double t36244;
  double t36265;
  double t36286;
  double t36267;
  double t36271;
  double t36272;
  double t36343;
  double t36345;
  double t36425;
  double t36426;
  double t36431;
  double t36434;
  double t36287;
  double t36288;
  double t36289;
  double t36298;
  double t36299;
  double t36300;
  double t36301;
  double t36303;
  double t36304;
  double t36305;
  double t36306;
  double t36307;
  double t36308;
  double t36309;
  double t36310;
  double t36461;
  double t36462;
  double t36464;
  double t36465;
  double t36466;
  double t36320;
  double t36471;
  double t36472;
  double t36473;
  double t36475;
  double t36476;
  double t36477;
  double t36329;
  double t36335;
  double t36337;
  double t36338;
  double t36339;
  double t36342;
  double t36478;
  double t36347;
  double t36348;
  double t36482;
  double t36353;
  double t36354;
  double t36357;
  double t36361;
  double t36362;
  double t36363;
  double t36364;
  double t36365;
  double t36366;
  double t36367;
  double t36368;
  double t36369;
  double t36372;
  double t36377;
  double t36378;
  double t36379;
  double t36380;
  double t36385;
  double t36389;
  double t36390;
  double t36391;
  double t36392;
  double t36513;
  double t36397;
  double t36398;
  double t36517;
  double t36403;
  double t36404;
  double t36407;
  double t36408;
  double t36412;
  double t36413;
  double t36414;
  double t36415;
  double t36416;
  double t36417;
  double t36418;
  double t36419;
  double t36420;
  double t36421;
  double t36422;
  double t36423;
  double t36427;
  double t36432;
  double t36437;
  double t36438;
  double t36439;
  double t36440;
  double t36443;
  double t36544;
  double t36446;
  double t36447;
  double t36548;
  double t36452;
  double t36453;
  double t36456;
  double t36564;
  double t36565;
  double t36566;
  double t36568;
  double t36569;
  double t36570;
  double t36578;
  double t36579;
  double t36580;
  double t36582;
  double t36583;
  double t36584;
  double t36593;
  double t36594;
  double t36595;
  double t36597;
  double t36598;
  double t36599;
  double t36596;
  double t36605;
  double t36606;
  double t36607;
  double t36608;
  double t36610;
  double t36616;
  double t36617;
  double t36618;
  double t36620;
  double t36621;
  double t36622;
  double t36637;
  double t36639;
  double t36657;
  double t36659;
  double t36647;
  double t36567;
  double t36571;
  double t36572;
  double t36678;
  double t36680;
  double t36684;
  double t36008;
  double t36009;
  double t36010;
  double t36721;
  double t36728;
  double t36730;
  double t36574;
  double t36575;
  double t36576;
  double t36098;
  double t36100;
  double t36101;
  double t36764;
  double t36765;
  double t36766;
  double t36767;
  double t36768;
  double t36769;
  double t36771;
  double t36772;
  double t36773;
  double t36777;
  double t36778;
  double t36779;
  double t36770;
  double t36782;
  double t36783;
  double t36788;
  double t36789;
  double t36790;
  double t36785;
  double t36796;
  double t36797;
  double t36798;
  double t36800;
  double t36801;
  double t36802;
  double t36787;
  double t36806;
  double t36807;
  double t36808;
  double t36634;
  double t36635;
  double t36642;
  double t36643;
  double t36645;
  double t36652;
  double t36654;
  double t36655;
  double t36824;
  double t36831;
  double t36671;
  double t36672;
  double t36673;
  double t36855;
  double t36859;
  double t36861;
  double t36813;
  double t36814;
  double t36815;
  double t36706;
  double t36707;
  double t36708;
  double t36709;
  double t36710;
  double t36711;
  double t36712;
  double t36899;
  double t36905;
  t24329 = Cos(var1[7]);
  t27553 = Cos(var1[8]);
  t29807 = t24329*t27553;
  t33640 = Sin(var1[7]);
  t35458 = Sin(var1[8]);
  t35722 = t33640*t35458;
  t35868 = t29807 + t35722;
  t35870 = Cos(var1[5]);
  t5584 = Cos(var1[6]);
  t14831 = Sin(var1[5]);
  t35876 = Sin(var1[6]);
  t35892 = Cos(var1[3]);
  t35869 = t5584*t14831*t35868;
  t35877 = t35870*t35876*t35868;
  t35887 = t35869 + t35877;
  t133 = Sin(var1[3]);
  t35893 = Cos(var1[4]);
  t35895 = -1.*t27553*t33640;
  t35897 = t24329*t35458;
  t35898 = t35895 + t35897;
  t35899 = t35893*t35898;
  t35900 = Sin(var1[4]);
  t35904 = t35870*t5584*t35868;
  t35905 = -1.*t14831*t35876*t35868;
  t35908 = t35904 + t35905;
  t35998 = -1.*t35900*t35908;
  t36002 = t35899 + t35998;
  t36032 = -1.*t5584*t14831;
  t36034 = -1.*t35870*t35876;
  t36039 = t36032 + t36034;
  t36043 = t35870*t5584;
  t36044 = -1.*t14831*t35876;
  t36046 = t36043 + t36044;
  t36071 = t27553*t33640;
  t36072 = -1.*t24329*t35458;
  t36073 = t36071 + t36072;
  t36077 = t5584*t14831*t36073;
  t36081 = t35870*t35876*t36073;
  t36082 = t36077 + t36081;
  t36084 = t35893*t35868;
  t36085 = t35870*t5584*t36073;
  t36086 = -1.*t14831*t35876*t36073;
  t36088 = t36085 + t36086;
  t36089 = -1.*t35900*t36088;
  t36090 = t36084 + t36089;
  t36108 = -1.*t35900*t35898;
  t36109 = -1.*t35893*t35908;
  t36110 = t36108 + t36109;
  t36123 = -1.*t27553;
  t36124 = 1. + t36123;
  t36125 = 0.50321*t36124;
  t36126 = 0.19821*t27553;
  t36127 = t36125 + t36126;
  t36135 = -1.*t5584;
  t36136 = 1. + t36135;
  t36137 = 0.15121*t36136;
  t36139 = -1.*t24329;
  t36141 = 1. + t36139;
  t36142 = 0.28121*t36141;
  t36143 = t24329*t36127;
  t36145 = -0.305*t33640*t35458;
  t36146 = t36142 + t36143 + t36145;
  t36122 = 0.28121*t33640;
  t36128 = -1.*t36127*t33640;
  t36129 = -0.305*t24329*t35458;
  t36130 = t36122 + t36128 + t36129;
  t36147 = t5584*t36146;
  t36148 = t36137 + t36147;
  t36149 = t35870*t36148;
  t36150 = 0.15121*t5584;
  t36151 = -0.15121*t35876;
  t36152 = t35876*t36146;
  t36153 = t36137 + t36150 + t36151 + t36152;
  t36154 = -1.*t14831*t36153;
  t36155 = t36149 + t36154;
  t36159 = t35900*t36130;
  t36160 = t35893*t36155;
  t36161 = t36159 + t36160;
  t36134 = -1.*t35900*t36130;
  t36156 = -1.*t35893*t36155;
  t36157 = t36134 + t36156;
  t36177 = t35893*t36130;
  t36178 = -1.*t35900*t36155;
  t36179 = t36177 + t36178;
  t36119 = t35900*t35868;
  t36120 = t35893*t36088;
  t36121 = t36119 + t36120;
  t36165 = t14831*t36148;
  t36173 = t35870*t36153;
  t36174 = t36165 + t36173;
  t36186 = -1.*t35900*t35868;
  t36187 = -1.*t35893*t36088;
  t36189 = t36186 + t36187;
  t36206 = t35900*t35898;
  t36207 = t35893*t35908;
  t36208 = t36206 + t36207;
  t36294 = -1.*t5584*t14831*t35868;
  t36296 = -1.*t35870*t35876*t35868;
  t36297 = t36294 + t36296;
  t36175 = -1.*t36046*t36174;
  t36311 = -1.*t14831*t36148;
  t36312 = -1.*t35870*t36153;
  t36313 = t36311 + t36312;
  t36195 = t36082*t36174;
  t36325 = -1.*t5584*t14831*t36073;
  t36326 = -1.*t35870*t35876*t36073;
  t36328 = t36325 + t36326;
  t36176 = -1.*t35893*t36039*t36161;
  t36180 = t35900*t36039*t36179;
  t36182 = t36175 + t36176 + t36180;
  t36315 = -1.*t36039*t36174;
  t36316 = -1.*t36046*t36155;
  t36317 = -1.*t35870*t5584;
  t36318 = t14831*t35876;
  t36319 = t36317 + t36318;
  t36324 = t36088*t36174;
  t36331 = t36082*t36155;
  t36196 = t36121*t36161;
  t36197 = t36090*t36179;
  t36198 = t36195 + t36196 + t36197;
  t36215 = -1.*t36082*t36174;
  t36238 = t35887*t36174;
  t36371 = -1.*t36088*t36174;
  t36373 = -1.*t36082*t36155;
  t36383 = t35908*t36174;
  t36386 = t35887*t36155;
  t36216 = -1.*t36121*t36161;
  t36219 = -1.*t36090*t36179;
  t36220 = t36215 + t36216 + t36219;
  t36239 = t36208*t36161;
  t36240 = t36002*t36179;
  t36244 = t36238 + t36239 + t36240;
  t36265 = t36046*t36174;
  t36286 = -1.*t35887*t36174;
  t36267 = t35893*t36039*t36161;
  t36271 = -1.*t35900*t36039*t36179;
  t36272 = t36265 + t36267 + t36271;
  t36343 = Power(t35893,2);
  t36345 = Power(t35900,2);
  t36425 = t36039*t36174;
  t36426 = t36046*t36155;
  t36431 = -1.*t35908*t36174;
  t36434 = -1.*t35887*t36155;
  t36287 = -1.*t36208*t36161;
  t36288 = -1.*t36002*t36179;
  t36289 = t36286 + t36287 + t36288;
  t36298 = var2[0]*t35893*t36297;
  t36299 = t133*t35900*t36297;
  t36300 = t35892*t35908;
  t36301 = t36299 + t36300;
  t36303 = var2[1]*t36301;
  t36304 = -1.*t35892*t35900*t36297;
  t36305 = t133*t35908;
  t36306 = t36304 + t36305;
  t36307 = var2[2]*t36306;
  t36308 = -1.*t36039*t36155;
  t36309 = t36175 + t36308;
  t36310 = t36088*t36309;
  t36461 = -0.15121*t5584;
  t36462 = t36461 + t36147;
  t36464 = 0.15121*t35876;
  t36465 = -1.*t35876*t36146;
  t36466 = t36464 + t36465;
  t36320 = -1.*t36319*t36155;
  t36471 = -1.*t14831*t36462;
  t36472 = t35870*t36466;
  t36473 = t36471 + t36472;
  t36475 = t35870*t36462;
  t36476 = t14831*t36466;
  t36477 = t36475 + t36476;
  t36329 = t36328*t36155;
  t36335 = t36130*t35868;
  t36337 = t36088*t36155;
  t36338 = t36335 + t36195 + t36337;
  t36339 = t36039*t36338;
  t36342 = t35893*t36328*t36182;
  t36478 = -1.*t36046*t36477;
  t36347 = -1.*t35893*t36319*t36161;
  t36348 = t35900*t36319*t36179;
  t36482 = t36082*t36477;
  t36353 = t35893*t36328*t36161;
  t36354 = -1.*t35900*t36328*t36179;
  t36357 = t35893*t36319*t36198;
  t36361 = var2[0]*t35893*t36319;
  t36362 = t133*t36039;
  t36363 = -1.*t35892*t35900*t36319;
  t36364 = t36362 + t36363;
  t36365 = var2[2]*t36364;
  t36366 = t35892*t36039;
  t36367 = t133*t35900*t36319;
  t36368 = t36366 + t36367;
  t36369 = var2[1]*t36368;
  t36372 = -1.*t36328*t36155;
  t36377 = -1.*t36130*t35868;
  t36378 = -1.*t36088*t36155;
  t36379 = t36377 + t36215 + t36378;
  t36380 = t35908*t36379;
  t36385 = t36297*t36155;
  t36389 = t36130*t35898;
  t36390 = t35908*t36155;
  t36391 = t36389 + t36238 + t36390;
  t36392 = t36088*t36391;
  t36513 = -1.*t36082*t36477;
  t36397 = -1.*t35893*t36328*t36161;
  t36398 = t35900*t36328*t36179;
  t36517 = t35887*t36477;
  t36403 = t35893*t36297*t36161;
  t36404 = -1.*t35900*t36297*t36179;
  t36407 = t35893*t36297*t36220;
  t36408 = t35893*t36328*t36244;
  t36412 = var2[0]*t35893*t36328;
  t36413 = t133*t35900*t36328;
  t36414 = t35892*t36088;
  t36415 = t36413 + t36414;
  t36416 = var2[1]*t36415;
  t36417 = -1.*t35892*t35900*t36328;
  t36418 = t133*t36088;
  t36419 = t36417 + t36418;
  t36420 = var2[2]*t36419;
  t36421 = t36039*t36155;
  t36422 = t36265 + t36421;
  t36423 = t35908*t36422;
  t36427 = t36319*t36155;
  t36432 = -1.*t36297*t36155;
  t36437 = -1.*t36130*t35898;
  t36438 = -1.*t35908*t36155;
  t36439 = t36437 + t36286 + t36438;
  t36440 = t36039*t36439;
  t36443 = t35893*t36297*t36272;
  t36544 = t36046*t36477;
  t36446 = t35893*t36319*t36161;
  t36447 = -1.*t35900*t36319*t36179;
  t36548 = -1.*t35887*t36477;
  t36452 = -1.*t35893*t36297*t36161;
  t36453 = t35900*t36297*t36179;
  t36456 = t35893*t36319*t36289;
  t36564 = -1.*t24329*t27553;
  t36565 = -1.*t33640*t35458;
  t36566 = t36564 + t36565;
  t36568 = t35870*t5584*t35898;
  t36569 = -1.*t14831*t35876*t35898;
  t36570 = t36568 + t36569;
  t36578 = t5584*t14831*t35898;
  t36579 = t35870*t35876*t35898;
  t36580 = t36578 + t36579;
  t36582 = t35893*t36566;
  t36583 = -1.*t35900*t36570;
  t36584 = t36582 + t36583;
  t36593 = t5584*t14831*t36130;
  t36594 = t35870*t35876*t36130;
  t36595 = t36593 + t36594;
  t36597 = t35870*t5584*t36130;
  t36598 = -1.*t14831*t35876*t36130;
  t36599 = t36597 + t36598;
  t36596 = -1.*t36046*t36595;
  t36605 = 0.28121*t24329;
  t36606 = -1.*t24329*t36127;
  t36607 = 0.305*t33640*t35458;
  t36608 = t36605 + t36606 + t36607;
  t36610 = t36082*t36595;
  t36616 = t35900*t36608;
  t36617 = t35893*t36599;
  t36618 = t36616 + t36617;
  t36620 = t35893*t36608;
  t36621 = -1.*t35900*t36599;
  t36622 = t36620 + t36621;
  t36637 = t36130*t36566;
  t36639 = t35898*t36608;
  t36657 = Power(t5584,2);
  t36659 = Power(t35876,2);
  t36647 = -1.*t36608*t35868;
  t36567 = t35900*t36566;
  t36571 = t35893*t36570;
  t36572 = t36567 + t36571;
  t36678 = t36595*t35887;
  t36680 = t36580*t36174;
  t36684 = -1.*t36082*t36595;
  t36008 = t35892*t35887;
  t36009 = -1.*t133*t36002;
  t36010 = t36008 + t36009;
  t36721 = t36046*t36595;
  t36728 = -1.*t36595*t35887;
  t36730 = -1.*t36580*t36174;
  t36574 = t35876*t36148;
  t36575 = -1.*t5584*t36153;
  t36576 = t36574 + t36575;
  t36098 = t35892*t36082;
  t36100 = -1.*t133*t36090;
  t36101 = t36098 + t36100;
  t36764 = -0.305*t27553*t33640;
  t36765 = 0.305*t24329*t35458;
  t36766 = t36764 + t36765;
  t36767 = t5584*t14831*t36766;
  t36768 = t35870*t35876*t36766;
  t36769 = t36767 + t36768;
  t36771 = t35870*t5584*t36766;
  t36772 = -1.*t14831*t35876*t36766;
  t36773 = t36771 + t36772;
  t36777 = t5584*t14831*t36566;
  t36778 = t35870*t35876*t36566;
  t36779 = t36777 + t36778;
  t36770 = -1.*t36046*t36769;
  t36782 = -0.305*t24329*t27553;
  t36783 = t36782 + t36145;
  t36788 = t35870*t5584*t36566;
  t36789 = -1.*t14831*t35876*t36566;
  t36790 = t36788 + t36789;
  t36785 = t36082*t36769;
  t36796 = t35900*t36783;
  t36797 = t35893*t36773;
  t36798 = t36796 + t36797;
  t36800 = t35893*t36783;
  t36801 = -1.*t35900*t36773;
  t36802 = t36800 + t36801;
  t36787 = t36779*t36174;
  t36806 = t35900*t36073;
  t36807 = t35893*t36790;
  t36808 = t36806 + t36807;
  t36634 = -1.*t36073*t36146;
  t36635 = t36634 + t36377;
  t36642 = t36146*t35868;
  t36643 = t36389 + t36642;
  t36645 = -1.*t36073*t36130;
  t36652 = -1.*t5584*t36073*t36148;
  t36654 = -1.*t35876*t36073*t36153;
  t36655 = t36377 + t36652 + t36654;
  t36824 = t35898*t36783;
  t36831 = -1.*t36783*t35868;
  t36671 = t5584*t35868*t36148;
  t36672 = t35876*t35868*t36153;
  t36673 = t36389 + t36671 + t36672;
  t36855 = t36769*t35887;
  t36859 = -1.*t36082*t36769;
  t36861 = -1.*t36779*t36174;
  t36813 = t35893*t36073;
  t36814 = -1.*t35900*t36790;
  t36815 = t36813 + t36814;
  t36706 = 0.15121*t36566;
  t36707 = 0.15121*t35868;
  t36708 = t36706 + t36707;
  t36709 = var2[6]*t36708;
  t36710 = -1.*t35876*t36148;
  t36711 = t5584*t36153;
  t36712 = t36710 + t36711;
  t36899 = t36046*t36769;
  t36905 = -1.*t36769*t35887;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t133*t35887 - 1.*t35892*t36002)*var2[1] + t36010*var2[2];
  p_output1[10]=(t35892*t35900*t36039 - 1.*t133*t36046)*var2[1] + (t133*t35900*t36039 + t35892*t36046)*var2[2];
  p_output1[11]=(-1.*t133*t36082 - 1.*t35892*t36090)*var2[1] + t36101*var2[2];
  p_output1[12]=t36002*var2[0] - 1.*t133*t36110*var2[1] + t35892*t36110*var2[2] + (t36121*(t35900*t36039*t36157 + t35900*t36039*t36161) + t36090*t36182 + t35893*t36039*(t36090*t36157 + t36090*t36161 + t36121*t36179 + t36179*t36189) - 1.*t35900*t36039*t36198)*var2[3];
  p_output1[13]=-1.*t35900*t36039*var2[0] + t133*t35893*t36039*var2[1] - 1.*t35892*t35893*t36039*var2[2] + ((-1.*t36090*t36157 - 1.*t36090*t36161 - 1.*t36121*t36179 - 1.*t36179*t36189)*t36208 + t36121*(t36002*t36157 + t36002*t36161 + t36110*t36179 + t36179*t36208) + t36002*t36220 + t36090*t36244)*var2[3];
  p_output1[14]=t36090*var2[0] - 1.*t133*t36189*var2[1] + t35892*t36189*var2[2] + ((-1.*t35900*t36039*t36157 - 1.*t35900*t36039*t36161)*t36208 + t35893*t36039*(-1.*t36002*t36157 - 1.*t36002*t36161 - 1.*t36110*t36179 - 1.*t36179*t36208) + t36002*t36272 - 1.*t35900*t36039*t36289)*var2[3];
  p_output1[15]=t36298 + t36303 + t36307 + (t36342 + t36121*(t36315 + t36316 - 1.*t36039*t36313*t36343 - 1.*t36039*t36313*t36345 + t36347 + t36348) + t35893*t36039*(-1.*t35900*t36090*t36313 + t35893*t36121*t36313 + t36324 + t36331 + t36353 + t36354) + t36357)*var2[3] + (t36310 + t36082*(-1.*t36039*t36313 + t36315 + t36316 + t36320) + t36046*(t36088*t36313 + t36324 + t36329 + t36331) + t36339)*var2[4];
  p_output1[16]=t36361 + t36365 + t36369 + (t36208*(t35900*t36090*t36313 - 1.*t35893*t36121*t36313 + t36371 + t36373 + t36397 + t36398) + t36121*(-1.*t35900*t36002*t36313 + t35893*t36208*t36313 + t36383 + t36386 + t36403 + t36404) + t36407 + t36408)*var2[3] + (t35887*(-1.*t36088*t36313 + t36371 + t36372 + t36373) + t36380 + t36082*(t35908*t36313 + t36383 + t36385 + t36386) + t36392)*var2[4];
  p_output1[17]=t36412 + t36416 + t36420 + (t36443 + t36208*(t36039*t36313*t36343 + t36039*t36313*t36345 + t36425 + t36426 + t36446 + t36447) + t35893*t36039*(t35900*t36002*t36313 - 1.*t35893*t36208*t36313 + t36431 + t36434 + t36452 + t36453) + t36456)*var2[3] + (t36423 + t35887*(t36039*t36313 + t36425 + t36426 + t36427) + t36046*(-1.*t35908*t36313 + t36431 + t36432 + t36434) + t36440)*var2[4];
  p_output1[18]=t36298 + t36303 + t36307 + (t36342 + t36357 + t36121*(t36315 + t36347 + t36348 - 1.*t36039*t36343*t36473 - 1.*t36039*t36345*t36473 + t36478) + t35893*t36039*(t36324 + t36353 + t36354 - 1.*t35900*t36090*t36473 + t35893*t36121*t36473 + t36482))*var2[3] + (t36310 + t36339 + t36082*(t36315 + t36320 - 1.*t36039*t36473 + t36478) + t36046*(t36324 + t36329 + t36088*t36473 + t36482))*var2[4] + t35868*(t35876*t36153 + t35876*t36466 + t36148*t5584 - 1.*t36462*t5584)*var2[5];
  p_output1[19]=t36361 + t36365 + t36369 + (t36407 + t36408 + t36208*(t36371 + t36397 + t36398 + t35900*t36090*t36473 - 1.*t35893*t36121*t36473 + t36513) + t36121*(t36383 + t36403 + t36404 - 1.*t35900*t36002*t36473 + t35893*t36208*t36473 + t36517))*var2[3] + (t36380 + t36392 + t35887*(t36371 + t36372 - 1.*t36088*t36473 + t36513) + t36082*(t36383 + t36385 + t35908*t36473 + t36517))*var2[4] + (t35868*(-1.*t35868*t35876*t36148 + t35868*t35876*t36462 + t35868*t36153*t5584 + t35868*t36466*t5584) + t35898*(t35876*t36073*t36148 - 1.*t35876*t36073*t36462 - 1.*t36073*t36153*t5584 - 1.*t36073*t36466*t5584))*var2[5];
  p_output1[20]=t36412 + t36416 + t36420 + (t36443 + t36456 + t36208*(t36425 + t36446 + t36447 + t36039*t36343*t36473 + t36039*t36345*t36473 + t36544) + t35893*t36039*(t36431 + t36452 + t36453 + t35900*t36002*t36473 - 1.*t35893*t36208*t36473 + t36548))*var2[3] + (t36423 + t36440 + t35887*(t36425 + t36427 + t36039*t36473 + t36544) + t36046*(t36431 + t36432 - 1.*t35908*t36473 + t36548))*var2[4] + t35898*(-1.*t35876*t36153 - 1.*t35876*t36466 - 1.*t36148*t5584 + t36462*t5584)*var2[5];
  p_output1[21]=t36572*var2[0] + (t35892*t36580 - 1.*t133*t36584)*var2[1] + (t133*t36580 + t35892*t36584)*var2[2] + (t36182*t36208 + t36121*(t36596 - 1.*t35893*t36039*t36618 + t35900*t36039*t36622) + t35893*t36039*(t36238 + t36239 + t36240 + t36610 + t36121*t36618 + t36090*t36622))*var2[3] + (t35887*t36309 + t36082*(t36596 - 1.*t36039*t36599) + t36046*(t36238 + t36389 + t36390 + t36088*t36599 + t35868*t36608 + t36610))*var2[4] + t35898*t36576*var2[5];
  p_output1[22]=(t36208*t36244 + t36220*t36572 + t36121*(t36161*t36572 + t36179*t36584 + t36208*t36618 + t36002*t36622 + t36678 + t36680) + t36208*(t36286 + t36287 + t36288 - 1.*t36121*t36618 - 1.*t36090*t36622 + t36684))*var2[3] + (t35887*t36391 + t36379*t36580 + t36082*(t36155*t36570 + t35908*t36599 + t36637 + t36639 + t36678 + t36680) + t35887*(t36286 + t36437 + t36438 - 1.*t36088*t36599 + t36647 + t36684))*var2[4] + (t36566*t36655 + t35898*t36673 + t35898*(-1.*t35868*t35876*t36153 + t36437 + t36647 - 1.*t36073*t36130*t36657 - 1.*t36073*t36130*t36659 - 1.*t35868*t36148*t5584) + t35868*(t35876*t35898*t36153 + t36637 + t36639 + t35868*t36130*t36657 + t35868*t36130*t36659 + t35898*t36148*t5584))*var2[5] + (t36566*t36635 + t35868*(t35898*t36146 + t36335 + t36637 + t36639) + t35898*t36643 + t35898*(-1.*t35868*t36146 + t36437 + t36645 + t36647))*var2[6];
  p_output1[23]=t36709 + t36208*var2[0] + t36010*var2[1] + (t133*t35887 + t35892*t36002)*var2[2] + (t36272*t36572 + t36208*(t35893*t36039*t36618 - 1.*t35900*t36039*t36622 + t36721) + t35893*t36039*(-1.*t36161*t36572 - 1.*t36179*t36584 - 1.*t36208*t36618 - 1.*t36002*t36622 + t36728 + t36730))*var2[3] + (t36422*t36580 + t35887*(t36039*t36599 + t36721) + t36046*(-1.*t36130*t36566 - 1.*t36155*t36570 - 1.*t35908*t36599 - 1.*t35898*t36608 + t36728 + t36730))*var2[4] + t36566*t36712*var2[5];
  p_output1[24]=t36121*var2[0] + t36101*var2[1] + (t133*t36082 + t35892*t36090)*var2[2] + (t36121*(t36770 - 1.*t35893*t36039*t36798 + t35900*t36039*t36802) + t36182*t36808 + t35893*t36039*(t36785 + t36787 + t36121*t36798 + t36090*t36802 + t36161*t36808 + t36179*t36815))*var2[3] + (t36082*(t36770 - 1.*t36039*t36773) + t36309*t36779 + t36046*(t36073*t36130 + t36088*t36773 + t35868*t36783 + t36785 + t36787 + t36155*t36790))*var2[4] + t36073*t36576*var2[5] + (0.28121*t27553 - 0.305*Power(t27553,2) - 1.*t27553*t36127)*var2[7];
  p_output1[25]=(t36121*t36220 + t36244*t36808 + t36121*(t36195 + t36196 + t36197 + t36208*t36798 + t36002*t36802 + t36855) + t36208*(-1.*t36121*t36798 - 1.*t36090*t36802 - 1.*t36161*t36808 - 1.*t36179*t36815 + t36859 + t36861))*var2[3] + (t36082*t36379 + t36391*t36779 + t36082*(t36195 + t36335 + t36337 + t35908*t36773 + t36824 + t36855) + t35887*(t36645 - 1.*t36088*t36773 - 1.*t36155*t36790 + t36831 + t36859 + t36861))*var2[4] + (t35868*t36655 + t36073*t36673 + t35868*(t35876*t36073*t36153 + t36335 + t35868*t36657*t36766 + t35868*t36659*t36766 + t36824 + t36073*t36148*t5584) + t35898*(-1.*t35876*t36153*t36566 + t36645 - 1.*t36073*t36657*t36766 - 1.*t36073*t36659*t36766 + t36831 - 1.*t36148*t36566*t5584))*var2[5] + (t35868*t36635 + t36073*t36643 + t35868*(t36073*t36146 + t36335 + t35868*t36766 + t36824) + t35898*(-1.*t36146*t36566 + t36645 - 1.*t36073*t36766 + t36831))*var2[6];
  p_output1[26]=t36709 + t36808*var2[0] + (t35892*t36779 - 1.*t133*t36815)*var2[1] + (t133*t36779 + t35892*t36815)*var2[2] + (t36121*t36272 + t36208*(t35893*t36039*t36798 - 1.*t35900*t36039*t36802 + t36899) + t35893*t36039*(t36215 + t36216 + t36219 - 1.*t36208*t36798 - 1.*t36002*t36802 + t36905))*var2[3] + (t36082*t36422 + t35887*(t36039*t36773 + t36899) + t36046*(t36215 + t36377 + t36378 - 1.*t35908*t36773 - 1.*t35898*t36783 + t36905))*var2[4] + t35868*t36712*var2[5] + (-0.28121*t35458 + 0.305*t27553*t35458 + t35458*t36127)*var2[7];
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

#include "dJh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
