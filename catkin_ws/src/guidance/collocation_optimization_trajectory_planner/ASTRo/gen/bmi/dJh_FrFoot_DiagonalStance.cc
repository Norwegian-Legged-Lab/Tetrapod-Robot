/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:05 GMT+02:00
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
  double t5555;
  double t5592;
  double t5606;
  double t5607;
  double t5665;
  double t5671;
  double t5681;
  double t5694;
  double t5098;
  double t5132;
  double t5695;
  double t5710;
  double t5692;
  double t5702;
  double t5703;
  double t3764;
  double t5726;
  double t5751;
  double t5756;
  double t5761;
  double t5914;
  double t5922;
  double t5924;
  double t5925;
  double t5927;
  double t5928;
  double t5929;
  double t5967;
  double t5969;
  double t5974;
  double t5983;
  double t5993;
  double t5996;
  double t6058;
  double t6063;
  double t6069;
  double t6072;
  double t6073;
  double t6080;
  double t6086;
  double t6095;
  double t6096;
  double t6113;
  double t6114;
  double t6115;
  double t6133;
  double t6134;
  double t6135;
  double t6155;
  double t6157;
  double t6161;
  double t6172;
  double t6173;
  double t6191;
  double t6192;
  double t6196;
  double t6197;
  double t6199;
  double t6200;
  double t6201;
  double t6205;
  double t6152;
  double t6185;
  double t6186;
  double t6187;
  double t6195;
  double t6207;
  double t6210;
  double t6220;
  double t6224;
  double t6229;
  double t6230;
  double t6234;
  double t6238;
  double t6239;
  double t6240;
  double t6255;
  double t6256;
  double t6259;
  double t6190;
  double t6243;
  double t6248;
  double t6404;
  double t6430;
  double t6438;
  double t6145;
  double t6147;
  double t6148;
  double t6333;
  double t6336;
  double t6396;
  double t6472;
  double t6477;
  double t6478;
  double t6535;
  double t6537;
  double t6538;
  double t15477;
  double t15489;
  double t15515;
  double t6398;
  double t16227;
  double t16240;
  double t16244;
  double t6488;
  double t16605;
  double t16613;
  double t16618;
  double t6402;
  double t6439;
  double t6455;
  double t16252;
  double t16255;
  double t16317;
  double t16318;
  double t16340;
  double t16540;
  double t16768;
  double t6489;
  double t6492;
  double t6493;
  double t6558;
  double t6669;
  double t18352;
  double t18364;
  double t18389;
  double t18391;
  double t6559;
  double t6571;
  double t6598;
  double t6673;
  double t6675;
  double t6676;
  double t7128;
  double t9566;
  double t7289;
  double t7390;
  double t7585;
  double t17623;
  double t17838;
  double t18495;
  double t18496;
  double t18522;
  double t18525;
  double t9694;
  double t11404;
  double t13238;
  double t15644;
  double t15717;
  double t15850;
  double t15997;
  double t16034;
  double t16059;
  double t16069;
  double t16097;
  double t16125;
  double t16186;
  double t16195;
  double t16215;
  double t18721;
  double t18722;
  double t18723;
  double t18717;
  double t16410;
  double t18733;
  double t18739;
  double t18740;
  double t18759;
  double t18771;
  double t18773;
  double t16759;
  double t17040;
  double t17194;
  double t17267;
  double t17268;
  double t17621;
  double t18774;
  double t18010;
  double t18015;
  double t18807;
  double t18232;
  double t18244;
  double t18287;
  double t18297;
  double t18298;
  double t18299;
  double t18300;
  double t18301;
  double t18309;
  double t18311;
  double t18313;
  double t18321;
  double t18363;
  double t18369;
  double t18374;
  double t18385;
  double t18386;
  double t18390;
  double t18395;
  double t18396;
  double t18400;
  double t18401;
  double t19112;
  double t18410;
  double t18411;
  double t19117;
  double t18423;
  double t18433;
  double t18439;
  double t18441;
  double t18449;
  double t18450;
  double t18451;
  double t18452;
  double t18453;
  double t18454;
  double t18458;
  double t18463;
  double t18480;
  double t18482;
  double t18483;
  double t18492;
  double t18497;
  double t18524;
  double t18529;
  double t18531;
  double t18533;
  double t18534;
  double t18541;
  double t19186;
  double t18550;
  double t18551;
  double t19276;
  double t18609;
  double t18619;
  double t18689;
  double t19387;
  double t19388;
  double t19398;
  double t19400;
  double t19402;
  double t19403;
  double t19418;
  double t19428;
  double t19429;
  double t19442;
  double t19443;
  double t19444;
  double t19642;
  double t19648;
  double t19649;
  double t19651;
  double t19652;
  double t19654;
  double t19650;
  double t19660;
  double t19661;
  double t19664;
  double t19666;
  double t19669;
  double t19687;
  double t19688;
  double t19693;
  double t19697;
  double t19698;
  double t19724;
  double t19813;
  double t19815;
  double t20383;
  double t20402;
  double t19996;
  double t19399;
  double t19407;
  double t19412;
  double t20431;
  double t20446;
  double t20475;
  double t5940;
  double t5946;
  double t5948;
  double t21819;
  double t21900;
  double t21913;
  double t19375;
  double t19379;
  double t19384;
  double t6122;
  double t6123;
  double t6129;
  double t28218;
  double t28287;
  double t28326;
  double t28371;
  double t28391;
  double t28426;
  double t28474;
  double t28538;
  double t28579;
  double t28650;
  double t28761;
  double t28819;
  double t28468;
  double t28911;
  double t29070;
  double t29410;
  double t29638;
  double t29717;
  double t29173;
  double t29256;
  double t29915;
  double t29940;
  double t29958;
  double t29974;
  double t29998;
  double t30057;
  double t30081;
  double t30100;
  double t30101;
  double t19792;
  double t19802;
  double t19838;
  double t19840;
  double t19984;
  double t20266;
  double t20361;
  double t20363;
  double t30940;
  double t31043;
  double t20418;
  double t20419;
  double t20420;
  double t31449;
  double t31499;
  double t31576;
  double t30494;
  double t30506;
  double t30791;
  double t21597;
  double t21618;
  double t21621;
  double t21687;
  double t21693;
  double t21701;
  double t21706;
  double t32766;
  double t33330;
  t5555 = Cos(var1[13]);
  t5592 = Cos(var1[14]);
  t5606 = t5555*t5592;
  t5607 = Sin(var1[13]);
  t5665 = Sin(var1[14]);
  t5671 = t5607*t5665;
  t5681 = t5606 + t5671;
  t5694 = Cos(var1[12]);
  t5098 = Cos(var1[5]);
  t5132 = Sin(var1[12]);
  t5695 = Sin(var1[5]);
  t5710 = Cos(var1[3]);
  t5692 = t5098*t5132*t5681;
  t5702 = t5694*t5681*t5695;
  t5703 = t5692 + t5702;
  t3764 = Sin(var1[3]);
  t5726 = Cos(var1[4]);
  t5751 = -1.*t5592*t5607;
  t5756 = t5555*t5665;
  t5761 = t5751 + t5756;
  t5914 = t5726*t5761;
  t5922 = Sin(var1[4]);
  t5924 = t5694*t5098*t5681;
  t5925 = -1.*t5132*t5681*t5695;
  t5927 = t5924 + t5925;
  t5928 = -1.*t5922*t5927;
  t5929 = t5914 + t5928;
  t5967 = -1.*t5098*t5132;
  t5969 = -1.*t5694*t5695;
  t5974 = t5967 + t5969;
  t5983 = t5694*t5098;
  t5993 = -1.*t5132*t5695;
  t5996 = t5983 + t5993;
  t6058 = t5592*t5607;
  t6063 = -1.*t5555*t5665;
  t6069 = t6058 + t6063;
  t6072 = t5098*t5132*t6069;
  t6073 = t5694*t6069*t5695;
  t6080 = t6072 + t6073;
  t6086 = t5726*t5681;
  t6095 = t5694*t5098*t6069;
  t6096 = -1.*t5132*t6069*t5695;
  t6113 = t6095 + t6096;
  t6114 = -1.*t5922*t6113;
  t6115 = t6086 + t6114;
  t6133 = -1.*t5761*t5922;
  t6134 = -1.*t5726*t5927;
  t6135 = t6133 + t6134;
  t6155 = -1.*t5592;
  t6157 = 1. + t6155;
  t6161 = 0.50321*t6157;
  t6172 = 0.19821*t5592;
  t6173 = t6161 + t6172;
  t6191 = -1.*t5694;
  t6192 = 1. + t6191;
  t6196 = -1.*t5555;
  t6197 = 1. + t6196;
  t6199 = 0.28121*t6197;
  t6200 = t5555*t6173;
  t6201 = -0.305*t5607*t5665;
  t6205 = t6199 + t6200 + t6201;
  t6152 = 0.28121*t5607;
  t6185 = -1.*t6173*t5607;
  t6186 = -0.305*t5555*t5665;
  t6187 = t6152 + t6185 + t6186;
  t6195 = 0.15121*t6192;
  t6207 = t5694*t6205;
  t6210 = t6195 + t6207;
  t6220 = t5098*t6210;
  t6224 = -0.15121*t6192;
  t6229 = -0.15121*t5694;
  t6230 = -0.15121*t5132;
  t6234 = t5132*t6205;
  t6238 = t6224 + t6229 + t6230 + t6234;
  t6239 = -1.*t6238*t5695;
  t6240 = t6220 + t6239;
  t6255 = t6187*t5922;
  t6256 = t5726*t6240;
  t6259 = t6255 + t6256;
  t6190 = -1.*t6187*t5922;
  t6243 = -1.*t5726*t6240;
  t6248 = t6190 + t6243;
  t6404 = t5726*t6187;
  t6430 = -1.*t5922*t6240;
  t6438 = t6404 + t6430;
  t6145 = t5681*t5922;
  t6147 = t5726*t6113;
  t6148 = t6145 + t6147;
  t6333 = t5098*t6238;
  t6336 = t6210*t5695;
  t6396 = t6333 + t6336;
  t6472 = -1.*t5681*t5922;
  t6477 = -1.*t5726*t6113;
  t6478 = t6472 + t6477;
  t6535 = t5761*t5922;
  t6537 = t5726*t5927;
  t6538 = t6535 + t6537;
  t15477 = -1.*t5098*t5132*t5681;
  t15489 = -1.*t5694*t5681*t5695;
  t15515 = t15477 + t15489;
  t6398 = -1.*t5996*t6396;
  t16227 = -1.*t5098*t6238;
  t16240 = -1.*t6210*t5695;
  t16244 = t16227 + t16240;
  t6488 = t6080*t6396;
  t16605 = -1.*t5098*t5132*t6069;
  t16613 = -1.*t5694*t6069*t5695;
  t16618 = t16605 + t16613;
  t6402 = -1.*t5726*t5974*t6259;
  t6439 = t5922*t5974*t6438;
  t6455 = t6398 + t6402 + t6439;
  t16252 = -1.*t5974*t6396;
  t16255 = -1.*t5996*t6240;
  t16317 = -1.*t5694*t5098;
  t16318 = t5132*t5695;
  t16340 = t16317 + t16318;
  t16540 = t6113*t6396;
  t16768 = t6080*t6240;
  t6489 = t6148*t6259;
  t6492 = t6115*t6438;
  t6493 = t6488 + t6489 + t6492;
  t6558 = -1.*t6080*t6396;
  t6669 = t5703*t6396;
  t18352 = -1.*t6113*t6396;
  t18364 = -1.*t6080*t6240;
  t18389 = t5927*t6396;
  t18391 = t5703*t6240;
  t6559 = -1.*t6148*t6259;
  t6571 = -1.*t6115*t6438;
  t6598 = t6558 + t6559 + t6571;
  t6673 = t6538*t6259;
  t6675 = t5929*t6438;
  t6676 = t6669 + t6673 + t6675;
  t7128 = t5996*t6396;
  t9566 = -1.*t5703*t6396;
  t7289 = t5726*t5974*t6259;
  t7390 = -1.*t5922*t5974*t6438;
  t7585 = t7128 + t7289 + t7390;
  t17623 = Power(t5726,2);
  t17838 = Power(t5922,2);
  t18495 = t5974*t6396;
  t18496 = t5996*t6240;
  t18522 = -1.*t5927*t6396;
  t18525 = -1.*t5703*t6240;
  t9694 = -1.*t6538*t6259;
  t11404 = -1.*t5929*t6438;
  t13238 = t9566 + t9694 + t11404;
  t15644 = var2[0]*t5726*t15515;
  t15717 = t3764*t5922*t15515;
  t15850 = t5710*t5927;
  t15997 = t15717 + t15850;
  t16034 = var2[1]*t15997;
  t16059 = -1.*t5710*t5922*t15515;
  t16069 = t3764*t5927;
  t16097 = t16059 + t16069;
  t16125 = var2[2]*t16097;
  t16186 = -1.*t5974*t6240;
  t16195 = t6398 + t16186;
  t16215 = t6113*t16195;
  t18721 = 0.15121*t5132;
  t18722 = -1.*t5132*t6205;
  t18723 = t18721 + t18722;
  t18717 = t6229 + t6207;
  t16410 = -1.*t16340*t6240;
  t18733 = t5098*t18723;
  t18739 = -1.*t18717*t5695;
  t18740 = t18733 + t18739;
  t18759 = t5098*t18717;
  t18771 = t18723*t5695;
  t18773 = t18759 + t18771;
  t16759 = t16618*t6240;
  t17040 = t6187*t5681;
  t17194 = t6113*t6240;
  t17267 = t17040 + t6488 + t17194;
  t17268 = t5974*t17267;
  t17621 = t5726*t16618*t6455;
  t18774 = -1.*t5996*t18773;
  t18010 = -1.*t5726*t16340*t6259;
  t18015 = t5922*t16340*t6438;
  t18807 = t6080*t18773;
  t18232 = t5726*t16618*t6259;
  t18244 = -1.*t5922*t16618*t6438;
  t18287 = t5726*t16340*t6493;
  t18297 = var2[0]*t5726*t16340;
  t18298 = t3764*t5974;
  t18299 = -1.*t5710*t5922*t16340;
  t18300 = t18298 + t18299;
  t18301 = var2[2]*t18300;
  t18309 = t5710*t5974;
  t18311 = t3764*t5922*t16340;
  t18313 = t18309 + t18311;
  t18321 = var2[1]*t18313;
  t18363 = -1.*t16618*t6240;
  t18369 = -1.*t6187*t5681;
  t18374 = -1.*t6113*t6240;
  t18385 = t18369 + t6558 + t18374;
  t18386 = t5927*t18385;
  t18390 = t15515*t6240;
  t18395 = t6187*t5761;
  t18396 = t5927*t6240;
  t18400 = t18395 + t6669 + t18396;
  t18401 = t6113*t18400;
  t19112 = -1.*t6080*t18773;
  t18410 = -1.*t5726*t16618*t6259;
  t18411 = t5922*t16618*t6438;
  t19117 = t5703*t18773;
  t18423 = t5726*t15515*t6259;
  t18433 = -1.*t5922*t15515*t6438;
  t18439 = t5726*t15515*t6598;
  t18441 = t5726*t16618*t6676;
  t18449 = var2[0]*t5726*t16618;
  t18450 = t3764*t5922*t16618;
  t18451 = t5710*t6113;
  t18452 = t18450 + t18451;
  t18453 = var2[1]*t18452;
  t18454 = -1.*t5710*t5922*t16618;
  t18458 = t3764*t6113;
  t18463 = t18454 + t18458;
  t18480 = var2[2]*t18463;
  t18482 = t5974*t6240;
  t18483 = t7128 + t18482;
  t18492 = t5927*t18483;
  t18497 = t16340*t6240;
  t18524 = -1.*t15515*t6240;
  t18529 = -1.*t6187*t5761;
  t18531 = -1.*t5927*t6240;
  t18533 = t18529 + t9566 + t18531;
  t18534 = t5974*t18533;
  t18541 = t5726*t15515*t7585;
  t19186 = t5996*t18773;
  t18550 = t5726*t16340*t6259;
  t18551 = -1.*t5922*t16340*t6438;
  t19276 = -1.*t5703*t18773;
  t18609 = -1.*t5726*t15515*t6259;
  t18619 = t5922*t15515*t6438;
  t18689 = t5726*t16340*t13238;
  t19387 = -1.*t5555*t5592;
  t19388 = -1.*t5607*t5665;
  t19398 = t19387 + t19388;
  t19400 = t5694*t5098*t5761;
  t19402 = -1.*t5132*t5761*t5695;
  t19403 = t19400 + t19402;
  t19418 = t5098*t5132*t5761;
  t19428 = t5694*t5761*t5695;
  t19429 = t19418 + t19428;
  t19442 = t5726*t19398;
  t19443 = -1.*t5922*t19403;
  t19444 = t19442 + t19443;
  t19642 = t5098*t5132*t6187;
  t19648 = t5694*t6187*t5695;
  t19649 = t19642 + t19648;
  t19651 = t5694*t5098*t6187;
  t19652 = -1.*t5132*t6187*t5695;
  t19654 = t19651 + t19652;
  t19650 = -1.*t5996*t19649;
  t19660 = 0.28121*t5555;
  t19661 = -1.*t5555*t6173;
  t19664 = 0.305*t5607*t5665;
  t19666 = t19660 + t19661 + t19664;
  t19669 = t6080*t19649;
  t19687 = t19666*t5922;
  t19688 = t5726*t19654;
  t19693 = t19687 + t19688;
  t19697 = t5726*t19666;
  t19698 = -1.*t5922*t19654;
  t19724 = t19697 + t19698;
  t19813 = t6187*t19398;
  t19815 = t5761*t19666;
  t20383 = Power(t5694,2);
  t20402 = Power(t5132,2);
  t19996 = -1.*t19666*t5681;
  t19399 = t19398*t5922;
  t19407 = t5726*t19403;
  t19412 = t19399 + t19407;
  t20431 = t19649*t5703;
  t20446 = t19429*t6396;
  t20475 = -1.*t6080*t19649;
  t5940 = t5710*t5703;
  t5946 = -1.*t3764*t5929;
  t5948 = t5940 + t5946;
  t21819 = t5996*t19649;
  t21900 = -1.*t19649*t5703;
  t21913 = -1.*t19429*t6396;
  t19375 = t5132*t6210;
  t19379 = -1.*t5694*t6238;
  t19384 = t19375 + t19379;
  t6122 = t5710*t6080;
  t6123 = -1.*t3764*t6115;
  t6129 = t6122 + t6123;
  t28218 = -0.305*t5592*t5607;
  t28287 = 0.305*t5555*t5665;
  t28326 = t28218 + t28287;
  t28371 = t5098*t5132*t28326;
  t28391 = t5694*t28326*t5695;
  t28426 = t28371 + t28391;
  t28474 = t5694*t5098*t28326;
  t28538 = -1.*t5132*t28326*t5695;
  t28579 = t28474 + t28538;
  t28650 = t5098*t5132*t19398;
  t28761 = t5694*t19398*t5695;
  t28819 = t28650 + t28761;
  t28468 = -1.*t5996*t28426;
  t28911 = -0.305*t5555*t5592;
  t29070 = t28911 + t6201;
  t29410 = t5694*t5098*t19398;
  t29638 = -1.*t5132*t19398*t5695;
  t29717 = t29410 + t29638;
  t29173 = t6080*t28426;
  t29256 = t28819*t6396;
  t29915 = t29070*t5922;
  t29940 = t5726*t28579;
  t29958 = t29915 + t29940;
  t29974 = t5726*t29070;
  t29998 = -1.*t5922*t28579;
  t30057 = t29974 + t29998;
  t30081 = t6069*t5922;
  t30100 = t5726*t29717;
  t30101 = t30081 + t30100;
  t19792 = -1.*t6069*t6205;
  t19802 = t19792 + t18369;
  t19838 = t6205*t5681;
  t19840 = t18395 + t19838;
  t19984 = -1.*t6069*t6187;
  t20266 = -1.*t5694*t6069*t6210;
  t20361 = -1.*t5132*t6069*t6238;
  t20363 = t18369 + t20266 + t20361;
  t30940 = t5761*t29070;
  t31043 = -1.*t29070*t5681;
  t20418 = t5694*t5681*t6210;
  t20419 = t5132*t5681*t6238;
  t20420 = t18395 + t20418 + t20419;
  t31449 = t28426*t5703;
  t31499 = -1.*t6080*t28426;
  t31576 = -1.*t28819*t6396;
  t30494 = t5726*t6069;
  t30506 = -1.*t5922*t29717;
  t30791 = t30494 + t30506;
  t21597 = -0.15121*t19398;
  t21618 = -0.15121*t5681;
  t21621 = t21597 + t21618;
  t21687 = var2[12]*t21621;
  t21693 = -1.*t5132*t6210;
  t21701 = t5694*t6238;
  t21706 = t21693 + t21701;
  t32766 = t5996*t28426;
  t33330 = -1.*t28426*t5703;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3764*t5703 - 1.*t5710*t5929)*var2[1] + t5948*var2[2];
  p_output1[10]=(t5710*t5922*t5974 - 1.*t3764*t5996)*var2[1] + (t3764*t5922*t5974 + t5710*t5996)*var2[2];
  p_output1[11]=(-1.*t3764*t6080 - 1.*t5710*t6115)*var2[1] + t6129*var2[2];
  p_output1[12]=t5929*var2[0] - 1.*t3764*t6135*var2[1] + t5710*t6135*var2[2] + (t6148*(t5922*t5974*t6248 + t5922*t5974*t6259) + t6115*t6455 + t5726*t5974*(t6115*t6248 + t6115*t6259 + t6148*t6438 + t6438*t6478) - 1.*t5922*t5974*t6493)*var2[3];
  p_output1[13]=-1.*t5922*t5974*var2[0] + t3764*t5726*t5974*var2[1] - 1.*t5710*t5726*t5974*var2[2] + ((-1.*t6115*t6248 - 1.*t6115*t6259 - 1.*t6148*t6438 - 1.*t6438*t6478)*t6538 + t6148*(t5929*t6248 + t5929*t6259 + t6135*t6438 + t6438*t6538) + t5929*t6598 + t6115*t6676)*var2[3];
  p_output1[14]=t6115*var2[0] - 1.*t3764*t6478*var2[1] + t5710*t6478*var2[2] + (-1.*t13238*t5922*t5974 + (-1.*t5922*t5974*t6248 - 1.*t5922*t5974*t6259)*t6538 + t5726*t5974*(-1.*t5929*t6248 - 1.*t5929*t6259 - 1.*t6135*t6438 - 1.*t6438*t6538) + t5929*t7585)*var2[3];
  p_output1[15]=t15644 + t16034 + t16125 + (t17621 + t18287 + (t16252 + t16255 + t18010 + t18015 - 1.*t16244*t17623*t5974 - 1.*t16244*t17838*t5974)*t6148 + t5726*t5974*(t16540 + t16768 + t18232 + t18244 - 1.*t16244*t5922*t6115 + t16244*t5726*t6148))*var2[3] + (t16215 + t17268 + (t16252 + t16255 + t16410 - 1.*t16244*t5974)*t6080 + t5996*(t16540 + t16759 + t16768 + t16244*t6113))*var2[4];
  p_output1[16]=t18297 + t18301 + t18321 + (t18439 + t18441 + (t18352 + t18364 + t18410 + t18411 + t16244*t5922*t6115 - 1.*t16244*t5726*t6148)*t6538 + t6148*(t18389 + t18391 + t18423 + t18433 - 1.*t16244*t5922*t5929 + t16244*t5726*t6538))*var2[3] + (t18386 + t18401 + (t18389 + t18390 + t18391 + t16244*t5927)*t6080 + t5703*(t18352 + t18363 + t18364 - 1.*t16244*t6113))*var2[4];
  p_output1[17]=t18449 + t18453 + t18480 + (t18541 + t18689 + (t18495 + t18496 + t18550 + t18551 + t16244*t17623*t5974 + t16244*t17838*t5974)*t6538 + t5726*t5974*(t18522 + t18525 + t18609 + t18619 + t16244*t5922*t5929 - 1.*t16244*t5726*t6538))*var2[3] + (t18492 + t18534 + t5703*(t18495 + t18496 + t18497 + t16244*t5974) + (t18522 + t18524 + t18525 - 1.*t16244*t5927)*t5996)*var2[4];
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
  p_output1[36]=t15644 + t16034 + t16125 + (t17621 + t18287 + (t16252 + t18010 + t18015 + t18774 - 1.*t17623*t18740*t5974 - 1.*t17838*t18740*t5974)*t6148 + t5726*t5974*(t16540 + t18232 + t18244 + t18807 - 1.*t18740*t5922*t6115 + t18740*t5726*t6148))*var2[3] + (t16215 + t17268 + (t16252 + t16410 + t18774 - 1.*t18740*t5974)*t6080 + t5996*(t16540 + t16759 + t18807 + t18740*t6113))*var2[4] + t5681*(t18723*t5132 - 1.*t18717*t5694 + t5694*t6210 + t5132*t6238)*var2[5];
  p_output1[37]=t18297 + t18301 + t18321 + (t18439 + t18441 + (t18352 + t18410 + t18411 + t19112 + t18740*t5922*t6115 - 1.*t18740*t5726*t6148)*t6538 + t6148*(t18389 + t18423 + t18433 + t19117 - 1.*t18740*t5922*t5929 + t18740*t5726*t6538))*var2[3] + (t18386 + t18401 + (t18389 + t18390 + t19117 + t18740*t5927)*t6080 + t5703*(t18352 + t18363 + t19112 - 1.*t18740*t6113))*var2[4] + (t5681*(t18717*t5132*t5681 + t18723*t5681*t5694 - 1.*t5132*t5681*t6210 + t5681*t5694*t6238) + t5761*(-1.*t18717*t5132*t6069 - 1.*t18723*t5694*t6069 + t5132*t6069*t6210 - 1.*t5694*t6069*t6238))*var2[5];
  p_output1[38]=t18449 + t18453 + t18480 + (t18541 + t18689 + (t18495 + t18550 + t18551 + t19186 + t17623*t18740*t5974 + t17838*t18740*t5974)*t6538 + t5726*t5974*(t18522 + t18609 + t18619 + t19276 + t18740*t5922*t5929 - 1.*t18740*t5726*t6538))*var2[3] + (t18492 + t18534 + t5703*(t18495 + t18497 + t19186 + t18740*t5974) + (t18522 + t18524 + t19276 - 1.*t18740*t5927)*t5996)*var2[4] + t5761*(-1.*t18723*t5132 + t18717*t5694 - 1.*t5694*t6210 - 1.*t5132*t6238)*var2[5];
  p_output1[39]=t19412*var2[0] + (-1.*t19444*t3764 + t19429*t5710)*var2[1] + (t19429*t3764 + t19444*t5710)*var2[2] + ((t19650 - 1.*t19693*t5726*t5974 + t19724*t5922*t5974)*t6148 + t6455*t6538 + t5726*t5974*(t19669 + t19724*t6115 + t19693*t6148 + t6669 + t6673 + t6675))*var2[3] + (t16195*t5703 + (t19650 - 1.*t19654*t5974)*t6080 + t5996*(t18395 + t18396 + t19669 + t19666*t5681 + t19654*t6113 + t6669))*var2[4] + t19384*t5761*var2[5];
  p_output1[40]=(t6148*(t20431 + t20446 + t19724*t5929 + t19412*t6259 + t19444*t6438 + t19693*t6538) + t19412*t6598 + t6538*t6676 + t6538*(t11404 + t20475 - 1.*t19724*t6115 - 1.*t19693*t6148 + t9566 + t9694))*var2[3] + (t18385*t19429 + t18400*t5703 + t6080*(t19813 + t19815 + t20431 + t20446 + t19654*t5927 + t19403*t6240) + t5703*(t18529 + t18531 + t19996 + t20475 - 1.*t19654*t6113 + t9566))*var2[4] + (t19398*t20363 + t20420*t5761 + t5761*(t18529 + t19996 - 1.*t20383*t6069*t6187 - 1.*t20402*t6069*t6187 - 1.*t5681*t5694*t6210 - 1.*t5132*t5681*t6238) + t5681*(t19813 + t19815 + t20383*t5681*t6187 + t20402*t5681*t6187 + t5694*t5761*t6210 + t5132*t5761*t6238))*var2[5] + (t19398*t19802 + t19840*t5761 + t5761*(t18529 + t19984 + t19996 - 1.*t5681*t6205) + t5681*(t17040 + t19813 + t19815 + t5761*t6205))*var2[12];
  p_output1[41]=t21687 + t6538*var2[0] + t5948*var2[1] + (t3764*t5703 + t5710*t5929)*var2[2] + ((t21819 + t19693*t5726*t5974 - 1.*t19724*t5922*t5974)*t6538 + t5726*t5974*(t21900 + t21913 - 1.*t19724*t5929 - 1.*t19412*t6259 - 1.*t19444*t6438 - 1.*t19693*t6538) + t19412*t7585)*var2[3] + (t18483*t19429 + t5703*(t21819 + t19654*t5974) + t5996*(t21900 + t21913 - 1.*t19666*t5761 - 1.*t19654*t5927 - 1.*t19398*t6187 - 1.*t19403*t6240))*var2[4] + t19398*t21706*var2[5];
  p_output1[42]=t6148*var2[0] + t6129*var2[1] + (t3764*t6080 + t5710*t6115)*var2[2] + ((t28468 - 1.*t29958*t5726*t5974 + t30057*t5922*t5974)*t6148 + t5726*t5974*(t29173 + t29256 + t30057*t6115 + t29958*t6148 + t30101*t6259 + t30791*t6438) + t30101*t6455)*var2[3] + (t16195*t28819 + (t28468 - 1.*t28579*t5974)*t6080 + t5996*(t29173 + t29256 + t29070*t5681 + t28579*t6113 + t6069*t6187 + t29717*t6240))*var2[4] + t19384*t6069*var2[5] + (0.28121*t5592 - 0.305*Power(t5592,2) - 1.*t5592*t6173)*var2[13];
  p_output1[43]=((t31499 + t31576 - 1.*t30057*t6115 - 1.*t29958*t6148 - 1.*t30101*t6259 - 1.*t30791*t6438)*t6538 + t6148*(t31449 + t30057*t5929 + t6488 + t6489 + t6492 + t29958*t6538) + t6148*t6598 + t30101*t6676)*var2[3] + (t18400*t28819 + t18385*t6080 + t5703*(t19984 + t31043 + t31499 + t31576 - 1.*t28579*t6113 - 1.*t29717*t6240) + t6080*(t17040 + t17194 + t30940 + t31449 + t28579*t5927 + t6488))*var2[4] + (t20363*t5681 + t20420*t6069 + t5761*(t19984 + t31043 - 1.*t20383*t28326*t6069 - 1.*t20402*t28326*t6069 - 1.*t19398*t5694*t6210 - 1.*t19398*t5132*t6238) + t5681*(t17040 + t30940 + t20383*t28326*t5681 + t20402*t28326*t5681 + t5694*t6069*t6210 + t5132*t6069*t6238))*var2[5] + (t19802*t5681 + t19840*t6069 + t5761*(t19984 + t31043 - 1.*t28326*t6069 - 1.*t19398*t6205) + t5681*(t17040 + t30940 + t28326*t5681 + t6069*t6205))*var2[12];
  p_output1[44]=t21687 + t30101*var2[0] + (-1.*t30791*t3764 + t28819*t5710)*var2[1] + (t28819*t3764 + t30791*t5710)*var2[2] + ((t32766 + t29958*t5726*t5974 - 1.*t30057*t5922*t5974)*t6538 + t5726*t5974*(t33330 - 1.*t30057*t5929 - 1.*t29958*t6538 + t6558 + t6559 + t6571) + t6148*t7585)*var2[3] + (t5703*(t32766 + t28579*t5974) + t18483*t6080 + t5996*(t18369 + t18374 + t33330 - 1.*t29070*t5761 - 1.*t28579*t5927 + t6558))*var2[4] + t21706*t5681*var2[5] + (-0.28121*t5665 + 0.305*t5592*t5665 + t5665*t6173)*var2[13];
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
