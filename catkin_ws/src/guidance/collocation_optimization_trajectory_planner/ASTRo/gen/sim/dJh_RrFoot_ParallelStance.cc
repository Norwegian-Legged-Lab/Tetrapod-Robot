/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:47 GMT+02:00
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
  double t55869;
  double t55870;
  double t55871;
  double t55878;
  double t55880;
  double t55888;
  double t55892;
  double t55898;
  double t55729;
  double t55860;
  double t55899;
  double t55904;
  double t55897;
  double t55901;
  double t55902;
  double t30143;
  double t55905;
  double t55906;
  double t55907;
  double t56017;
  double t56029;
  double t56030;
  double t56031;
  double t56036;
  double t56037;
  double t56038;
  double t56041;
  double t56080;
  double t56081;
  double t56084;
  double t56088;
  double t56089;
  double t56093;
  double t56108;
  double t56109;
  double t56114;
  double t56122;
  double t56124;
  double t56125;
  double t56127;
  double t56128;
  double t56129;
  double t56132;
  double t56133;
  double t56134;
  double t56144;
  double t56145;
  double t56146;
  double t56155;
  double t56156;
  double t56157;
  double t56159;
  double t56160;
  double t56166;
  double t56167;
  double t56168;
  double t56169;
  double t56170;
  double t56171;
  double t56172;
  double t56173;
  double t56174;
  double t56154;
  double t56161;
  double t56163;
  double t56164;
  double t56176;
  double t56177;
  double t56178;
  double t56179;
  double t56180;
  double t56181;
  double t56182;
  double t56183;
  double t56184;
  double t56189;
  double t56191;
  double t56192;
  double t56165;
  double t56185;
  double t56187;
  double t56202;
  double t56203;
  double t56204;
  double t56151;
  double t56152;
  double t56153;
  double t56196;
  double t56197;
  double t56198;
  double t56229;
  double t56230;
  double t56231;
  double t56267;
  double t56268;
  double t56269;
  double t56344;
  double t56346;
  double t56347;
  double t56200;
  double t56369;
  double t56371;
  double t56372;
  double t56244;
  double t56387;
  double t56388;
  double t56389;
  double t56201;
  double t56205;
  double t56206;
  double t56374;
  double t56382;
  double t56375;
  double t56376;
  double t56378;
  double t56386;
  double t56391;
  double t56245;
  double t56246;
  double t56247;
  double t56277;
  double t56297;
  double t56464;
  double t56466;
  double t56478;
  double t56481;
  double t56278;
  double t56281;
  double t56283;
  double t56301;
  double t56303;
  double t56305;
  double t56321;
  double t56336;
  double t56322;
  double t56323;
  double t56326;
  double t56403;
  double t56405;
  double t56527;
  double t56529;
  double t56533;
  double t56535;
  double t56337;
  double t56338;
  double t56339;
  double t56348;
  double t56349;
  double t56350;
  double t56351;
  double t56352;
  double t56353;
  double t56361;
  double t56362;
  double t56363;
  double t56366;
  double t56367;
  double t56368;
  double t56570;
  double t56571;
  double t56573;
  double t56566;
  double t56567;
  double t56380;
  double t56579;
  double t56580;
  double t56581;
  double t56583;
  double t56584;
  double t56585;
  double t56390;
  double t56395;
  double t56396;
  double t56397;
  double t56398;
  double t56402;
  double t56586;
  double t56407;
  double t56408;
  double t56590;
  double t56413;
  double t56414;
  double t56428;
  double t56439;
  double t56445;
  double t56446;
  double t56447;
  double t56448;
  double t56449;
  double t56454;
  double t56458;
  double t56459;
  double t56465;
  double t56473;
  double t56474;
  double t56475;
  double t56476;
  double t56479;
  double t56485;
  double t56486;
  double t56487;
  double t56489;
  double t56625;
  double t56494;
  double t56495;
  double t56630;
  double t56500;
  double t56501;
  double t56505;
  double t56506;
  double t56510;
  double t56512;
  double t56513;
  double t56514;
  double t56516;
  double t56519;
  double t56520;
  double t56521;
  double t56522;
  double t56523;
  double t56524;
  double t56525;
  double t56528;
  double t56534;
  double t56539;
  double t56540;
  double t56541;
  double t56542;
  double t56545;
  double t56658;
  double t56548;
  double t56549;
  double t56662;
  double t56555;
  double t56556;
  double t56560;
  double t56680;
  double t56681;
  double t56682;
  double t56693;
  double t56694;
  double t56695;
  double t56699;
  double t56700;
  double t56701;
  double t56703;
  double t56705;
  double t56706;
  double t56716;
  double t56717;
  double t56718;
  double t56719;
  double t56720;
  double t56721;
  double t56722;
  double t56724;
  double t56726;
  double t56728;
  double t56723;
  double t56734;
  double t56736;
  double t56738;
  double t56744;
  double t56746;
  double t56747;
  double t56749;
  double t56750;
  double t56751;
  double t56768;
  double t56771;
  double t56786;
  double t56788;
  double t56780;
  double t56815;
  double t56817;
  double t56692;
  double t56696;
  double t56697;
  double t56825;
  double t56062;
  double t56067;
  double t56069;
  double t56861;
  double t56868;
  double t56870;
  double t56683;
  double t56684;
  double t56685;
  double t56686;
  double t56687;
  double t56689;
  double t56690;
  double t56139;
  double t56140;
  double t56141;
  double t56909;
  double t56910;
  double t56911;
  double t56912;
  double t56913;
  double t56916;
  double t56917;
  double t56918;
  double t56924;
  double t56925;
  double t56926;
  double t56915;
  double t56930;
  double t56931;
  double t56932;
  double t56939;
  double t56940;
  double t56941;
  double t56935;
  double t56938;
  double t56948;
  double t56949;
  double t56950;
  double t56952;
  double t56953;
  double t56954;
  double t56958;
  double t56959;
  double t56960;
  double t56764;
  double t56766;
  double t56774;
  double t56776;
  double t56794;
  double t56796;
  double t56798;
  double t56978;
  double t56807;
  double t56809;
  double t56810;
  double t56983;
  double t56985;
  double t57011;
  double t57017;
  double t57020;
  double t56965;
  double t56967;
  double t56968;
  double t56850;
  double t56851;
  double t56852;
  double t57058;
  double t57064;
  t55869 = Cos(var1[16]);
  t55870 = Cos(var1[17]);
  t55871 = -1.*t55869*t55870;
  t55878 = Sin(var1[16]);
  t55880 = Sin(var1[17]);
  t55888 = -1.*t55878*t55880;
  t55892 = t55871 + t55888;
  t55898 = Cos(var1[15]);
  t55729 = Cos(var1[5]);
  t55860 = Sin(var1[15]);
  t55899 = Sin(var1[5]);
  t55904 = Cos(var1[3]);
  t55897 = t55729*t55860*t55892;
  t55901 = t55898*t55892*t55899;
  t55902 = t55897 + t55901;
  t30143 = Sin(var1[3]);
  t55905 = Cos(var1[4]);
  t55906 = -1.*t55870*t55878;
  t55907 = t55869*t55880;
  t56017 = t55906 + t55907;
  t56029 = t55905*t56017;
  t56030 = Sin(var1[4]);
  t56031 = t55898*t55729*t55892;
  t56036 = -1.*t55860*t55892*t55899;
  t56037 = t56031 + t56036;
  t56038 = -1.*t56030*t56037;
  t56041 = t56029 + t56038;
  t56080 = t55729*t55860;
  t56081 = t55898*t55899;
  t56084 = t56080 + t56081;
  t56088 = -1.*t55898*t55729;
  t56089 = t55860*t55899;
  t56093 = t56088 + t56089;
  t56108 = t55729*t55860*t56017;
  t56109 = t55898*t56017*t55899;
  t56114 = t56108 + t56109;
  t56122 = t55869*t55870;
  t56124 = t55878*t55880;
  t56125 = t56122 + t56124;
  t56127 = t55905*t56125;
  t56128 = t55898*t55729*t56017;
  t56129 = -1.*t55860*t56017*t55899;
  t56132 = t56128 + t56129;
  t56133 = -1.*t56030*t56132;
  t56134 = t56127 + t56133;
  t56144 = -1.*t56017*t56030;
  t56145 = -1.*t55905*t56037;
  t56146 = t56144 + t56145;
  t56155 = -1.*t55870;
  t56156 = 1. + t56155;
  t56157 = -0.50321*t56156;
  t56159 = -0.19821*t55870;
  t56160 = t56157 + t56159;
  t56166 = -1.*t55898;
  t56167 = 1. + t56166;
  t56168 = -0.15121*t56167;
  t56169 = -1.*t55869;
  t56170 = 1. + t56169;
  t56171 = -0.28121*t56170;
  t56172 = t55869*t56160;
  t56173 = 0.305*t55878*t55880;
  t56174 = t56171 + t56172 + t56173;
  t56154 = 0.28121*t55878;
  t56161 = t56160*t55878;
  t56163 = -0.305*t55869*t55880;
  t56164 = t56154 + t56161 + t56163;
  t56176 = t55898*t56174;
  t56177 = t56168 + t56176;
  t56178 = t55729*t56177;
  t56179 = -0.15121*t55898;
  t56180 = 0.15121*t55860;
  t56181 = t55860*t56174;
  t56182 = t56168 + t56179 + t56180 + t56181;
  t56183 = -1.*t56182*t55899;
  t56184 = t56178 + t56183;
  t56189 = t56164*t56030;
  t56191 = t55905*t56184;
  t56192 = t56189 + t56191;
  t56165 = -1.*t56164*t56030;
  t56185 = -1.*t55905*t56184;
  t56187 = t56165 + t56185;
  t56202 = t55905*t56164;
  t56203 = -1.*t56030*t56184;
  t56204 = t56202 + t56203;
  t56151 = t56125*t56030;
  t56152 = t55905*t56132;
  t56153 = t56151 + t56152;
  t56196 = t55729*t56182;
  t56197 = t56177*t55899;
  t56198 = t56196 + t56197;
  t56229 = -1.*t56125*t56030;
  t56230 = -1.*t55905*t56132;
  t56231 = t56229 + t56230;
  t56267 = t56017*t56030;
  t56268 = t55905*t56037;
  t56269 = t56267 + t56268;
  t56344 = -1.*t55729*t55860*t55892;
  t56346 = -1.*t55898*t55892*t55899;
  t56347 = t56344 + t56346;
  t56200 = -1.*t56093*t56198;
  t56369 = -1.*t55729*t56182;
  t56371 = -1.*t56177*t55899;
  t56372 = t56369 + t56371;
  t56244 = t56114*t56198;
  t56387 = -1.*t55729*t55860*t56017;
  t56388 = -1.*t55898*t56017*t55899;
  t56389 = t56387 + t56388;
  t56201 = -1.*t55905*t56084*t56192;
  t56205 = t56030*t56084*t56204;
  t56206 = t56200 + t56201 + t56205;
  t56374 = -1.*t56084*t56198;
  t56382 = -1.*t56093*t56184;
  t56375 = t55898*t55729;
  t56376 = -1.*t55860*t55899;
  t56378 = t56375 + t56376;
  t56386 = t56132*t56198;
  t56391 = t56114*t56184;
  t56245 = t56153*t56192;
  t56246 = t56134*t56204;
  t56247 = t56244 + t56245 + t56246;
  t56277 = -1.*t56114*t56198;
  t56297 = t55902*t56198;
  t56464 = -1.*t56132*t56198;
  t56466 = -1.*t56114*t56184;
  t56478 = t56037*t56198;
  t56481 = t55902*t56184;
  t56278 = -1.*t56153*t56192;
  t56281 = -1.*t56134*t56204;
  t56283 = t56277 + t56278 + t56281;
  t56301 = t56269*t56192;
  t56303 = t56041*t56204;
  t56305 = t56297 + t56301 + t56303;
  t56321 = t56093*t56198;
  t56336 = -1.*t55902*t56198;
  t56322 = t55905*t56084*t56192;
  t56323 = -1.*t56030*t56084*t56204;
  t56326 = t56321 + t56322 + t56323;
  t56403 = Power(t55905,2);
  t56405 = Power(t56030,2);
  t56527 = t56084*t56198;
  t56529 = t56093*t56184;
  t56533 = -1.*t56037*t56198;
  t56535 = -1.*t55902*t56184;
  t56337 = -1.*t56269*t56192;
  t56338 = -1.*t56041*t56204;
  t56339 = t56336 + t56337 + t56338;
  t56348 = var2[0]*t55905*t56347;
  t56349 = t30143*t56030*t56347;
  t56350 = t55904*t56037;
  t56351 = t56349 + t56350;
  t56352 = var2[1]*t56351;
  t56353 = -1.*t55904*t56030*t56347;
  t56361 = t30143*t56037;
  t56362 = t56353 + t56361;
  t56363 = var2[2]*t56362;
  t56366 = -1.*t56084*t56184;
  t56367 = t56200 + t56366;
  t56368 = t56132*t56367;
  t56570 = -0.15121*t55860;
  t56571 = -1.*t55860*t56174;
  t56573 = t56570 + t56571;
  t56566 = 0.15121*t55898;
  t56567 = t56566 + t56176;
  t56380 = -1.*t56378*t56184;
  t56579 = t55729*t56573;
  t56580 = -1.*t56567*t55899;
  t56581 = t56579 + t56580;
  t56583 = t55729*t56567;
  t56584 = t56573*t55899;
  t56585 = t56583 + t56584;
  t56390 = t56389*t56184;
  t56395 = t56164*t56125;
  t56396 = t56132*t56184;
  t56397 = t56395 + t56244 + t56396;
  t56398 = t56084*t56397;
  t56402 = t55905*t56389*t56206;
  t56586 = -1.*t56093*t56585;
  t56407 = -1.*t55905*t56378*t56192;
  t56408 = t56030*t56378*t56204;
  t56590 = t56114*t56585;
  t56413 = t55905*t56389*t56192;
  t56414 = -1.*t56030*t56389*t56204;
  t56428 = t55905*t56378*t56247;
  t56439 = var2[0]*t55905*t56378;
  t56445 = t30143*t56084;
  t56446 = -1.*t55904*t56030*t56378;
  t56447 = t56445 + t56446;
  t56448 = var2[2]*t56447;
  t56449 = t55904*t56084;
  t56454 = t30143*t56030*t56378;
  t56458 = t56449 + t56454;
  t56459 = var2[1]*t56458;
  t56465 = -1.*t56389*t56184;
  t56473 = -1.*t56164*t56125;
  t56474 = -1.*t56132*t56184;
  t56475 = t56473 + t56277 + t56474;
  t56476 = t56037*t56475;
  t56479 = t56347*t56184;
  t56485 = t56164*t56017;
  t56486 = t56037*t56184;
  t56487 = t56485 + t56297 + t56486;
  t56489 = t56132*t56487;
  t56625 = -1.*t56114*t56585;
  t56494 = -1.*t55905*t56389*t56192;
  t56495 = t56030*t56389*t56204;
  t56630 = t55902*t56585;
  t56500 = t55905*t56347*t56192;
  t56501 = -1.*t56030*t56347*t56204;
  t56505 = t55905*t56347*t56283;
  t56506 = t55905*t56389*t56305;
  t56510 = var2[0]*t55905*t56389;
  t56512 = t30143*t56030*t56389;
  t56513 = t55904*t56132;
  t56514 = t56512 + t56513;
  t56516 = var2[1]*t56514;
  t56519 = -1.*t55904*t56030*t56389;
  t56520 = t30143*t56132;
  t56521 = t56519 + t56520;
  t56522 = var2[2]*t56521;
  t56523 = t56084*t56184;
  t56524 = t56321 + t56523;
  t56525 = t56037*t56524;
  t56528 = t56378*t56184;
  t56534 = -1.*t56347*t56184;
  t56539 = -1.*t56164*t56017;
  t56540 = -1.*t56037*t56184;
  t56541 = t56539 + t56336 + t56540;
  t56542 = t56084*t56541;
  t56545 = t55905*t56347*t56326;
  t56658 = t56093*t56585;
  t56548 = t55905*t56378*t56192;
  t56549 = -1.*t56030*t56378*t56204;
  t56662 = -1.*t55902*t56585;
  t56555 = -1.*t55905*t56347*t56192;
  t56556 = t56030*t56347*t56204;
  t56560 = t55905*t56378*t56339;
  t56680 = t55870*t55878;
  t56681 = -1.*t55869*t55880;
  t56682 = t56680 + t56681;
  t56693 = t55898*t55729*t56682;
  t56694 = -1.*t55860*t56682*t55899;
  t56695 = t56693 + t56694;
  t56699 = t55729*t55860*t56682;
  t56700 = t55898*t56682*t55899;
  t56701 = t56699 + t56700;
  t56703 = t55905*t55892;
  t56705 = -1.*t56030*t56695;
  t56706 = t56703 + t56705;
  t56716 = -0.28121*t55878;
  t56717 = -1.*t56160*t55878;
  t56718 = 0.305*t55869*t55880;
  t56719 = t56716 + t56717 + t56718;
  t56720 = t55729*t55860*t56719;
  t56721 = t55898*t56719*t55899;
  t56722 = t56720 + t56721;
  t56724 = t55898*t55729*t56719;
  t56726 = -1.*t55860*t56719*t55899;
  t56728 = t56724 + t56726;
  t56723 = -1.*t56093*t56722;
  t56734 = 0.28121*t55869;
  t56736 = t56734 + t56172 + t56173;
  t56738 = t56722*t56114;
  t56744 = t56736*t56030;
  t56746 = t55905*t56728;
  t56747 = t56744 + t56746;
  t56749 = t55905*t56736;
  t56750 = -1.*t56030*t56728;
  t56751 = t56749 + t56750;
  t56768 = t56164*t55892;
  t56771 = t56017*t56736;
  t56786 = Power(t55898,2);
  t56788 = Power(t55860,2);
  t56780 = -1.*t56736*t56125;
  t56815 = t56722*t55902;
  t56817 = t56701*t56198;
  t56692 = t55892*t56030;
  t56696 = t55905*t56695;
  t56697 = t56692 + t56696;
  t56825 = -1.*t56722*t56114;
  t56062 = t55904*t55902;
  t56067 = -1.*t30143*t56041;
  t56069 = t56062 + t56067;
  t56861 = t56093*t56722;
  t56868 = -1.*t56722*t55902;
  t56870 = -1.*t56701*t56198;
  t56683 = -0.15121*t56682;
  t56684 = -0.15121*t56017;
  t56685 = t56683 + t56684;
  t56686 = var2[15]*t56685;
  t56687 = -1.*t55860*t56177;
  t56689 = t55898*t56182;
  t56690 = t56687 + t56689;
  t56139 = t55904*t56114;
  t56140 = -1.*t30143*t56134;
  t56141 = t56139 + t56140;
  t56909 = 0.305*t55870*t55878;
  t56910 = t56909 + t56163;
  t56911 = t55729*t55860*t56910;
  t56912 = t55898*t56910*t55899;
  t56913 = t56911 + t56912;
  t56916 = t55898*t55729*t56910;
  t56917 = -1.*t55860*t56910*t55899;
  t56918 = t56916 + t56917;
  t56924 = t55729*t55860*t56125;
  t56925 = t55898*t56125*t55899;
  t56926 = t56924 + t56925;
  t56915 = -1.*t56093*t56913;
  t56930 = -0.305*t55869*t55870;
  t56931 = -0.305*t55878*t55880;
  t56932 = t56930 + t56931;
  t56939 = t55898*t55729*t56125;
  t56940 = -1.*t55860*t56125*t55899;
  t56941 = t56939 + t56940;
  t56935 = t56913*t56114;
  t56938 = t56926*t56198;
  t56948 = t56932*t56030;
  t56949 = t55905*t56918;
  t56950 = t56948 + t56949;
  t56952 = t55905*t56932;
  t56953 = -1.*t56030*t56918;
  t56954 = t56952 + t56953;
  t56958 = t56682*t56030;
  t56959 = t55905*t56941;
  t56960 = t56958 + t56959;
  t56764 = t55892*t56174;
  t56766 = t56485 + t56764;
  t56774 = -1.*t56017*t56174;
  t56776 = t56774 + t56473;
  t56794 = -1.*t55898*t56017*t56177;
  t56796 = -1.*t55860*t56017*t56182;
  t56798 = t56473 + t56794 + t56796;
  t56978 = t56017*t56932;
  t56807 = t55898*t55892*t56177;
  t56809 = t55860*t55892*t56182;
  t56810 = t56485 + t56807 + t56809;
  t56983 = -1.*t56682*t56164;
  t56985 = -1.*t56932*t56125;
  t57011 = t56913*t55902;
  t57017 = -1.*t56913*t56114;
  t57020 = -1.*t56926*t56198;
  t56965 = t55905*t56682;
  t56967 = -1.*t56030*t56941;
  t56968 = t56965 + t56967;
  t56850 = t55860*t56177;
  t56851 = -1.*t55898*t56182;
  t56852 = t56850 + t56851;
  t57058 = t56093*t56913;
  t57064 = -1.*t56913*t55902;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t30143*t55902 - 1.*t55904*t56041)*var2[1] + t56069*var2[2];
  p_output1[10]=(t55904*t56030*t56084 - 1.*t30143*t56093)*var2[1] + (t30143*t56030*t56084 + t55904*t56093)*var2[2];
  p_output1[11]=(-1.*t30143*t56114 - 1.*t55904*t56134)*var2[1] + t56141*var2[2];
  p_output1[12]=t56041*var2[0] - 1.*t30143*t56146*var2[1] + t55904*t56146*var2[2] + (t56153*(t56030*t56084*t56187 + t56030*t56084*t56192) + t56134*t56206 + t55905*t56084*(t56134*t56187 + t56134*t56192 + t56153*t56204 + t56204*t56231) - 1.*t56030*t56084*t56247)*var2[3];
  p_output1[13]=-1.*t56030*t56084*var2[0] + t30143*t55905*t56084*var2[1] - 1.*t55904*t55905*t56084*var2[2] + ((-1.*t56134*t56187 - 1.*t56134*t56192 - 1.*t56153*t56204 - 1.*t56204*t56231)*t56269 + t56153*(t56041*t56187 + t56041*t56192 + t56146*t56204 + t56204*t56269) + t56041*t56283 + t56134*t56305)*var2[3];
  p_output1[14]=t56134*var2[0] - 1.*t30143*t56231*var2[1] + t55904*t56231*var2[2] + ((-1.*t56030*t56084*t56187 - 1.*t56030*t56084*t56192)*t56269 + t55905*t56084*(-1.*t56041*t56187 - 1.*t56041*t56192 - 1.*t56146*t56204 - 1.*t56204*t56269) + t56041*t56326 - 1.*t56030*t56084*t56339)*var2[3];
  p_output1[15]=t56348 + t56352 + t56363 + (t56402 + t56153*(t56374 + t56382 - 1.*t56084*t56372*t56403 - 1.*t56084*t56372*t56405 + t56407 + t56408) + t55905*t56084*(-1.*t56030*t56134*t56372 + t55905*t56153*t56372 + t56386 + t56391 + t56413 + t56414) + t56428)*var2[3] + (t56368 + t56114*(-1.*t56084*t56372 + t56374 + t56380 + t56382) + t56093*(t56132*t56372 + t56386 + t56390 + t56391) + t56398)*var2[4];
  p_output1[16]=t56439 + t56448 + t56459 + (t56269*(t56030*t56134*t56372 - 1.*t55905*t56153*t56372 + t56464 + t56466 + t56494 + t56495) + t56153*(-1.*t56030*t56041*t56372 + t55905*t56269*t56372 + t56478 + t56481 + t56500 + t56501) + t56505 + t56506)*var2[3] + (t55902*(-1.*t56132*t56372 + t56464 + t56465 + t56466) + t56476 + t56114*(t56037*t56372 + t56478 + t56479 + t56481) + t56489)*var2[4];
  p_output1[17]=t56510 + t56516 + t56522 + (t56545 + t56269*(t56084*t56372*t56403 + t56084*t56372*t56405 + t56527 + t56529 + t56548 + t56549) + t55905*t56084*(t56030*t56041*t56372 - 1.*t55905*t56269*t56372 + t56533 + t56535 + t56555 + t56556) + t56560)*var2[3] + (t56525 + t55902*(t56084*t56372 + t56527 + t56528 + t56529) + t56093*(-1.*t56037*t56372 + t56533 + t56534 + t56535) + t56542)*var2[4];
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t56348 + t56352 + t56363 + (t56402 + t56428 + t56153*(t56374 + t56407 + t56408 - 1.*t56084*t56403*t56581 - 1.*t56084*t56405*t56581 + t56586) + t55905*t56084*(t56386 + t56413 + t56414 - 1.*t56030*t56134*t56581 + t55905*t56153*t56581 + t56590))*var2[3] + (t56368 + t56398 + t56114*(t56374 + t56380 - 1.*t56084*t56581 + t56586) + t56093*(t56386 + t56390 + t56132*t56581 + t56590))*var2[4] + t56125*(-1.*t55898*t56177 - 1.*t55860*t56182 + t55898*t56567 - 1.*t55860*t56573)*var2[5];
  p_output1[46]=t56439 + t56448 + t56459 + (t56505 + t56506 + t56269*(t56464 + t56494 + t56495 + t56030*t56134*t56581 - 1.*t55905*t56153*t56581 + t56625) + t56153*(t56478 + t56500 + t56501 - 1.*t56030*t56041*t56581 + t55905*t56269*t56581 + t56630))*var2[3] + (t56476 + t56489 + t55902*(t56464 + t56465 - 1.*t56132*t56581 + t56625) + t56114*(t56478 + t56479 + t56037*t56581 + t56630))*var2[4] + (t56125*(-1.*t55860*t55892*t56177 + t55892*t55898*t56182 + t55860*t55892*t56567 + t55892*t55898*t56573) + t56017*(t55860*t56017*t56177 - 1.*t55898*t56017*t56182 - 1.*t55860*t56017*t56567 - 1.*t55898*t56017*t56573))*var2[5];
  p_output1[47]=t56510 + t56516 + t56522 + (t56545 + t56560 + t56269*(t56527 + t56548 + t56549 + t56084*t56403*t56581 + t56084*t56405*t56581 + t56658) + t55905*t56084*(t56533 + t56555 + t56556 + t56030*t56041*t56581 - 1.*t55905*t56269*t56581 + t56662))*var2[3] + (t56525 + t56542 + t55902*(t56527 + t56528 + t56084*t56581 + t56658) + t56093*(t56533 + t56534 - 1.*t56037*t56581 + t56662))*var2[4] + t56017*(t55898*t56177 + t55860*t56182 - 1.*t55898*t56567 + t55860*t56573)*var2[5];
  p_output1[48]=t56686 + t56697*var2[0] + (t55904*t56701 - 1.*t30143*t56706)*var2[1] + (t30143*t56701 + t55904*t56706)*var2[2] + (t56206*t56269 + t56153*(t56723 - 1.*t55905*t56084*t56747 + t56030*t56084*t56751) + t55905*t56084*(t56297 + t56301 + t56303 + t56738 + t56153*t56747 + t56134*t56751))*var2[3] + (t55902*t56367 + t56114*(t56723 - 1.*t56084*t56728) + t56093*(t56297 + t56485 + t56486 + t56132*t56728 + t56125*t56736 + t56738))*var2[4] + t56017*t56690*var2[5];
  p_output1[49]=(t56269*t56305 + t56283*t56697 + t56153*(t56192*t56697 + t56204*t56706 + t56269*t56747 + t56041*t56751 + t56815 + t56817) + t56269*(t56336 + t56337 + t56338 - 1.*t56153*t56747 - 1.*t56134*t56751 + t56825))*var2[3] + (t55902*t56487 + t56475*t56701 + t56114*(t56184*t56695 + t56037*t56728 + t56768 + t56771 + t56815 + t56817) + t55902*(t56336 + t56539 + t56540 - 1.*t56132*t56728 + t56780 + t56825))*var2[4] + (t56125*(t55898*t56177*t56682 + t55860*t56182*t56682 + t56768 + t56771 + t55892*t56719*t56786 + t55892*t56719*t56788) + t56017*(-1.*t55892*t55898*t56177 - 1.*t55860*t55892*t56182 + t56539 + t56780 - 1.*t56017*t56719*t56786 - 1.*t56017*t56719*t56788) + t55892*t56798 + t56017*t56810)*var2[5] + (t56017*t56766 + t56125*(t56174*t56682 + t55892*t56719 + t56768 + t56771) + t55892*t56776 + t56017*(-1.*t55892*t56174 + t56539 - 1.*t56017*t56719 + t56780))*var2[15];
  p_output1[50]=t56269*var2[0] + t56069*var2[1] + (t30143*t55902 + t55904*t56041)*var2[2] + (t56326*t56697 + t56269*(t55905*t56084*t56747 - 1.*t56030*t56084*t56751 + t56861) + t55905*t56084*(-1.*t56192*t56697 - 1.*t56204*t56706 - 1.*t56269*t56747 - 1.*t56041*t56751 + t56868 + t56870))*var2[3] + (t56524*t56701 + t55902*(t56084*t56728 + t56861) + t56093*(-1.*t55892*t56164 - 1.*t56184*t56695 - 1.*t56037*t56728 - 1.*t56017*t56736 + t56868 + t56870))*var2[4] + t55892*t56852*var2[5];
  p_output1[51]=t56686 + t56153*var2[0] + t56141*var2[1] + (t30143*t56114 + t55904*t56134)*var2[2] + (t56153*(t56915 - 1.*t55905*t56084*t56950 + t56030*t56084*t56954) + t56206*t56960 + t55905*t56084*(t56935 + t56938 + t56153*t56950 + t56134*t56954 + t56192*t56960 + t56204*t56968))*var2[3] + (t56114*(t56915 - 1.*t56084*t56918) + t56367*t56926 + t56093*(t56164*t56682 + t56132*t56918 + t56125*t56932 + t56935 + t56938 + t56184*t56941))*var2[4] + t56682*t56690*var2[5] + (0.28121*t55870 - 0.305*Power(t55870,2) + t55870*t56160)*var2[16];
  p_output1[52]=(t56153*t56283 + t56305*t56960 + t56153*(t56244 + t56245 + t56246 + t56269*t56950 + t56041*t56954 + t57011) + t56269*(-1.*t56153*t56950 - 1.*t56134*t56954 - 1.*t56192*t56960 - 1.*t56204*t56968 + t57017 + t57020))*var2[3] + (t56114*t56475 + t56487*t56926 + t56114*(t56244 + t56395 + t56396 + t56037*t56918 + t56978 + t57011) + t55902*(-1.*t56132*t56918 - 1.*t56184*t56941 + t56983 + t56985 + t57017 + t57020))*var2[4] + (t56125*t56798 + t56682*t56810 + t56125*(t55898*t56017*t56177 + t55860*t56017*t56182 + t56395 + t55892*t56786*t56910 + t55892*t56788*t56910 + t56978) + t56017*(-1.*t55898*t56125*t56177 - 1.*t55860*t56125*t56182 - 1.*t56017*t56786*t56910 - 1.*t56017*t56788*t56910 + t56983 + t56985))*var2[5] + (t56682*t56766 + t56125*t56776 + t56125*(t56017*t56174 + t56395 + t55892*t56910 + t56978) + t56017*(-1.*t56125*t56174 - 1.*t56017*t56910 + t56983 + t56985))*var2[15];
  p_output1[53]=t56960*var2[0] + (t55904*t56926 - 1.*t30143*t56968)*var2[1] + (t30143*t56926 + t55904*t56968)*var2[2] + (t56153*t56326 + t56269*(t55905*t56084*t56950 - 1.*t56030*t56084*t56954 + t57058) + t55905*t56084*(t56277 + t56278 + t56281 - 1.*t56269*t56950 - 1.*t56041*t56954 + t57064))*var2[3] + (t56114*t56524 + t55902*(t56084*t56918 + t57058) + t56093*(t56277 + t56473 + t56474 - 1.*t56037*t56918 - 1.*t56017*t56932 + t57064))*var2[4] + t56125*t56852*var2[5] + (-0.28121*t55880 + 0.305*t55870*t55880 - 1.*t55880*t56160)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
