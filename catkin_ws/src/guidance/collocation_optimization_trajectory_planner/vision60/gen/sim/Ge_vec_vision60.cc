/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:19 GMT+02:00
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
  double t10;
  double t59;
  double t40;
  double t49;
  double t60;
  double t5;
  double t9;
  double t73;
  double t105;
  double t109;
  double t118;
  double t57;
  double t62;
  double t67;
  double t184;
  double t214;
  double t69;
  double t248;
  double t262;
  double t27;
  double t90;
  double t93;
  double t121;
  double t135;
  double t141;
  double t142;
  double t289;
  double t296;
  double t297;
  double t298;
  double t301;
  double t189;
  double t217;
  double t218;
  double t219;
  double t223;
  double t226;
  double t227;
  double t319;
  double t329;
  double t330;
  double t336;
  double t338;
  double t261;
  double t263;
  double t264;
  double t265;
  double t268;
  double t270;
  double t273;
  double t351;
  double t364;
  double t369;
  double t377;
  double t379;
  double t291;
  double t292;
  double t294;
  double t295;
  double t302;
  double t304;
  double t306;
  double t307;
  double t391;
  double t392;
  double t394;
  double t395;
  double t398;
  double t320;
  double t321;
  double t327;
  double t328;
  double t340;
  double t341;
  double t344;
  double t345;
  double t421;
  double t428;
  double t429;
  double t430;
  double t432;
  double t353;
  double t354;
  double t357;
  double t361;
  double t380;
  double t381;
  double t384;
  double t387;
  double t451;
  double t453;
  double t454;
  double t456;
  double t458;
  double t206;
  double t505;
  double t519;
  double t514;
  double t515;
  double t517;
  double t525;
  double t527;
  double t538;
  double t551;
  double t571;
  double t577;
  double t578;
  double t579;
  double t580;
  double t572;
  double t574;
  double t575;
  double t576;
  double t581;
  double t582;
  double t583;
  double t586;
  double t590;
  double t598;
  double t599;
  double t600;
  double t602;
  double t617;
  double t618;
  double t620;
  double t621;
  double t622;
  double t623;
  double t663;
  double t665;
  double t672;
  double t637;
  double t639;
  double t641;
  double t643;
  double t644;
  double t690;
  double t691;
  double t692;
  double t648;
  double t649;
  double t651;
  double t652;
  double t653;
  double t718;
  double t720;
  double t721;
  double t661;
  double t662;
  double t677;
  double t399;
  double t404;
  double t678;
  double t679;
  double t682;
  double t734;
  double t736;
  double t737;
  double t688;
  double t689;
  double t693;
  double t433;
  double t435;
  double t696;
  double t701;
  double t702;
  double t748;
  double t750;
  double t751;
  double t714;
  double t717;
  double t723;
  double t459;
  double t464;
  double t724;
  double t725;
  double t726;
  double t772;
  double t776;
  double t777;
  double t636;
  double t803;
  double t804;
  double t813;
  double t814;
  double t815;
  double t841;
  double t843;
  double t844;
  double t830;
  double t838;
  double t849;
  double t591;
  double t596;
  double t866;
  double t872;
  double t873;
  double t906;
  double t908;
  double t911;
  double t961;
  double t966;
  double t967;
  double t991;
  double t992;
  double t993;
  double t1011;
  double t1063;
  double t984;
  double t1055;
  double t1032;
  double t1101;
  double t1107;
  double t1117;
  double t1128;
  double t1133;
  double t1164;
  double t1293;
  double t1303;
  double t1305;
  double t1181;
  double t1184;
  double t1187;
  double t1194;
  double t1197;
  double t1198;
  double t1331;
  double t1343;
  double t1345;
  double t1224;
  double t1231;
  double t1237;
  double t1240;
  double t1241;
  double t1250;
  double t1384;
  double t1402;
  double t1406;
  double t1070;
  double t1490;
  double t1493;
  double t1498;
  double t1499;
  double t1504;
  double t1507;
  double t1546;
  double t1551;
  double t1557;
  double t1635;
  double t1642;
  double t1663;
  double t1666;
  double t1679;
  double t1711;
  double t1752;
  double t1753;
  double t1754;
  double t2095;
  double t2098;
  double t2135;
  double t2078;
  double t2139;
  double t2159;
  double t2173;
  double t2203;
  double t2300;
  double t2310;
  double t2334;
  double t2385;
  double t2391;
  double t2407;
  double t2448;
  double t2449;
  double t2454;
  double t2458;
  double t2461;
  double t2483;
  double t2484;
  double t2485;
  double t2479;
  double t2567;
  double t2568;
  double t2573;
  double t2575;
  double t2577;
  double t2606;
  double t2608;
  double t2610;
  double t2647;
  double t2664;
  double t2676;
  double t2752;
  double t2754;
  double t2759;
  double t2766;
  double t2783;
  double t2872;
  double t2873;
  double t2891;
  double t2792;
  double t2951;
  double t2957;
  double t2961;
  double t2964;
  double t2975;
  double t3030;
  double t3034;
  double t3035;
  double t3070;
  double t3074;
  double t3081;
  double t3136;
  double t3138;
  double t3152;
  double t3155;
  double t3156;
  double t3190;
  double t3191;
  double t3194;
  double t3159;
  double t3232;
  double t3233;
  double t3244;
  double t3245;
  double t3250;
  double t3272;
  double t3279;
  double t3282;
  double t3341;
  double t3348;
  double t3350;
  t10 = Sin(var1[3]);
  t59 = Cos(var1[3]);
  t40 = Cos(var1[5]);
  t49 = Sin(var1[4]);
  t60 = Sin(var1[5]);
  t5 = Cos(var1[4]);
  t9 = Sin(var1[9]);
  t73 = Cos(var1[9]);
  t105 = t59*t40;
  t109 = -1.*t10*t49*t60;
  t118 = t105 + t109;
  t57 = t40*t10*t49;
  t62 = t59*t60;
  t67 = t57 + t62;
  t184 = Sin(var1[12]);
  t214 = Cos(var1[12]);
  t69 = -0.325*t67;
  t248 = Sin(var1[15]);
  t262 = Cos(var1[15]);
  t27 = 0.1575*t5*t9*t10;
  t90 = -1.*t73;
  t93 = 1. + t90;
  t121 = 0.1575*t93*t118;
  t135 = -1.*t5*t9*t10;
  t141 = t73*t118;
  t142 = t135 + t141;
  t289 = Cos(var1[10]);
  t296 = Sin(var1[10]);
  t297 = -1.*t73*t5*t10;
  t298 = -1.*t9*t118;
  t301 = t297 + t298;
  t189 = -0.1575*t5*t184*t10;
  t217 = -1.*t214;
  t218 = 1. + t217;
  t219 = -0.1575*t218*t118;
  t223 = -1.*t5*t184*t10;
  t226 = t214*t118;
  t227 = t223 + t226;
  t319 = Cos(var1[13]);
  t329 = Sin(var1[13]);
  t330 = -1.*t214*t5*t10;
  t336 = -1.*t184*t118;
  t338 = t330 + t336;
  t261 = -0.1575*t5*t248*t10;
  t263 = -1.*t262;
  t264 = 1. + t263;
  t265 = -0.1575*t264*t118;
  t268 = -1.*t5*t248*t10;
  t270 = t262*t118;
  t273 = t268 + t270;
  t351 = Cos(var1[16]);
  t364 = Sin(var1[16]);
  t369 = -1.*t262*t5*t10;
  t377 = -1.*t248*t118;
  t379 = t369 + t377;
  t291 = -1.*t289;
  t292 = 1. + t291;
  t294 = -0.325*t292*t67;
  t295 = 0.2255*t142;
  t302 = 0.325*t296*t301;
  t304 = t289*t67;
  t306 = t296*t301;
  t307 = t304 + t306;
  t391 = Sin(var1[11]);
  t392 = -1.*t296*t67;
  t394 = t289*t301;
  t395 = t392 + t394;
  t398 = Cos(var1[11]);
  t320 = -1.*t319;
  t321 = 1. + t320;
  t327 = 0.325*t321*t67;
  t328 = -0.2255*t227;
  t340 = -0.325*t329*t338;
  t341 = t319*t67;
  t344 = t329*t338;
  t345 = t341 + t344;
  t421 = Sin(var1[14]);
  t428 = -1.*t329*t67;
  t429 = t319*t338;
  t430 = t428 + t429;
  t432 = Cos(var1[14]);
  t353 = -1.*t351;
  t354 = 1. + t353;
  t357 = -0.325*t354*t67;
  t361 = -0.2255*t273;
  t380 = 0.325*t364*t379;
  t381 = t351*t67;
  t384 = t364*t379;
  t387 = t381 + t384;
  t451 = Sin(var1[17]);
  t453 = -1.*t364*t67;
  t454 = t351*t379;
  t456 = t453 + t454;
  t458 = Cos(var1[17]);
  t206 = 0.325*t67;
  t505 = Cos(var1[6]);
  t519 = Sin(var1[6]);
  t514 = -1.*t505;
  t515 = 1. + t514;
  t517 = 0.1575*t515*t118;
  t525 = 0.1575*t5*t10*t519;
  t527 = t505*t118;
  t538 = -1.*t5*t10*t519;
  t551 = t527 + t538;
  t571 = Cos(var1[7]);
  t577 = -1.*t5*t505*t10;
  t578 = -1.*t118*t519;
  t579 = t577 + t578;
  t580 = Sin(var1[7]);
  t572 = -1.*t571;
  t574 = 1. + t572;
  t575 = 0.325*t574*t67;
  t576 = 0.2255*t551;
  t581 = -0.325*t579*t580;
  t582 = t571*t67;
  t583 = t579*t580;
  t586 = t582 + t583;
  t590 = Cos(var1[8]);
  t598 = t571*t579;
  t599 = -1.*t67*t580;
  t600 = t598 + t599;
  t602 = Sin(var1[8]);
  t617 = 0.325*t59*t5*t40;
  t618 = 0.1575*t59*t9*t49;
  t620 = 0.1575*t93*t59*t5*t60;
  t621 = -1.*t59*t9*t49;
  t622 = t73*t59*t5*t60;
  t623 = t621 + t622;
  t663 = -1.*t73*t59*t49;
  t665 = -1.*t59*t5*t9*t60;
  t672 = t663 + t665;
  t637 = -0.1575*t59*t184*t49;
  t639 = -0.1575*t218*t59*t5*t60;
  t641 = -1.*t59*t184*t49;
  t643 = t214*t59*t5*t60;
  t644 = t641 + t643;
  t690 = -1.*t214*t59*t49;
  t691 = -1.*t59*t5*t184*t60;
  t692 = t690 + t691;
  t648 = -0.1575*t59*t248*t49;
  t649 = -0.1575*t264*t59*t5*t60;
  t651 = -1.*t59*t248*t49;
  t652 = t262*t59*t5*t60;
  t653 = t651 + t652;
  t718 = -1.*t262*t59*t49;
  t720 = -1.*t59*t5*t248*t60;
  t721 = t718 + t720;
  t661 = 0.325*t292*t59*t5*t40;
  t662 = 0.2255*t623;
  t677 = 0.325*t296*t672;
  t399 = -1.*t398;
  t404 = 1. + t399;
  t678 = -1.*t289*t59*t5*t40;
  t679 = t296*t672;
  t682 = t678 + t679;
  t734 = t59*t5*t40*t296;
  t736 = t289*t672;
  t737 = t734 + t736;
  t688 = -0.325*t321*t59*t5*t40;
  t689 = -0.2255*t644;
  t693 = -0.325*t329*t692;
  t433 = -1.*t432;
  t435 = 1. + t433;
  t696 = -1.*t319*t59*t5*t40;
  t701 = t329*t692;
  t702 = t696 + t701;
  t748 = t59*t5*t40*t329;
  t750 = t319*t692;
  t751 = t748 + t750;
  t714 = 0.325*t354*t59*t5*t40;
  t717 = -0.2255*t653;
  t723 = 0.325*t364*t721;
  t459 = -1.*t458;
  t464 = 1. + t459;
  t724 = -1.*t351*t59*t5*t40;
  t725 = t364*t721;
  t726 = t724 + t725;
  t772 = t59*t5*t40*t364;
  t776 = t351*t721;
  t777 = t772 + t776;
  t636 = -0.325*t59*t5*t40;
  t803 = 0.1575*t59*t5*t515*t60;
  t804 = 0.1575*t59*t49*t519;
  t813 = t59*t5*t505*t60;
  t814 = -1.*t59*t49*t519;
  t815 = t813 + t814;
  t841 = -1.*t59*t505*t49;
  t843 = -1.*t59*t5*t60*t519;
  t844 = t841 + t843;
  t830 = -0.325*t59*t5*t40*t574;
  t838 = 0.2255*t815;
  t849 = -0.325*t844*t580;
  t591 = -1.*t590;
  t596 = 1. + t591;
  t866 = -1.*t59*t5*t40*t571;
  t872 = t844*t580;
  t873 = t866 + t872;
  t906 = t571*t844;
  t908 = t59*t5*t40*t580;
  t911 = t906 + t908;
  t961 = t59*t40*t49;
  t966 = -1.*t10*t60;
  t967 = t961 + t966;
  t991 = t40*t10;
  t992 = t59*t49*t60;
  t993 = t991 + t992;
  t1011 = -0.325*t993;
  t1063 = 0.325*t993;
  t984 = 0.1575*t93*t967;
  t1055 = -0.1575*t218*t967;
  t1032 = -0.1575*t264*t967;
  t1101 = 0.2255*t73*t967;
  t1107 = -0.325*t9*t296*t967;
  t1117 = -0.325*t292*t993;
  t1128 = -1.*t9*t296*t967;
  t1133 = t289*t993;
  t1164 = t1128 + t1133;
  t1293 = -1.*t289*t9*t967;
  t1303 = -1.*t296*t993;
  t1305 = t1293 + t1303;
  t1181 = -0.2255*t214*t967;
  t1184 = 0.325*t184*t329*t967;
  t1187 = 0.325*t321*t993;
  t1194 = -1.*t184*t329*t967;
  t1197 = t319*t993;
  t1198 = t1194 + t1197;
  t1331 = -1.*t319*t184*t967;
  t1343 = -1.*t329*t993;
  t1345 = t1331 + t1343;
  t1224 = -0.2255*t262*t967;
  t1231 = -0.325*t248*t364*t967;
  t1237 = -0.325*t354*t993;
  t1240 = -1.*t248*t364*t967;
  t1241 = t351*t993;
  t1250 = t1240 + t1241;
  t1384 = -1.*t351*t248*t967;
  t1402 = -1.*t364*t993;
  t1406 = t1384 + t1402;
  t1070 = 0.1575*t515*t967;
  t1490 = 0.2255*t505*t967;
  t1493 = 0.325*t574*t993;
  t1498 = 0.325*t967*t519*t580;
  t1499 = t571*t993;
  t1504 = -1.*t967*t519*t580;
  t1507 = t1499 + t1504;
  t1546 = -1.*t571*t967*t519;
  t1551 = -1.*t993*t580;
  t1557 = t1546 + t1551;
  t1635 = -0.1575*t59*t5*t505;
  t1642 = 0.1575*t993*t519;
  t1663 = t59*t5*t505;
  t1666 = -1.*t993*t519;
  t1679 = t1663 + t1666;
  t1711 = 0.2255*t1679;
  t1752 = -1.*t505*t993;
  t1753 = -1.*t59*t5*t519;
  t1754 = t1752 + t1753;
  t2095 = -1.*t59*t40*t49;
  t2098 = t10*t60;
  t2135 = t2095 + t2098;
  t2078 = -0.325*t571*t1679;
  t2139 = 0.325*t2135*t580;
  t2159 = t571*t1679;
  t2173 = -1.*t2135*t580;
  t2203 = t2159 + t2173;
  t2300 = -1.*t571*t2135;
  t2310 = -1.*t1679*t580;
  t2334 = t2300 + t2310;
  t2385 = t571*t2135;
  t2391 = t1679*t580;
  t2407 = t2385 + t2391;
  t2448 = -0.1575*t73*t59*t5;
  t2449 = 0.1575*t9*t993;
  t2454 = t73*t59*t5;
  t2458 = -1.*t9*t993;
  t2461 = t2454 + t2458;
  t2483 = -1.*t59*t5*t9;
  t2484 = -1.*t73*t993;
  t2485 = t2483 + t2484;
  t2479 = 0.2255*t2461;
  t2567 = -0.325*t296*t2135;
  t2568 = 0.325*t289*t2461;
  t2573 = -1.*t296*t2135;
  t2575 = t289*t2461;
  t2577 = t2573 + t2575;
  t2606 = -1.*t289*t2135;
  t2608 = -1.*t296*t2461;
  t2610 = t2606 + t2608;
  t2647 = t289*t2135;
  t2664 = t296*t2461;
  t2676 = t2647 + t2664;
  t2752 = 0.1575*t214*t59*t5;
  t2754 = -0.1575*t184*t993;
  t2759 = t214*t59*t5;
  t2766 = -1.*t184*t993;
  t2783 = t2759 + t2766;
  t2872 = -1.*t59*t5*t184;
  t2873 = -1.*t214*t993;
  t2891 = t2872 + t2873;
  t2792 = -0.2255*t2783;
  t2951 = 0.325*t329*t2135;
  t2957 = -0.325*t319*t2783;
  t2961 = -1.*t329*t2135;
  t2964 = t319*t2783;
  t2975 = t2961 + t2964;
  t3030 = -1.*t319*t2135;
  t3034 = -1.*t329*t2783;
  t3035 = t3030 + t3034;
  t3070 = t319*t2135;
  t3074 = t329*t2783;
  t3081 = t3070 + t3074;
  t3136 = 0.1575*t262*t59*t5;
  t3138 = -0.1575*t248*t993;
  t3152 = t262*t59*t5;
  t3155 = -1.*t248*t993;
  t3156 = t3152 + t3155;
  t3190 = -1.*t59*t5*t248;
  t3191 = -1.*t262*t993;
  t3194 = t3190 + t3191;
  t3159 = -0.2255*t3156;
  t3232 = -0.325*t364*t2135;
  t3233 = 0.325*t351*t3156;
  t3244 = -1.*t364*t2135;
  t3245 = t351*t3156;
  t3250 = t3244 + t3245;
  t3272 = -1.*t351*t2135;
  t3279 = -1.*t364*t3156;
  t3282 = t3272 + t3279;
  t3341 = t351*t2135;
  t3348 = t364*t3156;
  t3350 = t3341 + t3348;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-26.977500000000003*(t189 + t206 + t219 - 0.1575*t227) - 6.1312500000000005*(t121 + t27 + t294 + t295 + t302 - 0.325*t307) - 6.1312500000000005*(t189 + t219 + t327 + t328 + t340 + 0.325*t345) - 6.1312500000000005*(t261 + t265 + t357 + t361 + t380 - 0.325*t387) - 1.9620000000000002*(t121 + t27 + t294 + t295 + t302 - 0.575*t391*t395 - 0.575*(-1.*t391*t395 + t307*t398) - 0.575*t307*t404) - 1.9620000000000002*(t189 + t219 + t327 + t328 + t340 + 0.075*t421*t430 + 0.075*(-1.*t421*t430 + t345*t432) + 0.075*t345*t435) - 1.9620000000000002*(t261 + t265 + t357 + t361 + t380 - 0.575*t451*t456 - 0.575*(-1.*t451*t456 + t387*t458) - 0.575*t387*t464) - 26.977500000000003*(t206 + t517 + t525 + 0.1575*t551) - 6.1312500000000005*(t517 + t525 + t575 + t576 + t581 + 0.325*t586) - 1.9620000000000002*(t517 + t525 + t575 + t576 + t581 + 0.075*t586*t596 + 0.075*t600*t602 + 0.075*(t586*t590 - 1.*t600*t602)) - 26.977500000000003*(t121 + 0.1575*t142 + t27 + t69) - 26.977500000000003*(t261 + t265 - 0.1575*t273 + t69);
  p_output1[4]=-26.977500000000003*(t617 + t618 + t620 + 0.1575*t623) - 26.977500000000003*(t636 + t637 + t639 - 0.1575*t644) - 26.977500000000003*(t617 + t648 + t649 - 0.1575*t653) - 6.1312500000000005*(t618 + t620 + t661 + t662 + t677 - 0.325*t682) - 6.1312500000000005*(t637 + t639 + t688 + t689 + t693 + 0.325*t702) - 6.1312500000000005*(t648 + t649 + t714 + t717 + t723 - 0.325*t726) - 1.9620000000000002*(t618 + t620 + t661 + t662 + t677 - 0.575*t404*t682 - 0.575*t391*t737 - 0.575*(t398*t682 - 1.*t391*t737)) - 1.9620000000000002*(t637 + t639 + t688 + t689 + t693 + 0.075*t435*t702 + 0.075*t421*t751 + 0.075*(t432*t702 - 1.*t421*t751)) - 1.9620000000000002*(t648 + t649 + t714 + t717 + t723 - 0.575*t464*t726 - 0.575*t451*t777 - 0.575*(t458*t726 - 1.*t451*t777)) - 26.977500000000003*(t636 + t803 + t804 + 0.1575*t815) - 6.1312500000000005*(t803 + t804 + t830 + t838 + t849 + 0.325*t873) - 1.9620000000000002*(t803 + t804 + t830 + t838 + t849 + 0.075*t596*t873 + 0.075*t602*t911 + 0.075*(t590*t873 - 1.*t602*t911));
  p_output1[5]=-6.1312500000000005*(t1055 + t1181 + t1184 + t1187 + 0.325*t1198) - 6.1312500000000005*(t1032 + t1224 + t1231 + t1237 - 0.325*t1250) - 6.1312500000000005*(t1070 + t1490 + t1493 + t1498 + 0.325*t1507) - 1.9620000000000002*(t1055 + t1181 + t1184 + t1187 + 0.075*t1345*t421 + 0.075*(-1.*t1345*t421 + t1198*t432) + 0.075*t1198*t435) - 1.9620000000000002*(t1032 + t1224 + t1231 + t1237 - 0.575*t1406*t451 - 0.575*(-1.*t1406*t451 + t1250*t458) - 0.575*t1250*t464) - 1.9620000000000002*(t1070 + t1490 + t1493 + t1498 + 0.075*t1507*t596 + 0.075*t1557*t602 + 0.075*(t1507*t590 - 1.*t1557*t602)) - 26.977500000000003*(t1055 + t1063 - 0.1575*t214*t967) - 26.977500000000003*(t1011 + t1032 - 0.1575*t262*t967) - 26.977500000000003*(t1063 + t1070 + 0.1575*t505*t967) - 6.1312500000000005*(t1101 + t1107 + t1117 - 0.325*t1164 + t984) - 1.9620000000000002*(t1101 + t1107 + t1117 - 0.575*t1305*t391 - 0.575*(-1.*t1305*t391 + t1164*t398) - 0.575*t1164*t404 + t984) - 26.977500000000003*(t1011 + 0.1575*t73*t967 + t984);
  p_output1[6]=-26.977500000000003*(t1635 + t1642 + 0.1575*t1679) - 6.1312500000000005*(t1635 + t1642 + t1711) - 1.9620000000000002*(t1635 + t1642 + t1711 - 0.325*t1754*t580 + 0.075*t1754*t580*t596 + 0.075*t1754*t571*t602 + 0.075*(t1754*t580*t590 - 1.*t1754*t571*t602));
  p_output1[7]=-6.1312500000000005*(t2078 + t2139 + 0.325*t2203) - 1.9620000000000002*(t2078 + t2139 + 0.075*t2203*t596 + 0.075*t2334*t602 + 0.075*(t2203*t590 - 1.*t2334*t602));
  p_output1[8]=-1.9620000000000002*(0.075*t2203*t590 + 0.075*t2407*t602 + 0.075*(-1.*t2203*t590 - 1.*t2407*t602));
  p_output1[9]=-26.977500000000003*(t2448 + t2449 + 0.1575*t2461) - 6.1312500000000005*(t2448 + t2449 + t2479) - 1.9620000000000002*(t2448 + t2449 + t2479 + 0.325*t2485*t296 - 0.575*t2485*t289*t391 - 0.575*(-1.*t2485*t289*t391 + t2485*t296*t398) - 0.575*t2485*t296*t404);
  p_output1[10]=-6.1312500000000005*(t2567 + t2568 - 0.325*t2577) - 1.9620000000000002*(t2567 + t2568 - 0.575*t2610*t391 - 0.575*(-1.*t2610*t391 + t2577*t398) - 0.575*t2577*t404);
  p_output1[11]=-1.9620000000000002*(-0.575*t2676*t391 - 0.575*t2577*t398 - 0.575*(-1.*t2676*t391 - 1.*t2577*t398));
  p_output1[12]=-26.977500000000003*(t2752 + t2754 - 0.1575*t2783) - 6.1312500000000005*(t2752 + t2754 + t2792) - 1.9620000000000002*(t2752 + t2754 + t2792 - 0.325*t2891*t329 + 0.075*t2891*t319*t421 + 0.075*(-1.*t2891*t319*t421 + t2891*t329*t432) + 0.075*t2891*t329*t435);
  p_output1[13]=-6.1312500000000005*(t2951 + t2957 + 0.325*t2975) - 1.9620000000000002*(t2951 + t2957 + 0.075*t3035*t421 + 0.075*(-1.*t3035*t421 + t2975*t432) + 0.075*t2975*t435);
  p_output1[14]=-1.9620000000000002*(0.075*t3081*t421 + 0.075*t2975*t432 + 0.075*(-1.*t3081*t421 - 1.*t2975*t432));
  p_output1[15]=-26.977500000000003*(t3136 + t3138 - 0.1575*t3156) - 6.1312500000000005*(t3136 + t3138 + t3159) - 1.9620000000000002*(t3136 + t3138 + t3159 + 0.325*t3194*t364 - 0.575*t3194*t351*t451 - 0.575*(-1.*t3194*t351*t451 + t3194*t364*t458) - 0.575*t3194*t364*t464);
  p_output1[16]=-6.1312500000000005*(t3232 + t3233 - 0.325*t3250) - 1.9620000000000002*(t3232 + t3233 - 0.575*t3282*t451 - 0.575*(-1.*t3282*t451 + t3250*t458) - 0.575*t3250*t464);
  p_output1[17]=-1.9620000000000002*(-0.575*t3350*t451 - 0.575*t3250*t458 - 0.575*(-1.*t3350*t451 - 1.*t3250*t458));
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

#include "Ge_vec_vision60.hh"

namespace SymFunction
{

void Ge_vec_vision60_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
