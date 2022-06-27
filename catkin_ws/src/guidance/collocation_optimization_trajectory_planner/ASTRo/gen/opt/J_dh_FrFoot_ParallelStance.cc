/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:07 GMT+02:00
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
  double t12982;
  double t13032;
  double t13038;
  double t14775;
  double t15109;
  double t15111;
  double t15143;
  double t15506;
  double t11448;
  double t12953;
  double t15571;
  double t15631;
  double t15482;
  double t15573;
  double t15620;
  double t9979;
  double t15632;
  double t15641;
  double t15716;
  double t15719;
  double t15720;
  double t15736;
  double t15761;
  double t15762;
  double t15773;
  double t15774;
  double t15784;
  double t15827;
  double t15833;
  double t15834;
  double t15904;
  double t15905;
  double t15906;
  double t15930;
  double t15931;
  double t15932;
  double t15936;
  double t15938;
  double t15946;
  double t15947;
  double t15952;
  double t15953;
  double t15955;
  double t15961;
  double t15976;
  double t15982;
  double t15925;
  double t15927;
  double t15928;
  double t15929;
  double t15941;
  double t15942;
  double t15943;
  double t15949;
  double t15986;
  double t15987;
  double t15989;
  double t15990;
  double t15992;
  double t15996;
  double t16002;
  double t16003;
  double t16005;
  double t16006;
  double t15907;
  double t15913;
  double t15920;
  double t16010;
  double t16011;
  double t16012;
  double t16017;
  double t16018;
  double t16019;
  double t15945;
  double t16007;
  double t16008;
  double t16029;
  double t16030;
  double t16031;
  double t15902;
  double t15921;
  double t15922;
  double t16024;
  double t16025;
  double t16026;
  double t16108;
  double t16109;
  double t16110;
  double t16021;
  double t16022;
  double t16023;
  double t16027;
  double t16064;
  double t16065;
  double t16094;
  double t16123;
  double t16124;
  double t16125;
  double t16096;
  double t16145;
  double t16146;
  double t16149;
  double t16028;
  double t16032;
  double t16033;
  double t16128;
  double t16129;
  double t16130;
  double t16131;
  double t16132;
  double t16144;
  double t16152;
  double t16097;
  double t16098;
  double t16099;
  double t16111;
  double t16112;
  double t16113;
  double t16114;
  double t16115;
  double t16116;
  double t16117;
  double t16118;
  double t16119;
  double t16120;
  double t16121;
  double t16122;
  double t16186;
  double t16187;
  double t16188;
  double t16184;
  double t16133;
  double t16194;
  double t16195;
  double t16196;
  double t16198;
  double t16199;
  double t16200;
  double t16151;
  double t16155;
  double t16156;
  double t16157;
  double t16158;
  double t16162;
  double t16163;
  double t16165;
  double t16202;
  double t16167;
  double t16168;
  double t16206;
  double t16173;
  double t16174;
  double t16177;
  double t16229;
  double t16232;
  double t16233;
  double t16235;
  double t16238;
  double t16240;
  double t16245;
  double t16246;
  double t16247;
  double t16251;
  double t16254;
  double t16257;
  double t16275;
  double t16300;
  double t16301;
  double t16303;
  double t16304;
  double t16305;
  double t16302;
  double t16311;
  double t16312;
  double t16313;
  double t16314;
  double t16317;
  double t16319;
  double t16326;
  double t16327;
  double t16328;
  double t16330;
  double t16331;
  double t16335;
  double t16341;
  double t16342;
  double t16343;
  double t16223;
  double t16224;
  double t16225;
  double t16386;
  double t16387;
  double t16388;
  double t16389;
  double t16390;
  double t16391;
  double t16393;
  double t16394;
  double t16395;
  double t16399;
  double t16400;
  double t16402;
  double t16392;
  double t16405;
  double t16406;
  double t16412;
  double t16413;
  double t16415;
  double t16408;
  double t16411;
  double t16421;
  double t16422;
  double t16423;
  double t16425;
  double t16427;
  double t16429;
  double t16433;
  double t16434;
  double t16436;
  double t15810;
  double t15814;
  double t15824;
  double t16039;
  double t16040;
  double t16048;
  double t16349;
  double t16350;
  double t16529;
  double t16310;
  double t16321;
  double t16570;
  double t16576;
  double t16624;
  double t16641;
  double t16530;
  double t16531;
  double t16533;
  double t16545;
  double t16553;
  double t16554;
  double t16556;
  double t16557;
  double t16558;
  double t16560;
  double t16562;
  double t16563;
  double t16564;
  double t16571;
  double t16582;
  double t16583;
  double t16584;
  double t16585;
  double t16639;
  double t16646;
  double t16653;
  double t16720;
  double t16661;
  double t16662;
  double t16729;
  double t16669;
  double t16670;
  double t16677;
  double t16679;
  double t16757;
  double t16760;
  double t16781;
  double t16783;
  double t16768;
  double t16771;
  double t16234;
  double t16241;
  double t16242;
  double t16806;
  double t16808;
  double t16813;
  double t16815;
  double t16753;
  double t16755;
  double t16764;
  double t16765;
  double t16767;
  double t16776;
  double t16778;
  double t16779;
  double t16847;
  double t16854;
  double t16798;
  double t16799;
  double t16800;
  double t16881;
  double t16916;
  double t16919;
  double t16441;
  double t16443;
  double t16445;
  double t16476;
  double t16483;
  double t16484;
  double t16382;
  double t16383;
  double t16384;
  double t16835;
  double t16837;
  double t17037;
  double t16816;
  double t17039;
  double t17040;
  double t17041;
  double t17074;
  double t17076;
  double t17100;
  double t17105;
  double t17052;
  double t17059;
  double t17060;
  double t17062;
  double t17063;
  double t17064;
  double t17066;
  double t17067;
  double t17068;
  double t17069;
  double t17070;
  double t17071;
  double t17072;
  double t17077;
  double t17103;
  double t17115;
  double t17116;
  double t17119;
  double t17160;
  double t17123;
  double t17125;
  double t17164;
  double t17134;
  double t17136;
  double t17139;
  double t16454;
  double t16455;
  double t16456;
  double t17261;
  double t17275;
  double t17277;
  double t17195;
  double t17196;
  double t17200;
  double t17208;
  double t17217;
  double t17224;
  double t17252;
  double t17342;
  double t17374;
  double t16376;
  double t16378;
  double t16379;
  double t16363;
  double t16364;
  t12982 = Cos(var1[13]);
  t13032 = Cos(var1[14]);
  t13038 = t12982*t13032;
  t14775 = Sin(var1[13]);
  t15109 = Sin(var1[14]);
  t15111 = t14775*t15109;
  t15143 = t13038 + t15111;
  t15506 = Cos(var1[12]);
  t11448 = Cos(var1[5]);
  t12953 = Sin(var1[12]);
  t15571 = Sin(var1[5]);
  t15631 = Cos(var1[3]);
  t15482 = t11448*t12953*t15143;
  t15573 = t15506*t15143*t15571;
  t15620 = t15482 + t15573;
  t9979 = Sin(var1[3]);
  t15632 = Cos(var1[4]);
  t15641 = -1.*t13032*t14775;
  t15716 = t12982*t15109;
  t15719 = t15641 + t15716;
  t15720 = t15632*t15719;
  t15736 = Sin(var1[4]);
  t15761 = t15506*t11448*t15143;
  t15762 = -1.*t12953*t15143*t15571;
  t15773 = t15761 + t15762;
  t15774 = -1.*t15736*t15773;
  t15784 = t15720 + t15774;
  t15827 = -1.*t15719*t15736;
  t15833 = -1.*t15632*t15773;
  t15834 = t15827 + t15833;
  t15904 = t13032*t14775;
  t15905 = -1.*t12982*t15109;
  t15906 = t15904 + t15905;
  t15930 = -1.*t13032;
  t15931 = 1. + t15930;
  t15932 = 0.50321*t15931;
  t15936 = 0.19821*t13032;
  t15938 = t15932 + t15936;
  t15946 = -1.*t15506;
  t15947 = 1. + t15946;
  t15952 = -1.*t12982;
  t15953 = 1. + t15952;
  t15955 = 0.28121*t15953;
  t15961 = t12982*t15938;
  t15976 = -0.305*t14775*t15109;
  t15982 = t15955 + t15961 + t15976;
  t15925 = -1.*t11448*t12953;
  t15927 = -1.*t15506*t15571;
  t15928 = t15925 + t15927;
  t15929 = 0.28121*t14775;
  t15941 = -1.*t15938*t14775;
  t15942 = -0.305*t12982*t15109;
  t15943 = t15929 + t15941 + t15942;
  t15949 = 0.15121*t15947;
  t15986 = t15506*t15982;
  t15987 = t15949 + t15986;
  t15989 = t11448*t15987;
  t15990 = -0.15121*t15947;
  t15992 = -0.15121*t15506;
  t15996 = -0.15121*t12953;
  t16002 = t12953*t15982;
  t16003 = t15990 + t15992 + t15996 + t16002;
  t16005 = -1.*t16003*t15571;
  t16006 = t15989 + t16005;
  t15907 = t15506*t11448*t15906;
  t15913 = -1.*t12953*t15906*t15571;
  t15920 = t15907 + t15913;
  t16010 = t15943*t15736;
  t16011 = t15632*t16006;
  t16012 = t16010 + t16011;
  t16017 = t15632*t15143;
  t16018 = -1.*t15736*t15920;
  t16019 = t16017 + t16018;
  t15945 = -1.*t15943*t15736;
  t16007 = -1.*t15632*t16006;
  t16008 = t15945 + t16007;
  t16029 = t15632*t15943;
  t16030 = -1.*t15736*t16006;
  t16031 = t16029 + t16030;
  t15902 = t15143*t15736;
  t15921 = t15632*t15920;
  t15922 = t15902 + t15921;
  t16024 = t11448*t16003;
  t16025 = t15987*t15571;
  t16026 = t16024 + t16025;
  t16108 = -1.*t11448*t12953*t15143;
  t16109 = -1.*t15506*t15143*t15571;
  t16110 = t16108 + t16109;
  t16021 = t15506*t11448;
  t16022 = -1.*t12953*t15571;
  t16023 = t16021 + t16022;
  t16027 = -1.*t16023*t16026;
  t16064 = t11448*t12953*t15906;
  t16065 = t15506*t15906*t15571;
  t16094 = t16064 + t16065;
  t16123 = -1.*t11448*t16003;
  t16124 = -1.*t15987*t15571;
  t16125 = t16123 + t16124;
  t16096 = t16094*t16026;
  t16145 = -1.*t11448*t12953*t15906;
  t16146 = -1.*t15506*t15906*t15571;
  t16149 = t16145 + t16146;
  t16028 = -1.*t15632*t15928*t16012;
  t16032 = t15736*t15928*t16031;
  t16033 = t16027 + t16028 + t16032;
  t16128 = -1.*t15928*t16026;
  t16129 = -1.*t16023*t16006;
  t16130 = -1.*t15506*t11448;
  t16131 = t12953*t15571;
  t16132 = t16130 + t16131;
  t16144 = t15920*t16026;
  t16152 = t16094*t16006;
  t16097 = t15922*t16012;
  t16098 = t16019*t16031;
  t16099 = t16096 + t16097 + t16098;
  t16111 = var2[0]*t15632*t16110;
  t16112 = t9979*t15736*t16110;
  t16113 = t15631*t15773;
  t16114 = t16112 + t16113;
  t16115 = var2[1]*t16114;
  t16116 = -1.*t15631*t15736*t16110;
  t16117 = t9979*t15773;
  t16118 = t16116 + t16117;
  t16119 = var2[2]*t16118;
  t16120 = -1.*t15928*t16006;
  t16121 = t16027 + t16120;
  t16122 = t15920*t16121;
  t16186 = 0.15121*t12953;
  t16187 = -1.*t12953*t15982;
  t16188 = t16186 + t16187;
  t16184 = t15992 + t15986;
  t16133 = -1.*t16132*t16006;
  t16194 = t11448*t16188;
  t16195 = -1.*t16184*t15571;
  t16196 = t16194 + t16195;
  t16198 = t11448*t16184;
  t16199 = t16188*t15571;
  t16200 = t16198 + t16199;
  t16151 = t16149*t16006;
  t16155 = t15943*t15143;
  t16156 = t15920*t16006;
  t16157 = t16155 + t16096 + t16156;
  t16158 = t15928*t16157;
  t16162 = t15632*t16149*t16033;
  t16163 = Power(t15632,2);
  t16165 = Power(t15736,2);
  t16202 = -1.*t16023*t16200;
  t16167 = -1.*t15632*t16132*t16012;
  t16168 = t15736*t16132*t16031;
  t16206 = t16094*t16200;
  t16173 = t15632*t16149*t16012;
  t16174 = -1.*t15736*t16149*t16031;
  t16177 = t15632*t16132*t16099;
  t16229 = -1.*t12982*t13032;
  t16232 = -1.*t14775*t15109;
  t16233 = t16229 + t16232;
  t16235 = t15506*t11448*t15719;
  t16238 = -1.*t12953*t15719*t15571;
  t16240 = t16235 + t16238;
  t16245 = t11448*t12953*t15719;
  t16246 = t15506*t15719*t15571;
  t16247 = t16245 + t16246;
  t16251 = t15632*t16233;
  t16254 = -1.*t15736*t16240;
  t16257 = t16251 + t16254;
  t16275 = t11448*t12953*t15943;
  t16300 = t15506*t15943*t15571;
  t16301 = t16275 + t16300;
  t16303 = t15506*t11448*t15943;
  t16304 = -1.*t12953*t15943*t15571;
  t16305 = t16303 + t16304;
  t16302 = -1.*t16023*t16301;
  t16311 = 0.28121*t12982;
  t16312 = -1.*t12982*t15938;
  t16313 = 0.305*t14775*t15109;
  t16314 = t16311 + t16312 + t16313;
  t16317 = t16094*t16301;
  t16319 = t15620*t16026;
  t16326 = t16314*t15736;
  t16327 = t15632*t16305;
  t16328 = t16326 + t16327;
  t16330 = t15632*t16314;
  t16331 = -1.*t15736*t16305;
  t16335 = t16330 + t16331;
  t16341 = t15719*t15736;
  t16342 = t15632*t15773;
  t16343 = t16341 + t16342;
  t16223 = t12953*t15987;
  t16224 = -1.*t15506*t16003;
  t16225 = t16223 + t16224;
  t16386 = -0.305*t13032*t14775;
  t16387 = 0.305*t12982*t15109;
  t16388 = t16386 + t16387;
  t16389 = t11448*t12953*t16388;
  t16390 = t15506*t16388*t15571;
  t16391 = t16389 + t16390;
  t16393 = t15506*t11448*t16388;
  t16394 = -1.*t12953*t16388*t15571;
  t16395 = t16393 + t16394;
  t16399 = t11448*t12953*t16233;
  t16400 = t15506*t16233*t15571;
  t16402 = t16399 + t16400;
  t16392 = -1.*t16023*t16391;
  t16405 = -0.305*t12982*t13032;
  t16406 = t16405 + t15976;
  t16412 = t15506*t11448*t16233;
  t16413 = -1.*t12953*t16233*t15571;
  t16415 = t16412 + t16413;
  t16408 = t16094*t16391;
  t16411 = t16402*t16026;
  t16421 = t16406*t15736;
  t16422 = t15632*t16395;
  t16423 = t16421 + t16422;
  t16425 = t15632*t16406;
  t16427 = -1.*t15736*t16395;
  t16429 = t16425 + t16427;
  t16433 = t15906*t15736;
  t16434 = t15632*t16415;
  t16436 = t16433 + t16434;
  t15810 = t15631*t15620;
  t15814 = -1.*t9979*t15784;
  t15824 = t15810 + t15814;
  t16039 = -1.*t15143*t15736;
  t16040 = -1.*t15632*t15920;
  t16048 = t16039 + t16040;
  t16349 = t16343*t16012;
  t16350 = t15784*t16031;
  t16529 = -1.*t16094*t16026;
  t16310 = t15943*t15719;
  t16321 = t15773*t16006;
  t16570 = -1.*t15920*t16026;
  t16576 = -1.*t16094*t16006;
  t16624 = t15773*t16026;
  t16641 = t15620*t16006;
  t16530 = -1.*t15922*t16012;
  t16531 = -1.*t16019*t16031;
  t16533 = t16529 + t16530 + t16531;
  t16545 = t16319 + t16349 + t16350;
  t16553 = var2[0]*t15632*t16132;
  t16554 = t9979*t15928;
  t16556 = -1.*t15631*t15736*t16132;
  t16557 = t16554 + t16556;
  t16558 = var2[2]*t16557;
  t16560 = t15631*t15928;
  t16562 = t9979*t15736*t16132;
  t16563 = t16560 + t16562;
  t16564 = var2[1]*t16563;
  t16571 = -1.*t16149*t16006;
  t16582 = -1.*t15943*t15143;
  t16583 = -1.*t15920*t16006;
  t16584 = t16582 + t16529 + t16583;
  t16585 = t15773*t16584;
  t16639 = t16110*t16006;
  t16646 = t16310 + t16319 + t16321;
  t16653 = t15920*t16646;
  t16720 = -1.*t16094*t16200;
  t16661 = -1.*t15632*t16149*t16012;
  t16662 = t15736*t16149*t16031;
  t16729 = t15620*t16200;
  t16669 = t15632*t16110*t16012;
  t16670 = -1.*t15736*t16110*t16031;
  t16677 = t15632*t16110*t16533;
  t16679 = t15632*t16149*t16545;
  t16757 = t15943*t16233;
  t16760 = t15719*t16314;
  t16781 = Power(t15506,2);
  t16783 = Power(t12953,2);
  t16768 = -1.*t15943*t15719;
  t16771 = -1.*t16314*t15143;
  t16234 = t16233*t15736;
  t16241 = t15632*t16240;
  t16242 = t16234 + t16241;
  t16806 = t16301*t15620;
  t16808 = t16247*t16026;
  t16813 = -1.*t16094*t16301;
  t16815 = -1.*t15620*t16026;
  t16753 = -1.*t15906*t15982;
  t16755 = t16753 + t16582;
  t16764 = t15982*t15143;
  t16765 = t16310 + t16764;
  t16767 = -1.*t15906*t15943;
  t16776 = -1.*t15506*t15906*t15987;
  t16778 = -1.*t12953*t15906*t16003;
  t16779 = t16582 + t16776 + t16778;
  t16847 = t15719*t16406;
  t16854 = -1.*t16406*t15143;
  t16798 = t15506*t15143*t15987;
  t16799 = t12953*t15143*t16003;
  t16800 = t16310 + t16798 + t16799;
  t16881 = t16391*t15620;
  t16916 = -1.*t16094*t16391;
  t16919 = -1.*t16402*t16026;
  t16441 = t15632*t15906;
  t16443 = -1.*t15736*t16415;
  t16445 = t16441 + t16443;
  t16476 = t9979*t15736*t15928;
  t16483 = t15631*t16023;
  t16484 = t16476 + t16483;
  t16382 = t15631*t16094;
  t16383 = -1.*t9979*t16019;
  t16384 = t16382 + t16383;
  t16835 = -1.*t16343*t16012;
  t16837 = -1.*t15784*t16031;
  t17037 = t16023*t16026;
  t16816 = -1.*t15773*t16006;
  t17039 = t15632*t15928*t16012;
  t17040 = -1.*t15736*t15928*t16031;
  t17041 = t17037 + t17039 + t17040;
  t17074 = t15928*t16026;
  t17076 = t16023*t16006;
  t17100 = -1.*t15773*t16026;
  t17105 = -1.*t15620*t16006;
  t17052 = t16815 + t16835 + t16837;
  t17059 = var2[0]*t15632*t16149;
  t17060 = t9979*t15736*t16149;
  t17062 = t15631*t15920;
  t17063 = t17060 + t17062;
  t17064 = var2[1]*t17063;
  t17066 = -1.*t15631*t15736*t16149;
  t17067 = t9979*t15920;
  t17068 = t17066 + t17067;
  t17069 = var2[2]*t17068;
  t17070 = t15928*t16006;
  t17071 = t17037 + t17070;
  t17072 = t15773*t17071;
  t17077 = t16132*t16006;
  t17103 = -1.*t16110*t16006;
  t17115 = t16768 + t16815 + t16816;
  t17116 = t15928*t17115;
  t17119 = t15632*t16110*t17041;
  t17160 = t16023*t16200;
  t17123 = t15632*t16132*t16012;
  t17125 = -1.*t15736*t16132*t16031;
  t17164 = -1.*t15620*t16200;
  t17134 = -1.*t15632*t16110*t16012;
  t17136 = t15736*t16110*t16031;
  t17139 = t15632*t16132*t17052;
  t16454 = t9979*t15620;
  t16455 = t15631*t15784;
  t16456 = t16454 + t16455;
  t17261 = t16023*t16301;
  t17275 = -1.*t16301*t15620;
  t17277 = -1.*t16247*t16026;
  t17195 = -0.15121*t16233;
  t17196 = -0.15121*t15143;
  t17200 = t17195 + t17196;
  t17208 = var2[12]*t17200;
  t17217 = -1.*t12953*t15987;
  t17224 = t15506*t16003;
  t17252 = t17217 + t17224;
  t17342 = t16023*t16391;
  t17374 = -1.*t16391*t15620;
  t16376 = t9979*t16094;
  t16378 = t15631*t16019;
  t16379 = t16376 + t16378;
  t16363 = 0.28121*t13032;
  t16364 = -1.*t15938*t13032;
  p_output1[0]=(-1.*t15631*t15784 - 1.*t15620*t9979)*var2[1] + t15824*var2[2];
  p_output1[1]=t15784*var2[0] - 1.*t15834*t9979*var2[1] + t15631*t15834*var2[2] + (t15922*(t15736*t15928*t16008 + t15736*t15928*t16012) + t16019*t16033 + t15632*t15928*(t16008*t16019 + t16012*t16019 + t15922*t16031 + t16031*t16048) - 1.*t15736*t15928*t16099)*var2[3];
  p_output1[2]=t16111 + t16115 + t16119 + (t16162 + t15922*(t16128 + t16129 - 1.*t15928*t16125*t16163 - 1.*t15928*t16125*t16165 + t16167 + t16168) + t15632*t15928*(t15632*t15922*t16125 - 1.*t15736*t16019*t16125 + t16144 + t16152 + t16173 + t16174) + t16177)*var2[3] + (t16122 + t16094*(-1.*t15928*t16125 + t16128 + t16129 + t16133) + t16023*(t15920*t16125 + t16144 + t16151 + t16152) + t16158)*var2[4];
  p_output1[3]=t16111 + t16115 + t16119 + (t16162 + t16177 + t15922*(t16128 + t16167 + t16168 - 1.*t15928*t16163*t16196 - 1.*t15928*t16165*t16196 + t16202) + t15632*t15928*(t16144 + t16173 + t16174 + t15632*t15922*t16196 - 1.*t15736*t16019*t16196 + t16206))*var2[3] + (t16122 + t16158 + t16094*(t16128 + t16133 - 1.*t15928*t16196 + t16202) + t16023*(t16144 + t16151 + t15920*t16196 + t16206))*var2[4] + t15143*(t15506*t15987 + t12953*t16003 - 1.*t15506*t16184 + t12953*t16188)*var2[5];
  p_output1[4]=t16242*var2[0] + (t15631*t16247 - 1.*t16257*t9979)*var2[1] + (t15631*t16257 + t16247*t9979)*var2[2] + (t15922*(t16302 - 1.*t15632*t15928*t16328 + t15736*t15928*t16335) + t16033*t16343 + t15632*t15928*(t16317 + t16319 + t15922*t16328 + t16019*t16335 + t16349 + t16350))*var2[3] + (t15620*t16121 + t16094*(t16302 - 1.*t15928*t16305) + t16023*(t15920*t16305 + t16310 + t15143*t16314 + t16317 + t16319 + t16321))*var2[4] + t15719*t16225*var2[5];
  p_output1[5]=t15922*var2[0] + t16384*var2[1] + t16379*var2[2] + (t15922*(t16392 - 1.*t15632*t15928*t16423 + t15736*t15928*t16429) + t16033*t16436 + t15632*t15928*(t16408 + t16411 + t15922*t16423 + t16019*t16429 + t16012*t16436 + t16031*t16445))*var2[3] + (t16094*(t16392 - 1.*t15928*t16395) + t16121*t16402 + t16023*(t15906*t15943 + t15920*t16395 + t15143*t16406 + t16408 + t16411 + t16006*t16415))*var2[4] + t15906*t16225*var2[5] + (-0.305*Power(t13032,2) + t16363 + t16364)*var2[13];
  p_output1[6]=t16343;
  p_output1[7]=t15824;
  p_output1[8]=t16456;
  p_output1[9]=t15922*t16033 + t15632*t15928*t16099;
  p_output1[10]=t16094*t16121 + t16023*t16157;
  p_output1[11]=t15143*t16225;
  p_output1[12]=0.28121*t15109 - 0.305*t13032*t15109 - 1.*t15109*t15938;
  p_output1[13]=(t15631*t15736*t15928 - 1.*t16023*t9979)*var2[1] + t16484*var2[2];
  p_output1[14]=-1.*t15736*t15928*var2[0] + t15632*t15928*t9979*var2[1] - 1.*t15631*t15632*t15928*var2[2] + ((-1.*t16008*t16019 - 1.*t16012*t16019 - 1.*t15922*t16031 - 1.*t16031*t16048)*t16343 + t15922*(t15784*t16008 + t15784*t16012 + t15834*t16031 + t16031*t16343) + t15784*t16533 + t16019*t16545)*var2[3];
  p_output1[15]=t16553 + t16558 + t16564 + (t16343*(-1.*t15632*t15922*t16125 + t15736*t16019*t16125 + t16570 + t16576 + t16661 + t16662) + t15922*(-1.*t15736*t15784*t16125 + t15632*t16125*t16343 + t16624 + t16641 + t16669 + t16670) + t16677 + t16679)*var2[3] + (t15620*(-1.*t15920*t16125 + t16570 + t16571 + t16576) + t16585 + t16094*(t15773*t16125 + t16624 + t16639 + t16641) + t16653)*var2[4];
  p_output1[16]=t16553 + t16558 + t16564 + (t16677 + t16679 + t16343*(-1.*t15632*t15922*t16196 + t15736*t16019*t16196 + t16570 + t16661 + t16662 + t16720) + t15922*(-1.*t15736*t15784*t16196 + t15632*t16196*t16343 + t16624 + t16669 + t16670 + t16729))*var2[3] + (t16585 + t16653 + t15620*(-1.*t15920*t16196 + t16570 + t16571 + t16720) + t16094*(t15773*t16196 + t16624 + t16639 + t16729))*var2[4] + (t15143*(-1.*t12953*t15143*t15987 + t15143*t15506*t16003 + t12953*t15143*t16184 + t15143*t15506*t16188) + t15719*(t12953*t15906*t15987 - 1.*t15506*t15906*t16003 - 1.*t12953*t15906*t16184 - 1.*t15506*t15906*t16188))*var2[5];
  p_output1[17]=(t16242*t16533 + t16343*t16545 + t15922*(t16012*t16242 + t16031*t16257 + t15784*t16335 + t16328*t16343 + t16806 + t16808) + t16343*(-1.*t15922*t16328 - 1.*t16019*t16335 + t16813 + t16815 + t16835 + t16837))*var2[3] + (t16247*t16584 + t15620*t16646 + t16094*(t16006*t16240 + t15773*t16305 + t16757 + t16760 + t16806 + t16808) + t15620*(-1.*t15920*t16305 + t16768 + t16771 + t16813 + t16815 + t16816))*var2[4] + (t16233*t16779 + t15143*(t15506*t15719*t15987 + t12953*t15719*t16003 + t16757 + t16760 + t15143*t15943*t16781 + t15143*t15943*t16783) + t15719*(-1.*t15143*t15506*t15987 - 1.*t12953*t15143*t16003 + t16768 + t16771 - 1.*t15906*t15943*t16781 - 1.*t15906*t15943*t16783) + t15719*t16800)*var2[5] + (t16233*t16755 + t15143*(t15719*t15982 + t16155 + t16757 + t16760) + t15719*t16765 + t15719*(-1.*t15143*t15982 + t16767 + t16768 + t16771))*var2[12];
  p_output1[18]=(t15922*t16533 + t16436*t16545 + t15922*(t16096 + t16097 + t16098 + t16343*t16423 + t15784*t16429 + t16881) + t16343*(-1.*t15922*t16423 - 1.*t16019*t16429 - 1.*t16012*t16436 - 1.*t16031*t16445 + t16916 + t16919))*var2[3] + (t16094*t16584 + t16402*t16646 + t16094*(t16096 + t16155 + t16156 + t15773*t16395 + t16847 + t16881) + t15620*(-1.*t15920*t16395 - 1.*t16006*t16415 + t16767 + t16854 + t16916 + t16919))*var2[4] + (t15143*t16779 + t15906*t16800 + t15143*(t15506*t15906*t15987 + t12953*t15906*t16003 + t16155 + t15143*t16388*t16781 + t15143*t16388*t16783 + t16847) + t15719*(-1.*t15506*t15987*t16233 - 1.*t12953*t16003*t16233 + t16767 - 1.*t15906*t16388*t16781 - 1.*t15906*t16388*t16783 + t16854))*var2[5] + (t15143*t16755 + t15906*t16765 + t15143*(t15906*t15982 + t16155 + t15143*t16388 + t16847) + t15719*(-1.*t15982*t16233 - 1.*t15906*t16388 + t16767 + t16854))*var2[12];
  p_output1[19]=t15632*t15928;
  p_output1[20]=t16484;
  p_output1[21]=-1.*t15631*t15736*t15928 + t16023*t9979;
  p_output1[22]=t16343*t16533 + t15922*t16545;
  p_output1[23]=t15620*t16584 + t16094*t16646;
  p_output1[24]=t15719*t16779 + t15143*t16800;
  p_output1[25]=-0.15121 + t15719*t16755 + t15143*t16765;
  p_output1[26]=(-1.*t15631*t16019 - 1.*t16094*t9979)*var2[1] + t16384*var2[2];
  p_output1[27]=t16019*var2[0] - 1.*t16048*t9979*var2[1] + t15631*t16048*var2[2] + ((-1.*t15736*t15928*t16008 - 1.*t15736*t15928*t16012)*t16343 + t15632*t15928*(-1.*t15784*t16008 - 1.*t15784*t16012 - 1.*t15834*t16031 - 1.*t16031*t16343) + t15784*t17041 - 1.*t15736*t15928*t17052)*var2[3];
  p_output1[28]=t17059 + t17064 + t17069 + (t17119 + t16343*(t15928*t16125*t16163 + t15928*t16125*t16165 + t17074 + t17076 + t17123 + t17125) + t15632*t15928*(t15736*t15784*t16125 - 1.*t15632*t16125*t16343 + t17100 + t17105 + t17134 + t17136) + t17139)*var2[3] + (t17072 + t15620*(t15928*t16125 + t17074 + t17076 + t17077) + t16023*(-1.*t15773*t16125 + t17100 + t17103 + t17105) + t17116)*var2[4];
  p_output1[29]=t17059 + t17064 + t17069 + (t17119 + t17139 + t16343*(t15928*t16163*t16196 + t15928*t16165*t16196 + t17074 + t17123 + t17125 + t17160) + t15632*t15928*(t15736*t15784*t16196 - 1.*t15632*t16196*t16343 + t17100 + t17134 + t17136 + t17164))*var2[3] + (t17072 + t17116 + t15620*(t15928*t16196 + t17074 + t17077 + t17160) + t16023*(-1.*t15773*t16196 + t17100 + t17103 + t17164))*var2[4] + t15719*(-1.*t15506*t15987 - 1.*t12953*t16003 + t15506*t16184 - 1.*t12953*t16188)*var2[5];
  p_output1[30]=t17208 + t16343*var2[0] + t15824*var2[1] + t16456*var2[2] + (t16242*t17041 + t16343*(t15632*t15928*t16328 - 1.*t15736*t15928*t16335 + t17261) + t15632*t15928*(-1.*t16012*t16242 - 1.*t16031*t16257 - 1.*t15784*t16335 - 1.*t16328*t16343 + t17275 + t17277))*var2[3] + (t16247*t17071 + t15620*(t15928*t16305 + t17261) + t16023*(-1.*t15943*t16233 - 1.*t16006*t16240 - 1.*t15773*t16305 - 1.*t15719*t16314 + t17275 + t17277))*var2[4] + t16233*t17252*var2[5];
  p_output1[31]=t17208 + t16436*var2[0] + (t15631*t16402 - 1.*t16445*t9979)*var2[1] + (t15631*t16445 + t16402*t9979)*var2[2] + (t15922*t17041 + t16343*(t15632*t15928*t16423 - 1.*t15736*t15928*t16429 + t17342) + t15632*t15928*(-1.*t16343*t16423 - 1.*t15784*t16429 + t16529 + t16530 + t16531 + t17374))*var2[3] + (t16094*t17071 + t15620*(t15928*t16395 + t17342) + t16023*(-1.*t15773*t16395 - 1.*t15719*t16406 + t16529 + t16582 + t16583 + t17374))*var2[4] + t15143*t17252*var2[5] + (-0.28121*t15109 + 0.305*t13032*t15109 + t15109*t15938)*var2[13];
  p_output1[32]=t15922;
  p_output1[33]=t16384;
  p_output1[34]=t16379;
  p_output1[35]=t16343*t17041 + t15632*t15928*t17052;
  p_output1[36]=t15620*t17071 + t16023*t17115;
  p_output1[37]=t15719*t17252;
  p_output1[38]=-0.15121*t15719 - 0.15121*t15906;
  p_output1[39]=0.305*Power(t15109,2) + t16363 + t16364;
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
