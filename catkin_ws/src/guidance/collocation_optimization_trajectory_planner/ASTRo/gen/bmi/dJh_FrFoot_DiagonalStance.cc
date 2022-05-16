/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:44 GMT+02:00
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
  double t28050;
  double t28054;
  double t28185;
  double t39034;
  double t39298;
  double t39341;
  double t40132;
  double t40174;
  double t19441;
  double t22836;
  double t40196;
  double t40215;
  double t40152;
  double t40200;
  double t40205;
  double t668;
  double t40341;
  double t40347;
  double t40379;
  double t40994;
  double t41034;
  double t41040;
  double t41143;
  double t41205;
  double t41210;
  double t41219;
  double t41225;
  double t41257;
  double t41258;
  double t41264;
  double t41273;
  double t41283;
  double t41285;
  double t41325;
  double t41327;
  double t41332;
  double t41342;
  double t41346;
  double t41359;
  double t41365;
  double t41367;
  double t41373;
  double t41385;
  double t41386;
  double t41389;
  double t41462;
  double t41464;
  double t41468;
  double t41583;
  double t41589;
  double t41623;
  double t41626;
  double t41638;
  double t41695;
  double t41699;
  double t41718;
  double t41746;
  double t43008;
  double t43042;
  double t43464;
  double t43540;
  double t41525;
  double t41640;
  double t41641;
  double t41654;
  double t41700;
  double t43659;
  double t43737;
  double t43754;
  double t44157;
  double t44168;
  double t45367;
  double t46352;
  double t46594;
  double t49625;
  double t50154;
  double t50225;
  double t50269;
  double t50272;
  double t41679;
  double t50169;
  double t50187;
  double t51066;
  double t51376;
  double t51411;
  double t41510;
  double t41518;
  double t41524;
  double t51022;
  double t51032;
  double t51040;
  double t51574;
  double t51582;
  double t51604;
  double t52117;
  double t52118;
  double t52124;
  double t52442;
  double t52449;
  double t52452;
  double t51062;
  double t52500;
  double t52501;
  double t52502;
  double t51961;
  double t52532;
  double t52533;
  double t52540;
  double t51063;
  double t51419;
  double t51424;
  double t52505;
  double t52508;
  double t52509;
  double t52513;
  double t52515;
  double t52528;
  double t52545;
  double t51964;
  double t51965;
  double t51967;
  double t52154;
  double t52183;
  double t53875;
  double t53883;
  double t53927;
  double t53931;
  double t52158;
  double t52159;
  double t52161;
  double t52184;
  double t52188;
  double t52189;
  double t52360;
  double t52393;
  double t52361;
  double t52362;
  double t52363;
  double t52574;
  double t52577;
  double t54292;
  double t54293;
  double t54303;
  double t54307;
  double t52429;
  double t52432;
  double t52433;
  double t52454;
  double t52458;
  double t52459;
  double t52476;
  double t52479;
  double t52485;
  double t52492;
  double t52493;
  double t52494;
  double t52495;
  double t52496;
  double t52499;
  double t54533;
  double t54539;
  double t54540;
  double t54527;
  double t52519;
  double t54837;
  double t54853;
  double t54864;
  double t54886;
  double t54894;
  double t54910;
  double t52541;
  double t52549;
  double t52553;
  double t52554;
  double t52556;
  double t52570;
  double t54922;
  double t52582;
  double t52586;
  double t56401;
  double t52685;
  double t52694;
  double t52698;
  double t53783;
  double t53787;
  double t53790;
  double t53806;
  double t53817;
  double t53818;
  double t53821;
  double t53822;
  double t53872;
  double t53876;
  double t53919;
  double t53921;
  double t53924;
  double t53925;
  double t53929;
  double t53936;
  double t53938;
  double t53941;
  double t53942;
  double t56441;
  double t53978;
  double t53979;
  double t56445;
  double t54041;
  double t54042;
  double t54049;
  double t54050;
  double t54065;
  double t54073;
  double t54097;
  double t54098;
  double t54099;
  double t54101;
  double t54102;
  double t54103;
  double t54147;
  double t54150;
  double t54195;
  double t54206;
  double t54296;
  double t54306;
  double t54320;
  double t54321;
  double t54324;
  double t54331;
  double t54379;
  double t56633;
  double t54437;
  double t54438;
  double t56637;
  double t54497;
  double t54498;
  double t54508;
  double t56657;
  double t56658;
  double t56659;
  double t56661;
  double t56662;
  double t56663;
  double t56667;
  double t56668;
  double t56669;
  double t56671;
  double t56672;
  double t56673;
  double t56816;
  double t56817;
  double t56818;
  double t56820;
  double t56821;
  double t56822;
  double t56819;
  double t56827;
  double t56828;
  double t56829;
  double t56830;
  double t56832;
  double t56838;
  double t56839;
  double t56840;
  double t56842;
  double t56843;
  double t56844;
  double t56859;
  double t56861;
  double t56878;
  double t56880;
  double t56869;
  double t56660;
  double t56664;
  double t56665;
  double t56899;
  double t56901;
  double t56905;
  double t41240;
  double t41244;
  double t41245;
  double t57091;
  double t57099;
  double t57101;
  double t56653;
  double t56654;
  double t56655;
  double t41407;
  double t41415;
  double t41420;
  double t57134;
  double t57135;
  double t57136;
  double t57137;
  double t57138;
  double t57139;
  double t57141;
  double t57142;
  double t57143;
  double t57147;
  double t57148;
  double t57149;
  double t57140;
  double t57152;
  double t57153;
  double t57158;
  double t57159;
  double t57160;
  double t57155;
  double t57157;
  double t57255;
  double t57256;
  double t57257;
  double t57260;
  double t57261;
  double t57262;
  double t57270;
  double t57271;
  double t57272;
  double t56856;
  double t56857;
  double t56864;
  double t56865;
  double t56867;
  double t56874;
  double t56875;
  double t56876;
  double t57293;
  double t57300;
  double t56892;
  double t56893;
  double t56894;
  double t57330;
  double t57336;
  double t57374;
  double t57277;
  double t57278;
  double t57279;
  double t57077;
  double t57078;
  double t57079;
  double t57080;
  double t57081;
  double t57082;
  double t57083;
  double t57414;
  double t57421;
  t28050 = Cos(var1[13]);
  t28054 = Cos(var1[14]);
  t28185 = t28050*t28054;
  t39034 = Sin(var1[13]);
  t39298 = Sin(var1[14]);
  t39341 = t39034*t39298;
  t40132 = t28185 + t39341;
  t40174 = Cos(var1[12]);
  t19441 = Cos(var1[5]);
  t22836 = Sin(var1[12]);
  t40196 = Sin(var1[5]);
  t40215 = Cos(var1[3]);
  t40152 = t19441*t22836*t40132;
  t40200 = t40174*t40132*t40196;
  t40205 = t40152 + t40200;
  t668 = Sin(var1[3]);
  t40341 = Cos(var1[4]);
  t40347 = -1.*t28054*t39034;
  t40379 = t28050*t39298;
  t40994 = t40347 + t40379;
  t41034 = t40341*t40994;
  t41040 = Sin(var1[4]);
  t41143 = t40174*t19441*t40132;
  t41205 = -1.*t22836*t40132*t40196;
  t41210 = t41143 + t41205;
  t41219 = -1.*t41040*t41210;
  t41225 = t41034 + t41219;
  t41257 = -1.*t19441*t22836;
  t41258 = -1.*t40174*t40196;
  t41264 = t41257 + t41258;
  t41273 = t40174*t19441;
  t41283 = -1.*t22836*t40196;
  t41285 = t41273 + t41283;
  t41325 = t28054*t39034;
  t41327 = -1.*t28050*t39298;
  t41332 = t41325 + t41327;
  t41342 = t19441*t22836*t41332;
  t41346 = t40174*t41332*t40196;
  t41359 = t41342 + t41346;
  t41365 = t40341*t40132;
  t41367 = t40174*t19441*t41332;
  t41373 = -1.*t22836*t41332*t40196;
  t41385 = t41367 + t41373;
  t41386 = -1.*t41040*t41385;
  t41389 = t41365 + t41386;
  t41462 = -1.*t40994*t41040;
  t41464 = -1.*t40341*t41210;
  t41468 = t41462 + t41464;
  t41583 = -1.*t28054;
  t41589 = 1. + t41583;
  t41623 = 0.50321*t41589;
  t41626 = 0.23321*t28054;
  t41638 = t41623 + t41626;
  t41695 = -1.*t40174;
  t41699 = 1. + t41695;
  t41718 = -1.*t28050;
  t41746 = 1. + t41718;
  t43008 = 0.28121*t41746;
  t43042 = t28050*t41638;
  t43464 = -0.27*t39034*t39298;
  t43540 = t43008 + t43042 + t43464;
  t41525 = 0.28121*t39034;
  t41640 = -1.*t41638*t39034;
  t41641 = -0.27*t28050*t39298;
  t41654 = t41525 + t41640 + t41641;
  t41700 = 0.15121*t41699;
  t43659 = t40174*t43540;
  t43737 = t41700 + t43659;
  t43754 = t19441*t43737;
  t44157 = -0.15121*t41699;
  t44168 = -0.15121*t40174;
  t45367 = -0.15121*t22836;
  t46352 = t22836*t43540;
  t46594 = t44157 + t44168 + t45367 + t46352;
  t49625 = -1.*t46594*t40196;
  t50154 = t43754 + t49625;
  t50225 = t41654*t41040;
  t50269 = t40341*t50154;
  t50272 = t50225 + t50269;
  t41679 = -1.*t41654*t41040;
  t50169 = -1.*t40341*t50154;
  t50187 = t41679 + t50169;
  t51066 = t40341*t41654;
  t51376 = -1.*t41040*t50154;
  t51411 = t51066 + t51376;
  t41510 = t40132*t41040;
  t41518 = t40341*t41385;
  t41524 = t41510 + t41518;
  t51022 = t19441*t46594;
  t51032 = t43737*t40196;
  t51040 = t51022 + t51032;
  t51574 = -1.*t40132*t41040;
  t51582 = -1.*t40341*t41385;
  t51604 = t51574 + t51582;
  t52117 = t40994*t41040;
  t52118 = t40341*t41210;
  t52124 = t52117 + t52118;
  t52442 = -1.*t19441*t22836*t40132;
  t52449 = -1.*t40174*t40132*t40196;
  t52452 = t52442 + t52449;
  t51062 = -1.*t41285*t51040;
  t52500 = -1.*t19441*t46594;
  t52501 = -1.*t43737*t40196;
  t52502 = t52500 + t52501;
  t51961 = t41359*t51040;
  t52532 = -1.*t19441*t22836*t41332;
  t52533 = -1.*t40174*t41332*t40196;
  t52540 = t52532 + t52533;
  t51063 = -1.*t40341*t41264*t50272;
  t51419 = t41040*t41264*t51411;
  t51424 = t51062 + t51063 + t51419;
  t52505 = -1.*t41264*t51040;
  t52508 = -1.*t41285*t50154;
  t52509 = -1.*t40174*t19441;
  t52513 = t22836*t40196;
  t52515 = t52509 + t52513;
  t52528 = t41385*t51040;
  t52545 = t41359*t50154;
  t51964 = t41524*t50272;
  t51965 = t41389*t51411;
  t51967 = t51961 + t51964 + t51965;
  t52154 = -1.*t41359*t51040;
  t52183 = t40205*t51040;
  t53875 = -1.*t41385*t51040;
  t53883 = -1.*t41359*t50154;
  t53927 = t41210*t51040;
  t53931 = t40205*t50154;
  t52158 = -1.*t41524*t50272;
  t52159 = -1.*t41389*t51411;
  t52161 = t52154 + t52158 + t52159;
  t52184 = t52124*t50272;
  t52188 = t41225*t51411;
  t52189 = t52183 + t52184 + t52188;
  t52360 = t41285*t51040;
  t52393 = -1.*t40205*t51040;
  t52361 = t40341*t41264*t50272;
  t52362 = -1.*t41040*t41264*t51411;
  t52363 = t52360 + t52361 + t52362;
  t52574 = Power(t40341,2);
  t52577 = Power(t41040,2);
  t54292 = t41264*t51040;
  t54293 = t41285*t50154;
  t54303 = -1.*t41210*t51040;
  t54307 = -1.*t40205*t50154;
  t52429 = -1.*t52124*t50272;
  t52432 = -1.*t41225*t51411;
  t52433 = t52393 + t52429 + t52432;
  t52454 = var2[0]*t40341*t52452;
  t52458 = t668*t41040*t52452;
  t52459 = t40215*t41210;
  t52476 = t52458 + t52459;
  t52479 = var2[1]*t52476;
  t52485 = -1.*t40215*t41040*t52452;
  t52492 = t668*t41210;
  t52493 = t52485 + t52492;
  t52494 = var2[2]*t52493;
  t52495 = -1.*t41264*t50154;
  t52496 = t51062 + t52495;
  t52499 = t41385*t52496;
  t54533 = 0.15121*t22836;
  t54539 = -1.*t22836*t43540;
  t54540 = t54533 + t54539;
  t54527 = t44168 + t43659;
  t52519 = -1.*t52515*t50154;
  t54837 = t19441*t54540;
  t54853 = -1.*t54527*t40196;
  t54864 = t54837 + t54853;
  t54886 = t19441*t54527;
  t54894 = t54540*t40196;
  t54910 = t54886 + t54894;
  t52541 = t52540*t50154;
  t52549 = t41654*t40132;
  t52553 = t41385*t50154;
  t52554 = t52549 + t51961 + t52553;
  t52556 = t41264*t52554;
  t52570 = t40341*t52540*t51424;
  t54922 = -1.*t41285*t54910;
  t52582 = -1.*t40341*t52515*t50272;
  t52586 = t41040*t52515*t51411;
  t56401 = t41359*t54910;
  t52685 = t40341*t52540*t50272;
  t52694 = -1.*t41040*t52540*t51411;
  t52698 = t40341*t52515*t51967;
  t53783 = var2[0]*t40341*t52515;
  t53787 = t668*t41264;
  t53790 = -1.*t40215*t41040*t52515;
  t53806 = t53787 + t53790;
  t53817 = var2[2]*t53806;
  t53818 = t40215*t41264;
  t53821 = t668*t41040*t52515;
  t53822 = t53818 + t53821;
  t53872 = var2[1]*t53822;
  t53876 = -1.*t52540*t50154;
  t53919 = -1.*t41654*t40132;
  t53921 = -1.*t41385*t50154;
  t53924 = t53919 + t52154 + t53921;
  t53925 = t41210*t53924;
  t53929 = t52452*t50154;
  t53936 = t41654*t40994;
  t53938 = t41210*t50154;
  t53941 = t53936 + t52183 + t53938;
  t53942 = t41385*t53941;
  t56441 = -1.*t41359*t54910;
  t53978 = -1.*t40341*t52540*t50272;
  t53979 = t41040*t52540*t51411;
  t56445 = t40205*t54910;
  t54041 = t40341*t52452*t50272;
  t54042 = -1.*t41040*t52452*t51411;
  t54049 = t40341*t52452*t52161;
  t54050 = t40341*t52540*t52189;
  t54065 = var2[0]*t40341*t52540;
  t54073 = t668*t41040*t52540;
  t54097 = t40215*t41385;
  t54098 = t54073 + t54097;
  t54099 = var2[1]*t54098;
  t54101 = -1.*t40215*t41040*t52540;
  t54102 = t668*t41385;
  t54103 = t54101 + t54102;
  t54147 = var2[2]*t54103;
  t54150 = t41264*t50154;
  t54195 = t52360 + t54150;
  t54206 = t41210*t54195;
  t54296 = t52515*t50154;
  t54306 = -1.*t52452*t50154;
  t54320 = -1.*t41654*t40994;
  t54321 = -1.*t41210*t50154;
  t54324 = t54320 + t52393 + t54321;
  t54331 = t41264*t54324;
  t54379 = t40341*t52452*t52363;
  t56633 = t41285*t54910;
  t54437 = t40341*t52515*t50272;
  t54438 = -1.*t41040*t52515*t51411;
  t56637 = -1.*t40205*t54910;
  t54497 = -1.*t40341*t52452*t50272;
  t54498 = t41040*t52452*t51411;
  t54508 = t40341*t52515*t52433;
  t56657 = -1.*t28050*t28054;
  t56658 = -1.*t39034*t39298;
  t56659 = t56657 + t56658;
  t56661 = t40174*t19441*t40994;
  t56662 = -1.*t22836*t40994*t40196;
  t56663 = t56661 + t56662;
  t56667 = t19441*t22836*t40994;
  t56668 = t40174*t40994*t40196;
  t56669 = t56667 + t56668;
  t56671 = t40341*t56659;
  t56672 = -1.*t41040*t56663;
  t56673 = t56671 + t56672;
  t56816 = t19441*t22836*t41654;
  t56817 = t40174*t41654*t40196;
  t56818 = t56816 + t56817;
  t56820 = t40174*t19441*t41654;
  t56821 = -1.*t22836*t41654*t40196;
  t56822 = t56820 + t56821;
  t56819 = -1.*t41285*t56818;
  t56827 = 0.28121*t28050;
  t56828 = -1.*t28050*t41638;
  t56829 = 0.27*t39034*t39298;
  t56830 = t56827 + t56828 + t56829;
  t56832 = t41359*t56818;
  t56838 = t56830*t41040;
  t56839 = t40341*t56822;
  t56840 = t56838 + t56839;
  t56842 = t40341*t56830;
  t56843 = -1.*t41040*t56822;
  t56844 = t56842 + t56843;
  t56859 = t41654*t56659;
  t56861 = t40994*t56830;
  t56878 = Power(t40174,2);
  t56880 = Power(t22836,2);
  t56869 = -1.*t56830*t40132;
  t56660 = t56659*t41040;
  t56664 = t40341*t56663;
  t56665 = t56660 + t56664;
  t56899 = t56818*t40205;
  t56901 = t56669*t51040;
  t56905 = -1.*t41359*t56818;
  t41240 = t40215*t40205;
  t41244 = -1.*t668*t41225;
  t41245 = t41240 + t41244;
  t57091 = t41285*t56818;
  t57099 = -1.*t56818*t40205;
  t57101 = -1.*t56669*t51040;
  t56653 = t22836*t43737;
  t56654 = -1.*t40174*t46594;
  t56655 = t56653 + t56654;
  t41407 = t40215*t41359;
  t41415 = -1.*t668*t41389;
  t41420 = t41407 + t41415;
  t57134 = -0.27*t28054*t39034;
  t57135 = 0.27*t28050*t39298;
  t57136 = t57134 + t57135;
  t57137 = t19441*t22836*t57136;
  t57138 = t40174*t57136*t40196;
  t57139 = t57137 + t57138;
  t57141 = t40174*t19441*t57136;
  t57142 = -1.*t22836*t57136*t40196;
  t57143 = t57141 + t57142;
  t57147 = t19441*t22836*t56659;
  t57148 = t40174*t56659*t40196;
  t57149 = t57147 + t57148;
  t57140 = -1.*t41285*t57139;
  t57152 = -0.27*t28050*t28054;
  t57153 = t57152 + t43464;
  t57158 = t40174*t19441*t56659;
  t57159 = -1.*t22836*t56659*t40196;
  t57160 = t57158 + t57159;
  t57155 = t41359*t57139;
  t57157 = t57149*t51040;
  t57255 = t57153*t41040;
  t57256 = t40341*t57143;
  t57257 = t57255 + t57256;
  t57260 = t40341*t57153;
  t57261 = -1.*t41040*t57143;
  t57262 = t57260 + t57261;
  t57270 = t41332*t41040;
  t57271 = t40341*t57160;
  t57272 = t57270 + t57271;
  t56856 = -1.*t41332*t43540;
  t56857 = t56856 + t53919;
  t56864 = t43540*t40132;
  t56865 = t53936 + t56864;
  t56867 = -1.*t41332*t41654;
  t56874 = -1.*t40174*t41332*t43737;
  t56875 = -1.*t22836*t41332*t46594;
  t56876 = t53919 + t56874 + t56875;
  t57293 = t40994*t57153;
  t57300 = -1.*t57153*t40132;
  t56892 = t40174*t40132*t43737;
  t56893 = t22836*t40132*t46594;
  t56894 = t53936 + t56892 + t56893;
  t57330 = t57139*t40205;
  t57336 = -1.*t41359*t57139;
  t57374 = -1.*t57149*t51040;
  t57277 = t40341*t41332;
  t57278 = -1.*t41040*t57160;
  t57279 = t57277 + t57278;
  t57077 = -0.15121*t56659;
  t57078 = -0.15121*t40132;
  t57079 = t57077 + t57078;
  t57080 = var2[12]*t57079;
  t57081 = -1.*t22836*t43737;
  t57082 = t40174*t46594;
  t57083 = t57081 + t57082;
  t57414 = t41285*t57139;
  t57421 = -1.*t57139*t40205;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t40215*t41225 - 1.*t40205*t668)*var2[1] + t41245*var2[2];
  p_output1[10]=(t40215*t41040*t41264 - 1.*t41285*t668)*var2[1] + (t40215*t41285 + t41040*t41264*t668)*var2[2];
  p_output1[11]=(-1.*t40215*t41389 - 1.*t41359*t668)*var2[1] + t41420*var2[2];
  p_output1[12]=t41225*var2[0] - 1.*t41468*t668*var2[1] + t40215*t41468*var2[2] + (t41524*(t41040*t41264*t50187 + t41040*t41264*t50272) + t41389*t51424 + t40341*t41264*(t41389*t50187 + t41389*t50272 + t41524*t51411 + t51411*t51604) - 1.*t41040*t41264*t51967)*var2[3];
  p_output1[13]=-1.*t41040*t41264*var2[0] + t40341*t41264*t668*var2[1] - 1.*t40215*t40341*t41264*var2[2] + ((-1.*t41389*t50187 - 1.*t41389*t50272 - 1.*t41524*t51411 - 1.*t51411*t51604)*t52124 + t41524*(t41225*t50187 + t41225*t50272 + t41468*t51411 + t51411*t52124) + t41225*t52161 + t41389*t52189)*var2[3];
  p_output1[14]=t41389*var2[0] - 1.*t51604*t668*var2[1] + t40215*t51604*var2[2] + ((-1.*t41040*t41264*t50187 - 1.*t41040*t41264*t50272)*t52124 + t40341*t41264*(-1.*t41225*t50187 - 1.*t41225*t50272 - 1.*t41468*t51411 - 1.*t51411*t52124) + t41225*t52363 - 1.*t41040*t41264*t52433)*var2[3];
  p_output1[15]=t52454 + t52479 + t52494 + (t52570 + t41524*(t52505 + t52508 - 1.*t41264*t52502*t52574 - 1.*t41264*t52502*t52577 + t52582 + t52586) + t40341*t41264*(-1.*t41040*t41389*t52502 + t40341*t41524*t52502 + t52528 + t52545 + t52685 + t52694) + t52698)*var2[3] + (t52499 + t41359*(-1.*t41264*t52502 + t52505 + t52508 + t52519) + t41285*(t41385*t52502 + t52528 + t52541 + t52545) + t52556)*var2[4];
  p_output1[16]=t53783 + t53817 + t53872 + (t52124*(t41040*t41389*t52502 - 1.*t40341*t41524*t52502 + t53875 + t53883 + t53978 + t53979) + t41524*(-1.*t41040*t41225*t52502 + t40341*t52124*t52502 + t53927 + t53931 + t54041 + t54042) + t54049 + t54050)*var2[3] + (t40205*(-1.*t41385*t52502 + t53875 + t53876 + t53883) + t53925 + t41359*(t41210*t52502 + t53927 + t53929 + t53931) + t53942)*var2[4];
  p_output1[17]=t54065 + t54099 + t54147 + (t54379 + t52124*(t41264*t52502*t52574 + t41264*t52502*t52577 + t54292 + t54293 + t54437 + t54438) + t40341*t41264*(t41040*t41225*t52502 - 1.*t40341*t52124*t52502 + t54303 + t54307 + t54497 + t54498) + t54508)*var2[3] + (t54206 + t40205*(t41264*t52502 + t54292 + t54293 + t54296) + t41285*(-1.*t41210*t52502 + t54303 + t54306 + t54307) + t54331)*var2[4];
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
  p_output1[36]=t52454 + t52479 + t52494 + (t52570 + t52698 + t41524*(t52505 + t52582 + t52586 - 1.*t41264*t52574*t54864 - 1.*t41264*t52577*t54864 + t54922) + t40341*t41264*(t52528 + t52685 + t52694 - 1.*t41040*t41389*t54864 + t40341*t41524*t54864 + t56401))*var2[3] + (t52499 + t52556 + t41359*(t52505 + t52519 - 1.*t41264*t54864 + t54922) + t41285*(t52528 + t52541 + t41385*t54864 + t56401))*var2[4] + t40132*(t40174*t43737 + t22836*t46594 - 1.*t40174*t54527 + t22836*t54540)*var2[5];
  p_output1[37]=t53783 + t53817 + t53872 + (t54049 + t54050 + t52124*(t53875 + t53978 + t53979 + t41040*t41389*t54864 - 1.*t40341*t41524*t54864 + t56441) + t41524*(t53927 + t54041 + t54042 - 1.*t41040*t41225*t54864 + t40341*t52124*t54864 + t56445))*var2[3] + (t53925 + t53942 + t40205*(t53875 + t53876 - 1.*t41385*t54864 + t56441) + t41359*(t53927 + t53929 + t41210*t54864 + t56445))*var2[4] + (t40132*(-1.*t22836*t40132*t43737 + t40132*t40174*t46594 + t22836*t40132*t54527 + t40132*t40174*t54540) + t40994*(t22836*t41332*t43737 - 1.*t40174*t41332*t46594 - 1.*t22836*t41332*t54527 - 1.*t40174*t41332*t54540))*var2[5];
  p_output1[38]=t54065 + t54099 + t54147 + (t54379 + t54508 + t52124*(t54292 + t54437 + t54438 + t41264*t52574*t54864 + t41264*t52577*t54864 + t56633) + t40341*t41264*(t54303 + t54497 + t54498 + t41040*t41225*t54864 - 1.*t40341*t52124*t54864 + t56637))*var2[3] + (t54206 + t54331 + t40205*(t54292 + t54296 + t41264*t54864 + t56633) + t41285*(t54303 + t54306 - 1.*t41210*t54864 + t56637))*var2[4] + t40994*(-1.*t40174*t43737 - 1.*t22836*t46594 + t40174*t54527 - 1.*t22836*t54540)*var2[5];
  p_output1[39]=t56665*var2[0] + (t40215*t56669 - 1.*t56673*t668)*var2[1] + (t40215*t56673 + t56669*t668)*var2[2] + (t51424*t52124 + t41524*(t56819 - 1.*t40341*t41264*t56840 + t41040*t41264*t56844) + t40341*t41264*(t52183 + t52184 + t52188 + t56832 + t41524*t56840 + t41389*t56844))*var2[3] + (t40205*t52496 + t41359*(t56819 - 1.*t41264*t56822) + t41285*(t52183 + t53936 + t53938 + t41385*t56822 + t40132*t56830 + t56832))*var2[4] + t40994*t56655*var2[5];
  p_output1[40]=(t52124*t52189 + t52161*t56665 + t41524*(t50272*t56665 + t51411*t56673 + t52124*t56840 + t41225*t56844 + t56899 + t56901) + t52124*(t52393 + t52429 + t52432 - 1.*t41524*t56840 - 1.*t41389*t56844 + t56905))*var2[3] + (t40205*t53941 + t53924*t56669 + t41359*(t50154*t56663 + t41210*t56822 + t56859 + t56861 + t56899 + t56901) + t40205*(t52393 + t54320 + t54321 - 1.*t41385*t56822 + t56869 + t56905))*var2[4] + (t56659*t56876 + t40132*(t40174*t40994*t43737 + t22836*t40994*t46594 + t56859 + t56861 + t40132*t41654*t56878 + t40132*t41654*t56880) + t40994*(-1.*t40132*t40174*t43737 - 1.*t22836*t40132*t46594 + t54320 + t56869 - 1.*t41332*t41654*t56878 - 1.*t41332*t41654*t56880) + t40994*t56894)*var2[5] + (t56659*t56857 + t40132*(t40994*t43540 + t52549 + t56859 + t56861) + t40994*t56865 + t40994*(-1.*t40132*t43540 + t54320 + t56867 + t56869))*var2[12];
  p_output1[41]=t57080 + t52124*var2[0] + t41245*var2[1] + (t40215*t41225 + t40205*t668)*var2[2] + (t52363*t56665 + t52124*(t40341*t41264*t56840 - 1.*t41040*t41264*t56844 + t57091) + t40341*t41264*(-1.*t50272*t56665 - 1.*t51411*t56673 - 1.*t52124*t56840 - 1.*t41225*t56844 + t57099 + t57101))*var2[3] + (t54195*t56669 + t40205*(t41264*t56822 + t57091) + t41285*(-1.*t41654*t56659 - 1.*t50154*t56663 - 1.*t41210*t56822 - 1.*t40994*t56830 + t57099 + t57101))*var2[4] + t56659*t57083*var2[5];
  p_output1[42]=t41524*var2[0] + t41420*var2[1] + (t40215*t41389 + t41359*t668)*var2[2] + (t41524*(t57140 - 1.*t40341*t41264*t57257 + t41040*t41264*t57262) + t51424*t57272 + t40341*t41264*(t57155 + t57157 + t41524*t57257 + t41389*t57262 + t50272*t57272 + t51411*t57279))*var2[3] + (t41359*(t57140 - 1.*t41264*t57143) + t52496*t57149 + t41285*(t41332*t41654 + t41385*t57143 + t40132*t57153 + t57155 + t57157 + t50154*t57160))*var2[4] + t41332*t56655*var2[5] + (0.28121*t28054 - 0.27*Power(t28054,2) - 1.*t28054*t41638)*var2[13];
  p_output1[43]=(t41524*t52161 + t52189*t57272 + t41524*(t51961 + t51964 + t51965 + t52124*t57257 + t41225*t57262 + t57330) + t52124*(-1.*t41524*t57257 - 1.*t41389*t57262 - 1.*t50272*t57272 - 1.*t51411*t57279 + t57336 + t57374))*var2[3] + (t41359*t53924 + t53941*t57149 + t41359*(t51961 + t52549 + t52553 + t41210*t57143 + t57293 + t57330) + t40205*(t56867 - 1.*t41385*t57143 - 1.*t50154*t57160 + t57300 + t57336 + t57374))*var2[4] + (t40132*t56876 + t41332*t56894 + t40132*(t40174*t41332*t43737 + t22836*t41332*t46594 + t52549 + t40132*t56878*t57136 + t40132*t56880*t57136 + t57293) + t40994*(-1.*t40174*t43737*t56659 - 1.*t22836*t46594*t56659 + t56867 - 1.*t41332*t56878*t57136 - 1.*t41332*t56880*t57136 + t57300))*var2[5] + (t40132*t56857 + t41332*t56865 + t40132*(t41332*t43540 + t52549 + t40132*t57136 + t57293) + t40994*(-1.*t43540*t56659 + t56867 - 1.*t41332*t57136 + t57300))*var2[12];
  p_output1[44]=t57080 + t57272*var2[0] + (t40215*t57149 - 1.*t57279*t668)*var2[1] + (t40215*t57279 + t57149*t668)*var2[2] + (t41524*t52363 + t52124*(t40341*t41264*t57257 - 1.*t41040*t41264*t57262 + t57414) + t40341*t41264*(t52154 + t52158 + t52159 - 1.*t52124*t57257 - 1.*t41225*t57262 + t57421))*var2[3] + (t41359*t54195 + t40205*(t41264*t57143 + t57414) + t41285*(t52154 + t53919 + t53921 - 1.*t41210*t57143 - 1.*t40994*t57153 + t57421))*var2[4] + t40132*t57083*var2[5] + (-0.28121*t39298 + 0.27*t28054*t39298 + t39298*t41638)*var2[13];
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

#include "dJh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
