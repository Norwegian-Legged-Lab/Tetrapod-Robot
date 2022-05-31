/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:58:43 GMT+02:00
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
  double t12039;
  double t12525;
  double t12543;
  double t15574;
  double t16020;
  double t27010;
  double t18721;
  double t18722;
  double t18835;
  double t27070;
  double t18919;
  double t27586;
  double t27711;
  double t28253;
  double t28260;
  double t28262;
  double t28571;
  double t28573;
  double t28576;
  double t28581;
  double t28697;
  double t40560;
  double t40598;
  double t40646;
  double t40729;
  double t41293;
  double t14782;
  double t16070;
  double t28226;
  double t28235;
  double t28242;
  double t28264;
  double t28354;
  double t28501;
  double t28507;
  double t28544;
  double t28549;
  double t28561;
  double t50681;
  double t50692;
  double t50761;
  double t28579;
  double t28705;
  double t28726;
  double t28842;
  double t28845;
  double t28847;
  double t28873;
  double t28877;
  double t29433;
  double t31935;
  double t33717;
  double t35044;
  double t50830;
  double t50837;
  double t48595;
  double t49195;
  double t49274;
  double t49417;
  double t50055;
  double t50299;
  double t50319;
  double t50628;
  double t50629;
  double t50645;
  double t50657;
  double t50663;
  double t50848;
  double t50857;
  double t50700;
  double t28524;
  double t50821;
  double t50822;
  double t50823;
  double t50824;
  double t50825;
  double t50826;
  double t50906;
  double t50931;
  double t50933;
  double t50936;
  double t50937;
  double t50831;
  double t31504;
  double t50838;
  double t50839;
  double t50840;
  double t50842;
  double t50843;
  double t50844;
  double t50962;
  double t50972;
  double t50973;
  double t50977;
  double t50979;
  double t50850;
  double t50635;
  double t50858;
  double t50859;
  double t50861;
  double t50862;
  double t50865;
  double t50867;
  double t51169;
  double t51209;
  double t51217;
  double t51337;
  double t51341;
  double t51351;
  double t51353;
  double t51354;
  double t51355;
  double t51356;
  double t51357;
  double t51359;
  double t51374;
  double t51383;
  double t51386;
  double t51397;
  double t51406;
  double t51407;
  double t51421;
  double t51425;
  double t51427;
  double t51429;
  double t51435;
  double t51441;
  double t51423;
  double t51436;
  double t51437;
  double t51439;
  double t51442;
  double t51443;
  double t51446;
  double t51447;
  double t51452;
  double t51460;
  double t51461;
  double t51462;
  double t51464;
  double t51479;
  double t51517;
  double t51532;
  double t51578;
  double t51579;
  double t51582;
  double t51583;
  double t51609;
  double t51739;
  double t51757;
  double t51759;
  double t51765;
  double t51769;
  double t51771;
  double t51789;
  double t51987;
  double t53635;
  double t53677;
  double t53678;
  double t53679;
  double t53680;
  double t53696;
  double t53697;
  double t53723;
  double t54283;
  double t51580;
  double t54557;
  double t50911;
  double t50916;
  double t54569;
  double t54604;
  double t54614;
  double t55253;
  double t55261;
  double t55420;
  double t54621;
  double t51770;
  double t54626;
  double t50965;
  double t50967;
  double t54628;
  double t54634;
  double t54962;
  double t55748;
  double t55772;
  double t55773;
  double t55006;
  double t53681;
  double t55229;
  double t51173;
  double t51181;
  double t55230;
  double t55232;
  double t55237;
  double t55854;
  double t55862;
  double t55863;
  double t55922;
  double t55924;
  double t55929;
  double t55931;
  double t55946;
  double t55950;
  double t55951;
  double t55960;
  double t55947;
  double t56007;
  double t56011;
  double t51453;
  double t51455;
  double t56015;
  double t56016;
  double t56020;
  double t56030;
  double t56041;
  double t56043;
  double t56283;
  double t56292;
  double t56311;
  double t56350;
  double t56404;
  double t56410;
  double t56343;
  double t56495;
  double t56512;
  double t56514;
  double t56516;
  double t56910;
  double t56916;
  double t56917;
  double t57540;
  double t57541;
  double t57545;
  double t57526;
  double t57528;
  double t57561;
  double t57565;
  double t57567;
  double t57582;
  double t57586;
  double t57587;
  double t57580;
  double t57581;
  double t57740;
  double t57756;
  double t57758;
  double t56957;
  double t56919;
  double t57554;
  double t57574;
  double t57732;
  double t57782;
  double t57909;
  double t57910;
  double t57911;
  double t57913;
  double t57914;
  double t57916;
  double t57917;
  double t57918;
  double t57925;
  double t57920;
  double t58132;
  double t58133;
  double t58134;
  double t58024;
  double t58082;
  double t58131;
  double t58136;
  double t58137;
  double t58141;
  double t58142;
  double t58144;
  double t58164;
  double t58182;
  double t58380;
  double t58184;
  double t58748;
  double t58756;
  double t58809;
  double t58699;
  double t58819;
  double t58840;
  double t58847;
  double t58954;
  double t58985;
  double t58991;
  double t58995;
  double t59036;
  double t59039;
  double t59041;
  double t59084;
  double t59088;
  double t59093;
  double t59095;
  double t59103;
  double t59108;
  double t59112;
  double t59118;
  double t59129;
  double t59130;
  double t59153;
  double t59137;
  double t59230;
  double t59241;
  double t59255;
  double t59226;
  double t59265;
  double t59351;
  double t59361;
  double t59387;
  double t59453;
  double t59461;
  double t59472;
  double t59625;
  double t59631;
  double t59639;
  double t59966;
  double t60078;
  double t60080;
  double t59979;
  double t60006;
  double t60063;
  double t60071;
  double t60073;
  double t60101;
  double t60103;
  double t60081;
  double t60165;
  double t60359;
  double t60365;
  double t60378;
  double t60357;
  double t60382;
  double t60405;
  double t60406;
  double t60417;
  double t60440;
  double t60443;
  double t60445;
  double t60538;
  double t60542;
  double t60560;
  double t60707;
  double t60721;
  double t60653;
  double t60660;
  double t60670;
  double t60673;
  double t60689;
  double t60705;
  double t60738;
  double t60739;
  double t60729;
  double t60748;
  double t60773;
  double t60774;
  double t60775;
  double t60772;
  double t60790;
  double t60791;
  double t60816;
  double t60817;
  double t60837;
  double t60839;
  double t60846;
  double t60954;
  double t60992;
  double t61020;
  t12039 = Cos(var1[9]);
  t12525 = -1.*t12039;
  t12543 = 1. + t12525;
  t15574 = Sin(var1[9]);
  t16020 = 0.15121*t15574;
  t27010 = Cos(var1[3]);
  t18721 = Cos(var1[5]);
  t18722 = Sin(var1[3]);
  t18835 = Sin(var1[4]);
  t27070 = Sin(var1[5]);
  t18919 = t18721*t18722*t18835;
  t27586 = t27010*t27070;
  t27711 = t18919 + t27586;
  t28253 = t27010*t18721;
  t28260 = -1.*t18722*t18835*t27070;
  t28262 = t28253 + t28260;
  t28571 = Cos(var1[12]);
  t28573 = -1.*t28571;
  t28576 = 1. + t28573;
  t28581 = Sin(var1[12]);
  t28697 = -0.15121*t28581;
  t40560 = Cos(var1[15]);
  t40598 = -1.*t40560;
  t40646 = 1. + t40598;
  t40729 = -0.15121*t40646;
  t41293 = Sin(var1[15]);
  t14782 = -0.15121*t12543;
  t16070 = t14782 + t16020;
  t28226 = t16070*t27711;
  t28235 = 0.15121*t12543;
  t28242 = t28235 + t16020;
  t28264 = t28242*t28262;
  t28354 = -1.*t15574*t27711;
  t28501 = t12039*t28262;
  t28507 = t28354 + t28501;
  t28544 = t12039*t27711;
  t28549 = t15574*t28262;
  t28561 = t28544 + t28549;
  t50681 = Cos(var1[4]);
  t50692 = Sin(var1[10]);
  t50761 = Cos(var1[10]);
  t28579 = 0.15121*t28576;
  t28705 = t28579 + t28697;
  t28726 = t28705*t27711;
  t28842 = -0.15121*t28576;
  t28845 = t28842 + t28697;
  t28847 = t28845*t28262;
  t28873 = -1.*t28581*t27711;
  t28877 = t28571*t28262;
  t29433 = t28873 + t28877;
  t31935 = t28571*t27711;
  t33717 = t28581*t28262;
  t35044 = t31935 + t33717;
  t50830 = Sin(var1[13]);
  t50837 = Cos(var1[13]);
  t48595 = -0.15121*t41293;
  t49195 = t40729 + t48595;
  t49274 = t49195*t27711;
  t49417 = 0.15121*t41293;
  t50055 = t40729 + t49417;
  t50299 = t50055*t28262;
  t50319 = -1.*t41293*t27711;
  t50628 = t40560*t28262;
  t50629 = t50319 + t50628;
  t50645 = t40560*t27711;
  t50657 = t41293*t28262;
  t50663 = t50645 + t50657;
  t50848 = Sin(var1[16]);
  t50857 = Cos(var1[16]);
  t50700 = -0.28121*t50681*t50692*t18722;
  t28524 = 0.15121*t28507;
  t50821 = -1.*t50761;
  t50822 = 1. + t50821;
  t50823 = -0.28121*t50822*t28561;
  t50824 = -1.*t50681*t50692*t18722;
  t50825 = t50761*t28561;
  t50826 = t50824 + t50825;
  t50906 = Cos(var1[11]);
  t50931 = Sin(var1[11]);
  t50933 = -1.*t50761*t50681*t18722;
  t50936 = -1.*t50692*t28561;
  t50937 = t50933 + t50936;
  t50831 = -0.28121*t50681*t50830*t18722;
  t31504 = -0.15121*t29433;
  t50838 = -1.*t50837;
  t50839 = 1. + t50838;
  t50840 = 0.28121*t50839*t35044;
  t50842 = t50681*t50830*t18722;
  t50843 = t50837*t35044;
  t50844 = t50842 + t50843;
  t50962 = Cos(var1[14]);
  t50972 = Sin(var1[14]);
  t50973 = -1.*t50837*t50681*t18722;
  t50977 = t50830*t35044;
  t50979 = t50973 + t50977;
  t50850 = -0.28121*t50681*t50848*t18722;
  t50635 = -0.15121*t50629;
  t50858 = -1.*t50857;
  t50859 = 1. + t50858;
  t50861 = -0.28121*t50859*t50663;
  t50862 = -1.*t50681*t50848*t18722;
  t50865 = t50857*t50663;
  t50867 = t50862 + t50865;
  t51169 = Cos(var1[17]);
  t51209 = Sin(var1[17]);
  t51217 = -1.*t50857*t50681*t18722;
  t51337 = -1.*t50848*t50663;
  t51341 = t51217 + t51337;
  t51351 = Cos(var1[6]);
  t51353 = -1.*t51351;
  t51354 = 1. + t51353;
  t51355 = 0.15121*t51354;
  t51356 = Sin(var1[6]);
  t51357 = -0.15121*t51356;
  t51359 = t51355 + t51357;
  t51374 = t28262*t51359;
  t51383 = 0.15121*t51356;
  t51386 = t51355 + t51383;
  t51397 = t27711*t51386;
  t51406 = t51351*t28262;
  t51407 = -1.*t27711*t51356;
  t51421 = t51406 + t51407;
  t51425 = t51351*t27711;
  t51427 = t28262*t51356;
  t51429 = t51425 + t51427;
  t51435 = Cos(var1[7]);
  t51441 = Sin(var1[7]);
  t51423 = 0.15121*t51421;
  t51436 = -1.*t51435;
  t51437 = 1. + t51436;
  t51439 = 0.28121*t51437*t51429;
  t51442 = -0.28121*t50681*t18722*t51441;
  t51443 = t51435*t51429;
  t51446 = t50681*t18722*t51441;
  t51447 = t51443 + t51446;
  t51452 = Cos(var1[8]);
  t51460 = -1.*t50681*t51435*t18722;
  t51461 = t51429*t51441;
  t51462 = t51460 + t51461;
  t51464 = Sin(var1[8]);
  t51479 = -1.*t27010*t50681*t18721*t16070;
  t51517 = t27010*t50681*t28242*t27070;
  t51532 = t27010*t50681*t18721*t15574;
  t51578 = t12039*t27010*t50681*t27070;
  t51579 = t51532 + t51578;
  t51582 = -1.*t12039*t27010*t50681*t18721;
  t51583 = t27010*t50681*t15574*t27070;
  t51609 = t51582 + t51583;
  t51739 = -1.*t27010*t50681*t18721*t28705;
  t51757 = t27010*t50681*t28845*t27070;
  t51759 = t27010*t50681*t18721*t28581;
  t51765 = t28571*t27010*t50681*t27070;
  t51769 = t51759 + t51765;
  t51771 = -1.*t28571*t27010*t50681*t18721;
  t51789 = t27010*t50681*t28581*t27070;
  t51987 = t51771 + t51789;
  t53635 = -1.*t27010*t50681*t18721*t49195;
  t53677 = t27010*t50681*t50055*t27070;
  t53678 = t27010*t50681*t18721*t41293;
  t53679 = t40560*t27010*t50681*t27070;
  t53680 = t53678 + t53679;
  t53696 = -1.*t40560*t27010*t50681*t18721;
  t53697 = t27010*t50681*t41293*t27070;
  t53723 = t53696 + t53697;
  t54283 = -0.28121*t27010*t50692*t18835;
  t51580 = 0.15121*t51579;
  t54557 = -0.28121*t50822*t51609;
  t50911 = -1.*t50906;
  t50916 = 1. + t50911;
  t54569 = -1.*t27010*t50692*t18835;
  t54604 = t50761*t51609;
  t54614 = t54569 + t54604;
  t55253 = -1.*t50761*t27010*t18835;
  t55261 = -1.*t50692*t51609;
  t55420 = t55253 + t55261;
  t54621 = -0.28121*t27010*t50830*t18835;
  t51770 = -0.15121*t51769;
  t54626 = 0.28121*t50839*t51987;
  t50965 = -1.*t50962;
  t50967 = 1. + t50965;
  t54628 = t27010*t50830*t18835;
  t54634 = t50837*t51987;
  t54962 = t54628 + t54634;
  t55748 = -1.*t50837*t27010*t18835;
  t55772 = t50830*t51987;
  t55773 = t55748 + t55772;
  t55006 = -0.28121*t27010*t50848*t18835;
  t53681 = -0.15121*t53680;
  t55229 = -0.28121*t50859*t53723;
  t51173 = -1.*t51169;
  t51181 = 1. + t51173;
  t55230 = -1.*t27010*t50848*t18835;
  t55232 = t50857*t53723;
  t55237 = t55230 + t55232;
  t55854 = -1.*t50857*t27010*t18835;
  t55862 = -1.*t50848*t53723;
  t55863 = t55854 + t55862;
  t55922 = t27010*t50681*t27070*t51359;
  t55924 = -1.*t27010*t50681*t18721*t51386;
  t55929 = t27010*t50681*t51351*t27070;
  t55931 = t27010*t50681*t18721*t51356;
  t55946 = t55929 + t55931;
  t55950 = -1.*t27010*t50681*t18721*t51351;
  t55951 = t27010*t50681*t27070*t51356;
  t55960 = t55950 + t55951;
  t55947 = 0.15121*t55946;
  t56007 = 0.28121*t51437*t55960;
  t56011 = -0.28121*t27010*t18835*t51441;
  t51453 = -1.*t51452;
  t51455 = 1. + t51453;
  t56015 = t51435*t55960;
  t56016 = t27010*t18835*t51441;
  t56020 = t56015 + t56016;
  t56030 = -1.*t27010*t51435*t18835;
  t56041 = t55960*t51441;
  t56043 = t56030 + t56041;
  t56283 = t27010*t18721*t18835;
  t56292 = -1.*t18722*t27070;
  t56311 = t56283 + t56292;
  t56350 = t18721*t18722;
  t56404 = t27010*t18835*t27070;
  t56410 = t56350 + t56404;
  t56343 = t28242*t56311;
  t56495 = t16070*t56410;
  t56512 = t15574*t56311;
  t56514 = t12039*t56410;
  t56516 = t56512 + t56514;
  t56910 = t12039*t56311;
  t56916 = -1.*t15574*t56410;
  t56917 = t56910 + t56916;
  t57540 = t28581*t56311;
  t57541 = t28571*t56410;
  t57545 = t57540 + t57541;
  t57526 = t28845*t56311;
  t57528 = t28705*t56410;
  t57561 = t28571*t56311;
  t57565 = -1.*t28581*t56410;
  t57567 = t57561 + t57565;
  t57582 = t41293*t56311;
  t57586 = t40560*t56410;
  t57587 = t57582 + t57586;
  t57580 = t50055*t56311;
  t57581 = t49195*t56410;
  t57740 = t40560*t56311;
  t57756 = -1.*t41293*t56410;
  t57758 = t57740 + t57756;
  t56957 = -0.28121*t50822*t56516;
  t56919 = 0.15121*t56917;
  t57554 = 0.28121*t50839*t57545;
  t57574 = -0.15121*t57567;
  t57732 = -0.28121*t50859*t57587;
  t57782 = -0.15121*t57758;
  t57909 = t56311*t51359;
  t57910 = t56410*t51386;
  t57911 = t51351*t56410;
  t57913 = t56311*t51356;
  t57914 = t57911 + t57913;
  t57916 = t51351*t56311;
  t57917 = -1.*t56410*t51356;
  t57918 = t57916 + t57917;
  t57925 = 0.28121*t51437*t57914;
  t57920 = 0.15121*t57918;
  t58132 = -1.*t27010*t18721*t18835;
  t58133 = t18722*t27070;
  t58134 = t58132 + t58133;
  t58024 = -0.15121*t51351;
  t58082 = t58024 + t51383;
  t58131 = t56410*t58082;
  t58136 = 0.15121*t51351;
  t58137 = t58136 + t51383;
  t58141 = t58134*t58137;
  t58142 = -1.*t58134*t51356;
  t58144 = t57911 + t58142;
  t58164 = -1.*t51351*t58134;
  t58182 = t58164 + t57917;
  t58380 = 0.28121*t51437*t58144;
  t58184 = 0.15121*t58182;
  t58748 = t51351*t58134;
  t58756 = t56410*t51356;
  t58809 = t58748 + t58756;
  t58699 = 0.28121*t27010*t50681*t51435;
  t58819 = 0.28121*t58809*t51441;
  t58840 = -1.*t27010*t50681*t51435;
  t58847 = -1.*t58809*t51441;
  t58954 = t58840 + t58847;
  t58985 = t51435*t58809;
  t58991 = -1.*t27010*t50681*t51441;
  t58995 = t58985 + t58991;
  t59036 = t27010*t50681*t51435;
  t59039 = t58809*t51441;
  t59041 = t59036 + t59039;
  t59084 = 0.15121*t12039;
  t59088 = -0.15121*t15574;
  t59093 = t59084 + t59088;
  t59095 = t59093*t58134;
  t59103 = t59084 + t16020;
  t59108 = t59103*t56410;
  t59112 = -1.*t15574*t58134;
  t59118 = t59112 + t56514;
  t59129 = -1.*t12039*t58134;
  t59130 = t59129 + t56916;
  t59153 = -0.28121*t50822*t59118;
  t59137 = 0.15121*t59130;
  t59230 = t12039*t58134;
  t59241 = t15574*t56410;
  t59255 = t59230 + t59241;
  t59226 = 0.28121*t50761*t27010*t50681;
  t59265 = -0.28121*t50692*t59255;
  t59351 = t50761*t27010*t50681;
  t59361 = -1.*t50692*t59255;
  t59387 = t59351 + t59361;
  t59453 = -1.*t27010*t50681*t50692;
  t59461 = -1.*t50761*t59255;
  t59472 = t59453 + t59461;
  t59625 = t27010*t50681*t50692;
  t59631 = t50761*t59255;
  t59639 = t59625 + t59631;
  t59966 = -0.15121*t28571;
  t60078 = -1.*t28581*t58134;
  t60080 = t60078 + t57541;
  t59979 = 0.15121*t28581;
  t60006 = t59966 + t59979;
  t60063 = t60006*t58134;
  t60071 = t59966 + t28697;
  t60073 = t60071*t56410;
  t60101 = -1.*t28571*t58134;
  t60103 = t60101 + t57565;
  t60081 = 0.28121*t50839*t60080;
  t60165 = -0.15121*t60103;
  t60359 = t28571*t58134;
  t60365 = t28581*t56410;
  t60378 = t60359 + t60365;
  t60357 = 0.28121*t50837*t27010*t50681;
  t60382 = 0.28121*t50830*t60378;
  t60405 = -1.*t50837*t27010*t50681;
  t60406 = -1.*t50830*t60378;
  t60417 = t60405 + t60406;
  t60440 = -1.*t27010*t50681*t50830;
  t60443 = t50837*t60378;
  t60445 = t60440 + t60443;
  t60538 = t50837*t27010*t50681;
  t60542 = t50830*t60378;
  t60560 = t60538 + t60542;
  t60707 = -1.*t41293*t58134;
  t60721 = t60707 + t57586;
  t60653 = -0.15121*t40560;
  t60660 = t60653 + t48595;
  t60670 = t60660*t58134;
  t60673 = 0.15121*t40560;
  t60689 = t60673 + t48595;
  t60705 = t60689*t56410;
  t60738 = -1.*t40560*t58134;
  t60739 = t60738 + t57756;
  t60729 = -0.28121*t50859*t60721;
  t60748 = -0.15121*t60739;
  t60773 = t40560*t58134;
  t60774 = t41293*t56410;
  t60775 = t60773 + t60774;
  t60772 = 0.28121*t50857*t27010*t50681;
  t60790 = -0.28121*t50848*t60775;
  t60791 = t50857*t27010*t50681;
  t60816 = -1.*t50848*t60775;
  t60817 = t60791 + t60816;
  t60837 = -1.*t27010*t50681*t50848;
  t60839 = -1.*t50857*t60775;
  t60846 = t60837 + t60839;
  t60954 = t27010*t50681*t50848;
  t60992 = t50857*t60775;
  t61020 = t60954 + t60992;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t28226 + t28264 + t28524 - 0.15121*t28561) - 11.5758*(t28726 + t28847 + t31504 + 0.15121*t35044) - 11.5758*(t49274 + t50299 + t50635 - 0.15121*t50663) - 13.6359*(t28226 + t28264 + 0.18121*t28507 + t50700 + t50823 - 0.28121*t50826) - 13.6359*(t28726 + t28847 - 0.18121*t29433 + t50831 + t50840 + 0.28121*t50844) - 13.6359*(t49274 + t50299 - 0.18121*t50629 + t50850 + t50861 - 0.28121*t50867) - 2.7468000000000004*(t28226 + t28264 + t28524 + t50700 + t50823 - 0.50321*t50826*t50916 - 0.50321*t50931*t50937 - 0.50321*(t50826*t50906 - 1.*t50931*t50937)) - 2.7468000000000004*(t28726 + t28847 + t31504 + t50831 + t50840 + 0.50321*t50844*t50967 - 0.50321*t50972*t50979 + 0.50321*(t50844*t50962 + t50972*t50979)) - 2.7468000000000004*(t49274 + t50299 + t50635 + t50850 + t50861 - 0.50321*t50867*t51181 - 0.50321*t51209*t51341 - 0.50321*(t50867*t51169 - 1.*t51209*t51341)) - 11.5758*(t51374 + t51397 + t51423 + 0.15121*t51429) - 13.6359*(t51374 + t51397 + 0.18121*t51421 + t51439 + t51442 + 0.28121*t51447) - 2.7468000000000004*(t51374 + t51397 + t51423 + t51439 + t51442 + 0.50321*t51447*t51455 - 0.50321*t51462*t51464 + 0.50321*(t51447*t51452 + t51462*t51464));
  p_output1[4]=-11.5758*(t51479 + t51517 + t51580 - 0.15121*t51609) - 11.5758*(t51739 + t51757 + t51770 + 0.15121*t51987) - 11.5758*(t53635 + t53677 + t53681 - 0.15121*t53723) - 13.6359*(t51479 + t51517 + 0.18121*t51579 + t54283 + t54557 - 0.28121*t54614) - 13.6359*(t51739 + t51757 - 0.18121*t51769 + t54621 + t54626 + 0.28121*t54962) - 13.6359*(t53635 + t53677 - 0.18121*t53680 + t55006 + t55229 - 0.28121*t55237) - 2.7468000000000004*(t51479 + t51517 + t51580 + t54283 + t54557 - 0.50321*t50916*t54614 - 0.50321*t50931*t55420 - 0.50321*(t50906*t54614 - 1.*t50931*t55420)) - 2.7468000000000004*(t51739 + t51757 + t51770 + t54621 + t54626 + 0.50321*t50967*t54962 - 0.50321*t50972*t55773 + 0.50321*(t50962*t54962 + t50972*t55773)) - 2.7468000000000004*(t53635 + t53677 + t53681 + t55006 + t55229 - 0.50321*t51181*t55237 - 0.50321*t51209*t55863 - 0.50321*(t51169*t55237 - 1.*t51209*t55863)) - 11.5758*(t55922 + t55924 + t55947 + 0.15121*t55960) - 13.6359*(t55922 + t55924 + 0.18121*t55946 + t56007 + t56011 + 0.28121*t56020) - 2.7468000000000004*(t55922 + t55924 + t55947 + t56007 + t56011 + 0.50321*t51455*t56020 - 0.50321*t51464*t56043 + 0.50321*(t51452*t56020 + t51464*t56043));
  p_output1[5]=-11.5758*(t56343 + t56495 - 0.15121*t56516 + t56919) - 13.6359*(t56343 + t56495 - 0.28121*t50761*t56516 + 0.18121*t56917 + t56957) - 2.7468000000000004*(t56343 + t56495 - 0.50321*t50761*t50916*t56516 + 0.50321*t50692*t50931*t56516 - 0.50321*(t50761*t50906*t56516 + t50692*t50931*t56516) + t56919 + t56957) - 13.6359*(t57526 + t57528 + 0.28121*t50837*t57545 + t57554 - 0.18121*t57567) - 11.5758*(t57526 + t57528 + 0.15121*t57545 + t57574) - 2.7468000000000004*(t57526 + t57528 + 0.50321*t50837*t50967*t57545 - 0.50321*t50830*t50972*t57545 + 0.50321*(t50837*t50962*t57545 + t50830*t50972*t57545) + t57554 + t57574) - 13.6359*(t57580 + t57581 - 0.28121*t50857*t57587 + t57732 - 0.18121*t57758) - 11.5758*(t57580 + t57581 - 0.15121*t57587 + t57782) - 2.7468000000000004*(t57580 + t57581 - 0.50321*t50857*t51181*t57587 + 0.50321*t50848*t51209*t57587 - 0.50321*(t50857*t51169*t57587 + t50848*t51209*t57587) + t57732 + t57782) - 11.5758*(t57909 + t57910 + 0.15121*t57914 + t57920) - 13.6359*(t57909 + t57910 + 0.28121*t51435*t57914 + 0.18121*t57918 + t57925) - 2.7468000000000004*(t57909 + t57910 + 0.50321*t51435*t51455*t57914 - 0.50321*t51441*t51464*t57914 + 0.50321*(t51435*t51452*t57914 + t51441*t51464*t57914) + t57920 + t57925);
  p_output1[6]=-11.5758*(t58131 + t58141 + 0.15121*t58144 + t58184) - 13.6359*(t58131 + t58141 + 0.28121*t51435*t58144 + 0.18121*t58182 + t58380) - 2.7468000000000004*(t58131 + t58141 + 0.50321*t51435*t51455*t58144 - 0.50321*t51441*t51464*t58144 + 0.50321*(t51435*t51452*t58144 + t51441*t51464*t58144) + t58184 + t58380);
  p_output1[7]=-13.6359*(t58699 + t58819 + 0.28121*t58954) - 2.7468000000000004*(t58699 + t58819 + 0.50321*t51455*t58954 - 0.50321*t51464*t58995 + 0.50321*(t51452*t58954 + t51464*t58995));
  p_output1[8]=-2.7468000000000004*(0.50321*t51464*t58995 - 0.50321*t51452*t59041 + 0.50321*(-1.*t51464*t58995 + t51452*t59041));
  p_output1[9]=-11.5758*(t59095 + t59108 - 0.15121*t59118 + t59137) - 13.6359*(t59095 + t59108 - 0.28121*t50761*t59118 + 0.18121*t59130 + t59153) - 2.7468000000000004*(t59095 + t59108 - 0.50321*t50761*t50916*t59118 + 0.50321*t50692*t50931*t59118 - 0.50321*(t50761*t50906*t59118 + t50692*t50931*t59118) + t59137 + t59153);
  p_output1[10]=-13.6359*(t59226 + t59265 - 0.28121*t59387) - 2.7468000000000004*(t59226 + t59265 - 0.50321*t50916*t59387 - 0.50321*t50931*t59472 - 0.50321*(t50906*t59387 - 1.*t50931*t59472));
  p_output1[11]=-2.7468000000000004*(-0.50321*t50906*t59387 - 0.50321*t50931*t59639 - 0.50321*(-1.*t50906*t59387 - 1.*t50931*t59639));
  p_output1[12]=-13.6359*(t60063 + t60073 + 0.28121*t50837*t60080 + t60081 - 0.18121*t60103) - 11.5758*(t60063 + t60073 + 0.15121*t60080 + t60165) - 2.7468000000000004*(t60063 + t60073 + 0.50321*t50837*t50967*t60080 - 0.50321*t50830*t50972*t60080 + 0.50321*(t50837*t50962*t60080 + t50830*t50972*t60080) + t60081 + t60165);
  p_output1[13]=-13.6359*(t60357 + t60382 + 0.28121*t60417) - 2.7468000000000004*(t60357 + t60382 + 0.50321*t50967*t60417 - 0.50321*t50972*t60445 + 0.50321*(t50962*t60417 + t50972*t60445));
  p_output1[14]=-2.7468000000000004*(0.50321*t50972*t60445 - 0.50321*t50962*t60560 + 0.50321*(-1.*t50972*t60445 + t50962*t60560));
  p_output1[15]=-13.6359*(t60670 + t60705 - 0.28121*t50857*t60721 + t60729 - 0.18121*t60739) - 11.5758*(t60670 + t60705 - 0.15121*t60721 + t60748) - 2.7468000000000004*(t60670 + t60705 - 0.50321*t50857*t51181*t60721 + 0.50321*t50848*t51209*t60721 - 0.50321*(t50857*t51169*t60721 + t50848*t51209*t60721) + t60729 + t60748);
  p_output1[16]=-13.6359*(t60772 + t60790 - 0.28121*t60817) - 2.7468000000000004*(t60772 + t60790 - 0.50321*t51181*t60817 - 0.50321*t51209*t60846 - 0.50321*(t51169*t60817 - 1.*t51209*t60846));
  p_output1[17]=-2.7468000000000004*(-0.50321*t51169*t60817 - 0.50321*t51209*t61020 - 0.50321*(-1.*t51169*t60817 - 1.*t51209*t61020));
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

#include "Ge_vec_ASTRo.hh"

namespace DiagonalStance
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
