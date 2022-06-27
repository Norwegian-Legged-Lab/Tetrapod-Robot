/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:24 GMT+02:00
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
  double t9954;
  double t9984;
  double t10252;
  double t10685;
  double t11065;
  double t11098;
  double t11191;
  double t11749;
  double t8993;
  double t9497;
  double t11803;
  double t11885;
  double t11743;
  double t11807;
  double t11862;
  double t4620;
  double t11897;
  double t11983;
  double t12000;
  double t12022;
  double t12142;
  double t12384;
  double t12452;
  double t12473;
  double t13546;
  double t13718;
  double t13878;
  double t14085;
  double t14108;
  double t14134;
  double t14189;
  double t14195;
  double t14237;
  double t14639;
  double t14649;
  double t14652;
  double t14653;
  double t14674;
  double t14698;
  double t14727;
  double t14743;
  double t14754;
  double t14755;
  double t14768;
  double t14799;
  double t14875;
  double t14893;
  double t14906;
  double t15112;
  double t15129;
  double t15178;
  double t15214;
  double t15323;
  double t15400;
  double t15464;
  double t15495;
  double t15579;
  double t15583;
  double t15596;
  double t15634;
  double t15701;
  double t15101;
  double t15335;
  double t15348;
  double t15359;
  double t15466;
  double t15753;
  double t15760;
  double t15768;
  double t15857;
  double t15865;
  double t15887;
  double t15922;
  double t15932;
  double t15933;
  double t15936;
  double t15952;
  double t15955;
  double t16020;
  double t15386;
  double t15945;
  double t15946;
  double t16151;
  double t16155;
  double t16156;
  double t15069;
  double t15093;
  double t15095;
  double t16141;
  double t16143;
  double t16148;
  double t16362;
  double t16369;
  double t16381;
  double t16473;
  double t16475;
  double t16476;
  double t16716;
  double t16717;
  double t16718;
  double t16149;
  double t16753;
  double t16754;
  double t16755;
  double t16423;
  double t16785;
  double t16820;
  double t16840;
  double t16150;
  double t16158;
  double t16160;
  double t16757;
  double t16763;
  double t16766;
  double t16767;
  double t16776;
  double t16781;
  double t16882;
  double t16424;
  double t16429;
  double t16430;
  double t16547;
  double t16661;
  double t16986;
  double t16991;
  double t17071;
  double t17074;
  double t16550;
  double t16556;
  double t16589;
  double t16663;
  double t16664;
  double t16666;
  double t16685;
  double t16703;
  double t16686;
  double t16687;
  double t16691;
  double t16916;
  double t16919;
  double t17160;
  double t17164;
  double t17173;
  double t17175;
  double t16705;
  double t16707;
  double t16710;
  double t16719;
  double t16720;
  double t16721;
  double t16722;
  double t16723;
  double t16724;
  double t16729;
  double t16739;
  double t16744;
  double t16750;
  double t16751;
  double t16752;
  double t17214;
  double t17215;
  double t17217;
  double t17212;
  double t16777;
  double t17224;
  double t17226;
  double t17227;
  double t17229;
  double t17231;
  double t17232;
  double t16879;
  double t16892;
  double t16894;
  double t16899;
  double t16901;
  double t16911;
  double t17233;
  double t16921;
  double t16927;
  double t17238;
  double t16940;
  double t16941;
  double t16944;
  double t16954;
  double t16955;
  double t16956;
  double t16959;
  double t16964;
  double t16966;
  double t16967;
  double t16968;
  double t16970;
  double t16990;
  double t17021;
  double t17024;
  double t17053;
  double t17057;
  double t17072;
  double t17083;
  double t17088;
  double t17089;
  double t17090;
  double t17274;
  double t17102;
  double t17103;
  double t17278;
  double t17108;
  double t17109;
  double t17114;
  double t17115;
  double t17132;
  double t17133;
  double t17134;
  double t17138;
  double t17139;
  double t17140;
  double t17143;
  double t17146;
  double t17152;
  double t17153;
  double t17154;
  double t17155;
  double t17166;
  double t17174;
  double t17182;
  double t17183;
  double t17185;
  double t17188;
  double t17191;
  double t17301;
  double t17195;
  double t17196;
  double t17305;
  double t17202;
  double t17203;
  double t17207;
  double t17327;
  double t17328;
  double t17329;
  double t17331;
  double t17332;
  double t17333;
  double t17337;
  double t17338;
  double t17339;
  double t17341;
  double t17342;
  double t17343;
  double t17353;
  double t17354;
  double t17355;
  double t17357;
  double t17359;
  double t17360;
  double t17356;
  double t17366;
  double t17367;
  double t17368;
  double t17369;
  double t17372;
  double t17379;
  double t17380;
  double t17381;
  double t17384;
  double t17385;
  double t17386;
  double t17402;
  double t17404;
  double t17421;
  double t17423;
  double t17412;
  double t17330;
  double t17334;
  double t17335;
  double t17443;
  double t17445;
  double t17449;
  double t13927;
  double t13990;
  double t13992;
  double t17488;
  double t17495;
  double t17497;
  double t17323;
  double t17324;
  double t17325;
  double t14838;
  double t14850;
  double t14863;
  double t17532;
  double t17533;
  double t17534;
  double t17535;
  double t17536;
  double t17537;
  double t17540;
  double t17541;
  double t17542;
  double t17546;
  double t17547;
  double t17548;
  double t17539;
  double t17551;
  double t17552;
  double t17558;
  double t17559;
  double t17560;
  double t17554;
  double t17557;
  double t17567;
  double t17568;
  double t17569;
  double t17571;
  double t17572;
  double t17573;
  double t17577;
  double t17578;
  double t17579;
  double t17399;
  double t17400;
  double t17407;
  double t17408;
  double t17410;
  double t17417;
  double t17418;
  double t17419;
  double t17596;
  double t17603;
  double t17436;
  double t17437;
  double t17438;
  double t17630;
  double t17634;
  double t17637;
  double t17584;
  double t17585;
  double t17586;
  double t17473;
  double t17474;
  double t17475;
  double t17476;
  double t17477;
  double t17478;
  double t17479;
  double t17675;
  double t17682;
  t9954 = Cos(var1[13]);
  t9984 = Cos(var1[14]);
  t10252 = t9954*t9984;
  t10685 = Sin(var1[13]);
  t11065 = Sin(var1[14]);
  t11098 = t10685*t11065;
  t11191 = t10252 + t11098;
  t11749 = Cos(var1[12]);
  t8993 = Cos(var1[5]);
  t9497 = Sin(var1[12]);
  t11803 = Sin(var1[5]);
  t11885 = Cos(var1[3]);
  t11743 = t8993*t9497*t11191;
  t11807 = t11749*t11191*t11803;
  t11862 = t11743 + t11807;
  t4620 = Sin(var1[3]);
  t11897 = Cos(var1[4]);
  t11983 = -1.*t9984*t10685;
  t12000 = t9954*t11065;
  t12022 = t11983 + t12000;
  t12142 = t11897*t12022;
  t12384 = Sin(var1[4]);
  t12452 = t11749*t8993*t11191;
  t12473 = -1.*t9497*t11191*t11803;
  t13546 = t12452 + t12473;
  t13718 = -1.*t12384*t13546;
  t13878 = t12142 + t13718;
  t14085 = -1.*t8993*t9497;
  t14108 = -1.*t11749*t11803;
  t14134 = t14085 + t14108;
  t14189 = t11749*t8993;
  t14195 = -1.*t9497*t11803;
  t14237 = t14189 + t14195;
  t14639 = t9984*t10685;
  t14649 = -1.*t9954*t11065;
  t14652 = t14639 + t14649;
  t14653 = t8993*t9497*t14652;
  t14674 = t11749*t14652*t11803;
  t14698 = t14653 + t14674;
  t14727 = t11897*t11191;
  t14743 = t11749*t8993*t14652;
  t14754 = -1.*t9497*t14652*t11803;
  t14755 = t14743 + t14754;
  t14768 = -1.*t12384*t14755;
  t14799 = t14727 + t14768;
  t14875 = -1.*t12022*t12384;
  t14893 = -1.*t11897*t13546;
  t14906 = t14875 + t14893;
  t15112 = -1.*t9984;
  t15129 = 1. + t15112;
  t15178 = 0.50321*t15129;
  t15214 = 0.19821*t9984;
  t15323 = t15178 + t15214;
  t15400 = -1.*t11749;
  t15464 = 1. + t15400;
  t15495 = -1.*t9954;
  t15579 = 1. + t15495;
  t15583 = 0.28121*t15579;
  t15596 = t9954*t15323;
  t15634 = -0.305*t10685*t11065;
  t15701 = t15583 + t15596 + t15634;
  t15101 = 0.28121*t10685;
  t15335 = -1.*t15323*t10685;
  t15348 = -0.305*t9954*t11065;
  t15359 = t15101 + t15335 + t15348;
  t15466 = 0.15121*t15464;
  t15753 = t11749*t15701;
  t15760 = t15466 + t15753;
  t15768 = t8993*t15760;
  t15857 = -0.15121*t15464;
  t15865 = -0.15121*t11749;
  t15887 = -0.15121*t9497;
  t15922 = t9497*t15701;
  t15932 = t15857 + t15865 + t15887 + t15922;
  t15933 = -1.*t15932*t11803;
  t15936 = t15768 + t15933;
  t15952 = t15359*t12384;
  t15955 = t11897*t15936;
  t16020 = t15952 + t15955;
  t15386 = -1.*t15359*t12384;
  t15945 = -1.*t11897*t15936;
  t15946 = t15386 + t15945;
  t16151 = t11897*t15359;
  t16155 = -1.*t12384*t15936;
  t16156 = t16151 + t16155;
  t15069 = t11191*t12384;
  t15093 = t11897*t14755;
  t15095 = t15069 + t15093;
  t16141 = t8993*t15932;
  t16143 = t15760*t11803;
  t16148 = t16141 + t16143;
  t16362 = -1.*t11191*t12384;
  t16369 = -1.*t11897*t14755;
  t16381 = t16362 + t16369;
  t16473 = t12022*t12384;
  t16475 = t11897*t13546;
  t16476 = t16473 + t16475;
  t16716 = -1.*t8993*t9497*t11191;
  t16717 = -1.*t11749*t11191*t11803;
  t16718 = t16716 + t16717;
  t16149 = -1.*t14237*t16148;
  t16753 = -1.*t8993*t15932;
  t16754 = -1.*t15760*t11803;
  t16755 = t16753 + t16754;
  t16423 = t14698*t16148;
  t16785 = -1.*t8993*t9497*t14652;
  t16820 = -1.*t11749*t14652*t11803;
  t16840 = t16785 + t16820;
  t16150 = -1.*t11897*t14134*t16020;
  t16158 = t12384*t14134*t16156;
  t16160 = t16149 + t16150 + t16158;
  t16757 = -1.*t14134*t16148;
  t16763 = -1.*t14237*t15936;
  t16766 = -1.*t11749*t8993;
  t16767 = t9497*t11803;
  t16776 = t16766 + t16767;
  t16781 = t14755*t16148;
  t16882 = t14698*t15936;
  t16424 = t15095*t16020;
  t16429 = t14799*t16156;
  t16430 = t16423 + t16424 + t16429;
  t16547 = -1.*t14698*t16148;
  t16661 = t11862*t16148;
  t16986 = -1.*t14755*t16148;
  t16991 = -1.*t14698*t15936;
  t17071 = t13546*t16148;
  t17074 = t11862*t15936;
  t16550 = -1.*t15095*t16020;
  t16556 = -1.*t14799*t16156;
  t16589 = t16547 + t16550 + t16556;
  t16663 = t16476*t16020;
  t16664 = t13878*t16156;
  t16666 = t16661 + t16663 + t16664;
  t16685 = t14237*t16148;
  t16703 = -1.*t11862*t16148;
  t16686 = t11897*t14134*t16020;
  t16687 = -1.*t12384*t14134*t16156;
  t16691 = t16685 + t16686 + t16687;
  t16916 = Power(t11897,2);
  t16919 = Power(t12384,2);
  t17160 = t14134*t16148;
  t17164 = t14237*t15936;
  t17173 = -1.*t13546*t16148;
  t17175 = -1.*t11862*t15936;
  t16705 = -1.*t16476*t16020;
  t16707 = -1.*t13878*t16156;
  t16710 = t16703 + t16705 + t16707;
  t16719 = var2[0]*t11897*t16718;
  t16720 = t4620*t12384*t16718;
  t16721 = t11885*t13546;
  t16722 = t16720 + t16721;
  t16723 = var2[1]*t16722;
  t16724 = -1.*t11885*t12384*t16718;
  t16729 = t4620*t13546;
  t16739 = t16724 + t16729;
  t16744 = var2[2]*t16739;
  t16750 = -1.*t14134*t15936;
  t16751 = t16149 + t16750;
  t16752 = t14755*t16751;
  t17214 = 0.15121*t9497;
  t17215 = -1.*t9497*t15701;
  t17217 = t17214 + t17215;
  t17212 = t15865 + t15753;
  t16777 = -1.*t16776*t15936;
  t17224 = t8993*t17217;
  t17226 = -1.*t17212*t11803;
  t17227 = t17224 + t17226;
  t17229 = t8993*t17212;
  t17231 = t17217*t11803;
  t17232 = t17229 + t17231;
  t16879 = t16840*t15936;
  t16892 = t15359*t11191;
  t16894 = t14755*t15936;
  t16899 = t16892 + t16423 + t16894;
  t16901 = t14134*t16899;
  t16911 = t11897*t16840*t16160;
  t17233 = -1.*t14237*t17232;
  t16921 = -1.*t11897*t16776*t16020;
  t16927 = t12384*t16776*t16156;
  t17238 = t14698*t17232;
  t16940 = t11897*t16840*t16020;
  t16941 = -1.*t12384*t16840*t16156;
  t16944 = t11897*t16776*t16430;
  t16954 = var2[0]*t11897*t16776;
  t16955 = t4620*t14134;
  t16956 = -1.*t11885*t12384*t16776;
  t16959 = t16955 + t16956;
  t16964 = var2[2]*t16959;
  t16966 = t11885*t14134;
  t16967 = t4620*t12384*t16776;
  t16968 = t16966 + t16967;
  t16970 = var2[1]*t16968;
  t16990 = -1.*t16840*t15936;
  t17021 = -1.*t15359*t11191;
  t17024 = -1.*t14755*t15936;
  t17053 = t17021 + t16547 + t17024;
  t17057 = t13546*t17053;
  t17072 = t16718*t15936;
  t17083 = t15359*t12022;
  t17088 = t13546*t15936;
  t17089 = t17083 + t16661 + t17088;
  t17090 = t14755*t17089;
  t17274 = -1.*t14698*t17232;
  t17102 = -1.*t11897*t16840*t16020;
  t17103 = t12384*t16840*t16156;
  t17278 = t11862*t17232;
  t17108 = t11897*t16718*t16020;
  t17109 = -1.*t12384*t16718*t16156;
  t17114 = t11897*t16718*t16589;
  t17115 = t11897*t16840*t16666;
  t17132 = var2[0]*t11897*t16840;
  t17133 = t4620*t12384*t16840;
  t17134 = t11885*t14755;
  t17138 = t17133 + t17134;
  t17139 = var2[1]*t17138;
  t17140 = -1.*t11885*t12384*t16840;
  t17143 = t4620*t14755;
  t17146 = t17140 + t17143;
  t17152 = var2[2]*t17146;
  t17153 = t14134*t15936;
  t17154 = t16685 + t17153;
  t17155 = t13546*t17154;
  t17166 = t16776*t15936;
  t17174 = -1.*t16718*t15936;
  t17182 = -1.*t15359*t12022;
  t17183 = -1.*t13546*t15936;
  t17185 = t17182 + t16703 + t17183;
  t17188 = t14134*t17185;
  t17191 = t11897*t16718*t16691;
  t17301 = t14237*t17232;
  t17195 = t11897*t16776*t16020;
  t17196 = -1.*t12384*t16776*t16156;
  t17305 = -1.*t11862*t17232;
  t17202 = -1.*t11897*t16718*t16020;
  t17203 = t12384*t16718*t16156;
  t17207 = t11897*t16776*t16710;
  t17327 = -1.*t9954*t9984;
  t17328 = -1.*t10685*t11065;
  t17329 = t17327 + t17328;
  t17331 = t11749*t8993*t12022;
  t17332 = -1.*t9497*t12022*t11803;
  t17333 = t17331 + t17332;
  t17337 = t8993*t9497*t12022;
  t17338 = t11749*t12022*t11803;
  t17339 = t17337 + t17338;
  t17341 = t11897*t17329;
  t17342 = -1.*t12384*t17333;
  t17343 = t17341 + t17342;
  t17353 = t8993*t9497*t15359;
  t17354 = t11749*t15359*t11803;
  t17355 = t17353 + t17354;
  t17357 = t11749*t8993*t15359;
  t17359 = -1.*t9497*t15359*t11803;
  t17360 = t17357 + t17359;
  t17356 = -1.*t14237*t17355;
  t17366 = 0.28121*t9954;
  t17367 = -1.*t9954*t15323;
  t17368 = 0.305*t10685*t11065;
  t17369 = t17366 + t17367 + t17368;
  t17372 = t14698*t17355;
  t17379 = t17369*t12384;
  t17380 = t11897*t17360;
  t17381 = t17379 + t17380;
  t17384 = t11897*t17369;
  t17385 = -1.*t12384*t17360;
  t17386 = t17384 + t17385;
  t17402 = t15359*t17329;
  t17404 = t12022*t17369;
  t17421 = Power(t11749,2);
  t17423 = Power(t9497,2);
  t17412 = -1.*t17369*t11191;
  t17330 = t17329*t12384;
  t17334 = t11897*t17333;
  t17335 = t17330 + t17334;
  t17443 = t17355*t11862;
  t17445 = t17339*t16148;
  t17449 = -1.*t14698*t17355;
  t13927 = t11885*t11862;
  t13990 = -1.*t4620*t13878;
  t13992 = t13927 + t13990;
  t17488 = t14237*t17355;
  t17495 = -1.*t17355*t11862;
  t17497 = -1.*t17339*t16148;
  t17323 = t9497*t15760;
  t17324 = -1.*t11749*t15932;
  t17325 = t17323 + t17324;
  t14838 = t11885*t14698;
  t14850 = -1.*t4620*t14799;
  t14863 = t14838 + t14850;
  t17532 = -0.305*t9984*t10685;
  t17533 = 0.305*t9954*t11065;
  t17534 = t17532 + t17533;
  t17535 = t8993*t9497*t17534;
  t17536 = t11749*t17534*t11803;
  t17537 = t17535 + t17536;
  t17540 = t11749*t8993*t17534;
  t17541 = -1.*t9497*t17534*t11803;
  t17542 = t17540 + t17541;
  t17546 = t8993*t9497*t17329;
  t17547 = t11749*t17329*t11803;
  t17548 = t17546 + t17547;
  t17539 = -1.*t14237*t17537;
  t17551 = -0.305*t9954*t9984;
  t17552 = t17551 + t15634;
  t17558 = t11749*t8993*t17329;
  t17559 = -1.*t9497*t17329*t11803;
  t17560 = t17558 + t17559;
  t17554 = t14698*t17537;
  t17557 = t17548*t16148;
  t17567 = t17552*t12384;
  t17568 = t11897*t17542;
  t17569 = t17567 + t17568;
  t17571 = t11897*t17552;
  t17572 = -1.*t12384*t17542;
  t17573 = t17571 + t17572;
  t17577 = t14652*t12384;
  t17578 = t11897*t17560;
  t17579 = t17577 + t17578;
  t17399 = -1.*t14652*t15701;
  t17400 = t17399 + t17021;
  t17407 = t15701*t11191;
  t17408 = t17083 + t17407;
  t17410 = -1.*t14652*t15359;
  t17417 = -1.*t11749*t14652*t15760;
  t17418 = -1.*t9497*t14652*t15932;
  t17419 = t17021 + t17417 + t17418;
  t17596 = t12022*t17552;
  t17603 = -1.*t17552*t11191;
  t17436 = t11749*t11191*t15760;
  t17437 = t9497*t11191*t15932;
  t17438 = t17083 + t17436 + t17437;
  t17630 = t17537*t11862;
  t17634 = -1.*t14698*t17537;
  t17637 = -1.*t17548*t16148;
  t17584 = t11897*t14652;
  t17585 = -1.*t12384*t17560;
  t17586 = t17584 + t17585;
  t17473 = -0.15121*t17329;
  t17474 = -0.15121*t11191;
  t17475 = t17473 + t17474;
  t17476 = var2[12]*t17475;
  t17477 = -1.*t9497*t15760;
  t17478 = t11749*t15932;
  t17479 = t17477 + t17478;
  t17675 = t14237*t17537;
  t17682 = -1.*t17537*t11862;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t11885*t13878 - 1.*t11862*t4620)*var2[1] + t13992*var2[2];
  p_output1[10]=(t11885*t12384*t14134 - 1.*t14237*t4620)*var2[1] + (t11885*t14237 + t12384*t14134*t4620)*var2[2];
  p_output1[11]=(-1.*t11885*t14799 - 1.*t14698*t4620)*var2[1] + t14863*var2[2];
  p_output1[12]=t13878*var2[0] - 1.*t14906*t4620*var2[1] + t11885*t14906*var2[2] + (t15095*(t12384*t14134*t15946 + t12384*t14134*t16020) + t14799*t16160 + t11897*t14134*(t14799*t15946 + t14799*t16020 + t15095*t16156 + t16156*t16381) - 1.*t12384*t14134*t16430)*var2[3];
  p_output1[13]=-1.*t12384*t14134*var2[0] + t11897*t14134*t4620*var2[1] - 1.*t11885*t11897*t14134*var2[2] + ((-1.*t14799*t15946 - 1.*t14799*t16020 - 1.*t15095*t16156 - 1.*t16156*t16381)*t16476 + t15095*(t13878*t15946 + t13878*t16020 + t14906*t16156 + t16156*t16476) + t13878*t16589 + t14799*t16666)*var2[3];
  p_output1[14]=t14799*var2[0] - 1.*t16381*t4620*var2[1] + t11885*t16381*var2[2] + ((-1.*t12384*t14134*t15946 - 1.*t12384*t14134*t16020)*t16476 + t11897*t14134*(-1.*t13878*t15946 - 1.*t13878*t16020 - 1.*t14906*t16156 - 1.*t16156*t16476) + t13878*t16691 - 1.*t12384*t14134*t16710)*var2[3];
  p_output1[15]=t16719 + t16723 + t16744 + (t16911 + t15095*(t16757 + t16763 - 1.*t14134*t16755*t16916 - 1.*t14134*t16755*t16919 + t16921 + t16927) + t11897*t14134*(-1.*t12384*t14799*t16755 + t11897*t15095*t16755 + t16781 + t16882 + t16940 + t16941) + t16944)*var2[3] + (t16752 + t14698*(-1.*t14134*t16755 + t16757 + t16763 + t16777) + t14237*(t14755*t16755 + t16781 + t16879 + t16882) + t16901)*var2[4];
  p_output1[16]=t16954 + t16964 + t16970 + (t16476*(t12384*t14799*t16755 - 1.*t11897*t15095*t16755 + t16986 + t16991 + t17102 + t17103) + t15095*(-1.*t12384*t13878*t16755 + t11897*t16476*t16755 + t17071 + t17074 + t17108 + t17109) + t17114 + t17115)*var2[3] + (t11862*(-1.*t14755*t16755 + t16986 + t16990 + t16991) + t17057 + t14698*(t13546*t16755 + t17071 + t17072 + t17074) + t17090)*var2[4];
  p_output1[17]=t17132 + t17139 + t17152 + (t17191 + t16476*(t14134*t16755*t16916 + t14134*t16755*t16919 + t17160 + t17164 + t17195 + t17196) + t11897*t14134*(t12384*t13878*t16755 - 1.*t11897*t16476*t16755 + t17173 + t17175 + t17202 + t17203) + t17207)*var2[3] + (t17155 + t11862*(t14134*t16755 + t17160 + t17164 + t17166) + t14237*(-1.*t13546*t16755 + t17173 + t17174 + t17175) + t17188)*var2[4];
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
  p_output1[36]=t16719 + t16723 + t16744 + (t16911 + t16944 + t15095*(t16757 + t16921 + t16927 - 1.*t14134*t16916*t17227 - 1.*t14134*t16919*t17227 + t17233) + t11897*t14134*(t16781 + t16940 + t16941 - 1.*t12384*t14799*t17227 + t11897*t15095*t17227 + t17238))*var2[3] + (t16752 + t16901 + t14698*(t16757 + t16777 - 1.*t14134*t17227 + t17233) + t14237*(t16781 + t16879 + t14755*t17227 + t17238))*var2[4] + t11191*(t11749*t15760 - 1.*t11749*t17212 + t15932*t9497 + t17217*t9497)*var2[5];
  p_output1[37]=t16954 + t16964 + t16970 + (t17114 + t17115 + t16476*(t16986 + t17102 + t17103 + t12384*t14799*t17227 - 1.*t11897*t15095*t17227 + t17274) + t15095*(t17071 + t17108 + t17109 - 1.*t12384*t13878*t17227 + t11897*t16476*t17227 + t17278))*var2[3] + (t17057 + t17090 + t11862*(t16986 + t16990 - 1.*t14755*t17227 + t17274) + t14698*(t17071 + t17072 + t13546*t17227 + t17278))*var2[4] + (t11191*(t11191*t11749*t15932 + t11191*t11749*t17217 - 1.*t11191*t15760*t9497 + t11191*t17212*t9497) + t12022*(-1.*t11749*t14652*t15932 - 1.*t11749*t14652*t17217 + t14652*t15760*t9497 - 1.*t14652*t17212*t9497))*var2[5];
  p_output1[38]=t17132 + t17139 + t17152 + (t17191 + t17207 + t16476*(t17160 + t17195 + t17196 + t14134*t16916*t17227 + t14134*t16919*t17227 + t17301) + t11897*t14134*(t17173 + t17202 + t17203 + t12384*t13878*t17227 - 1.*t11897*t16476*t17227 + t17305))*var2[3] + (t17155 + t17188 + t11862*(t17160 + t17166 + t14134*t17227 + t17301) + t14237*(t17173 + t17174 - 1.*t13546*t17227 + t17305))*var2[4] + t12022*(-1.*t11749*t15760 + t11749*t17212 - 1.*t15932*t9497 - 1.*t17217*t9497)*var2[5];
  p_output1[39]=t17335*var2[0] + (t11885*t17339 - 1.*t17343*t4620)*var2[1] + (t11885*t17343 + t17339*t4620)*var2[2] + (t16160*t16476 + t15095*(t17356 - 1.*t11897*t14134*t17381 + t12384*t14134*t17386) + t11897*t14134*(t16661 + t16663 + t16664 + t17372 + t15095*t17381 + t14799*t17386))*var2[3] + (t11862*t16751 + t14698*(t17356 - 1.*t14134*t17360) + t14237*(t16661 + t17083 + t17088 + t14755*t17360 + t11191*t17369 + t17372))*var2[4] + t12022*t17325*var2[5];
  p_output1[40]=(t16476*t16666 + t16589*t17335 + t15095*(t16020*t17335 + t16156*t17343 + t16476*t17381 + t13878*t17386 + t17443 + t17445) + t16476*(t16703 + t16705 + t16707 - 1.*t15095*t17381 - 1.*t14799*t17386 + t17449))*var2[3] + (t11862*t17089 + t17053*t17339 + t14698*(t15936*t17333 + t13546*t17360 + t17402 + t17404 + t17443 + t17445) + t11862*(t16703 + t17182 + t17183 - 1.*t14755*t17360 + t17412 + t17449))*var2[4] + (t17329*t17419 + t12022*t17438 + t12022*(-1.*t11191*t11749*t15760 + t17182 + t17412 - 1.*t14652*t15359*t17421 - 1.*t14652*t15359*t17423 - 1.*t11191*t15932*t9497) + t11191*(t11749*t12022*t15760 + t17402 + t17404 + t11191*t15359*t17421 + t11191*t15359*t17423 + t12022*t15932*t9497))*var2[5] + (t17329*t17400 + t11191*(t12022*t15701 + t16892 + t17402 + t17404) + t12022*t17408 + t12022*(-1.*t11191*t15701 + t17182 + t17410 + t17412))*var2[12];
  p_output1[41]=t17476 + t16476*var2[0] + t13992*var2[1] + (t11885*t13878 + t11862*t4620)*var2[2] + (t16691*t17335 + t16476*(t11897*t14134*t17381 - 1.*t12384*t14134*t17386 + t17488) + t11897*t14134*(-1.*t16020*t17335 - 1.*t16156*t17343 - 1.*t16476*t17381 - 1.*t13878*t17386 + t17495 + t17497))*var2[3] + (t17154*t17339 + t11862*(t14134*t17360 + t17488) + t14237*(-1.*t15359*t17329 - 1.*t15936*t17333 - 1.*t13546*t17360 - 1.*t12022*t17369 + t17495 + t17497))*var2[4] + t17329*t17479*var2[5];
  p_output1[42]=t15095*var2[0] + t14863*var2[1] + (t11885*t14799 + t14698*t4620)*var2[2] + (t15095*(t17539 - 1.*t11897*t14134*t17569 + t12384*t14134*t17573) + t16160*t17579 + t11897*t14134*(t17554 + t17557 + t15095*t17569 + t14799*t17573 + t16020*t17579 + t16156*t17586))*var2[3] + (t14698*(t17539 - 1.*t14134*t17542) + t16751*t17548 + t14237*(t14652*t15359 + t14755*t17542 + t11191*t17552 + t17554 + t17557 + t15936*t17560))*var2[4] + t14652*t17325*var2[5] + (0.28121*t9984 - 1.*t15323*t9984 - 0.305*Power(t9984,2))*var2[13];
  p_output1[43]=(t15095*t16589 + t16666*t17579 + t15095*(t16423 + t16424 + t16429 + t16476*t17569 + t13878*t17573 + t17630) + t16476*(-1.*t15095*t17569 - 1.*t14799*t17573 - 1.*t16020*t17579 - 1.*t16156*t17586 + t17634 + t17637))*var2[3] + (t14698*t17053 + t17089*t17548 + t14698*(t16423 + t16892 + t16894 + t13546*t17542 + t17596 + t17630) + t11862*(t17410 - 1.*t14755*t17542 - 1.*t15936*t17560 + t17603 + t17634 + t17637))*var2[4] + (t11191*t17419 + t14652*t17438 + t11191*(t11749*t14652*t15760 + t16892 + t11191*t17421*t17534 + t11191*t17423*t17534 + t17596 + t14652*t15932*t9497) + t12022*(-1.*t11749*t15760*t17329 + t17410 - 1.*t14652*t17421*t17534 - 1.*t14652*t17423*t17534 + t17603 - 1.*t15932*t17329*t9497))*var2[5] + (t11191*t17400 + t14652*t17408 + t11191*(t14652*t15701 + t16892 + t11191*t17534 + t17596) + t12022*(-1.*t15701*t17329 + t17410 - 1.*t14652*t17534 + t17603))*var2[12];
  p_output1[44]=t17476 + t17579*var2[0] + (t11885*t17548 - 1.*t17586*t4620)*var2[1] + (t11885*t17586 + t17548*t4620)*var2[2] + (t15095*t16691 + t16476*(t11897*t14134*t17569 - 1.*t12384*t14134*t17573 + t17675) + t11897*t14134*(t16547 + t16550 + t16556 - 1.*t16476*t17569 - 1.*t13878*t17573 + t17682))*var2[3] + (t14698*t17154 + t11862*(t14134*t17542 + t17675) + t14237*(t16547 + t17021 + t17024 - 1.*t13546*t17542 - 1.*t12022*t17552 + t17682))*var2[4] + t11191*t17479*var2[5] + (-0.28121*t11065 + t11065*t15323 + 0.305*t11065*t9984)*var2[13];
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

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
