/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:05 GMT+02:00
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
  double t733;
  double t754;
  double t930;
  double t1000;
  double t1095;
  double t1278;
  double t1297;
  double t1442;
  double t457;
  double t697;
  double t1443;
  double t2063;
  double t1352;
  double t1455;
  double t1547;
  double t213;
  double t2357;
  double t2478;
  double t2714;
  double t2720;
  double t2821;
  double t5684;
  double t6337;
  double t6342;
  double t6343;
  double t6571;
  double t6598;
  double t7823;
  double t7910;
  double t7974;
  double t8028;
  double t8101;
  double t8178;
  double t8668;
  double t8795;
  double t8825;
  double t8839;
  double t8861;
  double t8927;
  double t9139;
  double t9402;
  double t9688;
  double t9799;
  double t10026;
  double t10140;
  double t10819;
  double t11112;
  double t11132;
  double t11423;
  double t11458;
  double t11459;
  double t11544;
  double t11567;
  double t11619;
  double t11623;
  double t11643;
  double t11649;
  double t11711;
  double t11720;
  double t11810;
  double t11845;
  double t11404;
  double t11576;
  double t11581;
  double t11584;
  double t11625;
  double t11870;
  double t11979;
  double t12025;
  double t12030;
  double t12038;
  double t12039;
  double t12080;
  double t12119;
  double t12188;
  double t12227;
  double t12400;
  double t12401;
  double t12427;
  double t11585;
  double t12366;
  double t12367;
  double t12599;
  double t12604;
  double t12613;
  double t11238;
  double t11309;
  double t11402;
  double t12459;
  double t12499;
  double t12531;
  double t12897;
  double t12920;
  double t12975;
  double t13472;
  double t13491;
  double t13520;
  double t15769;
  double t15824;
  double t15889;
  double t12535;
  double t15915;
  double t15918;
  double t15921;
  double t13272;
  double t15937;
  double t15938;
  double t15939;
  double t12588;
  double t12643;
  double t12649;
  double t15923;
  double t15924;
  double t15925;
  double t15929;
  double t15930;
  double t15935;
  double t15944;
  double t13274;
  double t13278;
  double t13289;
  double t13741;
  double t13934;
  double t16181;
  double t16183;
  double t16198;
  double t16200;
  double t13779;
  double t13781;
  double t13789;
  double t14280;
  double t14312;
  double t14334;
  double t14953;
  double t15216;
  double t14967;
  double t14970;
  double t14971;
  double t15962;
  double t16142;
  double t16413;
  double t16414;
  double t16420;
  double t16422;
  double t15219;
  double t15249;
  double t15318;
  double t15901;
  double t15902;
  double t15903;
  double t15905;
  double t15906;
  double t15907;
  double t15908;
  double t15909;
  double t15910;
  double t15911;
  double t15912;
  double t15914;
  double t16454;
  double t16455;
  double t16456;
  double t16450;
  double t15931;
  double t16461;
  double t16462;
  double t16463;
  double t16465;
  double t16467;
  double t16468;
  double t15941;
  double t15947;
  double t15948;
  double t15949;
  double t15950;
  double t15957;
  double t16469;
  double t16144;
  double t16147;
  double t16474;
  double t16153;
  double t16154;
  double t16157;
  double t16168;
  double t16169;
  double t16170;
  double t16172;
  double t16174;
  double t16175;
  double t16177;
  double t16178;
  double t16179;
  double t16182;
  double t16187;
  double t16189;
  double t16193;
  double t16196;
  double t16199;
  double t16334;
  double t16364;
  double t16365;
  double t16366;
  double t16675;
  double t16373;
  double t16374;
  double t16679;
  double t16379;
  double t16380;
  double t16384;
  double t16387;
  double t16397;
  double t16398;
  double t16399;
  double t16401;
  double t16402;
  double t16403;
  double t16404;
  double t16405;
  double t16407;
  double t16408;
  double t16409;
  double t16410;
  double t16416;
  double t16421;
  double t16425;
  double t16426;
  double t16427;
  double t16428;
  double t16431;
  double t16704;
  double t16434;
  double t16435;
  double t16708;
  double t16441;
  double t16442;
  double t16445;
  double t16730;
  double t16731;
  double t16732;
  double t16734;
  double t16735;
  double t16736;
  double t16741;
  double t16742;
  double t16743;
  double t16747;
  double t16748;
  double t16749;
  double t16758;
  double t16759;
  double t16760;
  double t16762;
  double t16764;
  double t16765;
  double t16761;
  double t16770;
  double t16771;
  double t16772;
  double t16773;
  double t16775;
  double t16782;
  double t16783;
  double t16784;
  double t16786;
  double t16794;
  double t16818;
  double t16900;
  double t16902;
  double t16928;
  double t16931;
  double t16917;
  double t16733;
  double t16737;
  double t16738;
  double t16960;
  double t16965;
  double t16969;
  double t6854;
  double t7486;
  double t7488;
  double t17073;
  double t17082;
  double t17084;
  double t16725;
  double t16727;
  double t16728;
  double t10430;
  double t10549;
  double t10652;
  double t17121;
  double t17122;
  double t17123;
  double t17124;
  double t17126;
  double t17127;
  double t17129;
  double t17130;
  double t17131;
  double t17135;
  double t17136;
  double t17137;
  double t17128;
  double t17141;
  double t17142;
  double t17148;
  double t17149;
  double t17150;
  double t17144;
  double t17147;
  double t17157;
  double t17158;
  double t17159;
  double t17161;
  double t17162;
  double t17163;
  double t17168;
  double t17169;
  double t17170;
  double t16896;
  double t16897;
  double t16907;
  double t16910;
  double t16914;
  double t16922;
  double t16923;
  double t16924;
  double t17187;
  double t17194;
  double t16948;
  double t16950;
  double t16952;
  double t17219;
  double t17223;
  double t17225;
  double t17176;
  double t17177;
  double t17178;
  double t17055;
  double t17056;
  double t17058;
  double t17059;
  double t17060;
  double t17063;
  double t17064;
  double t17265;
  double t17272;
  t733 = Cos(var1[13]);
  t754 = Cos(var1[14]);
  t930 = t733*t754;
  t1000 = Sin(var1[13]);
  t1095 = Sin(var1[14]);
  t1278 = t1000*t1095;
  t1297 = t930 + t1278;
  t1442 = Cos(var1[12]);
  t457 = Cos(var1[5]);
  t697 = Sin(var1[12]);
  t1443 = Sin(var1[5]);
  t2063 = Cos(var1[3]);
  t1352 = t457*t697*t1297;
  t1455 = t1442*t1297*t1443;
  t1547 = t1352 + t1455;
  t213 = Sin(var1[3]);
  t2357 = Cos(var1[4]);
  t2478 = -1.*t754*t1000;
  t2714 = t733*t1095;
  t2720 = t2478 + t2714;
  t2821 = t2357*t2720;
  t5684 = Sin(var1[4]);
  t6337 = t1442*t457*t1297;
  t6342 = -1.*t697*t1297*t1443;
  t6343 = t6337 + t6342;
  t6571 = -1.*t5684*t6343;
  t6598 = t2821 + t6571;
  t7823 = -1.*t457*t697;
  t7910 = -1.*t1442*t1443;
  t7974 = t7823 + t7910;
  t8028 = t1442*t457;
  t8101 = -1.*t697*t1443;
  t8178 = t8028 + t8101;
  t8668 = t754*t1000;
  t8795 = -1.*t733*t1095;
  t8825 = t8668 + t8795;
  t8839 = t457*t697*t8825;
  t8861 = t1442*t8825*t1443;
  t8927 = t8839 + t8861;
  t9139 = t2357*t1297;
  t9402 = t1442*t457*t8825;
  t9688 = -1.*t697*t8825*t1443;
  t9799 = t9402 + t9688;
  t10026 = -1.*t5684*t9799;
  t10140 = t9139 + t10026;
  t10819 = -1.*t2720*t5684;
  t11112 = -1.*t2357*t6343;
  t11132 = t10819 + t11112;
  t11423 = -1.*t754;
  t11458 = 1. + t11423;
  t11459 = 0.50321*t11458;
  t11544 = 0.19821*t754;
  t11567 = t11459 + t11544;
  t11619 = -1.*t1442;
  t11623 = 1. + t11619;
  t11643 = -1.*t733;
  t11649 = 1. + t11643;
  t11711 = 0.28121*t11649;
  t11720 = t733*t11567;
  t11810 = -0.305*t1000*t1095;
  t11845 = t11711 + t11720 + t11810;
  t11404 = 0.28121*t1000;
  t11576 = -1.*t11567*t1000;
  t11581 = -0.305*t733*t1095;
  t11584 = t11404 + t11576 + t11581;
  t11625 = 0.15121*t11623;
  t11870 = t1442*t11845;
  t11979 = t11625 + t11870;
  t12025 = t457*t11979;
  t12030 = -0.15121*t11623;
  t12038 = -0.15121*t1442;
  t12039 = -0.15121*t697;
  t12080 = t697*t11845;
  t12119 = t12030 + t12038 + t12039 + t12080;
  t12188 = -1.*t12119*t1443;
  t12227 = t12025 + t12188;
  t12400 = t11584*t5684;
  t12401 = t2357*t12227;
  t12427 = t12400 + t12401;
  t11585 = -1.*t11584*t5684;
  t12366 = -1.*t2357*t12227;
  t12367 = t11585 + t12366;
  t12599 = t2357*t11584;
  t12604 = -1.*t5684*t12227;
  t12613 = t12599 + t12604;
  t11238 = t1297*t5684;
  t11309 = t2357*t9799;
  t11402 = t11238 + t11309;
  t12459 = t457*t12119;
  t12499 = t11979*t1443;
  t12531 = t12459 + t12499;
  t12897 = -1.*t1297*t5684;
  t12920 = -1.*t2357*t9799;
  t12975 = t12897 + t12920;
  t13472 = t2720*t5684;
  t13491 = t2357*t6343;
  t13520 = t13472 + t13491;
  t15769 = -1.*t457*t697*t1297;
  t15824 = -1.*t1442*t1297*t1443;
  t15889 = t15769 + t15824;
  t12535 = -1.*t8178*t12531;
  t15915 = -1.*t457*t12119;
  t15918 = -1.*t11979*t1443;
  t15921 = t15915 + t15918;
  t13272 = t8927*t12531;
  t15937 = -1.*t457*t697*t8825;
  t15938 = -1.*t1442*t8825*t1443;
  t15939 = t15937 + t15938;
  t12588 = -1.*t2357*t7974*t12427;
  t12643 = t5684*t7974*t12613;
  t12649 = t12535 + t12588 + t12643;
  t15923 = -1.*t7974*t12531;
  t15924 = -1.*t8178*t12227;
  t15925 = -1.*t1442*t457;
  t15929 = t697*t1443;
  t15930 = t15925 + t15929;
  t15935 = t9799*t12531;
  t15944 = t8927*t12227;
  t13274 = t11402*t12427;
  t13278 = t10140*t12613;
  t13289 = t13272 + t13274 + t13278;
  t13741 = -1.*t8927*t12531;
  t13934 = t1547*t12531;
  t16181 = -1.*t9799*t12531;
  t16183 = -1.*t8927*t12227;
  t16198 = t6343*t12531;
  t16200 = t1547*t12227;
  t13779 = -1.*t11402*t12427;
  t13781 = -1.*t10140*t12613;
  t13789 = t13741 + t13779 + t13781;
  t14280 = t13520*t12427;
  t14312 = t6598*t12613;
  t14334 = t13934 + t14280 + t14312;
  t14953 = t8178*t12531;
  t15216 = -1.*t1547*t12531;
  t14967 = t2357*t7974*t12427;
  t14970 = -1.*t5684*t7974*t12613;
  t14971 = t14953 + t14967 + t14970;
  t15962 = Power(t2357,2);
  t16142 = Power(t5684,2);
  t16413 = t7974*t12531;
  t16414 = t8178*t12227;
  t16420 = -1.*t6343*t12531;
  t16422 = -1.*t1547*t12227;
  t15219 = -1.*t13520*t12427;
  t15249 = -1.*t6598*t12613;
  t15318 = t15216 + t15219 + t15249;
  t15901 = var2[0]*t2357*t15889;
  t15902 = t213*t5684*t15889;
  t15903 = t2063*t6343;
  t15905 = t15902 + t15903;
  t15906 = var2[1]*t15905;
  t15907 = -1.*t2063*t5684*t15889;
  t15908 = t213*t6343;
  t15909 = t15907 + t15908;
  t15910 = var2[2]*t15909;
  t15911 = -1.*t7974*t12227;
  t15912 = t12535 + t15911;
  t15914 = t9799*t15912;
  t16454 = 0.15121*t697;
  t16455 = -1.*t697*t11845;
  t16456 = t16454 + t16455;
  t16450 = t12038 + t11870;
  t15931 = -1.*t15930*t12227;
  t16461 = t457*t16456;
  t16462 = -1.*t16450*t1443;
  t16463 = t16461 + t16462;
  t16465 = t457*t16450;
  t16467 = t16456*t1443;
  t16468 = t16465 + t16467;
  t15941 = t15939*t12227;
  t15947 = t11584*t1297;
  t15948 = t9799*t12227;
  t15949 = t15947 + t13272 + t15948;
  t15950 = t7974*t15949;
  t15957 = t2357*t15939*t12649;
  t16469 = -1.*t8178*t16468;
  t16144 = -1.*t2357*t15930*t12427;
  t16147 = t5684*t15930*t12613;
  t16474 = t8927*t16468;
  t16153 = t2357*t15939*t12427;
  t16154 = -1.*t5684*t15939*t12613;
  t16157 = t2357*t15930*t13289;
  t16168 = var2[0]*t2357*t15930;
  t16169 = t213*t7974;
  t16170 = -1.*t2063*t5684*t15930;
  t16172 = t16169 + t16170;
  t16174 = var2[2]*t16172;
  t16175 = t2063*t7974;
  t16177 = t213*t5684*t15930;
  t16178 = t16175 + t16177;
  t16179 = var2[1]*t16178;
  t16182 = -1.*t15939*t12227;
  t16187 = -1.*t11584*t1297;
  t16189 = -1.*t9799*t12227;
  t16193 = t16187 + t13741 + t16189;
  t16196 = t6343*t16193;
  t16199 = t15889*t12227;
  t16334 = t11584*t2720;
  t16364 = t6343*t12227;
  t16365 = t16334 + t13934 + t16364;
  t16366 = t9799*t16365;
  t16675 = -1.*t8927*t16468;
  t16373 = -1.*t2357*t15939*t12427;
  t16374 = t5684*t15939*t12613;
  t16679 = t1547*t16468;
  t16379 = t2357*t15889*t12427;
  t16380 = -1.*t5684*t15889*t12613;
  t16384 = t2357*t15889*t13789;
  t16387 = t2357*t15939*t14334;
  t16397 = var2[0]*t2357*t15939;
  t16398 = t213*t5684*t15939;
  t16399 = t2063*t9799;
  t16401 = t16398 + t16399;
  t16402 = var2[1]*t16401;
  t16403 = -1.*t2063*t5684*t15939;
  t16404 = t213*t9799;
  t16405 = t16403 + t16404;
  t16407 = var2[2]*t16405;
  t16408 = t7974*t12227;
  t16409 = t14953 + t16408;
  t16410 = t6343*t16409;
  t16416 = t15930*t12227;
  t16421 = -1.*t15889*t12227;
  t16425 = -1.*t11584*t2720;
  t16426 = -1.*t6343*t12227;
  t16427 = t16425 + t15216 + t16426;
  t16428 = t7974*t16427;
  t16431 = t2357*t15889*t14971;
  t16704 = t8178*t16468;
  t16434 = t2357*t15930*t12427;
  t16435 = -1.*t5684*t15930*t12613;
  t16708 = -1.*t1547*t16468;
  t16441 = -1.*t2357*t15889*t12427;
  t16442 = t5684*t15889*t12613;
  t16445 = t2357*t15930*t15318;
  t16730 = -1.*t733*t754;
  t16731 = -1.*t1000*t1095;
  t16732 = t16730 + t16731;
  t16734 = t1442*t457*t2720;
  t16735 = -1.*t697*t2720*t1443;
  t16736 = t16734 + t16735;
  t16741 = t457*t697*t2720;
  t16742 = t1442*t2720*t1443;
  t16743 = t16741 + t16742;
  t16747 = t2357*t16732;
  t16748 = -1.*t5684*t16736;
  t16749 = t16747 + t16748;
  t16758 = t457*t697*t11584;
  t16759 = t1442*t11584*t1443;
  t16760 = t16758 + t16759;
  t16762 = t1442*t457*t11584;
  t16764 = -1.*t697*t11584*t1443;
  t16765 = t16762 + t16764;
  t16761 = -1.*t8178*t16760;
  t16770 = 0.28121*t733;
  t16771 = -1.*t733*t11567;
  t16772 = 0.305*t1000*t1095;
  t16773 = t16770 + t16771 + t16772;
  t16775 = t8927*t16760;
  t16782 = t16773*t5684;
  t16783 = t2357*t16765;
  t16784 = t16782 + t16783;
  t16786 = t2357*t16773;
  t16794 = -1.*t5684*t16765;
  t16818 = t16786 + t16794;
  t16900 = t11584*t16732;
  t16902 = t2720*t16773;
  t16928 = Power(t1442,2);
  t16931 = Power(t697,2);
  t16917 = -1.*t16773*t1297;
  t16733 = t16732*t5684;
  t16737 = t2357*t16736;
  t16738 = t16733 + t16737;
  t16960 = t16760*t1547;
  t16965 = t16743*t12531;
  t16969 = -1.*t8927*t16760;
  t6854 = t2063*t1547;
  t7486 = -1.*t213*t6598;
  t7488 = t6854 + t7486;
  t17073 = t8178*t16760;
  t17082 = -1.*t16760*t1547;
  t17084 = -1.*t16743*t12531;
  t16725 = t697*t11979;
  t16727 = -1.*t1442*t12119;
  t16728 = t16725 + t16727;
  t10430 = t2063*t8927;
  t10549 = -1.*t213*t10140;
  t10652 = t10430 + t10549;
  t17121 = -0.305*t754*t1000;
  t17122 = 0.305*t733*t1095;
  t17123 = t17121 + t17122;
  t17124 = t457*t697*t17123;
  t17126 = t1442*t17123*t1443;
  t17127 = t17124 + t17126;
  t17129 = t1442*t457*t17123;
  t17130 = -1.*t697*t17123*t1443;
  t17131 = t17129 + t17130;
  t17135 = t457*t697*t16732;
  t17136 = t1442*t16732*t1443;
  t17137 = t17135 + t17136;
  t17128 = -1.*t8178*t17127;
  t17141 = -0.305*t733*t754;
  t17142 = t17141 + t11810;
  t17148 = t1442*t457*t16732;
  t17149 = -1.*t697*t16732*t1443;
  t17150 = t17148 + t17149;
  t17144 = t8927*t17127;
  t17147 = t17137*t12531;
  t17157 = t17142*t5684;
  t17158 = t2357*t17131;
  t17159 = t17157 + t17158;
  t17161 = t2357*t17142;
  t17162 = -1.*t5684*t17131;
  t17163 = t17161 + t17162;
  t17168 = t8825*t5684;
  t17169 = t2357*t17150;
  t17170 = t17168 + t17169;
  t16896 = -1.*t8825*t11845;
  t16897 = t16896 + t16187;
  t16907 = t11845*t1297;
  t16910 = t16334 + t16907;
  t16914 = -1.*t8825*t11584;
  t16922 = -1.*t1442*t8825*t11979;
  t16923 = -1.*t697*t8825*t12119;
  t16924 = t16187 + t16922 + t16923;
  t17187 = t2720*t17142;
  t17194 = -1.*t17142*t1297;
  t16948 = t1442*t1297*t11979;
  t16950 = t697*t1297*t12119;
  t16952 = t16334 + t16948 + t16950;
  t17219 = t17127*t1547;
  t17223 = -1.*t8927*t17127;
  t17225 = -1.*t17137*t12531;
  t17176 = t2357*t8825;
  t17177 = -1.*t5684*t17150;
  t17178 = t17176 + t17177;
  t17055 = -0.15121*t16732;
  t17056 = -0.15121*t1297;
  t17058 = t17055 + t17056;
  t17059 = var2[12]*t17058;
  t17060 = -1.*t697*t11979;
  t17063 = t1442*t12119;
  t17064 = t17060 + t17063;
  t17265 = t8178*t17127;
  t17272 = -1.*t17127*t1547;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1547*t213 - 1.*t2063*t6598)*var2[1] + t7488*var2[2];
  p_output1[10]=(t2063*t5684*t7974 - 1.*t213*t8178)*var2[1] + (t213*t5684*t7974 + t2063*t8178)*var2[2];
  p_output1[11]=(-1.*t10140*t2063 - 1.*t213*t8927)*var2[1] + t10652*var2[2];
  p_output1[12]=t6598*var2[0] - 1.*t11132*t213*var2[1] + t11132*t2063*var2[2] + (t10140*t12649 + (t10140*t12367 + t10140*t12427 + t11402*t12613 + t12613*t12975)*t2357*t7974 - 1.*t13289*t5684*t7974 + t11402*(t12367*t5684*t7974 + t12427*t5684*t7974))*var2[3];
  p_output1[13]=-1.*t5684*t7974*var2[0] + t213*t2357*t7974*var2[1] - 1.*t2063*t2357*t7974*var2[2] + ((-1.*t10140*t12367 - 1.*t10140*t12427 - 1.*t11402*t12613 - 1.*t12613*t12975)*t13520 + t10140*t14334 + t13789*t6598 + t11402*(t11132*t12613 + t12613*t13520 + t12367*t6598 + t12427*t6598))*var2[3];
  p_output1[14]=t10140*var2[0] - 1.*t12975*t213*var2[1] + t12975*t2063*var2[2] + (t14971*t6598 - 1.*t15318*t5684*t7974 + t2357*(-1.*t11132*t12613 - 1.*t12613*t13520 - 1.*t12367*t6598 - 1.*t12427*t6598)*t7974 + t13520*(-1.*t12367*t5684*t7974 - 1.*t12427*t5684*t7974))*var2[3];
  p_output1[15]=t15901 + t15906 + t15910 + (t15957 + t16157 + t2357*(t15935 + t15944 + t16153 + t16154 + t11402*t15921*t2357 - 1.*t10140*t15921*t5684)*t7974 + t11402*(t15923 + t15924 + t16144 + t16147 - 1.*t15921*t15962*t7974 - 1.*t15921*t16142*t7974))*var2[3] + (t15914 + t15950 + (t15923 + t15924 + t15931 - 1.*t15921*t7974)*t8927 + t8178*(t15935 + t15941 + t15944 + t15921*t9799))*var2[4];
  p_output1[16]=t16168 + t16174 + t16179 + (t16384 + t16387 + t13520*(t16181 + t16183 + t16373 + t16374 - 1.*t11402*t15921*t2357 + t10140*t15921*t5684) + t11402*(t16198 + t16200 + t16379 + t16380 + t13520*t15921*t2357 - 1.*t15921*t5684*t6598))*var2[3] + (t16196 + t16366 + (t16198 + t16199 + t16200 + t15921*t6343)*t8927 + t1547*(t16181 + t16182 + t16183 - 1.*t15921*t9799))*var2[4];
  p_output1[17]=t16397 + t16402 + t16407 + (t16431 + t16445 + t2357*(t16420 + t16422 + t16441 + t16442 - 1.*t13520*t15921*t2357 + t15921*t5684*t6598)*t7974 + t13520*(t16413 + t16414 + t16434 + t16435 + t15921*t15962*t7974 + t15921*t16142*t7974))*var2[3] + (t16410 + t16428 + t1547*(t16413 + t16414 + t16416 + t15921*t7974) + (t16420 + t16421 + t16422 - 1.*t15921*t6343)*t8178)*var2[4];
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
  p_output1[36]=t15901 + t15906 + t15910 + (t15957 + t16157 + t2357*(t15935 + t16153 + t16154 + t16474 + t11402*t16463*t2357 - 1.*t10140*t16463*t5684)*t7974 + t11402*(t15923 + t16144 + t16147 + t16469 - 1.*t15962*t16463*t7974 - 1.*t16142*t16463*t7974))*var2[3] + (t15914 + t15950 + (t15923 + t15931 + t16469 - 1.*t16463*t7974)*t8927 + t8178*(t15935 + t15941 + t16474 + t16463*t9799))*var2[4] + t1297*(t11979*t1442 - 1.*t1442*t16450 + t12119*t697 + t16456*t697)*var2[5];
  p_output1[37]=t16168 + t16174 + t16179 + (t16384 + t16387 + t13520*(t16181 + t16373 + t16374 + t16675 - 1.*t11402*t16463*t2357 + t10140*t16463*t5684) + t11402*(t16198 + t16379 + t16380 + t16679 + t13520*t16463*t2357 - 1.*t16463*t5684*t6598))*var2[3] + (t16196 + t16366 + (t16198 + t16199 + t16679 + t16463*t6343)*t8927 + t1547*(t16181 + t16182 + t16675 - 1.*t16463*t9799))*var2[4] + (t1297*(t12119*t1297*t1442 + t1297*t1442*t16456 - 1.*t11979*t1297*t697 + t1297*t16450*t697) + t2720*(-1.*t12119*t1442*t8825 - 1.*t1442*t16456*t8825 + t11979*t697*t8825 - 1.*t16450*t697*t8825))*var2[5];
  p_output1[38]=t16397 + t16402 + t16407 + (t16431 + t16445 + t2357*(t16420 + t16441 + t16442 + t16708 - 1.*t13520*t16463*t2357 + t16463*t5684*t6598)*t7974 + t13520*(t16413 + t16434 + t16435 + t16704 + t15962*t16463*t7974 + t16142*t16463*t7974))*var2[3] + (t16410 + t16428 + t1547*(t16413 + t16416 + t16704 + t16463*t7974) + (t16420 + t16421 + t16708 - 1.*t16463*t6343)*t8178)*var2[4] + t2720*(-1.*t11979*t1442 + t1442*t16450 - 1.*t12119*t697 - 1.*t16456*t697)*var2[5];
  p_output1[39]=t16738*var2[0] + (t16743*t2063 - 1.*t16749*t213)*var2[1] + (t16749*t2063 + t16743*t213)*var2[2] + (t12649*t13520 + (t13934 + t14280 + t14312 + t16775 + t11402*t16784 + t10140*t16818)*t2357*t7974 + t11402*(t16761 - 1.*t16784*t2357*t7974 + t16818*t5684*t7974))*var2[3] + (t1547*t15912 + (t16761 - 1.*t16765*t7974)*t8927 + t8178*(t13934 + t16334 + t16364 + t1297*t16773 + t16775 + t16765*t9799))*var2[4] + t16728*t2720*var2[5];
  p_output1[40]=(t13520*t14334 + t13789*t16738 + t13520*(t15216 + t15219 + t15249 - 1.*t11402*t16784 - 1.*t10140*t16818 + t16969) + t11402*(t12427*t16738 + t12613*t16749 + t13520*t16784 + t16960 + t16965 + t16818*t6598))*var2[3] + (t1547*t16365 + t16193*t16743 + (t12227*t16736 + t16900 + t16902 + t16960 + t16965 + t16765*t6343)*t8927 + t1547*(t15216 + t16425 + t16426 + t16917 + t16969 - 1.*t16765*t9799))*var2[4] + (t16732*t16924 + t16952*t2720 + t1297*(t16900 + t16902 + t11584*t1297*t16928 + t11584*t1297*t16931 + t11979*t1442*t2720 + t12119*t2720*t697) + t2720*(-1.*t11979*t1297*t1442 + t16425 + t16917 - 1.*t12119*t1297*t697 - 1.*t11584*t16928*t8825 - 1.*t11584*t16931*t8825))*var2[5] + (t16732*t16897 + t16910*t2720 + (-1.*t11845*t1297 + t16425 + t16914 + t16917)*t2720 + t1297*(t15947 + t16900 + t16902 + t11845*t2720))*var2[12];
  p_output1[41]=t17059 + t13520*var2[0] + t7488*var2[1] + (t1547*t213 + t2063*t6598)*var2[2] + (t14971*t16738 + t2357*(-1.*t12427*t16738 - 1.*t12613*t16749 - 1.*t13520*t16784 + t17082 + t17084 - 1.*t16818*t6598)*t7974 + t13520*(t17073 + t16784*t2357*t7974 - 1.*t16818*t5684*t7974))*var2[3] + (t16409*t16743 + t1547*(t17073 + t16765*t7974) + (-1.*t11584*t16732 - 1.*t12227*t16736 + t17082 + t17084 - 1.*t16773*t2720 - 1.*t16765*t6343)*t8178)*var2[4] + t16732*t17064*var2[5];
  p_output1[42]=t11402*var2[0] + t10652*var2[1] + (t10140*t2063 + t213*t8927)*var2[2] + (t12649*t17170 + (t17144 + t17147 + t11402*t17159 + t10140*t17163 + t12427*t17170 + t12613*t17178)*t2357*t7974 + t11402*(t17128 - 1.*t17159*t2357*t7974 + t17163*t5684*t7974))*var2[3] + (t15912*t17137 + (t17128 - 1.*t17131*t7974)*t8927 + t8178*(t1297*t17142 + t17144 + t17147 + t12227*t17150 + t11584*t8825 + t17131*t9799))*var2[4] + t16728*t8825*var2[5] + (0.28121*t754 - 1.*t11567*t754 - 0.305*Power(t754,2))*var2[13];
  p_output1[43]=(t11402*t13789 + t14334*t17170 + t13520*(-1.*t11402*t17159 - 1.*t10140*t17163 - 1.*t12427*t17170 - 1.*t12613*t17178 + t17223 + t17225) + t11402*(t13272 + t13274 + t13278 + t13520*t17159 + t17219 + t17163*t6598))*var2[3] + (t16365*t17137 + t16193*t8927 + (t13272 + t15947 + t15948 + t17187 + t17219 + t17131*t6343)*t8927 + t1547*(t16914 - 1.*t12227*t17150 + t17194 + t17223 + t17225 - 1.*t17131*t9799))*var2[4] + (t1297*t16924 + t16952*t8825 + t2720*(-1.*t11979*t1442*t16732 + t16914 + t17194 - 1.*t12119*t16732*t697 - 1.*t16928*t17123*t8825 - 1.*t16931*t17123*t8825) + t1297*(t15947 + t1297*t16928*t17123 + t1297*t16931*t17123 + t17187 + t11979*t1442*t8825 + t12119*t697*t8825))*var2[5] + (t1297*t16897 + t16910*t8825 + t1297*(t15947 + t1297*t17123 + t17187 + t11845*t8825) + t2720*(-1.*t11845*t16732 + t16914 + t17194 - 1.*t17123*t8825))*var2[12];
  p_output1[44]=t17059 + t17170*var2[0] + (t17137*t2063 - 1.*t17178*t213)*var2[1] + (t17178*t2063 + t17137*t213)*var2[2] + (t11402*t14971 + t2357*(t13741 + t13779 + t13781 - 1.*t13520*t17159 + t17272 - 1.*t17163*t6598)*t7974 + t13520*(t17265 + t17159*t2357*t7974 - 1.*t17163*t5684*t7974))*var2[3] + (t1547*(t17265 + t17131*t7974) + (t13741 + t16187 + t16189 + t17272 - 1.*t17142*t2720 - 1.*t17131*t6343)*t8178 + t16409*t8927)*var2[4] + t1297*t17064*var2[5] + (-0.28121*t1095 + t1095*t11567 + 0.305*t1095*t754)*var2[13];
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
