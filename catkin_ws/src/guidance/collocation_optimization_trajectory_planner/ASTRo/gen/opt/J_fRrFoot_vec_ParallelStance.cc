/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:38 GMT+02:00
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
  double t1314;
  double t8359;
  double t7595;
  double t8611;
  double t9089;
  double t8604;
  double t9108;
  double t7884;
  double t9278;
  double t9280;
  double t9417;
  double t8535;
  double t8603;
  double t9469;
  double t9520;
  double t9571;
  double t9912;
  double t9915;
  double t9916;
  double t9920;
  double t9921;
  double t9922;
  double t9923;
  double t9924;
  double t9927;
  double t9928;
  double t9929;
  double t10039;
  double t10042;
  double t10049;
  double t10059;
  double t10060;
  double t9582;
  double t9585;
  double t9647;
  double t8765;
  double t9114;
  double t9260;
  double t9421;
  double t9439;
  double t9440;
  double t10161;
  double t10173;
  double t10183;
  double t8358;
  double t8559;
  double t8560;
  double t10310;
  double t10311;
  double t10380;
  double t10492;
  double t10483;
  double t9275;
  double t9441;
  double t9444;
  double t9464;
  double t9659;
  double t9674;
  double t10730;
  double t10731;
  double t10754;
  double t10755;
  double t10757;
  double t10765;
  double t10769;
  double t10770;
  double t10783;
  double t10785;
  double t10791;
  double t10792;
  double t10799;
  double t10102;
  double t10112;
  double t10141;
  double t10544;
  double t10545;
  double t10554;
  double t10514;
  double t10523;
  double t10531;
  double t10390;
  double t10394;
  double t10396;
  double t10824;
  double t10831;
  double t10832;
  double t10499;
  double t10500;
  double t10506;
  double t10857;
  double t10884;
  double t10891;
  double t10979;
  double t10980;
  double t10981;
  double t10644;
  double t10663;
  double t10667;
  double t10670;
  double t10691;
  double t10707;
  double t11001;
  double t11002;
  double t11003;
  double t11005;
  double t11070;
  double t11081;
  double t11082;
  double t11090;
  double t11109;
  double t11137;
  double t11143;
  double t11146;
  double t11154;
  double t10801;
  double t10803;
  double t10804;
  double t10808;
  double t10811;
  double t10813;
  double t10923;
  double t10942;
  double t10943;
  double t10955;
  double t10956;
  double t10957;
  double t11171;
  double t11211;
  double t11212;
  double t11253;
  double t11254;
  double t11259;
  double t11289;
  double t11291;
  double t11292;
  double t11293;
  double t11294;
  double t11396;
  double t11401;
  double t11416;
  double t11422;
  double t11427;
  double t11441;
  double t11456;
  double t11474;
  double t11498;
  double t11283;
  double t11295;
  double t11296;
  double t11297;
  double t11506;
  double t11548;
  double t11549;
  double t11553;
  double t11555;
  double t11556;
  double t11563;
  double t11565;
  double t11578;
  double t11702;
  double t11717;
  double t11750;
  double t11349;
  double t11579;
  double t11580;
  double t12411;
  double t12420;
  double t12434;
  double t11933;
  double t12010;
  double t12235;
  double t12236;
  double t12408;
  double t12438;
  double t12473;
  double t16233;
  double t16278;
  double t16311;
  double t12650;
  double t12651;
  double t12652;
  double t12658;
  double t13170;
  double t13395;
  double t13448;
  double t13449;
  double t16035;
  double t16322;
  double t14034;
  double t14458;
  double t15135;
  double t15159;
  double t15371;
  double t15384;
  double t15406;
  double t15409;
  double t15896;
  double t15898;
  double t15930;
  double t15949;
  double t16030;
  double t16459;
  double t18091;
  double t18092;
  double t18094;
  double t18096;
  double t18097;
  double t18098;
  double t18100;
  double t18103;
  double t16496;
  double t16730;
  double t16778;
  double t18109;
  double t18110;
  double t18112;
  double t16808;
  double t16850;
  double t16863;
  double t17142;
  double t17567;
  double t17843;
  double t17844;
  double t17849;
  double t17918;
  double t17922;
  double t18051;
  double t18055;
  double t18061;
  double t18063;
  double t18067;
  double t18072;
  double t18074;
  double t18081;
  double t18084;
  double t18435;
  double t18439;
  double t18440;
  double t18442;
  double t18469;
  double t18471;
  double t18634;
  double t18636;
  double t18644;
  double t10043;
  double t10151;
  double t10154;
  double t18445;
  double t18453;
  double t18454;
  double t18557;
  double t18647;
  double t18667;
  double t18696;
  double t18704;
  double t18725;
  double t22168;
  double t22173;
  double t22222;
  double t22224;
  double t22232;
  double t22256;
  double t22263;
  double t22267;
  double t22185;
  double t22202;
  double t22212;
  double t22253;
  double t22272;
  double t22273;
  double t22317;
  double t22319;
  double t22327;
  double t10387;
  double t10397;
  double t10475;
  double t16460;
  double t16784;
  double t17842;
  double t17853;
  double t18056;
  double t18068;
  double t22626;
  double t22637;
  double t22639;
  double t18147;
  double t22644;
  double t18217;
  double t22652;
  double t22664;
  double t22667;
  double t22668;
  double t22670;
  double t22680;
  double t22687;
  double t22692;
  double t18298;
  double t22751;
  double t18349;
  double t22763;
  double t22771;
  double t22773;
  double t22774;
  double t22775;
  double t18361;
  double t22793;
  double t22804;
  double t22807;
  double t22846;
  double t22854;
  double t18379;
  double t22881;
  double t22902;
  double t22903;
  double t22905;
  double t22921;
  double t18456;
  double t18791;
  double t18795;
  double t18833;
  double t18834;
  double t18929;
  double t19353;
  double t20319;
  double t22214;
  double t22418;
  double t22458;
  double t22481;
  double t22485;
  double t22498;
  double t22522;
  double t22536;
  double t23203;
  double t23204;
  double t23808;
  double t23810;
  double t23213;
  double t23791;
  double t23795;
  double t23801;
  double t23803;
  double t23805;
  double t23806;
  double t23828;
  double t23870;
  double t23872;
  double t23361;
  double t23936;
  double t23939;
  double t23940;
  double t23370;
  double t23371;
  double t23981;
  double t23982;
  double t23984;
  double t23987;
  double t23988;
  double t23989;
  double t24000;
  double t24001;
  double t24062;
  double t24063;
  t1314 = Sin(var1[4]);
  t8359 = Cos(var1[15]);
  t7595 = Cos(var1[5]);
  t8611 = Cos(var1[17]);
  t9089 = Sin(var1[16]);
  t8604 = Cos(var1[16]);
  t9108 = Sin(var1[17]);
  t7884 = Sin(var1[15]);
  t9278 = -1.*t8611*t9089;
  t9280 = t8604*t9108;
  t9417 = t9278 + t9280;
  t8535 = Sin(var1[5]);
  t8603 = Cos(var1[4]);
  t9469 = -1.*t8604*t8611;
  t9520 = -1.*t9089*t9108;
  t9571 = t9469 + t9520;
  t9912 = t8359*t7595;
  t9915 = -1.*t7884*t8535;
  t9916 = t9912 + t9915;
  t9920 = var2[1]*t8603*t9916;
  t9921 = -1.*t7595*t7884*t9417;
  t9922 = -1.*t8359*t9417*t8535;
  t9923 = t9921 + t9922;
  t9924 = var2[2]*t8603*t9923;
  t9927 = -1.*t7595*t7884*t9571;
  t9928 = -1.*t8359*t9571*t8535;
  t9929 = t9927 + t9928;
  t10039 = var2[0]*t8603*t9929;
  t10042 = t9920 + t9924 + t10039;
  t10049 = t8611*t9089;
  t10059 = -1.*t8604*t9108;
  t10060 = t10049 + t10059;
  t9582 = t8359*t7595*t9571;
  t9585 = -1.*t7884*t9571*t8535;
  t9647 = t9582 + t9585;
  t8765 = t8604*t8611;
  t9114 = t9089*t9108;
  t9260 = t8765 + t9114;
  t9421 = t8359*t7595*t9417;
  t9439 = -1.*t7884*t9417*t8535;
  t9440 = t9421 + t9439;
  t10161 = t9417*t1314;
  t10173 = t8603*t9647;
  t10183 = t10161 + t10173;
  t8358 = t7595*t7884;
  t8559 = t8359*t8535;
  t8560 = t8358 + t8559;
  t10310 = t9260*t1314;
  t10311 = t8603*t9440;
  t10380 = t10310 + t10311;
  t10492 = Sin(var1[3]);
  t10483 = Cos(var1[3]);
  t9275 = t8603*t9260;
  t9441 = -1.*t1314*t9440;
  t9444 = t9275 + t9441;
  t9464 = t8603*t9417;
  t9659 = -1.*t1314*t9647;
  t9674 = t9464 + t9659;
  t10730 = t10483*t8560;
  t10731 = t10492*t1314*t9916;
  t10754 = t10730 + t10731;
  t10755 = var2[1]*t10754;
  t10757 = t10492*t1314*t9923;
  t10765 = t10483*t9440;
  t10769 = t10757 + t10765;
  t10770 = var2[2]*t10769;
  t10783 = t10492*t1314*t9929;
  t10785 = t10483*t9647;
  t10791 = t10783 + t10785;
  t10792 = var2[0]*t10791;
  t10799 = t10755 + t10770 + t10792;
  t10102 = t8359*t7595*t10060;
  t10112 = -1.*t7884*t10060*t8535;
  t10141 = t10102 + t10112;
  t10544 = t7595*t7884*t9571;
  t10545 = t8359*t9571*t8535;
  t10554 = t10544 + t10545;
  t10514 = t7595*t7884*t9417;
  t10523 = t8359*t9417*t8535;
  t10531 = t10514 + t10523;
  t10390 = t8359*t7595*t9260;
  t10394 = -1.*t7884*t9260*t8535;
  t10396 = t10390 + t10394;
  t10824 = t10483*t10554;
  t10831 = -1.*t10492*t9674;
  t10832 = t10824 + t10831;
  t10499 = -1.*t8359*t7595;
  t10500 = t7884*t8535;
  t10506 = t10499 + t10500;
  t10857 = t10483*t10531;
  t10884 = -1.*t10492*t9444;
  t10891 = t10857 + t10884;
  t10979 = t10492*t1314*t8560;
  t10980 = t10483*t10506;
  t10981 = t10979 + t10980;
  t10644 = -1.*t9260*t1314;
  t10663 = -1.*t8603*t9440;
  t10667 = t10644 + t10663;
  t10670 = -1.*t9417*t1314;
  t10691 = -1.*t8603*t9647;
  t10707 = t10670 + t10691;
  t11001 = t10492*t8560;
  t11002 = -1.*t10483*t1314*t9916;
  t11003 = t11001 + t11002;
  t11005 = var2[1]*t11003;
  t11070 = -1.*t10483*t1314*t9923;
  t11081 = t10492*t9440;
  t11082 = t11070 + t11081;
  t11090 = var2[2]*t11082;
  t11109 = -1.*t10483*t1314*t9929;
  t11137 = t10492*t9647;
  t11143 = t11109 + t11137;
  t11146 = var2[0]*t11143;
  t11154 = t11005 + t11090 + t11146;
  t10801 = t7595*t7884*t10060;
  t10803 = t8359*t10060*t8535;
  t10804 = t10801 + t10803;
  t10808 = t8603*t9571;
  t10811 = -1.*t1314*t10141;
  t10813 = t10808 + t10811;
  t10923 = t7595*t7884*t9260;
  t10942 = t8359*t9260*t8535;
  t10943 = t10923 + t10942;
  t10955 = t8603*t10060;
  t10956 = -1.*t1314*t10396;
  t10957 = t10955 + t10956;
  t11171 = t10492*t10554;
  t11211 = t10483*t9674;
  t11212 = t11171 + t11211;
  t11253 = t10492*t10531;
  t11254 = t10483*t9444;
  t11259 = t11253 + t11254;
  t11289 = -1.*t8611;
  t11291 = 1. + t11289;
  t11292 = -0.50321*t11291;
  t11293 = -0.19821*t8611;
  t11294 = t11292 + t11293;
  t11396 = -1.*t8359;
  t11401 = 1. + t11396;
  t11416 = -0.15121*t11401;
  t11422 = -1.*t8604;
  t11427 = 1. + t11422;
  t11441 = -0.28121*t11427;
  t11456 = t8604*t11294;
  t11474 = 0.305*t9089*t9108;
  t11498 = t11441 + t11456 + t11474;
  t11283 = 0.28121*t9089;
  t11295 = t11294*t9089;
  t11296 = -0.305*t8604*t9108;
  t11297 = t11283 + t11295 + t11296;
  t11506 = t8359*t11498;
  t11548 = t11416 + t11506;
  t11549 = t7595*t11548;
  t11553 = -0.15121*t8359;
  t11555 = 0.15121*t7884;
  t11556 = t7884*t11498;
  t11563 = t11416 + t11553 + t11555 + t11556;
  t11565 = -1.*t11563*t8535;
  t11578 = t11549 + t11565;
  t11702 = t11297*t1314;
  t11717 = t8603*t11578;
  t11750 = t11702 + t11717;
  t11349 = -1.*t11297*t1314;
  t11579 = -1.*t8603*t11578;
  t11580 = t11349 + t11579;
  t12411 = t8603*t11297;
  t12420 = -1.*t1314*t11578;
  t12434 = t12411 + t12420;
  t11933 = t7595*t11563;
  t12010 = t11548*t8535;
  t12235 = t11933 + t12010;
  t12236 = -1.*t10506*t12235;
  t12408 = -1.*t8603*t8560*t11750;
  t12438 = t1314*t8560*t12434;
  t12473 = t12236 + t12408 + t12438;
  t16233 = -1.*t7595*t11563;
  t16278 = -1.*t11548*t8535;
  t16311 = t16233 + t16278;
  t12650 = t10531*t12235;
  t12651 = t10380*t11750;
  t12652 = t9444*t12434;
  t12658 = t12650 + t12651 + t12652;
  t13170 = t10506*t12235;
  t13395 = t8603*t8560*t11750;
  t13448 = -1.*t1314*t8560*t12434;
  t13449 = t13170 + t13395 + t13448;
  t16035 = Power(t8603,2);
  t16322 = Power(t1314,2);
  t14034 = -1.*t10554*t12235;
  t14458 = -1.*t10183*t11750;
  t15135 = -1.*t9674*t12434;
  t15159 = t14034 + t14458 + t15135;
  t15371 = -1.*t10531*t12235;
  t15384 = -1.*t10380*t11750;
  t15406 = -1.*t9444*t12434;
  t15409 = t15371 + t15384 + t15406;
  t15896 = t10554*t12235;
  t15898 = t10183*t11750;
  t15930 = t9674*t12434;
  t15949 = t15896 + t15898 + t15930;
  t16030 = t8603*t9923*t12473;
  t16459 = -1.*t8560*t12235;
  t18091 = -0.15121*t7884;
  t18092 = -1.*t7884*t11498;
  t18094 = t18091 + t18092;
  t18096 = t7595*t18094;
  t18097 = 0.15121*t8359;
  t18098 = t18097 + t11506;
  t18100 = -1.*t18098*t8535;
  t18103 = t18096 + t18100;
  t16496 = -1.*t8603*t9916*t11750;
  t16730 = t1314*t9916*t12434;
  t16778 = t9440*t12235;
  t18109 = t7595*t18098;
  t18110 = t18094*t8535;
  t18112 = t18109 + t18110;
  t16808 = t8603*t9923*t11750;
  t16850 = -1.*t1314*t9923*t12434;
  t16863 = t8603*t9916*t12658;
  t17142 = t8603*t9929*t13449;
  t17567 = t8560*t12235;
  t17843 = t8603*t9916*t11750;
  t17844 = -1.*t1314*t9916*t12434;
  t17849 = -1.*t9647*t12235;
  t17918 = -1.*t8603*t9929*t11750;
  t17922 = t1314*t9929*t12434;
  t18051 = t8603*t9916*t15159;
  t18055 = -1.*t9440*t12235;
  t18061 = -1.*t8603*t9923*t11750;
  t18063 = t1314*t9923*t12434;
  t18067 = t9647*t12235;
  t18072 = t8603*t9929*t11750;
  t18074 = -1.*t1314*t9929*t12434;
  t18081 = t8603*t9929*t15409;
  t18084 = t8603*t9923*t15949;
  t18435 = -0.28121*t9089;
  t18439 = -1.*t11294*t9089;
  t18440 = 0.305*t8604*t9108;
  t18442 = t18435 + t18439 + t18440;
  t18469 = 0.28121*t8604;
  t18471 = t18469 + t11456 + t11474;
  t18634 = t8359*t7595*t18442;
  t18636 = -1.*t7884*t18442*t8535;
  t18644 = t18634 + t18636;
  t10043 = t9571*t1314;
  t10151 = t8603*t10141;
  t10154 = t10043 + t10151;
  t18445 = t7595*t7884*t18442;
  t18453 = t8359*t18442*t8535;
  t18454 = t18445 + t18453;
  t18557 = t18471*t1314;
  t18647 = t8603*t18644;
  t18667 = t18557 + t18647;
  t18696 = t8603*t18471;
  t18704 = -1.*t1314*t18644;
  t18725 = t18696 + t18704;
  t22168 = 0.305*t8611*t9089;
  t22173 = t22168 + t11296;
  t22222 = -0.305*t8604*t8611;
  t22224 = -0.305*t9089*t9108;
  t22232 = t22222 + t22224;
  t22256 = t8359*t7595*t22173;
  t22263 = -1.*t7884*t22173*t8535;
  t22267 = t22256 + t22263;
  t22185 = t7595*t7884*t22173;
  t22202 = t8359*t22173*t8535;
  t22212 = t22185 + t22202;
  t22253 = t22232*t1314;
  t22272 = t8603*t22267;
  t22273 = t22253 + t22272;
  t22317 = t8603*t22232;
  t22319 = -1.*t1314*t22267;
  t22327 = t22317 + t22319;
  t10387 = t10060*t1314;
  t10397 = t8603*t10396;
  t10475 = t10387 + t10397;
  t16460 = -1.*t10506*t11578;
  t16784 = t10531*t11578;
  t17842 = t10506*t11578;
  t17853 = -1.*t10554*t11578;
  t18056 = -1.*t10531*t11578;
  t18068 = t10554*t11578;
  t22626 = -1.*t8560*t11578;
  t22637 = t12236 + t22626;
  t22639 = t9440*t22637;
  t18147 = -1.*t10506*t18112;
  t22644 = -1.*t9916*t11578;
  t18217 = t10531*t18112;
  t22652 = t9923*t11578;
  t22664 = t11297*t9260;
  t22667 = t9440*t11578;
  t22668 = t22664 + t12650 + t22667;
  t22670 = t8560*t22668;
  t22680 = t8560*t11578;
  t22687 = t13170 + t22680;
  t22692 = t9647*t22687;
  t18298 = t10506*t18112;
  t22751 = t9916*t11578;
  t18349 = -1.*t10554*t18112;
  t22763 = -1.*t9929*t11578;
  t22771 = -1.*t11297*t9417;
  t22773 = -1.*t9647*t11578;
  t22774 = t22771 + t14034 + t22773;
  t22775 = t8560*t22774;
  t18361 = -1.*t10531*t18112;
  t22793 = -1.*t9923*t11578;
  t22804 = -1.*t11297*t9260;
  t22807 = -1.*t9440*t11578;
  t22846 = t22804 + t15371 + t22807;
  t22854 = t9647*t22846;
  t18379 = t10554*t18112;
  t22881 = t9929*t11578;
  t22902 = t11297*t9417;
  t22903 = t9647*t11578;
  t22905 = t22902 + t15896 + t22903;
  t22921 = t9440*t22905;
  t18456 = t10506*t18454;
  t18791 = -1.*t18454*t10554;
  t18795 = -1.*t10804*t12235;
  t18833 = t18454*t10554;
  t18834 = t10804*t12235;
  t18929 = -1.*t18454*t10531;
  t19353 = -1.*t10506*t18454;
  t20319 = t18454*t10531;
  t22214 = t10506*t22212;
  t22418 = -1.*t22212*t10554;
  t22458 = t22212*t10554;
  t22481 = -1.*t22212*t10531;
  t22485 = -1.*t10943*t12235;
  t22498 = -1.*t10506*t22212;
  t22522 = t22212*t10531;
  t22536 = t10943*t12235;
  t23203 = t11297*t9571;
  t23204 = t9417*t18471;
  t23808 = Power(t8359,2);
  t23810 = Power(t7884,2);
  t23213 = -1.*t18471*t9260;
  t23791 = t7884*t11548;
  t23795 = -1.*t8359*t11563;
  t23801 = t23791 + t23795;
  t23803 = -1.*t7884*t11548;
  t23805 = t8359*t11563;
  t23806 = t23803 + t23805;
  t23828 = -1.*t8359*t9417*t11548;
  t23870 = -1.*t7884*t9417*t11563;
  t23872 = t22804 + t23828 + t23870;
  t23361 = t9417*t22232;
  t23936 = t8359*t9571*t11548;
  t23939 = t7884*t9571*t11563;
  t23940 = t22902 + t23936 + t23939;
  t23370 = -1.*t10060*t11297;
  t23371 = -1.*t22232*t9260;
  t23981 = -0.15121*t10060;
  t23982 = -0.15121*t9417;
  t23984 = t23981 + t23982;
  t23987 = var2[0]*t23984;
  t23988 = t9571*t11498;
  t23989 = t22902 + t23988;
  t24000 = -1.*t9417*t11498;
  t24001 = t24000 + t22804;
  t24062 = 0.28121*t8611;
  t24063 = t11294*t8611;
  p_output1[0]=t9674*var2[0] - 1.*t1314*t8560*var2[1] + t9444*var2[2];
  p_output1[1]=t10042;
  p_output1[2]=t10042;
  p_output1[3]=t10154*var2[0] + t10183*var2[2];
  p_output1[4]=t10380*var2[0] + t10475*var2[2];
  p_output1[5]=t10183;
  p_output1[6]=t8560*t8603;
  p_output1[7]=t10380;
  p_output1[8]=(-1.*t10492*t10554 - 1.*t10483*t9674)*var2[0] + (-1.*t10492*t10506 + t10483*t1314*t8560)*var2[1] + (-1.*t10492*t10531 - 1.*t10483*t9444)*var2[2];
  p_output1[9]=-1.*t10492*t10707*var2[0] + t10492*t8560*t8603*var2[1] - 1.*t10492*t10667*var2[2];
  p_output1[10]=t10799;
  p_output1[11]=t10799;
  p_output1[12]=(t10483*t10804 - 1.*t10492*t10813)*var2[0] + t10832*var2[2];
  p_output1[13]=t10891*var2[0] + (t10483*t10943 - 1.*t10492*t10957)*var2[2];
  p_output1[14]=t10832;
  p_output1[15]=t10981;
  p_output1[16]=t10891;
  p_output1[17]=t10832*var2[0] + t10981*var2[1] + t10891*var2[2];
  p_output1[18]=t10483*t10707*var2[0] - 1.*t10483*t8560*t8603*var2[1] + t10483*t10667*var2[2];
  p_output1[19]=t11154;
  p_output1[20]=t11154;
  p_output1[21]=(t10492*t10804 + t10483*t10813)*var2[0] + t11212*var2[2];
  p_output1[22]=t11259*var2[0] + (t10492*t10943 + t10483*t10957)*var2[2];
  p_output1[23]=t11212;
  p_output1[24]=t10492*t10506 - 1.*t10483*t1314*t8560;
  p_output1[25]=t11259;
  p_output1[26]=(-1.*t12658*t1314*t8560 + t10380*(t11580*t1314*t8560 + t11750*t1314*t8560) + t12473*t9444 + t8560*t8603*(t10380*t12434 + t10667*t12434 + t11580*t9444 + t11750*t9444))*var2[0] + (t15949*t9444 + t10183*(-1.*t10380*t12434 - 1.*t10667*t12434 - 1.*t11580*t9444 - 1.*t11750*t9444) + t15409*t9674 + t10380*(t10183*t12434 + t10707*t12434 + t11580*t9674 + t11750*t9674))*var2[1] + (-1.*t1314*t15159*t8560 + t10183*(-1.*t11580*t1314*t8560 - 1.*t11750*t1314*t8560) + t13449*t9674 + t8560*t8603*(-1.*t10183*t12434 - 1.*t10707*t12434 - 1.*t11580*t9674 - 1.*t11750*t9674))*var2[2];
  p_output1[27]=(t16030 + t16863 + t10380*(t16459 + t16460 + t16496 + t16730 - 1.*t16035*t16311*t8560 - 1.*t16311*t16322*t8560) + t8560*t8603*(t16778 + t16784 + t16808 + t16850 + t10380*t16311*t8603 - 1.*t1314*t16311*t9444))*var2[0] + (t18081 + t18084 + t10183*(t18055 + t18056 + t18061 + t18063 - 1.*t10380*t16311*t8603 + t1314*t16311*t9444) + t10380*(t18067 + t18068 + t18072 + t18074 + t10183*t16311*t8603 - 1.*t1314*t16311*t9674))*var2[1] + (t17142 + t18051 + t10183*(t17567 + t17842 + t17843 + t17844 + t16035*t16311*t8560 + t16311*t16322*t8560) + t8560*t8603*(t17849 + t17853 + t17918 + t17922 - 1.*t10183*t16311*t8603 + t1314*t16311*t9674))*var2[2];
  p_output1[28]=(t16030 + t16863 + t10380*(t16459 + t16496 + t16730 + t18147 - 1.*t16035*t18103*t8560 - 1.*t16322*t18103*t8560) + t8560*t8603*(t16778 + t16808 + t16850 + t18217 + t10380*t18103*t8603 - 1.*t1314*t18103*t9444))*var2[0] + (t18081 + t18084 + t10183*(t18055 + t18061 + t18063 + t18361 - 1.*t10380*t18103*t8603 + t1314*t18103*t9444) + t10380*(t18067 + t18072 + t18074 + t18379 + t10183*t18103*t8603 - 1.*t1314*t18103*t9674))*var2[1] + (t17142 + t18051 + t10183*(t17567 + t17843 + t17844 + t18298 + t16035*t18103*t8560 + t16322*t18103*t8560) + t8560*t8603*(t17849 + t17918 + t17922 + t18349 - 1.*t10183*t18103*t8603 + t1314*t18103*t9674))*var2[2];
  p_output1[29]=(t10183*t12473 + t10380*(t19353 + t1314*t18725*t8560 - 1.*t18667*t8560*t8603) + t8560*t8603*(t15896 + t15898 + t15930 + t10380*t18667 + t20319 + t18725*t9444))*var2[0] + (t10154*t15409 + t10183*t15949 + t10183*(t14034 + t14458 + t15135 - 1.*t10380*t18667 + t18929 - 1.*t18725*t9444) + t10380*(t10154*t11750 + t10813*t12434 + t10183*t18667 + t18833 + t18834 + t18725*t9674))*var2[1] + (t10154*t13449 + t10183*(t18456 - 1.*t1314*t18725*t8560 + t18667*t8560*t8603) + t8560*t8603*(-1.*t10154*t11750 - 1.*t10813*t12434 - 1.*t10183*t18667 + t18791 + t18795 - 1.*t18725*t9674))*var2[2];
  p_output1[30]=(t10475*t12473 + t10380*(t22498 + t1314*t22327*t8560 - 1.*t22273*t8560*t8603) + t8560*t8603*(t10475*t11750 + t10957*t12434 + t10380*t22273 + t22522 + t22536 + t22327*t9444))*var2[0] + (t10380*t15409 + t10475*t15949 + t10183*(-1.*t10475*t11750 - 1.*t10957*t12434 - 1.*t10380*t22273 + t22481 + t22485 - 1.*t22327*t9444) + t10380*(t12650 + t12651 + t12652 + t10183*t22273 + t22458 + t22327*t9674))*var2[1] + (t10380*t13449 + t10183*(t22214 - 1.*t1314*t22327*t8560 + t22273*t8560*t8603) + t8560*t8603*(t15371 + t15384 + t15406 - 1.*t10183*t22273 + t22418 - 1.*t22327*t9674))*var2[2];
  p_output1[31]=t10380*t12473 + t12658*t8560*t8603;
  p_output1[32]=t10183*t15409 + t10380*t15949;
  p_output1[33]=t10183*t13449 + t15159*t8560*t8603;
  p_output1[34]=(t22639 + t22670 + t10531*(t16459 + t16460 + t22644 - 1.*t16311*t8560) + t10506*(t16778 + t16784 + t22652 + t16311*t9440))*var2[0] + (t22854 + t22921 + t10554*(t18055 + t18056 + t22793 - 1.*t16311*t9440) + t10531*(t18067 + t18068 + t22881 + t16311*t9647))*var2[1] + (t22692 + t22775 + t10554*(t17567 + t17842 + t22751 + t16311*t8560) + t10506*(t17849 + t17853 + t22763 - 1.*t16311*t9647))*var2[2];
  p_output1[35]=(t22639 + t22670 + t10531*(t16459 + t18147 + t22644 - 1.*t18103*t8560) + t10506*(t16778 + t18217 + t22652 + t18103*t9440))*var2[0] + (t22854 + t22921 + t10554*(t18055 + t18361 + t22793 - 1.*t18103*t9440) + t10531*(t18067 + t18379 + t22881 + t18103*t9647))*var2[1] + (t22692 + t22775 + t10554*(t17567 + t18298 + t22751 + t18103*t8560) + t10506*(t17849 + t18349 + t22763 - 1.*t18103*t9647))*var2[2];
  p_output1[36]=(t10554*t22637 + t10531*(t19353 - 1.*t18644*t8560) + t10506*(t15896 + t20319 + t22902 + t22903 + t18471*t9260 + t18644*t9440))*var2[0] + (t10804*t22846 + t10554*t22905 + t10554*(t14034 + t18929 + t22771 + t22773 + t23213 - 1.*t18644*t9440) + t10531*(t10141*t11578 + t18833 + t18834 + t23203 + t23204 + t18644*t9647))*var2[1] + (t10804*t22687 + t10554*(t18456 + t18644*t8560) + t10506*(-1.*t10141*t11578 + t18791 + t18795 - 1.*t18471*t9417 - 1.*t11297*t9571 - 1.*t18644*t9647))*var2[2];
  p_output1[37]=(t10943*t22637 + t10531*(t22498 - 1.*t22267*t8560) + t10506*(t10060*t11297 + t10396*t11578 + t22522 + t22536 + t22232*t9260 + t22267*t9440))*var2[0] + (t10531*t22846 + t10943*t22905 + t10554*(-1.*t10396*t11578 + t22481 + t22485 + t23370 + t23371 - 1.*t22267*t9440) + t10531*(t12650 + t22458 + t22664 + t22667 + t23361 + t22267*t9647))*var2[1] + (t10531*t22687 + t10554*(t22214 + t22267*t8560) + t10506*(t15371 + t22418 + t22804 + t22807 - 1.*t22232*t9417 - 1.*t22267*t9647))*var2[2];
  p_output1[38]=t10531*t22637 + t10506*t22668;
  p_output1[39]=t10554*t22846 + t10531*t22905;
  p_output1[40]=t10554*t22687 + t10506*t22774;
  p_output1[41]=(-1.*t11563*t7884 - 1.*t18094*t7884 - 1.*t11548*t8359 + t18098*t8359)*t9260*var2[0] + (t9417*(t11548*t7884*t9417 - 1.*t18098*t7884*t9417 - 1.*t11563*t8359*t9417 - 1.*t18094*t8359*t9417) + t9260*(-1.*t11548*t7884*t9571 + t18098*t7884*t9571 + t11563*t8359*t9571 + t18094*t8359*t9571))*var2[1] + (t11563*t7884 + t18094*t7884 + t11548*t8359 - 1.*t18098*t8359)*t9417*var2[2];
  p_output1[42]=t23806*t9417*var2[0] + (t23940*t9417 + t23872*t9571 + t9260*(t23203 + t23204 + t10060*t11563*t7884 + t10060*t11548*t8359 + t18442*t23808*t9571 + t18442*t23810*t9571) + t9417*(t22771 + t23213 - 1.*t18442*t23808*t9417 - 1.*t18442*t23810*t9417 - 1.*t11563*t7884*t9571 - 1.*t11548*t8359*t9571))*var2[1] + t23801*t9571*var2[2];
  p_output1[43]=t10060*t23806*var2[0] + (t10060*t23940 + t23872*t9260 + t9417*(t23370 + t23371 - 1.*t11563*t7884*t9260 - 1.*t11548*t8359*t9260 - 1.*t22173*t23808*t9417 - 1.*t22173*t23810*t9417) + t9260*(t22664 + t23361 + t11563*t7884*t9417 + t11548*t8359*t9417 + t22173*t23808*t9571 + t22173*t23810*t9571))*var2[1] + t23801*t9260*var2[2];
  p_output1[44]=t23806*t9260;
  p_output1[45]=t23940*t9260 + t23872*t9417;
  p_output1[46]=t23801*t9417;
  p_output1[47]=t23987 + (t23989*t9417 + t24001*t9571 + t9417*(t22771 + t23213 - 1.*t18442*t9417 - 1.*t11498*t9571) + t9260*(t10060*t11498 + t23203 + t23204 + t18442*t9571))*var2[1];
  p_output1[48]=t23987 + (t10060*t23989 + t24001*t9260 + t9417*(t23370 + t23371 - 1.*t11498*t9260 - 1.*t22173*t9417) + t9260*(t22664 + t23361 + t11498*t9417 + t22173*t9571))*var2[1];
  p_output1[49]=-0.15121*t9260 - 0.15121*t9571;
  p_output1[50]=-0.15121 + t23989*t9260 + t24001*t9417;
  p_output1[51]=(t24062 + t24063 - 0.305*Power(t8611,2))*var2[0] + (-0.28121*t9108 - 1.*t11294*t9108 + 0.305*t8611*t9108)*var2[2];
  p_output1[52]=0.28121*t9108 + t11294*t9108 - 0.305*t8611*t9108;
  p_output1[53]=t24062 + t24063 + 0.305*Power(t9108,2);
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
