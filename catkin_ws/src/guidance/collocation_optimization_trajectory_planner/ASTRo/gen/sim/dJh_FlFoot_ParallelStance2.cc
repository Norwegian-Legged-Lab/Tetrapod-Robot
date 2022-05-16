/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:06 GMT+02:00
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
  double t2208;
  double t3579;
  double t4640;
  double t21125;
  double t21135;
  double t21308;
  double t21465;
  double t36232;
  double t1420;
  double t1792;
  double t40288;
  double t45660;
  double t23098;
  double t40347;
  double t41469;
  double t1417;
  double t45691;
  double t46352;
  double t46594;
  double t51568;
  double t53744;
  double t53774;
  double t53783;
  double t53787;
  double t53789;
  double t53790;
  double t53791;
  double t53817;
  double t53818;
  double t53819;
  double t53821;
  double t53822;
  double t53823;
  double t53872;
  double t53873;
  double t53874;
  double t53875;
  double t53876;
  double t53878;
  double t53880;
  double t53881;
  double t53883;
  double t53884;
  double t53885;
  double t53886;
  double t53897;
  double t53898;
  double t53899;
  double t53908;
  double t53909;
  double t53910;
  double t53912;
  double t53913;
  double t53920;
  double t53921;
  double t53922;
  double t53923;
  double t53924;
  double t53925;
  double t53926;
  double t53927;
  double t53928;
  double t53906;
  double t53914;
  double t53917;
  double t53918;
  double t53929;
  double t53930;
  double t53931;
  double t53932;
  double t53933;
  double t53934;
  double t53935;
  double t53936;
  double t53937;
  double t53941;
  double t53942;
  double t53943;
  double t53919;
  double t53938;
  double t53939;
  double t53952;
  double t53953;
  double t53954;
  double t53903;
  double t53904;
  double t53905;
  double t53947;
  double t53948;
  double t53949;
  double t53960;
  double t53961;
  double t53962;
  double t53978;
  double t53979;
  double t53980;
  double t54033;
  double t54034;
  double t54035;
  double t53950;
  double t54049;
  double t54050;
  double t54051;
  double t53967;
  double t54063;
  double t54064;
  double t54065;
  double t53951;
  double t53955;
  double t53956;
  double t54053;
  double t54054;
  double t54055;
  double t54056;
  double t54057;
  double t54062;
  double t54067;
  double t53968;
  double t53969;
  double t53970;
  double t53987;
  double t53998;
  double t54106;
  double t54108;
  double t54116;
  double t54118;
  double t53988;
  double t53989;
  double t53990;
  double t53999;
  double t54000;
  double t54001;
  double t54013;
  double t54024;
  double t54014;
  double t54015;
  double t54016;
  double t54078;
  double t54080;
  double t54157;
  double t54158;
  double t54163;
  double t54165;
  double t54025;
  double t54026;
  double t54027;
  double t54036;
  double t54037;
  double t54038;
  double t54039;
  double t54040;
  double t54041;
  double t54042;
  double t54043;
  double t54044;
  double t54045;
  double t54047;
  double t54048;
  double t54192;
  double t54193;
  double t54195;
  double t54196;
  double t54197;
  double t54058;
  double t54202;
  double t54203;
  double t54204;
  double t54206;
  double t54207;
  double t54208;
  double t54066;
  double t54071;
  double t54072;
  double t54073;
  double t54074;
  double t54077;
  double t54209;
  double t54082;
  double t54083;
  double t54213;
  double t54088;
  double t54089;
  double t54092;
  double t54096;
  double t54097;
  double t54098;
  double t54099;
  double t54100;
  double t54101;
  double t54102;
  double t54103;
  double t54104;
  double t54107;
  double t54111;
  double t54112;
  double t54113;
  double t54114;
  double t54117;
  double t54121;
  double t54122;
  double t54123;
  double t54124;
  double t54244;
  double t54129;
  double t54130;
  double t54248;
  double t54135;
  double t54136;
  double t54139;
  double t54140;
  double t54144;
  double t54145;
  double t54146;
  double t54147;
  double t54148;
  double t54149;
  double t54150;
  double t54151;
  double t54152;
  double t54153;
  double t54154;
  double t54155;
  double t54159;
  double t54164;
  double t54168;
  double t54169;
  double t54170;
  double t54171;
  double t54174;
  double t54272;
  double t54177;
  double t54178;
  double t54276;
  double t54183;
  double t54184;
  double t54187;
  double t54292;
  double t54293;
  double t54294;
  double t54296;
  double t54297;
  double t54298;
  double t54306;
  double t54307;
  double t54308;
  double t54310;
  double t54311;
  double t54312;
  double t54320;
  double t54321;
  double t54322;
  double t54324;
  double t54325;
  double t54326;
  double t54323;
  double t54331;
  double t54332;
  double t54333;
  double t54334;
  double t54336;
  double t54343;
  double t54344;
  double t54345;
  double t54347;
  double t54348;
  double t54349;
  double t54364;
  double t54366;
  double t54383;
  double t54385;
  double t54374;
  double t54295;
  double t54299;
  double t54300;
  double t54404;
  double t54406;
  double t54411;
  double t53804;
  double t53806;
  double t53808;
  double t54448;
  double t54455;
  double t54457;
  double t54302;
  double t54303;
  double t54304;
  double t53891;
  double t53892;
  double t53894;
  double t54490;
  double t54491;
  double t54492;
  double t54493;
  double t54494;
  double t54495;
  double t54497;
  double t54498;
  double t54499;
  double t54503;
  double t54504;
  double t54505;
  double t54496;
  double t54508;
  double t54509;
  double t54514;
  double t54515;
  double t54516;
  double t54511;
  double t54522;
  double t54523;
  double t54524;
  double t54526;
  double t54527;
  double t54528;
  double t54513;
  double t54532;
  double t54533;
  double t54534;
  double t54361;
  double t54362;
  double t54369;
  double t54370;
  double t54372;
  double t54379;
  double t54380;
  double t54381;
  double t54550;
  double t54557;
  double t54397;
  double t54398;
  double t54399;
  double t54579;
  double t54583;
  double t54585;
  double t54539;
  double t54540;
  double t54541;
  double t54433;
  double t54434;
  double t54435;
  double t54436;
  double t54437;
  double t54438;
  double t54439;
  double t54622;
  double t54628;
  t2208 = Cos(var1[7]);
  t3579 = Cos(var1[8]);
  t4640 = t2208*t3579;
  t21125 = Sin(var1[7]);
  t21135 = Sin(var1[8]);
  t21308 = t21125*t21135;
  t21465 = t4640 + t21308;
  t36232 = Cos(var1[5]);
  t1420 = Cos(var1[6]);
  t1792 = Sin(var1[5]);
  t40288 = Sin(var1[6]);
  t45660 = Cos(var1[3]);
  t23098 = t1420*t1792*t21465;
  t40347 = t36232*t40288*t21465;
  t41469 = t23098 + t40347;
  t1417 = Sin(var1[3]);
  t45691 = Cos(var1[4]);
  t46352 = -1.*t3579*t21125;
  t46594 = t2208*t21135;
  t51568 = t46352 + t46594;
  t53744 = t45691*t51568;
  t53774 = Sin(var1[4]);
  t53783 = t36232*t1420*t21465;
  t53787 = -1.*t1792*t40288*t21465;
  t53789 = t53783 + t53787;
  t53790 = -1.*t53774*t53789;
  t53791 = t53744 + t53790;
  t53817 = -1.*t1420*t1792;
  t53818 = -1.*t36232*t40288;
  t53819 = t53817 + t53818;
  t53821 = t36232*t1420;
  t53822 = -1.*t1792*t40288;
  t53823 = t53821 + t53822;
  t53872 = t3579*t21125;
  t53873 = -1.*t2208*t21135;
  t53874 = t53872 + t53873;
  t53875 = t1420*t1792*t53874;
  t53876 = t36232*t40288*t53874;
  t53878 = t53875 + t53876;
  t53880 = t45691*t21465;
  t53881 = t36232*t1420*t53874;
  t53883 = -1.*t1792*t40288*t53874;
  t53884 = t53881 + t53883;
  t53885 = -1.*t53774*t53884;
  t53886 = t53880 + t53885;
  t53897 = -1.*t53774*t51568;
  t53898 = -1.*t45691*t53789;
  t53899 = t53897 + t53898;
  t53908 = -1.*t3579;
  t53909 = 1. + t53908;
  t53910 = 0.50321*t53909;
  t53912 = 0.23321*t3579;
  t53913 = t53910 + t53912;
  t53920 = -1.*t1420;
  t53921 = 1. + t53920;
  t53922 = 0.15121*t53921;
  t53923 = -1.*t2208;
  t53924 = 1. + t53923;
  t53925 = 0.28121*t53924;
  t53926 = t2208*t53913;
  t53927 = -0.27*t21125*t21135;
  t53928 = t53925 + t53926 + t53927;
  t53906 = 0.28121*t21125;
  t53914 = -1.*t53913*t21125;
  t53917 = -0.27*t2208*t21135;
  t53918 = t53906 + t53914 + t53917;
  t53929 = t1420*t53928;
  t53930 = t53922 + t53929;
  t53931 = t36232*t53930;
  t53932 = 0.15121*t1420;
  t53933 = -0.15121*t40288;
  t53934 = t40288*t53928;
  t53935 = t53922 + t53932 + t53933 + t53934;
  t53936 = -1.*t1792*t53935;
  t53937 = t53931 + t53936;
  t53941 = t53774*t53918;
  t53942 = t45691*t53937;
  t53943 = t53941 + t53942;
  t53919 = -1.*t53774*t53918;
  t53938 = -1.*t45691*t53937;
  t53939 = t53919 + t53938;
  t53952 = t45691*t53918;
  t53953 = -1.*t53774*t53937;
  t53954 = t53952 + t53953;
  t53903 = t53774*t21465;
  t53904 = t45691*t53884;
  t53905 = t53903 + t53904;
  t53947 = t1792*t53930;
  t53948 = t36232*t53935;
  t53949 = t53947 + t53948;
  t53960 = -1.*t53774*t21465;
  t53961 = -1.*t45691*t53884;
  t53962 = t53960 + t53961;
  t53978 = t53774*t51568;
  t53979 = t45691*t53789;
  t53980 = t53978 + t53979;
  t54033 = -1.*t1420*t1792*t21465;
  t54034 = -1.*t36232*t40288*t21465;
  t54035 = t54033 + t54034;
  t53950 = -1.*t53823*t53949;
  t54049 = -1.*t1792*t53930;
  t54050 = -1.*t36232*t53935;
  t54051 = t54049 + t54050;
  t53967 = t53878*t53949;
  t54063 = -1.*t1420*t1792*t53874;
  t54064 = -1.*t36232*t40288*t53874;
  t54065 = t54063 + t54064;
  t53951 = -1.*t45691*t53819*t53943;
  t53955 = t53774*t53819*t53954;
  t53956 = t53950 + t53951 + t53955;
  t54053 = -1.*t53819*t53949;
  t54054 = -1.*t53823*t53937;
  t54055 = -1.*t36232*t1420;
  t54056 = t1792*t40288;
  t54057 = t54055 + t54056;
  t54062 = t53884*t53949;
  t54067 = t53878*t53937;
  t53968 = t53905*t53943;
  t53969 = t53886*t53954;
  t53970 = t53967 + t53968 + t53969;
  t53987 = -1.*t53878*t53949;
  t53998 = t41469*t53949;
  t54106 = -1.*t53884*t53949;
  t54108 = -1.*t53878*t53937;
  t54116 = t53789*t53949;
  t54118 = t41469*t53937;
  t53988 = -1.*t53905*t53943;
  t53989 = -1.*t53886*t53954;
  t53990 = t53987 + t53988 + t53989;
  t53999 = t53980*t53943;
  t54000 = t53791*t53954;
  t54001 = t53998 + t53999 + t54000;
  t54013 = t53823*t53949;
  t54024 = -1.*t41469*t53949;
  t54014 = t45691*t53819*t53943;
  t54015 = -1.*t53774*t53819*t53954;
  t54016 = t54013 + t54014 + t54015;
  t54078 = Power(t45691,2);
  t54080 = Power(t53774,2);
  t54157 = t53819*t53949;
  t54158 = t53823*t53937;
  t54163 = -1.*t53789*t53949;
  t54165 = -1.*t41469*t53937;
  t54025 = -1.*t53980*t53943;
  t54026 = -1.*t53791*t53954;
  t54027 = t54024 + t54025 + t54026;
  t54036 = var2[0]*t45691*t54035;
  t54037 = t1417*t53774*t54035;
  t54038 = t45660*t53789;
  t54039 = t54037 + t54038;
  t54040 = var2[1]*t54039;
  t54041 = -1.*t45660*t53774*t54035;
  t54042 = t1417*t53789;
  t54043 = t54041 + t54042;
  t54044 = var2[2]*t54043;
  t54045 = -1.*t53819*t53937;
  t54047 = t53950 + t54045;
  t54048 = t53884*t54047;
  t54192 = -0.15121*t1420;
  t54193 = t54192 + t53929;
  t54195 = 0.15121*t40288;
  t54196 = -1.*t40288*t53928;
  t54197 = t54195 + t54196;
  t54058 = -1.*t54057*t53937;
  t54202 = -1.*t1792*t54193;
  t54203 = t36232*t54197;
  t54204 = t54202 + t54203;
  t54206 = t36232*t54193;
  t54207 = t1792*t54197;
  t54208 = t54206 + t54207;
  t54066 = t54065*t53937;
  t54071 = t53918*t21465;
  t54072 = t53884*t53937;
  t54073 = t54071 + t53967 + t54072;
  t54074 = t53819*t54073;
  t54077 = t45691*t54065*t53956;
  t54209 = -1.*t53823*t54208;
  t54082 = -1.*t45691*t54057*t53943;
  t54083 = t53774*t54057*t53954;
  t54213 = t53878*t54208;
  t54088 = t45691*t54065*t53943;
  t54089 = -1.*t53774*t54065*t53954;
  t54092 = t45691*t54057*t53970;
  t54096 = var2[0]*t45691*t54057;
  t54097 = t1417*t53819;
  t54098 = -1.*t45660*t53774*t54057;
  t54099 = t54097 + t54098;
  t54100 = var2[2]*t54099;
  t54101 = t45660*t53819;
  t54102 = t1417*t53774*t54057;
  t54103 = t54101 + t54102;
  t54104 = var2[1]*t54103;
  t54107 = -1.*t54065*t53937;
  t54111 = -1.*t53918*t21465;
  t54112 = -1.*t53884*t53937;
  t54113 = t54111 + t53987 + t54112;
  t54114 = t53789*t54113;
  t54117 = t54035*t53937;
  t54121 = t53918*t51568;
  t54122 = t53789*t53937;
  t54123 = t54121 + t53998 + t54122;
  t54124 = t53884*t54123;
  t54244 = -1.*t53878*t54208;
  t54129 = -1.*t45691*t54065*t53943;
  t54130 = t53774*t54065*t53954;
  t54248 = t41469*t54208;
  t54135 = t45691*t54035*t53943;
  t54136 = -1.*t53774*t54035*t53954;
  t54139 = t45691*t54035*t53990;
  t54140 = t45691*t54065*t54001;
  t54144 = var2[0]*t45691*t54065;
  t54145 = t1417*t53774*t54065;
  t54146 = t45660*t53884;
  t54147 = t54145 + t54146;
  t54148 = var2[1]*t54147;
  t54149 = -1.*t45660*t53774*t54065;
  t54150 = t1417*t53884;
  t54151 = t54149 + t54150;
  t54152 = var2[2]*t54151;
  t54153 = t53819*t53937;
  t54154 = t54013 + t54153;
  t54155 = t53789*t54154;
  t54159 = t54057*t53937;
  t54164 = -1.*t54035*t53937;
  t54168 = -1.*t53918*t51568;
  t54169 = -1.*t53789*t53937;
  t54170 = t54168 + t54024 + t54169;
  t54171 = t53819*t54170;
  t54174 = t45691*t54035*t54016;
  t54272 = t53823*t54208;
  t54177 = t45691*t54057*t53943;
  t54178 = -1.*t53774*t54057*t53954;
  t54276 = -1.*t41469*t54208;
  t54183 = -1.*t45691*t54035*t53943;
  t54184 = t53774*t54035*t53954;
  t54187 = t45691*t54057*t54027;
  t54292 = -1.*t2208*t3579;
  t54293 = -1.*t21125*t21135;
  t54294 = t54292 + t54293;
  t54296 = t36232*t1420*t51568;
  t54297 = -1.*t1792*t40288*t51568;
  t54298 = t54296 + t54297;
  t54306 = t1420*t1792*t51568;
  t54307 = t36232*t40288*t51568;
  t54308 = t54306 + t54307;
  t54310 = t45691*t54294;
  t54311 = -1.*t53774*t54298;
  t54312 = t54310 + t54311;
  t54320 = t1420*t1792*t53918;
  t54321 = t36232*t40288*t53918;
  t54322 = t54320 + t54321;
  t54324 = t36232*t1420*t53918;
  t54325 = -1.*t1792*t40288*t53918;
  t54326 = t54324 + t54325;
  t54323 = -1.*t53823*t54322;
  t54331 = 0.28121*t2208;
  t54332 = -1.*t2208*t53913;
  t54333 = 0.27*t21125*t21135;
  t54334 = t54331 + t54332 + t54333;
  t54336 = t53878*t54322;
  t54343 = t53774*t54334;
  t54344 = t45691*t54326;
  t54345 = t54343 + t54344;
  t54347 = t45691*t54334;
  t54348 = -1.*t53774*t54326;
  t54349 = t54347 + t54348;
  t54364 = t53918*t54294;
  t54366 = t51568*t54334;
  t54383 = Power(t1420,2);
  t54385 = Power(t40288,2);
  t54374 = -1.*t54334*t21465;
  t54295 = t53774*t54294;
  t54299 = t45691*t54298;
  t54300 = t54295 + t54299;
  t54404 = t54322*t41469;
  t54406 = t54308*t53949;
  t54411 = -1.*t53878*t54322;
  t53804 = t45660*t41469;
  t53806 = -1.*t1417*t53791;
  t53808 = t53804 + t53806;
  t54448 = t53823*t54322;
  t54455 = -1.*t54322*t41469;
  t54457 = -1.*t54308*t53949;
  t54302 = t40288*t53930;
  t54303 = -1.*t1420*t53935;
  t54304 = t54302 + t54303;
  t53891 = t45660*t53878;
  t53892 = -1.*t1417*t53886;
  t53894 = t53891 + t53892;
  t54490 = -0.27*t3579*t21125;
  t54491 = 0.27*t2208*t21135;
  t54492 = t54490 + t54491;
  t54493 = t1420*t1792*t54492;
  t54494 = t36232*t40288*t54492;
  t54495 = t54493 + t54494;
  t54497 = t36232*t1420*t54492;
  t54498 = -1.*t1792*t40288*t54492;
  t54499 = t54497 + t54498;
  t54503 = t1420*t1792*t54294;
  t54504 = t36232*t40288*t54294;
  t54505 = t54503 + t54504;
  t54496 = -1.*t53823*t54495;
  t54508 = -0.27*t2208*t3579;
  t54509 = t54508 + t53927;
  t54514 = t36232*t1420*t54294;
  t54515 = -1.*t1792*t40288*t54294;
  t54516 = t54514 + t54515;
  t54511 = t53878*t54495;
  t54522 = t53774*t54509;
  t54523 = t45691*t54499;
  t54524 = t54522 + t54523;
  t54526 = t45691*t54509;
  t54527 = -1.*t53774*t54499;
  t54528 = t54526 + t54527;
  t54513 = t54505*t53949;
  t54532 = t53774*t53874;
  t54533 = t45691*t54516;
  t54534 = t54532 + t54533;
  t54361 = -1.*t53874*t53928;
  t54362 = t54361 + t54111;
  t54369 = t53928*t21465;
  t54370 = t54121 + t54369;
  t54372 = -1.*t53874*t53918;
  t54379 = -1.*t1420*t53874*t53930;
  t54380 = -1.*t40288*t53874*t53935;
  t54381 = t54111 + t54379 + t54380;
  t54550 = t51568*t54509;
  t54557 = -1.*t54509*t21465;
  t54397 = t1420*t21465*t53930;
  t54398 = t40288*t21465*t53935;
  t54399 = t54121 + t54397 + t54398;
  t54579 = t54495*t41469;
  t54583 = -1.*t53878*t54495;
  t54585 = -1.*t54505*t53949;
  t54539 = t45691*t53874;
  t54540 = -1.*t53774*t54516;
  t54541 = t54539 + t54540;
  t54433 = 0.15121*t54294;
  t54434 = 0.15121*t21465;
  t54435 = t54433 + t54434;
  t54436 = var2[6]*t54435;
  t54437 = -1.*t40288*t53930;
  t54438 = t1420*t53935;
  t54439 = t54437 + t54438;
  t54622 = t53823*t54495;
  t54628 = -1.*t54495*t41469;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1417*t41469 - 1.*t45660*t53791)*var2[1] + t53808*var2[2];
  p_output1[10]=(t45660*t53774*t53819 - 1.*t1417*t53823)*var2[1] + (t1417*t53774*t53819 + t45660*t53823)*var2[2];
  p_output1[11]=(-1.*t1417*t53878 - 1.*t45660*t53886)*var2[1] + t53894*var2[2];
  p_output1[12]=t53791*var2[0] - 1.*t1417*t53899*var2[1] + t45660*t53899*var2[2] + (t53905*(t53774*t53819*t53939 + t53774*t53819*t53943) + t53886*t53956 + t45691*t53819*(t53886*t53939 + t53886*t53943 + t53905*t53954 + t53954*t53962) - 1.*t53774*t53819*t53970)*var2[3];
  p_output1[13]=-1.*t53774*t53819*var2[0] + t1417*t45691*t53819*var2[1] - 1.*t45660*t45691*t53819*var2[2] + ((-1.*t53886*t53939 - 1.*t53886*t53943 - 1.*t53905*t53954 - 1.*t53954*t53962)*t53980 + t53905*(t53791*t53939 + t53791*t53943 + t53899*t53954 + t53954*t53980) + t53791*t53990 + t53886*t54001)*var2[3];
  p_output1[14]=t53886*var2[0] - 1.*t1417*t53962*var2[1] + t45660*t53962*var2[2] + ((-1.*t53774*t53819*t53939 - 1.*t53774*t53819*t53943)*t53980 + t45691*t53819*(-1.*t53791*t53939 - 1.*t53791*t53943 - 1.*t53899*t53954 - 1.*t53954*t53980) + t53791*t54016 - 1.*t53774*t53819*t54027)*var2[3];
  p_output1[15]=t54036 + t54040 + t54044 + (t54077 + t53905*(t54053 + t54054 - 1.*t53819*t54051*t54078 - 1.*t53819*t54051*t54080 + t54082 + t54083) + t45691*t53819*(-1.*t53774*t53886*t54051 + t45691*t53905*t54051 + t54062 + t54067 + t54088 + t54089) + t54092)*var2[3] + (t54048 + t53878*(-1.*t53819*t54051 + t54053 + t54054 + t54058) + t53823*(t53884*t54051 + t54062 + t54066 + t54067) + t54074)*var2[4];
  p_output1[16]=t54096 + t54100 + t54104 + (t53980*(t53774*t53886*t54051 - 1.*t45691*t53905*t54051 + t54106 + t54108 + t54129 + t54130) + t53905*(-1.*t53774*t53791*t54051 + t45691*t53980*t54051 + t54116 + t54118 + t54135 + t54136) + t54139 + t54140)*var2[3] + (t41469*(-1.*t53884*t54051 + t54106 + t54107 + t54108) + t54114 + t53878*(t53789*t54051 + t54116 + t54117 + t54118) + t54124)*var2[4];
  p_output1[17]=t54144 + t54148 + t54152 + (t54174 + t53980*(t53819*t54051*t54078 + t53819*t54051*t54080 + t54157 + t54158 + t54177 + t54178) + t45691*t53819*(t53774*t53791*t54051 - 1.*t45691*t53980*t54051 + t54163 + t54165 + t54183 + t54184) + t54187)*var2[3] + (t54155 + t41469*(t53819*t54051 + t54157 + t54158 + t54159) + t53823*(-1.*t53789*t54051 + t54163 + t54164 + t54165) + t54171)*var2[4];
  p_output1[18]=t54036 + t54040 + t54044 + (t54077 + t54092 + t53905*(t54053 + t54082 + t54083 - 1.*t53819*t54078*t54204 - 1.*t53819*t54080*t54204 + t54209) + t45691*t53819*(t54062 + t54088 + t54089 - 1.*t53774*t53886*t54204 + t45691*t53905*t54204 + t54213))*var2[3] + (t54048 + t54074 + t53878*(t54053 + t54058 - 1.*t53819*t54204 + t54209) + t53823*(t54062 + t54066 + t53884*t54204 + t54213))*var2[4] + t21465*(t1420*t53930 + t40288*t53935 - 1.*t1420*t54193 + t40288*t54197)*var2[5];
  p_output1[19]=t54096 + t54100 + t54104 + (t54139 + t54140 + t53980*(t54106 + t54129 + t54130 + t53774*t53886*t54204 - 1.*t45691*t53905*t54204 + t54244) + t53905*(t54116 + t54135 + t54136 - 1.*t53774*t53791*t54204 + t45691*t53980*t54204 + t54248))*var2[3] + (t54114 + t54124 + t41469*(t54106 + t54107 - 1.*t53884*t54204 + t54244) + t53878*(t54116 + t54117 + t53789*t54204 + t54248))*var2[4] + (t21465*(-1.*t21465*t40288*t53930 + t1420*t21465*t53935 + t21465*t40288*t54193 + t1420*t21465*t54197) + t51568*(t40288*t53874*t53930 - 1.*t1420*t53874*t53935 - 1.*t40288*t53874*t54193 - 1.*t1420*t53874*t54197))*var2[5];
  p_output1[20]=t54144 + t54148 + t54152 + (t54174 + t54187 + t53980*(t54157 + t54177 + t54178 + t53819*t54078*t54204 + t53819*t54080*t54204 + t54272) + t45691*t53819*(t54163 + t54183 + t54184 + t53774*t53791*t54204 - 1.*t45691*t53980*t54204 + t54276))*var2[3] + (t54155 + t54171 + t41469*(t54157 + t54159 + t53819*t54204 + t54272) + t53823*(t54163 + t54164 - 1.*t53789*t54204 + t54276))*var2[4] + t51568*(-1.*t1420*t53930 - 1.*t40288*t53935 + t1420*t54193 - 1.*t40288*t54197)*var2[5];
  p_output1[21]=t54300*var2[0] + (t45660*t54308 - 1.*t1417*t54312)*var2[1] + (t1417*t54308 + t45660*t54312)*var2[2] + (t53956*t53980 + t53905*(t54323 - 1.*t45691*t53819*t54345 + t53774*t53819*t54349) + t45691*t53819*(t53998 + t53999 + t54000 + t54336 + t53905*t54345 + t53886*t54349))*var2[3] + (t41469*t54047 + t53878*(t54323 - 1.*t53819*t54326) + t53823*(t53998 + t54121 + t54122 + t53884*t54326 + t21465*t54334 + t54336))*var2[4] + t51568*t54304*var2[5];
  p_output1[22]=(t53980*t54001 + t53990*t54300 + t53905*(t53943*t54300 + t53954*t54312 + t53980*t54345 + t53791*t54349 + t54404 + t54406) + t53980*(t54024 + t54025 + t54026 - 1.*t53905*t54345 - 1.*t53886*t54349 + t54411))*var2[3] + (t41469*t54123 + t54113*t54308 + t53878*(t53937*t54298 + t53789*t54326 + t54364 + t54366 + t54404 + t54406) + t41469*(t54024 + t54168 + t54169 - 1.*t53884*t54326 + t54374 + t54411))*var2[4] + (t54294*t54381 + t21465*(t1420*t51568*t53930 + t40288*t51568*t53935 + t54364 + t54366 + t21465*t53918*t54383 + t21465*t53918*t54385) + t51568*(-1.*t1420*t21465*t53930 - 1.*t21465*t40288*t53935 + t54168 + t54374 - 1.*t53874*t53918*t54383 - 1.*t53874*t53918*t54385) + t51568*t54399)*var2[5] + (t54294*t54362 + t21465*(t51568*t53928 + t54071 + t54364 + t54366) + t51568*t54370 + t51568*(-1.*t21465*t53928 + t54168 + t54372 + t54374))*var2[6];
  p_output1[23]=t54436 + t53980*var2[0] + t53808*var2[1] + (t1417*t41469 + t45660*t53791)*var2[2] + (t54016*t54300 + t53980*(t45691*t53819*t54345 - 1.*t53774*t53819*t54349 + t54448) + t45691*t53819*(-1.*t53943*t54300 - 1.*t53954*t54312 - 1.*t53980*t54345 - 1.*t53791*t54349 + t54455 + t54457))*var2[3] + (t54154*t54308 + t41469*(t53819*t54326 + t54448) + t53823*(-1.*t53918*t54294 - 1.*t53937*t54298 - 1.*t53789*t54326 - 1.*t51568*t54334 + t54455 + t54457))*var2[4] + t54294*t54439*var2[5];
  p_output1[24]=t53905*var2[0] + t53894*var2[1] + (t1417*t53878 + t45660*t53886)*var2[2] + (t53905*(t54496 - 1.*t45691*t53819*t54524 + t53774*t53819*t54528) + t53956*t54534 + t45691*t53819*(t54511 + t54513 + t53905*t54524 + t53886*t54528 + t53943*t54534 + t53954*t54541))*var2[3] + (t53878*(t54496 - 1.*t53819*t54499) + t54047*t54505 + t53823*(t53874*t53918 + t53884*t54499 + t21465*t54509 + t54511 + t54513 + t53937*t54516))*var2[4] + t53874*t54304*var2[5] + (0.28121*t3579 - 0.27*Power(t3579,2) - 1.*t3579*t53913)*var2[7];
  p_output1[25]=(t53905*t53990 + t54001*t54534 + t53905*(t53967 + t53968 + t53969 + t53980*t54524 + t53791*t54528 + t54579) + t53980*(-1.*t53905*t54524 - 1.*t53886*t54528 - 1.*t53943*t54534 - 1.*t53954*t54541 + t54583 + t54585))*var2[3] + (t53878*t54113 + t54123*t54505 + t53878*(t53967 + t54071 + t54072 + t53789*t54499 + t54550 + t54579) + t41469*(t54372 - 1.*t53884*t54499 - 1.*t53937*t54516 + t54557 + t54583 + t54585))*var2[4] + (t21465*t54381 + t53874*t54399 + t21465*(t1420*t53874*t53930 + t40288*t53874*t53935 + t54071 + t21465*t54383*t54492 + t21465*t54385*t54492 + t54550) + t51568*(-1.*t1420*t53930*t54294 - 1.*t40288*t53935*t54294 + t54372 - 1.*t53874*t54383*t54492 - 1.*t53874*t54385*t54492 + t54557))*var2[5] + (t21465*t54362 + t53874*t54370 + t21465*(t53874*t53928 + t54071 + t21465*t54492 + t54550) + t51568*(-1.*t53928*t54294 + t54372 - 1.*t53874*t54492 + t54557))*var2[6];
  p_output1[26]=t54436 + t54534*var2[0] + (t45660*t54505 - 1.*t1417*t54541)*var2[1] + (t1417*t54505 + t45660*t54541)*var2[2] + (t53905*t54016 + t53980*(t45691*t53819*t54524 - 1.*t53774*t53819*t54528 + t54622) + t45691*t53819*(t53987 + t53988 + t53989 - 1.*t53980*t54524 - 1.*t53791*t54528 + t54628))*var2[3] + (t53878*t54154 + t41469*(t53819*t54499 + t54622) + t53823*(t53987 + t54111 + t54112 - 1.*t53789*t54499 - 1.*t51568*t54509 + t54628))*var2[4] + t21465*t54439*var2[5] + (-0.28121*t21135 + 0.27*t21135*t3579 + t21135*t53913)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
