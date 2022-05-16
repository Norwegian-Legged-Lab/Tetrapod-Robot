/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:08 GMT+02:00
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
  double t1501;
  double t1722;
  double t1831;
  double t2203;
  double t3811;
  double t3886;
  double t5278;
  double t5697;
  double t1068;
  double t1273;
  double t5806;
  double t22897;
  double t5523;
  double t7792;
  double t10076;
  double t599;
  double t22953;
  double t23408;
  double t23734;
  double t24016;
  double t24812;
  double t26137;
  double t26566;
  double t41387;
  double t41520;
  double t41548;
  double t41602;
  double t44927;
  double t45880;
  double t46013;
  double t46371;
  double t46570;
  double t46587;
  double t46909;
  double t47016;
  double t47397;
  double t47862;
  double t47963;
  double t48194;
  double t48334;
  double t48880;
  double t49048;
  double t49351;
  double t49504;
  double t49644;
  double t50358;
  double t50379;
  double t50601;
  double t51029;
  double t51030;
  double t51031;
  double t51041;
  double t51158;
  double t51544;
  double t51546;
  double t51549;
  double t51554;
  double t51555;
  double t51556;
  double t51557;
  double t51559;
  double t51027;
  double t51222;
  double t51247;
  double t51320;
  double t51547;
  double t51572;
  double t51584;
  double t51585;
  double t51620;
  double t51655;
  double t51657;
  double t51676;
  double t51689;
  double t51707;
  double t51768;
  double t52048;
  double t52049;
  double t52051;
  double t51480;
  double t52040;
  double t52043;
  double t52128;
  double t52130;
  double t52131;
  double t50807;
  double t50815;
  double t51016;
  double t52062;
  double t52092;
  double t52096;
  double t52186;
  double t52234;
  double t52310;
  double t52483;
  double t52484;
  double t52486;
  double t53607;
  double t53627;
  double t53644;
  double t52103;
  double t53868;
  double t53869;
  double t53870;
  double t52411;
  double t53945;
  double t53946;
  double t53957;
  double t52127;
  double t52134;
  double t52135;
  double t53887;
  double t53900;
  double t53889;
  double t53890;
  double t53895;
  double t53944;
  double t53959;
  double t52416;
  double t52421;
  double t52430;
  double t52510;
  double t52593;
  double t54019;
  double t54021;
  double t54059;
  double t54061;
  double t52511;
  double t52512;
  double t52517;
  double t52615;
  double t52633;
  double t52648;
  double t53249;
  double t53464;
  double t53266;
  double t53284;
  double t53302;
  double t53976;
  double t53981;
  double t54166;
  double t54172;
  double t54179;
  double t54181;
  double t53480;
  double t53502;
  double t53519;
  double t53662;
  double t53792;
  double t53799;
  double t53801;
  double t53809;
  double t53813;
  double t53820;
  double t53824;
  double t53825;
  double t53826;
  double t53827;
  double t53864;
  double t54226;
  double t54227;
  double t54228;
  double t54224;
  double t53896;
  double t54233;
  double t54234;
  double t54235;
  double t54237;
  double t54238;
  double t54239;
  double t53958;
  double t53965;
  double t53966;
  double t53971;
  double t53972;
  double t53975;
  double t54240;
  double t53983;
  double t53984;
  double t54245;
  double t53993;
  double t53994;
  double t53997;
  double t54005;
  double t54006;
  double t54007;
  double t54008;
  double t54009;
  double t54010;
  double t54011;
  double t54012;
  double t54017;
  double t54020;
  double t54028;
  double t54030;
  double t54031;
  double t54032;
  double t54060;
  double t54075;
  double t54076;
  double t54079;
  double t54081;
  double t54279;
  double t54090;
  double t54091;
  double t54283;
  double t54109;
  double t54110;
  double t54120;
  double t54125;
  double t54131;
  double t54132;
  double t54133;
  double t54134;
  double t54137;
  double t54138;
  double t54141;
  double t54142;
  double t54143;
  double t54156;
  double t54160;
  double t54161;
  double t54167;
  double t54180;
  double t54186;
  double t54188;
  double t54189;
  double t54190;
  double t54198;
  double t54335;
  double t54201;
  double t54205;
  double t54340;
  double t54215;
  double t54216;
  double t54219;
  double t54367;
  double t54368;
  double t54371;
  double t54388;
  double t54389;
  double t54390;
  double t54394;
  double t54395;
  double t54396;
  double t54401;
  double t54402;
  double t54403;
  double t54415;
  double t54416;
  double t54417;
  double t54418;
  double t54419;
  double t54420;
  double t54421;
  double t54423;
  double t54424;
  double t54425;
  double t54422;
  double t54430;
  double t54431;
  double t54440;
  double t54447;
  double t54449;
  double t54450;
  double t54452;
  double t54453;
  double t54454;
  double t54471;
  double t54474;
  double t54487;
  double t54489;
  double t54482;
  double t54543;
  double t54545;
  double t54387;
  double t54391;
  double t54392;
  double t54551;
  double t41631;
  double t44010;
  double t44219;
  double t54587;
  double t54594;
  double t54596;
  double t54373;
  double t54375;
  double t54376;
  double t54377;
  double t54378;
  double t54382;
  double t54384;
  double t50213;
  double t50214;
  double t50220;
  double t54631;
  double t54632;
  double t54633;
  double t54634;
  double t54635;
  double t54637;
  double t54638;
  double t54639;
  double t54643;
  double t54644;
  double t54645;
  double t54636;
  double t54648;
  double t54649;
  double t54650;
  double t54655;
  double t54656;
  double t54657;
  double t54652;
  double t54654;
  double t54663;
  double t54664;
  double t54665;
  double t54667;
  double t54668;
  double t54669;
  double t54673;
  double t54674;
  double t54675;
  double t54468;
  double t54469;
  double t54477;
  double t54478;
  double t54510;
  double t54512;
  double t54517;
  double t54692;
  double t54531;
  double t54535;
  double t54536;
  double t54696;
  double t54698;
  double t54722;
  double t54727;
  double t54729;
  double t54680;
  double t54681;
  double t54682;
  double t54574;
  double t54575;
  double t54576;
  double t54765;
  double t54771;
  t1501 = Cos(var1[10]);
  t1722 = Cos(var1[11]);
  t1831 = -1.*t1501*t1722;
  t2203 = Sin(var1[10]);
  t3811 = Sin(var1[11]);
  t3886 = -1.*t2203*t3811;
  t5278 = t1831 + t3886;
  t5697 = Cos(var1[9]);
  t1068 = Cos(var1[5]);
  t1273 = Sin(var1[9]);
  t5806 = Sin(var1[5]);
  t22897 = Cos(var1[3]);
  t5523 = t1068*t1273*t5278;
  t7792 = t5697*t5278*t5806;
  t10076 = t5523 + t7792;
  t599 = Sin(var1[3]);
  t22953 = Cos(var1[4]);
  t23408 = -1.*t1722*t2203;
  t23734 = t1501*t3811;
  t24016 = t23408 + t23734;
  t24812 = t22953*t24016;
  t26137 = Sin(var1[4]);
  t26566 = t5697*t1068*t5278;
  t41387 = -1.*t1273*t5278*t5806;
  t41520 = t26566 + t41387;
  t41548 = -1.*t26137*t41520;
  t41602 = t24812 + t41548;
  t44927 = t1068*t1273;
  t45880 = t5697*t5806;
  t46013 = t44927 + t45880;
  t46371 = -1.*t5697*t1068;
  t46570 = t1273*t5806;
  t46587 = t46371 + t46570;
  t46909 = t1068*t1273*t24016;
  t47016 = t5697*t24016*t5806;
  t47397 = t46909 + t47016;
  t47862 = t1501*t1722;
  t47963 = t2203*t3811;
  t48194 = t47862 + t47963;
  t48334 = t22953*t48194;
  t48880 = t5697*t1068*t24016;
  t49048 = -1.*t1273*t24016*t5806;
  t49351 = t48880 + t49048;
  t49504 = -1.*t26137*t49351;
  t49644 = t48334 + t49504;
  t50358 = -1.*t24016*t26137;
  t50379 = -1.*t22953*t41520;
  t50601 = t50358 + t50379;
  t51029 = -1.*t1722;
  t51030 = 1. + t51029;
  t51031 = -0.50321*t51030;
  t51041 = -0.23321*t1722;
  t51158 = t51031 + t51041;
  t51544 = -1.*t5697;
  t51546 = 1. + t51544;
  t51549 = -1.*t1501;
  t51554 = 1. + t51549;
  t51555 = -0.28121*t51554;
  t51556 = t1501*t51158;
  t51557 = 0.27*t2203*t3811;
  t51559 = t51555 + t51556 + t51557;
  t51027 = 0.28121*t2203;
  t51222 = t51158*t2203;
  t51247 = -0.27*t1501*t3811;
  t51320 = t51027 + t51222 + t51247;
  t51547 = -0.15121*t51546;
  t51572 = t5697*t51559;
  t51584 = t51547 + t51572;
  t51585 = t1068*t51584;
  t51620 = 0.15121*t51546;
  t51655 = 0.15121*t5697;
  t51657 = 0.15121*t1273;
  t51676 = t1273*t51559;
  t51689 = t51620 + t51655 + t51657 + t51676;
  t51707 = -1.*t51689*t5806;
  t51768 = t51585 + t51707;
  t52048 = t51320*t26137;
  t52049 = t22953*t51768;
  t52051 = t52048 + t52049;
  t51480 = -1.*t51320*t26137;
  t52040 = -1.*t22953*t51768;
  t52043 = t51480 + t52040;
  t52128 = t22953*t51320;
  t52130 = -1.*t26137*t51768;
  t52131 = t52128 + t52130;
  t50807 = t48194*t26137;
  t50815 = t22953*t49351;
  t51016 = t50807 + t50815;
  t52062 = t1068*t51689;
  t52092 = t51584*t5806;
  t52096 = t52062 + t52092;
  t52186 = -1.*t48194*t26137;
  t52234 = -1.*t22953*t49351;
  t52310 = t52186 + t52234;
  t52483 = t24016*t26137;
  t52484 = t22953*t41520;
  t52486 = t52483 + t52484;
  t53607 = -1.*t1068*t1273*t5278;
  t53627 = -1.*t5697*t5278*t5806;
  t53644 = t53607 + t53627;
  t52103 = -1.*t46587*t52096;
  t53868 = -1.*t1068*t51689;
  t53869 = -1.*t51584*t5806;
  t53870 = t53868 + t53869;
  t52411 = t47397*t52096;
  t53945 = -1.*t1068*t1273*t24016;
  t53946 = -1.*t5697*t24016*t5806;
  t53957 = t53945 + t53946;
  t52127 = -1.*t22953*t46013*t52051;
  t52134 = t26137*t46013*t52131;
  t52135 = t52103 + t52127 + t52134;
  t53887 = -1.*t46013*t52096;
  t53900 = -1.*t46587*t51768;
  t53889 = t5697*t1068;
  t53890 = -1.*t1273*t5806;
  t53895 = t53889 + t53890;
  t53944 = t49351*t52096;
  t53959 = t47397*t51768;
  t52416 = t51016*t52051;
  t52421 = t49644*t52131;
  t52430 = t52411 + t52416 + t52421;
  t52510 = -1.*t47397*t52096;
  t52593 = t10076*t52096;
  t54019 = -1.*t49351*t52096;
  t54021 = -1.*t47397*t51768;
  t54059 = t41520*t52096;
  t54061 = t10076*t51768;
  t52511 = -1.*t51016*t52051;
  t52512 = -1.*t49644*t52131;
  t52517 = t52510 + t52511 + t52512;
  t52615 = t52486*t52051;
  t52633 = t41602*t52131;
  t52648 = t52593 + t52615 + t52633;
  t53249 = t46587*t52096;
  t53464 = -1.*t10076*t52096;
  t53266 = t22953*t46013*t52051;
  t53284 = -1.*t26137*t46013*t52131;
  t53302 = t53249 + t53266 + t53284;
  t53976 = Power(t22953,2);
  t53981 = Power(t26137,2);
  t54166 = t46013*t52096;
  t54172 = t46587*t51768;
  t54179 = -1.*t41520*t52096;
  t54181 = -1.*t10076*t51768;
  t53480 = -1.*t52486*t52051;
  t53502 = -1.*t41602*t52131;
  t53519 = t53464 + t53480 + t53502;
  t53662 = var2[0]*t22953*t53644;
  t53792 = t599*t26137*t53644;
  t53799 = t22897*t41520;
  t53801 = t53792 + t53799;
  t53809 = var2[1]*t53801;
  t53813 = -1.*t22897*t26137*t53644;
  t53820 = t599*t41520;
  t53824 = t53813 + t53820;
  t53825 = var2[2]*t53824;
  t53826 = -1.*t46013*t51768;
  t53827 = t52103 + t53826;
  t53864 = t49351*t53827;
  t54226 = -0.15121*t1273;
  t54227 = -1.*t1273*t51559;
  t54228 = t54226 + t54227;
  t54224 = t51655 + t51572;
  t53896 = -1.*t53895*t51768;
  t54233 = t1068*t54228;
  t54234 = -1.*t54224*t5806;
  t54235 = t54233 + t54234;
  t54237 = t1068*t54224;
  t54238 = t54228*t5806;
  t54239 = t54237 + t54238;
  t53958 = t53957*t51768;
  t53965 = t51320*t48194;
  t53966 = t49351*t51768;
  t53971 = t53965 + t52411 + t53966;
  t53972 = t46013*t53971;
  t53975 = t22953*t53957*t52135;
  t54240 = -1.*t46587*t54239;
  t53983 = -1.*t22953*t53895*t52051;
  t53984 = t26137*t53895*t52131;
  t54245 = t47397*t54239;
  t53993 = t22953*t53957*t52051;
  t53994 = -1.*t26137*t53957*t52131;
  t53997 = t22953*t53895*t52430;
  t54005 = var2[0]*t22953*t53895;
  t54006 = t599*t46013;
  t54007 = -1.*t22897*t26137*t53895;
  t54008 = t54006 + t54007;
  t54009 = var2[2]*t54008;
  t54010 = t22897*t46013;
  t54011 = t599*t26137*t53895;
  t54012 = t54010 + t54011;
  t54017 = var2[1]*t54012;
  t54020 = -1.*t53957*t51768;
  t54028 = -1.*t51320*t48194;
  t54030 = -1.*t49351*t51768;
  t54031 = t54028 + t52510 + t54030;
  t54032 = t41520*t54031;
  t54060 = t53644*t51768;
  t54075 = t51320*t24016;
  t54076 = t41520*t51768;
  t54079 = t54075 + t52593 + t54076;
  t54081 = t49351*t54079;
  t54279 = -1.*t47397*t54239;
  t54090 = -1.*t22953*t53957*t52051;
  t54091 = t26137*t53957*t52131;
  t54283 = t10076*t54239;
  t54109 = t22953*t53644*t52051;
  t54110 = -1.*t26137*t53644*t52131;
  t54120 = t22953*t53644*t52517;
  t54125 = t22953*t53957*t52648;
  t54131 = var2[0]*t22953*t53957;
  t54132 = t599*t26137*t53957;
  t54133 = t22897*t49351;
  t54134 = t54132 + t54133;
  t54137 = var2[1]*t54134;
  t54138 = -1.*t22897*t26137*t53957;
  t54141 = t599*t49351;
  t54142 = t54138 + t54141;
  t54143 = var2[2]*t54142;
  t54156 = t46013*t51768;
  t54160 = t53249 + t54156;
  t54161 = t41520*t54160;
  t54167 = t53895*t51768;
  t54180 = -1.*t53644*t51768;
  t54186 = -1.*t51320*t24016;
  t54188 = -1.*t41520*t51768;
  t54189 = t54186 + t53464 + t54188;
  t54190 = t46013*t54189;
  t54198 = t22953*t53644*t53302;
  t54335 = t46587*t54239;
  t54201 = t22953*t53895*t52051;
  t54205 = -1.*t26137*t53895*t52131;
  t54340 = -1.*t10076*t54239;
  t54215 = -1.*t22953*t53644*t52051;
  t54216 = t26137*t53644*t52131;
  t54219 = t22953*t53895*t53519;
  t54367 = t1722*t2203;
  t54368 = -1.*t1501*t3811;
  t54371 = t54367 + t54368;
  t54388 = t5697*t1068*t54371;
  t54389 = -1.*t1273*t54371*t5806;
  t54390 = t54388 + t54389;
  t54394 = t1068*t1273*t54371;
  t54395 = t5697*t54371*t5806;
  t54396 = t54394 + t54395;
  t54401 = t22953*t5278;
  t54402 = -1.*t26137*t54390;
  t54403 = t54401 + t54402;
  t54415 = -0.28121*t2203;
  t54416 = -1.*t51158*t2203;
  t54417 = 0.27*t1501*t3811;
  t54418 = t54415 + t54416 + t54417;
  t54419 = t1068*t1273*t54418;
  t54420 = t5697*t54418*t5806;
  t54421 = t54419 + t54420;
  t54423 = t5697*t1068*t54418;
  t54424 = -1.*t1273*t54418*t5806;
  t54425 = t54423 + t54424;
  t54422 = -1.*t46587*t54421;
  t54430 = 0.28121*t1501;
  t54431 = t54430 + t51556 + t51557;
  t54440 = t54421*t47397;
  t54447 = t54431*t26137;
  t54449 = t22953*t54425;
  t54450 = t54447 + t54449;
  t54452 = t22953*t54431;
  t54453 = -1.*t26137*t54425;
  t54454 = t54452 + t54453;
  t54471 = t51320*t5278;
  t54474 = t24016*t54431;
  t54487 = Power(t5697,2);
  t54489 = Power(t1273,2);
  t54482 = -1.*t54431*t48194;
  t54543 = t54421*t10076;
  t54545 = t54396*t52096;
  t54387 = t5278*t26137;
  t54391 = t22953*t54390;
  t54392 = t54387 + t54391;
  t54551 = -1.*t54421*t47397;
  t41631 = t22897*t10076;
  t44010 = -1.*t599*t41602;
  t44219 = t41631 + t44010;
  t54587 = t46587*t54421;
  t54594 = -1.*t54421*t10076;
  t54596 = -1.*t54396*t52096;
  t54373 = 0.15121*t54371;
  t54375 = 0.15121*t24016;
  t54376 = t54373 + t54375;
  t54377 = var2[9]*t54376;
  t54378 = -1.*t1273*t51584;
  t54382 = t5697*t51689;
  t54384 = t54378 + t54382;
  t50213 = t22897*t47397;
  t50214 = -1.*t599*t49644;
  t50220 = t50213 + t50214;
  t54631 = 0.27*t1722*t2203;
  t54632 = t54631 + t51247;
  t54633 = t1068*t1273*t54632;
  t54634 = t5697*t54632*t5806;
  t54635 = t54633 + t54634;
  t54637 = t5697*t1068*t54632;
  t54638 = -1.*t1273*t54632*t5806;
  t54639 = t54637 + t54638;
  t54643 = t1068*t1273*t48194;
  t54644 = t5697*t48194*t5806;
  t54645 = t54643 + t54644;
  t54636 = -1.*t46587*t54635;
  t54648 = -0.27*t1501*t1722;
  t54649 = -0.27*t2203*t3811;
  t54650 = t54648 + t54649;
  t54655 = t5697*t1068*t48194;
  t54656 = -1.*t1273*t48194*t5806;
  t54657 = t54655 + t54656;
  t54652 = t54635*t47397;
  t54654 = t54645*t52096;
  t54663 = t54650*t26137;
  t54664 = t22953*t54639;
  t54665 = t54663 + t54664;
  t54667 = t22953*t54650;
  t54668 = -1.*t26137*t54639;
  t54669 = t54667 + t54668;
  t54673 = t54371*t26137;
  t54674 = t22953*t54657;
  t54675 = t54673 + t54674;
  t54468 = t5278*t51559;
  t54469 = t54075 + t54468;
  t54477 = -1.*t24016*t51559;
  t54478 = t54477 + t54028;
  t54510 = -1.*t5697*t24016*t51584;
  t54512 = -1.*t1273*t24016*t51689;
  t54517 = t54028 + t54510 + t54512;
  t54692 = t24016*t54650;
  t54531 = t5697*t5278*t51584;
  t54535 = t1273*t5278*t51689;
  t54536 = t54075 + t54531 + t54535;
  t54696 = -1.*t54371*t51320;
  t54698 = -1.*t54650*t48194;
  t54722 = t54635*t10076;
  t54727 = -1.*t54635*t47397;
  t54729 = -1.*t54645*t52096;
  t54680 = t22953*t54371;
  t54681 = -1.*t26137*t54657;
  t54682 = t54680 + t54681;
  t54574 = t1273*t51584;
  t54575 = -1.*t5697*t51689;
  t54576 = t54574 + t54575;
  t54765 = t46587*t54635;
  t54771 = -1.*t54635*t10076;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t22897*t41602 - 1.*t10076*t599)*var2[1] + t44219*var2[2];
  p_output1[10]=(t22897*t26137*t46013 - 1.*t46587*t599)*var2[1] + (t22897*t46587 + t26137*t46013*t599)*var2[2];
  p_output1[11]=(-1.*t22897*t49644 - 1.*t47397*t599)*var2[1] + t50220*var2[2];
  p_output1[12]=t41602*var2[0] - 1.*t50601*t599*var2[1] + t22897*t50601*var2[2] + (t51016*(t26137*t46013*t52043 + t26137*t46013*t52051) + t49644*t52135 + t22953*t46013*(t49644*t52043 + t49644*t52051 + t51016*t52131 + t52131*t52310) - 1.*t26137*t46013*t52430)*var2[3];
  p_output1[13]=-1.*t26137*t46013*var2[0] + t22953*t46013*t599*var2[1] - 1.*t22897*t22953*t46013*var2[2] + ((-1.*t49644*t52043 - 1.*t49644*t52051 - 1.*t51016*t52131 - 1.*t52131*t52310)*t52486 + t51016*(t41602*t52043 + t41602*t52051 + t50601*t52131 + t52131*t52486) + t41602*t52517 + t49644*t52648)*var2[3];
  p_output1[14]=t49644*var2[0] - 1.*t52310*t599*var2[1] + t22897*t52310*var2[2] + ((-1.*t26137*t46013*t52043 - 1.*t26137*t46013*t52051)*t52486 + t22953*t46013*(-1.*t41602*t52043 - 1.*t41602*t52051 - 1.*t50601*t52131 - 1.*t52131*t52486) + t41602*t53302 - 1.*t26137*t46013*t53519)*var2[3];
  p_output1[15]=t53662 + t53809 + t53825 + (t53975 + t51016*(t53887 + t53900 - 1.*t46013*t53870*t53976 - 1.*t46013*t53870*t53981 + t53983 + t53984) + t22953*t46013*(-1.*t26137*t49644*t53870 + t22953*t51016*t53870 + t53944 + t53959 + t53993 + t53994) + t53997)*var2[3] + (t53864 + t47397*(-1.*t46013*t53870 + t53887 + t53896 + t53900) + t46587*(t49351*t53870 + t53944 + t53958 + t53959) + t53972)*var2[4];
  p_output1[16]=t54005 + t54009 + t54017 + (t52486*(t26137*t49644*t53870 - 1.*t22953*t51016*t53870 + t54019 + t54021 + t54090 + t54091) + t51016*(-1.*t26137*t41602*t53870 + t22953*t52486*t53870 + t54059 + t54061 + t54109 + t54110) + t54120 + t54125)*var2[3] + (t10076*(-1.*t49351*t53870 + t54019 + t54020 + t54021) + t54032 + t47397*(t41520*t53870 + t54059 + t54060 + t54061) + t54081)*var2[4];
  p_output1[17]=t54131 + t54137 + t54143 + (t54198 + t52486*(t46013*t53870*t53976 + t46013*t53870*t53981 + t54166 + t54172 + t54201 + t54205) + t22953*t46013*(t26137*t41602*t53870 - 1.*t22953*t52486*t53870 + t54179 + t54181 + t54215 + t54216) + t54219)*var2[3] + (t54161 + t10076*(t46013*t53870 + t54166 + t54167 + t54172) + t46587*(-1.*t41520*t53870 + t54179 + t54180 + t54181) + t54190)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t53662 + t53809 + t53825 + (t53975 + t53997 + t51016*(t53887 + t53983 + t53984 - 1.*t46013*t53976*t54235 - 1.*t46013*t53981*t54235 + t54240) + t22953*t46013*(t53944 + t53993 + t53994 - 1.*t26137*t49644*t54235 + t22953*t51016*t54235 + t54245))*var2[3] + (t53864 + t53972 + t47397*(t53887 + t53896 - 1.*t46013*t54235 + t54240) + t46587*(t53944 + t53958 + t49351*t54235 + t54245))*var2[4] + t48194*(-1.*t1273*t51689 - 1.*t1273*t54228 - 1.*t51584*t5697 + t54224*t5697)*var2[5];
  p_output1[28]=t54005 + t54009 + t54017 + (t54120 + t54125 + t52486*(t54019 + t54090 + t54091 + t26137*t49644*t54235 - 1.*t22953*t51016*t54235 + t54279) + t51016*(t54059 + t54109 + t54110 - 1.*t26137*t41602*t54235 + t22953*t52486*t54235 + t54283))*var2[3] + (t54032 + t54081 + t10076*(t54019 + t54020 - 1.*t49351*t54235 + t54279) + t47397*(t54059 + t54060 + t41520*t54235 + t54283))*var2[4] + (t24016*(t1273*t24016*t51584 - 1.*t1273*t24016*t54224 - 1.*t24016*t51689*t5697 - 1.*t24016*t54228*t5697) + t48194*(-1.*t1273*t51584*t5278 + t1273*t5278*t54224 + t51689*t5278*t5697 + t5278*t54228*t5697))*var2[5];
  p_output1[29]=t54131 + t54137 + t54143 + (t54198 + t54219 + t52486*(t54166 + t54201 + t54205 + t46013*t53976*t54235 + t46013*t53981*t54235 + t54335) + t22953*t46013*(t54179 + t54215 + t54216 + t26137*t41602*t54235 - 1.*t22953*t52486*t54235 + t54340))*var2[3] + (t54161 + t54190 + t10076*(t54166 + t54167 + t46013*t54235 + t54335) + t46587*(t54179 + t54180 - 1.*t41520*t54235 + t54340))*var2[4] + t24016*(t1273*t51689 + t1273*t54228 + t51584*t5697 - 1.*t54224*t5697)*var2[5];
  p_output1[30]=t54377 + t54392*var2[0] + (t22897*t54396 - 1.*t54403*t599)*var2[1] + (t22897*t54403 + t54396*t599)*var2[2] + (t52135*t52486 + t51016*(t54422 - 1.*t22953*t46013*t54450 + t26137*t46013*t54454) + t22953*t46013*(t52593 + t52615 + t52633 + t54440 + t51016*t54450 + t49644*t54454))*var2[3] + (t10076*t53827 + t47397*(t54422 - 1.*t46013*t54425) + t46587*(t52593 + t54075 + t54076 + t49351*t54425 + t48194*t54431 + t54440))*var2[4] + t24016*t54384*var2[5];
  p_output1[31]=(t52486*t52648 + t52517*t54392 + t51016*(t52051*t54392 + t52131*t54403 + t52486*t54450 + t41602*t54454 + t54543 + t54545) + t52486*(t53464 + t53480 + t53502 - 1.*t51016*t54450 - 1.*t49644*t54454 + t54551))*var2[3] + (t10076*t54079 + t54031*t54396 + t47397*(t51768*t54390 + t41520*t54425 + t54471 + t54474 + t54543 + t54545) + t10076*(t53464 + t54186 + t54188 - 1.*t49351*t54425 + t54482 + t54551))*var2[4] + (t5278*t54517 + t24016*t54536 + t24016*(-1.*t1273*t51689*t5278 + t54186 + t54482 - 1.*t24016*t54418*t54487 - 1.*t24016*t54418*t54489 - 1.*t51584*t5278*t5697) + t48194*(t1273*t51689*t54371 + t54471 + t54474 + t5278*t54418*t54487 + t5278*t54418*t54489 + t51584*t54371*t5697))*var2[5] + (t24016*t54469 + t48194*(t51559*t54371 + t5278*t54418 + t54471 + t54474) + t5278*t54478 + t24016*(-1.*t51559*t5278 + t54186 - 1.*t24016*t54418 + t54482))*var2[9];
  p_output1[32]=t52486*var2[0] + t44219*var2[1] + (t22897*t41602 + t10076*t599)*var2[2] + (t53302*t54392 + t52486*(t22953*t46013*t54450 - 1.*t26137*t46013*t54454 + t54587) + t22953*t46013*(-1.*t52051*t54392 - 1.*t52131*t54403 - 1.*t52486*t54450 - 1.*t41602*t54454 + t54594 + t54596))*var2[3] + (t54160*t54396 + t10076*(t46013*t54425 + t54587) + t46587*(-1.*t51320*t5278 - 1.*t51768*t54390 - 1.*t41520*t54425 - 1.*t24016*t54431 + t54594 + t54596))*var2[4] + t5278*t54576*var2[5];
  p_output1[33]=t54377 + t51016*var2[0] + t50220*var2[1] + (t22897*t49644 + t47397*t599)*var2[2] + (t51016*(t54636 - 1.*t22953*t46013*t54665 + t26137*t46013*t54669) + t52135*t54675 + t22953*t46013*(t54652 + t54654 + t51016*t54665 + t49644*t54669 + t52051*t54675 + t52131*t54682))*var2[3] + (t47397*(t54636 - 1.*t46013*t54639) + t53827*t54645 + t46587*(t51320*t54371 + t49351*t54639 + t48194*t54650 + t54652 + t54654 + t51768*t54657))*var2[4] + t54371*t54384*var2[5] + (0.28121*t1722 - 0.27*Power(t1722,2) + t1722*t51158)*var2[10];
  p_output1[34]=(t51016*t52517 + t52648*t54675 + t51016*(t52411 + t52416 + t52421 + t52486*t54665 + t41602*t54669 + t54722) + t52486*(-1.*t51016*t54665 - 1.*t49644*t54669 - 1.*t52051*t54675 - 1.*t52131*t54682 + t54727 + t54729))*var2[3] + (t47397*t54031 + t54079*t54645 + t47397*(t52411 + t53965 + t53966 + t41520*t54639 + t54692 + t54722) + t10076*(-1.*t49351*t54639 - 1.*t51768*t54657 + t54696 + t54698 + t54727 + t54729))*var2[4] + (t48194*t54517 + t54371*t54536 + t48194*(t1273*t24016*t51689 + t53965 + t5278*t54487*t54632 + t5278*t54489*t54632 + t54692 + t24016*t51584*t5697) + t24016*(-1.*t1273*t48194*t51689 - 1.*t24016*t54487*t54632 - 1.*t24016*t54489*t54632 + t54696 + t54698 - 1.*t48194*t51584*t5697))*var2[5] + (t54371*t54469 + t48194*t54478 + t48194*(t24016*t51559 + t53965 + t5278*t54632 + t54692) + t24016*(-1.*t48194*t51559 - 1.*t24016*t54632 + t54696 + t54698))*var2[9];
  p_output1[35]=t54675*var2[0] + (t22897*t54645 - 1.*t54682*t599)*var2[1] + (t22897*t54682 + t54645*t599)*var2[2] + (t51016*t53302 + t52486*(t22953*t46013*t54665 - 1.*t26137*t46013*t54669 + t54765) + t22953*t46013*(t52510 + t52511 + t52512 - 1.*t52486*t54665 - 1.*t41602*t54669 + t54771))*var2[3] + (t47397*t54160 + t10076*(t46013*t54639 + t54765) + t46587*(t52510 + t54028 + t54030 - 1.*t41520*t54639 - 1.*t24016*t54650 + t54771))*var2[4] + t48194*t54576*var2[5] + (-0.28121*t3811 + 0.27*t1722*t3811 - 1.*t3811*t51158)*var2[10];
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

#include "dJh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
