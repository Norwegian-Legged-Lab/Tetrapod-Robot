/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:10 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t16015;
  double t16013;
  double t16014;
  double t16034;
  double t16036;
  double t16037;
  double t16054;
  double t16057;
  double t16058;
  double t16059;
  double t16100;
  double t15842;
  double t15805;
  double t15809;
  double t15825;
  double t15826;
  double t16107;
  double t16134;
  double t15895;
  double t16153;
  double t16154;
  double t16160;
  double t16161;
  double t16164;
  double t16166;
  double t16127;
  double t16142;
  double t16143;
  double t16169;
  double t16170;
  double t16171;
  double t16172;
  double t16175;
  double t16176;
  double t16180;
  double t16181;
  double t16182;
  double t15630;
  double t15798;
  double t16193;
  double t16190;
  double t16208;
  double t16209;
  double t16210;
  double t16221;
  double t16222;
  double t16226;
  double t16244;
  double t16249;
  double t16260;
  double t16261;
  double t16262;
  double t16264;
  double t16212;
  double t16214;
  double t16215;
  double t16217;
  double t16218;
  double t16219;
  double t16309;
  double t16315;
  double t16318;
  double t16322;
  double t16323;
  double t16324;
  double t16325;
  double t16329;
  double t16336;
  double t16337;
  double t16339;
  double t16347;
  double t16351;
  double t16354;
  double t16362;
  double t16366;
  double t16368;
  double t16372;
  double t16377;
  double t16381;
  double t16369;
  double t16370;
  double t16371;
  double t16385;
  double t16396;
  double t16397;
  double t16409;
  double t16416;
  double t16417;
  double t16398;
  double t16403;
  double t16404;
  double t16407;
  double t16418;
  double t16419;
  double t16420;
  double t16424;
  double t16430;
  double t16431;
  double t16432;
  double t16437;
  double t16438;
  double t16439;
  double t16440;
  double t16446;
  double t16447;
  double t16448;
  double t16449;
  double t16450;
  double t16471;
  double t16473;
  double t16475;
  double t16486;
  double t16487;
  double t16488;
  double t16497;
  double t16498;
  double t16510;
  double t16492;
  double t16511;
  double t16512;
  double t16513;
  double t16515;
  double t16517;
  double t16519;
  double t16520;
  double t16521;
  double t16535;
  double t16536;
  double t16537;
  double t16543;
  double t16544;
  double t16546;
  double t16565;
  double t16580;
  double t16581;
  double t16695;
  double t16696;
  double t16697;
  double t16727;
  double t16728;
  double t16732;
  double t16750;
  double t16751;
  double t16752;
  double t16736;
  double t16737;
  double t16738;
  double t16740;
  double t16743;
  double t16749;
  double t16759;
  double t16698;
  double t16701;
  double t16703;
  double t16705;
  double t16706;
  double t16707;
  double t16709;
  double t16711;
  double t16716;
  double t16722;
  double t16812;
  double t16814;
  double t16817;
  double t16809;
  double t16744;
  double t16823;
  double t16824;
  double t16825;
  double t16827;
  double t16828;
  double t16829;
  double t16756;
  double t16766;
  double t16773;
  double t16774;
  double t16780;
  double t16831;
  double t16784;
  double t16786;
  double t16840;
  double t16791;
  double t16792;
  double t16797;
  double t16883;
  double t16884;
  double t16885;
  double t16931;
  double t16932;
  double t16933;
  double t16917;
  double t16920;
  double t16921;
  double t16923;
  double t16925;
  double t16926;
  double t16934;
  double t16939;
  double t16942;
  double t16922;
  double t16946;
  double t16948;
  double t16955;
  double t16957;
  double t16962;
  double t16950;
  double t16953;
  double t16985;
  double t16986;
  double t16999;
  double t17003;
  double t17008;
  double t17015;
  double t17025;
  double t17027;
  double t17028;
  double t17058;
  double t17073;
  double t17078;
  double t17107;
  double t17117;
  double t17118;
  double t17121;
  double t17127;
  double t17129;
  double t17142;
  double t17146;
  double t17147;
  double t17150;
  double t17151;
  double t17156;
  double t17149;
  double t17166;
  double t17168;
  double t17171;
  double t17172;
  double t17177;
  double t17180;
  double t17193;
  double t17194;
  double t17253;
  double t17256;
  double t17258;
  double t17263;
  double t17165;
  double t17293;
  double t17296;
  double t17297;
  double t17299;
  double t17301;
  double t17303;
  double t17305;
  double t17307;
  double t17311;
  double t17313;
  double t17314;
  double t17318;
  double t17319;
  double t17320;
  double t17321;
  double t17328;
  double t17329;
  double t15900;
  double t16192;
  double t17387;
  double t17389;
  double t17390;
  double t17394;
  double t17395;
  double t17397;
  double t17338;
  double t17351;
  double t17352;
  double t17354;
  double t17358;
  double t17385;
  double t17181;
  double t17514;
  double t17516;
  double t17517;
  double t17518;
  double t17521;
  double t17523;
  double t17524;
  double t17459;
  double t17501;
  double t17502;
  double t17278;
  double t17279;
  double t17539;
  double t17540;
  double t17542;
  double t17543;
  double t17544;
  double t17546;
  double t17547;
  double t17528;
  double t17530;
  double t17531;
  double t17534;
  double t17535;
  double t17536;
  double t17573;
  double t17575;
  double t17581;
  double t17583;
  double t17556;
  double t17558;
  double t17559;
  double t17560;
  double t17562;
  double t17563;
  double t17566;
  double t17568;
  double t17570;
  double t17574;
  double t17578;
  double t17582;
  double t17586;
  double t17649;
  double t17591;
  double t17592;
  double t17664;
  double t17597;
  double t17598;
  double t17603;
  double t17605;
  double t16663;
  double t16665;
  double t16666;
  double t17866;
  double t17871;
  double t17882;
  double t17885;
  double t17874;
  double t17903;
  double t17907;
  double t17911;
  double t17035;
  double t17036;
  double t17043;
  double t17951;
  double t17957;
  double t18000;
  double t18019;
  double t17056;
  double t17085;
  double t17090;
  double t18053;
  double t18056;
  double t18074;
  double t18076;
  double t16863;
  double t16864;
  double t18250;
  double t18251;
  double t18256;
  double t18270;
  double t18272;
  double t18273;
  double t18276;
  double t18277;
  double t18278;
  double t16871;
  double t18329;
  double t18339;
  double t18340;
  double t18346;
  double t18348;
  double t18351;
  double t16873;
  double t16874;
  double t16875;
  double t16876;
  double t16877;
  double t16878;
  double t16879;
  double t16880;
  double t18077;
  double t18375;
  double t18379;
  double t18383;
  double t18388;
  double t18389;
  double t18390;
  double t18392;
  double t18363;
  double t18366;
  double t18367;
  double t18165;
  double t18167;
  double t18433;
  double t18434;
  double t18435;
  double t18436;
  double t18437;
  double t18438;
  double t18440;
  double t18395;
  double t18396;
  double t18397;
  double t18406;
  double t18414;
  double t18415;
  double t18516;
  double t18550;
  double t18476;
  double t18477;
  double t18498;
  double t18499;
  double t16267;
  double t16346;
  double t16357;
  double t18624;
  double t18633;
  double t18636;
  double t19443;
  double t19444;
  double t19450;
  double t19454;
  double t19361;
  double t19368;
  double t19372;
  double t19406;
  double t19407;
  double t19436;
  double t19437;
  double t19438;
  double t19439;
  double t19440;
  double t19445;
  double t19452;
  double t19458;
  double t19462;
  double t19487;
  double t19465;
  double t19466;
  double t19491;
  double t19471;
  double t19472;
  double t19475;
  t16015 = Cos(var1[14]);
  t16013 = Sin(var1[14]);
  t16014 = 0.28121*t16013;
  t16034 = -1.*t16015;
  t16036 = 1. + t16034;
  t16037 = 0.50321*t16036;
  t16054 = 0.19821*t16015;
  t16057 = t16037 + t16054;
  t16058 = -1.*t16057*t16013;
  t16059 = -0.305*t16015*t16013;
  t16100 = t16014 + t16058 + t16059;
  t15842 = Sin(var1[12]);
  t15805 = Cos(var1[12]);
  t15809 = -1.*t15805;
  t15825 = 1. + t15809;
  t15826 = 0.15121*t15825;
  t16107 = Cos(var1[13]);
  t16134 = Sin(var1[13]);
  t15895 = -0.15121*t15842;
  t16153 = -1.*t16107;
  t16154 = 1. + t16153;
  t16160 = 0.28121*t16154;
  t16161 = t16107*t16057;
  t16164 = -0.305*t16134*t16013;
  t16166 = t16160 + t16161 + t16164;
  t16127 = t16107*t16015;
  t16142 = t16134*t16013;
  t16143 = t16127 + t16142;
  t16169 = t15805*t16166;
  t16170 = t15826 + t16169;
  t16171 = t15842*t16170;
  t16172 = -0.15121*t15825;
  t16175 = -0.15121*t15805;
  t16176 = t15842*t16166;
  t16180 = t16172 + t16175 + t15895 + t16176;
  t16181 = -1.*t15805*t16180;
  t16182 = t16171 + t16181;
  t15630 = Cos(var1[4]);
  t15798 = Cos(var1[5]);
  t16193 = Sin(var1[5]);
  t16190 = Sin(var1[4]);
  t16208 = t15805*t15630*t15798;
  t16209 = -1.*t15630*t15842*t16193;
  t16210 = t16208 + t16209;
  t16221 = -1.*t16015*t16134;
  t16222 = t16107*t16013;
  t16226 = t16221 + t16222;
  t16244 = t16226*t16190;
  t16249 = t15805*t15798*t16143;
  t16260 = -1.*t15842*t16143*t16193;
  t16261 = t16249 + t16260;
  t16262 = t15630*t16261;
  t16264 = t16244 + t16262;
  t16212 = -1.*t16134*t16190;
  t16214 = t16107*t16210;
  t16215 = t16212 + t16214;
  t16217 = t16107*t16190;
  t16218 = t16134*t16210;
  t16219 = t16217 + t16218;
  t16309 = Sin(var1[3]);
  t16315 = t15798*t15842*t16143;
  t16318 = t15805*t16143*t16193;
  t16322 = t16315 + t16318;
  t16323 = t16309*t16322;
  t16324 = Cos(var1[3]);
  t16325 = t15630*t16226;
  t16329 = -1.*t16190*t16261;
  t16336 = t16325 + t16329;
  t16337 = t16324*t16336;
  t16339 = t16323 + t16337;
  t16347 = t16324*t16322;
  t16351 = -1.*t16309*t16336;
  t16354 = t16347 + t16351;
  t16362 = t16015*t16134;
  t16366 = -1.*t16107*t16013;
  t16368 = t16362 + t16366;
  t16372 = t15805*t15798;
  t16377 = -1.*t15842*t16193;
  t16381 = t16372 + t16377;
  t16369 = t15798*t15842*t16368;
  t16370 = t15805*t16368*t16193;
  t16371 = t16369 + t16370;
  t16385 = t15798*t16180;
  t16396 = t16170*t16193;
  t16397 = t16385 + t16396;
  t16409 = t15798*t16170;
  t16416 = -1.*t16180*t16193;
  t16417 = t16409 + t16416;
  t16398 = -1.*t16381*t16397;
  t16403 = -1.*t15798*t15842;
  t16404 = -1.*t15805*t16193;
  t16407 = t16403 + t16404;
  t16418 = -1.*t16407*t16417;
  t16419 = t16398 + t16418;
  t16420 = t16371*t16419;
  t16424 = 0.28121*t16134;
  t16430 = -1.*t16057*t16134;
  t16431 = -0.305*t16107*t16013;
  t16432 = t16424 + t16430 + t16431;
  t16437 = t16432*t16143;
  t16438 = t16371*t16397;
  t16439 = t15805*t15798*t16368;
  t16440 = -1.*t15842*t16368*t16193;
  t16446 = t16439 + t16440;
  t16447 = t16446*t16417;
  t16448 = t16437 + t16438 + t16447;
  t16449 = t16381*t16448;
  t16450 = t16420 + t16449;
  t16471 = t16143*t16190;
  t16473 = t15630*t16446;
  t16475 = t16471 + t16473;
  t16486 = t16432*t16190;
  t16487 = t15630*t16417;
  t16488 = t16486 + t16487;
  t16497 = t15630*t16432;
  t16498 = -1.*t16190*t16417;
  t16510 = t16497 + t16498;
  t16492 = -1.*t15630*t16407*t16488;
  t16511 = t16190*t16407*t16510;
  t16512 = t16398 + t16492 + t16511;
  t16513 = t16475*t16512;
  t16515 = t16475*t16488;
  t16517 = t15630*t16143;
  t16519 = -1.*t16190*t16446;
  t16520 = t16517 + t16519;
  t16521 = t16520*t16510;
  t16535 = t16438 + t16515 + t16521;
  t16536 = t15630*t16407*t16535;
  t16537 = t16513 + t16536;
  t16543 = -1.*t16226*t16190;
  t16544 = -1.*t15630*t16261;
  t16546 = t16543 + t16544;
  t16565 = -1.*t16432*t16190;
  t16580 = -1.*t15630*t16417;
  t16581 = t16565 + t16580;
  t16695 = -1.*t15798*t15842*t16143;
  t16696 = -1.*t15805*t16143*t16193;
  t16697 = t16695 + t16696;
  t16727 = -1.*t15798*t16180;
  t16728 = -1.*t16170*t16193;
  t16732 = t16727 + t16728;
  t16750 = -1.*t15798*t15842*t16368;
  t16751 = -1.*t15805*t16368*t16193;
  t16752 = t16750 + t16751;
  t16736 = -1.*t16407*t16397;
  t16737 = -1.*t16381*t16417;
  t16738 = -1.*t15805*t15798;
  t16740 = t15842*t16193;
  t16743 = t16738 + t16740;
  t16749 = t16446*t16397;
  t16759 = t16371*t16417;
  t16698 = var2[0]*t15630*t16697;
  t16701 = t16309*t16190*t16697;
  t16703 = t16324*t16261;
  t16705 = t16701 + t16703;
  t16706 = var2[1]*t16705;
  t16707 = -1.*t16324*t16190*t16697;
  t16709 = t16309*t16261;
  t16711 = t16707 + t16709;
  t16716 = var2[2]*t16711;
  t16722 = t16446*t16419;
  t16812 = 0.15121*t15842;
  t16814 = -1.*t15842*t16166;
  t16817 = t16812 + t16814;
  t16809 = t16175 + t16169;
  t16744 = -1.*t16743*t16417;
  t16823 = t15798*t16817;
  t16824 = -1.*t16809*t16193;
  t16825 = t16823 + t16824;
  t16827 = t15798*t16809;
  t16828 = t16817*t16193;
  t16829 = t16827 + t16828;
  t16756 = t16752*t16417;
  t16766 = t16407*t16448;
  t16773 = t15630*t16752*t16512;
  t16774 = Power(t15630,2);
  t16780 = Power(t16190,2);
  t16831 = -1.*t16381*t16829;
  t16784 = -1.*t15630*t16743*t16488;
  t16786 = t16190*t16743*t16510;
  t16840 = t16371*t16829;
  t16791 = t15630*t16752*t16488;
  t16792 = -1.*t16190*t16752*t16510;
  t16797 = t15630*t16743*t16535;
  t16883 = -0.305*t16015*t16134;
  t16884 = 0.305*t16107*t16013;
  t16885 = t16883 + t16884;
  t16931 = -1.*t16107*t16015;
  t16932 = -1.*t16134*t16013;
  t16933 = t16931 + t16932;
  t16917 = t15798*t15842*t16885;
  t16920 = t15805*t16885*t16193;
  t16921 = t16917 + t16920;
  t16923 = t15805*t15798*t16885;
  t16925 = -1.*t15842*t16885*t16193;
  t16926 = t16923 + t16925;
  t16934 = t15798*t15842*t16933;
  t16939 = t15805*t16933*t16193;
  t16942 = t16934 + t16939;
  t16922 = -1.*t16381*t16921;
  t16946 = -0.305*t16107*t16015;
  t16948 = t16946 + t16164;
  t16955 = t15805*t15798*t16933;
  t16957 = -1.*t15842*t16933*t16193;
  t16962 = t16955 + t16957;
  t16950 = t16371*t16921;
  t16953 = t16942*t16397;
  t16985 = t16948*t16190;
  t16986 = t15630*t16926;
  t16999 = t16985 + t16986;
  t17003 = t15630*t16948;
  t17008 = -1.*t16190*t16926;
  t17015 = t17003 + t17008;
  t17025 = t16368*t16190;
  t17027 = t15630*t16962;
  t17028 = t17025 + t17027;
  t17058 = t15805*t15798*t16226;
  t17073 = -1.*t15842*t16226*t16193;
  t17078 = t17058 + t17073;
  t17107 = t15798*t15842*t16226;
  t17117 = t15805*t16226*t16193;
  t17118 = t17107 + t17117;
  t17121 = t15630*t16933;
  t17127 = -1.*t16190*t17078;
  t17129 = t17121 + t17127;
  t17142 = t15798*t15842*t16432;
  t17146 = t15805*t16432*t16193;
  t17147 = t17142 + t17146;
  t17150 = t15805*t15798*t16432;
  t17151 = -1.*t15842*t16432*t16193;
  t17156 = t17150 + t17151;
  t17149 = -1.*t16381*t17147;
  t17166 = 0.28121*t16107;
  t17168 = -1.*t16107*t16057;
  t17171 = 0.305*t16134*t16013;
  t17172 = t17166 + t17168 + t17171;
  t17177 = t16371*t17147;
  t17180 = t16322*t16397;
  t17193 = t17172*t16190;
  t17194 = t15630*t17156;
  t17253 = t17193 + t17194;
  t17256 = t15630*t17172;
  t17258 = -1.*t16190*t17156;
  t17263 = t17256 + t17258;
  t17165 = t16432*t16226;
  t17293 = -1.*t16368*t16166;
  t17296 = -1.*t16432*t16143;
  t17297 = t17293 + t17296;
  t17299 = t16226*t17297;
  t17301 = t16166*t16143;
  t17303 = t17165 + t17301;
  t17305 = t16143*t17303;
  t17307 = -0.15121 + t17299 + t17305;
  t17311 = -1.*t15805*t16368*t16170;
  t17313 = -1.*t15842*t16368*t16180;
  t17314 = t17296 + t17311 + t17313;
  t17318 = t16226*t17314;
  t17319 = t15805*t16143*t16170;
  t17320 = t15842*t16143*t16180;
  t17321 = t17165 + t17319 + t17320;
  t17328 = t16143*t17321;
  t17329 = t17318 + t17328;
  t15900 = t15826 + t15895;
  t16192 = t16172 + t15895;
  t17387 = t16309*t16190*t16407;
  t17389 = t16324*t16381;
  t17390 = t17387 + t17389;
  t17394 = -1.*t16324*t16190*t16407;
  t17395 = t16309*t16381;
  t17397 = t17394 + t17395;
  t17338 = t15798*t16309*t16190;
  t17351 = t16324*t16193;
  t17352 = t17338 + t17351;
  t17354 = t16324*t15798;
  t17358 = -1.*t16309*t16190*t16193;
  t17385 = t17354 + t17358;
  t17181 = t16261*t16417;
  t17514 = -1.*t16371*t16397;
  t17516 = -1.*t16446*t16417;
  t17517 = t17296 + t17514 + t17516;
  t17518 = t16322*t17517;
  t17521 = t17165 + t17180 + t17181;
  t17523 = t16371*t17521;
  t17524 = t17518 + t17523;
  t17459 = t15805*t17352;
  t17501 = t15842*t17385;
  t17502 = t17459 + t17501;
  t17278 = t16264*t16488;
  t17279 = t16336*t16510;
  t17539 = -1.*t16475*t16488;
  t17540 = -1.*t16520*t16510;
  t17542 = t17514 + t17539 + t17540;
  t17543 = t16264*t17542;
  t17544 = t17180 + t17278 + t17279;
  t17546 = t16475*t17544;
  t17547 = t17543 + t17546;
  t17528 = t15630*t16134*t16309;
  t17530 = t16107*t17502;
  t17531 = t17528 + t17530;
  t17534 = -1.*t16107*t15630*t16309;
  t17535 = t16134*t17502;
  t17536 = t17534 + t17535;
  t17573 = -1.*t16446*t16397;
  t17575 = -1.*t16371*t16417;
  t17581 = t16261*t16397;
  t17583 = t16322*t16417;
  t17556 = var2[0]*t15630*t16743;
  t17558 = t16309*t16407;
  t17559 = -1.*t16324*t16190*t16743;
  t17560 = t17558 + t17559;
  t17562 = var2[2]*t17560;
  t17563 = t16324*t16407;
  t17566 = t16309*t16190*t16743;
  t17568 = t17563 + t17566;
  t17570 = var2[1]*t17568;
  t17574 = -1.*t16752*t16417;
  t17578 = t16261*t17517;
  t17582 = t16697*t16417;
  t17586 = t16446*t17521;
  t17649 = -1.*t16371*t16829;
  t17591 = -1.*t15630*t16752*t16488;
  t17592 = t16190*t16752*t16510;
  t17664 = t16322*t16829;
  t17597 = t15630*t16697*t16488;
  t17598 = -1.*t16190*t16697*t16510;
  t17603 = t15630*t16697*t17542;
  t17605 = t15630*t16752*t17544;
  t16663 = -1.*t16143*t16190;
  t16665 = -1.*t15630*t16446;
  t16666 = t16663 + t16665;
  t17866 = t16226*t16948;
  t17871 = -1.*t16368*t16432;
  t17882 = Power(t15805,2);
  t17885 = Power(t15842,2);
  t17874 = -1.*t16948*t16143;
  t17903 = t16921*t16322;
  t17907 = -1.*t16371*t16921;
  t17911 = -1.*t16942*t16397;
  t17035 = t15630*t16368;
  t17036 = -1.*t16190*t16962;
  t17043 = t17035 + t17036;
  t17951 = t16432*t16933;
  t17957 = t16226*t17172;
  t18000 = -1.*t16432*t16226;
  t18019 = -1.*t17172*t16143;
  t17056 = t16933*t16190;
  t17085 = t15630*t17078;
  t17090 = t17056 + t17085;
  t18053 = t17147*t16322;
  t18056 = t17118*t16397;
  t18074 = -1.*t16371*t17147;
  t18076 = -1.*t16322*t16397;
  t16863 = 0.28121*t16015;
  t16864 = -1.*t16057*t16015;
  t18250 = Power(t16013,2);
  t18251 = 0.305*t18250;
  t18256 = t16863 + t16864 + t18251;
  t18270 = -0.15121*t16368;
  t18272 = -0.15121*t16226;
  t18273 = t18270 + t18272;
  t18276 = -1.*t15842*t16170;
  t18277 = t15805*t16180;
  t18278 = t18276 + t18277;
  t16871 = var2[0]*t16475;
  t18329 = -1.*t16324*t15798*t16190;
  t18339 = t16309*t16193;
  t18340 = t18329 + t18339;
  t18346 = t15798*t16309;
  t18348 = t16324*t16190*t16193;
  t18351 = t18346 + t18348;
  t16873 = t16309*t16371;
  t16874 = t16324*t16520;
  t16875 = t16873 + t16874;
  t16876 = var2[2]*t16875;
  t16877 = t16324*t16371;
  t16878 = -1.*t16309*t16520;
  t16879 = t16877 + t16878;
  t16880 = var2[1]*t16879;
  t18077 = -1.*t16261*t16417;
  t18375 = t16381*t16397;
  t18379 = t16407*t16417;
  t18383 = t18375 + t18379;
  t18388 = t16322*t18383;
  t18389 = t18000 + t18076 + t18077;
  t18390 = t16381*t18389;
  t18392 = t18388 + t18390;
  t18363 = t15805*t18340;
  t18366 = t15842*t18351;
  t18367 = t18363 + t18366;
  t18165 = -1.*t16264*t16488;
  t18167 = -1.*t16336*t16510;
  t18433 = t15630*t16407*t16488;
  t18434 = -1.*t16190*t16407*t16510;
  t18435 = t18375 + t18433 + t18434;
  t18436 = t16264*t18435;
  t18437 = t18076 + t18165 + t18167;
  t18438 = t15630*t16407*t18437;
  t18440 = t18436 + t18438;
  t18395 = -1.*t16324*t15630*t16134;
  t18396 = t16107*t18367;
  t18397 = t18395 + t18396;
  t18406 = t16107*t16324*t15630;
  t18414 = t16134*t18367;
  t18415 = t18406 + t18414;
  t18516 = t16381*t16921;
  t18550 = -1.*t16921*t16322;
  t18476 = -0.15121*t16933;
  t18477 = -0.15121*t16143;
  t18498 = t18476 + t18477;
  t18499 = var2[12]*t18498;
  t16267 = var2[0]*t16264;
  t16346 = var2[2]*t16339;
  t16357 = var2[1]*t16354;
  t18624 = t16381*t17147;
  t18633 = -1.*t17147*t16322;
  t18636 = -1.*t17118*t16397;
  t19443 = t16407*t16397;
  t19444 = t16381*t16417;
  t19450 = -1.*t16261*t16397;
  t19454 = -1.*t16322*t16417;
  t19361 = var2[0]*t15630*t16752;
  t19368 = t16309*t16190*t16752;
  t19372 = t16324*t16446;
  t19406 = t19368 + t19372;
  t19407 = var2[1]*t19406;
  t19436 = -1.*t16324*t16190*t16752;
  t19437 = t16309*t16446;
  t19438 = t19436 + t19437;
  t19439 = var2[2]*t19438;
  t19440 = t16261*t18383;
  t19445 = t16743*t16417;
  t19452 = -1.*t16697*t16417;
  t19458 = t16407*t18389;
  t19462 = t15630*t16697*t18435;
  t19487 = t16381*t16829;
  t19465 = t15630*t16743*t16488;
  t19466 = -1.*t16190*t16743*t16510;
  t19491 = -1.*t16322*t16829;
  t19471 = -1.*t15630*t16697*t16488;
  t19472 = t16190*t16697*t16510;
  t19475 = t15630*t16743*t18437;
  p_output1[0]=t15630*t15798*t15900 + 0.28121*t16134*t16190 - 1.*t15630*t16192*t16193 - 0.15121*(-1.*t15630*t15798*t15842 - 1.*t15630*t15805*t16193) + 0.28121*t16154*t16210 + 0.50321*t16036*t16215 - 0.50321*t16013*t16219 + 0.19821*(t16015*t16215 + t16013*t16219) + t16267 + t16346 + t16357 + var1[0] + t16537*var2[3] + ((-1.*t16309*t16322 - 1.*t16324*t16336)*var2[1] + t16354*var2[2])*var2[3] + t16450*var2[4] + (t16336*var2[0] - 1.*t16309*t16546*var2[1] + t16324*t16546*var2[2] + (t16512*t16520 - 1.*t16190*t16407*t16535 + t16475*(t16190*t16407*t16488 + t16190*t16407*t16581) + t15630*t16407*(t16475*t16510 + t16488*t16520 + t16520*t16581 + t16510*t16666))*var2[3])*var2[4] + t16143*t16182*var2[5] + (t16698 + t16706 + t16716 + (t16773 + t16475*(t16736 + t16737 - 1.*t16407*t16732*t16774 - 1.*t16407*t16732*t16780 + t16784 + t16786) + t15630*t16407*(t15630*t16475*t16732 - 1.*t16190*t16520*t16732 + t16749 + t16759 + t16791 + t16792) + t16797)*var2[3] + (t16722 + t16371*(-1.*t16407*t16732 + t16736 + t16737 + t16744) + t16381*(t16446*t16732 + t16749 + t16756 + t16759) + t16766)*var2[4])*var2[5] + (t16698 + t16706 + t16716 + (t16773 + t16797 + t16475*(t16736 + t16784 + t16786 - 1.*t16407*t16774*t16825 - 1.*t16407*t16780*t16825 + t16831) + t15630*t16407*(t16749 + t16791 + t16792 + t15630*t16475*t16825 - 1.*t16190*t16520*t16825 + t16840))*var2[3] + (t16722 + t16766 + t16371*(t16736 + t16744 - 1.*t16407*t16825 + t16831) + t16381*(t16749 + t16756 + t16446*t16825 + t16840))*var2[4] + t16143*(t15805*t16170 + t15842*t16180 - 1.*t15805*t16809 + t15842*t16817)*var2[5])*var2[12] + t16100*var2[13] + (t17090*var2[0] + (t16324*t17118 - 1.*t16309*t17129)*var2[1] + (t16309*t17118 + t16324*t17129)*var2[2] + (t16264*t16512 + t16475*(t17149 - 1.*t15630*t16407*t17253 + t16190*t16407*t17263) + t15630*t16407*(t17177 + t17180 + t16475*t17253 + t16520*t17263 + t17278 + t17279))*var2[3] + (t16322*t16419 + t16371*(t17149 - 1.*t16407*t17156) + t16381*(t16446*t17156 + t17165 + t16143*t17172 + t17177 + t17180 + t17181))*var2[4] + t16182*t16226*var2[5])*var2[13] + (t16871 + t16876 + t16880 + (t16475*(t16922 - 1.*t15630*t16407*t16999 + t16190*t16407*t17015) + t16512*t17028 + t15630*t16407*(t16950 + t16953 + t16475*t16999 + t16520*t17015 + t16488*t17028 + t16510*t17043))*var2[3] + (t16371*(t16922 - 1.*t16407*t16926) + t16419*t16942 + t16381*(t16368*t16432 + t16446*t16926 + t16143*t16948 + t16950 + t16953 + t16417*t16962))*var2[4] + t16182*t16368*var2[5] + (-0.305*Power(t16015,2) + t16863 + t16864)*var2[13])*var2[14] + t16264*var3[0] + t16354*var3[1] + t16339*var3[2] + t16537*var3[3] + t16450*var3[4] + t16143*t16182*var3[5] + t16100*var3[13] - 1.*var4[0];
  p_output1[1]=-0.28121*t15630*t16134*t16309 + t15900*t17352 + t16192*t17385 - 0.15121*(-1.*t15842*t17352 + t15805*t17385) + 0.28121*t16154*t17502 + 0.50321*t16036*t17531 - 0.50321*t16013*t17536 + 0.19821*(t16015*t17531 + t16013*t17536) + var1[1] + t15630*t16407*var2[0] + t17390*var2[1] + t17397*var2[2] + t17547*var2[3] + ((-1.*t16309*t16381 + t16190*t16324*t16407)*var2[1] + t17390*var2[2])*var2[3] + t17524*var2[4] + (-1.*t16190*t16407*var2[0] + t15630*t16309*t16407*var2[1] - 1.*t15630*t16324*t16407*var2[2] + (t16475*(t16336*t16488 + t16264*t16510 + t16510*t16546 + t16336*t16581) + t16264*(-1.*t16475*t16510 - 1.*t16488*t16520 - 1.*t16520*t16581 - 1.*t16510*t16666) + t16336*t17542 + t16520*t17544)*var2[3])*var2[4] + t17329*var2[5] + (t17556 + t17562 + t17570 + (t16264*(-1.*t15630*t16475*t16732 + t16190*t16520*t16732 + t17573 + t17575 + t17591 + t17592) + t16475*(t15630*t16264*t16732 - 1.*t16190*t16336*t16732 + t17581 + t17583 + t17597 + t17598) + t17603 + t17605)*var2[3] + (t16322*(-1.*t16446*t16732 + t17573 + t17574 + t17575) + t17578 + t16371*(t16261*t16732 + t17581 + t17582 + t17583) + t17586)*var2[4])*var2[5] + t17307*var2[12] + (t17556 + t17562 + t17570 + (t17603 + t17605 + t16264*(-1.*t15630*t16475*t16825 + t16190*t16520*t16825 + t17573 + t17591 + t17592 + t17649) + t16475*(t15630*t16264*t16825 - 1.*t16190*t16336*t16825 + t17581 + t17597 + t17598 + t17664))*var2[3] + (t17578 + t17586 + t16322*(-1.*t16446*t16825 + t17573 + t17574 + t17649) + t16371*(t16261*t16825 + t17581 + t17582 + t17664))*var2[4] + (t16143*(-1.*t15842*t16143*t16170 + t15805*t16143*t16180 + t15842*t16143*t16809 + t15805*t16143*t16817) + t16226*(t15842*t16170*t16368 - 1.*t15805*t16180*t16368 - 1.*t15842*t16368*t16809 - 1.*t15805*t16368*t16817))*var2[5])*var2[12] + ((t17090*t17542 + t16264*t17544 + t16475*(t16488*t17090 + t16510*t17129 + t16264*t17253 + t16336*t17263 + t18053 + t18056) + t16264*(-1.*t16475*t17253 - 1.*t16520*t17263 + t18074 + t18076 + t18165 + t18167))*var2[3] + (t17118*t17517 + t16322*t17521 + t16371*(t16417*t17078 + t16261*t17156 + t17951 + t17957 + t18053 + t18056) + t16322*(-1.*t16446*t17156 + t18000 + t18019 + t18074 + t18076 + t18077))*var2[4] + (t16933*t17314 + t16226*t17321 + t16143*(t15805*t16170*t16226 + t15842*t16180*t16226 + t16143*t16432*t17882 + t16143*t16432*t17885 + t17951 + t17957) + t16226*(-1.*t15805*t16143*t16170 - 1.*t15842*t16143*t16180 - 1.*t16368*t16432*t17882 - 1.*t16368*t16432*t17885 + t18000 + t18019))*var2[5] + (t16933*t17297 + t16226*t17303 + t16143*(t16166*t16226 + t16437 + t17951 + t17957) + t16226*(-1.*t16143*t16166 + t17871 + t18000 + t18019))*var2[12])*var2[13] + ((t16475*t17542 + t17028*t17544 + t16475*(t16438 + t16515 + t16521 + t16264*t16999 + t16336*t17015 + t17903) + t16264*(-1.*t16475*t16999 - 1.*t16520*t17015 - 1.*t16488*t17028 - 1.*t16510*t17043 + t17907 + t17911))*var2[3] + (t16371*t17517 + t16942*t17521 + t16371*(t16437 + t16438 + t16447 + t16261*t16926 + t17866 + t17903) + t16322*(-1.*t16446*t16926 - 1.*t16417*t16962 + t17871 + t17874 + t17907 + t17911))*var2[4] + (t16143*t17314 + t16368*t17321 + t16143*(t15805*t16170*t16368 + t15842*t16180*t16368 + t16437 + t17866 + t16143*t16885*t17882 + t16143*t16885*t17885) + t16226*(-1.*t15805*t16170*t16933 - 1.*t15842*t16180*t16933 + t17871 + t17874 - 1.*t16368*t16885*t17882 - 1.*t16368*t16885*t17885))*var2[5] + (t16143*t17297 + t16368*t17303 + t16143*(t16166*t16368 + t16437 + t16143*t16885 + t17866) + t16226*(-1.*t16368*t16885 - 1.*t16166*t16933 + t17871 + t17874))*var2[12])*var2[14] + t15630*t16407*var3[0] + t17390*var3[1] + t17397*var3[2] + t17547*var3[3] + t17524*var3[4] + t17329*var3[5] + t17307*var3[12] - 1.*var4[1];
  p_output1[2]=0.28121*t15630*t16134*t16324 + t16871 + t16876 + t16880 + t15900*t18340 + t16192*t18351 - 0.15121*(-1.*t15842*t18340 + t15805*t18351) + 0.28121*t16154*t18367 + 0.50321*t16036*t18397 - 0.50321*t16013*t18415 + 0.19821*(t16015*t18397 + t16013*t18415) + var1[2] + t18440*var2[3] + ((-1.*t16309*t16371 - 1.*t16324*t16520)*var2[1] + t16879*var2[2])*var2[3] + t18392*var2[4] + (t16520*var2[0] - 1.*t16309*t16666*var2[1] + t16324*t16666*var2[2] + (t15630*t16407*(-1.*t16336*t16488 - 1.*t16264*t16510 - 1.*t16510*t16546 - 1.*t16336*t16581) + t16264*(-1.*t16190*t16407*t16488 - 1.*t16190*t16407*t16581) + t16336*t18435 - 1.*t16190*t16407*t18437)*var2[3])*var2[4] + t16226*t18278*var2[5] + (t19361 + t19407 + t19439 + (t19462 + t16264*(t16407*t16732*t16774 + t16407*t16732*t16780 + t19443 + t19444 + t19465 + t19466) + t15630*t16407*(-1.*t15630*t16264*t16732 + t16190*t16336*t16732 + t19450 + t19454 + t19471 + t19472) + t19475)*var2[3] + (t19440 + t16322*(t16407*t16732 + t19443 + t19444 + t19445) + t16381*(-1.*t16261*t16732 + t19450 + t19452 + t19454) + t19458)*var2[4])*var2[5] + t18273*var2[12] + (t19361 + t19407 + t19439 + (t19462 + t19475 + t16264*(t16407*t16774*t16825 + t16407*t16780*t16825 + t19443 + t19465 + t19466 + t19487) + t15630*t16407*(-1.*t15630*t16264*t16825 + t16190*t16336*t16825 + t19450 + t19471 + t19472 + t19491))*var2[3] + (t19440 + t19458 + t16322*(t16407*t16825 + t19443 + t19445 + t19487) + t16381*(-1.*t16261*t16825 + t19450 + t19452 + t19491))*var2[4] + t16226*(-1.*t15805*t16170 - 1.*t15842*t16180 + t15805*t16809 - 1.*t15842*t16817)*var2[5])*var2[12] + t18256*var2[13] + (t16267 + t16346 + t16357 + t18499 + (t17090*t18435 + t16264*(t15630*t16407*t17253 - 1.*t16190*t16407*t17263 + t18624) + t15630*t16407*(-1.*t16488*t17090 - 1.*t16510*t17129 - 1.*t16264*t17253 - 1.*t16336*t17263 + t18633 + t18636))*var2[3] + (t17118*t18383 + t16322*(t16407*t17156 + t18624) + t16381*(-1.*t16432*t16933 - 1.*t16417*t17078 - 1.*t16261*t17156 - 1.*t16226*t17172 + t18633 + t18636))*var2[4] + t16933*t18278*var2[5])*var2[13] - 0.305*var2[14] + (t18499 + t17028*var2[0] + (t16324*t16942 - 1.*t16309*t17043)*var2[1] + (t16309*t16942 + t16324*t17043)*var2[2] + (t16475*t18435 + t16264*(t15630*t16407*t16999 - 1.*t16190*t16407*t17015 + t18516) + t15630*t16407*(-1.*t16264*t16999 - 1.*t16336*t17015 + t17514 + t17539 + t17540 + t18550))*var2[3] + (t16371*t18383 + t16322*(t16407*t16926 + t18516) + t16381*(-1.*t16261*t16926 - 1.*t16226*t16948 + t17296 + t17514 + t17516 + t18550))*var2[4] + t16143*t18278*var2[5] + (-0.28121*t16013 + 0.305*t16013*t16015 + t16013*t16057)*var2[13])*var2[14] + t16475*var3[0] + t16879*var3[1] + t16875*var3[2] + t18440*var3[3] + t18392*var3[4] + t16226*t18278*var3[5] + t18273*var3[12] + t18256*var3[13] - 0.305*var3[14] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void ddh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
