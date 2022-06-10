/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:31 GMT+02:00
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
  double t3388;
  double t8106;
  double t11165;
  double t15261;
  double t15386;
  double t15403;
  double t15422;
  double t15430;
  double t990;
  double t3127;
  double t15438;
  double t15469;
  double t15423;
  double t15450;
  double t15460;
  double t81;
  double t15470;
  double t15474;
  double t15477;
  double t15479;
  double t15480;
  double t15498;
  double t15501;
  double t15503;
  double t15667;
  double t15693;
  double t15694;
  double t15736;
  double t15739;
  double t15743;
  double t15756;
  double t15758;
  double t15777;
  double t15842;
  double t15843;
  double t15848;
  double t15855;
  double t15868;
  double t15870;
  double t15875;
  double t15879;
  double t15880;
  double t15896;
  double t15900;
  double t15911;
  double t15972;
  double t15975;
  double t15976;
  double t16044;
  double t16045;
  double t16046;
  double t16052;
  double t16055;
  double t16076;
  double t16077;
  double t16079;
  double t16082;
  double t16094;
  double t16095;
  double t16099;
  double t16102;
  double t16110;
  double t16036;
  double t16058;
  double t16060;
  double t16071;
  double t16118;
  double t16125;
  double t16129;
  double t16152;
  double t16184;
  double t16187;
  double t16190;
  double t16191;
  double t16194;
  double t16201;
  double t16205;
  double t16208;
  double t16074;
  double t16195;
  double t16198;
  double t16250;
  double t16251;
  double t16252;
  double t15999;
  double t16002;
  double t16021;
  double t16222;
  double t16225;
  double t16226;
  double t16262;
  double t16263;
  double t16265;
  double t16301;
  double t16303;
  double t16305;
  double t16546;
  double t16547;
  double t16553;
  double t16227;
  double t16612;
  double t16613;
  double t16614;
  double t16274;
  double t16644;
  double t16645;
  double t16646;
  double t16233;
  double t16253;
  double t16254;
  double t16618;
  double t16622;
  double t16629;
  double t16630;
  double t16631;
  double t16641;
  double t16651;
  double t16275;
  double t16277;
  double t16279;
  double t16329;
  double t16379;
  double t16823;
  double t16837;
  double t16860;
  double t16862;
  double t16333;
  double t16339;
  double t16343;
  double t16382;
  double t16383;
  double t16384;
  double t16451;
  double t16490;
  double t16454;
  double t16455;
  double t16458;
  double t16684;
  double t16694;
  double t17001;
  double t17008;
  double t17044;
  double t17050;
  double t16496;
  double t16503;
  double t16506;
  double t16565;
  double t16566;
  double t16569;
  double t16581;
  double t16582;
  double t16583;
  double t16591;
  double t16594;
  double t16595;
  double t16599;
  double t16600;
  double t16606;
  double t17215;
  double t17218;
  double t17229;
  double t17230;
  double t17231;
  double t16634;
  double t17253;
  double t17289;
  double t17292;
  double t17301;
  double t17305;
  double t17309;
  double t16649;
  double t16664;
  double t16668;
  double t16674;
  double t16675;
  double t16683;
  double t17315;
  double t16704;
  double t16707;
  double t17353;
  double t16730;
  double t16733;
  double t16741;
  double t16778;
  double t16783;
  double t16787;
  double t16788;
  double t16795;
  double t16798;
  double t16805;
  double t16813;
  double t16818;
  double t16836;
  double t16844;
  double t16848;
  double t16850;
  double t16854;
  double t16861;
  double t16869;
  double t16871;
  double t16877;
  double t16878;
  double t17477;
  double t16888;
  double t16899;
  double t17497;
  double t16914;
  double t16918;
  double t16931;
  double t16935;
  double t16958;
  double t16959;
  double t16972;
  double t16978;
  double t16979;
  double t16981;
  double t16982;
  double t16988;
  double t16990;
  double t16991;
  double t16997;
  double t16998;
  double t17009;
  double t17049;
  double t17069;
  double t17071;
  double t17072;
  double t17074;
  double t17099;
  double t17570;
  double t17124;
  double t17127;
  double t17576;
  double t17143;
  double t17145;
  double t17178;
  double t17631;
  double t17641;
  double t17655;
  double t17663;
  double t17666;
  double t17670;
  double t17691;
  double t17692;
  double t17694;
  double t17706;
  double t17707;
  double t17712;
  double t17739;
  double t17741;
  double t17743;
  double t17747;
  double t17757;
  double t17759;
  double t17746;
  double t17778;
  double t17779;
  double t17780;
  double t17781;
  double t17786;
  double t17797;
  double t17798;
  double t17799;
  double t17803;
  double t17805;
  double t17806;
  double t17830;
  double t17832;
  double t17860;
  double t17862;
  double t17846;
  double t17658;
  double t17677;
  double t17678;
  double t17910;
  double t17912;
  double t17916;
  double t15719;
  double t15722;
  double t15727;
  double t17964;
  double t17980;
  double t17994;
  double t17681;
  double t17682;
  double t17686;
  double t15931;
  double t15955;
  double t15957;
  double t18110;
  double t18112;
  double t18113;
  double t18126;
  double t18138;
  double t18139;
  double t18157;
  double t18162;
  double t18169;
  double t18205;
  double t18253;
  double t18274;
  double t18147;
  double t18300;
  double t18306;
  double t18342;
  double t18344;
  double t18346;
  double t18319;
  double t18366;
  double t18370;
  double t18374;
  double t18376;
  double t18378;
  double t18381;
  double t18341;
  double t18402;
  double t18404;
  double t18409;
  double t17824;
  double t17827;
  double t17838;
  double t17840;
  double t17843;
  double t17855;
  double t17856;
  double t17858;
  double t18462;
  double t18483;
  double t17887;
  double t17889;
  double t17892;
  double t18553;
  double t18566;
  double t18574;
  double t18421;
  double t18423;
  double t18425;
  double t17941;
  double t17948;
  double t17949;
  double t17950;
  double t17952;
  double t17953;
  double t17956;
  double t18704;
  double t18719;
  t3388 = Cos(var1[7]);
  t8106 = Cos(var1[8]);
  t11165 = t3388*t8106;
  t15261 = Sin(var1[7]);
  t15386 = Sin(var1[8]);
  t15403 = t15261*t15386;
  t15422 = t11165 + t15403;
  t15430 = Cos(var1[5]);
  t990 = Cos(var1[6]);
  t3127 = Sin(var1[5]);
  t15438 = Sin(var1[6]);
  t15469 = Cos(var1[3]);
  t15423 = t990*t3127*t15422;
  t15450 = t15430*t15438*t15422;
  t15460 = t15423 + t15450;
  t81 = Sin(var1[3]);
  t15470 = Cos(var1[4]);
  t15474 = -1.*t8106*t15261;
  t15477 = t3388*t15386;
  t15479 = t15474 + t15477;
  t15480 = t15470*t15479;
  t15498 = Sin(var1[4]);
  t15501 = t15430*t990*t15422;
  t15503 = -1.*t3127*t15438*t15422;
  t15667 = t15501 + t15503;
  t15693 = -1.*t15498*t15667;
  t15694 = t15480 + t15693;
  t15736 = -1.*t990*t3127;
  t15739 = -1.*t15430*t15438;
  t15743 = t15736 + t15739;
  t15756 = t15430*t990;
  t15758 = -1.*t3127*t15438;
  t15777 = t15756 + t15758;
  t15842 = t8106*t15261;
  t15843 = -1.*t3388*t15386;
  t15848 = t15842 + t15843;
  t15855 = t990*t3127*t15848;
  t15868 = t15430*t15438*t15848;
  t15870 = t15855 + t15868;
  t15875 = t15470*t15422;
  t15879 = t15430*t990*t15848;
  t15880 = -1.*t3127*t15438*t15848;
  t15896 = t15879 + t15880;
  t15900 = -1.*t15498*t15896;
  t15911 = t15875 + t15900;
  t15972 = -1.*t15498*t15479;
  t15975 = -1.*t15470*t15667;
  t15976 = t15972 + t15975;
  t16044 = -1.*t8106;
  t16045 = 1. + t16044;
  t16046 = 0.50321*t16045;
  t16052 = 0.19821*t8106;
  t16055 = t16046 + t16052;
  t16076 = -1.*t990;
  t16077 = 1. + t16076;
  t16079 = 0.15121*t16077;
  t16082 = -1.*t3388;
  t16094 = 1. + t16082;
  t16095 = 0.28121*t16094;
  t16099 = t3388*t16055;
  t16102 = -0.305*t15261*t15386;
  t16110 = t16095 + t16099 + t16102;
  t16036 = 0.28121*t15261;
  t16058 = -1.*t16055*t15261;
  t16060 = -0.305*t3388*t15386;
  t16071 = t16036 + t16058 + t16060;
  t16118 = t990*t16110;
  t16125 = t16079 + t16118;
  t16129 = t15430*t16125;
  t16152 = 0.15121*t990;
  t16184 = -0.15121*t15438;
  t16187 = t15438*t16110;
  t16190 = t16079 + t16152 + t16184 + t16187;
  t16191 = -1.*t3127*t16190;
  t16194 = t16129 + t16191;
  t16201 = t15498*t16071;
  t16205 = t15470*t16194;
  t16208 = t16201 + t16205;
  t16074 = -1.*t15498*t16071;
  t16195 = -1.*t15470*t16194;
  t16198 = t16074 + t16195;
  t16250 = t15470*t16071;
  t16251 = -1.*t15498*t16194;
  t16252 = t16250 + t16251;
  t15999 = t15498*t15422;
  t16002 = t15470*t15896;
  t16021 = t15999 + t16002;
  t16222 = t3127*t16125;
  t16225 = t15430*t16190;
  t16226 = t16222 + t16225;
  t16262 = -1.*t15498*t15422;
  t16263 = -1.*t15470*t15896;
  t16265 = t16262 + t16263;
  t16301 = t15498*t15479;
  t16303 = t15470*t15667;
  t16305 = t16301 + t16303;
  t16546 = -1.*t990*t3127*t15422;
  t16547 = -1.*t15430*t15438*t15422;
  t16553 = t16546 + t16547;
  t16227 = -1.*t15777*t16226;
  t16612 = -1.*t3127*t16125;
  t16613 = -1.*t15430*t16190;
  t16614 = t16612 + t16613;
  t16274 = t15870*t16226;
  t16644 = -1.*t990*t3127*t15848;
  t16645 = -1.*t15430*t15438*t15848;
  t16646 = t16644 + t16645;
  t16233 = -1.*t15470*t15743*t16208;
  t16253 = t15498*t15743*t16252;
  t16254 = t16227 + t16233 + t16253;
  t16618 = -1.*t15743*t16226;
  t16622 = -1.*t15777*t16194;
  t16629 = -1.*t15430*t990;
  t16630 = t3127*t15438;
  t16631 = t16629 + t16630;
  t16641 = t15896*t16226;
  t16651 = t15870*t16194;
  t16275 = t16021*t16208;
  t16277 = t15911*t16252;
  t16279 = t16274 + t16275 + t16277;
  t16329 = -1.*t15870*t16226;
  t16379 = t15460*t16226;
  t16823 = -1.*t15896*t16226;
  t16837 = -1.*t15870*t16194;
  t16860 = t15667*t16226;
  t16862 = t15460*t16194;
  t16333 = -1.*t16021*t16208;
  t16339 = -1.*t15911*t16252;
  t16343 = t16329 + t16333 + t16339;
  t16382 = t16305*t16208;
  t16383 = t15694*t16252;
  t16384 = t16379 + t16382 + t16383;
  t16451 = t15777*t16226;
  t16490 = -1.*t15460*t16226;
  t16454 = t15470*t15743*t16208;
  t16455 = -1.*t15498*t15743*t16252;
  t16458 = t16451 + t16454 + t16455;
  t16684 = Power(t15470,2);
  t16694 = Power(t15498,2);
  t17001 = t15743*t16226;
  t17008 = t15777*t16194;
  t17044 = -1.*t15667*t16226;
  t17050 = -1.*t15460*t16194;
  t16496 = -1.*t16305*t16208;
  t16503 = -1.*t15694*t16252;
  t16506 = t16490 + t16496 + t16503;
  t16565 = var2[0]*t15470*t16553;
  t16566 = t81*t15498*t16553;
  t16569 = t15469*t15667;
  t16581 = t16566 + t16569;
  t16582 = var2[1]*t16581;
  t16583 = -1.*t15469*t15498*t16553;
  t16591 = t81*t15667;
  t16594 = t16583 + t16591;
  t16595 = var2[2]*t16594;
  t16599 = -1.*t15743*t16194;
  t16600 = t16227 + t16599;
  t16606 = t15896*t16600;
  t17215 = -0.15121*t990;
  t17218 = t17215 + t16118;
  t17229 = 0.15121*t15438;
  t17230 = -1.*t15438*t16110;
  t17231 = t17229 + t17230;
  t16634 = -1.*t16631*t16194;
  t17253 = -1.*t3127*t17218;
  t17289 = t15430*t17231;
  t17292 = t17253 + t17289;
  t17301 = t15430*t17218;
  t17305 = t3127*t17231;
  t17309 = t17301 + t17305;
  t16649 = t16646*t16194;
  t16664 = t16071*t15422;
  t16668 = t15896*t16194;
  t16674 = t16664 + t16274 + t16668;
  t16675 = t15743*t16674;
  t16683 = t15470*t16646*t16254;
  t17315 = -1.*t15777*t17309;
  t16704 = -1.*t15470*t16631*t16208;
  t16707 = t15498*t16631*t16252;
  t17353 = t15870*t17309;
  t16730 = t15470*t16646*t16208;
  t16733 = -1.*t15498*t16646*t16252;
  t16741 = t15470*t16631*t16279;
  t16778 = var2[0]*t15470*t16631;
  t16783 = t81*t15743;
  t16787 = -1.*t15469*t15498*t16631;
  t16788 = t16783 + t16787;
  t16795 = var2[2]*t16788;
  t16798 = t15469*t15743;
  t16805 = t81*t15498*t16631;
  t16813 = t16798 + t16805;
  t16818 = var2[1]*t16813;
  t16836 = -1.*t16646*t16194;
  t16844 = -1.*t16071*t15422;
  t16848 = -1.*t15896*t16194;
  t16850 = t16844 + t16329 + t16848;
  t16854 = t15667*t16850;
  t16861 = t16553*t16194;
  t16869 = t16071*t15479;
  t16871 = t15667*t16194;
  t16877 = t16869 + t16379 + t16871;
  t16878 = t15896*t16877;
  t17477 = -1.*t15870*t17309;
  t16888 = -1.*t15470*t16646*t16208;
  t16899 = t15498*t16646*t16252;
  t17497 = t15460*t17309;
  t16914 = t15470*t16553*t16208;
  t16918 = -1.*t15498*t16553*t16252;
  t16931 = t15470*t16553*t16343;
  t16935 = t15470*t16646*t16384;
  t16958 = var2[0]*t15470*t16646;
  t16959 = t81*t15498*t16646;
  t16972 = t15469*t15896;
  t16978 = t16959 + t16972;
  t16979 = var2[1]*t16978;
  t16981 = -1.*t15469*t15498*t16646;
  t16982 = t81*t15896;
  t16988 = t16981 + t16982;
  t16990 = var2[2]*t16988;
  t16991 = t15743*t16194;
  t16997 = t16451 + t16991;
  t16998 = t15667*t16997;
  t17009 = t16631*t16194;
  t17049 = -1.*t16553*t16194;
  t17069 = -1.*t16071*t15479;
  t17071 = -1.*t15667*t16194;
  t17072 = t17069 + t16490 + t17071;
  t17074 = t15743*t17072;
  t17099 = t15470*t16553*t16458;
  t17570 = t15777*t17309;
  t17124 = t15470*t16631*t16208;
  t17127 = -1.*t15498*t16631*t16252;
  t17576 = -1.*t15460*t17309;
  t17143 = -1.*t15470*t16553*t16208;
  t17145 = t15498*t16553*t16252;
  t17178 = t15470*t16631*t16506;
  t17631 = -1.*t3388*t8106;
  t17641 = -1.*t15261*t15386;
  t17655 = t17631 + t17641;
  t17663 = t15430*t990*t15479;
  t17666 = -1.*t3127*t15438*t15479;
  t17670 = t17663 + t17666;
  t17691 = t990*t3127*t15479;
  t17692 = t15430*t15438*t15479;
  t17694 = t17691 + t17692;
  t17706 = t15470*t17655;
  t17707 = -1.*t15498*t17670;
  t17712 = t17706 + t17707;
  t17739 = t990*t3127*t16071;
  t17741 = t15430*t15438*t16071;
  t17743 = t17739 + t17741;
  t17747 = t15430*t990*t16071;
  t17757 = -1.*t3127*t15438*t16071;
  t17759 = t17747 + t17757;
  t17746 = -1.*t15777*t17743;
  t17778 = 0.28121*t3388;
  t17779 = -1.*t3388*t16055;
  t17780 = 0.305*t15261*t15386;
  t17781 = t17778 + t17779 + t17780;
  t17786 = t15870*t17743;
  t17797 = t15498*t17781;
  t17798 = t15470*t17759;
  t17799 = t17797 + t17798;
  t17803 = t15470*t17781;
  t17805 = -1.*t15498*t17759;
  t17806 = t17803 + t17805;
  t17830 = t16071*t17655;
  t17832 = t15479*t17781;
  t17860 = Power(t990,2);
  t17862 = Power(t15438,2);
  t17846 = -1.*t17781*t15422;
  t17658 = t15498*t17655;
  t17677 = t15470*t17670;
  t17678 = t17658 + t17677;
  t17910 = t17743*t15460;
  t17912 = t17694*t16226;
  t17916 = -1.*t15870*t17743;
  t15719 = t15469*t15460;
  t15722 = -1.*t81*t15694;
  t15727 = t15719 + t15722;
  t17964 = t15777*t17743;
  t17980 = -1.*t17743*t15460;
  t17994 = -1.*t17694*t16226;
  t17681 = t15438*t16125;
  t17682 = -1.*t990*t16190;
  t17686 = t17681 + t17682;
  t15931 = t15469*t15870;
  t15955 = -1.*t81*t15911;
  t15957 = t15931 + t15955;
  t18110 = -0.305*t8106*t15261;
  t18112 = 0.305*t3388*t15386;
  t18113 = t18110 + t18112;
  t18126 = t990*t3127*t18113;
  t18138 = t15430*t15438*t18113;
  t18139 = t18126 + t18138;
  t18157 = t15430*t990*t18113;
  t18162 = -1.*t3127*t15438*t18113;
  t18169 = t18157 + t18162;
  t18205 = t990*t3127*t17655;
  t18253 = t15430*t15438*t17655;
  t18274 = t18205 + t18253;
  t18147 = -1.*t15777*t18139;
  t18300 = -0.305*t3388*t8106;
  t18306 = t18300 + t16102;
  t18342 = t15430*t990*t17655;
  t18344 = -1.*t3127*t15438*t17655;
  t18346 = t18342 + t18344;
  t18319 = t15870*t18139;
  t18366 = t15498*t18306;
  t18370 = t15470*t18169;
  t18374 = t18366 + t18370;
  t18376 = t15470*t18306;
  t18378 = -1.*t15498*t18169;
  t18381 = t18376 + t18378;
  t18341 = t18274*t16226;
  t18402 = t15498*t15848;
  t18404 = t15470*t18346;
  t18409 = t18402 + t18404;
  t17824 = -1.*t15848*t16110;
  t17827 = t17824 + t16844;
  t17838 = t16110*t15422;
  t17840 = t16869 + t17838;
  t17843 = -1.*t15848*t16071;
  t17855 = -1.*t990*t15848*t16125;
  t17856 = -1.*t15438*t15848*t16190;
  t17858 = t16844 + t17855 + t17856;
  t18462 = t15479*t18306;
  t18483 = -1.*t18306*t15422;
  t17887 = t990*t15422*t16125;
  t17889 = t15438*t15422*t16190;
  t17892 = t16869 + t17887 + t17889;
  t18553 = t18139*t15460;
  t18566 = -1.*t15870*t18139;
  t18574 = -1.*t18274*t16226;
  t18421 = t15470*t15848;
  t18423 = -1.*t15498*t18346;
  t18425 = t18421 + t18423;
  t17941 = 0.15121*t17655;
  t17948 = 0.15121*t15422;
  t17949 = t17941 + t17948;
  t17950 = var2[6]*t17949;
  t17952 = -1.*t15438*t16125;
  t17953 = t990*t16190;
  t17956 = t17952 + t17953;
  t18704 = t15777*t18139;
  t18719 = -1.*t18139*t15460;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t15469*t15694 - 1.*t15460*t81)*var2[1] + t15727*var2[2];
  p_output1[10]=(t15469*t15498*t15743 - 1.*t15777*t81)*var2[1] + (t15469*t15777 + t15498*t15743*t81)*var2[2];
  p_output1[11]=(-1.*t15469*t15911 - 1.*t15870*t81)*var2[1] + t15957*var2[2];
  p_output1[12]=t15694*var2[0] - 1.*t15976*t81*var2[1] + t15469*t15976*var2[2] + (t16021*(t15498*t15743*t16198 + t15498*t15743*t16208) + t15911*t16254 + t15470*t15743*(t15911*t16198 + t15911*t16208 + t16021*t16252 + t16252*t16265) - 1.*t15498*t15743*t16279)*var2[3];
  p_output1[13]=-1.*t15498*t15743*var2[0] + t15470*t15743*t81*var2[1] - 1.*t15469*t15470*t15743*var2[2] + ((-1.*t15911*t16198 - 1.*t15911*t16208 - 1.*t16021*t16252 - 1.*t16252*t16265)*t16305 + t16021*(t15694*t16198 + t15694*t16208 + t15976*t16252 + t16252*t16305) + t15694*t16343 + t15911*t16384)*var2[3];
  p_output1[14]=t15911*var2[0] - 1.*t16265*t81*var2[1] + t15469*t16265*var2[2] + ((-1.*t15498*t15743*t16198 - 1.*t15498*t15743*t16208)*t16305 + t15470*t15743*(-1.*t15694*t16198 - 1.*t15694*t16208 - 1.*t15976*t16252 - 1.*t16252*t16305) + t15694*t16458 - 1.*t15498*t15743*t16506)*var2[3];
  p_output1[15]=t16565 + t16582 + t16595 + (t16683 + t16021*(t16618 + t16622 - 1.*t15743*t16614*t16684 - 1.*t15743*t16614*t16694 + t16704 + t16707) + t15470*t15743*(-1.*t15498*t15911*t16614 + t15470*t16021*t16614 + t16641 + t16651 + t16730 + t16733) + t16741)*var2[3] + (t16606 + t15870*(-1.*t15743*t16614 + t16618 + t16622 + t16634) + t15777*(t15896*t16614 + t16641 + t16649 + t16651) + t16675)*var2[4];
  p_output1[16]=t16778 + t16795 + t16818 + (t16305*(t15498*t15911*t16614 - 1.*t15470*t16021*t16614 + t16823 + t16837 + t16888 + t16899) + t16021*(-1.*t15498*t15694*t16614 + t15470*t16305*t16614 + t16860 + t16862 + t16914 + t16918) + t16931 + t16935)*var2[3] + (t15460*(-1.*t15896*t16614 + t16823 + t16836 + t16837) + t16854 + t15870*(t15667*t16614 + t16860 + t16861 + t16862) + t16878)*var2[4];
  p_output1[17]=t16958 + t16979 + t16990 + (t17099 + t16305*(t15743*t16614*t16684 + t15743*t16614*t16694 + t17001 + t17008 + t17124 + t17127) + t15470*t15743*(t15498*t15694*t16614 - 1.*t15470*t16305*t16614 + t17044 + t17050 + t17143 + t17145) + t17178)*var2[3] + (t16998 + t15460*(t15743*t16614 + t17001 + t17008 + t17009) + t15777*(-1.*t15667*t16614 + t17044 + t17049 + t17050) + t17074)*var2[4];
  p_output1[18]=t16565 + t16582 + t16595 + (t16683 + t16741 + t16021*(t16618 + t16704 + t16707 - 1.*t15743*t16684*t17292 - 1.*t15743*t16694*t17292 + t17315) + t15470*t15743*(t16641 + t16730 + t16733 - 1.*t15498*t15911*t17292 + t15470*t16021*t17292 + t17353))*var2[3] + (t16606 + t16675 + t15870*(t16618 + t16634 - 1.*t15743*t17292 + t17315) + t15777*(t16641 + t16649 + t15896*t17292 + t17353))*var2[4] + t15422*(t15438*t16190 + t15438*t17231 + t16125*t990 - 1.*t17218*t990)*var2[5];
  p_output1[19]=t16778 + t16795 + t16818 + (t16931 + t16935 + t16305*(t16823 + t16888 + t16899 + t15498*t15911*t17292 - 1.*t15470*t16021*t17292 + t17477) + t16021*(t16860 + t16914 + t16918 - 1.*t15498*t15694*t17292 + t15470*t16305*t17292 + t17497))*var2[3] + (t16854 + t16878 + t15460*(t16823 + t16836 - 1.*t15896*t17292 + t17477) + t15870*(t16860 + t16861 + t15667*t17292 + t17497))*var2[4] + (t15422*(-1.*t15422*t15438*t16125 + t15422*t15438*t17218 + t15422*t16190*t990 + t15422*t17231*t990) + t15479*(t15438*t15848*t16125 - 1.*t15438*t15848*t17218 - 1.*t15848*t16190*t990 - 1.*t15848*t17231*t990))*var2[5];
  p_output1[20]=t16958 + t16979 + t16990 + (t17099 + t17178 + t16305*(t17001 + t17124 + t17127 + t15743*t16684*t17292 + t15743*t16694*t17292 + t17570) + t15470*t15743*(t17044 + t17143 + t17145 + t15498*t15694*t17292 - 1.*t15470*t16305*t17292 + t17576))*var2[3] + (t16998 + t17074 + t15460*(t17001 + t17009 + t15743*t17292 + t17570) + t15777*(t17044 + t17049 - 1.*t15667*t17292 + t17576))*var2[4] + t15479*(-1.*t15438*t16190 - 1.*t15438*t17231 - 1.*t16125*t990 + t17218*t990)*var2[5];
  p_output1[21]=t17678*var2[0] + (t15469*t17694 - 1.*t17712*t81)*var2[1] + (t15469*t17712 + t17694*t81)*var2[2] + (t16254*t16305 + t16021*(t17746 - 1.*t15470*t15743*t17799 + t15498*t15743*t17806) + t15470*t15743*(t16379 + t16382 + t16383 + t17786 + t16021*t17799 + t15911*t17806))*var2[3] + (t15460*t16600 + t15870*(t17746 - 1.*t15743*t17759) + t15777*(t16379 + t16869 + t16871 + t15896*t17759 + t15422*t17781 + t17786))*var2[4] + t15479*t17686*var2[5];
  p_output1[22]=(t16305*t16384 + t16343*t17678 + t16021*(t16208*t17678 + t16252*t17712 + t16305*t17799 + t15694*t17806 + t17910 + t17912) + t16305*(t16490 + t16496 + t16503 - 1.*t16021*t17799 - 1.*t15911*t17806 + t17916))*var2[3] + (t15460*t16877 + t16850*t17694 + t15870*(t16194*t17670 + t15667*t17759 + t17830 + t17832 + t17910 + t17912) + t15460*(t16490 + t17069 + t17071 - 1.*t15896*t17759 + t17846 + t17916))*var2[4] + (t17655*t17858 + t15479*t17892 + t15479*(-1.*t15422*t15438*t16190 + t17069 + t17846 - 1.*t15848*t16071*t17860 - 1.*t15848*t16071*t17862 - 1.*t15422*t16125*t990) + t15422*(t15438*t15479*t16190 + t17830 + t17832 + t15422*t16071*t17860 + t15422*t16071*t17862 + t15479*t16125*t990))*var2[5] + (t17655*t17827 + t15422*(t15479*t16110 + t16664 + t17830 + t17832) + t15479*t17840 + t15479*(-1.*t15422*t16110 + t17069 + t17843 + t17846))*var2[6];
  p_output1[23]=t17950 + t16305*var2[0] + t15727*var2[1] + (t15469*t15694 + t15460*t81)*var2[2] + (t16458*t17678 + t16305*(t15470*t15743*t17799 - 1.*t15498*t15743*t17806 + t17964) + t15470*t15743*(-1.*t16208*t17678 - 1.*t16252*t17712 - 1.*t16305*t17799 - 1.*t15694*t17806 + t17980 + t17994))*var2[3] + (t16997*t17694 + t15460*(t15743*t17759 + t17964) + t15777*(-1.*t16071*t17655 - 1.*t16194*t17670 - 1.*t15667*t17759 - 1.*t15479*t17781 + t17980 + t17994))*var2[4] + t17655*t17956*var2[5];
  p_output1[24]=t16021*var2[0] + t15957*var2[1] + (t15469*t15911 + t15870*t81)*var2[2] + (t16021*(t18147 - 1.*t15470*t15743*t18374 + t15498*t15743*t18381) + t16254*t18409 + t15470*t15743*(t18319 + t18341 + t16021*t18374 + t15911*t18381 + t16208*t18409 + t16252*t18425))*var2[3] + (t15870*(t18147 - 1.*t15743*t18169) + t16600*t18274 + t15777*(t15848*t16071 + t15896*t18169 + t15422*t18306 + t18319 + t18341 + t16194*t18346))*var2[4] + t15848*t17686*var2[5] + (0.28121*t8106 - 1.*t16055*t8106 - 0.305*Power(t8106,2))*var2[7];
  p_output1[25]=(t16021*t16343 + t16384*t18409 + t16021*(t16274 + t16275 + t16277 + t16305*t18374 + t15694*t18381 + t18553) + t16305*(-1.*t16021*t18374 - 1.*t15911*t18381 - 1.*t16208*t18409 - 1.*t16252*t18425 + t18566 + t18574))*var2[3] + (t15870*t16850 + t16877*t18274 + t15870*(t16274 + t16664 + t16668 + t15667*t18169 + t18462 + t18553) + t15460*(t17843 - 1.*t15896*t18169 - 1.*t16194*t18346 + t18483 + t18566 + t18574))*var2[4] + (t15422*t17858 + t15848*t17892 + t15422*(t15438*t15848*t16190 + t16664 + t15422*t17860*t18113 + t15422*t17862*t18113 + t18462 + t15848*t16125*t990) + t15479*(-1.*t15438*t16190*t17655 + t17843 - 1.*t15848*t17860*t18113 - 1.*t15848*t17862*t18113 + t18483 - 1.*t16125*t17655*t990))*var2[5] + (t15422*t17827 + t15848*t17840 + t15422*(t15848*t16110 + t16664 + t15422*t18113 + t18462) + t15479*(-1.*t16110*t17655 + t17843 - 1.*t15848*t18113 + t18483))*var2[6];
  p_output1[26]=t17950 + t18409*var2[0] + (t15469*t18274 - 1.*t18425*t81)*var2[1] + (t15469*t18425 + t18274*t81)*var2[2] + (t16021*t16458 + t16305*(t15470*t15743*t18374 - 1.*t15498*t15743*t18381 + t18704) + t15470*t15743*(t16329 + t16333 + t16339 - 1.*t16305*t18374 - 1.*t15694*t18381 + t18719))*var2[3] + (t15870*t16997 + t15460*(t15743*t18169 + t18704) + t15777*(t16329 + t16844 + t16848 - 1.*t15667*t18169 - 1.*t15479*t18306 + t18719))*var2[4] + t15422*t17956*var2[5] + (-0.28121*t15386 + t15386*t16055 + 0.305*t15386*t8106)*var2[7];
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
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

#include "dJh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
