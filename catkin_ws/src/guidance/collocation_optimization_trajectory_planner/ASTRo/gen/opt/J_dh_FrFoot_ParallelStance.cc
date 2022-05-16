/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:12 GMT+02:00
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
  double t43911;
  double t44167;
  double t44190;
  double t44200;
  double t44219;
  double t44332;
  double t44349;
  double t44359;
  double t4146;
  double t4555;
  double t44434;
  double t44469;
  double t44351;
  double t44449;
  double t44466;
  double t4144;
  double t44470;
  double t44471;
  double t44479;
  double t44505;
  double t44545;
  double t44547;
  double t44548;
  double t44560;
  double t44575;
  double t44582;
  double t44583;
  double t44633;
  double t44634;
  double t44635;
  double t44652;
  double t44654;
  double t44655;
  double t44678;
  double t44679;
  double t44680;
  double t44681;
  double t44686;
  double t44694;
  double t44695;
  double t44697;
  double t44702;
  double t44703;
  double t44704;
  double t44710;
  double t44715;
  double t44671;
  double t44673;
  double t44675;
  double t44677;
  double t44687;
  double t44691;
  double t44692;
  double t44696;
  double t44721;
  double t44722;
  double t44724;
  double t44725;
  double t44726;
  double t44727;
  double t44728;
  double t44735;
  double t44736;
  double t44737;
  double t44657;
  double t44658;
  double t44662;
  double t44741;
  double t44742;
  double t44743;
  double t44748;
  double t44749;
  double t44750;
  double t44693;
  double t44738;
  double t44739;
  double t44761;
  double t44762;
  double t44763;
  double t44651;
  double t44667;
  double t44670;
  double t44755;
  double t44756;
  double t44757;
  double t44802;
  double t44810;
  double t44811;
  double t44751;
  double t44752;
  double t44753;
  double t44759;
  double t44780;
  double t44781;
  double t44783;
  double t44835;
  double t44837;
  double t44838;
  double t44784;
  double t44854;
  double t44855;
  double t44857;
  double t44760;
  double t44764;
  double t44765;
  double t44841;
  double t44842;
  double t44843;
  double t44845;
  double t44846;
  double t44853;
  double t44859;
  double t44788;
  double t44793;
  double t44795;
  double t44812;
  double t44815;
  double t44818;
  double t44819;
  double t44821;
  double t44826;
  double t44827;
  double t44829;
  double t44830;
  double t44831;
  double t44833;
  double t44834;
  double t44914;
  double t44916;
  double t44919;
  double t44910;
  double t44847;
  double t44928;
  double t44929;
  double t44931;
  double t44934;
  double t44937;
  double t44938;
  double t44858;
  double t44874;
  double t44875;
  double t44879;
  double t44880;
  double t44886;
  double t44887;
  double t44889;
  double t44939;
  double t44892;
  double t44893;
  double t44949;
  double t44900;
  double t44901;
  double t44904;
  double t44981;
  double t44982;
  double t44983;
  double t44987;
  double t44988;
  double t44989;
  double t44999;
  double t45001;
  double t45004;
  double t45008;
  double t45009;
  double t45010;
  double t45020;
  double t45022;
  double t45025;
  double t45029;
  double t45033;
  double t45035;
  double t45028;
  double t45044;
  double t45045;
  double t45047;
  double t45048;
  double t45051;
  double t45053;
  double t45061;
  double t45063;
  double t45064;
  double t45067;
  double t45068;
  double t45069;
  double t45075;
  double t45076;
  double t45077;
  double t44974;
  double t44976;
  double t44979;
  double t45113;
  double t45115;
  double t45116;
  double t45117;
  double t45119;
  double t45120;
  double t45123;
  double t45124;
  double t45125;
  double t45131;
  double t45132;
  double t45133;
  double t45121;
  double t45137;
  double t45139;
  double t45146;
  double t45147;
  double t45148;
  double t45142;
  double t45145;
  double t45154;
  double t45155;
  double t45156;
  double t45158;
  double t45159;
  double t45160;
  double t45164;
  double t45165;
  double t45166;
  double t44624;
  double t44625;
  double t44626;
  double t44771;
  double t44772;
  double t44773;
  double t45083;
  double t45084;
  double t45239;
  double t45043;
  double t45055;
  double t45266;
  double t45268;
  double t45279;
  double t45281;
  double t45240;
  double t45241;
  double t45242;
  double t45250;
  double t45255;
  double t45256;
  double t45257;
  double t45258;
  double t45259;
  double t45260;
  double t45261;
  double t45262;
  double t45263;
  double t45267;
  double t45272;
  double t45274;
  double t45275;
  double t45276;
  double t45280;
  double t45284;
  double t45286;
  double t45325;
  double t45291;
  double t45292;
  double t45332;
  double t45299;
  double t45300;
  double t45304;
  double t45305;
  double t45356;
  double t45359;
  double t45383;
  double t45385;
  double t45370;
  double t45372;
  double t44984;
  double t44990;
  double t44995;
  double t45407;
  double t45410;
  double t45415;
  double t45418;
  double t45352;
  double t45354;
  double t45363;
  double t45366;
  double t45368;
  double t45379;
  double t45380;
  double t45381;
  double t45444;
  double t45451;
  double t45399;
  double t45400;
  double t45401;
  double t45474;
  double t45479;
  double t45482;
  double t45172;
  double t45173;
  double t45174;
  double t45212;
  double t45215;
  double t45216;
  double t45108;
  double t45109;
  double t45111;
  double t45434;
  double t45435;
  double t45540;
  double t45419;
  double t45541;
  double t45542;
  double t45544;
  double t45573;
  double t45574;
  double t45579;
  double t45581;
  double t45554;
  double t45559;
  double t45560;
  double t45561;
  double t45562;
  double t45563;
  double t45564;
  double t45565;
  double t45567;
  double t45568;
  double t45569;
  double t45570;
  double t45571;
  double t45575;
  double t45580;
  double t45585;
  double t45586;
  double t45589;
  double t45614;
  double t45592;
  double t45593;
  double t45619;
  double t45598;
  double t45600;
  double t45603;
  double t45182;
  double t45185;
  double t45186;
  double t45649;
  double t45656;
  double t45658;
  double t45637;
  double t45638;
  double t45639;
  double t45640;
  double t45641;
  double t45642;
  double t45643;
  double t45697;
  double t45705;
  double t45103;
  double t45104;
  double t45105;
  double t45092;
  double t45093;
  t43911 = Cos(var1[13]);
  t44167 = Cos(var1[14]);
  t44190 = t43911*t44167;
  t44200 = Sin(var1[13]);
  t44219 = Sin(var1[14]);
  t44332 = t44200*t44219;
  t44349 = t44190 + t44332;
  t44359 = Cos(var1[12]);
  t4146 = Cos(var1[5]);
  t4555 = Sin(var1[12]);
  t44434 = Sin(var1[5]);
  t44469 = Cos(var1[3]);
  t44351 = t4146*t4555*t44349;
  t44449 = t44359*t44349*t44434;
  t44466 = t44351 + t44449;
  t4144 = Sin(var1[3]);
  t44470 = Cos(var1[4]);
  t44471 = -1.*t44167*t44200;
  t44479 = t43911*t44219;
  t44505 = t44471 + t44479;
  t44545 = t44470*t44505;
  t44547 = Sin(var1[4]);
  t44548 = t44359*t4146*t44349;
  t44560 = -1.*t4555*t44349*t44434;
  t44575 = t44548 + t44560;
  t44582 = -1.*t44547*t44575;
  t44583 = t44545 + t44582;
  t44633 = -1.*t44505*t44547;
  t44634 = -1.*t44470*t44575;
  t44635 = t44633 + t44634;
  t44652 = t44167*t44200;
  t44654 = -1.*t43911*t44219;
  t44655 = t44652 + t44654;
  t44678 = -1.*t44167;
  t44679 = 1. + t44678;
  t44680 = 0.50321*t44679;
  t44681 = 0.23321*t44167;
  t44686 = t44680 + t44681;
  t44694 = -1.*t44359;
  t44695 = 1. + t44694;
  t44697 = -1.*t43911;
  t44702 = 1. + t44697;
  t44703 = 0.28121*t44702;
  t44704 = t43911*t44686;
  t44710 = -0.27*t44200*t44219;
  t44715 = t44703 + t44704 + t44710;
  t44671 = -1.*t4146*t4555;
  t44673 = -1.*t44359*t44434;
  t44675 = t44671 + t44673;
  t44677 = 0.28121*t44200;
  t44687 = -1.*t44686*t44200;
  t44691 = -0.27*t43911*t44219;
  t44692 = t44677 + t44687 + t44691;
  t44696 = 0.15121*t44695;
  t44721 = t44359*t44715;
  t44722 = t44696 + t44721;
  t44724 = t4146*t44722;
  t44725 = -0.15121*t44695;
  t44726 = -0.15121*t44359;
  t44727 = -0.15121*t4555;
  t44728 = t4555*t44715;
  t44735 = t44725 + t44726 + t44727 + t44728;
  t44736 = -1.*t44735*t44434;
  t44737 = t44724 + t44736;
  t44657 = t44359*t4146*t44655;
  t44658 = -1.*t4555*t44655*t44434;
  t44662 = t44657 + t44658;
  t44741 = t44692*t44547;
  t44742 = t44470*t44737;
  t44743 = t44741 + t44742;
  t44748 = t44470*t44349;
  t44749 = -1.*t44547*t44662;
  t44750 = t44748 + t44749;
  t44693 = -1.*t44692*t44547;
  t44738 = -1.*t44470*t44737;
  t44739 = t44693 + t44738;
  t44761 = t44470*t44692;
  t44762 = -1.*t44547*t44737;
  t44763 = t44761 + t44762;
  t44651 = t44349*t44547;
  t44667 = t44470*t44662;
  t44670 = t44651 + t44667;
  t44755 = t4146*t44735;
  t44756 = t44722*t44434;
  t44757 = t44755 + t44756;
  t44802 = -1.*t4146*t4555*t44349;
  t44810 = -1.*t44359*t44349*t44434;
  t44811 = t44802 + t44810;
  t44751 = t44359*t4146;
  t44752 = -1.*t4555*t44434;
  t44753 = t44751 + t44752;
  t44759 = -1.*t44753*t44757;
  t44780 = t4146*t4555*t44655;
  t44781 = t44359*t44655*t44434;
  t44783 = t44780 + t44781;
  t44835 = -1.*t4146*t44735;
  t44837 = -1.*t44722*t44434;
  t44838 = t44835 + t44837;
  t44784 = t44783*t44757;
  t44854 = -1.*t4146*t4555*t44655;
  t44855 = -1.*t44359*t44655*t44434;
  t44857 = t44854 + t44855;
  t44760 = -1.*t44470*t44675*t44743;
  t44764 = t44547*t44675*t44763;
  t44765 = t44759 + t44760 + t44764;
  t44841 = -1.*t44675*t44757;
  t44842 = -1.*t44753*t44737;
  t44843 = -1.*t44359*t4146;
  t44845 = t4555*t44434;
  t44846 = t44843 + t44845;
  t44853 = t44662*t44757;
  t44859 = t44783*t44737;
  t44788 = t44670*t44743;
  t44793 = t44750*t44763;
  t44795 = t44784 + t44788 + t44793;
  t44812 = var2[0]*t44470*t44811;
  t44815 = t4144*t44547*t44811;
  t44818 = t44469*t44575;
  t44819 = t44815 + t44818;
  t44821 = var2[1]*t44819;
  t44826 = -1.*t44469*t44547*t44811;
  t44827 = t4144*t44575;
  t44829 = t44826 + t44827;
  t44830 = var2[2]*t44829;
  t44831 = -1.*t44675*t44737;
  t44833 = t44759 + t44831;
  t44834 = t44662*t44833;
  t44914 = 0.15121*t4555;
  t44916 = -1.*t4555*t44715;
  t44919 = t44914 + t44916;
  t44910 = t44726 + t44721;
  t44847 = -1.*t44846*t44737;
  t44928 = t4146*t44919;
  t44929 = -1.*t44910*t44434;
  t44931 = t44928 + t44929;
  t44934 = t4146*t44910;
  t44937 = t44919*t44434;
  t44938 = t44934 + t44937;
  t44858 = t44857*t44737;
  t44874 = t44692*t44349;
  t44875 = t44662*t44737;
  t44879 = t44874 + t44784 + t44875;
  t44880 = t44675*t44879;
  t44886 = t44470*t44857*t44765;
  t44887 = Power(t44470,2);
  t44889 = Power(t44547,2);
  t44939 = -1.*t44753*t44938;
  t44892 = -1.*t44470*t44846*t44743;
  t44893 = t44547*t44846*t44763;
  t44949 = t44783*t44938;
  t44900 = t44470*t44857*t44743;
  t44901 = -1.*t44547*t44857*t44763;
  t44904 = t44470*t44846*t44795;
  t44981 = -1.*t43911*t44167;
  t44982 = -1.*t44200*t44219;
  t44983 = t44981 + t44982;
  t44987 = t44359*t4146*t44505;
  t44988 = -1.*t4555*t44505*t44434;
  t44989 = t44987 + t44988;
  t44999 = t4146*t4555*t44505;
  t45001 = t44359*t44505*t44434;
  t45004 = t44999 + t45001;
  t45008 = t44470*t44983;
  t45009 = -1.*t44547*t44989;
  t45010 = t45008 + t45009;
  t45020 = t4146*t4555*t44692;
  t45022 = t44359*t44692*t44434;
  t45025 = t45020 + t45022;
  t45029 = t44359*t4146*t44692;
  t45033 = -1.*t4555*t44692*t44434;
  t45035 = t45029 + t45033;
  t45028 = -1.*t44753*t45025;
  t45044 = 0.28121*t43911;
  t45045 = -1.*t43911*t44686;
  t45047 = 0.27*t44200*t44219;
  t45048 = t45044 + t45045 + t45047;
  t45051 = t44783*t45025;
  t45053 = t44466*t44757;
  t45061 = t45048*t44547;
  t45063 = t44470*t45035;
  t45064 = t45061 + t45063;
  t45067 = t44470*t45048;
  t45068 = -1.*t44547*t45035;
  t45069 = t45067 + t45068;
  t45075 = t44505*t44547;
  t45076 = t44470*t44575;
  t45077 = t45075 + t45076;
  t44974 = t4555*t44722;
  t44976 = -1.*t44359*t44735;
  t44979 = t44974 + t44976;
  t45113 = -0.27*t44167*t44200;
  t45115 = 0.27*t43911*t44219;
  t45116 = t45113 + t45115;
  t45117 = t4146*t4555*t45116;
  t45119 = t44359*t45116*t44434;
  t45120 = t45117 + t45119;
  t45123 = t44359*t4146*t45116;
  t45124 = -1.*t4555*t45116*t44434;
  t45125 = t45123 + t45124;
  t45131 = t4146*t4555*t44983;
  t45132 = t44359*t44983*t44434;
  t45133 = t45131 + t45132;
  t45121 = -1.*t44753*t45120;
  t45137 = -0.27*t43911*t44167;
  t45139 = t45137 + t44710;
  t45146 = t44359*t4146*t44983;
  t45147 = -1.*t4555*t44983*t44434;
  t45148 = t45146 + t45147;
  t45142 = t44783*t45120;
  t45145 = t45133*t44757;
  t45154 = t45139*t44547;
  t45155 = t44470*t45125;
  t45156 = t45154 + t45155;
  t45158 = t44470*t45139;
  t45159 = -1.*t44547*t45125;
  t45160 = t45158 + t45159;
  t45164 = t44655*t44547;
  t45165 = t44470*t45148;
  t45166 = t45164 + t45165;
  t44624 = t44469*t44466;
  t44625 = -1.*t4144*t44583;
  t44626 = t44624 + t44625;
  t44771 = -1.*t44349*t44547;
  t44772 = -1.*t44470*t44662;
  t44773 = t44771 + t44772;
  t45083 = t45077*t44743;
  t45084 = t44583*t44763;
  t45239 = -1.*t44783*t44757;
  t45043 = t44692*t44505;
  t45055 = t44575*t44737;
  t45266 = -1.*t44662*t44757;
  t45268 = -1.*t44783*t44737;
  t45279 = t44575*t44757;
  t45281 = t44466*t44737;
  t45240 = -1.*t44670*t44743;
  t45241 = -1.*t44750*t44763;
  t45242 = t45239 + t45240 + t45241;
  t45250 = t45053 + t45083 + t45084;
  t45255 = var2[0]*t44470*t44846;
  t45256 = t4144*t44675;
  t45257 = -1.*t44469*t44547*t44846;
  t45258 = t45256 + t45257;
  t45259 = var2[2]*t45258;
  t45260 = t44469*t44675;
  t45261 = t4144*t44547*t44846;
  t45262 = t45260 + t45261;
  t45263 = var2[1]*t45262;
  t45267 = -1.*t44857*t44737;
  t45272 = -1.*t44692*t44349;
  t45274 = -1.*t44662*t44737;
  t45275 = t45272 + t45239 + t45274;
  t45276 = t44575*t45275;
  t45280 = t44811*t44737;
  t45284 = t45043 + t45053 + t45055;
  t45286 = t44662*t45284;
  t45325 = -1.*t44783*t44938;
  t45291 = -1.*t44470*t44857*t44743;
  t45292 = t44547*t44857*t44763;
  t45332 = t44466*t44938;
  t45299 = t44470*t44811*t44743;
  t45300 = -1.*t44547*t44811*t44763;
  t45304 = t44470*t44811*t45242;
  t45305 = t44470*t44857*t45250;
  t45356 = t44692*t44983;
  t45359 = t44505*t45048;
  t45383 = Power(t44359,2);
  t45385 = Power(t4555,2);
  t45370 = -1.*t44692*t44505;
  t45372 = -1.*t45048*t44349;
  t44984 = t44983*t44547;
  t44990 = t44470*t44989;
  t44995 = t44984 + t44990;
  t45407 = t45025*t44466;
  t45410 = t45004*t44757;
  t45415 = -1.*t44783*t45025;
  t45418 = -1.*t44466*t44757;
  t45352 = -1.*t44655*t44715;
  t45354 = t45352 + t45272;
  t45363 = t44715*t44349;
  t45366 = t45043 + t45363;
  t45368 = -1.*t44655*t44692;
  t45379 = -1.*t44359*t44655*t44722;
  t45380 = -1.*t4555*t44655*t44735;
  t45381 = t45272 + t45379 + t45380;
  t45444 = t44505*t45139;
  t45451 = -1.*t45139*t44349;
  t45399 = t44359*t44349*t44722;
  t45400 = t4555*t44349*t44735;
  t45401 = t45043 + t45399 + t45400;
  t45474 = t45120*t44466;
  t45479 = -1.*t44783*t45120;
  t45482 = -1.*t45133*t44757;
  t45172 = t44470*t44655;
  t45173 = -1.*t44547*t45148;
  t45174 = t45172 + t45173;
  t45212 = t4144*t44547*t44675;
  t45215 = t44469*t44753;
  t45216 = t45212 + t45215;
  t45108 = t44469*t44783;
  t45109 = -1.*t4144*t44750;
  t45111 = t45108 + t45109;
  t45434 = -1.*t45077*t44743;
  t45435 = -1.*t44583*t44763;
  t45540 = t44753*t44757;
  t45419 = -1.*t44575*t44737;
  t45541 = t44470*t44675*t44743;
  t45542 = -1.*t44547*t44675*t44763;
  t45544 = t45540 + t45541 + t45542;
  t45573 = t44675*t44757;
  t45574 = t44753*t44737;
  t45579 = -1.*t44575*t44757;
  t45581 = -1.*t44466*t44737;
  t45554 = t45418 + t45434 + t45435;
  t45559 = var2[0]*t44470*t44857;
  t45560 = t4144*t44547*t44857;
  t45561 = t44469*t44662;
  t45562 = t45560 + t45561;
  t45563 = var2[1]*t45562;
  t45564 = -1.*t44469*t44547*t44857;
  t45565 = t4144*t44662;
  t45567 = t45564 + t45565;
  t45568 = var2[2]*t45567;
  t45569 = t44675*t44737;
  t45570 = t45540 + t45569;
  t45571 = t44575*t45570;
  t45575 = t44846*t44737;
  t45580 = -1.*t44811*t44737;
  t45585 = t45370 + t45418 + t45419;
  t45586 = t44675*t45585;
  t45589 = t44470*t44811*t45544;
  t45614 = t44753*t44938;
  t45592 = t44470*t44846*t44743;
  t45593 = -1.*t44547*t44846*t44763;
  t45619 = -1.*t44466*t44938;
  t45598 = -1.*t44470*t44811*t44743;
  t45600 = t44547*t44811*t44763;
  t45603 = t44470*t44846*t45554;
  t45182 = t4144*t44466;
  t45185 = t44469*t44583;
  t45186 = t45182 + t45185;
  t45649 = t44753*t45025;
  t45656 = -1.*t45025*t44466;
  t45658 = -1.*t45004*t44757;
  t45637 = -0.15121*t44983;
  t45638 = -0.15121*t44349;
  t45639 = t45637 + t45638;
  t45640 = var2[12]*t45639;
  t45641 = -1.*t4555*t44722;
  t45642 = t44359*t44735;
  t45643 = t45641 + t45642;
  t45697 = t44753*t45120;
  t45705 = -1.*t45120*t44466;
  t45103 = t4144*t44783;
  t45104 = t44469*t44750;
  t45105 = t45103 + t45104;
  t45092 = 0.28121*t44167;
  t45093 = -1.*t44686*t44167;
  p_output1[0]=(-1.*t4144*t44466 - 1.*t44469*t44583)*var2[1] + t44626*var2[2];
  p_output1[1]=t44583*var2[0] - 1.*t4144*t44635*var2[1] + t44469*t44635*var2[2] + (t44670*(t44547*t44675*t44739 + t44547*t44675*t44743) + t44750*t44765 + t44470*t44675*(t44739*t44750 + t44743*t44750 + t44670*t44763 + t44763*t44773) - 1.*t44547*t44675*t44795)*var2[3];
  p_output1[2]=t44812 + t44821 + t44830 + (t44886 + t44670*(t44841 + t44842 - 1.*t44675*t44838*t44887 - 1.*t44675*t44838*t44889 + t44892 + t44893) + t44470*t44675*(t44470*t44670*t44838 - 1.*t44547*t44750*t44838 + t44853 + t44859 + t44900 + t44901) + t44904)*var2[3] + (t44834 + t44783*(-1.*t44675*t44838 + t44841 + t44842 + t44847) + t44753*(t44662*t44838 + t44853 + t44858 + t44859) + t44880)*var2[4];
  p_output1[3]=t44812 + t44821 + t44830 + (t44886 + t44904 + t44670*(t44841 + t44892 + t44893 - 1.*t44675*t44887*t44931 - 1.*t44675*t44889*t44931 + t44939) + t44470*t44675*(t44853 + t44900 + t44901 + t44470*t44670*t44931 - 1.*t44547*t44750*t44931 + t44949))*var2[3] + (t44834 + t44880 + t44783*(t44841 + t44847 - 1.*t44675*t44931 + t44939) + t44753*(t44853 + t44858 + t44662*t44931 + t44949))*var2[4] + t44349*(t44359*t44722 - 1.*t44359*t44910 + t44735*t4555 + t44919*t4555)*var2[5];
  p_output1[4]=t44995*var2[0] + (t44469*t45004 - 1.*t4144*t45010)*var2[1] + (t4144*t45004 + t44469*t45010)*var2[2] + (t44670*(t45028 - 1.*t44470*t44675*t45064 + t44547*t44675*t45069) + t44765*t45077 + t44470*t44675*(t45051 + t45053 + t44670*t45064 + t44750*t45069 + t45083 + t45084))*var2[3] + (t44466*t44833 + t44783*(t45028 - 1.*t44675*t45035) + t44753*(t44662*t45035 + t45043 + t44349*t45048 + t45051 + t45053 + t45055))*var2[4] + t44505*t44979*var2[5];
  p_output1[5]=t44670*var2[0] + t45111*var2[1] + t45105*var2[2] + (t44670*(t45121 - 1.*t44470*t44675*t45156 + t44547*t44675*t45160) + t44765*t45166 + t44470*t44675*(t45142 + t45145 + t44670*t45156 + t44750*t45160 + t44743*t45166 + t44763*t45174))*var2[3] + (t44783*(t45121 - 1.*t44675*t45125) + t44833*t45133 + t44753*(t44655*t44692 + t44662*t45125 + t44349*t45139 + t45142 + t45145 + t44737*t45148))*var2[4] + t44655*t44979*var2[5] + (-0.27*Power(t44167,2) + t45092 + t45093)*var2[13];
  p_output1[6]=t45077;
  p_output1[7]=t44626;
  p_output1[8]=t45186;
  p_output1[9]=t44670*t44765 + t44470*t44675*t44795;
  p_output1[10]=t44783*t44833 + t44753*t44879;
  p_output1[11]=t44349*t44979;
  p_output1[12]=0.28121*t44219 - 0.27*t44167*t44219 - 1.*t44219*t44686;
  p_output1[13]=(t44469*t44547*t44675 - 1.*t4144*t44753)*var2[1] + t45216*var2[2];
  p_output1[14]=-1.*t44547*t44675*var2[0] + t4144*t44470*t44675*var2[1] - 1.*t44469*t44470*t44675*var2[2] + ((-1.*t44739*t44750 - 1.*t44743*t44750 - 1.*t44670*t44763 - 1.*t44763*t44773)*t45077 + t44670*(t44583*t44739 + t44583*t44743 + t44635*t44763 + t44763*t45077) + t44583*t45242 + t44750*t45250)*var2[3];
  p_output1[15]=t45255 + t45259 + t45263 + (t45077*(-1.*t44470*t44670*t44838 + t44547*t44750*t44838 + t45266 + t45268 + t45291 + t45292) + t44670*(-1.*t44547*t44583*t44838 + t44470*t44838*t45077 + t45279 + t45281 + t45299 + t45300) + t45304 + t45305)*var2[3] + (t44466*(-1.*t44662*t44838 + t45266 + t45267 + t45268) + t45276 + t44783*(t44575*t44838 + t45279 + t45280 + t45281) + t45286)*var2[4];
  p_output1[16]=t45255 + t45259 + t45263 + (t45304 + t45305 + t45077*(-1.*t44470*t44670*t44931 + t44547*t44750*t44931 + t45266 + t45291 + t45292 + t45325) + t44670*(-1.*t44547*t44583*t44931 + t44470*t44931*t45077 + t45279 + t45299 + t45300 + t45332))*var2[3] + (t45276 + t45286 + t44466*(-1.*t44662*t44931 + t45266 + t45267 + t45325) + t44783*(t44575*t44931 + t45279 + t45280 + t45332))*var2[4] + (t44349*(t44349*t44359*t44735 + t44349*t44359*t44919 - 1.*t44349*t44722*t4555 + t44349*t44910*t4555) + t44505*(-1.*t44359*t44655*t44735 - 1.*t44359*t44655*t44919 + t44655*t44722*t4555 - 1.*t44655*t44910*t4555))*var2[5];
  p_output1[17]=(t44995*t45242 + t45077*t45250 + t44670*(t44743*t44995 + t44763*t45010 + t44583*t45069 + t45064*t45077 + t45407 + t45410) + t45077*(-1.*t44670*t45064 - 1.*t44750*t45069 + t45415 + t45418 + t45434 + t45435))*var2[3] + (t45004*t45275 + t44466*t45284 + t44783*(t44737*t44989 + t44575*t45035 + t45356 + t45359 + t45407 + t45410) + t44466*(-1.*t44662*t45035 + t45370 + t45372 + t45415 + t45418 + t45419))*var2[4] + (t44983*t45381 + t44505*t45401 + t44505*(-1.*t44349*t44359*t44722 + t45370 + t45372 - 1.*t44655*t44692*t45383 - 1.*t44655*t44692*t45385 - 1.*t44349*t44735*t4555) + t44349*(t44359*t44505*t44722 + t45356 + t45359 + t44349*t44692*t45383 + t44349*t44692*t45385 + t44505*t44735*t4555))*var2[5] + (t44983*t45354 + t44349*(t44505*t44715 + t44874 + t45356 + t45359) + t44505*t45366 + t44505*(-1.*t44349*t44715 + t45368 + t45370 + t45372))*var2[12];
  p_output1[18]=(t44670*t45242 + t45166*t45250 + t44670*(t44784 + t44788 + t44793 + t45077*t45156 + t44583*t45160 + t45474) + t45077*(-1.*t44670*t45156 - 1.*t44750*t45160 - 1.*t44743*t45166 - 1.*t44763*t45174 + t45479 + t45482))*var2[3] + (t44783*t45275 + t45133*t45284 + t44783*(t44784 + t44874 + t44875 + t44575*t45125 + t45444 + t45474) + t44466*(-1.*t44662*t45125 - 1.*t44737*t45148 + t45368 + t45451 + t45479 + t45482))*var2[4] + (t44349*t45381 + t44655*t45401 + t44349*(t44359*t44655*t44722 + t44874 + t44349*t45116*t45383 + t44349*t45116*t45385 + t45444 + t44655*t44735*t4555) + t44505*(-1.*t44359*t44722*t44983 + t45368 - 1.*t44655*t45116*t45383 - 1.*t44655*t45116*t45385 + t45451 - 1.*t44735*t44983*t4555))*var2[5] + (t44349*t45354 + t44655*t45366 + t44349*(t44655*t44715 + t44874 + t44349*t45116 + t45444) + t44505*(-1.*t44715*t44983 - 1.*t44655*t45116 + t45368 + t45451))*var2[12];
  p_output1[19]=t44470*t44675;
  p_output1[20]=t45216;
  p_output1[21]=-1.*t44469*t44547*t44675 + t4144*t44753;
  p_output1[22]=t45077*t45242 + t44670*t45250;
  p_output1[23]=t44466*t45275 + t44783*t45284;
  p_output1[24]=t44505*t45381 + t44349*t45401;
  p_output1[25]=-0.15121 + t44505*t45354 + t44349*t45366;
  p_output1[26]=(-1.*t44469*t44750 - 1.*t4144*t44783)*var2[1] + t45111*var2[2];
  p_output1[27]=t44750*var2[0] - 1.*t4144*t44773*var2[1] + t44469*t44773*var2[2] + ((-1.*t44547*t44675*t44739 - 1.*t44547*t44675*t44743)*t45077 + t44470*t44675*(-1.*t44583*t44739 - 1.*t44583*t44743 - 1.*t44635*t44763 - 1.*t44763*t45077) + t44583*t45544 - 1.*t44547*t44675*t45554)*var2[3];
  p_output1[28]=t45559 + t45563 + t45568 + (t45589 + t45077*(t44675*t44838*t44887 + t44675*t44838*t44889 + t45573 + t45574 + t45592 + t45593) + t44470*t44675*(t44547*t44583*t44838 - 1.*t44470*t44838*t45077 + t45579 + t45581 + t45598 + t45600) + t45603)*var2[3] + (t45571 + t44466*(t44675*t44838 + t45573 + t45574 + t45575) + t44753*(-1.*t44575*t44838 + t45579 + t45580 + t45581) + t45586)*var2[4];
  p_output1[29]=t45559 + t45563 + t45568 + (t45589 + t45603 + t45077*(t44675*t44887*t44931 + t44675*t44889*t44931 + t45573 + t45592 + t45593 + t45614) + t44470*t44675*(t44547*t44583*t44931 - 1.*t44470*t44931*t45077 + t45579 + t45598 + t45600 + t45619))*var2[3] + (t45571 + t45586 + t44466*(t44675*t44931 + t45573 + t45575 + t45614) + t44753*(-1.*t44575*t44931 + t45579 + t45580 + t45619))*var2[4] + t44505*(-1.*t44359*t44722 + t44359*t44910 - 1.*t44735*t4555 - 1.*t44919*t4555)*var2[5];
  p_output1[30]=t45640 + t45077*var2[0] + t44626*var2[1] + t45186*var2[2] + (t44995*t45544 + t45077*(t44470*t44675*t45064 - 1.*t44547*t44675*t45069 + t45649) + t44470*t44675*(-1.*t44743*t44995 - 1.*t44763*t45010 - 1.*t44583*t45069 - 1.*t45064*t45077 + t45656 + t45658))*var2[3] + (t45004*t45570 + t44466*(t44675*t45035 + t45649) + t44753*(-1.*t44692*t44983 - 1.*t44737*t44989 - 1.*t44575*t45035 - 1.*t44505*t45048 + t45656 + t45658))*var2[4] + t44983*t45643*var2[5];
  p_output1[31]=t45640 + t45166*var2[0] + (t44469*t45133 - 1.*t4144*t45174)*var2[1] + (t4144*t45133 + t44469*t45174)*var2[2] + (t44670*t45544 + t45077*(t44470*t44675*t45156 - 1.*t44547*t44675*t45160 + t45697) + t44470*t44675*(-1.*t45077*t45156 - 1.*t44583*t45160 + t45239 + t45240 + t45241 + t45705))*var2[3] + (t44783*t45570 + t44466*(t44675*t45125 + t45697) + t44753*(-1.*t44575*t45125 - 1.*t44505*t45139 + t45239 + t45272 + t45274 + t45705))*var2[4] + t44349*t45643*var2[5] + (-0.28121*t44219 + 0.27*t44167*t44219 + t44219*t44686)*var2[13];
  p_output1[32]=t44670;
  p_output1[33]=t45111;
  p_output1[34]=t45105;
  p_output1[35]=t45077*t45544 + t44470*t44675*t45554;
  p_output1[36]=t44466*t45570 + t44753*t45585;
  p_output1[37]=t44505*t45643;
  p_output1[38]=-0.15121*t44505 - 0.15121*t44655;
  p_output1[39]=0.27*Power(t44219,2) + t45092 + t45093;
  p_output1[40]=-0.27;
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
