/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:57 GMT+02:00
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
  double t7664;
  double t9346;
  double t8488;
  double t9902;
  double t10145;
  double t9826;
  double t10168;
  double t9269;
  double t10296;
  double t10339;
  double t10344;
  double t9552;
  double t9759;
  double t9987;
  double t10169;
  double t10183;
  double t11165;
  double t11166;
  double t11172;
  double t11173;
  double t11174;
  double t11175;
  double t11210;
  double t11213;
  double t11216;
  double t11218;
  double t11251;
  double t11286;
  double t11291;
  double t10359;
  double t10380;
  double t10383;
  double t11137;
  double t11141;
  double t11144;
  double t10345;
  double t10346;
  double t10347;
  double t11296;
  double t11301;
  double t11303;
  double t11340;
  double t11343;
  double t11349;
  double t9291;
  double t9623;
  double t9635;
  double t11356;
  double t11357;
  double t11358;
  double t11394;
  double t11378;
  double t10281;
  double t10348;
  double t10350;
  double t11124;
  double t11154;
  double t11157;
  double t11523;
  double t11524;
  double t11530;
  double t11537;
  double t11545;
  double t11546;
  double t11550;
  double t11551;
  double t11553;
  double t11554;
  double t11555;
  double t11561;
  double t11562;
  double t11307;
  double t11308;
  double t11309;
  double t11457;
  double t11458;
  double t11466;
  double t11417;
  double t11418;
  double t11419;
  double t11368;
  double t11369;
  double t11370;
  double t11606;
  double t11612;
  double t11618;
  double t11405;
  double t11406;
  double t11407;
  double t11655;
  double t11656;
  double t11673;
  double t11779;
  double t11781;
  double t11788;
  double t11491;
  double t11492;
  double t11494;
  double t11498;
  double t11502;
  double t11518;
  double t11838;
  double t11841;
  double t11842;
  double t11843;
  double t11844;
  double t11848;
  double t11849;
  double t11858;
  double t11864;
  double t11865;
  double t11866;
  double t11867;
  double t11873;
  double t11563;
  double t11565;
  double t11566;
  double t11584;
  double t11587;
  double t11601;
  double t11685;
  double t11701;
  double t11713;
  double t11724;
  double t11727;
  double t11729;
  double t11880;
  double t11886;
  double t11887;
  double t11890;
  double t11894;
  double t11900;
  double t11947;
  double t11948;
  double t11951;
  double t11953;
  double t11956;
  double t11971;
  double t11978;
  double t11985;
  double t11996;
  double t11997;
  double t12000;
  double t12001;
  double t12004;
  double t11946;
  double t11958;
  double t11961;
  double t11964;
  double t11984;
  double t12009;
  double t12010;
  double t12013;
  double t12014;
  double t12016;
  double t12017;
  double t12021;
  double t12025;
  double t12030;
  double t12031;
  double t12035;
  double t12036;
  double t12037;
  double t11966;
  double t12032;
  double t12033;
  double t12118;
  double t12122;
  double t12125;
  double t12061;
  double t12074;
  double t12088;
  double t12105;
  double t12113;
  double t12140;
  double t12144;
  double t12478;
  double t12499;
  double t12501;
  double t12177;
  double t12184;
  double t12186;
  double t12189;
  double t12221;
  double t12224;
  double t12228;
  double t12231;
  double t12477;
  double t12510;
  double t12246;
  double t12248;
  double t12251;
  double t12254;
  double t12313;
  double t12326;
  double t12344;
  double t12379;
  double t12429;
  double t12431;
  double t12433;
  double t12434;
  double t12468;
  double t12581;
  double t12753;
  double t12754;
  double t12755;
  double t12756;
  double t12757;
  double t12758;
  double t12759;
  double t12600;
  double t12619;
  double t12636;
  double t12762;
  double t12763;
  double t12764;
  double t12693;
  double t12694;
  double t12704;
  double t12707;
  double t12710;
  double t12712;
  double t12713;
  double t12716;
  double t12721;
  double t12722;
  double t12726;
  double t12729;
  double t12733;
  double t12734;
  double t12739;
  double t12744;
  double t12745;
  double t12748;
  double t12749;
  double t12919;
  double t12920;
  double t12921;
  double t12922;
  double t12924;
  double t12925;
  double t12926;
  double t11306;
  double t11316;
  double t11324;
  double t12914;
  double t12916;
  double t12917;
  double t12923;
  double t12927;
  double t12929;
  double t12931;
  double t12932;
  double t12934;
  double t12994;
  double t12996;
  double t12997;
  double t13002;
  double t13005;
  double t13007;
  double t13009;
  double t13010;
  double t12998;
  double t12999;
  double t13000;
  double t13006;
  double t13011;
  double t13013;
  double t13016;
  double t13024;
  double t13025;
  double t11366;
  double t11371;
  double t11373;
  double t12595;
  double t12639;
  double t12711;
  double t12717;
  double t12730;
  double t12740;
  double t13329;
  double t13330;
  double t13335;
  double t12766;
  double t13363;
  double t12769;
  double t13380;
  double t13391;
  double t13410;
  double t13424;
  double t13426;
  double t13445;
  double t13447;
  double t13448;
  double t12780;
  double t13451;
  double t12851;
  double t13461;
  double t13464;
  double t13465;
  double t13486;
  double t13495;
  double t12892;
  double t13508;
  double t13511;
  double t13512;
  double t13513;
  double t13515;
  double t12905;
  double t13517;
  double t13521;
  double t13522;
  double t13523;
  double t13524;
  double t12918;
  double t12939;
  double t12940;
  double t12951;
  double t12952;
  double t12960;
  double t12968;
  double t12977;
  double t13001;
  double t13031;
  double t13040;
  double t13178;
  double t13182;
  double t13215;
  double t13222;
  double t13223;
  double t13865;
  double t13880;
  double t15566;
  double t15568;
  double t14759;
  double t15547;
  double t15549;
  double t15552;
  double t15554;
  double t15555;
  double t15558;
  double t15562;
  double t15563;
  double t15564;
  double t15354;
  double t15378;
  double t15380;
  double t15587;
  double t15588;
  double t15590;
  double t15652;
  double t15655;
  double t15656;
  double t15657;
  double t15658;
  double t15661;
  double t15676;
  double t15677;
  double t15717;
  double t15718;
  t7664 = Sin(var1[4]);
  t9346 = Cos(var1[12]);
  t8488 = Cos(var1[5]);
  t9902 = Cos(var1[14]);
  t10145 = Sin(var1[13]);
  t9826 = Cos(var1[13]);
  t10168 = Sin(var1[14]);
  t9269 = Sin(var1[12]);
  t10296 = t9902*t10145;
  t10339 = -1.*t9826*t10168;
  t10344 = t10296 + t10339;
  t9552 = Sin(var1[5]);
  t9759 = Cos(var1[4]);
  t9987 = t9826*t9902;
  t10169 = t10145*t10168;
  t10183 = t9987 + t10169;
  t11165 = -1.*t9346*t8488;
  t11166 = t9269*t9552;
  t11172 = t11165 + t11166;
  t11173 = var2[1]*t9759*t11172;
  t11174 = -1.*t8488*t9269*t10344;
  t11175 = -1.*t9346*t10344*t9552;
  t11210 = t11174 + t11175;
  t11213 = var2[2]*t9759*t11210;
  t11216 = -1.*t8488*t9269*t10183;
  t11218 = -1.*t9346*t10183*t9552;
  t11251 = t11216 + t11218;
  t11286 = var2[0]*t9759*t11251;
  t11291 = t11173 + t11213 + t11286;
  t10359 = -1.*t9902*t10145;
  t10380 = t9826*t10168;
  t10383 = t10359 + t10380;
  t11137 = t9346*t8488*t10183;
  t11141 = -1.*t9269*t10183*t9552;
  t11144 = t11137 + t11141;
  t10345 = t9346*t8488*t10344;
  t10346 = -1.*t9269*t10344*t9552;
  t10347 = t10345 + t10346;
  t11296 = -1.*t9826*t9902;
  t11301 = -1.*t10145*t10168;
  t11303 = t11296 + t11301;
  t11340 = t10383*t7664;
  t11343 = t9759*t11144;
  t11349 = t11340 + t11343;
  t9291 = -1.*t8488*t9269;
  t9623 = -1.*t9346*t9552;
  t9635 = t9291 + t9623;
  t11356 = t10183*t7664;
  t11357 = t9759*t10347;
  t11358 = t11356 + t11357;
  t11394 = Sin(var1[3]);
  t11378 = Cos(var1[3]);
  t10281 = t9759*t10183;
  t10348 = -1.*t7664*t10347;
  t10350 = t10281 + t10348;
  t11124 = t9759*t10383;
  t11154 = -1.*t7664*t11144;
  t11157 = t11124 + t11154;
  t11523 = t11378*t9635;
  t11524 = t11394*t7664*t11172;
  t11530 = t11523 + t11524;
  t11537 = var2[1]*t11530;
  t11545 = t11394*t7664*t11210;
  t11546 = t11378*t10347;
  t11550 = t11545 + t11546;
  t11551 = var2[2]*t11550;
  t11553 = t11394*t7664*t11251;
  t11554 = t11378*t11144;
  t11555 = t11553 + t11554;
  t11561 = var2[0]*t11555;
  t11562 = t11537 + t11551 + t11561;
  t11307 = t9346*t8488*t10383;
  t11308 = -1.*t9269*t10383*t9552;
  t11309 = t11307 + t11308;
  t11457 = t8488*t9269*t10183;
  t11458 = t9346*t10183*t9552;
  t11466 = t11457 + t11458;
  t11417 = t8488*t9269*t10344;
  t11418 = t9346*t10344*t9552;
  t11419 = t11417 + t11418;
  t11368 = t9346*t8488*t11303;
  t11369 = -1.*t9269*t11303*t9552;
  t11370 = t11368 + t11369;
  t11606 = t11378*t11466;
  t11612 = -1.*t11394*t11157;
  t11618 = t11606 + t11612;
  t11405 = t9346*t8488;
  t11406 = -1.*t9269*t9552;
  t11407 = t11405 + t11406;
  t11655 = t11378*t11419;
  t11656 = -1.*t11394*t10350;
  t11673 = t11655 + t11656;
  t11779 = t11394*t7664*t9635;
  t11781 = t11378*t11407;
  t11788 = t11779 + t11781;
  t11491 = -1.*t10183*t7664;
  t11492 = -1.*t9759*t10347;
  t11494 = t11491 + t11492;
  t11498 = -1.*t10383*t7664;
  t11502 = -1.*t9759*t11144;
  t11518 = t11498 + t11502;
  t11838 = t11394*t9635;
  t11841 = -1.*t11378*t7664*t11172;
  t11842 = t11838 + t11841;
  t11843 = var2[1]*t11842;
  t11844 = -1.*t11378*t7664*t11210;
  t11848 = t11394*t10347;
  t11849 = t11844 + t11848;
  t11858 = var2[2]*t11849;
  t11864 = -1.*t11378*t7664*t11251;
  t11865 = t11394*t11144;
  t11866 = t11864 + t11865;
  t11867 = var2[0]*t11866;
  t11873 = t11843 + t11858 + t11867;
  t11563 = t8488*t9269*t10383;
  t11565 = t9346*t10383*t9552;
  t11566 = t11563 + t11565;
  t11584 = t9759*t11303;
  t11587 = -1.*t7664*t11309;
  t11601 = t11584 + t11587;
  t11685 = t8488*t9269*t11303;
  t11701 = t9346*t11303*t9552;
  t11713 = t11685 + t11701;
  t11724 = t9759*t10344;
  t11727 = -1.*t7664*t11370;
  t11729 = t11724 + t11727;
  t11880 = t11394*t11466;
  t11886 = t11378*t11157;
  t11887 = t11880 + t11886;
  t11890 = t11394*t11419;
  t11894 = t11378*t10350;
  t11900 = t11890 + t11894;
  t11947 = -1.*t9902;
  t11948 = 1. + t11947;
  t11951 = 0.50321*t11948;
  t11953 = 0.19821*t9902;
  t11956 = t11951 + t11953;
  t11971 = -1.*t9346;
  t11978 = 1. + t11971;
  t11985 = -1.*t9826;
  t11996 = 1. + t11985;
  t11997 = 0.28121*t11996;
  t12000 = t9826*t11956;
  t12001 = -0.305*t10145*t10168;
  t12004 = t11997 + t12000 + t12001;
  t11946 = 0.28121*t10145;
  t11958 = -1.*t11956*t10145;
  t11961 = -0.305*t9826*t10168;
  t11964 = t11946 + t11958 + t11961;
  t11984 = 0.15121*t11978;
  t12009 = t9346*t12004;
  t12010 = t11984 + t12009;
  t12013 = t8488*t12010;
  t12014 = -0.15121*t11978;
  t12016 = -0.15121*t9346;
  t12017 = -0.15121*t9269;
  t12021 = t9269*t12004;
  t12025 = t12014 + t12016 + t12017 + t12021;
  t12030 = -1.*t12025*t9552;
  t12031 = t12013 + t12030;
  t12035 = t11964*t7664;
  t12036 = t9759*t12031;
  t12037 = t12035 + t12036;
  t11966 = -1.*t11964*t7664;
  t12032 = -1.*t9759*t12031;
  t12033 = t11966 + t12032;
  t12118 = t9759*t11964;
  t12122 = -1.*t7664*t12031;
  t12125 = t12118 + t12122;
  t12061 = t8488*t12025;
  t12074 = t12010*t9552;
  t12088 = t12061 + t12074;
  t12105 = -1.*t11407*t12088;
  t12113 = -1.*t9759*t9635*t12037;
  t12140 = t7664*t9635*t12125;
  t12144 = t12105 + t12113 + t12140;
  t12478 = -1.*t8488*t12025;
  t12499 = -1.*t12010*t9552;
  t12501 = t12478 + t12499;
  t12177 = t11419*t12088;
  t12184 = t11358*t12037;
  t12186 = t10350*t12125;
  t12189 = t12177 + t12184 + t12186;
  t12221 = t11407*t12088;
  t12224 = t9759*t9635*t12037;
  t12228 = -1.*t7664*t9635*t12125;
  t12231 = t12221 + t12224 + t12228;
  t12477 = Power(t9759,2);
  t12510 = Power(t7664,2);
  t12246 = -1.*t11466*t12088;
  t12248 = -1.*t11349*t12037;
  t12251 = -1.*t11157*t12125;
  t12254 = t12246 + t12248 + t12251;
  t12313 = -1.*t11419*t12088;
  t12326 = -1.*t11358*t12037;
  t12344 = -1.*t10350*t12125;
  t12379 = t12313 + t12326 + t12344;
  t12429 = t11466*t12088;
  t12431 = t11349*t12037;
  t12433 = t11157*t12125;
  t12434 = t12429 + t12431 + t12433;
  t12468 = t9759*t11210*t12144;
  t12581 = -1.*t9635*t12088;
  t12753 = 0.15121*t9269;
  t12754 = -1.*t9269*t12004;
  t12755 = t12753 + t12754;
  t12756 = t8488*t12755;
  t12757 = t12016 + t12009;
  t12758 = -1.*t12757*t9552;
  t12759 = t12756 + t12758;
  t12600 = -1.*t9759*t11172*t12037;
  t12619 = t7664*t11172*t12125;
  t12636 = t10347*t12088;
  t12762 = t8488*t12757;
  t12763 = t12755*t9552;
  t12764 = t12762 + t12763;
  t12693 = t9759*t11210*t12037;
  t12694 = -1.*t7664*t11210*t12125;
  t12704 = t9759*t11172*t12189;
  t12707 = t9759*t11251*t12231;
  t12710 = t9635*t12088;
  t12712 = t9759*t11172*t12037;
  t12713 = -1.*t7664*t11172*t12125;
  t12716 = -1.*t11144*t12088;
  t12721 = -1.*t9759*t11251*t12037;
  t12722 = t7664*t11251*t12125;
  t12726 = t9759*t11172*t12254;
  t12729 = -1.*t10347*t12088;
  t12733 = -1.*t9759*t11210*t12037;
  t12734 = t7664*t11210*t12125;
  t12739 = t11144*t12088;
  t12744 = t9759*t11251*t12037;
  t12745 = -1.*t7664*t11251*t12125;
  t12748 = t9759*t11251*t12379;
  t12749 = t9759*t11210*t12434;
  t12919 = 0.28121*t9826;
  t12920 = -1.*t9826*t11956;
  t12921 = 0.305*t10145*t10168;
  t12922 = t12919 + t12920 + t12921;
  t12924 = t9346*t8488*t11964;
  t12925 = -1.*t9269*t11964*t9552;
  t12926 = t12924 + t12925;
  t11306 = t11303*t7664;
  t11316 = t9759*t11309;
  t11324 = t11306 + t11316;
  t12914 = t8488*t9269*t11964;
  t12916 = t9346*t11964*t9552;
  t12917 = t12914 + t12916;
  t12923 = t12922*t7664;
  t12927 = t9759*t12926;
  t12929 = t12923 + t12927;
  t12931 = t9759*t12922;
  t12932 = -1.*t7664*t12926;
  t12934 = t12931 + t12932;
  t12994 = -0.305*t9902*t10145;
  t12996 = 0.305*t9826*t10168;
  t12997 = t12994 + t12996;
  t13002 = -0.305*t9826*t9902;
  t13005 = t13002 + t12001;
  t13007 = t9346*t8488*t12997;
  t13009 = -1.*t9269*t12997*t9552;
  t13010 = t13007 + t13009;
  t12998 = t8488*t9269*t12997;
  t12999 = t9346*t12997*t9552;
  t13000 = t12998 + t12999;
  t13006 = t13005*t7664;
  t13011 = t9759*t13010;
  t13013 = t13006 + t13011;
  t13016 = t9759*t13005;
  t13024 = -1.*t7664*t13010;
  t13025 = t13016 + t13024;
  t11366 = t10344*t7664;
  t11371 = t9759*t11370;
  t11373 = t11366 + t11371;
  t12595 = -1.*t11407*t12031;
  t12639 = t11419*t12031;
  t12711 = t11407*t12031;
  t12717 = -1.*t11466*t12031;
  t12730 = -1.*t11419*t12031;
  t12740 = t11466*t12031;
  t13329 = -1.*t9635*t12031;
  t13330 = t12105 + t13329;
  t13335 = t10347*t13330;
  t12766 = -1.*t11407*t12764;
  t13363 = -1.*t11172*t12031;
  t12769 = t11419*t12764;
  t13380 = t11210*t12031;
  t13391 = t11964*t10183;
  t13410 = t10347*t12031;
  t13424 = t13391 + t12177 + t13410;
  t13426 = t9635*t13424;
  t13445 = t9635*t12031;
  t13447 = t12221 + t13445;
  t13448 = t11144*t13447;
  t12780 = t11407*t12764;
  t13451 = t11172*t12031;
  t12851 = -1.*t11466*t12764;
  t13461 = -1.*t11251*t12031;
  t13464 = -1.*t11964*t10383;
  t13465 = -1.*t11144*t12031;
  t13486 = t13464 + t12246 + t13465;
  t13495 = t9635*t13486;
  t12892 = -1.*t11419*t12764;
  t13508 = -1.*t11210*t12031;
  t13511 = -1.*t11964*t10183;
  t13512 = -1.*t10347*t12031;
  t13513 = t13511 + t12313 + t13512;
  t13515 = t11144*t13513;
  t12905 = t11466*t12764;
  t13517 = t11251*t12031;
  t13521 = t11964*t10383;
  t13522 = t11144*t12031;
  t13523 = t13521 + t12429 + t13522;
  t13524 = t10347*t13523;
  t12918 = t11407*t12917;
  t12939 = -1.*t12917*t11466;
  t12940 = -1.*t11566*t12088;
  t12951 = t12917*t11466;
  t12952 = t11566*t12088;
  t12960 = -1.*t11419*t12917;
  t12968 = -1.*t11407*t12917;
  t12977 = t11419*t12917;
  t13001 = t11407*t13000;
  t13031 = -1.*t13000*t11466;
  t13040 = -1.*t11407*t13000;
  t13178 = t11419*t13000;
  t13182 = t11713*t12088;
  t13215 = t13000*t11466;
  t13222 = -1.*t11419*t13000;
  t13223 = -1.*t11713*t12088;
  t13865 = t11964*t11303;
  t13880 = t10383*t12922;
  t15566 = Power(t9346,2);
  t15568 = Power(t9269,2);
  t14759 = -1.*t12922*t10183;
  t15547 = t9269*t12010;
  t15549 = -1.*t9346*t12025;
  t15552 = t15547 + t15549;
  t15554 = -1.*t9269*t12010;
  t15555 = t9346*t12025;
  t15558 = t15554 + t15555;
  t15562 = -1.*t9346*t10344*t12010;
  t15563 = -1.*t9269*t10344*t12025;
  t15564 = t13511 + t15562 + t15563;
  t15354 = t10383*t13005;
  t15378 = -1.*t10344*t11964;
  t15380 = -1.*t13005*t10183;
  t15587 = t9346*t10183*t12010;
  t15588 = t9269*t10183*t12025;
  t15590 = t13521 + t15587 + t15588;
  t15652 = -0.15121*t11303;
  t15655 = -0.15121*t10183;
  t15656 = t15652 + t15655;
  t15657 = var2[2]*t15656;
  t15658 = -1.*t10344*t12004;
  t15661 = t15658 + t13511;
  t15676 = t12004*t10183;
  t15677 = t13521 + t15676;
  t15717 = 0.28121*t9902;
  t15718 = -1.*t11956*t9902;
  p_output1[0]=t11157*var2[0] - 1.*t7664*t9635*var2[1] + t10350*var2[2];
  p_output1[1]=t11291;
  p_output1[2]=t11291;
  p_output1[3]=t11324*var2[0] + t11349*var2[2];
  p_output1[4]=t11358*var2[0] + t11373*var2[2];
  p_output1[5]=t11349;
  p_output1[6]=t9635*t9759;
  p_output1[7]=t11358;
  p_output1[8]=(-1.*t11157*t11378 - 1.*t11394*t11466)*var2[0] + (-1.*t11394*t11407 + t11378*t7664*t9635)*var2[1] + (-1.*t10350*t11378 - 1.*t11394*t11419)*var2[2];
  p_output1[9]=-1.*t11394*t11518*var2[0] + t11394*t9635*t9759*var2[1] - 1.*t11394*t11494*var2[2];
  p_output1[10]=t11562;
  p_output1[11]=t11562;
  p_output1[12]=(t11378*t11566 - 1.*t11394*t11601)*var2[0] + t11618*var2[2];
  p_output1[13]=t11673*var2[0] + (t11378*t11713 - 1.*t11394*t11729)*var2[2];
  p_output1[14]=t11618;
  p_output1[15]=t11788;
  p_output1[16]=t11673;
  p_output1[17]=t11618*var2[0] + t11788*var2[1] + t11673*var2[2];
  p_output1[18]=t11378*t11518*var2[0] - 1.*t11378*t9635*t9759*var2[1] + t11378*t11494*var2[2];
  p_output1[19]=t11873;
  p_output1[20]=t11873;
  p_output1[21]=(t11394*t11566 + t11378*t11601)*var2[0] + t11887*var2[2];
  p_output1[22]=t11900*var2[0] + (t11394*t11713 + t11378*t11729)*var2[2];
  p_output1[23]=t11887;
  p_output1[24]=t11394*t11407 - 1.*t11378*t7664*t9635;
  p_output1[25]=t11900;
  p_output1[26]=(t10350*t12144 - 1.*t12189*t7664*t9635 + t11358*(t12033*t7664*t9635 + t12037*t7664*t9635) + (t10350*t12033 + t10350*t12037 + t11358*t12125 + t11494*t12125)*t9635*t9759)*var2[0] + (t11349*(-1.*t10350*t12033 - 1.*t10350*t12037 - 1.*t11358*t12125 - 1.*t11494*t12125) + t11358*(t11157*t12033 + t11157*t12037 + t11349*t12125 + t11518*t12125) + t11157*t12379 + t10350*t12434)*var2[1] + (t11157*t12231 - 1.*t12254*t7664*t9635 + t11349*(-1.*t12033*t7664*t9635 - 1.*t12037*t7664*t9635) + (-1.*t11157*t12033 - 1.*t11157*t12037 - 1.*t11349*t12125 - 1.*t11518*t12125)*t9635*t9759)*var2[2];
  p_output1[27]=(t12468 + t12704 + t11358*(t12581 + t12595 + t12600 + t12619 - 1.*t12477*t12501*t9635 - 1.*t12501*t12510*t9635) + t9635*t9759*(t12636 + t12639 + t12693 + t12694 - 1.*t10350*t12501*t7664 + t11358*t12501*t9759))*var2[0] + (t12748 + t12749 + t11358*(t12739 + t12740 + t12744 + t12745 - 1.*t11157*t12501*t7664 + t11349*t12501*t9759) + t11349*(t12729 + t12730 + t12733 + t12734 + t10350*t12501*t7664 - 1.*t11358*t12501*t9759))*var2[1] + (t12707 + t12726 + t11349*(t12710 + t12711 + t12712 + t12713 + t12477*t12501*t9635 + t12501*t12510*t9635) + t9635*t9759*(t12716 + t12717 + t12721 + t12722 + t11157*t12501*t7664 - 1.*t11349*t12501*t9759))*var2[2];
  p_output1[28]=(t12468 + t12704 + t11358*(t12581 + t12600 + t12619 + t12766 - 1.*t12477*t12759*t9635 - 1.*t12510*t12759*t9635) + t9635*t9759*(t12636 + t12693 + t12694 + t12769 - 1.*t10350*t12759*t7664 + t11358*t12759*t9759))*var2[0] + (t12748 + t12749 + t11358*(t12739 + t12744 + t12745 + t12905 - 1.*t11157*t12759*t7664 + t11349*t12759*t9759) + t11349*(t12729 + t12733 + t12734 + t12892 + t10350*t12759*t7664 - 1.*t11358*t12759*t9759))*var2[1] + (t12707 + t12726 + t11349*(t12710 + t12712 + t12713 + t12780 + t12477*t12759*t9635 + t12510*t12759*t9635) + t9635*t9759*(t12716 + t12721 + t12722 + t12851 + t11157*t12759*t7664 - 1.*t11349*t12759*t9759))*var2[2];
  p_output1[29]=(t11349*t12144 + (t12429 + t12431 + t12433 + t11358*t12929 + t10350*t12934 + t12977)*t9635*t9759 + t11358*(t12968 + t12934*t7664*t9635 - 1.*t12929*t9635*t9759))*var2[0] + (t11324*t12379 + t11349*t12434 + t11358*(t11324*t12037 + t11601*t12125 + t11349*t12929 + t11157*t12934 + t12951 + t12952) + t11349*(t12246 + t12248 + t12251 - 1.*t11358*t12929 - 1.*t10350*t12934 + t12960))*var2[1] + (t11324*t12231 + (-1.*t11324*t12037 - 1.*t11601*t12125 - 1.*t11349*t12929 - 1.*t11157*t12934 + t12939 + t12940)*t9635*t9759 + t11349*(t12918 - 1.*t12934*t7664*t9635 + t12929*t9635*t9759))*var2[2];
  p_output1[30]=(t11373*t12144 + (t11373*t12037 + t11729*t12125 + t11358*t13013 + t10350*t13025 + t13178 + t13182)*t9635*t9759 + t11358*(t13040 + t13025*t7664*t9635 - 1.*t13013*t9635*t9759))*var2[0] + (t11358*t12379 + t11373*t12434 + t11358*(t12177 + t12184 + t12186 + t11349*t13013 + t11157*t13025 + t13215) + t11349*(-1.*t11373*t12037 - 1.*t11729*t12125 - 1.*t11358*t13013 - 1.*t10350*t13025 + t13222 + t13223))*var2[1] + (t11358*t12231 + (t12313 + t12326 + t12344 - 1.*t11349*t13013 - 1.*t11157*t13025 + t13031)*t9635*t9759 + t11349*(t13001 - 1.*t13025*t7664*t9635 + t13013*t9635*t9759))*var2[2];
  p_output1[31]=t11358*t12144 + t12189*t9635*t9759;
  p_output1[32]=t11349*t12379 + t11358*t12434;
  p_output1[33]=t11349*t12231 + t12254*t9635*t9759;
  p_output1[34]=(t13335 + t11407*(t10347*t12501 + t12636 + t12639 + t13380) + t13426 + t11419*(t12581 + t12595 + t13363 - 1.*t12501*t9635))*var2[0] + (t11466*(-1.*t10347*t12501 + t12729 + t12730 + t13508) + t13515 + t11419*(t11144*t12501 + t12739 + t12740 + t13517) + t13524)*var2[1] + (t13448 + t11407*(-1.*t11144*t12501 + t12716 + t12717 + t13461) + t13495 + t11466*(t12710 + t12711 + t13451 + t12501*t9635))*var2[2];
  p_output1[35]=(t13335 + t11407*(t12636 + t10347*t12759 + t12769 + t13380) + t13426 + t11419*(t12581 + t12766 + t13363 - 1.*t12759*t9635))*var2[0] + (t11466*(t12729 - 1.*t10347*t12759 + t12892 + t13508) + t13515 + t11419*(t12739 + t11144*t12759 + t12905 + t13517) + t13524)*var2[1] + (t13448 + t11407*(t12716 - 1.*t11144*t12759 + t12851 + t13461) + t13495 + t11466*(t12710 + t12780 + t13451 + t12759*t9635))*var2[2];
  p_output1[36]=(t11466*t13330 + t11407*(t12429 + t10183*t12922 + t10347*t12926 + t12977 + t13521 + t13522) + t11419*(t12968 - 1.*t12926*t9635))*var2[0] + (t11566*t13513 + t11466*t13523 + t11419*(t11309*t12031 + t11144*t12926 + t12951 + t12952 + t13865 + t13880) + t11466*(t12246 - 1.*t10347*t12926 + t12960 + t13464 + t13465 + t14759))*var2[1] + (t11407*(-1.*t11303*t11964 - 1.*t11309*t12031 - 1.*t10383*t12922 - 1.*t11144*t12926 + t12939 + t12940) + t11566*t13447 + t11466*(t12918 + t12926*t9635))*var2[2];
  p_output1[37]=(t11407*(t10344*t11964 + t11370*t12031 + t10183*t13005 + t10347*t13010 + t13178 + t13182) + t11713*t13330 + t11419*(t13040 - 1.*t13010*t9635))*var2[0] + (t11419*t13513 + t11713*t13523 + t11419*(t12177 + t11144*t13010 + t13215 + t13391 + t13410 + t15354) + t11466*(-1.*t11370*t12031 - 1.*t10347*t13010 + t13222 + t13223 + t15378 + t15380))*var2[1] + (t11419*t13447 + t11407*(t12313 - 1.*t10383*t13005 - 1.*t11144*t13010 + t13031 + t13511 + t13512) + t11466*(t13001 + t13010*t9635))*var2[2];
  p_output1[38]=t11419*t13330 + t11407*t13424;
  p_output1[39]=t11466*t13513 + t11419*t13523;
  p_output1[40]=t11466*t13447 + t11407*t13486;
  p_output1[41]=t10183*(t12025*t9269 + t12755*t9269 + t12010*t9346 - 1.*t12757*t9346)*var2[0] + (t10183*(-1.*t10183*t12010*t9269 + t10183*t12757*t9269 + t10183*t12025*t9346 + t10183*t12755*t9346) + t10383*(t10344*t12010*t9269 - 1.*t10344*t12757*t9269 - 1.*t10344*t12025*t9346 - 1.*t10344*t12755*t9346))*var2[1] + t10383*(-1.*t12025*t9269 - 1.*t12755*t9269 - 1.*t12010*t9346 + t12757*t9346)*var2[2];
  p_output1[42]=t10383*t15552*var2[0] + (t11303*t15564 + t10383*t15590 + t10383*(t13464 + t14759 - 1.*t10344*t11964*t15566 - 1.*t10344*t11964*t15568 - 1.*t10183*t12025*t9269 - 1.*t10183*t12010*t9346) + t10183*(t13865 + t13880 + t10183*t11964*t15566 + t10183*t11964*t15568 + t10383*t12025*t9269 + t10383*t12010*t9346))*var2[1] + t11303*t15558*var2[2];
  p_output1[43]=t10344*t15552*var2[0] + (t10183*t15564 + t10344*t15590 + t10183*(t13391 + t15354 + t10183*t12997*t15566 + t10183*t12997*t15568 + t10344*t12025*t9269 + t10344*t12010*t9346) + t10383*(t15378 + t15380 - 1.*t10344*t12997*t15566 - 1.*t10344*t12997*t15568 - 1.*t11303*t12025*t9269 - 1.*t11303*t12010*t9346))*var2[1] + t10183*t15558*var2[2];
  p_output1[44]=t10183*t15552;
  p_output1[45]=t10383*t15564 + t10183*t15590;
  p_output1[46]=t10383*t15558;
  p_output1[47]=t15657 + (t10183*(t10383*t12004 + t13391 + t13865 + t13880) + t10383*(-1.*t10183*t12004 + t13464 + t14759 + t15378) + t11303*t15661 + t10383*t15677)*var2[1];
  p_output1[48]=t15657 + (t10183*(t10344*t12004 + t10183*t12997 + t13391 + t15354) + t10383*(-1.*t11303*t12004 - 1.*t10344*t12997 + t15378 + t15380) + t10183*t15661 + t10344*t15677)*var2[1];
  p_output1[49]=-0.15121 + t10383*t15661 + t10183*t15677;
  p_output1[50]=-0.15121*t10344 - 0.15121*t10383;
  p_output1[51]=(t15717 + t15718 - 0.305*Power(t9902,2))*var2[0] + (-0.28121*t10168 + t10168*t11956 + 0.305*t10168*t9902)*var2[2];
  p_output1[52]=0.28121*t10168 - 1.*t10168*t11956 - 0.305*t10168*t9902;
  p_output1[53]=0.305*Power(t10168,2) + t15717 + t15718;
  p_output1[54]=-0.305;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
