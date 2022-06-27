/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:59 GMT+02:00
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
  double t813;
  double t14239;
  double t14612;
  double t19023;
  double t19057;
  double t19071;
  double t19072;
  double t19095;
  double t259;
  double t812;
  double t19099;
  double t19123;
  double t19073;
  double t19111;
  double t19115;
  double t102;
  double t19124;
  double t19125;
  double t19129;
  double t19130;
  double t19131;
  double t19132;
  double t19136;
  double t19137;
  double t19177;
  double t19183;
  double t19184;
  double t19195;
  double t19196;
  double t19198;
  double t19200;
  double t19201;
  double t19202;
  double t19214;
  double t19215;
  double t19216;
  double t19217;
  double t19218;
  double t19220;
  double t19222;
  double t19223;
  double t19226;
  double t19227;
  double t19228;
  double t19230;
  double t19239;
  double t19240;
  double t19241;
  double t19249;
  double t19250;
  double t19251;
  double t19252;
  double t19253;
  double t19258;
  double t19259;
  double t19260;
  double t19261;
  double t19262;
  double t19263;
  double t19264;
  double t19265;
  double t19266;
  double t19248;
  double t19254;
  double t19255;
  double t19256;
  double t19267;
  double t19268;
  double t19269;
  double t19270;
  double t19271;
  double t19272;
  double t19273;
  double t19274;
  double t19275;
  double t19279;
  double t19280;
  double t19281;
  double t19257;
  double t19276;
  double t19277;
  double t19290;
  double t19291;
  double t19292;
  double t19245;
  double t19246;
  double t19247;
  double t19285;
  double t19286;
  double t19287;
  double t19298;
  double t19299;
  double t19300;
  double t19316;
  double t19317;
  double t19318;
  double t19370;
  double t19371;
  double t19372;
  double t19288;
  double t19385;
  double t19386;
  double t19387;
  double t19305;
  double t19399;
  double t19400;
  double t19401;
  double t19289;
  double t19293;
  double t19294;
  double t19389;
  double t19390;
  double t19391;
  double t19392;
  double t19393;
  double t19398;
  double t19403;
  double t19306;
  double t19307;
  double t19308;
  double t19325;
  double t19336;
  double t19442;
  double t19444;
  double t19452;
  double t19454;
  double t19326;
  double t19327;
  double t19328;
  double t19337;
  double t19338;
  double t19339;
  double t19351;
  double t19362;
  double t19352;
  double t19353;
  double t19354;
  double t19413;
  double t19415;
  double t19494;
  double t19495;
  double t19500;
  double t19502;
  double t19363;
  double t19364;
  double t19365;
  double t19373;
  double t19374;
  double t19375;
  double t19376;
  double t19377;
  double t19378;
  double t19379;
  double t19380;
  double t19381;
  double t19382;
  double t19383;
  double t19384;
  double t19529;
  double t19530;
  double t19532;
  double t19533;
  double t19534;
  double t19394;
  double t19539;
  double t19540;
  double t19541;
  double t19543;
  double t19544;
  double t19545;
  double t19402;
  double t19406;
  double t19407;
  double t19408;
  double t19409;
  double t19412;
  double t19546;
  double t19417;
  double t19418;
  double t19550;
  double t19423;
  double t19424;
  double t19427;
  double t19431;
  double t19432;
  double t19434;
  double t19435;
  double t19436;
  double t19437;
  double t19438;
  double t19439;
  double t19440;
  double t19443;
  double t19447;
  double t19448;
  double t19449;
  double t19450;
  double t19453;
  double t19458;
  double t19459;
  double t19460;
  double t19461;
  double t19581;
  double t19466;
  double t19467;
  double t19585;
  double t19472;
  double t19473;
  double t19476;
  double t19477;
  double t19481;
  double t19482;
  double t19483;
  double t19484;
  double t19485;
  double t19486;
  double t19487;
  double t19488;
  double t19489;
  double t19490;
  double t19491;
  double t19492;
  double t19496;
  double t19501;
  double t19505;
  double t19506;
  double t19507;
  double t19508;
  double t19511;
  double t19608;
  double t19514;
  double t19515;
  double t19612;
  double t19520;
  double t19521;
  double t19524;
  double t19628;
  double t19629;
  double t19630;
  double t19632;
  double t19633;
  double t19634;
  double t19642;
  double t19643;
  double t19644;
  double t19646;
  double t19647;
  double t19648;
  double t19656;
  double t19657;
  double t19658;
  double t19660;
  double t19661;
  double t19662;
  double t19659;
  double t19667;
  double t19668;
  double t19669;
  double t19670;
  double t19672;
  double t19678;
  double t19679;
  double t19680;
  double t19682;
  double t19683;
  double t19684;
  double t19699;
  double t19701;
  double t19720;
  double t19722;
  double t19709;
  double t19631;
  double t19635;
  double t19636;
  double t19741;
  double t19743;
  double t19747;
  double t19189;
  double t19190;
  double t19191;
  double t19784;
  double t19791;
  double t19793;
  double t19638;
  double t19639;
  double t19640;
  double t19234;
  double t19235;
  double t19236;
  double t19826;
  double t19827;
  double t19828;
  double t19829;
  double t19830;
  double t19831;
  double t19833;
  double t19834;
  double t19835;
  double t19839;
  double t19840;
  double t19841;
  double t19832;
  double t19844;
  double t19845;
  double t19850;
  double t19851;
  double t19852;
  double t19847;
  double t19858;
  double t19859;
  double t19860;
  double t19862;
  double t19863;
  double t19864;
  double t19849;
  double t19868;
  double t19869;
  double t19870;
  double t19696;
  double t19697;
  double t19704;
  double t19705;
  double t19707;
  double t19716;
  double t19717;
  double t19718;
  double t19886;
  double t19893;
  double t19734;
  double t19735;
  double t19736;
  double t19915;
  double t19919;
  double t19921;
  double t19875;
  double t19876;
  double t19877;
  double t19769;
  double t19770;
  double t19771;
  double t19772;
  double t19773;
  double t19774;
  double t19775;
  double t19958;
  double t19964;
  t813 = Cos(var1[7]);
  t14239 = Cos(var1[8]);
  t14612 = t813*t14239;
  t19023 = Sin(var1[7]);
  t19057 = Sin(var1[8]);
  t19071 = t19023*t19057;
  t19072 = t14612 + t19071;
  t19095 = Cos(var1[5]);
  t259 = Cos(var1[6]);
  t812 = Sin(var1[5]);
  t19099 = Sin(var1[6]);
  t19123 = Cos(var1[3]);
  t19073 = t259*t812*t19072;
  t19111 = t19095*t19099*t19072;
  t19115 = t19073 + t19111;
  t102 = Sin(var1[3]);
  t19124 = Cos(var1[4]);
  t19125 = -1.*t14239*t19023;
  t19129 = t813*t19057;
  t19130 = t19125 + t19129;
  t19131 = t19124*t19130;
  t19132 = Sin(var1[4]);
  t19136 = t19095*t259*t19072;
  t19137 = -1.*t812*t19099*t19072;
  t19177 = t19136 + t19137;
  t19183 = -1.*t19132*t19177;
  t19184 = t19131 + t19183;
  t19195 = -1.*t259*t812;
  t19196 = -1.*t19095*t19099;
  t19198 = t19195 + t19196;
  t19200 = t19095*t259;
  t19201 = -1.*t812*t19099;
  t19202 = t19200 + t19201;
  t19214 = t14239*t19023;
  t19215 = -1.*t813*t19057;
  t19216 = t19214 + t19215;
  t19217 = t259*t812*t19216;
  t19218 = t19095*t19099*t19216;
  t19220 = t19217 + t19218;
  t19222 = t19124*t19072;
  t19223 = t19095*t259*t19216;
  t19226 = -1.*t812*t19099*t19216;
  t19227 = t19223 + t19226;
  t19228 = -1.*t19132*t19227;
  t19230 = t19222 + t19228;
  t19239 = -1.*t19132*t19130;
  t19240 = -1.*t19124*t19177;
  t19241 = t19239 + t19240;
  t19249 = -1.*t14239;
  t19250 = 1. + t19249;
  t19251 = 0.50321*t19250;
  t19252 = 0.19821*t14239;
  t19253 = t19251 + t19252;
  t19258 = -1.*t259;
  t19259 = 1. + t19258;
  t19260 = 0.15121*t19259;
  t19261 = -1.*t813;
  t19262 = 1. + t19261;
  t19263 = 0.28121*t19262;
  t19264 = t813*t19253;
  t19265 = -0.305*t19023*t19057;
  t19266 = t19263 + t19264 + t19265;
  t19248 = 0.28121*t19023;
  t19254 = -1.*t19253*t19023;
  t19255 = -0.305*t813*t19057;
  t19256 = t19248 + t19254 + t19255;
  t19267 = t259*t19266;
  t19268 = t19260 + t19267;
  t19269 = t19095*t19268;
  t19270 = 0.15121*t259;
  t19271 = -0.15121*t19099;
  t19272 = t19099*t19266;
  t19273 = t19260 + t19270 + t19271 + t19272;
  t19274 = -1.*t812*t19273;
  t19275 = t19269 + t19274;
  t19279 = t19132*t19256;
  t19280 = t19124*t19275;
  t19281 = t19279 + t19280;
  t19257 = -1.*t19132*t19256;
  t19276 = -1.*t19124*t19275;
  t19277 = t19257 + t19276;
  t19290 = t19124*t19256;
  t19291 = -1.*t19132*t19275;
  t19292 = t19290 + t19291;
  t19245 = t19132*t19072;
  t19246 = t19124*t19227;
  t19247 = t19245 + t19246;
  t19285 = t812*t19268;
  t19286 = t19095*t19273;
  t19287 = t19285 + t19286;
  t19298 = -1.*t19132*t19072;
  t19299 = -1.*t19124*t19227;
  t19300 = t19298 + t19299;
  t19316 = t19132*t19130;
  t19317 = t19124*t19177;
  t19318 = t19316 + t19317;
  t19370 = -1.*t259*t812*t19072;
  t19371 = -1.*t19095*t19099*t19072;
  t19372 = t19370 + t19371;
  t19288 = -1.*t19202*t19287;
  t19385 = -1.*t812*t19268;
  t19386 = -1.*t19095*t19273;
  t19387 = t19385 + t19386;
  t19305 = t19220*t19287;
  t19399 = -1.*t259*t812*t19216;
  t19400 = -1.*t19095*t19099*t19216;
  t19401 = t19399 + t19400;
  t19289 = -1.*t19124*t19198*t19281;
  t19293 = t19132*t19198*t19292;
  t19294 = t19288 + t19289 + t19293;
  t19389 = -1.*t19198*t19287;
  t19390 = -1.*t19202*t19275;
  t19391 = -1.*t19095*t259;
  t19392 = t812*t19099;
  t19393 = t19391 + t19392;
  t19398 = t19227*t19287;
  t19403 = t19220*t19275;
  t19306 = t19247*t19281;
  t19307 = t19230*t19292;
  t19308 = t19305 + t19306 + t19307;
  t19325 = -1.*t19220*t19287;
  t19336 = t19115*t19287;
  t19442 = -1.*t19227*t19287;
  t19444 = -1.*t19220*t19275;
  t19452 = t19177*t19287;
  t19454 = t19115*t19275;
  t19326 = -1.*t19247*t19281;
  t19327 = -1.*t19230*t19292;
  t19328 = t19325 + t19326 + t19327;
  t19337 = t19318*t19281;
  t19338 = t19184*t19292;
  t19339 = t19336 + t19337 + t19338;
  t19351 = t19202*t19287;
  t19362 = -1.*t19115*t19287;
  t19352 = t19124*t19198*t19281;
  t19353 = -1.*t19132*t19198*t19292;
  t19354 = t19351 + t19352 + t19353;
  t19413 = Power(t19124,2);
  t19415 = Power(t19132,2);
  t19494 = t19198*t19287;
  t19495 = t19202*t19275;
  t19500 = -1.*t19177*t19287;
  t19502 = -1.*t19115*t19275;
  t19363 = -1.*t19318*t19281;
  t19364 = -1.*t19184*t19292;
  t19365 = t19362 + t19363 + t19364;
  t19373 = var2[0]*t19124*t19372;
  t19374 = t102*t19132*t19372;
  t19375 = t19123*t19177;
  t19376 = t19374 + t19375;
  t19377 = var2[1]*t19376;
  t19378 = -1.*t19123*t19132*t19372;
  t19379 = t102*t19177;
  t19380 = t19378 + t19379;
  t19381 = var2[2]*t19380;
  t19382 = -1.*t19198*t19275;
  t19383 = t19288 + t19382;
  t19384 = t19227*t19383;
  t19529 = -0.15121*t259;
  t19530 = t19529 + t19267;
  t19532 = 0.15121*t19099;
  t19533 = -1.*t19099*t19266;
  t19534 = t19532 + t19533;
  t19394 = -1.*t19393*t19275;
  t19539 = -1.*t812*t19530;
  t19540 = t19095*t19534;
  t19541 = t19539 + t19540;
  t19543 = t19095*t19530;
  t19544 = t812*t19534;
  t19545 = t19543 + t19544;
  t19402 = t19401*t19275;
  t19406 = t19256*t19072;
  t19407 = t19227*t19275;
  t19408 = t19406 + t19305 + t19407;
  t19409 = t19198*t19408;
  t19412 = t19124*t19401*t19294;
  t19546 = -1.*t19202*t19545;
  t19417 = -1.*t19124*t19393*t19281;
  t19418 = t19132*t19393*t19292;
  t19550 = t19220*t19545;
  t19423 = t19124*t19401*t19281;
  t19424 = -1.*t19132*t19401*t19292;
  t19427 = t19124*t19393*t19308;
  t19431 = var2[0]*t19124*t19393;
  t19432 = t102*t19198;
  t19434 = -1.*t19123*t19132*t19393;
  t19435 = t19432 + t19434;
  t19436 = var2[2]*t19435;
  t19437 = t19123*t19198;
  t19438 = t102*t19132*t19393;
  t19439 = t19437 + t19438;
  t19440 = var2[1]*t19439;
  t19443 = -1.*t19401*t19275;
  t19447 = -1.*t19256*t19072;
  t19448 = -1.*t19227*t19275;
  t19449 = t19447 + t19325 + t19448;
  t19450 = t19177*t19449;
  t19453 = t19372*t19275;
  t19458 = t19256*t19130;
  t19459 = t19177*t19275;
  t19460 = t19458 + t19336 + t19459;
  t19461 = t19227*t19460;
  t19581 = -1.*t19220*t19545;
  t19466 = -1.*t19124*t19401*t19281;
  t19467 = t19132*t19401*t19292;
  t19585 = t19115*t19545;
  t19472 = t19124*t19372*t19281;
  t19473 = -1.*t19132*t19372*t19292;
  t19476 = t19124*t19372*t19328;
  t19477 = t19124*t19401*t19339;
  t19481 = var2[0]*t19124*t19401;
  t19482 = t102*t19132*t19401;
  t19483 = t19123*t19227;
  t19484 = t19482 + t19483;
  t19485 = var2[1]*t19484;
  t19486 = -1.*t19123*t19132*t19401;
  t19487 = t102*t19227;
  t19488 = t19486 + t19487;
  t19489 = var2[2]*t19488;
  t19490 = t19198*t19275;
  t19491 = t19351 + t19490;
  t19492 = t19177*t19491;
  t19496 = t19393*t19275;
  t19501 = -1.*t19372*t19275;
  t19505 = -1.*t19256*t19130;
  t19506 = -1.*t19177*t19275;
  t19507 = t19505 + t19362 + t19506;
  t19508 = t19198*t19507;
  t19511 = t19124*t19372*t19354;
  t19608 = t19202*t19545;
  t19514 = t19124*t19393*t19281;
  t19515 = -1.*t19132*t19393*t19292;
  t19612 = -1.*t19115*t19545;
  t19520 = -1.*t19124*t19372*t19281;
  t19521 = t19132*t19372*t19292;
  t19524 = t19124*t19393*t19365;
  t19628 = -1.*t813*t14239;
  t19629 = -1.*t19023*t19057;
  t19630 = t19628 + t19629;
  t19632 = t19095*t259*t19130;
  t19633 = -1.*t812*t19099*t19130;
  t19634 = t19632 + t19633;
  t19642 = t259*t812*t19130;
  t19643 = t19095*t19099*t19130;
  t19644 = t19642 + t19643;
  t19646 = t19124*t19630;
  t19647 = -1.*t19132*t19634;
  t19648 = t19646 + t19647;
  t19656 = t259*t812*t19256;
  t19657 = t19095*t19099*t19256;
  t19658 = t19656 + t19657;
  t19660 = t19095*t259*t19256;
  t19661 = -1.*t812*t19099*t19256;
  t19662 = t19660 + t19661;
  t19659 = -1.*t19202*t19658;
  t19667 = 0.28121*t813;
  t19668 = -1.*t813*t19253;
  t19669 = 0.305*t19023*t19057;
  t19670 = t19667 + t19668 + t19669;
  t19672 = t19220*t19658;
  t19678 = t19132*t19670;
  t19679 = t19124*t19662;
  t19680 = t19678 + t19679;
  t19682 = t19124*t19670;
  t19683 = -1.*t19132*t19662;
  t19684 = t19682 + t19683;
  t19699 = t19256*t19630;
  t19701 = t19130*t19670;
  t19720 = Power(t259,2);
  t19722 = Power(t19099,2);
  t19709 = -1.*t19670*t19072;
  t19631 = t19132*t19630;
  t19635 = t19124*t19634;
  t19636 = t19631 + t19635;
  t19741 = t19658*t19115;
  t19743 = t19644*t19287;
  t19747 = -1.*t19220*t19658;
  t19189 = t19123*t19115;
  t19190 = -1.*t102*t19184;
  t19191 = t19189 + t19190;
  t19784 = t19202*t19658;
  t19791 = -1.*t19658*t19115;
  t19793 = -1.*t19644*t19287;
  t19638 = t19099*t19268;
  t19639 = -1.*t259*t19273;
  t19640 = t19638 + t19639;
  t19234 = t19123*t19220;
  t19235 = -1.*t102*t19230;
  t19236 = t19234 + t19235;
  t19826 = -0.305*t14239*t19023;
  t19827 = 0.305*t813*t19057;
  t19828 = t19826 + t19827;
  t19829 = t259*t812*t19828;
  t19830 = t19095*t19099*t19828;
  t19831 = t19829 + t19830;
  t19833 = t19095*t259*t19828;
  t19834 = -1.*t812*t19099*t19828;
  t19835 = t19833 + t19834;
  t19839 = t259*t812*t19630;
  t19840 = t19095*t19099*t19630;
  t19841 = t19839 + t19840;
  t19832 = -1.*t19202*t19831;
  t19844 = -0.305*t813*t14239;
  t19845 = t19844 + t19265;
  t19850 = t19095*t259*t19630;
  t19851 = -1.*t812*t19099*t19630;
  t19852 = t19850 + t19851;
  t19847 = t19220*t19831;
  t19858 = t19132*t19845;
  t19859 = t19124*t19835;
  t19860 = t19858 + t19859;
  t19862 = t19124*t19845;
  t19863 = -1.*t19132*t19835;
  t19864 = t19862 + t19863;
  t19849 = t19841*t19287;
  t19868 = t19132*t19216;
  t19869 = t19124*t19852;
  t19870 = t19868 + t19869;
  t19696 = -1.*t19216*t19266;
  t19697 = t19696 + t19447;
  t19704 = t19266*t19072;
  t19705 = t19458 + t19704;
  t19707 = -1.*t19216*t19256;
  t19716 = -1.*t259*t19216*t19268;
  t19717 = -1.*t19099*t19216*t19273;
  t19718 = t19447 + t19716 + t19717;
  t19886 = t19130*t19845;
  t19893 = -1.*t19845*t19072;
  t19734 = t259*t19072*t19268;
  t19735 = t19099*t19072*t19273;
  t19736 = t19458 + t19734 + t19735;
  t19915 = t19831*t19115;
  t19919 = -1.*t19220*t19831;
  t19921 = -1.*t19841*t19287;
  t19875 = t19124*t19216;
  t19876 = -1.*t19132*t19852;
  t19877 = t19875 + t19876;
  t19769 = 0.15121*t19630;
  t19770 = 0.15121*t19072;
  t19771 = t19769 + t19770;
  t19772 = var2[6]*t19771;
  t19773 = -1.*t19099*t19268;
  t19774 = t259*t19273;
  t19775 = t19773 + t19774;
  t19958 = t19202*t19831;
  t19964 = -1.*t19831*t19115;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t102*t19115 - 1.*t19123*t19184)*var2[1] + t19191*var2[2];
  p_output1[10]=(t19123*t19132*t19198 - 1.*t102*t19202)*var2[1] + (t102*t19132*t19198 + t19123*t19202)*var2[2];
  p_output1[11]=(-1.*t102*t19220 - 1.*t19123*t19230)*var2[1] + t19236*var2[2];
  p_output1[12]=t19184*var2[0] - 1.*t102*t19241*var2[1] + t19123*t19241*var2[2] + (t19247*(t19132*t19198*t19277 + t19132*t19198*t19281) + t19230*t19294 + t19124*t19198*(t19230*t19277 + t19230*t19281 + t19247*t19292 + t19292*t19300) - 1.*t19132*t19198*t19308)*var2[3];
  p_output1[13]=-1.*t19132*t19198*var2[0] + t102*t19124*t19198*var2[1] - 1.*t19123*t19124*t19198*var2[2] + ((-1.*t19230*t19277 - 1.*t19230*t19281 - 1.*t19247*t19292 - 1.*t19292*t19300)*t19318 + t19247*(t19184*t19277 + t19184*t19281 + t19241*t19292 + t19292*t19318) + t19184*t19328 + t19230*t19339)*var2[3];
  p_output1[14]=t19230*var2[0] - 1.*t102*t19300*var2[1] + t19123*t19300*var2[2] + ((-1.*t19132*t19198*t19277 - 1.*t19132*t19198*t19281)*t19318 + t19124*t19198*(-1.*t19184*t19277 - 1.*t19184*t19281 - 1.*t19241*t19292 - 1.*t19292*t19318) + t19184*t19354 - 1.*t19132*t19198*t19365)*var2[3];
  p_output1[15]=t19373 + t19377 + t19381 + (t19412 + t19247*(t19389 + t19390 - 1.*t19198*t19387*t19413 - 1.*t19198*t19387*t19415 + t19417 + t19418) + t19124*t19198*(-1.*t19132*t19230*t19387 + t19124*t19247*t19387 + t19398 + t19403 + t19423 + t19424) + t19427)*var2[3] + (t19384 + t19220*(-1.*t19198*t19387 + t19389 + t19390 + t19394) + t19202*(t19227*t19387 + t19398 + t19402 + t19403) + t19409)*var2[4];
  p_output1[16]=t19431 + t19436 + t19440 + (t19318*(t19132*t19230*t19387 - 1.*t19124*t19247*t19387 + t19442 + t19444 + t19466 + t19467) + t19247*(-1.*t19132*t19184*t19387 + t19124*t19318*t19387 + t19452 + t19454 + t19472 + t19473) + t19476 + t19477)*var2[3] + (t19115*(-1.*t19227*t19387 + t19442 + t19443 + t19444) + t19450 + t19220*(t19177*t19387 + t19452 + t19453 + t19454) + t19461)*var2[4];
  p_output1[17]=t19481 + t19485 + t19489 + (t19511 + t19318*(t19198*t19387*t19413 + t19198*t19387*t19415 + t19494 + t19495 + t19514 + t19515) + t19124*t19198*(t19132*t19184*t19387 - 1.*t19124*t19318*t19387 + t19500 + t19502 + t19520 + t19521) + t19524)*var2[3] + (t19492 + t19115*(t19198*t19387 + t19494 + t19495 + t19496) + t19202*(-1.*t19177*t19387 + t19500 + t19501 + t19502) + t19508)*var2[4];
  p_output1[18]=t19373 + t19377 + t19381 + (t19412 + t19427 + t19247*(t19389 + t19417 + t19418 - 1.*t19198*t19413*t19541 - 1.*t19198*t19415*t19541 + t19546) + t19124*t19198*(t19398 + t19423 + t19424 - 1.*t19132*t19230*t19541 + t19124*t19247*t19541 + t19550))*var2[3] + (t19384 + t19409 + t19220*(t19389 + t19394 - 1.*t19198*t19541 + t19546) + t19202*(t19398 + t19402 + t19227*t19541 + t19550))*var2[4] + t19072*(t19099*t19273 + t19099*t19534 + t19268*t259 - 1.*t19530*t259)*var2[5];
  p_output1[19]=t19431 + t19436 + t19440 + (t19476 + t19477 + t19318*(t19442 + t19466 + t19467 + t19132*t19230*t19541 - 1.*t19124*t19247*t19541 + t19581) + t19247*(t19452 + t19472 + t19473 - 1.*t19132*t19184*t19541 + t19124*t19318*t19541 + t19585))*var2[3] + (t19450 + t19461 + t19115*(t19442 + t19443 - 1.*t19227*t19541 + t19581) + t19220*(t19452 + t19453 + t19177*t19541 + t19585))*var2[4] + (t19072*(-1.*t19072*t19099*t19268 + t19072*t19099*t19530 + t19072*t19273*t259 + t19072*t19534*t259) + t19130*(t19099*t19216*t19268 - 1.*t19099*t19216*t19530 - 1.*t19216*t19273*t259 - 1.*t19216*t19534*t259))*var2[5];
  p_output1[20]=t19481 + t19485 + t19489 + (t19511 + t19524 + t19318*(t19494 + t19514 + t19515 + t19198*t19413*t19541 + t19198*t19415*t19541 + t19608) + t19124*t19198*(t19500 + t19520 + t19521 + t19132*t19184*t19541 - 1.*t19124*t19318*t19541 + t19612))*var2[3] + (t19492 + t19508 + t19115*(t19494 + t19496 + t19198*t19541 + t19608) + t19202*(t19500 + t19501 - 1.*t19177*t19541 + t19612))*var2[4] + t19130*(-1.*t19099*t19273 - 1.*t19099*t19534 - 1.*t19268*t259 + t19530*t259)*var2[5];
  p_output1[21]=t19636*var2[0] + (t19123*t19644 - 1.*t102*t19648)*var2[1] + (t102*t19644 + t19123*t19648)*var2[2] + (t19294*t19318 + t19247*(t19659 - 1.*t19124*t19198*t19680 + t19132*t19198*t19684) + t19124*t19198*(t19336 + t19337 + t19338 + t19672 + t19247*t19680 + t19230*t19684))*var2[3] + (t19115*t19383 + t19220*(t19659 - 1.*t19198*t19662) + t19202*(t19336 + t19458 + t19459 + t19227*t19662 + t19072*t19670 + t19672))*var2[4] + t19130*t19640*var2[5];
  p_output1[22]=(t19318*t19339 + t19328*t19636 + t19247*(t19281*t19636 + t19292*t19648 + t19318*t19680 + t19184*t19684 + t19741 + t19743) + t19318*(t19362 + t19363 + t19364 - 1.*t19247*t19680 - 1.*t19230*t19684 + t19747))*var2[3] + (t19115*t19460 + t19449*t19644 + t19220*(t19275*t19634 + t19177*t19662 + t19699 + t19701 + t19741 + t19743) + t19115*(t19362 + t19505 + t19506 - 1.*t19227*t19662 + t19709 + t19747))*var2[4] + (t19630*t19718 + t19130*t19736 + t19130*(-1.*t19072*t19099*t19273 + t19505 + t19709 - 1.*t19216*t19256*t19720 - 1.*t19216*t19256*t19722 - 1.*t19072*t19268*t259) + t19072*(t19099*t19130*t19273 + t19699 + t19701 + t19072*t19256*t19720 + t19072*t19256*t19722 + t19130*t19268*t259))*var2[5] + (t19630*t19697 + t19072*(t19130*t19266 + t19406 + t19699 + t19701) + t19130*t19705 + t19130*(-1.*t19072*t19266 + t19505 + t19707 + t19709))*var2[6];
  p_output1[23]=t19772 + t19318*var2[0] + t19191*var2[1] + (t102*t19115 + t19123*t19184)*var2[2] + (t19354*t19636 + t19318*(t19124*t19198*t19680 - 1.*t19132*t19198*t19684 + t19784) + t19124*t19198*(-1.*t19281*t19636 - 1.*t19292*t19648 - 1.*t19318*t19680 - 1.*t19184*t19684 + t19791 + t19793))*var2[3] + (t19491*t19644 + t19115*(t19198*t19662 + t19784) + t19202*(-1.*t19256*t19630 - 1.*t19275*t19634 - 1.*t19177*t19662 - 1.*t19130*t19670 + t19791 + t19793))*var2[4] + t19630*t19775*var2[5];
  p_output1[24]=t19247*var2[0] + t19236*var2[1] + (t102*t19220 + t19123*t19230)*var2[2] + (t19247*(t19832 - 1.*t19124*t19198*t19860 + t19132*t19198*t19864) + t19294*t19870 + t19124*t19198*(t19847 + t19849 + t19247*t19860 + t19230*t19864 + t19281*t19870 + t19292*t19877))*var2[3] + (t19220*(t19832 - 1.*t19198*t19835) + t19383*t19841 + t19202*(t19216*t19256 + t19227*t19835 + t19072*t19845 + t19847 + t19849 + t19275*t19852))*var2[4] + t19216*t19640*var2[5] + (0.28121*t14239 - 0.305*Power(t14239,2) - 1.*t14239*t19253)*var2[7];
  p_output1[25]=(t19247*t19328 + t19339*t19870 + t19247*(t19305 + t19306 + t19307 + t19318*t19860 + t19184*t19864 + t19915) + t19318*(-1.*t19247*t19860 - 1.*t19230*t19864 - 1.*t19281*t19870 - 1.*t19292*t19877 + t19919 + t19921))*var2[3] + (t19220*t19449 + t19460*t19841 + t19220*(t19305 + t19406 + t19407 + t19177*t19835 + t19886 + t19915) + t19115*(t19707 - 1.*t19227*t19835 - 1.*t19275*t19852 + t19893 + t19919 + t19921))*var2[4] + (t19072*t19718 + t19216*t19736 + t19072*(t19099*t19216*t19273 + t19406 + t19072*t19720*t19828 + t19072*t19722*t19828 + t19886 + t19216*t19268*t259) + t19130*(-1.*t19099*t19273*t19630 + t19707 - 1.*t19216*t19720*t19828 - 1.*t19216*t19722*t19828 + t19893 - 1.*t19268*t19630*t259))*var2[5] + (t19072*t19697 + t19216*t19705 + t19072*(t19216*t19266 + t19406 + t19072*t19828 + t19886) + t19130*(-1.*t19266*t19630 + t19707 - 1.*t19216*t19828 + t19893))*var2[6];
  p_output1[26]=t19772 + t19870*var2[0] + (t19123*t19841 - 1.*t102*t19877)*var2[1] + (t102*t19841 + t19123*t19877)*var2[2] + (t19247*t19354 + t19318*(t19124*t19198*t19860 - 1.*t19132*t19198*t19864 + t19958) + t19124*t19198*(t19325 + t19326 + t19327 - 1.*t19318*t19860 - 1.*t19184*t19864 + t19964))*var2[3] + (t19220*t19491 + t19115*(t19198*t19835 + t19958) + t19202*(t19325 + t19447 + t19448 - 1.*t19177*t19835 - 1.*t19130*t19845 + t19964))*var2[4] + t19072*t19775*var2[5] + (-0.28121*t19057 + 0.305*t14239*t19057 + t19057*t19253)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
