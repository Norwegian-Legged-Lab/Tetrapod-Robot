/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:29 GMT+02:00
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
  double t12018;
  double t12042;
  double t12046;
  double t12047;
  double t12052;
  double t12054;
  double t12065;
  double t12072;
  double t9661;
  double t11805;
  double t12073;
  double t12078;
  double t12070;
  double t12075;
  double t12076;
  double t2411;
  double t12083;
  double t12084;
  double t12087;
  double t12088;
  double t12154;
  double t12159;
  double t12160;
  double t12161;
  double t12163;
  double t12166;
  double t12167;
  double t12184;
  double t12185;
  double t12186;
  double t12190;
  double t12194;
  double t12196;
  double t12206;
  double t12207;
  double t12208;
  double t12209;
  double t12210;
  double t12212;
  double t12215;
  double t12218;
  double t12223;
  double t12224;
  double t12226;
  double t12227;
  double t12239;
  double t12242;
  double t12245;
  double t12260;
  double t12261;
  double t12262;
  double t12263;
  double t12271;
  double t12289;
  double t12290;
  double t12295;
  double t12297;
  double t12299;
  double t12306;
  double t12307;
  double t12315;
  double t12258;
  double t12273;
  double t12278;
  double t12280;
  double t12291;
  double t12317;
  double t12319;
  double t12320;
  double t12321;
  double t12322;
  double t12334;
  double t12335;
  double t12336;
  double t12337;
  double t12345;
  double t12351;
  double t12352;
  double t12353;
  double t12281;
  double t12346;
  double t12347;
  double t12365;
  double t12366;
  double t12367;
  double t12254;
  double t12256;
  double t12257;
  double t12357;
  double t12358;
  double t12359;
  double t12374;
  double t12375;
  double t12377;
  double t12395;
  double t12397;
  double t12398;
  double t12511;
  double t12514;
  double t12527;
  double t12363;
  double t12577;
  double t12578;
  double t12583;
  double t12382;
  double t12599;
  double t12600;
  double t12602;
  double t12364;
  double t12368;
  double t12369;
  double t12588;
  double t12589;
  double t12590;
  double t12591;
  double t12592;
  double t12597;
  double t12604;
  double t12383;
  double t12384;
  double t12385;
  double t12414;
  double t12433;
  double t12672;
  double t12676;
  double t12691;
  double t12695;
  double t12415;
  double t12417;
  double t12418;
  double t12434;
  double t12435;
  double t12436;
  double t12472;
  double t12496;
  double t12473;
  double t12476;
  double t12477;
  double t12622;
  double t12625;
  double t12739;
  double t12740;
  double t12745;
  double t12747;
  double t12497;
  double t12501;
  double t12503;
  double t12528;
  double t12541;
  double t12544;
  double t12550;
  double t12552;
  double t12553;
  double t12554;
  double t12559;
  double t12560;
  double t12561;
  double t12572;
  double t12576;
  double t12820;
  double t12824;
  double t12829;
  double t12814;
  double t12593;
  double t12846;
  double t12847;
  double t12848;
  double t12851;
  double t12852;
  double t12853;
  double t12603;
  double t12608;
  double t12609;
  double t12612;
  double t12614;
  double t12617;
  double t12854;
  double t12629;
  double t12630;
  double t12861;
  double t12642;
  double t12643;
  double t12655;
  double t12660;
  double t12661;
  double t12662;
  double t12663;
  double t12664;
  double t12666;
  double t12667;
  double t12668;
  double t12670;
  double t12675;
  double t12683;
  double t12684;
  double t12685;
  double t12686;
  double t12694;
  double t12698;
  double t12700;
  double t12701;
  double t12702;
  double t12950;
  double t12710;
  double t12711;
  double t12955;
  double t12716;
  double t12717;
  double t12720;
  double t12721;
  double t12725;
  double t12726;
  double t12727;
  double t12729;
  double t12730;
  double t12731;
  double t12732;
  double t12733;
  double t12734;
  double t12735;
  double t12736;
  double t12737;
  double t12741;
  double t12746;
  double t12751;
  double t12752;
  double t12753;
  double t12754;
  double t12758;
  double t13034;
  double t12761;
  double t12762;
  double t13039;
  double t12772;
  double t12776;
  double t12794;
  double t13069;
  double t13070;
  double t13071;
  double t13073;
  double t13074;
  double t13075;
  double t13079;
  double t13080;
  double t13081;
  double t13083;
  double t13084;
  double t13085;
  double t13093;
  double t13094;
  double t13096;
  double t13098;
  double t13102;
  double t13103;
  double t13097;
  double t13134;
  double t13135;
  double t13143;
  double t13145;
  double t13191;
  double t13197;
  double t13198;
  double t13199;
  double t13201;
  double t13202;
  double t13203;
  double t13224;
  double t13226;
  double t13256;
  double t13259;
  double t13244;
  double t13072;
  double t13076;
  double t13077;
  double t13296;
  double t13298;
  double t13302;
  double t12174;
  double t12175;
  double t12177;
  double t13385;
  double t13405;
  double t13407;
  double t13065;
  double t13066;
  double t13067;
  double t12233;
  double t12234;
  double t12235;
  double t13485;
  double t13487;
  double t13493;
  double t13494;
  double t13495;
  double t13497;
  double t13499;
  double t13511;
  double t13512;
  double t13520;
  double t13522;
  double t13524;
  double t13498;
  double t13529;
  double t13530;
  double t13547;
  double t13548;
  double t13549;
  double t13535;
  double t13545;
  double t13565;
  double t13568;
  double t13569;
  double t13577;
  double t13582;
  double t13583;
  double t13587;
  double t13588;
  double t13590;
  double t13219;
  double t13220;
  double t13232;
  double t13234;
  double t13240;
  double t13252;
  double t13253;
  double t13254;
  double t13647;
  double t13671;
  double t13276;
  double t13281;
  double t13282;
  double t13727;
  double t13741;
  double t13746;
  double t13607;
  double t13611;
  double t13612;
  double t13344;
  double t13345;
  double t13347;
  double t13348;
  double t13349;
  double t13354;
  double t13355;
  double t13824;
  double t13835;
  t12018 = Cos(var1[13]);
  t12042 = Cos(var1[14]);
  t12046 = t12018*t12042;
  t12047 = Sin(var1[13]);
  t12052 = Sin(var1[14]);
  t12054 = t12047*t12052;
  t12065 = t12046 + t12054;
  t12072 = Cos(var1[12]);
  t9661 = Cos(var1[5]);
  t11805 = Sin(var1[12]);
  t12073 = Sin(var1[5]);
  t12078 = Cos(var1[3]);
  t12070 = t9661*t11805*t12065;
  t12075 = t12072*t12065*t12073;
  t12076 = t12070 + t12075;
  t2411 = Sin(var1[3]);
  t12083 = Cos(var1[4]);
  t12084 = -1.*t12042*t12047;
  t12087 = t12018*t12052;
  t12088 = t12084 + t12087;
  t12154 = t12083*t12088;
  t12159 = Sin(var1[4]);
  t12160 = t12072*t9661*t12065;
  t12161 = -1.*t11805*t12065*t12073;
  t12163 = t12160 + t12161;
  t12166 = -1.*t12159*t12163;
  t12167 = t12154 + t12166;
  t12184 = -1.*t9661*t11805;
  t12185 = -1.*t12072*t12073;
  t12186 = t12184 + t12185;
  t12190 = t12072*t9661;
  t12194 = -1.*t11805*t12073;
  t12196 = t12190 + t12194;
  t12206 = t12042*t12047;
  t12207 = -1.*t12018*t12052;
  t12208 = t12206 + t12207;
  t12209 = t9661*t11805*t12208;
  t12210 = t12072*t12208*t12073;
  t12212 = t12209 + t12210;
  t12215 = t12083*t12065;
  t12218 = t12072*t9661*t12208;
  t12223 = -1.*t11805*t12208*t12073;
  t12224 = t12218 + t12223;
  t12226 = -1.*t12159*t12224;
  t12227 = t12215 + t12226;
  t12239 = -1.*t12088*t12159;
  t12242 = -1.*t12083*t12163;
  t12245 = t12239 + t12242;
  t12260 = -1.*t12042;
  t12261 = 1. + t12260;
  t12262 = 0.50321*t12261;
  t12263 = 0.19821*t12042;
  t12271 = t12262 + t12263;
  t12289 = -1.*t12072;
  t12290 = 1. + t12289;
  t12295 = -1.*t12018;
  t12297 = 1. + t12295;
  t12299 = 0.28121*t12297;
  t12306 = t12018*t12271;
  t12307 = -0.305*t12047*t12052;
  t12315 = t12299 + t12306 + t12307;
  t12258 = 0.28121*t12047;
  t12273 = -1.*t12271*t12047;
  t12278 = -0.305*t12018*t12052;
  t12280 = t12258 + t12273 + t12278;
  t12291 = 0.15121*t12290;
  t12317 = t12072*t12315;
  t12319 = t12291 + t12317;
  t12320 = t9661*t12319;
  t12321 = -0.15121*t12290;
  t12322 = -0.15121*t12072;
  t12334 = -0.15121*t11805;
  t12335 = t11805*t12315;
  t12336 = t12321 + t12322 + t12334 + t12335;
  t12337 = -1.*t12336*t12073;
  t12345 = t12320 + t12337;
  t12351 = t12280*t12159;
  t12352 = t12083*t12345;
  t12353 = t12351 + t12352;
  t12281 = -1.*t12280*t12159;
  t12346 = -1.*t12083*t12345;
  t12347 = t12281 + t12346;
  t12365 = t12083*t12280;
  t12366 = -1.*t12159*t12345;
  t12367 = t12365 + t12366;
  t12254 = t12065*t12159;
  t12256 = t12083*t12224;
  t12257 = t12254 + t12256;
  t12357 = t9661*t12336;
  t12358 = t12319*t12073;
  t12359 = t12357 + t12358;
  t12374 = -1.*t12065*t12159;
  t12375 = -1.*t12083*t12224;
  t12377 = t12374 + t12375;
  t12395 = t12088*t12159;
  t12397 = t12083*t12163;
  t12398 = t12395 + t12397;
  t12511 = -1.*t9661*t11805*t12065;
  t12514 = -1.*t12072*t12065*t12073;
  t12527 = t12511 + t12514;
  t12363 = -1.*t12196*t12359;
  t12577 = -1.*t9661*t12336;
  t12578 = -1.*t12319*t12073;
  t12583 = t12577 + t12578;
  t12382 = t12212*t12359;
  t12599 = -1.*t9661*t11805*t12208;
  t12600 = -1.*t12072*t12208*t12073;
  t12602 = t12599 + t12600;
  t12364 = -1.*t12083*t12186*t12353;
  t12368 = t12159*t12186*t12367;
  t12369 = t12363 + t12364 + t12368;
  t12588 = -1.*t12186*t12359;
  t12589 = -1.*t12196*t12345;
  t12590 = -1.*t12072*t9661;
  t12591 = t11805*t12073;
  t12592 = t12590 + t12591;
  t12597 = t12224*t12359;
  t12604 = t12212*t12345;
  t12383 = t12257*t12353;
  t12384 = t12227*t12367;
  t12385 = t12382 + t12383 + t12384;
  t12414 = -1.*t12212*t12359;
  t12433 = t12076*t12359;
  t12672 = -1.*t12224*t12359;
  t12676 = -1.*t12212*t12345;
  t12691 = t12163*t12359;
  t12695 = t12076*t12345;
  t12415 = -1.*t12257*t12353;
  t12417 = -1.*t12227*t12367;
  t12418 = t12414 + t12415 + t12417;
  t12434 = t12398*t12353;
  t12435 = t12167*t12367;
  t12436 = t12433 + t12434 + t12435;
  t12472 = t12196*t12359;
  t12496 = -1.*t12076*t12359;
  t12473 = t12083*t12186*t12353;
  t12476 = -1.*t12159*t12186*t12367;
  t12477 = t12472 + t12473 + t12476;
  t12622 = Power(t12083,2);
  t12625 = Power(t12159,2);
  t12739 = t12186*t12359;
  t12740 = t12196*t12345;
  t12745 = -1.*t12163*t12359;
  t12747 = -1.*t12076*t12345;
  t12497 = -1.*t12398*t12353;
  t12501 = -1.*t12167*t12367;
  t12503 = t12496 + t12497 + t12501;
  t12528 = var2[0]*t12083*t12527;
  t12541 = t2411*t12159*t12527;
  t12544 = t12078*t12163;
  t12550 = t12541 + t12544;
  t12552 = var2[1]*t12550;
  t12553 = -1.*t12078*t12159*t12527;
  t12554 = t2411*t12163;
  t12559 = t12553 + t12554;
  t12560 = var2[2]*t12559;
  t12561 = -1.*t12186*t12345;
  t12572 = t12363 + t12561;
  t12576 = t12224*t12572;
  t12820 = 0.15121*t11805;
  t12824 = -1.*t11805*t12315;
  t12829 = t12820 + t12824;
  t12814 = t12322 + t12317;
  t12593 = -1.*t12592*t12345;
  t12846 = t9661*t12829;
  t12847 = -1.*t12814*t12073;
  t12848 = t12846 + t12847;
  t12851 = t9661*t12814;
  t12852 = t12829*t12073;
  t12853 = t12851 + t12852;
  t12603 = t12602*t12345;
  t12608 = t12280*t12065;
  t12609 = t12224*t12345;
  t12612 = t12608 + t12382 + t12609;
  t12614 = t12186*t12612;
  t12617 = t12083*t12602*t12369;
  t12854 = -1.*t12196*t12853;
  t12629 = -1.*t12083*t12592*t12353;
  t12630 = t12159*t12592*t12367;
  t12861 = t12212*t12853;
  t12642 = t12083*t12602*t12353;
  t12643 = -1.*t12159*t12602*t12367;
  t12655 = t12083*t12592*t12385;
  t12660 = var2[0]*t12083*t12592;
  t12661 = t2411*t12186;
  t12662 = -1.*t12078*t12159*t12592;
  t12663 = t12661 + t12662;
  t12664 = var2[2]*t12663;
  t12666 = t12078*t12186;
  t12667 = t2411*t12159*t12592;
  t12668 = t12666 + t12667;
  t12670 = var2[1]*t12668;
  t12675 = -1.*t12602*t12345;
  t12683 = -1.*t12280*t12065;
  t12684 = -1.*t12224*t12345;
  t12685 = t12683 + t12414 + t12684;
  t12686 = t12163*t12685;
  t12694 = t12527*t12345;
  t12698 = t12280*t12088;
  t12700 = t12163*t12345;
  t12701 = t12698 + t12433 + t12700;
  t12702 = t12224*t12701;
  t12950 = -1.*t12212*t12853;
  t12710 = -1.*t12083*t12602*t12353;
  t12711 = t12159*t12602*t12367;
  t12955 = t12076*t12853;
  t12716 = t12083*t12527*t12353;
  t12717 = -1.*t12159*t12527*t12367;
  t12720 = t12083*t12527*t12418;
  t12721 = t12083*t12602*t12436;
  t12725 = var2[0]*t12083*t12602;
  t12726 = t2411*t12159*t12602;
  t12727 = t12078*t12224;
  t12729 = t12726 + t12727;
  t12730 = var2[1]*t12729;
  t12731 = -1.*t12078*t12159*t12602;
  t12732 = t2411*t12224;
  t12733 = t12731 + t12732;
  t12734 = var2[2]*t12733;
  t12735 = t12186*t12345;
  t12736 = t12472 + t12735;
  t12737 = t12163*t12736;
  t12741 = t12592*t12345;
  t12746 = -1.*t12527*t12345;
  t12751 = -1.*t12280*t12088;
  t12752 = -1.*t12163*t12345;
  t12753 = t12751 + t12496 + t12752;
  t12754 = t12186*t12753;
  t12758 = t12083*t12527*t12477;
  t13034 = t12196*t12853;
  t12761 = t12083*t12592*t12353;
  t12762 = -1.*t12159*t12592*t12367;
  t13039 = -1.*t12076*t12853;
  t12772 = -1.*t12083*t12527*t12353;
  t12776 = t12159*t12527*t12367;
  t12794 = t12083*t12592*t12503;
  t13069 = -1.*t12018*t12042;
  t13070 = -1.*t12047*t12052;
  t13071 = t13069 + t13070;
  t13073 = t12072*t9661*t12088;
  t13074 = -1.*t11805*t12088*t12073;
  t13075 = t13073 + t13074;
  t13079 = t9661*t11805*t12088;
  t13080 = t12072*t12088*t12073;
  t13081 = t13079 + t13080;
  t13083 = t12083*t13071;
  t13084 = -1.*t12159*t13075;
  t13085 = t13083 + t13084;
  t13093 = t9661*t11805*t12280;
  t13094 = t12072*t12280*t12073;
  t13096 = t13093 + t13094;
  t13098 = t12072*t9661*t12280;
  t13102 = -1.*t11805*t12280*t12073;
  t13103 = t13098 + t13102;
  t13097 = -1.*t12196*t13096;
  t13134 = 0.28121*t12018;
  t13135 = -1.*t12018*t12271;
  t13143 = 0.305*t12047*t12052;
  t13145 = t13134 + t13135 + t13143;
  t13191 = t12212*t13096;
  t13197 = t13145*t12159;
  t13198 = t12083*t13103;
  t13199 = t13197 + t13198;
  t13201 = t12083*t13145;
  t13202 = -1.*t12159*t13103;
  t13203 = t13201 + t13202;
  t13224 = t12280*t13071;
  t13226 = t12088*t13145;
  t13256 = Power(t12072,2);
  t13259 = Power(t11805,2);
  t13244 = -1.*t13145*t12065;
  t13072 = t13071*t12159;
  t13076 = t12083*t13075;
  t13077 = t13072 + t13076;
  t13296 = t13096*t12076;
  t13298 = t13081*t12359;
  t13302 = -1.*t12212*t13096;
  t12174 = t12078*t12076;
  t12175 = -1.*t2411*t12167;
  t12177 = t12174 + t12175;
  t13385 = t12196*t13096;
  t13405 = -1.*t13096*t12076;
  t13407 = -1.*t13081*t12359;
  t13065 = t11805*t12319;
  t13066 = -1.*t12072*t12336;
  t13067 = t13065 + t13066;
  t12233 = t12078*t12212;
  t12234 = -1.*t2411*t12227;
  t12235 = t12233 + t12234;
  t13485 = -0.305*t12042*t12047;
  t13487 = 0.305*t12018*t12052;
  t13493 = t13485 + t13487;
  t13494 = t9661*t11805*t13493;
  t13495 = t12072*t13493*t12073;
  t13497 = t13494 + t13495;
  t13499 = t12072*t9661*t13493;
  t13511 = -1.*t11805*t13493*t12073;
  t13512 = t13499 + t13511;
  t13520 = t9661*t11805*t13071;
  t13522 = t12072*t13071*t12073;
  t13524 = t13520 + t13522;
  t13498 = -1.*t12196*t13497;
  t13529 = -0.305*t12018*t12042;
  t13530 = t13529 + t12307;
  t13547 = t12072*t9661*t13071;
  t13548 = -1.*t11805*t13071*t12073;
  t13549 = t13547 + t13548;
  t13535 = t12212*t13497;
  t13545 = t13524*t12359;
  t13565 = t13530*t12159;
  t13568 = t12083*t13512;
  t13569 = t13565 + t13568;
  t13577 = t12083*t13530;
  t13582 = -1.*t12159*t13512;
  t13583 = t13577 + t13582;
  t13587 = t12208*t12159;
  t13588 = t12083*t13549;
  t13590 = t13587 + t13588;
  t13219 = -1.*t12208*t12315;
  t13220 = t13219 + t12683;
  t13232 = t12315*t12065;
  t13234 = t12698 + t13232;
  t13240 = -1.*t12208*t12280;
  t13252 = -1.*t12072*t12208*t12319;
  t13253 = -1.*t11805*t12208*t12336;
  t13254 = t12683 + t13252 + t13253;
  t13647 = t12088*t13530;
  t13671 = -1.*t13530*t12065;
  t13276 = t12072*t12065*t12319;
  t13281 = t11805*t12065*t12336;
  t13282 = t12698 + t13276 + t13281;
  t13727 = t13497*t12076;
  t13741 = -1.*t12212*t13497;
  t13746 = -1.*t13524*t12359;
  t13607 = t12083*t12208;
  t13611 = -1.*t12159*t13549;
  t13612 = t13607 + t13611;
  t13344 = -0.15121*t13071;
  t13345 = -0.15121*t12065;
  t13347 = t13344 + t13345;
  t13348 = var2[12]*t13347;
  t13349 = -1.*t11805*t12319;
  t13354 = t12072*t12336;
  t13355 = t13349 + t13354;
  t13824 = t12196*t13497;
  t13835 = -1.*t13497*t12076;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t12078*t12167 - 1.*t12076*t2411)*var2[1] + t12177*var2[2];
  p_output1[10]=(t12078*t12159*t12186 - 1.*t12196*t2411)*var2[1] + (t12078*t12196 + t12159*t12186*t2411)*var2[2];
  p_output1[11]=(-1.*t12078*t12227 - 1.*t12212*t2411)*var2[1] + t12235*var2[2];
  p_output1[12]=t12167*var2[0] - 1.*t12245*t2411*var2[1] + t12078*t12245*var2[2] + (t12257*(t12159*t12186*t12347 + t12159*t12186*t12353) + t12227*t12369 + t12083*t12186*(t12227*t12347 + t12227*t12353 + t12257*t12367 + t12367*t12377) - 1.*t12159*t12186*t12385)*var2[3];
  p_output1[13]=-1.*t12159*t12186*var2[0] + t12083*t12186*t2411*var2[1] - 1.*t12078*t12083*t12186*var2[2] + ((-1.*t12227*t12347 - 1.*t12227*t12353 - 1.*t12257*t12367 - 1.*t12367*t12377)*t12398 + t12257*(t12167*t12347 + t12167*t12353 + t12245*t12367 + t12367*t12398) + t12167*t12418 + t12227*t12436)*var2[3];
  p_output1[14]=t12227*var2[0] - 1.*t12377*t2411*var2[1] + t12078*t12377*var2[2] + ((-1.*t12159*t12186*t12347 - 1.*t12159*t12186*t12353)*t12398 + t12083*t12186*(-1.*t12167*t12347 - 1.*t12167*t12353 - 1.*t12245*t12367 - 1.*t12367*t12398) + t12167*t12477 - 1.*t12159*t12186*t12503)*var2[3];
  p_output1[15]=t12528 + t12552 + t12560 + (t12617 + t12257*(t12588 + t12589 - 1.*t12186*t12583*t12622 - 1.*t12186*t12583*t12625 + t12629 + t12630) + t12083*t12186*(-1.*t12159*t12227*t12583 + t12083*t12257*t12583 + t12597 + t12604 + t12642 + t12643) + t12655)*var2[3] + (t12576 + t12212*(-1.*t12186*t12583 + t12588 + t12589 + t12593) + t12196*(t12224*t12583 + t12597 + t12603 + t12604) + t12614)*var2[4];
  p_output1[16]=t12660 + t12664 + t12670 + (t12398*(t12159*t12227*t12583 - 1.*t12083*t12257*t12583 + t12672 + t12676 + t12710 + t12711) + t12257*(-1.*t12159*t12167*t12583 + t12083*t12398*t12583 + t12691 + t12695 + t12716 + t12717) + t12720 + t12721)*var2[3] + (t12076*(-1.*t12224*t12583 + t12672 + t12675 + t12676) + t12686 + t12212*(t12163*t12583 + t12691 + t12694 + t12695) + t12702)*var2[4];
  p_output1[17]=t12725 + t12730 + t12734 + (t12758 + t12398*(t12186*t12583*t12622 + t12186*t12583*t12625 + t12739 + t12740 + t12761 + t12762) + t12083*t12186*(t12159*t12167*t12583 - 1.*t12083*t12398*t12583 + t12745 + t12747 + t12772 + t12776) + t12794)*var2[3] + (t12737 + t12076*(t12186*t12583 + t12739 + t12740 + t12741) + t12196*(-1.*t12163*t12583 + t12745 + t12746 + t12747) + t12754)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t12528 + t12552 + t12560 + (t12617 + t12655 + t12257*(t12588 + t12629 + t12630 - 1.*t12186*t12622*t12848 - 1.*t12186*t12625*t12848 + t12854) + t12083*t12186*(t12597 + t12642 + t12643 - 1.*t12159*t12227*t12848 + t12083*t12257*t12848 + t12861))*var2[3] + (t12576 + t12614 + t12212*(t12588 + t12593 - 1.*t12186*t12848 + t12854) + t12196*(t12597 + t12603 + t12224*t12848 + t12861))*var2[4] + t12065*(t12072*t12319 + t11805*t12336 - 1.*t12072*t12814 + t11805*t12829)*var2[5];
  p_output1[37]=t12660 + t12664 + t12670 + (t12720 + t12721 + t12398*(t12672 + t12710 + t12711 + t12159*t12227*t12848 - 1.*t12083*t12257*t12848 + t12950) + t12257*(t12691 + t12716 + t12717 - 1.*t12159*t12167*t12848 + t12083*t12398*t12848 + t12955))*var2[3] + (t12686 + t12702 + t12076*(t12672 + t12675 - 1.*t12224*t12848 + t12950) + t12212*(t12691 + t12694 + t12163*t12848 + t12955))*var2[4] + (t12065*(-1.*t11805*t12065*t12319 + t12065*t12072*t12336 + t11805*t12065*t12814 + t12065*t12072*t12829) + t12088*(t11805*t12208*t12319 - 1.*t12072*t12208*t12336 - 1.*t11805*t12208*t12814 - 1.*t12072*t12208*t12829))*var2[5];
  p_output1[38]=t12725 + t12730 + t12734 + (t12758 + t12794 + t12398*(t12739 + t12761 + t12762 + t12186*t12622*t12848 + t12186*t12625*t12848 + t13034) + t12083*t12186*(t12745 + t12772 + t12776 + t12159*t12167*t12848 - 1.*t12083*t12398*t12848 + t13039))*var2[3] + (t12737 + t12754 + t12076*(t12739 + t12741 + t12186*t12848 + t13034) + t12196*(t12745 + t12746 - 1.*t12163*t12848 + t13039))*var2[4] + t12088*(-1.*t12072*t12319 - 1.*t11805*t12336 + t12072*t12814 - 1.*t11805*t12829)*var2[5];
  p_output1[39]=t13077*var2[0] + (t12078*t13081 - 1.*t13085*t2411)*var2[1] + (t12078*t13085 + t13081*t2411)*var2[2] + (t12369*t12398 + t12257*(t13097 - 1.*t12083*t12186*t13199 + t12159*t12186*t13203) + t12083*t12186*(t12433 + t12434 + t12435 + t13191 + t12257*t13199 + t12227*t13203))*var2[3] + (t12076*t12572 + t12212*(t13097 - 1.*t12186*t13103) + t12196*(t12433 + t12698 + t12700 + t12224*t13103 + t12065*t13145 + t13191))*var2[4] + t12088*t13067*var2[5];
  p_output1[40]=(t12398*t12436 + t12418*t13077 + t12257*(t12353*t13077 + t12367*t13085 + t12398*t13199 + t12167*t13203 + t13296 + t13298) + t12398*(t12496 + t12497 + t12501 - 1.*t12257*t13199 - 1.*t12227*t13203 + t13302))*var2[3] + (t12076*t12701 + t12685*t13081 + t12212*(t12345*t13075 + t12163*t13103 + t13224 + t13226 + t13296 + t13298) + t12076*(t12496 + t12751 + t12752 - 1.*t12224*t13103 + t13244 + t13302))*var2[4] + (t13071*t13254 + t12065*(t12072*t12088*t12319 + t11805*t12088*t12336 + t13224 + t13226 + t12065*t12280*t13256 + t12065*t12280*t13259) + t12088*(-1.*t12065*t12072*t12319 - 1.*t11805*t12065*t12336 + t12751 + t13244 - 1.*t12208*t12280*t13256 - 1.*t12208*t12280*t13259) + t12088*t13282)*var2[5] + (t13071*t13220 + t12065*(t12088*t12315 + t12608 + t13224 + t13226) + t12088*t13234 + t12088*(-1.*t12065*t12315 + t12751 + t13240 + t13244))*var2[12];
  p_output1[41]=t13348 + t12398*var2[0] + t12177*var2[1] + (t12078*t12167 + t12076*t2411)*var2[2] + (t12477*t13077 + t12398*(t12083*t12186*t13199 - 1.*t12159*t12186*t13203 + t13385) + t12083*t12186*(-1.*t12353*t13077 - 1.*t12367*t13085 - 1.*t12398*t13199 - 1.*t12167*t13203 + t13405 + t13407))*var2[3] + (t12736*t13081 + t12076*(t12186*t13103 + t13385) + t12196*(-1.*t12280*t13071 - 1.*t12345*t13075 - 1.*t12163*t13103 - 1.*t12088*t13145 + t13405 + t13407))*var2[4] + t13071*t13355*var2[5];
  p_output1[42]=t12257*var2[0] + t12235*var2[1] + (t12078*t12227 + t12212*t2411)*var2[2] + (t12257*(t13498 - 1.*t12083*t12186*t13569 + t12159*t12186*t13583) + t12369*t13590 + t12083*t12186*(t13535 + t13545 + t12257*t13569 + t12227*t13583 + t12353*t13590 + t12367*t13612))*var2[3] + (t12212*(t13498 - 1.*t12186*t13512) + t12572*t13524 + t12196*(t12208*t12280 + t12224*t13512 + t12065*t13530 + t13535 + t13545 + t12345*t13549))*var2[4] + t12208*t13067*var2[5] + (0.28121*t12042 - 0.305*Power(t12042,2) - 1.*t12042*t12271)*var2[13];
  p_output1[43]=(t12257*t12418 + t12436*t13590 + t12257*(t12382 + t12383 + t12384 + t12398*t13569 + t12167*t13583 + t13727) + t12398*(-1.*t12257*t13569 - 1.*t12227*t13583 - 1.*t12353*t13590 - 1.*t12367*t13612 + t13741 + t13746))*var2[3] + (t12212*t12685 + t12701*t13524 + t12212*(t12382 + t12608 + t12609 + t12163*t13512 + t13647 + t13727) + t12076*(t13240 - 1.*t12224*t13512 - 1.*t12345*t13549 + t13671 + t13741 + t13746))*var2[4] + (t12065*t13254 + t12208*t13282 + t12065*(t12072*t12208*t12319 + t11805*t12208*t12336 + t12608 + t12065*t13256*t13493 + t12065*t13259*t13493 + t13647) + t12088*(-1.*t12072*t12319*t13071 - 1.*t11805*t12336*t13071 + t13240 - 1.*t12208*t13256*t13493 - 1.*t12208*t13259*t13493 + t13671))*var2[5] + (t12065*t13220 + t12208*t13234 + t12065*(t12208*t12315 + t12608 + t12065*t13493 + t13647) + t12088*(-1.*t12315*t13071 + t13240 - 1.*t12208*t13493 + t13671))*var2[12];
  p_output1[44]=t13348 + t13590*var2[0] + (t12078*t13524 - 1.*t13612*t2411)*var2[1] + (t12078*t13612 + t13524*t2411)*var2[2] + (t12257*t12477 + t12398*(t12083*t12186*t13569 - 1.*t12159*t12186*t13583 + t13824) + t12083*t12186*(t12414 + t12415 + t12417 - 1.*t12398*t13569 - 1.*t12167*t13583 + t13835))*var2[3] + (t12212*t12736 + t12076*(t12186*t13512 + t13824) + t12196*(t12414 + t12683 + t12684 - 1.*t12163*t13512 - 1.*t12088*t13530 + t13835))*var2[4] + t12065*t13355*var2[5] + (-0.28121*t12052 + 0.305*t12042*t12052 + t12052*t12271)*var2[13];
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

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
