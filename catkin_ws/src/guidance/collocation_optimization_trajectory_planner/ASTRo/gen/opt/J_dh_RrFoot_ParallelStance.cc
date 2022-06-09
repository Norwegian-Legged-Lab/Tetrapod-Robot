/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:31 GMT+02:00
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
  double t18196;
  double t18224;
  double t18359;
  double t18566;
  double t18585;
  double t18730;
  double t18742;
  double t18802;
  double t17359;
  double t17811;
  double t18823;
  double t19025;
  double t18791;
  double t18841;
  double t18990;
  double t17145;
  double t19026;
  double t19027;
  double t19031;
  double t19046;
  double t19051;
  double t19052;
  double t19117;
  double t19118;
  double t19119;
  double t19128;
  double t19139;
  double t19164;
  double t19168;
  double t19170;
  double t19248;
  double t19249;
  double t19250;
  double t19251;
  double t19252;
  double t19275;
  double t19276;
  double t19278;
  double t19279;
  double t19280;
  double t19299;
  double t19374;
  double t19378;
  double t19413;
  double t19233;
  double t19244;
  double t19245;
  double t19246;
  double t19254;
  double t19256;
  double t19262;
  double t19434;
  double t19438;
  double t19442;
  double t19447;
  double t19448;
  double t19450;
  double t19451;
  double t19452;
  double t19453;
  double t19178;
  double t19183;
  double t19200;
  double t19211;
  double t19216;
  double t19217;
  double t19460;
  double t19461;
  double t19463;
  double t19476;
  double t19488;
  double t19489;
  double t19266;
  double t19457;
  double t19458;
  double t19520;
  double t19527;
  double t19529;
  double t19210;
  double t19218;
  double t19219;
  double t19495;
  double t19512;
  double t19516;
  double t19638;
  double t19639;
  double t19640;
  double t19490;
  double t19492;
  double t19494;
  double t19518;
  double t19626;
  double t19627;
  double t19628;
  double t19814;
  double t19816;
  double t19817;
  double t19629;
  double t19839;
  double t19841;
  double t19842;
  double t19519;
  double t19606;
  double t19607;
  double t19821;
  double t19829;
  double t19822;
  double t19823;
  double t19824;
  double t19834;
  double t19845;
  double t19630;
  double t19631;
  double t19632;
  double t19641;
  double t19642;
  double t19643;
  double t19695;
  double t19698;
  double t19711;
  double t19720;
  double t19727;
  double t19728;
  double t19791;
  double t19792;
  double t19809;
  double t19890;
  double t19891;
  double t19892;
  double t19886;
  double t19887;
  double t19825;
  double t19897;
  double t19898;
  double t19940;
  double t19970;
  double t19993;
  double t19994;
  double t19844;
  double t19849;
  double t19852;
  double t19853;
  double t19855;
  double t19858;
  double t19859;
  double t19862;
  double t20013;
  double t19867;
  double t19868;
  double t20055;
  double t19876;
  double t19877;
  double t19880;
  double t20093;
  double t20098;
  double t20099;
  double t20116;
  double t20117;
  double t20118;
  double t20129;
  double t20131;
  double t20132;
  double t20138;
  double t20139;
  double t20142;
  double t20154;
  double t20155;
  double t20157;
  double t20158;
  double t20159;
  double t20161;
  double t20164;
  double t20166;
  double t20167;
  double t20168;
  double t20165;
  double t20176;
  double t20177;
  double t20179;
  double t20300;
  double t20329;
  double t20334;
  double t20337;
  double t20341;
  double t20342;
  double t20343;
  double t20347;
  double t20348;
  double t20350;
  double t20100;
  double t20101;
  double t20104;
  double t20105;
  double t20106;
  double t20107;
  double t20111;
  double t20384;
  double t20385;
  double t20386;
  double t20389;
  double t20391;
  double t20394;
  double t20395;
  double t20397;
  double t20404;
  double t20405;
  double t20406;
  double t20393;
  double t20410;
  double t20411;
  double t20412;
  double t20418;
  double t20419;
  double t20421;
  double t20415;
  double t20417;
  double t20427;
  double t20428;
  double t20431;
  double t20433;
  double t20434;
  double t20435;
  double t20439;
  double t20440;
  double t20443;
  double t19147;
  double t19155;
  double t19160;
  double t19614;
  double t19616;
  double t19619;
  double t20355;
  double t20356;
  double t20508;
  double t20174;
  double t20301;
  double t20564;
  double t20572;
  double t20699;
  double t20701;
  double t20515;
  double t20517;
  double t20518;
  double t20527;
  double t20539;
  double t20543;
  double t20544;
  double t20545;
  double t20546;
  double t20547;
  double t20548;
  double t20550;
  double t20552;
  double t20571;
  double t20642;
  double t20680;
  double t20696;
  double t20697;
  double t20700;
  double t20704;
  double t20705;
  double t20977;
  double t20710;
  double t20712;
  double t20984;
  double t20717;
  double t20720;
  double t20723;
  double t20726;
  double t21010;
  double t21014;
  double t21032;
  double t21047;
  double t21050;
  double t21038;
  double t21114;
  double t21116;
  double t20113;
  double t20119;
  double t20125;
  double t21122;
  double t21124;
  double t21007;
  double t21008;
  double t21017;
  double t21019;
  double t21090;
  double t21091;
  double t21092;
  double t21182;
  double t21105;
  double t21106;
  double t21108;
  double t21189;
  double t21191;
  double t21233;
  double t21241;
  double t21282;
  double t20448;
  double t20449;
  double t20451;
  double t20476;
  double t20477;
  double t20478;
  double t20379;
  double t20380;
  double t20382;
  double t21148;
  double t21153;
  double t21361;
  double t21125;
  double t21362;
  double t21363;
  double t21364;
  double t21394;
  double t21397;
  double t21402;
  double t21405;
  double t21373;
  double t21378;
  double t21379;
  double t21380;
  double t21382;
  double t21383;
  double t21384;
  double t21385;
  double t21386;
  double t21388;
  double t21389;
  double t21390;
  double t21392;
  double t21396;
  double t21404;
  double t21408;
  double t21409;
  double t21414;
  double t21443;
  double t21418;
  double t21419;
  double t21448;
  double t21424;
  double t21425;
  double t21429;
  double t20458;
  double t20459;
  double t20460;
  double t21473;
  double t21481;
  double t21483;
  double t21465;
  double t21466;
  double t21468;
  double t21526;
  double t21533;
  double t20374;
  double t20375;
  double t20377;
  double t20365;
  double t20367;
  t18196 = Cos(var1[16]);
  t18224 = Cos(var1[17]);
  t18359 = -1.*t18196*t18224;
  t18566 = Sin(var1[16]);
  t18585 = Sin(var1[17]);
  t18730 = -1.*t18566*t18585;
  t18742 = t18359 + t18730;
  t18802 = Cos(var1[15]);
  t17359 = Cos(var1[5]);
  t17811 = Sin(var1[15]);
  t18823 = Sin(var1[5]);
  t19025 = Cos(var1[3]);
  t18791 = t17359*t17811*t18742;
  t18841 = t18802*t18742*t18823;
  t18990 = t18791 + t18841;
  t17145 = Sin(var1[3]);
  t19026 = Cos(var1[4]);
  t19027 = -1.*t18224*t18566;
  t19031 = t18196*t18585;
  t19046 = t19027 + t19031;
  t19051 = t19026*t19046;
  t19052 = Sin(var1[4]);
  t19117 = t18802*t17359*t18742;
  t19118 = -1.*t17811*t18742*t18823;
  t19119 = t19117 + t19118;
  t19128 = -1.*t19052*t19119;
  t19139 = t19051 + t19128;
  t19164 = -1.*t19046*t19052;
  t19168 = -1.*t19026*t19119;
  t19170 = t19164 + t19168;
  t19248 = -1.*t18224;
  t19249 = 1. + t19248;
  t19250 = -0.50321*t19249;
  t19251 = -0.19821*t18224;
  t19252 = t19250 + t19251;
  t19275 = -1.*t18802;
  t19276 = 1. + t19275;
  t19278 = -0.15121*t19276;
  t19279 = -1.*t18196;
  t19280 = 1. + t19279;
  t19299 = -0.28121*t19280;
  t19374 = t18196*t19252;
  t19378 = 0.305*t18566*t18585;
  t19413 = t19299 + t19374 + t19378;
  t19233 = t17359*t17811;
  t19244 = t18802*t18823;
  t19245 = t19233 + t19244;
  t19246 = 0.28121*t18566;
  t19254 = t19252*t18566;
  t19256 = -0.305*t18196*t18585;
  t19262 = t19246 + t19254 + t19256;
  t19434 = t18802*t19413;
  t19438 = t19278 + t19434;
  t19442 = t17359*t19438;
  t19447 = -0.15121*t18802;
  t19448 = 0.15121*t17811;
  t19450 = t17811*t19413;
  t19451 = t19278 + t19447 + t19448 + t19450;
  t19452 = -1.*t19451*t18823;
  t19453 = t19442 + t19452;
  t19178 = t18196*t18224;
  t19183 = t18566*t18585;
  t19200 = t19178 + t19183;
  t19211 = t18802*t17359*t19046;
  t19216 = -1.*t17811*t19046*t18823;
  t19217 = t19211 + t19216;
  t19460 = t19262*t19052;
  t19461 = t19026*t19453;
  t19463 = t19460 + t19461;
  t19476 = t19026*t19200;
  t19488 = -1.*t19052*t19217;
  t19489 = t19476 + t19488;
  t19266 = -1.*t19262*t19052;
  t19457 = -1.*t19026*t19453;
  t19458 = t19266 + t19457;
  t19520 = t19026*t19262;
  t19527 = -1.*t19052*t19453;
  t19529 = t19520 + t19527;
  t19210 = t19200*t19052;
  t19218 = t19026*t19217;
  t19219 = t19210 + t19218;
  t19495 = t17359*t19451;
  t19512 = t19438*t18823;
  t19516 = t19495 + t19512;
  t19638 = -1.*t17359*t17811*t18742;
  t19639 = -1.*t18802*t18742*t18823;
  t19640 = t19638 + t19639;
  t19490 = -1.*t18802*t17359;
  t19492 = t17811*t18823;
  t19494 = t19490 + t19492;
  t19518 = -1.*t19494*t19516;
  t19626 = t17359*t17811*t19046;
  t19627 = t18802*t19046*t18823;
  t19628 = t19626 + t19627;
  t19814 = -1.*t17359*t19451;
  t19816 = -1.*t19438*t18823;
  t19817 = t19814 + t19816;
  t19629 = t19628*t19516;
  t19839 = -1.*t17359*t17811*t19046;
  t19841 = -1.*t18802*t19046*t18823;
  t19842 = t19839 + t19841;
  t19519 = -1.*t19026*t19245*t19463;
  t19606 = t19052*t19245*t19529;
  t19607 = t19518 + t19519 + t19606;
  t19821 = -1.*t19245*t19516;
  t19829 = -1.*t19494*t19453;
  t19822 = t18802*t17359;
  t19823 = -1.*t17811*t18823;
  t19824 = t19822 + t19823;
  t19834 = t19217*t19516;
  t19845 = t19628*t19453;
  t19630 = t19219*t19463;
  t19631 = t19489*t19529;
  t19632 = t19629 + t19630 + t19631;
  t19641 = var2[0]*t19026*t19640;
  t19642 = t17145*t19052*t19640;
  t19643 = t19025*t19119;
  t19695 = t19642 + t19643;
  t19698 = var2[1]*t19695;
  t19711 = -1.*t19025*t19052*t19640;
  t19720 = t17145*t19119;
  t19727 = t19711 + t19720;
  t19728 = var2[2]*t19727;
  t19791 = -1.*t19245*t19453;
  t19792 = t19518 + t19791;
  t19809 = t19217*t19792;
  t19890 = -0.15121*t17811;
  t19891 = -1.*t17811*t19413;
  t19892 = t19890 + t19891;
  t19886 = 0.15121*t18802;
  t19887 = t19886 + t19434;
  t19825 = -1.*t19824*t19453;
  t19897 = t17359*t19892;
  t19898 = -1.*t19887*t18823;
  t19940 = t19897 + t19898;
  t19970 = t17359*t19887;
  t19993 = t19892*t18823;
  t19994 = t19970 + t19993;
  t19844 = t19842*t19453;
  t19849 = t19262*t19200;
  t19852 = t19217*t19453;
  t19853 = t19849 + t19629 + t19852;
  t19855 = t19245*t19853;
  t19858 = t19026*t19842*t19607;
  t19859 = Power(t19026,2);
  t19862 = Power(t19052,2);
  t20013 = -1.*t19494*t19994;
  t19867 = -1.*t19026*t19824*t19463;
  t19868 = t19052*t19824*t19529;
  t20055 = t19628*t19994;
  t19876 = t19026*t19842*t19463;
  t19877 = -1.*t19052*t19842*t19529;
  t19880 = t19026*t19824*t19632;
  t20093 = t18224*t18566;
  t20098 = -1.*t18196*t18585;
  t20099 = t20093 + t20098;
  t20116 = t18802*t17359*t20099;
  t20117 = -1.*t17811*t20099*t18823;
  t20118 = t20116 + t20117;
  t20129 = t17359*t17811*t20099;
  t20131 = t18802*t20099*t18823;
  t20132 = t20129 + t20131;
  t20138 = t19026*t18742;
  t20139 = -1.*t19052*t20118;
  t20142 = t20138 + t20139;
  t20154 = -0.28121*t18566;
  t20155 = -1.*t19252*t18566;
  t20157 = 0.305*t18196*t18585;
  t20158 = t20154 + t20155 + t20157;
  t20159 = t17359*t17811*t20158;
  t20161 = t18802*t20158*t18823;
  t20164 = t20159 + t20161;
  t20166 = t18802*t17359*t20158;
  t20167 = -1.*t17811*t20158*t18823;
  t20168 = t20166 + t20167;
  t20165 = -1.*t19494*t20164;
  t20176 = 0.28121*t18196;
  t20177 = t20176 + t19374 + t19378;
  t20179 = t20164*t19628;
  t20300 = t18990*t19516;
  t20329 = t20177*t19052;
  t20334 = t19026*t20168;
  t20337 = t20329 + t20334;
  t20341 = t19026*t20177;
  t20342 = -1.*t19052*t20168;
  t20343 = t20341 + t20342;
  t20347 = t19046*t19052;
  t20348 = t19026*t19119;
  t20350 = t20347 + t20348;
  t20100 = -0.15121*t20099;
  t20101 = -0.15121*t19046;
  t20104 = t20100 + t20101;
  t20105 = var2[15]*t20104;
  t20106 = -1.*t17811*t19438;
  t20107 = t18802*t19451;
  t20111 = t20106 + t20107;
  t20384 = 0.305*t18224*t18566;
  t20385 = t20384 + t19256;
  t20386 = t17359*t17811*t20385;
  t20389 = t18802*t20385*t18823;
  t20391 = t20386 + t20389;
  t20394 = t18802*t17359*t20385;
  t20395 = -1.*t17811*t20385*t18823;
  t20397 = t20394 + t20395;
  t20404 = t17359*t17811*t19200;
  t20405 = t18802*t19200*t18823;
  t20406 = t20404 + t20405;
  t20393 = -1.*t19494*t20391;
  t20410 = -0.305*t18196*t18224;
  t20411 = -0.305*t18566*t18585;
  t20412 = t20410 + t20411;
  t20418 = t18802*t17359*t19200;
  t20419 = -1.*t17811*t19200*t18823;
  t20421 = t20418 + t20419;
  t20415 = t20391*t19628;
  t20417 = t20406*t19516;
  t20427 = t20412*t19052;
  t20428 = t19026*t20397;
  t20431 = t20427 + t20428;
  t20433 = t19026*t20412;
  t20434 = -1.*t19052*t20397;
  t20435 = t20433 + t20434;
  t20439 = t20099*t19052;
  t20440 = t19026*t20421;
  t20443 = t20439 + t20440;
  t19147 = t19025*t18990;
  t19155 = -1.*t17145*t19139;
  t19160 = t19147 + t19155;
  t19614 = -1.*t19200*t19052;
  t19616 = -1.*t19026*t19217;
  t19619 = t19614 + t19616;
  t20355 = t20350*t19463;
  t20356 = t19139*t19529;
  t20508 = -1.*t19628*t19516;
  t20174 = t19262*t19046;
  t20301 = t19119*t19453;
  t20564 = -1.*t19217*t19516;
  t20572 = -1.*t19628*t19453;
  t20699 = t19119*t19516;
  t20701 = t18990*t19453;
  t20515 = -1.*t19219*t19463;
  t20517 = -1.*t19489*t19529;
  t20518 = t20508 + t20515 + t20517;
  t20527 = t20300 + t20355 + t20356;
  t20539 = var2[0]*t19026*t19824;
  t20543 = t17145*t19245;
  t20544 = -1.*t19025*t19052*t19824;
  t20545 = t20543 + t20544;
  t20546 = var2[2]*t20545;
  t20547 = t19025*t19245;
  t20548 = t17145*t19052*t19824;
  t20550 = t20547 + t20548;
  t20552 = var2[1]*t20550;
  t20571 = -1.*t19842*t19453;
  t20642 = -1.*t19262*t19200;
  t20680 = -1.*t19217*t19453;
  t20696 = t20642 + t20508 + t20680;
  t20697 = t19119*t20696;
  t20700 = t19640*t19453;
  t20704 = t20174 + t20300 + t20301;
  t20705 = t19217*t20704;
  t20977 = -1.*t19628*t19994;
  t20710 = -1.*t19026*t19842*t19463;
  t20712 = t19052*t19842*t19529;
  t20984 = t18990*t19994;
  t20717 = t19026*t19640*t19463;
  t20720 = -1.*t19052*t19640*t19529;
  t20723 = t19026*t19640*t20518;
  t20726 = t19026*t19842*t20527;
  t21010 = t19262*t18742;
  t21014 = t19046*t20177;
  t21032 = -1.*t19262*t19046;
  t21047 = Power(t18802,2);
  t21050 = Power(t17811,2);
  t21038 = -1.*t20177*t19200;
  t21114 = t20164*t18990;
  t21116 = t20132*t19516;
  t20113 = t18742*t19052;
  t20119 = t19026*t20118;
  t20125 = t20113 + t20119;
  t21122 = -1.*t20164*t19628;
  t21124 = -1.*t18990*t19516;
  t21007 = t18742*t19413;
  t21008 = t20174 + t21007;
  t21017 = -1.*t19046*t19413;
  t21019 = t21017 + t20642;
  t21090 = -1.*t18802*t19046*t19438;
  t21091 = -1.*t17811*t19046*t19451;
  t21092 = t20642 + t21090 + t21091;
  t21182 = t19046*t20412;
  t21105 = t18802*t18742*t19438;
  t21106 = t17811*t18742*t19451;
  t21108 = t20174 + t21105 + t21106;
  t21189 = -1.*t20099*t19262;
  t21191 = -1.*t20412*t19200;
  t21233 = t20391*t18990;
  t21241 = -1.*t20391*t19628;
  t21282 = -1.*t20406*t19516;
  t20448 = t19026*t20099;
  t20449 = -1.*t19052*t20421;
  t20451 = t20448 + t20449;
  t20476 = t17145*t19052*t19245;
  t20477 = t19025*t19494;
  t20478 = t20476 + t20477;
  t20379 = t19025*t19628;
  t20380 = -1.*t17145*t19489;
  t20382 = t20379 + t20380;
  t21148 = -1.*t20350*t19463;
  t21153 = -1.*t19139*t19529;
  t21361 = t19494*t19516;
  t21125 = -1.*t19119*t19453;
  t21362 = t19026*t19245*t19463;
  t21363 = -1.*t19052*t19245*t19529;
  t21364 = t21361 + t21362 + t21363;
  t21394 = t19245*t19516;
  t21397 = t19494*t19453;
  t21402 = -1.*t19119*t19516;
  t21405 = -1.*t18990*t19453;
  t21373 = t21124 + t21148 + t21153;
  t21378 = var2[0]*t19026*t19842;
  t21379 = t17145*t19052*t19842;
  t21380 = t19025*t19217;
  t21382 = t21379 + t21380;
  t21383 = var2[1]*t21382;
  t21384 = -1.*t19025*t19052*t19842;
  t21385 = t17145*t19217;
  t21386 = t21384 + t21385;
  t21388 = var2[2]*t21386;
  t21389 = t19245*t19453;
  t21390 = t21361 + t21389;
  t21392 = t19119*t21390;
  t21396 = t19824*t19453;
  t21404 = -1.*t19640*t19453;
  t21408 = t21032 + t21124 + t21125;
  t21409 = t19245*t21408;
  t21414 = t19026*t19640*t21364;
  t21443 = t19494*t19994;
  t21418 = t19026*t19824*t19463;
  t21419 = -1.*t19052*t19824*t19529;
  t21448 = -1.*t18990*t19994;
  t21424 = -1.*t19026*t19640*t19463;
  t21425 = t19052*t19640*t19529;
  t21429 = t19026*t19824*t21373;
  t20458 = t17145*t18990;
  t20459 = t19025*t19139;
  t20460 = t20458 + t20459;
  t21473 = t19494*t20164;
  t21481 = -1.*t20164*t18990;
  t21483 = -1.*t20132*t19516;
  t21465 = t17811*t19438;
  t21466 = -1.*t18802*t19451;
  t21468 = t21465 + t21466;
  t21526 = t19494*t20391;
  t21533 = -1.*t20391*t18990;
  t20374 = t17145*t19628;
  t20375 = t19025*t19489;
  t20377 = t20374 + t20375;
  t20365 = 0.28121*t18224;
  t20367 = t19252*t18224;
  p_output1[0]=(-1.*t17145*t18990 - 1.*t19025*t19139)*var2[1] + t19160*var2[2];
  p_output1[1]=t19139*var2[0] - 1.*t17145*t19170*var2[1] + t19025*t19170*var2[2] + (t19219*(t19052*t19245*t19458 + t19052*t19245*t19463) + t19489*t19607 + t19026*t19245*(t19458*t19489 + t19463*t19489 + t19219*t19529 + t19529*t19619) - 1.*t19052*t19245*t19632)*var2[3];
  p_output1[2]=t19641 + t19698 + t19728 + (t19858 + t19219*(t19821 + t19829 - 1.*t19245*t19817*t19859 - 1.*t19245*t19817*t19862 + t19867 + t19868) + t19026*t19245*(t19026*t19219*t19817 - 1.*t19052*t19489*t19817 + t19834 + t19845 + t19876 + t19877) + t19880)*var2[3] + (t19809 + t19628*(-1.*t19245*t19817 + t19821 + t19825 + t19829) + t19494*(t19217*t19817 + t19834 + t19844 + t19845) + t19855)*var2[4];
  p_output1[3]=t19641 + t19698 + t19728 + (t19858 + t19880 + t19219*(t19821 + t19867 + t19868 - 1.*t19245*t19859*t19940 - 1.*t19245*t19862*t19940 + t20013) + t19026*t19245*(t19834 + t19876 + t19877 + t19026*t19219*t19940 - 1.*t19052*t19489*t19940 + t20055))*var2[3] + (t19809 + t19855 + t19628*(t19821 + t19825 - 1.*t19245*t19940 + t20013) + t19494*(t19834 + t19844 + t19217*t19940 + t20055))*var2[4] + t19200*(-1.*t18802*t19438 - 1.*t17811*t19451 + t18802*t19887 - 1.*t17811*t19892)*var2[5];
  p_output1[4]=t20105 + t20125*var2[0] + (t19025*t20132 - 1.*t17145*t20142)*var2[1] + (t17145*t20132 + t19025*t20142)*var2[2] + (t19219*(t20165 - 1.*t19026*t19245*t20337 + t19052*t19245*t20343) + t19607*t20350 + t19026*t19245*(t20179 + t20300 + t19219*t20337 + t19489*t20343 + t20355 + t20356))*var2[3] + (t18990*t19792 + t19628*(t20165 - 1.*t19245*t20168) + t19494*(t19217*t20168 + t20174 + t19200*t20177 + t20179 + t20300 + t20301))*var2[4] + t19046*t20111*var2[5];
  p_output1[5]=t20105 + t19219*var2[0] + t20382*var2[1] + t20377*var2[2] + (t19219*(t20393 - 1.*t19026*t19245*t20431 + t19052*t19245*t20435) + t19607*t20443 + t19026*t19245*(t20415 + t20417 + t19219*t20431 + t19489*t20435 + t19463*t20443 + t19529*t20451))*var2[3] + (t19628*(t20393 - 1.*t19245*t20397) + t19792*t20406 + t19494*(t19262*t20099 + t19217*t20397 + t19200*t20412 + t20415 + t20417 + t19453*t20421))*var2[4] + t20099*t20111*var2[5] + (-0.305*Power(t18224,2) + t20365 + t20367)*var2[16];
  p_output1[6]=t20350;
  p_output1[7]=t19160;
  p_output1[8]=t20460;
  p_output1[9]=t19219*t19607 + t19026*t19245*t19632;
  p_output1[10]=t19628*t19792 + t19494*t19853;
  p_output1[11]=t19200*t20111;
  p_output1[12]=-0.15121*t18742 - 0.15121*t19200;
  p_output1[13]=0.28121*t18585 - 0.305*t18224*t18585 + t18585*t19252;
  p_output1[14]=(t19025*t19052*t19245 - 1.*t17145*t19494)*var2[1] + t20478*var2[2];
  p_output1[15]=-1.*t19052*t19245*var2[0] + t17145*t19026*t19245*var2[1] - 1.*t19025*t19026*t19245*var2[2] + ((-1.*t19458*t19489 - 1.*t19463*t19489 - 1.*t19219*t19529 - 1.*t19529*t19619)*t20350 + t19219*(t19139*t19458 + t19139*t19463 + t19170*t19529 + t19529*t20350) + t19139*t20518 + t19489*t20527)*var2[3];
  p_output1[16]=t20539 + t20546 + t20552 + (t20350*(-1.*t19026*t19219*t19817 + t19052*t19489*t19817 + t20564 + t20572 + t20710 + t20712) + t19219*(-1.*t19052*t19139*t19817 + t19026*t19817*t20350 + t20699 + t20701 + t20717 + t20720) + t20723 + t20726)*var2[3] + (t18990*(-1.*t19217*t19817 + t20564 + t20571 + t20572) + t20697 + t19628*(t19119*t19817 + t20699 + t20700 + t20701) + t20705)*var2[4];
  p_output1[17]=t20539 + t20546 + t20552 + (t20723 + t20726 + t20350*(-1.*t19026*t19219*t19940 + t19052*t19489*t19940 + t20564 + t20710 + t20712 + t20977) + t19219*(-1.*t19052*t19139*t19940 + t19026*t19940*t20350 + t20699 + t20717 + t20720 + t20984))*var2[3] + (t20697 + t20705 + t18990*(-1.*t19217*t19940 + t20564 + t20571 + t20977) + t19628*(t19119*t19940 + t20699 + t20700 + t20984))*var2[4] + (t19200*(-1.*t17811*t18742*t19438 + t18742*t18802*t19451 + t17811*t18742*t19887 + t18742*t18802*t19892) + t19046*(t17811*t19046*t19438 - 1.*t18802*t19046*t19451 - 1.*t17811*t19046*t19887 - 1.*t18802*t19046*t19892))*var2[5];
  p_output1[18]=(t20125*t20518 + t20350*t20527 + t19219*(t19463*t20125 + t19529*t20142 + t19139*t20343 + t20337*t20350 + t21114 + t21116) + t20350*(-1.*t19219*t20337 - 1.*t19489*t20343 + t21122 + t21124 + t21148 + t21153))*var2[3] + (t20132*t20696 + t18990*t20704 + t19628*(t19453*t20118 + t19119*t20168 + t21010 + t21014 + t21114 + t21116) + t18990*(-1.*t19217*t20168 + t21032 + t21038 + t21122 + t21124 + t21125))*var2[4] + (t19200*(t18802*t19438*t20099 + t17811*t19451*t20099 + t21010 + t21014 + t18742*t20158*t21047 + t18742*t20158*t21050) + t19046*(-1.*t18742*t18802*t19438 - 1.*t17811*t18742*t19451 + t21032 + t21038 - 1.*t19046*t20158*t21047 - 1.*t19046*t20158*t21050) + t18742*t21092 + t19046*t21108)*var2[5] + (t19046*t21008 + t19200*(t19413*t20099 + t18742*t20158 + t21010 + t21014) + t18742*t21019 + t19046*(-1.*t18742*t19413 - 1.*t19046*t20158 + t21032 + t21038))*var2[15];
  p_output1[19]=(t19219*t20518 + t20443*t20527 + t19219*(t19629 + t19630 + t19631 + t20350*t20431 + t19139*t20435 + t21233) + t20350*(-1.*t19219*t20431 - 1.*t19489*t20435 - 1.*t19463*t20443 - 1.*t19529*t20451 + t21241 + t21282))*var2[3] + (t19628*t20696 + t20406*t20704 + t19628*(t19629 + t19849 + t19852 + t19119*t20397 + t21182 + t21233) + t18990*(-1.*t19217*t20397 - 1.*t19453*t20421 + t21189 + t21191 + t21241 + t21282))*var2[4] + (t19200*t21092 + t20099*t21108 + t19200*(t18802*t19046*t19438 + t17811*t19046*t19451 + t19849 + t18742*t20385*t21047 + t18742*t20385*t21050 + t21182) + t19046*(-1.*t18802*t19200*t19438 - 1.*t17811*t19200*t19451 - 1.*t19046*t20385*t21047 - 1.*t19046*t20385*t21050 + t21189 + t21191))*var2[5] + (t20099*t21008 + t19200*t21019 + t19200*(t19046*t19413 + t19849 + t18742*t20385 + t21182) + t19046*(-1.*t19200*t19413 - 1.*t19046*t20385 + t21189 + t21191))*var2[15];
  p_output1[20]=t19026*t19245;
  p_output1[21]=t20478;
  p_output1[22]=-1.*t19025*t19052*t19245 + t17145*t19494;
  p_output1[23]=t20350*t20518 + t19219*t20527;
  p_output1[24]=t18990*t20696 + t19628*t20704;
  p_output1[25]=t19046*t21092 + t19200*t21108;
  p_output1[26]=-0.15121 + t19200*t21008 + t19046*t21019;
  p_output1[27]=(-1.*t19025*t19489 - 1.*t17145*t19628)*var2[1] + t20382*var2[2];
  p_output1[28]=t19489*var2[0] - 1.*t17145*t19619*var2[1] + t19025*t19619*var2[2] + ((-1.*t19052*t19245*t19458 - 1.*t19052*t19245*t19463)*t20350 + t19026*t19245*(-1.*t19139*t19458 - 1.*t19139*t19463 - 1.*t19170*t19529 - 1.*t19529*t20350) + t19139*t21364 - 1.*t19052*t19245*t21373)*var2[3];
  p_output1[29]=t21378 + t21383 + t21388 + (t21414 + t20350*(t19245*t19817*t19859 + t19245*t19817*t19862 + t21394 + t21397 + t21418 + t21419) + t19026*t19245*(t19052*t19139*t19817 - 1.*t19026*t19817*t20350 + t21402 + t21405 + t21424 + t21425) + t21429)*var2[3] + (t21392 + t18990*(t19245*t19817 + t21394 + t21396 + t21397) + t19494*(-1.*t19119*t19817 + t21402 + t21404 + t21405) + t21409)*var2[4];
  p_output1[30]=t21378 + t21383 + t21388 + (t21414 + t21429 + t20350*(t19245*t19859*t19940 + t19245*t19862*t19940 + t21394 + t21418 + t21419 + t21443) + t19026*t19245*(t19052*t19139*t19940 - 1.*t19026*t19940*t20350 + t21402 + t21424 + t21425 + t21448))*var2[3] + (t21392 + t21409 + t18990*(t19245*t19940 + t21394 + t21396 + t21443) + t19494*(-1.*t19119*t19940 + t21402 + t21404 + t21448))*var2[4] + t19046*(t18802*t19438 + t17811*t19451 - 1.*t18802*t19887 + t17811*t19892)*var2[5];
  p_output1[31]=t20350*var2[0] + t19160*var2[1] + t20460*var2[2] + (t20125*t21364 + t20350*(t19026*t19245*t20337 - 1.*t19052*t19245*t20343 + t21473) + t19026*t19245*(-1.*t19463*t20125 - 1.*t19529*t20142 - 1.*t19139*t20343 - 1.*t20337*t20350 + t21481 + t21483))*var2[3] + (t20132*t21390 + t18990*(t19245*t20168 + t21473) + t19494*(-1.*t18742*t19262 - 1.*t19453*t20118 - 1.*t19119*t20168 - 1.*t19046*t20177 + t21481 + t21483))*var2[4] + t18742*t21468*var2[5];
  p_output1[32]=t20443*var2[0] + (t19025*t20406 - 1.*t17145*t20451)*var2[1] + (t17145*t20406 + t19025*t20451)*var2[2] + (t19219*t21364 + t20350*(t19026*t19245*t20431 - 1.*t19052*t19245*t20435 + t21526) + t19026*t19245*(-1.*t20350*t20431 - 1.*t19139*t20435 + t20508 + t20515 + t20517 + t21533))*var2[3] + (t19628*t21390 + t18990*(t19245*t20397 + t21526) + t19494*(-1.*t19119*t20397 - 1.*t19046*t20412 + t20508 + t20642 + t20680 + t21533))*var2[4] + t19200*t21468*var2[5] + (-0.28121*t18585 + 0.305*t18224*t18585 - 1.*t18585*t19252)*var2[16];
  p_output1[33]=t19219;
  p_output1[34]=t20382;
  p_output1[35]=t20377;
  p_output1[36]=t20350*t21364 + t19026*t19245*t21373;
  p_output1[37]=t18990*t21390 + t19494*t21408;
  p_output1[38]=t19046*t21468;
  p_output1[39]=0.305*Power(t18585,2) + t20365 + t20367;
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

#include "J_dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
