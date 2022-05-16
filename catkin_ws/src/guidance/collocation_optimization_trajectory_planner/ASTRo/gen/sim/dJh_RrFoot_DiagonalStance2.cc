/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:51 GMT+02:00
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
  double t22570;
  double t25662;
  double t51293;
  double t51699;
  double t52060;
  double t52579;
  double t52684;
  double t52708;
  double t1244;
  double t21764;
  double t52713;
  double t52732;
  double t52707;
  double t52717;
  double t52718;
  double t1000;
  double t52733;
  double t52734;
  double t52735;
  double t52736;
  double t52742;
  double t52743;
  double t52744;
  double t52745;
  double t52746;
  double t52747;
  double t52796;
  double t52891;
  double t52896;
  double t52901;
  double t52904;
  double t52908;
  double t52909;
  double t52928;
  double t52929;
  double t52930;
  double t52939;
  double t52940;
  double t52941;
  double t52943;
  double t52944;
  double t52945;
  double t52946;
  double t52947;
  double t52949;
  double t52959;
  double t52960;
  double t52961;
  double t52969;
  double t52970;
  double t52971;
  double t52972;
  double t52974;
  double t52980;
  double t52981;
  double t52982;
  double t52983;
  double t52984;
  double t52985;
  double t52986;
  double t52987;
  double t52988;
  double t52968;
  double t52975;
  double t52976;
  double t52978;
  double t52989;
  double t52990;
  double t52991;
  double t52992;
  double t52993;
  double t52994;
  double t52995;
  double t52996;
  double t52997;
  double t53002;
  double t53003;
  double t53005;
  double t52979;
  double t52998;
  double t52999;
  double t53014;
  double t53015;
  double t53016;
  double t52965;
  double t52966;
  double t52967;
  double t53009;
  double t53010;
  double t53011;
  double t53037;
  double t53041;
  double t53042;
  double t53073;
  double t53077;
  double t53078;
  double t53151;
  double t53152;
  double t53153;
  double t53012;
  double t53173;
  double t53174;
  double t53177;
  double t53047;
  double t53191;
  double t53192;
  double t53193;
  double t53013;
  double t53017;
  double t53018;
  double t53179;
  double t53186;
  double t53180;
  double t53181;
  double t53182;
  double t53190;
  double t53196;
  double t53055;
  double t53056;
  double t53057;
  double t53085;
  double t53104;
  double t53263;
  double t53269;
  double t53280;
  double t53282;
  double t53086;
  double t53087;
  double t53090;
  double t53105;
  double t53110;
  double t53112;
  double t53128;
  double t53143;
  double t53129;
  double t53130;
  double t53132;
  double t53206;
  double t53208;
  double t53329;
  double t53331;
  double t53335;
  double t53337;
  double t53144;
  double t53145;
  double t53146;
  double t53154;
  double t53155;
  double t53156;
  double t53157;
  double t53158;
  double t53159;
  double t53160;
  double t53168;
  double t53169;
  double t53170;
  double t53171;
  double t53172;
  double t53371;
  double t53372;
  double t53373;
  double t53368;
  double t53369;
  double t53184;
  double t53379;
  double t53380;
  double t53381;
  double t53383;
  double t53384;
  double t53385;
  double t53194;
  double t53199;
  double t53200;
  double t53201;
  double t53202;
  double t53205;
  double t53386;
  double t53210;
  double t53211;
  double t53390;
  double t53217;
  double t53218;
  double t53232;
  double t53241;
  double t53243;
  double t53248;
  double t53250;
  double t53251;
  double t53252;
  double t53253;
  double t53257;
  double t53261;
  double t53268;
  double t53275;
  double t53276;
  double t53277;
  double t53278;
  double t53281;
  double t53287;
  double t53288;
  double t53289;
  double t53290;
  double t53423;
  double t53296;
  double t53297;
  double t53428;
  double t53303;
  double t53304;
  double t53307;
  double t53308;
  double t53312;
  double t53313;
  double t53315;
  double t53316;
  double t53317;
  double t53319;
  double t53322;
  double t53323;
  double t53324;
  double t53325;
  double t53326;
  double t53327;
  double t53330;
  double t53336;
  double t53341;
  double t53342;
  double t53343;
  double t53344;
  double t53347;
  double t53452;
  double t53350;
  double t53351;
  double t53456;
  double t53357;
  double t53358;
  double t53362;
  double t53473;
  double t53474;
  double t53475;
  double t53486;
  double t53488;
  double t53489;
  double t53494;
  double t53495;
  double t53496;
  double t53498;
  double t53499;
  double t53500;
  double t53509;
  double t53510;
  double t53511;
  double t53512;
  double t53513;
  double t53514;
  double t53515;
  double t53517;
  double t53518;
  double t53520;
  double t53516;
  double t53525;
  double t53526;
  double t53528;
  double t53534;
  double t53535;
  double t53536;
  double t53539;
  double t53540;
  double t53541;
  double t53557;
  double t53560;
  double t53573;
  double t53576;
  double t53568;
  double t53599;
  double t53601;
  double t53485;
  double t53490;
  double t53491;
  double t53606;
  double t52870;
  double t52872;
  double t52885;
  double t53640;
  double t53648;
  double t53650;
  double t53476;
  double t53477;
  double t53478;
  double t53479;
  double t53481;
  double t53482;
  double t53483;
  double t52954;
  double t52955;
  double t52956;
  double t53687;
  double t53688;
  double t53689;
  double t53690;
  double t53691;
  double t53694;
  double t53695;
  double t53696;
  double t53701;
  double t53702;
  double t53703;
  double t53693;
  double t53707;
  double t53708;
  double t53709;
  double t53714;
  double t53715;
  double t53716;
  double t53711;
  double t53713;
  double t53723;
  double t53724;
  double t53725;
  double t53727;
  double t53728;
  double t53729;
  double t53733;
  double t53735;
  double t53736;
  double t53553;
  double t53555;
  double t53563;
  double t53564;
  double t53582;
  double t53583;
  double t53584;
  double t53754;
  double t53593;
  double t53594;
  double t53595;
  double t53758;
  double t53760;
  double t53785;
  double t53793;
  double t53795;
  double t53741;
  double t53742;
  double t53743;
  double t53630;
  double t53631;
  double t53632;
  double t53837;
  double t53844;
  t22570 = Cos(var1[16]);
  t25662 = Cos(var1[17]);
  t51293 = -1.*t22570*t25662;
  t51699 = Sin(var1[16]);
  t52060 = Sin(var1[17]);
  t52579 = -1.*t51699*t52060;
  t52684 = t51293 + t52579;
  t52708 = Cos(var1[15]);
  t1244 = Cos(var1[5]);
  t21764 = Sin(var1[15]);
  t52713 = Sin(var1[5]);
  t52732 = Cos(var1[3]);
  t52707 = t1244*t21764*t52684;
  t52717 = t52708*t52684*t52713;
  t52718 = t52707 + t52717;
  t1000 = Sin(var1[3]);
  t52733 = Cos(var1[4]);
  t52734 = -1.*t25662*t51699;
  t52735 = t22570*t52060;
  t52736 = t52734 + t52735;
  t52742 = t52733*t52736;
  t52743 = Sin(var1[4]);
  t52744 = t52708*t1244*t52684;
  t52745 = -1.*t21764*t52684*t52713;
  t52746 = t52744 + t52745;
  t52747 = -1.*t52743*t52746;
  t52796 = t52742 + t52747;
  t52891 = t1244*t21764;
  t52896 = t52708*t52713;
  t52901 = t52891 + t52896;
  t52904 = -1.*t52708*t1244;
  t52908 = t21764*t52713;
  t52909 = t52904 + t52908;
  t52928 = t1244*t21764*t52736;
  t52929 = t52708*t52736*t52713;
  t52930 = t52928 + t52929;
  t52939 = t22570*t25662;
  t52940 = t51699*t52060;
  t52941 = t52939 + t52940;
  t52943 = t52733*t52941;
  t52944 = t52708*t1244*t52736;
  t52945 = -1.*t21764*t52736*t52713;
  t52946 = t52944 + t52945;
  t52947 = -1.*t52743*t52946;
  t52949 = t52943 + t52947;
  t52959 = -1.*t52736*t52743;
  t52960 = -1.*t52733*t52746;
  t52961 = t52959 + t52960;
  t52969 = -1.*t25662;
  t52970 = 1. + t52969;
  t52971 = -0.50321*t52970;
  t52972 = -0.23321*t25662;
  t52974 = t52971 + t52972;
  t52980 = -1.*t52708;
  t52981 = 1. + t52980;
  t52982 = -0.15121*t52981;
  t52983 = -1.*t22570;
  t52984 = 1. + t52983;
  t52985 = -0.28121*t52984;
  t52986 = t22570*t52974;
  t52987 = 0.27*t51699*t52060;
  t52988 = t52985 + t52986 + t52987;
  t52968 = 0.28121*t51699;
  t52975 = t52974*t51699;
  t52976 = -0.27*t22570*t52060;
  t52978 = t52968 + t52975 + t52976;
  t52989 = t52708*t52988;
  t52990 = t52982 + t52989;
  t52991 = t1244*t52990;
  t52992 = -0.15121*t52708;
  t52993 = 0.15121*t21764;
  t52994 = t21764*t52988;
  t52995 = t52982 + t52992 + t52993 + t52994;
  t52996 = -1.*t52995*t52713;
  t52997 = t52991 + t52996;
  t53002 = t52978*t52743;
  t53003 = t52733*t52997;
  t53005 = t53002 + t53003;
  t52979 = -1.*t52978*t52743;
  t52998 = -1.*t52733*t52997;
  t52999 = t52979 + t52998;
  t53014 = t52733*t52978;
  t53015 = -1.*t52743*t52997;
  t53016 = t53014 + t53015;
  t52965 = t52941*t52743;
  t52966 = t52733*t52946;
  t52967 = t52965 + t52966;
  t53009 = t1244*t52995;
  t53010 = t52990*t52713;
  t53011 = t53009 + t53010;
  t53037 = -1.*t52941*t52743;
  t53041 = -1.*t52733*t52946;
  t53042 = t53037 + t53041;
  t53073 = t52736*t52743;
  t53077 = t52733*t52746;
  t53078 = t53073 + t53077;
  t53151 = -1.*t1244*t21764*t52684;
  t53152 = -1.*t52708*t52684*t52713;
  t53153 = t53151 + t53152;
  t53012 = -1.*t52909*t53011;
  t53173 = -1.*t1244*t52995;
  t53174 = -1.*t52990*t52713;
  t53177 = t53173 + t53174;
  t53047 = t52930*t53011;
  t53191 = -1.*t1244*t21764*t52736;
  t53192 = -1.*t52708*t52736*t52713;
  t53193 = t53191 + t53192;
  t53013 = -1.*t52733*t52901*t53005;
  t53017 = t52743*t52901*t53016;
  t53018 = t53012 + t53013 + t53017;
  t53179 = -1.*t52901*t53011;
  t53186 = -1.*t52909*t52997;
  t53180 = t52708*t1244;
  t53181 = -1.*t21764*t52713;
  t53182 = t53180 + t53181;
  t53190 = t52946*t53011;
  t53196 = t52930*t52997;
  t53055 = t52967*t53005;
  t53056 = t52949*t53016;
  t53057 = t53047 + t53055 + t53056;
  t53085 = -1.*t52930*t53011;
  t53104 = t52718*t53011;
  t53263 = -1.*t52946*t53011;
  t53269 = -1.*t52930*t52997;
  t53280 = t52746*t53011;
  t53282 = t52718*t52997;
  t53086 = -1.*t52967*t53005;
  t53087 = -1.*t52949*t53016;
  t53090 = t53085 + t53086 + t53087;
  t53105 = t53078*t53005;
  t53110 = t52796*t53016;
  t53112 = t53104 + t53105 + t53110;
  t53128 = t52909*t53011;
  t53143 = -1.*t52718*t53011;
  t53129 = t52733*t52901*t53005;
  t53130 = -1.*t52743*t52901*t53016;
  t53132 = t53128 + t53129 + t53130;
  t53206 = Power(t52733,2);
  t53208 = Power(t52743,2);
  t53329 = t52901*t53011;
  t53331 = t52909*t52997;
  t53335 = -1.*t52746*t53011;
  t53337 = -1.*t52718*t52997;
  t53144 = -1.*t53078*t53005;
  t53145 = -1.*t52796*t53016;
  t53146 = t53143 + t53144 + t53145;
  t53154 = var2[0]*t52733*t53153;
  t53155 = t1000*t52743*t53153;
  t53156 = t52732*t52746;
  t53157 = t53155 + t53156;
  t53158 = var2[1]*t53157;
  t53159 = -1.*t52732*t52743*t53153;
  t53160 = t1000*t52746;
  t53168 = t53159 + t53160;
  t53169 = var2[2]*t53168;
  t53170 = -1.*t52901*t52997;
  t53171 = t53012 + t53170;
  t53172 = t52946*t53171;
  t53371 = -0.15121*t21764;
  t53372 = -1.*t21764*t52988;
  t53373 = t53371 + t53372;
  t53368 = 0.15121*t52708;
  t53369 = t53368 + t52989;
  t53184 = -1.*t53182*t52997;
  t53379 = t1244*t53373;
  t53380 = -1.*t53369*t52713;
  t53381 = t53379 + t53380;
  t53383 = t1244*t53369;
  t53384 = t53373*t52713;
  t53385 = t53383 + t53384;
  t53194 = t53193*t52997;
  t53199 = t52978*t52941;
  t53200 = t52946*t52997;
  t53201 = t53199 + t53047 + t53200;
  t53202 = t52901*t53201;
  t53205 = t52733*t53193*t53018;
  t53386 = -1.*t52909*t53385;
  t53210 = -1.*t52733*t53182*t53005;
  t53211 = t52743*t53182*t53016;
  t53390 = t52930*t53385;
  t53217 = t52733*t53193*t53005;
  t53218 = -1.*t52743*t53193*t53016;
  t53232 = t52733*t53182*t53057;
  t53241 = var2[0]*t52733*t53182;
  t53243 = t1000*t52901;
  t53248 = -1.*t52732*t52743*t53182;
  t53250 = t53243 + t53248;
  t53251 = var2[2]*t53250;
  t53252 = t52732*t52901;
  t53253 = t1000*t52743*t53182;
  t53257 = t53252 + t53253;
  t53261 = var2[1]*t53257;
  t53268 = -1.*t53193*t52997;
  t53275 = -1.*t52978*t52941;
  t53276 = -1.*t52946*t52997;
  t53277 = t53275 + t53085 + t53276;
  t53278 = t52746*t53277;
  t53281 = t53153*t52997;
  t53287 = t52978*t52736;
  t53288 = t52746*t52997;
  t53289 = t53287 + t53104 + t53288;
  t53290 = t52946*t53289;
  t53423 = -1.*t52930*t53385;
  t53296 = -1.*t52733*t53193*t53005;
  t53297 = t52743*t53193*t53016;
  t53428 = t52718*t53385;
  t53303 = t52733*t53153*t53005;
  t53304 = -1.*t52743*t53153*t53016;
  t53307 = t52733*t53153*t53090;
  t53308 = t52733*t53193*t53112;
  t53312 = var2[0]*t52733*t53193;
  t53313 = t1000*t52743*t53193;
  t53315 = t52732*t52946;
  t53316 = t53313 + t53315;
  t53317 = var2[1]*t53316;
  t53319 = -1.*t52732*t52743*t53193;
  t53322 = t1000*t52946;
  t53323 = t53319 + t53322;
  t53324 = var2[2]*t53323;
  t53325 = t52901*t52997;
  t53326 = t53128 + t53325;
  t53327 = t52746*t53326;
  t53330 = t53182*t52997;
  t53336 = -1.*t53153*t52997;
  t53341 = -1.*t52978*t52736;
  t53342 = -1.*t52746*t52997;
  t53343 = t53341 + t53143 + t53342;
  t53344 = t52901*t53343;
  t53347 = t52733*t53153*t53132;
  t53452 = t52909*t53385;
  t53350 = t52733*t53182*t53005;
  t53351 = -1.*t52743*t53182*t53016;
  t53456 = -1.*t52718*t53385;
  t53357 = -1.*t52733*t53153*t53005;
  t53358 = t52743*t53153*t53016;
  t53362 = t52733*t53182*t53146;
  t53473 = t25662*t51699;
  t53474 = -1.*t22570*t52060;
  t53475 = t53473 + t53474;
  t53486 = t52708*t1244*t53475;
  t53488 = -1.*t21764*t53475*t52713;
  t53489 = t53486 + t53488;
  t53494 = t1244*t21764*t53475;
  t53495 = t52708*t53475*t52713;
  t53496 = t53494 + t53495;
  t53498 = t52733*t52684;
  t53499 = -1.*t52743*t53489;
  t53500 = t53498 + t53499;
  t53509 = -0.28121*t51699;
  t53510 = -1.*t52974*t51699;
  t53511 = 0.27*t22570*t52060;
  t53512 = t53509 + t53510 + t53511;
  t53513 = t1244*t21764*t53512;
  t53514 = t52708*t53512*t52713;
  t53515 = t53513 + t53514;
  t53517 = t52708*t1244*t53512;
  t53518 = -1.*t21764*t53512*t52713;
  t53520 = t53517 + t53518;
  t53516 = -1.*t52909*t53515;
  t53525 = 0.28121*t22570;
  t53526 = t53525 + t52986 + t52987;
  t53528 = t53515*t52930;
  t53534 = t53526*t52743;
  t53535 = t52733*t53520;
  t53536 = t53534 + t53535;
  t53539 = t52733*t53526;
  t53540 = -1.*t52743*t53520;
  t53541 = t53539 + t53540;
  t53557 = t52978*t52684;
  t53560 = t52736*t53526;
  t53573 = Power(t52708,2);
  t53576 = Power(t21764,2);
  t53568 = -1.*t53526*t52941;
  t53599 = t53515*t52718;
  t53601 = t53496*t53011;
  t53485 = t52684*t52743;
  t53490 = t52733*t53489;
  t53491 = t53485 + t53490;
  t53606 = -1.*t53515*t52930;
  t52870 = t52732*t52718;
  t52872 = -1.*t1000*t52796;
  t52885 = t52870 + t52872;
  t53640 = t52909*t53515;
  t53648 = -1.*t53515*t52718;
  t53650 = -1.*t53496*t53011;
  t53476 = -0.15121*t53475;
  t53477 = -0.15121*t52736;
  t53478 = t53476 + t53477;
  t53479 = var2[15]*t53478;
  t53481 = -1.*t21764*t52990;
  t53482 = t52708*t52995;
  t53483 = t53481 + t53482;
  t52954 = t52732*t52930;
  t52955 = -1.*t1000*t52949;
  t52956 = t52954 + t52955;
  t53687 = 0.27*t25662*t51699;
  t53688 = t53687 + t52976;
  t53689 = t1244*t21764*t53688;
  t53690 = t52708*t53688*t52713;
  t53691 = t53689 + t53690;
  t53694 = t52708*t1244*t53688;
  t53695 = -1.*t21764*t53688*t52713;
  t53696 = t53694 + t53695;
  t53701 = t1244*t21764*t52941;
  t53702 = t52708*t52941*t52713;
  t53703 = t53701 + t53702;
  t53693 = -1.*t52909*t53691;
  t53707 = -0.27*t22570*t25662;
  t53708 = -0.27*t51699*t52060;
  t53709 = t53707 + t53708;
  t53714 = t52708*t1244*t52941;
  t53715 = -1.*t21764*t52941*t52713;
  t53716 = t53714 + t53715;
  t53711 = t53691*t52930;
  t53713 = t53703*t53011;
  t53723 = t53709*t52743;
  t53724 = t52733*t53696;
  t53725 = t53723 + t53724;
  t53727 = t52733*t53709;
  t53728 = -1.*t52743*t53696;
  t53729 = t53727 + t53728;
  t53733 = t53475*t52743;
  t53735 = t52733*t53716;
  t53736 = t53733 + t53735;
  t53553 = t52684*t52988;
  t53555 = t53287 + t53553;
  t53563 = -1.*t52736*t52988;
  t53564 = t53563 + t53275;
  t53582 = -1.*t52708*t52736*t52990;
  t53583 = -1.*t21764*t52736*t52995;
  t53584 = t53275 + t53582 + t53583;
  t53754 = t52736*t53709;
  t53593 = t52708*t52684*t52990;
  t53594 = t21764*t52684*t52995;
  t53595 = t53287 + t53593 + t53594;
  t53758 = -1.*t53475*t52978;
  t53760 = -1.*t53709*t52941;
  t53785 = t53691*t52718;
  t53793 = -1.*t53691*t52930;
  t53795 = -1.*t53703*t53011;
  t53741 = t52733*t53475;
  t53742 = -1.*t52743*t53716;
  t53743 = t53741 + t53742;
  t53630 = t21764*t52990;
  t53631 = -1.*t52708*t52995;
  t53632 = t53630 + t53631;
  t53837 = t52909*t53691;
  t53844 = -1.*t53691*t52718;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1000*t52718 - 1.*t52732*t52796)*var2[1] + t52885*var2[2];
  p_output1[10]=(t52732*t52743*t52901 - 1.*t1000*t52909)*var2[1] + (t1000*t52743*t52901 + t52732*t52909)*var2[2];
  p_output1[11]=(-1.*t1000*t52930 - 1.*t52732*t52949)*var2[1] + t52956*var2[2];
  p_output1[12]=t52796*var2[0] - 1.*t1000*t52961*var2[1] + t52732*t52961*var2[2] + (t52967*(t52743*t52901*t52999 + t52743*t52901*t53005) + t52949*t53018 + t52733*t52901*(t52949*t52999 + t52949*t53005 + t52967*t53016 + t53016*t53042) - 1.*t52743*t52901*t53057)*var2[3];
  p_output1[13]=-1.*t52743*t52901*var2[0] + t1000*t52733*t52901*var2[1] - 1.*t52732*t52733*t52901*var2[2] + ((-1.*t52949*t52999 - 1.*t52949*t53005 - 1.*t52967*t53016 - 1.*t53016*t53042)*t53078 + t52967*(t52796*t52999 + t52796*t53005 + t52961*t53016 + t53016*t53078) + t52796*t53090 + t52949*t53112)*var2[3];
  p_output1[14]=t52949*var2[0] - 1.*t1000*t53042*var2[1] + t52732*t53042*var2[2] + ((-1.*t52743*t52901*t52999 - 1.*t52743*t52901*t53005)*t53078 + t52733*t52901*(-1.*t52796*t52999 - 1.*t52796*t53005 - 1.*t52961*t53016 - 1.*t53016*t53078) + t52796*t53132 - 1.*t52743*t52901*t53146)*var2[3];
  p_output1[15]=t53154 + t53158 + t53169 + (t53205 + t52967*(t53179 + t53186 - 1.*t52901*t53177*t53206 - 1.*t52901*t53177*t53208 + t53210 + t53211) + t52733*t52901*(-1.*t52743*t52949*t53177 + t52733*t52967*t53177 + t53190 + t53196 + t53217 + t53218) + t53232)*var2[3] + (t53172 + t52930*(-1.*t52901*t53177 + t53179 + t53184 + t53186) + t52909*(t52946*t53177 + t53190 + t53194 + t53196) + t53202)*var2[4];
  p_output1[16]=t53241 + t53251 + t53261 + (t53078*(t52743*t52949*t53177 - 1.*t52733*t52967*t53177 + t53263 + t53269 + t53296 + t53297) + t52967*(-1.*t52743*t52796*t53177 + t52733*t53078*t53177 + t53280 + t53282 + t53303 + t53304) + t53307 + t53308)*var2[3] + (t52718*(-1.*t52946*t53177 + t53263 + t53268 + t53269) + t53278 + t52930*(t52746*t53177 + t53280 + t53281 + t53282) + t53290)*var2[4];
  p_output1[17]=t53312 + t53317 + t53324 + (t53347 + t53078*(t52901*t53177*t53206 + t52901*t53177*t53208 + t53329 + t53331 + t53350 + t53351) + t52733*t52901*(t52743*t52796*t53177 - 1.*t52733*t53078*t53177 + t53335 + t53337 + t53357 + t53358) + t53362)*var2[3] + (t53327 + t52718*(t52901*t53177 + t53329 + t53330 + t53331) + t52909*(-1.*t52746*t53177 + t53335 + t53336 + t53337) + t53344)*var2[4];
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t53154 + t53158 + t53169 + (t53205 + t53232 + t52967*(t53179 + t53210 + t53211 - 1.*t52901*t53206*t53381 - 1.*t52901*t53208*t53381 + t53386) + t52733*t52901*(t53190 + t53217 + t53218 - 1.*t52743*t52949*t53381 + t52733*t52967*t53381 + t53390))*var2[3] + (t53172 + t53202 + t52930*(t53179 + t53184 - 1.*t52901*t53381 + t53386) + t52909*(t53190 + t53194 + t52946*t53381 + t53390))*var2[4] + t52941*(-1.*t52708*t52990 - 1.*t21764*t52995 + t52708*t53369 - 1.*t21764*t53373)*var2[5];
  p_output1[46]=t53241 + t53251 + t53261 + (t53307 + t53308 + t53078*(t53263 + t53296 + t53297 + t52743*t52949*t53381 - 1.*t52733*t52967*t53381 + t53423) + t52967*(t53280 + t53303 + t53304 - 1.*t52743*t52796*t53381 + t52733*t53078*t53381 + t53428))*var2[3] + (t53278 + t53290 + t52718*(t53263 + t53268 - 1.*t52946*t53381 + t53423) + t52930*(t53280 + t53281 + t52746*t53381 + t53428))*var2[4] + (t52941*(-1.*t21764*t52684*t52990 + t52684*t52708*t52995 + t21764*t52684*t53369 + t52684*t52708*t53373) + t52736*(t21764*t52736*t52990 - 1.*t52708*t52736*t52995 - 1.*t21764*t52736*t53369 - 1.*t52708*t52736*t53373))*var2[5];
  p_output1[47]=t53312 + t53317 + t53324 + (t53347 + t53362 + t53078*(t53329 + t53350 + t53351 + t52901*t53206*t53381 + t52901*t53208*t53381 + t53452) + t52733*t52901*(t53335 + t53357 + t53358 + t52743*t52796*t53381 - 1.*t52733*t53078*t53381 + t53456))*var2[3] + (t53327 + t53344 + t52718*(t53329 + t53330 + t52901*t53381 + t53452) + t52909*(t53335 + t53336 - 1.*t52746*t53381 + t53456))*var2[4] + t52736*(t52708*t52990 + t21764*t52995 - 1.*t52708*t53369 + t21764*t53373)*var2[5];
  p_output1[48]=t53479 + t53491*var2[0] + (t52732*t53496 - 1.*t1000*t53500)*var2[1] + (t1000*t53496 + t52732*t53500)*var2[2] + (t53018*t53078 + t52967*(t53516 - 1.*t52733*t52901*t53536 + t52743*t52901*t53541) + t52733*t52901*(t53104 + t53105 + t53110 + t53528 + t52967*t53536 + t52949*t53541))*var2[3] + (t52718*t53171 + t52930*(t53516 - 1.*t52901*t53520) + t52909*(t53104 + t53287 + t53288 + t52946*t53520 + t52941*t53526 + t53528))*var2[4] + t52736*t53483*var2[5];
  p_output1[49]=(t53078*t53112 + t53090*t53491 + t52967*(t53005*t53491 + t53016*t53500 + t53078*t53536 + t52796*t53541 + t53599 + t53601) + t53078*(t53143 + t53144 + t53145 - 1.*t52967*t53536 - 1.*t52949*t53541 + t53606))*var2[3] + (t52718*t53289 + t53277*t53496 + t52930*(t52997*t53489 + t52746*t53520 + t53557 + t53560 + t53599 + t53601) + t52718*(t53143 + t53341 + t53342 - 1.*t52946*t53520 + t53568 + t53606))*var2[4] + (t52941*(t52708*t52990*t53475 + t21764*t52995*t53475 + t53557 + t53560 + t52684*t53512*t53573 + t52684*t53512*t53576) + t52736*(-1.*t52684*t52708*t52990 - 1.*t21764*t52684*t52995 + t53341 + t53568 - 1.*t52736*t53512*t53573 - 1.*t52736*t53512*t53576) + t52684*t53584 + t52736*t53595)*var2[5] + (t52736*t53555 + t52941*(t52988*t53475 + t52684*t53512 + t53557 + t53560) + t52684*t53564 + t52736*(-1.*t52684*t52988 + t53341 - 1.*t52736*t53512 + t53568))*var2[15];
  p_output1[50]=t53078*var2[0] + t52885*var2[1] + (t1000*t52718 + t52732*t52796)*var2[2] + (t53132*t53491 + t53078*(t52733*t52901*t53536 - 1.*t52743*t52901*t53541 + t53640) + t52733*t52901*(-1.*t53005*t53491 - 1.*t53016*t53500 - 1.*t53078*t53536 - 1.*t52796*t53541 + t53648 + t53650))*var2[3] + (t53326*t53496 + t52718*(t52901*t53520 + t53640) + t52909*(-1.*t52684*t52978 - 1.*t52997*t53489 - 1.*t52746*t53520 - 1.*t52736*t53526 + t53648 + t53650))*var2[4] + t52684*t53632*var2[5];
  p_output1[51]=t53479 + t52967*var2[0] + t52956*var2[1] + (t1000*t52930 + t52732*t52949)*var2[2] + (t52967*(t53693 - 1.*t52733*t52901*t53725 + t52743*t52901*t53729) + t53018*t53736 + t52733*t52901*(t53711 + t53713 + t52967*t53725 + t52949*t53729 + t53005*t53736 + t53016*t53743))*var2[3] + (t52930*(t53693 - 1.*t52901*t53696) + t53171*t53703 + t52909*(t52978*t53475 + t52946*t53696 + t52941*t53709 + t53711 + t53713 + t52997*t53716))*var2[4] + t53475*t53483*var2[5] + (0.28121*t25662 - 0.27*Power(t25662,2) + t25662*t52974)*var2[16];
  p_output1[52]=(t52967*t53090 + t53112*t53736 + t52967*(t53047 + t53055 + t53056 + t53078*t53725 + t52796*t53729 + t53785) + t53078*(-1.*t52967*t53725 - 1.*t52949*t53729 - 1.*t53005*t53736 - 1.*t53016*t53743 + t53793 + t53795))*var2[3] + (t52930*t53277 + t53289*t53703 + t52930*(t53047 + t53199 + t53200 + t52746*t53696 + t53754 + t53785) + t52718*(-1.*t52946*t53696 - 1.*t52997*t53716 + t53758 + t53760 + t53793 + t53795))*var2[4] + (t52941*t53584 + t53475*t53595 + t52941*(t52708*t52736*t52990 + t21764*t52736*t52995 + t53199 + t52684*t53573*t53688 + t52684*t53576*t53688 + t53754) + t52736*(-1.*t52708*t52941*t52990 - 1.*t21764*t52941*t52995 - 1.*t52736*t53573*t53688 - 1.*t52736*t53576*t53688 + t53758 + t53760))*var2[5] + (t53475*t53555 + t52941*t53564 + t52941*(t52736*t52988 + t53199 + t52684*t53688 + t53754) + t52736*(-1.*t52941*t52988 - 1.*t52736*t53688 + t53758 + t53760))*var2[15];
  p_output1[53]=t53736*var2[0] + (t52732*t53703 - 1.*t1000*t53743)*var2[1] + (t1000*t53703 + t52732*t53743)*var2[2] + (t52967*t53132 + t53078*(t52733*t52901*t53725 - 1.*t52743*t52901*t53729 + t53837) + t52733*t52901*(t53085 + t53086 + t53087 - 1.*t53078*t53725 - 1.*t52796*t53729 + t53844))*var2[3] + (t52930*t53326 + t52718*(t52901*t53696 + t53837) + t52909*(t53085 + t53275 + t53276 - 1.*t52746*t53696 - 1.*t52736*t53709 + t53844))*var2[4] + t52941*t53632*var2[5] + (-0.28121*t52060 + 0.27*t25662*t52060 - 1.*t52060*t52974)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
