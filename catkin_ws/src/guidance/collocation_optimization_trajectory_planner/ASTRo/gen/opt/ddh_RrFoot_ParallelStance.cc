/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:20 GMT+02:00
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
  double t22654;
  double t19460;
  double t20516;
  double t22905;
  double t24071;
  double t24342;
  double t24347;
  double t24420;
  double t24448;
  double t24531;
  double t24586;
  double t27843;
  double t27925;
  double t27924;
  double t27926;
  double t27928;
  double t27930;
  double t27960;
  double t28032;
  double t28282;
  double t28306;
  double t29129;
  double t14946;
  double t5174;
  double t5772;
  double t10080;
  double t10984;
  double t29344;
  double t29426;
  double t29605;
  double t29620;
  double t31544;
  double t44878;
  double t45285;
  double t46843;
  double t46959;
  double t46960;
  double t46961;
  double t46980;
  double t46984;
  double t47006;
  double t47007;
  double t4232;
  double t4936;
  double t47436;
  double t47409;
  double t47448;
  double t47612;
  double t47618;
  double t47692;
  double t47695;
  double t47698;
  double t47701;
  double t47702;
  double t47703;
  double t47704;
  double t47708;
  double t47748;
  double t47621;
  double t47655;
  double t47667;
  double t47670;
  double t47684;
  double t47685;
  double t47875;
  double t47877;
  double t47878;
  double t47890;
  double t47903;
  double t47904;
  double t47905;
  double t47908;
  double t47910;
  double t47911;
  double t47912;
  double t47917;
  double t47918;
  double t47920;
  double t47931;
  double t47953;
  double t47964;
  double t47927;
  double t47928;
  double t47929;
  double t47968;
  double t47973;
  double t47974;
  double t48012;
  double t48143;
  double t48144;
  double t47976;
  double t47977;
  double t47978;
  double t47979;
  double t48145;
  double t48146;
  double t48152;
  double t48154;
  double t48158;
  double t48160;
  double t48161;
  double t48162;
  double t48166;
  double t48173;
  double t48174;
  double t48175;
  double t48180;
  double t48181;
  double t48182;
  double t48190;
  double t48208;
  double t48213;
  double t48219;
  double t48232;
  double t48234;
  double t48235;
  double t48241;
  double t48245;
  double t48250;
  double t48239;
  double t48258;
  double t48259;
  double t48260;
  double t48262;
  double t48264;
  double t48269;
  double t48273;
  double t48274;
  double t48275;
  double t48280;
  double t48281;
  double t48288;
  double t48290;
  double t48291;
  double t48312;
  double t48313;
  double t48314;
  double t48357;
  double t48358;
  double t48359;
  double t48511;
  double t48513;
  double t48514;
  double t48652;
  double t48788;
  double t48790;
  double t48516;
  double t48578;
  double t48532;
  double t48538;
  double t48540;
  double t48648;
  double t48794;
  double t16005;
  double t48360;
  double t48361;
  double t48362;
  double t48363;
  double t48452;
  double t48476;
  double t48490;
  double t48507;
  double t48508;
  double t48510;
  double t48854;
  double t48855;
  double t48851;
  double t48852;
  double t48555;
  double t48865;
  double t48870;
  double t48886;
  double t48911;
  double t48912;
  double t48916;
  double t48792;
  double t48804;
  double t48807;
  double t48808;
  double t48812;
  double t48918;
  double t48814;
  double t48815;
  double t48932;
  double t48823;
  double t48824;
  double t48830;
  double t48962;
  double t48963;
  double t48971;
  double t49003;
  double t49006;
  double t49007;
  double t49022;
  double t49023;
  double t49024;
  double t49027;
  double t49030;
  double t49033;
  double t49045;
  double t49046;
  double t49047;
  double t49048;
  double t49050;
  double t49051;
  double t49052;
  double t49095;
  double t49097;
  double t49098;
  double t49054;
  double t49116;
  double t49118;
  double t49124;
  double t49127;
  double t49134;
  double t49136;
  double t49137;
  double t49140;
  double t49142;
  double t49144;
  double t48973;
  double t48978;
  double t48985;
  double t48990;
  double t49190;
  double t49191;
  double t49192;
  double t49193;
  double t49194;
  double t49197;
  double t49198;
  double t49199;
  double t49203;
  double t49204;
  double t49205;
  double t49195;
  double t49211;
  double t49213;
  double t49214;
  double t49225;
  double t49226;
  double t49227;
  double t49221;
  double t49224;
  double t49251;
  double t49255;
  double t49256;
  double t49264;
  double t49266;
  double t49269;
  double t49278;
  double t49280;
  double t49281;
  double t49111;
  double t49306;
  double t49308;
  double t49309;
  double t49310;
  double t49311;
  double t49312;
  double t49313;
  double t49314;
  double t49318;
  double t49319;
  double t49320;
  double t49321;
  double t49322;
  double t49326;
  double t49328;
  double t49329;
  double t49330;
  double t17810;
  double t47412;
  double t49349;
  double t49350;
  double t49351;
  double t49355;
  double t49356;
  double t49357;
  double t49337;
  double t49339;
  double t49341;
  double t49344;
  double t49345;
  double t49346;
  double t49128;
  double t49379;
  double t49381;
  double t49382;
  double t49384;
  double t49386;
  double t49387;
  double t49388;
  double t49365;
  double t49367;
  double t49369;
  double t49161;
  double t49162;
  double t49401;
  double t49402;
  double t49403;
  double t49404;
  double t49406;
  double t49407;
  double t49408;
  double t49392;
  double t49393;
  double t49394;
  double t49397;
  double t49398;
  double t49399;
  double t49427;
  double t49429;
  double t49434;
  double t49438;
  double t49416;
  double t49417;
  double t49418;
  double t49419;
  double t49420;
  double t49421;
  double t49422;
  double t49423;
  double t49424;
  double t49428;
  double t49432;
  double t49436;
  double t49441;
  double t49490;
  double t49449;
  double t49451;
  double t49495;
  double t49460;
  double t49461;
  double t49465;
  double t49466;
  double t48331;
  double t48333;
  double t48334;
  double t49541;
  double t49545;
  double t49550;
  double t49561;
  double t49563;
  double t49555;
  double t49583;
  double t49585;
  double t48995;
  double t49008;
  double t49009;
  double t49591;
  double t49593;
  double t49623;
  double t49627;
  double t49629;
  double t49656;
  double t49662;
  double t49664;
  double t49292;
  double t49293;
  double t49294;
  double t49170;
  double t49171;
  double t49693;
  double t49694;
  double t49695;
  double t49698;
  double t49699;
  double t49700;
  double t49178;
  double t49704;
  double t49705;
  double t49706;
  double t49709;
  double t49710;
  double t49711;
  double t49179;
  double t49180;
  double t49181;
  double t49183;
  double t49185;
  double t49186;
  double t49187;
  double t49189;
  double t49594;
  double t49729;
  double t49730;
  double t49731;
  double t49732;
  double t49733;
  double t49734;
  double t49735;
  double t49720;
  double t49722;
  double t49723;
  double t49610;
  double t49611;
  double t49758;
  double t49759;
  double t49760;
  double t49761;
  double t49762;
  double t49764;
  double t49765;
  double t49738;
  double t49740;
  double t49741;
  double t49744;
  double t49745;
  double t49747;
  double t47813;
  double t47916;
  double t47923;
  double t49774;
  double t49784;
  double t49787;
  double t49830;
  double t49837;
  double t49889;
  double t49891;
  double t49895;
  double t49897;
  double t49878;
  double t49879;
  double t49880;
  double t49881;
  double t49882;
  double t49883;
  double t49884;
  double t49885;
  double t49886;
  double t49887;
  double t49890;
  double t49896;
  double t49901;
  double t49904;
  double t49929;
  double t49907;
  double t49908;
  double t49936;
  double t49913;
  double t49914;
  double t49917;
  t22654 = Cos(var1[17]);
  t19460 = Sin(var1[17]);
  t20516 = 0.28121*t19460;
  t22905 = -1.*t22654;
  t24071 = 1. + t22905;
  t24342 = -0.50321*t24071;
  t24347 = -0.23321*t22654;
  t24420 = t24342 + t24347;
  t24448 = t24420*t19460;
  t24531 = -0.27*t22654*t19460;
  t24586 = t20516 + t24448 + t24531;
  t27843 = Cos(var1[16]);
  t27925 = Sin(var1[16]);
  t27924 = -1.*t27843*t22654;
  t27926 = -1.*t27925*t19460;
  t27928 = t27924 + t27926;
  t27930 = -0.15121*t27928;
  t27960 = t27843*t22654;
  t28032 = t27925*t19460;
  t28282 = t27960 + t28032;
  t28306 = -0.15121*t28282;
  t29129 = t27930 + t28306;
  t14946 = Sin(var1[15]);
  t5174 = Cos(var1[15]);
  t5772 = -1.*t5174;
  t10080 = 1. + t5772;
  t10984 = -0.15121*t10080;
  t29344 = -1.*t27843;
  t29426 = 1. + t29344;
  t29605 = -0.28121*t29426;
  t29620 = t27843*t24420;
  t31544 = 0.27*t27925*t19460;
  t44878 = t29605 + t29620 + t31544;
  t45285 = t5174*t44878;
  t46843 = t10984 + t45285;
  t46959 = -1.*t14946*t46843;
  t46960 = -0.15121*t5174;
  t46961 = 0.15121*t14946;
  t46980 = t14946*t44878;
  t46984 = t10984 + t46960 + t46961 + t46980;
  t47006 = t5174*t46984;
  t47007 = t46959 + t47006;
  t4232 = Cos(var1[4]);
  t4936 = Cos(var1[5]);
  t47436 = Sin(var1[5]);
  t47409 = Sin(var1[4]);
  t47448 = t5174*t4232*t4936;
  t47612 = -1.*t4232*t14946*t47436;
  t47618 = t47448 + t47612;
  t47692 = -1.*t22654*t27925;
  t47695 = t27843*t19460;
  t47698 = t47692 + t47695;
  t47701 = t47698*t47409;
  t47702 = t5174*t4936*t27928;
  t47703 = -1.*t14946*t27928*t47436;
  t47704 = t47702 + t47703;
  t47708 = t4232*t47704;
  t47748 = t47701 + t47708;
  t47621 = t27925*t47409;
  t47655 = t27843*t47618;
  t47667 = t47621 + t47655;
  t47670 = t27843*t47409;
  t47684 = -1.*t27925*t47618;
  t47685 = t47670 + t47684;
  t47875 = Sin(var1[3]);
  t47877 = t4936*t14946*t27928;
  t47878 = t5174*t27928*t47436;
  t47890 = t47877 + t47878;
  t47903 = t47875*t47890;
  t47904 = Cos(var1[3]);
  t47905 = t4232*t47698;
  t47908 = -1.*t47409*t47704;
  t47910 = t47905 + t47908;
  t47911 = t47904*t47910;
  t47912 = t47903 + t47911;
  t47917 = t47904*t47890;
  t47918 = -1.*t47875*t47910;
  t47920 = t47917 + t47918;
  t47931 = -1.*t5174*t4936;
  t47953 = t14946*t47436;
  t47964 = t47931 + t47953;
  t47927 = t4936*t14946*t47698;
  t47928 = t5174*t47698*t47436;
  t47929 = t47927 + t47928;
  t47968 = t4936*t46984;
  t47973 = t46843*t47436;
  t47974 = t47968 + t47973;
  t48012 = t4936*t46843;
  t48143 = -1.*t46984*t47436;
  t48144 = t48012 + t48143;
  t47976 = -1.*t47964*t47974;
  t47977 = t4936*t14946;
  t47978 = t5174*t47436;
  t47979 = t47977 + t47978;
  t48145 = -1.*t47979*t48144;
  t48146 = t47976 + t48145;
  t48152 = t47929*t48146;
  t48154 = 0.28121*t27925;
  t48158 = t24420*t27925;
  t48160 = -0.27*t27843*t19460;
  t48161 = t48154 + t48158 + t48160;
  t48162 = t48161*t28282;
  t48166 = t47929*t47974;
  t48173 = t5174*t4936*t47698;
  t48174 = -1.*t14946*t47698*t47436;
  t48175 = t48173 + t48174;
  t48180 = t48175*t48144;
  t48181 = t48162 + t48166 + t48180;
  t48182 = t47964*t48181;
  t48190 = t48152 + t48182;
  t48208 = t28282*t47409;
  t48213 = t4232*t48175;
  t48219 = t48208 + t48213;
  t48232 = t48161*t47409;
  t48234 = t4232*t48144;
  t48235 = t48232 + t48234;
  t48241 = t4232*t48161;
  t48245 = -1.*t47409*t48144;
  t48250 = t48241 + t48245;
  t48239 = -1.*t4232*t47979*t48235;
  t48258 = t47409*t47979*t48250;
  t48259 = t47976 + t48239 + t48258;
  t48260 = t48219*t48259;
  t48262 = t48219*t48235;
  t48264 = t4232*t28282;
  t48269 = -1.*t47409*t48175;
  t48273 = t48264 + t48269;
  t48274 = t48273*t48250;
  t48275 = t48166 + t48262 + t48274;
  t48280 = t4232*t47979*t48275;
  t48281 = t48260 + t48280;
  t48288 = -1.*t47698*t47409;
  t48290 = -1.*t4232*t47704;
  t48291 = t48288 + t48290;
  t48312 = -1.*t48161*t47409;
  t48313 = -1.*t4232*t48144;
  t48314 = t48312 + t48313;
  t48357 = -1.*t4936*t14946*t27928;
  t48358 = -1.*t5174*t27928*t47436;
  t48359 = t48357 + t48358;
  t48511 = -1.*t4936*t46984;
  t48513 = -1.*t46843*t47436;
  t48514 = t48511 + t48513;
  t48652 = -1.*t4936*t14946*t47698;
  t48788 = -1.*t5174*t47698*t47436;
  t48790 = t48652 + t48788;
  t48516 = -1.*t47979*t47974;
  t48578 = -1.*t47964*t48144;
  t48532 = t5174*t4936;
  t48538 = -1.*t14946*t47436;
  t48540 = t48532 + t48538;
  t48648 = t48175*t47974;
  t48794 = t47929*t48144;
  t16005 = -0.15121*t14946;
  t48360 = var2[0]*t4232*t48359;
  t48361 = t47875*t47409*t48359;
  t48362 = t47904*t47704;
  t48363 = t48361 + t48362;
  t48452 = var2[1]*t48363;
  t48476 = -1.*t47904*t47409*t48359;
  t48490 = t47875*t47704;
  t48507 = t48476 + t48490;
  t48508 = var2[2]*t48507;
  t48510 = t48175*t48146;
  t48854 = -1.*t14946*t44878;
  t48855 = t16005 + t48854;
  t48851 = 0.15121*t5174;
  t48852 = t48851 + t45285;
  t48555 = -1.*t48540*t48144;
  t48865 = t4936*t48855;
  t48870 = -1.*t48852*t47436;
  t48886 = t48865 + t48870;
  t48911 = t4936*t48852;
  t48912 = t48855*t47436;
  t48916 = t48911 + t48912;
  t48792 = t48790*t48144;
  t48804 = t47979*t48181;
  t48807 = t4232*t48790*t48259;
  t48808 = Power(t4232,2);
  t48812 = Power(t47409,2);
  t48918 = -1.*t47964*t48916;
  t48814 = -1.*t4232*t48540*t48235;
  t48815 = t47409*t48540*t48250;
  t48932 = t47929*t48916;
  t48823 = t4232*t48790*t48235;
  t48824 = -1.*t47409*t48790*t48250;
  t48830 = t4232*t48540*t48275;
  t48962 = t22654*t27925;
  t48963 = -1.*t27843*t19460;
  t48971 = t48962 + t48963;
  t49003 = t5174*t4936*t48971;
  t49006 = -1.*t14946*t48971*t47436;
  t49007 = t49003 + t49006;
  t49022 = t4936*t14946*t48971;
  t49023 = t5174*t48971*t47436;
  t49024 = t49022 + t49023;
  t49027 = t4232*t27928;
  t49030 = -1.*t47409*t49007;
  t49033 = t49027 + t49030;
  t49045 = -0.28121*t27925;
  t49046 = -1.*t24420*t27925;
  t49047 = 0.27*t27843*t19460;
  t49048 = t49045 + t49046 + t49047;
  t49050 = t4936*t14946*t49048;
  t49051 = t5174*t49048*t47436;
  t49052 = t49050 + t49051;
  t49095 = t5174*t4936*t49048;
  t49097 = -1.*t14946*t49048*t47436;
  t49098 = t49095 + t49097;
  t49054 = -1.*t47964*t49052;
  t49116 = 0.28121*t27843;
  t49118 = t49116 + t29620 + t31544;
  t49124 = t49052*t47929;
  t49127 = t47890*t47974;
  t49134 = t49118*t47409;
  t49136 = t4232*t49098;
  t49137 = t49134 + t49136;
  t49140 = t4232*t49118;
  t49142 = -1.*t47409*t49098;
  t49144 = t49140 + t49142;
  t48973 = -0.15121*t48971;
  t48978 = -0.15121*t47698;
  t48985 = t48973 + t48978;
  t48990 = var2[15]*t48985;
  t49190 = 0.27*t22654*t27925;
  t49191 = t49190 + t48160;
  t49192 = t4936*t14946*t49191;
  t49193 = t5174*t49191*t47436;
  t49194 = t49192 + t49193;
  t49197 = t5174*t4936*t49191;
  t49198 = -1.*t14946*t49191*t47436;
  t49199 = t49197 + t49198;
  t49203 = t4936*t14946*t28282;
  t49204 = t5174*t28282*t47436;
  t49205 = t49203 + t49204;
  t49195 = -1.*t47964*t49194;
  t49211 = -0.27*t27843*t22654;
  t49213 = -0.27*t27925*t19460;
  t49214 = t49211 + t49213;
  t49225 = t5174*t4936*t28282;
  t49226 = -1.*t14946*t28282*t47436;
  t49227 = t49225 + t49226;
  t49221 = t49194*t47929;
  t49224 = t49205*t47974;
  t49251 = t49214*t47409;
  t49255 = t4232*t49199;
  t49256 = t49251 + t49255;
  t49264 = t4232*t49214;
  t49266 = -1.*t47409*t49199;
  t49269 = t49264 + t49266;
  t49278 = t48971*t47409;
  t49280 = t4232*t49227;
  t49281 = t49278 + t49280;
  t49111 = t48161*t47698;
  t49306 = t27928*t44878;
  t49308 = t49111 + t49306;
  t49309 = t28282*t49308;
  t49310 = -1.*t47698*t44878;
  t49311 = -1.*t48161*t28282;
  t49312 = t49310 + t49311;
  t49313 = t47698*t49312;
  t49314 = -0.15121 + t49309 + t49313;
  t49318 = -1.*t5174*t47698*t46843;
  t49319 = -1.*t14946*t47698*t46984;
  t49320 = t49311 + t49318 + t49319;
  t49321 = t47698*t49320;
  t49322 = t5174*t27928*t46843;
  t49326 = t14946*t27928*t46984;
  t49328 = t49111 + t49322 + t49326;
  t49329 = t28282*t49328;
  t49330 = t49321 + t49329;
  t17810 = t10984 + t16005;
  t47412 = t10984 + t46961;
  t49349 = t47875*t47409*t47979;
  t49350 = t47904*t47964;
  t49351 = t49349 + t49350;
  t49355 = -1.*t47904*t47409*t47979;
  t49356 = t47875*t47964;
  t49357 = t49355 + t49356;
  t49337 = t4936*t47875*t47409;
  t49339 = t47904*t47436;
  t49341 = t49337 + t49339;
  t49344 = t47904*t4936;
  t49345 = -1.*t47875*t47409*t47436;
  t49346 = t49344 + t49345;
  t49128 = t47704*t48144;
  t49379 = -1.*t47929*t47974;
  t49381 = -1.*t48175*t48144;
  t49382 = t49311 + t49379 + t49381;
  t49384 = t47890*t49382;
  t49386 = t49111 + t49127 + t49128;
  t49387 = t47929*t49386;
  t49388 = t49384 + t49387;
  t49365 = t5174*t49341;
  t49367 = t14946*t49346;
  t49369 = t49365 + t49367;
  t49161 = t47748*t48235;
  t49162 = t47910*t48250;
  t49401 = -1.*t48219*t48235;
  t49402 = -1.*t48273*t48250;
  t49403 = t49379 + t49401 + t49402;
  t49404 = t47748*t49403;
  t49406 = t49127 + t49161 + t49162;
  t49407 = t48219*t49406;
  t49408 = t49404 + t49407;
  t49392 = -1.*t4232*t27925*t47875;
  t49393 = t27843*t49369;
  t49394 = t49392 + t49393;
  t49397 = -1.*t27843*t4232*t47875;
  t49398 = -1.*t27925*t49369;
  t49399 = t49397 + t49398;
  t49427 = -1.*t48175*t47974;
  t49429 = -1.*t47929*t48144;
  t49434 = t47704*t47974;
  t49438 = t47890*t48144;
  t49416 = var2[0]*t4232*t48540;
  t49417 = t47875*t47979;
  t49418 = -1.*t47904*t47409*t48540;
  t49419 = t49417 + t49418;
  t49420 = var2[2]*t49419;
  t49421 = t47904*t47979;
  t49422 = t47875*t47409*t48540;
  t49423 = t49421 + t49422;
  t49424 = var2[1]*t49423;
  t49428 = -1.*t48790*t48144;
  t49432 = t47704*t49382;
  t49436 = t48359*t48144;
  t49441 = t48175*t49386;
  t49490 = -1.*t47929*t48916;
  t49449 = -1.*t4232*t48790*t48235;
  t49451 = t47409*t48790*t48250;
  t49495 = t47890*t48916;
  t49460 = t4232*t48359*t48235;
  t49461 = -1.*t47409*t48359*t48250;
  t49465 = t4232*t48359*t49403;
  t49466 = t4232*t48790*t49406;
  t48331 = -1.*t28282*t47409;
  t48333 = -1.*t4232*t48175;
  t48334 = t48331 + t48333;
  t49541 = t48161*t27928;
  t49545 = t47698*t49118;
  t49550 = -1.*t48161*t47698;
  t49561 = Power(t5174,2);
  t49563 = Power(t14946,2);
  t49555 = -1.*t49118*t28282;
  t49583 = t49052*t47890;
  t49585 = t49024*t47974;
  t48995 = t27928*t47409;
  t49008 = t4232*t49007;
  t49009 = t48995 + t49008;
  t49591 = -1.*t49052*t47929;
  t49593 = -1.*t47890*t47974;
  t49623 = t47698*t49214;
  t49627 = -1.*t48971*t48161;
  t49629 = -1.*t49214*t28282;
  t49656 = t49194*t47890;
  t49662 = -1.*t49194*t47929;
  t49664 = -1.*t49205*t47974;
  t49292 = t4232*t48971;
  t49293 = -1.*t47409*t49227;
  t49294 = t49292 + t49293;
  t49170 = 0.28121*t22654;
  t49171 = t24420*t22654;
  t49693 = Power(t19460,2);
  t49694 = 0.27*t49693;
  t49695 = t49170 + t49171 + t49694;
  t49698 = t14946*t46843;
  t49699 = -1.*t5174*t46984;
  t49700 = t49698 + t49699;
  t49178 = var2[0]*t48219;
  t49704 = -1.*t47904*t4936*t47409;
  t49705 = t47875*t47436;
  t49706 = t49704 + t49705;
  t49709 = t4936*t47875;
  t49710 = t47904*t47409*t47436;
  t49711 = t49709 + t49710;
  t49179 = t47875*t47929;
  t49180 = t47904*t48273;
  t49181 = t49179 + t49180;
  t49183 = var2[2]*t49181;
  t49185 = t47904*t47929;
  t49186 = -1.*t47875*t48273;
  t49187 = t49185 + t49186;
  t49189 = var2[1]*t49187;
  t49594 = -1.*t47704*t48144;
  t49729 = t47964*t47974;
  t49730 = t47979*t48144;
  t49731 = t49729 + t49730;
  t49732 = t47890*t49731;
  t49733 = t49550 + t49593 + t49594;
  t49734 = t47964*t49733;
  t49735 = t49732 + t49734;
  t49720 = t5174*t49706;
  t49722 = t14946*t49711;
  t49723 = t49720 + t49722;
  t49610 = -1.*t47748*t48235;
  t49611 = -1.*t47910*t48250;
  t49758 = t4232*t47979*t48235;
  t49759 = -1.*t47409*t47979*t48250;
  t49760 = t49729 + t49758 + t49759;
  t49761 = t47748*t49760;
  t49762 = t49593 + t49610 + t49611;
  t49764 = t4232*t47979*t49762;
  t49765 = t49761 + t49764;
  t49738 = t47904*t4232*t27925;
  t49740 = t27843*t49723;
  t49741 = t49738 + t49740;
  t49744 = t27843*t47904*t4232;
  t49745 = -1.*t27925*t49723;
  t49747 = t49744 + t49745;
  t47813 = var2[0]*t47748;
  t47916 = var2[2]*t47912;
  t47923 = var2[1]*t47920;
  t49774 = t47964*t49052;
  t49784 = -1.*t49052*t47890;
  t49787 = -1.*t49024*t47974;
  t49830 = t47964*t49194;
  t49837 = -1.*t49194*t47890;
  t49889 = t47979*t47974;
  t49891 = t47964*t48144;
  t49895 = -1.*t47704*t47974;
  t49897 = -1.*t47890*t48144;
  t49878 = var2[0]*t4232*t48790;
  t49879 = t47875*t47409*t48790;
  t49880 = t47904*t48175;
  t49881 = t49879 + t49880;
  t49882 = var2[1]*t49881;
  t49883 = -1.*t47904*t47409*t48790;
  t49884 = t47875*t48175;
  t49885 = t49883 + t49884;
  t49886 = var2[2]*t49885;
  t49887 = t47704*t49731;
  t49890 = t48540*t48144;
  t49896 = -1.*t48359*t48144;
  t49901 = t47979*t49733;
  t49904 = t4232*t48359*t49760;
  t49929 = t47964*t48916;
  t49907 = t4232*t48540*t48235;
  t49908 = -1.*t47409*t48540*t48250;
  t49936 = -1.*t47890*t48916;
  t49913 = -1.*t4232*t48359*t48235;
  t49914 = t47409*t48359*t48250;
  t49917 = t4232*t48540*t49762;
  p_output1[0]=0.28121*t27925*t47409 - 1.*t4232*t47412*t47436 - 0.28121*t29426*t47618 - 0.50321*t24071*t47667 - 0.50321*t19460*t47685 - 0.23321*(t22654*t47667 - 1.*t19460*t47685) + t47813 + t47916 + t47923 + t17810*t4232*t4936 - 0.15121*(-1.*t14946*t4232*t4936 - 1.*t4232*t47436*t5174) + var1[0] + t48281*var2[3] + ((-1.*t47875*t47890 - 1.*t47904*t47910)*var2[1] + t47920*var2[2])*var2[3] + t48190*var2[4] + (t47910*var2[0] - 1.*t47875*t48291*var2[1] + t47904*t48291*var2[2] + (t48259*t48273 - 1.*t47409*t47979*t48275 + t48219*(t47409*t47979*t48235 + t47409*t47979*t48314) + t4232*t47979*(t48219*t48250 + t48235*t48273 + t48273*t48314 + t48250*t48334))*var2[3])*var2[4] + t28282*t47007*var2[5] + (t48360 + t48452 + t48508 + (t48807 + t48219*(t48516 + t48578 - 1.*t47979*t48514*t48808 - 1.*t47979*t48514*t48812 + t48814 + t48815) + t4232*t47979*(t4232*t48219*t48514 - 1.*t47409*t48273*t48514 + t48648 + t48794 + t48823 + t48824) + t48830)*var2[3] + (t48510 + t47929*(-1.*t47979*t48514 + t48516 + t48555 + t48578) + t47964*(t48175*t48514 + t48648 + t48792 + t48794) + t48804)*var2[4])*var2[5] + t29129*var2[15] + (t48360 + t48452 + t48508 + (t48807 + t48830 + t48219*(t48516 + t48814 + t48815 - 1.*t47979*t48808*t48886 - 1.*t47979*t48812*t48886 + t48918) + t4232*t47979*(t48648 + t48823 + t48824 + t4232*t48219*t48886 - 1.*t47409*t48273*t48886 + t48932))*var2[3] + (t48510 + t48804 + t47929*(t48516 + t48555 - 1.*t47979*t48886 + t48918) + t47964*(t48648 + t48792 + t48175*t48886 + t48932))*var2[4] + t28282*(-1.*t14946*t46984 - 1.*t14946*t48855 - 1.*t46843*t5174 + t48852*t5174)*var2[5])*var2[15] + t24586*var2[16] + (t48990 + t49009*var2[0] + (t47904*t49024 - 1.*t47875*t49033)*var2[1] + (t47875*t49024 + t47904*t49033)*var2[2] + (t47748*t48259 + t48219*(t49054 - 1.*t4232*t47979*t49137 + t47409*t47979*t49144) + t4232*t47979*(t49124 + t49127 + t48219*t49137 + t48273*t49144 + t49161 + t49162))*var2[3] + (t47890*t48146 + t47929*(t49054 - 1.*t47979*t49098) + t47964*(t48175*t49098 + t49111 + t28282*t49118 + t49124 + t49127 + t49128))*var2[4] + t47007*t47698*var2[5])*var2[16] + (t48990 + t49178 + t49183 + t49189 + (t48219*(t49195 - 1.*t4232*t47979*t49256 + t47409*t47979*t49269) + t48259*t49281 + t4232*t47979*(t49221 + t49224 + t48219*t49256 + t48273*t49269 + t48235*t49281 + t48250*t49294))*var2[3] + (t47929*(t49195 - 1.*t47979*t49199) + t48146*t49205 + t47964*(t48161*t48971 + t48175*t49199 + t28282*t49214 + t49221 + t49224 + t48144*t49227))*var2[4] + t47007*t48971*var2[5] + (-0.27*Power(t22654,2) + t49170 + t49171)*var2[16])*var2[17] + t47748*var3[0] + t47920*var3[1] + t47912*var3[2] + t48281*var3[3] + t48190*var3[4] + t28282*t47007*var3[5] + t29129*var3[15] + t24586*var3[16] - 1.*var4[0];
  p_output1[1]=-0.28121*t27925*t4232*t47875 + t17810*t49341 + t47412*t49346 - 0.28121*t29426*t49369 - 0.50321*t24071*t49394 - 0.50321*t19460*t49399 - 0.23321*(t22654*t49394 - 1.*t19460*t49399) - 0.15121*(-1.*t14946*t49341 + t49346*t5174) + var1[1] + t4232*t47979*var2[0] + t49351*var2[1] + t49357*var2[2] + t49408*var2[3] + ((-1.*t47875*t47964 + t47409*t47904*t47979)*var2[1] + t49351*var2[2])*var2[3] + t49388*var2[4] + (-1.*t47409*t47979*var2[0] + t4232*t47875*t47979*var2[1] - 1.*t4232*t47904*t47979*var2[2] + (t48219*(t47910*t48235 + t47748*t48250 + t48250*t48291 + t47910*t48314) + t47748*(-1.*t48219*t48250 - 1.*t48235*t48273 - 1.*t48273*t48314 - 1.*t48250*t48334) + t47910*t49403 + t48273*t49406)*var2[3])*var2[4] + t49330*var2[5] + (t49416 + t49420 + t49424 + (t47748*(-1.*t4232*t48219*t48514 + t47409*t48273*t48514 + t49427 + t49429 + t49449 + t49451) + t48219*(t4232*t47748*t48514 - 1.*t47409*t47910*t48514 + t49434 + t49438 + t49460 + t49461) + t49465 + t49466)*var2[3] + (t47890*(-1.*t48175*t48514 + t49427 + t49428 + t49429) + t49432 + t47929*(t47704*t48514 + t49434 + t49436 + t49438) + t49441)*var2[4])*var2[5] + t49314*var2[15] + (t49416 + t49420 + t49424 + (t49465 + t49466 + t47748*(-1.*t4232*t48219*t48886 + t47409*t48273*t48886 + t49427 + t49449 + t49451 + t49490) + t48219*(t4232*t47748*t48886 - 1.*t47409*t47910*t48886 + t49434 + t49460 + t49461 + t49495))*var2[3] + (t49432 + t49441 + t47890*(-1.*t48175*t48886 + t49427 + t49428 + t49490) + t47929*(t47704*t48886 + t49434 + t49436 + t49495))*var2[4] + (t28282*(-1.*t14946*t27928*t46843 + t14946*t27928*t48852 + t27928*t46984*t5174 + t27928*t48855*t5174) + t47698*(t14946*t46843*t47698 - 1.*t14946*t47698*t48852 - 1.*t46984*t47698*t5174 - 1.*t47698*t48855*t5174))*var2[5])*var2[15] + ((t49009*t49403 + t47748*t49406 + t48219*(t48235*t49009 + t48250*t49033 + t47748*t49137 + t47910*t49144 + t49583 + t49585) + t47748*(-1.*t48219*t49137 - 1.*t48273*t49144 + t49591 + t49593 + t49610 + t49611))*var2[3] + (t49024*t49382 + t47890*t49386 + t47929*(t48144*t49007 + t47704*t49098 + t49541 + t49545 + t49583 + t49585) + t47890*(-1.*t48175*t49098 + t49550 + t49555 + t49591 + t49593 + t49594))*var2[4] + (t27928*t49320 + t47698*t49328 + t47698*(-1.*t14946*t27928*t46984 + t49550 + t49555 - 1.*t47698*t49048*t49561 - 1.*t47698*t49048*t49563 - 1.*t27928*t46843*t5174) + t28282*(t14946*t46984*t48971 + t49541 + t49545 + t27928*t49048*t49561 + t27928*t49048*t49563 + t46843*t48971*t5174))*var2[5] + (t47698*t49308 + t27928*t49312 + t28282*(t44878*t48971 + t27928*t49048 + t49541 + t49545) + t47698*(-1.*t27928*t44878 - 1.*t47698*t49048 + t49550 + t49555))*var2[15])*var2[16] + ((t48219*t49403 + t49281*t49406 + t48219*(t48166 + t48262 + t48274 + t47748*t49256 + t47910*t49269 + t49656) + t47748*(-1.*t48219*t49256 - 1.*t48273*t49269 - 1.*t48235*t49281 - 1.*t48250*t49294 + t49662 + t49664))*var2[3] + (t47929*t49382 + t49205*t49386 + t47929*(t48162 + t48166 + t48180 + t47704*t49199 + t49623 + t49656) + t47890*(-1.*t48175*t49199 - 1.*t48144*t49227 + t49627 + t49629 + t49662 + t49664))*var2[4] + (t28282*t49320 + t48971*t49328 + t47698*(-1.*t14946*t28282*t46984 - 1.*t47698*t49191*t49561 - 1.*t47698*t49191*t49563 + t49627 + t49629 - 1.*t28282*t46843*t5174) + t28282*(t14946*t46984*t47698 + t48162 + t27928*t49191*t49561 + t27928*t49191*t49563 + t49623 + t46843*t47698*t5174))*var2[5] + (t48971*t49308 + t28282*t49312 + t28282*(t44878*t47698 + t48162 + t27928*t49191 + t49623) + t47698*(-1.*t28282*t44878 - 1.*t47698*t49191 + t49627 + t49629))*var2[15])*var2[17] + t4232*t47979*var3[0] + t49351*var3[1] + t49357*var3[2] + t49408*var3[3] + t49388*var3[4] + t49330*var3[5] + t49314*var3[15] - 1.*var4[1];
  p_output1[2]=0.28121*t27925*t4232*t47904 + t49178 + t49183 + t49189 + t17810*t49706 + t47412*t49711 - 0.28121*t29426*t49723 - 0.50321*t24071*t49741 - 0.50321*t19460*t49747 - 0.23321*(t22654*t49741 - 1.*t19460*t49747) - 0.15121*(-1.*t14946*t49706 + t49711*t5174) + var1[2] + t49765*var2[3] + ((-1.*t47875*t47929 - 1.*t47904*t48273)*var2[1] + t49187*var2[2])*var2[3] + t49735*var2[4] + (t48273*var2[0] - 1.*t47875*t48334*var2[1] + t47904*t48334*var2[2] + (t4232*t47979*(-1.*t47910*t48235 - 1.*t47748*t48250 - 1.*t48250*t48291 - 1.*t47910*t48314) + t47748*(-1.*t47409*t47979*t48235 - 1.*t47409*t47979*t48314) + t47910*t49760 - 1.*t47409*t47979*t49762)*var2[3])*var2[4] + t47698*t49700*var2[5] + (t49878 + t49882 + t49886 + (t49904 + t47748*(t47979*t48514*t48808 + t47979*t48514*t48812 + t49889 + t49891 + t49907 + t49908) + t4232*t47979*(-1.*t4232*t47748*t48514 + t47409*t47910*t48514 + t49895 + t49897 + t49913 + t49914) + t49917)*var2[3] + (t49887 + t47890*(t47979*t48514 + t49889 + t49890 + t49891) + t47964*(-1.*t47704*t48514 + t49895 + t49896 + t49897) + t49901)*var2[4])*var2[5] + (t49878 + t49882 + t49886 + (t49904 + t49917 + t47748*(t47979*t48808*t48886 + t47979*t48812*t48886 + t49889 + t49907 + t49908 + t49929) + t4232*t47979*(-1.*t4232*t47748*t48886 + t47409*t47910*t48886 + t49895 + t49913 + t49914 + t49936))*var2[3] + (t49887 + t49901 + t47890*(t47979*t48886 + t49889 + t49890 + t49929) + t47964*(-1.*t47704*t48886 + t49895 + t49896 + t49936))*var2[4] + t47698*(t14946*t46984 + t14946*t48855 + t46843*t5174 - 1.*t48852*t5174)*var2[5])*var2[15] + t49695*var2[16] + (t47813 + t47916 + t47923 + (t49009*t49760 + t47748*(t4232*t47979*t49137 - 1.*t47409*t47979*t49144 + t49774) + t4232*t47979*(-1.*t48235*t49009 - 1.*t48250*t49033 - 1.*t47748*t49137 - 1.*t47910*t49144 + t49784 + t49787))*var2[3] + (t49024*t49731 + t47890*(t47979*t49098 + t49774) + t47964*(-1.*t27928*t48161 - 1.*t48144*t49007 - 1.*t47704*t49098 - 1.*t47698*t49118 + t49784 + t49787))*var2[4] + t27928*t49700*var2[5])*var2[16] - 0.27*var2[17] + (t49281*var2[0] + (t47904*t49205 - 1.*t47875*t49294)*var2[1] + (t47875*t49205 + t47904*t49294)*var2[2] + (t48219*t49760 + t47748*(t4232*t47979*t49256 - 1.*t47409*t47979*t49269 + t49830) + t4232*t47979*(-1.*t47748*t49256 - 1.*t47910*t49269 + t49379 + t49401 + t49402 + t49837))*var2[3] + (t47929*t49731 + t47890*(t47979*t49199 + t49830) + t47964*(-1.*t47704*t49199 - 1.*t47698*t49214 + t49311 + t49379 + t49381 + t49837))*var2[4] + t28282*t49700*var2[5] + (-0.28121*t19460 + 0.27*t19460*t22654 - 1.*t19460*t24420)*var2[16])*var2[17] + t48219*var3[0] + t49187*var3[1] + t49181*var3[2] + t49765*var3[3] + t49735*var3[4] + t47698*t49700*var3[5] + t49695*var3[16] - 0.27*var3[17] - 1.*var4[2];
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

#include "ddh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void ddh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
