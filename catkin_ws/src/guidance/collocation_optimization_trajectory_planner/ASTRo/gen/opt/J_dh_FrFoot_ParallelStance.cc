/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:21 GMT+02:00
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
  double t16384;
  double t16416;
  double t16442;
  double t16451;
  double t16573;
  double t16585;
  double t16586;
  double t16669;
  double t16038;
  double t16337;
  double t16679;
  double t16720;
  double t16588;
  double t16698;
  double t16699;
  double t15758;
  double t16725;
  double t16726;
  double t16733;
  double t16739;
  double t16777;
  double t16778;
  double t16779;
  double t16793;
  double t16817;
  double t16819;
  double t16820;
  double t16863;
  double t16864;
  double t16865;
  double t16882;
  double t16885;
  double t16886;
  double t16912;
  double t16913;
  double t16914;
  double t16915;
  double t16916;
  double t16929;
  double t16930;
  double t16932;
  double t16935;
  double t16936;
  double t16938;
  double t16940;
  double t16948;
  double t16905;
  double t16906;
  double t16908;
  double t16911;
  double t16922;
  double t16924;
  double t16927;
  double t16931;
  double t16950;
  double t16954;
  double t16958;
  double t16959;
  double t16960;
  double t16961;
  double t16962;
  double t16963;
  double t16964;
  double t16969;
  double t16887;
  double t16888;
  double t16889;
  double t16974;
  double t16977;
  double t16979;
  double t16984;
  double t16985;
  double t16987;
  double t16928;
  double t16970;
  double t16972;
  double t16999;
  double t17000;
  double t17001;
  double t16878;
  double t16897;
  double t16904;
  double t16992;
  double t16993;
  double t16995;
  double t17054;
  double t17057;
  double t17058;
  double t16988;
  double t16989;
  double t16991;
  double t16996;
  double t17031;
  double t17035;
  double t17038;
  double t17081;
  double t17083;
  double t17084;
  double t17040;
  double t17105;
  double t17107;
  double t17108;
  double t16997;
  double t17003;
  double t17004;
  double t17086;
  double t17087;
  double t17088;
  double t17089;
  double t17093;
  double t17103;
  double t17118;
  double t17043;
  double t17044;
  double t17045;
  double t17060;
  double t17064;
  double t17065;
  double t17066;
  double t17067;
  double t17068;
  double t17070;
  double t17072;
  double t17074;
  double t17076;
  double t17079;
  double t17080;
  double t17173;
  double t17176;
  double t17177;
  double t17171;
  double t17094;
  double t17194;
  double t17195;
  double t17197;
  double t17199;
  double t17201;
  double t17202;
  double t17109;
  double t17123;
  double t17124;
  double t17126;
  double t17133;
  double t17138;
  double t17139;
  double t17141;
  double t17203;
  double t17143;
  double t17146;
  double t17209;
  double t17154;
  double t17156;
  double t17163;
  double t17235;
  double t17237;
  double t17238;
  double t17241;
  double t17242;
  double t17243;
  double t17249;
  double t17250;
  double t17251;
  double t17254;
  double t17255;
  double t17257;
  double t17267;
  double t17269;
  double t17270;
  double t17273;
  double t17274;
  double t17275;
  double t17271;
  double t17283;
  double t17285;
  double t17286;
  double t17287;
  double t17290;
  double t17293;
  double t17302;
  double t17303;
  double t17304;
  double t17306;
  double t17307;
  double t17308;
  double t17312;
  double t17313;
  double t17314;
  double t17230;
  double t17231;
  double t17233;
  double t17348;
  double t17350;
  double t17352;
  double t17353;
  double t17355;
  double t17361;
  double t17365;
  double t17367;
  double t17368;
  double t17379;
  double t17382;
  double t17383;
  double t17362;
  double t17388;
  double t17389;
  double t17395;
  double t17396;
  double t17397;
  double t17392;
  double t17394;
  double t17403;
  double t17404;
  double t17405;
  double t17407;
  double t17408;
  double t17409;
  double t17413;
  double t17414;
  double t17415;
  double t16854;
  double t16855;
  double t16856;
  double t17012;
  double t17013;
  double t17015;
  double t17318;
  double t17319;
  double t17472;
  double t17282;
  double t17294;
  double t17504;
  double t17506;
  double t17516;
  double t17519;
  double t17473;
  double t17474;
  double t17475;
  double t17484;
  double t17491;
  double t17492;
  double t17494;
  double t17495;
  double t17496;
  double t17497;
  double t17498;
  double t17500;
  double t17501;
  double t17505;
  double t17510;
  double t17512;
  double t17513;
  double t17514;
  double t17518;
  double t17523;
  double t17524;
  double t17566;
  double t17531;
  double t17532;
  double t17571;
  double t17537;
  double t17538;
  double t17541;
  double t17542;
  double t17590;
  double t17592;
  double t17610;
  double t17612;
  double t17599;
  double t17601;
  double t17239;
  double t17245;
  double t17246;
  double t17633;
  double t17635;
  double t17641;
  double t17644;
  double t17587;
  double t17588;
  double t17595;
  double t17596;
  double t17598;
  double t17606;
  double t17607;
  double t17608;
  double t17672;
  double t17681;
  double t17625;
  double t17627;
  double t17628;
  double t17706;
  double t17710;
  double t17712;
  double t17420;
  double t17422;
  double t17424;
  double t17449;
  double t17451;
  double t17452;
  double t17338;
  double t17343;
  double t17344;
  double t17662;
  double t17663;
  double t17768;
  double t17645;
  double t17769;
  double t17770;
  double t17771;
  double t17801;
  double t17802;
  double t17807;
  double t17809;
  double t17781;
  double t17787;
  double t17788;
  double t17789;
  double t17790;
  double t17791;
  double t17792;
  double t17793;
  double t17794;
  double t17795;
  double t17797;
  double t17798;
  double t17799;
  double t17803;
  double t17808;
  double t17812;
  double t17813;
  double t17817;
  double t17842;
  double t17820;
  double t17821;
  double t17847;
  double t17826;
  double t17827;
  double t17831;
  double t17434;
  double t17435;
  double t17436;
  double t17876;
  double t17884;
  double t17886;
  double t17865;
  double t17866;
  double t17867;
  double t17868;
  double t17869;
  double t17870;
  double t17871;
  double t17923;
  double t17930;
  double t17334;
  double t17335;
  double t17336;
  double t17325;
  double t17326;
  t16384 = Cos(var1[13]);
  t16416 = Cos(var1[14]);
  t16442 = t16384*t16416;
  t16451 = Sin(var1[13]);
  t16573 = Sin(var1[14]);
  t16585 = t16451*t16573;
  t16586 = t16442 + t16585;
  t16669 = Cos(var1[12]);
  t16038 = Cos(var1[5]);
  t16337 = Sin(var1[12]);
  t16679 = Sin(var1[5]);
  t16720 = Cos(var1[3]);
  t16588 = t16038*t16337*t16586;
  t16698 = t16669*t16586*t16679;
  t16699 = t16588 + t16698;
  t15758 = Sin(var1[3]);
  t16725 = Cos(var1[4]);
  t16726 = -1.*t16416*t16451;
  t16733 = t16384*t16573;
  t16739 = t16726 + t16733;
  t16777 = t16725*t16739;
  t16778 = Sin(var1[4]);
  t16779 = t16669*t16038*t16586;
  t16793 = -1.*t16337*t16586*t16679;
  t16817 = t16779 + t16793;
  t16819 = -1.*t16778*t16817;
  t16820 = t16777 + t16819;
  t16863 = -1.*t16739*t16778;
  t16864 = -1.*t16725*t16817;
  t16865 = t16863 + t16864;
  t16882 = t16416*t16451;
  t16885 = -1.*t16384*t16573;
  t16886 = t16882 + t16885;
  t16912 = -1.*t16416;
  t16913 = 1. + t16912;
  t16914 = 0.50321*t16913;
  t16915 = 0.19821*t16416;
  t16916 = t16914 + t16915;
  t16929 = -1.*t16669;
  t16930 = 1. + t16929;
  t16932 = -1.*t16384;
  t16935 = 1. + t16932;
  t16936 = 0.28121*t16935;
  t16938 = t16384*t16916;
  t16940 = -0.305*t16451*t16573;
  t16948 = t16936 + t16938 + t16940;
  t16905 = -1.*t16038*t16337;
  t16906 = -1.*t16669*t16679;
  t16908 = t16905 + t16906;
  t16911 = 0.28121*t16451;
  t16922 = -1.*t16916*t16451;
  t16924 = -0.305*t16384*t16573;
  t16927 = t16911 + t16922 + t16924;
  t16931 = 0.15121*t16930;
  t16950 = t16669*t16948;
  t16954 = t16931 + t16950;
  t16958 = t16038*t16954;
  t16959 = -0.15121*t16930;
  t16960 = -0.15121*t16669;
  t16961 = -0.15121*t16337;
  t16962 = t16337*t16948;
  t16963 = t16959 + t16960 + t16961 + t16962;
  t16964 = -1.*t16963*t16679;
  t16969 = t16958 + t16964;
  t16887 = t16669*t16038*t16886;
  t16888 = -1.*t16337*t16886*t16679;
  t16889 = t16887 + t16888;
  t16974 = t16927*t16778;
  t16977 = t16725*t16969;
  t16979 = t16974 + t16977;
  t16984 = t16725*t16586;
  t16985 = -1.*t16778*t16889;
  t16987 = t16984 + t16985;
  t16928 = -1.*t16927*t16778;
  t16970 = -1.*t16725*t16969;
  t16972 = t16928 + t16970;
  t16999 = t16725*t16927;
  t17000 = -1.*t16778*t16969;
  t17001 = t16999 + t17000;
  t16878 = t16586*t16778;
  t16897 = t16725*t16889;
  t16904 = t16878 + t16897;
  t16992 = t16038*t16963;
  t16993 = t16954*t16679;
  t16995 = t16992 + t16993;
  t17054 = -1.*t16038*t16337*t16586;
  t17057 = -1.*t16669*t16586*t16679;
  t17058 = t17054 + t17057;
  t16988 = t16669*t16038;
  t16989 = -1.*t16337*t16679;
  t16991 = t16988 + t16989;
  t16996 = -1.*t16991*t16995;
  t17031 = t16038*t16337*t16886;
  t17035 = t16669*t16886*t16679;
  t17038 = t17031 + t17035;
  t17081 = -1.*t16038*t16963;
  t17083 = -1.*t16954*t16679;
  t17084 = t17081 + t17083;
  t17040 = t17038*t16995;
  t17105 = -1.*t16038*t16337*t16886;
  t17107 = -1.*t16669*t16886*t16679;
  t17108 = t17105 + t17107;
  t16997 = -1.*t16725*t16908*t16979;
  t17003 = t16778*t16908*t17001;
  t17004 = t16996 + t16997 + t17003;
  t17086 = -1.*t16908*t16995;
  t17087 = -1.*t16991*t16969;
  t17088 = -1.*t16669*t16038;
  t17089 = t16337*t16679;
  t17093 = t17088 + t17089;
  t17103 = t16889*t16995;
  t17118 = t17038*t16969;
  t17043 = t16904*t16979;
  t17044 = t16987*t17001;
  t17045 = t17040 + t17043 + t17044;
  t17060 = var2[0]*t16725*t17058;
  t17064 = t15758*t16778*t17058;
  t17065 = t16720*t16817;
  t17066 = t17064 + t17065;
  t17067 = var2[1]*t17066;
  t17068 = -1.*t16720*t16778*t17058;
  t17070 = t15758*t16817;
  t17072 = t17068 + t17070;
  t17074 = var2[2]*t17072;
  t17076 = -1.*t16908*t16969;
  t17079 = t16996 + t17076;
  t17080 = t16889*t17079;
  t17173 = 0.15121*t16337;
  t17176 = -1.*t16337*t16948;
  t17177 = t17173 + t17176;
  t17171 = t16960 + t16950;
  t17094 = -1.*t17093*t16969;
  t17194 = t16038*t17177;
  t17195 = -1.*t17171*t16679;
  t17197 = t17194 + t17195;
  t17199 = t16038*t17171;
  t17201 = t17177*t16679;
  t17202 = t17199 + t17201;
  t17109 = t17108*t16969;
  t17123 = t16927*t16586;
  t17124 = t16889*t16969;
  t17126 = t17123 + t17040 + t17124;
  t17133 = t16908*t17126;
  t17138 = t16725*t17108*t17004;
  t17139 = Power(t16725,2);
  t17141 = Power(t16778,2);
  t17203 = -1.*t16991*t17202;
  t17143 = -1.*t16725*t17093*t16979;
  t17146 = t16778*t17093*t17001;
  t17209 = t17038*t17202;
  t17154 = t16725*t17108*t16979;
  t17156 = -1.*t16778*t17108*t17001;
  t17163 = t16725*t17093*t17045;
  t17235 = -1.*t16384*t16416;
  t17237 = -1.*t16451*t16573;
  t17238 = t17235 + t17237;
  t17241 = t16669*t16038*t16739;
  t17242 = -1.*t16337*t16739*t16679;
  t17243 = t17241 + t17242;
  t17249 = t16038*t16337*t16739;
  t17250 = t16669*t16739*t16679;
  t17251 = t17249 + t17250;
  t17254 = t16725*t17238;
  t17255 = -1.*t16778*t17243;
  t17257 = t17254 + t17255;
  t17267 = t16038*t16337*t16927;
  t17269 = t16669*t16927*t16679;
  t17270 = t17267 + t17269;
  t17273 = t16669*t16038*t16927;
  t17274 = -1.*t16337*t16927*t16679;
  t17275 = t17273 + t17274;
  t17271 = -1.*t16991*t17270;
  t17283 = 0.28121*t16384;
  t17285 = -1.*t16384*t16916;
  t17286 = 0.305*t16451*t16573;
  t17287 = t17283 + t17285 + t17286;
  t17290 = t17038*t17270;
  t17293 = t16699*t16995;
  t17302 = t17287*t16778;
  t17303 = t16725*t17275;
  t17304 = t17302 + t17303;
  t17306 = t16725*t17287;
  t17307 = -1.*t16778*t17275;
  t17308 = t17306 + t17307;
  t17312 = t16739*t16778;
  t17313 = t16725*t16817;
  t17314 = t17312 + t17313;
  t17230 = t16337*t16954;
  t17231 = -1.*t16669*t16963;
  t17233 = t17230 + t17231;
  t17348 = -0.305*t16416*t16451;
  t17350 = 0.305*t16384*t16573;
  t17352 = t17348 + t17350;
  t17353 = t16038*t16337*t17352;
  t17355 = t16669*t17352*t16679;
  t17361 = t17353 + t17355;
  t17365 = t16669*t16038*t17352;
  t17367 = -1.*t16337*t17352*t16679;
  t17368 = t17365 + t17367;
  t17379 = t16038*t16337*t17238;
  t17382 = t16669*t17238*t16679;
  t17383 = t17379 + t17382;
  t17362 = -1.*t16991*t17361;
  t17388 = -0.305*t16384*t16416;
  t17389 = t17388 + t16940;
  t17395 = t16669*t16038*t17238;
  t17396 = -1.*t16337*t17238*t16679;
  t17397 = t17395 + t17396;
  t17392 = t17038*t17361;
  t17394 = t17383*t16995;
  t17403 = t17389*t16778;
  t17404 = t16725*t17368;
  t17405 = t17403 + t17404;
  t17407 = t16725*t17389;
  t17408 = -1.*t16778*t17368;
  t17409 = t17407 + t17408;
  t17413 = t16886*t16778;
  t17414 = t16725*t17397;
  t17415 = t17413 + t17414;
  t16854 = t16720*t16699;
  t16855 = -1.*t15758*t16820;
  t16856 = t16854 + t16855;
  t17012 = -1.*t16586*t16778;
  t17013 = -1.*t16725*t16889;
  t17015 = t17012 + t17013;
  t17318 = t17314*t16979;
  t17319 = t16820*t17001;
  t17472 = -1.*t17038*t16995;
  t17282 = t16927*t16739;
  t17294 = t16817*t16969;
  t17504 = -1.*t16889*t16995;
  t17506 = -1.*t17038*t16969;
  t17516 = t16817*t16995;
  t17519 = t16699*t16969;
  t17473 = -1.*t16904*t16979;
  t17474 = -1.*t16987*t17001;
  t17475 = t17472 + t17473 + t17474;
  t17484 = t17293 + t17318 + t17319;
  t17491 = var2[0]*t16725*t17093;
  t17492 = t15758*t16908;
  t17494 = -1.*t16720*t16778*t17093;
  t17495 = t17492 + t17494;
  t17496 = var2[2]*t17495;
  t17497 = t16720*t16908;
  t17498 = t15758*t16778*t17093;
  t17500 = t17497 + t17498;
  t17501 = var2[1]*t17500;
  t17505 = -1.*t17108*t16969;
  t17510 = -1.*t16927*t16586;
  t17512 = -1.*t16889*t16969;
  t17513 = t17510 + t17472 + t17512;
  t17514 = t16817*t17513;
  t17518 = t17058*t16969;
  t17523 = t17282 + t17293 + t17294;
  t17524 = t16889*t17523;
  t17566 = -1.*t17038*t17202;
  t17531 = -1.*t16725*t17108*t16979;
  t17532 = t16778*t17108*t17001;
  t17571 = t16699*t17202;
  t17537 = t16725*t17058*t16979;
  t17538 = -1.*t16778*t17058*t17001;
  t17541 = t16725*t17058*t17475;
  t17542 = t16725*t17108*t17484;
  t17590 = t16927*t17238;
  t17592 = t16739*t17287;
  t17610 = Power(t16669,2);
  t17612 = Power(t16337,2);
  t17599 = -1.*t16927*t16739;
  t17601 = -1.*t17287*t16586;
  t17239 = t17238*t16778;
  t17245 = t16725*t17243;
  t17246 = t17239 + t17245;
  t17633 = t17270*t16699;
  t17635 = t17251*t16995;
  t17641 = -1.*t17038*t17270;
  t17644 = -1.*t16699*t16995;
  t17587 = -1.*t16886*t16948;
  t17588 = t17587 + t17510;
  t17595 = t16948*t16586;
  t17596 = t17282 + t17595;
  t17598 = -1.*t16886*t16927;
  t17606 = -1.*t16669*t16886*t16954;
  t17607 = -1.*t16337*t16886*t16963;
  t17608 = t17510 + t17606 + t17607;
  t17672 = t16739*t17389;
  t17681 = -1.*t17389*t16586;
  t17625 = t16669*t16586*t16954;
  t17627 = t16337*t16586*t16963;
  t17628 = t17282 + t17625 + t17627;
  t17706 = t17361*t16699;
  t17710 = -1.*t17038*t17361;
  t17712 = -1.*t17383*t16995;
  t17420 = t16725*t16886;
  t17422 = -1.*t16778*t17397;
  t17424 = t17420 + t17422;
  t17449 = t15758*t16778*t16908;
  t17451 = t16720*t16991;
  t17452 = t17449 + t17451;
  t17338 = t16720*t17038;
  t17343 = -1.*t15758*t16987;
  t17344 = t17338 + t17343;
  t17662 = -1.*t17314*t16979;
  t17663 = -1.*t16820*t17001;
  t17768 = t16991*t16995;
  t17645 = -1.*t16817*t16969;
  t17769 = t16725*t16908*t16979;
  t17770 = -1.*t16778*t16908*t17001;
  t17771 = t17768 + t17769 + t17770;
  t17801 = t16908*t16995;
  t17802 = t16991*t16969;
  t17807 = -1.*t16817*t16995;
  t17809 = -1.*t16699*t16969;
  t17781 = t17644 + t17662 + t17663;
  t17787 = var2[0]*t16725*t17108;
  t17788 = t15758*t16778*t17108;
  t17789 = t16720*t16889;
  t17790 = t17788 + t17789;
  t17791 = var2[1]*t17790;
  t17792 = -1.*t16720*t16778*t17108;
  t17793 = t15758*t16889;
  t17794 = t17792 + t17793;
  t17795 = var2[2]*t17794;
  t17797 = t16908*t16969;
  t17798 = t17768 + t17797;
  t17799 = t16817*t17798;
  t17803 = t17093*t16969;
  t17808 = -1.*t17058*t16969;
  t17812 = t17599 + t17644 + t17645;
  t17813 = t16908*t17812;
  t17817 = t16725*t17058*t17771;
  t17842 = t16991*t17202;
  t17820 = t16725*t17093*t16979;
  t17821 = -1.*t16778*t17093*t17001;
  t17847 = -1.*t16699*t17202;
  t17826 = -1.*t16725*t17058*t16979;
  t17827 = t16778*t17058*t17001;
  t17831 = t16725*t17093*t17781;
  t17434 = t15758*t16699;
  t17435 = t16720*t16820;
  t17436 = t17434 + t17435;
  t17876 = t16991*t17270;
  t17884 = -1.*t17270*t16699;
  t17886 = -1.*t17251*t16995;
  t17865 = -0.15121*t17238;
  t17866 = -0.15121*t16586;
  t17867 = t17865 + t17866;
  t17868 = var2[12]*t17867;
  t17869 = -1.*t16337*t16954;
  t17870 = t16669*t16963;
  t17871 = t17869 + t17870;
  t17923 = t16991*t17361;
  t17930 = -1.*t17361*t16699;
  t17334 = t15758*t17038;
  t17335 = t16720*t16987;
  t17336 = t17334 + t17335;
  t17325 = 0.28121*t16416;
  t17326 = -1.*t16916*t16416;
  p_output1[0]=(-1.*t15758*t16699 - 1.*t16720*t16820)*var2[1] + t16856*var2[2];
  p_output1[1]=t16820*var2[0] - 1.*t15758*t16865*var2[1] + t16720*t16865*var2[2] + (t16904*(t16778*t16908*t16972 + t16778*t16908*t16979) + t16987*t17004 + t16725*t16908*(t16972*t16987 + t16979*t16987 + t16904*t17001 + t17001*t17015) - 1.*t16778*t16908*t17045)*var2[3];
  p_output1[2]=t17060 + t17067 + t17074 + (t17138 + t16904*(t17086 + t17087 - 1.*t16908*t17084*t17139 - 1.*t16908*t17084*t17141 + t17143 + t17146) + t16725*t16908*(t16725*t16904*t17084 - 1.*t16778*t16987*t17084 + t17103 + t17118 + t17154 + t17156) + t17163)*var2[3] + (t17080 + t17038*(-1.*t16908*t17084 + t17086 + t17087 + t17094) + t16991*(t16889*t17084 + t17103 + t17109 + t17118) + t17133)*var2[4];
  p_output1[3]=t17060 + t17067 + t17074 + (t17138 + t17163 + t16904*(t17086 + t17143 + t17146 - 1.*t16908*t17139*t17197 - 1.*t16908*t17141*t17197 + t17203) + t16725*t16908*(t17103 + t17154 + t17156 + t16725*t16904*t17197 - 1.*t16778*t16987*t17197 + t17209))*var2[3] + (t17080 + t17133 + t17038*(t17086 + t17094 - 1.*t16908*t17197 + t17203) + t16991*(t17103 + t17109 + t16889*t17197 + t17209))*var2[4] + t16586*(t16669*t16954 + t16337*t16963 - 1.*t16669*t17171 + t16337*t17177)*var2[5];
  p_output1[4]=t17246*var2[0] + (t16720*t17251 - 1.*t15758*t17257)*var2[1] + (t15758*t17251 + t16720*t17257)*var2[2] + (t16904*(t17271 - 1.*t16725*t16908*t17304 + t16778*t16908*t17308) + t17004*t17314 + t16725*t16908*(t17290 + t17293 + t16904*t17304 + t16987*t17308 + t17318 + t17319))*var2[3] + (t16699*t17079 + t17038*(t17271 - 1.*t16908*t17275) + t16991*(t16889*t17275 + t17282 + t16586*t17287 + t17290 + t17293 + t17294))*var2[4] + t16739*t17233*var2[5];
  p_output1[5]=t16904*var2[0] + t17344*var2[1] + t17336*var2[2] + (t16904*(t17362 - 1.*t16725*t16908*t17405 + t16778*t16908*t17409) + t17004*t17415 + t16725*t16908*(t17392 + t17394 + t16904*t17405 + t16987*t17409 + t16979*t17415 + t17001*t17424))*var2[3] + (t17038*(t17362 - 1.*t16908*t17368) + t17079*t17383 + t16991*(t16886*t16927 + t16889*t17368 + t16586*t17389 + t17392 + t17394 + t16969*t17397))*var2[4] + t16886*t17233*var2[5] + (-0.305*Power(t16416,2) + t17325 + t17326)*var2[13];
  p_output1[6]=t17314;
  p_output1[7]=t16856;
  p_output1[8]=t17436;
  p_output1[9]=t16904*t17004 + t16725*t16908*t17045;
  p_output1[10]=t17038*t17079 + t16991*t17126;
  p_output1[11]=t16586*t17233;
  p_output1[12]=0.28121*t16573 - 0.305*t16416*t16573 - 1.*t16573*t16916;
  p_output1[13]=(t16720*t16778*t16908 - 1.*t15758*t16991)*var2[1] + t17452*var2[2];
  p_output1[14]=-1.*t16778*t16908*var2[0] + t15758*t16725*t16908*var2[1] - 1.*t16720*t16725*t16908*var2[2] + ((-1.*t16972*t16987 - 1.*t16979*t16987 - 1.*t16904*t17001 - 1.*t17001*t17015)*t17314 + t16904*(t16820*t16972 + t16820*t16979 + t16865*t17001 + t17001*t17314) + t16820*t17475 + t16987*t17484)*var2[3];
  p_output1[15]=t17491 + t17496 + t17501 + (t17314*(-1.*t16725*t16904*t17084 + t16778*t16987*t17084 + t17504 + t17506 + t17531 + t17532) + t16904*(-1.*t16778*t16820*t17084 + t16725*t17084*t17314 + t17516 + t17519 + t17537 + t17538) + t17541 + t17542)*var2[3] + (t16699*(-1.*t16889*t17084 + t17504 + t17505 + t17506) + t17514 + t17038*(t16817*t17084 + t17516 + t17518 + t17519) + t17524)*var2[4];
  p_output1[16]=t17491 + t17496 + t17501 + (t17541 + t17542 + t17314*(-1.*t16725*t16904*t17197 + t16778*t16987*t17197 + t17504 + t17531 + t17532 + t17566) + t16904*(-1.*t16778*t16820*t17197 + t16725*t17197*t17314 + t17516 + t17537 + t17538 + t17571))*var2[3] + (t17514 + t17524 + t16699*(-1.*t16889*t17197 + t17504 + t17505 + t17566) + t17038*(t16817*t17197 + t17516 + t17518 + t17571))*var2[4] + (t16586*(-1.*t16337*t16586*t16954 + t16586*t16669*t16963 + t16337*t16586*t17171 + t16586*t16669*t17177) + t16739*(t16337*t16886*t16954 - 1.*t16669*t16886*t16963 - 1.*t16337*t16886*t17171 - 1.*t16669*t16886*t17177))*var2[5];
  p_output1[17]=(t17246*t17475 + t17314*t17484 + t16904*(t16979*t17246 + t17001*t17257 + t16820*t17308 + t17304*t17314 + t17633 + t17635) + t17314*(-1.*t16904*t17304 - 1.*t16987*t17308 + t17641 + t17644 + t17662 + t17663))*var2[3] + (t17251*t17513 + t16699*t17523 + t17038*(t16969*t17243 + t16817*t17275 + t17590 + t17592 + t17633 + t17635) + t16699*(-1.*t16889*t17275 + t17599 + t17601 + t17641 + t17644 + t17645))*var2[4] + (t17238*t17608 + t16586*(t16669*t16739*t16954 + t16337*t16739*t16963 + t17590 + t17592 + t16586*t16927*t17610 + t16586*t16927*t17612) + t16739*(-1.*t16586*t16669*t16954 - 1.*t16337*t16586*t16963 + t17599 + t17601 - 1.*t16886*t16927*t17610 - 1.*t16886*t16927*t17612) + t16739*t17628)*var2[5] + (t17238*t17588 + t16586*(t16739*t16948 + t17123 + t17590 + t17592) + t16739*t17596 + t16739*(-1.*t16586*t16948 + t17598 + t17599 + t17601))*var2[12];
  p_output1[18]=(t16904*t17475 + t17415*t17484 + t16904*(t17040 + t17043 + t17044 + t17314*t17405 + t16820*t17409 + t17706) + t17314*(-1.*t16904*t17405 - 1.*t16987*t17409 - 1.*t16979*t17415 - 1.*t17001*t17424 + t17710 + t17712))*var2[3] + (t17038*t17513 + t17383*t17523 + t17038*(t17040 + t17123 + t17124 + t16817*t17368 + t17672 + t17706) + t16699*(-1.*t16889*t17368 - 1.*t16969*t17397 + t17598 + t17681 + t17710 + t17712))*var2[4] + (t16586*t17608 + t16886*t17628 + t16586*(t16669*t16886*t16954 + t16337*t16886*t16963 + t17123 + t16586*t17352*t17610 + t16586*t17352*t17612 + t17672) + t16739*(-1.*t16669*t16954*t17238 - 1.*t16337*t16963*t17238 + t17598 - 1.*t16886*t17352*t17610 - 1.*t16886*t17352*t17612 + t17681))*var2[5] + (t16586*t17588 + t16886*t17596 + t16586*(t16886*t16948 + t17123 + t16586*t17352 + t17672) + t16739*(-1.*t16948*t17238 - 1.*t16886*t17352 + t17598 + t17681))*var2[12];
  p_output1[19]=t16725*t16908;
  p_output1[20]=t17452;
  p_output1[21]=-1.*t16720*t16778*t16908 + t15758*t16991;
  p_output1[22]=t17314*t17475 + t16904*t17484;
  p_output1[23]=t16699*t17513 + t17038*t17523;
  p_output1[24]=t16739*t17608 + t16586*t17628;
  p_output1[25]=-0.15121 + t16739*t17588 + t16586*t17596;
  p_output1[26]=(-1.*t16720*t16987 - 1.*t15758*t17038)*var2[1] + t17344*var2[2];
  p_output1[27]=t16987*var2[0] - 1.*t15758*t17015*var2[1] + t16720*t17015*var2[2] + ((-1.*t16778*t16908*t16972 - 1.*t16778*t16908*t16979)*t17314 + t16725*t16908*(-1.*t16820*t16972 - 1.*t16820*t16979 - 1.*t16865*t17001 - 1.*t17001*t17314) + t16820*t17771 - 1.*t16778*t16908*t17781)*var2[3];
  p_output1[28]=t17787 + t17791 + t17795 + (t17817 + t17314*(t16908*t17084*t17139 + t16908*t17084*t17141 + t17801 + t17802 + t17820 + t17821) + t16725*t16908*(t16778*t16820*t17084 - 1.*t16725*t17084*t17314 + t17807 + t17809 + t17826 + t17827) + t17831)*var2[3] + (t17799 + t16699*(t16908*t17084 + t17801 + t17802 + t17803) + t16991*(-1.*t16817*t17084 + t17807 + t17808 + t17809) + t17813)*var2[4];
  p_output1[29]=t17787 + t17791 + t17795 + (t17817 + t17831 + t17314*(t16908*t17139*t17197 + t16908*t17141*t17197 + t17801 + t17820 + t17821 + t17842) + t16725*t16908*(t16778*t16820*t17197 - 1.*t16725*t17197*t17314 + t17807 + t17826 + t17827 + t17847))*var2[3] + (t17799 + t17813 + t16699*(t16908*t17197 + t17801 + t17803 + t17842) + t16991*(-1.*t16817*t17197 + t17807 + t17808 + t17847))*var2[4] + t16739*(-1.*t16669*t16954 - 1.*t16337*t16963 + t16669*t17171 - 1.*t16337*t17177)*var2[5];
  p_output1[30]=t17868 + t17314*var2[0] + t16856*var2[1] + t17436*var2[2] + (t17246*t17771 + t17314*(t16725*t16908*t17304 - 1.*t16778*t16908*t17308 + t17876) + t16725*t16908*(-1.*t16979*t17246 - 1.*t17001*t17257 - 1.*t16820*t17308 - 1.*t17304*t17314 + t17884 + t17886))*var2[3] + (t17251*t17798 + t16699*(t16908*t17275 + t17876) + t16991*(-1.*t16927*t17238 - 1.*t16969*t17243 - 1.*t16817*t17275 - 1.*t16739*t17287 + t17884 + t17886))*var2[4] + t17238*t17871*var2[5];
  p_output1[31]=t17868 + t17415*var2[0] + (t16720*t17383 - 1.*t15758*t17424)*var2[1] + (t15758*t17383 + t16720*t17424)*var2[2] + (t16904*t17771 + t17314*(t16725*t16908*t17405 - 1.*t16778*t16908*t17409 + t17923) + t16725*t16908*(-1.*t17314*t17405 - 1.*t16820*t17409 + t17472 + t17473 + t17474 + t17930))*var2[3] + (t17038*t17798 + t16699*(t16908*t17368 + t17923) + t16991*(-1.*t16817*t17368 - 1.*t16739*t17389 + t17472 + t17510 + t17512 + t17930))*var2[4] + t16586*t17871*var2[5] + (-0.28121*t16573 + 0.305*t16416*t16573 + t16573*t16916)*var2[13];
  p_output1[32]=t16904;
  p_output1[33]=t17344;
  p_output1[34]=t17336;
  p_output1[35]=t17314*t17771 + t16725*t16908*t17781;
  p_output1[36]=t16699*t17798 + t16991*t17812;
  p_output1[37]=t16739*t17871;
  p_output1[38]=-0.15121*t16739 - 0.15121*t16886;
  p_output1[39]=0.305*Power(t16573,2) + t17325 + t17326;
  p_output1[40]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
