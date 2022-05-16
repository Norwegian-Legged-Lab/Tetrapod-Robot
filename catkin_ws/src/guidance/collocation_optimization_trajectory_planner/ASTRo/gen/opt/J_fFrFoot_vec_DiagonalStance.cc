/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:40 GMT+02:00
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
  double t78;
  double t275;
  double t122;
  double t346;
  double t356;
  double t342;
  double t408;
  double t258;
  double t468;
  double t469;
  double t544;
  double t281;
  double t322;
  double t353;
  double t426;
  double t444;
  double t932;
  double t988;
  double t1019;
  double t1027;
  double t1046;
  double t1053;
  double t1057;
  double t1058;
  double t1059;
  double t1062;
  double t1064;
  double t1065;
  double t1082;
  double t689;
  double t690;
  double t784;
  double t810;
  double t823;
  double t824;
  double t553;
  double t561;
  double t563;
  double t1095;
  double t1115;
  double t1116;
  double t1201;
  double t1216;
  double t1233;
  double t269;
  double t291;
  double t292;
  double t1379;
  double t1387;
  double t1388;
  double t1601;
  double t1554;
  double t450;
  double t629;
  double t673;
  double t789;
  double t863;
  double t906;
  double t2243;
  double t2256;
  double t2260;
  double t2267;
  double t2288;
  double t2289;
  double t2305;
  double t2320;
  double t2343;
  double t2355;
  double t2390;
  double t2449;
  double t2457;
  double t1118;
  double t1125;
  double t1129;
  double t1941;
  double t1985;
  double t2019;
  double t1780;
  double t1828;
  double t1851;
  double t1437;
  double t1482;
  double t1484;
  double t2663;
  double t2682;
  double t2688;
  double t1647;
  double t1657;
  double t1658;
  double t2802;
  double t2808;
  double t2859;
  double t3025;
  double t3037;
  double t3053;
  double t2172;
  double t2175;
  double t2201;
  double t2221;
  double t2222;
  double t2230;
  double t3169;
  double t3192;
  double t3193;
  double t3204;
  double t3207;
  double t3234;
  double t3244;
  double t3261;
  double t3264;
  double t3272;
  double t3274;
  double t3284;
  double t3303;
  double t2469;
  double t2482;
  double t2542;
  double t2581;
  double t2588;
  double t2589;
  double t2871;
  double t2881;
  double t2898;
  double t2916;
  double t2928;
  double t2938;
  double t3586;
  double t3616;
  double t3639;
  double t3672;
  double t3686;
  double t3692;
  double t3913;
  double t3919;
  double t3941;
  double t3942;
  double t3956;
  double t3994;
  double t3995;
  double t4032;
  double t4072;
  double t4088;
  double t4113;
  double t4125;
  double t4128;
  double t3909;
  double t3972;
  double t3977;
  double t3989;
  double t4008;
  double t4142;
  double t4149;
  double t4151;
  double t4152;
  double t4208;
  double t4226;
  double t4256;
  double t4260;
  double t4274;
  double t4293;
  double t4368;
  double t4370;
  double t4404;
  double t3990;
  double t4315;
  double t4321;
  double t4589;
  double t4604;
  double t4608;
  double t4484;
  double t4485;
  double t4502;
  double t4535;
  double t4584;
  double t4611;
  double t4693;
  double t6279;
  double t6299;
  double t6307;
  double t4792;
  double t4824;
  double t4832;
  double t4840;
  double t4949;
  double t4951;
  double t5004;
  double t5060;
  double t6089;
  double t6326;
  double t5264;
  double t5279;
  double t5285;
  double t5291;
  double t5567;
  double t5595;
  double t5607;
  double t5610;
  double t5838;
  double t5850;
  double t5851;
  double t5853;
  double t5895;
  double t6392;
  double t12380;
  double t12541;
  double t12551;
  double t12711;
  double t12715;
  double t12766;
  double t13012;
  double t6435;
  double t6620;
  double t7282;
  double t13204;
  double t13294;
  double t14316;
  double t7760;
  double t7779;
  double t7796;
  double t8053;
  double t8173;
  double t8271;
  double t8379;
  double t8917;
  double t9184;
  double t9210;
  double t9784;
  double t9942;
  double t10081;
  double t10086;
  double t10299;
  double t10761;
  double t10762;
  double t10946;
  double t10998;
  double t17659;
  double t17660;
  double t17687;
  double t17703;
  double t17811;
  double t17840;
  double t17847;
  double t1117;
  double t1130;
  double t1188;
  double t17566;
  double t17590;
  double t17652;
  double t17712;
  double t17854;
  double t17862;
  double t17904;
  double t17910;
  double t17918;
  double t18791;
  double t18798;
  double t18809;
  double t18901;
  double t18913;
  double t18924;
  double t18926;
  double t18933;
  double t18835;
  double t18842;
  double t18886;
  double t18920;
  double t18958;
  double t19001;
  double t19010;
  double t19048;
  double t19072;
  double t1424;
  double t1485;
  double t1510;
  double t6407;
  double t7283;
  double t8176;
  double t8923;
  double t10034;
  double t10303;
  double t20193;
  double t20218;
  double t20251;
  double t14727;
  double t20268;
  double t14988;
  double t20304;
  double t21038;
  double t21116;
  double t21128;
  double t21515;
  double t21996;
  double t22053;
  double t22057;
  double t15513;
  double t22117;
  double t15770;
  double t22248;
  double t22255;
  double t22321;
  double t22340;
  double t22342;
  double t16263;
  double t22368;
  double t22394;
  double t22425;
  double t22449;
  double t22456;
  double t17051;
  double t22463;
  double t22467;
  double t22468;
  double t22547;
  double t22560;
  double t17654;
  double t17976;
  double t18012;
  double t18222;
  double t18240;
  double t18449;
  double t18569;
  double t18737;
  double t18889;
  double t19368;
  double t19444;
  double t19459;
  double t19460;
  double t19697;
  double t19900;
  double t19907;
  double t23204;
  double t23205;
  double t23680;
  double t23700;
  double t23227;
  double t23583;
  double t23586;
  double t23593;
  double t23600;
  double t23606;
  double t23609;
  double t23626;
  double t23628;
  double t23658;
  double t23346;
  double t23360;
  double t23361;
  double t23749;
  double t23753;
  double t23769;
  double t24233;
  double t24271;
  double t24282;
  double t24352;
  double t24416;
  double t24420;
  double t24531;
  double t24543;
  double t24914;
  double t24915;
  t78 = Sin(var1[4]);
  t275 = Cos(var1[12]);
  t122 = Cos(var1[5]);
  t346 = Cos(var1[14]);
  t356 = Sin(var1[13]);
  t342 = Cos(var1[13]);
  t408 = Sin(var1[14]);
  t258 = Sin(var1[12]);
  t468 = t346*t356;
  t469 = -1.*t342*t408;
  t544 = t468 + t469;
  t281 = Sin(var1[5]);
  t322 = Cos(var1[4]);
  t353 = t342*t346;
  t426 = t356*t408;
  t444 = t353 + t426;
  t932 = -1.*t275*t122;
  t988 = t258*t281;
  t1019 = t932 + t988;
  t1027 = var2[1]*t322*t1019;
  t1046 = -1.*t122*t258*t544;
  t1053 = -1.*t275*t544*t281;
  t1057 = t1046 + t1053;
  t1058 = var2[2]*t322*t1057;
  t1059 = -1.*t122*t258*t444;
  t1062 = -1.*t275*t444*t281;
  t1064 = t1059 + t1062;
  t1065 = var2[0]*t322*t1064;
  t1082 = t1027 + t1058 + t1065;
  t689 = -1.*t346*t356;
  t690 = t342*t408;
  t784 = t689 + t690;
  t810 = t275*t122*t444;
  t823 = -1.*t258*t444*t281;
  t824 = t810 + t823;
  t553 = t275*t122*t544;
  t561 = -1.*t258*t544*t281;
  t563 = t553 + t561;
  t1095 = -1.*t342*t346;
  t1115 = -1.*t356*t408;
  t1116 = t1095 + t1115;
  t1201 = t784*t78;
  t1216 = t322*t824;
  t1233 = t1201 + t1216;
  t269 = -1.*t122*t258;
  t291 = -1.*t275*t281;
  t292 = t269 + t291;
  t1379 = t444*t78;
  t1387 = t322*t563;
  t1388 = t1379 + t1387;
  t1601 = Sin(var1[3]);
  t1554 = Cos(var1[3]);
  t450 = t322*t444;
  t629 = -1.*t78*t563;
  t673 = t450 + t629;
  t789 = t322*t784;
  t863 = -1.*t78*t824;
  t906 = t789 + t863;
  t2243 = t1554*t292;
  t2256 = t1601*t78*t1019;
  t2260 = t2243 + t2256;
  t2267 = var2[1]*t2260;
  t2288 = t1601*t78*t1057;
  t2289 = t1554*t563;
  t2305 = t2288 + t2289;
  t2320 = var2[2]*t2305;
  t2343 = t1601*t78*t1064;
  t2355 = t1554*t824;
  t2390 = t2343 + t2355;
  t2449 = var2[0]*t2390;
  t2457 = t2267 + t2320 + t2449;
  t1118 = t275*t122*t784;
  t1125 = -1.*t258*t784*t281;
  t1129 = t1118 + t1125;
  t1941 = t122*t258*t444;
  t1985 = t275*t444*t281;
  t2019 = t1941 + t1985;
  t1780 = t122*t258*t544;
  t1828 = t275*t544*t281;
  t1851 = t1780 + t1828;
  t1437 = t275*t122*t1116;
  t1482 = -1.*t258*t1116*t281;
  t1484 = t1437 + t1482;
  t2663 = t1554*t2019;
  t2682 = -1.*t1601*t906;
  t2688 = t2663 + t2682;
  t1647 = t275*t122;
  t1657 = -1.*t258*t281;
  t1658 = t1647 + t1657;
  t2802 = t1554*t1851;
  t2808 = -1.*t1601*t673;
  t2859 = t2802 + t2808;
  t3025 = t1601*t78*t292;
  t3037 = t1554*t1658;
  t3053 = t3025 + t3037;
  t2172 = -1.*t444*t78;
  t2175 = -1.*t322*t563;
  t2201 = t2172 + t2175;
  t2221 = -1.*t784*t78;
  t2222 = -1.*t322*t824;
  t2230 = t2221 + t2222;
  t3169 = t1601*t292;
  t3192 = -1.*t1554*t78*t1019;
  t3193 = t3169 + t3192;
  t3204 = var2[1]*t3193;
  t3207 = -1.*t1554*t78*t1057;
  t3234 = t1601*t563;
  t3244 = t3207 + t3234;
  t3261 = var2[2]*t3244;
  t3264 = -1.*t1554*t78*t1064;
  t3272 = t1601*t824;
  t3274 = t3264 + t3272;
  t3284 = var2[0]*t3274;
  t3303 = t3204 + t3261 + t3284;
  t2469 = t122*t258*t784;
  t2482 = t275*t784*t281;
  t2542 = t2469 + t2482;
  t2581 = t322*t1116;
  t2588 = -1.*t78*t1129;
  t2589 = t2581 + t2588;
  t2871 = t122*t258*t1116;
  t2881 = t275*t1116*t281;
  t2898 = t2871 + t2881;
  t2916 = t322*t544;
  t2928 = -1.*t78*t1484;
  t2938 = t2916 + t2928;
  t3586 = t1601*t2019;
  t3616 = t1554*t906;
  t3639 = t3586 + t3616;
  t3672 = t1601*t1851;
  t3686 = t1554*t673;
  t3692 = t3672 + t3686;
  t3913 = -1.*t346;
  t3919 = 1. + t3913;
  t3941 = 0.50321*t3919;
  t3942 = 0.23321*t346;
  t3956 = t3941 + t3942;
  t3994 = -1.*t275;
  t3995 = 1. + t3994;
  t4032 = -1.*t342;
  t4072 = 1. + t4032;
  t4088 = 0.28121*t4072;
  t4113 = t342*t3956;
  t4125 = -0.27*t356*t408;
  t4128 = t4088 + t4113 + t4125;
  t3909 = 0.28121*t356;
  t3972 = -1.*t3956*t356;
  t3977 = -0.27*t342*t408;
  t3989 = t3909 + t3972 + t3977;
  t4008 = 0.15121*t3995;
  t4142 = t275*t4128;
  t4149 = t4008 + t4142;
  t4151 = t122*t4149;
  t4152 = -0.15121*t3995;
  t4208 = -0.15121*t275;
  t4226 = -0.15121*t258;
  t4256 = t258*t4128;
  t4260 = t4152 + t4208 + t4226 + t4256;
  t4274 = -1.*t4260*t281;
  t4293 = t4151 + t4274;
  t4368 = t3989*t78;
  t4370 = t322*t4293;
  t4404 = t4368 + t4370;
  t3990 = -1.*t3989*t78;
  t4315 = -1.*t322*t4293;
  t4321 = t3990 + t4315;
  t4589 = t322*t3989;
  t4604 = -1.*t78*t4293;
  t4608 = t4589 + t4604;
  t4484 = t122*t4260;
  t4485 = t4149*t281;
  t4502 = t4484 + t4485;
  t4535 = -1.*t1658*t4502;
  t4584 = -1.*t322*t292*t4404;
  t4611 = t78*t292*t4608;
  t4693 = t4535 + t4584 + t4611;
  t6279 = -1.*t122*t4260;
  t6299 = -1.*t4149*t281;
  t6307 = t6279 + t6299;
  t4792 = t1851*t4502;
  t4824 = t1388*t4404;
  t4832 = t673*t4608;
  t4840 = t4792 + t4824 + t4832;
  t4949 = t1658*t4502;
  t4951 = t322*t292*t4404;
  t5004 = -1.*t78*t292*t4608;
  t5060 = t4949 + t4951 + t5004;
  t6089 = Power(t322,2);
  t6326 = Power(t78,2);
  t5264 = -1.*t2019*t4502;
  t5279 = -1.*t1233*t4404;
  t5285 = -1.*t906*t4608;
  t5291 = t5264 + t5279 + t5285;
  t5567 = -1.*t1851*t4502;
  t5595 = -1.*t1388*t4404;
  t5607 = -1.*t673*t4608;
  t5610 = t5567 + t5595 + t5607;
  t5838 = t2019*t4502;
  t5850 = t1233*t4404;
  t5851 = t906*t4608;
  t5853 = t5838 + t5850 + t5851;
  t5895 = t322*t1057*t4693;
  t6392 = -1.*t292*t4502;
  t12380 = 0.15121*t258;
  t12541 = -1.*t258*t4128;
  t12551 = t12380 + t12541;
  t12711 = t122*t12551;
  t12715 = t4208 + t4142;
  t12766 = -1.*t12715*t281;
  t13012 = t12711 + t12766;
  t6435 = -1.*t322*t1019*t4404;
  t6620 = t78*t1019*t4608;
  t7282 = t563*t4502;
  t13204 = t122*t12715;
  t13294 = t12551*t281;
  t14316 = t13204 + t13294;
  t7760 = t322*t1057*t4404;
  t7779 = -1.*t78*t1057*t4608;
  t7796 = t322*t1019*t4840;
  t8053 = t322*t1064*t5060;
  t8173 = t292*t4502;
  t8271 = t322*t1019*t4404;
  t8379 = -1.*t78*t1019*t4608;
  t8917 = -1.*t824*t4502;
  t9184 = -1.*t322*t1064*t4404;
  t9210 = t78*t1064*t4608;
  t9784 = t322*t1019*t5291;
  t9942 = -1.*t563*t4502;
  t10081 = -1.*t322*t1057*t4404;
  t10086 = t78*t1057*t4608;
  t10299 = t824*t4502;
  t10761 = t322*t1064*t4404;
  t10762 = -1.*t78*t1064*t4608;
  t10946 = t322*t1064*t5610;
  t10998 = t322*t1057*t5853;
  t17659 = 0.28121*t342;
  t17660 = -1.*t342*t3956;
  t17687 = 0.27*t356*t408;
  t17703 = t17659 + t17660 + t17687;
  t17811 = t275*t122*t3989;
  t17840 = -1.*t258*t3989*t281;
  t17847 = t17811 + t17840;
  t1117 = t1116*t78;
  t1130 = t322*t1129;
  t1188 = t1117 + t1130;
  t17566 = t122*t258*t3989;
  t17590 = t275*t3989*t281;
  t17652 = t17566 + t17590;
  t17712 = t17703*t78;
  t17854 = t322*t17847;
  t17862 = t17712 + t17854;
  t17904 = t322*t17703;
  t17910 = -1.*t78*t17847;
  t17918 = t17904 + t17910;
  t18791 = -0.27*t346*t356;
  t18798 = 0.27*t342*t408;
  t18809 = t18791 + t18798;
  t18901 = -0.27*t342*t346;
  t18913 = t18901 + t4125;
  t18924 = t275*t122*t18809;
  t18926 = -1.*t258*t18809*t281;
  t18933 = t18924 + t18926;
  t18835 = t122*t258*t18809;
  t18842 = t275*t18809*t281;
  t18886 = t18835 + t18842;
  t18920 = t18913*t78;
  t18958 = t322*t18933;
  t19001 = t18920 + t18958;
  t19010 = t322*t18913;
  t19048 = -1.*t78*t18933;
  t19072 = t19010 + t19048;
  t1424 = t544*t78;
  t1485 = t322*t1484;
  t1510 = t1424 + t1485;
  t6407 = -1.*t1658*t4293;
  t7283 = t1851*t4293;
  t8176 = t1658*t4293;
  t8923 = -1.*t2019*t4293;
  t10034 = -1.*t1851*t4293;
  t10303 = t2019*t4293;
  t20193 = -1.*t292*t4293;
  t20218 = t4535 + t20193;
  t20251 = t563*t20218;
  t14727 = -1.*t1658*t14316;
  t20268 = -1.*t1019*t4293;
  t14988 = t1851*t14316;
  t20304 = t1057*t4293;
  t21038 = t3989*t444;
  t21116 = t563*t4293;
  t21128 = t21038 + t4792 + t21116;
  t21515 = t292*t21128;
  t21996 = t292*t4293;
  t22053 = t4949 + t21996;
  t22057 = t824*t22053;
  t15513 = t1658*t14316;
  t22117 = t1019*t4293;
  t15770 = -1.*t2019*t14316;
  t22248 = -1.*t1064*t4293;
  t22255 = -1.*t3989*t784;
  t22321 = -1.*t824*t4293;
  t22340 = t22255 + t5264 + t22321;
  t22342 = t292*t22340;
  t16263 = -1.*t1851*t14316;
  t22368 = -1.*t1057*t4293;
  t22394 = -1.*t3989*t444;
  t22425 = -1.*t563*t4293;
  t22449 = t22394 + t5567 + t22425;
  t22456 = t824*t22449;
  t17051 = t2019*t14316;
  t22463 = t1064*t4293;
  t22467 = t3989*t784;
  t22468 = t824*t4293;
  t22547 = t22467 + t5838 + t22468;
  t22560 = t563*t22547;
  t17654 = t1658*t17652;
  t17976 = -1.*t17652*t2019;
  t18012 = -1.*t2542*t4502;
  t18222 = t17652*t2019;
  t18240 = t2542*t4502;
  t18449 = -1.*t1851*t17652;
  t18569 = -1.*t1658*t17652;
  t18737 = t1851*t17652;
  t18889 = t1658*t18886;
  t19368 = -1.*t18886*t2019;
  t19444 = -1.*t1658*t18886;
  t19459 = t1851*t18886;
  t19460 = t2898*t4502;
  t19697 = t18886*t2019;
  t19900 = -1.*t1851*t18886;
  t19907 = -1.*t2898*t4502;
  t23204 = t3989*t1116;
  t23205 = t784*t17703;
  t23680 = Power(t275,2);
  t23700 = Power(t258,2);
  t23227 = -1.*t17703*t444;
  t23583 = t258*t4149;
  t23586 = -1.*t275*t4260;
  t23593 = t23583 + t23586;
  t23600 = -1.*t258*t4149;
  t23606 = t275*t4260;
  t23609 = t23600 + t23606;
  t23626 = -1.*t275*t544*t4149;
  t23628 = -1.*t258*t544*t4260;
  t23658 = t22394 + t23626 + t23628;
  t23346 = t784*t18913;
  t23360 = -1.*t544*t3989;
  t23361 = -1.*t18913*t444;
  t23749 = t275*t444*t4149;
  t23753 = t258*t444*t4260;
  t23769 = t22467 + t23749 + t23753;
  t24233 = -0.15121*t1116;
  t24271 = -0.15121*t444;
  t24282 = t24233 + t24271;
  t24352 = var2[2]*t24282;
  t24416 = -1.*t544*t4128;
  t24420 = t24416 + t22394;
  t24531 = t4128*t444;
  t24543 = t22467 + t24531;
  t24914 = 0.28121*t346;
  t24915 = -1.*t3956*t346;
  p_output1[0]=t906*var2[0] - 1.*t292*t78*var2[1] + t673*var2[2];
  p_output1[1]=t1082;
  p_output1[2]=t1082;
  p_output1[3]=t1188*var2[0] + t1233*var2[2];
  p_output1[4]=t1388*var2[0] + t1510*var2[2];
  p_output1[5]=t1233;
  p_output1[6]=t292*t322;
  p_output1[7]=t1388;
  p_output1[8]=(-1.*t1601*t2019 - 1.*t1554*t906)*var2[0] + (-1.*t1601*t1658 + t1554*t292*t78)*var2[1] + (-1.*t1601*t1851 - 1.*t1554*t673)*var2[2];
  p_output1[9]=-1.*t1601*t2230*var2[0] + t1601*t292*t322*var2[1] - 1.*t1601*t2201*var2[2];
  p_output1[10]=t2457;
  p_output1[11]=t2457;
  p_output1[12]=(t1554*t2542 - 1.*t1601*t2589)*var2[0] + t2688*var2[2];
  p_output1[13]=t2859*var2[0] + (t1554*t2898 - 1.*t1601*t2938)*var2[2];
  p_output1[14]=t2688;
  p_output1[15]=t3053;
  p_output1[16]=t2859;
  p_output1[17]=t2688*var2[0] + t3053*var2[1] + t2859*var2[2];
  p_output1[18]=t1554*t2230*var2[0] - 1.*t1554*t292*t322*var2[1] + t1554*t2201*var2[2];
  p_output1[19]=t3303;
  p_output1[20]=t3303;
  p_output1[21]=(t1601*t2542 + t1554*t2589)*var2[0] + t3639*var2[2];
  p_output1[22]=t3692*var2[0] + (t1601*t2898 + t1554*t2938)*var2[2];
  p_output1[23]=t3639;
  p_output1[24]=t1601*t1658 - 1.*t1554*t292*t78;
  p_output1[25]=t3692;
  p_output1[26]=(t4693*t673 + t292*t322*(t1388*t4608 + t2201*t4608 + t4321*t673 + t4404*t673) - 1.*t292*t4840*t78 + t1388*(t292*t4321*t78 + t292*t4404*t78))*var2[0] + (t5853*t673 + t1233*(-1.*t1388*t4608 - 1.*t2201*t4608 - 1.*t4321*t673 - 1.*t4404*t673) + t5610*t906 + t1388*(t1233*t4608 + t2230*t4608 + t4321*t906 + t4404*t906))*var2[1] + (-1.*t292*t5291*t78 + t1233*(-1.*t292*t4321*t78 - 1.*t292*t4404*t78) + t5060*t906 + t292*t322*(-1.*t1233*t4608 - 1.*t2230*t4608 - 1.*t4321*t906 - 1.*t4404*t906))*var2[2];
  p_output1[27]=(t5895 + t1388*(-1.*t292*t6089*t6307 - 1.*t292*t6307*t6326 + t6392 + t6407 + t6435 + t6620) + t7796 + t292*t322*(t1388*t322*t6307 + t7282 + t7283 + t7760 + t7779 - 1.*t6307*t673*t78))*var2[0] + (t10946 + t10998 + t1388*(t10299 + t10303 + t10761 + t10762 + t1233*t322*t6307 - 1.*t6307*t78*t906) + t1233*(t10034 + t10081 + t10086 - 1.*t1388*t322*t6307 + t6307*t673*t78 + t9942))*var2[1] + (t8053 + t1233*(t292*t6089*t6307 + t292*t6307*t6326 + t8173 + t8176 + t8271 + t8379) + t292*t322*(-1.*t1233*t322*t6307 + t8917 + t8923 + t6307*t78*t906 + t9184 + t9210) + t9784)*var2[2];
  p_output1[28]=(t5895 + t1388*(t14727 - 1.*t13012*t292*t6089 - 1.*t13012*t292*t6326 + t6392 + t6435 + t6620) + t7796 + t292*t322*(t14988 + t13012*t1388*t322 + t7282 + t7760 + t7779 - 1.*t13012*t673*t78))*var2[0] + (t10946 + t10998 + t1388*(t10299 + t10761 + t10762 + t17051 + t1233*t13012*t322 - 1.*t13012*t78*t906) + t1233*(t10081 + t10086 + t16263 - 1.*t13012*t1388*t322 + t13012*t673*t78 + t9942))*var2[1] + (t8053 + t1233*(t15513 + t13012*t292*t6089 + t13012*t292*t6326 + t8173 + t8271 + t8379) + t292*t322*(t15770 - 1.*t1233*t13012*t322 + t8917 + t13012*t78*t906 + t9184 + t9210) + t9784)*var2[2];
  p_output1[29]=(t1233*t4693 + t292*t322*(t1388*t17862 + t18737 + t5838 + t5850 + t5851 + t17918*t673) + t1388*(t18569 - 1.*t17862*t292*t322 + t17918*t292*t78))*var2[0] + (t1188*t5610 + t1233*t5853 + t1233*(-1.*t1388*t17862 + t18449 + t5264 + t5279 + t5285 - 1.*t17918*t673) + t1388*(t1233*t17862 + t18222 + t18240 + t1188*t4404 + t2589*t4608 + t17918*t906))*var2[1] + (t1188*t5060 + t1233*(t17654 + t17862*t292*t322 - 1.*t17918*t292*t78) + t292*t322*(-1.*t1233*t17862 + t17976 + t18012 - 1.*t1188*t4404 - 1.*t2589*t4608 - 1.*t17918*t906))*var2[2];
  p_output1[30]=(t1510*t4693 + t292*t322*(t1388*t19001 + t19459 + t19460 + t1510*t4404 + t2938*t4608 + t19072*t673) + t1388*(t19444 - 1.*t19001*t292*t322 + t19072*t292*t78))*var2[0] + (t1388*t5610 + t1510*t5853 + t1233*(-1.*t1388*t19001 + t19900 + t19907 - 1.*t1510*t4404 - 1.*t2938*t4608 - 1.*t19072*t673) + t1388*(t1233*t19001 + t19697 + t4792 + t4824 + t4832 + t19072*t906))*var2[1] + (t1388*t5060 + t1233*(t18889 + t19001*t292*t322 - 1.*t19072*t292*t78) + t292*t322*(-1.*t1233*t19001 + t19368 + t5567 + t5595 + t5607 - 1.*t19072*t906))*var2[2];
  p_output1[31]=t1388*t4693 + t292*t322*t4840;
  p_output1[32]=t1233*t5610 + t1388*t5853;
  p_output1[33]=t1233*t5060 + t292*t322*t5291;
  p_output1[34]=(t20251 + t21515 + t1851*(t20268 - 1.*t292*t6307 + t6392 + t6407) + t1658*(t20304 + t563*t6307 + t7282 + t7283))*var2[0] + (t22456 + t22560 + t1851*(t10299 + t10303 + t22463 + t6307*t824) + t2019*(t10034 + t22368 - 1.*t563*t6307 + t9942))*var2[1] + (t22057 + t22342 + t2019*(t22117 + t292*t6307 + t8173 + t8176) + t1658*(t22248 - 1.*t6307*t824 + t8917 + t8923))*var2[2];
  p_output1[35]=(t20251 + t21515 + t1851*(t14727 + t20268 - 1.*t13012*t292 + t6392) + t1658*(t14988 + t20304 + t13012*t563 + t7282))*var2[0] + (t22456 + t22560 + t1851*(t10299 + t17051 + t22463 + t13012*t824) + t2019*(t16263 + t22368 - 1.*t13012*t563 + t9942))*var2[1] + (t22057 + t22342 + t2019*(t15513 + t22117 + t13012*t292 + t8173) + t1658*(t15770 + t22248 - 1.*t13012*t824 + t8917))*var2[2];
  p_output1[36]=(t2019*t20218 + t1851*(t18569 - 1.*t17847*t292) + t1658*(t18737 + t22467 + t22468 + t17703*t444 + t17847*t563 + t5838))*var2[0] + (t2019*t22547 + t22449*t2542 + t2019*(t18449 + t22255 + t22321 + t23227 + t5264 - 1.*t17847*t563) + t1851*(t18222 + t18240 + t23204 + t23205 + t1129*t4293 + t17847*t824))*var2[1] + (t22053*t2542 + t2019*(t17654 + t17847*t292) + t1658*(t17976 + t18012 - 1.*t1116*t3989 - 1.*t1129*t4293 - 1.*t17703*t784 - 1.*t17847*t824))*var2[2];
  p_output1[37]=(t20218*t2898 + t1851*(t19444 - 1.*t18933*t292) + t1658*(t19459 + t19460 + t1484*t4293 + t18913*t444 + t3989*t544 + t18933*t563))*var2[0] + (t1851*t22449 + t22547*t2898 + t2019*(t19900 + t19907 + t23360 + t23361 - 1.*t1484*t4293 - 1.*t18933*t563) + t1851*(t19697 + t21038 + t21116 + t23346 + t4792 + t18933*t824))*var2[1] + (t1851*t22053 + t2019*(t18889 + t18933*t292) + t1658*(t19368 + t22394 + t22425 + t5567 - 1.*t18913*t784 - 1.*t18933*t824))*var2[2];
  p_output1[38]=t1851*t20218 + t1658*t21128;
  p_output1[39]=t2019*t22449 + t1851*t22547;
  p_output1[40]=t2019*t22053 + t1658*t22340;
  p_output1[41]=(t12551*t258 - 1.*t12715*t275 + t275*t4149 + t258*t4260)*t444*var2[0] + (t444*(t12715*t258*t444 + t12551*t275*t444 - 1.*t258*t4149*t444 + t275*t4260*t444) + (-1.*t12715*t258*t544 - 1.*t12551*t275*t544 + t258*t4149*t544 - 1.*t275*t4260*t544)*t784)*var2[1] + (-1.*t12551*t258 + t12715*t275 - 1.*t275*t4149 - 1.*t258*t4260)*t784*var2[2];
  p_output1[42]=t23593*t784*var2[0] + (t1116*t23658 + t23769*t784 + (t22255 + t23227 - 1.*t275*t4149*t444 - 1.*t258*t4260*t444 - 1.*t23680*t3989*t544 - 1.*t23700*t3989*t544)*t784 + t444*(t23204 + t23205 + t23680*t3989*t444 + t23700*t3989*t444 + t275*t4149*t784 + t258*t4260*t784))*var2[1] + t1116*t23609*var2[2];
  p_output1[43]=t23593*t544*var2[0] + (t23658*t444 + t23769*t544 + t444*(t21038 + t23346 + t18809*t23680*t444 + t18809*t23700*t444 + t275*t4149*t544 + t258*t4260*t544) + (t23360 + t23361 - 1.*t1116*t275*t4149 - 1.*t1116*t258*t4260 - 1.*t18809*t23680*t544 - 1.*t18809*t23700*t544)*t784)*var2[1] + t23609*t444*var2[2];
  p_output1[44]=t23593*t444;
  p_output1[45]=t23769*t444 + t23658*t784;
  p_output1[46]=t23609*t784;
  p_output1[47]=t24352 + (t1116*t24420 + t24543*t784 + (t22255 + t23227 + t23360 - 1.*t4128*t444)*t784 + t444*(t21038 + t23204 + t23205 + t4128*t784))*var2[1];
  p_output1[48]=t24352 + (t24420*t444 + t24543*t544 + t444*(t21038 + t23346 + t18809*t444 + t4128*t544) + (t23360 + t23361 - 1.*t1116*t4128 - 1.*t18809*t544)*t784)*var2[1];
  p_output1[49]=-0.15121 + t24543*t444 + t24420*t784;
  p_output1[50]=-0.15121*t544 - 0.15121*t784;
  p_output1[51]=(t24914 + t24915 - 0.27*Power(t346,2))*var2[0] + (-0.28121*t408 + 0.27*t346*t408 + t3956*t408)*var2[2];
  p_output1[52]=0.28121*t408 - 0.27*t346*t408 - 1.*t3956*t408;
  p_output1[53]=t24914 + t24915 + 0.27*Power(t408,2);
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

#include "J_fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
