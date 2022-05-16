/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:50 GMT+02:00
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
  double t3709;
  double t3631;
  double t3632;
  double t3796;
  double t3648;
  double t3804;
  double t3805;
  double t310;
  double t3862;
  double t3967;
  double t3979;
  double t608;
  double t4011;
  double t4100;
  double t3830;
  double t4073;
  double t4085;
  double t154;
  double t4106;
  double t4110;
  double t4201;
  double t4338;
  double t4460;
  double t4466;
  double t4471;
  double t4473;
  double t4485;
  double t4773;
  double t4782;
  double t4871;
  double t5236;
  double t5252;
  double t5271;
  double t5290;
  double t5318;
  double t5328;
  double t5335;
  double t5336;
  double t5337;
  double t5234;
  double t5278;
  double t5348;
  double t5349;
  double t5154;
  double t5164;
  double t5180;
  double t5212;
  double t5350;
  double t5355;
  double t5365;
  double t5387;
  double t5388;
  double t5398;
  double t5399;
  double t5418;
  double t5425;
  double t5440;
  double t5441;
  double t5442;
  double t5444;
  double t5445;
  double t5446;
  double t5447;
  double t5448;
  double t5529;
  double t5533;
  double t5534;
  double t5050;
  double t5051;
  double t5064;
  double t5065;
  double t5080;
  double t5081;
  double t5516;
  double t5517;
  double t5528;
  double t5465;
  double t5491;
  double t5492;
  double t4981;
  double t5112;
  double t5127;
  double t5362;
  double t5449;
  double t5450;
  double t5560;
  double t5573;
  double t5574;
  double t5583;
  double t5594;
  double t5602;
  double t5792;
  double t5794;
  double t5800;
  double t5622;
  double t5699;
  double t5706;
  double t5722;
  double t5748;
  double t5882;
  double t5892;
  double t5909;
  double t5915;
  double t5978;
  double t6027;
  double t6028;
  double t5623;
  double t5634;
  double t5647;
  double t8353;
  double t9002;
  double t5753;
  double t5754;
  double t5767;
  double t5876;
  double t5947;
  double t14529;
  double t14600;
  double t14602;
  double t14948;
  double t14949;
  double t17938;
  double t17993;
  double t17994;
  double t5877;
  double t5880;
  double t14674;
  double t15077;
  double t17187;
  double t17200;
  double t5970;
  double t5971;
  double t18486;
  double t18554;
  double t19933;
  double t21978;
  double t21988;
  double t22331;
  double t22566;
  double t22572;
  double t22630;
  double t22681;
  double t22774;
  double t22814;
  double t22818;
  double t22836;
  double t23143;
  double t23198;
  double t23257;
  double t14268;
  double t14470;
  double t24046;
  double t24050;
  double t24064;
  double t24757;
  double t24762;
  double t24375;
  double t24527;
  double t24528;
  double t24531;
  double t24292;
  double t24723;
  double t24768;
  double t26225;
  double t26226;
  double t26244;
  double t25825;
  double t25826;
  double t25876;
  double t26030;
  double t26113;
  double t26143;
  double t27462;
  double t27613;
  double t27856;
  double t26254;
  double t27391;
  double t27876;
  double t27903;
  double t27935;
  double t29091;
  double t29503;
  double t29505;
  double t29507;
  double t29646;
  double t29648;
  double t29651;
  double t30750;
  double t30816;
  double t30830;
  double t24806;
  double t31446;
  double t31497;
  double t31552;
  double t31920;
  double t31935;
  double t31953;
  double t32151;
  double t32174;
  double t32192;
  double t32298;
  double t32333;
  double t32335;
  double t31328;
  double t31357;
  double t31242;
  double t31637;
  double t33171;
  double t33374;
  double t33481;
  double t32783;
  double t32784;
  double t32988;
  double t33500;
  double t33733;
  double t33761;
  double t33950;
  double t33951;
  double t33952;
  double t33972;
  double t33976;
  double t33986;
  double t34062;
  double t34063;
  double t34075;
  double t4761;
  double t4762;
  double t4769;
  double t15211;
  double t15257;
  double t16958;
  double t5536;
  double t5539;
  double t5543;
  double t34164;
  double t34169;
  double t5660;
  double t5661;
  double t5663;
  double t33695;
  double t34616;
  double t34757;
  double t34760;
  double t34593;
  double t34821;
  double t34833;
  double t34620;
  double t34621;
  double t34650;
  double t34813;
  double t31256;
  double t31421;
  double t23336;
  double t23419;
  double t23428;
  double t36614;
  double t36650;
  double t34797;
  double t36862;
  double t36865;
  double t34814;
  double t34816;
  double t36942;
  double t36956;
  double t17431;
  double t17651;
  double t17653;
  double t36962;
  double t36964;
  double t23629;
  double t23661;
  double t23676;
  double t36755;
  double t36851;
  double t36852;
  double t36913;
  double t37321;
  double t37322;
  double t37368;
  double t37366;
  double t37318;
  double t37323;
  double t38759;
  double t38848;
  double t38878;
  double t29693;
  double t29755;
  double t29775;
  double t37375;
  double t37376;
  double t38446;
  double t38452;
  double t43718;
  double t43747;
  double t44524;
  double t45126;
  double t44526;
  double t44777;
  double t43641;
  double t44247;
  double t45885;
  double t46098;
  double t31874;
  double t32006;
  double t32118;
  double t46375;
  double t46398;
  double t34460;
  double t34462;
  double t34482;
  double t25713;
  double t25762;
  double t25777;
  double t46560;
  double t46561;
  double t55885;
  double t46368;
  double t56352;
  double t55891;
  double t55893;
  double t55894;
  double t56537;
  double t56539;
  double t56145;
  double t56332;
  double t43687;
  double t56335;
  double t56336;
  double t56883;
  double t56892;
  double t19305;
  double t56933;
  double t56937;
  double t56573;
  double t57139;
  double t57149;
  double t57160;
  double t57170;
  double t56858;
  double t56860;
  double t57531;
  double t57937;
  double t57980;
  double t34415;
  double t34417;
  double t34201;
  double t34246;
  double t34260;
  double t58309;
  double t58315;
  double t59285;
  double t59431;
  double t59601;
  double t25072;
  double t25649;
  double t25650;
  double t57053;
  t3709 = Cos(var1[13]);
  t3631 = Cos(var1[14]);
  t3632 = Sin(var1[13]);
  t3796 = Sin(var1[14]);
  t3648 = t3631*t3632;
  t3804 = -1.*t3709*t3796;
  t3805 = t3648 + t3804;
  t310 = Cos(var1[5]);
  t3862 = t3709*t3631;
  t3967 = t3632*t3796;
  t3979 = t3862 + t3967;
  t608 = Sin(var1[12]);
  t4011 = Sin(var1[5]);
  t4100 = Cos(var1[3]);
  t3830 = -1.*t310*t608*t3805;
  t4073 = t3979*t4011;
  t4085 = t3830 + t4073;
  t154 = Sin(var1[3]);
  t4106 = Cos(var1[12]);
  t4110 = Cos(var1[4]);
  t4201 = t4106*t4110*t3805;
  t4338 = Sin(var1[4]);
  t4460 = t310*t3979;
  t4466 = t608*t3805*t4011;
  t4471 = t4460 + t4466;
  t4473 = -1.*t4338*t4471;
  t4485 = t4201 + t4473;
  t4773 = -1.*t4106*t3805*t4338;
  t4782 = -1.*t4110*t4471;
  t4871 = t4773 + t4782;
  t5236 = -0.0641*t3631;
  t5252 = -0.28*t3796;
  t5271 = t5236 + t5252;
  t5290 = -1.*t3631;
  t5318 = 1. + t5290;
  t5328 = 0.075*t5318;
  t5335 = 0.355*t3631;
  t5336 = -0.0641*t3796;
  t5337 = t5328 + t5335 + t5336;
  t5234 = -0.325*t3632;
  t5278 = t3709*t5271;
  t5348 = t3632*t5337;
  t5349 = t5234 + t5278 + t5348;
  t5154 = t4110*t608;
  t5164 = t4106*t4338*t4011;
  t5180 = t5154 + t5164;
  t5212 = -0.068*t608;
  t5350 = t4106*t5349;
  t5355 = t5212 + t5350;
  t5365 = -1.*t3709;
  t5387 = 1. + t5365;
  t5388 = 0.325*t5387;
  t5398 = -1.*t3632*t5271;
  t5399 = t3709*t5337;
  t5418 = t5388 + t5398 + t5399;
  t5425 = t310*t5418;
  t5440 = -1.*t4106;
  t5441 = 1. + t5440;
  t5442 = -0.1575*t5441;
  t5444 = -0.2255*t4106;
  t5445 = -1.*t608*t5349;
  t5446 = t5442 + t5444 + t5445;
  t5447 = -1.*t5446*t4011;
  t5448 = t5425 + t5447;
  t5529 = t4110*t5355;
  t5533 = -1.*t4338*t5448;
  t5534 = t5529 + t5533;
  t5050 = -1.*t3631*t3632;
  t5051 = t3709*t3796;
  t5064 = t5050 + t5051;
  t5065 = t310*t5064;
  t5080 = t608*t3979*t4011;
  t5081 = t5065 + t5080;
  t5516 = t608*t4338;
  t5517 = -1.*t4106*t4110*t4011;
  t5528 = t5516 + t5517;
  t5465 = t5355*t4338;
  t5491 = t4110*t5448;
  t5492 = t5465 + t5491;
  t4981 = t4106*t3979*t4338;
  t5112 = t4110*t5081;
  t5127 = t4981 + t5112;
  t5362 = -1.*t5355*t4338;
  t5449 = -1.*t4110*t5448;
  t5450 = t5362 + t5449;
  t5560 = t4106*t4110*t3979;
  t5573 = -1.*t4338*t5081;
  t5574 = t5560 + t5573;
  t5583 = t310*t5446;
  t5594 = t5418*t4011;
  t5602 = t5583 + t5594;
  t5792 = t310*t608*t3805;
  t5794 = -1.*t3979*t4011;
  t5800 = t5792 + t5794;
  t5622 = -1.*t4106*t310*t5602;
  t5699 = -1.*t310*t608*t3979;
  t5706 = t5064*t4011;
  t5722 = t5699 + t5706;
  t5748 = t5602*t5722;
  t5882 = -1.*t310*t5446;
  t5892 = -1.*t5418*t4011;
  t5909 = t5882 + t5892;
  t5915 = t4106*t4011*t5602;
  t5978 = t310*t608*t3979;
  t6027 = -1.*t5064*t4011;
  t6028 = t5978 + t6027;
  t5623 = -1.*t5528*t5492;
  t5634 = -1.*t5180*t5534;
  t5647 = t5622 + t5623 + t5634;
  t8353 = t5448*t5722;
  t9002 = t5602*t5081;
  t5753 = t5492*t5127;
  t5754 = t5534*t5574;
  t5767 = t5748 + t5753 + t5754;
  t5876 = -1.*t608*t5355;
  t5947 = t4106*t5355*t3979;
  t14529 = 0.068*t608;
  t14600 = -1.*t4106*t5349;
  t14602 = t14529 + t14600;
  t14948 = -0.068*t4106;
  t14949 = t14948 + t5445;
  t17938 = -1.*t4110*t608*t3805;
  t17993 = -1.*t4106*t3805*t4338*t4011;
  t17994 = t17938 + t17993;
  t5877 = t4106*t4011*t5448;
  t5880 = t5876 + t5877 + t5622;
  t14674 = -1.*t4106*t5355;
  t15077 = -1.*t608*t14949;
  t17187 = -1.*t608*t5355*t3979;
  t17200 = t4106*t14949*t3979;
  t5970 = t5448*t5081;
  t5971 = t5947 + t5748 + t5970;
  t18486 = Power(t310,2);
  t18554 = -1.*t4106*t18486*t14602;
  t19933 = t310*t608*t5602;
  t21978 = -1.*t4106*t310*t3979*t5602;
  t21988 = t310*t14602*t5722;
  t22331 = -1.*t608*t3979*t4338;
  t22566 = t4106*t4110*t3979*t4011;
  t22572 = t22331 + t22566;
  t22630 = t14949*t4338;
  t22681 = -1.*t4110*t14602*t4011;
  t22774 = t22630 + t22681;
  t22814 = t4110*t14949;
  t22818 = t14602*t4338*t4011;
  t22836 = t22814 + t22818;
  t23143 = t4106*t4338;
  t23198 = t4110*t608*t4011;
  t23257 = t23143 + t23198;
  t14268 = -1.*t4106*t5446;
  t14470 = t5876 + t14268;
  t24046 = -1.*t3709*t3631;
  t24050 = -1.*t3632*t3796;
  t24064 = t24046 + t24050;
  t24757 = -0.325*t3709;
  t24762 = t24757 + t5398 + t5399;
  t24375 = 0.325*t3632;
  t24527 = -1.*t3709*t5271;
  t24528 = -1.*t3632*t5337;
  t24531 = t24375 + t24527 + t24528;
  t24292 = t4106*t5355*t5064;
  t24723 = Power(t4106,2);
  t24768 = t24723*t24762*t3979;
  t26225 = -1.*t310*t608*t24762;
  t26226 = t24531*t4011;
  t26244 = t26225 + t26226;
  t25825 = -1.*t310*t608*t5064;
  t25826 = t24064*t4011;
  t25876 = t25825 + t25826;
  t26030 = t310*t24531;
  t26113 = t608*t24762*t4011;
  t26143 = t26030 + t26113;
  t27462 = t310*t24064;
  t27613 = t608*t5064*t4011;
  t27856 = t27462 + t27613;
  t26254 = -1.*t4106*t310*t26244;
  t27391 = t26244*t5722;
  t27876 = t5602*t25876;
  t27903 = t4106*t5064*t4338;
  t27935 = t4110*t27856;
  t29091 = t27903 + t27935;
  t29503 = t4106*t24762*t4338;
  t29505 = t4110*t26143;
  t29507 = t29503 + t29505;
  t29646 = t4106*t4110*t24762;
  t29648 = -1.*t4338*t26143;
  t29651 = t29646 + t29648;
  t30750 = -0.28*t3631;
  t30816 = 0.0641*t3796;
  t30830 = t30750 + t30816;
  t24806 = Power(t608,2);
  t31446 = t3632*t5271;
  t31497 = t3709*t30830;
  t31552 = t31446 + t31497;
  t31920 = t310*t3805;
  t31935 = t608*t24064*t4011;
  t31953 = t31920 + t31935;
  t32151 = -1.*t310*t608*t24064;
  t32174 = t3805*t4011;
  t32192 = t32151 + t32174;
  t32298 = t4106*t4110*t24064;
  t32333 = -1.*t4338*t31953;
  t32335 = t32298 + t32333;
  t31328 = -1.*t3632*t30830;
  t31357 = t5278 + t31328;
  t31242 = t4106*t5355*t3805;
  t31637 = t24723*t31552*t3979;
  t33171 = -1.*t310*t608*t31552;
  t33374 = t31357*t4011;
  t33481 = t33171 + t33374;
  t32783 = t310*t31357;
  t32784 = t608*t31552*t4011;
  t32988 = t32783 + t32784;
  t33500 = -1.*t4106*t310*t33481;
  t33733 = t33481*t5722;
  t33761 = t5602*t4085;
  t33950 = t4106*t3805*t4338;
  t33951 = t4110*t4471;
  t33952 = t33950 + t33951;
  t33972 = t4106*t31552*t4338;
  t33976 = t4110*t32988;
  t33986 = t33972 + t33976;
  t34062 = t4106*t4110*t31552;
  t34063 = -1.*t4338*t32988;
  t34075 = t34062 + t34063;
  t4761 = t4100*t4085;
  t4762 = -1.*t154*t4485;
  t4769 = t4761 + t4762;
  t15211 = t5418*t5064;
  t15257 = -1.*t608*t5446*t3979;
  t16958 = t15211 + t5947 + t15257;
  t5536 = -1.*t608*t4338;
  t5539 = t4106*t4110*t4011;
  t5543 = t5536 + t5539;
  t34164 = t5492*t33952;
  t34169 = t5534*t4485;
  t5660 = -1.*t4106*t3979*t4338;
  t5661 = -1.*t4110*t5081;
  t5663 = t5660 + t5661;
  t33695 = t5448*t4471;
  t34616 = -1.*t5602*t5722;
  t34757 = t5602*t4471;
  t34760 = t5448*t4085;
  t34593 = t33761 + t34164 + t34169;
  t34821 = -1.*t5448*t5722;
  t34833 = -1.*t5602*t5081;
  t34620 = -1.*t5492*t5127;
  t34621 = -1.*t5534*t5574;
  t34650 = t34616 + t34620 + t34621;
  t34813 = -1.*t4106*t5355*t3979;
  t31256 = -1.*t608*t5446*t3805;
  t31421 = t5418*t3979;
  t23336 = t4106*t4110;
  t23419 = -1.*t608*t4338*t4011;
  t23428 = t23336 + t23419;
  t36614 = -1.*t608*t5355*t3805;
  t36650 = t4106*t14949*t3805;
  t34797 = t31242 + t33695 + t33761;
  t36862 = t608*t5355*t3979;
  t36865 = -1.*t4106*t14949*t3979;
  t34814 = -1.*t5448*t5081;
  t34816 = t34813 + t34616 + t34814;
  t36942 = -1.*t4106*t310*t3805*t5602;
  t36956 = t310*t14602*t4085;
  t17431 = -1.*t608*t3805*t4338;
  t17651 = t4106*t4110*t3805*t4011;
  t17653 = t17431 + t17651;
  t36962 = t4106*t310*t3979*t5602;
  t36964 = -1.*t310*t14602*t5722;
  t23629 = -1.*t4110*t608*t3979;
  t23661 = -1.*t4106*t3979*t4338*t4011;
  t23676 = t23629 + t23661;
  t36755 = -1.*t5418*t5064;
  t36851 = t608*t5446*t3979;
  t36852 = t36755 + t34813 + t36851;
  t36913 = t31242 + t31256 + t31421;
  t37321 = -1.*t24531*t5064;
  t37322 = -1.*t5418*t24064;
  t37368 = t24531*t3979;
  t37366 = t24723*t24762*t3805;
  t37318 = -1.*t4106*t5355*t5064;
  t37323 = -1.*t24723*t24762*t3979;
  t38759 = t26244*t4085;
  t38848 = -1.*t26244*t5722;
  t38878 = -1.*t5602*t25876;
  t29693 = t4106*t4110*t5064;
  t29755 = -1.*t4338*t27856;
  t29775 = t29693 + t29755;
  t37375 = t5349*t3805;
  t37376 = t37375 + t31421;
  t38446 = -1.*t5349*t3979;
  t38452 = t36755 + t38446;
  t43718 = -1.*t31357*t5064;
  t43747 = -1.*t5418*t3979;
  t44524 = t5418*t3805;
  t45126 = t31357*t3979;
  t44526 = t24723*t31552*t3805;
  t44777 = t4106*t5355*t24064;
  t43641 = -1.*t4106*t5355*t3805;
  t44247 = -1.*t24723*t31552*t3979;
  t45885 = t5602*t32192;
  t46098 = t33481*t4085;
  t31874 = t4106*t24064*t4338;
  t32006 = t4110*t31953;
  t32118 = t31874 + t32006;
  t46375 = -1.*t33481*t5722;
  t46398 = -1.*t5602*t4085;
  t34460 = t4106*t4100*t310;
  t34462 = -1.*t154*t5180;
  t34482 = t34460 + t34462;
  t25713 = t4100*t5722;
  t25762 = -1.*t154*t5574;
  t25777 = t25713 + t25762;
  t46560 = -1.*t5492*t33952;
  t46561 = -1.*t5534*t4485;
  t55885 = t4106*t310*t5602;
  t46368 = -1.*t5448*t4471;
  t56352 = -1.*t4106*t4011*t5602;
  t55891 = t5528*t5492;
  t55893 = t5180*t5534;
  t55894 = t55885 + t55891 + t55893;
  t56537 = -1.*t5602*t4471;
  t56539 = -1.*t5448*t4085;
  t56145 = t46398 + t46560 + t46561;
  t56332 = t608*t5355;
  t43687 = t608*t5446*t3805;
  t56335 = -1.*t4106*t4011*t5448;
  t56336 = t56332 + t56335 + t55885;
  t56883 = t4106*t5355;
  t56892 = t608*t14949;
  t19305 = Power(t4011,2);
  t56933 = t608*t5355*t3805;
  t56937 = -1.*t4106*t14949*t3805;
  t56573 = t43641 + t46368 + t46398;
  t57139 = t4106*t18486*t14602;
  t57149 = -1.*t310*t608*t5602;
  t57160 = t4106*t310*t3805*t5602;
  t57170 = -1.*t310*t14602*t4085;
  t56858 = t4106*t5446;
  t56860 = t56332 + t56858;
  t57531 = -1.*t24723*t24762*t3805;
  t57937 = t4106*t310*t26244;
  t57980 = -1.*t26244*t4085;
  t34415 = 0.325*t3796;
  t34417 = -1.*t5337*t3796;
  t34201 = t154*t4085;
  t34246 = t4100*t4485;
  t34260 = t34201 + t34246;
  t58309 = -1.*t24723*t31552*t3805;
  t58315 = -1.*t4106*t5355*t24064;
  t59285 = t4106*t310*t33481;
  t59431 = -1.*t5602*t32192;
  t59601 = -1.*t33481*t4085;
  t25072 = t154*t5722;
  t25649 = t4100*t5574;
  t25650 = t25072 + t25649;
  t57053 = t43641 + t43687 + t43747;
  p_output1[0]=(-1.*t154*t4085 - 1.*t4100*t4485)*var2[1] + t4769*var2[2];
  p_output1[1]=t4485*var2[0] - 1.*t154*t4871*var2[1] + t4100*t4871*var2[2] + (t5127*(-1.*t5180*t5450 - 1.*t5180*t5492 - 1.*t5528*t5534 - 1.*t5534*t5543) + t5574*t5647 + t5528*(t5127*t5534 + t5450*t5574 + t5492*t5574 + t5534*t5663) + t5180*t5767)*var2[3];
  p_output1[2]=t4110*t5800*var2[0] + (t4100*t4471 + t154*t4338*t5800)*var2[1] + (t154*t4471 - 1.*t4100*t4338*t5800)*var2[2] + (-1.*t310*t4106*t4110*t5767 + t5127*(-1.*t310*t4106*t5448 + t310*t4106*t4110*t5492 - 1.*t310*t4106*t4338*t5534 + t4338*t5180*t5909 - 1.*t4110*t5528*t5909 + t5915) + t4110*t5647*t6028 + t5528*(t4110*t5127*t5909 - 1.*t4338*t5574*t5909 + t4110*t5492*t6028 - 1.*t4338*t5534*t6028 + t8353 + t9002))*var2[3] + (t5081*t5880 + t5722*(t4011*t4106*t5909 + t5915) - 1.*t4011*t4106*t5971 + t310*t4106*(t5081*t5909 + t5448*t6028 + t8353 + t9002))*var2[4];
  p_output1[3]=t17653*var2[0] + (-1.*t154*t17994 - 1.*t310*t3805*t4100*t4106)*var2[1] + (t17994*t4100 - 1.*t154*t310*t3805*t4106)*var2[2] + (t5127*(t18554 + t19933 - 1.*t22836*t5180 - 1.*t23257*t5492 - 1.*t22774*t5528 - 1.*t23428*t5534) + t5528*(t21978 + t21988 + t22774*t5127 + t22572*t5492 + t23676*t5534 + t22836*t5574) + t22572*t5647 + t23257*t5767)*var2[3] + (t310*t4106*(t17187 + t17200 + t21978 + t21988 - 1.*t14602*t4011*t5081 + t3979*t4011*t4106*t5448) - 1.*t310*t3979*t4106*t5880 - 1.*t310*t5971*t608 + t5722*(t14674 + t15077 + t18554 + t19933 - 1.*t14602*t19305*t4106 - 1.*t4011*t5448*t608))*var2[4] + (t16958*t4106 - 1.*t14470*t3979*t608 + t608*(t17187 + t17200 - 1.*t3979*t4106*t5446 - 1.*t14602*t3979*t608) + t3979*t4106*(t14674 + t15077 - 1.*t14602*t4106 + t5446*t608))*var2[5];
  p_output1[4]=t5127*var2[0] + t25777*var2[1] + t25650*var2[2] + (t5127*(t26254 - 1.*t29651*t5180 - 1.*t29507*t5528) + t5528*(t27391 + t27876 + t29507*t5127 + t29091*t5492 + t29775*t5534 + t29651*t5574) + t29091*t5647)*var2[3] + (t310*t4106*(t24292 + t24768 + t27391 + t27876 + t26143*t5081 + t27856*t5448) + t25876*t5880 + t5722*(t26254 + t26143*t4011*t4106 - 1.*t24762*t4106*t608))*var2[4] + (t14470*t4106*t5064 + t608*(t24292 + t24768 + t24762*t24806*t3979 + t24531*t5064 + t24064*t5418 - 1.*t5064*t5446*t608))*var2[5] + (0.2255*t24064 + 0.1575*t3979)*var2[12];
  p_output1[5]=t32118*var2[0] + (-1.*t154*t32335 + t32192*t4100)*var2[1] + (t154*t32192 + t32335*t4100)*var2[2] + (t5127*(t33500 - 1.*t34075*t5180 - 1.*t33986*t5528) + t5528*(t33733 + t33761 + t34164 + t34169 + t33986*t5127 + t34075*t5574) + t33952*t5647)*var2[3] + (t310*t4106*(t31242 + t31637 + t33695 + t33733 + t33761 + t32988*t5081) + t4085*t5880 + t5722*(t33500 + t32988*t4011*t4106 - 1.*t31552*t4106*t608))*var2[4] + (t14470*t3805*t4106 + (t31242 + t31256 + t31421 + t31637 + t24806*t31552*t3979 + t31357*t5064)*t608)*var2[5] + (0.1575*t24064 + 0.2255*t3979)*var2[12] + (0.325*t3631 - 1.*t30830*t3631 - 1.*t3631*t5337)*var2[13];
  p_output1[6]=t33952;
  p_output1[7]=t4769;
  p_output1[8]=t34260;
  p_output1[9]=t5127*t5647 + t5528*t5767;
  p_output1[10]=t5722*t5880 + t310*t4106*t5971;
  p_output1[11]=t14470*t3979*t4106 + t16958*t608;
  p_output1[12]=0.1575*t3805 + 0.2255*t5064;
  p_output1[13]=t34415 + t34417 - 1.*t3631*t5271;
  p_output1[14]=-0.0641;
  p_output1[15]=(-1.*t154*t310*t4106 - 1.*t4100*t5180)*var2[1] + t34482*var2[2];
  p_output1[16]=t5180*var2[0] - 1.*t154*t5543*var2[1] + t4100*t5543*var2[2] + (t34650*t4485 + t5127*(t4485*t5450 + t4485*t5492 + t33952*t5534 + t4871*t5534) + t34593*t5574 + t33952*(-1.*t5127*t5534 - 1.*t5450*t5574 - 1.*t5492*t5574 - 1.*t5534*t5663))*var2[3];
  p_output1[17]=-1.*t310*t4106*t4110*var2[0] + (-1.*t4011*t4100*t4106 - 1.*t154*t310*t4106*t4338)*var2[1] + (-1.*t154*t4011*t4106 + t310*t4100*t4106*t4338)*var2[2] + (t34650*t4110*t5800 + t5127*(t34757 + t34760 + t4110*t5492*t5800 - 1.*t4338*t5534*t5800 + t33952*t4110*t5909 - 1.*t4338*t4485*t5909) + t34593*t4110*t6028 + t33952*(t34821 + t34833 - 1.*t4110*t5127*t5909 + t4338*t5574*t5909 - 1.*t4110*t5492*t6028 + t4338*t5534*t6028))*var2[3] + (t34816*t4471 + t34797*t5081 + t5722*(t34757 + t34760 + t5448*t5800 + t4471*t5909) + t4085*(t34821 + t34833 - 1.*t5081*t5909 - 1.*t5448*t6028))*var2[4];
  p_output1[18]=t23257*var2[0] + (-1.*t154*t23428 - 1.*t310*t4100*t608)*var2[1] + (t23428*t4100 - 1.*t154*t310*t608)*var2[2] + (t22572*t34593 + t17653*t34650 + t5127*(t22774*t33952 + t36942 + t36956 + t22836*t4485 + t17653*t5492 + t17994*t5534) + t33952*(t36962 + t36964 - 1.*t22774*t5127 - 1.*t22572*t5492 - 1.*t23676*t5534 - 1.*t22836*t5574))*var2[3] + (-1.*t310*t34816*t3805*t4106 - 1.*t310*t34797*t3979*t4106 + t4085*(t36862 + t36865 + t36962 + t36964 + t14602*t4011*t5081 - 1.*t3979*t4011*t4106*t5448) + (t36614 + t36650 + t36942 + t36956 - 1.*t14602*t4011*t4471 + t3805*t4011*t4106*t5448)*t5722)*var2[4] + (-1.*t36852*t3805*t608 - 1.*t36913*t3979*t608 + t3979*t4106*(t36614 + t36650 - 1.*t3805*t4106*t5446 - 1.*t14602*t3805*t608) + t3805*t4106*(t36862 + t36865 + t3979*t4106*t5446 + t14602*t3979*t608))*var2[5];
  p_output1[19]=(t29091*t34593 + t34650*t5127 + t33952*(t38848 + t38878 - 1.*t29507*t5127 - 1.*t29091*t5492 - 1.*t29775*t5534 - 1.*t29651*t5574) + t5127*(t29507*t33952 + t38759 + t29651*t4485 + t5748 + t5753 + t5754))*var2[3] + (t25876*t34797 + t4085*(t37318 + t37323 + t38848 + t38878 - 1.*t26143*t5081 - 1.*t27856*t5448) + t34816*t5722 + t5722*(t37366 + t38759 + t26143*t4471 + t5748 + t5947 + t5970))*var2[4] + (t36852*t3979*t4106 + t36913*t4106*t5064 + t3979*t4106*(t15211 + t15257 + t37366 + t37368 + t24762*t24806*t3805 + t5947) + t3805*t4106*(t37318 + t37321 + t37322 + t37323 - 1.*t24762*t24806*t3979 + t5064*t5446*t608))*var2[5] + (t24064*t37376 + t38452*t5064 + t5064*(t15211 + t37368 + t24762*t3805 + t3979*t5349) + t3979*(t37321 + t37322 - 1.*t24762*t3979 - 1.*t5064*t5349))*var2[12];
  p_output1[20]=(t33952*t34593 + t32118*t34650 + t5127*(t33952*t33986 + t34075*t4485 + t45885 + t46098 + t32118*t5492 + t32335*t5534) + t33952*(t46375 + t46398 + t46560 + t46561 - 1.*t33986*t5127 - 1.*t34075*t5574))*var2[3] + (t32192*t34816 + t34797*t4085 + t4085*(t43641 + t44247 + t46368 + t46375 + t46398 - 1.*t32988*t5081) + (t44526 + t32988*t4471 + t44777 + t45885 + t46098 + t31953*t5448)*t5722)*var2[4] + (t24064*t36852*t4106 + t36913*t3805*t4106 + t3805*t4106*(-1.*t24806*t31552*t3979 + t43641 + t43687 + t43718 + t43747 + t44247) + t3979*t4106*(t24806*t31552*t3805 + t44524 + t44526 + t44777 + t45126 - 1.*t24064*t5446*t608))*var2[5] + (t3805*t38452 + t37376*t3979 + t5064*(t31552*t3805 + t44524 + t45126 + t24064*t5349) + t3979*(-1.*t31552*t3979 + t43718 + t43747 - 1.*t3805*t5349))*var2[12];
  p_output1[21]=t5528;
  p_output1[22]=t34482;
  p_output1[23]=t154*t310*t4106 + t4100*t5180;
  p_output1[24]=t33952*t34650 + t34593*t5127;
  p_output1[25]=t34816*t4085 + t34797*t5722;
  p_output1[26]=t36852*t3805*t4106 + t36913*t3979*t4106;
  p_output1[27]=t38452*t3979 + t37376*t5064;
  p_output1[28]=(-1.*t4100*t5574 - 1.*t154*t5722)*var2[1] + t25777*var2[2];
  p_output1[29]=t5574*var2[0] - 1.*t154*t5663*var2[1] + t4100*t5663*var2[2] + (t5528*(-1.*t4485*t5450 - 1.*t4485*t5492 - 1.*t33952*t5534 - 1.*t4871*t5534) + t33952*(t5180*t5450 + t5180*t5492 + t5528*t5534 + t5534*t5543) + t4485*t55894 + t5180*t56145)*var2[3];
  p_output1[30]=t4110*t6028*var2[0] + (t4100*t5081 + t154*t4338*t6028)*var2[1] + (t154*t5081 - 1.*t4100*t4338*t6028)*var2[2] + (-1.*t310*t4106*t4110*t56145 + t4110*t55894*t5800 + t5528*(t56537 + t56539 - 1.*t4110*t5492*t5800 + t4338*t5534*t5800 - 1.*t33952*t4110*t5909 + t4338*t4485*t5909) + t33952*(t310*t4106*t5448 - 1.*t310*t4106*t4110*t5492 + t310*t4106*t4338*t5534 + t56352 - 1.*t4338*t5180*t5909 + t4110*t5528*t5909))*var2[3] + (t4471*t56336 - 1.*t4011*t4106*t56573 + t4085*(t56352 - 1.*t4011*t4106*t5909) + t310*t4106*(t56537 + t56539 - 1.*t5448*t5800 - 1.*t4471*t5909))*var2[4];
  p_output1[31]=t22572*var2[0] + (-1.*t154*t23676 - 1.*t310*t3979*t4100*t4106)*var2[1] + (t23676*t4100 - 1.*t154*t310*t3979*t4106)*var2[2] + (t17653*t55894 + t23257*t56145 + t33952*(t22836*t5180 + t23257*t5492 + t22774*t5528 + t23428*t5534 + t57139 + t57149) + t5528*(-1.*t22774*t33952 - 1.*t22836*t4485 - 1.*t17653*t5492 - 1.*t17994*t5534 + t57160 + t57170))*var2[3] + (-1.*t310*t3805*t4106*t56336 + t310*t4106*(t14602*t4011*t4471 - 1.*t3805*t4011*t4106*t5448 + t56933 + t56937 + t57160 + t57170) - 1.*t310*t56573*t608 + t4085*(t14602*t19305*t4106 + t56883 + t56892 + t57139 + t57149 + t4011*t5448*t608))*var2[4] + (t4106*t57053 - 1.*t3805*t56860*t608 + t608*(t3805*t4106*t5446 + t56933 + t56937 + t14602*t3805*t608) + t3805*t4106*(t14602*t4106 + t56883 + t56892 - 1.*t5446*t608))*var2[5];
  p_output1[32]=t29091*var2[0] + (-1.*t154*t29775 + t25876*t4100)*var2[1] + (t154*t25876 + t29775*t4100)*var2[2] + (t5127*t55894 + t33952*(t29651*t5180 + t29507*t5528 + t57937) + t5528*(-1.*t29507*t33952 + t34616 + t34620 + t34621 - 1.*t29651*t4485 + t57980))*var2[3] + (t56336*t5722 + t310*t4106*(t34616 + t34813 + t34814 - 1.*t26143*t4471 + t57531 + t57980) + t4085*(-1.*t26143*t4011*t4106 + t57937 + t24762*t4106*t608))*var2[4] + (t3979*t4106*t56860 + (t34813 + t36755 + t36851 - 1.*t24762*t24806*t3805 - 1.*t24531*t3979 + t57531)*t608)*var2[5] - 0.068*t5064*var2[12];
  p_output1[33]=t33952*var2[0] + t4769*var2[1] + t34260*var2[2] + (t32118*t55894 + t33952*(t34075*t5180 + t33986*t5528 + t59285) + t5528*(-1.*t33952*t33986 - 1.*t34075*t4485 - 1.*t32118*t5492 - 1.*t32335*t5534 + t59431 + t59601))*var2[3] + (t32192*t56336 + t310*t4106*(-1.*t32988*t4471 - 1.*t31953*t5448 + t58309 + t58315 + t59431 + t59601) + t4085*(-1.*t32988*t4011*t4106 + t59285 + t31552*t4106*t608))*var2[4] + (t24064*t4106*t56860 + t608*(-1.*t24806*t31552*t3805 - 1.*t31357*t3979 - 1.*t3805*t5418 + t58309 + t58315 + t24064*t5446*t608))*var2[5] - 0.068*t3805*var2[12] + (t34415 + t34417 - 1.*t30830*t3796)*var2[13];
  p_output1[34]=t5127;
  p_output1[35]=t25777;
  p_output1[36]=t25650;
  p_output1[37]=t33952*t55894 + t5528*t56145;
  p_output1[38]=t4085*t56336 + t310*t4106*t56573;
  p_output1[39]=t3805*t4106*t56860 + t57053*t608;
  p_output1[40]=-0.068*t3979;
  p_output1[41]=-0.325*t3631 - 1.*t3796*t5271 + t3631*t5337;
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
