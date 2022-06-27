/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:30 GMT+02:00
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
  double t1943;
  double t1966;
  double t2229;
  double t2236;
  double t2840;
  double t2971;
  double t2982;
  double t3170;
  double t712;
  double t1906;
  double t3439;
  double t4104;
  double t2983;
  double t3544;
  double t3842;
  double t273;
  double t4114;
  double t4210;
  double t4214;
  double t4503;
  double t5796;
  double t5841;
  double t5869;
  double t5951;
  double t7355;
  double t7492;
  double t7522;
  double t9399;
  double t9482;
  double t9607;
  double t9894;
  double t9901;
  double t9926;
  double t10105;
  double t10126;
  double t10141;
  double t10157;
  double t10161;
  double t10449;
  double t10884;
  double t10916;
  double t11069;
  double t11132;
  double t11275;
  double t11395;
  double t11425;
  double t10084;
  double t10098;
  double t10099;
  double t10100;
  double t10181;
  double t10191;
  double t10195;
  double t10912;
  double t11690;
  double t11824;
  double t11834;
  double t11840;
  double t11870;
  double t11893;
  double t12129;
  double t12146;
  double t12360;
  double t12517;
  double t10027;
  double t10028;
  double t10031;
  double t12571;
  double t12699;
  double t12765;
  double t12794;
  double t12797;
  double t12798;
  double t10262;
  double t12521;
  double t12540;
  double t13154;
  double t13157;
  double t13386;
  double t9828;
  double t10056;
  double t10079;
  double t13050;
  double t13074;
  double t13085;
  double t13677;
  double t13679;
  double t13681;
  double t12799;
  double t12842;
  double t13022;
  double t13086;
  double t13646;
  double t13648;
  double t13649;
  double t13723;
  double t13725;
  double t13726;
  double t13660;
  double t14808;
  double t14822;
  double t14830;
  double t13088;
  double t13387;
  double t13415;
  double t13742;
  double t13747;
  double t13890;
  double t13893;
  double t14183;
  double t14793;
  double t14909;
  double t13661;
  double t13664;
  double t13665;
  double t13683;
  double t13684;
  double t13685;
  double t13691;
  double t13701;
  double t13702;
  double t13703;
  double t13706;
  double t13707;
  double t13708;
  double t13709;
  double t13722;
  double t15077;
  double t15079;
  double t15080;
  double t15075;
  double t14248;
  double t15087;
  double t15089;
  double t15090;
  double t15092;
  double t15094;
  double t15095;
  double t14858;
  double t14928;
  double t14936;
  double t14979;
  double t14980;
  double t14991;
  double t14992;
  double t15003;
  double t15096;
  double t15005;
  double t15008;
  double t15101;
  double t15015;
  double t15016;
  double t15021;
  double t15128;
  double t15129;
  double t15131;
  double t15134;
  double t15135;
  double t15136;
  double t15140;
  double t15141;
  double t15142;
  double t15144;
  double t15145;
  double t15146;
  double t15154;
  double t15156;
  double t15157;
  double t15161;
  double t15162;
  double t15163;
  double t15159;
  double t15169;
  double t15171;
  double t15172;
  double t15173;
  double t15175;
  double t15177;
  double t15184;
  double t15185;
  double t15186;
  double t15189;
  double t15190;
  double t15191;
  double t15195;
  double t15196;
  double t15197;
  double t15123;
  double t15124;
  double t15125;
  double t15226;
  double t15228;
  double t15229;
  double t15230;
  double t15231;
  double t15232;
  double t15234;
  double t15235;
  double t15236;
  double t15240;
  double t15241;
  double t15242;
  double t15233;
  double t15245;
  double t15246;
  double t15251;
  double t15252;
  double t15253;
  double t15248;
  double t15250;
  double t15259;
  double t15260;
  double t15261;
  double t15263;
  double t15264;
  double t15265;
  double t15269;
  double t15270;
  double t15271;
  double t8489;
  double t8973;
  double t9156;
  double t13443;
  double t13454;
  double t13457;
  double t15201;
  double t15202;
  double t15319;
  double t15168;
  double t15178;
  double t15345;
  double t15347;
  double t15355;
  double t15357;
  double t15320;
  double t15321;
  double t15322;
  double t15330;
  double t15335;
  double t15336;
  double t15337;
  double t15338;
  double t15339;
  double t15340;
  double t15341;
  double t15342;
  double t15343;
  double t15346;
  double t15350;
  double t15351;
  double t15352;
  double t15353;
  double t15356;
  double t15360;
  double t15361;
  double t15396;
  double t15366;
  double t15367;
  double t15400;
  double t15372;
  double t15373;
  double t15376;
  double t15377;
  double t15419;
  double t15421;
  double t15439;
  double t15441;
  double t15428;
  double t15430;
  double t15132;
  double t15137;
  double t15138;
  double t15460;
  double t15462;
  double t15466;
  double t15468;
  double t15416;
  double t15417;
  double t15424;
  double t15425;
  double t15427;
  double t15435;
  double t15436;
  double t15437;
  double t15494;
  double t15501;
  double t15453;
  double t15454;
  double t15455;
  double t15523;
  double t15527;
  double t15529;
  double t15278;
  double t15279;
  double t15280;
  double t15301;
  double t15302;
  double t15303;
  double t15221;
  double t15223;
  double t15224;
  double t15484;
  double t15485;
  double t15580;
  double t15469;
  double t15581;
  double t15582;
  double t15583;
  double t15610;
  double t15611;
  double t15616;
  double t15618;
  double t15591;
  double t15596;
  double t15597;
  double t15598;
  double t15599;
  double t15600;
  double t15601;
  double t15602;
  double t15603;
  double t15604;
  double t15606;
  double t15607;
  double t15608;
  double t15612;
  double t15617;
  double t15621;
  double t15622;
  double t15625;
  double t15649;
  double t15628;
  double t15629;
  double t15653;
  double t15634;
  double t15635;
  double t15638;
  double t15287;
  double t15288;
  double t15289;
  double t15680;
  double t15687;
  double t15689;
  double t15669;
  double t15670;
  double t15671;
  double t15672;
  double t15673;
  double t15674;
  double t15675;
  double t15724;
  double t15730;
  double t15217;
  double t15218;
  double t15219;
  double t15209;
  double t15210;
  t1943 = Cos(var1[13]);
  t1966 = Cos(var1[14]);
  t2229 = t1943*t1966;
  t2236 = Sin(var1[13]);
  t2840 = Sin(var1[14]);
  t2971 = t2236*t2840;
  t2982 = t2229 + t2971;
  t3170 = Cos(var1[12]);
  t712 = Cos(var1[5]);
  t1906 = Sin(var1[12]);
  t3439 = Sin(var1[5]);
  t4104 = Cos(var1[3]);
  t2983 = t712*t1906*t2982;
  t3544 = t3170*t2982*t3439;
  t3842 = t2983 + t3544;
  t273 = Sin(var1[3]);
  t4114 = Cos(var1[4]);
  t4210 = -1.*t1966*t2236;
  t4214 = t1943*t2840;
  t4503 = t4210 + t4214;
  t5796 = t4114*t4503;
  t5841 = Sin(var1[4]);
  t5869 = t3170*t712*t2982;
  t5951 = -1.*t1906*t2982*t3439;
  t7355 = t5869 + t5951;
  t7492 = -1.*t5841*t7355;
  t7522 = t5796 + t7492;
  t9399 = -1.*t4503*t5841;
  t9482 = -1.*t4114*t7355;
  t9607 = t9399 + t9482;
  t9894 = t1966*t2236;
  t9901 = -1.*t1943*t2840;
  t9926 = t9894 + t9901;
  t10105 = -1.*t1966;
  t10126 = 1. + t10105;
  t10141 = 0.50321*t10126;
  t10157 = 0.19821*t1966;
  t10161 = t10141 + t10157;
  t10449 = -1.*t3170;
  t10884 = 1. + t10449;
  t10916 = -1.*t1943;
  t11069 = 1. + t10916;
  t11132 = 0.28121*t11069;
  t11275 = t1943*t10161;
  t11395 = -0.305*t2236*t2840;
  t11425 = t11132 + t11275 + t11395;
  t10084 = -1.*t712*t1906;
  t10098 = -1.*t3170*t3439;
  t10099 = t10084 + t10098;
  t10100 = 0.28121*t2236;
  t10181 = -1.*t10161*t2236;
  t10191 = -0.305*t1943*t2840;
  t10195 = t10100 + t10181 + t10191;
  t10912 = 0.15121*t10884;
  t11690 = t3170*t11425;
  t11824 = t10912 + t11690;
  t11834 = t712*t11824;
  t11840 = -0.15121*t10884;
  t11870 = -0.15121*t3170;
  t11893 = -0.15121*t1906;
  t12129 = t1906*t11425;
  t12146 = t11840 + t11870 + t11893 + t12129;
  t12360 = -1.*t12146*t3439;
  t12517 = t11834 + t12360;
  t10027 = t3170*t712*t9926;
  t10028 = -1.*t1906*t9926*t3439;
  t10031 = t10027 + t10028;
  t12571 = t10195*t5841;
  t12699 = t4114*t12517;
  t12765 = t12571 + t12699;
  t12794 = t4114*t2982;
  t12797 = -1.*t5841*t10031;
  t12798 = t12794 + t12797;
  t10262 = -1.*t10195*t5841;
  t12521 = -1.*t4114*t12517;
  t12540 = t10262 + t12521;
  t13154 = t4114*t10195;
  t13157 = -1.*t5841*t12517;
  t13386 = t13154 + t13157;
  t9828 = t2982*t5841;
  t10056 = t4114*t10031;
  t10079 = t9828 + t10056;
  t13050 = t712*t12146;
  t13074 = t11824*t3439;
  t13085 = t13050 + t13074;
  t13677 = -1.*t712*t1906*t2982;
  t13679 = -1.*t3170*t2982*t3439;
  t13681 = t13677 + t13679;
  t12799 = t3170*t712;
  t12842 = -1.*t1906*t3439;
  t13022 = t12799 + t12842;
  t13086 = -1.*t13022*t13085;
  t13646 = t712*t1906*t9926;
  t13648 = t3170*t9926*t3439;
  t13649 = t13646 + t13648;
  t13723 = -1.*t712*t12146;
  t13725 = -1.*t11824*t3439;
  t13726 = t13723 + t13725;
  t13660 = t13649*t13085;
  t14808 = -1.*t712*t1906*t9926;
  t14822 = -1.*t3170*t9926*t3439;
  t14830 = t14808 + t14822;
  t13088 = -1.*t4114*t10099*t12765;
  t13387 = t5841*t10099*t13386;
  t13415 = t13086 + t13088 + t13387;
  t13742 = -1.*t10099*t13085;
  t13747 = -1.*t13022*t12517;
  t13890 = -1.*t3170*t712;
  t13893 = t1906*t3439;
  t14183 = t13890 + t13893;
  t14793 = t10031*t13085;
  t14909 = t13649*t12517;
  t13661 = t10079*t12765;
  t13664 = t12798*t13386;
  t13665 = t13660 + t13661 + t13664;
  t13683 = var2[0]*t4114*t13681;
  t13684 = t273*t5841*t13681;
  t13685 = t4104*t7355;
  t13691 = t13684 + t13685;
  t13701 = var2[1]*t13691;
  t13702 = -1.*t4104*t5841*t13681;
  t13703 = t273*t7355;
  t13706 = t13702 + t13703;
  t13707 = var2[2]*t13706;
  t13708 = -1.*t10099*t12517;
  t13709 = t13086 + t13708;
  t13722 = t10031*t13709;
  t15077 = 0.15121*t1906;
  t15079 = -1.*t1906*t11425;
  t15080 = t15077 + t15079;
  t15075 = t11870 + t11690;
  t14248 = -1.*t14183*t12517;
  t15087 = t712*t15080;
  t15089 = -1.*t15075*t3439;
  t15090 = t15087 + t15089;
  t15092 = t712*t15075;
  t15094 = t15080*t3439;
  t15095 = t15092 + t15094;
  t14858 = t14830*t12517;
  t14928 = t10195*t2982;
  t14936 = t10031*t12517;
  t14979 = t14928 + t13660 + t14936;
  t14980 = t10099*t14979;
  t14991 = t4114*t14830*t13415;
  t14992 = Power(t4114,2);
  t15003 = Power(t5841,2);
  t15096 = -1.*t13022*t15095;
  t15005 = -1.*t4114*t14183*t12765;
  t15008 = t5841*t14183*t13386;
  t15101 = t13649*t15095;
  t15015 = t4114*t14830*t12765;
  t15016 = -1.*t5841*t14830*t13386;
  t15021 = t4114*t14183*t13665;
  t15128 = -1.*t1943*t1966;
  t15129 = -1.*t2236*t2840;
  t15131 = t15128 + t15129;
  t15134 = t3170*t712*t4503;
  t15135 = -1.*t1906*t4503*t3439;
  t15136 = t15134 + t15135;
  t15140 = t712*t1906*t4503;
  t15141 = t3170*t4503*t3439;
  t15142 = t15140 + t15141;
  t15144 = t4114*t15131;
  t15145 = -1.*t5841*t15136;
  t15146 = t15144 + t15145;
  t15154 = t712*t1906*t10195;
  t15156 = t3170*t10195*t3439;
  t15157 = t15154 + t15156;
  t15161 = t3170*t712*t10195;
  t15162 = -1.*t1906*t10195*t3439;
  t15163 = t15161 + t15162;
  t15159 = -1.*t13022*t15157;
  t15169 = 0.28121*t1943;
  t15171 = -1.*t1943*t10161;
  t15172 = 0.305*t2236*t2840;
  t15173 = t15169 + t15171 + t15172;
  t15175 = t13649*t15157;
  t15177 = t3842*t13085;
  t15184 = t15173*t5841;
  t15185 = t4114*t15163;
  t15186 = t15184 + t15185;
  t15189 = t4114*t15173;
  t15190 = -1.*t5841*t15163;
  t15191 = t15189 + t15190;
  t15195 = t4503*t5841;
  t15196 = t4114*t7355;
  t15197 = t15195 + t15196;
  t15123 = t1906*t11824;
  t15124 = -1.*t3170*t12146;
  t15125 = t15123 + t15124;
  t15226 = -0.305*t1966*t2236;
  t15228 = 0.305*t1943*t2840;
  t15229 = t15226 + t15228;
  t15230 = t712*t1906*t15229;
  t15231 = t3170*t15229*t3439;
  t15232 = t15230 + t15231;
  t15234 = t3170*t712*t15229;
  t15235 = -1.*t1906*t15229*t3439;
  t15236 = t15234 + t15235;
  t15240 = t712*t1906*t15131;
  t15241 = t3170*t15131*t3439;
  t15242 = t15240 + t15241;
  t15233 = -1.*t13022*t15232;
  t15245 = -0.305*t1943*t1966;
  t15246 = t15245 + t11395;
  t15251 = t3170*t712*t15131;
  t15252 = -1.*t1906*t15131*t3439;
  t15253 = t15251 + t15252;
  t15248 = t13649*t15232;
  t15250 = t15242*t13085;
  t15259 = t15246*t5841;
  t15260 = t4114*t15236;
  t15261 = t15259 + t15260;
  t15263 = t4114*t15246;
  t15264 = -1.*t5841*t15236;
  t15265 = t15263 + t15264;
  t15269 = t9926*t5841;
  t15270 = t4114*t15253;
  t15271 = t15269 + t15270;
  t8489 = t4104*t3842;
  t8973 = -1.*t273*t7522;
  t9156 = t8489 + t8973;
  t13443 = -1.*t2982*t5841;
  t13454 = -1.*t4114*t10031;
  t13457 = t13443 + t13454;
  t15201 = t15197*t12765;
  t15202 = t7522*t13386;
  t15319 = -1.*t13649*t13085;
  t15168 = t10195*t4503;
  t15178 = t7355*t12517;
  t15345 = -1.*t10031*t13085;
  t15347 = -1.*t13649*t12517;
  t15355 = t7355*t13085;
  t15357 = t3842*t12517;
  t15320 = -1.*t10079*t12765;
  t15321 = -1.*t12798*t13386;
  t15322 = t15319 + t15320 + t15321;
  t15330 = t15177 + t15201 + t15202;
  t15335 = var2[0]*t4114*t14183;
  t15336 = t273*t10099;
  t15337 = -1.*t4104*t5841*t14183;
  t15338 = t15336 + t15337;
  t15339 = var2[2]*t15338;
  t15340 = t4104*t10099;
  t15341 = t273*t5841*t14183;
  t15342 = t15340 + t15341;
  t15343 = var2[1]*t15342;
  t15346 = -1.*t14830*t12517;
  t15350 = -1.*t10195*t2982;
  t15351 = -1.*t10031*t12517;
  t15352 = t15350 + t15319 + t15351;
  t15353 = t7355*t15352;
  t15356 = t13681*t12517;
  t15360 = t15168 + t15177 + t15178;
  t15361 = t10031*t15360;
  t15396 = -1.*t13649*t15095;
  t15366 = -1.*t4114*t14830*t12765;
  t15367 = t5841*t14830*t13386;
  t15400 = t3842*t15095;
  t15372 = t4114*t13681*t12765;
  t15373 = -1.*t5841*t13681*t13386;
  t15376 = t4114*t13681*t15322;
  t15377 = t4114*t14830*t15330;
  t15419 = t10195*t15131;
  t15421 = t4503*t15173;
  t15439 = Power(t3170,2);
  t15441 = Power(t1906,2);
  t15428 = -1.*t10195*t4503;
  t15430 = -1.*t15173*t2982;
  t15132 = t15131*t5841;
  t15137 = t4114*t15136;
  t15138 = t15132 + t15137;
  t15460 = t15157*t3842;
  t15462 = t15142*t13085;
  t15466 = -1.*t13649*t15157;
  t15468 = -1.*t3842*t13085;
  t15416 = -1.*t9926*t11425;
  t15417 = t15416 + t15350;
  t15424 = t11425*t2982;
  t15425 = t15168 + t15424;
  t15427 = -1.*t9926*t10195;
  t15435 = -1.*t3170*t9926*t11824;
  t15436 = -1.*t1906*t9926*t12146;
  t15437 = t15350 + t15435 + t15436;
  t15494 = t4503*t15246;
  t15501 = -1.*t15246*t2982;
  t15453 = t3170*t2982*t11824;
  t15454 = t1906*t2982*t12146;
  t15455 = t15168 + t15453 + t15454;
  t15523 = t15232*t3842;
  t15527 = -1.*t13649*t15232;
  t15529 = -1.*t15242*t13085;
  t15278 = t4114*t9926;
  t15279 = -1.*t5841*t15253;
  t15280 = t15278 + t15279;
  t15301 = t273*t5841*t10099;
  t15302 = t4104*t13022;
  t15303 = t15301 + t15302;
  t15221 = t4104*t13649;
  t15223 = -1.*t273*t12798;
  t15224 = t15221 + t15223;
  t15484 = -1.*t15197*t12765;
  t15485 = -1.*t7522*t13386;
  t15580 = t13022*t13085;
  t15469 = -1.*t7355*t12517;
  t15581 = t4114*t10099*t12765;
  t15582 = -1.*t5841*t10099*t13386;
  t15583 = t15580 + t15581 + t15582;
  t15610 = t10099*t13085;
  t15611 = t13022*t12517;
  t15616 = -1.*t7355*t13085;
  t15618 = -1.*t3842*t12517;
  t15591 = t15468 + t15484 + t15485;
  t15596 = var2[0]*t4114*t14830;
  t15597 = t273*t5841*t14830;
  t15598 = t4104*t10031;
  t15599 = t15597 + t15598;
  t15600 = var2[1]*t15599;
  t15601 = -1.*t4104*t5841*t14830;
  t15602 = t273*t10031;
  t15603 = t15601 + t15602;
  t15604 = var2[2]*t15603;
  t15606 = t10099*t12517;
  t15607 = t15580 + t15606;
  t15608 = t7355*t15607;
  t15612 = t14183*t12517;
  t15617 = -1.*t13681*t12517;
  t15621 = t15428 + t15468 + t15469;
  t15622 = t10099*t15621;
  t15625 = t4114*t13681*t15583;
  t15649 = t13022*t15095;
  t15628 = t4114*t14183*t12765;
  t15629 = -1.*t5841*t14183*t13386;
  t15653 = -1.*t3842*t15095;
  t15634 = -1.*t4114*t13681*t12765;
  t15635 = t5841*t13681*t13386;
  t15638 = t4114*t14183*t15591;
  t15287 = t273*t3842;
  t15288 = t4104*t7522;
  t15289 = t15287 + t15288;
  t15680 = t13022*t15157;
  t15687 = -1.*t15157*t3842;
  t15689 = -1.*t15142*t13085;
  t15669 = -0.15121*t15131;
  t15670 = -0.15121*t2982;
  t15671 = t15669 + t15670;
  t15672 = var2[12]*t15671;
  t15673 = -1.*t1906*t11824;
  t15674 = t3170*t12146;
  t15675 = t15673 + t15674;
  t15724 = t13022*t15232;
  t15730 = -1.*t15232*t3842;
  t15217 = t273*t13649;
  t15218 = t4104*t12798;
  t15219 = t15217 + t15218;
  t15209 = 0.28121*t1966;
  t15210 = -1.*t10161*t1966;
  p_output1[0]=(-1.*t273*t3842 - 1.*t4104*t7522)*var2[1] + t9156*var2[2];
  p_output1[1]=t7522*var2[0] - 1.*t273*t9607*var2[1] + t4104*t9607*var2[2] + (t12798*t13415 + t10099*(t12540*t12798 + t12765*t12798 + t10079*t13386 + t13386*t13457)*t4114 - 1.*t10099*t13665*t5841 + t10079*(t10099*t12540*t5841 + t10099*t12765*t5841))*var2[3];
  p_output1[2]=t13683 + t13701 + t13707 + (t14991 + t10079*(t13742 + t13747 - 1.*t10099*t13726*t14992 - 1.*t10099*t13726*t15003 + t15005 + t15008) + t15021 + t10099*t4114*(t14793 + t14909 + t15015 + t15016 + t10079*t13726*t4114 - 1.*t12798*t13726*t5841))*var2[3] + (t13722 + t13649*(-1.*t10099*t13726 + t13742 + t13747 + t14248) + t13022*(t10031*t13726 + t14793 + t14858 + t14909) + t14980)*var2[4];
  p_output1[3]=t13683 + t13701 + t13707 + (t14991 + t15021 + t10079*(t13742 + t15005 + t15008 - 1.*t10099*t14992*t15090 - 1.*t10099*t15003*t15090 + t15096) + t10099*t4114*(t14793 + t15015 + t15016 + t15101 + t10079*t15090*t4114 - 1.*t12798*t15090*t5841))*var2[3] + (t13722 + t14980 + t13649*(t13742 + t14248 - 1.*t10099*t15090 + t15096) + t13022*(t14793 + t14858 + t10031*t15090 + t15101))*var2[4] + t2982*(t12146*t1906 + t15080*t1906 + t11824*t3170 - 1.*t15075*t3170)*var2[5];
  p_output1[4]=t15138*var2[0] + (-1.*t15146*t273 + t15142*t4104)*var2[1] + (t15142*t273 + t15146*t4104)*var2[2] + (t13415*t15197 + t10099*(t15175 + t15177 + t10079*t15186 + t12798*t15191 + t15201 + t15202)*t4114 + t10079*(t15159 - 1.*t10099*t15186*t4114 + t10099*t15191*t5841))*var2[3] + (t13649*(t15159 - 1.*t10099*t15163) + t13022*(t10031*t15163 + t15168 + t15175 + t15177 + t15178 + t15173*t2982) + t13709*t3842)*var2[4] + t15125*t4503*var2[5];
  p_output1[5]=t10079*var2[0] + t15224*var2[1] + t15219*var2[2] + (t13415*t15271 + t10099*(t15248 + t15250 + t10079*t15261 + t12798*t15265 + t12765*t15271 + t13386*t15280)*t4114 + t10079*(t15233 - 1.*t10099*t15261*t4114 + t10099*t15265*t5841))*var2[3] + (t13649*(t15233 - 1.*t10099*t15236) + t13709*t15242 + t13022*(t10031*t15236 + t15248 + t15250 + t12517*t15253 + t15246*t2982 + t10195*t9926))*var2[4] + t15125*t9926*var2[5] + (t15209 + t15210 - 0.305*Power(t1966,2))*var2[13];
  p_output1[6]=t15197;
  p_output1[7]=t9156;
  p_output1[8]=t15289;
  p_output1[9]=t10079*t13415 + t10099*t13665*t4114;
  p_output1[10]=t13649*t13709 + t13022*t14979;
  p_output1[11]=t15125*t2982;
  p_output1[12]=0.28121*t2840 - 1.*t10161*t2840 - 0.305*t1966*t2840;
  p_output1[13]=(-1.*t13022*t273 + t10099*t4104*t5841)*var2[1] + t15303*var2[2];
  p_output1[14]=-1.*t10099*t5841*var2[0] + t10099*t273*t4114*var2[1] - 1.*t10099*t4104*t4114*var2[2] + ((-1.*t12540*t12798 - 1.*t12765*t12798 - 1.*t10079*t13386 - 1.*t13386*t13457)*t15197 + t12798*t15330 + t15322*t7522 + t10079*(t13386*t15197 + t12540*t7522 + t12765*t7522 + t13386*t9607))*var2[3];
  p_output1[15]=t15335 + t15339 + t15343 + (t15376 + t15377 + t15197*(t15345 + t15347 + t15366 + t15367 - 1.*t10079*t13726*t4114 + t12798*t13726*t5841) + t10079*(t15355 + t15357 + t15372 + t15373 + t13726*t15197*t4114 - 1.*t13726*t5841*t7522))*var2[3] + (t15353 + t15361 + (-1.*t10031*t13726 + t15345 + t15346 + t15347)*t3842 + t13649*(t15355 + t15356 + t15357 + t13726*t7355))*var2[4];
  p_output1[16]=t15335 + t15339 + t15343 + (t15376 + t15377 + t15197*(t15345 + t15366 + t15367 + t15396 - 1.*t10079*t15090*t4114 + t12798*t15090*t5841) + t10079*(t15355 + t15372 + t15373 + t15400 + t15090*t15197*t4114 - 1.*t15090*t5841*t7522))*var2[3] + (t15353 + t15361 + (-1.*t10031*t15090 + t15345 + t15346 + t15396)*t3842 + t13649*(t15355 + t15356 + t15400 + t15090*t7355))*var2[4] + (t2982*(-1.*t11824*t1906*t2982 + t15075*t1906*t2982 + t12146*t2982*t3170 + t15080*t2982*t3170) + t4503*(t11824*t1906*t9926 - 1.*t15075*t1906*t9926 - 1.*t12146*t3170*t9926 - 1.*t15080*t3170*t9926))*var2[5];
  p_output1[17]=(t15138*t15322 + t15197*t15330 + t15197*(-1.*t10079*t15186 - 1.*t12798*t15191 + t15466 + t15468 + t15484 + t15485) + t10079*(t12765*t15138 + t13386*t15146 + t15186*t15197 + t15460 + t15462 + t15191*t7522))*var2[3] + (t15142*t15352 + t15360*t3842 + (-1.*t10031*t15163 + t15428 + t15430 + t15466 + t15468 + t15469)*t3842 + t13649*(t12517*t15136 + t15419 + t15421 + t15460 + t15462 + t15163*t7355))*var2[4] + (t15131*t15437 + t15455*t4503 + t2982*(t15419 + t15421 + t10195*t15439*t2982 + t10195*t15441*t2982 + t12146*t1906*t4503 + t11824*t3170*t4503) + t4503*(t15428 + t15430 - 1.*t12146*t1906*t2982 - 1.*t11824*t2982*t3170 - 1.*t10195*t15439*t9926 - 1.*t10195*t15441*t9926))*var2[5] + (t15131*t15417 + t15425*t4503 + (t15427 + t15428 + t15430 - 1.*t11425*t2982)*t4503 + t2982*(t14928 + t15419 + t15421 + t11425*t4503))*var2[12];
  p_output1[18]=(t10079*t15322 + t15271*t15330 + t15197*(-1.*t10079*t15261 - 1.*t12798*t15265 - 1.*t12765*t15271 - 1.*t13386*t15280 + t15527 + t15529) + t10079*(t13660 + t13661 + t13664 + t15197*t15261 + t15523 + t15265*t7522))*var2[3] + (t13649*t15352 + t15242*t15360 + (-1.*t10031*t15236 - 1.*t12517*t15253 + t15427 + t15501 + t15527 + t15529)*t3842 + t13649*(t13660 + t14928 + t14936 + t15494 + t15523 + t15236*t7355))*var2[4] + (t15437*t2982 + t15455*t9926 + t4503*(t15427 + t15501 - 1.*t12146*t15131*t1906 - 1.*t11824*t15131*t3170 - 1.*t15229*t15439*t9926 - 1.*t15229*t15441*t9926) + t2982*(t14928 + t15494 + t15229*t15439*t2982 + t15229*t15441*t2982 + t12146*t1906*t9926 + t11824*t3170*t9926))*var2[5] + (t15417*t2982 + t15425*t9926 + t2982*(t14928 + t15494 + t15229*t2982 + t11425*t9926) + t4503*(-1.*t11425*t15131 + t15427 + t15501 - 1.*t15229*t9926))*var2[12];
  p_output1[19]=t10099*t4114;
  p_output1[20]=t15303;
  p_output1[21]=t13022*t273 - 1.*t10099*t4104*t5841;
  p_output1[22]=t15197*t15322 + t10079*t15330;
  p_output1[23]=t13649*t15360 + t15352*t3842;
  p_output1[24]=t15455*t2982 + t15437*t4503;
  p_output1[25]=-0.15121 + t15425*t2982 + t15417*t4503;
  p_output1[26]=(-1.*t13649*t273 - 1.*t12798*t4104)*var2[1] + t15224*var2[2];
  p_output1[27]=t12798*var2[0] - 1.*t13457*t273*var2[1] + t13457*t4104*var2[2] + (-1.*t10099*t15591*t5841 + t15197*(-1.*t10099*t12540*t5841 - 1.*t10099*t12765*t5841) + t15583*t7522 + t10099*t4114*(-1.*t13386*t15197 - 1.*t12540*t7522 - 1.*t12765*t7522 - 1.*t13386*t9607))*var2[3];
  p_output1[28]=t15596 + t15600 + t15604 + (t15625 + t15197*(t10099*t13726*t14992 + t10099*t13726*t15003 + t15610 + t15611 + t15628 + t15629) + t15638 + t10099*t4114*(t15616 + t15618 + t15634 + t15635 - 1.*t13726*t15197*t4114 + t13726*t5841*t7522))*var2[3] + (t15608 + t15622 + (t10099*t13726 + t15610 + t15611 + t15612)*t3842 + t13022*(t15616 + t15617 + t15618 - 1.*t13726*t7355))*var2[4];
  p_output1[29]=t15596 + t15600 + t15604 + (t15625 + t15638 + t15197*(t10099*t14992*t15090 + t10099*t15003*t15090 + t15610 + t15628 + t15629 + t15649) + t10099*t4114*(t15616 + t15634 + t15635 + t15653 - 1.*t15090*t15197*t4114 + t15090*t5841*t7522))*var2[3] + (t15608 + t15622 + (t10099*t15090 + t15610 + t15612 + t15649)*t3842 + t13022*(t15616 + t15617 + t15653 - 1.*t15090*t7355))*var2[4] + (-1.*t12146*t1906 - 1.*t15080*t1906 - 1.*t11824*t3170 + t15075*t3170)*t4503*var2[5];
  p_output1[30]=t15672 + t15197*var2[0] + t9156*var2[1] + t15289*var2[2] + (t15138*t15583 + t15197*(t15680 + t10099*t15186*t4114 - 1.*t10099*t15191*t5841) + t10099*t4114*(-1.*t12765*t15138 - 1.*t13386*t15146 - 1.*t15186*t15197 + t15687 + t15689 - 1.*t15191*t7522))*var2[3] + (t15142*t15607 + (t10099*t15163 + t15680)*t3842 + t13022*(-1.*t10195*t15131 - 1.*t12517*t15136 + t15687 + t15689 - 1.*t15173*t4503 - 1.*t15163*t7355))*var2[4] + t15131*t15675*var2[5];
  p_output1[31]=t15672 + t15271*var2[0] + (-1.*t15280*t273 + t15242*t4104)*var2[1] + (t15242*t273 + t15280*t4104)*var2[2] + (t10079*t15583 + t15197*(t15724 + t10099*t15261*t4114 - 1.*t10099*t15265*t5841) + t10099*t4114*(-1.*t15197*t15261 + t15319 + t15320 + t15321 + t15730 - 1.*t15265*t7522))*var2[3] + (t13649*t15607 + (t10099*t15236 + t15724)*t3842 + t13022*(t15319 + t15350 + t15351 + t15730 - 1.*t15246*t4503 - 1.*t15236*t7355))*var2[4] + t15675*t2982*var2[5] + (-0.28121*t2840 + t10161*t2840 + 0.305*t1966*t2840)*var2[13];
  p_output1[32]=t10079;
  p_output1[33]=t15224;
  p_output1[34]=t15219;
  p_output1[35]=t15197*t15583 + t10099*t15591*t4114;
  p_output1[36]=t13022*t15621 + t15607*t3842;
  p_output1[37]=t15675*t4503;
  p_output1[38]=-0.15121*t4503 - 0.15121*t9926;
  p_output1[39]=t15209 + t15210 + 0.305*Power(t2840,2);
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

#include "J_dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
