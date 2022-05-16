/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:25:01 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t275;
  double t218;
  double t222;
  double t230;
  double t241;
  double t244;
  double t252;
  double t257;
  double t266;
  double t301;
  double t317;
  double t322;
  double t325;
  double t328;
  double t379;
  double t348;
  double t356;
  double t363;
  double t400;
  double t401;
  double t406;
  double t409;
  double t380;
  double t386;
  double t388;
  double t390;
  double t391;
  double t393;
  double t456;
  double t432;
  double t434;
  double t438;
  double t442;
  double t414;
  double t415;
  double t417;
  double t418;
  double t420;
  double t421;
  double t279;
  double t289;
  double t295;
  double t304;
  double t309;
  double t487;
  double t488;
  double t490;
  double t316;
  double t326;
  double t330;
  double t331;
  double t336;
  double t338;
  double t339;
  double t365;
  double t370;
  double t371;
  double t374;
  double t495;
  double t496;
  double t497;
  double t395;
  double t408;
  double t410;
  double t411;
  double t423;
  double t424;
  double t428;
  double t445;
  double t447;
  double t448;
  double t451;
  double t457;
  double t458;
  double t500;
  double t501;
  double t502;
  double t503;
  double t510;
  double t511;
  double t512;
  double t513;
  double t505;
  double t506;
  double t507;
  double t508;
  double t475;
  double t477;
  double t535;
  double t542;
  double t543;
  double t544;
  double t545;
  double t552;
  double t553;
  double t554;
  double t555;
  double t547;
  double t548;
  double t549;
  double t550;
  double t577;
  double t578;
  double t579;
  double t581;
  double t582;
  double t583;
  double t586;
  double t587;
  double t588;
  double t589;
  double t596;
  double t597;
  double t598;
  double t599;
  double t591;
  double t592;
  double t593;
  double t594;
  double t574;
  double t575;
  double t619;
  double t620;
  double t621;
  double t623;
  double t624;
  double t625;
  double t628;
  double t629;
  double t630;
  double t631;
  double t638;
  double t639;
  double t640;
  double t641;
  double t633;
  double t634;
  double t635;
  double t636;
  double t661;
  double t662;
  double t663;
  double t665;
  double t666;
  double t667;
  double t670;
  double t671;
  double t672;
  double t673;
  double t680;
  double t681;
  double t682;
  double t683;
  double t675;
  double t676;
  double t677;
  double t678;
  double t711;
  double t712;
  double t713;
  double t703;
  double t704;
  double t705;
  double t707;
  double t708;
  double t709;
  double t715;
  double t716;
  double t717;
  double t718;
  double t725;
  double t726;
  double t727;
  double t728;
  double t720;
  double t721;
  double t722;
  double t723;
  double t746;
  double t747;
  double t748;
  double t751;
  double t752;
  double t753;
  double t755;
  double t756;
  double t757;
  double t760;
  double t761;
  double t762;
  double t763;
  double t770;
  double t771;
  double t772;
  double t773;
  double t765;
  double t766;
  double t767;
  double t768;
  double t797;
  double t798;
  double t799;
  double t806;
  double t807;
  double t808;
  double t802;
  double t803;
  double t804;
  double t810;
  double t811;
  double t812;
  double t791;
  double t792;
  double t794;
  double t795;
  double t830;
  double t831;
  double t832;
  double t835;
  double t836;
  double t838;
  double t839;
  double t840;
  double t846;
  double t847;
  double t848;
  double t842;
  double t843;
  double t844;
  double t850;
  double t851;
  double t852;
  double t872;
  double t873;
  double t874;
  double t876;
  double t877;
  double t878;
  double t884;
  double t885;
  double t886;
  double t880;
  double t881;
  double t882;
  double t888;
  double t889;
  double t890;
  double t925;
  double t926;
  double t927;
  double t928;
  double t930;
  double t931;
  double t920;
  double t921;
  double t922;
  double t923;
  double t908;
  double t909;
  double t910;
  double t912;
  double t913;
  double t914;
  double t916;
  double t917;
  double t918;
  double t951;
  double t952;
  double t953;
  double t960;
  double t961;
  double t962;
  double t963;
  double t965;
  double t966;
  double t967;
  double t968;
  double t955;
  double t956;
  double t957;
  double t958;
  double t988;
  double t989;
  double t990;
  double t997;
  double t998;
  double t999;
  double t1000;
  double t1002;
  double t1003;
  double t1004;
  double t1005;
  double t992;
  double t993;
  double t994;
  double t995;
  double t786;
  double t787;
  double t1023;
  double t1024;
  double t1025;
  double t1027;
  double t1028;
  double t1029;
  double t1031;
  double t1032;
  double t1033;
  double t1054;
  double t1055;
  double t1056;
  double t1057;
  double t1049;
  double t1050;
  double t1051;
  double t1052;
  double t1059;
  double t1060;
  double t1083;
  double t1084;
  double t1085;
  double t1086;
  double t1078;
  double t1079;
  double t1080;
  double t1081;
  double t1088;
  double t1089;
  t275 = Cos(var1[6]);
  t218 = Cos(var1[5]);
  t222 = Cos(var1[3]);
  t230 = Sin(var1[4]);
  t241 = t218*t222*t230;
  t244 = Sin(var1[5]);
  t252 = Sin(var1[3]);
  t257 = t244*t252;
  t266 = t241 + t257;
  t301 = Sin(var1[6]);
  t317 = Cos(var1[7]);
  t322 = -1.*t317;
  t325 = 1. + t322;
  t328 = Sin(var1[7]);
  t379 = -1. + t317;
  t348 = t222*t244;
  t356 = -1.*t218*t230*t252;
  t363 = t348 + t356;
  t400 = Cos(var1[8]);
  t401 = -1.*t400;
  t406 = 1. + t401;
  t409 = Sin(var1[8]);
  t380 = 1.6e-11*t379;
  t386 = 1. + t380;
  t388 = t275*t386*t266;
  t390 = 4.e-6*t379*t363;
  t391 = 4.e-6*t266*t301*t328;
  t393 = t388 + t390 + t391;
  t456 = -1. + t400;
  t432 = 4.e-6*t275*t379*t266;
  t434 = t317*t363;
  t438 = t266*t301*t328;
  t442 = t432 + t434 + t438;
  t414 = -1.000000000016*t325;
  t415 = 1. + t414;
  t417 = t415*t266*t301;
  t418 = -4.e-6*t275*t266*t328;
  t420 = -1.*t363*t328;
  t421 = t417 + t418 + t420;
  t279 = -1.*t275;
  t289 = 1. + t279;
  t295 = 0.15121*t289;
  t304 = -0.15121*t301;
  t309 = t295 + t304;
  t487 = t222*t244*t230;
  t488 = -1.*t218*t252;
  t490 = t487 + t488;
  t316 = -1.2484e-7*var1[7];
  t326 = -1.5499600000248e-7*t325;
  t330 = 1.124840000016e-6*t328;
  t331 = t316 + t326 + t330;
  t336 = 0.281210000008499*t325;
  t338 = 0.03874900000062*t328;
  t339 = t336 + t338;
  t365 = 4.9936e-13*var1[7];
  t370 = -0.03874900000062*t325;
  t371 = 0.281210000004*t328;
  t374 = t365 + t370 + t371;
  t495 = -1.*t218*t222;
  t496 = -1.*t244*t230*t252;
  t497 = t495 + t496;
  t395 = -1.284e-8*var1[8];
  t408 = -1.5499600000248e-7*t406;
  t410 = 2.012840000032e-6*t409;
  t411 = t395 + t408 + t410;
  t423 = 0.503210000016051*t406;
  t424 = 0.03874900000062*t409;
  t428 = t423 + t424;
  t445 = 5.136e-14*var1[8];
  t447 = -0.03874900000062*t406;
  t448 = 0.503210000008*t409;
  t451 = t445 + t447 + t448;
  t457 = 1.6e-11*t456;
  t458 = 1. + t457;
  t500 = t275*t386*t490;
  t501 = 4.e-6*t379*t497;
  t502 = 4.e-6*t490*t301*t328;
  t503 = t500 + t501 + t502;
  t510 = 4.e-6*t275*t379*t490;
  t511 = t317*t497;
  t512 = t490*t301*t328;
  t513 = t510 + t511 + t512;
  t505 = t415*t490*t301;
  t506 = -4.e-6*t275*t490*t328;
  t507 = -1.*t497*t328;
  t508 = t505 + t506 + t507;
  t475 = -1.000000000016*t406;
  t477 = 1. + t475;
  t535 = Cos(var1[4]);
  t542 = t535*t222*t275*t386;
  t543 = -4.e-6*t535*t379*t252;
  t544 = 4.e-6*t535*t222*t301*t328;
  t545 = t542 + t543 + t544;
  t552 = 4.e-6*t535*t222*t275*t379;
  t553 = -1.*t535*t317*t252;
  t554 = t535*t222*t301*t328;
  t555 = t552 + t553 + t554;
  t547 = t535*t222*t415*t301;
  t548 = -4.e-6*t535*t222*t275*t328;
  t549 = t535*t252*t328;
  t550 = t547 + t548 + t549;
  t577 = t218*t535*t275*t252;
  t578 = t218*t230*t301;
  t579 = t577 + t578;
  t581 = -1.*t218*t275*t230;
  t582 = t218*t535*t252*t301;
  t583 = t581 + t582;
  t586 = 4.e-6*t218*t535*t222*t379;
  t587 = t386*t579;
  t588 = 4.e-6*t583*t328;
  t589 = t586 + t587 + t588;
  t596 = t218*t535*t222*t317;
  t597 = 4.e-6*t379*t579;
  t598 = t583*t328;
  t599 = t596 + t597 + t598;
  t591 = t415*t583;
  t592 = -1.*t218*t535*t222*t328;
  t593 = -4.e-6*t579*t328;
  t594 = t591 + t592 + t593;
  t574 = 0.15121*t301;
  t575 = t295 + t574;
  t619 = t535*t275*t244*t252;
  t620 = t244*t230*t301;
  t621 = t619 + t620;
  t623 = -1.*t275*t244*t230;
  t624 = t535*t244*t252*t301;
  t625 = t623 + t624;
  t628 = 4.e-6*t535*t222*t379*t244;
  t629 = t386*t621;
  t630 = 4.e-6*t625*t328;
  t631 = t628 + t629 + t630;
  t638 = t535*t222*t317*t244;
  t639 = 4.e-6*t379*t621;
  t640 = t625*t328;
  t641 = t638 + t639 + t640;
  t633 = t415*t625;
  t634 = -1.*t535*t222*t244*t328;
  t635 = -4.e-6*t621*t328;
  t636 = t633 + t634 + t635;
  t661 = -1.*t275*t230*t252;
  t662 = t535*t301;
  t663 = t661 + t662;
  t665 = -1.*t535*t275;
  t666 = -1.*t230*t252*t301;
  t667 = t665 + t666;
  t670 = -4.e-6*t222*t379*t230;
  t671 = t386*t663;
  t672 = 4.e-6*t667*t328;
  t673 = t670 + t671 + t672;
  t680 = -1.*t222*t317*t230;
  t681 = 4.e-6*t379*t663;
  t682 = t667*t328;
  t683 = t680 + t681 + t682;
  t675 = t415*t667;
  t676 = t222*t230*t328;
  t677 = -4.e-6*t663*t328;
  t678 = t675 + t676 + t677;
  t711 = -1.*t222*t244*t230;
  t712 = t218*t252;
  t713 = t711 + t712;
  t703 = t275*t497;
  t704 = t535*t244*t301;
  t705 = t703 + t704;
  t707 = -1.*t535*t275*t244;
  t708 = t497*t301;
  t709 = t707 + t708;
  t715 = 4.e-6*t379*t713;
  t716 = t386*t705;
  t717 = 4.e-6*t709*t328;
  t718 = t715 + t716 + t717;
  t725 = t317*t713;
  t726 = 4.e-6*t379*t705;
  t727 = t709*t328;
  t728 = t725 + t726 + t727;
  t720 = t415*t709;
  t721 = -1.*t713*t328;
  t722 = -4.e-6*t705*t328;
  t723 = t720 + t721 + t722;
  t746 = -1.*t222*t244;
  t747 = t218*t230*t252;
  t748 = t746 + t747;
  t751 = t275*t748;
  t752 = -1.*t218*t535*t301;
  t753 = t751 + t752;
  t755 = t218*t535*t275;
  t756 = t748*t301;
  t757 = t755 + t756;
  t760 = 4.e-6*t379*t266;
  t761 = t386*t753;
  t762 = 4.e-6*t757*t328;
  t763 = t760 + t761 + t762;
  t770 = t317*t266;
  t771 = 4.e-6*t379*t753;
  t772 = t757*t328;
  t773 = t770 + t771 + t772;
  t765 = t415*t757;
  t766 = -1.*t266*t328;
  t767 = -4.e-6*t753*t328;
  t768 = t765 + t766 + t767;
  t797 = -1.*t218*t535*t275;
  t798 = -1.*t748*t301;
  t799 = t797 + t798;
  t806 = t415*t753;
  t807 = -4.e-6*t799*t328;
  t808 = t806 + t807;
  t802 = t386*t799;
  t803 = 4.e-6*t753*t328;
  t804 = t802 + t803;
  t810 = 4.e-6*t379*t799;
  t811 = t753*t328;
  t812 = t810 + t811;
  t791 = -0.15121*t275;
  t792 = t791 + t574;
  t794 = 0.15121*t275;
  t795 = t794 + t574;
  t830 = t218*t222;
  t831 = t244*t230*t252;
  t832 = t830 + t831;
  t835 = -1.*t832*t301;
  t836 = t707 + t835;
  t838 = t275*t832;
  t839 = -1.*t535*t244*t301;
  t840 = t838 + t839;
  t846 = t415*t840;
  t847 = -4.e-6*t836*t328;
  t848 = t846 + t847;
  t842 = t386*t836;
  t843 = 4.e-6*t840*t328;
  t844 = t842 + t843;
  t850 = 4.e-6*t379*t836;
  t851 = t840*t328;
  t852 = t850 + t851;
  t872 = t275*t230;
  t873 = -1.*t535*t252*t301;
  t874 = t872 + t873;
  t876 = t535*t275*t252;
  t877 = t230*t301;
  t878 = t876 + t877;
  t884 = t415*t878;
  t885 = -4.e-6*t874*t328;
  t886 = t884 + t885;
  t880 = t386*t874;
  t881 = 4.e-6*t878*t328;
  t882 = t880 + t881;
  t888 = 4.e-6*t379*t874;
  t889 = t878*t328;
  t890 = t888 + t889;
  t925 = -1.*t317*t266;
  t926 = -4.e-6*t317*t753;
  t927 = -1.000000000016*t757*t328;
  t928 = t925 + t926 + t927;
  t930 = t317*t757;
  t931 = t930 + t766 + t767;
  t920 = 4.e-6*t317*t757;
  t921 = -4.e-6*t266*t328;
  t922 = -1.6e-11*t753*t328;
  t923 = t920 + t921 + t922;
  t908 = 0.281210000004*t317;
  t909 = -0.03874900000062*t328;
  t910 = 4.9936e-13 + t908 + t909;
  t912 = 1.124840000016e-6*t317;
  t913 = -1.5499600000248e-7*t328;
  t914 = -1.2484e-7 + t912 + t913;
  t916 = 0.03874900000062*t317;
  t917 = 0.281210000008499*t328;
  t918 = t916 + t917;
  t951 = t535*t275*t244;
  t952 = t832*t301;
  t953 = t951 + t952;
  t960 = -1.*t317*t490;
  t961 = -4.e-6*t317*t840;
  t962 = -1.000000000016*t953*t328;
  t963 = t960 + t961 + t962;
  t965 = t317*t953;
  t966 = -1.*t490*t328;
  t967 = -4.e-6*t840*t328;
  t968 = t965 + t966 + t967;
  t955 = 4.e-6*t317*t953;
  t956 = -4.e-6*t490*t328;
  t957 = -1.6e-11*t840*t328;
  t958 = t955 + t956 + t957;
  t988 = -1.*t275*t230;
  t989 = t535*t252*t301;
  t990 = t988 + t989;
  t997 = -1.*t535*t222*t317;
  t998 = -4.e-6*t317*t878;
  t999 = -1.000000000016*t990*t328;
  t1000 = t997 + t998 + t999;
  t1002 = t317*t990;
  t1003 = -1.*t535*t222*t328;
  t1004 = -4.e-6*t878*t328;
  t1005 = t1002 + t1003 + t1004;
  t992 = 4.e-6*t317*t990;
  t993 = -4.e-6*t535*t222*t328;
  t994 = -1.6e-11*t878*t328;
  t995 = t992 + t993 + t994;
  t786 = -4.e-6*t763*t409;
  t787 = -1.*t773*t409;
  t1023 = 0.503210000008*t400;
  t1024 = -0.03874900000062*t409;
  t1025 = 5.136e-14 + t1023 + t1024;
  t1027 = 2.012840000032e-6*t400;
  t1028 = -1.5499600000248e-7*t409;
  t1029 = -1.284e-8 + t1027 + t1028;
  t1031 = 0.03874900000062*t400;
  t1032 = 0.503210000016051*t409;
  t1033 = t1031 + t1032;
  t1054 = 4.e-6*t379*t490;
  t1055 = t386*t840;
  t1056 = 4.e-6*t953*t328;
  t1057 = t1054 + t1055 + t1056;
  t1049 = t317*t490;
  t1050 = 4.e-6*t379*t840;
  t1051 = t953*t328;
  t1052 = t1049 + t1050 + t1051;
  t1059 = t415*t953;
  t1060 = t1059 + t966 + t967;
  t1083 = 4.e-6*t535*t222*t379;
  t1084 = t386*t878;
  t1085 = 4.e-6*t990*t328;
  t1086 = t1083 + t1084 + t1085;
  t1078 = t535*t222*t317;
  t1079 = 4.e-6*t379*t878;
  t1080 = t990*t328;
  t1081 = t1078 + t1079 + t1080;
  t1088 = t415*t990;
  t1089 = t1088 + t1003 + t1004;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t266*t309 + t266*t275*t331 + t266*t301*t339 + t363*t374 + t393*t411 + t421*t428 + t442*t451 - 0.03875*(t409*t421 + t400*t442 + 4.e-6*t393*t456) + 0.14871*(4.e-6*t409*t421 + 4.e-6*t442*t456 + t393*t458) + 0.80321*(-4.e-6*t393*t409 - 1.*t409*t442 + t421*t477);
  p_output1[10]=t309*t490 + t275*t331*t490 + t301*t339*t490 + t374*t497 + t411*t503 + t428*t508 + t451*t513 - 0.03875*(4.e-6*t456*t503 + t409*t508 + t400*t513) + 0.80321*(-4.e-6*t409*t503 + t477*t508 - 1.*t409*t513) + 0.14871*(t458*t503 + 4.e-6*t409*t508 + 4.e-6*t456*t513);
  p_output1[11]=t222*t309*t535 + t222*t275*t331*t535 + t222*t301*t339*t535 - 1.*t252*t374*t535 + t411*t545 + t428*t550 + t451*t555 - 0.03875*(4.e-6*t456*t545 + t409*t550 + t400*t555) + 0.80321*(-4.e-6*t409*t545 + t477*t550 - 1.*t409*t555) + 0.14871*(t458*t545 + 4.e-6*t409*t550 + 4.e-6*t456*t555);
  p_output1[12]=t218*t252*t309*t535 + t218*t222*t374*t535 - 1.*t218*t230*t575 + t331*t579 + t339*t583 + t411*t589 + t428*t594 + t451*t599 - 0.03875*(4.e-6*t456*t589 + t409*t594 + t400*t599) + 0.80321*(-4.e-6*t409*t589 + t477*t594 - 1.*t409*t599) + 0.14871*(t458*t589 + 4.e-6*t409*t594 + 4.e-6*t456*t599);
  p_output1[13]=t244*t252*t309*t535 + t222*t244*t374*t535 - 1.*t230*t244*t575 + t331*t621 + t339*t625 + t411*t631 + t428*t636 + t451*t641 - 0.03875*(4.e-6*t456*t631 + t409*t636 + t400*t641) + 0.80321*(-4.e-6*t409*t631 + t477*t636 - 1.*t409*t641) + 0.14871*(t458*t631 + 4.e-6*t409*t636 + 4.e-6*t456*t641);
  p_output1[14]=-1.*t230*t252*t309 - 1.*t222*t230*t374 - 1.*t535*t575 + t331*t663 + t339*t667 + t411*t673 + t428*t678 + t451*t683 - 0.03875*(4.e-6*t456*t673 + t409*t678 + t400*t683) + 0.80321*(-4.e-6*t409*t673 + t477*t678 - 1.*t409*t683) + 0.14871*(t458*t673 + 4.e-6*t409*t678 + 4.e-6*t456*t683);
  p_output1[15]=t309*t497 - 1.*t244*t535*t575 + t331*t705 + t339*t709 + t374*t713 + t411*t718 + t428*t723 + t451*t728 - 0.03875*(4.e-6*t456*t718 + t409*t723 + t400*t728) + 0.80321*(-4.e-6*t409*t718 + t477*t723 - 1.*t409*t728) + 0.14871*(t458*t718 + 4.e-6*t409*t723 + 4.e-6*t456*t728);
  p_output1[16]=t266*t374 + t218*t535*t575 + t309*t748 + t331*t753 + t339*t757 + t411*t763 + t428*t768 + t451*t773 - 0.03875*(4.e-6*t456*t763 + t409*t768 + t400*t773) + 0.14871*(t458*t763 + 4.e-6*t409*t768 + 4.e-6*t456*t773) + 0.80321*(t477*t768 + t786 + t787);
  p_output1[17]=0;
  p_output1[18]=t339*t753 + t748*t792 + t218*t535*t795 + t331*t799 + t411*t804 + t428*t808 + t451*t812 - 0.03875*(4.e-6*t456*t804 + t409*t808 + t400*t812) + 0.80321*(-4.e-6*t409*t804 + t477*t808 - 1.*t409*t812) + 0.14871*(t458*t804 + 4.e-6*t409*t808 + 4.e-6*t456*t812);
  p_output1[19]=t244*t535*t795 + t792*t832 + t331*t836 + t339*t840 + t411*t844 + t428*t848 + t451*t852 - 0.03875*(4.e-6*t456*t844 + t409*t848 + t400*t852) + 0.80321*(-4.e-6*t409*t844 + t477*t848 - 1.*t409*t852) + 0.14871*(t458*t844 + 4.e-6*t409*t848 + 4.e-6*t456*t852);
  p_output1[20]=t252*t535*t792 - 1.*t230*t795 + t331*t874 + t339*t878 + t411*t882 + t428*t886 + t451*t890 - 0.03875*(4.e-6*t456*t882 + t409*t886 + t400*t890) + 0.80321*(-4.e-6*t409*t882 + t477*t886 - 1.*t409*t890) + 0.14871*(t458*t882 + 4.e-6*t409*t886 + 4.e-6*t456*t890);
  p_output1[21]=t266*t910 + t753*t914 + t757*t918 + t411*t923 + t428*t928 + t451*t931 - 0.03875*(4.e-6*t456*t923 + t409*t928 + t400*t931) + 0.80321*(-4.e-6*t409*t923 + t477*t928 - 1.*t409*t931) + 0.14871*(t458*t923 + 4.e-6*t409*t928 + 4.e-6*t456*t931);
  p_output1[22]=t490*t910 + t840*t914 + t918*t953 + t411*t958 + t428*t963 + t451*t968 - 0.03875*(4.e-6*t456*t958 + t409*t963 + t400*t968) + 0.80321*(-4.e-6*t409*t958 + t477*t963 - 1.*t409*t968) + 0.14871*(t458*t958 + 4.e-6*t409*t963 + 4.e-6*t456*t968);
  p_output1[23]=t1000*t428 + t1005*t451 + t222*t535*t910 + t878*t914 + t918*t990 + t411*t995 + 0.80321*(-1.*t1005*t409 + t1000*t477 - 4.e-6*t409*t995) - 0.03875*(t1005*t400 + t1000*t409 + 4.e-6*t456*t995) + 0.14871*(4.e-6*t1000*t409 + 4.e-6*t1005*t456 + t458*t995);
  p_output1[24]=t1029*t763 + t1033*t768 + t1025*t773 + 0.80321*(-4.e-6*t400*t763 - 1.000000000016*t409*t768 - 1.*t400*t773) + 0.14871*(-1.6e-11*t409*t763 + 4.e-6*t400*t768 - 4.e-6*t409*t773) - 0.03875*(t400*t768 + t786 + t787);
  p_output1[25]=t1025*t1052 + t1029*t1057 + t1033*t1060 - 0.03875*(t1060*t400 - 1.*t1052*t409 - 4.e-6*t1057*t409) + 0.14871*(4.e-6*t1060*t400 - 4.e-6*t1052*t409 - 1.6e-11*t1057*t409) + 0.80321*(-1.*t1052*t400 - 4.e-6*t1057*t400 - 1.000000000016*t1060*t409);
  p_output1[26]=t1025*t1081 + t1029*t1086 + t1033*t1089 - 0.03875*(t1089*t400 - 1.*t1081*t409 - 4.e-6*t1086*t409) + 0.14871*(4.e-6*t1089*t400 - 4.e-6*t1081*t409 - 1.6e-11*t1086*t409) + 0.80321*(-1.*t1081*t400 - 4.e-6*t1086*t400 - 1.000000000016*t1089*t409);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_fl.hh"

namespace SymFunction
{

void J_fl_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
