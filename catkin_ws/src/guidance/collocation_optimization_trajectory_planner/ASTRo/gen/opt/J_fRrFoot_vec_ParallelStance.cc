/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:07 GMT+02:00
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
  double t3220;
  double t38183;
  double t30724;
  double t42040;
  double t42909;
  double t41804;
  double t42920;
  double t35052;
  double t43010;
  double t43013;
  double t43018;
  double t40958;
  double t41284;
  double t43038;
  double t43063;
  double t43136;
  double t43237;
  double t43238;
  double t43239;
  double t43245;
  double t43247;
  double t43248;
  double t43249;
  double t43251;
  double t43253;
  double t43254;
  double t43255;
  double t43277;
  double t43280;
  double t43282;
  double t43358;
  double t43361;
  double t43137;
  double t43139;
  double t43161;
  double t42890;
  double t42925;
  double t42978;
  double t43019;
  double t43021;
  double t43023;
  double t43405;
  double t43408;
  double t43410;
  double t38176;
  double t40986;
  double t40997;
  double t43545;
  double t43546;
  double t43661;
  double t43684;
  double t43681;
  double t43009;
  double t43024;
  double t43025;
  double t43037;
  double t43165;
  double t43224;
  double t43757;
  double t43758;
  double t43761;
  double t43763;
  double t43766;
  double t43767;
  double t43769;
  double t43771;
  double t43776;
  double t43778;
  double t43782;
  double t43783;
  double t43786;
  double t43396;
  double t43398;
  double t43399;
  double t43713;
  double t43714;
  double t43716;
  double t43698;
  double t43705;
  double t43706;
  double t43665;
  double t43666;
  double t43668;
  double t43812;
  double t43819;
  double t43835;
  double t43690;
  double t43692;
  double t43693;
  double t43913;
  double t43919;
  double t43920;
  double t43936;
  double t43937;
  double t43938;
  double t43729;
  double t43735;
  double t43736;
  double t43738;
  double t43746;
  double t43748;
  double t43950;
  double t43951;
  double t43952;
  double t43953;
  double t43970;
  double t43974;
  double t43975;
  double t43976;
  double t43977;
  double t43981;
  double t43982;
  double t43983;
  double t43984;
  double t43788;
  double t43790;
  double t43791;
  double t43796;
  double t43800;
  double t43801;
  double t43923;
  double t43924;
  double t43925;
  double t43927;
  double t43928;
  double t43929;
  double t43989;
  double t43992;
  double t43993;
  double t43996;
  double t43997;
  double t43999;
  double t44013;
  double t44016;
  double t44018;
  double t44019;
  double t44020;
  double t44078;
  double t44079;
  double t44080;
  double t44081;
  double t44083;
  double t44084;
  double t44085;
  double t44086;
  double t44087;
  double t44012;
  double t44037;
  double t44041;
  double t44042;
  double t44088;
  double t44090;
  double t44091;
  double t44092;
  double t44093;
  double t44094;
  double t44125;
  double t44126;
  double t44127;
  double t44131;
  double t44132;
  double t44133;
  double t44059;
  double t44128;
  double t44129;
  double t44146;
  double t44148;
  double t44149;
  double t44139;
  double t44142;
  double t44143;
  double t44144;
  double t44145;
  double t44150;
  double t44151;
  double t44248;
  double t44249;
  double t44250;
  double t44159;
  double t44160;
  double t44161;
  double t44165;
  double t44182;
  double t44184;
  double t44186;
  double t44187;
  double t44247;
  double t44253;
  double t44207;
  double t44209;
  double t44211;
  double t44216;
  double t44226;
  double t44227;
  double t44228;
  double t44229;
  double t44237;
  double t44238;
  double t44239;
  double t44241;
  double t44246;
  double t44255;
  double t44323;
  double t44324;
  double t44325;
  double t44326;
  double t44328;
  double t44329;
  double t44330;
  double t44331;
  double t44257;
  double t44258;
  double t44263;
  double t44334;
  double t44335;
  double t44336;
  double t44269;
  double t44270;
  double t44273;
  double t44276;
  double t44279;
  double t44281;
  double t44282;
  double t44285;
  double t44289;
  double t44290;
  double t44293;
  double t44296;
  double t44300;
  double t44301;
  double t44306;
  double t44311;
  double t44312;
  double t44318;
  double t44319;
  double t44392;
  double t44393;
  double t44395;
  double t44396;
  double t44405;
  double t44406;
  double t44409;
  double t44411;
  double t44412;
  double t43281;
  double t43400;
  double t43403;
  double t44397;
  double t44398;
  double t44403;
  double t44408;
  double t44413;
  double t44414;
  double t44416;
  double t44417;
  double t44418;
  double t44480;
  double t44481;
  double t44488;
  double t44489;
  double t44490;
  double t44492;
  double t44493;
  double t44495;
  double t44482;
  double t44483;
  double t44484;
  double t44491;
  double t44496;
  double t44497;
  double t44499;
  double t44500;
  double t44501;
  double t43664;
  double t43669;
  double t43676;
  double t44256;
  double t44265;
  double t44280;
  double t44286;
  double t44297;
  double t44307;
  double t44564;
  double t44565;
  double t44566;
  double t44337;
  double t44568;
  double t44341;
  double t44573;
  double t44576;
  double t44577;
  double t44580;
  double t44581;
  double t44584;
  double t44585;
  double t44586;
  double t44352;
  double t44589;
  double t44355;
  double t44593;
  double t44598;
  double t44599;
  double t44600;
  double t44601;
  double t44365;
  double t44605;
  double t44609;
  double t44610;
  double t44611;
  double t44612;
  double t44378;
  double t44615;
  double t44618;
  double t44619;
  double t44620;
  double t44621;
  double t44404;
  double t44425;
  double t44426;
  double t44442;
  double t44443;
  double t44453;
  double t44462;
  double t44468;
  double t44486;
  double t44507;
  double t44516;
  double t44523;
  double t44524;
  double t44534;
  double t44541;
  double t44542;
  double t44668;
  double t44669;
  double t44794;
  double t44796;
  double t44676;
  double t44785;
  double t44786;
  double t44787;
  double t44789;
  double t44790;
  double t44791;
  double t44805;
  double t44807;
  double t44808;
  double t44711;
  double t44822;
  double t44823;
  double t44825;
  double t44716;
  double t44717;
  double t44864;
  double t44866;
  double t44867;
  double t44868;
  double t44870;
  double t44871;
  double t44883;
  double t44884;
  double t44921;
  double t44924;
  t3220 = Sin(var1[4]);
  t38183 = Cos(var1[15]);
  t30724 = Cos(var1[5]);
  t42040 = Cos(var1[17]);
  t42909 = Sin(var1[16]);
  t41804 = Cos(var1[16]);
  t42920 = Sin(var1[17]);
  t35052 = Sin(var1[15]);
  t43010 = -1.*t42040*t42909;
  t43013 = t41804*t42920;
  t43018 = t43010 + t43013;
  t40958 = Sin(var1[5]);
  t41284 = Cos(var1[4]);
  t43038 = -1.*t41804*t42040;
  t43063 = -1.*t42909*t42920;
  t43136 = t43038 + t43063;
  t43237 = t38183*t30724;
  t43238 = -1.*t35052*t40958;
  t43239 = t43237 + t43238;
  t43245 = var2[1]*t41284*t43239;
  t43247 = -1.*t30724*t35052*t43018;
  t43248 = -1.*t38183*t43018*t40958;
  t43249 = t43247 + t43248;
  t43251 = var2[2]*t41284*t43249;
  t43253 = -1.*t30724*t35052*t43136;
  t43254 = -1.*t38183*t43136*t40958;
  t43255 = t43253 + t43254;
  t43277 = var2[0]*t41284*t43255;
  t43280 = t43245 + t43251 + t43277;
  t43282 = t42040*t42909;
  t43358 = -1.*t41804*t42920;
  t43361 = t43282 + t43358;
  t43137 = t38183*t30724*t43136;
  t43139 = -1.*t35052*t43136*t40958;
  t43161 = t43137 + t43139;
  t42890 = t41804*t42040;
  t42925 = t42909*t42920;
  t42978 = t42890 + t42925;
  t43019 = t38183*t30724*t43018;
  t43021 = -1.*t35052*t43018*t40958;
  t43023 = t43019 + t43021;
  t43405 = t43018*t3220;
  t43408 = t41284*t43161;
  t43410 = t43405 + t43408;
  t38176 = t30724*t35052;
  t40986 = t38183*t40958;
  t40997 = t38176 + t40986;
  t43545 = t42978*t3220;
  t43546 = t41284*t43023;
  t43661 = t43545 + t43546;
  t43684 = Sin(var1[3]);
  t43681 = Cos(var1[3]);
  t43009 = t41284*t42978;
  t43024 = -1.*t3220*t43023;
  t43025 = t43009 + t43024;
  t43037 = t41284*t43018;
  t43165 = -1.*t3220*t43161;
  t43224 = t43037 + t43165;
  t43757 = t43681*t40997;
  t43758 = t43684*t3220*t43239;
  t43761 = t43757 + t43758;
  t43763 = var2[1]*t43761;
  t43766 = t43684*t3220*t43249;
  t43767 = t43681*t43023;
  t43769 = t43766 + t43767;
  t43771 = var2[2]*t43769;
  t43776 = t43684*t3220*t43255;
  t43778 = t43681*t43161;
  t43782 = t43776 + t43778;
  t43783 = var2[0]*t43782;
  t43786 = t43763 + t43771 + t43783;
  t43396 = t38183*t30724*t43361;
  t43398 = -1.*t35052*t43361*t40958;
  t43399 = t43396 + t43398;
  t43713 = t30724*t35052*t43136;
  t43714 = t38183*t43136*t40958;
  t43716 = t43713 + t43714;
  t43698 = t30724*t35052*t43018;
  t43705 = t38183*t43018*t40958;
  t43706 = t43698 + t43705;
  t43665 = t38183*t30724*t42978;
  t43666 = -1.*t35052*t42978*t40958;
  t43668 = t43665 + t43666;
  t43812 = t43681*t43716;
  t43819 = -1.*t43684*t43224;
  t43835 = t43812 + t43819;
  t43690 = -1.*t38183*t30724;
  t43692 = t35052*t40958;
  t43693 = t43690 + t43692;
  t43913 = t43681*t43706;
  t43919 = -1.*t43684*t43025;
  t43920 = t43913 + t43919;
  t43936 = t43684*t3220*t40997;
  t43937 = t43681*t43693;
  t43938 = t43936 + t43937;
  t43729 = -1.*t42978*t3220;
  t43735 = -1.*t41284*t43023;
  t43736 = t43729 + t43735;
  t43738 = -1.*t43018*t3220;
  t43746 = -1.*t41284*t43161;
  t43748 = t43738 + t43746;
  t43950 = t43684*t40997;
  t43951 = -1.*t43681*t3220*t43239;
  t43952 = t43950 + t43951;
  t43953 = var2[1]*t43952;
  t43970 = -1.*t43681*t3220*t43249;
  t43974 = t43684*t43023;
  t43975 = t43970 + t43974;
  t43976 = var2[2]*t43975;
  t43977 = -1.*t43681*t3220*t43255;
  t43981 = t43684*t43161;
  t43982 = t43977 + t43981;
  t43983 = var2[0]*t43982;
  t43984 = t43953 + t43976 + t43983;
  t43788 = t30724*t35052*t43361;
  t43790 = t38183*t43361*t40958;
  t43791 = t43788 + t43790;
  t43796 = t41284*t43136;
  t43800 = -1.*t3220*t43399;
  t43801 = t43796 + t43800;
  t43923 = t30724*t35052*t42978;
  t43924 = t38183*t42978*t40958;
  t43925 = t43923 + t43924;
  t43927 = t41284*t43361;
  t43928 = -1.*t3220*t43668;
  t43929 = t43927 + t43928;
  t43989 = t43684*t43716;
  t43992 = t43681*t43224;
  t43993 = t43989 + t43992;
  t43996 = t43684*t43706;
  t43997 = t43681*t43025;
  t43999 = t43996 + t43997;
  t44013 = -1.*t42040;
  t44016 = 1. + t44013;
  t44018 = -0.50321*t44016;
  t44019 = -0.23321*t42040;
  t44020 = t44018 + t44019;
  t44078 = -1.*t38183;
  t44079 = 1. + t44078;
  t44080 = -0.15121*t44079;
  t44081 = -1.*t41804;
  t44083 = 1. + t44081;
  t44084 = -0.28121*t44083;
  t44085 = t41804*t44020;
  t44086 = 0.27*t42909*t42920;
  t44087 = t44084 + t44085 + t44086;
  t44012 = 0.28121*t42909;
  t44037 = t44020*t42909;
  t44041 = -0.27*t41804*t42920;
  t44042 = t44012 + t44037 + t44041;
  t44088 = t38183*t44087;
  t44090 = t44080 + t44088;
  t44091 = t30724*t44090;
  t44092 = -0.15121*t38183;
  t44093 = 0.15121*t35052;
  t44094 = t35052*t44087;
  t44125 = t44080 + t44092 + t44093 + t44094;
  t44126 = -1.*t44125*t40958;
  t44127 = t44091 + t44126;
  t44131 = t44042*t3220;
  t44132 = t41284*t44127;
  t44133 = t44131 + t44132;
  t44059 = -1.*t44042*t3220;
  t44128 = -1.*t41284*t44127;
  t44129 = t44059 + t44128;
  t44146 = t41284*t44042;
  t44148 = -1.*t3220*t44127;
  t44149 = t44146 + t44148;
  t44139 = t30724*t44125;
  t44142 = t44090*t40958;
  t44143 = t44139 + t44142;
  t44144 = -1.*t43693*t44143;
  t44145 = -1.*t41284*t40997*t44133;
  t44150 = t3220*t40997*t44149;
  t44151 = t44144 + t44145 + t44150;
  t44248 = -1.*t30724*t44125;
  t44249 = -1.*t44090*t40958;
  t44250 = t44248 + t44249;
  t44159 = t43706*t44143;
  t44160 = t43661*t44133;
  t44161 = t43025*t44149;
  t44165 = t44159 + t44160 + t44161;
  t44182 = t43693*t44143;
  t44184 = t41284*t40997*t44133;
  t44186 = -1.*t3220*t40997*t44149;
  t44187 = t44182 + t44184 + t44186;
  t44247 = Power(t41284,2);
  t44253 = Power(t3220,2);
  t44207 = -1.*t43716*t44143;
  t44209 = -1.*t43410*t44133;
  t44211 = -1.*t43224*t44149;
  t44216 = t44207 + t44209 + t44211;
  t44226 = -1.*t43706*t44143;
  t44227 = -1.*t43661*t44133;
  t44228 = -1.*t43025*t44149;
  t44229 = t44226 + t44227 + t44228;
  t44237 = t43716*t44143;
  t44238 = t43410*t44133;
  t44239 = t43224*t44149;
  t44241 = t44237 + t44238 + t44239;
  t44246 = t41284*t43249*t44151;
  t44255 = -1.*t40997*t44143;
  t44323 = -0.15121*t35052;
  t44324 = -1.*t35052*t44087;
  t44325 = t44323 + t44324;
  t44326 = t30724*t44325;
  t44328 = 0.15121*t38183;
  t44329 = t44328 + t44088;
  t44330 = -1.*t44329*t40958;
  t44331 = t44326 + t44330;
  t44257 = -1.*t41284*t43239*t44133;
  t44258 = t3220*t43239*t44149;
  t44263 = t43023*t44143;
  t44334 = t30724*t44329;
  t44335 = t44325*t40958;
  t44336 = t44334 + t44335;
  t44269 = t41284*t43249*t44133;
  t44270 = -1.*t3220*t43249*t44149;
  t44273 = t41284*t43239*t44165;
  t44276 = t41284*t43255*t44187;
  t44279 = t40997*t44143;
  t44281 = t41284*t43239*t44133;
  t44282 = -1.*t3220*t43239*t44149;
  t44285 = -1.*t43161*t44143;
  t44289 = -1.*t41284*t43255*t44133;
  t44290 = t3220*t43255*t44149;
  t44293 = t41284*t43239*t44216;
  t44296 = -1.*t43023*t44143;
  t44300 = -1.*t41284*t43249*t44133;
  t44301 = t3220*t43249*t44149;
  t44306 = t43161*t44143;
  t44311 = t41284*t43255*t44133;
  t44312 = -1.*t3220*t43255*t44149;
  t44318 = t41284*t43255*t44229;
  t44319 = t41284*t43249*t44241;
  t44392 = -0.28121*t42909;
  t44393 = -1.*t44020*t42909;
  t44395 = 0.27*t41804*t42920;
  t44396 = t44392 + t44393 + t44395;
  t44405 = 0.28121*t41804;
  t44406 = t44405 + t44085 + t44086;
  t44409 = t38183*t30724*t44396;
  t44411 = -1.*t35052*t44396*t40958;
  t44412 = t44409 + t44411;
  t43281 = t43136*t3220;
  t43400 = t41284*t43399;
  t43403 = t43281 + t43400;
  t44397 = t30724*t35052*t44396;
  t44398 = t38183*t44396*t40958;
  t44403 = t44397 + t44398;
  t44408 = t44406*t3220;
  t44413 = t41284*t44412;
  t44414 = t44408 + t44413;
  t44416 = t41284*t44406;
  t44417 = -1.*t3220*t44412;
  t44418 = t44416 + t44417;
  t44480 = 0.27*t42040*t42909;
  t44481 = t44480 + t44041;
  t44488 = -0.27*t41804*t42040;
  t44489 = -0.27*t42909*t42920;
  t44490 = t44488 + t44489;
  t44492 = t38183*t30724*t44481;
  t44493 = -1.*t35052*t44481*t40958;
  t44495 = t44492 + t44493;
  t44482 = t30724*t35052*t44481;
  t44483 = t38183*t44481*t40958;
  t44484 = t44482 + t44483;
  t44491 = t44490*t3220;
  t44496 = t41284*t44495;
  t44497 = t44491 + t44496;
  t44499 = t41284*t44490;
  t44500 = -1.*t3220*t44495;
  t44501 = t44499 + t44500;
  t43664 = t43361*t3220;
  t43669 = t41284*t43668;
  t43676 = t43664 + t43669;
  t44256 = -1.*t43693*t44127;
  t44265 = t43706*t44127;
  t44280 = t43693*t44127;
  t44286 = -1.*t43716*t44127;
  t44297 = -1.*t43706*t44127;
  t44307 = t43716*t44127;
  t44564 = -1.*t40997*t44127;
  t44565 = t44144 + t44564;
  t44566 = t43023*t44565;
  t44337 = -1.*t43693*t44336;
  t44568 = -1.*t43239*t44127;
  t44341 = t43706*t44336;
  t44573 = t43249*t44127;
  t44576 = t44042*t42978;
  t44577 = t43023*t44127;
  t44580 = t44576 + t44159 + t44577;
  t44581 = t40997*t44580;
  t44584 = t40997*t44127;
  t44585 = t44182 + t44584;
  t44586 = t43161*t44585;
  t44352 = t43693*t44336;
  t44589 = t43239*t44127;
  t44355 = -1.*t43716*t44336;
  t44593 = -1.*t43255*t44127;
  t44598 = -1.*t44042*t43018;
  t44599 = -1.*t43161*t44127;
  t44600 = t44598 + t44207 + t44599;
  t44601 = t40997*t44600;
  t44365 = -1.*t43706*t44336;
  t44605 = -1.*t43249*t44127;
  t44609 = -1.*t44042*t42978;
  t44610 = -1.*t43023*t44127;
  t44611 = t44609 + t44226 + t44610;
  t44612 = t43161*t44611;
  t44378 = t43716*t44336;
  t44615 = t43255*t44127;
  t44618 = t44042*t43018;
  t44619 = t43161*t44127;
  t44620 = t44618 + t44237 + t44619;
  t44621 = t43023*t44620;
  t44404 = t43693*t44403;
  t44425 = -1.*t44403*t43716;
  t44426 = -1.*t43791*t44143;
  t44442 = t44403*t43716;
  t44443 = t43791*t44143;
  t44453 = -1.*t44403*t43706;
  t44462 = -1.*t43693*t44403;
  t44468 = t44403*t43706;
  t44486 = t43693*t44484;
  t44507 = -1.*t44484*t43716;
  t44516 = t44484*t43716;
  t44523 = -1.*t44484*t43706;
  t44524 = -1.*t43925*t44143;
  t44534 = -1.*t43693*t44484;
  t44541 = t44484*t43706;
  t44542 = t43925*t44143;
  t44668 = t44042*t43136;
  t44669 = t43018*t44406;
  t44794 = Power(t38183,2);
  t44796 = Power(t35052,2);
  t44676 = -1.*t44406*t42978;
  t44785 = t35052*t44090;
  t44786 = -1.*t38183*t44125;
  t44787 = t44785 + t44786;
  t44789 = -1.*t35052*t44090;
  t44790 = t38183*t44125;
  t44791 = t44789 + t44790;
  t44805 = -1.*t38183*t43018*t44090;
  t44807 = -1.*t35052*t43018*t44125;
  t44808 = t44609 + t44805 + t44807;
  t44711 = t43018*t44490;
  t44822 = t38183*t43136*t44090;
  t44823 = t35052*t43136*t44125;
  t44825 = t44618 + t44822 + t44823;
  t44716 = -1.*t43361*t44042;
  t44717 = -1.*t44490*t42978;
  t44864 = -0.15121*t43361;
  t44866 = -0.15121*t43018;
  t44867 = t44864 + t44866;
  t44868 = var2[0]*t44867;
  t44870 = t43136*t44087;
  t44871 = t44618 + t44870;
  t44883 = -1.*t43018*t44087;
  t44884 = t44883 + t44609;
  t44921 = 0.28121*t42040;
  t44924 = t44020*t42040;
  p_output1[0]=t43224*var2[0] - 1.*t3220*t40997*var2[1] + t43025*var2[2];
  p_output1[1]=t43280;
  p_output1[2]=t43280;
  p_output1[3]=t43403*var2[0] + t43410*var2[2];
  p_output1[4]=t43661*var2[0] + t43676*var2[2];
  p_output1[5]=t43410;
  p_output1[6]=t40997*t41284;
  p_output1[7]=t43661;
  p_output1[8]=(-1.*t43224*t43681 - 1.*t43684*t43716)*var2[0] + (t3220*t40997*t43681 - 1.*t43684*t43693)*var2[1] + (-1.*t43025*t43681 - 1.*t43684*t43706)*var2[2];
  p_output1[9]=-1.*t43684*t43748*var2[0] + t40997*t41284*t43684*var2[1] - 1.*t43684*t43736*var2[2];
  p_output1[10]=t43786;
  p_output1[11]=t43786;
  p_output1[12]=(t43681*t43791 - 1.*t43684*t43801)*var2[0] + t43835*var2[2];
  p_output1[13]=t43920*var2[0] + (t43681*t43925 - 1.*t43684*t43929)*var2[2];
  p_output1[14]=t43835;
  p_output1[15]=t43938;
  p_output1[16]=t43920;
  p_output1[17]=t43835*var2[0] + t43938*var2[1] + t43920*var2[2];
  p_output1[18]=t43681*t43748*var2[0] - 1.*t40997*t41284*t43681*var2[1] + t43681*t43736*var2[2];
  p_output1[19]=t43984;
  p_output1[20]=t43984;
  p_output1[21]=(t43684*t43791 + t43681*t43801)*var2[0] + t43993*var2[2];
  p_output1[22]=t43999*var2[0] + (t43684*t43925 + t43681*t43929)*var2[2];
  p_output1[23]=t43993;
  p_output1[24]=-1.*t3220*t40997*t43681 + t43684*t43693;
  p_output1[25]=t43999;
  p_output1[26]=(t43661*(t3220*t40997*t44129 + t3220*t40997*t44133) + t40997*t41284*(t43025*t44129 + t43025*t44133 + t43661*t44149 + t43736*t44149) + t43025*t44151 - 1.*t3220*t40997*t44165)*var2[0] + (t43410*(-1.*t43025*t44129 - 1.*t43025*t44133 - 1.*t43661*t44149 - 1.*t43736*t44149) + t43661*(t43224*t44129 + t43224*t44133 + t43410*t44149 + t43748*t44149) + t43224*t44229 + t43025*t44241)*var2[1] + (t43410*(-1.*t3220*t40997*t44129 - 1.*t3220*t40997*t44133) + t40997*t41284*(-1.*t43224*t44129 - 1.*t43224*t44133 - 1.*t43410*t44149 - 1.*t43748*t44149) + t43224*t44187 - 1.*t3220*t40997*t44216)*var2[2];
  p_output1[27]=(t44246 + t43661*(-1.*t40997*t44247*t44250 - 1.*t40997*t44250*t44253 + t44255 + t44256 + t44257 + t44258) + t40997*t41284*(-1.*t3220*t43025*t44250 + t41284*t43661*t44250 + t44263 + t44265 + t44269 + t44270) + t44273)*var2[0] + (t43410*(t3220*t43025*t44250 - 1.*t41284*t43661*t44250 + t44296 + t44297 + t44300 + t44301) + t43661*(-1.*t3220*t43224*t44250 + t41284*t43410*t44250 + t44306 + t44307 + t44311 + t44312) + t44318 + t44319)*var2[1] + (t44276 + t43410*(t40997*t44247*t44250 + t40997*t44250*t44253 + t44279 + t44280 + t44281 + t44282) + t40997*t41284*(t3220*t43224*t44250 - 1.*t41284*t43410*t44250 + t44285 + t44286 + t44289 + t44290) + t44293)*var2[2];
  p_output1[28]=(t44246 + t44273 + t43661*(t44255 + t44257 + t44258 - 1.*t40997*t44247*t44331 - 1.*t40997*t44253*t44331 + t44337) + t40997*t41284*(t44263 + t44269 + t44270 - 1.*t3220*t43025*t44331 + t41284*t43661*t44331 + t44341))*var2[0] + (t44318 + t44319 + t43410*(t44296 + t44300 + t44301 + t3220*t43025*t44331 - 1.*t41284*t43661*t44331 + t44365) + t43661*(t44306 + t44311 + t44312 - 1.*t3220*t43224*t44331 + t41284*t43410*t44331 + t44378))*var2[1] + (t44276 + t44293 + t43410*(t44279 + t44281 + t44282 + t40997*t44247*t44331 + t40997*t44253*t44331 + t44352) + t40997*t41284*(t44285 + t44289 + t44290 + t3220*t43224*t44331 - 1.*t41284*t43410*t44331 + t44355))*var2[2];
  p_output1[29]=(t43410*t44151 + t43661*(-1.*t40997*t41284*t44414 + t3220*t40997*t44418 + t44462) + t40997*t41284*(t44237 + t44238 + t44239 + t43661*t44414 + t43025*t44418 + t44468))*var2[0] + (t43403*t44229 + t43410*t44241 + t43661*(t43403*t44133 + t43801*t44149 + t43410*t44414 + t43224*t44418 + t44442 + t44443) + t43410*(t44207 + t44209 + t44211 - 1.*t43661*t44414 - 1.*t43025*t44418 + t44453))*var2[1] + (t43403*t44187 + t43410*(t44404 + t40997*t41284*t44414 - 1.*t3220*t40997*t44418) + t40997*t41284*(-1.*t43403*t44133 - 1.*t43801*t44149 - 1.*t43410*t44414 - 1.*t43224*t44418 + t44425 + t44426))*var2[2];
  p_output1[30]=(t43676*t44151 + t43661*(-1.*t40997*t41284*t44497 + t3220*t40997*t44501 + t44534) + t40997*t41284*(t43676*t44133 + t43929*t44149 + t43661*t44497 + t43025*t44501 + t44541 + t44542))*var2[0] + (t43661*t44229 + t43676*t44241 + t43661*(t44159 + t44160 + t44161 + t43410*t44497 + t43224*t44501 + t44516) + t43410*(-1.*t43676*t44133 - 1.*t43929*t44149 - 1.*t43661*t44497 - 1.*t43025*t44501 + t44523 + t44524))*var2[1] + (t43661*t44187 + t43410*(t44486 + t40997*t41284*t44497 - 1.*t3220*t40997*t44501) + t40997*t41284*(t44226 + t44227 + t44228 - 1.*t43410*t44497 - 1.*t43224*t44501 + t44507))*var2[2];
  p_output1[31]=t43661*t44151 + t40997*t41284*t44165;
  p_output1[32]=t43410*t44229 + t43661*t44241;
  p_output1[33]=t43410*t44187 + t40997*t41284*t44216;
  p_output1[34]=(t44566 + t43706*(-1.*t40997*t44250 + t44255 + t44256 + t44568) + t43693*(t43023*t44250 + t44263 + t44265 + t44573) + t44581)*var2[0] + (t43716*(-1.*t43023*t44250 + t44296 + t44297 + t44605) + t44612 + t43706*(t43161*t44250 + t44306 + t44307 + t44615) + t44621)*var2[1] + (t44586 + t43716*(t40997*t44250 + t44279 + t44280 + t44589) + t43693*(-1.*t43161*t44250 + t44285 + t44286 + t44593) + t44601)*var2[2];
  p_output1[35]=(t44566 + t43706*(t44255 - 1.*t40997*t44331 + t44337 + t44568) + t43693*(t44263 + t43023*t44331 + t44341 + t44573) + t44581)*var2[0] + (t43716*(t44296 - 1.*t43023*t44331 + t44365 + t44605) + t44612 + t43706*(t44306 + t43161*t44331 + t44378 + t44615) + t44621)*var2[1] + (t44586 + t43716*(t44279 + t40997*t44331 + t44352 + t44589) + t43693*(t44285 - 1.*t43161*t44331 + t44355 + t44593) + t44601)*var2[2];
  p_output1[36]=(t43706*(-1.*t40997*t44412 + t44462) + t43716*t44565 + t43693*(t44237 + t42978*t44406 + t43023*t44412 + t44468 + t44618 + t44619))*var2[0] + (t43791*t44611 + t43716*t44620 + t43706*(t43399*t44127 + t43161*t44412 + t44442 + t44443 + t44668 + t44669) + t43716*(t44207 - 1.*t43023*t44412 + t44453 + t44598 + t44599 + t44676))*var2[1] + (t43716*(t44404 + t40997*t44412) + t43693*(-1.*t43136*t44042 - 1.*t43399*t44127 - 1.*t43018*t44406 - 1.*t43161*t44412 + t44425 + t44426) + t43791*t44585)*var2[2];
  p_output1[37]=(t43706*(-1.*t40997*t44495 + t44534) + t43693*(t43361*t44042 + t43668*t44127 + t42978*t44490 + t43023*t44495 + t44541 + t44542) + t43925*t44565)*var2[0] + (t43706*t44611 + t43925*t44620 + t43706*(t44159 + t43161*t44495 + t44516 + t44576 + t44577 + t44711) + t43716*(-1.*t43668*t44127 - 1.*t43023*t44495 + t44523 + t44524 + t44716 + t44717))*var2[1] + (t43716*(t44486 + t40997*t44495) + t43706*t44585 + t43693*(t44226 - 1.*t43018*t44490 - 1.*t43161*t44495 + t44507 + t44609 + t44610))*var2[2];
  p_output1[38]=t43706*t44565 + t43693*t44580;
  p_output1[39]=t43716*t44611 + t43706*t44620;
  p_output1[40]=t43716*t44585 + t43693*t44600;
  p_output1[41]=t42978*(-1.*t38183*t44090 - 1.*t35052*t44125 - 1.*t35052*t44325 + t38183*t44329)*var2[0] + (t43018*(t35052*t43018*t44090 - 1.*t38183*t43018*t44125 - 1.*t38183*t43018*t44325 - 1.*t35052*t43018*t44329) + t42978*(-1.*t35052*t43136*t44090 + t38183*t43136*t44125 + t38183*t43136*t44325 + t35052*t43136*t44329))*var2[1] + t43018*(t38183*t44090 + t35052*t44125 + t35052*t44325 - 1.*t38183*t44329)*var2[2];
  p_output1[42]=t43018*t44791*var2[0] + (t43018*(-1.*t38183*t43136*t44090 - 1.*t35052*t43136*t44125 + t44598 + t44676 - 1.*t43018*t44396*t44794 - 1.*t43018*t44396*t44796) + t42978*(t38183*t43361*t44090 + t35052*t43361*t44125 + t44668 + t44669 + t43136*t44396*t44794 + t43136*t44396*t44796) + t43136*t44808 + t43018*t44825)*var2[1] + t43136*t44787*var2[2];
  p_output1[43]=t43361*t44791*var2[0] + (t43018*(-1.*t38183*t42978*t44090 - 1.*t35052*t42978*t44125 + t44716 + t44717 - 1.*t43018*t44481*t44794 - 1.*t43018*t44481*t44796) + t42978*(t38183*t43018*t44090 + t35052*t43018*t44125 + t44576 + t44711 + t43136*t44481*t44794 + t43136*t44481*t44796) + t42978*t44808 + t43361*t44825)*var2[1] + t42978*t44787*var2[2];
  p_output1[44]=t42978*t44791;
  p_output1[45]=t43018*t44808 + t42978*t44825;
  p_output1[46]=t43018*t44787;
  p_output1[47]=t44868 + (t42978*(t43361*t44087 + t43136*t44396 + t44668 + t44669) + t43018*(-1.*t43136*t44087 - 1.*t43018*t44396 + t44598 + t44676) + t43018*t44871 + t43136*t44884)*var2[1];
  p_output1[48]=t44868 + (t42978*(t43018*t44087 + t43136*t44481 + t44576 + t44711) + t43018*(-1.*t42978*t44087 - 1.*t43018*t44481 + t44716 + t44717) + t43361*t44871 + t42978*t44884)*var2[1];
  p_output1[49]=-0.15121*t42978 - 0.15121*t43136;
  p_output1[50]=-0.15121 + t42978*t44871 + t43018*t44884;
  p_output1[51]=(-0.27*Power(t42040,2) + t44921 + t44924)*var2[0] + (-0.28121*t42920 + 0.27*t42040*t42920 - 1.*t42920*t44020)*var2[2];
  p_output1[52]=0.28121*t42920 - 0.27*t42040*t42920 + t42920*t44020;
  p_output1[53]=0.27*Power(t42920,2) + t44921 + t44924;
  p_output1[54]=-0.27;
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

#include "J_fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
