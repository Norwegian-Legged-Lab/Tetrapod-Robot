/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:43 GMT+02:00
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
  double t15287;
  double t15324;
  double t18224;
  double t18348;
  double t18351;
  double t18364;
  double t18886;
  double t20638;
  double t12781;
  double t14007;
  double t21440;
  double t22165;
  double t18935;
  double t22154;
  double t22157;
  double t10962;
  double t22402;
  double t22566;
  double t22571;
  double t22574;
  double t22591;
  double t22678;
  double t22711;
  double t22752;
  double t22753;
  double t22754;
  double t22901;
  double t23021;
  double t23023;
  double t23025;
  double t23187;
  double t23188;
  double t23191;
  double t23241;
  double t23242;
  double t23244;
  double t23261;
  double t23265;
  double t23286;
  double t23308;
  double t23354;
  double t23358;
  double t23360;
  double t23369;
  double t23375;
  double t23379;
  double t23218;
  double t23221;
  double t23227;
  double t23239;
  double t23276;
  double t23277;
  double t23279;
  double t23310;
  double t23380;
  double t23381;
  double t23382;
  double t23384;
  double t23385;
  double t23386;
  double t23556;
  double t23557;
  double t23558;
  double t23560;
  double t23192;
  double t23200;
  double t23211;
  double t23574;
  double t23576;
  double t23580;
  double t23585;
  double t23587;
  double t23588;
  double t23284;
  double t23561;
  double t23567;
  double t23618;
  double t23619;
  double t23620;
  double t23184;
  double t23212;
  double t23214;
  double t23613;
  double t23614;
  double t23615;
  double t23921;
  double t23934;
  double t23943;
  double t23605;
  double t23610;
  double t23612;
  double t23616;
  double t23809;
  double t23811;
  double t23814;
  double t23961;
  double t23962;
  double t23963;
  double t23821;
  double t23979;
  double t23990;
  double t23992;
  double t23617;
  double t23621;
  double t23623;
  double t23966;
  double t23968;
  double t23969;
  double t23970;
  double t23971;
  double t23978;
  double t23998;
  double t23823;
  double t23825;
  double t23876;
  double t23944;
  double t23945;
  double t23946;
  double t23947;
  double t23950;
  double t23951;
  double t23953;
  double t23954;
  double t23955;
  double t23956;
  double t23957;
  double t23958;
  double t24066;
  double t24067;
  double t24068;
  double t24064;
  double t23972;
  double t24076;
  double t24077;
  double t24080;
  double t24082;
  double t24083;
  double t24084;
  double t23997;
  double t24003;
  double t24004;
  double t24005;
  double t24008;
  double t24014;
  double t24015;
  double t24017;
  double t24085;
  double t24019;
  double t24020;
  double t24089;
  double t24031;
  double t24038;
  double t24051;
  double t24115;
  double t24116;
  double t24117;
  double t24119;
  double t24120;
  double t24123;
  double t24127;
  double t24128;
  double t24129;
  double t24131;
  double t24132;
  double t24133;
  double t24143;
  double t24144;
  double t24145;
  double t24147;
  double t24148;
  double t24149;
  double t24146;
  double t24160;
  double t24161;
  double t24163;
  double t24165;
  double t24167;
  double t24169;
  double t24178;
  double t24179;
  double t24180;
  double t24182;
  double t24183;
  double t24184;
  double t24189;
  double t24190;
  double t24191;
  double t24109;
  double t24110;
  double t24112;
  double t24239;
  double t24240;
  double t24241;
  double t24242;
  double t24244;
  double t24248;
  double t24254;
  double t24257;
  double t24258;
  double t24262;
  double t24263;
  double t24265;
  double t24252;
  double t24277;
  double t24280;
  double t24346;
  double t24347;
  double t24370;
  double t24296;
  double t24342;
  double t24396;
  double t24397;
  double t24398;
  double t24400;
  double t24401;
  double t24402;
  double t24407;
  double t24408;
  double t24410;
  double t23003;
  double t23007;
  double t23011;
  double t23628;
  double t23630;
  double t23673;
  double t24195;
  double t24208;
  double t24577;
  double t24159;
  double t24171;
  double t24688;
  double t24690;
  double t24703;
  double t24709;
  double t24579;
  double t24581;
  double t24592;
  double t24670;
  double t24678;
  double t24679;
  double t24680;
  double t24681;
  double t24682;
  double t24683;
  double t24684;
  double t24685;
  double t24686;
  double t24689;
  double t24693;
  double t24694;
  double t24695;
  double t24696;
  double t24704;
  double t24714;
  double t24715;
  double t24793;
  double t24720;
  double t24724;
  double t24797;
  double t24734;
  double t24739;
  double t24762;
  double t24765;
  double t24821;
  double t24826;
  double t24899;
  double t24902;
  double t24849;
  double t24851;
  double t24118;
  double t24124;
  double t24125;
  double t24924;
  double t24928;
  double t24940;
  double t24947;
  double t24816;
  double t24817;
  double t24840;
  double t24841;
  double t24848;
  double t24891;
  double t24893;
  double t24894;
  double t24980;
  double t24988;
  double t24916;
  double t24917;
  double t24919;
  double t25014;
  double t25018;
  double t25022;
  double t24415;
  double t24416;
  double t24417;
  double t24503;
  double t24517;
  double t24523;
  double t24235;
  double t24236;
  double t24237;
  double t24968;
  double t24970;
  double t25082;
  double t24949;
  double t25083;
  double t25085;
  double t25086;
  double t25115;
  double t25116;
  double t25122;
  double t25124;
  double t25095;
  double t25100;
  double t25101;
  double t25103;
  double t25104;
  double t25105;
  double t25106;
  double t25107;
  double t25108;
  double t25109;
  double t25110;
  double t25111;
  double t25113;
  double t25118;
  double t25123;
  double t25128;
  double t25129;
  double t25132;
  double t25159;
  double t25135;
  double t25136;
  double t25164;
  double t25143;
  double t25144;
  double t25147;
  double t24435;
  double t24437;
  double t24438;
  double t25197;
  double t25207;
  double t25211;
  double t25182;
  double t25183;
  double t25184;
  double t25186;
  double t25187;
  double t25188;
  double t25190;
  double t25260;
  double t25266;
  double t24231;
  double t24232;
  double t24233;
  double t24215;
  double t24216;
  t15287 = Cos(var1[13]);
  t15324 = Cos(var1[14]);
  t18224 = t15287*t15324;
  t18348 = Sin(var1[13]);
  t18351 = Sin(var1[14]);
  t18364 = t18348*t18351;
  t18886 = t18224 + t18364;
  t20638 = Cos(var1[12]);
  t12781 = Cos(var1[5]);
  t14007 = Sin(var1[12]);
  t21440 = Sin(var1[5]);
  t22165 = Cos(var1[3]);
  t18935 = t12781*t14007*t18886;
  t22154 = t20638*t18886*t21440;
  t22157 = t18935 + t22154;
  t10962 = Sin(var1[3]);
  t22402 = Cos(var1[4]);
  t22566 = -1.*t15324*t18348;
  t22571 = t15287*t18351;
  t22574 = t22566 + t22571;
  t22591 = t22402*t22574;
  t22678 = Sin(var1[4]);
  t22711 = t20638*t12781*t18886;
  t22752 = -1.*t14007*t18886*t21440;
  t22753 = t22711 + t22752;
  t22754 = -1.*t22678*t22753;
  t22901 = t22591 + t22754;
  t23021 = -1.*t22574*t22678;
  t23023 = -1.*t22402*t22753;
  t23025 = t23021 + t23023;
  t23187 = t15324*t18348;
  t23188 = -1.*t15287*t18351;
  t23191 = t23187 + t23188;
  t23241 = -1.*t15324;
  t23242 = 1. + t23241;
  t23244 = 0.50321*t23242;
  t23261 = 0.19821*t15324;
  t23265 = t23244 + t23261;
  t23286 = -1.*t20638;
  t23308 = 1. + t23286;
  t23354 = -1.*t15287;
  t23358 = 1. + t23354;
  t23360 = 0.28121*t23358;
  t23369 = t15287*t23265;
  t23375 = -0.305*t18348*t18351;
  t23379 = t23360 + t23369 + t23375;
  t23218 = -1.*t12781*t14007;
  t23221 = -1.*t20638*t21440;
  t23227 = t23218 + t23221;
  t23239 = 0.28121*t18348;
  t23276 = -1.*t23265*t18348;
  t23277 = -0.305*t15287*t18351;
  t23279 = t23239 + t23276 + t23277;
  t23310 = 0.15121*t23308;
  t23380 = t20638*t23379;
  t23381 = t23310 + t23380;
  t23382 = t12781*t23381;
  t23384 = -0.15121*t23308;
  t23385 = -0.15121*t20638;
  t23386 = -0.15121*t14007;
  t23556 = t14007*t23379;
  t23557 = t23384 + t23385 + t23386 + t23556;
  t23558 = -1.*t23557*t21440;
  t23560 = t23382 + t23558;
  t23192 = t20638*t12781*t23191;
  t23200 = -1.*t14007*t23191*t21440;
  t23211 = t23192 + t23200;
  t23574 = t23279*t22678;
  t23576 = t22402*t23560;
  t23580 = t23574 + t23576;
  t23585 = t22402*t18886;
  t23587 = -1.*t22678*t23211;
  t23588 = t23585 + t23587;
  t23284 = -1.*t23279*t22678;
  t23561 = -1.*t22402*t23560;
  t23567 = t23284 + t23561;
  t23618 = t22402*t23279;
  t23619 = -1.*t22678*t23560;
  t23620 = t23618 + t23619;
  t23184 = t18886*t22678;
  t23212 = t22402*t23211;
  t23214 = t23184 + t23212;
  t23613 = t12781*t23557;
  t23614 = t23381*t21440;
  t23615 = t23613 + t23614;
  t23921 = -1.*t12781*t14007*t18886;
  t23934 = -1.*t20638*t18886*t21440;
  t23943 = t23921 + t23934;
  t23605 = t20638*t12781;
  t23610 = -1.*t14007*t21440;
  t23612 = t23605 + t23610;
  t23616 = -1.*t23612*t23615;
  t23809 = t12781*t14007*t23191;
  t23811 = t20638*t23191*t21440;
  t23814 = t23809 + t23811;
  t23961 = -1.*t12781*t23557;
  t23962 = -1.*t23381*t21440;
  t23963 = t23961 + t23962;
  t23821 = t23814*t23615;
  t23979 = -1.*t12781*t14007*t23191;
  t23990 = -1.*t20638*t23191*t21440;
  t23992 = t23979 + t23990;
  t23617 = -1.*t22402*t23227*t23580;
  t23621 = t22678*t23227*t23620;
  t23623 = t23616 + t23617 + t23621;
  t23966 = -1.*t23227*t23615;
  t23968 = -1.*t23612*t23560;
  t23969 = -1.*t20638*t12781;
  t23970 = t14007*t21440;
  t23971 = t23969 + t23970;
  t23978 = t23211*t23615;
  t23998 = t23814*t23560;
  t23823 = t23214*t23580;
  t23825 = t23588*t23620;
  t23876 = t23821 + t23823 + t23825;
  t23944 = var2[0]*t22402*t23943;
  t23945 = t10962*t22678*t23943;
  t23946 = t22165*t22753;
  t23947 = t23945 + t23946;
  t23950 = var2[1]*t23947;
  t23951 = -1.*t22165*t22678*t23943;
  t23953 = t10962*t22753;
  t23954 = t23951 + t23953;
  t23955 = var2[2]*t23954;
  t23956 = -1.*t23227*t23560;
  t23957 = t23616 + t23956;
  t23958 = t23211*t23957;
  t24066 = 0.15121*t14007;
  t24067 = -1.*t14007*t23379;
  t24068 = t24066 + t24067;
  t24064 = t23385 + t23380;
  t23972 = -1.*t23971*t23560;
  t24076 = t12781*t24068;
  t24077 = -1.*t24064*t21440;
  t24080 = t24076 + t24077;
  t24082 = t12781*t24064;
  t24083 = t24068*t21440;
  t24084 = t24082 + t24083;
  t23997 = t23992*t23560;
  t24003 = t23279*t18886;
  t24004 = t23211*t23560;
  t24005 = t24003 + t23821 + t24004;
  t24008 = t23227*t24005;
  t24014 = t22402*t23992*t23623;
  t24015 = Power(t22402,2);
  t24017 = Power(t22678,2);
  t24085 = -1.*t23612*t24084;
  t24019 = -1.*t22402*t23971*t23580;
  t24020 = t22678*t23971*t23620;
  t24089 = t23814*t24084;
  t24031 = t22402*t23992*t23580;
  t24038 = -1.*t22678*t23992*t23620;
  t24051 = t22402*t23971*t23876;
  t24115 = -1.*t15287*t15324;
  t24116 = -1.*t18348*t18351;
  t24117 = t24115 + t24116;
  t24119 = t20638*t12781*t22574;
  t24120 = -1.*t14007*t22574*t21440;
  t24123 = t24119 + t24120;
  t24127 = t12781*t14007*t22574;
  t24128 = t20638*t22574*t21440;
  t24129 = t24127 + t24128;
  t24131 = t22402*t24117;
  t24132 = -1.*t22678*t24123;
  t24133 = t24131 + t24132;
  t24143 = t12781*t14007*t23279;
  t24144 = t20638*t23279*t21440;
  t24145 = t24143 + t24144;
  t24147 = t20638*t12781*t23279;
  t24148 = -1.*t14007*t23279*t21440;
  t24149 = t24147 + t24148;
  t24146 = -1.*t23612*t24145;
  t24160 = 0.28121*t15287;
  t24161 = -1.*t15287*t23265;
  t24163 = 0.305*t18348*t18351;
  t24165 = t24160 + t24161 + t24163;
  t24167 = t23814*t24145;
  t24169 = t22157*t23615;
  t24178 = t24165*t22678;
  t24179 = t22402*t24149;
  t24180 = t24178 + t24179;
  t24182 = t22402*t24165;
  t24183 = -1.*t22678*t24149;
  t24184 = t24182 + t24183;
  t24189 = t22574*t22678;
  t24190 = t22402*t22753;
  t24191 = t24189 + t24190;
  t24109 = t14007*t23381;
  t24110 = -1.*t20638*t23557;
  t24112 = t24109 + t24110;
  t24239 = -0.305*t15324*t18348;
  t24240 = 0.305*t15287*t18351;
  t24241 = t24239 + t24240;
  t24242 = t12781*t14007*t24241;
  t24244 = t20638*t24241*t21440;
  t24248 = t24242 + t24244;
  t24254 = t20638*t12781*t24241;
  t24257 = -1.*t14007*t24241*t21440;
  t24258 = t24254 + t24257;
  t24262 = t12781*t14007*t24117;
  t24263 = t20638*t24117*t21440;
  t24265 = t24262 + t24263;
  t24252 = -1.*t23612*t24248;
  t24277 = -0.305*t15287*t15324;
  t24280 = t24277 + t23375;
  t24346 = t20638*t12781*t24117;
  t24347 = -1.*t14007*t24117*t21440;
  t24370 = t24346 + t24347;
  t24296 = t23814*t24248;
  t24342 = t24265*t23615;
  t24396 = t24280*t22678;
  t24397 = t22402*t24258;
  t24398 = t24396 + t24397;
  t24400 = t22402*t24280;
  t24401 = -1.*t22678*t24258;
  t24402 = t24400 + t24401;
  t24407 = t23191*t22678;
  t24408 = t22402*t24370;
  t24410 = t24407 + t24408;
  t23003 = t22165*t22157;
  t23007 = -1.*t10962*t22901;
  t23011 = t23003 + t23007;
  t23628 = -1.*t18886*t22678;
  t23630 = -1.*t22402*t23211;
  t23673 = t23628 + t23630;
  t24195 = t24191*t23580;
  t24208 = t22901*t23620;
  t24577 = -1.*t23814*t23615;
  t24159 = t23279*t22574;
  t24171 = t22753*t23560;
  t24688 = -1.*t23211*t23615;
  t24690 = -1.*t23814*t23560;
  t24703 = t22753*t23615;
  t24709 = t22157*t23560;
  t24579 = -1.*t23214*t23580;
  t24581 = -1.*t23588*t23620;
  t24592 = t24577 + t24579 + t24581;
  t24670 = t24169 + t24195 + t24208;
  t24678 = var2[0]*t22402*t23971;
  t24679 = t10962*t23227;
  t24680 = -1.*t22165*t22678*t23971;
  t24681 = t24679 + t24680;
  t24682 = var2[2]*t24681;
  t24683 = t22165*t23227;
  t24684 = t10962*t22678*t23971;
  t24685 = t24683 + t24684;
  t24686 = var2[1]*t24685;
  t24689 = -1.*t23992*t23560;
  t24693 = -1.*t23279*t18886;
  t24694 = -1.*t23211*t23560;
  t24695 = t24693 + t24577 + t24694;
  t24696 = t22753*t24695;
  t24704 = t23943*t23560;
  t24714 = t24159 + t24169 + t24171;
  t24715 = t23211*t24714;
  t24793 = -1.*t23814*t24084;
  t24720 = -1.*t22402*t23992*t23580;
  t24724 = t22678*t23992*t23620;
  t24797 = t22157*t24084;
  t24734 = t22402*t23943*t23580;
  t24739 = -1.*t22678*t23943*t23620;
  t24762 = t22402*t23943*t24592;
  t24765 = t22402*t23992*t24670;
  t24821 = t23279*t24117;
  t24826 = t22574*t24165;
  t24899 = Power(t20638,2);
  t24902 = Power(t14007,2);
  t24849 = -1.*t23279*t22574;
  t24851 = -1.*t24165*t18886;
  t24118 = t24117*t22678;
  t24124 = t22402*t24123;
  t24125 = t24118 + t24124;
  t24924 = t24145*t22157;
  t24928 = t24129*t23615;
  t24940 = -1.*t23814*t24145;
  t24947 = -1.*t22157*t23615;
  t24816 = -1.*t23191*t23379;
  t24817 = t24816 + t24693;
  t24840 = t23379*t18886;
  t24841 = t24159 + t24840;
  t24848 = -1.*t23191*t23279;
  t24891 = -1.*t20638*t23191*t23381;
  t24893 = -1.*t14007*t23191*t23557;
  t24894 = t24693 + t24891 + t24893;
  t24980 = t22574*t24280;
  t24988 = -1.*t24280*t18886;
  t24916 = t20638*t18886*t23381;
  t24917 = t14007*t18886*t23557;
  t24919 = t24159 + t24916 + t24917;
  t25014 = t24248*t22157;
  t25018 = -1.*t23814*t24248;
  t25022 = -1.*t24265*t23615;
  t24415 = t22402*t23191;
  t24416 = -1.*t22678*t24370;
  t24417 = t24415 + t24416;
  t24503 = t10962*t22678*t23227;
  t24517 = t22165*t23612;
  t24523 = t24503 + t24517;
  t24235 = t22165*t23814;
  t24236 = -1.*t10962*t23588;
  t24237 = t24235 + t24236;
  t24968 = -1.*t24191*t23580;
  t24970 = -1.*t22901*t23620;
  t25082 = t23612*t23615;
  t24949 = -1.*t22753*t23560;
  t25083 = t22402*t23227*t23580;
  t25085 = -1.*t22678*t23227*t23620;
  t25086 = t25082 + t25083 + t25085;
  t25115 = t23227*t23615;
  t25116 = t23612*t23560;
  t25122 = -1.*t22753*t23615;
  t25124 = -1.*t22157*t23560;
  t25095 = t24947 + t24968 + t24970;
  t25100 = var2[0]*t22402*t23992;
  t25101 = t10962*t22678*t23992;
  t25103 = t22165*t23211;
  t25104 = t25101 + t25103;
  t25105 = var2[1]*t25104;
  t25106 = -1.*t22165*t22678*t23992;
  t25107 = t10962*t23211;
  t25108 = t25106 + t25107;
  t25109 = var2[2]*t25108;
  t25110 = t23227*t23560;
  t25111 = t25082 + t25110;
  t25113 = t22753*t25111;
  t25118 = t23971*t23560;
  t25123 = -1.*t23943*t23560;
  t25128 = t24849 + t24947 + t24949;
  t25129 = t23227*t25128;
  t25132 = t22402*t23943*t25086;
  t25159 = t23612*t24084;
  t25135 = t22402*t23971*t23580;
  t25136 = -1.*t22678*t23971*t23620;
  t25164 = -1.*t22157*t24084;
  t25143 = -1.*t22402*t23943*t23580;
  t25144 = t22678*t23943*t23620;
  t25147 = t22402*t23971*t25095;
  t24435 = t10962*t22157;
  t24437 = t22165*t22901;
  t24438 = t24435 + t24437;
  t25197 = t23612*t24145;
  t25207 = -1.*t24145*t22157;
  t25211 = -1.*t24129*t23615;
  t25182 = -0.15121*t24117;
  t25183 = -0.15121*t18886;
  t25184 = t25182 + t25183;
  t25186 = var2[12]*t25184;
  t25187 = -1.*t14007*t23381;
  t25188 = t20638*t23557;
  t25190 = t25187 + t25188;
  t25260 = t23612*t24248;
  t25266 = -1.*t24248*t22157;
  t24231 = t10962*t23814;
  t24232 = t22165*t23588;
  t24233 = t24231 + t24232;
  t24215 = 0.28121*t15324;
  t24216 = -1.*t23265*t15324;
  p_output1[0]=(-1.*t10962*t22157 - 1.*t22165*t22901)*var2[1] + t23011*var2[2];
  p_output1[1]=t22901*var2[0] - 1.*t10962*t23025*var2[1] + t22165*t23025*var2[2] + (t23214*(t22678*t23227*t23567 + t22678*t23227*t23580) + t23588*t23623 + t22402*t23227*(t23567*t23588 + t23580*t23588 + t23214*t23620 + t23620*t23673) - 1.*t22678*t23227*t23876)*var2[3];
  p_output1[2]=t23944 + t23950 + t23955 + (t24014 + t23214*(t23966 + t23968 - 1.*t23227*t23963*t24015 - 1.*t23227*t23963*t24017 + t24019 + t24020) + t22402*t23227*(t22402*t23214*t23963 - 1.*t22678*t23588*t23963 + t23978 + t23998 + t24031 + t24038) + t24051)*var2[3] + (t23958 + t23814*(-1.*t23227*t23963 + t23966 + t23968 + t23972) + t23612*(t23211*t23963 + t23978 + t23997 + t23998) + t24008)*var2[4];
  p_output1[3]=t23944 + t23950 + t23955 + (t24014 + t24051 + t23214*(t23966 + t24019 + t24020 - 1.*t23227*t24015*t24080 - 1.*t23227*t24017*t24080 + t24085) + t22402*t23227*(t23978 + t24031 + t24038 + t22402*t23214*t24080 - 1.*t22678*t23588*t24080 + t24089))*var2[3] + (t23958 + t24008 + t23814*(t23966 + t23972 - 1.*t23227*t24080 + t24085) + t23612*(t23978 + t23997 + t23211*t24080 + t24089))*var2[4] + t18886*(t20638*t23381 + t14007*t23557 - 1.*t20638*t24064 + t14007*t24068)*var2[5];
  p_output1[4]=t24125*var2[0] + (t22165*t24129 - 1.*t10962*t24133)*var2[1] + (t10962*t24129 + t22165*t24133)*var2[2] + (t23214*(t24146 - 1.*t22402*t23227*t24180 + t22678*t23227*t24184) + t23623*t24191 + t22402*t23227*(t24167 + t24169 + t23214*t24180 + t23588*t24184 + t24195 + t24208))*var2[3] + (t22157*t23957 + t23814*(t24146 - 1.*t23227*t24149) + t23612*(t23211*t24149 + t24159 + t18886*t24165 + t24167 + t24169 + t24171))*var2[4] + t22574*t24112*var2[5];
  p_output1[5]=t23214*var2[0] + t24237*var2[1] + t24233*var2[2] + (t23214*(t24252 - 1.*t22402*t23227*t24398 + t22678*t23227*t24402) + t23623*t24410 + t22402*t23227*(t24296 + t24342 + t23214*t24398 + t23588*t24402 + t23580*t24410 + t23620*t24417))*var2[3] + (t23814*(t24252 - 1.*t23227*t24258) + t23957*t24265 + t23612*(t23191*t23279 + t23211*t24258 + t18886*t24280 + t24296 + t24342 + t23560*t24370))*var2[4] + t23191*t24112*var2[5] + (-0.305*Power(t15324,2) + t24215 + t24216)*var2[13];
  p_output1[6]=t24191;
  p_output1[7]=t23011;
  p_output1[8]=t24438;
  p_output1[9]=t23214*t23623 + t22402*t23227*t23876;
  p_output1[10]=t23814*t23957 + t23612*t24005;
  p_output1[11]=t18886*t24112;
  p_output1[12]=0.28121*t18351 - 0.305*t15324*t18351 - 1.*t18351*t23265;
  p_output1[13]=(t22165*t22678*t23227 - 1.*t10962*t23612)*var2[1] + t24523*var2[2];
  p_output1[14]=-1.*t22678*t23227*var2[0] + t10962*t22402*t23227*var2[1] - 1.*t22165*t22402*t23227*var2[2] + ((-1.*t23567*t23588 - 1.*t23580*t23588 - 1.*t23214*t23620 - 1.*t23620*t23673)*t24191 + t23214*(t22901*t23567 + t22901*t23580 + t23025*t23620 + t23620*t24191) + t22901*t24592 + t23588*t24670)*var2[3];
  p_output1[15]=t24678 + t24682 + t24686 + (t24191*(-1.*t22402*t23214*t23963 + t22678*t23588*t23963 + t24688 + t24690 + t24720 + t24724) + t23214*(-1.*t22678*t22901*t23963 + t22402*t23963*t24191 + t24703 + t24709 + t24734 + t24739) + t24762 + t24765)*var2[3] + (t22157*(-1.*t23211*t23963 + t24688 + t24689 + t24690) + t24696 + t23814*(t22753*t23963 + t24703 + t24704 + t24709) + t24715)*var2[4];
  p_output1[16]=t24678 + t24682 + t24686 + (t24762 + t24765 + t24191*(-1.*t22402*t23214*t24080 + t22678*t23588*t24080 + t24688 + t24720 + t24724 + t24793) + t23214*(-1.*t22678*t22901*t24080 + t22402*t24080*t24191 + t24703 + t24734 + t24739 + t24797))*var2[3] + (t24696 + t24715 + t22157*(-1.*t23211*t24080 + t24688 + t24689 + t24793) + t23814*(t22753*t24080 + t24703 + t24704 + t24797))*var2[4] + (t18886*(-1.*t14007*t18886*t23381 + t18886*t20638*t23557 + t14007*t18886*t24064 + t18886*t20638*t24068) + t22574*(t14007*t23191*t23381 - 1.*t20638*t23191*t23557 - 1.*t14007*t23191*t24064 - 1.*t20638*t23191*t24068))*var2[5];
  p_output1[17]=(t24125*t24592 + t24191*t24670 + t23214*(t23580*t24125 + t23620*t24133 + t22901*t24184 + t24180*t24191 + t24924 + t24928) + t24191*(-1.*t23214*t24180 - 1.*t23588*t24184 + t24940 + t24947 + t24968 + t24970))*var2[3] + (t24129*t24695 + t22157*t24714 + t23814*(t23560*t24123 + t22753*t24149 + t24821 + t24826 + t24924 + t24928) + t22157*(-1.*t23211*t24149 + t24849 + t24851 + t24940 + t24947 + t24949))*var2[4] + (t24117*t24894 + t18886*(t20638*t22574*t23381 + t14007*t22574*t23557 + t24821 + t24826 + t18886*t23279*t24899 + t18886*t23279*t24902) + t22574*(-1.*t18886*t20638*t23381 - 1.*t14007*t18886*t23557 + t24849 + t24851 - 1.*t23191*t23279*t24899 - 1.*t23191*t23279*t24902) + t22574*t24919)*var2[5] + (t24117*t24817 + t18886*(t22574*t23379 + t24003 + t24821 + t24826) + t22574*t24841 + t22574*(-1.*t18886*t23379 + t24848 + t24849 + t24851))*var2[12];
  p_output1[18]=(t23214*t24592 + t24410*t24670 + t23214*(t23821 + t23823 + t23825 + t24191*t24398 + t22901*t24402 + t25014) + t24191*(-1.*t23214*t24398 - 1.*t23588*t24402 - 1.*t23580*t24410 - 1.*t23620*t24417 + t25018 + t25022))*var2[3] + (t23814*t24695 + t24265*t24714 + t23814*(t23821 + t24003 + t24004 + t22753*t24258 + t24980 + t25014) + t22157*(-1.*t23211*t24258 - 1.*t23560*t24370 + t24848 + t24988 + t25018 + t25022))*var2[4] + (t18886*t24894 + t23191*t24919 + t18886*(t20638*t23191*t23381 + t14007*t23191*t23557 + t24003 + t18886*t24241*t24899 + t18886*t24241*t24902 + t24980) + t22574*(-1.*t20638*t23381*t24117 - 1.*t14007*t23557*t24117 + t24848 - 1.*t23191*t24241*t24899 - 1.*t23191*t24241*t24902 + t24988))*var2[5] + (t18886*t24817 + t23191*t24841 + t18886*(t23191*t23379 + t24003 + t18886*t24241 + t24980) + t22574*(-1.*t23379*t24117 - 1.*t23191*t24241 + t24848 + t24988))*var2[12];
  p_output1[19]=t22402*t23227;
  p_output1[20]=t24523;
  p_output1[21]=-1.*t22165*t22678*t23227 + t10962*t23612;
  p_output1[22]=t24191*t24592 + t23214*t24670;
  p_output1[23]=t22157*t24695 + t23814*t24714;
  p_output1[24]=t22574*t24894 + t18886*t24919;
  p_output1[25]=-0.15121 + t22574*t24817 + t18886*t24841;
  p_output1[26]=(-1.*t22165*t23588 - 1.*t10962*t23814)*var2[1] + t24237*var2[2];
  p_output1[27]=t23588*var2[0] - 1.*t10962*t23673*var2[1] + t22165*t23673*var2[2] + ((-1.*t22678*t23227*t23567 - 1.*t22678*t23227*t23580)*t24191 + t22402*t23227*(-1.*t22901*t23567 - 1.*t22901*t23580 - 1.*t23025*t23620 - 1.*t23620*t24191) + t22901*t25086 - 1.*t22678*t23227*t25095)*var2[3];
  p_output1[28]=t25100 + t25105 + t25109 + (t25132 + t24191*(t23227*t23963*t24015 + t23227*t23963*t24017 + t25115 + t25116 + t25135 + t25136) + t22402*t23227*(t22678*t22901*t23963 - 1.*t22402*t23963*t24191 + t25122 + t25124 + t25143 + t25144) + t25147)*var2[3] + (t25113 + t22157*(t23227*t23963 + t25115 + t25116 + t25118) + t23612*(-1.*t22753*t23963 + t25122 + t25123 + t25124) + t25129)*var2[4];
  p_output1[29]=t25100 + t25105 + t25109 + (t25132 + t25147 + t24191*(t23227*t24015*t24080 + t23227*t24017*t24080 + t25115 + t25135 + t25136 + t25159) + t22402*t23227*(t22678*t22901*t24080 - 1.*t22402*t24080*t24191 + t25122 + t25143 + t25144 + t25164))*var2[3] + (t25113 + t25129 + t22157*(t23227*t24080 + t25115 + t25118 + t25159) + t23612*(-1.*t22753*t24080 + t25122 + t25123 + t25164))*var2[4] + t22574*(-1.*t20638*t23381 - 1.*t14007*t23557 + t20638*t24064 - 1.*t14007*t24068)*var2[5];
  p_output1[30]=t25186 + t24191*var2[0] + t23011*var2[1] + t24438*var2[2] + (t24125*t25086 + t24191*(t22402*t23227*t24180 - 1.*t22678*t23227*t24184 + t25197) + t22402*t23227*(-1.*t23580*t24125 - 1.*t23620*t24133 - 1.*t22901*t24184 - 1.*t24180*t24191 + t25207 + t25211))*var2[3] + (t24129*t25111 + t22157*(t23227*t24149 + t25197) + t23612*(-1.*t23279*t24117 - 1.*t23560*t24123 - 1.*t22753*t24149 - 1.*t22574*t24165 + t25207 + t25211))*var2[4] + t24117*t25190*var2[5];
  p_output1[31]=t25186 + t24410*var2[0] + (t22165*t24265 - 1.*t10962*t24417)*var2[1] + (t10962*t24265 + t22165*t24417)*var2[2] + (t23214*t25086 + t24191*(t22402*t23227*t24398 - 1.*t22678*t23227*t24402 + t25260) + t22402*t23227*(-1.*t24191*t24398 - 1.*t22901*t24402 + t24577 + t24579 + t24581 + t25266))*var2[3] + (t23814*t25111 + t22157*(t23227*t24258 + t25260) + t23612*(-1.*t22753*t24258 - 1.*t22574*t24280 + t24577 + t24693 + t24694 + t25266))*var2[4] + t18886*t25190*var2[5] + (-0.28121*t18351 + 0.305*t15324*t18351 + t18351*t23265)*var2[13];
  p_output1[32]=t23214;
  p_output1[33]=t24237;
  p_output1[34]=t24233;
  p_output1[35]=t24191*t25086 + t22402*t23227*t25095;
  p_output1[36]=t22157*t25111 + t23612*t25128;
  p_output1[37]=t22574*t25190;
  p_output1[38]=-0.15121*t22574 - 0.15121*t23191;
  p_output1[39]=0.305*Power(t18351,2) + t24215 + t24216;
  p_output1[40]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
