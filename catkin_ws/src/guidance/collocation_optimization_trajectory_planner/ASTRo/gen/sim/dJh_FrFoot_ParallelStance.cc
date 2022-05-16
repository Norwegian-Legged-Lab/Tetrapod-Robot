/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:32 GMT+02:00
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
  double t40623;
  double t40664;
  double t40669;
  double t40675;
  double t40690;
  double t40692;
  double t40702;
  double t40722;
  double t27532;
  double t40593;
  double t40739;
  double t40744;
  double t40720;
  double t40740;
  double t40741;
  double t1951;
  double t40746;
  double t40747;
  double t40748;
  double t40749;
  double t40971;
  double t40990;
  double t40991;
  double t40992;
  double t40994;
  double t40995;
  double t41009;
  double t41032;
  double t41033;
  double t41034;
  double t41037;
  double t41039;
  double t41040;
  double t41051;
  double t41052;
  double t41053;
  double t41054;
  double t41055;
  double t41058;
  double t41061;
  double t41063;
  double t41064;
  double t41065;
  double t41066;
  double t41067;
  double t41078;
  double t41079;
  double t41081;
  double t41089;
  double t41090;
  double t41091;
  double t41092;
  double t41093;
  double t41099;
  double t41100;
  double t41102;
  double t41103;
  double t41104;
  double t41105;
  double t41106;
  double t41108;
  double t41088;
  double t41094;
  double t41095;
  double t41096;
  double t41101;
  double t41109;
  double t41110;
  double t41111;
  double t41112;
  double t41113;
  double t41114;
  double t41116;
  double t41117;
  double t41119;
  double t41120;
  double t41125;
  double t41126;
  double t41127;
  double t41098;
  double t41121;
  double t41122;
  double t41137;
  double t41138;
  double t41139;
  double t41085;
  double t41086;
  double t41087;
  double t41131;
  double t41132;
  double t41133;
  double t41146;
  double t41147;
  double t41148;
  double t41195;
  double t41196;
  double t41200;
  double t41270;
  double t41271;
  double t41272;
  double t41134;
  double t41288;
  double t41289;
  double t41290;
  double t41154;
  double t41306;
  double t41307;
  double t41309;
  double t41135;
  double t41140;
  double t41141;
  double t41294;
  double t41295;
  double t41296;
  double t41297;
  double t41298;
  double t41305;
  double t41311;
  double t41155;
  double t41156;
  double t41157;
  double t41210;
  double t41228;
  double t41354;
  double t41356;
  double t41364;
  double t41367;
  double t41211;
  double t41213;
  double t41214;
  double t41229;
  double t41231;
  double t41232;
  double t41246;
  double t41258;
  double t41247;
  double t41248;
  double t41249;
  double t41323;
  double t41325;
  double t41408;
  double t41409;
  double t41414;
  double t41416;
  double t41259;
  double t41262;
  double t41263;
  double t41273;
  double t41274;
  double t41276;
  double t41278;
  double t41279;
  double t41280;
  double t41281;
  double t41282;
  double t41283;
  double t41285;
  double t41286;
  double t41287;
  double t41501;
  double t41502;
  double t41503;
  double t41499;
  double t41300;
  double t41508;
  double t41509;
  double t41510;
  double t41513;
  double t41514;
  double t41515;
  double t41310;
  double t41314;
  double t41316;
  double t41317;
  double t41318;
  double t41321;
  double t41516;
  double t41327;
  double t41328;
  double t41521;
  double t41333;
  double t41334;
  double t41338;
  double t41342;
  double t41343;
  double t41344;
  double t41345;
  double t41346;
  double t41347;
  double t41348;
  double t41350;
  double t41352;
  double t41355;
  double t41359;
  double t41360;
  double t41361;
  double t41362;
  double t41365;
  double t41370;
  double t41371;
  double t41372;
  double t41373;
  double t41609;
  double t41378;
  double t41379;
  double t41623;
  double t41385;
  double t41386;
  double t41389;
  double t41390;
  double t41394;
  double t41395;
  double t41396;
  double t41397;
  double t41398;
  double t41399;
  double t41400;
  double t41402;
  double t41403;
  double t41404;
  double t41405;
  double t41406;
  double t41410;
  double t41415;
  double t41420;
  double t41421;
  double t41426;
  double t41427;
  double t41462;
  double t41648;
  double t41465;
  double t41466;
  double t41652;
  double t41476;
  double t41477;
  double t41487;
  double t41716;
  double t41717;
  double t41718;
  double t41738;
  double t41744;
  double t41746;
  double t41813;
  double t41814;
  double t43008;
  double t43235;
  double t43491;
  double t43540;
  double t43724;
  double t43725;
  double t43726;
  double t43728;
  double t43737;
  double t43754;
  double t43727;
  double t43939;
  double t43941;
  double t43942;
  double t43943;
  double t43948;
  double t44004;
  double t44005;
  double t44009;
  double t44011;
  double t44156;
  double t44157;
  double t45131;
  double t45414;
  double t50187;
  double t50195;
  double t49625;
  double t41721;
  double t41792;
  double t41799;
  double t50263;
  double t50268;
  double t50280;
  double t41015;
  double t41016;
  double t41018;
  double t50978;
  double t51020;
  double t51022;
  double t41707;
  double t41708;
  double t41709;
  double t41071;
  double t41073;
  double t41074;
  double t51060;
  double t51062;
  double t51063;
  double t51064;
  double t51065;
  double t51066;
  double t51250;
  double t51258;
  double t51376;
  double t51388;
  double t51391;
  double t51397;
  double t51067;
  double t51410;
  double t51411;
  double t51422;
  double t51423;
  double t51424;
  double t51415;
  double t51419;
  double t51452;
  double t51476;
  double t51494;
  double t51534;
  double t51535;
  double t51536;
  double t51540;
  double t51542;
  double t51543;
  double t44221;
  double t44222;
  double t46560;
  double t46771;
  double t48786;
  double t50154;
  double t50161;
  double t50169;
  double t51565;
  double t51574;
  double t50242;
  double t50245;
  double t50249;
  double t51603;
  double t51607;
  double t51610;
  double t51550;
  double t51551;
  double t51553;
  double t50417;
  double t50490;
  double t50662;
  double t50702;
  double t50788;
  double t50872;
  double t50955;
  double t51961;
  double t51969;
  t40623 = Cos(var1[13]);
  t40664 = Cos(var1[14]);
  t40669 = t40623*t40664;
  t40675 = Sin(var1[13]);
  t40690 = Sin(var1[14]);
  t40692 = t40675*t40690;
  t40702 = t40669 + t40692;
  t40722 = Cos(var1[12]);
  t27532 = Cos(var1[5]);
  t40593 = Sin(var1[12]);
  t40739 = Sin(var1[5]);
  t40744 = Cos(var1[3]);
  t40720 = t27532*t40593*t40702;
  t40740 = t40722*t40702*t40739;
  t40741 = t40720 + t40740;
  t1951 = Sin(var1[3]);
  t40746 = Cos(var1[4]);
  t40747 = -1.*t40664*t40675;
  t40748 = t40623*t40690;
  t40749 = t40747 + t40748;
  t40971 = t40746*t40749;
  t40990 = Sin(var1[4]);
  t40991 = t40722*t27532*t40702;
  t40992 = -1.*t40593*t40702*t40739;
  t40994 = t40991 + t40992;
  t40995 = -1.*t40990*t40994;
  t41009 = t40971 + t40995;
  t41032 = -1.*t27532*t40593;
  t41033 = -1.*t40722*t40739;
  t41034 = t41032 + t41033;
  t41037 = t40722*t27532;
  t41039 = -1.*t40593*t40739;
  t41040 = t41037 + t41039;
  t41051 = t40664*t40675;
  t41052 = -1.*t40623*t40690;
  t41053 = t41051 + t41052;
  t41054 = t27532*t40593*t41053;
  t41055 = t40722*t41053*t40739;
  t41058 = t41054 + t41055;
  t41061 = t40746*t40702;
  t41063 = t40722*t27532*t41053;
  t41064 = -1.*t40593*t41053*t40739;
  t41065 = t41063 + t41064;
  t41066 = -1.*t40990*t41065;
  t41067 = t41061 + t41066;
  t41078 = -1.*t40749*t40990;
  t41079 = -1.*t40746*t40994;
  t41081 = t41078 + t41079;
  t41089 = -1.*t40664;
  t41090 = 1. + t41089;
  t41091 = 0.50321*t41090;
  t41092 = 0.23321*t40664;
  t41093 = t41091 + t41092;
  t41099 = -1.*t40722;
  t41100 = 1. + t41099;
  t41102 = -1.*t40623;
  t41103 = 1. + t41102;
  t41104 = 0.28121*t41103;
  t41105 = t40623*t41093;
  t41106 = -0.27*t40675*t40690;
  t41108 = t41104 + t41105 + t41106;
  t41088 = 0.28121*t40675;
  t41094 = -1.*t41093*t40675;
  t41095 = -0.27*t40623*t40690;
  t41096 = t41088 + t41094 + t41095;
  t41101 = 0.15121*t41100;
  t41109 = t40722*t41108;
  t41110 = t41101 + t41109;
  t41111 = t27532*t41110;
  t41112 = -0.15121*t41100;
  t41113 = -0.15121*t40722;
  t41114 = -0.15121*t40593;
  t41116 = t40593*t41108;
  t41117 = t41112 + t41113 + t41114 + t41116;
  t41119 = -1.*t41117*t40739;
  t41120 = t41111 + t41119;
  t41125 = t41096*t40990;
  t41126 = t40746*t41120;
  t41127 = t41125 + t41126;
  t41098 = -1.*t41096*t40990;
  t41121 = -1.*t40746*t41120;
  t41122 = t41098 + t41121;
  t41137 = t40746*t41096;
  t41138 = -1.*t40990*t41120;
  t41139 = t41137 + t41138;
  t41085 = t40702*t40990;
  t41086 = t40746*t41065;
  t41087 = t41085 + t41086;
  t41131 = t27532*t41117;
  t41132 = t41110*t40739;
  t41133 = t41131 + t41132;
  t41146 = -1.*t40702*t40990;
  t41147 = -1.*t40746*t41065;
  t41148 = t41146 + t41147;
  t41195 = t40749*t40990;
  t41196 = t40746*t40994;
  t41200 = t41195 + t41196;
  t41270 = -1.*t27532*t40593*t40702;
  t41271 = -1.*t40722*t40702*t40739;
  t41272 = t41270 + t41271;
  t41134 = -1.*t41040*t41133;
  t41288 = -1.*t27532*t41117;
  t41289 = -1.*t41110*t40739;
  t41290 = t41288 + t41289;
  t41154 = t41058*t41133;
  t41306 = -1.*t27532*t40593*t41053;
  t41307 = -1.*t40722*t41053*t40739;
  t41309 = t41306 + t41307;
  t41135 = -1.*t40746*t41034*t41127;
  t41140 = t40990*t41034*t41139;
  t41141 = t41134 + t41135 + t41140;
  t41294 = -1.*t41034*t41133;
  t41295 = -1.*t41040*t41120;
  t41296 = -1.*t40722*t27532;
  t41297 = t40593*t40739;
  t41298 = t41296 + t41297;
  t41305 = t41065*t41133;
  t41311 = t41058*t41120;
  t41155 = t41087*t41127;
  t41156 = t41067*t41139;
  t41157 = t41154 + t41155 + t41156;
  t41210 = -1.*t41058*t41133;
  t41228 = t40741*t41133;
  t41354 = -1.*t41065*t41133;
  t41356 = -1.*t41058*t41120;
  t41364 = t40994*t41133;
  t41367 = t40741*t41120;
  t41211 = -1.*t41087*t41127;
  t41213 = -1.*t41067*t41139;
  t41214 = t41210 + t41211 + t41213;
  t41229 = t41200*t41127;
  t41231 = t41009*t41139;
  t41232 = t41228 + t41229 + t41231;
  t41246 = t41040*t41133;
  t41258 = -1.*t40741*t41133;
  t41247 = t40746*t41034*t41127;
  t41248 = -1.*t40990*t41034*t41139;
  t41249 = t41246 + t41247 + t41248;
  t41323 = Power(t40746,2);
  t41325 = Power(t40990,2);
  t41408 = t41034*t41133;
  t41409 = t41040*t41120;
  t41414 = -1.*t40994*t41133;
  t41416 = -1.*t40741*t41120;
  t41259 = -1.*t41200*t41127;
  t41262 = -1.*t41009*t41139;
  t41263 = t41258 + t41259 + t41262;
  t41273 = var2[0]*t40746*t41272;
  t41274 = t1951*t40990*t41272;
  t41276 = t40744*t40994;
  t41278 = t41274 + t41276;
  t41279 = var2[1]*t41278;
  t41280 = -1.*t40744*t40990*t41272;
  t41281 = t1951*t40994;
  t41282 = t41280 + t41281;
  t41283 = var2[2]*t41282;
  t41285 = -1.*t41034*t41120;
  t41286 = t41134 + t41285;
  t41287 = t41065*t41286;
  t41501 = 0.15121*t40593;
  t41502 = -1.*t40593*t41108;
  t41503 = t41501 + t41502;
  t41499 = t41113 + t41109;
  t41300 = -1.*t41298*t41120;
  t41508 = t27532*t41503;
  t41509 = -1.*t41499*t40739;
  t41510 = t41508 + t41509;
  t41513 = t27532*t41499;
  t41514 = t41503*t40739;
  t41515 = t41513 + t41514;
  t41310 = t41309*t41120;
  t41314 = t41096*t40702;
  t41316 = t41065*t41120;
  t41317 = t41314 + t41154 + t41316;
  t41318 = t41034*t41317;
  t41321 = t40746*t41309*t41141;
  t41516 = -1.*t41040*t41515;
  t41327 = -1.*t40746*t41298*t41127;
  t41328 = t40990*t41298*t41139;
  t41521 = t41058*t41515;
  t41333 = t40746*t41309*t41127;
  t41334 = -1.*t40990*t41309*t41139;
  t41338 = t40746*t41298*t41157;
  t41342 = var2[0]*t40746*t41298;
  t41343 = t1951*t41034;
  t41344 = -1.*t40744*t40990*t41298;
  t41345 = t41343 + t41344;
  t41346 = var2[2]*t41345;
  t41347 = t40744*t41034;
  t41348 = t1951*t40990*t41298;
  t41350 = t41347 + t41348;
  t41352 = var2[1]*t41350;
  t41355 = -1.*t41309*t41120;
  t41359 = -1.*t41096*t40702;
  t41360 = -1.*t41065*t41120;
  t41361 = t41359 + t41210 + t41360;
  t41362 = t40994*t41361;
  t41365 = t41272*t41120;
  t41370 = t41096*t40749;
  t41371 = t40994*t41120;
  t41372 = t41370 + t41228 + t41371;
  t41373 = t41065*t41372;
  t41609 = -1.*t41058*t41515;
  t41378 = -1.*t40746*t41309*t41127;
  t41379 = t40990*t41309*t41139;
  t41623 = t40741*t41515;
  t41385 = t40746*t41272*t41127;
  t41386 = -1.*t40990*t41272*t41139;
  t41389 = t40746*t41272*t41214;
  t41390 = t40746*t41309*t41232;
  t41394 = var2[0]*t40746*t41309;
  t41395 = t1951*t40990*t41309;
  t41396 = t40744*t41065;
  t41397 = t41395 + t41396;
  t41398 = var2[1]*t41397;
  t41399 = -1.*t40744*t40990*t41309;
  t41400 = t1951*t41065;
  t41402 = t41399 + t41400;
  t41403 = var2[2]*t41402;
  t41404 = t41034*t41120;
  t41405 = t41246 + t41404;
  t41406 = t40994*t41405;
  t41410 = t41298*t41120;
  t41415 = -1.*t41272*t41120;
  t41420 = -1.*t41096*t40749;
  t41421 = -1.*t40994*t41120;
  t41426 = t41420 + t41258 + t41421;
  t41427 = t41034*t41426;
  t41462 = t40746*t41272*t41249;
  t41648 = t41040*t41515;
  t41465 = t40746*t41298*t41127;
  t41466 = -1.*t40990*t41298*t41139;
  t41652 = -1.*t40741*t41515;
  t41476 = -1.*t40746*t41272*t41127;
  t41477 = t40990*t41272*t41139;
  t41487 = t40746*t41298*t41263;
  t41716 = -1.*t40623*t40664;
  t41717 = -1.*t40675*t40690;
  t41718 = t41716 + t41717;
  t41738 = t40722*t27532*t40749;
  t41744 = -1.*t40593*t40749*t40739;
  t41746 = t41738 + t41744;
  t41813 = t27532*t40593*t40749;
  t41814 = t40722*t40749*t40739;
  t43008 = t41813 + t41814;
  t43235 = t40746*t41718;
  t43491 = -1.*t40990*t41746;
  t43540 = t43235 + t43491;
  t43724 = t27532*t40593*t41096;
  t43725 = t40722*t41096*t40739;
  t43726 = t43724 + t43725;
  t43728 = t40722*t27532*t41096;
  t43737 = -1.*t40593*t41096*t40739;
  t43754 = t43728 + t43737;
  t43727 = -1.*t41040*t43726;
  t43939 = 0.28121*t40623;
  t43941 = -1.*t40623*t41093;
  t43942 = 0.27*t40675*t40690;
  t43943 = t43939 + t43941 + t43942;
  t43948 = t41058*t43726;
  t44004 = t43943*t40990;
  t44005 = t40746*t43754;
  t44009 = t44004 + t44005;
  t44011 = t40746*t43943;
  t44156 = -1.*t40990*t43754;
  t44157 = t44011 + t44156;
  t45131 = t41096*t41718;
  t45414 = t40749*t43943;
  t50187 = Power(t40722,2);
  t50195 = Power(t40593,2);
  t49625 = -1.*t43943*t40702;
  t41721 = t41718*t40990;
  t41792 = t40746*t41746;
  t41799 = t41721 + t41792;
  t50263 = t43726*t40741;
  t50268 = t43008*t41133;
  t50280 = -1.*t41058*t43726;
  t41015 = t40744*t40741;
  t41016 = -1.*t1951*t41009;
  t41018 = t41015 + t41016;
  t50978 = t41040*t43726;
  t51020 = -1.*t43726*t40741;
  t51022 = -1.*t43008*t41133;
  t41707 = t40593*t41110;
  t41708 = -1.*t40722*t41117;
  t41709 = t41707 + t41708;
  t41071 = t40744*t41058;
  t41073 = -1.*t1951*t41067;
  t41074 = t41071 + t41073;
  t51060 = -0.27*t40664*t40675;
  t51062 = 0.27*t40623*t40690;
  t51063 = t51060 + t51062;
  t51064 = t27532*t40593*t51063;
  t51065 = t40722*t51063*t40739;
  t51066 = t51064 + t51065;
  t51250 = t40722*t27532*t51063;
  t51258 = -1.*t40593*t51063*t40739;
  t51376 = t51250 + t51258;
  t51388 = t27532*t40593*t41718;
  t51391 = t40722*t41718*t40739;
  t51397 = t51388 + t51391;
  t51067 = -1.*t41040*t51066;
  t51410 = -0.27*t40623*t40664;
  t51411 = t51410 + t41106;
  t51422 = t40722*t27532*t41718;
  t51423 = -1.*t40593*t41718*t40739;
  t51424 = t51422 + t51423;
  t51415 = t41058*t51066;
  t51419 = t51397*t41133;
  t51452 = t51411*t40990;
  t51476 = t40746*t51376;
  t51494 = t51452 + t51476;
  t51534 = t40746*t51411;
  t51535 = -1.*t40990*t51376;
  t51536 = t51534 + t51535;
  t51540 = t41053*t40990;
  t51542 = t40746*t51424;
  t51543 = t51540 + t51542;
  t44221 = -1.*t41053*t41108;
  t44222 = t44221 + t41359;
  t46560 = t41108*t40702;
  t46771 = t41370 + t46560;
  t48786 = -1.*t41053*t41096;
  t50154 = -1.*t40722*t41053*t41110;
  t50161 = -1.*t40593*t41053*t41117;
  t50169 = t41359 + t50154 + t50161;
  t51565 = t40749*t51411;
  t51574 = -1.*t51411*t40702;
  t50242 = t40722*t40702*t41110;
  t50245 = t40593*t40702*t41117;
  t50249 = t41370 + t50242 + t50245;
  t51603 = t51066*t40741;
  t51607 = -1.*t41058*t51066;
  t51610 = -1.*t51397*t41133;
  t51550 = t40746*t41053;
  t51551 = -1.*t40990*t51424;
  t51553 = t51550 + t51551;
  t50417 = -0.15121*t41718;
  t50490 = -0.15121*t40702;
  t50662 = t50417 + t50490;
  t50702 = var2[12]*t50662;
  t50788 = -1.*t40593*t41110;
  t50872 = t40722*t41117;
  t50955 = t50788 + t50872;
  t51961 = t41040*t51066;
  t51969 = -1.*t51066*t40741;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1951*t40741 - 1.*t40744*t41009)*var2[1] + t41018*var2[2];
  p_output1[10]=(t40744*t40990*t41034 - 1.*t1951*t41040)*var2[1] + (t1951*t40990*t41034 + t40744*t41040)*var2[2];
  p_output1[11]=(-1.*t1951*t41058 - 1.*t40744*t41067)*var2[1] + t41074*var2[2];
  p_output1[12]=t41009*var2[0] - 1.*t1951*t41081*var2[1] + t40744*t41081*var2[2] + (t41087*(t40990*t41034*t41122 + t40990*t41034*t41127) + t41067*t41141 + t40746*t41034*(t41067*t41122 + t41067*t41127 + t41087*t41139 + t41139*t41148) - 1.*t40990*t41034*t41157)*var2[3];
  p_output1[13]=-1.*t40990*t41034*var2[0] + t1951*t40746*t41034*var2[1] - 1.*t40744*t40746*t41034*var2[2] + ((-1.*t41067*t41122 - 1.*t41067*t41127 - 1.*t41087*t41139 - 1.*t41139*t41148)*t41200 + t41087*(t41009*t41122 + t41009*t41127 + t41081*t41139 + t41139*t41200) + t41009*t41214 + t41067*t41232)*var2[3];
  p_output1[14]=t41067*var2[0] - 1.*t1951*t41148*var2[1] + t40744*t41148*var2[2] + ((-1.*t40990*t41034*t41122 - 1.*t40990*t41034*t41127)*t41200 + t40746*t41034*(-1.*t41009*t41122 - 1.*t41009*t41127 - 1.*t41081*t41139 - 1.*t41139*t41200) + t41009*t41249 - 1.*t40990*t41034*t41263)*var2[3];
  p_output1[15]=t41273 + t41279 + t41283 + (t41321 + t41087*(t41294 + t41295 - 1.*t41034*t41290*t41323 - 1.*t41034*t41290*t41325 + t41327 + t41328) + t40746*t41034*(-1.*t40990*t41067*t41290 + t40746*t41087*t41290 + t41305 + t41311 + t41333 + t41334) + t41338)*var2[3] + (t41287 + t41058*(-1.*t41034*t41290 + t41294 + t41295 + t41300) + t41040*(t41065*t41290 + t41305 + t41310 + t41311) + t41318)*var2[4];
  p_output1[16]=t41342 + t41346 + t41352 + (t41200*(t40990*t41067*t41290 - 1.*t40746*t41087*t41290 + t41354 + t41356 + t41378 + t41379) + t41087*(-1.*t40990*t41009*t41290 + t40746*t41200*t41290 + t41364 + t41367 + t41385 + t41386) + t41389 + t41390)*var2[3] + (t40741*(-1.*t41065*t41290 + t41354 + t41355 + t41356) + t41362 + t41058*(t40994*t41290 + t41364 + t41365 + t41367) + t41373)*var2[4];
  p_output1[17]=t41394 + t41398 + t41403 + (t41462 + t41200*(t41034*t41290*t41323 + t41034*t41290*t41325 + t41408 + t41409 + t41465 + t41466) + t40746*t41034*(t40990*t41009*t41290 - 1.*t40746*t41200*t41290 + t41414 + t41416 + t41476 + t41477) + t41487)*var2[3] + (t41406 + t40741*(t41034*t41290 + t41408 + t41409 + t41410) + t41040*(-1.*t40994*t41290 + t41414 + t41415 + t41416) + t41427)*var2[4];
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
  p_output1[36]=t41273 + t41279 + t41283 + (t41321 + t41338 + t41087*(t41294 + t41327 + t41328 - 1.*t41034*t41323*t41510 - 1.*t41034*t41325*t41510 + t41516) + t40746*t41034*(t41305 + t41333 + t41334 - 1.*t40990*t41067*t41510 + t40746*t41087*t41510 + t41521))*var2[3] + (t41287 + t41318 + t41058*(t41294 + t41300 - 1.*t41034*t41510 + t41516) + t41040*(t41305 + t41310 + t41065*t41510 + t41521))*var2[4] + t40702*(t40722*t41110 + t40593*t41117 - 1.*t40722*t41499 + t40593*t41503)*var2[5];
  p_output1[37]=t41342 + t41346 + t41352 + (t41389 + t41390 + t41200*(t41354 + t41378 + t41379 + t40990*t41067*t41510 - 1.*t40746*t41087*t41510 + t41609) + t41087*(t41364 + t41385 + t41386 - 1.*t40990*t41009*t41510 + t40746*t41200*t41510 + t41623))*var2[3] + (t41362 + t41373 + t40741*(t41354 + t41355 - 1.*t41065*t41510 + t41609) + t41058*(t41364 + t41365 + t40994*t41510 + t41623))*var2[4] + (t40702*(-1.*t40593*t40702*t41110 + t40702*t40722*t41117 + t40593*t40702*t41499 + t40702*t40722*t41503) + t40749*(t40593*t41053*t41110 - 1.*t40722*t41053*t41117 - 1.*t40593*t41053*t41499 - 1.*t40722*t41053*t41503))*var2[5];
  p_output1[38]=t41394 + t41398 + t41403 + (t41462 + t41487 + t41200*(t41408 + t41465 + t41466 + t41034*t41323*t41510 + t41034*t41325*t41510 + t41648) + t40746*t41034*(t41414 + t41476 + t41477 + t40990*t41009*t41510 - 1.*t40746*t41200*t41510 + t41652))*var2[3] + (t41406 + t41427 + t40741*(t41408 + t41410 + t41034*t41510 + t41648) + t41040*(t41414 + t41415 - 1.*t40994*t41510 + t41652))*var2[4] + t40749*(-1.*t40722*t41110 - 1.*t40593*t41117 + t40722*t41499 - 1.*t40593*t41503)*var2[5];
  p_output1[39]=t41799*var2[0] + (t40744*t43008 - 1.*t1951*t43540)*var2[1] + (t1951*t43008 + t40744*t43540)*var2[2] + (t41141*t41200 + t41087*(t43727 - 1.*t40746*t41034*t44009 + t40990*t41034*t44157) + t40746*t41034*(t41228 + t41229 + t41231 + t43948 + t41087*t44009 + t41067*t44157))*var2[3] + (t40741*t41286 + t41058*(t43727 - 1.*t41034*t43754) + t41040*(t41228 + t41370 + t41371 + t41065*t43754 + t40702*t43943 + t43948))*var2[4] + t40749*t41709*var2[5];
  p_output1[40]=(t41200*t41232 + t41214*t41799 + t41087*(t41127*t41799 + t41139*t43540 + t41200*t44009 + t41009*t44157 + t50263 + t50268) + t41200*(t41258 + t41259 + t41262 - 1.*t41087*t44009 - 1.*t41067*t44157 + t50280))*var2[3] + (t40741*t41372 + t41361*t43008 + t41058*(t41120*t41746 + t40994*t43754 + t45131 + t45414 + t50263 + t50268) + t40741*(t41258 + t41420 + t41421 - 1.*t41065*t43754 + t49625 + t50280))*var2[4] + (t41718*t50169 + t40702*(t40722*t40749*t41110 + t40593*t40749*t41117 + t45131 + t45414 + t40702*t41096*t50187 + t40702*t41096*t50195) + t40749*(-1.*t40702*t40722*t41110 - 1.*t40593*t40702*t41117 + t41420 + t49625 - 1.*t41053*t41096*t50187 - 1.*t41053*t41096*t50195) + t40749*t50249)*var2[5] + (t41718*t44222 + t40702*(t40749*t41108 + t41314 + t45131 + t45414) + t40749*t46771 + t40749*(-1.*t40702*t41108 + t41420 + t48786 + t49625))*var2[12];
  p_output1[41]=t50702 + t41200*var2[0] + t41018*var2[1] + (t1951*t40741 + t40744*t41009)*var2[2] + (t41249*t41799 + t41200*(t40746*t41034*t44009 - 1.*t40990*t41034*t44157 + t50978) + t40746*t41034*(-1.*t41127*t41799 - 1.*t41139*t43540 - 1.*t41200*t44009 - 1.*t41009*t44157 + t51020 + t51022))*var2[3] + (t41405*t43008 + t40741*(t41034*t43754 + t50978) + t41040*(-1.*t41096*t41718 - 1.*t41120*t41746 - 1.*t40994*t43754 - 1.*t40749*t43943 + t51020 + t51022))*var2[4] + t41718*t50955*var2[5];
  p_output1[42]=t41087*var2[0] + t41074*var2[1] + (t1951*t41058 + t40744*t41067)*var2[2] + (t41087*(t51067 - 1.*t40746*t41034*t51494 + t40990*t41034*t51536) + t41141*t51543 + t40746*t41034*(t51415 + t51419 + t41087*t51494 + t41067*t51536 + t41127*t51543 + t41139*t51553))*var2[3] + (t41058*(t51067 - 1.*t41034*t51376) + t41286*t51397 + t41040*(t41053*t41096 + t41065*t51376 + t40702*t51411 + t51415 + t51419 + t41120*t51424))*var2[4] + t41053*t41709*var2[5] + (0.28121*t40664 - 0.27*Power(t40664,2) - 1.*t40664*t41093)*var2[13];
  p_output1[43]=(t41087*t41214 + t41232*t51543 + t41087*(t41154 + t41155 + t41156 + t41200*t51494 + t41009*t51536 + t51603) + t41200*(-1.*t41087*t51494 - 1.*t41067*t51536 - 1.*t41127*t51543 - 1.*t41139*t51553 + t51607 + t51610))*var2[3] + (t41058*t41361 + t41372*t51397 + t41058*(t41154 + t41314 + t41316 + t40994*t51376 + t51565 + t51603) + t40741*(t48786 - 1.*t41065*t51376 - 1.*t41120*t51424 + t51574 + t51607 + t51610))*var2[4] + (t40702*t50169 + t41053*t50249 + t40702*(t40722*t41053*t41110 + t40593*t41053*t41117 + t41314 + t40702*t50187*t51063 + t40702*t50195*t51063 + t51565) + t40749*(-1.*t40722*t41110*t41718 - 1.*t40593*t41117*t41718 + t48786 - 1.*t41053*t50187*t51063 - 1.*t41053*t50195*t51063 + t51574))*var2[5] + (t40702*t44222 + t41053*t46771 + t40702*(t41053*t41108 + t41314 + t40702*t51063 + t51565) + t40749*(-1.*t41108*t41718 + t48786 - 1.*t41053*t51063 + t51574))*var2[12];
  p_output1[44]=t50702 + t51543*var2[0] + (t40744*t51397 - 1.*t1951*t51553)*var2[1] + (t1951*t51397 + t40744*t51553)*var2[2] + (t41087*t41249 + t41200*(t40746*t41034*t51494 - 1.*t40990*t41034*t51536 + t51961) + t40746*t41034*(t41210 + t41211 + t41213 - 1.*t41200*t51494 - 1.*t41009*t51536 + t51969))*var2[3] + (t41058*t41405 + t40741*(t41034*t51376 + t51961) + t41040*(t41210 + t41359 + t41360 - 1.*t40994*t51376 - 1.*t40749*t51411 + t51969))*var2[4] + t40702*t50955*var2[5] + (-0.28121*t40690 + 0.27*t40664*t40690 + t40690*t41093)*var2[13];
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
