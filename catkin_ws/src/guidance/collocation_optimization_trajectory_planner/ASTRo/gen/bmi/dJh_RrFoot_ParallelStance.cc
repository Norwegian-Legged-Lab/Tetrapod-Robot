/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:03 GMT+02:00
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
  double t1921;
  double t20753;
  double t21386;
  double t25061;
  double t25308;
  double t25499;
  double t25500;
  double t25506;
  double t1565;
  double t1595;
  double t25508;
  double t25696;
  double t25501;
  double t25553;
  double t25693;
  double t1448;
  double t25815;
  double t25816;
  double t25817;
  double t25832;
  double t25833;
  double t25852;
  double t25853;
  double t25855;
  double t26412;
  double t26424;
  double t26427;
  double t26453;
  double t26457;
  double t26459;
  double t26464;
  double t26465;
  double t26467;
  double t26707;
  double t26708;
  double t26722;
  double t26725;
  double t26728;
  double t26733;
  double t26734;
  double t26735;
  double t26773;
  double t26774;
  double t26776;
  double t26781;
  double t26798;
  double t26802;
  double t26803;
  double t26931;
  double t26955;
  double t26967;
  double t26988;
  double t26997;
  double t27021;
  double t27047;
  double t27055;
  double t27057;
  double t27060;
  double t27064;
  double t27065;
  double t27073;
  double t27074;
  double t26922;
  double t27006;
  double t27007;
  double t27015;
  double t27076;
  double t27080;
  double t27082;
  double t27083;
  double t27091;
  double t27092;
  double t27093;
  double t27099;
  double t27100;
  double t27128;
  double t27130;
  double t27132;
  double t27020;
  double t27110;
  double t27111;
  double t27162;
  double t27167;
  double t27176;
  double t26812;
  double t26814;
  double t26815;
  double t27143;
  double t27145;
  double t27150;
  double t27193;
  double t27194;
  double t27197;
  double t27251;
  double t27252;
  double t27253;
  double t28037;
  double t28039;
  double t28042;
  double t27158;
  double t28168;
  double t28169;
  double t28196;
  double t27216;
  double t28544;
  double t28549;
  double t28551;
  double t27160;
  double t27177;
  double t27181;
  double t28241;
  double t28364;
  double t28254;
  double t28264;
  double t28355;
  double t28532;
  double t28554;
  double t27218;
  double t27219;
  double t27220;
  double t27321;
  double t27357;
  double t29957;
  double t30071;
  double t31410;
  double t32579;
  double t27322;
  double t27323;
  double t27324;
  double t27358;
  double t27359;
  double t27362;
  double t27573;
  double t27597;
  double t27575;
  double t27576;
  double t27577;
  double t28571;
  double t28576;
  double t37789;
  double t38024;
  double t38174;
  double t38283;
  double t27603;
  double t27755;
  double t27970;
  double t28056;
  double t28074;
  double t28079;
  double t28099;
  double t28104;
  double t28119;
  double t28149;
  double t28151;
  double t28153;
  double t28158;
  double t28161;
  double t28166;
  double t43942;
  double t45098;
  double t46470;
  double t43235;
  double t43727;
  double t28362;
  double t50417;
  double t50490;
  double t50872;
  double t51065;
  double t51250;
  double t51258;
  double t28553;
  double t28558;
  double t28561;
  double t28564;
  double t28565;
  double t28570;
  double t51379;
  double t28578;
  double t28582;
  double t51452;
  double t28602;
  double t28603;
  double t28624;
  double t28654;
  double t28663;
  double t28665;
  double t28720;
  double t28737;
  double t29595;
  double t29822;
  double t29840;
  double t29851;
  double t30066;
  double t30838;
  double t31337;
  double t31347;
  double t31385;
  double t32055;
  double t32737;
  double t32747;
  double t35470;
  double t35471;
  double t53763;
  double t36005;
  double t36036;
  double t53767;
  double t36369;
  double t36373;
  double t36425;
  double t36653;
  double t36887;
  double t36914;
  double t36973;
  double t37048;
  double t37050;
  double t37070;
  double t37463;
  double t37492;
  double t37722;
  double t37737;
  double t37751;
  double t37775;
  double t37825;
  double t38265;
  double t38818;
  double t38837;
  double t39349;
  double t39363;
  double t39842;
  double t53838;
  double t40943;
  double t41066;
  double t53842;
  double t41229;
  double t41281;
  double t41306;
  double t53862;
  double t53865;
  double t53866;
  double t53913;
  double t54025;
  double t54026;
  double t54123;
  double t54155;
  double t54157;
  double t54159;
  double t54163;
  double t54164;
  double t54291;
  double t54300;
  double t54301;
  double t54305;
  double t54308;
  double t54312;
  double t54313;
  double t54317;
  double t54318;
  double t54319;
  double t54314;
  double t54361;
  double t54362;
  double t54364;
  double t54386;
  double t54393;
  double t54399;
  double t54405;
  double t54406;
  double t54496;
  double t57128;
  double t57266;
  double t57403;
  double t57408;
  double t57385;
  double t57446;
  double t57452;
  double t53911;
  double t54046;
  double t54071;
  double t57457;
  double t26435;
  double t26446;
  double t26447;
  double t57539;
  double t57565;
  double t57571;
  double t53867;
  double t53871;
  double t53877;
  double t53882;
  double t53888;
  double t53893;
  double t53898;
  double t26788;
  double t26789;
  double t26793;
  double t57639;
  double t57643;
  double t57644;
  double t57645;
  double t57646;
  double t57655;
  double t57656;
  double t57657;
  double t57662;
  double t57663;
  double t57664;
  double t57650;
  double t57667;
  double t57668;
  double t57669;
  double t57674;
  double t57675;
  double t57676;
  double t57671;
  double t57673;
  double t57682;
  double t57683;
  double t57684;
  double t57686;
  double t57687;
  double t57688;
  double t57694;
  double t57695;
  double t57696;
  double t57125;
  double t57126;
  double t57281;
  double t57287;
  double t57422;
  double t57423;
  double t57424;
  double t57713;
  double t57440;
  double t57441;
  double t57442;
  double t57718;
  double t57721;
  double t57762;
  double t57774;
  double t57781;
  double t57701;
  double t57702;
  double t57703;
  double t57521;
  double t57522;
  double t57525;
  double t57836;
  double t57845;
  t1921 = Cos(var1[16]);
  t20753 = Cos(var1[17]);
  t21386 = -1.*t1921*t20753;
  t25061 = Sin(var1[16]);
  t25308 = Sin(var1[17]);
  t25499 = -1.*t25061*t25308;
  t25500 = t21386 + t25499;
  t25506 = Cos(var1[15]);
  t1565 = Cos(var1[5]);
  t1595 = Sin(var1[15]);
  t25508 = Sin(var1[5]);
  t25696 = Cos(var1[3]);
  t25501 = t1565*t1595*t25500;
  t25553 = t25506*t25500*t25508;
  t25693 = t25501 + t25553;
  t1448 = Sin(var1[3]);
  t25815 = Cos(var1[4]);
  t25816 = -1.*t20753*t25061;
  t25817 = t1921*t25308;
  t25832 = t25816 + t25817;
  t25833 = t25815*t25832;
  t25852 = Sin(var1[4]);
  t25853 = t25506*t1565*t25500;
  t25855 = -1.*t1595*t25500*t25508;
  t26412 = t25853 + t25855;
  t26424 = -1.*t25852*t26412;
  t26427 = t25833 + t26424;
  t26453 = t1565*t1595;
  t26457 = t25506*t25508;
  t26459 = t26453 + t26457;
  t26464 = -1.*t25506*t1565;
  t26465 = t1595*t25508;
  t26467 = t26464 + t26465;
  t26707 = t1565*t1595*t25832;
  t26708 = t25506*t25832*t25508;
  t26722 = t26707 + t26708;
  t26725 = t1921*t20753;
  t26728 = t25061*t25308;
  t26733 = t26725 + t26728;
  t26734 = t25815*t26733;
  t26735 = t25506*t1565*t25832;
  t26773 = -1.*t1595*t25832*t25508;
  t26774 = t26735 + t26773;
  t26776 = -1.*t25852*t26774;
  t26781 = t26734 + t26776;
  t26798 = -1.*t25832*t25852;
  t26802 = -1.*t25815*t26412;
  t26803 = t26798 + t26802;
  t26931 = -1.*t20753;
  t26955 = 1. + t26931;
  t26967 = -0.50321*t26955;
  t26988 = -0.23321*t20753;
  t26997 = t26967 + t26988;
  t27021 = -1.*t25506;
  t27047 = 1. + t27021;
  t27055 = -0.15121*t27047;
  t27057 = -1.*t1921;
  t27060 = 1. + t27057;
  t27064 = -0.28121*t27060;
  t27065 = t1921*t26997;
  t27073 = 0.27*t25061*t25308;
  t27074 = t27064 + t27065 + t27073;
  t26922 = 0.28121*t25061;
  t27006 = t26997*t25061;
  t27007 = -0.27*t1921*t25308;
  t27015 = t26922 + t27006 + t27007;
  t27076 = t25506*t27074;
  t27080 = t27055 + t27076;
  t27082 = t1565*t27080;
  t27083 = -0.15121*t25506;
  t27091 = 0.15121*t1595;
  t27092 = t1595*t27074;
  t27093 = t27055 + t27083 + t27091 + t27092;
  t27099 = -1.*t27093*t25508;
  t27100 = t27082 + t27099;
  t27128 = t27015*t25852;
  t27130 = t25815*t27100;
  t27132 = t27128 + t27130;
  t27020 = -1.*t27015*t25852;
  t27110 = -1.*t25815*t27100;
  t27111 = t27020 + t27110;
  t27162 = t25815*t27015;
  t27167 = -1.*t25852*t27100;
  t27176 = t27162 + t27167;
  t26812 = t26733*t25852;
  t26814 = t25815*t26774;
  t26815 = t26812 + t26814;
  t27143 = t1565*t27093;
  t27145 = t27080*t25508;
  t27150 = t27143 + t27145;
  t27193 = -1.*t26733*t25852;
  t27194 = -1.*t25815*t26774;
  t27197 = t27193 + t27194;
  t27251 = t25832*t25852;
  t27252 = t25815*t26412;
  t27253 = t27251 + t27252;
  t28037 = -1.*t1565*t1595*t25500;
  t28039 = -1.*t25506*t25500*t25508;
  t28042 = t28037 + t28039;
  t27158 = -1.*t26467*t27150;
  t28168 = -1.*t1565*t27093;
  t28169 = -1.*t27080*t25508;
  t28196 = t28168 + t28169;
  t27216 = t26722*t27150;
  t28544 = -1.*t1565*t1595*t25832;
  t28549 = -1.*t25506*t25832*t25508;
  t28551 = t28544 + t28549;
  t27160 = -1.*t25815*t26459*t27132;
  t27177 = t25852*t26459*t27176;
  t27181 = t27158 + t27160 + t27177;
  t28241 = -1.*t26459*t27150;
  t28364 = -1.*t26467*t27100;
  t28254 = t25506*t1565;
  t28264 = -1.*t1595*t25508;
  t28355 = t28254 + t28264;
  t28532 = t26774*t27150;
  t28554 = t26722*t27100;
  t27218 = t26815*t27132;
  t27219 = t26781*t27176;
  t27220 = t27216 + t27218 + t27219;
  t27321 = -1.*t26722*t27150;
  t27357 = t25693*t27150;
  t29957 = -1.*t26774*t27150;
  t30071 = -1.*t26722*t27100;
  t31410 = t26412*t27150;
  t32579 = t25693*t27100;
  t27322 = -1.*t26815*t27132;
  t27323 = -1.*t26781*t27176;
  t27324 = t27321 + t27322 + t27323;
  t27358 = t27253*t27132;
  t27359 = t26427*t27176;
  t27362 = t27357 + t27358 + t27359;
  t27573 = t26467*t27150;
  t27597 = -1.*t25693*t27150;
  t27575 = t25815*t26459*t27132;
  t27576 = -1.*t25852*t26459*t27176;
  t27577 = t27573 + t27575 + t27576;
  t28571 = Power(t25815,2);
  t28576 = Power(t25852,2);
  t37789 = t26459*t27150;
  t38024 = t26467*t27100;
  t38174 = -1.*t26412*t27150;
  t38283 = -1.*t25693*t27100;
  t27603 = -1.*t27253*t27132;
  t27755 = -1.*t26427*t27176;
  t27970 = t27597 + t27603 + t27755;
  t28056 = var2[0]*t25815*t28042;
  t28074 = t1448*t25852*t28042;
  t28079 = t25696*t26412;
  t28099 = t28074 + t28079;
  t28104 = var2[1]*t28099;
  t28119 = -1.*t25696*t25852*t28042;
  t28149 = t1448*t26412;
  t28151 = t28119 + t28149;
  t28153 = var2[2]*t28151;
  t28158 = -1.*t26459*t27100;
  t28161 = t27158 + t28158;
  t28166 = t26774*t28161;
  t43942 = -0.15121*t1595;
  t45098 = -1.*t1595*t27074;
  t46470 = t43942 + t45098;
  t43235 = 0.15121*t25506;
  t43727 = t43235 + t27076;
  t28362 = -1.*t28355*t27100;
  t50417 = t1565*t46470;
  t50490 = -1.*t43727*t25508;
  t50872 = t50417 + t50490;
  t51065 = t1565*t43727;
  t51250 = t46470*t25508;
  t51258 = t51065 + t51250;
  t28553 = t28551*t27100;
  t28558 = t27015*t26733;
  t28561 = t26774*t27100;
  t28564 = t28558 + t27216 + t28561;
  t28565 = t26459*t28564;
  t28570 = t25815*t28551*t27181;
  t51379 = -1.*t26467*t51258;
  t28578 = -1.*t25815*t28355*t27132;
  t28582 = t25852*t28355*t27176;
  t51452 = t26722*t51258;
  t28602 = t25815*t28551*t27132;
  t28603 = -1.*t25852*t28551*t27176;
  t28624 = t25815*t28355*t27220;
  t28654 = var2[0]*t25815*t28355;
  t28663 = t1448*t26459;
  t28665 = -1.*t25696*t25852*t28355;
  t28720 = t28663 + t28665;
  t28737 = var2[2]*t28720;
  t29595 = t25696*t26459;
  t29822 = t1448*t25852*t28355;
  t29840 = t29595 + t29822;
  t29851 = var2[1]*t29840;
  t30066 = -1.*t28551*t27100;
  t30838 = -1.*t27015*t26733;
  t31337 = -1.*t26774*t27100;
  t31347 = t30838 + t27321 + t31337;
  t31385 = t26412*t31347;
  t32055 = t28042*t27100;
  t32737 = t27015*t25832;
  t32747 = t26412*t27100;
  t35470 = t32737 + t27357 + t32747;
  t35471 = t26774*t35470;
  t53763 = -1.*t26722*t51258;
  t36005 = -1.*t25815*t28551*t27132;
  t36036 = t25852*t28551*t27176;
  t53767 = t25693*t51258;
  t36369 = t25815*t28042*t27132;
  t36373 = -1.*t25852*t28042*t27176;
  t36425 = t25815*t28042*t27324;
  t36653 = t25815*t28551*t27362;
  t36887 = var2[0]*t25815*t28551;
  t36914 = t1448*t25852*t28551;
  t36973 = t25696*t26774;
  t37048 = t36914 + t36973;
  t37050 = var2[1]*t37048;
  t37070 = -1.*t25696*t25852*t28551;
  t37463 = t1448*t26774;
  t37492 = t37070 + t37463;
  t37722 = var2[2]*t37492;
  t37737 = t26459*t27100;
  t37751 = t27573 + t37737;
  t37775 = t26412*t37751;
  t37825 = t28355*t27100;
  t38265 = -1.*t28042*t27100;
  t38818 = -1.*t27015*t25832;
  t38837 = -1.*t26412*t27100;
  t39349 = t38818 + t27597 + t38837;
  t39363 = t26459*t39349;
  t39842 = t25815*t28042*t27577;
  t53838 = t26467*t51258;
  t40943 = t25815*t28355*t27132;
  t41066 = -1.*t25852*t28355*t27176;
  t53842 = -1.*t25693*t51258;
  t41229 = -1.*t25815*t28042*t27132;
  t41281 = t25852*t28042*t27176;
  t41306 = t25815*t28355*t27970;
  t53862 = t20753*t25061;
  t53865 = -1.*t1921*t25308;
  t53866 = t53862 + t53865;
  t53913 = t25506*t1565*t53866;
  t54025 = -1.*t1595*t53866*t25508;
  t54026 = t53913 + t54025;
  t54123 = t1565*t1595*t53866;
  t54155 = t25506*t53866*t25508;
  t54157 = t54123 + t54155;
  t54159 = t25815*t25500;
  t54163 = -1.*t25852*t54026;
  t54164 = t54159 + t54163;
  t54291 = -0.28121*t25061;
  t54300 = -1.*t26997*t25061;
  t54301 = 0.27*t1921*t25308;
  t54305 = t54291 + t54300 + t54301;
  t54308 = t1565*t1595*t54305;
  t54312 = t25506*t54305*t25508;
  t54313 = t54308 + t54312;
  t54317 = t25506*t1565*t54305;
  t54318 = -1.*t1595*t54305*t25508;
  t54319 = t54317 + t54318;
  t54314 = -1.*t26467*t54313;
  t54361 = 0.28121*t1921;
  t54362 = t54361 + t27065 + t27073;
  t54364 = t54313*t26722;
  t54386 = t54362*t25852;
  t54393 = t25815*t54319;
  t54399 = t54386 + t54393;
  t54405 = t25815*t54362;
  t54406 = -1.*t25852*t54319;
  t54496 = t54405 + t54406;
  t57128 = t27015*t25500;
  t57266 = t25832*t54362;
  t57403 = Power(t25506,2);
  t57408 = Power(t1595,2);
  t57385 = -1.*t54362*t26733;
  t57446 = t54313*t25693;
  t57452 = t54157*t27150;
  t53911 = t25500*t25852;
  t54046 = t25815*t54026;
  t54071 = t53911 + t54046;
  t57457 = -1.*t54313*t26722;
  t26435 = t25696*t25693;
  t26446 = -1.*t1448*t26427;
  t26447 = t26435 + t26446;
  t57539 = t26467*t54313;
  t57565 = -1.*t54313*t25693;
  t57571 = -1.*t54157*t27150;
  t53867 = -0.15121*t53866;
  t53871 = -0.15121*t25832;
  t53877 = t53867 + t53871;
  t53882 = var2[15]*t53877;
  t53888 = -1.*t1595*t27080;
  t53893 = t25506*t27093;
  t53898 = t53888 + t53893;
  t26788 = t25696*t26722;
  t26789 = -1.*t1448*t26781;
  t26793 = t26788 + t26789;
  t57639 = 0.27*t20753*t25061;
  t57643 = t57639 + t27007;
  t57644 = t1565*t1595*t57643;
  t57645 = t25506*t57643*t25508;
  t57646 = t57644 + t57645;
  t57655 = t25506*t1565*t57643;
  t57656 = -1.*t1595*t57643*t25508;
  t57657 = t57655 + t57656;
  t57662 = t1565*t1595*t26733;
  t57663 = t25506*t26733*t25508;
  t57664 = t57662 + t57663;
  t57650 = -1.*t26467*t57646;
  t57667 = -0.27*t1921*t20753;
  t57668 = -0.27*t25061*t25308;
  t57669 = t57667 + t57668;
  t57674 = t25506*t1565*t26733;
  t57675 = -1.*t1595*t26733*t25508;
  t57676 = t57674 + t57675;
  t57671 = t57646*t26722;
  t57673 = t57664*t27150;
  t57682 = t57669*t25852;
  t57683 = t25815*t57657;
  t57684 = t57682 + t57683;
  t57686 = t25815*t57669;
  t57687 = -1.*t25852*t57657;
  t57688 = t57686 + t57687;
  t57694 = t53866*t25852;
  t57695 = t25815*t57676;
  t57696 = t57694 + t57695;
  t57125 = t25500*t27074;
  t57126 = t32737 + t57125;
  t57281 = -1.*t25832*t27074;
  t57287 = t57281 + t30838;
  t57422 = -1.*t25506*t25832*t27080;
  t57423 = -1.*t1595*t25832*t27093;
  t57424 = t30838 + t57422 + t57423;
  t57713 = t25832*t57669;
  t57440 = t25506*t25500*t27080;
  t57441 = t1595*t25500*t27093;
  t57442 = t32737 + t57440 + t57441;
  t57718 = -1.*t53866*t27015;
  t57721 = -1.*t57669*t26733;
  t57762 = t57646*t25693;
  t57774 = -1.*t57646*t26722;
  t57781 = -1.*t57664*t27150;
  t57701 = t25815*t53866;
  t57702 = -1.*t25852*t57676;
  t57703 = t57701 + t57702;
  t57521 = t1595*t27080;
  t57522 = -1.*t25506*t27093;
  t57525 = t57521 + t57522;
  t57836 = t26467*t57646;
  t57845 = -1.*t57646*t25693;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1448*t25693 - 1.*t25696*t26427)*var2[1] + t26447*var2[2];
  p_output1[10]=(t25696*t25852*t26459 - 1.*t1448*t26467)*var2[1] + (t1448*t25852*t26459 + t25696*t26467)*var2[2];
  p_output1[11]=(-1.*t1448*t26722 - 1.*t25696*t26781)*var2[1] + t26793*var2[2];
  p_output1[12]=t26427*var2[0] - 1.*t1448*t26803*var2[1] + t25696*t26803*var2[2] + (t26815*(t25852*t26459*t27111 + t25852*t26459*t27132) + t26781*t27181 + t25815*t26459*(t26781*t27111 + t26781*t27132 + t26815*t27176 + t27176*t27197) - 1.*t25852*t26459*t27220)*var2[3];
  p_output1[13]=-1.*t25852*t26459*var2[0] + t1448*t25815*t26459*var2[1] - 1.*t25696*t25815*t26459*var2[2] + ((-1.*t26781*t27111 - 1.*t26781*t27132 - 1.*t26815*t27176 - 1.*t27176*t27197)*t27253 + t26815*(t26427*t27111 + t26427*t27132 + t26803*t27176 + t27176*t27253) + t26427*t27324 + t26781*t27362)*var2[3];
  p_output1[14]=t26781*var2[0] - 1.*t1448*t27197*var2[1] + t25696*t27197*var2[2] + ((-1.*t25852*t26459*t27111 - 1.*t25852*t26459*t27132)*t27253 + t25815*t26459*(-1.*t26427*t27111 - 1.*t26427*t27132 - 1.*t26803*t27176 - 1.*t27176*t27253) + t26427*t27577 - 1.*t25852*t26459*t27970)*var2[3];
  p_output1[15]=t28056 + t28104 + t28153 + (t28570 + t26815*(t28241 + t28364 - 1.*t26459*t28196*t28571 - 1.*t26459*t28196*t28576 + t28578 + t28582) + t25815*t26459*(-1.*t25852*t26781*t28196 + t25815*t26815*t28196 + t28532 + t28554 + t28602 + t28603) + t28624)*var2[3] + (t28166 + t26722*(-1.*t26459*t28196 + t28241 + t28362 + t28364) + t26467*(t26774*t28196 + t28532 + t28553 + t28554) + t28565)*var2[4];
  p_output1[16]=t28654 + t28737 + t29851 + (t27253*(t25852*t26781*t28196 - 1.*t25815*t26815*t28196 + t29957 + t30071 + t36005 + t36036) + t26815*(-1.*t25852*t26427*t28196 + t25815*t27253*t28196 + t31410 + t32579 + t36369 + t36373) + t36425 + t36653)*var2[3] + (t25693*(-1.*t26774*t28196 + t29957 + t30066 + t30071) + t31385 + t26722*(t26412*t28196 + t31410 + t32055 + t32579) + t35471)*var2[4];
  p_output1[17]=t36887 + t37050 + t37722 + (t39842 + t27253*(t26459*t28196*t28571 + t26459*t28196*t28576 + t37789 + t38024 + t40943 + t41066) + t25815*t26459*(t25852*t26427*t28196 - 1.*t25815*t27253*t28196 + t38174 + t38283 + t41229 + t41281) + t41306)*var2[3] + (t37775 + t25693*(t26459*t28196 + t37789 + t37825 + t38024) + t26467*(-1.*t26412*t28196 + t38174 + t38265 + t38283) + t39363)*var2[4];
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
  p_output1[45]=t28056 + t28104 + t28153 + (t28570 + t28624 + t26815*(t28241 + t28578 + t28582 - 1.*t26459*t28571*t50872 - 1.*t26459*t28576*t50872 + t51379) + t25815*t26459*(t28532 + t28602 + t28603 - 1.*t25852*t26781*t50872 + t25815*t26815*t50872 + t51452))*var2[3] + (t28166 + t28565 + t26722*(t28241 + t28362 - 1.*t26459*t50872 + t51379) + t26467*(t28532 + t28553 + t26774*t50872 + t51452))*var2[4] + t26733*(-1.*t25506*t27080 - 1.*t1595*t27093 + t25506*t43727 - 1.*t1595*t46470)*var2[5];
  p_output1[46]=t28654 + t28737 + t29851 + (t36425 + t36653 + t27253*(t29957 + t36005 + t36036 + t25852*t26781*t50872 - 1.*t25815*t26815*t50872 + t53763) + t26815*(t31410 + t36369 + t36373 - 1.*t25852*t26427*t50872 + t25815*t27253*t50872 + t53767))*var2[3] + (t31385 + t35471 + t25693*(t29957 + t30066 - 1.*t26774*t50872 + t53763) + t26722*(t31410 + t32055 + t26412*t50872 + t53767))*var2[4] + (t26733*(-1.*t1595*t25500*t27080 + t25500*t25506*t27093 + t1595*t25500*t43727 + t25500*t25506*t46470) + t25832*(t1595*t25832*t27080 - 1.*t25506*t25832*t27093 - 1.*t1595*t25832*t43727 - 1.*t25506*t25832*t46470))*var2[5];
  p_output1[47]=t36887 + t37050 + t37722 + (t39842 + t41306 + t27253*(t37789 + t40943 + t41066 + t26459*t28571*t50872 + t26459*t28576*t50872 + t53838) + t25815*t26459*(t38174 + t41229 + t41281 + t25852*t26427*t50872 - 1.*t25815*t27253*t50872 + t53842))*var2[3] + (t37775 + t39363 + t25693*(t37789 + t37825 + t26459*t50872 + t53838) + t26467*(t38174 + t38265 - 1.*t26412*t50872 + t53842))*var2[4] + t25832*(t25506*t27080 + t1595*t27093 - 1.*t25506*t43727 + t1595*t46470)*var2[5];
  p_output1[48]=t53882 + t54071*var2[0] + (t25696*t54157 - 1.*t1448*t54164)*var2[1] + (t1448*t54157 + t25696*t54164)*var2[2] + (t27181*t27253 + t26815*(t54314 - 1.*t25815*t26459*t54399 + t25852*t26459*t54496) + t25815*t26459*(t27357 + t27358 + t27359 + t54364 + t26815*t54399 + t26781*t54496))*var2[3] + (t25693*t28161 + t26722*(t54314 - 1.*t26459*t54319) + t26467*(t27357 + t32737 + t32747 + t26774*t54319 + t26733*t54362 + t54364))*var2[4] + t25832*t53898*var2[5];
  p_output1[49]=(t27253*t27362 + t27324*t54071 + t26815*(t27132*t54071 + t27176*t54164 + t27253*t54399 + t26427*t54496 + t57446 + t57452) + t27253*(t27597 + t27603 + t27755 - 1.*t26815*t54399 - 1.*t26781*t54496 + t57457))*var2[3] + (t25693*t35470 + t31347*t54157 + t26722*(t27100*t54026 + t26412*t54319 + t57128 + t57266 + t57446 + t57452) + t25693*(t27597 + t38818 + t38837 - 1.*t26774*t54319 + t57385 + t57457))*var2[4] + (t26733*(t25506*t27080*t53866 + t1595*t27093*t53866 + t57128 + t57266 + t25500*t54305*t57403 + t25500*t54305*t57408) + t25832*(-1.*t25500*t25506*t27080 - 1.*t1595*t25500*t27093 + t38818 + t57385 - 1.*t25832*t54305*t57403 - 1.*t25832*t54305*t57408) + t25500*t57424 + t25832*t57442)*var2[5] + (t25832*t57126 + t26733*(t27074*t53866 + t25500*t54305 + t57128 + t57266) + t25500*t57287 + t25832*(-1.*t25500*t27074 + t38818 - 1.*t25832*t54305 + t57385))*var2[15];
  p_output1[50]=t27253*var2[0] + t26447*var2[1] + (t1448*t25693 + t25696*t26427)*var2[2] + (t27577*t54071 + t27253*(t25815*t26459*t54399 - 1.*t25852*t26459*t54496 + t57539) + t25815*t26459*(-1.*t27132*t54071 - 1.*t27176*t54164 - 1.*t27253*t54399 - 1.*t26427*t54496 + t57565 + t57571))*var2[3] + (t37751*t54157 + t25693*(t26459*t54319 + t57539) + t26467*(-1.*t25500*t27015 - 1.*t27100*t54026 - 1.*t26412*t54319 - 1.*t25832*t54362 + t57565 + t57571))*var2[4] + t25500*t57525*var2[5];
  p_output1[51]=t53882 + t26815*var2[0] + t26793*var2[1] + (t1448*t26722 + t25696*t26781)*var2[2] + (t26815*(t57650 - 1.*t25815*t26459*t57684 + t25852*t26459*t57688) + t27181*t57696 + t25815*t26459*(t57671 + t57673 + t26815*t57684 + t26781*t57688 + t27132*t57696 + t27176*t57703))*var2[3] + (t26722*(t57650 - 1.*t26459*t57657) + t28161*t57664 + t26467*(t27015*t53866 + t26774*t57657 + t26733*t57669 + t57671 + t57673 + t27100*t57676))*var2[4] + t53866*t53898*var2[5] + (0.28121*t20753 - 0.27*Power(t20753,2) + t20753*t26997)*var2[16];
  p_output1[52]=(t26815*t27324 + t27362*t57696 + t26815*(t27216 + t27218 + t27219 + t27253*t57684 + t26427*t57688 + t57762) + t27253*(-1.*t26815*t57684 - 1.*t26781*t57688 - 1.*t27132*t57696 - 1.*t27176*t57703 + t57774 + t57781))*var2[3] + (t26722*t31347 + t35470*t57664 + t26722*(t27216 + t28558 + t28561 + t26412*t57657 + t57713 + t57762) + t25693*(-1.*t26774*t57657 - 1.*t27100*t57676 + t57718 + t57721 + t57774 + t57781))*var2[4] + (t26733*t57424 + t53866*t57442 + t26733*(t25506*t25832*t27080 + t1595*t25832*t27093 + t28558 + t25500*t57403*t57643 + t25500*t57408*t57643 + t57713) + t25832*(-1.*t25506*t26733*t27080 - 1.*t1595*t26733*t27093 - 1.*t25832*t57403*t57643 - 1.*t25832*t57408*t57643 + t57718 + t57721))*var2[5] + (t53866*t57126 + t26733*t57287 + t26733*(t25832*t27074 + t28558 + t25500*t57643 + t57713) + t25832*(-1.*t26733*t27074 - 1.*t25832*t57643 + t57718 + t57721))*var2[15];
  p_output1[53]=t57696*var2[0] + (t25696*t57664 - 1.*t1448*t57703)*var2[1] + (t1448*t57664 + t25696*t57703)*var2[2] + (t26815*t27577 + t27253*(t25815*t26459*t57684 - 1.*t25852*t26459*t57688 + t57836) + t25815*t26459*(t27321 + t27322 + t27323 - 1.*t27253*t57684 - 1.*t26427*t57688 + t57845))*var2[3] + (t26722*t37751 + t25693*(t26459*t57657 + t57836) + t26467*(t27321 + t30838 + t31337 - 1.*t26412*t57657 - 1.*t25832*t57669 + t57845))*var2[4] + t26733*t57525*var2[5] + (-0.28121*t25308 + 0.27*t20753*t25308 - 1.*t25308*t26997)*var2[16];
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
