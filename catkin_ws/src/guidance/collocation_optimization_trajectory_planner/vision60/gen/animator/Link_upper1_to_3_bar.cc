/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:07 GMT+02:00
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
  double t9567;
  double t9916;
  double t10030;
  double t10566;
  double t10850;
  double t9754;
  double t11115;
  double t4314;
  double t11134;
  double t11159;
  double t11193;
  double t9202;
  double t9562;
  double t9910;
  double t10348;
  double t10569;
  double t10649;
  double t10884;
  double t10913;
  double t10915;
  double t11091;
  double t11217;
  double t11222;
  double t11228;
  double t11253;
  double t11470;
  double t11485;
  double t11502;
  double t11516;
  double t11093;
  double t11372;
  double t11521;
  double t12120;
  double t12250;
  double t12255;
  double t12256;
  double t12266;
  double t12169;
  double t12251;
  double t12252;
  double t12299;
  double t12301;
  double t12303;
  double t12166;
  double t12254;
  double t12284;
  double t12285;
  double t12286;
  double t12291;
  double t12460;
  double t12464;
  double t12469;
  double t12473;
  double t12490;
  double t12494;
  double t12495;
  double t12497;
  double t12295;
  double t12474;
  double t12522;
  double t19529;
  double t19537;
  double t19538;
  double t18989;
  double t18990;
  double t19004;
  double t19825;
  double t19828;
  double t19881;
  double t18860;
  double t19078;
  double t19628;
  double t19643;
  double t19663;
  double t19708;
  double t19883;
  double t19893;
  double t19899;
  double t20271;
  double t20464;
  double t20465;
  double t20468;
  double t20477;
  double t19821;
  double t20423;
  double t20602;
  double t11532;
  double t11535;
  double t24195;
  double t11667;
  double t11669;
  double t11676;
  double t11677;
  double t11707;
  double t11709;
  double t11713;
  double t11719;
  double t11746;
  double t11748;
  double t11760;
  double t11769;
  double t11774;
  double t11788;
  double t11796;
  double t11802;
  double t11811;
  double t11813;
  double t11819;
  double t11863;
  double t11867;
  double t11869;
  double t11877;
  double t11888;
  double t11893;
  double t11894;
  double t11912;
  double t11927;
  double t11980;
  double t12103;
  double t12105;
  double t12111;
  double t12115;
  double t12116;
  double t24198;
  double t12523;
  double t12525;
  double t24468;
  double t12530;
  double t12534;
  double t12547;
  double t12548;
  double t12552;
  double t12553;
  double t12556;
  double t12557;
  double t12771;
  double t12776;
  double t13181;
  double t13536;
  double t15425;
  double t15430;
  double t17150;
  double t17176;
  double t17380;
  double t17396;
  double t17635;
  double t17668;
  double t17985;
  double t17992;
  double t18147;
  double t18177;
  double t18198;
  double t18305;
  double t18478;
  double t18503;
  double t18564;
  double t18583;
  double t18678;
  double t18695;
  double t18749;
  double t18781;
  double t24469;
  double t20911;
  double t21134;
  double t24590;
  double t21220;
  double t21234;
  double t21359;
  double t21382;
  double t21513;
  double t23058;
  double t23132;
  double t23187;
  double t23505;
  double t23544;
  double t23580;
  double t23581;
  double t23631;
  double t23648;
  double t23848;
  double t23849;
  double t23883;
  double t23885;
  double t23887;
  double t23889;
  double t23911;
  double t23921;
  double t24041;
  double t24061;
  double t24075;
  double t24081;
  double t24162;
  double t24163;
  double t24167;
  double t24169;
  double t24173;
  double t24174;
  double t24176;
  double t24184;
  double t24605;
  t9567 = Cos(var1[4]);
  t9916 = Sin(var1[9]);
  t10030 = Sin(var1[4]);
  t10566 = Cos(var1[9]);
  t10850 = Sin(var1[5]);
  t9754 = Cos(var1[5]);
  t11115 = Sin(var1[10]);
  t4314 = Cos(var1[10]);
  t11134 = t10566*t10030;
  t11159 = t9567*t9916*t10850;
  t11193 = t11134 + t11159;
  t9202 = -1.*t4314;
  t9562 = 1. + t9202;
  t9910 = -0.325*t9562*t9567*t9754;
  t10348 = -0.1575*t9916*t10030;
  t10569 = -1.*t10566;
  t10649 = 1. + t10569;
  t10884 = -0.1575*t10649*t9567*t10850;
  t10913 = t9916*t10030;
  t10915 = -1.*t10566*t9567*t10850;
  t11091 = t10913 + t10915;
  t11217 = 0.325*t11115*t11193;
  t11222 = -1.*t9567*t9754*t11115;
  t11228 = t4314*t11193;
  t11253 = t11222 + t11228;
  t11470 = t4314*t9567*t9754;
  t11485 = t11115*t11193;
  t11502 = t11470 + t11485;
  t11516 = -0.325*t11502;
  t11093 = 0.232413*t11091;
  t11372 = 0.013312*t11253;
  t11521 = var1[0] + t9910 + t10348 + t10884 + t11093 + t11217 + t11372 + t11516;
  t12120 = Sin(var1[3]);
  t12250 = Cos(var1[3]);
  t12255 = t12250*t9754;
  t12256 = -1.*t12120*t10030*t10850;
  t12266 = t12255 + t12256;
  t12169 = t9754*t12120*t10030;
  t12251 = t12250*t10850;
  t12252 = t12169 + t12251;
  t12299 = -1.*t10566*t9567*t12120;
  t12301 = -1.*t9916*t12266;
  t12303 = t12299 + t12301;
  t12166 = 0.1575*t9567*t9916*t12120;
  t12254 = -0.325*t9562*t12252;
  t12284 = 0.1575*t10649*t12266;
  t12285 = -1.*t9567*t9916*t12120;
  t12286 = t10566*t12266;
  t12291 = t12285 + t12286;
  t12460 = 0.325*t11115*t12303;
  t12464 = -1.*t11115*t12252;
  t12469 = t4314*t12303;
  t12473 = t12464 + t12469;
  t12490 = t4314*t12252;
  t12494 = t11115*t12303;
  t12495 = t12490 + t12494;
  t12497 = -0.325*t12495;
  t12295 = 0.232413*t12291;
  t12474 = 0.013312*t12473;
  t12522 = var1[1] + t12166 + t12254 + t12284 + t12295 + t12460 + t12474 + t12497;
  t19529 = t9754*t12120;
  t19537 = t12250*t10030*t10850;
  t19538 = t19529 + t19537;
  t18989 = -1.*t12250*t9754*t10030;
  t18990 = t12120*t10850;
  t19004 = t18989 + t18990;
  t19825 = t10566*t12250*t9567;
  t19828 = -1.*t9916*t19538;
  t19881 = t19825 + t19828;
  t18860 = -0.1575*t12250*t9567*t9916;
  t19078 = -0.325*t9562*t19004;
  t19628 = 0.1575*t10649*t19538;
  t19643 = t12250*t9567*t9916;
  t19663 = t10566*t19538;
  t19708 = t19643 + t19663;
  t19883 = 0.325*t11115*t19881;
  t19893 = -1.*t11115*t19004;
  t19899 = t4314*t19881;
  t20271 = t19893 + t19899;
  t20464 = t4314*t19004;
  t20465 = t11115*t19881;
  t20468 = t20464 + t20465;
  t20477 = -0.325*t20468;
  t19821 = 0.232413*t19708;
  t20423 = 0.013312*t20271;
  t20602 = var1[2] + t18860 + t19078 + t19628 + t19821 + t19883 + t20423 + t20477;
  t11532 = 0.236361*t11091;
  t11535 = 0.010346*t11253;
  t24195 = -0.575*t11502;
  t11667 = 0.239132*t11091;
  t11669 = 0.006259*t11253;
  t11676 = 0.240425*t11091;
  t11677 = 0.001494*t11253;
  t11707 = 0.240102*t11091;
  t11709 = -0.003433*t11253;
  t11713 = 0.238196*t11091;
  t11719 = -0.007988*t11253;
  t11746 = 0.234914*t11091;
  t11748 = -0.011678*t11253;
  t11760 = 0.230612*t11091;
  t11769 = -0.014102*t11253;
  t11774 = 0.225756*t11091;
  t11788 = -0.014998*t11253;
  t11796 = 0.220873*t11091;
  t11802 = -0.014268*t11253;
  t11811 = 0.216491*t11091;
  t11813 = -0.011993*t11253;
  t11819 = 0.213085*t11091;
  t11863 = -0.008418*t11253;
  t11867 = 0.211024*t11091;
  t11869 = -0.00393*t11253;
  t11877 = 0.210532*t11091;
  t11888 = 0.000983*t11253;
  t11893 = 0.211662*t11091;
  t11894 = 0.00579*t11253;
  t11912 = 0.214292*t11091;
  t11927 = 0.009969*t11253;
  t11980 = 0.218136*t11091;
  t12103 = 0.013068*t11253;
  t12105 = 0.222778*t11091;
  t12111 = 0.014751*t11253;
  t12115 = 0.227716*t11091;
  t12116 = 0.014835*t11253;
  t24198 = var1[0] + t9910 + t10348 + t10884 + t11093 + t11217 + t11372 + t24195;
  t12523 = 0.236361*t12291;
  t12525 = 0.010346*t12473;
  t24468 = -0.575*t12495;
  t12530 = 0.239132*t12291;
  t12534 = 0.006259*t12473;
  t12547 = 0.240425*t12291;
  t12548 = 0.001494*t12473;
  t12552 = 0.240102*t12291;
  t12553 = -0.003433*t12473;
  t12556 = 0.238196*t12291;
  t12557 = -0.007988*t12473;
  t12771 = 0.234914*t12291;
  t12776 = -0.011678*t12473;
  t13181 = 0.230612*t12291;
  t13536 = -0.014102*t12473;
  t15425 = 0.225756*t12291;
  t15430 = -0.014998*t12473;
  t17150 = 0.220873*t12291;
  t17176 = -0.014268*t12473;
  t17380 = 0.216491*t12291;
  t17396 = -0.011993*t12473;
  t17635 = 0.213085*t12291;
  t17668 = -0.008418*t12473;
  t17985 = 0.211024*t12291;
  t17992 = -0.00393*t12473;
  t18147 = 0.210532*t12291;
  t18177 = 0.000983*t12473;
  t18198 = 0.211662*t12291;
  t18305 = 0.00579*t12473;
  t18478 = 0.214292*t12291;
  t18503 = 0.009969*t12473;
  t18564 = 0.218136*t12291;
  t18583 = 0.013068*t12473;
  t18678 = 0.222778*t12291;
  t18695 = 0.014751*t12473;
  t18749 = 0.227716*t12291;
  t18781 = 0.014835*t12473;
  t24469 = var1[1] + t12166 + t12254 + t12284 + t12295 + t12460 + t12474 + t24468;
  t20911 = 0.236361*t19708;
  t21134 = 0.010346*t20271;
  t24590 = -0.575*t20468;
  t21220 = 0.239132*t19708;
  t21234 = 0.006259*t20271;
  t21359 = 0.240425*t19708;
  t21382 = 0.001494*t20271;
  t21513 = 0.240102*t19708;
  t23058 = -0.003433*t20271;
  t23132 = 0.238196*t19708;
  t23187 = -0.007988*t20271;
  t23505 = 0.234914*t19708;
  t23544 = -0.011678*t20271;
  t23580 = 0.230612*t19708;
  t23581 = -0.014102*t20271;
  t23631 = 0.225756*t19708;
  t23648 = -0.014998*t20271;
  t23848 = 0.220873*t19708;
  t23849 = -0.014268*t20271;
  t23883 = 0.216491*t19708;
  t23885 = -0.011993*t20271;
  t23887 = 0.213085*t19708;
  t23889 = -0.008418*t20271;
  t23911 = 0.211024*t19708;
  t23921 = -0.00393*t20271;
  t24041 = 0.210532*t19708;
  t24061 = 0.000983*t20271;
  t24075 = 0.211662*t19708;
  t24081 = 0.00579*t20271;
  t24162 = 0.214292*t19708;
  t24163 = 0.009969*t20271;
  t24167 = 0.218136*t19708;
  t24169 = 0.013068*t20271;
  t24173 = 0.222778*t19708;
  t24174 = 0.014751*t20271;
  t24176 = 0.227716*t19708;
  t24184 = 0.014835*t20271;
  t24605 = var1[2] + t18860 + t19078 + t19628 + t19821 + t19883 + t20423 + t24590;
  p_output1[0]=t11521;
  p_output1[1]=t10348 + t10884 + t11217 + t11516 + t11532 + t11535 + t9910 + var1[0];
  p_output1[2]=t10348 + t10884 + t11217 + t11516 + t11667 + t11669 + t9910 + var1[0];
  p_output1[3]=t10348 + t10884 + t11217 + t11516 + t11676 + t11677 + t9910 + var1[0];
  p_output1[4]=t10348 + t10884 + t11217 + t11516 + t11707 + t11709 + t9910 + var1[0];
  p_output1[5]=t10348 + t10884 + t11217 + t11516 + t11713 + t11719 + t9910 + var1[0];
  p_output1[6]=t10348 + t10884 + t11217 + t11516 + t11746 + t11748 + t9910 + var1[0];
  p_output1[7]=t10348 + t10884 + t11217 + t11516 + t11760 + t11769 + t9910 + var1[0];
  p_output1[8]=t10348 + t10884 + t11217 + t11516 + t11774 + t11788 + t9910 + var1[0];
  p_output1[9]=t10348 + t10884 + t11217 + t11516 + t11796 + t11802 + t9910 + var1[0];
  p_output1[10]=t10348 + t10884 + t11217 + t11516 + t11811 + t11813 + t9910 + var1[0];
  p_output1[11]=t10348 + t10884 + t11217 + t11516 + t11819 + t11863 + t9910 + var1[0];
  p_output1[12]=t10348 + t10884 + t11217 + t11516 + t11867 + t11869 + t9910 + var1[0];
  p_output1[13]=t10348 + t10884 + t11217 + t11516 + t11877 + t11888 + t9910 + var1[0];
  p_output1[14]=t10348 + t10884 + t11217 + t11516 + t11893 + t11894 + t9910 + var1[0];
  p_output1[15]=t10348 + t10884 + t11217 + t11516 + t11912 + t11927 + t9910 + var1[0];
  p_output1[16]=t10348 + t10884 + t11217 + t11516 + t11980 + t12103 + t9910 + var1[0];
  p_output1[17]=t10348 + t10884 + t11217 + t11516 + t12105 + t12111 + t9910 + var1[0];
  p_output1[18]=t10348 + t10884 + t11217 + t11516 + t12115 + t12116 + t9910 + var1[0];
  p_output1[19]=t11521;
  p_output1[20]=t12522;
  p_output1[21]=t12166 + t12254 + t12284 + t12460 + t12497 + t12523 + t12525 + var1[1];
  p_output1[22]=t12166 + t12254 + t12284 + t12460 + t12497 + t12530 + t12534 + var1[1];
  p_output1[23]=t12166 + t12254 + t12284 + t12460 + t12497 + t12547 + t12548 + var1[1];
  p_output1[24]=t12166 + t12254 + t12284 + t12460 + t12497 + t12552 + t12553 + var1[1];
  p_output1[25]=t12166 + t12254 + t12284 + t12460 + t12497 + t12556 + t12557 + var1[1];
  p_output1[26]=t12166 + t12254 + t12284 + t12460 + t12497 + t12771 + t12776 + var1[1];
  p_output1[27]=t12166 + t12254 + t12284 + t12460 + t12497 + t13181 + t13536 + var1[1];
  p_output1[28]=t12166 + t12254 + t12284 + t12460 + t12497 + t15425 + t15430 + var1[1];
  p_output1[29]=t12166 + t12254 + t12284 + t12460 + t12497 + t17150 + t17176 + var1[1];
  p_output1[30]=t12166 + t12254 + t12284 + t12460 + t12497 + t17380 + t17396 + var1[1];
  p_output1[31]=t12166 + t12254 + t12284 + t12460 + t12497 + t17635 + t17668 + var1[1];
  p_output1[32]=t12166 + t12254 + t12284 + t12460 + t12497 + t17985 + t17992 + var1[1];
  p_output1[33]=t12166 + t12254 + t12284 + t12460 + t12497 + t18147 + t18177 + var1[1];
  p_output1[34]=t12166 + t12254 + t12284 + t12460 + t12497 + t18198 + t18305 + var1[1];
  p_output1[35]=t12166 + t12254 + t12284 + t12460 + t12497 + t18478 + t18503 + var1[1];
  p_output1[36]=t12166 + t12254 + t12284 + t12460 + t12497 + t18564 + t18583 + var1[1];
  p_output1[37]=t12166 + t12254 + t12284 + t12460 + t12497 + t18678 + t18695 + var1[1];
  p_output1[38]=t12166 + t12254 + t12284 + t12460 + t12497 + t18749 + t18781 + var1[1];
  p_output1[39]=t12522;
  p_output1[40]=t20602;
  p_output1[41]=t18860 + t19078 + t19628 + t19883 + t20477 + t20911 + t21134 + var1[2];
  p_output1[42]=t18860 + t19078 + t19628 + t19883 + t20477 + t21220 + t21234 + var1[2];
  p_output1[43]=t18860 + t19078 + t19628 + t19883 + t20477 + t21359 + t21382 + var1[2];
  p_output1[44]=t18860 + t19078 + t19628 + t19883 + t20477 + t21513 + t23058 + var1[2];
  p_output1[45]=t18860 + t19078 + t19628 + t19883 + t20477 + t23132 + t23187 + var1[2];
  p_output1[46]=t18860 + t19078 + t19628 + t19883 + t20477 + t23505 + t23544 + var1[2];
  p_output1[47]=t18860 + t19078 + t19628 + t19883 + t20477 + t23580 + t23581 + var1[2];
  p_output1[48]=t18860 + t19078 + t19628 + t19883 + t20477 + t23631 + t23648 + var1[2];
  p_output1[49]=t18860 + t19078 + t19628 + t19883 + t20477 + t23848 + t23849 + var1[2];
  p_output1[50]=t18860 + t19078 + t19628 + t19883 + t20477 + t23883 + t23885 + var1[2];
  p_output1[51]=t18860 + t19078 + t19628 + t19883 + t20477 + t23887 + t23889 + var1[2];
  p_output1[52]=t18860 + t19078 + t19628 + t19883 + t20477 + t23911 + t23921 + var1[2];
  p_output1[53]=t18860 + t19078 + t19628 + t19883 + t20477 + t24041 + t24061 + var1[2];
  p_output1[54]=t18860 + t19078 + t19628 + t19883 + t20477 + t24075 + t24081 + var1[2];
  p_output1[55]=t18860 + t19078 + t19628 + t19883 + t20477 + t24162 + t24163 + var1[2];
  p_output1[56]=t18860 + t19078 + t19628 + t19883 + t20477 + t24167 + t24169 + var1[2];
  p_output1[57]=t18860 + t19078 + t19628 + t19883 + t20477 + t24173 + t24174 + var1[2];
  p_output1[58]=t18860 + t19078 + t19628 + t19883 + t20477 + t24176 + t24184 + var1[2];
  p_output1[59]=t20602;
  p_output1[60]=t24198;
  p_output1[61]=t10348 + t10884 + t11217 + t11532 + t11535 + t24195 + t9910 + var1[0];
  p_output1[62]=t10348 + t10884 + t11217 + t11667 + t11669 + t24195 + t9910 + var1[0];
  p_output1[63]=t10348 + t10884 + t11217 + t11676 + t11677 + t24195 + t9910 + var1[0];
  p_output1[64]=t10348 + t10884 + t11217 + t11707 + t11709 + t24195 + t9910 + var1[0];
  p_output1[65]=t10348 + t10884 + t11217 + t11713 + t11719 + t24195 + t9910 + var1[0];
  p_output1[66]=t10348 + t10884 + t11217 + t11746 + t11748 + t24195 + t9910 + var1[0];
  p_output1[67]=t10348 + t10884 + t11217 + t11760 + t11769 + t24195 + t9910 + var1[0];
  p_output1[68]=t10348 + t10884 + t11217 + t11774 + t11788 + t24195 + t9910 + var1[0];
  p_output1[69]=t10348 + t10884 + t11217 + t11796 + t11802 + t24195 + t9910 + var1[0];
  p_output1[70]=t10348 + t10884 + t11217 + t11811 + t11813 + t24195 + t9910 + var1[0];
  p_output1[71]=t10348 + t10884 + t11217 + t11819 + t11863 + t24195 + t9910 + var1[0];
  p_output1[72]=t10348 + t10884 + t11217 + t11867 + t11869 + t24195 + t9910 + var1[0];
  p_output1[73]=t10348 + t10884 + t11217 + t11877 + t11888 + t24195 + t9910 + var1[0];
  p_output1[74]=t10348 + t10884 + t11217 + t11893 + t11894 + t24195 + t9910 + var1[0];
  p_output1[75]=t10348 + t10884 + t11217 + t11912 + t11927 + t24195 + t9910 + var1[0];
  p_output1[76]=t10348 + t10884 + t11217 + t11980 + t12103 + t24195 + t9910 + var1[0];
  p_output1[77]=t10348 + t10884 + t11217 + t12105 + t12111 + t24195 + t9910 + var1[0];
  p_output1[78]=t10348 + t10884 + t11217 + t12115 + t12116 + t24195 + t9910 + var1[0];
  p_output1[79]=t24198;
  p_output1[80]=t24469;
  p_output1[81]=t12166 + t12254 + t12284 + t12460 + t12523 + t12525 + t24468 + var1[1];
  p_output1[82]=t12166 + t12254 + t12284 + t12460 + t12530 + t12534 + t24468 + var1[1];
  p_output1[83]=t12166 + t12254 + t12284 + t12460 + t12547 + t12548 + t24468 + var1[1];
  p_output1[84]=t12166 + t12254 + t12284 + t12460 + t12552 + t12553 + t24468 + var1[1];
  p_output1[85]=t12166 + t12254 + t12284 + t12460 + t12556 + t12557 + t24468 + var1[1];
  p_output1[86]=t12166 + t12254 + t12284 + t12460 + t12771 + t12776 + t24468 + var1[1];
  p_output1[87]=t12166 + t12254 + t12284 + t12460 + t13181 + t13536 + t24468 + var1[1];
  p_output1[88]=t12166 + t12254 + t12284 + t12460 + t15425 + t15430 + t24468 + var1[1];
  p_output1[89]=t12166 + t12254 + t12284 + t12460 + t17150 + t17176 + t24468 + var1[1];
  p_output1[90]=t12166 + t12254 + t12284 + t12460 + t17380 + t17396 + t24468 + var1[1];
  p_output1[91]=t12166 + t12254 + t12284 + t12460 + t17635 + t17668 + t24468 + var1[1];
  p_output1[92]=t12166 + t12254 + t12284 + t12460 + t17985 + t17992 + t24468 + var1[1];
  p_output1[93]=t12166 + t12254 + t12284 + t12460 + t18147 + t18177 + t24468 + var1[1];
  p_output1[94]=t12166 + t12254 + t12284 + t12460 + t18198 + t18305 + t24468 + var1[1];
  p_output1[95]=t12166 + t12254 + t12284 + t12460 + t18478 + t18503 + t24468 + var1[1];
  p_output1[96]=t12166 + t12254 + t12284 + t12460 + t18564 + t18583 + t24468 + var1[1];
  p_output1[97]=t12166 + t12254 + t12284 + t12460 + t18678 + t18695 + t24468 + var1[1];
  p_output1[98]=t12166 + t12254 + t12284 + t12460 + t18749 + t18781 + t24468 + var1[1];
  p_output1[99]=t24469;
  p_output1[100]=t24605;
  p_output1[101]=t18860 + t19078 + t19628 + t19883 + t20911 + t21134 + t24590 + var1[2];
  p_output1[102]=t18860 + t19078 + t19628 + t19883 + t21220 + t21234 + t24590 + var1[2];
  p_output1[103]=t18860 + t19078 + t19628 + t19883 + t21359 + t21382 + t24590 + var1[2];
  p_output1[104]=t18860 + t19078 + t19628 + t19883 + t21513 + t23058 + t24590 + var1[2];
  p_output1[105]=t18860 + t19078 + t19628 + t19883 + t23132 + t23187 + t24590 + var1[2];
  p_output1[106]=t18860 + t19078 + t19628 + t19883 + t23505 + t23544 + t24590 + var1[2];
  p_output1[107]=t18860 + t19078 + t19628 + t19883 + t23580 + t23581 + t24590 + var1[2];
  p_output1[108]=t18860 + t19078 + t19628 + t19883 + t23631 + t23648 + t24590 + var1[2];
  p_output1[109]=t18860 + t19078 + t19628 + t19883 + t23848 + t23849 + t24590 + var1[2];
  p_output1[110]=t18860 + t19078 + t19628 + t19883 + t23883 + t23885 + t24590 + var1[2];
  p_output1[111]=t18860 + t19078 + t19628 + t19883 + t23887 + t23889 + t24590 + var1[2];
  p_output1[112]=t18860 + t19078 + t19628 + t19883 + t23911 + t23921 + t24590 + var1[2];
  p_output1[113]=t18860 + t19078 + t19628 + t19883 + t24041 + t24061 + t24590 + var1[2];
  p_output1[114]=t18860 + t19078 + t19628 + t19883 + t24075 + t24081 + t24590 + var1[2];
  p_output1[115]=t18860 + t19078 + t19628 + t19883 + t24162 + t24163 + t24590 + var1[2];
  p_output1[116]=t18860 + t19078 + t19628 + t19883 + t24167 + t24169 + t24590 + var1[2];
  p_output1[117]=t18860 + t19078 + t19628 + t19883 + t24173 + t24174 + t24590 + var1[2];
  p_output1[118]=t18860 + t19078 + t19628 + t19883 + t24176 + t24184 + t24590 + var1[2];
  p_output1[119]=t24605;
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_upper1_to_3_bar.hh"

namespace SymFunction
{

void Link_upper1_to_3_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
