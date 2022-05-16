/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:35 GMT+02:00
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
  double t14508;
  double t15737;
  double t22734;
  double t28185;
  double t41014;
  double t41042;
  double t41043;
  double t41049;
  double t3716;
  double t4682;
  double t41069;
  double t41124;
  double t41048;
  double t41082;
  double t41083;
  double t954;
  double t41128;
  double t41129;
  double t41130;
  double t41143;
  double t41144;
  double t41145;
  double t41149;
  double t41250;
  double t41255;
  double t41256;
  double t41257;
  double t41319;
  double t41324;
  double t41326;
  double t41330;
  double t41331;
  double t41335;
  double t41369;
  double t41374;
  double t41375;
  double t41377;
  double t41380;
  double t41381;
  double t41382;
  double t41387;
  double t41388;
  double t41391;
  double t41393;
  double t41407;
  double t41464;
  double t41468;
  double t41470;
  double t41497;
  double t41500;
  double t41504;
  double t41505;
  double t41506;
  double t41520;
  double t41522;
  double t41523;
  double t41524;
  double t41525;
  double t41526;
  double t41527;
  double t41528;
  double t41529;
  double t41496;
  double t41507;
  double t41512;
  double t41518;
  double t41537;
  double t41540;
  double t41545;
  double t41548;
  double t41577;
  double t41579;
  double t41581;
  double t41582;
  double t41583;
  double t41591;
  double t41593;
  double t41595;
  double t41519;
  double t41588;
  double t41589;
  double t41621;
  double t41622;
  double t41624;
  double t41485;
  double t41489;
  double t41495;
  double t41602;
  double t41605;
  double t41606;
  double t41631;
  double t41632;
  double t41633;
  double t41651;
  double t41653;
  double t41654;
  double t49269;
  double t49644;
  double t50081;
  double t41607;
  double t50238;
  double t50239;
  double t50240;
  double t41638;
  double t50335;
  double t50342;
  double t50350;
  double t41612;
  double t41625;
  double t41626;
  double t50256;
  double t50272;
  double t50260;
  double t50261;
  double t50264;
  double t50295;
  double t50359;
  double t41639;
  double t41640;
  double t41641;
  double t41679;
  double t43696;
  double t51035;
  double t51037;
  double t51046;
  double t51048;
  double t41695;
  double t41699;
  double t41700;
  double t43697;
  double t43708;
  double t43709;
  double t44003;
  double t44218;
  double t44010;
  double t44158;
  double t44168;
  double t50393;
  double t50403;
  double t51566;
  double t51569;
  double t51575;
  double t51578;
  double t44220;
  double t44992;
  double t45094;
  double t50152;
  double t50153;
  double t50174;
  double t50191;
  double t50206;
  double t50212;
  double t50213;
  double t50214;
  double t50218;
  double t50220;
  double t50225;
  double t50229;
  double t51620;
  double t51622;
  double t51623;
  double t51617;
  double t51618;
  double t50269;
  double t51675;
  double t51676;
  double t51679;
  double t51689;
  double t51707;
  double t51712;
  double t50357;
  double t50376;
  double t50378;
  double t50379;
  double t50380;
  double t50388;
  double t51718;
  double t50956;
  double t50959;
  double t51802;
  double t50975;
  double t50980;
  double t51017;
  double t51023;
  double t51025;
  double t51026;
  double t51027;
  double t51028;
  double t51029;
  double t51030;
  double t51031;
  double t51033;
  double t51036;
  double t51040;
  double t51042;
  double t51043;
  double t51044;
  double t51047;
  double t51053;
  double t51054;
  double t51055;
  double t51056;
  double t51973;
  double t51379;
  double t51381;
  double t51978;
  double t51418;
  double t51425;
  double t51444;
  double t51450;
  double t51539;
  double t51544;
  double t51546;
  double t51547;
  double t51548;
  double t51554;
  double t51555;
  double t51557;
  double t51558;
  double t51559;
  double t51561;
  double t51562;
  double t51567;
  double t51577;
  double t51582;
  double t51583;
  double t51585;
  double t51586;
  double t51590;
  double t52005;
  double t51594;
  double t51595;
  double t52009;
  double t51602;
  double t51604;
  double t51608;
  double t52043;
  double t52044;
  double t52045;
  double t52057;
  double t52058;
  double t52059;
  double t52092;
  double t52096;
  double t52097;
  double t52103;
  double t52107;
  double t52117;
  double t52126;
  double t52127;
  double t52128;
  double t52129;
  double t52130;
  double t52131;
  double t52132;
  double t52134;
  double t52135;
  double t52136;
  double t52133;
  double t52141;
  double t52142;
  double t52144;
  double t52151;
  double t52152;
  double t52154;
  double t52156;
  double t52157;
  double t52158;
  double t52189;
  double t52224;
  double t52299;
  double t52304;
  double t52290;
  double t52331;
  double t52333;
  double t52056;
  double t52062;
  double t52076;
  double t52339;
  double t41292;
  double t41301;
  double t41304;
  double t52383;
  double t52428;
  double t52431;
  double t52046;
  double t52047;
  double t52048;
  double t52050;
  double t52051;
  double t52052;
  double t52053;
  double t41417;
  double t41419;
  double t41433;
  double t52469;
  double t52472;
  double t52473;
  double t52474;
  double t52475;
  double t52477;
  double t52478;
  double t52479;
  double t52483;
  double t52484;
  double t52485;
  double t52476;
  double t52490;
  double t52491;
  double t52492;
  double t52497;
  double t52498;
  double t52499;
  double t52494;
  double t52496;
  double t52506;
  double t52507;
  double t52508;
  double t52510;
  double t52511;
  double t52513;
  double t52517;
  double t52518;
  double t52519;
  double t52186;
  double t52187;
  double t52283;
  double t52284;
  double t52310;
  double t52311;
  double t52312;
  double t52538;
  double t52323;
  double t52326;
  double t52327;
  double t52542;
  double t52544;
  double t52569;
  double t52574;
  double t52576;
  double t52525;
  double t52526;
  double t52527;
  double t52369;
  double t52372;
  double t52373;
  double t52616;
  double t52622;
  t14508 = Cos(var1[16]);
  t15737 = Cos(var1[17]);
  t22734 = -1.*t14508*t15737;
  t28185 = Sin(var1[16]);
  t41014 = Sin(var1[17]);
  t41042 = -1.*t28185*t41014;
  t41043 = t22734 + t41042;
  t41049 = Cos(var1[15]);
  t3716 = Cos(var1[5]);
  t4682 = Sin(var1[15]);
  t41069 = Sin(var1[5]);
  t41124 = Cos(var1[3]);
  t41048 = t3716*t4682*t41043;
  t41082 = t41049*t41043*t41069;
  t41083 = t41048 + t41082;
  t954 = Sin(var1[3]);
  t41128 = Cos(var1[4]);
  t41129 = -1.*t15737*t28185;
  t41130 = t14508*t41014;
  t41143 = t41129 + t41130;
  t41144 = t41128*t41143;
  t41145 = Sin(var1[4]);
  t41149 = t41049*t3716*t41043;
  t41250 = -1.*t4682*t41043*t41069;
  t41255 = t41149 + t41250;
  t41256 = -1.*t41145*t41255;
  t41257 = t41144 + t41256;
  t41319 = t3716*t4682;
  t41324 = t41049*t41069;
  t41326 = t41319 + t41324;
  t41330 = -1.*t41049*t3716;
  t41331 = t4682*t41069;
  t41335 = t41330 + t41331;
  t41369 = t3716*t4682*t41143;
  t41374 = t41049*t41143*t41069;
  t41375 = t41369 + t41374;
  t41377 = t14508*t15737;
  t41380 = t28185*t41014;
  t41381 = t41377 + t41380;
  t41382 = t41128*t41381;
  t41387 = t41049*t3716*t41143;
  t41388 = -1.*t4682*t41143*t41069;
  t41391 = t41387 + t41388;
  t41393 = -1.*t41145*t41391;
  t41407 = t41382 + t41393;
  t41464 = -1.*t41143*t41145;
  t41468 = -1.*t41128*t41255;
  t41470 = t41464 + t41468;
  t41497 = -1.*t15737;
  t41500 = 1. + t41497;
  t41504 = -0.50321*t41500;
  t41505 = -0.23321*t15737;
  t41506 = t41504 + t41505;
  t41520 = -1.*t41049;
  t41522 = 1. + t41520;
  t41523 = -0.15121*t41522;
  t41524 = -1.*t14508;
  t41525 = 1. + t41524;
  t41526 = -0.28121*t41525;
  t41527 = t14508*t41506;
  t41528 = 0.27*t28185*t41014;
  t41529 = t41526 + t41527 + t41528;
  t41496 = 0.28121*t28185;
  t41507 = t41506*t28185;
  t41512 = -0.27*t14508*t41014;
  t41518 = t41496 + t41507 + t41512;
  t41537 = t41049*t41529;
  t41540 = t41523 + t41537;
  t41545 = t3716*t41540;
  t41548 = -0.15121*t41049;
  t41577 = 0.15121*t4682;
  t41579 = t4682*t41529;
  t41581 = t41523 + t41548 + t41577 + t41579;
  t41582 = -1.*t41581*t41069;
  t41583 = t41545 + t41582;
  t41591 = t41518*t41145;
  t41593 = t41128*t41583;
  t41595 = t41591 + t41593;
  t41519 = -1.*t41518*t41145;
  t41588 = -1.*t41128*t41583;
  t41589 = t41519 + t41588;
  t41621 = t41128*t41518;
  t41622 = -1.*t41145*t41583;
  t41624 = t41621 + t41622;
  t41485 = t41381*t41145;
  t41489 = t41128*t41391;
  t41495 = t41485 + t41489;
  t41602 = t3716*t41581;
  t41605 = t41540*t41069;
  t41606 = t41602 + t41605;
  t41631 = -1.*t41381*t41145;
  t41632 = -1.*t41128*t41391;
  t41633 = t41631 + t41632;
  t41651 = t41143*t41145;
  t41653 = t41128*t41255;
  t41654 = t41651 + t41653;
  t49269 = -1.*t3716*t4682*t41043;
  t49644 = -1.*t41049*t41043*t41069;
  t50081 = t49269 + t49644;
  t41607 = -1.*t41335*t41606;
  t50238 = -1.*t3716*t41581;
  t50239 = -1.*t41540*t41069;
  t50240 = t50238 + t50239;
  t41638 = t41375*t41606;
  t50335 = -1.*t3716*t4682*t41143;
  t50342 = -1.*t41049*t41143*t41069;
  t50350 = t50335 + t50342;
  t41612 = -1.*t41128*t41326*t41595;
  t41625 = t41145*t41326*t41624;
  t41626 = t41607 + t41612 + t41625;
  t50256 = -1.*t41326*t41606;
  t50272 = -1.*t41335*t41583;
  t50260 = t41049*t3716;
  t50261 = -1.*t4682*t41069;
  t50264 = t50260 + t50261;
  t50295 = t41391*t41606;
  t50359 = t41375*t41583;
  t41639 = t41495*t41595;
  t41640 = t41407*t41624;
  t41641 = t41638 + t41639 + t41640;
  t41679 = -1.*t41375*t41606;
  t43696 = t41083*t41606;
  t51035 = -1.*t41391*t41606;
  t51037 = -1.*t41375*t41583;
  t51046 = t41255*t41606;
  t51048 = t41083*t41583;
  t41695 = -1.*t41495*t41595;
  t41699 = -1.*t41407*t41624;
  t41700 = t41679 + t41695 + t41699;
  t43697 = t41654*t41595;
  t43708 = t41257*t41624;
  t43709 = t43696 + t43697 + t43708;
  t44003 = t41335*t41606;
  t44218 = -1.*t41083*t41606;
  t44010 = t41128*t41326*t41595;
  t44158 = -1.*t41145*t41326*t41624;
  t44168 = t44003 + t44010 + t44158;
  t50393 = Power(t41128,2);
  t50403 = Power(t41145,2);
  t51566 = t41326*t41606;
  t51569 = t41335*t41583;
  t51575 = -1.*t41255*t41606;
  t51578 = -1.*t41083*t41583;
  t44220 = -1.*t41654*t41595;
  t44992 = -1.*t41257*t41624;
  t45094 = t44218 + t44220 + t44992;
  t50152 = var2[0]*t41128*t50081;
  t50153 = t954*t41145*t50081;
  t50174 = t41124*t41255;
  t50191 = t50153 + t50174;
  t50206 = var2[1]*t50191;
  t50212 = -1.*t41124*t41145*t50081;
  t50213 = t954*t41255;
  t50214 = t50212 + t50213;
  t50218 = var2[2]*t50214;
  t50220 = -1.*t41326*t41583;
  t50225 = t41607 + t50220;
  t50229 = t41391*t50225;
  t51620 = -0.15121*t4682;
  t51622 = -1.*t4682*t41529;
  t51623 = t51620 + t51622;
  t51617 = 0.15121*t41049;
  t51618 = t51617 + t41537;
  t50269 = -1.*t50264*t41583;
  t51675 = t3716*t51623;
  t51676 = -1.*t51618*t41069;
  t51679 = t51675 + t51676;
  t51689 = t3716*t51618;
  t51707 = t51623*t41069;
  t51712 = t51689 + t51707;
  t50357 = t50350*t41583;
  t50376 = t41518*t41381;
  t50378 = t41391*t41583;
  t50379 = t50376 + t41638 + t50378;
  t50380 = t41326*t50379;
  t50388 = t41128*t50350*t41626;
  t51718 = -1.*t41335*t51712;
  t50956 = -1.*t41128*t50264*t41595;
  t50959 = t41145*t50264*t41624;
  t51802 = t41375*t51712;
  t50975 = t41128*t50350*t41595;
  t50980 = -1.*t41145*t50350*t41624;
  t51017 = t41128*t50264*t41641;
  t51023 = var2[0]*t41128*t50264;
  t51025 = t954*t41326;
  t51026 = -1.*t41124*t41145*t50264;
  t51027 = t51025 + t51026;
  t51028 = var2[2]*t51027;
  t51029 = t41124*t41326;
  t51030 = t954*t41145*t50264;
  t51031 = t51029 + t51030;
  t51033 = var2[1]*t51031;
  t51036 = -1.*t50350*t41583;
  t51040 = -1.*t41518*t41381;
  t51042 = -1.*t41391*t41583;
  t51043 = t51040 + t41679 + t51042;
  t51044 = t41255*t51043;
  t51047 = t50081*t41583;
  t51053 = t41518*t41143;
  t51054 = t41255*t41583;
  t51055 = t51053 + t43696 + t51054;
  t51056 = t41391*t51055;
  t51973 = -1.*t41375*t51712;
  t51379 = -1.*t41128*t50350*t41595;
  t51381 = t41145*t50350*t41624;
  t51978 = t41083*t51712;
  t51418 = t41128*t50081*t41595;
  t51425 = -1.*t41145*t50081*t41624;
  t51444 = t41128*t50081*t41700;
  t51450 = t41128*t50350*t43709;
  t51539 = var2[0]*t41128*t50350;
  t51544 = t954*t41145*t50350;
  t51546 = t41124*t41391;
  t51547 = t51544 + t51546;
  t51548 = var2[1]*t51547;
  t51554 = -1.*t41124*t41145*t50350;
  t51555 = t954*t41391;
  t51557 = t51554 + t51555;
  t51558 = var2[2]*t51557;
  t51559 = t41326*t41583;
  t51561 = t44003 + t51559;
  t51562 = t41255*t51561;
  t51567 = t50264*t41583;
  t51577 = -1.*t50081*t41583;
  t51582 = -1.*t41518*t41143;
  t51583 = -1.*t41255*t41583;
  t51585 = t51582 + t44218 + t51583;
  t51586 = t41326*t51585;
  t51590 = t41128*t50081*t44168;
  t52005 = t41335*t51712;
  t51594 = t41128*t50264*t41595;
  t51595 = -1.*t41145*t50264*t41624;
  t52009 = -1.*t41083*t51712;
  t51602 = -1.*t41128*t50081*t41595;
  t51604 = t41145*t50081*t41624;
  t51608 = t41128*t50264*t45094;
  t52043 = t15737*t28185;
  t52044 = -1.*t14508*t41014;
  t52045 = t52043 + t52044;
  t52057 = t41049*t3716*t52045;
  t52058 = -1.*t4682*t52045*t41069;
  t52059 = t52057 + t52058;
  t52092 = t3716*t4682*t52045;
  t52096 = t41049*t52045*t41069;
  t52097 = t52092 + t52096;
  t52103 = t41128*t41043;
  t52107 = -1.*t41145*t52059;
  t52117 = t52103 + t52107;
  t52126 = -0.28121*t28185;
  t52127 = -1.*t41506*t28185;
  t52128 = 0.27*t14508*t41014;
  t52129 = t52126 + t52127 + t52128;
  t52130 = t3716*t4682*t52129;
  t52131 = t41049*t52129*t41069;
  t52132 = t52130 + t52131;
  t52134 = t41049*t3716*t52129;
  t52135 = -1.*t4682*t52129*t41069;
  t52136 = t52134 + t52135;
  t52133 = -1.*t41335*t52132;
  t52141 = 0.28121*t14508;
  t52142 = t52141 + t41527 + t41528;
  t52144 = t52132*t41375;
  t52151 = t52142*t41145;
  t52152 = t41128*t52136;
  t52154 = t52151 + t52152;
  t52156 = t41128*t52142;
  t52157 = -1.*t41145*t52136;
  t52158 = t52156 + t52157;
  t52189 = t41518*t41043;
  t52224 = t41143*t52142;
  t52299 = Power(t41049,2);
  t52304 = Power(t4682,2);
  t52290 = -1.*t52142*t41381;
  t52331 = t52132*t41083;
  t52333 = t52097*t41606;
  t52056 = t41043*t41145;
  t52062 = t41128*t52059;
  t52076 = t52056 + t52062;
  t52339 = -1.*t52132*t41375;
  t41292 = t41124*t41083;
  t41301 = -1.*t954*t41257;
  t41304 = t41292 + t41301;
  t52383 = t41335*t52132;
  t52428 = -1.*t52132*t41083;
  t52431 = -1.*t52097*t41606;
  t52046 = -0.15121*t52045;
  t52047 = -0.15121*t41143;
  t52048 = t52046 + t52047;
  t52050 = var2[15]*t52048;
  t52051 = -1.*t4682*t41540;
  t52052 = t41049*t41581;
  t52053 = t52051 + t52052;
  t41417 = t41124*t41375;
  t41419 = -1.*t954*t41407;
  t41433 = t41417 + t41419;
  t52469 = 0.27*t15737*t28185;
  t52472 = t52469 + t41512;
  t52473 = t3716*t4682*t52472;
  t52474 = t41049*t52472*t41069;
  t52475 = t52473 + t52474;
  t52477 = t41049*t3716*t52472;
  t52478 = -1.*t4682*t52472*t41069;
  t52479 = t52477 + t52478;
  t52483 = t3716*t4682*t41381;
  t52484 = t41049*t41381*t41069;
  t52485 = t52483 + t52484;
  t52476 = -1.*t41335*t52475;
  t52490 = -0.27*t14508*t15737;
  t52491 = -0.27*t28185*t41014;
  t52492 = t52490 + t52491;
  t52497 = t41049*t3716*t41381;
  t52498 = -1.*t4682*t41381*t41069;
  t52499 = t52497 + t52498;
  t52494 = t52475*t41375;
  t52496 = t52485*t41606;
  t52506 = t52492*t41145;
  t52507 = t41128*t52479;
  t52508 = t52506 + t52507;
  t52510 = t41128*t52492;
  t52511 = -1.*t41145*t52479;
  t52513 = t52510 + t52511;
  t52517 = t52045*t41145;
  t52518 = t41128*t52499;
  t52519 = t52517 + t52518;
  t52186 = t41043*t41529;
  t52187 = t51053 + t52186;
  t52283 = -1.*t41143*t41529;
  t52284 = t52283 + t51040;
  t52310 = -1.*t41049*t41143*t41540;
  t52311 = -1.*t4682*t41143*t41581;
  t52312 = t51040 + t52310 + t52311;
  t52538 = t41143*t52492;
  t52323 = t41049*t41043*t41540;
  t52326 = t4682*t41043*t41581;
  t52327 = t51053 + t52323 + t52326;
  t52542 = -1.*t52045*t41518;
  t52544 = -1.*t52492*t41381;
  t52569 = t52475*t41083;
  t52574 = -1.*t52475*t41375;
  t52576 = -1.*t52485*t41606;
  t52525 = t41128*t52045;
  t52526 = -1.*t41145*t52499;
  t52527 = t52525 + t52526;
  t52369 = t4682*t41540;
  t52372 = -1.*t41049*t41581;
  t52373 = t52369 + t52372;
  t52616 = t41335*t52475;
  t52622 = -1.*t52475*t41083;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t41124*t41257 - 1.*t41083*t954)*var2[1] + t41304*var2[2];
  p_output1[10]=(t41124*t41145*t41326 - 1.*t41335*t954)*var2[1] + (t41124*t41335 + t41145*t41326*t954)*var2[2];
  p_output1[11]=(-1.*t41124*t41407 - 1.*t41375*t954)*var2[1] + t41433*var2[2];
  p_output1[12]=t41257*var2[0] - 1.*t41470*t954*var2[1] + t41124*t41470*var2[2] + (t41495*(t41145*t41326*t41589 + t41145*t41326*t41595) + t41407*t41626 + t41128*t41326*(t41407*t41589 + t41407*t41595 + t41495*t41624 + t41624*t41633) - 1.*t41145*t41326*t41641)*var2[3];
  p_output1[13]=-1.*t41145*t41326*var2[0] + t41128*t41326*t954*var2[1] - 1.*t41124*t41128*t41326*var2[2] + ((-1.*t41407*t41589 - 1.*t41407*t41595 - 1.*t41495*t41624 - 1.*t41624*t41633)*t41654 + t41495*(t41257*t41589 + t41257*t41595 + t41470*t41624 + t41624*t41654) + t41257*t41700 + t41407*t43709)*var2[3];
  p_output1[14]=t41407*var2[0] - 1.*t41633*t954*var2[1] + t41124*t41633*var2[2] + ((-1.*t41145*t41326*t41589 - 1.*t41145*t41326*t41595)*t41654 + t41128*t41326*(-1.*t41257*t41589 - 1.*t41257*t41595 - 1.*t41470*t41624 - 1.*t41624*t41654) + t41257*t44168 - 1.*t41145*t41326*t45094)*var2[3];
  p_output1[15]=t50152 + t50206 + t50218 + (t50388 + t41495*(t50256 + t50272 - 1.*t41326*t50240*t50393 - 1.*t41326*t50240*t50403 + t50956 + t50959) + t41128*t41326*(-1.*t41145*t41407*t50240 + t41128*t41495*t50240 + t50295 + t50359 + t50975 + t50980) + t51017)*var2[3] + (t50229 + t41375*(-1.*t41326*t50240 + t50256 + t50269 + t50272) + t41335*(t41391*t50240 + t50295 + t50357 + t50359) + t50380)*var2[4];
  p_output1[16]=t51023 + t51028 + t51033 + (t41654*(t41145*t41407*t50240 - 1.*t41128*t41495*t50240 + t51035 + t51037 + t51379 + t51381) + t41495*(-1.*t41145*t41257*t50240 + t41128*t41654*t50240 + t51046 + t51048 + t51418 + t51425) + t51444 + t51450)*var2[3] + (t41083*(-1.*t41391*t50240 + t51035 + t51036 + t51037) + t51044 + t41375*(t41255*t50240 + t51046 + t51047 + t51048) + t51056)*var2[4];
  p_output1[17]=t51539 + t51548 + t51558 + (t51590 + t41654*(t41326*t50240*t50393 + t41326*t50240*t50403 + t51566 + t51569 + t51594 + t51595) + t41128*t41326*(t41145*t41257*t50240 - 1.*t41128*t41654*t50240 + t51575 + t51578 + t51602 + t51604) + t51608)*var2[3] + (t51562 + t41083*(t41326*t50240 + t51566 + t51567 + t51569) + t41335*(-1.*t41255*t50240 + t51575 + t51577 + t51578) + t51586)*var2[4];
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
  p_output1[45]=t50152 + t50206 + t50218 + (t50388 + t51017 + t41495*(t50256 + t50956 + t50959 - 1.*t41326*t50393*t51679 - 1.*t41326*t50403*t51679 + t51718) + t41128*t41326*(t50295 + t50975 + t50980 - 1.*t41145*t41407*t51679 + t41128*t41495*t51679 + t51802))*var2[3] + (t50229 + t50380 + t41375*(t50256 + t50269 - 1.*t41326*t51679 + t51718) + t41335*(t50295 + t50357 + t41391*t51679 + t51802))*var2[4] + t41381*(-1.*t41049*t41540 - 1.*t41581*t4682 + t41049*t51618 - 1.*t4682*t51623)*var2[5];
  p_output1[46]=t51023 + t51028 + t51033 + (t51444 + t51450 + t41654*(t51035 + t51379 + t51381 + t41145*t41407*t51679 - 1.*t41128*t41495*t51679 + t51973) + t41495*(t51046 + t51418 + t51425 - 1.*t41145*t41257*t51679 + t41128*t41654*t51679 + t51978))*var2[3] + (t51044 + t51056 + t41083*(t51035 + t51036 - 1.*t41391*t51679 + t51973) + t41375*(t51046 + t51047 + t41255*t51679 + t51978))*var2[4] + (t41381*(t41043*t41049*t41581 - 1.*t41043*t41540*t4682 + t41043*t4682*t51618 + t41043*t41049*t51623) + t41143*(-1.*t41049*t41143*t41581 + t41143*t41540*t4682 - 1.*t41143*t4682*t51618 - 1.*t41049*t41143*t51623))*var2[5];
  p_output1[47]=t51539 + t51548 + t51558 + (t51590 + t51608 + t41654*(t51566 + t51594 + t51595 + t41326*t50393*t51679 + t41326*t50403*t51679 + t52005) + t41128*t41326*(t51575 + t51602 + t51604 + t41145*t41257*t51679 - 1.*t41128*t41654*t51679 + t52009))*var2[3] + (t51562 + t51586 + t41083*(t51566 + t51567 + t41326*t51679 + t52005) + t41335*(t51575 + t51577 - 1.*t41255*t51679 + t52009))*var2[4] + t41143*(t41049*t41540 + t41581*t4682 - 1.*t41049*t51618 + t4682*t51623)*var2[5];
  p_output1[48]=t52050 + t52076*var2[0] + (t41124*t52097 - 1.*t52117*t954)*var2[1] + (t41124*t52117 + t52097*t954)*var2[2] + (t41626*t41654 + t41495*(t52133 - 1.*t41128*t41326*t52154 + t41145*t41326*t52158) + t41128*t41326*(t43696 + t43697 + t43708 + t52144 + t41495*t52154 + t41407*t52158))*var2[3] + (t41083*t50225 + t41375*(t52133 - 1.*t41326*t52136) + t41335*(t43696 + t51053 + t51054 + t41391*t52136 + t41381*t52142 + t52144))*var2[4] + t41143*t52053*var2[5];
  p_output1[49]=(t41654*t43709 + t41700*t52076 + t41495*(t41595*t52076 + t41624*t52117 + t41654*t52154 + t41257*t52158 + t52331 + t52333) + t41654*(t44218 + t44220 + t44992 - 1.*t41495*t52154 - 1.*t41407*t52158 + t52339))*var2[3] + (t41083*t51055 + t51043*t52097 + t41375*(t41583*t52059 + t41255*t52136 + t52189 + t52224 + t52331 + t52333) + t41083*(t44218 + t51582 + t51583 - 1.*t41391*t52136 + t52290 + t52339))*var2[4] + (t41381*(t41049*t41540*t52045 + t41581*t4682*t52045 + t52189 + t52224 + t41043*t52129*t52299 + t41043*t52129*t52304) + t41143*(-1.*t41043*t41049*t41540 - 1.*t41043*t41581*t4682 + t51582 + t52290 - 1.*t41143*t52129*t52299 - 1.*t41143*t52129*t52304) + t41043*t52312 + t41143*t52327)*var2[5] + (t41143*t52187 + t41381*(t41529*t52045 + t41043*t52129 + t52189 + t52224) + t41043*t52284 + t41143*(-1.*t41043*t41529 + t51582 - 1.*t41143*t52129 + t52290))*var2[15];
  p_output1[50]=t41654*var2[0] + t41304*var2[1] + (t41124*t41257 + t41083*t954)*var2[2] + (t44168*t52076 + t41654*(t41128*t41326*t52154 - 1.*t41145*t41326*t52158 + t52383) + t41128*t41326*(-1.*t41595*t52076 - 1.*t41624*t52117 - 1.*t41654*t52154 - 1.*t41257*t52158 + t52428 + t52431))*var2[3] + (t51561*t52097 + t41083*(t41326*t52136 + t52383) + t41335*(-1.*t41043*t41518 - 1.*t41583*t52059 - 1.*t41255*t52136 - 1.*t41143*t52142 + t52428 + t52431))*var2[4] + t41043*t52373*var2[5];
  p_output1[51]=t52050 + t41495*var2[0] + t41433*var2[1] + (t41124*t41407 + t41375*t954)*var2[2] + (t41495*(t52476 - 1.*t41128*t41326*t52508 + t41145*t41326*t52513) + t41626*t52519 + t41128*t41326*(t52494 + t52496 + t41495*t52508 + t41407*t52513 + t41595*t52519 + t41624*t52527))*var2[3] + (t41375*(t52476 - 1.*t41326*t52479) + t50225*t52485 + t41335*(t41518*t52045 + t41391*t52479 + t41381*t52492 + t52494 + t52496 + t41583*t52499))*var2[4] + t52045*t52053*var2[5] + (0.28121*t15737 - 0.27*Power(t15737,2) + t15737*t41506)*var2[16];
  p_output1[52]=(t41495*t41700 + t43709*t52519 + t41495*(t41638 + t41639 + t41640 + t41654*t52508 + t41257*t52513 + t52569) + t41654*(-1.*t41495*t52508 - 1.*t41407*t52513 - 1.*t41595*t52519 - 1.*t41624*t52527 + t52574 + t52576))*var2[3] + (t41375*t51043 + t51055*t52485 + t41375*(t41638 + t50376 + t50378 + t41255*t52479 + t52538 + t52569) + t41083*(-1.*t41391*t52479 - 1.*t41583*t52499 + t52542 + t52544 + t52574 + t52576))*var2[4] + (t41381*t52312 + t52045*t52327 + t41381*(t41049*t41143*t41540 + t41143*t41581*t4682 + t50376 + t41043*t52299*t52472 + t41043*t52304*t52472 + t52538) + t41143*(-1.*t41049*t41381*t41540 - 1.*t41381*t41581*t4682 - 1.*t41143*t52299*t52472 - 1.*t41143*t52304*t52472 + t52542 + t52544))*var2[5] + (t52045*t52187 + t41381*t52284 + t41381*(t41143*t41529 + t50376 + t41043*t52472 + t52538) + t41143*(-1.*t41381*t41529 - 1.*t41143*t52472 + t52542 + t52544))*var2[15];
  p_output1[53]=t52519*var2[0] + (t41124*t52485 - 1.*t52527*t954)*var2[1] + (t41124*t52527 + t52485*t954)*var2[2] + (t41495*t44168 + t41654*(t41128*t41326*t52508 - 1.*t41145*t41326*t52513 + t52616) + t41128*t41326*(t41679 + t41695 + t41699 - 1.*t41654*t52508 - 1.*t41257*t52513 + t52622))*var2[3] + (t41375*t51561 + t41083*(t41326*t52479 + t52616) + t41335*(t41679 + t51040 + t51042 - 1.*t41255*t52479 - 1.*t41143*t52492 + t52622))*var2[4] + t41381*t52373*var2[5] + (-0.28121*t41014 + 0.27*t15737*t41014 - 1.*t41014*t41506)*var2[16];
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
