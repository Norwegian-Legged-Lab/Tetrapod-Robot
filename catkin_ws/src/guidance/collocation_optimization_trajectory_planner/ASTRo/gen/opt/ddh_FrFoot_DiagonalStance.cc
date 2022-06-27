/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:32 GMT+02:00
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
  double t842;
  double t740;
  double t808;
  double t958;
  double t988;
  double t991;
  double t1005;
  double t1007;
  double t1021;
  double t1279;
  double t1936;
  double t650;
  double t346;
  double t357;
  double t514;
  double t639;
  double t1961;
  double t1964;
  double t651;
  double t2136;
  double t2171;
  double t2184;
  double t2185;
  double t2186;
  double t2187;
  double t1963;
  double t1980;
  double t2056;
  double t2190;
  double t2192;
  double t2196;
  double t2197;
  double t2198;
  double t2199;
  double t2200;
  double t2202;
  double t2263;
  double t39;
  double t214;
  double t2376;
  double t2371;
  double t2408;
  double t2413;
  double t2415;
  double t2655;
  double t2665;
  double t2666;
  double t2667;
  double t2670;
  double t2671;
  double t2672;
  double t2685;
  double t2686;
  double t2417;
  double t2424;
  double t2425;
  double t2434;
  double t2457;
  double t2458;
  double t2704;
  double t2706;
  double t2707;
  double t2708;
  double t2709;
  double t2710;
  double t2711;
  double t2713;
  double t2714;
  double t2715;
  double t2716;
  double t2719;
  double t2720;
  double t2721;
  double t2727;
  double t2730;
  double t2731;
  double t2737;
  double t2739;
  double t2740;
  double t2733;
  double t2734;
  double t2735;
  double t2742;
  double t2743;
  double t2744;
  double t2899;
  double t2905;
  double t2915;
  double t2751;
  double t2752;
  double t2753;
  double t2881;
  double t2923;
  double t2930;
  double t2940;
  double t2949;
  double t2953;
  double t2964;
  double t2972;
  double t3050;
  double t3058;
  double t3656;
  double t3865;
  double t3955;
  double t4203;
  double t4831;
  double t4955;
  double t5140;
  double t8107;
  double t8335;
  double t8356;
  double t8530;
  double t8928;
  double t8929;
  double t9179;
  double t9180;
  double t9619;
  double t9165;
  double t9637;
  double t9656;
  double t9991;
  double t11521;
  double t11876;
  double t12130;
  double t12555;
  double t12691;
  double t12692;
  double t12779;
  double t12786;
  double t12807;
  double t12810;
  double t12811;
  double t13435;
  double t13436;
  double t13442;
  double t13467;
  double t13468;
  double t13469;
  double t13483;
  double t13484;
  double t13485;
  double t13500;
  double t13501;
  double t13502;
  double t13487;
  double t13489;
  double t13490;
  double t13491;
  double t13493;
  double t13499;
  double t13505;
  double t13470;
  double t13471;
  double t13472;
  double t13473;
  double t13474;
  double t13476;
  double t13477;
  double t13478;
  double t13479;
  double t13482;
  double t14990;
  double t15002;
  double t15004;
  double t14926;
  double t13494;
  double t15017;
  double t15020;
  double t15065;
  double t15072;
  double t15073;
  double t15076;
  double t13504;
  double t13544;
  double t13562;
  double t13578;
  double t13645;
  double t15082;
  double t13654;
  double t13656;
  double t15091;
  double t13686;
  double t13735;
  double t13847;
  double t15174;
  double t15176;
  double t15179;
  double t15203;
  double t15205;
  double t15206;
  double t15181;
  double t15182;
  double t15183;
  double t15192;
  double t15193;
  double t15194;
  double t15207;
  double t15208;
  double t15211;
  double t15187;
  double t15214;
  double t15215;
  double t15238;
  double t15239;
  double t15243;
  double t15220;
  double t15237;
  double t15256;
  double t15257;
  double t15258;
  double t15266;
  double t15267;
  double t15268;
  double t15277;
  double t15281;
  double t15282;
  double t15305;
  double t15306;
  double t15307;
  double t15311;
  double t15312;
  double t15313;
  double t15315;
  double t15316;
  double t15317;
  double t15329;
  double t15331;
  double t15332;
  double t15334;
  double t15344;
  double t15348;
  double t15333;
  double t15363;
  double t15364;
  double t15365;
  double t15368;
  double t15370;
  double t15374;
  double t15382;
  double t15383;
  double t15384;
  double t15386;
  double t15387;
  double t15388;
  double t15362;
  double t15407;
  double t15408;
  double t15409;
  double t15410;
  double t15411;
  double t15412;
  double t15413;
  double t15414;
  double t15420;
  double t15422;
  double t15423;
  double t15426;
  double t15429;
  double t15431;
  double t15432;
  double t15433;
  double t15434;
  double t665;
  double t2375;
  double t15456;
  double t15457;
  double t15458;
  double t15463;
  double t15464;
  double t15465;
  double t15445;
  double t15446;
  double t15447;
  double t15449;
  double t15450;
  double t15451;
  double t15375;
  double t15488;
  double t15489;
  double t15490;
  double t15491;
  double t15492;
  double t15493;
  double t15495;
  double t15475;
  double t15476;
  double t15477;
  double t15395;
  double t15397;
  double t15507;
  double t15508;
  double t15509;
  double t15510;
  double t15511;
  double t15512;
  double t15513;
  double t15498;
  double t15499;
  double t15500;
  double t15503;
  double t15504;
  double t15505;
  double t15533;
  double t15535;
  double t15540;
  double t15542;
  double t15520;
  double t15521;
  double t15522;
  double t15524;
  double t15525;
  double t15526;
  double t15528;
  double t15530;
  double t15531;
  double t15534;
  double t15538;
  double t15541;
  double t15545;
  double t15585;
  double t15550;
  double t15551;
  double t15589;
  double t15556;
  double t15557;
  double t15560;
  double t15561;
  double t13452;
  double t13453;
  double t13455;
  double t15659;
  double t15664;
  double t15681;
  double t15683;
  double t15667;
  double t15701;
  double t15705;
  double t15707;
  double t15290;
  double t15291;
  double t15292;
  double t15733;
  double t15735;
  double t15739;
  double t15741;
  double t15304;
  double t15308;
  double t15309;
  double t15763;
  double t15765;
  double t15769;
  double t15771;
  double t15119;
  double t15122;
  double t15801;
  double t15802;
  double t15803;
  double t15806;
  double t15807;
  double t15808;
  double t15811;
  double t15812;
  double t15813;
  double t15149;
  double t15816;
  double t15817;
  double t15818;
  double t15820;
  double t15821;
  double t15822;
  double t15150;
  double t15151;
  double t15152;
  double t15153;
  double t15164;
  double t15165;
  double t15166;
  double t15167;
  double t15772;
  double t15835;
  double t15836;
  double t15837;
  double t15838;
  double t15839;
  double t15840;
  double t15841;
  double t15829;
  double t15830;
  double t15831;
  double t15787;
  double t15788;
  double t15859;
  double t15860;
  double t15861;
  double t15862;
  double t15863;
  double t15864;
  double t15865;
  double t15844;
  double t15845;
  double t15846;
  double t15848;
  double t15849;
  double t15850;
  double t15891;
  double t15897;
  double t15877;
  double t15878;
  double t15879;
  double t15880;
  double t2688;
  double t2718;
  double t2726;
  double t15917;
  double t15924;
  double t15926;
  double t15977;
  double t15978;
  double t15983;
  double t15985;
  double t15966;
  double t15967;
  double t15968;
  double t15969;
  double t15970;
  double t15971;
  double t15972;
  double t15973;
  double t15974;
  double t15975;
  double t15979;
  double t15984;
  double t15988;
  double t15991;
  double t16016;
  double t15994;
  double t15995;
  double t16020;
  double t16000;
  double t16001;
  double t16004;
  t842 = Cos(var1[14]);
  t740 = Sin(var1[14]);
  t808 = 0.28121*t740;
  t958 = -1.*t842;
  t988 = 1. + t958;
  t991 = 0.50321*t988;
  t1005 = 0.19821*t842;
  t1007 = t991 + t1005;
  t1021 = -1.*t1007*t740;
  t1279 = -0.305*t842*t740;
  t1936 = t808 + t1021 + t1279;
  t650 = Sin(var1[12]);
  t346 = Cos(var1[12]);
  t357 = -1.*t346;
  t514 = 1. + t357;
  t639 = 0.15121*t514;
  t1961 = Cos(var1[13]);
  t1964 = Sin(var1[13]);
  t651 = -0.15121*t650;
  t2136 = -1.*t1961;
  t2171 = 1. + t2136;
  t2184 = 0.28121*t2171;
  t2185 = t1961*t1007;
  t2186 = -0.305*t1964*t740;
  t2187 = t2184 + t2185 + t2186;
  t1963 = t1961*t842;
  t1980 = t1964*t740;
  t2056 = t1963 + t1980;
  t2190 = t346*t2187;
  t2192 = t639 + t2190;
  t2196 = t650*t2192;
  t2197 = -0.15121*t514;
  t2198 = -0.15121*t346;
  t2199 = t650*t2187;
  t2200 = t2197 + t2198 + t651 + t2199;
  t2202 = -1.*t346*t2200;
  t2263 = t2196 + t2202;
  t39 = Cos(var1[4]);
  t214 = Cos(var1[5]);
  t2376 = Sin(var1[5]);
  t2371 = Sin(var1[4]);
  t2408 = t346*t39*t214;
  t2413 = -1.*t39*t650*t2376;
  t2415 = t2408 + t2413;
  t2655 = -1.*t842*t1964;
  t2665 = t1961*t740;
  t2666 = t2655 + t2665;
  t2667 = t2666*t2371;
  t2670 = t346*t214*t2056;
  t2671 = -1.*t650*t2056*t2376;
  t2672 = t2670 + t2671;
  t2685 = t39*t2672;
  t2686 = t2667 + t2685;
  t2417 = -1.*t1964*t2371;
  t2424 = t1961*t2415;
  t2425 = t2417 + t2424;
  t2434 = t1961*t2371;
  t2457 = t1964*t2415;
  t2458 = t2434 + t2457;
  t2704 = Sin(var1[3]);
  t2706 = t214*t650*t2056;
  t2707 = t346*t2056*t2376;
  t2708 = t2706 + t2707;
  t2709 = t2704*t2708;
  t2710 = Cos(var1[3]);
  t2711 = t39*t2666;
  t2713 = -1.*t2371*t2672;
  t2714 = t2711 + t2713;
  t2715 = t2710*t2714;
  t2716 = t2709 + t2715;
  t2719 = t2710*t2708;
  t2720 = -1.*t2704*t2714;
  t2721 = t2719 + t2720;
  t2727 = t842*t1964;
  t2730 = -1.*t1961*t740;
  t2731 = t2727 + t2730;
  t2737 = t346*t214;
  t2739 = -1.*t650*t2376;
  t2740 = t2737 + t2739;
  t2733 = t214*t650*t2731;
  t2734 = t346*t2731*t2376;
  t2735 = t2733 + t2734;
  t2742 = t214*t2200;
  t2743 = t2192*t2376;
  t2744 = t2742 + t2743;
  t2899 = t214*t2192;
  t2905 = -1.*t2200*t2376;
  t2915 = t2899 + t2905;
  t2751 = -1.*t2740*t2744;
  t2752 = -1.*t214*t650;
  t2753 = -1.*t346*t2376;
  t2881 = t2752 + t2753;
  t2923 = -1.*t2881*t2915;
  t2930 = t2751 + t2923;
  t2940 = t2735*t2930;
  t2949 = 0.28121*t1964;
  t2953 = -1.*t1007*t1964;
  t2964 = -0.305*t1961*t740;
  t2972 = t2949 + t2953 + t2964;
  t3050 = t2972*t2056;
  t3058 = t2735*t2744;
  t3656 = t346*t214*t2731;
  t3865 = -1.*t650*t2731*t2376;
  t3955 = t3656 + t3865;
  t4203 = t3955*t2915;
  t4831 = t3050 + t3058 + t4203;
  t4955 = t2740*t4831;
  t5140 = t2940 + t4955;
  t8107 = t2056*t2371;
  t8335 = t39*t3955;
  t8356 = t8107 + t8335;
  t8530 = t2972*t2371;
  t8928 = t39*t2915;
  t8929 = t8530 + t8928;
  t9179 = t39*t2972;
  t9180 = -1.*t2371*t2915;
  t9619 = t9179 + t9180;
  t9165 = -1.*t39*t2881*t8929;
  t9637 = t2371*t2881*t9619;
  t9656 = t2751 + t9165 + t9637;
  t9991 = t8356*t9656;
  t11521 = t8356*t8929;
  t11876 = t39*t2056;
  t12130 = -1.*t2371*t3955;
  t12555 = t11876 + t12130;
  t12691 = t12555*t9619;
  t12692 = t3058 + t11521 + t12691;
  t12779 = t39*t2881*t12692;
  t12786 = t9991 + t12779;
  t12807 = -1.*t2666*t2371;
  t12810 = -1.*t39*t2672;
  t12811 = t12807 + t12810;
  t13435 = -1.*t2972*t2371;
  t13436 = -1.*t39*t2915;
  t13442 = t13435 + t13436;
  t13467 = -1.*t214*t650*t2056;
  t13468 = -1.*t346*t2056*t2376;
  t13469 = t13467 + t13468;
  t13483 = -1.*t214*t2200;
  t13484 = -1.*t2192*t2376;
  t13485 = t13483 + t13484;
  t13500 = -1.*t214*t650*t2731;
  t13501 = -1.*t346*t2731*t2376;
  t13502 = t13500 + t13501;
  t13487 = -1.*t2881*t2744;
  t13489 = -1.*t2740*t2915;
  t13490 = -1.*t346*t214;
  t13491 = t650*t2376;
  t13493 = t13490 + t13491;
  t13499 = t3955*t2744;
  t13505 = t2735*t2915;
  t13470 = var2[0]*t39*t13469;
  t13471 = t2704*t2371*t13469;
  t13472 = t2710*t2672;
  t13473 = t13471 + t13472;
  t13474 = var2[1]*t13473;
  t13476 = -1.*t2710*t2371*t13469;
  t13477 = t2704*t2672;
  t13478 = t13476 + t13477;
  t13479 = var2[2]*t13478;
  t13482 = t3955*t2930;
  t14990 = 0.15121*t650;
  t15002 = -1.*t650*t2187;
  t15004 = t14990 + t15002;
  t14926 = t2198 + t2190;
  t13494 = -1.*t13493*t2915;
  t15017 = t214*t15004;
  t15020 = -1.*t14926*t2376;
  t15065 = t15017 + t15020;
  t15072 = t214*t14926;
  t15073 = t15004*t2376;
  t15076 = t15072 + t15073;
  t13504 = t13502*t2915;
  t13544 = t2881*t4831;
  t13562 = t39*t13502*t9656;
  t13578 = Power(t39,2);
  t13645 = Power(t2371,2);
  t15082 = -1.*t2740*t15076;
  t13654 = -1.*t39*t13493*t8929;
  t13656 = t2371*t13493*t9619;
  t15091 = t2735*t15076;
  t13686 = t39*t13502*t8929;
  t13735 = -1.*t2371*t13502*t9619;
  t13847 = t39*t13493*t12692;
  t15174 = -0.305*t842*t1964;
  t15176 = 0.305*t1961*t740;
  t15179 = t15174 + t15176;
  t15203 = -1.*t1961*t842;
  t15205 = -1.*t1964*t740;
  t15206 = t15203 + t15205;
  t15181 = t214*t650*t15179;
  t15182 = t346*t15179*t2376;
  t15183 = t15181 + t15182;
  t15192 = t346*t214*t15179;
  t15193 = -1.*t650*t15179*t2376;
  t15194 = t15192 + t15193;
  t15207 = t214*t650*t15206;
  t15208 = t346*t15206*t2376;
  t15211 = t15207 + t15208;
  t15187 = -1.*t2740*t15183;
  t15214 = -0.305*t1961*t842;
  t15215 = t15214 + t2186;
  t15238 = t346*t214*t15206;
  t15239 = -1.*t650*t15206*t2376;
  t15243 = t15238 + t15239;
  t15220 = t2735*t15183;
  t15237 = t15211*t2744;
  t15256 = t15215*t2371;
  t15257 = t39*t15194;
  t15258 = t15256 + t15257;
  t15266 = t39*t15215;
  t15267 = -1.*t2371*t15194;
  t15268 = t15266 + t15267;
  t15277 = t2731*t2371;
  t15281 = t39*t15243;
  t15282 = t15277 + t15281;
  t15305 = t346*t214*t2666;
  t15306 = -1.*t650*t2666*t2376;
  t15307 = t15305 + t15306;
  t15311 = t214*t650*t2666;
  t15312 = t346*t2666*t2376;
  t15313 = t15311 + t15312;
  t15315 = t39*t15206;
  t15316 = -1.*t2371*t15307;
  t15317 = t15315 + t15316;
  t15329 = t214*t650*t2972;
  t15331 = t346*t2972*t2376;
  t15332 = t15329 + t15331;
  t15334 = t346*t214*t2972;
  t15344 = -1.*t650*t2972*t2376;
  t15348 = t15334 + t15344;
  t15333 = -1.*t2740*t15332;
  t15363 = 0.28121*t1961;
  t15364 = -1.*t1961*t1007;
  t15365 = 0.305*t1964*t740;
  t15368 = t15363 + t15364 + t15365;
  t15370 = t2735*t15332;
  t15374 = t2708*t2744;
  t15382 = t15368*t2371;
  t15383 = t39*t15348;
  t15384 = t15382 + t15383;
  t15386 = t39*t15368;
  t15387 = -1.*t2371*t15348;
  t15388 = t15386 + t15387;
  t15362 = t2972*t2666;
  t15407 = -1.*t2731*t2187;
  t15408 = -1.*t2972*t2056;
  t15409 = t15407 + t15408;
  t15410 = t2666*t15409;
  t15411 = t2187*t2056;
  t15412 = t15362 + t15411;
  t15413 = t2056*t15412;
  t15414 = -0.15121 + t15410 + t15413;
  t15420 = -1.*t346*t2731*t2192;
  t15422 = -1.*t650*t2731*t2200;
  t15423 = t15408 + t15420 + t15422;
  t15426 = t2666*t15423;
  t15429 = t346*t2056*t2192;
  t15431 = t650*t2056*t2200;
  t15432 = t15362 + t15429 + t15431;
  t15433 = t2056*t15432;
  t15434 = t15426 + t15433;
  t665 = t639 + t651;
  t2375 = t2197 + t651;
  t15456 = t2704*t2371*t2881;
  t15457 = t2710*t2740;
  t15458 = t15456 + t15457;
  t15463 = -1.*t2710*t2371*t2881;
  t15464 = t2704*t2740;
  t15465 = t15463 + t15464;
  t15445 = t214*t2704*t2371;
  t15446 = t2710*t2376;
  t15447 = t15445 + t15446;
  t15449 = t2710*t214;
  t15450 = -1.*t2704*t2371*t2376;
  t15451 = t15449 + t15450;
  t15375 = t2672*t2915;
  t15488 = -1.*t2735*t2744;
  t15489 = -1.*t3955*t2915;
  t15490 = t15408 + t15488 + t15489;
  t15491 = t2708*t15490;
  t15492 = t15362 + t15374 + t15375;
  t15493 = t2735*t15492;
  t15495 = t15491 + t15493;
  t15475 = t346*t15447;
  t15476 = t650*t15451;
  t15477 = t15475 + t15476;
  t15395 = t2686*t8929;
  t15397 = t2714*t9619;
  t15507 = -1.*t8356*t8929;
  t15508 = -1.*t12555*t9619;
  t15509 = t15488 + t15507 + t15508;
  t15510 = t2686*t15509;
  t15511 = t15374 + t15395 + t15397;
  t15512 = t8356*t15511;
  t15513 = t15510 + t15512;
  t15498 = t39*t1964*t2704;
  t15499 = t1961*t15477;
  t15500 = t15498 + t15499;
  t15503 = -1.*t1961*t39*t2704;
  t15504 = t1964*t15477;
  t15505 = t15503 + t15504;
  t15533 = -1.*t3955*t2744;
  t15535 = -1.*t2735*t2915;
  t15540 = t2672*t2744;
  t15542 = t2708*t2915;
  t15520 = var2[0]*t39*t13493;
  t15521 = t2704*t2881;
  t15522 = -1.*t2710*t2371*t13493;
  t15524 = t15521 + t15522;
  t15525 = var2[2]*t15524;
  t15526 = t2710*t2881;
  t15528 = t2704*t2371*t13493;
  t15530 = t15526 + t15528;
  t15531 = var2[1]*t15530;
  t15534 = -1.*t13502*t2915;
  t15538 = t2672*t15490;
  t15541 = t13469*t2915;
  t15545 = t3955*t15492;
  t15585 = -1.*t2735*t15076;
  t15550 = -1.*t39*t13502*t8929;
  t15551 = t2371*t13502*t9619;
  t15589 = t2708*t15076;
  t15556 = t39*t13469*t8929;
  t15557 = -1.*t2371*t13469*t9619;
  t15560 = t39*t13469*t15509;
  t15561 = t39*t13502*t15511;
  t13452 = -1.*t2056*t2371;
  t13453 = -1.*t39*t3955;
  t13455 = t13452 + t13453;
  t15659 = t2666*t15215;
  t15664 = -1.*t2731*t2972;
  t15681 = Power(t346,2);
  t15683 = Power(t650,2);
  t15667 = -1.*t15215*t2056;
  t15701 = t15183*t2708;
  t15705 = -1.*t2735*t15183;
  t15707 = -1.*t15211*t2744;
  t15290 = t39*t2731;
  t15291 = -1.*t2371*t15243;
  t15292 = t15290 + t15291;
  t15733 = t2972*t15206;
  t15735 = t2666*t15368;
  t15739 = -1.*t2972*t2666;
  t15741 = -1.*t15368*t2056;
  t15304 = t15206*t2371;
  t15308 = t39*t15307;
  t15309 = t15304 + t15308;
  t15763 = t15332*t2708;
  t15765 = t15313*t2744;
  t15769 = -1.*t2735*t15332;
  t15771 = -1.*t2708*t2744;
  t15119 = 0.28121*t842;
  t15122 = -1.*t1007*t842;
  t15801 = Power(t740,2);
  t15802 = 0.305*t15801;
  t15803 = t15119 + t15122 + t15802;
  t15806 = -0.15121*t2731;
  t15807 = -0.15121*t2666;
  t15808 = t15806 + t15807;
  t15811 = -1.*t650*t2192;
  t15812 = t346*t2200;
  t15813 = t15811 + t15812;
  t15149 = var2[0]*t8356;
  t15816 = -1.*t2710*t214*t2371;
  t15817 = t2704*t2376;
  t15818 = t15816 + t15817;
  t15820 = t214*t2704;
  t15821 = t2710*t2371*t2376;
  t15822 = t15820 + t15821;
  t15150 = t2704*t2735;
  t15151 = t2710*t12555;
  t15152 = t15150 + t15151;
  t15153 = var2[2]*t15152;
  t15164 = t2710*t2735;
  t15165 = -1.*t2704*t12555;
  t15166 = t15164 + t15165;
  t15167 = var2[1]*t15166;
  t15772 = -1.*t2672*t2915;
  t15835 = t2740*t2744;
  t15836 = t2881*t2915;
  t15837 = t15835 + t15836;
  t15838 = t2708*t15837;
  t15839 = t15739 + t15771 + t15772;
  t15840 = t2740*t15839;
  t15841 = t15838 + t15840;
  t15829 = t346*t15818;
  t15830 = t650*t15822;
  t15831 = t15829 + t15830;
  t15787 = -1.*t2686*t8929;
  t15788 = -1.*t2714*t9619;
  t15859 = t39*t2881*t8929;
  t15860 = -1.*t2371*t2881*t9619;
  t15861 = t15835 + t15859 + t15860;
  t15862 = t2686*t15861;
  t15863 = t15771 + t15787 + t15788;
  t15864 = t39*t2881*t15863;
  t15865 = t15862 + t15864;
  t15844 = -1.*t2710*t39*t1964;
  t15845 = t1961*t15831;
  t15846 = t15844 + t15845;
  t15848 = t1961*t2710*t39;
  t15849 = t1964*t15831;
  t15850 = t15848 + t15849;
  t15891 = t2740*t15183;
  t15897 = -1.*t15183*t2708;
  t15877 = -0.15121*t15206;
  t15878 = -0.15121*t2056;
  t15879 = t15877 + t15878;
  t15880 = var2[12]*t15879;
  t2688 = var2[0]*t2686;
  t2718 = var2[2]*t2716;
  t2726 = var2[1]*t2721;
  t15917 = t2740*t15332;
  t15924 = -1.*t15332*t2708;
  t15926 = -1.*t15313*t2744;
  t15977 = t2881*t2744;
  t15978 = t2740*t2915;
  t15983 = -1.*t2672*t2744;
  t15985 = -1.*t2708*t2915;
  t15966 = var2[0]*t39*t13502;
  t15967 = t2704*t2371*t13502;
  t15968 = t2710*t3955;
  t15969 = t15967 + t15968;
  t15970 = var2[1]*t15969;
  t15971 = -1.*t2710*t2371*t13502;
  t15972 = t2704*t3955;
  t15973 = t15971 + t15972;
  t15974 = var2[2]*t15973;
  t15975 = t2672*t15837;
  t15979 = t13493*t2915;
  t15984 = -1.*t13469*t2915;
  t15988 = t2881*t15839;
  t15991 = t39*t13469*t15861;
  t16016 = t2740*t15076;
  t15994 = t39*t13493*t8929;
  t15995 = -1.*t2371*t13493*t9619;
  t16020 = -1.*t2708*t15076;
  t16000 = -1.*t39*t13469*t8929;
  t16001 = t2371*t13469*t9619;
  t16004 = t39*t13493*t15863;
  p_output1[0]=0.28121*t1964*t2371 + 0.28121*t2171*t2415 + t2688 + t2718 + t2726 - 1.*t2375*t2376*t39 - 0.15121*(-1.*t2376*t346*t39 - 1.*t214*t39*t650) + t214*t39*t665 - 0.50321*t2458*t740 + 0.19821*(t2458*t740 + t2425*t842) + 0.50321*t2425*t988 + var1[0] + t12786*var2[3] + ((-1.*t2704*t2708 - 1.*t2710*t2714)*var2[1] + t2721*var2[2])*var2[3] + t5140*var2[4] + (t2714*var2[0] - 1.*t12811*t2704*var2[1] + t12811*t2710*var2[2] + (-1.*t12692*t2371*t2881 + t8356*(t13442*t2371*t2881 + t2371*t2881*t8929) + t2881*t39*(t12555*t13442 + t12555*t8929 + t13455*t9619 + t8356*t9619) + t12555*t9656)*var2[3])*var2[4] + t2056*t2263*var2[5] + (t13470 + t13474 + t13479 + (t13562 + t13847 + (t13487 + t13489 + t13654 + t13656 - 1.*t13485*t13578*t2881 - 1.*t13485*t13645*t2881)*t8356 + t2881*t39*(t13499 + t13505 + t13686 + t13735 - 1.*t12555*t13485*t2371 + t13485*t39*t8356))*var2[3] + (t13482 + t13544 + t2735*(t13487 + t13489 + t13494 - 1.*t13485*t2881) + t2740*(t13499 + t13504 + t13505 + t13485*t3955))*var2[4])*var2[5] + (t13470 + t13474 + t13479 + (t13562 + t13847 + (t13487 + t13654 + t13656 + t15082 - 1.*t13578*t15065*t2881 - 1.*t13645*t15065*t2881)*t8356 + t2881*t39*(t13499 + t13686 + t13735 + t15091 - 1.*t12555*t15065*t2371 + t15065*t39*t8356))*var2[3] + (t13482 + t13544 + t2735*(t13487 + t13494 + t15082 - 1.*t15065*t2881) + t2740*(t13499 + t13504 + t15091 + t15065*t3955))*var2[4] + t2056*(-1.*t14926*t346 + t2192*t346 + t15004*t650 + t2200*t650)*var2[5])*var2[12] + t1936*var2[13] + (t15309*var2[0] + (-1.*t15317*t2704 + t15313*t2710)*var2[1] + (t15313*t2704 + t15317*t2710)*var2[2] + ((t15333 + t15388*t2371*t2881 - 1.*t15384*t2881*t39)*t8356 + t2881*t39*(t15370 + t15374 + t12555*t15388 + t15395 + t15397 + t15384*t8356) + t2686*t9656)*var2[3] + (t2735*(t15333 - 1.*t15348*t2881) + t2708*t2930 + t2740*(t15362 + t15370 + t15374 + t15375 + t15368*t2056 + t15348*t3955))*var2[4] + t2263*t2666*var2[5])*var2[13] + (t15149 + t15153 + t15167 + ((t15187 + t15268*t2371*t2881 - 1.*t15258*t2881*t39)*t8356 + t2881*t39*(t15220 + t15237 + t12555*t15268 + t15258*t8356 + t15282*t8929 + t15292*t9619) + t15282*t9656)*var2[3] + (t2735*(t15187 - 1.*t15194*t2881) + t15211*t2930 + t2740*(t15220 + t15237 + t15215*t2056 + t15243*t2915 + t2731*t2972 + t15194*t3955))*var2[4] + t2263*t2731*var2[5] + (t15119 + t15122 - 0.305*Power(t842,2))*var2[13])*var2[14] + t2686*var3[0] + t2721*var3[1] + t2716*var3[2] + t12786*var3[3] + t5140*var3[4] + t2056*t2263*var3[5] + t1936*var3[13] - 1.*var4[0];
  p_output1[1]=0.28121*t15477*t2171 + t15451*t2375 - 0.28121*t1964*t2704*t39 - 0.15121*(t15451*t346 - 1.*t15447*t650) + t15447*t665 - 0.50321*t15505*t740 + 0.19821*(t15505*t740 + t15500*t842) + 0.50321*t15500*t988 + var1[1] + t2881*t39*var2[0] + t15458*var2[1] + t15465*var2[2] + t15513*var2[3] + ((-1.*t2704*t2740 + t2371*t2710*t2881)*var2[1] + t15458*var2[2])*var2[3] + t15495*var2[4] + (-1.*t2371*t2881*var2[0] + t2704*t2881*t39*var2[1] - 1.*t2710*t2881*t39*var2[2] + (t12555*t15511 + t15509*t2714 + t8356*(t13442*t2714 + t2714*t8929 + t12811*t9619 + t2686*t9619) + t2686*(-1.*t12555*t13442 - 1.*t12555*t8929 - 1.*t13455*t9619 - 1.*t8356*t9619))*var2[3])*var2[4] + t15434*var2[5] + (t15520 + t15525 + t15531 + (t15560 + t15561 + (t15540 + t15542 + t15556 + t15557 - 1.*t13485*t2371*t2714 + t13485*t2686*t39)*t8356 + t2686*(t15533 + t15535 + t15550 + t15551 + t12555*t13485*t2371 - 1.*t13485*t39*t8356))*var2[3] + (t15538 + t15545 + (t15540 + t15541 + t15542 + t13485*t2672)*t2735 + t2708*(t15533 + t15534 + t15535 - 1.*t13485*t3955))*var2[4])*var2[5] + t15414*var2[12] + (t15520 + t15525 + t15531 + (t15560 + t15561 + (t15540 + t15556 + t15557 + t15589 - 1.*t15065*t2371*t2714 + t15065*t2686*t39)*t8356 + t2686*(t15533 + t15550 + t15551 + t15585 + t12555*t15065*t2371 - 1.*t15065*t39*t8356))*var2[3] + (t15538 + t15545 + (t15540 + t15541 + t15589 + t15065*t2672)*t2735 + t2708*(t15533 + t15534 + t15585 - 1.*t15065*t3955))*var2[4] + (t2056*(t15004*t2056*t346 + t2056*t2200*t346 + t14926*t2056*t650 - 1.*t2056*t2192*t650) + t2666*(-1.*t15004*t2731*t346 - 1.*t2200*t2731*t346 - 1.*t14926*t2731*t650 + t2192*t2731*t650))*var2[5])*var2[12] + ((t15309*t15509 + t15511*t2686 + t2686*(-1.*t12555*t15388 + t15769 + t15771 + t15787 + t15788 - 1.*t15384*t8356) + t8356*(t15763 + t15765 + t15384*t2686 + t15388*t2714 + t15309*t8929 + t15317*t9619))*var2[3] + (t15313*t15490 + t15492*t2708 + t2735*(t15733 + t15735 + t15763 + t15765 + t15348*t2672 + t15307*t2915) + t2708*(t15739 + t15741 + t15769 + t15771 + t15772 - 1.*t15348*t3955))*var2[4] + (t15206*t15423 + t15432*t2666 + t2666*(t15739 + t15741 - 1.*t15681*t2731*t2972 - 1.*t15683*t2731*t2972 - 1.*t2056*t2192*t346 - 1.*t2056*t2200*t650) + t2056*(t15733 + t15735 + t15681*t2056*t2972 + t15683*t2056*t2972 + t2192*t2666*t346 + t2200*t2666*t650))*var2[5] + (t15206*t15409 + t15412*t2666 + (t15664 + t15739 + t15741 - 1.*t2056*t2187)*t2666 + t2056*(t15733 + t15735 + t2187*t2666 + t3050))*var2[12])*var2[13] + ((t15282*t15511 + t15509*t8356 + (t11521 + t12691 + t15701 + t15258*t2686 + t15268*t2714 + t3058)*t8356 + t2686*(-1.*t12555*t15268 + t15705 + t15707 - 1.*t15258*t8356 - 1.*t15282*t8929 - 1.*t15292*t9619))*var2[3] + (t15211*t15492 + t15490*t2735 + t2708*(t15664 + t15667 + t15705 + t15707 - 1.*t15243*t2915 - 1.*t15194*t3955) + t2735*(t15659 + t15701 + t15194*t2672 + t3050 + t3058 + t4203))*var2[4] + (t15423*t2056 + t15432*t2731 + t2666*(t15664 + t15667 - 1.*t15179*t15681*t2731 - 1.*t15179*t15683*t2731 - 1.*t15206*t2192*t346 - 1.*t15206*t2200*t650) + t2056*(t15659 + t15179*t15681*t2056 + t15179*t15683*t2056 + t3050 + t2192*t2731*t346 + t2200*t2731*t650))*var2[5] + (t15409*t2056 + t15412*t2731 + t2666*(t15664 + t15667 - 1.*t15206*t2187 - 1.*t15179*t2731) + t2056*(t15659 + t15179*t2056 + t2187*t2731 + t3050))*var2[12])*var2[14] + t2881*t39*var3[0] + t15458*var3[1] + t15465*var3[2] + t15513*var3[3] + t15495*var3[4] + t15434*var3[5] + t15414*var3[12] - 1.*var4[1];
  p_output1[2]=t15149 + t15153 + t15167 + 0.28121*t15831*t2171 + t15822*t2375 + 0.28121*t1964*t2710*t39 - 0.15121*(t15822*t346 - 1.*t15818*t650) + t15818*t665 - 0.50321*t15850*t740 + 0.19821*(t15850*t740 + t15846*t842) + 0.50321*t15846*t988 + var1[2] + t15865*var2[3] + ((-1.*t12555*t2710 - 1.*t2704*t2735)*var2[1] + t15166*var2[2])*var2[3] + t15841*var2[4] + (t12555*var2[0] - 1.*t13455*t2704*var2[1] + t13455*t2710*var2[2] + (t15861*t2714 - 1.*t15863*t2371*t2881 + t2686*(-1.*t13442*t2371*t2881 - 1.*t2371*t2881*t8929) + t2881*t39*(-1.*t13442*t2714 - 1.*t2714*t8929 - 1.*t12811*t9619 - 1.*t2686*t9619))*var2[3])*var2[4] + t15813*t2666*var2[5] + (t15966 + t15970 + t15974 + (t15991 + t16004 + t2686*(t15977 + t15978 + t15994 + t15995 + t13485*t13578*t2881 + t13485*t13645*t2881) + t2881*t39*(t15983 + t15985 + t16000 + t16001 + t13485*t2371*t2714 - 1.*t13485*t2686*t39))*var2[3] + (t15975 + t15988 + (t15983 + t15984 + t15985 - 1.*t13485*t2672)*t2740 + t2708*(t15977 + t15978 + t15979 + t13485*t2881))*var2[4])*var2[5] + t15808*var2[12] + (t15966 + t15970 + t15974 + (t15991 + t16004 + t2686*(t15977 + t15994 + t15995 + t16016 + t13578*t15065*t2881 + t13645*t15065*t2881) + t2881*t39*(t15983 + t16000 + t16001 + t16020 + t15065*t2371*t2714 - 1.*t15065*t2686*t39))*var2[3] + (t15975 + t15988 + (t15983 + t15984 + t16020 - 1.*t15065*t2672)*t2740 + t2708*(t15977 + t15979 + t16016 + t15065*t2881))*var2[4] + t2666*(t14926*t346 - 1.*t2192*t346 - 1.*t15004*t650 - 1.*t2200*t650)*var2[5])*var2[12] + t15803*var2[13] + (t15880 + t2688 + t2718 + t2726 + (t15309*t15861 + t2686*(t15917 - 1.*t15388*t2371*t2881 + t15384*t2881*t39) + t2881*t39*(t15924 + t15926 - 1.*t15384*t2686 - 1.*t15388*t2714 - 1.*t15309*t8929 - 1.*t15317*t9619))*var2[3] + (t15313*t15837 + t2708*(t15917 + t15348*t2881) + t2740*(t15924 + t15926 - 1.*t15368*t2666 - 1.*t15348*t2672 - 1.*t15307*t2915 - 1.*t15206*t2972))*var2[4] + t15206*t15813*var2[5])*var2[13] - 0.305*var2[14] + (t15880 + t15282*var2[0] + (-1.*t15292*t2704 + t15211*t2710)*var2[1] + (t15211*t2704 + t15292*t2710)*var2[2] + ((t15488 + t15507 + t15508 + t15897 - 1.*t15258*t2686 - 1.*t15268*t2714)*t2881*t39 + t2686*(t15891 - 1.*t15268*t2371*t2881 + t15258*t2881*t39) + t15861*t8356)*var2[3] + (t15837*t2735 + (t15408 + t15488 + t15489 + t15897 - 1.*t15215*t2666 - 1.*t15194*t2672)*t2740 + t2708*(t15891 + t15194*t2881))*var2[4] + t15813*t2056*var2[5] + (-0.28121*t740 + t1007*t740 + 0.305*t740*t842)*var2[13])*var2[14] + t8356*var3[0] + t15166*var3[1] + t15152*var3[2] + t15865*var3[3] + t15841*var3[4] + t15813*t2666*var3[5] + t15808*var3[12] + t15803*var3[13] - 0.305*var3[14] - 1.*var4[2];
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

#include "ddh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
