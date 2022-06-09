/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:24 GMT+02:00
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
  double t63;
  double t54;
  double t55;
  double t74;
  double t56;
  double t75;
  double t76;
  double t27;
  double t102;
  double t107;
  double t121;
  double t33;
  double t123;
  double t131;
  double t101;
  double t124;
  double t125;
  double t7;
  double t148;
  double t162;
  double t173;
  double t174;
  double t176;
  double t177;
  double t178;
  double t179;
  double t180;
  double t239;
  double t251;
  double t255;
  double t296;
  double t297;
  double t298;
  double t300;
  double t301;
  double t302;
  double t303;
  double t304;
  double t305;
  double t295;
  double t299;
  double t306;
  double t307;
  double t285;
  double t286;
  double t287;
  double t291;
  double t308;
  double t309;
  double t311;
  double t312;
  double t314;
  double t315;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t326;
  double t330;
  double t334;
  double t335;
  double t336;
  double t350;
  double t354;
  double t359;
  double t263;
  double t264;
  double t268;
  double t269;
  double t278;
  double t279;
  double t344;
  double t345;
  double t346;
  double t340;
  double t341;
  double t342;
  double t262;
  double t280;
  double t283;
  double t310;
  double t337;
  double t338;
  double t368;
  double t369;
  double t372;
  double t374;
  double t378;
  double t379;
  double t418;
  double t419;
  double t420;
  double t381;
  double t404;
  double t405;
  double t406;
  double t407;
  double t434;
  double t435;
  double t436;
  double t438;
  double t445;
  double t446;
  double t447;
  double t382;
  double t383;
  double t384;
  double t449;
  double t451;
  double t408;
  double t409;
  double t410;
  double t430;
  double t441;
  double t477;
  double t478;
  double t479;
  double t483;
  double t484;
  double t505;
  double t506;
  double t507;
  double t431;
  double t432;
  double t481;
  double t485;
  double t493;
  double t495;
  double t442;
  double t443;
  double t516;
  double t517;
  double t521;
  double t525;
  double t526;
  double t533;
  double t534;
  double t535;
  double t537;
  double t538;
  double t539;
  double t541;
  double t542;
  double t543;
  double t545;
  double t546;
  double t547;
  double t474;
  double t475;
  double t568;
  double t569;
  double t570;
  double t585;
  double t586;
  double t578;
  double t579;
  double t580;
  double t581;
  double t576;
  double t584;
  double t587;
  double t612;
  double t613;
  double t614;
  double t603;
  double t604;
  double t605;
  double t608;
  double t609;
  double t610;
  double t619;
  double t620;
  double t621;
  double t615;
  double t618;
  double t623;
  double t629;
  double t630;
  double t631;
  double t633;
  double t634;
  double t635;
  double t637;
  double t638;
  double t639;
  double t657;
  double t658;
  double t659;
  double t588;
  double t674;
  double t675;
  double t676;
  double t684;
  double t685;
  double t686;
  double t690;
  double t691;
  double t692;
  double t694;
  double t695;
  double t696;
  double t670;
  double t671;
  double t668;
  double t677;
  double t710;
  double t711;
  double t712;
  double t706;
  double t707;
  double t708;
  double t713;
  double t717;
  double t718;
  double t724;
  double t725;
  double t726;
  double t728;
  double t729;
  double t730;
  double t732;
  double t733;
  double t734;
  double t211;
  double t212;
  double t217;
  double t488;
  double t489;
  double t490;
  double t361;
  double t363;
  double t364;
  double t738;
  double t739;
  double t386;
  double t387;
  double t391;
  double t716;
  double t792;
  double t810;
  double t812;
  double t784;
  double t822;
  double t824;
  double t793;
  double t794;
  double t795;
  double t817;
  double t669;
  double t673;
  double t549;
  double t550;
  double t551;
  double t847;
  double t849;
  double t815;
  double t857;
  double t859;
  double t818;
  double t819;
  double t876;
  double t878;
  double t500;
  double t501;
  double t502;
  double t883;
  double t884;
  double t556;
  double t557;
  double t558;
  double t852;
  double t853;
  double t854;
  double t862;
  double t912;
  double t913;
  double t920;
  double t918;
  double t910;
  double t914;
  double t944;
  double t947;
  double t949;
  double t644;
  double t645;
  double t646;
  double t925;
  double t926;
  double t932;
  double t933;
  double t974;
  double t975;
  double t980;
  double t985;
  double t981;
  double t983;
  double t972;
  double t976;
  double t1003;
  double t1006;
  double t683;
  double t687;
  double t688;
  double t1011;
  double t1012;
  double t770;
  double t771;
  double t772;
  double t599;
  double t600;
  double t601;
  double t1026;
  double t1027;
  double t1065;
  double t1010;
  double t1095;
  double t1066;
  double t1067;
  double t1068;
  double t1099;
  double t1101;
  double t1076;
  double t1090;
  double t973;
  double t1091;
  double t1092;
  double t1130;
  double t1132;
  double t518;
  double t1136;
  double t1138;
  double t1104;
  double t1155;
  double t1158;
  double t1162;
  double t1164;
  double t1126;
  double t1127;
  double t1189;
  double t1208;
  double t1212;
  double t763;
  double t764;
  double t747;
  double t748;
  double t749;
  double t1235;
  double t1237;
  double t1250;
  double t1253;
  double t1256;
  double t595;
  double t596;
  double t597;
  double t1141;
  t63 = Cos(var1[13]);
  t54 = Cos(var1[14]);
  t55 = Sin(var1[13]);
  t74 = Sin(var1[14]);
  t56 = t54*t55;
  t75 = -1.*t63*t74;
  t76 = t56 + t75;
  t27 = Cos(var1[5]);
  t102 = t63*t54;
  t107 = t55*t74;
  t121 = t102 + t107;
  t33 = Sin(var1[12]);
  t123 = Sin(var1[5]);
  t131 = Cos(var1[3]);
  t101 = -1.*t27*t33*t76;
  t124 = t121*t123;
  t125 = t101 + t124;
  t7 = Sin(var1[3]);
  t148 = Cos(var1[12]);
  t162 = Cos(var1[4]);
  t173 = t148*t162*t76;
  t174 = Sin(var1[4]);
  t176 = t27*t121;
  t177 = t33*t76*t123;
  t178 = t176 + t177;
  t179 = -1.*t174*t178;
  t180 = t173 + t179;
  t239 = -1.*t148*t76*t174;
  t251 = -1.*t162*t178;
  t255 = t239 + t251;
  t296 = -0.0641*t54;
  t297 = -0.28*t74;
  t298 = t296 + t297;
  t300 = -1.*t54;
  t301 = 1. + t300;
  t302 = 0.075*t301;
  t303 = 0.355*t54;
  t304 = -0.0641*t74;
  t305 = t302 + t303 + t304;
  t295 = -0.325*t55;
  t299 = t63*t298;
  t306 = t55*t305;
  t307 = t295 + t299 + t306;
  t285 = t162*t33;
  t286 = t148*t174*t123;
  t287 = t285 + t286;
  t291 = -0.068*t33;
  t308 = t148*t307;
  t309 = t291 + t308;
  t311 = -1.*t63;
  t312 = 1. + t311;
  t314 = 0.325*t312;
  t315 = -1.*t55*t298;
  t317 = t63*t305;
  t318 = t314 + t315 + t317;
  t319 = t27*t318;
  t320 = -1.*t148;
  t321 = 1. + t320;
  t322 = -0.1575*t321;
  t326 = -0.2255*t148;
  t330 = -1.*t33*t307;
  t334 = t322 + t326 + t330;
  t335 = -1.*t334*t123;
  t336 = t319 + t335;
  t350 = t162*t309;
  t354 = -1.*t174*t336;
  t359 = t350 + t354;
  t263 = -1.*t54*t55;
  t264 = t63*t74;
  t268 = t263 + t264;
  t269 = t27*t268;
  t278 = t33*t121*t123;
  t279 = t269 + t278;
  t344 = t33*t174;
  t345 = -1.*t148*t162*t123;
  t346 = t344 + t345;
  t340 = t309*t174;
  t341 = t162*t336;
  t342 = t340 + t341;
  t262 = t148*t121*t174;
  t280 = t162*t279;
  t283 = t262 + t280;
  t310 = -1.*t309*t174;
  t337 = -1.*t162*t336;
  t338 = t310 + t337;
  t368 = t148*t162*t121;
  t369 = -1.*t174*t279;
  t372 = t368 + t369;
  t374 = t27*t334;
  t378 = t318*t123;
  t379 = t374 + t378;
  t418 = t27*t33*t76;
  t419 = -1.*t121*t123;
  t420 = t418 + t419;
  t381 = -1.*t148*t27*t379;
  t404 = -1.*t27*t33*t121;
  t405 = t268*t123;
  t406 = t404 + t405;
  t407 = t379*t406;
  t434 = -1.*t27*t334;
  t435 = -1.*t318*t123;
  t436 = t434 + t435;
  t438 = t148*t123*t379;
  t445 = t27*t33*t121;
  t446 = -1.*t268*t123;
  t447 = t445 + t446;
  t382 = -1.*t346*t342;
  t383 = -1.*t287*t359;
  t384 = t381 + t382 + t383;
  t449 = t336*t406;
  t451 = t379*t279;
  t408 = t342*t283;
  t409 = t359*t372;
  t410 = t407 + t408 + t409;
  t430 = -1.*t33*t309;
  t441 = t148*t309*t121;
  t477 = 0.068*t33;
  t478 = -1.*t148*t307;
  t479 = t477 + t478;
  t483 = -0.068*t148;
  t484 = t483 + t330;
  t505 = -1.*t162*t33*t76;
  t506 = -1.*t148*t76*t174*t123;
  t507 = t505 + t506;
  t431 = t148*t123*t336;
  t432 = t430 + t431 + t381;
  t481 = -1.*t148*t309;
  t485 = -1.*t33*t484;
  t493 = -1.*t33*t309*t121;
  t495 = t148*t484*t121;
  t442 = t336*t279;
  t443 = t441 + t407 + t442;
  t516 = Power(t27,2);
  t517 = -1.*t148*t516*t479;
  t521 = t27*t33*t379;
  t525 = -1.*t148*t27*t121*t379;
  t526 = t27*t479*t406;
  t533 = -1.*t33*t121*t174;
  t534 = t148*t162*t121*t123;
  t535 = t533 + t534;
  t537 = t484*t174;
  t538 = -1.*t162*t479*t123;
  t539 = t537 + t538;
  t541 = t162*t484;
  t542 = t479*t174*t123;
  t543 = t541 + t542;
  t545 = t148*t174;
  t546 = t162*t33*t123;
  t547 = t545 + t546;
  t474 = -1.*t148*t334;
  t475 = t430 + t474;
  t568 = -1.*t63*t54;
  t569 = -1.*t55*t74;
  t570 = t568 + t569;
  t585 = -0.325*t63;
  t586 = t585 + t315 + t317;
  t578 = 0.325*t55;
  t579 = -1.*t63*t298;
  t580 = -1.*t55*t305;
  t581 = t578 + t579 + t580;
  t576 = t148*t309*t268;
  t584 = Power(t148,2);
  t587 = t584*t586*t121;
  t612 = -1.*t27*t33*t586;
  t613 = t581*t123;
  t614 = t612 + t613;
  t603 = -1.*t27*t33*t268;
  t604 = t570*t123;
  t605 = t603 + t604;
  t608 = t27*t581;
  t609 = t33*t586*t123;
  t610 = t608 + t609;
  t619 = t27*t570;
  t620 = t33*t268*t123;
  t621 = t619 + t620;
  t615 = -1.*t148*t27*t614;
  t618 = t614*t406;
  t623 = t379*t605;
  t629 = t148*t268*t174;
  t630 = t162*t621;
  t631 = t629 + t630;
  t633 = t148*t586*t174;
  t634 = t162*t610;
  t635 = t633 + t634;
  t637 = t148*t162*t586;
  t638 = -1.*t174*t610;
  t639 = t637 + t638;
  t657 = -0.28*t54;
  t658 = 0.0641*t74;
  t659 = t657 + t658;
  t588 = Power(t33,2);
  t674 = t55*t298;
  t675 = t63*t659;
  t676 = t674 + t675;
  t684 = t27*t76;
  t685 = t33*t570*t123;
  t686 = t684 + t685;
  t690 = -1.*t27*t33*t570;
  t691 = t76*t123;
  t692 = t690 + t691;
  t694 = t148*t162*t570;
  t695 = -1.*t174*t686;
  t696 = t694 + t695;
  t670 = -1.*t55*t659;
  t671 = t299 + t670;
  t668 = t148*t309*t76;
  t677 = t584*t676*t121;
  t710 = -1.*t27*t33*t676;
  t711 = t671*t123;
  t712 = t710 + t711;
  t706 = t27*t671;
  t707 = t33*t676*t123;
  t708 = t706 + t707;
  t713 = -1.*t148*t27*t712;
  t717 = t712*t406;
  t718 = t379*t125;
  t724 = t148*t76*t174;
  t725 = t162*t178;
  t726 = t724 + t725;
  t728 = t148*t676*t174;
  t729 = t162*t708;
  t730 = t728 + t729;
  t732 = t148*t162*t676;
  t733 = -1.*t174*t708;
  t734 = t732 + t733;
  t211 = t131*t125;
  t212 = -1.*t7*t180;
  t217 = t211 + t212;
  t488 = t318*t268;
  t489 = -1.*t33*t334*t121;
  t490 = t488 + t441 + t489;
  t361 = -1.*t33*t174;
  t363 = t148*t162*t123;
  t364 = t361 + t363;
  t738 = t342*t726;
  t739 = t359*t180;
  t386 = -1.*t148*t121*t174;
  t387 = -1.*t162*t279;
  t391 = t386 + t387;
  t716 = t336*t178;
  t792 = -1.*t379*t406;
  t810 = t379*t178;
  t812 = t336*t125;
  t784 = t718 + t738 + t739;
  t822 = -1.*t336*t406;
  t824 = -1.*t379*t279;
  t793 = -1.*t342*t283;
  t794 = -1.*t359*t372;
  t795 = t792 + t793 + t794;
  t817 = -1.*t148*t309*t121;
  t669 = -1.*t33*t334*t76;
  t673 = t318*t121;
  t549 = t148*t162;
  t550 = -1.*t33*t174*t123;
  t551 = t549 + t550;
  t847 = -1.*t33*t309*t76;
  t849 = t148*t484*t76;
  t815 = t668 + t716 + t718;
  t857 = t33*t309*t121;
  t859 = -1.*t148*t484*t121;
  t818 = -1.*t336*t279;
  t819 = t817 + t792 + t818;
  t876 = -1.*t148*t27*t76*t379;
  t878 = t27*t479*t125;
  t500 = -1.*t33*t76*t174;
  t501 = t148*t162*t76*t123;
  t502 = t500 + t501;
  t883 = t148*t27*t121*t379;
  t884 = -1.*t27*t479*t406;
  t556 = -1.*t162*t33*t121;
  t557 = -1.*t148*t121*t174*t123;
  t558 = t556 + t557;
  t852 = -1.*t318*t268;
  t853 = t33*t334*t121;
  t854 = t852 + t817 + t853;
  t862 = t668 + t669 + t673;
  t912 = -1.*t581*t268;
  t913 = -1.*t318*t570;
  t920 = t581*t121;
  t918 = t584*t586*t76;
  t910 = -1.*t148*t309*t268;
  t914 = -1.*t584*t586*t121;
  t944 = t614*t125;
  t947 = -1.*t614*t406;
  t949 = -1.*t379*t605;
  t644 = t148*t162*t268;
  t645 = -1.*t174*t621;
  t646 = t644 + t645;
  t925 = t307*t76;
  t926 = t925 + t673;
  t932 = -1.*t307*t121;
  t933 = t852 + t932;
  t974 = -1.*t671*t268;
  t975 = -1.*t318*t121;
  t980 = t318*t76;
  t985 = t671*t121;
  t981 = t584*t676*t76;
  t983 = t148*t309*t570;
  t972 = -1.*t148*t309*t76;
  t976 = -1.*t584*t676*t121;
  t1003 = t379*t692;
  t1006 = t712*t125;
  t683 = t148*t570*t174;
  t687 = t162*t686;
  t688 = t683 + t687;
  t1011 = -1.*t712*t406;
  t1012 = -1.*t379*t125;
  t770 = t148*t131*t27;
  t771 = -1.*t7*t287;
  t772 = t770 + t771;
  t599 = t131*t406;
  t600 = -1.*t7*t372;
  t601 = t599 + t600;
  t1026 = -1.*t342*t726;
  t1027 = -1.*t359*t180;
  t1065 = t148*t27*t379;
  t1010 = -1.*t336*t178;
  t1095 = -1.*t148*t123*t379;
  t1066 = t346*t342;
  t1067 = t287*t359;
  t1068 = t1065 + t1066 + t1067;
  t1099 = -1.*t379*t178;
  t1101 = -1.*t336*t125;
  t1076 = t1012 + t1026 + t1027;
  t1090 = t33*t309;
  t973 = t33*t334*t76;
  t1091 = -1.*t148*t123*t336;
  t1092 = t1090 + t1091 + t1065;
  t1130 = t148*t309;
  t1132 = t33*t484;
  t518 = Power(t123,2);
  t1136 = t33*t309*t76;
  t1138 = -1.*t148*t484*t76;
  t1104 = t972 + t1010 + t1012;
  t1155 = t148*t516*t479;
  t1158 = -1.*t27*t33*t379;
  t1162 = t148*t27*t76*t379;
  t1164 = -1.*t27*t479*t125;
  t1126 = t148*t334;
  t1127 = t1090 + t1126;
  t1189 = -1.*t584*t586*t76;
  t1208 = t148*t27*t614;
  t1212 = -1.*t614*t125;
  t763 = 0.325*t74;
  t764 = -1.*t305*t74;
  t747 = t7*t125;
  t748 = t131*t180;
  t749 = t747 + t748;
  t1235 = -1.*t584*t676*t76;
  t1237 = -1.*t148*t309*t570;
  t1250 = t148*t27*t712;
  t1253 = -1.*t379*t692;
  t1256 = -1.*t712*t125;
  t595 = t7*t406;
  t596 = t131*t372;
  t597 = t595 + t596;
  t1141 = t972 + t973 + t975;
  p_output1[0]=(-1.*t131*t180 - 1.*t125*t7)*var2[1] + t217*var2[2];
  p_output1[1]=t180*var2[0] - 1.*t255*t7*var2[1] + t131*t255*var2[2] + (t283*(-1.*t287*t338 - 1.*t287*t342 - 1.*t346*t359 - 1.*t359*t364) + t372*t384 + t346*(t283*t359 + t338*t372 + t342*t372 + t359*t391) + t287*t410)*var2[3];
  p_output1[2]=t162*t420*var2[0] + (t131*t178 + t174*t420*t7)*var2[1] + (-1.*t131*t174*t420 + t178*t7)*var2[2] + (-1.*t148*t162*t27*t410 + t283*(-1.*t148*t27*t336 + t148*t162*t27*t342 - 1.*t148*t174*t27*t359 + t174*t287*t436 - 1.*t162*t346*t436 + t438) + t162*t384*t447 + t346*(t162*t283*t436 - 1.*t174*t372*t436 + t162*t342*t447 - 1.*t174*t359*t447 + t449 + t451))*var2[3] + (t279*t432 + t406*(t123*t148*t436 + t438) - 1.*t123*t148*t443 + t148*t27*(t279*t436 + t336*t447 + t449 + t451))*var2[4];
  p_output1[3]=t502*var2[0] + (-1.*t507*t7 - 1.*t131*t148*t27*t76)*var2[1] + (t131*t507 - 1.*t148*t27*t7*t76)*var2[2] + (t384*t535 + t410*t547 + t283*(t517 + t521 - 1.*t346*t539 - 1.*t287*t543 - 1.*t342*t547 - 1.*t359*t551) + t346*(t525 + t526 + t342*t535 + t283*t539 + t372*t543 + t359*t558))*var2[3] + (-1.*t121*t148*t27*t432 - 1.*t27*t33*t443 + t406*(-1.*t123*t33*t336 + t481 + t485 + t517 - 1.*t148*t479*t518 + t521) + t148*t27*(t121*t123*t148*t336 - 1.*t123*t279*t479 + t493 + t495 + t525 + t526))*var2[4] + (-1.*t121*t33*t475 + t121*t148*(t33*t334 - 1.*t148*t479 + t481 + t485) + t148*t490 + t33*(-1.*t121*t148*t334 - 1.*t121*t33*t479 + t493 + t495))*var2[5];
  p_output1[4]=t283*var2[0] + t601*var2[1] + t597*var2[2] + (t384*t631 + t283*(t615 - 1.*t346*t635 - 1.*t287*t639) + t346*(t618 + t623 + t342*t631 + t283*t635 + t372*t639 + t359*t646))*var2[3] + (t432*t605 + t406*(-1.*t148*t33*t586 + t123*t148*t610 + t615) + t148*t27*(t576 + t587 + t279*t610 + t618 + t336*t621 + t623))*var2[4] + (t148*t268*t475 + t33*(-1.*t268*t33*t334 + t318*t570 + t576 + t268*t581 + t587 + t121*t586*t588))*var2[5] + (0.1575*t121 + 0.2255*t570)*var2[12];
  p_output1[5]=t688*var2[0] + (t131*t692 - 1.*t696*t7)*var2[1] + (t131*t696 + t692*t7)*var2[2] + (t384*t726 + t283*(t713 - 1.*t346*t730 - 1.*t287*t734) + t346*(t717 + t718 + t283*t730 + t372*t734 + t738 + t739))*var2[3] + (t125*t432 + t406*(-1.*t148*t33*t676 + t123*t148*t708 + t713) + t148*t27*(t668 + t677 + t279*t708 + t716 + t717 + t718))*var2[4] + (t33*(t668 + t669 + t268*t671 + t673 + t121*t588*t676 + t677) + t148*t475*t76)*var2[5] + (0.2255*t121 + 0.1575*t570)*var2[12] + (0.325*t54 - 1.*t305*t54 - 1.*t54*t659)*var2[13];
  p_output1[6]=t726;
  p_output1[7]=t217;
  p_output1[8]=t749;
  p_output1[9]=t283*t384 + t346*t410;
  p_output1[10]=t406*t432 + t148*t27*t443;
  p_output1[11]=t121*t148*t475 + t33*t490;
  p_output1[12]=0.2255*t268 + 0.1575*t76;
  p_output1[13]=-1.*t298*t54 + t763 + t764;
  p_output1[14]=-0.0641;
  p_output1[15]=(-1.*t131*t287 - 1.*t148*t27*t7)*var2[1] + t772*var2[2];
  p_output1[16]=t287*var2[0] - 1.*t364*t7*var2[1] + t131*t364*var2[2] + ((-1.*t283*t359 - 1.*t338*t372 - 1.*t342*t372 - 1.*t359*t391)*t726 + t283*(t180*t338 + t180*t342 + t255*t359 + t359*t726) + t372*t784 + t180*t795)*var2[3];
  p_output1[17]=-1.*t148*t162*t27*var2[0] + (-1.*t123*t131*t148 - 1.*t148*t174*t27*t7)*var2[1] + (t131*t148*t174*t27 - 1.*t123*t148*t7)*var2[2] + (t162*t447*t784 + t162*t420*t795 + t283*(t162*t342*t420 - 1.*t174*t359*t420 - 1.*t174*t180*t436 + t162*t436*t726 + t810 + t812) + t726*(-1.*t162*t283*t436 + t174*t372*t436 - 1.*t162*t342*t447 + t174*t359*t447 + t822 + t824))*var2[3] + (t406*(t336*t420 + t178*t436 + t810 + t812) + t279*t815 + t178*t819 + t125*(-1.*t279*t436 - 1.*t336*t447 + t822 + t824))*var2[4];
  p_output1[18]=t547*var2[0] + (-1.*t131*t27*t33 - 1.*t551*t7)*var2[1] + (t131*t551 - 1.*t27*t33*t7)*var2[2] + (t535*t784 + t502*t795 + t283*(t342*t502 + t359*t507 + t180*t543 + t539*t726 + t876 + t878) + t726*(-1.*t342*t535 - 1.*t283*t539 - 1.*t372*t543 - 1.*t359*t558 + t883 + t884))*var2[3] + (-1.*t121*t148*t27*t815 - 1.*t148*t27*t76*t819 + t406*(-1.*t123*t178*t479 + t123*t148*t336*t76 + t847 + t849 + t876 + t878) + t125*(-1.*t121*t123*t148*t336 + t123*t279*t479 + t857 + t859 + t883 + t884))*var2[4] + (t121*t148*(-1.*t148*t334*t76 - 1.*t33*t479*t76 + t847 + t849) - 1.*t33*t76*t854 + t148*t76*(t121*t148*t334 + t121*t33*t479 + t857 + t859) - 1.*t121*t33*t862)*var2[5];
  p_output1[19]=(t631*t784 + t283*t795 + t283*(t407 + t408 + t409 + t180*t639 + t635*t726 + t944) + t726*(-1.*t342*t631 - 1.*t283*t635 - 1.*t372*t639 - 1.*t359*t646 + t947 + t949))*var2[3] + (t605*t815 + t406*t819 + t406*(t407 + t441 + t442 + t178*t610 + t918 + t944) + t125*(-1.*t279*t610 - 1.*t336*t621 + t910 + t914 + t947 + t949))*var2[4] + (t121*t148*t854 + t148*t268*t862 + t148*t76*(t268*t33*t334 - 1.*t121*t586*t588 + t910 + t912 + t913 + t914) + t121*t148*(t441 + t488 + t489 + t586*t588*t76 + t918 + t920))*var2[5] + (t121*(-1.*t268*t307 - 1.*t121*t586 + t912 + t913) + t268*(t121*t307 + t488 + t586*t76 + t920) + t570*t926 + t268*t933)*var2[12];
  p_output1[20]=(t283*(t1003 + t1006 + t342*t688 + t359*t696 + t726*t730 + t180*t734) + t726*(t1011 + t1012 + t1026 + t1027 - 1.*t283*t730 - 1.*t372*t734) + t726*t784 + t688*t795)*var2[3] + (t125*t815 + t692*t819 + t125*(t1010 + t1011 + t1012 - 1.*t279*t708 + t972 + t976) + t406*(t1003 + t1006 + t336*t686 + t178*t708 + t981 + t983))*var2[4] + (t148*t570*t854 + t148*t76*t862 + t148*t76*(-1.*t121*t588*t676 + t972 + t973 + t974 + t975 + t976) + t121*t148*(-1.*t33*t334*t570 + t588*t676*t76 + t980 + t981 + t983 + t985))*var2[5] + (t121*t926 + t76*t933 + t121*(-1.*t121*t676 - 1.*t307*t76 + t974 + t975) + t268*(t307*t570 + t676*t76 + t980 + t985))*var2[12];
  p_output1[21]=t346;
  p_output1[22]=t772;
  p_output1[23]=t131*t287 + t148*t27*t7;
  p_output1[24]=t283*t784 + t726*t795;
  p_output1[25]=t406*t815 + t125*t819;
  p_output1[26]=t148*t76*t854 + t121*t148*t862;
  p_output1[27]=t268*t926 + t121*t933;
  p_output1[28]=(-1.*t131*t372 - 1.*t406*t7)*var2[1] + t601*var2[2];
  p_output1[29]=t372*var2[0] - 1.*t391*t7*var2[1] + t131*t391*var2[2] + (t1068*t180 + t1076*t287 + (t287*t338 + t287*t342 + t346*t359 + t359*t364)*t726 + t346*(-1.*t180*t338 - 1.*t180*t342 - 1.*t255*t359 - 1.*t359*t726))*var2[3];
  p_output1[30]=t162*t447*var2[0] + (t131*t279 + t174*t447*t7)*var2[1] + (-1.*t131*t174*t447 + t279*t7)*var2[2] + (-1.*t1076*t148*t162*t27 + t1068*t162*t420 + (t1095 + t148*t27*t336 - 1.*t148*t162*t27*t342 + t148*t174*t27*t359 - 1.*t174*t287*t436 + t162*t346*t436)*t726 + t346*(t1099 + t1101 - 1.*t162*t342*t420 + t174*t359*t420 + t174*t180*t436 - 1.*t162*t436*t726))*var2[3] + (-1.*t1104*t123*t148 + t1092*t178 + t125*(t1095 - 1.*t123*t148*t436) + t148*t27*(t1099 + t1101 - 1.*t336*t420 - 1.*t178*t436))*var2[4];
  p_output1[31]=t535*var2[0] + (-1.*t121*t131*t148*t27 - 1.*t558*t7)*var2[1] + (t131*t558 - 1.*t121*t148*t27*t7)*var2[2] + (t1068*t502 + t1076*t547 + (t1155 + t1158 + t346*t539 + t287*t543 + t342*t547 + t359*t551)*t726 + t346*(t1162 + t1164 - 1.*t342*t502 - 1.*t359*t507 - 1.*t180*t543 - 1.*t539*t726))*var2[3] + (-1.*t1104*t27*t33 + t125*(t1130 + t1132 + t1155 + t1158 + t123*t33*t336 + t148*t479*t518) - 1.*t1092*t148*t27*t76 + t148*t27*(t1136 + t1138 + t1162 + t1164 + t123*t178*t479 - 1.*t123*t148*t336*t76))*var2[4] + (t1141*t148 - 1.*t1127*t33*t76 + t148*(t1130 + t1132 - 1.*t33*t334 + t148*t479)*t76 + t33*(t1136 + t1138 + t148*t334*t76 + t33*t479*t76))*var2[5];
  p_output1[32]=t631*var2[0] + (t131*t605 - 1.*t646*t7)*var2[1] + (t131*t646 + t605*t7)*var2[2] + (t1068*t283 + (t1208 + t346*t635 + t287*t639)*t726 + t346*(t1212 - 1.*t180*t639 - 1.*t635*t726 + t792 + t793 + t794))*var2[3] + (t1092*t406 + t125*(t1208 + t148*t33*t586 - 1.*t123*t148*t610) + t148*t27*(t1189 + t1212 - 1.*t178*t610 + t792 + t817 + t818))*var2[4] + (t1127*t121*t148 + t33*(t1189 - 1.*t121*t581 - 1.*t586*t588*t76 + t817 + t852 + t853))*var2[5] - 0.068*t268*var2[12];
  p_output1[33]=t726*var2[0] + t217*var2[1] + t749*var2[2] + (t1068*t688 + t346*(t1253 + t1256 - 1.*t342*t688 - 1.*t359*t696 - 1.*t726*t730 - 1.*t180*t734) + t726*(t1250 + t346*t730 + t287*t734))*var2[3] + (t1092*t692 + t125*(t1250 + t148*t33*t676 - 1.*t123*t148*t708) + t148*t27*(t1235 + t1237 + t1253 + t1256 - 1.*t336*t686 - 1.*t178*t708))*var2[4] + (t1127*t148*t570 + t33*(t1235 + t1237 + t33*t334*t570 - 1.*t121*t671 - 1.*t318*t76 - 1.*t588*t676*t76))*var2[5] - 0.068*t76*var2[12] + (-1.*t659*t74 + t763 + t764)*var2[13];
  p_output1[34]=t283;
  p_output1[35]=t601;
  p_output1[36]=t597;
  p_output1[37]=t1076*t346 + t1068*t726;
  p_output1[38]=t1092*t125 + t1104*t148*t27;
  p_output1[39]=t1141*t33 + t1127*t148*t76;
  p_output1[40]=-0.068*t121;
  p_output1[41]=-0.325*t54 + t305*t54 - 1.*t298*t74;
  p_output1[42]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 43, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
