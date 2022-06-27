/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:10 GMT+02:00
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
  double t243;
  double t347;
  double t859;
  double t962;
  double t1411;
  double t1714;
  double t1461;
  double t1709;
  double t1712;
  double t1715;
  double t1713;
  double t1727;
  double t1912;
  double t2465;
  double t2488;
  double t2807;
  double t3249;
  double t3256;
  double t3280;
  double t3337;
  double t3338;
  double t5985;
  double t5986;
  double t5991;
  double t5997;
  double t5999;
  double t892;
  double t1420;
  double t1970;
  double t2462;
  double t2463;
  double t2811;
  double t2812;
  double t2862;
  double t2936;
  double t3123;
  double t3148;
  double t3164;
  double t6021;
  double t6027;
  double t6030;
  double t3323;
  double t3472;
  double t3704;
  double t3715;
  double t3719;
  double t4462;
  double t4499;
  double t5030;
  double t5816;
  double t5901;
  double t5902;
  double t5904;
  double t6042;
  double t6046;
  double t6000;
  double t6002;
  double t6005;
  double t6006;
  double t6007;
  double t6009;
  double t6010;
  double t6011;
  double t6012;
  double t6014;
  double t6015;
  double t6016;
  double t6058;
  double t6062;
  double t6028;
  double t3038;
  double t6031;
  double t6032;
  double t6033;
  double t6035;
  double t6036;
  double t6037;
  double t6072;
  double t6077;
  double t6078;
  double t6079;
  double t6080;
  double t6043;
  double t5897;
  double t6047;
  double t6048;
  double t6050;
  double t6051;
  double t6052;
  double t6053;
  double t6092;
  double t6099;
  double t6100;
  double t6102;
  double t6103;
  double t6060;
  double t6013;
  double t6063;
  double t6064;
  double t6065;
  double t6066;
  double t6067;
  double t6068;
  double t6159;
  double t6192;
  double t6196;
  double t6877;
  double t6940;
  double t7639;
  double t7641;
  double t7660;
  double t7663;
  double t7665;
  double t7687;
  double t7735;
  double t7741;
  double t7742;
  double t7754;
  double t7757;
  double t7762;
  double t7763;
  double t7764;
  double t7871;
  double t7873;
  double t7875;
  double t7890;
  double t7905;
  double t7766;
  double t7898;
  double t7899;
  double t7901;
  double t7906;
  double t7907;
  double t7908;
  double t7909;
  double t7915;
  double t7924;
  double t7931;
  double t7932;
  double t7935;
  double t7973;
  double t7976;
  double t7979;
  double t7981;
  double t7983;
  double t7997;
  double t8009;
  double t8017;
  double t8031;
  double t8053;
  double t8083;
  double t8085;
  double t8086;
  double t8089;
  double t8090;
  double t8092;
  double t8166;
  double t8189;
  double t8217;
  double t8221;
  double t8241;
  double t8261;
  double t8265;
  double t8349;
  double t8445;
  double t7991;
  double t8481;
  double t6073;
  double t6074;
  double t8495;
  double t8583;
  double t8611;
  double t9408;
  double t9414;
  double t9432;
  double t8816;
  double t8087;
  double t8842;
  double t6093;
  double t6097;
  double t8868;
  double t8893;
  double t8935;
  double t9766;
  double t9826;
  double t9828;
  double t9009;
  double t8242;
  double t9273;
  double t6164;
  double t6181;
  double t9321;
  double t9336;
  double t9352;
  double t14151;
  double t14244;
  double t14273;
  double t21157;
  double t21158;
  double t21163;
  double t21213;
  double t21222;
  double t22441;
  double t22452;
  double t22456;
  double t22352;
  double t22543;
  double t22549;
  double t7919;
  double t7921;
  double t22553;
  double t22555;
  double t22566;
  double t22580;
  double t22584;
  double t22590;
  double t22622;
  double t22623;
  double t22625;
  double t22638;
  double t22642;
  double t22655;
  double t22634;
  double t22666;
  double t22673;
  double t22674;
  double t22675;
  double t22680;
  double t22684;
  double t22693;
  double t22734;
  double t22740;
  double t22741;
  double t22731;
  double t22733;
  double t22771;
  double t22778;
  double t22781;
  double t22827;
  double t22829;
  double t22833;
  double t22822;
  double t22825;
  double t22850;
  double t22856;
  double t22857;
  double t22708;
  double t22698;
  double t22742;
  double t22799;
  double t22836;
  double t22872;
  double t23044;
  double t23046;
  double t23047;
  double t23048;
  double t23049;
  double t23051;
  double t23052;
  double t23053;
  double t23061;
  double t23056;
  double t23091;
  double t23092;
  double t23102;
  double t23086;
  double t23087;
  double t23090;
  double t23141;
  double t23158;
  double t23162;
  double t23181;
  double t23191;
  double t23247;
  double t23251;
  double t23277;
  double t23252;
  double t27620;
  double t27662;
  double t27665;
  double t27571;
  double t27667;
  double t27669;
  double t27671;
  double t27673;
  double t27692;
  double t27694;
  double t27696;
  double t27714;
  double t27719;
  double t27724;
  double t28243;
  double t28350;
  double t28710;
  double t29056;
  double t29057;
  double t29061;
  double t29068;
  double t29075;
  double t29083;
  double t29090;
  double t29136;
  double t29097;
  double t29179;
  double t29180;
  double t29181;
  double t29178;
  double t29182;
  double t29183;
  double t29184;
  double t29185;
  double t29189;
  double t29190;
  double t29191;
  double t29201;
  double t29202;
  double t29203;
  double t29212;
  double t29218;
  double t29219;
  double t29213;
  double t29214;
  double t29215;
  double t29216;
  double t29217;
  double t29251;
  double t29289;
  double t29220;
  double t29312;
  double t29376;
  double t29377;
  double t29378;
  double t29375;
  double t29379;
  double t29380;
  double t29381;
  double t29382;
  double t29386;
  double t29387;
  double t29388;
  double t29399;
  double t29400;
  double t29401;
  double t29415;
  double t29416;
  double t29409;
  double t29410;
  double t29411;
  double t29412;
  double t29413;
  double t29414;
  double t29419;
  double t29420;
  double t29417;
  double t29425;
  double t29547;
  double t29548;
  double t29553;
  double t29536;
  double t29554;
  double t29555;
  double t29556;
  double t29567;
  double t29659;
  double t29660;
  double t29661;
  double t29671;
  double t29672;
  double t29673;
  t243 = Cos(var1[9]);
  t347 = -1.*t243;
  t859 = 1. + t347;
  t962 = Sin(var1[9]);
  t1411 = 0.15121*t962;
  t1714 = Cos(var1[3]);
  t1461 = Cos(var1[5]);
  t1709 = Sin(var1[3]);
  t1712 = Sin(var1[4]);
  t1715 = Sin(var1[5]);
  t1713 = t1461*t1709*t1712;
  t1727 = t1714*t1715;
  t1912 = t1713 + t1727;
  t2465 = t1714*t1461;
  t2488 = -1.*t1709*t1712*t1715;
  t2807 = t2465 + t2488;
  t3249 = Cos(var1[12]);
  t3256 = -1.*t3249;
  t3280 = 1. + t3256;
  t3337 = Sin(var1[12]);
  t3338 = -0.15121*t3337;
  t5985 = Cos(var1[15]);
  t5986 = -1.*t5985;
  t5991 = 1. + t5986;
  t5997 = -0.15121*t5991;
  t5999 = Sin(var1[15]);
  t892 = -0.15121*t859;
  t1420 = t892 + t1411;
  t1970 = t1420*t1912;
  t2462 = 0.15121*t859;
  t2463 = t2462 + t1411;
  t2811 = t2463*t2807;
  t2812 = -1.*t962*t1912;
  t2862 = t243*t2807;
  t2936 = t2812 + t2862;
  t3123 = t243*t1912;
  t3148 = t962*t2807;
  t3164 = t3123 + t3148;
  t6021 = Cos(var1[4]);
  t6027 = Sin(var1[10]);
  t6030 = Cos(var1[10]);
  t3323 = 0.15121*t3280;
  t3472 = t3323 + t3338;
  t3704 = t3472*t1912;
  t3715 = -0.15121*t3280;
  t3719 = t3715 + t3338;
  t4462 = t3719*t2807;
  t4499 = -1.*t3337*t1912;
  t5030 = t3249*t2807;
  t5816 = t4499 + t5030;
  t5901 = t3249*t1912;
  t5902 = t3337*t2807;
  t5904 = t5901 + t5902;
  t6042 = Sin(var1[13]);
  t6046 = Cos(var1[13]);
  t6000 = -0.15121*t5999;
  t6002 = t5997 + t6000;
  t6005 = t6002*t1912;
  t6006 = 0.15121*t5999;
  t6007 = t5997 + t6006;
  t6009 = t6007*t2807;
  t6010 = -1.*t5999*t1912;
  t6011 = t5985*t2807;
  t6012 = t6010 + t6011;
  t6014 = t5985*t1912;
  t6015 = t5999*t2807;
  t6016 = t6014 + t6015;
  t6058 = Sin(var1[16]);
  t6062 = Cos(var1[16]);
  t6028 = -0.28121*t6021*t6027*t1709;
  t3038 = 0.15121*t2936;
  t6031 = -1.*t6030;
  t6032 = 1. + t6031;
  t6033 = -0.28121*t6032*t3164;
  t6035 = -1.*t6021*t6027*t1709;
  t6036 = t6030*t3164;
  t6037 = t6035 + t6036;
  t6072 = Cos(var1[11]);
  t6077 = Sin(var1[11]);
  t6078 = -1.*t6030*t6021*t1709;
  t6079 = -1.*t6027*t3164;
  t6080 = t6078 + t6079;
  t6043 = -0.28121*t6021*t6042*t1709;
  t5897 = -0.15121*t5816;
  t6047 = -1.*t6046;
  t6048 = 1. + t6047;
  t6050 = 0.28121*t6048*t5904;
  t6051 = t6021*t6042*t1709;
  t6052 = t6046*t5904;
  t6053 = t6051 + t6052;
  t6092 = Cos(var1[14]);
  t6099 = Sin(var1[14]);
  t6100 = -1.*t6046*t6021*t1709;
  t6102 = t6042*t5904;
  t6103 = t6100 + t6102;
  t6060 = -0.28121*t6021*t6058*t1709;
  t6013 = -0.15121*t6012;
  t6063 = -1.*t6062;
  t6064 = 1. + t6063;
  t6065 = -0.28121*t6064*t6016;
  t6066 = -1.*t6021*t6058*t1709;
  t6067 = t6062*t6016;
  t6068 = t6066 + t6067;
  t6159 = Cos(var1[17]);
  t6192 = Sin(var1[17]);
  t6196 = -1.*t6062*t6021*t1709;
  t6877 = -1.*t6058*t6016;
  t6940 = t6196 + t6877;
  t7639 = Cos(var1[6]);
  t7641 = -1.*t7639;
  t7660 = 1. + t7641;
  t7663 = 0.15121*t7660;
  t7665 = Sin(var1[6]);
  t7687 = -0.15121*t7665;
  t7735 = t7663 + t7687;
  t7741 = t2807*t7735;
  t7742 = 0.15121*t7665;
  t7754 = t7663 + t7742;
  t7757 = t1912*t7754;
  t7762 = t7639*t2807;
  t7763 = -1.*t1912*t7665;
  t7764 = t7762 + t7763;
  t7871 = t7639*t1912;
  t7873 = t2807*t7665;
  t7875 = t7871 + t7873;
  t7890 = Cos(var1[7]);
  t7905 = Sin(var1[7]);
  t7766 = 0.15121*t7764;
  t7898 = -1.*t7890;
  t7899 = 1. + t7898;
  t7901 = 0.28121*t7899*t7875;
  t7906 = -0.28121*t6021*t1709*t7905;
  t7907 = t7890*t7875;
  t7908 = t6021*t1709*t7905;
  t7909 = t7907 + t7908;
  t7915 = Cos(var1[8]);
  t7924 = -1.*t6021*t7890*t1709;
  t7931 = t7875*t7905;
  t7932 = t7924 + t7931;
  t7935 = Sin(var1[8]);
  t7973 = -1.*t1714*t6021*t1461*t1420;
  t7976 = t1714*t6021*t2463*t1715;
  t7979 = t1714*t6021*t1461*t962;
  t7981 = t243*t1714*t6021*t1715;
  t7983 = t7979 + t7981;
  t7997 = -1.*t243*t1714*t6021*t1461;
  t8009 = t1714*t6021*t962*t1715;
  t8017 = t7997 + t8009;
  t8031 = -1.*t1714*t6021*t1461*t3472;
  t8053 = t1714*t6021*t3719*t1715;
  t8083 = t1714*t6021*t1461*t3337;
  t8085 = t3249*t1714*t6021*t1715;
  t8086 = t8083 + t8085;
  t8089 = -1.*t3249*t1714*t6021*t1461;
  t8090 = t1714*t6021*t3337*t1715;
  t8092 = t8089 + t8090;
  t8166 = -1.*t1714*t6021*t1461*t6002;
  t8189 = t1714*t6021*t6007*t1715;
  t8217 = t1714*t6021*t1461*t5999;
  t8221 = t5985*t1714*t6021*t1715;
  t8241 = t8217 + t8221;
  t8261 = -1.*t5985*t1714*t6021*t1461;
  t8265 = t1714*t6021*t5999*t1715;
  t8349 = t8261 + t8265;
  t8445 = -0.28121*t1714*t6027*t1712;
  t7991 = 0.15121*t7983;
  t8481 = -0.28121*t6032*t8017;
  t6073 = -1.*t6072;
  t6074 = 1. + t6073;
  t8495 = -1.*t1714*t6027*t1712;
  t8583 = t6030*t8017;
  t8611 = t8495 + t8583;
  t9408 = -1.*t6030*t1714*t1712;
  t9414 = -1.*t6027*t8017;
  t9432 = t9408 + t9414;
  t8816 = -0.28121*t1714*t6042*t1712;
  t8087 = -0.15121*t8086;
  t8842 = 0.28121*t6048*t8092;
  t6093 = -1.*t6092;
  t6097 = 1. + t6093;
  t8868 = t1714*t6042*t1712;
  t8893 = t6046*t8092;
  t8935 = t8868 + t8893;
  t9766 = -1.*t6046*t1714*t1712;
  t9826 = t6042*t8092;
  t9828 = t9766 + t9826;
  t9009 = -0.28121*t1714*t6058*t1712;
  t8242 = -0.15121*t8241;
  t9273 = -0.28121*t6064*t8349;
  t6164 = -1.*t6159;
  t6181 = 1. + t6164;
  t9321 = -1.*t1714*t6058*t1712;
  t9336 = t6062*t8349;
  t9352 = t9321 + t9336;
  t14151 = -1.*t6062*t1714*t1712;
  t14244 = -1.*t6058*t8349;
  t14273 = t14151 + t14244;
  t21157 = t1714*t6021*t1715*t7735;
  t21158 = -1.*t1714*t6021*t1461*t7754;
  t21163 = t1714*t6021*t7639*t1715;
  t21213 = t1714*t6021*t1461*t7665;
  t21222 = t21163 + t21213;
  t22441 = -1.*t1714*t6021*t1461*t7639;
  t22452 = t1714*t6021*t1715*t7665;
  t22456 = t22441 + t22452;
  t22352 = 0.15121*t21222;
  t22543 = 0.28121*t7899*t22456;
  t22549 = -0.28121*t1714*t1712*t7905;
  t7919 = -1.*t7915;
  t7921 = 1. + t7919;
  t22553 = t7890*t22456;
  t22555 = t1714*t1712*t7905;
  t22566 = t22553 + t22555;
  t22580 = -1.*t1714*t7890*t1712;
  t22584 = t22456*t7905;
  t22590 = t22580 + t22584;
  t22622 = t1714*t1461*t1712;
  t22623 = -1.*t1709*t1715;
  t22625 = t22622 + t22623;
  t22638 = t1461*t1709;
  t22642 = t1714*t1712*t1715;
  t22655 = t22638 + t22642;
  t22634 = t2463*t22625;
  t22666 = t1420*t22655;
  t22673 = t962*t22625;
  t22674 = t243*t22655;
  t22675 = t22673 + t22674;
  t22680 = t243*t22625;
  t22684 = -1.*t962*t22655;
  t22693 = t22680 + t22684;
  t22734 = t3337*t22625;
  t22740 = t3249*t22655;
  t22741 = t22734 + t22740;
  t22731 = t3719*t22625;
  t22733 = t3472*t22655;
  t22771 = t3249*t22625;
  t22778 = -1.*t3337*t22655;
  t22781 = t22771 + t22778;
  t22827 = t5999*t22625;
  t22829 = t5985*t22655;
  t22833 = t22827 + t22829;
  t22822 = t6007*t22625;
  t22825 = t6002*t22655;
  t22850 = t5985*t22625;
  t22856 = -1.*t5999*t22655;
  t22857 = t22850 + t22856;
  t22708 = -0.28121*t6032*t22675;
  t22698 = 0.15121*t22693;
  t22742 = 0.28121*t6048*t22741;
  t22799 = -0.15121*t22781;
  t22836 = -0.28121*t6064*t22833;
  t22872 = -0.15121*t22857;
  t23044 = t22625*t7735;
  t23046 = t22655*t7754;
  t23047 = t7639*t22655;
  t23048 = t22625*t7665;
  t23049 = t23047 + t23048;
  t23051 = t7639*t22625;
  t23052 = -1.*t22655*t7665;
  t23053 = t23051 + t23052;
  t23061 = 0.28121*t7899*t23049;
  t23056 = 0.15121*t23053;
  t23091 = -1.*t1714*t1461*t1712;
  t23092 = t1709*t1715;
  t23102 = t23091 + t23092;
  t23086 = -0.15121*t7639;
  t23087 = t23086 + t7742;
  t23090 = t22655*t23087;
  t23141 = 0.15121*t7639;
  t23158 = t23141 + t7742;
  t23162 = t23102*t23158;
  t23181 = -1.*t23102*t7665;
  t23191 = t23047 + t23181;
  t23247 = -1.*t7639*t23102;
  t23251 = t23247 + t23052;
  t23277 = 0.28121*t7899*t23191;
  t23252 = 0.15121*t23251;
  t27620 = t7639*t23102;
  t27662 = t22655*t7665;
  t27665 = t27620 + t27662;
  t27571 = 0.28121*t1714*t6021*t7890;
  t27667 = 0.28121*t27665*t7905;
  t27669 = -1.*t1714*t6021*t7890;
  t27671 = -1.*t27665*t7905;
  t27673 = t27669 + t27671;
  t27692 = t7890*t27665;
  t27694 = -1.*t1714*t6021*t7905;
  t27696 = t27692 + t27694;
  t27714 = t1714*t6021*t7890;
  t27719 = t27665*t7905;
  t27724 = t27714 + t27719;
  t28243 = 0.15121*t243;
  t28350 = -0.15121*t962;
  t28710 = t28243 + t28350;
  t29056 = t28710*t23102;
  t29057 = t28243 + t1411;
  t29061 = t29057*t22655;
  t29068 = -1.*t962*t23102;
  t29075 = t29068 + t22674;
  t29083 = -1.*t243*t23102;
  t29090 = t29083 + t22684;
  t29136 = -0.28121*t6032*t29075;
  t29097 = 0.15121*t29090;
  t29179 = t243*t23102;
  t29180 = t962*t22655;
  t29181 = t29179 + t29180;
  t29178 = 0.28121*t6030*t1714*t6021;
  t29182 = -0.28121*t6027*t29181;
  t29183 = t6030*t1714*t6021;
  t29184 = -1.*t6027*t29181;
  t29185 = t29183 + t29184;
  t29189 = -1.*t1714*t6021*t6027;
  t29190 = -1.*t6030*t29181;
  t29191 = t29189 + t29190;
  t29201 = t1714*t6021*t6027;
  t29202 = t6030*t29181;
  t29203 = t29201 + t29202;
  t29212 = -0.15121*t3249;
  t29218 = -1.*t3337*t23102;
  t29219 = t29218 + t22740;
  t29213 = 0.15121*t3337;
  t29214 = t29212 + t29213;
  t29215 = t29214*t23102;
  t29216 = t29212 + t3338;
  t29217 = t29216*t22655;
  t29251 = -1.*t3249*t23102;
  t29289 = t29251 + t22778;
  t29220 = 0.28121*t6048*t29219;
  t29312 = -0.15121*t29289;
  t29376 = t3249*t23102;
  t29377 = t3337*t22655;
  t29378 = t29376 + t29377;
  t29375 = 0.28121*t6046*t1714*t6021;
  t29379 = 0.28121*t6042*t29378;
  t29380 = -1.*t6046*t1714*t6021;
  t29381 = -1.*t6042*t29378;
  t29382 = t29380 + t29381;
  t29386 = -1.*t1714*t6021*t6042;
  t29387 = t6046*t29378;
  t29388 = t29386 + t29387;
  t29399 = t6046*t1714*t6021;
  t29400 = t6042*t29378;
  t29401 = t29399 + t29400;
  t29415 = -1.*t5999*t23102;
  t29416 = t29415 + t22829;
  t29409 = -0.15121*t5985;
  t29410 = t29409 + t6000;
  t29411 = t29410*t23102;
  t29412 = 0.15121*t5985;
  t29413 = t29412 + t6000;
  t29414 = t29413*t22655;
  t29419 = -1.*t5985*t23102;
  t29420 = t29419 + t22856;
  t29417 = -0.28121*t6064*t29416;
  t29425 = -0.15121*t29420;
  t29547 = t5985*t23102;
  t29548 = t5999*t22655;
  t29553 = t29547 + t29548;
  t29536 = 0.28121*t6062*t1714*t6021;
  t29554 = -0.28121*t6058*t29553;
  t29555 = t6062*t1714*t6021;
  t29556 = -1.*t6058*t29553;
  t29567 = t29555 + t29556;
  t29659 = -1.*t1714*t6021*t6058;
  t29660 = -1.*t6062*t29553;
  t29661 = t29659 + t29660;
  t29671 = t1714*t6021*t6058;
  t29672 = t6062*t29553;
  t29673 = t29671 + t29672;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1970 + t2811 + t3038 - 0.15121*t3164) - 11.5758*(t3704 + t4462 + t5897 + 0.15121*t5904) - 11.5758*(t6005 + t6009 + t6013 - 0.15121*t6016) - 13.6359*(t1970 + t2811 + 0.18121*t2936 + t6028 + t6033 - 0.28121*t6037) - 13.6359*(t3704 + t4462 - 0.18121*t5816 + t6043 + t6050 + 0.28121*t6053) - 13.6359*(t6005 + t6009 - 0.18121*t6012 + t6060 + t6065 - 0.28121*t6068) - 2.7468000000000004*(t1970 + t2811 + t3038 + t6028 + t6033 - 0.50321*t6037*t6074 - 0.50321*t6077*t6080 - 0.50321*(t6037*t6072 - 1.*t6077*t6080)) - 2.7468000000000004*(t3704 + t4462 + t5897 + t6043 + t6050 + 0.50321*t6053*t6097 - 0.50321*t6099*t6103 + 0.50321*(t6053*t6092 + t6099*t6103)) - 2.7468000000000004*(t6005 + t6009 + t6013 + t6060 + t6065 - 0.50321*t6068*t6181 - 0.50321*t6192*t6940 - 0.50321*(t6068*t6159 - 1.*t6192*t6940)) - 11.5758*(t7741 + t7757 + t7766 + 0.15121*t7875) - 13.6359*(t7741 + t7757 + 0.18121*t7764 + t7901 + t7906 + 0.28121*t7909) - 2.7468000000000004*(t7741 + t7757 + t7766 + t7901 + t7906 + 0.50321*t7909*t7921 - 0.50321*t7932*t7935 + 0.50321*(t7909*t7915 + t7932*t7935));
  p_output1[4]=-11.5758*(t21157 + t21158 + t22352 + 0.15121*t22456) - 13.6359*(t21157 + t21158 + 0.18121*t21222 + t22543 + t22549 + 0.28121*t22566) - 2.7468000000000004*(t21157 + t21158 + t22352 + t22543 + t22549 + 0.50321*t22566*t7921 - 0.50321*t22590*t7935 + 0.50321*(t22566*t7915 + t22590*t7935)) - 11.5758*(t7973 + t7976 + t7991 - 0.15121*t8017) - 11.5758*(t8031 + t8053 + t8087 + 0.15121*t8092) - 11.5758*(t8166 + t8189 + t8242 - 0.15121*t8349) - 13.6359*(t7973 + t7976 + 0.18121*t7983 + t8445 + t8481 - 0.28121*t8611) - 13.6359*(t8031 + t8053 - 0.18121*t8086 + t8816 + t8842 + 0.28121*t8935) - 13.6359*(t8166 + t8189 - 0.18121*t8241 + t9009 + t9273 - 0.28121*t9352) - 2.7468000000000004*(-0.50321*t14273*t6192 + t8166 + t8189 + t8242 + t9009 + t9273 - 0.50321*t6181*t9352 - 0.50321*(-1.*t14273*t6192 + t6159*t9352)) - 2.7468000000000004*(t7973 + t7976 + t7991 + t8445 + t8481 - 0.50321*t6074*t8611 - 0.50321*t6077*t9432 - 0.50321*(t6072*t8611 - 1.*t6077*t9432)) - 2.7468000000000004*(t8031 + t8053 + t8087 + t8816 + t8842 + 0.50321*t6097*t8935 - 0.50321*t6099*t9828 + 0.50321*(t6092*t8935 + t6099*t9828));
  p_output1[5]=-11.5758*(t22634 + t22666 - 0.15121*t22675 + t22698) - 11.5758*(t22731 + t22733 + 0.15121*t22741 + t22799) - 11.5758*(t22822 + t22825 - 0.15121*t22833 + t22872) - 11.5758*(t23044 + t23046 + 0.15121*t23049 + t23056) - 13.6359*(t22634 + t22666 + 0.18121*t22693 + t22708 - 0.28121*t22675*t6030) - 13.6359*(t22731 + t22733 + t22742 - 0.18121*t22781 + 0.28121*t22741*t6046) - 13.6359*(t22822 + t22825 + t22836 - 0.18121*t22857 - 0.28121*t22833*t6062) - 2.7468000000000004*(t22634 + t22666 + t22698 + t22708 - 0.50321*t22675*t6030*t6074 + 0.50321*t22675*t6027*t6077 - 0.50321*(t22675*t6030*t6072 + t22675*t6027*t6077)) - 2.7468000000000004*(t22731 + t22733 + t22742 + t22799 + 0.50321*t22741*t6046*t6097 - 0.50321*t22741*t6042*t6099 + 0.50321*(t22741*t6046*t6092 + t22741*t6042*t6099)) - 2.7468000000000004*(t22822 + t22825 + t22836 + t22872 - 0.50321*t22833*t6062*t6181 + 0.50321*t22833*t6058*t6192 - 0.50321*(t22833*t6062*t6159 + t22833*t6058*t6192)) - 13.6359*(t23044 + t23046 + 0.18121*t23053 + t23061 + 0.28121*t23049*t7890) - 2.7468000000000004*(t23044 + t23046 + t23056 + t23061 + 0.50321*t23049*t7890*t7921 - 0.50321*t23049*t7905*t7935 + 0.50321*(t23049*t7890*t7915 + t23049*t7905*t7935));
  p_output1[6]=-11.5758*(t23090 + t23162 + 0.15121*t23191 + t23252) - 13.6359*(t23090 + t23162 + 0.18121*t23251 + t23277 + 0.28121*t23191*t7890) - 2.7468000000000004*(t23090 + t23162 + t23252 + t23277 + 0.50321*t23191*t7890*t7921 - 0.50321*t23191*t7905*t7935 + 0.50321*(t23191*t7890*t7915 + t23191*t7905*t7935));
  p_output1[7]=-13.6359*(t27571 + t27667 + 0.28121*t27673) - 2.7468000000000004*(t27571 + t27667 + 0.50321*t27673*t7921 - 0.50321*t27696*t7935 + 0.50321*(t27673*t7915 + t27696*t7935));
  p_output1[8]=-2.7468000000000004*(-0.50321*t27724*t7915 + 0.50321*t27696*t7935 + 0.50321*(t27724*t7915 - 1.*t27696*t7935));
  p_output1[9]=-11.5758*(t29056 + t29061 - 0.15121*t29075 + t29097) - 13.6359*(t29056 + t29061 + 0.18121*t29090 + t29136 - 0.28121*t29075*t6030) - 2.7468000000000004*(t29056 + t29061 + t29097 + t29136 - 0.50321*t29075*t6030*t6074 + 0.50321*t29075*t6027*t6077 - 0.50321*(t29075*t6030*t6072 + t29075*t6027*t6077));
  p_output1[10]=-13.6359*(t29178 + t29182 - 0.28121*t29185) - 2.7468000000000004*(t29178 + t29182 - 0.50321*t29185*t6074 - 0.50321*t29191*t6077 - 0.50321*(t29185*t6072 - 1.*t29191*t6077));
  p_output1[11]=-2.7468000000000004*(-0.50321*t29185*t6072 - 0.50321*t29203*t6077 - 0.50321*(-1.*t29185*t6072 - 1.*t29203*t6077));
  p_output1[12]=-11.5758*(t29215 + t29217 + 0.15121*t29219 + t29312) - 13.6359*(t29215 + t29217 + t29220 - 0.18121*t29289 + 0.28121*t29219*t6046) - 2.7468000000000004*(t29215 + t29217 + t29220 + t29312 + 0.50321*t29219*t6046*t6097 - 0.50321*t29219*t6042*t6099 + 0.50321*(t29219*t6046*t6092 + t29219*t6042*t6099));
  p_output1[13]=-13.6359*(t29375 + t29379 + 0.28121*t29382) - 2.7468000000000004*(t29375 + t29379 + 0.50321*t29382*t6097 - 0.50321*t29388*t6099 + 0.50321*(t29382*t6092 + t29388*t6099));
  p_output1[14]=-2.7468000000000004*(-0.50321*t29401*t6092 + 0.50321*t29388*t6099 + 0.50321*(t29401*t6092 - 1.*t29388*t6099));
  p_output1[15]=-11.5758*(t29411 + t29414 - 0.15121*t29416 + t29425) - 13.6359*(t29411 + t29414 + t29417 - 0.18121*t29420 - 0.28121*t29416*t6062) - 2.7468000000000004*(t29411 + t29414 + t29417 + t29425 - 0.50321*t29416*t6062*t6181 + 0.50321*t29416*t6058*t6192 - 0.50321*(t29416*t6062*t6159 + t29416*t6058*t6192));
  p_output1[16]=-13.6359*(t29536 + t29554 - 0.28121*t29567) - 2.7468000000000004*(t29536 + t29554 - 0.50321*t29567*t6181 - 0.50321*t29661*t6192 - 0.50321*(t29567*t6159 - 1.*t29661*t6192));
  p_output1[17]=-2.7468000000000004*(-0.50321*t29567*t6159 - 0.50321*t29673*t6192 - 0.50321*(-1.*t29567*t6159 - 1.*t29673*t6192));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace DiagonalStance
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
