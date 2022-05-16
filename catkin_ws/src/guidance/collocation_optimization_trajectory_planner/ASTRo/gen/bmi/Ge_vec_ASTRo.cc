/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:41 GMT+02:00
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
  double t59;
  double t64;
  double t68;
  double t156;
  double t306;
  double t1314;
  double t678;
  double t995;
  double t1135;
  double t1319;
  double t1309;
  double t1323;
  double t1406;
  double t1888;
  double t2136;
  double t2240;
  double t3594;
  double t3619;
  double t3649;
  double t3716;
  double t3724;
  double t4923;
  double t4957;
  double t5036;
  double t5066;
  double t5174;
  double t81;
  double t406;
  double t1476;
  double t1496;
  double t1541;
  double t2333;
  double t2537;
  double t2704;
  double t2832;
  double t3121;
  double t3123;
  double t3124;
  double t8996;
  double t9056;
  double t9211;
  double t3714;
  double t3742;
  double t3885;
  double t3924;
  double t4117;
  double t4124;
  double t4236;
  double t4286;
  double t4304;
  double t4640;
  double t4738;
  double t4852;
  double t14939;
  double t15371;
  double t5245;
  double t5259;
  double t5268;
  double t5296;
  double t5325;
  double t5436;
  double t5450;
  double t5527;
  double t5669;
  double t5680;
  double t5809;
  double t5822;
  double t15725;
  double t18136;
  double t9109;
  double t2874;
  double t9379;
  double t10080;
  double t10412;
  double t11314;
  double t14268;
  double t14270;
  double t20986;
  double t21474;
  double t21561;
  double t21581;
  double t21756;
  double t15180;
  double t4502;
  double t15466;
  double t15470;
  double t15474;
  double t15553;
  double t15558;
  double t15568;
  double t23098;
  double t24349;
  double t27532;
  double t27537;
  double t28008;
  double t15745;
  double t5674;
  double t19394;
  double t19397;
  double t19399;
  double t19495;
  double t19734;
  double t20385;
  double t38416;
  double t38562;
  double t38680;
  double t38952;
  double t38958;
  double t39603;
  double t39738;
  double t39743;
  double t39756;
  double t39775;
  double t39794;
  double t40132;
  double t40146;
  double t40147;
  double t40161;
  double t40169;
  double t40174;
  double t40180;
  double t40186;
  double t40196;
  double t40200;
  double t40201;
  double t40382;
  double t40473;
  double t40193;
  double t40454;
  double t40465;
  double t40470;
  double t40537;
  double t40585;
  double t40590;
  double t40618;
  double t40669;
  double t40747;
  double t40991;
  double t40992;
  double t41009;
  double t41068;
  double t41070;
  double t41074;
  double t41075;
  double t41079;
  double t41085;
  double t41089;
  double t41098;
  double t41103;
  double t41105;
  double t41106;
  double t41108;
  double t41122;
  double t41133;
  double t41141;
  double t41148;
  double t41157;
  double t41185;
  double t41187;
  double t41188;
  double t41189;
  double t41192;
  double t41193;
  double t41204;
  double t41208;
  double t41081;
  double t41215;
  double t21041;
  double t21308;
  double t41217;
  double t41219;
  double t41224;
  double t41276;
  double t41279;
  double t41280;
  double t41235;
  double t41129;
  double t41237;
  double t23236;
  double t23237;
  double t41239;
  double t41240;
  double t41241;
  double t41307;
  double t41311;
  double t41314;
  double t41249;
  double t41191;
  double t41252;
  double t38511;
  double t38532;
  double t41256;
  double t41258;
  double t41262;
  double t41352;
  double t41362;
  double t41364;
  double t41392;
  double t41394;
  double t41398;
  double t41403;
  double t41406;
  double t41409;
  double t41410;
  double t41414;
  double t41408;
  double t41465;
  double t41466;
  double t40690;
  double t40739;
  double t41468;
  double t41476;
  double t41477;
  double t41633;
  double t41638;
  double t41639;
  double t43042;
  double t43274;
  double t43464;
  double t43540;
  double t43659;
  double t43671;
  double t43469;
  double t43709;
  double t43737;
  double t43754;
  double t44009;
  double t44168;
  double t44759;
  double t44992;
  double t50269;
  double t50272;
  double t50295;
  double t50229;
  double t50249;
  double t50359;
  double t50380;
  double t50978;
  double t51419;
  double t51424;
  double t51494;
  double t51067;
  double t51415;
  double t51551;
  double t51553;
  double t51561;
  double t48786;
  double t45094;
  double t50335;
  double t51042;
  double t51536;
  double t51607;
  double t52354;
  double t52355;
  double t52362;
  double t52376;
  double t52377;
  double t52383;
  double t52427;
  double t52428;
  double t52447;
  double t52431;
  double t52520;
  double t52522;
  double t52523;
  double t52514;
  double t52515;
  double t52516;
  double t52524;
  double t52526;
  double t52529;
  double t52530;
  double t52531;
  double t52535;
  double t52536;
  double t52543;
  double t52539;
  double t52581;
  double t52582;
  double t52583;
  double t52578;
  double t52616;
  double t52618;
  double t52619;
  double t52620;
  double t52685;
  double t52686;
  double t52691;
  double t53787;
  double t53790;
  double t53804;
  double t53880;
  double t53881;
  double t53883;
  double t53885;
  double t53891;
  double t53897;
  double t53903;
  double t53904;
  double t53909;
  double t53910;
  double t53922;
  double t53914;
  double t53950;
  double t53951;
  double t53952;
  double t53948;
  double t53953;
  double t53955;
  double t53960;
  double t53961;
  double t54014;
  double t54015;
  double t54033;
  double t54056;
  double t54063;
  double t54064;
  double t54145;
  double t54153;
  double t54170;
  double t54146;
  double t54147;
  double t54149;
  double t54150;
  double t54151;
  double t54196;
  double t54203;
  double t54192;
  double t54295;
  double t54331;
  double t54332;
  double t54333;
  double t54325;
  double t54343;
  double t54344;
  double t54347;
  double t54348;
  double t54397;
  double t54398;
  double t54435;
  double t54508;
  double t54514;
  double t54515;
  double t54758;
  double t54772;
  double t54553;
  double t54564;
  double t54640;
  double t54661;
  double t54684;
  double t54739;
  double t54808;
  double t54819;
  double t54782;
  double t54871;
  double t56406;
  double t56407;
  double t56408;
  double t56405;
  double t56409;
  double t56410;
  double t56411;
  double t56412;
  double t56416;
  double t56417;
  double t56418;
  double t56428;
  double t56429;
  double t56430;
  t59 = Cos(var1[9]);
  t64 = -1.*t59;
  t68 = 1. + t64;
  t156 = Sin(var1[9]);
  t306 = 0.15121*t156;
  t1314 = Cos(var1[3]);
  t678 = Cos(var1[5]);
  t995 = Sin(var1[3]);
  t1135 = Sin(var1[4]);
  t1319 = Sin(var1[5]);
  t1309 = t678*t995*t1135;
  t1323 = t1314*t1319;
  t1406 = t1309 + t1323;
  t1888 = t1314*t678;
  t2136 = -1.*t995*t1135*t1319;
  t2240 = t1888 + t2136;
  t3594 = Cos(var1[12]);
  t3619 = -1.*t3594;
  t3649 = 1. + t3619;
  t3716 = Sin(var1[12]);
  t3724 = -0.15121*t3716;
  t4923 = Cos(var1[15]);
  t4957 = -1.*t4923;
  t5036 = 1. + t4957;
  t5066 = -0.15121*t5036;
  t5174 = Sin(var1[15]);
  t81 = -0.15121*t68;
  t406 = t81 + t306;
  t1476 = t406*t1406;
  t1496 = 0.15121*t68;
  t1541 = t1496 + t306;
  t2333 = t1541*t2240;
  t2537 = -1.*t156*t1406;
  t2704 = t59*t2240;
  t2832 = t2537 + t2704;
  t3121 = t59*t1406;
  t3123 = t156*t2240;
  t3124 = t3121 + t3123;
  t8996 = Cos(var1[4]);
  t9056 = Sin(var1[10]);
  t9211 = Cos(var1[10]);
  t3714 = 0.15121*t3649;
  t3742 = t3714 + t3724;
  t3885 = t3742*t1406;
  t3924 = -0.15121*t3649;
  t4117 = t3924 + t3724;
  t4124 = t4117*t2240;
  t4236 = -1.*t3716*t1406;
  t4286 = t3594*t2240;
  t4304 = t4236 + t4286;
  t4640 = t3594*t1406;
  t4738 = t3716*t2240;
  t4852 = t4640 + t4738;
  t14939 = Sin(var1[13]);
  t15371 = Cos(var1[13]);
  t5245 = -0.15121*t5174;
  t5259 = t5066 + t5245;
  t5268 = t5259*t1406;
  t5296 = 0.15121*t5174;
  t5325 = t5066 + t5296;
  t5436 = t5325*t2240;
  t5450 = -1.*t5174*t1406;
  t5527 = t4923*t2240;
  t5669 = t5450 + t5527;
  t5680 = t4923*t1406;
  t5809 = t5174*t2240;
  t5822 = t5680 + t5809;
  t15725 = Sin(var1[16]);
  t18136 = Cos(var1[16]);
  t9109 = -0.28121*t8996*t9056*t995;
  t2874 = 0.15121*t2832;
  t9379 = -1.*t9211;
  t10080 = 1. + t9379;
  t10412 = -0.28121*t10080*t3124;
  t11314 = -1.*t8996*t9056*t995;
  t14268 = t9211*t3124;
  t14270 = t11314 + t14268;
  t20986 = Cos(var1[11]);
  t21474 = Sin(var1[11]);
  t21561 = -1.*t9211*t8996*t995;
  t21581 = -1.*t9056*t3124;
  t21756 = t21561 + t21581;
  t15180 = -0.28121*t8996*t14939*t995;
  t4502 = -0.15121*t4304;
  t15466 = -1.*t15371;
  t15470 = 1. + t15466;
  t15474 = 0.28121*t15470*t4852;
  t15553 = t8996*t14939*t995;
  t15558 = t15371*t4852;
  t15568 = t15553 + t15558;
  t23098 = Cos(var1[14]);
  t24349 = Sin(var1[14]);
  t27532 = -1.*t15371*t8996*t995;
  t27537 = t14939*t4852;
  t28008 = t27532 + t27537;
  t15745 = -0.28121*t8996*t15725*t995;
  t5674 = -0.15121*t5669;
  t19394 = -1.*t18136;
  t19397 = 1. + t19394;
  t19399 = -0.28121*t19397*t5822;
  t19495 = -1.*t8996*t15725*t995;
  t19734 = t18136*t5822;
  t20385 = t19495 + t19734;
  t38416 = Cos(var1[17]);
  t38562 = Sin(var1[17]);
  t38680 = -1.*t18136*t8996*t995;
  t38952 = -1.*t15725*t5822;
  t38958 = t38680 + t38952;
  t39603 = Cos(var1[6]);
  t39738 = -1.*t39603;
  t39743 = 1. + t39738;
  t39756 = 0.15121*t39743;
  t39775 = Sin(var1[6]);
  t39794 = -0.15121*t39775;
  t40132 = t39756 + t39794;
  t40146 = t2240*t40132;
  t40147 = 0.15121*t39775;
  t40161 = t39756 + t40147;
  t40169 = t1406*t40161;
  t40174 = t39603*t2240;
  t40180 = -1.*t1406*t39775;
  t40186 = t40174 + t40180;
  t40196 = t39603*t1406;
  t40200 = t2240*t39775;
  t40201 = t40196 + t40200;
  t40382 = Cos(var1[7]);
  t40473 = Sin(var1[7]);
  t40193 = 0.15121*t40186;
  t40454 = -1.*t40382;
  t40465 = 1. + t40454;
  t40470 = 0.28121*t40465*t40201;
  t40537 = -0.28121*t8996*t995*t40473;
  t40585 = t40382*t40201;
  t40590 = t8996*t995*t40473;
  t40618 = t40585 + t40590;
  t40669 = Cos(var1[8]);
  t40747 = -1.*t8996*t40382*t995;
  t40991 = t40201*t40473;
  t40992 = t40747 + t40991;
  t41009 = Sin(var1[8]);
  t41068 = -1.*t1314*t8996*t678*t406;
  t41070 = t1314*t8996*t1541*t1319;
  t41074 = t1314*t8996*t678*t156;
  t41075 = t59*t1314*t8996*t1319;
  t41079 = t41074 + t41075;
  t41085 = -1.*t59*t1314*t8996*t678;
  t41089 = t1314*t8996*t156*t1319;
  t41098 = t41085 + t41089;
  t41103 = -1.*t1314*t8996*t678*t3742;
  t41105 = t1314*t8996*t4117*t1319;
  t41106 = t1314*t8996*t678*t3716;
  t41108 = t3594*t1314*t8996*t1319;
  t41122 = t41106 + t41108;
  t41133 = -1.*t3594*t1314*t8996*t678;
  t41141 = t1314*t8996*t3716*t1319;
  t41148 = t41133 + t41141;
  t41157 = -1.*t1314*t8996*t678*t5259;
  t41185 = t1314*t8996*t5325*t1319;
  t41187 = t1314*t8996*t678*t5174;
  t41188 = t4923*t1314*t8996*t1319;
  t41189 = t41187 + t41188;
  t41192 = -1.*t4923*t1314*t8996*t678;
  t41193 = t1314*t8996*t5174*t1319;
  t41204 = t41192 + t41193;
  t41208 = -0.28121*t1314*t9056*t1135;
  t41081 = 0.15121*t41079;
  t41215 = -0.28121*t10080*t41098;
  t21041 = -1.*t20986;
  t21308 = 1. + t21041;
  t41217 = -1.*t1314*t9056*t1135;
  t41219 = t9211*t41098;
  t41224 = t41217 + t41219;
  t41276 = -1.*t9211*t1314*t1135;
  t41279 = -1.*t9056*t41098;
  t41280 = t41276 + t41279;
  t41235 = -0.28121*t1314*t14939*t1135;
  t41129 = -0.15121*t41122;
  t41237 = 0.28121*t15470*t41148;
  t23236 = -1.*t23098;
  t23237 = 1. + t23236;
  t41239 = t1314*t14939*t1135;
  t41240 = t15371*t41148;
  t41241 = t41239 + t41240;
  t41307 = -1.*t15371*t1314*t1135;
  t41311 = t14939*t41148;
  t41314 = t41307 + t41311;
  t41249 = -0.28121*t1314*t15725*t1135;
  t41191 = -0.15121*t41189;
  t41252 = -0.28121*t19397*t41204;
  t38511 = -1.*t38416;
  t38532 = 1. + t38511;
  t41256 = -1.*t1314*t15725*t1135;
  t41258 = t18136*t41204;
  t41262 = t41256 + t41258;
  t41352 = -1.*t18136*t1314*t1135;
  t41362 = -1.*t15725*t41204;
  t41364 = t41352 + t41362;
  t41392 = t1314*t8996*t1319*t40132;
  t41394 = -1.*t1314*t8996*t678*t40161;
  t41398 = t1314*t8996*t39603*t1319;
  t41403 = t1314*t8996*t678*t39775;
  t41406 = t41398 + t41403;
  t41409 = -1.*t1314*t8996*t678*t39603;
  t41410 = t1314*t8996*t1319*t39775;
  t41414 = t41409 + t41410;
  t41408 = 0.15121*t41406;
  t41465 = 0.28121*t40465*t41414;
  t41466 = -0.28121*t1314*t1135*t40473;
  t40690 = -1.*t40669;
  t40739 = 1. + t40690;
  t41468 = t40382*t41414;
  t41476 = t1314*t1135*t40473;
  t41477 = t41468 + t41476;
  t41633 = -1.*t1314*t40382*t1135;
  t41638 = t41414*t40473;
  t41639 = t41633 + t41638;
  t43042 = t1314*t678*t1135;
  t43274 = -1.*t995*t1319;
  t43464 = t43042 + t43274;
  t43540 = t678*t995;
  t43659 = t1314*t1135*t1319;
  t43671 = t43540 + t43659;
  t43469 = t1541*t43464;
  t43709 = t406*t43671;
  t43737 = t156*t43464;
  t43754 = t59*t43671;
  t44009 = t43737 + t43754;
  t44168 = t59*t43464;
  t44759 = -1.*t156*t43671;
  t44992 = t44168 + t44759;
  t50269 = t3716*t43464;
  t50272 = t3594*t43671;
  t50295 = t50269 + t50272;
  t50229 = t4117*t43464;
  t50249 = t3742*t43671;
  t50359 = t3594*t43464;
  t50380 = -1.*t3716*t43671;
  t50978 = t50359 + t50380;
  t51419 = t5174*t43464;
  t51424 = t4923*t43671;
  t51494 = t51419 + t51424;
  t51067 = t5325*t43464;
  t51415 = t5259*t43671;
  t51551 = t4923*t43464;
  t51553 = -1.*t5174*t43671;
  t51561 = t51551 + t51553;
  t48786 = -0.28121*t10080*t44009;
  t45094 = 0.15121*t44992;
  t50335 = 0.28121*t15470*t50295;
  t51042 = -0.15121*t50978;
  t51536 = -0.28121*t19397*t51494;
  t51607 = -0.15121*t51561;
  t52354 = t43464*t40132;
  t52355 = t43671*t40161;
  t52362 = t39603*t43671;
  t52376 = t43464*t39775;
  t52377 = t52362 + t52376;
  t52383 = t39603*t43464;
  t52427 = -1.*t43671*t39775;
  t52428 = t52383 + t52427;
  t52447 = 0.28121*t40465*t52377;
  t52431 = 0.15121*t52428;
  t52520 = -1.*t1314*t678*t1135;
  t52522 = t995*t1319;
  t52523 = t52520 + t52522;
  t52514 = -0.15121*t39603;
  t52515 = t52514 + t40147;
  t52516 = t43671*t52515;
  t52524 = 0.15121*t39603;
  t52526 = t52524 + t40147;
  t52529 = t52523*t52526;
  t52530 = -1.*t52523*t39775;
  t52531 = t52362 + t52530;
  t52535 = -1.*t39603*t52523;
  t52536 = t52535 + t52427;
  t52543 = 0.28121*t40465*t52531;
  t52539 = 0.15121*t52536;
  t52581 = t39603*t52523;
  t52582 = t43671*t39775;
  t52583 = t52581 + t52582;
  t52578 = 0.28121*t1314*t8996*t40382;
  t52616 = 0.28121*t52583*t40473;
  t52618 = -1.*t1314*t8996*t40382;
  t52619 = -1.*t52583*t40473;
  t52620 = t52618 + t52619;
  t52685 = t40382*t52583;
  t52686 = -1.*t1314*t8996*t40473;
  t52691 = t52685 + t52686;
  t53787 = t1314*t8996*t40382;
  t53790 = t52583*t40473;
  t53804 = t53787 + t53790;
  t53880 = 0.15121*t59;
  t53881 = -0.15121*t156;
  t53883 = t53880 + t53881;
  t53885 = t53883*t52523;
  t53891 = t53880 + t306;
  t53897 = t53891*t43671;
  t53903 = -1.*t156*t52523;
  t53904 = t53903 + t43754;
  t53909 = -1.*t59*t52523;
  t53910 = t53909 + t44759;
  t53922 = -0.28121*t10080*t53904;
  t53914 = 0.15121*t53910;
  t53950 = t59*t52523;
  t53951 = t156*t43671;
  t53952 = t53950 + t53951;
  t53948 = 0.28121*t9211*t1314*t8996;
  t53953 = -0.28121*t9056*t53952;
  t53955 = t9211*t1314*t8996;
  t53960 = -1.*t9056*t53952;
  t53961 = t53955 + t53960;
  t54014 = -1.*t1314*t8996*t9056;
  t54015 = -1.*t9211*t53952;
  t54033 = t54014 + t54015;
  t54056 = t1314*t8996*t9056;
  t54063 = t9211*t53952;
  t54064 = t54056 + t54063;
  t54145 = -0.15121*t3594;
  t54153 = -1.*t3716*t52523;
  t54170 = t54153 + t50272;
  t54146 = 0.15121*t3716;
  t54147 = t54145 + t54146;
  t54149 = t54147*t52523;
  t54150 = t54145 + t3724;
  t54151 = t54150*t43671;
  t54196 = -1.*t3594*t52523;
  t54203 = t54196 + t50380;
  t54192 = 0.28121*t15470*t54170;
  t54295 = -0.15121*t54203;
  t54331 = t3594*t52523;
  t54332 = t3716*t43671;
  t54333 = t54331 + t54332;
  t54325 = 0.28121*t15371*t1314*t8996;
  t54343 = 0.28121*t14939*t54333;
  t54344 = -1.*t15371*t1314*t8996;
  t54347 = -1.*t14939*t54333;
  t54348 = t54344 + t54347;
  t54397 = -1.*t1314*t8996*t14939;
  t54398 = t15371*t54333;
  t54435 = t54397 + t54398;
  t54508 = t15371*t1314*t8996;
  t54514 = t14939*t54333;
  t54515 = t54508 + t54514;
  t54758 = -1.*t5174*t52523;
  t54772 = t54758 + t51424;
  t54553 = -0.15121*t4923;
  t54564 = t54553 + t5245;
  t54640 = t54564*t52523;
  t54661 = 0.15121*t4923;
  t54684 = t54661 + t5245;
  t54739 = t54684*t43671;
  t54808 = -1.*t4923*t52523;
  t54819 = t54808 + t51553;
  t54782 = -0.28121*t19397*t54772;
  t54871 = -0.15121*t54819;
  t56406 = t4923*t52523;
  t56407 = t5174*t43671;
  t56408 = t56406 + t56407;
  t56405 = 0.28121*t18136*t1314*t8996;
  t56409 = -0.28121*t15725*t56408;
  t56410 = t18136*t1314*t8996;
  t56411 = -1.*t15725*t56408;
  t56412 = t56410 + t56411;
  t56416 = -1.*t1314*t8996*t15725;
  t56417 = -1.*t18136*t56408;
  t56418 = t56416 + t56417;
  t56428 = t1314*t8996*t15725;
  t56429 = t18136*t56408;
  t56430 = t56428 + t56429;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1476 + t2333 + t2874 - 0.15121*t3124) - 11.5758*(t40146 + t40169 + t40193 + 0.15121*t40201) - 13.6359*(t40146 + t40169 + 0.18121*t40186 + t40470 + t40537 + 0.28121*t40618) - 2.7468000000000004*(t40146 + t40169 + t40193 + t40470 + t40537 + 0.50321*t40618*t40739 - 0.50321*t40992*t41009 + 0.50321*(t40618*t40669 + t40992*t41009)) - 13.6359*(t15180 + t15474 + 0.28121*t15568 + t3885 + t4124 - 0.18121*t4304) - 2.7468000000000004*(t15180 + t15474 + 0.50321*t15568*t23237 - 0.50321*t24349*t28008 + 0.50321*(t15568*t23098 + t24349*t28008) + t3885 + t4124 + t4502) - 11.5758*(t3885 + t4124 + t4502 + 0.15121*t4852) - 13.6359*(t15745 + t19399 - 0.28121*t20385 + t5268 + t5436 - 0.18121*t5669) - 2.7468000000000004*(t15745 + t19399 - 0.50321*t20385*t38532 - 0.50321*t38562*t38958 - 0.50321*(t20385*t38416 - 1.*t38562*t38958) + t5268 + t5436 + t5674) - 11.5758*(t5268 + t5436 + t5674 - 0.15121*t5822) - 13.6359*(t10412 - 0.28121*t14270 + t1476 + t2333 + 0.18121*t2832 + t9109) - 2.7468000000000004*(t10412 + t1476 - 0.50321*t14270*t21308 - 0.50321*t21474*t21756 - 0.50321*(t14270*t20986 - 1.*t21474*t21756) + t2333 + t2874 + t9109);
  p_output1[4]=-11.5758*(t41068 + t41070 + t41081 - 0.15121*t41098) - 11.5758*(t41103 + t41105 + t41129 + 0.15121*t41148) - 11.5758*(t41157 + t41185 + t41191 - 0.15121*t41204) - 13.6359*(t41068 + t41070 + 0.18121*t41079 + t41208 + t41215 - 0.28121*t41224) - 13.6359*(t41103 + t41105 - 0.18121*t41122 + t41235 + t41237 + 0.28121*t41241) - 13.6359*(t41157 + t41185 - 0.18121*t41189 + t41249 + t41252 - 0.28121*t41262) - 2.7468000000000004*(t41068 + t41070 + t41081 + t41208 + t41215 - 0.50321*t21308*t41224 - 0.50321*t21474*t41280 - 0.50321*(t20986*t41224 - 1.*t21474*t41280)) - 2.7468000000000004*(t41103 + t41105 + t41129 + t41235 + t41237 + 0.50321*t23237*t41241 - 0.50321*t24349*t41314 + 0.50321*(t23098*t41241 + t24349*t41314)) - 2.7468000000000004*(t41157 + t41185 + t41191 + t41249 + t41252 - 0.50321*t38532*t41262 - 0.50321*t38562*t41364 - 0.50321*(t38416*t41262 - 1.*t38562*t41364)) - 11.5758*(t41392 + t41394 + t41408 + 0.15121*t41414) - 13.6359*(t41392 + t41394 + 0.18121*t41406 + t41465 + t41466 + 0.28121*t41477) - 2.7468000000000004*(t41392 + t41394 + t41408 + t41465 + t41466 + 0.50321*t40739*t41477 - 0.50321*t41009*t41639 + 0.50321*(t40669*t41477 + t41009*t41639));
  p_output1[5]=-11.5758*(t43469 + t43709 - 0.15121*t44009 + t45094) - 13.6359*(t50229 + t50249 + 0.28121*t15371*t50295 + t50335 - 0.18121*t50978) - 11.5758*(t50229 + t50249 + 0.15121*t50295 + t51042) - 2.7468000000000004*(t50229 + t50249 + 0.50321*t15371*t23237*t50295 - 0.50321*t14939*t24349*t50295 + 0.50321*(t15371*t23098*t50295 + t14939*t24349*t50295) + t50335 + t51042) - 13.6359*(t51067 + t51415 - 0.28121*t18136*t51494 + t51536 - 0.18121*t51561) - 11.5758*(t51067 + t51415 - 0.15121*t51494 + t51607) - 2.7468000000000004*(t51067 + t51415 - 0.50321*t18136*t38532*t51494 + 0.50321*t15725*t38562*t51494 - 0.50321*(t18136*t38416*t51494 + t15725*t38562*t51494) + t51536 + t51607) - 11.5758*(t52354 + t52355 + 0.15121*t52377 + t52431) - 13.6359*(t52354 + t52355 + 0.28121*t40382*t52377 + 0.18121*t52428 + t52447) - 2.7468000000000004*(t52354 + t52355 + 0.50321*t40382*t40739*t52377 - 0.50321*t40473*t41009*t52377 + 0.50321*(t40382*t40669*t52377 + t40473*t41009*t52377) + t52431 + t52447) - 13.6359*(t43469 + t43709 + 0.18121*t44992 + t48786 - 0.28121*t44009*t9211) - 2.7468000000000004*(t43469 + t43709 + t45094 + t48786 + 0.50321*t21474*t44009*t9056 - 0.50321*t21308*t44009*t9211 - 0.50321*(t21474*t44009*t9056 + t20986*t44009*t9211));
  p_output1[6]=-11.5758*(t52516 + t52529 + 0.15121*t52531 + t52539) - 13.6359*(t52516 + t52529 + 0.28121*t40382*t52531 + 0.18121*t52536 + t52543) - 2.7468000000000004*(t52516 + t52529 + 0.50321*t40382*t40739*t52531 - 0.50321*t40473*t41009*t52531 + 0.50321*(t40382*t40669*t52531 + t40473*t41009*t52531) + t52539 + t52543);
  p_output1[7]=-13.6359*(t52578 + t52616 + 0.28121*t52620) - 2.7468000000000004*(t52578 + t52616 + 0.50321*t40739*t52620 - 0.50321*t41009*t52691 + 0.50321*(t40669*t52620 + t41009*t52691));
  p_output1[8]=-2.7468000000000004*(0.50321*t41009*t52691 - 0.50321*t40669*t53804 + 0.50321*(-1.*t41009*t52691 + t40669*t53804));
  p_output1[9]=-11.5758*(t53885 + t53897 - 0.15121*t53904 + t53914) - 13.6359*(t53885 + t53897 + 0.18121*t53910 + t53922 - 0.28121*t53904*t9211) - 2.7468000000000004*(t53885 + t53897 + t53914 + t53922 + 0.50321*t21474*t53904*t9056 - 0.50321*t21308*t53904*t9211 - 0.50321*(t21474*t53904*t9056 + t20986*t53904*t9211));
  p_output1[10]=-13.6359*(t53948 + t53953 - 0.28121*t53961) - 2.7468000000000004*(t53948 + t53953 - 0.50321*t21308*t53961 - 0.50321*t21474*t54033 - 0.50321*(t20986*t53961 - 1.*t21474*t54033));
  p_output1[11]=-2.7468000000000004*(-0.50321*t20986*t53961 - 0.50321*t21474*t54064 - 0.50321*(-1.*t20986*t53961 - 1.*t21474*t54064));
  p_output1[12]=-13.6359*(t54149 + t54151 + 0.28121*t15371*t54170 + t54192 - 0.18121*t54203) - 11.5758*(t54149 + t54151 + 0.15121*t54170 + t54295) - 2.7468000000000004*(t54149 + t54151 + 0.50321*t15371*t23237*t54170 - 0.50321*t14939*t24349*t54170 + 0.50321*(t15371*t23098*t54170 + t14939*t24349*t54170) + t54192 + t54295);
  p_output1[13]=-13.6359*(t54325 + t54343 + 0.28121*t54348) - 2.7468000000000004*(t54325 + t54343 + 0.50321*t23237*t54348 - 0.50321*t24349*t54435 + 0.50321*(t23098*t54348 + t24349*t54435));
  p_output1[14]=-2.7468000000000004*(0.50321*t24349*t54435 - 0.50321*t23098*t54515 + 0.50321*(-1.*t24349*t54435 + t23098*t54515));
  p_output1[15]=-13.6359*(t54640 + t54739 - 0.28121*t18136*t54772 + t54782 - 0.18121*t54819) - 11.5758*(t54640 + t54739 - 0.15121*t54772 + t54871) - 2.7468000000000004*(t54640 + t54739 - 0.50321*t18136*t38532*t54772 + 0.50321*t15725*t38562*t54772 - 0.50321*(t18136*t38416*t54772 + t15725*t38562*t54772) + t54782 + t54871);
  p_output1[16]=-13.6359*(t56405 + t56409 - 0.28121*t56412) - 2.7468000000000004*(t56405 + t56409 - 0.50321*t38532*t56412 - 0.50321*t38562*t56418 - 0.50321*(t38416*t56412 - 1.*t38562*t56418));
  p_output1[17]=-2.7468000000000004*(-0.50321*t38416*t56412 - 0.50321*t38562*t56430 - 0.50321*(-1.*t38416*t56412 - 1.*t38562*t56430));
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

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
