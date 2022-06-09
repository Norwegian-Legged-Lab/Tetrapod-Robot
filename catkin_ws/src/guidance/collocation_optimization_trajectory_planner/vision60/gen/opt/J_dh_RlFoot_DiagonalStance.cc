/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:32 GMT+02:00
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
  double t1759;
  double t1635;
  double t1655;
  double t1795;
  double t1664;
  double t1796;
  double t1797;
  double t1555;
  double t2024;
  double t2031;
  double t2061;
  double t1587;
  double t2064;
  double t2082;
  double t2023;
  double t2065;
  double t2073;
  double t783;
  double t2105;
  double t2122;
  double t2141;
  double t2144;
  double t2145;
  double t2146;
  double t2147;
  double t2148;
  double t2149;
  double t2582;
  double t2604;
  double t2605;
  double t2872;
  double t2873;
  double t2874;
  double t2879;
  double t2888;
  double t2890;
  double t2895;
  double t2904;
  double t2905;
  double t2864;
  double t2875;
  double t2906;
  double t2911;
  double t2854;
  double t2855;
  double t2856;
  double t2857;
  double t2919;
  double t2926;
  double t2931;
  double t2932;
  double t2937;
  double t2947;
  double t2958;
  double t2979;
  double t2983;
  double t2984;
  double t2985;
  double t2986;
  double t2987;
  double t2988;
  double t2992;
  double t2996;
  double t3000;
  double t3011;
  double t3012;
  double t3016;
  double t2808;
  double t2810;
  double t2814;
  double t2819;
  double t2838;
  double t2843;
  double t3008;
  double t3009;
  double t3010;
  double t3004;
  double t3005;
  double t3006;
  double t2803;
  double t2845;
  double t2847;
  double t2929;
  double t3001;
  double t3002;
  double t3044;
  double t3045;
  double t3046;
  double t3051;
  double t3080;
  double t3081;
  double t3742;
  double t3744;
  double t3765;
  double t3097;
  double t3548;
  double t3555;
  double t3609;
  double t3634;
  double t4279;
  double t4293;
  double t4294;
  double t4296;
  double t4388;
  double t4391;
  double t4399;
  double t3155;
  double t3159;
  double t3160;
  double t4402;
  double t4408;
  double t3658;
  double t3684;
  double t3697;
  double t4244;
  double t4721;
  double t4749;
  double t4758;
  double t4927;
  double t5043;
  double t4312;
  double t6136;
  double t6138;
  double t6144;
  double t4251;
  double t4268;
  double t4794;
  double t5126;
  double t5633;
  double t5653;
  double t4316;
  double t4326;
  double t6171;
  double t6172;
  double t6176;
  double t6180;
  double t6181;
  double t6234;
  double t6236;
  double t6237;
  double t6243;
  double t6244;
  double t6245;
  double t6251;
  double t6252;
  double t6253;
  double t6257;
  double t6258;
  double t6263;
  double t4677;
  double t4712;
  double t6308;
  double t6309;
  double t6310;
  double t6326;
  double t6327;
  double t6319;
  double t6320;
  double t6321;
  double t6322;
  double t6317;
  double t6325;
  double t6328;
  double t6733;
  double t6738;
  double t6803;
  double t6386;
  double t6392;
  double t6396;
  double t6426;
  double t6651;
  double t6655;
  double t6873;
  double t6930;
  double t6946;
  double t6817;
  double t6868;
  double t6991;
  double t7100;
  double t7114;
  double t7116;
  double t7225;
  double t7256;
  double t7278;
  double t7313;
  double t7315;
  double t7316;
  double t7428;
  double t7438;
  double t7441;
  double t6329;
  double t7602;
  double t7603;
  double t7636;
  double t7711;
  double t7715;
  double t7720;
  double t7830;
  double t7832;
  double t7870;
  double t7892;
  double t7936;
  double t7984;
  double t7553;
  double t7583;
  double t7524;
  double t7660;
  double t8367;
  double t8375;
  double t8406;
  double t8278;
  double t8312;
  double t8365;
  double t8499;
  double t8607;
  double t8608;
  double t9105;
  double t9196;
  double t9367;
  double t9473;
  double t9626;
  double t9694;
  double t9742;
  double t9882;
  double t9894;
  double t2510;
  double t2512;
  double t2518;
  double t5804;
  double t5828;
  double t5841;
  double t3027;
  double t3028;
  double t3031;
  double t9963;
  double t9965;
  double t3162;
  double t3165;
  double t3167;
  double t8604;
  double t10369;
  double t10860;
  double t10882;
  double t10230;
  double t10965;
  double t11003;
  double t10437;
  double t10451;
  double t10459;
  double t10920;
  double t7541;
  double t7598;
  double t6265;
  double t6268;
  double t6269;
  double t11128;
  double t11134;
  double t10892;
  double t11152;
  double t11153;
  double t10925;
  double t10947;
  double t11224;
  double t11227;
  double t6011;
  double t6057;
  double t6098;
  double t11233;
  double t11235;
  double t6296;
  double t6297;
  double t6298;
  double t11170;
  double t11173;
  double t11176;
  double t11188;
  double t11596;
  double t11599;
  double t11717;
  double t11711;
  double t11593;
  double t11600;
  double t11780;
  double t11783;
  double t11785;
  double t7328;
  double t7343;
  double t7345;
  double t11742;
  double t11743;
  double t11755;
  double t11756;
  double t11814;
  double t11815;
  double t11824;
  double t11836;
  double t11825;
  double t11834;
  double t11812;
  double t11819;
  double t11891;
  double t11907;
  double t7708;
  double t7740;
  double t7756;
  double t11918;
  double t11919;
  double t10165;
  double t10166;
  double t10173;
  double t6364;
  double t6372;
  double t6376;
  double t11969;
  double t11970;
  double t12126;
  double t11917;
  double t12187;
  double t12127;
  double t12129;
  double t12131;
  double t12193;
  double t12195;
  double t12143;
  double t12181;
  double t11813;
  double t12182;
  double t12183;
  double t12276;
  double t12277;
  double t6173;
  double t12283;
  double t12284;
  double t12199;
  double t12322;
  double t12343;
  double t12353;
  double t12355;
  double t12263;
  double t12267;
  double t12405;
  double t12445;
  double t12455;
  double t10142;
  double t10144;
  double t10064;
  double t10070;
  double t10072;
  double t12548;
  double t12550;
  double t12569;
  double t12579;
  double t12583;
  double t6340;
  double t6347;
  double t6352;
  double t12288;
  t1759 = Cos(var1[10]);
  t1635 = Cos(var1[11]);
  t1655 = Sin(var1[10]);
  t1795 = Sin(var1[11]);
  t1664 = t1635*t1655;
  t1796 = -1.*t1759*t1795;
  t1797 = t1664 + t1796;
  t1555 = Cos(var1[5]);
  t2024 = t1759*t1635;
  t2031 = t1655*t1795;
  t2061 = t2024 + t2031;
  t1587 = Sin(var1[9]);
  t2064 = Sin(var1[5]);
  t2082 = Cos(var1[3]);
  t2023 = -1.*t1555*t1587*t1797;
  t2065 = t2061*t2064;
  t2073 = t2023 + t2065;
  t783 = Sin(var1[3]);
  t2105 = Cos(var1[9]);
  t2122 = Cos(var1[4]);
  t2141 = t2105*t2122*t1797;
  t2144 = Sin(var1[4]);
  t2145 = t1555*t2061;
  t2146 = t1587*t1797*t2064;
  t2147 = t2145 + t2146;
  t2148 = -1.*t2144*t2147;
  t2149 = t2141 + t2148;
  t2582 = -1.*t2105*t1797*t2144;
  t2604 = -1.*t2122*t2147;
  t2605 = t2582 + t2604;
  t2872 = -0.0641*t1635;
  t2873 = -0.28*t1795;
  t2874 = t2872 + t2873;
  t2879 = -1.*t1635;
  t2888 = 1. + t2879;
  t2890 = -0.575*t2888;
  t2895 = -0.295*t1635;
  t2904 = -0.0641*t1795;
  t2905 = t2890 + t2895 + t2904;
  t2864 = 0.325*t1655;
  t2875 = t1759*t2874;
  t2906 = t1655*t2905;
  t2911 = t2864 + t2875 + t2906;
  t2854 = t2122*t1587;
  t2855 = t2105*t2144*t2064;
  t2856 = t2854 + t2855;
  t2857 = 0.068*t1587;
  t2919 = t2105*t2911;
  t2926 = t2857 + t2919;
  t2931 = -1.*t1759;
  t2932 = 1. + t2931;
  t2937 = -0.325*t2932;
  t2947 = -1.*t1655*t2874;
  t2958 = t1759*t2905;
  t2979 = t2937 + t2947 + t2958;
  t2983 = t1555*t2979;
  t2984 = -1.*t2105;
  t2985 = 1. + t2984;
  t2986 = 0.1575*t2985;
  t2987 = 0.2255*t2105;
  t2988 = -1.*t1587*t2911;
  t2992 = t2986 + t2987 + t2988;
  t2996 = -1.*t2992*t2064;
  t3000 = t2983 + t2996;
  t3011 = t2122*t2926;
  t3012 = -1.*t2144*t3000;
  t3016 = t3011 + t3012;
  t2808 = -1.*t1635*t1655;
  t2810 = t1759*t1795;
  t2814 = t2808 + t2810;
  t2819 = t1555*t2814;
  t2838 = t1587*t2061*t2064;
  t2843 = t2819 + t2838;
  t3008 = t1587*t2144;
  t3009 = -1.*t2105*t2122*t2064;
  t3010 = t3008 + t3009;
  t3004 = t2926*t2144;
  t3005 = t2122*t3000;
  t3006 = t3004 + t3005;
  t2803 = t2105*t2061*t2144;
  t2845 = t2122*t2843;
  t2847 = t2803 + t2845;
  t2929 = -1.*t2926*t2144;
  t3001 = -1.*t2122*t3000;
  t3002 = t2929 + t3001;
  t3044 = t2105*t2122*t2061;
  t3045 = -1.*t2144*t2843;
  t3046 = t3044 + t3045;
  t3051 = t1555*t2992;
  t3080 = t2979*t2064;
  t3081 = t3051 + t3080;
  t3742 = t1555*t1587*t1797;
  t3744 = -1.*t2061*t2064;
  t3765 = t3742 + t3744;
  t3097 = -1.*t2105*t1555*t3081;
  t3548 = -1.*t1555*t1587*t2061;
  t3555 = t2814*t2064;
  t3609 = t3548 + t3555;
  t3634 = t3081*t3609;
  t4279 = -1.*t1555*t2992;
  t4293 = -1.*t2979*t2064;
  t4294 = t4279 + t4293;
  t4296 = t2105*t2064*t3081;
  t4388 = t1555*t1587*t2061;
  t4391 = -1.*t2814*t2064;
  t4399 = t4388 + t4391;
  t3155 = -1.*t3010*t3006;
  t3159 = -1.*t2856*t3016;
  t3160 = t3097 + t3155 + t3159;
  t4402 = t3000*t3609;
  t4408 = t3081*t2843;
  t3658 = t3006*t2847;
  t3684 = t3016*t3046;
  t3697 = t3634 + t3658 + t3684;
  t4244 = -1.*t1587*t2926;
  t4721 = -0.068*t1587;
  t4749 = -1.*t2105*t2911;
  t4758 = t4721 + t4749;
  t4927 = 0.068*t2105;
  t5043 = t4927 + t2988;
  t4312 = t2105*t2926*t2061;
  t6136 = -1.*t2122*t1587*t1797;
  t6138 = -1.*t2105*t1797*t2144*t2064;
  t6144 = t6136 + t6138;
  t4251 = t2105*t2064*t3000;
  t4268 = t4244 + t4251 + t3097;
  t4794 = -1.*t2105*t2926;
  t5126 = -1.*t1587*t5043;
  t5633 = -1.*t1587*t2926*t2061;
  t5653 = t2105*t5043*t2061;
  t4316 = t3000*t2843;
  t4326 = t4312 + t3634 + t4316;
  t6171 = Power(t1555,2);
  t6172 = -1.*t2105*t6171*t4758;
  t6176 = t1555*t1587*t3081;
  t6180 = -1.*t2105*t1555*t2061*t3081;
  t6181 = t1555*t4758*t3609;
  t6234 = -1.*t1587*t2061*t2144;
  t6236 = t2105*t2122*t2061*t2064;
  t6237 = t6234 + t6236;
  t6243 = t5043*t2144;
  t6244 = -1.*t2122*t4758*t2064;
  t6245 = t6243 + t6244;
  t6251 = t2122*t5043;
  t6252 = t4758*t2144*t2064;
  t6253 = t6251 + t6252;
  t6257 = t2105*t2144;
  t6258 = t2122*t1587*t2064;
  t6263 = t6257 + t6258;
  t4677 = -1.*t2105*t2992;
  t4712 = t4244 + t4677;
  t6308 = -1.*t1759*t1635;
  t6309 = -1.*t1655*t1795;
  t6310 = t6308 + t6309;
  t6326 = 0.325*t1759;
  t6327 = t6326 + t2947 + t2958;
  t6319 = -0.325*t1655;
  t6320 = -1.*t1759*t2874;
  t6321 = -1.*t1655*t2905;
  t6322 = t6319 + t6320 + t6321;
  t6317 = t2105*t2926*t2814;
  t6325 = Power(t2105,2);
  t6328 = t6325*t6327*t2061;
  t6733 = -1.*t1555*t1587*t6327;
  t6738 = t6322*t2064;
  t6803 = t6733 + t6738;
  t6386 = -1.*t1555*t1587*t2814;
  t6392 = t6310*t2064;
  t6396 = t6386 + t6392;
  t6426 = t1555*t6322;
  t6651 = t1587*t6327*t2064;
  t6655 = t6426 + t6651;
  t6873 = t1555*t6310;
  t6930 = t1587*t2814*t2064;
  t6946 = t6873 + t6930;
  t6817 = -1.*t2105*t1555*t6803;
  t6868 = t6803*t3609;
  t6991 = t3081*t6396;
  t7100 = t2105*t2814*t2144;
  t7114 = t2122*t6946;
  t7116 = t7100 + t7114;
  t7225 = t2105*t6327*t2144;
  t7256 = t2122*t6655;
  t7278 = t7225 + t7256;
  t7313 = t2105*t2122*t6327;
  t7315 = -1.*t2144*t6655;
  t7316 = t7313 + t7315;
  t7428 = -0.28*t1635;
  t7438 = 0.0641*t1795;
  t7441 = t7428 + t7438;
  t6329 = Power(t1587,2);
  t7602 = t1655*t2874;
  t7603 = t1759*t7441;
  t7636 = t7602 + t7603;
  t7711 = t1555*t1797;
  t7715 = t1587*t6310*t2064;
  t7720 = t7711 + t7715;
  t7830 = -1.*t1555*t1587*t6310;
  t7832 = t1797*t2064;
  t7870 = t7830 + t7832;
  t7892 = t2105*t2122*t6310;
  t7936 = -1.*t2144*t7720;
  t7984 = t7892 + t7936;
  t7553 = -1.*t1655*t7441;
  t7583 = t2875 + t7553;
  t7524 = t2105*t2926*t1797;
  t7660 = t6325*t7636*t2061;
  t8367 = -1.*t1555*t1587*t7636;
  t8375 = t7583*t2064;
  t8406 = t8367 + t8375;
  t8278 = t1555*t7583;
  t8312 = t1587*t7636*t2064;
  t8365 = t8278 + t8312;
  t8499 = -1.*t2105*t1555*t8406;
  t8607 = t8406*t3609;
  t8608 = t3081*t2073;
  t9105 = t2105*t1797*t2144;
  t9196 = t2122*t2147;
  t9367 = t9105 + t9196;
  t9473 = t2105*t7636*t2144;
  t9626 = t2122*t8365;
  t9694 = t9473 + t9626;
  t9742 = t2105*t2122*t7636;
  t9882 = -1.*t2144*t8365;
  t9894 = t9742 + t9882;
  t2510 = t2082*t2073;
  t2512 = -1.*t783*t2149;
  t2518 = t2510 + t2512;
  t5804 = t2979*t2814;
  t5828 = -1.*t1587*t2992*t2061;
  t5841 = t5804 + t4312 + t5828;
  t3027 = -1.*t1587*t2144;
  t3028 = t2105*t2122*t2064;
  t3031 = t3027 + t3028;
  t9963 = t3006*t9367;
  t9965 = t3016*t2149;
  t3162 = -1.*t2105*t2061*t2144;
  t3165 = -1.*t2122*t2843;
  t3167 = t3162 + t3165;
  t8604 = t3000*t2147;
  t10369 = -1.*t3081*t3609;
  t10860 = t3081*t2147;
  t10882 = t3000*t2073;
  t10230 = t8608 + t9963 + t9965;
  t10965 = -1.*t3000*t3609;
  t11003 = -1.*t3081*t2843;
  t10437 = -1.*t3006*t2847;
  t10451 = -1.*t3016*t3046;
  t10459 = t10369 + t10437 + t10451;
  t10920 = -1.*t2105*t2926*t2061;
  t7541 = -1.*t1587*t2992*t1797;
  t7598 = t2979*t2061;
  t6265 = t2105*t2122;
  t6268 = -1.*t1587*t2144*t2064;
  t6269 = t6265 + t6268;
  t11128 = -1.*t1587*t2926*t1797;
  t11134 = t2105*t5043*t1797;
  t10892 = t7524 + t8604 + t8608;
  t11152 = t1587*t2926*t2061;
  t11153 = -1.*t2105*t5043*t2061;
  t10925 = -1.*t3000*t2843;
  t10947 = t10920 + t10369 + t10925;
  t11224 = -1.*t2105*t1555*t1797*t3081;
  t11227 = t1555*t4758*t2073;
  t6011 = -1.*t1587*t1797*t2144;
  t6057 = t2105*t2122*t1797*t2064;
  t6098 = t6011 + t6057;
  t11233 = t2105*t1555*t2061*t3081;
  t11235 = -1.*t1555*t4758*t3609;
  t6296 = -1.*t2122*t1587*t2061;
  t6297 = -1.*t2105*t2061*t2144*t2064;
  t6298 = t6296 + t6297;
  t11170 = -1.*t2979*t2814;
  t11173 = t1587*t2992*t2061;
  t11176 = t11170 + t10920 + t11173;
  t11188 = t7524 + t7541 + t7598;
  t11596 = -1.*t6322*t2814;
  t11599 = -1.*t2979*t6310;
  t11717 = t6322*t2061;
  t11711 = t6325*t6327*t1797;
  t11593 = -1.*t2105*t2926*t2814;
  t11600 = -1.*t6325*t6327*t2061;
  t11780 = t6803*t2073;
  t11783 = -1.*t6803*t3609;
  t11785 = -1.*t3081*t6396;
  t7328 = t2105*t2122*t2814;
  t7343 = -1.*t2144*t6946;
  t7345 = t7328 + t7343;
  t11742 = t2911*t1797;
  t11743 = t11742 + t7598;
  t11755 = -1.*t2911*t2061;
  t11756 = t11170 + t11755;
  t11814 = -1.*t7583*t2814;
  t11815 = -1.*t2979*t2061;
  t11824 = t2979*t1797;
  t11836 = t7583*t2061;
  t11825 = t6325*t7636*t1797;
  t11834 = t2105*t2926*t6310;
  t11812 = -1.*t2105*t2926*t1797;
  t11819 = -1.*t6325*t7636*t2061;
  t11891 = t3081*t7870;
  t11907 = t8406*t2073;
  t7708 = t2105*t6310*t2144;
  t7740 = t2122*t7720;
  t7756 = t7708 + t7740;
  t11918 = -1.*t8406*t3609;
  t11919 = -1.*t3081*t2073;
  t10165 = t2105*t2082*t1555;
  t10166 = -1.*t783*t2856;
  t10173 = t10165 + t10166;
  t6364 = t2082*t3609;
  t6372 = -1.*t783*t3046;
  t6376 = t6364 + t6372;
  t11969 = -1.*t3006*t9367;
  t11970 = -1.*t3016*t2149;
  t12126 = t2105*t1555*t3081;
  t11917 = -1.*t3000*t2147;
  t12187 = -1.*t2105*t2064*t3081;
  t12127 = t3010*t3006;
  t12129 = t2856*t3016;
  t12131 = t12126 + t12127 + t12129;
  t12193 = -1.*t3081*t2147;
  t12195 = -1.*t3000*t2073;
  t12143 = t11919 + t11969 + t11970;
  t12181 = t1587*t2926;
  t11813 = t1587*t2992*t1797;
  t12182 = -1.*t2105*t2064*t3000;
  t12183 = t12181 + t12182 + t12126;
  t12276 = t2105*t2926;
  t12277 = t1587*t5043;
  t6173 = Power(t2064,2);
  t12283 = t1587*t2926*t1797;
  t12284 = -1.*t2105*t5043*t1797;
  t12199 = t11812 + t11917 + t11919;
  t12322 = t2105*t6171*t4758;
  t12343 = -1.*t1555*t1587*t3081;
  t12353 = t2105*t1555*t1797*t3081;
  t12355 = -1.*t1555*t4758*t2073;
  t12263 = t2105*t2992;
  t12267 = t12181 + t12263;
  t12405 = -1.*t6325*t6327*t1797;
  t12445 = t2105*t1555*t6803;
  t12455 = -1.*t6803*t2073;
  t10142 = -0.325*t1795;
  t10144 = -1.*t2905*t1795;
  t10064 = t783*t2073;
  t10070 = t2082*t2149;
  t10072 = t10064 + t10070;
  t12548 = -1.*t6325*t7636*t1797;
  t12550 = -1.*t2105*t2926*t6310;
  t12569 = t2105*t1555*t8406;
  t12579 = -1.*t3081*t7870;
  t12583 = -1.*t8406*t2073;
  t6340 = t783*t3609;
  t6347 = t2082*t3046;
  t6352 = t6340 + t6347;
  t12288 = t11812 + t11813 + t11815;
  p_output1[0]=(-1.*t2082*t2149 - 1.*t2073*t783)*var2[1] + t2518*var2[2];
  p_output1[1]=t2149*var2[0] - 1.*t2605*t783*var2[1] + t2082*t2605*var2[2] + (t2847*(-1.*t2856*t3002 - 1.*t2856*t3006 - 1.*t3010*t3016 - 1.*t3016*t3031) + t3046*t3160 + t3010*(t2847*t3016 + t3002*t3046 + t3006*t3046 + t3016*t3167) + t2856*t3697)*var2[3];
  p_output1[2]=t2122*t3765*var2[0] + (t2082*t2147 + t2144*t3765*t783)*var2[1] + (-1.*t2082*t2144*t3765 + t2147*t783)*var2[2] + (-1.*t1555*t2105*t2122*t3697 + t2847*(-1.*t1555*t2105*t3000 + t1555*t2105*t2122*t3006 - 1.*t1555*t2105*t2144*t3016 + t2144*t2856*t4294 - 1.*t2122*t3010*t4294 + t4296) + t2122*t3160*t4399 + t3010*(t2122*t2847*t4294 - 1.*t2144*t3046*t4294 + t2122*t3006*t4399 - 1.*t2144*t3016*t4399 + t4402 + t4408))*var2[3] + (t2843*t4268 + t3609*(t2064*t2105*t4294 + t4296) - 1.*t2064*t2105*t4326 + t1555*t2105*(t2843*t4294 + t3000*t4399 + t4402 + t4408))*var2[4];
  p_output1[3]=t6098*var2[0] + (-1.*t1555*t1797*t2082*t2105 - 1.*t6144*t783)*var2[1] + (t2082*t6144 - 1.*t1555*t1797*t2105*t783)*var2[2] + (t3160*t6237 + t3697*t6263 + t2847*(t6172 + t6176 - 1.*t3010*t6245 - 1.*t2856*t6253 - 1.*t3006*t6263 - 1.*t3016*t6269) + t3010*(t6180 + t6181 + t3006*t6237 + t2847*t6245 + t3046*t6253 + t3016*t6298))*var2[3] + (-1.*t1555*t2061*t2105*t4268 - 1.*t1555*t1587*t4326 + t3609*(-1.*t1587*t2064*t3000 + t4794 + t5126 + t6172 - 1.*t2105*t4758*t6173 + t6176) + t1555*t2105*(t2061*t2064*t2105*t3000 - 1.*t2064*t2843*t4758 + t5633 + t5653 + t6180 + t6181))*var2[4] + (-1.*t1587*t2061*t4712 + t2061*t2105*(t1587*t2992 - 1.*t2105*t4758 + t4794 + t5126) + t1587*(-1.*t2061*t2105*t2992 - 1.*t1587*t2061*t4758 + t5633 + t5653) + t2105*t5841)*var2[5];
  p_output1[4]=t2847*var2[0] + t6376*var2[1] + t6352*var2[2] + (t3160*t7116 + t2847*(t6817 - 1.*t3010*t7278 - 1.*t2856*t7316) + t3010*(t6868 + t6991 + t3006*t7116 + t2847*t7278 + t3046*t7316 + t3016*t7345))*var2[3] + (t4268*t6396 + t3609*(-1.*t1587*t2105*t6327 + t2064*t2105*t6655 + t6817) + t1555*t2105*(t6317 + t6328 + t2843*t6655 + t6868 + t3000*t6946 + t6991))*var2[4] + (t2105*t2814*t4712 + t1587*(-1.*t1587*t2814*t2992 + t2979*t6310 + t6317 + t2814*t6322 + t6328 + t2061*t6327*t6329))*var2[5] + (-0.1575*t2061 - 0.2255*t6310)*var2[9];
  p_output1[5]=t7756*var2[0] + (t2082*t7870 - 1.*t783*t7984)*var2[1] + (t783*t7870 + t2082*t7984)*var2[2] + (t3160*t9367 + t2847*(t8499 - 1.*t3010*t9694 - 1.*t2856*t9894) + t3010*(t8607 + t8608 + t2847*t9694 + t3046*t9894 + t9963 + t9965))*var2[3] + (t2073*t4268 + t3609*(-1.*t1587*t2105*t7636 + t2064*t2105*t8365 + t8499) + t1555*t2105*(t7524 + t7660 + t2843*t8365 + t8604 + t8607 + t8608))*var2[4] + (t1797*t2105*t4712 + t1587*(t7524 + t7541 + t2814*t7583 + t7598 + t2061*t6329*t7636 + t7660))*var2[5] + (-0.2255*t2061 - 0.1575*t6310)*var2[9] + (-0.325*t1635 - 1.*t1635*t2905 - 1.*t1635*t7441)*var2[10];
  p_output1[6]=t9367;
  p_output1[7]=t2518;
  p_output1[8]=t10072;
  p_output1[9]=t2847*t3160 + t3010*t3697;
  p_output1[10]=t3609*t4268 + t1555*t2105*t4326;
  p_output1[11]=t2061*t2105*t4712 + t1587*t5841;
  p_output1[12]=-0.1575*t1797 - 0.2255*t2814;
  p_output1[13]=t10142 + t10144 - 1.*t1635*t2874;
  p_output1[14]=-0.0641;
  p_output1[15]=(-1.*t2082*t2856 - 1.*t1555*t2105*t783)*var2[1] + t10173*var2[2];
  p_output1[16]=t2856*var2[0] - 1.*t3031*t783*var2[1] + t2082*t3031*var2[2] + (t10459*t2149 + t10230*t3046 + (-1.*t2847*t3016 - 1.*t3002*t3046 - 1.*t3006*t3046 - 1.*t3016*t3167)*t9367 + t2847*(t2149*t3002 + t2149*t3006 + t2605*t3016 + t3016*t9367))*var2[3];
  p_output1[17]=-1.*t1555*t2105*t2122*var2[0] + (-1.*t2064*t2082*t2105 - 1.*t1555*t2105*t2144*t783)*var2[1] + (t1555*t2082*t2105*t2144 - 1.*t2064*t2105*t783)*var2[2] + (t10459*t2122*t3765 + t10230*t2122*t4399 + (t10965 + t11003 - 1.*t2122*t2847*t4294 + t2144*t3046*t4294 - 1.*t2122*t3006*t4399 + t2144*t3016*t4399)*t9367 + t2847*(t10860 + t10882 + t2122*t3006*t3765 - 1.*t2144*t3016*t3765 - 1.*t2144*t2149*t4294 + t2122*t4294*t9367))*var2[3] + (t10947*t2147 + t10892*t2843 + t3609*(t10860 + t10882 + t3000*t3765 + t2147*t4294) + t2073*(t10965 + t11003 - 1.*t2843*t4294 - 1.*t3000*t4399))*var2[4];
  p_output1[18]=t6263*var2[0] + (-1.*t1555*t1587*t2082 - 1.*t6269*t783)*var2[1] + (t2082*t6269 - 1.*t1555*t1587*t783)*var2[2] + (t10459*t6098 + t10230*t6237 + (t11233 + t11235 - 1.*t3006*t6237 - 1.*t2847*t6245 - 1.*t3046*t6253 - 1.*t3016*t6298)*t9367 + t2847*(t11224 + t11227 + t3006*t6098 + t3016*t6144 + t2149*t6253 + t6245*t9367))*var2[3] + (-1.*t10947*t1555*t1797*t2105 - 1.*t10892*t1555*t2061*t2105 + t3609*(t11128 + t11134 + t11224 + t11227 + t1797*t2064*t2105*t3000 - 1.*t2064*t2147*t4758) + t2073*(t11152 + t11153 + t11233 + t11235 - 1.*t2061*t2064*t2105*t3000 + t2064*t2843*t4758))*var2[4] + (-1.*t11176*t1587*t1797 - 1.*t11188*t1587*t2061 + t2061*t2105*(t11128 + t11134 - 1.*t1797*t2105*t2992 - 1.*t1587*t1797*t4758) + t1797*t2105*(t11152 + t11153 + t2061*t2105*t2992 + t1587*t2061*t4758))*var2[5];
  p_output1[19]=(t10459*t2847 + t10230*t7116 + (t11783 + t11785 - 1.*t3006*t7116 - 1.*t2847*t7278 - 1.*t3046*t7316 - 1.*t3016*t7345)*t9367 + t2847*(t11780 + t3634 + t3658 + t3684 + t2149*t7316 + t7278*t9367))*var2[3] + (t10947*t3609 + t10892*t6396 + t3609*(t11711 + t11780 + t3634 + t4312 + t4316 + t2147*t6655) + t2073*(t11593 + t11600 + t11783 + t11785 - 1.*t2843*t6655 - 1.*t3000*t6946))*var2[4] + (t11176*t2061*t2105 + t11188*t2105*t2814 + t2061*t2105*(t11711 + t11717 + t4312 + t5804 + t5828 + t1797*t6327*t6329) + t1797*t2105*(t11593 + t11596 + t11599 + t11600 + t1587*t2814*t2992 - 1.*t2061*t6327*t6329))*var2[5] + (t11756*t2814 + t11743*t6310 + t2814*(t11717 + t2061*t2911 + t5804 + t1797*t6327) + t2061*(t11596 + t11599 - 1.*t2814*t2911 - 1.*t2061*t6327))*var2[9];
  p_output1[20]=(t10459*t7756 + t10230*t9367 + t2847*(t11891 + t11907 + t3006*t7756 + t3016*t7984 + t9367*t9694 + t2149*t9894) + t9367*(t11918 + t11919 + t11969 + t11970 - 1.*t2847*t9694 - 1.*t3046*t9894))*var2[3] + (t10892*t2073 + t10947*t7870 + t3609*(t11825 + t11834 + t11891 + t11907 + t3000*t7720 + t2147*t8365) + t2073*(t11812 + t11819 + t11917 + t11918 + t11919 - 1.*t2843*t8365))*var2[4] + (t11188*t1797*t2105 + t11176*t2105*t6310 + t2061*t2105*(t11824 + t11825 + t11834 + t11836 - 1.*t1587*t2992*t6310 + t1797*t6329*t7636) + t1797*t2105*(t11812 + t11813 + t11814 + t11815 + t11819 - 1.*t2061*t6329*t7636))*var2[5] + (t11756*t1797 + t11743*t2061 + t2814*(t11824 + t11836 + t2911*t6310 + t1797*t7636) + t2061*(t11814 + t11815 - 1.*t1797*t2911 - 1.*t2061*t7636))*var2[9];
  p_output1[21]=t3010;
  p_output1[22]=t10173;
  p_output1[23]=t2082*t2856 + t1555*t2105*t783;
  p_output1[24]=t10230*t2847 + t10459*t9367;
  p_output1[25]=t10947*t2073 + t10892*t3609;
  p_output1[26]=t11176*t1797*t2105 + t11188*t2061*t2105;
  p_output1[27]=t11756*t2061 + t11743*t2814;
  p_output1[28]=(-1.*t2082*t3046 - 1.*t3609*t783)*var2[1] + t6376*var2[2];
  p_output1[29]=t3046*var2[0] - 1.*t3167*t783*var2[1] + t2082*t3167*var2[2] + (t12131*t2149 + t12143*t2856 + (t2856*t3002 + t2856*t3006 + t3010*t3016 + t3016*t3031)*t9367 + t3010*(-1.*t2149*t3002 - 1.*t2149*t3006 - 1.*t2605*t3016 - 1.*t3016*t9367))*var2[3];
  p_output1[30]=t2122*t4399*var2[0] + (t2082*t2843 + t2144*t4399*t783)*var2[1] + (-1.*t2082*t2144*t4399 + t2843*t783)*var2[2] + (-1.*t12143*t1555*t2105*t2122 + t12131*t2122*t3765 + (t12187 + t1555*t2105*t3000 - 1.*t1555*t2105*t2122*t3006 + t1555*t2105*t2144*t3016 - 1.*t2144*t2856*t4294 + t2122*t3010*t4294)*t9367 + t3010*(t12193 + t12195 - 1.*t2122*t3006*t3765 + t2144*t3016*t3765 + t2144*t2149*t4294 - 1.*t2122*t4294*t9367))*var2[3] + (-1.*t12199*t2064*t2105 + t12183*t2147 + t2073*(t12187 - 1.*t2064*t2105*t4294) + t1555*t2105*(t12193 + t12195 - 1.*t3000*t3765 - 1.*t2147*t4294))*var2[4];
  p_output1[31]=t6237*var2[0] + (-1.*t1555*t2061*t2082*t2105 - 1.*t6298*t783)*var2[1] + (t2082*t6298 - 1.*t1555*t2061*t2105*t783)*var2[2] + (t12131*t6098 + t12143*t6263 + (t12322 + t12343 + t3010*t6245 + t2856*t6253 + t3006*t6263 + t3016*t6269)*t9367 + t3010*(t12353 + t12355 - 1.*t3006*t6098 - 1.*t3016*t6144 - 1.*t2149*t6253 - 1.*t6245*t9367))*var2[3] + (-1.*t12199*t1555*t1587 - 1.*t12183*t1555*t1797*t2105 + t1555*t2105*(t12283 + t12284 + t12353 + t12355 - 1.*t1797*t2064*t2105*t3000 + t2064*t2147*t4758) + t2073*(t12276 + t12277 + t12322 + t12343 + t1587*t2064*t3000 + t2105*t4758*t6173))*var2[4] + (-1.*t12267*t1587*t1797 + t12288*t2105 + t1587*(t12283 + t12284 + t1797*t2105*t2992 + t1587*t1797*t4758) + t1797*t2105*(t12276 + t12277 - 1.*t1587*t2992 + t2105*t4758))*var2[5];
  p_output1[32]=t7116*var2[0] + (t2082*t6396 - 1.*t7345*t783)*var2[1] + (t2082*t7345 + t6396*t783)*var2[2] + (t12131*t2847 + (t12445 + t3010*t7278 + t2856*t7316)*t9367 + t3010*(t10369 + t10437 + t10451 + t12455 - 1.*t2149*t7316 - 1.*t7278*t9367))*var2[3] + (t12183*t3609 + t2073*(t12445 + t1587*t2105*t6327 - 1.*t2064*t2105*t6655) + t1555*t2105*(t10369 + t10920 + t10925 + t12405 + t12455 - 1.*t2147*t6655))*var2[4] + (t12267*t2061*t2105 + t1587*(t10920 + t11170 + t11173 + t12405 - 1.*t2061*t6322 - 1.*t1797*t6327*t6329))*var2[5] + 0.068*t2814*var2[9];
  p_output1[33]=t9367*var2[0] + t2518*var2[1] + t10072*var2[2] + (t12131*t7756 + t3010*(t12579 + t12583 - 1.*t3006*t7756 - 1.*t3016*t7984 - 1.*t9367*t9694 - 1.*t2149*t9894) + t9367*(t12569 + t3010*t9694 + t2856*t9894))*var2[3] + (t12183*t7870 + t2073*(t12569 + t1587*t2105*t7636 - 1.*t2064*t2105*t8365) + t1555*t2105*(t12548 + t12550 + t12579 + t12583 - 1.*t3000*t7720 - 1.*t2147*t8365))*var2[4] + (t12267*t2105*t6310 + t1587*(t12548 + t12550 - 1.*t1797*t2979 + t1587*t2992*t6310 - 1.*t2061*t7583 - 1.*t1797*t6329*t7636))*var2[5] + 0.068*t1797*var2[9] + (t10142 + t10144 - 1.*t1795*t7441)*var2[10];
  p_output1[34]=t2847;
  p_output1[35]=t6376;
  p_output1[36]=t6352;
  p_output1[37]=t12143*t3010 + t12131*t9367;
  p_output1[38]=t12183*t2073 + t12199*t1555*t2105;
  p_output1[39]=t12288*t1587 + t12267*t1797*t2105;
  p_output1[40]=0.068*t2061;
  p_output1[41]=0.325*t1635 - 1.*t1795*t2874 + t1635*t2905;
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

#include "J_dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
