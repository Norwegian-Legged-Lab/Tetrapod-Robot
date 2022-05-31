/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:11 GMT+02:00
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
  double t15022;
  double t15032;
  double t15036;
  double t15037;
  double t15048;
  double t15050;
  double t15054;
  double t15059;
  double t8298;
  double t14992;
  double t15060;
  double t15064;
  double t15058;
  double t15061;
  double t15062;
  double t7498;
  double t15065;
  double t15066;
  double t15067;
  double t15068;
  double t15103;
  double t15107;
  double t15108;
  double t15109;
  double t15111;
  double t15112;
  double t15113;
  double t15124;
  double t15125;
  double t15126;
  double t15129;
  double t15130;
  double t15131;
  double t15141;
  double t15142;
  double t15143;
  double t15144;
  double t15145;
  double t15147;
  double t15149;
  double t15151;
  double t15152;
  double t15153;
  double t15154;
  double t15155;
  double t15164;
  double t15165;
  double t15166;
  double t15174;
  double t15175;
  double t15176;
  double t15177;
  double t15178;
  double t15183;
  double t15184;
  double t15185;
  double t15186;
  double t15187;
  double t15188;
  double t15189;
  double t15190;
  double t15191;
  double t15173;
  double t15179;
  double t15180;
  double t15181;
  double t15192;
  double t15193;
  double t15194;
  double t15195;
  double t15196;
  double t15197;
  double t15198;
  double t15199;
  double t15200;
  double t15204;
  double t15205;
  double t15206;
  double t15182;
  double t15201;
  double t15202;
  double t15215;
  double t15216;
  double t15217;
  double t15170;
  double t15171;
  double t15172;
  double t15210;
  double t15211;
  double t15212;
  double t15223;
  double t15224;
  double t15225;
  double t15241;
  double t15242;
  double t15243;
  double t15295;
  double t15296;
  double t15297;
  double t15213;
  double t15310;
  double t15311;
  double t15312;
  double t15230;
  double t15324;
  double t15325;
  double t15326;
  double t15214;
  double t15218;
  double t15219;
  double t15314;
  double t15315;
  double t15316;
  double t15317;
  double t15318;
  double t15323;
  double t15328;
  double t15231;
  double t15232;
  double t15233;
  double t15250;
  double t15261;
  double t15366;
  double t15368;
  double t15376;
  double t15378;
  double t15251;
  double t15252;
  double t15253;
  double t15262;
  double t15263;
  double t15264;
  double t15276;
  double t15287;
  double t15277;
  double t15278;
  double t15279;
  double t15338;
  double t15340;
  double t15417;
  double t15418;
  double t15423;
  double t15425;
  double t15288;
  double t15289;
  double t15290;
  double t15298;
  double t15299;
  double t15300;
  double t15301;
  double t15302;
  double t15303;
  double t15304;
  double t15305;
  double t15306;
  double t15307;
  double t15308;
  double t15309;
  double t15452;
  double t15453;
  double t15455;
  double t15456;
  double t15457;
  double t15319;
  double t15462;
  double t15463;
  double t15464;
  double t15466;
  double t15467;
  double t15468;
  double t15327;
  double t15331;
  double t15332;
  double t15333;
  double t15334;
  double t15337;
  double t15469;
  double t15342;
  double t15343;
  double t15473;
  double t15348;
  double t15349;
  double t15352;
  double t15356;
  double t15357;
  double t15358;
  double t15359;
  double t15360;
  double t15361;
  double t15362;
  double t15363;
  double t15364;
  double t15367;
  double t15371;
  double t15372;
  double t15373;
  double t15374;
  double t15377;
  double t15381;
  double t15382;
  double t15383;
  double t15384;
  double t15504;
  double t15389;
  double t15390;
  double t15508;
  double t15395;
  double t15396;
  double t15399;
  double t15400;
  double t15404;
  double t15405;
  double t15406;
  double t15407;
  double t15408;
  double t15409;
  double t15410;
  double t15411;
  double t15412;
  double t15413;
  double t15414;
  double t15415;
  double t15419;
  double t15424;
  double t15428;
  double t15429;
  double t15430;
  double t15431;
  double t15434;
  double t15531;
  double t15437;
  double t15438;
  double t15535;
  double t15443;
  double t15444;
  double t15447;
  double t15551;
  double t15552;
  double t15553;
  double t15555;
  double t15556;
  double t15557;
  double t15565;
  double t15566;
  double t15567;
  double t15569;
  double t15570;
  double t15571;
  double t15579;
  double t15580;
  double t15581;
  double t15583;
  double t15584;
  double t15585;
  double t15582;
  double t15590;
  double t15591;
  double t15592;
  double t15593;
  double t15595;
  double t15601;
  double t15602;
  double t15603;
  double t15605;
  double t15606;
  double t15607;
  double t15622;
  double t15624;
  double t15641;
  double t15643;
  double t15632;
  double t15554;
  double t15558;
  double t15559;
  double t15662;
  double t15664;
  double t15668;
  double t15118;
  double t15119;
  double t15120;
  double t15704;
  double t15711;
  double t15713;
  double t15561;
  double t15562;
  double t15563;
  double t15159;
  double t15160;
  double t15161;
  double t15746;
  double t15747;
  double t15748;
  double t15749;
  double t15750;
  double t15751;
  double t15753;
  double t15754;
  double t15755;
  double t15759;
  double t15760;
  double t15761;
  double t15752;
  double t15764;
  double t15765;
  double t15770;
  double t15771;
  double t15772;
  double t15767;
  double t15778;
  double t15779;
  double t15780;
  double t15782;
  double t15783;
  double t15784;
  double t15769;
  double t15788;
  double t15789;
  double t15790;
  double t15619;
  double t15620;
  double t15627;
  double t15628;
  double t15630;
  double t15637;
  double t15638;
  double t15639;
  double t15806;
  double t15813;
  double t15655;
  double t15656;
  double t15657;
  double t15835;
  double t15839;
  double t15841;
  double t15795;
  double t15796;
  double t15797;
  double t15690;
  double t15691;
  double t15692;
  double t15693;
  double t15694;
  double t15695;
  double t15696;
  double t15878;
  double t15884;
  t15022 = Cos(var1[7]);
  t15032 = Cos(var1[8]);
  t15036 = t15022*t15032;
  t15037 = Sin(var1[7]);
  t15048 = Sin(var1[8]);
  t15050 = t15037*t15048;
  t15054 = t15036 + t15050;
  t15059 = Cos(var1[5]);
  t8298 = Cos(var1[6]);
  t14992 = Sin(var1[5]);
  t15060 = Sin(var1[6]);
  t15064 = Cos(var1[3]);
  t15058 = t8298*t14992*t15054;
  t15061 = t15059*t15060*t15054;
  t15062 = t15058 + t15061;
  t7498 = Sin(var1[3]);
  t15065 = Cos(var1[4]);
  t15066 = -1.*t15032*t15037;
  t15067 = t15022*t15048;
  t15068 = t15066 + t15067;
  t15103 = t15065*t15068;
  t15107 = Sin(var1[4]);
  t15108 = t15059*t8298*t15054;
  t15109 = -1.*t14992*t15060*t15054;
  t15111 = t15108 + t15109;
  t15112 = -1.*t15107*t15111;
  t15113 = t15103 + t15112;
  t15124 = -1.*t8298*t14992;
  t15125 = -1.*t15059*t15060;
  t15126 = t15124 + t15125;
  t15129 = t15059*t8298;
  t15130 = -1.*t14992*t15060;
  t15131 = t15129 + t15130;
  t15141 = t15032*t15037;
  t15142 = -1.*t15022*t15048;
  t15143 = t15141 + t15142;
  t15144 = t8298*t14992*t15143;
  t15145 = t15059*t15060*t15143;
  t15147 = t15144 + t15145;
  t15149 = t15065*t15054;
  t15151 = t15059*t8298*t15143;
  t15152 = -1.*t14992*t15060*t15143;
  t15153 = t15151 + t15152;
  t15154 = -1.*t15107*t15153;
  t15155 = t15149 + t15154;
  t15164 = -1.*t15107*t15068;
  t15165 = -1.*t15065*t15111;
  t15166 = t15164 + t15165;
  t15174 = -1.*t15032;
  t15175 = 1. + t15174;
  t15176 = 0.50321*t15175;
  t15177 = 0.23321*t15032;
  t15178 = t15176 + t15177;
  t15183 = -1.*t8298;
  t15184 = 1. + t15183;
  t15185 = 0.15121*t15184;
  t15186 = -1.*t15022;
  t15187 = 1. + t15186;
  t15188 = 0.28121*t15187;
  t15189 = t15022*t15178;
  t15190 = -0.27*t15037*t15048;
  t15191 = t15188 + t15189 + t15190;
  t15173 = 0.28121*t15037;
  t15179 = -1.*t15178*t15037;
  t15180 = -0.27*t15022*t15048;
  t15181 = t15173 + t15179 + t15180;
  t15192 = t8298*t15191;
  t15193 = t15185 + t15192;
  t15194 = t15059*t15193;
  t15195 = 0.15121*t8298;
  t15196 = -0.15121*t15060;
  t15197 = t15060*t15191;
  t15198 = t15185 + t15195 + t15196 + t15197;
  t15199 = -1.*t14992*t15198;
  t15200 = t15194 + t15199;
  t15204 = t15107*t15181;
  t15205 = t15065*t15200;
  t15206 = t15204 + t15205;
  t15182 = -1.*t15107*t15181;
  t15201 = -1.*t15065*t15200;
  t15202 = t15182 + t15201;
  t15215 = t15065*t15181;
  t15216 = -1.*t15107*t15200;
  t15217 = t15215 + t15216;
  t15170 = t15107*t15054;
  t15171 = t15065*t15153;
  t15172 = t15170 + t15171;
  t15210 = t14992*t15193;
  t15211 = t15059*t15198;
  t15212 = t15210 + t15211;
  t15223 = -1.*t15107*t15054;
  t15224 = -1.*t15065*t15153;
  t15225 = t15223 + t15224;
  t15241 = t15107*t15068;
  t15242 = t15065*t15111;
  t15243 = t15241 + t15242;
  t15295 = -1.*t8298*t14992*t15054;
  t15296 = -1.*t15059*t15060*t15054;
  t15297 = t15295 + t15296;
  t15213 = -1.*t15131*t15212;
  t15310 = -1.*t14992*t15193;
  t15311 = -1.*t15059*t15198;
  t15312 = t15310 + t15311;
  t15230 = t15147*t15212;
  t15324 = -1.*t8298*t14992*t15143;
  t15325 = -1.*t15059*t15060*t15143;
  t15326 = t15324 + t15325;
  t15214 = -1.*t15065*t15126*t15206;
  t15218 = t15107*t15126*t15217;
  t15219 = t15213 + t15214 + t15218;
  t15314 = -1.*t15126*t15212;
  t15315 = -1.*t15131*t15200;
  t15316 = -1.*t15059*t8298;
  t15317 = t14992*t15060;
  t15318 = t15316 + t15317;
  t15323 = t15153*t15212;
  t15328 = t15147*t15200;
  t15231 = t15172*t15206;
  t15232 = t15155*t15217;
  t15233 = t15230 + t15231 + t15232;
  t15250 = -1.*t15147*t15212;
  t15261 = t15062*t15212;
  t15366 = -1.*t15153*t15212;
  t15368 = -1.*t15147*t15200;
  t15376 = t15111*t15212;
  t15378 = t15062*t15200;
  t15251 = -1.*t15172*t15206;
  t15252 = -1.*t15155*t15217;
  t15253 = t15250 + t15251 + t15252;
  t15262 = t15243*t15206;
  t15263 = t15113*t15217;
  t15264 = t15261 + t15262 + t15263;
  t15276 = t15131*t15212;
  t15287 = -1.*t15062*t15212;
  t15277 = t15065*t15126*t15206;
  t15278 = -1.*t15107*t15126*t15217;
  t15279 = t15276 + t15277 + t15278;
  t15338 = Power(t15065,2);
  t15340 = Power(t15107,2);
  t15417 = t15126*t15212;
  t15418 = t15131*t15200;
  t15423 = -1.*t15111*t15212;
  t15425 = -1.*t15062*t15200;
  t15288 = -1.*t15243*t15206;
  t15289 = -1.*t15113*t15217;
  t15290 = t15287 + t15288 + t15289;
  t15298 = var2[0]*t15065*t15297;
  t15299 = t7498*t15107*t15297;
  t15300 = t15064*t15111;
  t15301 = t15299 + t15300;
  t15302 = var2[1]*t15301;
  t15303 = -1.*t15064*t15107*t15297;
  t15304 = t7498*t15111;
  t15305 = t15303 + t15304;
  t15306 = var2[2]*t15305;
  t15307 = -1.*t15126*t15200;
  t15308 = t15213 + t15307;
  t15309 = t15153*t15308;
  t15452 = -0.15121*t8298;
  t15453 = t15452 + t15192;
  t15455 = 0.15121*t15060;
  t15456 = -1.*t15060*t15191;
  t15457 = t15455 + t15456;
  t15319 = -1.*t15318*t15200;
  t15462 = -1.*t14992*t15453;
  t15463 = t15059*t15457;
  t15464 = t15462 + t15463;
  t15466 = t15059*t15453;
  t15467 = t14992*t15457;
  t15468 = t15466 + t15467;
  t15327 = t15326*t15200;
  t15331 = t15181*t15054;
  t15332 = t15153*t15200;
  t15333 = t15331 + t15230 + t15332;
  t15334 = t15126*t15333;
  t15337 = t15065*t15326*t15219;
  t15469 = -1.*t15131*t15468;
  t15342 = -1.*t15065*t15318*t15206;
  t15343 = t15107*t15318*t15217;
  t15473 = t15147*t15468;
  t15348 = t15065*t15326*t15206;
  t15349 = -1.*t15107*t15326*t15217;
  t15352 = t15065*t15318*t15233;
  t15356 = var2[0]*t15065*t15318;
  t15357 = t7498*t15126;
  t15358 = -1.*t15064*t15107*t15318;
  t15359 = t15357 + t15358;
  t15360 = var2[2]*t15359;
  t15361 = t15064*t15126;
  t15362 = t7498*t15107*t15318;
  t15363 = t15361 + t15362;
  t15364 = var2[1]*t15363;
  t15367 = -1.*t15326*t15200;
  t15371 = -1.*t15181*t15054;
  t15372 = -1.*t15153*t15200;
  t15373 = t15371 + t15250 + t15372;
  t15374 = t15111*t15373;
  t15377 = t15297*t15200;
  t15381 = t15181*t15068;
  t15382 = t15111*t15200;
  t15383 = t15381 + t15261 + t15382;
  t15384 = t15153*t15383;
  t15504 = -1.*t15147*t15468;
  t15389 = -1.*t15065*t15326*t15206;
  t15390 = t15107*t15326*t15217;
  t15508 = t15062*t15468;
  t15395 = t15065*t15297*t15206;
  t15396 = -1.*t15107*t15297*t15217;
  t15399 = t15065*t15297*t15253;
  t15400 = t15065*t15326*t15264;
  t15404 = var2[0]*t15065*t15326;
  t15405 = t7498*t15107*t15326;
  t15406 = t15064*t15153;
  t15407 = t15405 + t15406;
  t15408 = var2[1]*t15407;
  t15409 = -1.*t15064*t15107*t15326;
  t15410 = t7498*t15153;
  t15411 = t15409 + t15410;
  t15412 = var2[2]*t15411;
  t15413 = t15126*t15200;
  t15414 = t15276 + t15413;
  t15415 = t15111*t15414;
  t15419 = t15318*t15200;
  t15424 = -1.*t15297*t15200;
  t15428 = -1.*t15181*t15068;
  t15429 = -1.*t15111*t15200;
  t15430 = t15428 + t15287 + t15429;
  t15431 = t15126*t15430;
  t15434 = t15065*t15297*t15279;
  t15531 = t15131*t15468;
  t15437 = t15065*t15318*t15206;
  t15438 = -1.*t15107*t15318*t15217;
  t15535 = -1.*t15062*t15468;
  t15443 = -1.*t15065*t15297*t15206;
  t15444 = t15107*t15297*t15217;
  t15447 = t15065*t15318*t15290;
  t15551 = -1.*t15022*t15032;
  t15552 = -1.*t15037*t15048;
  t15553 = t15551 + t15552;
  t15555 = t15059*t8298*t15068;
  t15556 = -1.*t14992*t15060*t15068;
  t15557 = t15555 + t15556;
  t15565 = t8298*t14992*t15068;
  t15566 = t15059*t15060*t15068;
  t15567 = t15565 + t15566;
  t15569 = t15065*t15553;
  t15570 = -1.*t15107*t15557;
  t15571 = t15569 + t15570;
  t15579 = t8298*t14992*t15181;
  t15580 = t15059*t15060*t15181;
  t15581 = t15579 + t15580;
  t15583 = t15059*t8298*t15181;
  t15584 = -1.*t14992*t15060*t15181;
  t15585 = t15583 + t15584;
  t15582 = -1.*t15131*t15581;
  t15590 = 0.28121*t15022;
  t15591 = -1.*t15022*t15178;
  t15592 = 0.27*t15037*t15048;
  t15593 = t15590 + t15591 + t15592;
  t15595 = t15147*t15581;
  t15601 = t15107*t15593;
  t15602 = t15065*t15585;
  t15603 = t15601 + t15602;
  t15605 = t15065*t15593;
  t15606 = -1.*t15107*t15585;
  t15607 = t15605 + t15606;
  t15622 = t15181*t15553;
  t15624 = t15068*t15593;
  t15641 = Power(t8298,2);
  t15643 = Power(t15060,2);
  t15632 = -1.*t15593*t15054;
  t15554 = t15107*t15553;
  t15558 = t15065*t15557;
  t15559 = t15554 + t15558;
  t15662 = t15581*t15062;
  t15664 = t15567*t15212;
  t15668 = -1.*t15147*t15581;
  t15118 = t15064*t15062;
  t15119 = -1.*t7498*t15113;
  t15120 = t15118 + t15119;
  t15704 = t15131*t15581;
  t15711 = -1.*t15581*t15062;
  t15713 = -1.*t15567*t15212;
  t15561 = t15060*t15193;
  t15562 = -1.*t8298*t15198;
  t15563 = t15561 + t15562;
  t15159 = t15064*t15147;
  t15160 = -1.*t7498*t15155;
  t15161 = t15159 + t15160;
  t15746 = -0.27*t15032*t15037;
  t15747 = 0.27*t15022*t15048;
  t15748 = t15746 + t15747;
  t15749 = t8298*t14992*t15748;
  t15750 = t15059*t15060*t15748;
  t15751 = t15749 + t15750;
  t15753 = t15059*t8298*t15748;
  t15754 = -1.*t14992*t15060*t15748;
  t15755 = t15753 + t15754;
  t15759 = t8298*t14992*t15553;
  t15760 = t15059*t15060*t15553;
  t15761 = t15759 + t15760;
  t15752 = -1.*t15131*t15751;
  t15764 = -0.27*t15022*t15032;
  t15765 = t15764 + t15190;
  t15770 = t15059*t8298*t15553;
  t15771 = -1.*t14992*t15060*t15553;
  t15772 = t15770 + t15771;
  t15767 = t15147*t15751;
  t15778 = t15107*t15765;
  t15779 = t15065*t15755;
  t15780 = t15778 + t15779;
  t15782 = t15065*t15765;
  t15783 = -1.*t15107*t15755;
  t15784 = t15782 + t15783;
  t15769 = t15761*t15212;
  t15788 = t15107*t15143;
  t15789 = t15065*t15772;
  t15790 = t15788 + t15789;
  t15619 = -1.*t15143*t15191;
  t15620 = t15619 + t15371;
  t15627 = t15191*t15054;
  t15628 = t15381 + t15627;
  t15630 = -1.*t15143*t15181;
  t15637 = -1.*t8298*t15143*t15193;
  t15638 = -1.*t15060*t15143*t15198;
  t15639 = t15371 + t15637 + t15638;
  t15806 = t15068*t15765;
  t15813 = -1.*t15765*t15054;
  t15655 = t8298*t15054*t15193;
  t15656 = t15060*t15054*t15198;
  t15657 = t15381 + t15655 + t15656;
  t15835 = t15751*t15062;
  t15839 = -1.*t15147*t15751;
  t15841 = -1.*t15761*t15212;
  t15795 = t15065*t15143;
  t15796 = -1.*t15107*t15772;
  t15797 = t15795 + t15796;
  t15690 = 0.15121*t15553;
  t15691 = 0.15121*t15054;
  t15692 = t15690 + t15691;
  t15693 = var2[6]*t15692;
  t15694 = -1.*t15060*t15193;
  t15695 = t8298*t15198;
  t15696 = t15694 + t15695;
  t15878 = t15131*t15751;
  t15884 = -1.*t15751*t15062;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t15064*t15113 - 1.*t15062*t7498)*var2[1] + t15120*var2[2];
  p_output1[10]=(t15064*t15107*t15126 - 1.*t15131*t7498)*var2[1] + (t15064*t15131 + t15107*t15126*t7498)*var2[2];
  p_output1[11]=(-1.*t15064*t15155 - 1.*t15147*t7498)*var2[1] + t15161*var2[2];
  p_output1[12]=t15113*var2[0] - 1.*t15166*t7498*var2[1] + t15064*t15166*var2[2] + (t15172*(t15107*t15126*t15202 + t15107*t15126*t15206) + t15155*t15219 + t15065*t15126*(t15155*t15202 + t15155*t15206 + t15172*t15217 + t15217*t15225) - 1.*t15107*t15126*t15233)*var2[3];
  p_output1[13]=-1.*t15107*t15126*var2[0] + t15065*t15126*t7498*var2[1] - 1.*t15064*t15065*t15126*var2[2] + ((-1.*t15155*t15202 - 1.*t15155*t15206 - 1.*t15172*t15217 - 1.*t15217*t15225)*t15243 + t15172*(t15113*t15202 + t15113*t15206 + t15166*t15217 + t15217*t15243) + t15113*t15253 + t15155*t15264)*var2[3];
  p_output1[14]=t15155*var2[0] - 1.*t15225*t7498*var2[1] + t15064*t15225*var2[2] + ((-1.*t15107*t15126*t15202 - 1.*t15107*t15126*t15206)*t15243 + t15065*t15126*(-1.*t15113*t15202 - 1.*t15113*t15206 - 1.*t15166*t15217 - 1.*t15217*t15243) + t15113*t15279 - 1.*t15107*t15126*t15290)*var2[3];
  p_output1[15]=t15298 + t15302 + t15306 + (t15337 + t15172*(t15314 + t15315 - 1.*t15126*t15312*t15338 - 1.*t15126*t15312*t15340 + t15342 + t15343) + t15065*t15126*(-1.*t15107*t15155*t15312 + t15065*t15172*t15312 + t15323 + t15328 + t15348 + t15349) + t15352)*var2[3] + (t15309 + t15147*(-1.*t15126*t15312 + t15314 + t15315 + t15319) + t15131*(t15153*t15312 + t15323 + t15327 + t15328) + t15334)*var2[4];
  p_output1[16]=t15356 + t15360 + t15364 + (t15243*(t15107*t15155*t15312 - 1.*t15065*t15172*t15312 + t15366 + t15368 + t15389 + t15390) + t15172*(-1.*t15107*t15113*t15312 + t15065*t15243*t15312 + t15376 + t15378 + t15395 + t15396) + t15399 + t15400)*var2[3] + (t15062*(-1.*t15153*t15312 + t15366 + t15367 + t15368) + t15374 + t15147*(t15111*t15312 + t15376 + t15377 + t15378) + t15384)*var2[4];
  p_output1[17]=t15404 + t15408 + t15412 + (t15434 + t15243*(t15126*t15312*t15338 + t15126*t15312*t15340 + t15417 + t15418 + t15437 + t15438) + t15065*t15126*(t15107*t15113*t15312 - 1.*t15065*t15243*t15312 + t15423 + t15425 + t15443 + t15444) + t15447)*var2[3] + (t15415 + t15062*(t15126*t15312 + t15417 + t15418 + t15419) + t15131*(-1.*t15111*t15312 + t15423 + t15424 + t15425) + t15431)*var2[4];
  p_output1[18]=t15298 + t15302 + t15306 + (t15337 + t15352 + t15172*(t15314 + t15342 + t15343 - 1.*t15126*t15338*t15464 - 1.*t15126*t15340*t15464 + t15469) + t15065*t15126*(t15323 + t15348 + t15349 - 1.*t15107*t15155*t15464 + t15065*t15172*t15464 + t15473))*var2[3] + (t15309 + t15334 + t15147*(t15314 + t15319 - 1.*t15126*t15464 + t15469) + t15131*(t15323 + t15327 + t15153*t15464 + t15473))*var2[4] + t15054*(t15060*t15198 + t15060*t15457 + t15193*t8298 - 1.*t15453*t8298)*var2[5];
  p_output1[19]=t15356 + t15360 + t15364 + (t15399 + t15400 + t15243*(t15366 + t15389 + t15390 + t15107*t15155*t15464 - 1.*t15065*t15172*t15464 + t15504) + t15172*(t15376 + t15395 + t15396 - 1.*t15107*t15113*t15464 + t15065*t15243*t15464 + t15508))*var2[3] + (t15374 + t15384 + t15062*(t15366 + t15367 - 1.*t15153*t15464 + t15504) + t15147*(t15376 + t15377 + t15111*t15464 + t15508))*var2[4] + (t15054*(-1.*t15054*t15060*t15193 + t15054*t15060*t15453 + t15054*t15198*t8298 + t15054*t15457*t8298) + t15068*(t15060*t15143*t15193 - 1.*t15060*t15143*t15453 - 1.*t15143*t15198*t8298 - 1.*t15143*t15457*t8298))*var2[5];
  p_output1[20]=t15404 + t15408 + t15412 + (t15434 + t15447 + t15243*(t15417 + t15437 + t15438 + t15126*t15338*t15464 + t15126*t15340*t15464 + t15531) + t15065*t15126*(t15423 + t15443 + t15444 + t15107*t15113*t15464 - 1.*t15065*t15243*t15464 + t15535))*var2[3] + (t15415 + t15431 + t15062*(t15417 + t15419 + t15126*t15464 + t15531) + t15131*(t15423 + t15424 - 1.*t15111*t15464 + t15535))*var2[4] + t15068*(-1.*t15060*t15198 - 1.*t15060*t15457 - 1.*t15193*t8298 + t15453*t8298)*var2[5];
  p_output1[21]=t15559*var2[0] + (t15064*t15567 - 1.*t15571*t7498)*var2[1] + (t15064*t15571 + t15567*t7498)*var2[2] + (t15219*t15243 + t15172*(t15582 - 1.*t15065*t15126*t15603 + t15107*t15126*t15607) + t15065*t15126*(t15261 + t15262 + t15263 + t15595 + t15172*t15603 + t15155*t15607))*var2[3] + (t15062*t15308 + t15147*(t15582 - 1.*t15126*t15585) + t15131*(t15261 + t15381 + t15382 + t15153*t15585 + t15054*t15593 + t15595))*var2[4] + t15068*t15563*var2[5];
  p_output1[22]=(t15243*t15264 + t15253*t15559 + t15172*(t15206*t15559 + t15217*t15571 + t15243*t15603 + t15113*t15607 + t15662 + t15664) + t15243*(t15287 + t15288 + t15289 - 1.*t15172*t15603 - 1.*t15155*t15607 + t15668))*var2[3] + (t15062*t15383 + t15373*t15567 + t15147*(t15200*t15557 + t15111*t15585 + t15622 + t15624 + t15662 + t15664) + t15062*(t15287 + t15428 + t15429 - 1.*t15153*t15585 + t15632 + t15668))*var2[4] + (t15553*t15639 + t15068*t15657 + t15068*(-1.*t15054*t15060*t15198 + t15428 + t15632 - 1.*t15143*t15181*t15641 - 1.*t15143*t15181*t15643 - 1.*t15054*t15193*t8298) + t15054*(t15060*t15068*t15198 + t15622 + t15624 + t15054*t15181*t15641 + t15054*t15181*t15643 + t15068*t15193*t8298))*var2[5] + (t15553*t15620 + t15054*(t15068*t15191 + t15331 + t15622 + t15624) + t15068*t15628 + t15068*(-1.*t15054*t15191 + t15428 + t15630 + t15632))*var2[6];
  p_output1[23]=t15693 + t15243*var2[0] + t15120*var2[1] + (t15064*t15113 + t15062*t7498)*var2[2] + (t15279*t15559 + t15243*(t15065*t15126*t15603 - 1.*t15107*t15126*t15607 + t15704) + t15065*t15126*(-1.*t15206*t15559 - 1.*t15217*t15571 - 1.*t15243*t15603 - 1.*t15113*t15607 + t15711 + t15713))*var2[3] + (t15414*t15567 + t15062*(t15126*t15585 + t15704) + t15131*(-1.*t15181*t15553 - 1.*t15200*t15557 - 1.*t15111*t15585 - 1.*t15068*t15593 + t15711 + t15713))*var2[4] + t15553*t15696*var2[5];
  p_output1[24]=t15172*var2[0] + t15161*var2[1] + (t15064*t15155 + t15147*t7498)*var2[2] + (t15172*(t15752 - 1.*t15065*t15126*t15780 + t15107*t15126*t15784) + t15219*t15790 + t15065*t15126*(t15767 + t15769 + t15172*t15780 + t15155*t15784 + t15206*t15790 + t15217*t15797))*var2[3] + (t15147*(t15752 - 1.*t15126*t15755) + t15308*t15761 + t15131*(t15143*t15181 + t15153*t15755 + t15054*t15765 + t15767 + t15769 + t15200*t15772))*var2[4] + t15143*t15563*var2[5] + (0.28121*t15032 - 0.27*Power(t15032,2) - 1.*t15032*t15178)*var2[7];
  p_output1[25]=(t15172*t15253 + t15264*t15790 + t15172*(t15230 + t15231 + t15232 + t15243*t15780 + t15113*t15784 + t15835) + t15243*(-1.*t15172*t15780 - 1.*t15155*t15784 - 1.*t15206*t15790 - 1.*t15217*t15797 + t15839 + t15841))*var2[3] + (t15147*t15373 + t15383*t15761 + t15147*(t15230 + t15331 + t15332 + t15111*t15755 + t15806 + t15835) + t15062*(t15630 - 1.*t15153*t15755 - 1.*t15200*t15772 + t15813 + t15839 + t15841))*var2[4] + (t15054*t15639 + t15143*t15657 + t15054*(t15060*t15143*t15198 + t15331 + t15054*t15641*t15748 + t15054*t15643*t15748 + t15806 + t15143*t15193*t8298) + t15068*(-1.*t15060*t15198*t15553 + t15630 - 1.*t15143*t15641*t15748 - 1.*t15143*t15643*t15748 + t15813 - 1.*t15193*t15553*t8298))*var2[5] + (t15054*t15620 + t15143*t15628 + t15054*(t15143*t15191 + t15331 + t15054*t15748 + t15806) + t15068*(-1.*t15191*t15553 + t15630 - 1.*t15143*t15748 + t15813))*var2[6];
  p_output1[26]=t15693 + t15790*var2[0] + (t15064*t15761 - 1.*t15797*t7498)*var2[1] + (t15064*t15797 + t15761*t7498)*var2[2] + (t15172*t15279 + t15243*(t15065*t15126*t15780 - 1.*t15107*t15126*t15784 + t15878) + t15065*t15126*(t15250 + t15251 + t15252 - 1.*t15243*t15780 - 1.*t15113*t15784 + t15884))*var2[3] + (t15147*t15414 + t15062*(t15126*t15755 + t15878) + t15131*(t15250 + t15371 + t15372 - 1.*t15111*t15755 - 1.*t15068*t15765 + t15884))*var2[4] + t15054*t15696*var2[5] + (-0.28121*t15048 + 0.27*t15032*t15048 + t15048*t15178)*var2[7];
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
