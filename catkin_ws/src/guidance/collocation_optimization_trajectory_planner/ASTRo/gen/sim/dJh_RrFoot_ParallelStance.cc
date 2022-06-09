/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:31 GMT+02:00
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
  double t4376;
  double t8458;
  double t12462;
  double t12616;
  double t12682;
  double t12687;
  double t12696;
  double t12708;
  double t3417;
  double t4078;
  double t12715;
  double t12742;
  double t12706;
  double t12723;
  double t12724;
  double t1965;
  double t12743;
  double t12744;
  double t12749;
  double t12750;
  double t12755;
  double t12756;
  double t12759;
  double t12904;
  double t12917;
  double t12918;
  double t12925;
  double t12952;
  double t12956;
  double t12957;
  double t12985;
  double t12994;
  double t12999;
  double t13017;
  double t13019;
  double t13021;
  double t13024;
  double t13033;
  double t13035;
  double t13036;
  double t13042;
  double t13043;
  double t13044;
  double t13046;
  double t13047;
  double t13064;
  double t13068;
  double t13078;
  double t13092;
  double t13122;
  double t13123;
  double t13124;
  double t13133;
  double t13195;
  double t13196;
  double t13200;
  double t13204;
  double t13206;
  double t13207;
  double t13208;
  double t13209;
  double t13210;
  double t13091;
  double t13179;
  double t13192;
  double t13193;
  double t13211;
  double t13215;
  double t13216;
  double t13217;
  double t13218;
  double t13223;
  double t13225;
  double t13229;
  double t13230;
  double t13249;
  double t13250;
  double t13251;
  double t13194;
  double t13235;
  double t13241;
  double t13269;
  double t13270;
  double t13273;
  double t13088;
  double t13089;
  double t13090;
  double t13263;
  double t13264;
  double t13265;
  double t13292;
  double t13297;
  double t13299;
  double t13322;
  double t13323;
  double t13326;
  double t13514;
  double t13516;
  double t13519;
  double t13266;
  double t13586;
  double t13603;
  double t13604;
  double t13305;
  double t13652;
  double t13653;
  double t13664;
  double t13268;
  double t13274;
  double t13275;
  double t13606;
  double t13632;
  double t13614;
  double t13619;
  double t13622;
  double t13651;
  double t13670;
  double t13306;
  double t13307;
  double t13309;
  double t13358;
  double t13404;
  double t13774;
  double t13776;
  double t13799;
  double t13801;
  double t13359;
  double t13360;
  double t13361;
  double t13406;
  double t13408;
  double t13409;
  double t13451;
  double t13473;
  double t13453;
  double t13454;
  double t13457;
  double t13689;
  double t13698;
  double t13866;
  double t13868;
  double t13872;
  double t13874;
  double t13474;
  double t13475;
  double t13476;
  double t13525;
  double t13526;
  double t13531;
  double t13544;
  double t13554;
  double t13555;
  double t13556;
  double t13560;
  double t13564;
  double t13574;
  double t13584;
  double t13585;
  double t13918;
  double t13921;
  double t13922;
  double t13915;
  double t13916;
  double t13630;
  double t13927;
  double t13932;
  double t13938;
  double t13945;
  double t13949;
  double t13953;
  double t13669;
  double t13675;
  double t13676;
  double t13680;
  double t13681;
  double t13688;
  double t13954;
  double t13712;
  double t13714;
  double t13958;
  double t13724;
  double t13726;
  double t13733;
  double t13756;
  double t13761;
  double t13762;
  double t13763;
  double t13764;
  double t13767;
  double t13768;
  double t13769;
  double t13770;
  double t13775;
  double t13781;
  double t13790;
  double t13794;
  double t13796;
  double t13800;
  double t13810;
  double t13811;
  double t13813;
  double t13814;
  double t14064;
  double t13823;
  double t13826;
  double t14071;
  double t13836;
  double t13837;
  double t13847;
  double t13848;
  double t13852;
  double t13853;
  double t13854;
  double t13856;
  double t13857;
  double t13858;
  double t13859;
  double t13860;
  double t13861;
  double t13862;
  double t13863;
  double t13864;
  double t13867;
  double t13873;
  double t13877;
  double t13878;
  double t13880;
  double t13882;
  double t13891;
  double t14173;
  double t13894;
  double t13896;
  double t14186;
  double t13904;
  double t13905;
  double t13909;
  double t14237;
  double t14239;
  double t14240;
  double t14262;
  double t14263;
  double t14266;
  double t14274;
  double t14292;
  double t14299;
  double t14393;
  double t14427;
  double t14442;
  double t14484;
  double t14485;
  double t14487;
  double t14488;
  double t14489;
  double t14491;
  double t14492;
  double t14494;
  double t14496;
  double t14497;
  double t14493;
  double t14504;
  double t14507;
  double t14510;
  double t14541;
  double t14546;
  double t14559;
  double t14633;
  double t14635;
  double t14636;
  double t14659;
  double t14663;
  double t14685;
  double t14688;
  double t14679;
  double t14711;
  double t14713;
  double t14261;
  double t14267;
  double t14269;
  double t14719;
  double t12937;
  double t12942;
  double t12948;
  double t14807;
  double t14854;
  double t14860;
  double t14250;
  double t14251;
  double t14252;
  double t14253;
  double t14254;
  double t14257;
  double t14258;
  double t13056;
  double t13057;
  double t13058;
  double t14924;
  double t14925;
  double t14926;
  double t14927;
  double t14928;
  double t14930;
  double t14931;
  double t14932;
  double t14936;
  double t14937;
  double t14938;
  double t14929;
  double t14942;
  double t14943;
  double t14944;
  double t14961;
  double t14967;
  double t14972;
  double t14955;
  double t14960;
  double t15039;
  double t15040;
  double t15041;
  double t15102;
  double t15104;
  double t15109;
  double t15116;
  double t15117;
  double t15118;
  double t14656;
  double t14657;
  double t14673;
  double t14674;
  double t14695;
  double t14696;
  double t14697;
  double t15136;
  double t14705;
  double t14706;
  double t14707;
  double t15144;
  double t15146;
  double t15203;
  double t15208;
  double t15210;
  double t15123;
  double t15124;
  double t15125;
  double t14778;
  double t14784;
  double t14788;
  double t15427;
  double t15442;
  t4376 = Cos(var1[16]);
  t8458 = Cos(var1[17]);
  t12462 = -1.*t4376*t8458;
  t12616 = Sin(var1[16]);
  t12682 = Sin(var1[17]);
  t12687 = -1.*t12616*t12682;
  t12696 = t12462 + t12687;
  t12708 = Cos(var1[15]);
  t3417 = Cos(var1[5]);
  t4078 = Sin(var1[15]);
  t12715 = Sin(var1[5]);
  t12742 = Cos(var1[3]);
  t12706 = t3417*t4078*t12696;
  t12723 = t12708*t12696*t12715;
  t12724 = t12706 + t12723;
  t1965 = Sin(var1[3]);
  t12743 = Cos(var1[4]);
  t12744 = -1.*t8458*t12616;
  t12749 = t4376*t12682;
  t12750 = t12744 + t12749;
  t12755 = t12743*t12750;
  t12756 = Sin(var1[4]);
  t12759 = t12708*t3417*t12696;
  t12904 = -1.*t4078*t12696*t12715;
  t12917 = t12759 + t12904;
  t12918 = -1.*t12756*t12917;
  t12925 = t12755 + t12918;
  t12952 = t3417*t4078;
  t12956 = t12708*t12715;
  t12957 = t12952 + t12956;
  t12985 = -1.*t12708*t3417;
  t12994 = t4078*t12715;
  t12999 = t12985 + t12994;
  t13017 = t3417*t4078*t12750;
  t13019 = t12708*t12750*t12715;
  t13021 = t13017 + t13019;
  t13024 = t4376*t8458;
  t13033 = t12616*t12682;
  t13035 = t13024 + t13033;
  t13036 = t12743*t13035;
  t13042 = t12708*t3417*t12750;
  t13043 = -1.*t4078*t12750*t12715;
  t13044 = t13042 + t13043;
  t13046 = -1.*t12756*t13044;
  t13047 = t13036 + t13046;
  t13064 = -1.*t12750*t12756;
  t13068 = -1.*t12743*t12917;
  t13078 = t13064 + t13068;
  t13092 = -1.*t8458;
  t13122 = 1. + t13092;
  t13123 = -0.50321*t13122;
  t13124 = -0.19821*t8458;
  t13133 = t13123 + t13124;
  t13195 = -1.*t12708;
  t13196 = 1. + t13195;
  t13200 = -0.15121*t13196;
  t13204 = -1.*t4376;
  t13206 = 1. + t13204;
  t13207 = -0.28121*t13206;
  t13208 = t4376*t13133;
  t13209 = 0.305*t12616*t12682;
  t13210 = t13207 + t13208 + t13209;
  t13091 = 0.28121*t12616;
  t13179 = t13133*t12616;
  t13192 = -0.305*t4376*t12682;
  t13193 = t13091 + t13179 + t13192;
  t13211 = t12708*t13210;
  t13215 = t13200 + t13211;
  t13216 = t3417*t13215;
  t13217 = -0.15121*t12708;
  t13218 = 0.15121*t4078;
  t13223 = t4078*t13210;
  t13225 = t13200 + t13217 + t13218 + t13223;
  t13229 = -1.*t13225*t12715;
  t13230 = t13216 + t13229;
  t13249 = t13193*t12756;
  t13250 = t12743*t13230;
  t13251 = t13249 + t13250;
  t13194 = -1.*t13193*t12756;
  t13235 = -1.*t12743*t13230;
  t13241 = t13194 + t13235;
  t13269 = t12743*t13193;
  t13270 = -1.*t12756*t13230;
  t13273 = t13269 + t13270;
  t13088 = t13035*t12756;
  t13089 = t12743*t13044;
  t13090 = t13088 + t13089;
  t13263 = t3417*t13225;
  t13264 = t13215*t12715;
  t13265 = t13263 + t13264;
  t13292 = -1.*t13035*t12756;
  t13297 = -1.*t12743*t13044;
  t13299 = t13292 + t13297;
  t13322 = t12750*t12756;
  t13323 = t12743*t12917;
  t13326 = t13322 + t13323;
  t13514 = -1.*t3417*t4078*t12696;
  t13516 = -1.*t12708*t12696*t12715;
  t13519 = t13514 + t13516;
  t13266 = -1.*t12999*t13265;
  t13586 = -1.*t3417*t13225;
  t13603 = -1.*t13215*t12715;
  t13604 = t13586 + t13603;
  t13305 = t13021*t13265;
  t13652 = -1.*t3417*t4078*t12750;
  t13653 = -1.*t12708*t12750*t12715;
  t13664 = t13652 + t13653;
  t13268 = -1.*t12743*t12957*t13251;
  t13274 = t12756*t12957*t13273;
  t13275 = t13266 + t13268 + t13274;
  t13606 = -1.*t12957*t13265;
  t13632 = -1.*t12999*t13230;
  t13614 = t12708*t3417;
  t13619 = -1.*t4078*t12715;
  t13622 = t13614 + t13619;
  t13651 = t13044*t13265;
  t13670 = t13021*t13230;
  t13306 = t13090*t13251;
  t13307 = t13047*t13273;
  t13309 = t13305 + t13306 + t13307;
  t13358 = -1.*t13021*t13265;
  t13404 = t12724*t13265;
  t13774 = -1.*t13044*t13265;
  t13776 = -1.*t13021*t13230;
  t13799 = t12917*t13265;
  t13801 = t12724*t13230;
  t13359 = -1.*t13090*t13251;
  t13360 = -1.*t13047*t13273;
  t13361 = t13358 + t13359 + t13360;
  t13406 = t13326*t13251;
  t13408 = t12925*t13273;
  t13409 = t13404 + t13406 + t13408;
  t13451 = t12999*t13265;
  t13473 = -1.*t12724*t13265;
  t13453 = t12743*t12957*t13251;
  t13454 = -1.*t12756*t12957*t13273;
  t13457 = t13451 + t13453 + t13454;
  t13689 = Power(t12743,2);
  t13698 = Power(t12756,2);
  t13866 = t12957*t13265;
  t13868 = t12999*t13230;
  t13872 = -1.*t12917*t13265;
  t13874 = -1.*t12724*t13230;
  t13474 = -1.*t13326*t13251;
  t13475 = -1.*t12925*t13273;
  t13476 = t13473 + t13474 + t13475;
  t13525 = var2[0]*t12743*t13519;
  t13526 = t1965*t12756*t13519;
  t13531 = t12742*t12917;
  t13544 = t13526 + t13531;
  t13554 = var2[1]*t13544;
  t13555 = -1.*t12742*t12756*t13519;
  t13556 = t1965*t12917;
  t13560 = t13555 + t13556;
  t13564 = var2[2]*t13560;
  t13574 = -1.*t12957*t13230;
  t13584 = t13266 + t13574;
  t13585 = t13044*t13584;
  t13918 = -0.15121*t4078;
  t13921 = -1.*t4078*t13210;
  t13922 = t13918 + t13921;
  t13915 = 0.15121*t12708;
  t13916 = t13915 + t13211;
  t13630 = -1.*t13622*t13230;
  t13927 = t3417*t13922;
  t13932 = -1.*t13916*t12715;
  t13938 = t13927 + t13932;
  t13945 = t3417*t13916;
  t13949 = t13922*t12715;
  t13953 = t13945 + t13949;
  t13669 = t13664*t13230;
  t13675 = t13193*t13035;
  t13676 = t13044*t13230;
  t13680 = t13675 + t13305 + t13676;
  t13681 = t12957*t13680;
  t13688 = t12743*t13664*t13275;
  t13954 = -1.*t12999*t13953;
  t13712 = -1.*t12743*t13622*t13251;
  t13714 = t12756*t13622*t13273;
  t13958 = t13021*t13953;
  t13724 = t12743*t13664*t13251;
  t13726 = -1.*t12756*t13664*t13273;
  t13733 = t12743*t13622*t13309;
  t13756 = var2[0]*t12743*t13622;
  t13761 = t1965*t12957;
  t13762 = -1.*t12742*t12756*t13622;
  t13763 = t13761 + t13762;
  t13764 = var2[2]*t13763;
  t13767 = t12742*t12957;
  t13768 = t1965*t12756*t13622;
  t13769 = t13767 + t13768;
  t13770 = var2[1]*t13769;
  t13775 = -1.*t13664*t13230;
  t13781 = -1.*t13193*t13035;
  t13790 = -1.*t13044*t13230;
  t13794 = t13781 + t13358 + t13790;
  t13796 = t12917*t13794;
  t13800 = t13519*t13230;
  t13810 = t13193*t12750;
  t13811 = t12917*t13230;
  t13813 = t13810 + t13404 + t13811;
  t13814 = t13044*t13813;
  t14064 = -1.*t13021*t13953;
  t13823 = -1.*t12743*t13664*t13251;
  t13826 = t12756*t13664*t13273;
  t14071 = t12724*t13953;
  t13836 = t12743*t13519*t13251;
  t13837 = -1.*t12756*t13519*t13273;
  t13847 = t12743*t13519*t13361;
  t13848 = t12743*t13664*t13409;
  t13852 = var2[0]*t12743*t13664;
  t13853 = t1965*t12756*t13664;
  t13854 = t12742*t13044;
  t13856 = t13853 + t13854;
  t13857 = var2[1]*t13856;
  t13858 = -1.*t12742*t12756*t13664;
  t13859 = t1965*t13044;
  t13860 = t13858 + t13859;
  t13861 = var2[2]*t13860;
  t13862 = t12957*t13230;
  t13863 = t13451 + t13862;
  t13864 = t12917*t13863;
  t13867 = t13622*t13230;
  t13873 = -1.*t13519*t13230;
  t13877 = -1.*t13193*t12750;
  t13878 = -1.*t12917*t13230;
  t13880 = t13877 + t13473 + t13878;
  t13882 = t12957*t13880;
  t13891 = t12743*t13519*t13457;
  t14173 = t12999*t13953;
  t13894 = t12743*t13622*t13251;
  t13896 = -1.*t12756*t13622*t13273;
  t14186 = -1.*t12724*t13953;
  t13904 = -1.*t12743*t13519*t13251;
  t13905 = t12756*t13519*t13273;
  t13909 = t12743*t13622*t13476;
  t14237 = t8458*t12616;
  t14239 = -1.*t4376*t12682;
  t14240 = t14237 + t14239;
  t14262 = t12708*t3417*t14240;
  t14263 = -1.*t4078*t14240*t12715;
  t14266 = t14262 + t14263;
  t14274 = t3417*t4078*t14240;
  t14292 = t12708*t14240*t12715;
  t14299 = t14274 + t14292;
  t14393 = t12743*t12696;
  t14427 = -1.*t12756*t14266;
  t14442 = t14393 + t14427;
  t14484 = -0.28121*t12616;
  t14485 = -1.*t13133*t12616;
  t14487 = 0.305*t4376*t12682;
  t14488 = t14484 + t14485 + t14487;
  t14489 = t3417*t4078*t14488;
  t14491 = t12708*t14488*t12715;
  t14492 = t14489 + t14491;
  t14494 = t12708*t3417*t14488;
  t14496 = -1.*t4078*t14488*t12715;
  t14497 = t14494 + t14496;
  t14493 = -1.*t12999*t14492;
  t14504 = 0.28121*t4376;
  t14507 = t14504 + t13208 + t13209;
  t14510 = t14492*t13021;
  t14541 = t14507*t12756;
  t14546 = t12743*t14497;
  t14559 = t14541 + t14546;
  t14633 = t12743*t14507;
  t14635 = -1.*t12756*t14497;
  t14636 = t14633 + t14635;
  t14659 = t13193*t12696;
  t14663 = t12750*t14507;
  t14685 = Power(t12708,2);
  t14688 = Power(t4078,2);
  t14679 = -1.*t14507*t13035;
  t14711 = t14492*t12724;
  t14713 = t14299*t13265;
  t14261 = t12696*t12756;
  t14267 = t12743*t14266;
  t14269 = t14261 + t14267;
  t14719 = -1.*t14492*t13021;
  t12937 = t12742*t12724;
  t12942 = -1.*t1965*t12925;
  t12948 = t12937 + t12942;
  t14807 = t12999*t14492;
  t14854 = -1.*t14492*t12724;
  t14860 = -1.*t14299*t13265;
  t14250 = -0.15121*t14240;
  t14251 = -0.15121*t12750;
  t14252 = t14250 + t14251;
  t14253 = var2[15]*t14252;
  t14254 = -1.*t4078*t13215;
  t14257 = t12708*t13225;
  t14258 = t14254 + t14257;
  t13056 = t12742*t13021;
  t13057 = -1.*t1965*t13047;
  t13058 = t13056 + t13057;
  t14924 = 0.305*t8458*t12616;
  t14925 = t14924 + t13192;
  t14926 = t3417*t4078*t14925;
  t14927 = t12708*t14925*t12715;
  t14928 = t14926 + t14927;
  t14930 = t12708*t3417*t14925;
  t14931 = -1.*t4078*t14925*t12715;
  t14932 = t14930 + t14931;
  t14936 = t3417*t4078*t13035;
  t14937 = t12708*t13035*t12715;
  t14938 = t14936 + t14937;
  t14929 = -1.*t12999*t14928;
  t14942 = -0.305*t4376*t8458;
  t14943 = -0.305*t12616*t12682;
  t14944 = t14942 + t14943;
  t14961 = t12708*t3417*t13035;
  t14967 = -1.*t4078*t13035*t12715;
  t14972 = t14961 + t14967;
  t14955 = t14928*t13021;
  t14960 = t14938*t13265;
  t15039 = t14944*t12756;
  t15040 = t12743*t14932;
  t15041 = t15039 + t15040;
  t15102 = t12743*t14944;
  t15104 = -1.*t12756*t14932;
  t15109 = t15102 + t15104;
  t15116 = t14240*t12756;
  t15117 = t12743*t14972;
  t15118 = t15116 + t15117;
  t14656 = t12696*t13210;
  t14657 = t13810 + t14656;
  t14673 = -1.*t12750*t13210;
  t14674 = t14673 + t13781;
  t14695 = -1.*t12708*t12750*t13215;
  t14696 = -1.*t4078*t12750*t13225;
  t14697 = t13781 + t14695 + t14696;
  t15136 = t12750*t14944;
  t14705 = t12708*t12696*t13215;
  t14706 = t4078*t12696*t13225;
  t14707 = t13810 + t14705 + t14706;
  t15144 = -1.*t14240*t13193;
  t15146 = -1.*t14944*t13035;
  t15203 = t14928*t12724;
  t15208 = -1.*t14928*t13021;
  t15210 = -1.*t14938*t13265;
  t15123 = t12743*t14240;
  t15124 = -1.*t12756*t14972;
  t15125 = t15123 + t15124;
  t14778 = t4078*t13215;
  t14784 = -1.*t12708*t13225;
  t14788 = t14778 + t14784;
  t15427 = t12999*t14928;
  t15442 = -1.*t14928*t12724;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t12742*t12925 - 1.*t12724*t1965)*var2[1] + t12948*var2[2];
  p_output1[10]=(t12742*t12756*t12957 - 1.*t12999*t1965)*var2[1] + (t12742*t12999 + t12756*t12957*t1965)*var2[2];
  p_output1[11]=(-1.*t12742*t13047 - 1.*t13021*t1965)*var2[1] + t13058*var2[2];
  p_output1[12]=t12925*var2[0] - 1.*t13078*t1965*var2[1] + t12742*t13078*var2[2] + (t13090*(t12756*t12957*t13241 + t12756*t12957*t13251) + t13047*t13275 + t12743*t12957*(t13047*t13241 + t13047*t13251 + t13090*t13273 + t13273*t13299) - 1.*t12756*t12957*t13309)*var2[3];
  p_output1[13]=-1.*t12756*t12957*var2[0] + t12743*t12957*t1965*var2[1] - 1.*t12742*t12743*t12957*var2[2] + ((-1.*t13047*t13241 - 1.*t13047*t13251 - 1.*t13090*t13273 - 1.*t13273*t13299)*t13326 + t13090*(t12925*t13241 + t12925*t13251 + t13078*t13273 + t13273*t13326) + t12925*t13361 + t13047*t13409)*var2[3];
  p_output1[14]=t13047*var2[0] - 1.*t13299*t1965*var2[1] + t12742*t13299*var2[2] + ((-1.*t12756*t12957*t13241 - 1.*t12756*t12957*t13251)*t13326 + t12743*t12957*(-1.*t12925*t13241 - 1.*t12925*t13251 - 1.*t13078*t13273 - 1.*t13273*t13326) + t12925*t13457 - 1.*t12756*t12957*t13476)*var2[3];
  p_output1[15]=t13525 + t13554 + t13564 + (t13688 + t13090*(t13606 + t13632 - 1.*t12957*t13604*t13689 - 1.*t12957*t13604*t13698 + t13712 + t13714) + t12743*t12957*(-1.*t12756*t13047*t13604 + t12743*t13090*t13604 + t13651 + t13670 + t13724 + t13726) + t13733)*var2[3] + (t13585 + t13021*(-1.*t12957*t13604 + t13606 + t13630 + t13632) + t12999*(t13044*t13604 + t13651 + t13669 + t13670) + t13681)*var2[4];
  p_output1[16]=t13756 + t13764 + t13770 + (t13326*(t12756*t13047*t13604 - 1.*t12743*t13090*t13604 + t13774 + t13776 + t13823 + t13826) + t13090*(-1.*t12756*t12925*t13604 + t12743*t13326*t13604 + t13799 + t13801 + t13836 + t13837) + t13847 + t13848)*var2[3] + (t12724*(-1.*t13044*t13604 + t13774 + t13775 + t13776) + t13796 + t13021*(t12917*t13604 + t13799 + t13800 + t13801) + t13814)*var2[4];
  p_output1[17]=t13852 + t13857 + t13861 + (t13891 + t13326*(t12957*t13604*t13689 + t12957*t13604*t13698 + t13866 + t13868 + t13894 + t13896) + t12743*t12957*(t12756*t12925*t13604 - 1.*t12743*t13326*t13604 + t13872 + t13874 + t13904 + t13905) + t13909)*var2[3] + (t13864 + t12724*(t12957*t13604 + t13866 + t13867 + t13868) + t12999*(-1.*t12917*t13604 + t13872 + t13873 + t13874) + t13882)*var2[4];
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
  p_output1[45]=t13525 + t13554 + t13564 + (t13688 + t13733 + t13090*(t13606 + t13712 + t13714 - 1.*t12957*t13689*t13938 - 1.*t12957*t13698*t13938 + t13954) + t12743*t12957*(t13651 + t13724 + t13726 - 1.*t12756*t13047*t13938 + t12743*t13090*t13938 + t13958))*var2[3] + (t13585 + t13681 + t13021*(t13606 + t13630 - 1.*t12957*t13938 + t13954) + t12999*(t13651 + t13669 + t13044*t13938 + t13958))*var2[4] + t13035*(-1.*t12708*t13215 + t12708*t13916 - 1.*t13225*t4078 - 1.*t13922*t4078)*var2[5];
  p_output1[46]=t13756 + t13764 + t13770 + (t13847 + t13848 + t13326*(t13774 + t13823 + t13826 + t12756*t13047*t13938 - 1.*t12743*t13090*t13938 + t14064) + t13090*(t13799 + t13836 + t13837 - 1.*t12756*t12925*t13938 + t12743*t13326*t13938 + t14071))*var2[3] + (t13796 + t13814 + t12724*(t13774 + t13775 - 1.*t13044*t13938 + t14064) + t13021*(t13799 + t13800 + t12917*t13938 + t14071))*var2[4] + (t13035*(t12696*t12708*t13225 + t12696*t12708*t13922 - 1.*t12696*t13215*t4078 + t12696*t13916*t4078) + t12750*(-1.*t12708*t12750*t13225 - 1.*t12708*t12750*t13922 + t12750*t13215*t4078 - 1.*t12750*t13916*t4078))*var2[5];
  p_output1[47]=t13852 + t13857 + t13861 + (t13891 + t13909 + t13326*(t13866 + t13894 + t13896 + t12957*t13689*t13938 + t12957*t13698*t13938 + t14173) + t12743*t12957*(t13872 + t13904 + t13905 + t12756*t12925*t13938 - 1.*t12743*t13326*t13938 + t14186))*var2[3] + (t13864 + t13882 + t12724*(t13866 + t13867 + t12957*t13938 + t14173) + t12999*(t13872 + t13873 - 1.*t12917*t13938 + t14186))*var2[4] + t12750*(t12708*t13215 - 1.*t12708*t13916 + t13225*t4078 + t13922*t4078)*var2[5];
  p_output1[48]=t14253 + t14269*var2[0] + (t12742*t14299 - 1.*t14442*t1965)*var2[1] + (t12742*t14442 + t14299*t1965)*var2[2] + (t13275*t13326 + t13090*(t14493 - 1.*t12743*t12957*t14559 + t12756*t12957*t14636) + t12743*t12957*(t13404 + t13406 + t13408 + t14510 + t13090*t14559 + t13047*t14636))*var2[3] + (t12724*t13584 + t13021*(t14493 - 1.*t12957*t14497) + t12999*(t13404 + t13810 + t13811 + t13044*t14497 + t13035*t14507 + t14510))*var2[4] + t12750*t14258*var2[5];
  p_output1[49]=(t13326*t13409 + t13361*t14269 + t13090*(t13251*t14269 + t13273*t14442 + t13326*t14559 + t12925*t14636 + t14711 + t14713) + t13326*(t13473 + t13474 + t13475 - 1.*t13090*t14559 - 1.*t13047*t14636 + t14719))*var2[3] + (t12724*t13813 + t13794*t14299 + t13021*(t13230*t14266 + t12917*t14497 + t14659 + t14663 + t14711 + t14713) + t12724*(t13473 + t13877 + t13878 - 1.*t13044*t14497 + t14679 + t14719))*var2[4] + (t12696*t14697 + t12750*t14707 + t12750*(-1.*t12696*t12708*t13215 + t13877 + t14679 - 1.*t12750*t14488*t14685 - 1.*t12750*t14488*t14688 - 1.*t12696*t13225*t4078) + t13035*(t12708*t13215*t14240 + t14659 + t14663 + t12696*t14488*t14685 + t12696*t14488*t14688 + t13225*t14240*t4078))*var2[5] + (t12750*t14657 + t13035*(t13210*t14240 + t12696*t14488 + t14659 + t14663) + t12696*t14674 + t12750*(-1.*t12696*t13210 + t13877 - 1.*t12750*t14488 + t14679))*var2[15];
  p_output1[50]=t13326*var2[0] + t12948*var2[1] + (t12742*t12925 + t12724*t1965)*var2[2] + (t13457*t14269 + t13326*(t12743*t12957*t14559 - 1.*t12756*t12957*t14636 + t14807) + t12743*t12957*(-1.*t13251*t14269 - 1.*t13273*t14442 - 1.*t13326*t14559 - 1.*t12925*t14636 + t14854 + t14860))*var2[3] + (t13863*t14299 + t12724*(t12957*t14497 + t14807) + t12999*(-1.*t12696*t13193 - 1.*t13230*t14266 - 1.*t12917*t14497 - 1.*t12750*t14507 + t14854 + t14860))*var2[4] + t12696*t14788*var2[5];
  p_output1[51]=t14253 + t13090*var2[0] + t13058*var2[1] + (t12742*t13047 + t13021*t1965)*var2[2] + (t13090*(t14929 - 1.*t12743*t12957*t15041 + t12756*t12957*t15109) + t13275*t15118 + t12743*t12957*(t14955 + t14960 + t13090*t15041 + t13047*t15109 + t13251*t15118 + t13273*t15125))*var2[3] + (t13021*(t14929 - 1.*t12957*t14932) + t13584*t14938 + t12999*(t13193*t14240 + t13044*t14932 + t13035*t14944 + t14955 + t14960 + t13230*t14972))*var2[4] + t14240*t14258*var2[5] + (0.28121*t8458 + t13133*t8458 - 0.305*Power(t8458,2))*var2[16];
  p_output1[52]=(t13090*t13361 + t13409*t15118 + t13090*(t13305 + t13306 + t13307 + t13326*t15041 + t12925*t15109 + t15203) + t13326*(-1.*t13090*t15041 - 1.*t13047*t15109 - 1.*t13251*t15118 - 1.*t13273*t15125 + t15208 + t15210))*var2[3] + (t13021*t13794 + t13813*t14938 + t13021*(t13305 + t13675 + t13676 + t12917*t14932 + t15136 + t15203) + t12724*(-1.*t13044*t14932 - 1.*t13230*t14972 + t15144 + t15146 + t15208 + t15210))*var2[4] + (t13035*t14697 + t14240*t14707 + t13035*(t12708*t12750*t13215 + t13675 + t12696*t14685*t14925 + t12696*t14688*t14925 + t15136 + t12750*t13225*t4078) + t12750*(-1.*t12708*t13035*t13215 - 1.*t12750*t14685*t14925 - 1.*t12750*t14688*t14925 + t15144 + t15146 - 1.*t13035*t13225*t4078))*var2[5] + (t14240*t14657 + t13035*t14674 + t13035*(t12750*t13210 + t13675 + t12696*t14925 + t15136) + t12750*(-1.*t13035*t13210 - 1.*t12750*t14925 + t15144 + t15146))*var2[15];
  p_output1[53]=t15118*var2[0] + (t12742*t14938 - 1.*t15125*t1965)*var2[1] + (t12742*t15125 + t14938*t1965)*var2[2] + (t13090*t13457 + t13326*(t12743*t12957*t15041 - 1.*t12756*t12957*t15109 + t15427) + t12743*t12957*(t13358 + t13359 + t13360 - 1.*t13326*t15041 - 1.*t12925*t15109 + t15442))*var2[3] + (t13021*t13863 + t12724*(t12957*t14932 + t15427) + t12999*(t13358 + t13781 + t13790 - 1.*t12917*t14932 - 1.*t12750*t14944 + t15442))*var2[4] + t13035*t14788*var2[5] + (-0.28121*t12682 - 1.*t12682*t13133 + 0.305*t12682*t8458)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
