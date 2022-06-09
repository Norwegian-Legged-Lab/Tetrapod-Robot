/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:02 GMT+02:00
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
  double t16733;
  double t16744;
  double t16747;
  double t16748;
  double t16752;
  double t16754;
  double t16759;
  double t16766;
  double t4412;
  double t16703;
  double t16767;
  double t16775;
  double t16764;
  double t16768;
  double t16769;
  double t3727;
  double t16776;
  double t16777;
  double t16778;
  double t16779;
  double t16818;
  double t16822;
  double t16823;
  double t16824;
  double t16826;
  double t16829;
  double t16830;
  double t16843;
  double t16844;
  double t16845;
  double t16851;
  double t16853;
  double t16854;
  double t16872;
  double t16873;
  double t16874;
  double t16875;
  double t16876;
  double t16878;
  double t16880;
  double t16883;
  double t16884;
  double t16885;
  double t16886;
  double t16887;
  double t16897;
  double t16898;
  double t16899;
  double t16907;
  double t16908;
  double t16909;
  double t16910;
  double t16911;
  double t16916;
  double t16917;
  double t16918;
  double t16919;
  double t16920;
  double t16921;
  double t16922;
  double t16923;
  double t16924;
  double t16906;
  double t16912;
  double t16913;
  double t16914;
  double t16925;
  double t16926;
  double t16927;
  double t16928;
  double t16929;
  double t16930;
  double t16931;
  double t16932;
  double t16933;
  double t16937;
  double t16938;
  double t16940;
  double t16915;
  double t16934;
  double t16935;
  double t16949;
  double t16950;
  double t16951;
  double t16903;
  double t16904;
  double t16905;
  double t16944;
  double t16945;
  double t16946;
  double t16958;
  double t16959;
  double t16960;
  double t16979;
  double t16980;
  double t16981;
  double t17035;
  double t17036;
  double t17038;
  double t16947;
  double t17052;
  double t17053;
  double t17054;
  double t16965;
  double t17067;
  double t17068;
  double t17069;
  double t16948;
  double t16953;
  double t16954;
  double t17057;
  double t17058;
  double t17059;
  double t17060;
  double t17061;
  double t17066;
  double t17071;
  double t16966;
  double t16968;
  double t16969;
  double t16988;
  double t16999;
  double t17115;
  double t17117;
  double t17126;
  double t17128;
  double t16989;
  double t16990;
  double t16991;
  double t17000;
  double t17001;
  double t17002;
  double t17014;
  double t17025;
  double t17015;
  double t17016;
  double t17017;
  double t17081;
  double t17083;
  double t17186;
  double t17187;
  double t17192;
  double t17194;
  double t17026;
  double t17027;
  double t17028;
  double t17039;
  double t17040;
  double t17041;
  double t17042;
  double t17044;
  double t17045;
  double t17046;
  double t17047;
  double t17048;
  double t17049;
  double t17050;
  double t17051;
  double t17223;
  double t17225;
  double t17227;
  double t17229;
  double t17230;
  double t17062;
  double t17236;
  double t17237;
  double t17239;
  double t17241;
  double t17242;
  double t17243;
  double t17070;
  double t17074;
  double t17075;
  double t17076;
  double t17077;
  double t17080;
  double t17244;
  double t17086;
  double t17087;
  double t17249;
  double t17093;
  double t17094;
  double t17099;
  double t17105;
  double t17106;
  double t17107;
  double t17108;
  double t17109;
  double t17110;
  double t17111;
  double t17112;
  double t17113;
  double t17116;
  double t17120;
  double t17121;
  double t17122;
  double t17123;
  double t17127;
  double t17131;
  double t17132;
  double t17133;
  double t17135;
  double t17284;
  double t17143;
  double t17144;
  double t17288;
  double t17150;
  double t17151;
  double t17160;
  double t17162;
  double t17173;
  double t17174;
  double t17175;
  double t17176;
  double t17177;
  double t17178;
  double t17179;
  double t17180;
  double t17181;
  double t17182;
  double t17183;
  double t17184;
  double t17188;
  double t17193;
  double t17198;
  double t17199;
  double t17200;
  double t17201;
  double t17204;
  double t17312;
  double t17207;
  double t17208;
  double t17316;
  double t17213;
  double t17214;
  double t17218;
  double t17336;
  double t17337;
  double t17340;
  double t17342;
  double t17343;
  double t17344;
  double t17354;
  double t17355;
  double t17357;
  double t17359;
  double t17361;
  double t17362;
  double t17370;
  double t17371;
  double t17372;
  double t17374;
  double t17375;
  double t17376;
  double t17373;
  double t17381;
  double t17382;
  double t17383;
  double t17384;
  double t17388;
  double t17398;
  double t17399;
  double t17400;
  double t17402;
  double t17403;
  double t17404;
  double t17425;
  double t17428;
  double t17452;
  double t17455;
  double t17441;
  double t17341;
  double t17345;
  double t17346;
  double t17483;
  double t17485;
  double t17489;
  double t16835;
  double t16836;
  double t16837;
  double t17526;
  double t17533;
  double t17535;
  double t17348;
  double t17349;
  double t17351;
  double t16891;
  double t16892;
  double t16893;
  double t17569;
  double t17570;
  double t17571;
  double t17572;
  double t17574;
  double t17575;
  double t17577;
  double t17578;
  double t17579;
  double t17583;
  double t17584;
  double t17586;
  double t17576;
  double t17589;
  double t17591;
  double t17596;
  double t17597;
  double t17598;
  double t17593;
  double t17604;
  double t17605;
  double t17606;
  double t17608;
  double t17609;
  double t17610;
  double t17595;
  double t17614;
  double t17615;
  double t17616;
  double t17421;
  double t17423;
  double t17432;
  double t17433;
  double t17436;
  double t17447;
  double t17448;
  double t17449;
  double t17633;
  double t17640;
  double t17474;
  double t17475;
  double t17478;
  double t17665;
  double t17669;
  double t17672;
  double t17622;
  double t17623;
  double t17624;
  double t17512;
  double t17513;
  double t17514;
  double t17515;
  double t17516;
  double t17517;
  double t17518;
  double t17712;
  double t17721;
  t16733 = Cos(var1[7]);
  t16744 = Cos(var1[8]);
  t16747 = t16733*t16744;
  t16748 = Sin(var1[7]);
  t16752 = Sin(var1[8]);
  t16754 = t16748*t16752;
  t16759 = t16747 + t16754;
  t16766 = Cos(var1[5]);
  t4412 = Cos(var1[6]);
  t16703 = Sin(var1[5]);
  t16767 = Sin(var1[6]);
  t16775 = Cos(var1[3]);
  t16764 = t4412*t16703*t16759;
  t16768 = t16766*t16767*t16759;
  t16769 = t16764 + t16768;
  t3727 = Sin(var1[3]);
  t16776 = Cos(var1[4]);
  t16777 = -1.*t16744*t16748;
  t16778 = t16733*t16752;
  t16779 = t16777 + t16778;
  t16818 = t16776*t16779;
  t16822 = Sin(var1[4]);
  t16823 = t16766*t4412*t16759;
  t16824 = -1.*t16703*t16767*t16759;
  t16826 = t16823 + t16824;
  t16829 = -1.*t16822*t16826;
  t16830 = t16818 + t16829;
  t16843 = -1.*t4412*t16703;
  t16844 = -1.*t16766*t16767;
  t16845 = t16843 + t16844;
  t16851 = t16766*t4412;
  t16853 = -1.*t16703*t16767;
  t16854 = t16851 + t16853;
  t16872 = t16744*t16748;
  t16873 = -1.*t16733*t16752;
  t16874 = t16872 + t16873;
  t16875 = t4412*t16703*t16874;
  t16876 = t16766*t16767*t16874;
  t16878 = t16875 + t16876;
  t16880 = t16776*t16759;
  t16883 = t16766*t4412*t16874;
  t16884 = -1.*t16703*t16767*t16874;
  t16885 = t16883 + t16884;
  t16886 = -1.*t16822*t16885;
  t16887 = t16880 + t16886;
  t16897 = -1.*t16822*t16779;
  t16898 = -1.*t16776*t16826;
  t16899 = t16897 + t16898;
  t16907 = -1.*t16744;
  t16908 = 1. + t16907;
  t16909 = 0.50321*t16908;
  t16910 = 0.19821*t16744;
  t16911 = t16909 + t16910;
  t16916 = -1.*t4412;
  t16917 = 1. + t16916;
  t16918 = 0.15121*t16917;
  t16919 = -1.*t16733;
  t16920 = 1. + t16919;
  t16921 = 0.28121*t16920;
  t16922 = t16733*t16911;
  t16923 = -0.305*t16748*t16752;
  t16924 = t16921 + t16922 + t16923;
  t16906 = 0.28121*t16748;
  t16912 = -1.*t16911*t16748;
  t16913 = -0.305*t16733*t16752;
  t16914 = t16906 + t16912 + t16913;
  t16925 = t4412*t16924;
  t16926 = t16918 + t16925;
  t16927 = t16766*t16926;
  t16928 = 0.15121*t4412;
  t16929 = -0.15121*t16767;
  t16930 = t16767*t16924;
  t16931 = t16918 + t16928 + t16929 + t16930;
  t16932 = -1.*t16703*t16931;
  t16933 = t16927 + t16932;
  t16937 = t16822*t16914;
  t16938 = t16776*t16933;
  t16940 = t16937 + t16938;
  t16915 = -1.*t16822*t16914;
  t16934 = -1.*t16776*t16933;
  t16935 = t16915 + t16934;
  t16949 = t16776*t16914;
  t16950 = -1.*t16822*t16933;
  t16951 = t16949 + t16950;
  t16903 = t16822*t16759;
  t16904 = t16776*t16885;
  t16905 = t16903 + t16904;
  t16944 = t16703*t16926;
  t16945 = t16766*t16931;
  t16946 = t16944 + t16945;
  t16958 = -1.*t16822*t16759;
  t16959 = -1.*t16776*t16885;
  t16960 = t16958 + t16959;
  t16979 = t16822*t16779;
  t16980 = t16776*t16826;
  t16981 = t16979 + t16980;
  t17035 = -1.*t4412*t16703*t16759;
  t17036 = -1.*t16766*t16767*t16759;
  t17038 = t17035 + t17036;
  t16947 = -1.*t16854*t16946;
  t17052 = -1.*t16703*t16926;
  t17053 = -1.*t16766*t16931;
  t17054 = t17052 + t17053;
  t16965 = t16878*t16946;
  t17067 = -1.*t4412*t16703*t16874;
  t17068 = -1.*t16766*t16767*t16874;
  t17069 = t17067 + t17068;
  t16948 = -1.*t16776*t16845*t16940;
  t16953 = t16822*t16845*t16951;
  t16954 = t16947 + t16948 + t16953;
  t17057 = -1.*t16845*t16946;
  t17058 = -1.*t16854*t16933;
  t17059 = -1.*t16766*t4412;
  t17060 = t16703*t16767;
  t17061 = t17059 + t17060;
  t17066 = t16885*t16946;
  t17071 = t16878*t16933;
  t16966 = t16905*t16940;
  t16968 = t16887*t16951;
  t16969 = t16965 + t16966 + t16968;
  t16988 = -1.*t16878*t16946;
  t16999 = t16769*t16946;
  t17115 = -1.*t16885*t16946;
  t17117 = -1.*t16878*t16933;
  t17126 = t16826*t16946;
  t17128 = t16769*t16933;
  t16989 = -1.*t16905*t16940;
  t16990 = -1.*t16887*t16951;
  t16991 = t16988 + t16989 + t16990;
  t17000 = t16981*t16940;
  t17001 = t16830*t16951;
  t17002 = t16999 + t17000 + t17001;
  t17014 = t16854*t16946;
  t17025 = -1.*t16769*t16946;
  t17015 = t16776*t16845*t16940;
  t17016 = -1.*t16822*t16845*t16951;
  t17017 = t17014 + t17015 + t17016;
  t17081 = Power(t16776,2);
  t17083 = Power(t16822,2);
  t17186 = t16845*t16946;
  t17187 = t16854*t16933;
  t17192 = -1.*t16826*t16946;
  t17194 = -1.*t16769*t16933;
  t17026 = -1.*t16981*t16940;
  t17027 = -1.*t16830*t16951;
  t17028 = t17025 + t17026 + t17027;
  t17039 = var2[0]*t16776*t17038;
  t17040 = t3727*t16822*t17038;
  t17041 = t16775*t16826;
  t17042 = t17040 + t17041;
  t17044 = var2[1]*t17042;
  t17045 = -1.*t16775*t16822*t17038;
  t17046 = t3727*t16826;
  t17047 = t17045 + t17046;
  t17048 = var2[2]*t17047;
  t17049 = -1.*t16845*t16933;
  t17050 = t16947 + t17049;
  t17051 = t16885*t17050;
  t17223 = -0.15121*t4412;
  t17225 = t17223 + t16925;
  t17227 = 0.15121*t16767;
  t17229 = -1.*t16767*t16924;
  t17230 = t17227 + t17229;
  t17062 = -1.*t17061*t16933;
  t17236 = -1.*t16703*t17225;
  t17237 = t16766*t17230;
  t17239 = t17236 + t17237;
  t17241 = t16766*t17225;
  t17242 = t16703*t17230;
  t17243 = t17241 + t17242;
  t17070 = t17069*t16933;
  t17074 = t16914*t16759;
  t17075 = t16885*t16933;
  t17076 = t17074 + t16965 + t17075;
  t17077 = t16845*t17076;
  t17080 = t16776*t17069*t16954;
  t17244 = -1.*t16854*t17243;
  t17086 = -1.*t16776*t17061*t16940;
  t17087 = t16822*t17061*t16951;
  t17249 = t16878*t17243;
  t17093 = t16776*t17069*t16940;
  t17094 = -1.*t16822*t17069*t16951;
  t17099 = t16776*t17061*t16969;
  t17105 = var2[0]*t16776*t17061;
  t17106 = t3727*t16845;
  t17107 = -1.*t16775*t16822*t17061;
  t17108 = t17106 + t17107;
  t17109 = var2[2]*t17108;
  t17110 = t16775*t16845;
  t17111 = t3727*t16822*t17061;
  t17112 = t17110 + t17111;
  t17113 = var2[1]*t17112;
  t17116 = -1.*t17069*t16933;
  t17120 = -1.*t16914*t16759;
  t17121 = -1.*t16885*t16933;
  t17122 = t17120 + t16988 + t17121;
  t17123 = t16826*t17122;
  t17127 = t17038*t16933;
  t17131 = t16914*t16779;
  t17132 = t16826*t16933;
  t17133 = t17131 + t16999 + t17132;
  t17135 = t16885*t17133;
  t17284 = -1.*t16878*t17243;
  t17143 = -1.*t16776*t17069*t16940;
  t17144 = t16822*t17069*t16951;
  t17288 = t16769*t17243;
  t17150 = t16776*t17038*t16940;
  t17151 = -1.*t16822*t17038*t16951;
  t17160 = t16776*t17038*t16991;
  t17162 = t16776*t17069*t17002;
  t17173 = var2[0]*t16776*t17069;
  t17174 = t3727*t16822*t17069;
  t17175 = t16775*t16885;
  t17176 = t17174 + t17175;
  t17177 = var2[1]*t17176;
  t17178 = -1.*t16775*t16822*t17069;
  t17179 = t3727*t16885;
  t17180 = t17178 + t17179;
  t17181 = var2[2]*t17180;
  t17182 = t16845*t16933;
  t17183 = t17014 + t17182;
  t17184 = t16826*t17183;
  t17188 = t17061*t16933;
  t17193 = -1.*t17038*t16933;
  t17198 = -1.*t16914*t16779;
  t17199 = -1.*t16826*t16933;
  t17200 = t17198 + t17025 + t17199;
  t17201 = t16845*t17200;
  t17204 = t16776*t17038*t17017;
  t17312 = t16854*t17243;
  t17207 = t16776*t17061*t16940;
  t17208 = -1.*t16822*t17061*t16951;
  t17316 = -1.*t16769*t17243;
  t17213 = -1.*t16776*t17038*t16940;
  t17214 = t16822*t17038*t16951;
  t17218 = t16776*t17061*t17028;
  t17336 = -1.*t16733*t16744;
  t17337 = -1.*t16748*t16752;
  t17340 = t17336 + t17337;
  t17342 = t16766*t4412*t16779;
  t17343 = -1.*t16703*t16767*t16779;
  t17344 = t17342 + t17343;
  t17354 = t4412*t16703*t16779;
  t17355 = t16766*t16767*t16779;
  t17357 = t17354 + t17355;
  t17359 = t16776*t17340;
  t17361 = -1.*t16822*t17344;
  t17362 = t17359 + t17361;
  t17370 = t4412*t16703*t16914;
  t17371 = t16766*t16767*t16914;
  t17372 = t17370 + t17371;
  t17374 = t16766*t4412*t16914;
  t17375 = -1.*t16703*t16767*t16914;
  t17376 = t17374 + t17375;
  t17373 = -1.*t16854*t17372;
  t17381 = 0.28121*t16733;
  t17382 = -1.*t16733*t16911;
  t17383 = 0.305*t16748*t16752;
  t17384 = t17381 + t17382 + t17383;
  t17388 = t16878*t17372;
  t17398 = t16822*t17384;
  t17399 = t16776*t17376;
  t17400 = t17398 + t17399;
  t17402 = t16776*t17384;
  t17403 = -1.*t16822*t17376;
  t17404 = t17402 + t17403;
  t17425 = t16914*t17340;
  t17428 = t16779*t17384;
  t17452 = Power(t4412,2);
  t17455 = Power(t16767,2);
  t17441 = -1.*t17384*t16759;
  t17341 = t16822*t17340;
  t17345 = t16776*t17344;
  t17346 = t17341 + t17345;
  t17483 = t17372*t16769;
  t17485 = t17357*t16946;
  t17489 = -1.*t16878*t17372;
  t16835 = t16775*t16769;
  t16836 = -1.*t3727*t16830;
  t16837 = t16835 + t16836;
  t17526 = t16854*t17372;
  t17533 = -1.*t17372*t16769;
  t17535 = -1.*t17357*t16946;
  t17348 = t16767*t16926;
  t17349 = -1.*t4412*t16931;
  t17351 = t17348 + t17349;
  t16891 = t16775*t16878;
  t16892 = -1.*t3727*t16887;
  t16893 = t16891 + t16892;
  t17569 = -0.305*t16744*t16748;
  t17570 = 0.305*t16733*t16752;
  t17571 = t17569 + t17570;
  t17572 = t4412*t16703*t17571;
  t17574 = t16766*t16767*t17571;
  t17575 = t17572 + t17574;
  t17577 = t16766*t4412*t17571;
  t17578 = -1.*t16703*t16767*t17571;
  t17579 = t17577 + t17578;
  t17583 = t4412*t16703*t17340;
  t17584 = t16766*t16767*t17340;
  t17586 = t17583 + t17584;
  t17576 = -1.*t16854*t17575;
  t17589 = -0.305*t16733*t16744;
  t17591 = t17589 + t16923;
  t17596 = t16766*t4412*t17340;
  t17597 = -1.*t16703*t16767*t17340;
  t17598 = t17596 + t17597;
  t17593 = t16878*t17575;
  t17604 = t16822*t17591;
  t17605 = t16776*t17579;
  t17606 = t17604 + t17605;
  t17608 = t16776*t17591;
  t17609 = -1.*t16822*t17579;
  t17610 = t17608 + t17609;
  t17595 = t17586*t16946;
  t17614 = t16822*t16874;
  t17615 = t16776*t17598;
  t17616 = t17614 + t17615;
  t17421 = -1.*t16874*t16924;
  t17423 = t17421 + t17120;
  t17432 = t16924*t16759;
  t17433 = t17131 + t17432;
  t17436 = -1.*t16874*t16914;
  t17447 = -1.*t4412*t16874*t16926;
  t17448 = -1.*t16767*t16874*t16931;
  t17449 = t17120 + t17447 + t17448;
  t17633 = t16779*t17591;
  t17640 = -1.*t17591*t16759;
  t17474 = t4412*t16759*t16926;
  t17475 = t16767*t16759*t16931;
  t17478 = t17131 + t17474 + t17475;
  t17665 = t17575*t16769;
  t17669 = -1.*t16878*t17575;
  t17672 = -1.*t17586*t16946;
  t17622 = t16776*t16874;
  t17623 = -1.*t16822*t17598;
  t17624 = t17622 + t17623;
  t17512 = 0.15121*t17340;
  t17513 = 0.15121*t16759;
  t17514 = t17512 + t17513;
  t17515 = var2[6]*t17514;
  t17516 = -1.*t16767*t16926;
  t17517 = t4412*t16931;
  t17518 = t17516 + t17517;
  t17712 = t16854*t17575;
  t17721 = -1.*t17575*t16769;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t16775*t16830 - 1.*t16769*t3727)*var2[1] + t16837*var2[2];
  p_output1[10]=(t16775*t16822*t16845 - 1.*t16854*t3727)*var2[1] + (t16775*t16854 + t16822*t16845*t3727)*var2[2];
  p_output1[11]=(-1.*t16775*t16887 - 1.*t16878*t3727)*var2[1] + t16893*var2[2];
  p_output1[12]=t16830*var2[0] - 1.*t16899*t3727*var2[1] + t16775*t16899*var2[2] + (t16905*(t16822*t16845*t16935 + t16822*t16845*t16940) + t16887*t16954 + t16776*t16845*(t16887*t16935 + t16887*t16940 + t16905*t16951 + t16951*t16960) - 1.*t16822*t16845*t16969)*var2[3];
  p_output1[13]=-1.*t16822*t16845*var2[0] + t16776*t16845*t3727*var2[1] - 1.*t16775*t16776*t16845*var2[2] + ((-1.*t16887*t16935 - 1.*t16887*t16940 - 1.*t16905*t16951 - 1.*t16951*t16960)*t16981 + t16905*(t16830*t16935 + t16830*t16940 + t16899*t16951 + t16951*t16981) + t16830*t16991 + t16887*t17002)*var2[3];
  p_output1[14]=t16887*var2[0] - 1.*t16960*t3727*var2[1] + t16775*t16960*var2[2] + ((-1.*t16822*t16845*t16935 - 1.*t16822*t16845*t16940)*t16981 + t16776*t16845*(-1.*t16830*t16935 - 1.*t16830*t16940 - 1.*t16899*t16951 - 1.*t16951*t16981) + t16830*t17017 - 1.*t16822*t16845*t17028)*var2[3];
  p_output1[15]=t17039 + t17044 + t17048 + (t17080 + t16905*(t17057 + t17058 - 1.*t16845*t17054*t17081 - 1.*t16845*t17054*t17083 + t17086 + t17087) + t16776*t16845*(-1.*t16822*t16887*t17054 + t16776*t16905*t17054 + t17066 + t17071 + t17093 + t17094) + t17099)*var2[3] + (t17051 + t16878*(-1.*t16845*t17054 + t17057 + t17058 + t17062) + t16854*(t16885*t17054 + t17066 + t17070 + t17071) + t17077)*var2[4];
  p_output1[16]=t17105 + t17109 + t17113 + (t16981*(t16822*t16887*t17054 - 1.*t16776*t16905*t17054 + t17115 + t17117 + t17143 + t17144) + t16905*(-1.*t16822*t16830*t17054 + t16776*t16981*t17054 + t17126 + t17128 + t17150 + t17151) + t17160 + t17162)*var2[3] + (t16769*(-1.*t16885*t17054 + t17115 + t17116 + t17117) + t17123 + t16878*(t16826*t17054 + t17126 + t17127 + t17128) + t17135)*var2[4];
  p_output1[17]=t17173 + t17177 + t17181 + (t17204 + t16981*(t16845*t17054*t17081 + t16845*t17054*t17083 + t17186 + t17187 + t17207 + t17208) + t16776*t16845*(t16822*t16830*t17054 - 1.*t16776*t16981*t17054 + t17192 + t17194 + t17213 + t17214) + t17218)*var2[3] + (t17184 + t16769*(t16845*t17054 + t17186 + t17187 + t17188) + t16854*(-1.*t16826*t17054 + t17192 + t17193 + t17194) + t17201)*var2[4];
  p_output1[18]=t17039 + t17044 + t17048 + (t17080 + t17099 + t16905*(t17057 + t17086 + t17087 - 1.*t16845*t17081*t17239 - 1.*t16845*t17083*t17239 + t17244) + t16776*t16845*(t17066 + t17093 + t17094 - 1.*t16822*t16887*t17239 + t16776*t16905*t17239 + t17249))*var2[3] + (t17051 + t17077 + t16878*(t17057 + t17062 - 1.*t16845*t17239 + t17244) + t16854*(t17066 + t17070 + t16885*t17239 + t17249))*var2[4] + t16759*(t16767*t16931 + t16767*t17230 + t16926*t4412 - 1.*t17225*t4412)*var2[5];
  p_output1[19]=t17105 + t17109 + t17113 + (t17160 + t17162 + t16981*(t17115 + t17143 + t17144 + t16822*t16887*t17239 - 1.*t16776*t16905*t17239 + t17284) + t16905*(t17126 + t17150 + t17151 - 1.*t16822*t16830*t17239 + t16776*t16981*t17239 + t17288))*var2[3] + (t17123 + t17135 + t16769*(t17115 + t17116 - 1.*t16885*t17239 + t17284) + t16878*(t17126 + t17127 + t16826*t17239 + t17288))*var2[4] + (t16759*(-1.*t16759*t16767*t16926 + t16759*t16767*t17225 + t16759*t16931*t4412 + t16759*t17230*t4412) + t16779*(t16767*t16874*t16926 - 1.*t16767*t16874*t17225 - 1.*t16874*t16931*t4412 - 1.*t16874*t17230*t4412))*var2[5];
  p_output1[20]=t17173 + t17177 + t17181 + (t17204 + t17218 + t16981*(t17186 + t17207 + t17208 + t16845*t17081*t17239 + t16845*t17083*t17239 + t17312) + t16776*t16845*(t17192 + t17213 + t17214 + t16822*t16830*t17239 - 1.*t16776*t16981*t17239 + t17316))*var2[3] + (t17184 + t17201 + t16769*(t17186 + t17188 + t16845*t17239 + t17312) + t16854*(t17192 + t17193 - 1.*t16826*t17239 + t17316))*var2[4] + t16779*(-1.*t16767*t16931 - 1.*t16767*t17230 - 1.*t16926*t4412 + t17225*t4412)*var2[5];
  p_output1[21]=t17346*var2[0] + (t16775*t17357 - 1.*t17362*t3727)*var2[1] + (t16775*t17362 + t17357*t3727)*var2[2] + (t16954*t16981 + t16905*(t17373 - 1.*t16776*t16845*t17400 + t16822*t16845*t17404) + t16776*t16845*(t16999 + t17000 + t17001 + t17388 + t16905*t17400 + t16887*t17404))*var2[3] + (t16769*t17050 + t16878*(t17373 - 1.*t16845*t17376) + t16854*(t16999 + t17131 + t17132 + t16885*t17376 + t16759*t17384 + t17388))*var2[4] + t16779*t17351*var2[5];
  p_output1[22]=(t16981*t17002 + t16991*t17346 + t16905*(t16940*t17346 + t16951*t17362 + t16981*t17400 + t16830*t17404 + t17483 + t17485) + t16981*(t17025 + t17026 + t17027 - 1.*t16905*t17400 - 1.*t16887*t17404 + t17489))*var2[3] + (t16769*t17133 + t17122*t17357 + t16878*(t16933*t17344 + t16826*t17376 + t17425 + t17428 + t17483 + t17485) + t16769*(t17025 + t17198 + t17199 - 1.*t16885*t17376 + t17441 + t17489))*var2[4] + (t17340*t17449 + t16779*t17478 + t16779*(-1.*t16759*t16767*t16931 + t17198 + t17441 - 1.*t16874*t16914*t17452 - 1.*t16874*t16914*t17455 - 1.*t16759*t16926*t4412) + t16759*(t16767*t16779*t16931 + t17425 + t17428 + t16759*t16914*t17452 + t16759*t16914*t17455 + t16779*t16926*t4412))*var2[5] + (t17340*t17423 + t16759*(t16779*t16924 + t17074 + t17425 + t17428) + t16779*t17433 + t16779*(-1.*t16759*t16924 + t17198 + t17436 + t17441))*var2[6];
  p_output1[23]=t17515 + t16981*var2[0] + t16837*var2[1] + (t16775*t16830 + t16769*t3727)*var2[2] + (t17017*t17346 + t16981*(t16776*t16845*t17400 - 1.*t16822*t16845*t17404 + t17526) + t16776*t16845*(-1.*t16940*t17346 - 1.*t16951*t17362 - 1.*t16981*t17400 - 1.*t16830*t17404 + t17533 + t17535))*var2[3] + (t17183*t17357 + t16769*(t16845*t17376 + t17526) + t16854*(-1.*t16914*t17340 - 1.*t16933*t17344 - 1.*t16826*t17376 - 1.*t16779*t17384 + t17533 + t17535))*var2[4] + t17340*t17518*var2[5];
  p_output1[24]=t16905*var2[0] + t16893*var2[1] + (t16775*t16887 + t16878*t3727)*var2[2] + (t16905*(t17576 - 1.*t16776*t16845*t17606 + t16822*t16845*t17610) + t16954*t17616 + t16776*t16845*(t17593 + t17595 + t16905*t17606 + t16887*t17610 + t16940*t17616 + t16951*t17624))*var2[3] + (t16878*(t17576 - 1.*t16845*t17579) + t17050*t17586 + t16854*(t16874*t16914 + t16885*t17579 + t16759*t17591 + t17593 + t17595 + t16933*t17598))*var2[4] + t16874*t17351*var2[5] + (0.28121*t16744 - 0.305*Power(t16744,2) - 1.*t16744*t16911)*var2[7];
  p_output1[25]=(t16905*t16991 + t17002*t17616 + t16905*(t16965 + t16966 + t16968 + t16981*t17606 + t16830*t17610 + t17665) + t16981*(-1.*t16905*t17606 - 1.*t16887*t17610 - 1.*t16940*t17616 - 1.*t16951*t17624 + t17669 + t17672))*var2[3] + (t16878*t17122 + t17133*t17586 + t16878*(t16965 + t17074 + t17075 + t16826*t17579 + t17633 + t17665) + t16769*(t17436 - 1.*t16885*t17579 - 1.*t16933*t17598 + t17640 + t17669 + t17672))*var2[4] + (t16759*t17449 + t16874*t17478 + t16759*(t16767*t16874*t16931 + t17074 + t16759*t17452*t17571 + t16759*t17455*t17571 + t17633 + t16874*t16926*t4412) + t16779*(-1.*t16767*t16931*t17340 + t17436 - 1.*t16874*t17452*t17571 - 1.*t16874*t17455*t17571 + t17640 - 1.*t16926*t17340*t4412))*var2[5] + (t16759*t17423 + t16874*t17433 + t16759*(t16874*t16924 + t17074 + t16759*t17571 + t17633) + t16779*(-1.*t16924*t17340 + t17436 - 1.*t16874*t17571 + t17640))*var2[6];
  p_output1[26]=t17515 + t17616*var2[0] + (t16775*t17586 - 1.*t17624*t3727)*var2[1] + (t16775*t17624 + t17586*t3727)*var2[2] + (t16905*t17017 + t16981*(t16776*t16845*t17606 - 1.*t16822*t16845*t17610 + t17712) + t16776*t16845*(t16988 + t16989 + t16990 - 1.*t16981*t17606 - 1.*t16830*t17610 + t17721))*var2[3] + (t16878*t17183 + t16769*(t16845*t17579 + t17712) + t16854*(t16988 + t17120 + t17121 - 1.*t16826*t17579 - 1.*t16779*t17591 + t17721))*var2[4] + t16759*t17518*var2[5] + (-0.28121*t16752 + 0.305*t16744*t16752 + t16752*t16911)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
