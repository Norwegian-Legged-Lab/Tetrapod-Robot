/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:33 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t2653;
  double t2727;
  double t2696;
  double t2748;
  double t2749;
  double t2750;
  double t2753;
  double t2798;
  double t2901;
  double t3003;
  double t3007;
  double t3026;
  double t3032;
  double t3037;
  double t3043;
  double t2292;
  double t3192;
  double t3202;
  double t3225;
  double t3227;
  double t3255;
  double t3282;
  double t3390;
  double t3495;
  double t3698;
  double t3707;
  double t3793;
  double t3741;
  double t3836;
  double t3872;
  double t4025;
  double t4107;
  double t2501;
  double t2502;
  double t3811;
  double t4109;
  double t4170;
  double t4400;
  double t4405;
  double t4409;
  double t4197;
  double t4242;
  double t4275;
  double t4295;
  double t4298;
  double t4306;
  double t4180;
  double t4347;
  double t4360;
  double t4410;
  double t4425;
  double t4429;
  double t4430;
  double t4432;
  double t4447;
  double t4456;
  double t4457;
  double t4459;
  double t4460;
  double t4461;
  double t2528;
  double t4466;
  double t4488;
  double t2529;
  double t4659;
  double t4674;
  double t4720;
  double t5607;
  double t5664;
  double t5670;
  double t5777;
  double t5809;
  double t5930;
  double t4789;
  double t4907;
  double t4908;
  double t5354;
  double t5388;
  double t5504;
  double t6169;
  double t6170;
  double t6174;
  double t6175;
  double t6177;
  double t6178;
  double t6179;
  double t6183;
  double t6185;
  double t6186;
  double t6228;
  double t6240;
  double t6246;
  double t6256;
  double t6303;
  double t6304;
  double t6305;
  double t6293;
  double t6294;
  double t6295;
  double t6299;
  double t6300;
  double t6301;
  double t6302;
  double t6306;
  double t6307;
  double t6311;
  double t6312;
  double t6313;
  double t6314;
  double t6315;
  double t6318;
  double t6323;
  double t6324;
  double t6330;
  double t4557;
  double t4594;
  double t4626;
  double t6760;
  double t6828;
  double t6832;
  double t6421;
  double t6700;
  double t6728;
  double t6959;
  double t6994;
  double t6998;
  double t6856;
  double t6863;
  double t6906;
  double t6937;
  double t7035;
  double t7045;
  double t7072;
  double t7075;
  double t7076;
  double t7141;
  double t7152;
  double t7305;
  double t7321;
  double t7322;
  double t7324;
  double t7370;
  double t7376;
  double t7391;
  double t7497;
  double t7498;
  double t7499;
  double t7501;
  double t7670;
  double t7685;
  double t7688;
  double t7705;
  double t7760;
  double t8533;
  double t8544;
  double t8552;
  double t8558;
  double t8559;
  double t8648;
  double t8649;
  double t8650;
  double t8554;
  double t8560;
  double t8601;
  double t8603;
  double t8675;
  double t8676;
  double t8688;
  double t8693;
  double t8698;
  double t8722;
  double t8723;
  double t8726;
  double t8729;
  double t8730;
  double t8731;
  double t8736;
  double t8740;
  double t8741;
  double t8786;
  double t8787;
  double t8792;
  double t8797;
  double t8798;
  double t8799;
  double t8860;
  double t8861;
  double t8862;
  double t8897;
  double t8899;
  double t8882;
  double t8886;
  double t8889;
  double t8890;
  double t8878;
  double t8893;
  double t8900;
  double t8950;
  double t8951;
  double t8952;
  double t8930;
  double t8931;
  double t8932;
  double t8941;
  double t8942;
  double t8948;
  double t8957;
  double t8958;
  double t8962;
  double t8953;
  double t8956;
  double t8967;
  double t8983;
  double t8998;
  double t8999;
  double t9004;
  double t9005;
  double t9006;
  double t9008;
  double t9009;
  double t9010;
  double t9040;
  double t9041;
  double t9042;
  double t8901;
  double t9060;
  double t9061;
  double t9062;
  double t9070;
  double t9071;
  double t9072;
  double t9079;
  double t9080;
  double t9081;
  double t9086;
  double t9087;
  double t9088;
  double t9056;
  double t9057;
  double t9054;
  double t9063;
  double t9108;
  double t9112;
  double t9135;
  double t9100;
  double t9102;
  double t9103;
  double t9136;
  double t9154;
  double t9156;
  double t9183;
  double t9187;
  double t9188;
  double t9192;
  double t9193;
  double t9197;
  double t9055;
  double t9059;
  double t9245;
  double t9246;
  double t9247;
  double t9252;
  double t9254;
  double t9269;
  double t9272;
  double t9274;
  double t9286;
  double t9297;
  double t9303;
  double t9308;
  double t9309;
  double t9319;
  double t9334;
  double t9408;
  double t9409;
  double t9412;
  double t9416;
  double t9428;
  double t9429;
  double t9398;
  double t9404;
  double t9406;
  double t9146;
  double t9455;
  double t9456;
  double t9458;
  double t9459;
  double t9460;
  double t9462;
  double t9463;
  double t9349;
  double t9364;
  double t9371;
  double t9445;
  double t9446;
  double t9448;
  double t9214;
  double t9218;
  double t9563;
  double t9567;
  double t9586;
  double t9587;
  double t9588;
  double t9597;
  double t9598;
  double t9492;
  double t9497;
  double t9498;
  double t9505;
  double t9516;
  double t9521;
  double t8744;
  double t8745;
  double t8746;
  double t9617;
  double t9618;
  double t9633;
  double t9634;
  double t9696;
  double t9703;
  double t8639;
  double t8640;
  double t8641;
  double t9753;
  double t9756;
  double t8755;
  double t8756;
  double t8760;
  double t10178;
  double t10194;
  double t10228;
  double t10237;
  double t8809;
  double t8810;
  double t8819;
  double t8824;
  double t8825;
  double t8827;
  double t11020;
  double t11033;
  double t11074;
  double t11046;
  double t11012;
  double t11036;
  double t11177;
  double t11198;
  double t11205;
  double t9019;
  double t9020;
  double t9022;
  double t11339;
  double t11454;
  double t11545;
  double t11590;
  double t11558;
  double t11572;
  double t11264;
  double t11461;
  double t11760;
  double t11767;
  double t9069;
  double t9073;
  double t9076;
  double t11781;
  double t11782;
  double t11845;
  double t11853;
  double t11854;
  double t11855;
  double t11265;
  double t11861;
  double t11865;
  double t11870;
  double t11871;
  double t11873;
  double t11875;
  double t11876;
  double t8913;
  double t11916;
  double t11928;
  double t11930;
  double t11779;
  double t11968;
  double t11981;
  double t11982;
  double t11984;
  double t11987;
  double t11988;
  double t11989;
  double t8914;
  double t8915;
  double t8917;
  double t8919;
  double t8920;
  double t8921;
  double t8925;
  double t8926;
  double t11892;
  double t11893;
  double t11909;
  double t11958;
  double t11959;
  double t11960;
  double t11802;
  double t11803;
  double t12043;
  double t12044;
  double t12046;
  double t12047;
  double t12048;
  double t12051;
  double t12053;
  double t11998;
  double t11999;
  double t12000;
  double t12004;
  double t12037;
  double t12039;
  double t12166;
  double t12185;
  double t12189;
  double t12273;
  double t12275;
  double t8680;
  double t12285;
  double t12286;
  double t12344;
  double t12354;
  double t12361;
  double t12363;
  double t5956;
  double t6233;
  double t6270;
  double t12514;
  double t12533;
  double t12551;
  double t12558;
  double t12561;
  double t12603;
  double t12657;
  double t12667;
  t2653 = Cos(var1[11]);
  t2727 = Sin(var1[11]);
  t2696 = -0.0641*t2653;
  t2748 = -0.28*t2727;
  t2749 = t2696 + t2748;
  t2750 = -1.*t2653*t2749;
  t2753 = -0.325*t2727;
  t2798 = -1.*t2653;
  t2901 = 1. + t2798;
  t3003 = -0.575*t2901;
  t3007 = -0.295*t2653;
  t3026 = -0.0641*t2727;
  t3032 = t3003 + t3007 + t3026;
  t3037 = -1.*t3032*t2727;
  t3043 = t2750 + t2753 + t3037;
  t2292 = Cos(var1[10]);
  t3192 = Sin(var1[10]);
  t3202 = t2653*t3192;
  t3225 = -1.*t2292*t2727;
  t3227 = t3202 + t3225;
  t3255 = -0.1575*t3227;
  t3282 = -1.*t2653*t3192;
  t3390 = t2292*t2727;
  t3495 = t3282 + t3390;
  t3698 = -0.2255*t3495;
  t3707 = t3255 + t3698;
  t3793 = Sin(var1[9]);
  t3741 = Cos(var1[9]);
  t3836 = 0.325*t3192;
  t3872 = t2292*t2749;
  t4025 = t3192*t3032;
  t4107 = t3836 + t3872 + t4025;
  t2501 = -1.*t2292;
  t2502 = 1. + t2501;
  t3811 = 0.068*t3793;
  t4109 = t3741*t4107;
  t4170 = t3811 + t4109;
  t4400 = t2292*t2653;
  t4405 = t3192*t2727;
  t4409 = t4400 + t4405;
  t4197 = -1.*t3741;
  t4242 = 1. + t4197;
  t4275 = 0.1575*t4242;
  t4295 = 0.2255*t3741;
  t4298 = -1.*t3793*t4107;
  t4306 = t4275 + t4295 + t4298;
  t4180 = -1.*t3793*t4170;
  t4347 = -1.*t3741*t4306;
  t4360 = t4180 + t4347;
  t4410 = t3741*t4360*t4409;
  t4425 = -0.325*t2502;
  t4429 = -1.*t3192*t2749;
  t4430 = t2292*t3032;
  t4432 = t4425 + t4429 + t4430;
  t4447 = t4432*t3495;
  t4456 = t3741*t4170*t4409;
  t4457 = -1.*t3793*t4306*t4409;
  t4459 = t4447 + t4456 + t4457;
  t4460 = t3793*t4459;
  t4461 = t4410 + t4460;
  t2528 = Cos(var1[4]);
  t4466 = Sin(var1[4]);
  t4488 = Sin(var1[5]);
  t2529 = Cos(var1[5]);
  t4659 = t3741*t4466;
  t4674 = t2528*t3793*t4488;
  t4720 = t4659 + t4674;
  t5607 = t3741*t3227*t4466;
  t5664 = t2529*t4409;
  t5670 = t3793*t3227*t4488;
  t5777 = t5664 + t5670;
  t5809 = t2528*t5777;
  t5930 = t5607 + t5809;
  t4789 = -1.*t2528*t2529*t3192;
  t4907 = t2292*t4720;
  t4908 = t4789 + t4907;
  t5354 = t2292*t2528*t2529;
  t5388 = t3192*t4720;
  t5504 = t5354 + t5388;
  t6169 = Sin(var1[3]);
  t6170 = -1.*t2529*t3793*t3227;
  t6174 = t4409*t4488;
  t6175 = t6170 + t6174;
  t6177 = t6169*t6175;
  t6178 = Cos(var1[3]);
  t6179 = t3741*t2528*t3227;
  t6183 = -1.*t4466*t5777;
  t6185 = t6179 + t6183;
  t6186 = t6178*t6185;
  t6228 = t6177 + t6186;
  t6240 = t6178*t6175;
  t6246 = -1.*t6169*t6185;
  t6256 = t6240 + t6246;
  t6303 = t2529*t4306;
  t6304 = t4432*t4488;
  t6305 = t6303 + t6304;
  t6293 = -1.*t2529*t3793*t4409;
  t6294 = t3495*t4488;
  t6295 = t6293 + t6294;
  t6299 = t2529*t4432;
  t6300 = -1.*t4306*t4488;
  t6301 = t6299 + t6300;
  t6302 = t3741*t4488*t6301;
  t6306 = -1.*t3741*t2529*t6305;
  t6307 = t4180 + t6302 + t6306;
  t6311 = t6295*t6307;
  t6312 = t6305*t6295;
  t6313 = t2529*t3495;
  t6314 = t3793*t4409*t4488;
  t6315 = t6313 + t6314;
  t6318 = t6301*t6315;
  t6323 = t4456 + t6312 + t6318;
  t6324 = t3741*t2529*t6323;
  t6330 = t6311 + t6324;
  t4557 = t3793*t4466;
  t4594 = -1.*t3741*t2528*t4488;
  t4626 = t4557 + t4594;
  t6760 = t4170*t4466;
  t6828 = t2528*t6301;
  t6832 = t6760 + t6828;
  t6421 = t3741*t4409*t4466;
  t6700 = t2528*t6315;
  t6728 = t6421 + t6700;
  t6959 = t2528*t4170;
  t6994 = -1.*t4466*t6301;
  t6998 = t6959 + t6994;
  t6856 = -1.*t4626*t6832;
  t6863 = t2528*t3793;
  t6906 = t3741*t4466*t4488;
  t6937 = t6863 + t6906;
  t7035 = -1.*t6937*t6998;
  t7045 = t6306 + t6856 + t7035;
  t7072 = t6728*t7045;
  t7075 = t6832*t6728;
  t7076 = t3741*t2528*t4409;
  t7141 = -1.*t4466*t6315;
  t7152 = t7076 + t7141;
  t7305 = t6998*t7152;
  t7321 = t6312 + t7075 + t7305;
  t7322 = t4626*t7321;
  t7324 = t7072 + t7322;
  t7370 = t2529*t3793*t3227;
  t7376 = -1.*t4409*t4488;
  t7391 = t7370 + t7376;
  t7497 = -1.*t2529*t4306;
  t7498 = -1.*t4432*t4488;
  t7499 = t7497 + t7498;
  t7501 = t3741*t4488*t6305;
  t7670 = t2529*t3793*t4409;
  t7685 = -1.*t3495*t4488;
  t7688 = t7670 + t7685;
  t7705 = t6301*t6295;
  t7760 = t6305*t6315;
  t8533 = -0.068*t3793;
  t8544 = -1.*t3741*t4107;
  t8552 = t8533 + t8544;
  t8558 = 0.068*t3741;
  t8559 = t8558 + t4298;
  t8648 = -1.*t2528*t3793*t3227;
  t8649 = -1.*t3741*t3227*t4466*t4488;
  t8650 = t8648 + t8649;
  t8554 = -1.*t3741*t4170;
  t8560 = -1.*t3793*t8559;
  t8601 = -1.*t3793*t4170*t4409;
  t8603 = t3741*t8559*t4409;
  t8675 = Power(t2529,2);
  t8676 = -1.*t3741*t8675*t8552;
  t8688 = t2529*t3793*t6305;
  t8693 = -1.*t3741*t2529*t4409*t6305;
  t8698 = t2529*t8552*t6295;
  t8722 = -1.*t3793*t4409*t4466;
  t8723 = t3741*t2528*t4409*t4488;
  t8726 = t8722 + t8723;
  t8729 = t8559*t4466;
  t8730 = -1.*t2528*t8552*t4488;
  t8731 = t8729 + t8730;
  t8736 = t2528*t8559;
  t8740 = t8552*t4466*t4488;
  t8741 = t8736 + t8740;
  t8786 = -1.*t3741*t3227*t4466;
  t8787 = -1.*t2528*t5777;
  t8792 = t8786 + t8787;
  t8797 = -1.*t4170*t4466;
  t8798 = -1.*t2528*t6301;
  t8799 = t8797 + t8798;
  t8860 = -1.*t2292*t2653;
  t8861 = -1.*t3192*t2727;
  t8862 = t8860 + t8861;
  t8897 = 0.325*t2292;
  t8899 = t8897 + t4429 + t4430;
  t8882 = -0.325*t3192;
  t8886 = -1.*t2292*t2749;
  t8889 = -1.*t3192*t3032;
  t8890 = t8882 + t8886 + t8889;
  t8878 = t3741*t4170*t3495;
  t8893 = Power(t3741,2);
  t8900 = t8893*t8899*t4409;
  t8950 = -1.*t2529*t3793*t8899;
  t8951 = t8890*t4488;
  t8952 = t8950 + t8951;
  t8930 = -1.*t2529*t3793*t3495;
  t8931 = t8862*t4488;
  t8932 = t8930 + t8931;
  t8941 = t2529*t8890;
  t8942 = t3793*t8899*t4488;
  t8948 = t8941 + t8942;
  t8957 = t2529*t8862;
  t8958 = t3793*t3495*t4488;
  t8962 = t8957 + t8958;
  t8953 = -1.*t3741*t2529*t8952;
  t8956 = t8952*t6295;
  t8967 = t6305*t8932;
  t8983 = t3741*t3495*t4466;
  t8998 = t2528*t8962;
  t8999 = t8983 + t8998;
  t9004 = t3741*t8899*t4466;
  t9005 = t2528*t8948;
  t9006 = t9004 + t9005;
  t9008 = t3741*t2528*t8899;
  t9009 = -1.*t4466*t8948;
  t9010 = t9008 + t9009;
  t9040 = -0.28*t2653;
  t9041 = 0.0641*t2727;
  t9042 = t9040 + t9041;
  t8901 = Power(t3793,2);
  t9060 = t3192*t2749;
  t9061 = t2292*t9042;
  t9062 = t9060 + t9061;
  t9070 = t2529*t3227;
  t9071 = t3793*t8862*t4488;
  t9072 = t9070 + t9071;
  t9079 = -1.*t2529*t3793*t8862;
  t9080 = t3227*t4488;
  t9081 = t9079 + t9080;
  t9086 = t3741*t2528*t8862;
  t9087 = -1.*t4466*t9072;
  t9088 = t9086 + t9087;
  t9056 = -1.*t3192*t9042;
  t9057 = t3872 + t9056;
  t9054 = t3741*t4170*t3227;
  t9063 = t8893*t9062*t4409;
  t9108 = -1.*t2529*t3793*t9062;
  t9112 = t9057*t4488;
  t9135 = t9108 + t9112;
  t9100 = t2529*t9057;
  t9102 = t3793*t9062*t4488;
  t9103 = t9100 + t9102;
  t9136 = -1.*t3741*t2529*t9135;
  t9154 = t9135*t6295;
  t9156 = t6305*t6175;
  t9183 = t3741*t9062*t4466;
  t9187 = t2528*t9103;
  t9188 = t9183 + t9187;
  t9192 = t3741*t2528*t9062;
  t9193 = -1.*t4466*t9103;
  t9197 = t9192 + t9193;
  t9055 = -1.*t3793*t4306*t3227;
  t9059 = t4432*t4409;
  t9245 = -1.*t4432*t3495;
  t9246 = -1.*t3741*t4170*t4409;
  t9247 = t3793*t4306*t4409;
  t9252 = t9245 + t9246 + t9247;
  t9254 = t3741*t3227*t9252;
  t9269 = t9054 + t9055 + t9059;
  t9272 = t3741*t4409*t9269;
  t9274 = t9254 + t9272;
  t9286 = t4107*t3227;
  t9297 = t9286 + t9059;
  t9303 = t3495*t9297;
  t9308 = -1.*t4107*t4409;
  t9309 = t9245 + t9308;
  t9319 = t4409*t9309;
  t9334 = t9303 + t9319;
  t9408 = t3741*t2529*t6169;
  t9409 = t6178*t6937;
  t9412 = t9408 + t9409;
  t9416 = t3741*t6178*t2529;
  t9428 = -1.*t6169*t6937;
  t9429 = t9416 + t9428;
  t9398 = t6178*t2529;
  t9404 = -1.*t6169*t4466*t4488;
  t9406 = t9398 + t9404;
  t9146 = t6301*t5777;
  t9455 = t9054 + t9146 + t9156;
  t9456 = t6295*t9455;
  t9458 = -1.*t6305*t6295;
  t9459 = -1.*t6301*t6315;
  t9460 = t9246 + t9458 + t9459;
  t9462 = t6175*t9460;
  t9463 = t9456 + t9462;
  t9349 = t2529*t6169*t4466;
  t9364 = t6178*t4488;
  t9371 = t9349 + t9364;
  t9445 = -1.*t3741*t2528*t6169;
  t9446 = -1.*t3793*t9406;
  t9448 = t9445 + t9446;
  t9214 = t6832*t5930;
  t9218 = t6998*t6185;
  t9563 = t9156 + t9214 + t9218;
  t9567 = t6728*t9563;
  t9586 = -1.*t6832*t6728;
  t9587 = -1.*t6998*t7152;
  t9588 = t9458 + t9586 + t9587;
  t9597 = t5930*t9588;
  t9598 = t9567 + t9597;
  t9492 = -1.*t3192*t9371;
  t9497 = t2292*t9448;
  t9498 = t9492 + t9497;
  t9505 = t2292*t9371;
  t9516 = t3192*t9448;
  t9521 = t9505 + t9516;
  t8744 = t3741*t2528;
  t8745 = -1.*t3793*t4466*t4488;
  t8746 = t8744 + t8745;
  t9617 = -1.*t3793*t4170*t3227;
  t9618 = t3741*t8559*t3227;
  t9633 = t3793*t4170*t4409;
  t9634 = -1.*t3741*t8559*t4409;
  t9696 = -1.*t3741*t2529*t3227*t6305;
  t9703 = t2529*t8552*t6175;
  t8639 = -1.*t3793*t3227*t4466;
  t8640 = t3741*t2528*t3227*t4488;
  t8641 = t8639 + t8640;
  t9753 = t3741*t2529*t4409*t6305;
  t9756 = -1.*t2529*t8552*t6295;
  t8755 = -1.*t2528*t3793*t4409;
  t8756 = -1.*t3741*t4409*t4466*t4488;
  t8760 = t8755 + t8756;
  t10178 = t6305*t5777;
  t10194 = t6301*t6175;
  t10228 = -1.*t6301*t6295;
  t10237 = -1.*t6305*t6315;
  t8809 = -1.*t3793*t4466;
  t8810 = t3741*t2528*t4488;
  t8819 = t8809 + t8810;
  t8824 = -1.*t3741*t4409*t4466;
  t8825 = -1.*t2528*t6315;
  t8827 = t8824 + t8825;
  t11020 = -1.*t8890*t3495;
  t11033 = -1.*t4432*t8862;
  t11074 = t8890*t4409;
  t11046 = t8893*t8899*t3227;
  t11012 = -1.*t3741*t4170*t3495;
  t11036 = -1.*t8893*t8899*t4409;
  t11177 = t8952*t6175;
  t11198 = -1.*t8952*t6295;
  t11205 = -1.*t6305*t8932;
  t9019 = t3741*t2528*t3495;
  t9020 = -1.*t4466*t8962;
  t9022 = t9019 + t9020;
  t11339 = -1.*t9057*t3495;
  t11454 = -1.*t4432*t4409;
  t11545 = t4432*t3227;
  t11590 = t9057*t4409;
  t11558 = t8893*t9062*t3227;
  t11572 = t3741*t4170*t8862;
  t11264 = -1.*t3741*t4170*t3227;
  t11461 = -1.*t8893*t9062*t4409;
  t11760 = t6305*t9081;
  t11767 = t9135*t6175;
  t9069 = t3741*t8862*t4466;
  t9073 = t2528*t9072;
  t9076 = t9069 + t9073;
  t11781 = -1.*t9135*t6295;
  t11782 = -1.*t6305*t6175;
  t11845 = 0.325*t2653;
  t11853 = t2653*t3032;
  t11854 = -1.*t2749*t2727;
  t11855 = t11845 + t11853 + t11854;
  t11265 = t3793*t4306*t3227;
  t11861 = t3793*t4170;
  t11865 = t3741*t4306;
  t11870 = t11861 + t11865;
  t11871 = t3741*t11870*t3227;
  t11873 = t11264 + t11265 + t11454;
  t11875 = t3793*t11873;
  t11876 = t11871 + t11875;
  t8913 = var2[0]*t6728;
  t11916 = t2529*t6169;
  t11928 = t6178*t4466*t4488;
  t11930 = t11916 + t11928;
  t11779 = -1.*t6301*t5777;
  t11968 = -1.*t3741*t4488*t6301;
  t11981 = t3741*t2529*t6305;
  t11982 = t11861 + t11968 + t11981;
  t11984 = t6175*t11982;
  t11987 = t11264 + t11779 + t11782;
  t11988 = t3741*t2529*t11987;
  t11989 = t11984 + t11988;
  t8914 = t6169*t6295;
  t8915 = t6178*t7152;
  t8917 = t8914 + t8915;
  t8919 = var2[2]*t8917;
  t8920 = t6178*t6295;
  t8921 = -1.*t6169*t7152;
  t8925 = t8920 + t8921;
  t8926 = var2[1]*t8925;
  t11892 = -1.*t6178*t2529*t4466;
  t11893 = t6169*t4488;
  t11909 = t11892 + t11893;
  t11958 = t3741*t6178*t2528;
  t11959 = -1.*t3793*t11930;
  t11960 = t11958 + t11959;
  t11802 = -1.*t6832*t5930;
  t11803 = -1.*t6998*t6185;
  t12043 = t4626*t6832;
  t12044 = t6937*t6998;
  t12046 = t11981 + t12043 + t12044;
  t12047 = t5930*t12046;
  t12048 = t11782 + t11802 + t11803;
  t12051 = t4626*t12048;
  t12053 = t12047 + t12051;
  t11998 = -1.*t3192*t11909;
  t11999 = t2292*t11960;
  t12000 = t11998 + t11999;
  t12004 = t2292*t11909;
  t12037 = t3192*t11960;
  t12039 = t12004 + t12037;
  t12166 = -1.*t3741*t4488*t6305;
  t12185 = -1.*t6305*t5777;
  t12189 = -1.*t6301*t6175;
  t12273 = t3741*t4170;
  t12275 = t3793*t8559;
  t8680 = Power(t4488,2);
  t12285 = t3793*t4170*t3227;
  t12286 = -1.*t3741*t8559*t3227;
  t12344 = t3741*t8675*t8552;
  t12354 = -1.*t2529*t3793*t6305;
  t12361 = t3741*t2529*t3227*t6305;
  t12363 = -1.*t2529*t8552*t6175;
  t5956 = var2[0]*t5930;
  t6233 = var2[2]*t6228;
  t6270 = var2[1]*t6256;
  t12514 = -1.*t8893*t9062*t3227;
  t12533 = -1.*t3741*t4170*t8862;
  t12551 = t3741*t2529*t9135;
  t12558 = -1.*t6305*t9081;
  t12561 = -1.*t9135*t6175;
  t12603 = -1.*t8893*t8899*t3227;
  t12657 = t3741*t2529*t8952;
  t12667 = -1.*t8952*t6175;
  p_output1[0]=-0.325*t2502*t2528*t2529 - 0.1575*t3793*t4466 - 0.1575*t2528*t4242*t4488 + 0.2255*t4626 + 0.325*t3192*t4720 - 0.575*t2727*t4908 - 0.575*t2901*t5504 - 0.295*(-1.*t2727*t4908 + t2653*t5504) - 0.0641*(t2653*t4908 + t2727*t5504) + t5956 + t6233 + t6270 + var1[0] + t7324*var2[3] + ((-1.*t6169*t6175 - 1.*t6178*t6185)*var2[1] + t6256*var2[2])*var2[3] + t6330*var2[4] + (t6185*var2[0] - 1.*t6169*t8792*var2[1] + t6178*t8792*var2[2] + (t7045*t7152 + t6937*t7321 + t6728*(-1.*t6832*t6937 - 1.*t4626*t6998 - 1.*t6937*t8799 - 1.*t6998*t8819) + t4626*(t6728*t6998 + t6832*t7152 + t7152*t8799 + t6998*t8827))*var2[3])*var2[4] + t4461*var2[5] + (t2528*t7391*var2[0] + (t5777*t6178 + t4466*t6169*t7391)*var2[1] + (t5777*t6169 - 1.*t4466*t6178*t7391)*var2[2] + (-1.*t2528*t2529*t3741*t7321 + t6728*(-1.*t2529*t3741*t6301 + t2528*t2529*t3741*t6832 - 1.*t2529*t3741*t4466*t6998 - 1.*t2528*t4626*t7499 + t4466*t6937*t7499 + t7501) + t2528*t7045*t7688 + t4626*(t2528*t6728*t7499 - 1.*t4466*t7152*t7499 + t2528*t6832*t7688 - 1.*t4466*t6998*t7688 + t7705 + t7760))*var2[3] + (t6307*t6315 - 1.*t3741*t4488*t6323 + t6295*(t3741*t4488*t7499 + t7501) + t2529*t3741*(t6315*t7499 + t6301*t7688 + t7705 + t7760))*var2[4])*var2[5] + t3707*var2[9] + (t8641*var2[0] + (-1.*t2529*t3227*t3741*t6178 - 1.*t6169*t8650)*var2[1] + (-1.*t2529*t3227*t3741*t6169 + t6178*t8650)*var2[2] + (t4720*t7321 + t7045*t8726 + t6728*(-1.*t4720*t6832 + t8676 + t8688 - 1.*t4626*t8731 - 1.*t6937*t8741 - 1.*t6998*t8746) + t4626*(t8693 + t8698 + t6832*t8726 + t6728*t8731 + t7152*t8741 + t6998*t8760))*var2[3] + (-1.*t2529*t3741*t4409*t6307 - 1.*t2529*t3793*t6323 + t6295*(-1.*t3793*t4488*t6301 + t8554 + t8560 + t8676 - 1.*t3741*t8552*t8680 + t8688) + t2529*t3741*(t3741*t4409*t4488*t6301 - 1.*t4488*t6315*t8552 + t8601 + t8603 + t8693 + t8698))*var2[4] + (-1.*t3793*t4360*t4409 + t3741*t4459 + t3741*t4409*(t3793*t4306 - 1.*t3741*t8552 + t8554 + t8560) + t3793*(-1.*t3741*t4306*t4409 - 1.*t3793*t4409*t8552 + t8601 + t8603))*var2[5])*var2[9] + t3043*var2[10] + (t8913 + t8919 + t8926 + (t7045*t8999 + t6728*(t8953 - 1.*t4626*t9006 - 1.*t6937*t9010) + t4626*(t8956 + t8967 + t6832*t8999 + t6728*t9006 + t7152*t9010 + t6998*t9022))*var2[3] + (t6307*t8932 + t6295*(-1.*t3741*t3793*t8899 + t3741*t4488*t8948 + t8953) + t2529*t3741*(t8878 + t8900 + t6315*t8948 + t8956 + t6301*t8962 + t8967))*var2[4] + (t3495*t3741*t4360 + t3793*(-1.*t3495*t3793*t4306 + t4432*t8862 + t8878 + t3495*t8890 + t8900 + t4409*t8899*t8901))*var2[5] + (-0.1575*t4409 - 0.2255*t8862)*var2[9])*var2[10] - 0.0641*var2[11] + (t9076*var2[0] + (t6178*t9081 - 1.*t6169*t9088)*var2[1] + (t6169*t9081 + t6178*t9088)*var2[2] + (t5930*t7045 + t6728*(t9136 - 1.*t4626*t9188 - 1.*t6937*t9197) + t4626*(t9154 + t9156 + t6728*t9188 + t7152*t9197 + t9214 + t9218))*var2[3] + (t6175*t6307 + t6295*(-1.*t3741*t3793*t9062 + t3741*t4488*t9103 + t9136) + t2529*t3741*(t9054 + t9063 + t6315*t9103 + t9146 + t9154 + t9156))*var2[4] + (t3227*t3741*t4360 + t3793*(t9054 + t9055 + t3495*t9057 + t9059 + t4409*t8901*t9062 + t9063))*var2[5] + (-0.2255*t4409 - 0.1575*t8862)*var2[9] + (-0.325*t2653 - 1.*t2653*t3032 - 1.*t2653*t9042)*var2[10])*var2[11] + t5930*var3[0] + t6256*var3[1] + t6228*var3[2] + t7324*var3[3] + t6330*var3[4] + t4461*var3[5] + t3707*var3[9] + t3043*var3[10] - 0.0641*var3[11] - 1.*var4[0];
  p_output1[1]=0.1575*t2528*t3793*t6169 - 0.325*t2502*t9371 + 0.1575*t4242*t9406 + 0.2255*(-1.*t2528*t3793*t6169 + t3741*t9406) + 0.325*t3192*t9448 - 0.575*t2727*t9498 - 0.575*t2901*t9521 - 0.295*(-1.*t2727*t9498 + t2653*t9521) - 0.0641*(t2653*t9498 + t2727*t9521) + var1[1] + t4626*var2[0] + t9429*var2[1] + t9412*var2[2] + t9598*var2[3] + ((-1.*t2529*t3741*t6169 - 1.*t6178*t6937)*var2[1] + t9429*var2[2])*var2[3] + t9463*var2[4] + (t6937*var2[0] - 1.*t6169*t8819*var2[1] + t6178*t8819*var2[2] + (t6728*(t6185*t6832 + t5930*t6998 + t6998*t8792 + t6185*t8799) + t5930*(-1.*t6728*t6998 - 1.*t6832*t7152 - 1.*t7152*t8799 - 1.*t6998*t8827) + t7152*t9563 + t6185*t9588)*var2[3])*var2[4] + t9274*var2[5] + (-1.*t2528*t2529*t3741*var2[0] + (-1.*t2529*t3741*t4466*t6169 - 1.*t3741*t4488*t6178)*var2[1] + (-1.*t3741*t4488*t6169 + t2529*t3741*t4466*t6178)*var2[2] + (t6728*(t10178 + t10194 + t2528*t6832*t7391 - 1.*t4466*t6998*t7391 + t2528*t5930*t7499 - 1.*t4466*t6185*t7499) + t5930*(t10228 + t10237 - 1.*t2528*t6728*t7499 + t4466*t7152*t7499 - 1.*t2528*t6832*t7688 + t4466*t6998*t7688) + t2528*t7688*t9563 + t2528*t7391*t9588)*var2[3] + (t6295*(t10178 + t10194 + t6301*t7391 + t5777*t7499) + t6175*(t10228 + t10237 - 1.*t6315*t7499 - 1.*t6301*t7688) + t6315*t9455 + t5777*t9460)*var2[4])*var2[5] + t9334*var2[9] + (t4720*var2[0] + (-1.*t2529*t3793*t6178 - 1.*t6169*t8746)*var2[1] + (-1.*t2529*t3793*t6169 + t6178*t8746)*var2[2] + (t8726*t9563 + t8641*t9588 + t6728*(t6832*t8641 + t6998*t8650 + t5930*t8731 + t6185*t8741 + t9696 + t9703) + t5930*(-1.*t6832*t8726 - 1.*t6728*t8731 - 1.*t7152*t8741 - 1.*t6998*t8760 + t9753 + t9756))*var2[3] + (-1.*t2529*t3741*t4409*t9455 - 1.*t2529*t3227*t3741*t9460 + t6295*(t3227*t3741*t4488*t6301 - 1.*t4488*t5777*t8552 + t9617 + t9618 + t9696 + t9703) + t6175*(-1.*t3741*t4409*t4488*t6301 + t4488*t6315*t8552 + t9633 + t9634 + t9753 + t9756))*var2[4] + (-1.*t3227*t3793*t9252 - 1.*t3793*t4409*t9269 + t3741*t4409*(-1.*t3227*t3741*t4306 - 1.*t3227*t3793*t8552 + t9617 + t9618) + t3227*t3741*(t3741*t4306*t4409 + t3793*t4409*t8552 + t9633 + t9634))*var2[5])*var2[9] + ((t6728*(t11177 + t6312 + t7075 + t7305 + t5930*t9006 + t6185*t9010) + t5930*(t11198 + t11205 - 1.*t6832*t8999 - 1.*t6728*t9006 - 1.*t7152*t9010 - 1.*t6998*t9022) + t8999*t9563 + t6728*t9588)*var2[3] + (t6295*(t11046 + t11177 + t4456 + t6312 + t6318 + t5777*t8948) + t6175*(t11012 + t11036 + t11198 + t11205 - 1.*t6315*t8948 - 1.*t6301*t8962) + t8932*t9455 + t6295*t9460)*var2[4] + (t3741*t4409*(t11046 + t11074 + t4447 + t4456 + t4457 + t3227*t8899*t8901) + t3227*t3741*(t11012 + t11020 + t11033 + t11036 + t3495*t3793*t4306 - 1.*t4409*t8899*t8901) + t3741*t4409*t9252 + t3495*t3741*t9269)*var2[5] + (t3495*(t11074 + t4107*t4409 + t4447 + t3227*t8899) + t4409*(t11020 + t11033 - 1.*t3495*t4107 - 1.*t4409*t8899) + t8862*t9297 + t3495*t9309)*var2[9])*var2[10] + ((t6728*(t11760 + t11767 + t6832*t9076 + t6998*t9088 + t5930*t9188 + t6185*t9197) + t5930*(t11781 + t11782 + t11802 + t11803 - 1.*t6728*t9188 - 1.*t7152*t9197) + t5930*t9563 + t9076*t9588)*var2[3] + (t6295*(t11558 + t11572 + t11760 + t11767 + t6301*t9072 + t5777*t9103) + t6175*(t11264 + t11461 + t11779 + t11781 + t11782 - 1.*t6315*t9103) + t6175*t9455 + t9081*t9460)*var2[4] + (t3741*t4409*(t11545 + t11558 + t11572 + t11590 - 1.*t3793*t4306*t8862 + t3227*t8901*t9062) + t3227*t3741*(t11264 + t11265 + t11339 + t11454 + t11461 - 1.*t4409*t8901*t9062) + t3741*t8862*t9252 + t3227*t3741*t9269)*var2[5] + (t3495*(t11545 + t11590 + t4107*t8862 + t3227*t9062) + t4409*(t11339 + t11454 - 1.*t3227*t4107 - 1.*t4409*t9062) + t4409*t9297 + t3227*t9309)*var2[9])*var2[11] + t4626*var3[0] + t9429*var3[1] + t9412*var3[2] + t9598*var3[3] + t9463*var3[4] + t9274*var3[5] + t9334*var3[9] - 1.*var4[1];
  p_output1[2]=-0.325*t11909*t2502 - 0.575*t12000*t2727 - 0.295*(t12039*t2653 - 1.*t12000*t2727) - 0.0641*(t12000*t2653 + t12039*t2727) - 0.575*t12039*t2901 + 0.325*t11960*t3192 + 0.1575*t11930*t4242 - 0.1575*t2528*t3793*t6178 + 0.2255*(t11930*t3741 + t2528*t3793*t6178) + t8913 + t8919 + t8926 + var1[2] + t12053*var2[3] + ((-1.*t6169*t6295 - 1.*t6178*t7152)*var2[1] + t8925*var2[2])*var2[3] + t11989*var2[4] + (t7152*var2[0] - 1.*t6169*t8827*var2[1] + t6178*t8827*var2[2] + (t12046*t6185 + t12048*t6937 + t4626*(-1.*t6185*t6832 - 1.*t5930*t6998 - 1.*t6998*t8792 - 1.*t6185*t8799) + t5930*(t6832*t6937 + t4626*t6998 + t6937*t8799 + t6998*t8819))*var2[3])*var2[4] + t11876*var2[5] + (t2528*t7688*var2[0] + (t6178*t6315 + t4466*t6169*t7688)*var2[1] + (t6169*t6315 - 1.*t4466*t6178*t7688)*var2[2] + (-1.*t12048*t2528*t2529*t3741 + t12046*t2528*t7391 + t4626*(t12185 + t12189 - 1.*t2528*t6832*t7391 + t4466*t6998*t7391 - 1.*t2528*t5930*t7499 + t4466*t6185*t7499) + t5930*(t12166 + t2529*t3741*t6301 - 1.*t2528*t2529*t3741*t6832 + t2529*t3741*t4466*t6998 + t2528*t4626*t7499 - 1.*t4466*t6937*t7499))*var2[3] + (-1.*t11987*t3741*t4488 + t11982*t5777 + t6175*(t12166 - 1.*t3741*t4488*t7499) + t2529*t3741*(t12185 + t12189 - 1.*t6301*t7391 - 1.*t5777*t7499))*var2[4])*var2[5] + 0.068*t4409*var2[9] + (t8726*var2[0] + (-1.*t2529*t3741*t4409*t6178 - 1.*t6169*t8760)*var2[1] + (-1.*t2529*t3741*t4409*t6169 + t6178*t8760)*var2[2] + (t12048*t4720 + t12046*t8641 + t4626*(t12361 + t12363 - 1.*t6832*t8641 - 1.*t6998*t8650 - 1.*t5930*t8731 - 1.*t6185*t8741) + t5930*(t12344 + t12354 + t4720*t6832 + t4626*t8731 + t6937*t8741 + t6998*t8746))*var2[3] + (-1.*t11982*t2529*t3227*t3741 - 1.*t11987*t2529*t3793 + t2529*t3741*(t12285 + t12286 + t12361 + t12363 - 1.*t3227*t3741*t4488*t6301 + t4488*t5777*t8552) + t6175*(t12273 + t12275 + t12344 + t12354 + t3793*t4488*t6301 + t3741*t8552*t8680))*var2[4] + (t11873*t3741 - 1.*t11870*t3227*t3793 + t3227*t3741*(t12273 + t12275 - 1.*t3793*t4306 + t3741*t8552) + t3793*(t12285 + t12286 + t3227*t3741*t4306 + t3227*t3793*t8552))*var2[5])*var2[9] + t11855*var2[10] + (t8999*var2[0] + (t6178*t8932 - 1.*t6169*t9022)*var2[1] + (t6169*t8932 + t6178*t9022)*var2[2] + (t12046*t6728 + t5930*(t12657 + t4626*t9006 + t6937*t9010) + t4626*(t12667 - 1.*t5930*t9006 - 1.*t6185*t9010 + t9458 + t9586 + t9587))*var2[3] + (t11982*t6295 + t6175*(t12657 + t3741*t3793*t8899 - 1.*t3741*t4488*t8948) + t2529*t3741*(t12603 + t12667 - 1.*t5777*t8948 + t9246 + t9458 + t9459))*var2[4] + (t11870*t3741*t4409 + t3793*(t12603 - 1.*t4409*t8890 - 1.*t3227*t8899*t8901 + t9245 + t9246 + t9247))*var2[5] + 0.068*t3495*var2[9])*var2[10] - 0.28*var2[11] + (t5956 + t6233 + t6270 + (t12046*t9076 + t4626*(t12558 + t12561 - 1.*t6832*t9076 - 1.*t6998*t9088 - 1.*t5930*t9188 - 1.*t6185*t9197) + t5930*(t12551 + t4626*t9188 + t6937*t9197))*var2[3] + (t11982*t9081 + t6175*(t12551 + t3741*t3793*t9062 - 1.*t3741*t4488*t9103) + t2529*t3741*(t12514 + t12533 + t12558 + t12561 - 1.*t6301*t9072 - 1.*t5777*t9103))*var2[4] + (t11870*t3741*t8862 + t3793*(t12514 + t12533 - 1.*t3227*t4432 + t3793*t4306*t8862 - 1.*t4409*t9057 - 1.*t3227*t8901*t9062))*var2[5] + 0.068*t3227*var2[9] + (t2753 + t3037 - 1.*t2727*t9042)*var2[10])*var2[11] + t6728*var3[0] + t8925*var3[1] + t8917*var3[2] + t12053*var3[3] + t11989*var3[4] + t11876*var3[5] + 0.068*t4409*var3[9] + t11855*var3[10] - 0.28*var3[11] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
