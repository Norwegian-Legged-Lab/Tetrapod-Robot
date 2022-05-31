/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:25 GMT+02:00
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
  double t10705;
  double t10710;
  double t15974;
  double t16052;
  double t16232;
  double t16299;
  double t16346;
  double t16381;
  double t10210;
  double t10660;
  double t16385;
  double t16472;
  double t16376;
  double t16420;
  double t16449;
  double t7365;
  double t16783;
  double t17158;
  double t22614;
  double t22648;
  double t22649;
  double t22788;
  double t22828;
  double t22829;
  double t22832;
  double t22869;
  double t22882;
  double t22913;
  double t22918;
  double t22921;
  double t22925;
  double t22930;
  double t22932;
  double t26691;
  double t26709;
  double t26932;
  double t27254;
  double t27278;
  double t27506;
  double t27560;
  double t27612;
  double t27625;
  double t27636;
  double t27643;
  double t27740;
  double t28439;
  double t28440;
  double t28459;
  double t28606;
  double t28665;
  double t28683;
  double t28688;
  double t28707;
  double t28869;
  double t28872;
  double t28890;
  double t28900;
  double t28909;
  double t28971;
  double t28973;
  double t28976;
  double t29003;
  double t28584;
  double t28718;
  double t28719;
  double t28860;
  double t29032;
  double t29034;
  double t29098;
  double t29125;
  double t29135;
  double t29146;
  double t29159;
  double t29324;
  double t29396;
  double t29452;
  double t29555;
  double t29593;
  double t28866;
  double t29405;
  double t29422;
  double t29764;
  double t29776;
  double t29791;
  double t28534;
  double t28562;
  double t28566;
  double t29641;
  double t29643;
  double t29655;
  double t30107;
  double t30117;
  double t30130;
  double t30219;
  double t30220;
  double t30225;
  double t31298;
  double t31306;
  double t31314;
  double t29664;
  double t31548;
  double t31574;
  double t31620;
  double t30159;
  double t32018;
  double t32021;
  double t32023;
  double t29726;
  double t29816;
  double t29842;
  double t31671;
  double t31836;
  double t31693;
  double t31720;
  double t31743;
  double t31996;
  double t32053;
  double t30172;
  double t30173;
  double t30179;
  double t30336;
  double t30552;
  double t32517;
  double t32564;
  double t32673;
  double t32697;
  double t30346;
  double t30350;
  double t30364;
  double t30616;
  double t30669;
  double t30677;
  double t30994;
  double t31133;
  double t31023;
  double t31036;
  double t31069;
  double t32184;
  double t32200;
  double t33259;
  double t33305;
  double t33357;
  double t33387;
  double t31145;
  double t31154;
  double t31220;
  double t31326;
  double t31334;
  double t31344;
  double t31351;
  double t31352;
  double t31389;
  double t31407;
  double t31431;
  double t31454;
  double t31477;
  double t31504;
  double t31526;
  double t33753;
  double t33759;
  double t33768;
  double t33697;
  double t33709;
  double t31815;
  double t33813;
  double t33816;
  double t33827;
  double t33880;
  double t33882;
  double t33886;
  double t32028;
  double t32100;
  double t32113;
  double t32127;
  double t32129;
  double t32153;
  double t33899;
  double t32220;
  double t32233;
  double t33923;
  double t32258;
  double t32277;
  double t32324;
  double t32387;
  double t32446;
  double t32449;
  double t32462;
  double t32470;
  double t32472;
  double t32474;
  double t32477;
  double t32479;
  double t32552;
  double t32582;
  double t32633;
  double t32650;
  double t32667;
  double t32685;
  double t32706;
  double t32732;
  double t32745;
  double t32809;
  double t34218;
  double t32870;
  double t32888;
  double t34293;
  double t32938;
  double t32940;
  double t32982;
  double t32992;
  double t33040;
  double t33045;
  double t33071;
  double t33086;
  double t33104;
  double t33123;
  double t33134;
  double t33161;
  double t33171;
  double t33205;
  double t33216;
  double t33230;
  double t33289;
  double t33373;
  double t33430;
  double t33445;
  double t33458;
  double t33471;
  double t33512;
  double t34563;
  double t33555;
  double t33568;
  double t34612;
  double t33612;
  double t33623;
  double t33660;
  double t34779;
  double t34780;
  double t34787;
  double t34805;
  double t34812;
  double t34814;
  double t34825;
  double t34830;
  double t34846;
  double t34862;
  double t34869;
  double t34876;
  double t34937;
  double t34939;
  double t34941;
  double t34955;
  double t34962;
  double t34984;
  double t34985;
  double t34998;
  double t35005;
  double t35008;
  double t34997;
  double t35025;
  double t35026;
  double t35049;
  double t35096;
  double t35097;
  double t35099;
  double t35112;
  double t35116;
  double t35117;
  double t35168;
  double t35189;
  double t35229;
  double t35238;
  double t35214;
  double t35343;
  double t35348;
  double t34802;
  double t34815;
  double t34823;
  double t35353;
  double t22897;
  double t22903;
  double t22908;
  double t35397;
  double t35404;
  double t35419;
  double t34791;
  double t34793;
  double t34794;
  double t34795;
  double t34796;
  double t34798;
  double t34799;
  double t27846;
  double t27880;
  double t27889;
  double t35664;
  double t35665;
  double t35666;
  double t35667;
  double t35670;
  double t35673;
  double t35674;
  double t35675;
  double t35681;
  double t35685;
  double t35686;
  double t35672;
  double t35689;
  double t35691;
  double t35702;
  double t35712;
  double t35713;
  double t35717;
  double t35707;
  double t35711;
  double t35729;
  double t35730;
  double t35733;
  double t35735;
  double t35736;
  double t35739;
  double t35744;
  double t35745;
  double t35748;
  double t35141;
  double t35151;
  double t35198;
  double t35201;
  double t35300;
  double t35303;
  double t35307;
  double t35875;
  double t35335;
  double t35336;
  double t35337;
  double t35881;
  double t35885;
  double t35917;
  double t35925;
  double t35929;
  double t35849;
  double t35854;
  double t35861;
  double t35386;
  double t35387;
  double t35388;
  double t36014;
  double t36037;
  t10705 = Cos(var1[16]);
  t10710 = Cos(var1[17]);
  t15974 = -1.*t10705*t10710;
  t16052 = Sin(var1[16]);
  t16232 = Sin(var1[17]);
  t16299 = -1.*t16052*t16232;
  t16346 = t15974 + t16299;
  t16381 = Cos(var1[15]);
  t10210 = Cos(var1[5]);
  t10660 = Sin(var1[15]);
  t16385 = Sin(var1[5]);
  t16472 = Cos(var1[3]);
  t16376 = t10210*t10660*t16346;
  t16420 = t16381*t16346*t16385;
  t16449 = t16376 + t16420;
  t7365 = Sin(var1[3]);
  t16783 = Cos(var1[4]);
  t17158 = -1.*t10710*t16052;
  t22614 = t10705*t16232;
  t22648 = t17158 + t22614;
  t22649 = t16783*t22648;
  t22788 = Sin(var1[4]);
  t22828 = t16381*t10210*t16346;
  t22829 = -1.*t10660*t16346*t16385;
  t22832 = t22828 + t22829;
  t22869 = -1.*t22788*t22832;
  t22882 = t22649 + t22869;
  t22913 = t10210*t10660;
  t22918 = t16381*t16385;
  t22921 = t22913 + t22918;
  t22925 = -1.*t16381*t10210;
  t22930 = t10660*t16385;
  t22932 = t22925 + t22930;
  t26691 = t10210*t10660*t22648;
  t26709 = t16381*t22648*t16385;
  t26932 = t26691 + t26709;
  t27254 = t10705*t10710;
  t27278 = t16052*t16232;
  t27506 = t27254 + t27278;
  t27560 = t16783*t27506;
  t27612 = t16381*t10210*t22648;
  t27625 = -1.*t10660*t22648*t16385;
  t27636 = t27612 + t27625;
  t27643 = -1.*t22788*t27636;
  t27740 = t27560 + t27643;
  t28439 = -1.*t22648*t22788;
  t28440 = -1.*t16783*t22832;
  t28459 = t28439 + t28440;
  t28606 = -1.*t10710;
  t28665 = 1. + t28606;
  t28683 = -0.50321*t28665;
  t28688 = -0.19821*t10710;
  t28707 = t28683 + t28688;
  t28869 = -1.*t16381;
  t28872 = 1. + t28869;
  t28890 = -0.15121*t28872;
  t28900 = -1.*t10705;
  t28909 = 1. + t28900;
  t28971 = -0.28121*t28909;
  t28973 = t10705*t28707;
  t28976 = 0.305*t16052*t16232;
  t29003 = t28971 + t28973 + t28976;
  t28584 = 0.28121*t16052;
  t28718 = t28707*t16052;
  t28719 = -0.305*t10705*t16232;
  t28860 = t28584 + t28718 + t28719;
  t29032 = t16381*t29003;
  t29034 = t28890 + t29032;
  t29098 = t10210*t29034;
  t29125 = -0.15121*t16381;
  t29135 = 0.15121*t10660;
  t29146 = t10660*t29003;
  t29159 = t28890 + t29125 + t29135 + t29146;
  t29324 = -1.*t29159*t16385;
  t29396 = t29098 + t29324;
  t29452 = t28860*t22788;
  t29555 = t16783*t29396;
  t29593 = t29452 + t29555;
  t28866 = -1.*t28860*t22788;
  t29405 = -1.*t16783*t29396;
  t29422 = t28866 + t29405;
  t29764 = t16783*t28860;
  t29776 = -1.*t22788*t29396;
  t29791 = t29764 + t29776;
  t28534 = t27506*t22788;
  t28562 = t16783*t27636;
  t28566 = t28534 + t28562;
  t29641 = t10210*t29159;
  t29643 = t29034*t16385;
  t29655 = t29641 + t29643;
  t30107 = -1.*t27506*t22788;
  t30117 = -1.*t16783*t27636;
  t30130 = t30107 + t30117;
  t30219 = t22648*t22788;
  t30220 = t16783*t22832;
  t30225 = t30219 + t30220;
  t31298 = -1.*t10210*t10660*t16346;
  t31306 = -1.*t16381*t16346*t16385;
  t31314 = t31298 + t31306;
  t29664 = -1.*t22932*t29655;
  t31548 = -1.*t10210*t29159;
  t31574 = -1.*t29034*t16385;
  t31620 = t31548 + t31574;
  t30159 = t26932*t29655;
  t32018 = -1.*t10210*t10660*t22648;
  t32021 = -1.*t16381*t22648*t16385;
  t32023 = t32018 + t32021;
  t29726 = -1.*t16783*t22921*t29593;
  t29816 = t22788*t22921*t29791;
  t29842 = t29664 + t29726 + t29816;
  t31671 = -1.*t22921*t29655;
  t31836 = -1.*t22932*t29396;
  t31693 = t16381*t10210;
  t31720 = -1.*t10660*t16385;
  t31743 = t31693 + t31720;
  t31996 = t27636*t29655;
  t32053 = t26932*t29396;
  t30172 = t28566*t29593;
  t30173 = t27740*t29791;
  t30179 = t30159 + t30172 + t30173;
  t30336 = -1.*t26932*t29655;
  t30552 = t16449*t29655;
  t32517 = -1.*t27636*t29655;
  t32564 = -1.*t26932*t29396;
  t32673 = t22832*t29655;
  t32697 = t16449*t29396;
  t30346 = -1.*t28566*t29593;
  t30350 = -1.*t27740*t29791;
  t30364 = t30336 + t30346 + t30350;
  t30616 = t30225*t29593;
  t30669 = t22882*t29791;
  t30677 = t30552 + t30616 + t30669;
  t30994 = t22932*t29655;
  t31133 = -1.*t16449*t29655;
  t31023 = t16783*t22921*t29593;
  t31036 = -1.*t22788*t22921*t29791;
  t31069 = t30994 + t31023 + t31036;
  t32184 = Power(t16783,2);
  t32200 = Power(t22788,2);
  t33259 = t22921*t29655;
  t33305 = t22932*t29396;
  t33357 = -1.*t22832*t29655;
  t33387 = -1.*t16449*t29396;
  t31145 = -1.*t30225*t29593;
  t31154 = -1.*t22882*t29791;
  t31220 = t31133 + t31145 + t31154;
  t31326 = var2[0]*t16783*t31314;
  t31334 = t7365*t22788*t31314;
  t31344 = t16472*t22832;
  t31351 = t31334 + t31344;
  t31352 = var2[1]*t31351;
  t31389 = -1.*t16472*t22788*t31314;
  t31407 = t7365*t22832;
  t31431 = t31389 + t31407;
  t31454 = var2[2]*t31431;
  t31477 = -1.*t22921*t29396;
  t31504 = t29664 + t31477;
  t31526 = t27636*t31504;
  t33753 = -0.15121*t10660;
  t33759 = -1.*t10660*t29003;
  t33768 = t33753 + t33759;
  t33697 = 0.15121*t16381;
  t33709 = t33697 + t29032;
  t31815 = -1.*t31743*t29396;
  t33813 = t10210*t33768;
  t33816 = -1.*t33709*t16385;
  t33827 = t33813 + t33816;
  t33880 = t10210*t33709;
  t33882 = t33768*t16385;
  t33886 = t33880 + t33882;
  t32028 = t32023*t29396;
  t32100 = t28860*t27506;
  t32113 = t27636*t29396;
  t32127 = t32100 + t30159 + t32113;
  t32129 = t22921*t32127;
  t32153 = t16783*t32023*t29842;
  t33899 = -1.*t22932*t33886;
  t32220 = -1.*t16783*t31743*t29593;
  t32233 = t22788*t31743*t29791;
  t33923 = t26932*t33886;
  t32258 = t16783*t32023*t29593;
  t32277 = -1.*t22788*t32023*t29791;
  t32324 = t16783*t31743*t30179;
  t32387 = var2[0]*t16783*t31743;
  t32446 = t7365*t22921;
  t32449 = -1.*t16472*t22788*t31743;
  t32462 = t32446 + t32449;
  t32470 = var2[2]*t32462;
  t32472 = t16472*t22921;
  t32474 = t7365*t22788*t31743;
  t32477 = t32472 + t32474;
  t32479 = var2[1]*t32477;
  t32552 = -1.*t32023*t29396;
  t32582 = -1.*t28860*t27506;
  t32633 = -1.*t27636*t29396;
  t32650 = t32582 + t30336 + t32633;
  t32667 = t22832*t32650;
  t32685 = t31314*t29396;
  t32706 = t28860*t22648;
  t32732 = t22832*t29396;
  t32745 = t32706 + t30552 + t32732;
  t32809 = t27636*t32745;
  t34218 = -1.*t26932*t33886;
  t32870 = -1.*t16783*t32023*t29593;
  t32888 = t22788*t32023*t29791;
  t34293 = t16449*t33886;
  t32938 = t16783*t31314*t29593;
  t32940 = -1.*t22788*t31314*t29791;
  t32982 = t16783*t31314*t30364;
  t32992 = t16783*t32023*t30677;
  t33040 = var2[0]*t16783*t32023;
  t33045 = t7365*t22788*t32023;
  t33071 = t16472*t27636;
  t33086 = t33045 + t33071;
  t33104 = var2[1]*t33086;
  t33123 = -1.*t16472*t22788*t32023;
  t33134 = t7365*t27636;
  t33161 = t33123 + t33134;
  t33171 = var2[2]*t33161;
  t33205 = t22921*t29396;
  t33216 = t30994 + t33205;
  t33230 = t22832*t33216;
  t33289 = t31743*t29396;
  t33373 = -1.*t31314*t29396;
  t33430 = -1.*t28860*t22648;
  t33445 = -1.*t22832*t29396;
  t33458 = t33430 + t31133 + t33445;
  t33471 = t22921*t33458;
  t33512 = t16783*t31314*t31069;
  t34563 = t22932*t33886;
  t33555 = t16783*t31743*t29593;
  t33568 = -1.*t22788*t31743*t29791;
  t34612 = -1.*t16449*t33886;
  t33612 = -1.*t16783*t31314*t29593;
  t33623 = t22788*t31314*t29791;
  t33660 = t16783*t31743*t31220;
  t34779 = t10710*t16052;
  t34780 = -1.*t10705*t16232;
  t34787 = t34779 + t34780;
  t34805 = t16381*t10210*t34787;
  t34812 = -1.*t10660*t34787*t16385;
  t34814 = t34805 + t34812;
  t34825 = t10210*t10660*t34787;
  t34830 = t16381*t34787*t16385;
  t34846 = t34825 + t34830;
  t34862 = t16783*t16346;
  t34869 = -1.*t22788*t34814;
  t34876 = t34862 + t34869;
  t34937 = -0.28121*t16052;
  t34939 = -1.*t28707*t16052;
  t34941 = 0.305*t10705*t16232;
  t34955 = t34937 + t34939 + t34941;
  t34962 = t10210*t10660*t34955;
  t34984 = t16381*t34955*t16385;
  t34985 = t34962 + t34984;
  t34998 = t16381*t10210*t34955;
  t35005 = -1.*t10660*t34955*t16385;
  t35008 = t34998 + t35005;
  t34997 = -1.*t22932*t34985;
  t35025 = 0.28121*t10705;
  t35026 = t35025 + t28973 + t28976;
  t35049 = t34985*t26932;
  t35096 = t35026*t22788;
  t35097 = t16783*t35008;
  t35099 = t35096 + t35097;
  t35112 = t16783*t35026;
  t35116 = -1.*t22788*t35008;
  t35117 = t35112 + t35116;
  t35168 = t28860*t16346;
  t35189 = t22648*t35026;
  t35229 = Power(t16381,2);
  t35238 = Power(t10660,2);
  t35214 = -1.*t35026*t27506;
  t35343 = t34985*t16449;
  t35348 = t34846*t29655;
  t34802 = t16346*t22788;
  t34815 = t16783*t34814;
  t34823 = t34802 + t34815;
  t35353 = -1.*t34985*t26932;
  t22897 = t16472*t16449;
  t22903 = -1.*t7365*t22882;
  t22908 = t22897 + t22903;
  t35397 = t22932*t34985;
  t35404 = -1.*t34985*t16449;
  t35419 = -1.*t34846*t29655;
  t34791 = -0.15121*t34787;
  t34793 = -0.15121*t22648;
  t34794 = t34791 + t34793;
  t34795 = var2[15]*t34794;
  t34796 = -1.*t10660*t29034;
  t34798 = t16381*t29159;
  t34799 = t34796 + t34798;
  t27846 = t16472*t26932;
  t27880 = -1.*t7365*t27740;
  t27889 = t27846 + t27880;
  t35664 = 0.305*t10710*t16052;
  t35665 = t35664 + t28719;
  t35666 = t10210*t10660*t35665;
  t35667 = t16381*t35665*t16385;
  t35670 = t35666 + t35667;
  t35673 = t16381*t10210*t35665;
  t35674 = -1.*t10660*t35665*t16385;
  t35675 = t35673 + t35674;
  t35681 = t10210*t10660*t27506;
  t35685 = t16381*t27506*t16385;
  t35686 = t35681 + t35685;
  t35672 = -1.*t22932*t35670;
  t35689 = -0.305*t10705*t10710;
  t35691 = -0.305*t16052*t16232;
  t35702 = t35689 + t35691;
  t35712 = t16381*t10210*t27506;
  t35713 = -1.*t10660*t27506*t16385;
  t35717 = t35712 + t35713;
  t35707 = t35670*t26932;
  t35711 = t35686*t29655;
  t35729 = t35702*t22788;
  t35730 = t16783*t35675;
  t35733 = t35729 + t35730;
  t35735 = t16783*t35702;
  t35736 = -1.*t22788*t35675;
  t35739 = t35735 + t35736;
  t35744 = t34787*t22788;
  t35745 = t16783*t35717;
  t35748 = t35744 + t35745;
  t35141 = t16346*t29003;
  t35151 = t32706 + t35141;
  t35198 = -1.*t22648*t29003;
  t35201 = t35198 + t32582;
  t35300 = -1.*t16381*t22648*t29034;
  t35303 = -1.*t10660*t22648*t29159;
  t35307 = t32582 + t35300 + t35303;
  t35875 = t22648*t35702;
  t35335 = t16381*t16346*t29034;
  t35336 = t10660*t16346*t29159;
  t35337 = t32706 + t35335 + t35336;
  t35881 = -1.*t34787*t28860;
  t35885 = -1.*t35702*t27506;
  t35917 = t35670*t16449;
  t35925 = -1.*t35670*t26932;
  t35929 = -1.*t35686*t29655;
  t35849 = t16783*t34787;
  t35854 = -1.*t22788*t35717;
  t35861 = t35849 + t35854;
  t35386 = t10660*t29034;
  t35387 = -1.*t16381*t29159;
  t35388 = t35386 + t35387;
  t36014 = t22932*t35670;
  t36037 = -1.*t35670*t16449;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t16472*t22882 - 1.*t16449*t7365)*var2[1] + t22908*var2[2];
  p_output1[10]=(t16472*t22788*t22921 - 1.*t22932*t7365)*var2[1] + (t16472*t22932 + t22788*t22921*t7365)*var2[2];
  p_output1[11]=(-1.*t16472*t27740 - 1.*t26932*t7365)*var2[1] + t27889*var2[2];
  p_output1[12]=t22882*var2[0] - 1.*t28459*t7365*var2[1] + t16472*t28459*var2[2] + (t28566*(t22788*t22921*t29422 + t22788*t22921*t29593) + t27740*t29842 + t16783*t22921*(t27740*t29422 + t27740*t29593 + t28566*t29791 + t29791*t30130) - 1.*t22788*t22921*t30179)*var2[3];
  p_output1[13]=-1.*t22788*t22921*var2[0] + t16783*t22921*t7365*var2[1] - 1.*t16472*t16783*t22921*var2[2] + ((-1.*t27740*t29422 - 1.*t27740*t29593 - 1.*t28566*t29791 - 1.*t29791*t30130)*t30225 + t28566*(t22882*t29422 + t22882*t29593 + t28459*t29791 + t29791*t30225) + t22882*t30364 + t27740*t30677)*var2[3];
  p_output1[14]=t27740*var2[0] - 1.*t30130*t7365*var2[1] + t16472*t30130*var2[2] + ((-1.*t22788*t22921*t29422 - 1.*t22788*t22921*t29593)*t30225 + t16783*t22921*(-1.*t22882*t29422 - 1.*t22882*t29593 - 1.*t28459*t29791 - 1.*t29791*t30225) + t22882*t31069 - 1.*t22788*t22921*t31220)*var2[3];
  p_output1[15]=t31326 + t31352 + t31454 + (t32153 + t28566*(t31671 + t31836 - 1.*t22921*t31620*t32184 - 1.*t22921*t31620*t32200 + t32220 + t32233) + t16783*t22921*(-1.*t22788*t27740*t31620 + t16783*t28566*t31620 + t31996 + t32053 + t32258 + t32277) + t32324)*var2[3] + (t31526 + t26932*(-1.*t22921*t31620 + t31671 + t31815 + t31836) + t22932*(t27636*t31620 + t31996 + t32028 + t32053) + t32129)*var2[4];
  p_output1[16]=t32387 + t32470 + t32479 + (t30225*(t22788*t27740*t31620 - 1.*t16783*t28566*t31620 + t32517 + t32564 + t32870 + t32888) + t28566*(-1.*t22788*t22882*t31620 + t16783*t30225*t31620 + t32673 + t32697 + t32938 + t32940) + t32982 + t32992)*var2[3] + (t16449*(-1.*t27636*t31620 + t32517 + t32552 + t32564) + t32667 + t26932*(t22832*t31620 + t32673 + t32685 + t32697) + t32809)*var2[4];
  p_output1[17]=t33040 + t33104 + t33171 + (t33512 + t30225*(t22921*t31620*t32184 + t22921*t31620*t32200 + t33259 + t33305 + t33555 + t33568) + t16783*t22921*(t22788*t22882*t31620 - 1.*t16783*t30225*t31620 + t33357 + t33387 + t33612 + t33623) + t33660)*var2[3] + (t33230 + t16449*(t22921*t31620 + t33259 + t33289 + t33305) + t22932*(-1.*t22832*t31620 + t33357 + t33373 + t33387) + t33471)*var2[4];
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
  p_output1[45]=t31326 + t31352 + t31454 + (t32153 + t32324 + t28566*(t31671 + t32220 + t32233 - 1.*t22921*t32184*t33827 - 1.*t22921*t32200*t33827 + t33899) + t16783*t22921*(t31996 + t32258 + t32277 - 1.*t22788*t27740*t33827 + t16783*t28566*t33827 + t33923))*var2[3] + (t31526 + t32129 + t26932*(t31671 + t31815 - 1.*t22921*t33827 + t33899) + t22932*(t31996 + t32028 + t27636*t33827 + t33923))*var2[4] + t27506*(-1.*t16381*t29034 - 1.*t10660*t29159 + t16381*t33709 - 1.*t10660*t33768)*var2[5];
  p_output1[46]=t32387 + t32470 + t32479 + (t32982 + t32992 + t30225*(t32517 + t32870 + t32888 + t22788*t27740*t33827 - 1.*t16783*t28566*t33827 + t34218) + t28566*(t32673 + t32938 + t32940 - 1.*t22788*t22882*t33827 + t16783*t30225*t33827 + t34293))*var2[3] + (t32667 + t32809 + t16449*(t32517 + t32552 - 1.*t27636*t33827 + t34218) + t26932*(t32673 + t32685 + t22832*t33827 + t34293))*var2[4] + (t27506*(-1.*t10660*t16346*t29034 + t16346*t16381*t29159 + t10660*t16346*t33709 + t16346*t16381*t33768) + t22648*(t10660*t22648*t29034 - 1.*t16381*t22648*t29159 - 1.*t10660*t22648*t33709 - 1.*t16381*t22648*t33768))*var2[5];
  p_output1[47]=t33040 + t33104 + t33171 + (t33512 + t33660 + t30225*(t33259 + t33555 + t33568 + t22921*t32184*t33827 + t22921*t32200*t33827 + t34563) + t16783*t22921*(t33357 + t33612 + t33623 + t22788*t22882*t33827 - 1.*t16783*t30225*t33827 + t34612))*var2[3] + (t33230 + t33471 + t16449*(t33259 + t33289 + t22921*t33827 + t34563) + t22932*(t33357 + t33373 - 1.*t22832*t33827 + t34612))*var2[4] + t22648*(t16381*t29034 + t10660*t29159 - 1.*t16381*t33709 + t10660*t33768)*var2[5];
  p_output1[48]=t34795 + t34823*var2[0] + (t16472*t34846 - 1.*t34876*t7365)*var2[1] + (t16472*t34876 + t34846*t7365)*var2[2] + (t29842*t30225 + t28566*(t34997 - 1.*t16783*t22921*t35099 + t22788*t22921*t35117) + t16783*t22921*(t30552 + t30616 + t30669 + t35049 + t28566*t35099 + t27740*t35117))*var2[3] + (t16449*t31504 + t26932*(t34997 - 1.*t22921*t35008) + t22932*(t30552 + t32706 + t32732 + t27636*t35008 + t27506*t35026 + t35049))*var2[4] + t22648*t34799*var2[5];
  p_output1[49]=(t30225*t30677 + t30364*t34823 + t28566*(t29593*t34823 + t29791*t34876 + t30225*t35099 + t22882*t35117 + t35343 + t35348) + t30225*(t31133 + t31145 + t31154 - 1.*t28566*t35099 - 1.*t27740*t35117 + t35353))*var2[3] + (t16449*t32745 + t32650*t34846 + t26932*(t29396*t34814 + t22832*t35008 + t35168 + t35189 + t35343 + t35348) + t16449*(t31133 + t33430 + t33445 - 1.*t27636*t35008 + t35214 + t35353))*var2[4] + (t27506*(t16381*t29034*t34787 + t10660*t29159*t34787 + t35168 + t35189 + t16346*t34955*t35229 + t16346*t34955*t35238) + t22648*(-1.*t16346*t16381*t29034 - 1.*t10660*t16346*t29159 + t33430 + t35214 - 1.*t22648*t34955*t35229 - 1.*t22648*t34955*t35238) + t16346*t35307 + t22648*t35337)*var2[5] + (t22648*t35151 + t27506*(t29003*t34787 + t16346*t34955 + t35168 + t35189) + t16346*t35201 + t22648*(-1.*t16346*t29003 + t33430 - 1.*t22648*t34955 + t35214))*var2[15];
  p_output1[50]=t30225*var2[0] + t22908*var2[1] + (t16472*t22882 + t16449*t7365)*var2[2] + (t31069*t34823 + t30225*(t16783*t22921*t35099 - 1.*t22788*t22921*t35117 + t35397) + t16783*t22921*(-1.*t29593*t34823 - 1.*t29791*t34876 - 1.*t30225*t35099 - 1.*t22882*t35117 + t35404 + t35419))*var2[3] + (t33216*t34846 + t16449*(t22921*t35008 + t35397) + t22932*(-1.*t16346*t28860 - 1.*t29396*t34814 - 1.*t22832*t35008 - 1.*t22648*t35026 + t35404 + t35419))*var2[4] + t16346*t35388*var2[5];
  p_output1[51]=t34795 + t28566*var2[0] + t27889*var2[1] + (t16472*t27740 + t26932*t7365)*var2[2] + (t28566*(t35672 - 1.*t16783*t22921*t35733 + t22788*t22921*t35739) + t29842*t35748 + t16783*t22921*(t35707 + t35711 + t28566*t35733 + t27740*t35739 + t29593*t35748 + t29791*t35861))*var2[3] + (t26932*(t35672 - 1.*t22921*t35675) + t31504*t35686 + t22932*(t28860*t34787 + t27636*t35675 + t27506*t35702 + t35707 + t35711 + t29396*t35717))*var2[4] + t34787*t34799*var2[5] + (0.28121*t10710 - 0.305*Power(t10710,2) + t10710*t28707)*var2[16];
  p_output1[52]=(t28566*t30364 + t30677*t35748 + t28566*(t30159 + t30172 + t30173 + t30225*t35733 + t22882*t35739 + t35917) + t30225*(-1.*t28566*t35733 - 1.*t27740*t35739 - 1.*t29593*t35748 - 1.*t29791*t35861 + t35925 + t35929))*var2[3] + (t26932*t32650 + t32745*t35686 + t26932*(t30159 + t32100 + t32113 + t22832*t35675 + t35875 + t35917) + t16449*(-1.*t27636*t35675 - 1.*t29396*t35717 + t35881 + t35885 + t35925 + t35929))*var2[4] + (t27506*t35307 + t34787*t35337 + t27506*(t16381*t22648*t29034 + t10660*t22648*t29159 + t32100 + t16346*t35229*t35665 + t16346*t35238*t35665 + t35875) + t22648*(-1.*t16381*t27506*t29034 - 1.*t10660*t27506*t29159 - 1.*t22648*t35229*t35665 - 1.*t22648*t35238*t35665 + t35881 + t35885))*var2[5] + (t34787*t35151 + t27506*t35201 + t27506*(t22648*t29003 + t32100 + t16346*t35665 + t35875) + t22648*(-1.*t27506*t29003 - 1.*t22648*t35665 + t35881 + t35885))*var2[15];
  p_output1[53]=t35748*var2[0] + (t16472*t35686 - 1.*t35861*t7365)*var2[1] + (t16472*t35861 + t35686*t7365)*var2[2] + (t28566*t31069 + t30225*(t16783*t22921*t35733 - 1.*t22788*t22921*t35739 + t36014) + t16783*t22921*(t30336 + t30346 + t30350 - 1.*t30225*t35733 - 1.*t22882*t35739 + t36037))*var2[3] + (t26932*t33216 + t16449*(t22921*t35675 + t36014) + t22932*(t30336 + t32582 + t32633 - 1.*t22832*t35675 - 1.*t22648*t35702 + t36037))*var2[4] + t27506*t35388*var2[5] + (-0.28121*t16232 + 0.305*t10710*t16232 - 1.*t16232*t28707)*var2[16];
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
