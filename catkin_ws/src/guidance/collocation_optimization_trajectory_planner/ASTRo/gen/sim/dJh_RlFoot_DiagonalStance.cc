/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:34 GMT+02:00
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
  double t46932;
  double t46935;
  double t46941;
  double t46981;
  double t46995;
  double t47004;
  double t47024;
  double t47027;
  double t45029;
  double t46862;
  double t47029;
  double t47041;
  double t47026;
  double t47030;
  double t47038;
  double t31326;
  double t47042;
  double t47043;
  double t47047;
  double t47967;
  double t48016;
  double t48022;
  double t48025;
  double t51598;
  double t51928;
  double t51931;
  double t51938;
  double t52273;
  double t52275;
  double t52289;
  double t52320;
  double t52324;
  double t52340;
  double t52459;
  double t52947;
  double t53099;
  double t53138;
  double t53173;
  double t53230;
  double t53289;
  double t53309;
  double t53310;
  double t53315;
  double t53322;
  double t53324;
  double t53342;
  double t53348;
  double t53352;
  double t53413;
  double t53420;
  double t53422;
  double t53426;
  double t53494;
  double t53531;
  double t53540;
  double t53544;
  double t53546;
  double t53550;
  double t53551;
  double t53554;
  double t53559;
  double t53411;
  double t53497;
  double t53499;
  double t53521;
  double t53543;
  double t53588;
  double t53589;
  double t53593;
  double t53596;
  double t53601;
  double t53603;
  double t53610;
  double t53619;
  double t53628;
  double t53630;
  double t53656;
  double t53668;
  double t53669;
  double t53527;
  double t53637;
  double t53639;
  double t53713;
  double t53728;
  double t53734;
  double t53390;
  double t53393;
  double t53410;
  double t53689;
  double t53692;
  double t53700;
  double t53761;
  double t53860;
  double t53875;
  double t54157;
  double t54160;
  double t54186;
  double t54579;
  double t54580;
  double t54581;
  double t53702;
  double t54636;
  double t54637;
  double t54641;
  double t53918;
  double t54685;
  double t54686;
  double t54687;
  double t53708;
  double t53735;
  double t53736;
  double t54651;
  double t54678;
  double t54653;
  double t54658;
  double t54660;
  double t54684;
  double t54698;
  double t53919;
  double t53922;
  double t54059;
  double t54293;
  double t54376;
  double t54817;
  double t54825;
  double t54836;
  double t54841;
  double t54297;
  double t54303;
  double t54312;
  double t54381;
  double t54385;
  double t54393;
  double t54443;
  double t54558;
  double t54447;
  double t54464;
  double t54503;
  double t54732;
  double t54737;
  double t54985;
  double t54987;
  double t54993;
  double t54996;
  double t54564;
  double t54565;
  double t54568;
  double t54582;
  double t54583;
  double t54584;
  double t54585;
  double t54587;
  double t54588;
  double t54589;
  double t54590;
  double t54591;
  double t54599;
  double t54629;
  double t54633;
  double t55056;
  double t55058;
  double t55059;
  double t55053;
  double t54670;
  double t55068;
  double t55069;
  double t55070;
  double t55073;
  double t55075;
  double t55076;
  double t54691;
  double t54713;
  double t54714;
  double t54719;
  double t54722;
  double t54731;
  double t55077;
  double t54740;
  double t54763;
  double t55082;
  double t54779;
  double t54780;
  double t54783;
  double t54797;
  double t54801;
  double t54802;
  double t54805;
  double t54806;
  double t54808;
  double t54813;
  double t54814;
  double t54815;
  double t54821;
  double t54829;
  double t54832;
  double t54833;
  double t54834;
  double t54840;
  double t54845;
  double t54846;
  double t54847;
  double t54848;
  double t55209;
  double t54906;
  double t54907;
  double t55231;
  double t54921;
  double t54926;
  double t54931;
  double t54934;
  double t54961;
  double t54965;
  double t54966;
  double t54968;
  double t54971;
  double t54973;
  double t54974;
  double t54975;
  double t54977;
  double t54978;
  double t54980;
  double t54982;
  double t54986;
  double t54994;
  double t55000;
  double t55001;
  double t55003;
  double t55004;
  double t55008;
  double t55288;
  double t55012;
  double t55013;
  double t55292;
  double t55022;
  double t55023;
  double t55033;
  double t55309;
  double t55310;
  double t55311;
  double t55322;
  double t55323;
  double t55324;
  double t55328;
  double t55329;
  double t55330;
  double t55332;
  double t55333;
  double t55334;
  double t55343;
  double t55344;
  double t55345;
  double t55346;
  double t55347;
  double t55348;
  double t55349;
  double t55351;
  double t55352;
  double t55353;
  double t55350;
  double t55359;
  double t55360;
  double t55362;
  double t55368;
  double t55369;
  double t55370;
  double t55372;
  double t55375;
  double t55376;
  double t55391;
  double t55394;
  double t55408;
  double t55410;
  double t55403;
  double t55437;
  double t55439;
  double t55321;
  double t55325;
  double t55326;
  double t55444;
  double t52019;
  double t52115;
  double t52133;
  double t55514;
  double t55537;
  double t55552;
  double t55312;
  double t55313;
  double t55314;
  double t55315;
  double t55316;
  double t55317;
  double t55318;
  double t53328;
  double t53333;
  double t53334;
  double t55607;
  double t55608;
  double t55609;
  double t55610;
  double t55611;
  double t55613;
  double t55614;
  double t55615;
  double t55620;
  double t55621;
  double t55622;
  double t55612;
  double t55625;
  double t55626;
  double t55627;
  double t55633;
  double t55634;
  double t55635;
  double t55630;
  double t55632;
  double t55641;
  double t55642;
  double t55643;
  double t55645;
  double t55647;
  double t55648;
  double t55652;
  double t55653;
  double t55654;
  double t55388;
  double t55389;
  double t55398;
  double t55399;
  double t55419;
  double t55420;
  double t55421;
  double t55673;
  double t55430;
  double t55431;
  double t55432;
  double t55677;
  double t55679;
  double t55703;
  double t55709;
  double t55711;
  double t55659;
  double t55660;
  double t55661;
  double t55473;
  double t55478;
  double t55480;
  double t55767;
  double t55794;
  t46932 = Cos(var1[10]);
  t46935 = Cos(var1[11]);
  t46941 = -1.*t46932*t46935;
  t46981 = Sin(var1[10]);
  t46995 = Sin(var1[11]);
  t47004 = -1.*t46981*t46995;
  t47024 = t46941 + t47004;
  t47027 = Cos(var1[9]);
  t45029 = Cos(var1[5]);
  t46862 = Sin(var1[9]);
  t47029 = Sin(var1[5]);
  t47041 = Cos(var1[3]);
  t47026 = t45029*t46862*t47024;
  t47030 = t47027*t47024*t47029;
  t47038 = t47026 + t47030;
  t31326 = Sin(var1[3]);
  t47042 = Cos(var1[4]);
  t47043 = -1.*t46935*t46981;
  t47047 = t46932*t46995;
  t47967 = t47043 + t47047;
  t48016 = t47042*t47967;
  t48022 = Sin(var1[4]);
  t48025 = t47027*t45029*t47024;
  t51598 = -1.*t46862*t47024*t47029;
  t51928 = t48025 + t51598;
  t51931 = -1.*t48022*t51928;
  t51938 = t48016 + t51931;
  t52273 = t45029*t46862;
  t52275 = t47027*t47029;
  t52289 = t52273 + t52275;
  t52320 = -1.*t47027*t45029;
  t52324 = t46862*t47029;
  t52340 = t52320 + t52324;
  t52459 = t45029*t46862*t47967;
  t52947 = t47027*t47967*t47029;
  t53099 = t52459 + t52947;
  t53138 = t46932*t46935;
  t53173 = t46981*t46995;
  t53230 = t53138 + t53173;
  t53289 = t47042*t53230;
  t53309 = t47027*t45029*t47967;
  t53310 = -1.*t46862*t47967*t47029;
  t53315 = t53309 + t53310;
  t53322 = -1.*t48022*t53315;
  t53324 = t53289 + t53322;
  t53342 = -1.*t47967*t48022;
  t53348 = -1.*t47042*t51928;
  t53352 = t53342 + t53348;
  t53413 = -1.*t46935;
  t53420 = 1. + t53413;
  t53422 = -0.50321*t53420;
  t53426 = -0.19821*t46935;
  t53494 = t53422 + t53426;
  t53531 = -1.*t47027;
  t53540 = 1. + t53531;
  t53544 = -1.*t46932;
  t53546 = 1. + t53544;
  t53550 = -0.28121*t53546;
  t53551 = t46932*t53494;
  t53554 = 0.305*t46981*t46995;
  t53559 = t53550 + t53551 + t53554;
  t53411 = 0.28121*t46981;
  t53497 = t53494*t46981;
  t53499 = -0.305*t46932*t46995;
  t53521 = t53411 + t53497 + t53499;
  t53543 = -0.15121*t53540;
  t53588 = t47027*t53559;
  t53589 = t53543 + t53588;
  t53593 = t45029*t53589;
  t53596 = 0.15121*t53540;
  t53601 = 0.15121*t47027;
  t53603 = 0.15121*t46862;
  t53610 = t46862*t53559;
  t53619 = t53596 + t53601 + t53603 + t53610;
  t53628 = -1.*t53619*t47029;
  t53630 = t53593 + t53628;
  t53656 = t53521*t48022;
  t53668 = t47042*t53630;
  t53669 = t53656 + t53668;
  t53527 = -1.*t53521*t48022;
  t53637 = -1.*t47042*t53630;
  t53639 = t53527 + t53637;
  t53713 = t47042*t53521;
  t53728 = -1.*t48022*t53630;
  t53734 = t53713 + t53728;
  t53390 = t53230*t48022;
  t53393 = t47042*t53315;
  t53410 = t53390 + t53393;
  t53689 = t45029*t53619;
  t53692 = t53589*t47029;
  t53700 = t53689 + t53692;
  t53761 = -1.*t53230*t48022;
  t53860 = -1.*t47042*t53315;
  t53875 = t53761 + t53860;
  t54157 = t47967*t48022;
  t54160 = t47042*t51928;
  t54186 = t54157 + t54160;
  t54579 = -1.*t45029*t46862*t47024;
  t54580 = -1.*t47027*t47024*t47029;
  t54581 = t54579 + t54580;
  t53702 = -1.*t52340*t53700;
  t54636 = -1.*t45029*t53619;
  t54637 = -1.*t53589*t47029;
  t54641 = t54636 + t54637;
  t53918 = t53099*t53700;
  t54685 = -1.*t45029*t46862*t47967;
  t54686 = -1.*t47027*t47967*t47029;
  t54687 = t54685 + t54686;
  t53708 = -1.*t47042*t52289*t53669;
  t53735 = t48022*t52289*t53734;
  t53736 = t53702 + t53708 + t53735;
  t54651 = -1.*t52289*t53700;
  t54678 = -1.*t52340*t53630;
  t54653 = t47027*t45029;
  t54658 = -1.*t46862*t47029;
  t54660 = t54653 + t54658;
  t54684 = t53315*t53700;
  t54698 = t53099*t53630;
  t53919 = t53410*t53669;
  t53922 = t53324*t53734;
  t54059 = t53918 + t53919 + t53922;
  t54293 = -1.*t53099*t53700;
  t54376 = t47038*t53700;
  t54817 = -1.*t53315*t53700;
  t54825 = -1.*t53099*t53630;
  t54836 = t51928*t53700;
  t54841 = t47038*t53630;
  t54297 = -1.*t53410*t53669;
  t54303 = -1.*t53324*t53734;
  t54312 = t54293 + t54297 + t54303;
  t54381 = t54186*t53669;
  t54385 = t51938*t53734;
  t54393 = t54376 + t54381 + t54385;
  t54443 = t52340*t53700;
  t54558 = -1.*t47038*t53700;
  t54447 = t47042*t52289*t53669;
  t54464 = -1.*t48022*t52289*t53734;
  t54503 = t54443 + t54447 + t54464;
  t54732 = Power(t47042,2);
  t54737 = Power(t48022,2);
  t54985 = t52289*t53700;
  t54987 = t52340*t53630;
  t54993 = -1.*t51928*t53700;
  t54996 = -1.*t47038*t53630;
  t54564 = -1.*t54186*t53669;
  t54565 = -1.*t51938*t53734;
  t54568 = t54558 + t54564 + t54565;
  t54582 = var2[0]*t47042*t54581;
  t54583 = t31326*t48022*t54581;
  t54584 = t47041*t51928;
  t54585 = t54583 + t54584;
  t54587 = var2[1]*t54585;
  t54588 = -1.*t47041*t48022*t54581;
  t54589 = t31326*t51928;
  t54590 = t54588 + t54589;
  t54591 = var2[2]*t54590;
  t54599 = -1.*t52289*t53630;
  t54629 = t53702 + t54599;
  t54633 = t53315*t54629;
  t55056 = -0.15121*t46862;
  t55058 = -1.*t46862*t53559;
  t55059 = t55056 + t55058;
  t55053 = t53601 + t53588;
  t54670 = -1.*t54660*t53630;
  t55068 = t45029*t55059;
  t55069 = -1.*t55053*t47029;
  t55070 = t55068 + t55069;
  t55073 = t45029*t55053;
  t55075 = t55059*t47029;
  t55076 = t55073 + t55075;
  t54691 = t54687*t53630;
  t54713 = t53521*t53230;
  t54714 = t53315*t53630;
  t54719 = t54713 + t53918 + t54714;
  t54722 = t52289*t54719;
  t54731 = t47042*t54687*t53736;
  t55077 = -1.*t52340*t55076;
  t54740 = -1.*t47042*t54660*t53669;
  t54763 = t48022*t54660*t53734;
  t55082 = t53099*t55076;
  t54779 = t47042*t54687*t53669;
  t54780 = -1.*t48022*t54687*t53734;
  t54783 = t47042*t54660*t54059;
  t54797 = var2[0]*t47042*t54660;
  t54801 = t31326*t52289;
  t54802 = -1.*t47041*t48022*t54660;
  t54805 = t54801 + t54802;
  t54806 = var2[2]*t54805;
  t54808 = t47041*t52289;
  t54813 = t31326*t48022*t54660;
  t54814 = t54808 + t54813;
  t54815 = var2[1]*t54814;
  t54821 = -1.*t54687*t53630;
  t54829 = -1.*t53521*t53230;
  t54832 = -1.*t53315*t53630;
  t54833 = t54829 + t54293 + t54832;
  t54834 = t51928*t54833;
  t54840 = t54581*t53630;
  t54845 = t53521*t47967;
  t54846 = t51928*t53630;
  t54847 = t54845 + t54376 + t54846;
  t54848 = t53315*t54847;
  t55209 = -1.*t53099*t55076;
  t54906 = -1.*t47042*t54687*t53669;
  t54907 = t48022*t54687*t53734;
  t55231 = t47038*t55076;
  t54921 = t47042*t54581*t53669;
  t54926 = -1.*t48022*t54581*t53734;
  t54931 = t47042*t54581*t54312;
  t54934 = t47042*t54687*t54393;
  t54961 = var2[0]*t47042*t54687;
  t54965 = t31326*t48022*t54687;
  t54966 = t47041*t53315;
  t54968 = t54965 + t54966;
  t54971 = var2[1]*t54968;
  t54973 = -1.*t47041*t48022*t54687;
  t54974 = t31326*t53315;
  t54975 = t54973 + t54974;
  t54977 = var2[2]*t54975;
  t54978 = t52289*t53630;
  t54980 = t54443 + t54978;
  t54982 = t51928*t54980;
  t54986 = t54660*t53630;
  t54994 = -1.*t54581*t53630;
  t55000 = -1.*t53521*t47967;
  t55001 = -1.*t51928*t53630;
  t55003 = t55000 + t54558 + t55001;
  t55004 = t52289*t55003;
  t55008 = t47042*t54581*t54503;
  t55288 = t52340*t55076;
  t55012 = t47042*t54660*t53669;
  t55013 = -1.*t48022*t54660*t53734;
  t55292 = -1.*t47038*t55076;
  t55022 = -1.*t47042*t54581*t53669;
  t55023 = t48022*t54581*t53734;
  t55033 = t47042*t54660*t54568;
  t55309 = t46935*t46981;
  t55310 = -1.*t46932*t46995;
  t55311 = t55309 + t55310;
  t55322 = t47027*t45029*t55311;
  t55323 = -1.*t46862*t55311*t47029;
  t55324 = t55322 + t55323;
  t55328 = t45029*t46862*t55311;
  t55329 = t47027*t55311*t47029;
  t55330 = t55328 + t55329;
  t55332 = t47042*t47024;
  t55333 = -1.*t48022*t55324;
  t55334 = t55332 + t55333;
  t55343 = -0.28121*t46981;
  t55344 = -1.*t53494*t46981;
  t55345 = 0.305*t46932*t46995;
  t55346 = t55343 + t55344 + t55345;
  t55347 = t45029*t46862*t55346;
  t55348 = t47027*t55346*t47029;
  t55349 = t55347 + t55348;
  t55351 = t47027*t45029*t55346;
  t55352 = -1.*t46862*t55346*t47029;
  t55353 = t55351 + t55352;
  t55350 = -1.*t52340*t55349;
  t55359 = 0.28121*t46932;
  t55360 = t55359 + t53551 + t53554;
  t55362 = t55349*t53099;
  t55368 = t55360*t48022;
  t55369 = t47042*t55353;
  t55370 = t55368 + t55369;
  t55372 = t47042*t55360;
  t55375 = -1.*t48022*t55353;
  t55376 = t55372 + t55375;
  t55391 = t53521*t47024;
  t55394 = t47967*t55360;
  t55408 = Power(t47027,2);
  t55410 = Power(t46862,2);
  t55403 = -1.*t55360*t53230;
  t55437 = t55349*t47038;
  t55439 = t55330*t53700;
  t55321 = t47024*t48022;
  t55325 = t47042*t55324;
  t55326 = t55321 + t55325;
  t55444 = -1.*t55349*t53099;
  t52019 = t47041*t47038;
  t52115 = -1.*t31326*t51938;
  t52133 = t52019 + t52115;
  t55514 = t52340*t55349;
  t55537 = -1.*t55349*t47038;
  t55552 = -1.*t55330*t53700;
  t55312 = 0.15121*t55311;
  t55313 = 0.15121*t47967;
  t55314 = t55312 + t55313;
  t55315 = var2[9]*t55314;
  t55316 = -1.*t46862*t53589;
  t55317 = t47027*t53619;
  t55318 = t55316 + t55317;
  t53328 = t47041*t53099;
  t53333 = -1.*t31326*t53324;
  t53334 = t53328 + t53333;
  t55607 = 0.305*t46935*t46981;
  t55608 = t55607 + t53499;
  t55609 = t45029*t46862*t55608;
  t55610 = t47027*t55608*t47029;
  t55611 = t55609 + t55610;
  t55613 = t47027*t45029*t55608;
  t55614 = -1.*t46862*t55608*t47029;
  t55615 = t55613 + t55614;
  t55620 = t45029*t46862*t53230;
  t55621 = t47027*t53230*t47029;
  t55622 = t55620 + t55621;
  t55612 = -1.*t52340*t55611;
  t55625 = -0.305*t46932*t46935;
  t55626 = -0.305*t46981*t46995;
  t55627 = t55625 + t55626;
  t55633 = t47027*t45029*t53230;
  t55634 = -1.*t46862*t53230*t47029;
  t55635 = t55633 + t55634;
  t55630 = t55611*t53099;
  t55632 = t55622*t53700;
  t55641 = t55627*t48022;
  t55642 = t47042*t55615;
  t55643 = t55641 + t55642;
  t55645 = t47042*t55627;
  t55647 = -1.*t48022*t55615;
  t55648 = t55645 + t55647;
  t55652 = t55311*t48022;
  t55653 = t47042*t55635;
  t55654 = t55652 + t55653;
  t55388 = t47024*t53559;
  t55389 = t54845 + t55388;
  t55398 = -1.*t47967*t53559;
  t55399 = t55398 + t54829;
  t55419 = -1.*t47027*t47967*t53589;
  t55420 = -1.*t46862*t47967*t53619;
  t55421 = t54829 + t55419 + t55420;
  t55673 = t47967*t55627;
  t55430 = t47027*t47024*t53589;
  t55431 = t46862*t47024*t53619;
  t55432 = t54845 + t55430 + t55431;
  t55677 = -1.*t55311*t53521;
  t55679 = -1.*t55627*t53230;
  t55703 = t55611*t47038;
  t55709 = -1.*t55611*t53099;
  t55711 = -1.*t55622*t53700;
  t55659 = t47042*t55311;
  t55660 = -1.*t48022*t55635;
  t55661 = t55659 + t55660;
  t55473 = t46862*t53589;
  t55478 = -1.*t47027*t53619;
  t55480 = t55473 + t55478;
  t55767 = t52340*t55611;
  t55794 = -1.*t55611*t47038;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t31326*t47038 - 1.*t47041*t51938)*var2[1] + t52133*var2[2];
  p_output1[10]=(t47041*t48022*t52289 - 1.*t31326*t52340)*var2[1] + (t31326*t48022*t52289 + t47041*t52340)*var2[2];
  p_output1[11]=(-1.*t31326*t53099 - 1.*t47041*t53324)*var2[1] + t53334*var2[2];
  p_output1[12]=t51938*var2[0] - 1.*t31326*t53352*var2[1] + t47041*t53352*var2[2] + (t53410*(t48022*t52289*t53639 + t48022*t52289*t53669) + t53324*t53736 + t47042*t52289*(t53324*t53639 + t53324*t53669 + t53410*t53734 + t53734*t53875) - 1.*t48022*t52289*t54059)*var2[3];
  p_output1[13]=-1.*t48022*t52289*var2[0] + t31326*t47042*t52289*var2[1] - 1.*t47041*t47042*t52289*var2[2] + ((-1.*t53324*t53639 - 1.*t53324*t53669 - 1.*t53410*t53734 - 1.*t53734*t53875)*t54186 + t53410*(t51938*t53639 + t51938*t53669 + t53352*t53734 + t53734*t54186) + t51938*t54312 + t53324*t54393)*var2[3];
  p_output1[14]=t53324*var2[0] - 1.*t31326*t53875*var2[1] + t47041*t53875*var2[2] + ((-1.*t48022*t52289*t53639 - 1.*t48022*t52289*t53669)*t54186 + t47042*t52289*(-1.*t51938*t53639 - 1.*t51938*t53669 - 1.*t53352*t53734 - 1.*t53734*t54186) + t51938*t54503 - 1.*t48022*t52289*t54568)*var2[3];
  p_output1[15]=t54582 + t54587 + t54591 + (t54731 + t53410*(t54651 + t54678 - 1.*t52289*t54641*t54732 - 1.*t52289*t54641*t54737 + t54740 + t54763) + t47042*t52289*(-1.*t48022*t53324*t54641 + t47042*t53410*t54641 + t54684 + t54698 + t54779 + t54780) + t54783)*var2[3] + (t54633 + t53099*(-1.*t52289*t54641 + t54651 + t54670 + t54678) + t52340*(t53315*t54641 + t54684 + t54691 + t54698) + t54722)*var2[4];
  p_output1[16]=t54797 + t54806 + t54815 + (t54186*(t48022*t53324*t54641 - 1.*t47042*t53410*t54641 + t54817 + t54825 + t54906 + t54907) + t53410*(-1.*t48022*t51938*t54641 + t47042*t54186*t54641 + t54836 + t54841 + t54921 + t54926) + t54931 + t54934)*var2[3] + (t47038*(-1.*t53315*t54641 + t54817 + t54821 + t54825) + t54834 + t53099*(t51928*t54641 + t54836 + t54840 + t54841) + t54848)*var2[4];
  p_output1[17]=t54961 + t54971 + t54977 + (t55008 + t54186*(t52289*t54641*t54732 + t52289*t54641*t54737 + t54985 + t54987 + t55012 + t55013) + t47042*t52289*(t48022*t51938*t54641 - 1.*t47042*t54186*t54641 + t54993 + t54996 + t55022 + t55023) + t55033)*var2[3] + (t54982 + t47038*(t52289*t54641 + t54985 + t54986 + t54987) + t52340*(-1.*t51928*t54641 + t54993 + t54994 + t54996) + t55004)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t54582 + t54587 + t54591 + (t54731 + t54783 + t53410*(t54651 + t54740 + t54763 - 1.*t52289*t54732*t55070 - 1.*t52289*t54737*t55070 + t55077) + t47042*t52289*(t54684 + t54779 + t54780 - 1.*t48022*t53324*t55070 + t47042*t53410*t55070 + t55082))*var2[3] + (t54633 + t54722 + t53099*(t54651 + t54670 - 1.*t52289*t55070 + t55077) + t52340*(t54684 + t54691 + t53315*t55070 + t55082))*var2[4] + t53230*(-1.*t47027*t53589 - 1.*t46862*t53619 + t47027*t55053 - 1.*t46862*t55059)*var2[5];
  p_output1[28]=t54797 + t54806 + t54815 + (t54931 + t54934 + t54186*(t54817 + t54906 + t54907 + t48022*t53324*t55070 - 1.*t47042*t53410*t55070 + t55209) + t53410*(t54836 + t54921 + t54926 - 1.*t48022*t51938*t55070 + t47042*t54186*t55070 + t55231))*var2[3] + (t54834 + t54848 + t47038*(t54817 + t54821 - 1.*t53315*t55070 + t55209) + t53099*(t54836 + t54840 + t51928*t55070 + t55231))*var2[4] + (t53230*(-1.*t46862*t47024*t53589 + t47024*t47027*t53619 + t46862*t47024*t55053 + t47024*t47027*t55059) + t47967*(t46862*t47967*t53589 - 1.*t47027*t47967*t53619 - 1.*t46862*t47967*t55053 - 1.*t47027*t47967*t55059))*var2[5];
  p_output1[29]=t54961 + t54971 + t54977 + (t55008 + t55033 + t54186*(t54985 + t55012 + t55013 + t52289*t54732*t55070 + t52289*t54737*t55070 + t55288) + t47042*t52289*(t54993 + t55022 + t55023 + t48022*t51938*t55070 - 1.*t47042*t54186*t55070 + t55292))*var2[3] + (t54982 + t55004 + t47038*(t54985 + t54986 + t52289*t55070 + t55288) + t52340*(t54993 + t54994 - 1.*t51928*t55070 + t55292))*var2[4] + t47967*(t47027*t53589 + t46862*t53619 - 1.*t47027*t55053 + t46862*t55059)*var2[5];
  p_output1[30]=t55315 + t55326*var2[0] + (t47041*t55330 - 1.*t31326*t55334)*var2[1] + (t31326*t55330 + t47041*t55334)*var2[2] + (t53736*t54186 + t53410*(t55350 - 1.*t47042*t52289*t55370 + t48022*t52289*t55376) + t47042*t52289*(t54376 + t54381 + t54385 + t55362 + t53410*t55370 + t53324*t55376))*var2[3] + (t47038*t54629 + t53099*(t55350 - 1.*t52289*t55353) + t52340*(t54376 + t54845 + t54846 + t53315*t55353 + t53230*t55360 + t55362))*var2[4] + t47967*t55318*var2[5];
  p_output1[31]=(t54186*t54393 + t54312*t55326 + t53410*(t53669*t55326 + t53734*t55334 + t54186*t55370 + t51938*t55376 + t55437 + t55439) + t54186*(t54558 + t54564 + t54565 - 1.*t53410*t55370 - 1.*t53324*t55376 + t55444))*var2[3] + (t47038*t54847 + t54833*t55330 + t53099*(t53630*t55324 + t51928*t55353 + t55391 + t55394 + t55437 + t55439) + t47038*(t54558 + t55000 + t55001 - 1.*t53315*t55353 + t55403 + t55444))*var2[4] + (t53230*(t47027*t53589*t55311 + t46862*t53619*t55311 + t55391 + t55394 + t47024*t55346*t55408 + t47024*t55346*t55410) + t47967*(-1.*t47024*t47027*t53589 - 1.*t46862*t47024*t53619 + t55000 + t55403 - 1.*t47967*t55346*t55408 - 1.*t47967*t55346*t55410) + t47024*t55421 + t47967*t55432)*var2[5] + (t47967*t55389 + t53230*(t53559*t55311 + t47024*t55346 + t55391 + t55394) + t47024*t55399 + t47967*(-1.*t47024*t53559 + t55000 - 1.*t47967*t55346 + t55403))*var2[9];
  p_output1[32]=t54186*var2[0] + t52133*var2[1] + (t31326*t47038 + t47041*t51938)*var2[2] + (t54503*t55326 + t54186*(t47042*t52289*t55370 - 1.*t48022*t52289*t55376 + t55514) + t47042*t52289*(-1.*t53669*t55326 - 1.*t53734*t55334 - 1.*t54186*t55370 - 1.*t51938*t55376 + t55537 + t55552))*var2[3] + (t54980*t55330 + t47038*(t52289*t55353 + t55514) + t52340*(-1.*t47024*t53521 - 1.*t53630*t55324 - 1.*t51928*t55353 - 1.*t47967*t55360 + t55537 + t55552))*var2[4] + t47024*t55480*var2[5];
  p_output1[33]=t55315 + t53410*var2[0] + t53334*var2[1] + (t31326*t53099 + t47041*t53324)*var2[2] + (t53410*(t55612 - 1.*t47042*t52289*t55643 + t48022*t52289*t55648) + t53736*t55654 + t47042*t52289*(t55630 + t55632 + t53410*t55643 + t53324*t55648 + t53669*t55654 + t53734*t55661))*var2[3] + (t53099*(t55612 - 1.*t52289*t55615) + t54629*t55622 + t52340*(t53521*t55311 + t53315*t55615 + t53230*t55627 + t55630 + t55632 + t53630*t55635))*var2[4] + t55311*t55318*var2[5] + (0.28121*t46935 - 0.305*Power(t46935,2) + t46935*t53494)*var2[10];
  p_output1[34]=(t53410*t54312 + t54393*t55654 + t53410*(t53918 + t53919 + t53922 + t54186*t55643 + t51938*t55648 + t55703) + t54186*(-1.*t53410*t55643 - 1.*t53324*t55648 - 1.*t53669*t55654 - 1.*t53734*t55661 + t55709 + t55711))*var2[3] + (t53099*t54833 + t54847*t55622 + t53099*(t53918 + t54713 + t54714 + t51928*t55615 + t55673 + t55703) + t47038*(-1.*t53315*t55615 - 1.*t53630*t55635 + t55677 + t55679 + t55709 + t55711))*var2[4] + (t53230*t55421 + t55311*t55432 + t53230*(t47027*t47967*t53589 + t46862*t47967*t53619 + t54713 + t47024*t55408*t55608 + t47024*t55410*t55608 + t55673) + t47967*(-1.*t47027*t53230*t53589 - 1.*t46862*t53230*t53619 - 1.*t47967*t55408*t55608 - 1.*t47967*t55410*t55608 + t55677 + t55679))*var2[5] + (t55311*t55389 + t53230*t55399 + t53230*(t47967*t53559 + t54713 + t47024*t55608 + t55673) + t47967*(-1.*t53230*t53559 - 1.*t47967*t55608 + t55677 + t55679))*var2[9];
  p_output1[35]=t55654*var2[0] + (t47041*t55622 - 1.*t31326*t55661)*var2[1] + (t31326*t55622 + t47041*t55661)*var2[2] + (t53410*t54503 + t54186*(t47042*t52289*t55643 - 1.*t48022*t52289*t55648 + t55767) + t47042*t52289*(t54293 + t54297 + t54303 - 1.*t54186*t55643 - 1.*t51938*t55648 + t55794))*var2[3] + (t53099*t54980 + t47038*(t52289*t55615 + t55767) + t52340*(t54293 + t54829 + t54832 - 1.*t51928*t55615 - 1.*t47967*t55627 + t55794))*var2[4] + t53230*t55480*var2[5] + (-0.28121*t46995 + 0.305*t46935*t46995 - 1.*t46995*t53494)*var2[10];
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
