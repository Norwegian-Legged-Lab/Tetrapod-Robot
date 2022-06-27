/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:41 GMT+02:00
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
  double t15159;
  double t15717;
  double t16433;
  double t17051;
  double t17069;
  double t17831;
  double t17876;
  double t17892;
  double t5065;
  double t9524;
  double t17894;
  double t17910;
  double t17891;
  double t17898;
  double t17899;
  double t204;
  double t17911;
  double t17912;
  double t17913;
  double t17914;
  double t17915;
  double t17916;
  double t17918;
  double t17919;
  double t17920;
  double t17921;
  double t17958;
  double t17998;
  double t17999;
  double t18000;
  double t18006;
  double t18007;
  double t18011;
  double t18023;
  double t18025;
  double t18027;
  double t18028;
  double t18029;
  double t18030;
  double t18032;
  double t18033;
  double t18034;
  double t18035;
  double t18037;
  double t18038;
  double t18048;
  double t18049;
  double t18051;
  double t18061;
  double t18062;
  double t18063;
  double t18064;
  double t18065;
  double t18070;
  double t18071;
  double t18072;
  double t18073;
  double t18074;
  double t18075;
  double t18076;
  double t18077;
  double t18078;
  double t18060;
  double t18066;
  double t18067;
  double t18068;
  double t18079;
  double t18080;
  double t18081;
  double t18082;
  double t18083;
  double t18084;
  double t18085;
  double t18086;
  double t18087;
  double t18091;
  double t18092;
  double t18093;
  double t18069;
  double t18088;
  double t18089;
  double t18104;
  double t18105;
  double t18106;
  double t18056;
  double t18058;
  double t18059;
  double t18098;
  double t18099;
  double t18101;
  double t18112;
  double t18113;
  double t18114;
  double t18130;
  double t18131;
  double t18132;
  double t18184;
  double t18185;
  double t18186;
  double t18102;
  double t18200;
  double t18201;
  double t18202;
  double t18119;
  double t18215;
  double t18216;
  double t18217;
  double t18103;
  double t18107;
  double t18108;
  double t18204;
  double t18205;
  double t18206;
  double t18207;
  double t18208;
  double t18214;
  double t18219;
  double t18120;
  double t18121;
  double t18122;
  double t18139;
  double t18150;
  double t18257;
  double t18259;
  double t18267;
  double t18269;
  double t18140;
  double t18141;
  double t18142;
  double t18151;
  double t18152;
  double t18153;
  double t18165;
  double t18176;
  double t18166;
  double t18167;
  double t18168;
  double t18229;
  double t18231;
  double t18309;
  double t18310;
  double t18315;
  double t18317;
  double t18177;
  double t18178;
  double t18179;
  double t18187;
  double t18188;
  double t18189;
  double t18191;
  double t18192;
  double t18193;
  double t18194;
  double t18195;
  double t18196;
  double t18197;
  double t18198;
  double t18199;
  double t18344;
  double t18345;
  double t18348;
  double t18349;
  double t18350;
  double t18209;
  double t18355;
  double t18356;
  double t18357;
  double t18359;
  double t18360;
  double t18361;
  double t18218;
  double t18222;
  double t18223;
  double t18224;
  double t18225;
  double t18228;
  double t18362;
  double t18233;
  double t18234;
  double t18366;
  double t18239;
  double t18240;
  double t18243;
  double t18247;
  double t18248;
  double t18249;
  double t18250;
  double t18251;
  double t18252;
  double t18253;
  double t18254;
  double t18255;
  double t18258;
  double t18262;
  double t18263;
  double t18264;
  double t18265;
  double t18268;
  double t18272;
  double t18273;
  double t18274;
  double t18275;
  double t18397;
  double t18280;
  double t18281;
  double t18401;
  double t18286;
  double t18287;
  double t18291;
  double t18292;
  double t18296;
  double t18297;
  double t18298;
  double t18299;
  double t18300;
  double t18301;
  double t18302;
  double t18303;
  double t18304;
  double t18305;
  double t18306;
  double t18307;
  double t18311;
  double t18316;
  double t18320;
  double t18321;
  double t18322;
  double t18323;
  double t18326;
  double t18425;
  double t18329;
  double t18330;
  double t18429;
  double t18335;
  double t18336;
  double t18339;
  double t18445;
  double t18446;
  double t18447;
  double t18449;
  double t18450;
  double t18451;
  double t18459;
  double t18460;
  double t18461;
  double t18463;
  double t18464;
  double t18465;
  double t18473;
  double t18474;
  double t18475;
  double t18478;
  double t18479;
  double t18480;
  double t18476;
  double t18485;
  double t18486;
  double t18487;
  double t18488;
  double t18491;
  double t18497;
  double t18498;
  double t18499;
  double t18501;
  double t18502;
  double t18503;
  double t18518;
  double t18520;
  double t18538;
  double t18540;
  double t18528;
  double t18448;
  double t18452;
  double t18453;
  double t18560;
  double t18562;
  double t18566;
  double t17986;
  double t17987;
  double t17988;
  double t18602;
  double t18609;
  double t18611;
  double t18455;
  double t18456;
  double t18457;
  double t18043;
  double t18044;
  double t18045;
  double t18646;
  double t18647;
  double t18648;
  double t18649;
  double t18650;
  double t18651;
  double t18653;
  double t18654;
  double t18655;
  double t18659;
  double t18660;
  double t18661;
  double t18652;
  double t18664;
  double t18665;
  double t18670;
  double t18671;
  double t18672;
  double t18667;
  double t18678;
  double t18679;
  double t18680;
  double t18682;
  double t18683;
  double t18684;
  double t18669;
  double t18688;
  double t18689;
  double t18690;
  double t18515;
  double t18516;
  double t18523;
  double t18524;
  double t18526;
  double t18533;
  double t18534;
  double t18536;
  double t18706;
  double t18713;
  double t18552;
  double t18553;
  double t18554;
  double t18736;
  double t18740;
  double t18742;
  double t18695;
  double t18696;
  double t18697;
  double t18588;
  double t18589;
  double t18590;
  double t18591;
  double t18592;
  double t18593;
  double t18594;
  double t18782;
  double t18788;
  t15159 = Cos(var1[7]);
  t15717 = Cos(var1[8]);
  t16433 = t15159*t15717;
  t17051 = Sin(var1[7]);
  t17069 = Sin(var1[8]);
  t17831 = t17051*t17069;
  t17876 = t16433 + t17831;
  t17892 = Cos(var1[5]);
  t5065 = Cos(var1[6]);
  t9524 = Sin(var1[5]);
  t17894 = Sin(var1[6]);
  t17910 = Cos(var1[3]);
  t17891 = t5065*t9524*t17876;
  t17898 = t17892*t17894*t17876;
  t17899 = t17891 + t17898;
  t204 = Sin(var1[3]);
  t17911 = Cos(var1[4]);
  t17912 = -1.*t15717*t17051;
  t17913 = t15159*t17069;
  t17914 = t17912 + t17913;
  t17915 = t17911*t17914;
  t17916 = Sin(var1[4]);
  t17918 = t17892*t5065*t17876;
  t17919 = -1.*t9524*t17894*t17876;
  t17920 = t17918 + t17919;
  t17921 = -1.*t17916*t17920;
  t17958 = t17915 + t17921;
  t17998 = -1.*t5065*t9524;
  t17999 = -1.*t17892*t17894;
  t18000 = t17998 + t17999;
  t18006 = t17892*t5065;
  t18007 = -1.*t9524*t17894;
  t18011 = t18006 + t18007;
  t18023 = t15717*t17051;
  t18025 = -1.*t15159*t17069;
  t18027 = t18023 + t18025;
  t18028 = t5065*t9524*t18027;
  t18029 = t17892*t17894*t18027;
  t18030 = t18028 + t18029;
  t18032 = t17911*t17876;
  t18033 = t17892*t5065*t18027;
  t18034 = -1.*t9524*t17894*t18027;
  t18035 = t18033 + t18034;
  t18037 = -1.*t17916*t18035;
  t18038 = t18032 + t18037;
  t18048 = -1.*t17916*t17914;
  t18049 = -1.*t17911*t17920;
  t18051 = t18048 + t18049;
  t18061 = -1.*t15717;
  t18062 = 1. + t18061;
  t18063 = 0.50321*t18062;
  t18064 = 0.19821*t15717;
  t18065 = t18063 + t18064;
  t18070 = -1.*t5065;
  t18071 = 1. + t18070;
  t18072 = 0.15121*t18071;
  t18073 = -1.*t15159;
  t18074 = 1. + t18073;
  t18075 = 0.28121*t18074;
  t18076 = t15159*t18065;
  t18077 = -0.305*t17051*t17069;
  t18078 = t18075 + t18076 + t18077;
  t18060 = 0.28121*t17051;
  t18066 = -1.*t18065*t17051;
  t18067 = -0.305*t15159*t17069;
  t18068 = t18060 + t18066 + t18067;
  t18079 = t5065*t18078;
  t18080 = t18072 + t18079;
  t18081 = t17892*t18080;
  t18082 = 0.15121*t5065;
  t18083 = -0.15121*t17894;
  t18084 = t17894*t18078;
  t18085 = t18072 + t18082 + t18083 + t18084;
  t18086 = -1.*t9524*t18085;
  t18087 = t18081 + t18086;
  t18091 = t17916*t18068;
  t18092 = t17911*t18087;
  t18093 = t18091 + t18092;
  t18069 = -1.*t17916*t18068;
  t18088 = -1.*t17911*t18087;
  t18089 = t18069 + t18088;
  t18104 = t17911*t18068;
  t18105 = -1.*t17916*t18087;
  t18106 = t18104 + t18105;
  t18056 = t17916*t17876;
  t18058 = t17911*t18035;
  t18059 = t18056 + t18058;
  t18098 = t9524*t18080;
  t18099 = t17892*t18085;
  t18101 = t18098 + t18099;
  t18112 = -1.*t17916*t17876;
  t18113 = -1.*t17911*t18035;
  t18114 = t18112 + t18113;
  t18130 = t17916*t17914;
  t18131 = t17911*t17920;
  t18132 = t18130 + t18131;
  t18184 = -1.*t5065*t9524*t17876;
  t18185 = -1.*t17892*t17894*t17876;
  t18186 = t18184 + t18185;
  t18102 = -1.*t18011*t18101;
  t18200 = -1.*t9524*t18080;
  t18201 = -1.*t17892*t18085;
  t18202 = t18200 + t18201;
  t18119 = t18030*t18101;
  t18215 = -1.*t5065*t9524*t18027;
  t18216 = -1.*t17892*t17894*t18027;
  t18217 = t18215 + t18216;
  t18103 = -1.*t17911*t18000*t18093;
  t18107 = t17916*t18000*t18106;
  t18108 = t18102 + t18103 + t18107;
  t18204 = -1.*t18000*t18101;
  t18205 = -1.*t18011*t18087;
  t18206 = -1.*t17892*t5065;
  t18207 = t9524*t17894;
  t18208 = t18206 + t18207;
  t18214 = t18035*t18101;
  t18219 = t18030*t18087;
  t18120 = t18059*t18093;
  t18121 = t18038*t18106;
  t18122 = t18119 + t18120 + t18121;
  t18139 = -1.*t18030*t18101;
  t18150 = t17899*t18101;
  t18257 = -1.*t18035*t18101;
  t18259 = -1.*t18030*t18087;
  t18267 = t17920*t18101;
  t18269 = t17899*t18087;
  t18140 = -1.*t18059*t18093;
  t18141 = -1.*t18038*t18106;
  t18142 = t18139 + t18140 + t18141;
  t18151 = t18132*t18093;
  t18152 = t17958*t18106;
  t18153 = t18150 + t18151 + t18152;
  t18165 = t18011*t18101;
  t18176 = -1.*t17899*t18101;
  t18166 = t17911*t18000*t18093;
  t18167 = -1.*t17916*t18000*t18106;
  t18168 = t18165 + t18166 + t18167;
  t18229 = Power(t17911,2);
  t18231 = Power(t17916,2);
  t18309 = t18000*t18101;
  t18310 = t18011*t18087;
  t18315 = -1.*t17920*t18101;
  t18317 = -1.*t17899*t18087;
  t18177 = -1.*t18132*t18093;
  t18178 = -1.*t17958*t18106;
  t18179 = t18176 + t18177 + t18178;
  t18187 = var2[0]*t17911*t18186;
  t18188 = t204*t17916*t18186;
  t18189 = t17910*t17920;
  t18191 = t18188 + t18189;
  t18192 = var2[1]*t18191;
  t18193 = -1.*t17910*t17916*t18186;
  t18194 = t204*t17920;
  t18195 = t18193 + t18194;
  t18196 = var2[2]*t18195;
  t18197 = -1.*t18000*t18087;
  t18198 = t18102 + t18197;
  t18199 = t18035*t18198;
  t18344 = -0.15121*t5065;
  t18345 = t18344 + t18079;
  t18348 = 0.15121*t17894;
  t18349 = -1.*t17894*t18078;
  t18350 = t18348 + t18349;
  t18209 = -1.*t18208*t18087;
  t18355 = -1.*t9524*t18345;
  t18356 = t17892*t18350;
  t18357 = t18355 + t18356;
  t18359 = t17892*t18345;
  t18360 = t9524*t18350;
  t18361 = t18359 + t18360;
  t18218 = t18217*t18087;
  t18222 = t18068*t17876;
  t18223 = t18035*t18087;
  t18224 = t18222 + t18119 + t18223;
  t18225 = t18000*t18224;
  t18228 = t17911*t18217*t18108;
  t18362 = -1.*t18011*t18361;
  t18233 = -1.*t17911*t18208*t18093;
  t18234 = t17916*t18208*t18106;
  t18366 = t18030*t18361;
  t18239 = t17911*t18217*t18093;
  t18240 = -1.*t17916*t18217*t18106;
  t18243 = t17911*t18208*t18122;
  t18247 = var2[0]*t17911*t18208;
  t18248 = t204*t18000;
  t18249 = -1.*t17910*t17916*t18208;
  t18250 = t18248 + t18249;
  t18251 = var2[2]*t18250;
  t18252 = t17910*t18000;
  t18253 = t204*t17916*t18208;
  t18254 = t18252 + t18253;
  t18255 = var2[1]*t18254;
  t18258 = -1.*t18217*t18087;
  t18262 = -1.*t18068*t17876;
  t18263 = -1.*t18035*t18087;
  t18264 = t18262 + t18139 + t18263;
  t18265 = t17920*t18264;
  t18268 = t18186*t18087;
  t18272 = t18068*t17914;
  t18273 = t17920*t18087;
  t18274 = t18272 + t18150 + t18273;
  t18275 = t18035*t18274;
  t18397 = -1.*t18030*t18361;
  t18280 = -1.*t17911*t18217*t18093;
  t18281 = t17916*t18217*t18106;
  t18401 = t17899*t18361;
  t18286 = t17911*t18186*t18093;
  t18287 = -1.*t17916*t18186*t18106;
  t18291 = t17911*t18186*t18142;
  t18292 = t17911*t18217*t18153;
  t18296 = var2[0]*t17911*t18217;
  t18297 = t204*t17916*t18217;
  t18298 = t17910*t18035;
  t18299 = t18297 + t18298;
  t18300 = var2[1]*t18299;
  t18301 = -1.*t17910*t17916*t18217;
  t18302 = t204*t18035;
  t18303 = t18301 + t18302;
  t18304 = var2[2]*t18303;
  t18305 = t18000*t18087;
  t18306 = t18165 + t18305;
  t18307 = t17920*t18306;
  t18311 = t18208*t18087;
  t18316 = -1.*t18186*t18087;
  t18320 = -1.*t18068*t17914;
  t18321 = -1.*t17920*t18087;
  t18322 = t18320 + t18176 + t18321;
  t18323 = t18000*t18322;
  t18326 = t17911*t18186*t18168;
  t18425 = t18011*t18361;
  t18329 = t17911*t18208*t18093;
  t18330 = -1.*t17916*t18208*t18106;
  t18429 = -1.*t17899*t18361;
  t18335 = -1.*t17911*t18186*t18093;
  t18336 = t17916*t18186*t18106;
  t18339 = t17911*t18208*t18179;
  t18445 = -1.*t15159*t15717;
  t18446 = -1.*t17051*t17069;
  t18447 = t18445 + t18446;
  t18449 = t17892*t5065*t17914;
  t18450 = -1.*t9524*t17894*t17914;
  t18451 = t18449 + t18450;
  t18459 = t5065*t9524*t17914;
  t18460 = t17892*t17894*t17914;
  t18461 = t18459 + t18460;
  t18463 = t17911*t18447;
  t18464 = -1.*t17916*t18451;
  t18465 = t18463 + t18464;
  t18473 = t5065*t9524*t18068;
  t18474 = t17892*t17894*t18068;
  t18475 = t18473 + t18474;
  t18478 = t17892*t5065*t18068;
  t18479 = -1.*t9524*t17894*t18068;
  t18480 = t18478 + t18479;
  t18476 = -1.*t18011*t18475;
  t18485 = 0.28121*t15159;
  t18486 = -1.*t15159*t18065;
  t18487 = 0.305*t17051*t17069;
  t18488 = t18485 + t18486 + t18487;
  t18491 = t18030*t18475;
  t18497 = t17916*t18488;
  t18498 = t17911*t18480;
  t18499 = t18497 + t18498;
  t18501 = t17911*t18488;
  t18502 = -1.*t17916*t18480;
  t18503 = t18501 + t18502;
  t18518 = t18068*t18447;
  t18520 = t17914*t18488;
  t18538 = Power(t5065,2);
  t18540 = Power(t17894,2);
  t18528 = -1.*t18488*t17876;
  t18448 = t17916*t18447;
  t18452 = t17911*t18451;
  t18453 = t18448 + t18452;
  t18560 = t18475*t17899;
  t18562 = t18461*t18101;
  t18566 = -1.*t18030*t18475;
  t17986 = t17910*t17899;
  t17987 = -1.*t204*t17958;
  t17988 = t17986 + t17987;
  t18602 = t18011*t18475;
  t18609 = -1.*t18475*t17899;
  t18611 = -1.*t18461*t18101;
  t18455 = t17894*t18080;
  t18456 = -1.*t5065*t18085;
  t18457 = t18455 + t18456;
  t18043 = t17910*t18030;
  t18044 = -1.*t204*t18038;
  t18045 = t18043 + t18044;
  t18646 = -0.305*t15717*t17051;
  t18647 = 0.305*t15159*t17069;
  t18648 = t18646 + t18647;
  t18649 = t5065*t9524*t18648;
  t18650 = t17892*t17894*t18648;
  t18651 = t18649 + t18650;
  t18653 = t17892*t5065*t18648;
  t18654 = -1.*t9524*t17894*t18648;
  t18655 = t18653 + t18654;
  t18659 = t5065*t9524*t18447;
  t18660 = t17892*t17894*t18447;
  t18661 = t18659 + t18660;
  t18652 = -1.*t18011*t18651;
  t18664 = -0.305*t15159*t15717;
  t18665 = t18664 + t18077;
  t18670 = t17892*t5065*t18447;
  t18671 = -1.*t9524*t17894*t18447;
  t18672 = t18670 + t18671;
  t18667 = t18030*t18651;
  t18678 = t17916*t18665;
  t18679 = t17911*t18655;
  t18680 = t18678 + t18679;
  t18682 = t17911*t18665;
  t18683 = -1.*t17916*t18655;
  t18684 = t18682 + t18683;
  t18669 = t18661*t18101;
  t18688 = t17916*t18027;
  t18689 = t17911*t18672;
  t18690 = t18688 + t18689;
  t18515 = -1.*t18027*t18078;
  t18516 = t18515 + t18262;
  t18523 = t18078*t17876;
  t18524 = t18272 + t18523;
  t18526 = -1.*t18027*t18068;
  t18533 = -1.*t5065*t18027*t18080;
  t18534 = -1.*t17894*t18027*t18085;
  t18536 = t18262 + t18533 + t18534;
  t18706 = t17914*t18665;
  t18713 = -1.*t18665*t17876;
  t18552 = t5065*t17876*t18080;
  t18553 = t17894*t17876*t18085;
  t18554 = t18272 + t18552 + t18553;
  t18736 = t18651*t17899;
  t18740 = -1.*t18030*t18651;
  t18742 = -1.*t18661*t18101;
  t18695 = t17911*t18027;
  t18696 = -1.*t17916*t18672;
  t18697 = t18695 + t18696;
  t18588 = 0.15121*t18447;
  t18589 = 0.15121*t17876;
  t18590 = t18588 + t18589;
  t18591 = var2[6]*t18590;
  t18592 = -1.*t17894*t18080;
  t18593 = t5065*t18085;
  t18594 = t18592 + t18593;
  t18782 = t18011*t18651;
  t18788 = -1.*t18651*t17899;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t17910*t17958 - 1.*t17899*t204)*var2[1] + t17988*var2[2];
  p_output1[10]=(t17910*t17916*t18000 - 1.*t18011*t204)*var2[1] + (t17910*t18011 + t17916*t18000*t204)*var2[2];
  p_output1[11]=(-1.*t17910*t18038 - 1.*t18030*t204)*var2[1] + t18045*var2[2];
  p_output1[12]=t17958*var2[0] - 1.*t18051*t204*var2[1] + t17910*t18051*var2[2] + (t18059*(t17916*t18000*t18089 + t17916*t18000*t18093) + t18038*t18108 + t17911*t18000*(t18038*t18089 + t18038*t18093 + t18059*t18106 + t18106*t18114) - 1.*t17916*t18000*t18122)*var2[3];
  p_output1[13]=-1.*t17916*t18000*var2[0] + t17911*t18000*t204*var2[1] - 1.*t17910*t17911*t18000*var2[2] + ((-1.*t18038*t18089 - 1.*t18038*t18093 - 1.*t18059*t18106 - 1.*t18106*t18114)*t18132 + t18059*(t17958*t18089 + t17958*t18093 + t18051*t18106 + t18106*t18132) + t17958*t18142 + t18038*t18153)*var2[3];
  p_output1[14]=t18038*var2[0] - 1.*t18114*t204*var2[1] + t17910*t18114*var2[2] + ((-1.*t17916*t18000*t18089 - 1.*t17916*t18000*t18093)*t18132 + t17911*t18000*(-1.*t17958*t18089 - 1.*t17958*t18093 - 1.*t18051*t18106 - 1.*t18106*t18132) + t17958*t18168 - 1.*t17916*t18000*t18179)*var2[3];
  p_output1[15]=t18187 + t18192 + t18196 + (t18228 + t18059*(t18204 + t18205 - 1.*t18000*t18202*t18229 - 1.*t18000*t18202*t18231 + t18233 + t18234) + t17911*t18000*(-1.*t17916*t18038*t18202 + t17911*t18059*t18202 + t18214 + t18219 + t18239 + t18240) + t18243)*var2[3] + (t18199 + t18030*(-1.*t18000*t18202 + t18204 + t18205 + t18209) + t18011*(t18035*t18202 + t18214 + t18218 + t18219) + t18225)*var2[4];
  p_output1[16]=t18247 + t18251 + t18255 + (t18132*(t17916*t18038*t18202 - 1.*t17911*t18059*t18202 + t18257 + t18259 + t18280 + t18281) + t18059*(-1.*t17916*t17958*t18202 + t17911*t18132*t18202 + t18267 + t18269 + t18286 + t18287) + t18291 + t18292)*var2[3] + (t17899*(-1.*t18035*t18202 + t18257 + t18258 + t18259) + t18265 + t18030*(t17920*t18202 + t18267 + t18268 + t18269) + t18275)*var2[4];
  p_output1[17]=t18296 + t18300 + t18304 + (t18326 + t18132*(t18000*t18202*t18229 + t18000*t18202*t18231 + t18309 + t18310 + t18329 + t18330) + t17911*t18000*(t17916*t17958*t18202 - 1.*t17911*t18132*t18202 + t18315 + t18317 + t18335 + t18336) + t18339)*var2[3] + (t18307 + t17899*(t18000*t18202 + t18309 + t18310 + t18311) + t18011*(-1.*t17920*t18202 + t18315 + t18316 + t18317) + t18323)*var2[4];
  p_output1[18]=t18187 + t18192 + t18196 + (t18228 + t18243 + t18059*(t18204 + t18233 + t18234 - 1.*t18000*t18229*t18357 - 1.*t18000*t18231*t18357 + t18362) + t17911*t18000*(t18214 + t18239 + t18240 - 1.*t17916*t18038*t18357 + t17911*t18059*t18357 + t18366))*var2[3] + (t18199 + t18225 + t18030*(t18204 + t18209 - 1.*t18000*t18357 + t18362) + t18011*(t18214 + t18218 + t18035*t18357 + t18366))*var2[4] + t17876*(t17894*t18085 + t17894*t18350 + t18080*t5065 - 1.*t18345*t5065)*var2[5];
  p_output1[19]=t18247 + t18251 + t18255 + (t18291 + t18292 + t18132*(t18257 + t18280 + t18281 + t17916*t18038*t18357 - 1.*t17911*t18059*t18357 + t18397) + t18059*(t18267 + t18286 + t18287 - 1.*t17916*t17958*t18357 + t17911*t18132*t18357 + t18401))*var2[3] + (t18265 + t18275 + t17899*(t18257 + t18258 - 1.*t18035*t18357 + t18397) + t18030*(t18267 + t18268 + t17920*t18357 + t18401))*var2[4] + (t17876*(-1.*t17876*t17894*t18080 + t17876*t17894*t18345 + t17876*t18085*t5065 + t17876*t18350*t5065) + t17914*(t17894*t18027*t18080 - 1.*t17894*t18027*t18345 - 1.*t18027*t18085*t5065 - 1.*t18027*t18350*t5065))*var2[5];
  p_output1[20]=t18296 + t18300 + t18304 + (t18326 + t18339 + t18132*(t18309 + t18329 + t18330 + t18000*t18229*t18357 + t18000*t18231*t18357 + t18425) + t17911*t18000*(t18315 + t18335 + t18336 + t17916*t17958*t18357 - 1.*t17911*t18132*t18357 + t18429))*var2[3] + (t18307 + t18323 + t17899*(t18309 + t18311 + t18000*t18357 + t18425) + t18011*(t18315 + t18316 - 1.*t17920*t18357 + t18429))*var2[4] + t17914*(-1.*t17894*t18085 - 1.*t17894*t18350 - 1.*t18080*t5065 + t18345*t5065)*var2[5];
  p_output1[21]=t18453*var2[0] + (t17910*t18461 - 1.*t18465*t204)*var2[1] + (t17910*t18465 + t18461*t204)*var2[2] + (t18108*t18132 + t18059*(t18476 - 1.*t17911*t18000*t18499 + t17916*t18000*t18503) + t17911*t18000*(t18150 + t18151 + t18152 + t18491 + t18059*t18499 + t18038*t18503))*var2[3] + (t17899*t18198 + t18030*(t18476 - 1.*t18000*t18480) + t18011*(t18150 + t18272 + t18273 + t18035*t18480 + t17876*t18488 + t18491))*var2[4] + t17914*t18457*var2[5];
  p_output1[22]=(t18132*t18153 + t18142*t18453 + t18059*(t18093*t18453 + t18106*t18465 + t18132*t18499 + t17958*t18503 + t18560 + t18562) + t18132*(t18176 + t18177 + t18178 - 1.*t18059*t18499 - 1.*t18038*t18503 + t18566))*var2[3] + (t17899*t18274 + t18264*t18461 + t18030*(t18087*t18451 + t17920*t18480 + t18518 + t18520 + t18560 + t18562) + t17899*(t18176 + t18320 + t18321 - 1.*t18035*t18480 + t18528 + t18566))*var2[4] + (t18447*t18536 + t17914*t18554 + t17914*(-1.*t17876*t17894*t18085 + t18320 + t18528 - 1.*t18027*t18068*t18538 - 1.*t18027*t18068*t18540 - 1.*t17876*t18080*t5065) + t17876*(t17894*t17914*t18085 + t18518 + t18520 + t17876*t18068*t18538 + t17876*t18068*t18540 + t17914*t18080*t5065))*var2[5] + (t18447*t18516 + t17876*(t17914*t18078 + t18222 + t18518 + t18520) + t17914*t18524 + t17914*(-1.*t17876*t18078 + t18320 + t18526 + t18528))*var2[6];
  p_output1[23]=t18591 + t18132*var2[0] + t17988*var2[1] + (t17910*t17958 + t17899*t204)*var2[2] + (t18168*t18453 + t18132*(t17911*t18000*t18499 - 1.*t17916*t18000*t18503 + t18602) + t17911*t18000*(-1.*t18093*t18453 - 1.*t18106*t18465 - 1.*t18132*t18499 - 1.*t17958*t18503 + t18609 + t18611))*var2[3] + (t18306*t18461 + t17899*(t18000*t18480 + t18602) + t18011*(-1.*t18068*t18447 - 1.*t18087*t18451 - 1.*t17920*t18480 - 1.*t17914*t18488 + t18609 + t18611))*var2[4] + t18447*t18594*var2[5];
  p_output1[24]=t18059*var2[0] + t18045*var2[1] + (t17910*t18038 + t18030*t204)*var2[2] + (t18059*(t18652 - 1.*t17911*t18000*t18680 + t17916*t18000*t18684) + t18108*t18690 + t17911*t18000*(t18667 + t18669 + t18059*t18680 + t18038*t18684 + t18093*t18690 + t18106*t18697))*var2[3] + (t18030*(t18652 - 1.*t18000*t18655) + t18198*t18661 + t18011*(t18027*t18068 + t18035*t18655 + t17876*t18665 + t18667 + t18669 + t18087*t18672))*var2[4] + t18027*t18457*var2[5] + (0.28121*t15717 - 0.305*Power(t15717,2) - 1.*t15717*t18065)*var2[7];
  p_output1[25]=(t18059*t18142 + t18153*t18690 + t18059*(t18119 + t18120 + t18121 + t18132*t18680 + t17958*t18684 + t18736) + t18132*(-1.*t18059*t18680 - 1.*t18038*t18684 - 1.*t18093*t18690 - 1.*t18106*t18697 + t18740 + t18742))*var2[3] + (t18030*t18264 + t18274*t18661 + t18030*(t18119 + t18222 + t18223 + t17920*t18655 + t18706 + t18736) + t17899*(t18526 - 1.*t18035*t18655 - 1.*t18087*t18672 + t18713 + t18740 + t18742))*var2[4] + (t17876*t18536 + t18027*t18554 + t17876*(t17894*t18027*t18085 + t18222 + t17876*t18538*t18648 + t17876*t18540*t18648 + t18706 + t18027*t18080*t5065) + t17914*(-1.*t17894*t18085*t18447 + t18526 - 1.*t18027*t18538*t18648 - 1.*t18027*t18540*t18648 + t18713 - 1.*t18080*t18447*t5065))*var2[5] + (t17876*t18516 + t18027*t18524 + t17876*(t18027*t18078 + t18222 + t17876*t18648 + t18706) + t17914*(-1.*t18078*t18447 + t18526 - 1.*t18027*t18648 + t18713))*var2[6];
  p_output1[26]=t18591 + t18690*var2[0] + (t17910*t18661 - 1.*t18697*t204)*var2[1] + (t17910*t18697 + t18661*t204)*var2[2] + (t18059*t18168 + t18132*(t17911*t18000*t18680 - 1.*t17916*t18000*t18684 + t18782) + t17911*t18000*(t18139 + t18140 + t18141 - 1.*t18132*t18680 - 1.*t17958*t18684 + t18788))*var2[3] + (t18030*t18306 + t17899*(t18000*t18655 + t18782) + t18011*(t18139 + t18262 + t18263 - 1.*t17920*t18655 - 1.*t17914*t18665 + t18788))*var2[4] + t17876*t18594*var2[5] + (-0.28121*t17069 + 0.305*t15717*t17069 + t17069*t18065)*var2[7];
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

#include "dJh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
