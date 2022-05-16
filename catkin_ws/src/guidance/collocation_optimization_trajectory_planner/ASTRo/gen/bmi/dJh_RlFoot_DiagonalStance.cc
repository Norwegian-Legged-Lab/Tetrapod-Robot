/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:46 GMT+02:00
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
  double t5357;
  double t16016;
  double t26216;
  double t36023;
  double t36312;
  double t36534;
  double t36545;
  double t36592;
  double t5189;
  double t5284;
  double t36594;
  double t36742;
  double t36557;
  double t36602;
  double t36615;
  double t2052;
  double t36746;
  double t36765;
  double t36771;
  double t36776;
  double t36778;
  double t36785;
  double t36786;
  double t36787;
  double t36870;
  double t36917;
  double t36918;
  double t36965;
  double t36966;
  double t36968;
  double t36970;
  double t36971;
  double t37016;
  double t37110;
  double t37113;
  double t37119;
  double t37128;
  double t37139;
  double t37154;
  double t37280;
  double t37330;
  double t37370;
  double t37371;
  double t37373;
  double t37385;
  double t37474;
  double t37477;
  double t37480;
  double t37490;
  double t37491;
  double t37493;
  double t37494;
  double t37495;
  double t37527;
  double t37532;
  double t37537;
  double t37542;
  double t37544;
  double t37545;
  double t37546;
  double t37547;
  double t37489;
  double t37497;
  double t37499;
  double t37500;
  double t37536;
  double t37548;
  double t37561;
  double t37562;
  double t37565;
  double t37568;
  double t37571;
  double t37572;
  double t37577;
  double t37579;
  double t37580;
  double t37629;
  double t37630;
  double t37643;
  double t37521;
  double t37583;
  double t37584;
  double t37693;
  double t37694;
  double t37695;
  double t37486;
  double t37487;
  double t37488;
  double t37667;
  double t37668;
  double t37669;
  double t37710;
  double t37713;
  double t37714;
  double t37760;
  double t37761;
  double t37769;
  double t37880;
  double t37881;
  double t37882;
  double t37671;
  double t37904;
  double t37906;
  double t37908;
  double t37729;
  double t37962;
  double t37967;
  double t38010;
  double t37689;
  double t37699;
  double t37700;
  double t37914;
  double t37927;
  double t37915;
  double t37916;
  double t37920;
  double t37940;
  double t38019;
  double t37730;
  double t37733;
  double t37738;
  double t37794;
  double t37808;
  double t38201;
  double t38206;
  double t38226;
  double t38228;
  double t37795;
  double t37796;
  double t37797;
  double t37809;
  double t37810;
  double t37811;
  double t37838;
  double t37867;
  double t37839;
  double t37848;
  double t37849;
  double t38078;
  double t38094;
  double t40741;
  double t41064;
  double t41124;
  double t41145;
  double t37870;
  double t37871;
  double t37872;
  double t37883;
  double t37884;
  double t37886;
  double t37893;
  double t37894;
  double t37896;
  double t37897;
  double t37898;
  double t37899;
  double t37900;
  double t37901;
  double t37902;
  double t41470;
  double t41476;
  double t41487;
  double t41427;
  double t37926;
  double t42989;
  double t43484;
  double t44723;
  double t45930;
  double t50195;
  double t50240;
  double t38014;
  double t38031;
  double t38050;
  double t38052;
  double t38058;
  double t38077;
  double t50258;
  double t38123;
  double t38129;
  double t51020;
  double t38165;
  double t38166;
  double t38171;
  double t38178;
  double t38186;
  double t38187;
  double t38188;
  double t38194;
  double t38195;
  double t38197;
  double t38198;
  double t38199;
  double t38204;
  double t38211;
  double t38212;
  double t38221;
  double t38222;
  double t38227;
  double t38250;
  double t38252;
  double t38295;
  double t38302;
  double t52141;
  double t38348;
  double t38350;
  double t52163;
  double t38357;
  double t38358;
  double t38368;
  double t38370;
  double t38381;
  double t38386;
  double t38387;
  double t38390;
  double t38404;
  double t38408;
  double t39551;
  double t39571;
  double t39767;
  double t39874;
  double t40208;
  double t40296;
  double t41014;
  double t41127;
  double t41236;
  double t41239;
  double t41247;
  double t41251;
  double t41271;
  double t52386;
  double t41296;
  double t41300;
  double t52438;
  double t41335;
  double t41355;
  double t41391;
  double t52663;
  double t52695;
  double t52696;
  double t53934;
  double t53947;
  double t53950;
  double t54034;
  double t54037;
  double t54038;
  double t54043;
  double t54045;
  double t54055;
  double t54311;
  double t54332;
  double t54369;
  double t54380;
  double t54398;
  double t54433;
  double t54490;
  double t54493;
  double t54494;
  double t54503;
  double t54491;
  double t54526;
  double t54532;
  double t54684;
  double t56400;
  double t56402;
  double t56403;
  double t56406;
  double t56407;
  double t56410;
  double t56431;
  double t56434;
  double t56449;
  double t56451;
  double t56443;
  double t56640;
  double t56642;
  double t53933;
  double t53951;
  double t53955;
  double t56647;
  double t36949;
  double t36950;
  double t36954;
  double t56850;
  double t56860;
  double t56863;
  double t52702;
  double t52703;
  double t53744;
  double t53873;
  double t53891;
  double t53906;
  double t53912;
  double t37403;
  double t37404;
  double t37407;
  double t57061;
  double t57062;
  double t57063;
  double t57064;
  double t57065;
  double t57067;
  double t57068;
  double t57069;
  double t57073;
  double t57074;
  double t57075;
  double t57066;
  double t57085;
  double t57086;
  double t57087;
  double t57093;
  double t57095;
  double t57096;
  double t57089;
  double t57092;
  double t57104;
  double t57105;
  double t57106;
  double t57108;
  double t57109;
  double t57110;
  double t57114;
  double t57115;
  double t57116;
  double t56427;
  double t56428;
  double t56437;
  double t56438;
  double t56622;
  double t56623;
  double t56624;
  double t57133;
  double t56632;
  double t56634;
  double t56635;
  double t57150;
  double t57154;
  double t57294;
  double t57299;
  double t57303;
  double t57121;
  double t57122;
  double t57123;
  double t56834;
  double t56835;
  double t56836;
  double t57388;
  double t57394;
  t5357 = Cos(var1[10]);
  t16016 = Cos(var1[11]);
  t26216 = -1.*t5357*t16016;
  t36023 = Sin(var1[10]);
  t36312 = Sin(var1[11]);
  t36534 = -1.*t36023*t36312;
  t36545 = t26216 + t36534;
  t36592 = Cos(var1[9]);
  t5189 = Cos(var1[5]);
  t5284 = Sin(var1[9]);
  t36594 = Sin(var1[5]);
  t36742 = Cos(var1[3]);
  t36557 = t5189*t5284*t36545;
  t36602 = t36592*t36545*t36594;
  t36615 = t36557 + t36602;
  t2052 = Sin(var1[3]);
  t36746 = Cos(var1[4]);
  t36765 = -1.*t16016*t36023;
  t36771 = t5357*t36312;
  t36776 = t36765 + t36771;
  t36778 = t36746*t36776;
  t36785 = Sin(var1[4]);
  t36786 = t36592*t5189*t36545;
  t36787 = -1.*t5284*t36545*t36594;
  t36870 = t36786 + t36787;
  t36917 = -1.*t36785*t36870;
  t36918 = t36778 + t36917;
  t36965 = t5189*t5284;
  t36966 = t36592*t36594;
  t36968 = t36965 + t36966;
  t36970 = -1.*t36592*t5189;
  t36971 = t5284*t36594;
  t37016 = t36970 + t36971;
  t37110 = t5189*t5284*t36776;
  t37113 = t36592*t36776*t36594;
  t37119 = t37110 + t37113;
  t37128 = t5357*t16016;
  t37139 = t36023*t36312;
  t37154 = t37128 + t37139;
  t37280 = t36746*t37154;
  t37330 = t36592*t5189*t36776;
  t37370 = -1.*t5284*t36776*t36594;
  t37371 = t37330 + t37370;
  t37373 = -1.*t36785*t37371;
  t37385 = t37280 + t37373;
  t37474 = -1.*t36776*t36785;
  t37477 = -1.*t36746*t36870;
  t37480 = t37474 + t37477;
  t37490 = -1.*t16016;
  t37491 = 1. + t37490;
  t37493 = -0.50321*t37491;
  t37494 = -0.23321*t16016;
  t37495 = t37493 + t37494;
  t37527 = -1.*t36592;
  t37532 = 1. + t37527;
  t37537 = -1.*t5357;
  t37542 = 1. + t37537;
  t37544 = -0.28121*t37542;
  t37545 = t5357*t37495;
  t37546 = 0.27*t36023*t36312;
  t37547 = t37544 + t37545 + t37546;
  t37489 = 0.28121*t36023;
  t37497 = t37495*t36023;
  t37499 = -0.27*t5357*t36312;
  t37500 = t37489 + t37497 + t37499;
  t37536 = -0.15121*t37532;
  t37548 = t36592*t37547;
  t37561 = t37536 + t37548;
  t37562 = t5189*t37561;
  t37565 = 0.15121*t37532;
  t37568 = 0.15121*t36592;
  t37571 = 0.15121*t5284;
  t37572 = t5284*t37547;
  t37577 = t37565 + t37568 + t37571 + t37572;
  t37579 = -1.*t37577*t36594;
  t37580 = t37562 + t37579;
  t37629 = t37500*t36785;
  t37630 = t36746*t37580;
  t37643 = t37629 + t37630;
  t37521 = -1.*t37500*t36785;
  t37583 = -1.*t36746*t37580;
  t37584 = t37521 + t37583;
  t37693 = t36746*t37500;
  t37694 = -1.*t36785*t37580;
  t37695 = t37693 + t37694;
  t37486 = t37154*t36785;
  t37487 = t36746*t37371;
  t37488 = t37486 + t37487;
  t37667 = t5189*t37577;
  t37668 = t37561*t36594;
  t37669 = t37667 + t37668;
  t37710 = -1.*t37154*t36785;
  t37713 = -1.*t36746*t37371;
  t37714 = t37710 + t37713;
  t37760 = t36776*t36785;
  t37761 = t36746*t36870;
  t37769 = t37760 + t37761;
  t37880 = -1.*t5189*t5284*t36545;
  t37881 = -1.*t36592*t36545*t36594;
  t37882 = t37880 + t37881;
  t37671 = -1.*t37016*t37669;
  t37904 = -1.*t5189*t37577;
  t37906 = -1.*t37561*t36594;
  t37908 = t37904 + t37906;
  t37729 = t37119*t37669;
  t37962 = -1.*t5189*t5284*t36776;
  t37967 = -1.*t36592*t36776*t36594;
  t38010 = t37962 + t37967;
  t37689 = -1.*t36746*t36968*t37643;
  t37699 = t36785*t36968*t37695;
  t37700 = t37671 + t37689 + t37699;
  t37914 = -1.*t36968*t37669;
  t37927 = -1.*t37016*t37580;
  t37915 = t36592*t5189;
  t37916 = -1.*t5284*t36594;
  t37920 = t37915 + t37916;
  t37940 = t37371*t37669;
  t38019 = t37119*t37580;
  t37730 = t37488*t37643;
  t37733 = t37385*t37695;
  t37738 = t37729 + t37730 + t37733;
  t37794 = -1.*t37119*t37669;
  t37808 = t36615*t37669;
  t38201 = -1.*t37371*t37669;
  t38206 = -1.*t37119*t37580;
  t38226 = t36870*t37669;
  t38228 = t36615*t37580;
  t37795 = -1.*t37488*t37643;
  t37796 = -1.*t37385*t37695;
  t37797 = t37794 + t37795 + t37796;
  t37809 = t37769*t37643;
  t37810 = t36918*t37695;
  t37811 = t37808 + t37809 + t37810;
  t37838 = t37016*t37669;
  t37867 = -1.*t36615*t37669;
  t37839 = t36746*t36968*t37643;
  t37848 = -1.*t36785*t36968*t37695;
  t37849 = t37838 + t37839 + t37848;
  t38078 = Power(t36746,2);
  t38094 = Power(t36785,2);
  t40741 = t36968*t37669;
  t41064 = t37016*t37580;
  t41124 = -1.*t36870*t37669;
  t41145 = -1.*t36615*t37580;
  t37870 = -1.*t37769*t37643;
  t37871 = -1.*t36918*t37695;
  t37872 = t37867 + t37870 + t37871;
  t37883 = var2[0]*t36746*t37882;
  t37884 = t2052*t36785*t37882;
  t37886 = t36742*t36870;
  t37893 = t37884 + t37886;
  t37894 = var2[1]*t37893;
  t37896 = -1.*t36742*t36785*t37882;
  t37897 = t2052*t36870;
  t37898 = t37896 + t37897;
  t37899 = var2[2]*t37898;
  t37900 = -1.*t36968*t37580;
  t37901 = t37671 + t37900;
  t37902 = t37371*t37901;
  t41470 = -0.15121*t5284;
  t41476 = -1.*t5284*t37547;
  t41487 = t41470 + t41476;
  t41427 = t37568 + t37548;
  t37926 = -1.*t37920*t37580;
  t42989 = t5189*t41487;
  t43484 = -1.*t41427*t36594;
  t44723 = t42989 + t43484;
  t45930 = t5189*t41427;
  t50195 = t41487*t36594;
  t50240 = t45930 + t50195;
  t38014 = t38010*t37580;
  t38031 = t37500*t37154;
  t38050 = t37371*t37580;
  t38052 = t38031 + t37729 + t38050;
  t38058 = t36968*t38052;
  t38077 = t36746*t38010*t37700;
  t50258 = -1.*t37016*t50240;
  t38123 = -1.*t36746*t37920*t37643;
  t38129 = t36785*t37920*t37695;
  t51020 = t37119*t50240;
  t38165 = t36746*t38010*t37643;
  t38166 = -1.*t36785*t38010*t37695;
  t38171 = t36746*t37920*t37738;
  t38178 = var2[0]*t36746*t37920;
  t38186 = t2052*t36968;
  t38187 = -1.*t36742*t36785*t37920;
  t38188 = t38186 + t38187;
  t38194 = var2[2]*t38188;
  t38195 = t36742*t36968;
  t38197 = t2052*t36785*t37920;
  t38198 = t38195 + t38197;
  t38199 = var2[1]*t38198;
  t38204 = -1.*t38010*t37580;
  t38211 = -1.*t37500*t37154;
  t38212 = -1.*t37371*t37580;
  t38221 = t38211 + t37794 + t38212;
  t38222 = t36870*t38221;
  t38227 = t37882*t37580;
  t38250 = t37500*t36776;
  t38252 = t36870*t37580;
  t38295 = t38250 + t37808 + t38252;
  t38302 = t37371*t38295;
  t52141 = -1.*t37119*t50240;
  t38348 = -1.*t36746*t38010*t37643;
  t38350 = t36785*t38010*t37695;
  t52163 = t36615*t50240;
  t38357 = t36746*t37882*t37643;
  t38358 = -1.*t36785*t37882*t37695;
  t38368 = t36746*t37882*t37797;
  t38370 = t36746*t38010*t37811;
  t38381 = var2[0]*t36746*t38010;
  t38386 = t2052*t36785*t38010;
  t38387 = t36742*t37371;
  t38390 = t38386 + t38387;
  t38404 = var2[1]*t38390;
  t38408 = -1.*t36742*t36785*t38010;
  t39551 = t2052*t37371;
  t39571 = t38408 + t39551;
  t39767 = var2[2]*t39571;
  t39874 = t36968*t37580;
  t40208 = t37838 + t39874;
  t40296 = t36870*t40208;
  t41014 = t37920*t37580;
  t41127 = -1.*t37882*t37580;
  t41236 = -1.*t37500*t36776;
  t41239 = -1.*t36870*t37580;
  t41247 = t41236 + t37867 + t41239;
  t41251 = t36968*t41247;
  t41271 = t36746*t37882*t37849;
  t52386 = t37016*t50240;
  t41296 = t36746*t37920*t37643;
  t41300 = -1.*t36785*t37920*t37695;
  t52438 = -1.*t36615*t50240;
  t41335 = -1.*t36746*t37882*t37643;
  t41355 = t36785*t37882*t37695;
  t41391 = t36746*t37920*t37872;
  t52663 = t16016*t36023;
  t52695 = -1.*t5357*t36312;
  t52696 = t52663 + t52695;
  t53934 = t36592*t5189*t52696;
  t53947 = -1.*t5284*t52696*t36594;
  t53950 = t53934 + t53947;
  t54034 = t5189*t5284*t52696;
  t54037 = t36592*t52696*t36594;
  t54038 = t54034 + t54037;
  t54043 = t36746*t36545;
  t54045 = -1.*t36785*t53950;
  t54055 = t54043 + t54045;
  t54311 = -0.28121*t36023;
  t54332 = -1.*t37495*t36023;
  t54369 = 0.27*t5357*t36312;
  t54380 = t54311 + t54332 + t54369;
  t54398 = t5189*t5284*t54380;
  t54433 = t36592*t54380*t36594;
  t54490 = t54398 + t54433;
  t54493 = t36592*t5189*t54380;
  t54494 = -1.*t5284*t54380*t36594;
  t54503 = t54493 + t54494;
  t54491 = -1.*t37016*t54490;
  t54526 = 0.28121*t5357;
  t54532 = t54526 + t37545 + t37546;
  t54684 = t54490*t37119;
  t56400 = t54532*t36785;
  t56402 = t36746*t54503;
  t56403 = t56400 + t56402;
  t56406 = t36746*t54532;
  t56407 = -1.*t36785*t54503;
  t56410 = t56406 + t56407;
  t56431 = t37500*t36545;
  t56434 = t36776*t54532;
  t56449 = Power(t36592,2);
  t56451 = Power(t5284,2);
  t56443 = -1.*t54532*t37154;
  t56640 = t54490*t36615;
  t56642 = t54038*t37669;
  t53933 = t36545*t36785;
  t53951 = t36746*t53950;
  t53955 = t53933 + t53951;
  t56647 = -1.*t54490*t37119;
  t36949 = t36742*t36615;
  t36950 = -1.*t2052*t36918;
  t36954 = t36949 + t36950;
  t56850 = t37016*t54490;
  t56860 = -1.*t54490*t36615;
  t56863 = -1.*t54038*t37669;
  t52702 = 0.15121*t52696;
  t52703 = 0.15121*t36776;
  t53744 = t52702 + t52703;
  t53873 = var2[9]*t53744;
  t53891 = -1.*t5284*t37561;
  t53906 = t36592*t37577;
  t53912 = t53891 + t53906;
  t37403 = t36742*t37119;
  t37404 = -1.*t2052*t37385;
  t37407 = t37403 + t37404;
  t57061 = 0.27*t16016*t36023;
  t57062 = t57061 + t37499;
  t57063 = t5189*t5284*t57062;
  t57064 = t36592*t57062*t36594;
  t57065 = t57063 + t57064;
  t57067 = t36592*t5189*t57062;
  t57068 = -1.*t5284*t57062*t36594;
  t57069 = t57067 + t57068;
  t57073 = t5189*t5284*t37154;
  t57074 = t36592*t37154*t36594;
  t57075 = t57073 + t57074;
  t57066 = -1.*t37016*t57065;
  t57085 = -0.27*t5357*t16016;
  t57086 = -0.27*t36023*t36312;
  t57087 = t57085 + t57086;
  t57093 = t36592*t5189*t37154;
  t57095 = -1.*t5284*t37154*t36594;
  t57096 = t57093 + t57095;
  t57089 = t57065*t37119;
  t57092 = t57075*t37669;
  t57104 = t57087*t36785;
  t57105 = t36746*t57069;
  t57106 = t57104 + t57105;
  t57108 = t36746*t57087;
  t57109 = -1.*t36785*t57069;
  t57110 = t57108 + t57109;
  t57114 = t52696*t36785;
  t57115 = t36746*t57096;
  t57116 = t57114 + t57115;
  t56427 = t36545*t37547;
  t56428 = t38250 + t56427;
  t56437 = -1.*t36776*t37547;
  t56438 = t56437 + t38211;
  t56622 = -1.*t36592*t36776*t37561;
  t56623 = -1.*t5284*t36776*t37577;
  t56624 = t38211 + t56622 + t56623;
  t57133 = t36776*t57087;
  t56632 = t36592*t36545*t37561;
  t56634 = t5284*t36545*t37577;
  t56635 = t38250 + t56632 + t56634;
  t57150 = -1.*t52696*t37500;
  t57154 = -1.*t57087*t37154;
  t57294 = t57065*t36615;
  t57299 = -1.*t57065*t37119;
  t57303 = -1.*t57075*t37669;
  t57121 = t36746*t52696;
  t57122 = -1.*t36785*t57096;
  t57123 = t57121 + t57122;
  t56834 = t5284*t37561;
  t56835 = -1.*t36592*t37577;
  t56836 = t56834 + t56835;
  t57388 = t37016*t57065;
  t57394 = -1.*t57065*t36615;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2052*t36615 - 1.*t36742*t36918)*var2[1] + t36954*var2[2];
  p_output1[10]=(t36742*t36785*t36968 - 1.*t2052*t37016)*var2[1] + (t2052*t36785*t36968 + t36742*t37016)*var2[2];
  p_output1[11]=(-1.*t2052*t37119 - 1.*t36742*t37385)*var2[1] + t37407*var2[2];
  p_output1[12]=t36918*var2[0] - 1.*t2052*t37480*var2[1] + t36742*t37480*var2[2] + (t37488*(t36785*t36968*t37584 + t36785*t36968*t37643) + t37385*t37700 + t36746*t36968*(t37385*t37584 + t37385*t37643 + t37488*t37695 + t37695*t37714) - 1.*t36785*t36968*t37738)*var2[3];
  p_output1[13]=-1.*t36785*t36968*var2[0] + t2052*t36746*t36968*var2[1] - 1.*t36742*t36746*t36968*var2[2] + ((-1.*t37385*t37584 - 1.*t37385*t37643 - 1.*t37488*t37695 - 1.*t37695*t37714)*t37769 + t37488*(t36918*t37584 + t36918*t37643 + t37480*t37695 + t37695*t37769) + t36918*t37797 + t37385*t37811)*var2[3];
  p_output1[14]=t37385*var2[0] - 1.*t2052*t37714*var2[1] + t36742*t37714*var2[2] + ((-1.*t36785*t36968*t37584 - 1.*t36785*t36968*t37643)*t37769 + t36746*t36968*(-1.*t36918*t37584 - 1.*t36918*t37643 - 1.*t37480*t37695 - 1.*t37695*t37769) + t36918*t37849 - 1.*t36785*t36968*t37872)*var2[3];
  p_output1[15]=t37883 + t37894 + t37899 + (t38077 + t37488*(t37914 + t37927 - 1.*t36968*t37908*t38078 - 1.*t36968*t37908*t38094 + t38123 + t38129) + t36746*t36968*(-1.*t36785*t37385*t37908 + t36746*t37488*t37908 + t37940 + t38019 + t38165 + t38166) + t38171)*var2[3] + (t37902 + t37119*(-1.*t36968*t37908 + t37914 + t37926 + t37927) + t37016*(t37371*t37908 + t37940 + t38014 + t38019) + t38058)*var2[4];
  p_output1[16]=t38178 + t38194 + t38199 + (t37769*(t36785*t37385*t37908 - 1.*t36746*t37488*t37908 + t38201 + t38206 + t38348 + t38350) + t37488*(-1.*t36785*t36918*t37908 + t36746*t37769*t37908 + t38226 + t38228 + t38357 + t38358) + t38368 + t38370)*var2[3] + (t36615*(-1.*t37371*t37908 + t38201 + t38204 + t38206) + t38222 + t37119*(t36870*t37908 + t38226 + t38227 + t38228) + t38302)*var2[4];
  p_output1[17]=t38381 + t38404 + t39767 + (t41271 + t37769*(t36968*t37908*t38078 + t36968*t37908*t38094 + t40741 + t41064 + t41296 + t41300) + t36746*t36968*(t36785*t36918*t37908 - 1.*t36746*t37769*t37908 + t41124 + t41145 + t41335 + t41355) + t41391)*var2[3] + (t40296 + t36615*(t36968*t37908 + t40741 + t41014 + t41064) + t37016*(-1.*t36870*t37908 + t41124 + t41127 + t41145) + t41251)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t37883 + t37894 + t37899 + (t38077 + t38171 + t37488*(t37914 + t38123 + t38129 - 1.*t36968*t38078*t44723 - 1.*t36968*t38094*t44723 + t50258) + t36746*t36968*(t37940 + t38165 + t38166 - 1.*t36785*t37385*t44723 + t36746*t37488*t44723 + t51020))*var2[3] + (t37902 + t38058 + t37119*(t37914 + t37926 - 1.*t36968*t44723 + t50258) + t37016*(t37940 + t38014 + t37371*t44723 + t51020))*var2[4] + t37154*(-1.*t36592*t37561 + t36592*t41427 - 1.*t37577*t5284 - 1.*t41487*t5284)*var2[5];
  p_output1[28]=t38178 + t38194 + t38199 + (t38368 + t38370 + t37769*(t38201 + t38348 + t38350 + t36785*t37385*t44723 - 1.*t36746*t37488*t44723 + t52141) + t37488*(t38226 + t38357 + t38358 - 1.*t36785*t36918*t44723 + t36746*t37769*t44723 + t52163))*var2[3] + (t38222 + t38302 + t36615*(t38201 + t38204 - 1.*t37371*t44723 + t52141) + t37119*(t38226 + t38227 + t36870*t44723 + t52163))*var2[4] + (t37154*(t36545*t36592*t37577 + t36545*t36592*t41487 - 1.*t36545*t37561*t5284 + t36545*t41427*t5284) + t36776*(-1.*t36592*t36776*t37577 - 1.*t36592*t36776*t41487 + t36776*t37561*t5284 - 1.*t36776*t41427*t5284))*var2[5];
  p_output1[29]=t38381 + t38404 + t39767 + (t41271 + t41391 + t37769*(t40741 + t41296 + t41300 + t36968*t38078*t44723 + t36968*t38094*t44723 + t52386) + t36746*t36968*(t41124 + t41335 + t41355 + t36785*t36918*t44723 - 1.*t36746*t37769*t44723 + t52438))*var2[3] + (t40296 + t41251 + t36615*(t40741 + t41014 + t36968*t44723 + t52386) + t37016*(t41124 + t41127 - 1.*t36870*t44723 + t52438))*var2[4] + t36776*(t36592*t37561 - 1.*t36592*t41427 + t37577*t5284 + t41487*t5284)*var2[5];
  p_output1[30]=t53873 + t53955*var2[0] + (t36742*t54038 - 1.*t2052*t54055)*var2[1] + (t2052*t54038 + t36742*t54055)*var2[2] + (t37700*t37769 + t37488*(t54491 - 1.*t36746*t36968*t56403 + t36785*t36968*t56410) + t36746*t36968*(t37808 + t37809 + t37810 + t54684 + t37488*t56403 + t37385*t56410))*var2[3] + (t36615*t37901 + t37119*(t54491 - 1.*t36968*t54503) + t37016*(t37808 + t38250 + t38252 + t37371*t54503 + t37154*t54532 + t54684))*var2[4] + t36776*t53912*var2[5];
  p_output1[31]=(t37769*t37811 + t37797*t53955 + t37488*(t37643*t53955 + t37695*t54055 + t37769*t56403 + t36918*t56410 + t56640 + t56642) + t37769*(t37867 + t37870 + t37871 - 1.*t37488*t56403 - 1.*t37385*t56410 + t56647))*var2[3] + (t36615*t38295 + t38221*t54038 + t37119*(t37580*t53950 + t36870*t54503 + t56431 + t56434 + t56640 + t56642) + t36615*(t37867 + t41236 + t41239 - 1.*t37371*t54503 + t56443 + t56647))*var2[4] + (t37154*(t36592*t37561*t52696 + t37577*t52696*t5284 + t56431 + t56434 + t36545*t54380*t56449 + t36545*t54380*t56451) + t36776*(-1.*t36545*t36592*t37561 + t41236 - 1.*t36545*t37577*t5284 + t56443 - 1.*t36776*t54380*t56449 - 1.*t36776*t54380*t56451) + t36545*t56624 + t36776*t56635)*var2[5] + (t36776*t56428 + t37154*(t37547*t52696 + t36545*t54380 + t56431 + t56434) + t36545*t56438 + t36776*(-1.*t36545*t37547 + t41236 - 1.*t36776*t54380 + t56443))*var2[9];
  p_output1[32]=t37769*var2[0] + t36954*var2[1] + (t2052*t36615 + t36742*t36918)*var2[2] + (t37849*t53955 + t37769*(t36746*t36968*t56403 - 1.*t36785*t36968*t56410 + t56850) + t36746*t36968*(-1.*t37643*t53955 - 1.*t37695*t54055 - 1.*t37769*t56403 - 1.*t36918*t56410 + t56860 + t56863))*var2[3] + (t40208*t54038 + t36615*(t36968*t54503 + t56850) + t37016*(-1.*t36545*t37500 - 1.*t37580*t53950 - 1.*t36870*t54503 - 1.*t36776*t54532 + t56860 + t56863))*var2[4] + t36545*t56836*var2[5];
  p_output1[33]=t53873 + t37488*var2[0] + t37407*var2[1] + (t2052*t37119 + t36742*t37385)*var2[2] + (t37488*(t57066 - 1.*t36746*t36968*t57106 + t36785*t36968*t57110) + t37700*t57116 + t36746*t36968*(t57089 + t57092 + t37488*t57106 + t37385*t57110 + t37643*t57116 + t37695*t57123))*var2[3] + (t37119*(t57066 - 1.*t36968*t57069) + t37901*t57075 + t37016*(t37500*t52696 + t37371*t57069 + t37154*t57087 + t57089 + t57092 + t37580*t57096))*var2[4] + t52696*t53912*var2[5] + (0.28121*t16016 - 0.27*Power(t16016,2) + t16016*t37495)*var2[10];
  p_output1[34]=(t37488*t37797 + t37811*t57116 + t37488*(t37729 + t37730 + t37733 + t37769*t57106 + t36918*t57110 + t57294) + t37769*(-1.*t37488*t57106 - 1.*t37385*t57110 - 1.*t37643*t57116 - 1.*t37695*t57123 + t57299 + t57303))*var2[3] + (t37119*t38221 + t38295*t57075 + t37119*(t37729 + t38031 + t38050 + t36870*t57069 + t57133 + t57294) + t36615*(-1.*t37371*t57069 - 1.*t37580*t57096 + t57150 + t57154 + t57299 + t57303))*var2[4] + (t37154*t56624 + t52696*t56635 + t37154*(t36592*t36776*t37561 + t38031 + t36776*t37577*t5284 + t36545*t56449*t57062 + t36545*t56451*t57062 + t57133) + t36776*(-1.*t36592*t37154*t37561 - 1.*t37154*t37577*t5284 - 1.*t36776*t56449*t57062 - 1.*t36776*t56451*t57062 + t57150 + t57154))*var2[5] + (t52696*t56428 + t37154*t56438 + t37154*(t36776*t37547 + t38031 + t36545*t57062 + t57133) + t36776*(-1.*t37154*t37547 - 1.*t36776*t57062 + t57150 + t57154))*var2[9];
  p_output1[35]=t57116*var2[0] + (t36742*t57075 - 1.*t2052*t57123)*var2[1] + (t2052*t57075 + t36742*t57123)*var2[2] + (t37488*t37849 + t37769*(t36746*t36968*t57106 - 1.*t36785*t36968*t57110 + t57388) + t36746*t36968*(t37794 + t37795 + t37796 - 1.*t37769*t57106 - 1.*t36918*t57110 + t57394))*var2[3] + (t37119*t40208 + t36615*(t36968*t57069 + t57388) + t37016*(t37794 + t38211 + t38212 - 1.*t36870*t57069 - 1.*t36776*t57087 + t57394))*var2[4] + t37154*t56836*var2[5] + (-0.28121*t36312 + 0.27*t16016*t36312 - 1.*t36312*t37495)*var2[10];
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
