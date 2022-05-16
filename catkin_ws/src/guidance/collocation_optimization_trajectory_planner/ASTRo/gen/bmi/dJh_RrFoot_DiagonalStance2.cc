/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:20 GMT+02:00
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
  double t18396;
  double t18499;
  double t18677;
  double t19076;
  double t19274;
  double t19278;
  double t19303;
  double t25399;
  double t3030;
  double t15737;
  double t25792;
  double t27354;
  double t19452;
  double t26830;
  double t27233;
  double t2262;
  double t27378;
  double t27461;
  double t27581;
  double t27807;
  double t27808;
  double t27843;
  double t27924;
  double t27925;
  double t27937;
  double t27939;
  double t27958;
  double t38054;
  double t38286;
  double t38312;
  double t40184;
  double t40187;
  double t40212;
  double t41274;
  double t41276;
  double t41282;
  double t41506;
  double t42206;
  double t42891;
  double t43011;
  double t43016;
  double t43032;
  double t43046;
  double t43095;
  double t43138;
  double t43479;
  double t43663;
  double t43675;
  double t43932;
  double t43935;
  double t43944;
  double t43945;
  double t43956;
  double t44136;
  double t44147;
  double t44167;
  double t44223;
  double t44224;
  double t44225;
  double t44230;
  double t44231;
  double t44240;
  double t43912;
  double t43968;
  double t43985;
  double t43986;
  double t44264;
  double t44268;
  double t44275;
  double t44278;
  double t44283;
  double t44284;
  double t44292;
  double t44299;
  double t44302;
  double t44320;
  double t44321;
  double t44322;
  double t44007;
  double t44309;
  double t44313;
  double t44376;
  double t44382;
  double t44388;
  double t43804;
  double t43846;
  double t43911;
  double t44346;
  double t44347;
  double t44366;
  double t44432;
  double t44433;
  double t44435;
  double t44521;
  double t44522;
  double t44525;
  double t44763;
  double t44770;
  double t44775;
  double t44367;
  double t44895;
  double t44899;
  double t44900;
  double t44455;
  double t44983;
  double t44987;
  double t44988;
  double t44372;
  double t44419;
  double t44427;
  double t44913;
  double t44953;
  double t44915;
  double t44920;
  double t44944;
  double t44977;
  double t44990;
  double t44459;
  double t44465;
  double t44502;
  double t44540;
  double t44572;
  double t45139;
  double t45145;
  double t45172;
  double t45179;
  double t44543;
  double t44544;
  double t44549;
  double t44574;
  double t44578;
  double t44595;
  double t44633;
  double t44694;
  double t44638;
  double t44646;
  double t44653;
  double t45017;
  double t45030;
  double t45411;
  double t45429;
  double t45438;
  double t45451;
  double t44701;
  double t44705;
  double t44743;
  double t44778;
  double t44788;
  double t44792;
  double t44793;
  double t44814;
  double t44837;
  double t44855;
  double t44856;
  double t44859;
  double t44872;
  double t44878;
  double t44891;
  double t45580;
  double t45581;
  double t45584;
  double t45575;
  double t45578;
  double t44948;
  double t45592;
  double t45593;
  double t45594;
  double t45614;
  double t45619;
  double t45621;
  double t44989;
  double t45000;
  double t45001;
  double t45002;
  double t45003;
  double t45007;
  double t45623;
  double t45043;
  double t45051;
  double t45634;
  double t45074;
  double t45078;
  double t45090;
  double t45106;
  double t45114;
  double t45116;
  double t45120;
  double t45121;
  double t45122;
  double t45123;
  double t45131;
  double t45137;
  double t45143;
  double t45154;
  double t45155;
  double t45156;
  double t45158;
  double t45174;
  double t45194;
  double t45230;
  double t45242;
  double t45257;
  double t45699;
  double t45270;
  double t45273;
  double t45711;
  double t45301;
  double t45325;
  double t45337;
  double t45339;
  double t45368;
  double t45372;
  double t45373;
  double t45377;
  double t45378;
  double t45381;
  double t45382;
  double t45383;
  double t45384;
  double t45385;
  double t45398;
  double t45407;
  double t45416;
  double t45446;
  double t45482;
  double t45484;
  double t45487;
  double t45504;
  double t45516;
  double t45823;
  double t45531;
  double t45534;
  double t45832;
  double t45553;
  double t45559;
  double t45569;
  double t45854;
  double t45855;
  double t45856;
  double t45868;
  double t45869;
  double t45870;
  double t45877;
  double t45881;
  double t45883;
  double t45886;
  double t45889;
  double t45890;
  double t45904;
  double t45906;
  double t45907;
  double t45908;
  double t45910;
  double t45911;
  double t45913;
  double t45915;
  double t45916;
  double t45917;
  double t45914;
  double t45922;
  double t45925;
  double t45928;
  double t45939;
  double t45940;
  double t45941;
  double t45943;
  double t45947;
  double t45948;
  double t45964;
  double t45968;
  double t45986;
  double t45989;
  double t45978;
  double t46015;
  double t46017;
  double t45867;
  double t45872;
  double t45875;
  double t46025;
  double t36796;
  double t36798;
  double t37779;
  double t46070;
  double t46087;
  double t46089;
  double t45859;
  double t45860;
  double t45861;
  double t45862;
  double t45863;
  double t45864;
  double t45865;
  double t43256;
  double t43266;
  double t43278;
  double t46182;
  double t46183;
  double t46185;
  double t46186;
  double t46187;
  double t46189;
  double t46190;
  double t46192;
  double t46197;
  double t46198;
  double t46199;
  double t46188;
  double t46202;
  double t46203;
  double t46204;
  double t46209;
  double t46210;
  double t46211;
  double t46206;
  double t46208;
  double t46217;
  double t46218;
  double t46219;
  double t46221;
  double t46222;
  double t46223;
  double t46228;
  double t46229;
  double t46230;
  double t45960;
  double t45961;
  double t45973;
  double t45974;
  double t45995;
  double t45997;
  double t45998;
  double t46275;
  double t46008;
  double t46009;
  double t46010;
  double t46279;
  double t46281;
  double t46308;
  double t46313;
  double t46315;
  double t46249;
  double t46250;
  double t46254;
  double t46054;
  double t46055;
  double t46056;
  double t46393;
  double t46408;
  t18396 = Cos(var1[16]);
  t18499 = Cos(var1[17]);
  t18677 = -1.*t18396*t18499;
  t19076 = Sin(var1[16]);
  t19274 = Sin(var1[17]);
  t19278 = -1.*t19076*t19274;
  t19303 = t18677 + t19278;
  t25399 = Cos(var1[15]);
  t3030 = Cos(var1[5]);
  t15737 = Sin(var1[15]);
  t25792 = Sin(var1[5]);
  t27354 = Cos(var1[3]);
  t19452 = t3030*t15737*t19303;
  t26830 = t25399*t19303*t25792;
  t27233 = t19452 + t26830;
  t2262 = Sin(var1[3]);
  t27378 = Cos(var1[4]);
  t27461 = -1.*t18499*t19076;
  t27581 = t18396*t19274;
  t27807 = t27461 + t27581;
  t27808 = t27378*t27807;
  t27843 = Sin(var1[4]);
  t27924 = t25399*t3030*t19303;
  t27925 = -1.*t15737*t19303*t25792;
  t27937 = t27924 + t27925;
  t27939 = -1.*t27843*t27937;
  t27958 = t27808 + t27939;
  t38054 = t3030*t15737;
  t38286 = t25399*t25792;
  t38312 = t38054 + t38286;
  t40184 = -1.*t25399*t3030;
  t40187 = t15737*t25792;
  t40212 = t40184 + t40187;
  t41274 = t3030*t15737*t27807;
  t41276 = t25399*t27807*t25792;
  t41282 = t41274 + t41276;
  t41506 = t18396*t18499;
  t42206 = t19076*t19274;
  t42891 = t41506 + t42206;
  t43011 = t27378*t42891;
  t43016 = t25399*t3030*t27807;
  t43032 = -1.*t15737*t27807*t25792;
  t43046 = t43016 + t43032;
  t43095 = -1.*t27843*t43046;
  t43138 = t43011 + t43095;
  t43479 = -1.*t27807*t27843;
  t43663 = -1.*t27378*t27937;
  t43675 = t43479 + t43663;
  t43932 = -1.*t18499;
  t43935 = 1. + t43932;
  t43944 = -0.50321*t43935;
  t43945 = -0.23321*t18499;
  t43956 = t43944 + t43945;
  t44136 = -1.*t25399;
  t44147 = 1. + t44136;
  t44167 = -0.15121*t44147;
  t44223 = -1.*t18396;
  t44224 = 1. + t44223;
  t44225 = -0.28121*t44224;
  t44230 = t18396*t43956;
  t44231 = 0.27*t19076*t19274;
  t44240 = t44225 + t44230 + t44231;
  t43912 = 0.28121*t19076;
  t43968 = t43956*t19076;
  t43985 = -0.27*t18396*t19274;
  t43986 = t43912 + t43968 + t43985;
  t44264 = t25399*t44240;
  t44268 = t44167 + t44264;
  t44275 = t3030*t44268;
  t44278 = -0.15121*t25399;
  t44283 = 0.15121*t15737;
  t44284 = t15737*t44240;
  t44292 = t44167 + t44278 + t44283 + t44284;
  t44299 = -1.*t44292*t25792;
  t44302 = t44275 + t44299;
  t44320 = t43986*t27843;
  t44321 = t27378*t44302;
  t44322 = t44320 + t44321;
  t44007 = -1.*t43986*t27843;
  t44309 = -1.*t27378*t44302;
  t44313 = t44007 + t44309;
  t44376 = t27378*t43986;
  t44382 = -1.*t27843*t44302;
  t44388 = t44376 + t44382;
  t43804 = t42891*t27843;
  t43846 = t27378*t43046;
  t43911 = t43804 + t43846;
  t44346 = t3030*t44292;
  t44347 = t44268*t25792;
  t44366 = t44346 + t44347;
  t44432 = -1.*t42891*t27843;
  t44433 = -1.*t27378*t43046;
  t44435 = t44432 + t44433;
  t44521 = t27807*t27843;
  t44522 = t27378*t27937;
  t44525 = t44521 + t44522;
  t44763 = -1.*t3030*t15737*t19303;
  t44770 = -1.*t25399*t19303*t25792;
  t44775 = t44763 + t44770;
  t44367 = -1.*t40212*t44366;
  t44895 = -1.*t3030*t44292;
  t44899 = -1.*t44268*t25792;
  t44900 = t44895 + t44899;
  t44455 = t41282*t44366;
  t44983 = -1.*t3030*t15737*t27807;
  t44987 = -1.*t25399*t27807*t25792;
  t44988 = t44983 + t44987;
  t44372 = -1.*t27378*t38312*t44322;
  t44419 = t27843*t38312*t44388;
  t44427 = t44367 + t44372 + t44419;
  t44913 = -1.*t38312*t44366;
  t44953 = -1.*t40212*t44302;
  t44915 = t25399*t3030;
  t44920 = -1.*t15737*t25792;
  t44944 = t44915 + t44920;
  t44977 = t43046*t44366;
  t44990 = t41282*t44302;
  t44459 = t43911*t44322;
  t44465 = t43138*t44388;
  t44502 = t44455 + t44459 + t44465;
  t44540 = -1.*t41282*t44366;
  t44572 = t27233*t44366;
  t45139 = -1.*t43046*t44366;
  t45145 = -1.*t41282*t44302;
  t45172 = t27937*t44366;
  t45179 = t27233*t44302;
  t44543 = -1.*t43911*t44322;
  t44544 = -1.*t43138*t44388;
  t44549 = t44540 + t44543 + t44544;
  t44574 = t44525*t44322;
  t44578 = t27958*t44388;
  t44595 = t44572 + t44574 + t44578;
  t44633 = t40212*t44366;
  t44694 = -1.*t27233*t44366;
  t44638 = t27378*t38312*t44322;
  t44646 = -1.*t27843*t38312*t44388;
  t44653 = t44633 + t44638 + t44646;
  t45017 = Power(t27378,2);
  t45030 = Power(t27843,2);
  t45411 = t38312*t44366;
  t45429 = t40212*t44302;
  t45438 = -1.*t27937*t44366;
  t45451 = -1.*t27233*t44302;
  t44701 = -1.*t44525*t44322;
  t44705 = -1.*t27958*t44388;
  t44743 = t44694 + t44701 + t44705;
  t44778 = var2[0]*t27378*t44775;
  t44788 = t2262*t27843*t44775;
  t44792 = t27354*t27937;
  t44793 = t44788 + t44792;
  t44814 = var2[1]*t44793;
  t44837 = -1.*t27354*t27843*t44775;
  t44855 = t2262*t27937;
  t44856 = t44837 + t44855;
  t44859 = var2[2]*t44856;
  t44872 = -1.*t38312*t44302;
  t44878 = t44367 + t44872;
  t44891 = t43046*t44878;
  t45580 = -0.15121*t15737;
  t45581 = -1.*t15737*t44240;
  t45584 = t45580 + t45581;
  t45575 = 0.15121*t25399;
  t45578 = t45575 + t44264;
  t44948 = -1.*t44944*t44302;
  t45592 = t3030*t45584;
  t45593 = -1.*t45578*t25792;
  t45594 = t45592 + t45593;
  t45614 = t3030*t45578;
  t45619 = t45584*t25792;
  t45621 = t45614 + t45619;
  t44989 = t44988*t44302;
  t45000 = t43986*t42891;
  t45001 = t43046*t44302;
  t45002 = t45000 + t44455 + t45001;
  t45003 = t38312*t45002;
  t45007 = t27378*t44988*t44427;
  t45623 = -1.*t40212*t45621;
  t45043 = -1.*t27378*t44944*t44322;
  t45051 = t27843*t44944*t44388;
  t45634 = t41282*t45621;
  t45074 = t27378*t44988*t44322;
  t45078 = -1.*t27843*t44988*t44388;
  t45090 = t27378*t44944*t44502;
  t45106 = var2[0]*t27378*t44944;
  t45114 = t2262*t38312;
  t45116 = -1.*t27354*t27843*t44944;
  t45120 = t45114 + t45116;
  t45121 = var2[2]*t45120;
  t45122 = t27354*t38312;
  t45123 = t2262*t27843*t44944;
  t45131 = t45122 + t45123;
  t45137 = var2[1]*t45131;
  t45143 = -1.*t44988*t44302;
  t45154 = -1.*t43986*t42891;
  t45155 = -1.*t43046*t44302;
  t45156 = t45154 + t44540 + t45155;
  t45158 = t27937*t45156;
  t45174 = t44775*t44302;
  t45194 = t43986*t27807;
  t45230 = t27937*t44302;
  t45242 = t45194 + t44572 + t45230;
  t45257 = t43046*t45242;
  t45699 = -1.*t41282*t45621;
  t45270 = -1.*t27378*t44988*t44322;
  t45273 = t27843*t44988*t44388;
  t45711 = t27233*t45621;
  t45301 = t27378*t44775*t44322;
  t45325 = -1.*t27843*t44775*t44388;
  t45337 = t27378*t44775*t44549;
  t45339 = t27378*t44988*t44595;
  t45368 = var2[0]*t27378*t44988;
  t45372 = t2262*t27843*t44988;
  t45373 = t27354*t43046;
  t45377 = t45372 + t45373;
  t45378 = var2[1]*t45377;
  t45381 = -1.*t27354*t27843*t44988;
  t45382 = t2262*t43046;
  t45383 = t45381 + t45382;
  t45384 = var2[2]*t45383;
  t45385 = t38312*t44302;
  t45398 = t44633 + t45385;
  t45407 = t27937*t45398;
  t45416 = t44944*t44302;
  t45446 = -1.*t44775*t44302;
  t45482 = -1.*t43986*t27807;
  t45484 = -1.*t27937*t44302;
  t45487 = t45482 + t44694 + t45484;
  t45504 = t38312*t45487;
  t45516 = t27378*t44775*t44653;
  t45823 = t40212*t45621;
  t45531 = t27378*t44944*t44322;
  t45534 = -1.*t27843*t44944*t44388;
  t45832 = -1.*t27233*t45621;
  t45553 = -1.*t27378*t44775*t44322;
  t45559 = t27843*t44775*t44388;
  t45569 = t27378*t44944*t44743;
  t45854 = t18499*t19076;
  t45855 = -1.*t18396*t19274;
  t45856 = t45854 + t45855;
  t45868 = t25399*t3030*t45856;
  t45869 = -1.*t15737*t45856*t25792;
  t45870 = t45868 + t45869;
  t45877 = t3030*t15737*t45856;
  t45881 = t25399*t45856*t25792;
  t45883 = t45877 + t45881;
  t45886 = t27378*t19303;
  t45889 = -1.*t27843*t45870;
  t45890 = t45886 + t45889;
  t45904 = -0.28121*t19076;
  t45906 = -1.*t43956*t19076;
  t45907 = 0.27*t18396*t19274;
  t45908 = t45904 + t45906 + t45907;
  t45910 = t3030*t15737*t45908;
  t45911 = t25399*t45908*t25792;
  t45913 = t45910 + t45911;
  t45915 = t25399*t3030*t45908;
  t45916 = -1.*t15737*t45908*t25792;
  t45917 = t45915 + t45916;
  t45914 = -1.*t40212*t45913;
  t45922 = 0.28121*t18396;
  t45925 = t45922 + t44230 + t44231;
  t45928 = t45913*t41282;
  t45939 = t45925*t27843;
  t45940 = t27378*t45917;
  t45941 = t45939 + t45940;
  t45943 = t27378*t45925;
  t45947 = -1.*t27843*t45917;
  t45948 = t45943 + t45947;
  t45964 = t43986*t19303;
  t45968 = t27807*t45925;
  t45986 = Power(t25399,2);
  t45989 = Power(t15737,2);
  t45978 = -1.*t45925*t42891;
  t46015 = t45913*t27233;
  t46017 = t45883*t44366;
  t45867 = t19303*t27843;
  t45872 = t27378*t45870;
  t45875 = t45867 + t45872;
  t46025 = -1.*t45913*t41282;
  t36796 = t27354*t27233;
  t36798 = -1.*t2262*t27958;
  t37779 = t36796 + t36798;
  t46070 = t40212*t45913;
  t46087 = -1.*t45913*t27233;
  t46089 = -1.*t45883*t44366;
  t45859 = -0.15121*t45856;
  t45860 = -0.15121*t27807;
  t45861 = t45859 + t45860;
  t45862 = var2[15]*t45861;
  t45863 = -1.*t15737*t44268;
  t45864 = t25399*t44292;
  t45865 = t45863 + t45864;
  t43256 = t27354*t41282;
  t43266 = -1.*t2262*t43138;
  t43278 = t43256 + t43266;
  t46182 = 0.27*t18499*t19076;
  t46183 = t46182 + t43985;
  t46185 = t3030*t15737*t46183;
  t46186 = t25399*t46183*t25792;
  t46187 = t46185 + t46186;
  t46189 = t25399*t3030*t46183;
  t46190 = -1.*t15737*t46183*t25792;
  t46192 = t46189 + t46190;
  t46197 = t3030*t15737*t42891;
  t46198 = t25399*t42891*t25792;
  t46199 = t46197 + t46198;
  t46188 = -1.*t40212*t46187;
  t46202 = -0.27*t18396*t18499;
  t46203 = -0.27*t19076*t19274;
  t46204 = t46202 + t46203;
  t46209 = t25399*t3030*t42891;
  t46210 = -1.*t15737*t42891*t25792;
  t46211 = t46209 + t46210;
  t46206 = t46187*t41282;
  t46208 = t46199*t44366;
  t46217 = t46204*t27843;
  t46218 = t27378*t46192;
  t46219 = t46217 + t46218;
  t46221 = t27378*t46204;
  t46222 = -1.*t27843*t46192;
  t46223 = t46221 + t46222;
  t46228 = t45856*t27843;
  t46229 = t27378*t46211;
  t46230 = t46228 + t46229;
  t45960 = t19303*t44240;
  t45961 = t45194 + t45960;
  t45973 = -1.*t27807*t44240;
  t45974 = t45973 + t45154;
  t45995 = -1.*t25399*t27807*t44268;
  t45997 = -1.*t15737*t27807*t44292;
  t45998 = t45154 + t45995 + t45997;
  t46275 = t27807*t46204;
  t46008 = t25399*t19303*t44268;
  t46009 = t15737*t19303*t44292;
  t46010 = t45194 + t46008 + t46009;
  t46279 = -1.*t45856*t43986;
  t46281 = -1.*t46204*t42891;
  t46308 = t46187*t27233;
  t46313 = -1.*t46187*t41282;
  t46315 = -1.*t46199*t44366;
  t46249 = t27378*t45856;
  t46250 = -1.*t27843*t46211;
  t46254 = t46249 + t46250;
  t46054 = t15737*t44268;
  t46055 = -1.*t25399*t44292;
  t46056 = t46054 + t46055;
  t46393 = t40212*t46187;
  t46408 = -1.*t46187*t27233;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2262*t27233 - 1.*t27354*t27958)*var2[1] + t37779*var2[2];
  p_output1[10]=(t27354*t27843*t38312 - 1.*t2262*t40212)*var2[1] + (t2262*t27843*t38312 + t27354*t40212)*var2[2];
  p_output1[11]=(-1.*t2262*t41282 - 1.*t27354*t43138)*var2[1] + t43278*var2[2];
  p_output1[12]=t27958*var2[0] - 1.*t2262*t43675*var2[1] + t27354*t43675*var2[2] + (t43911*(t27843*t38312*t44313 + t27843*t38312*t44322) + t43138*t44427 + t27378*t38312*(t43138*t44313 + t43138*t44322 + t43911*t44388 + t44388*t44435) - 1.*t27843*t38312*t44502)*var2[3];
  p_output1[13]=-1.*t27843*t38312*var2[0] + t2262*t27378*t38312*var2[1] - 1.*t27354*t27378*t38312*var2[2] + ((-1.*t43138*t44313 - 1.*t43138*t44322 - 1.*t43911*t44388 - 1.*t44388*t44435)*t44525 + t43911*(t27958*t44313 + t27958*t44322 + t43675*t44388 + t44388*t44525) + t27958*t44549 + t43138*t44595)*var2[3];
  p_output1[14]=t43138*var2[0] - 1.*t2262*t44435*var2[1] + t27354*t44435*var2[2] + ((-1.*t27843*t38312*t44313 - 1.*t27843*t38312*t44322)*t44525 + t27378*t38312*(-1.*t27958*t44313 - 1.*t27958*t44322 - 1.*t43675*t44388 - 1.*t44388*t44525) + t27958*t44653 - 1.*t27843*t38312*t44743)*var2[3];
  p_output1[15]=t44778 + t44814 + t44859 + (t45007 + t43911*(t44913 + t44953 - 1.*t38312*t44900*t45017 - 1.*t38312*t44900*t45030 + t45043 + t45051) + t27378*t38312*(-1.*t27843*t43138*t44900 + t27378*t43911*t44900 + t44977 + t44990 + t45074 + t45078) + t45090)*var2[3] + (t44891 + t41282*(-1.*t38312*t44900 + t44913 + t44948 + t44953) + t40212*(t43046*t44900 + t44977 + t44989 + t44990) + t45003)*var2[4];
  p_output1[16]=t45106 + t45121 + t45137 + (t44525*(t27843*t43138*t44900 - 1.*t27378*t43911*t44900 + t45139 + t45145 + t45270 + t45273) + t43911*(-1.*t27843*t27958*t44900 + t27378*t44525*t44900 + t45172 + t45179 + t45301 + t45325) + t45337 + t45339)*var2[3] + (t27233*(-1.*t43046*t44900 + t45139 + t45143 + t45145) + t45158 + t41282*(t27937*t44900 + t45172 + t45174 + t45179) + t45257)*var2[4];
  p_output1[17]=t45368 + t45378 + t45384 + (t45516 + t44525*(t38312*t44900*t45017 + t38312*t44900*t45030 + t45411 + t45429 + t45531 + t45534) + t27378*t38312*(t27843*t27958*t44900 - 1.*t27378*t44525*t44900 + t45438 + t45451 + t45553 + t45559) + t45569)*var2[3] + (t45407 + t27233*(t38312*t44900 + t45411 + t45416 + t45429) + t40212*(-1.*t27937*t44900 + t45438 + t45446 + t45451) + t45504)*var2[4];
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
  p_output1[45]=t44778 + t44814 + t44859 + (t45007 + t45090 + t43911*(t44913 + t45043 + t45051 - 1.*t38312*t45017*t45594 - 1.*t38312*t45030*t45594 + t45623) + t27378*t38312*(t44977 + t45074 + t45078 - 1.*t27843*t43138*t45594 + t27378*t43911*t45594 + t45634))*var2[3] + (t44891 + t45003 + t41282*(t44913 + t44948 - 1.*t38312*t45594 + t45623) + t40212*(t44977 + t44989 + t43046*t45594 + t45634))*var2[4] + t42891*(-1.*t25399*t44268 - 1.*t15737*t44292 + t25399*t45578 - 1.*t15737*t45584)*var2[5];
  p_output1[46]=t45106 + t45121 + t45137 + (t45337 + t45339 + t44525*(t45139 + t45270 + t45273 + t27843*t43138*t45594 - 1.*t27378*t43911*t45594 + t45699) + t43911*(t45172 + t45301 + t45325 - 1.*t27843*t27958*t45594 + t27378*t44525*t45594 + t45711))*var2[3] + (t45158 + t45257 + t27233*(t45139 + t45143 - 1.*t43046*t45594 + t45699) + t41282*(t45172 + t45174 + t27937*t45594 + t45711))*var2[4] + (t42891*(-1.*t15737*t19303*t44268 + t19303*t25399*t44292 + t15737*t19303*t45578 + t19303*t25399*t45584) + t27807*(t15737*t27807*t44268 - 1.*t25399*t27807*t44292 - 1.*t15737*t27807*t45578 - 1.*t25399*t27807*t45584))*var2[5];
  p_output1[47]=t45368 + t45378 + t45384 + (t45516 + t45569 + t44525*(t45411 + t45531 + t45534 + t38312*t45017*t45594 + t38312*t45030*t45594 + t45823) + t27378*t38312*(t45438 + t45553 + t45559 + t27843*t27958*t45594 - 1.*t27378*t44525*t45594 + t45832))*var2[3] + (t45407 + t45504 + t27233*(t45411 + t45416 + t38312*t45594 + t45823) + t40212*(t45438 + t45446 - 1.*t27937*t45594 + t45832))*var2[4] + t27807*(t25399*t44268 + t15737*t44292 - 1.*t25399*t45578 + t15737*t45584)*var2[5];
  p_output1[48]=t45862 + t45875*var2[0] + (t27354*t45883 - 1.*t2262*t45890)*var2[1] + (t2262*t45883 + t27354*t45890)*var2[2] + (t44427*t44525 + t43911*(t45914 - 1.*t27378*t38312*t45941 + t27843*t38312*t45948) + t27378*t38312*(t44572 + t44574 + t44578 + t45928 + t43911*t45941 + t43138*t45948))*var2[3] + (t27233*t44878 + t41282*(t45914 - 1.*t38312*t45917) + t40212*(t44572 + t45194 + t45230 + t43046*t45917 + t42891*t45925 + t45928))*var2[4] + t27807*t45865*var2[5];
  p_output1[49]=(t44525*t44595 + t44549*t45875 + t43911*(t44322*t45875 + t44388*t45890 + t44525*t45941 + t27958*t45948 + t46015 + t46017) + t44525*(t44694 + t44701 + t44705 - 1.*t43911*t45941 - 1.*t43138*t45948 + t46025))*var2[3] + (t27233*t45242 + t45156*t45883 + t41282*(t44302*t45870 + t27937*t45917 + t45964 + t45968 + t46015 + t46017) + t27233*(t44694 + t45482 + t45484 - 1.*t43046*t45917 + t45978 + t46025))*var2[4] + (t42891*(t25399*t44268*t45856 + t15737*t44292*t45856 + t45964 + t45968 + t19303*t45908*t45986 + t19303*t45908*t45989) + t27807*(-1.*t19303*t25399*t44268 - 1.*t15737*t19303*t44292 + t45482 + t45978 - 1.*t27807*t45908*t45986 - 1.*t27807*t45908*t45989) + t19303*t45998 + t27807*t46010)*var2[5] + (t27807*t45961 + t42891*(t44240*t45856 + t19303*t45908 + t45964 + t45968) + t19303*t45974 + t27807*(-1.*t19303*t44240 + t45482 - 1.*t27807*t45908 + t45978))*var2[15];
  p_output1[50]=t44525*var2[0] + t37779*var2[1] + (t2262*t27233 + t27354*t27958)*var2[2] + (t44653*t45875 + t44525*(t27378*t38312*t45941 - 1.*t27843*t38312*t45948 + t46070) + t27378*t38312*(-1.*t44322*t45875 - 1.*t44388*t45890 - 1.*t44525*t45941 - 1.*t27958*t45948 + t46087 + t46089))*var2[3] + (t45398*t45883 + t27233*(t38312*t45917 + t46070) + t40212*(-1.*t19303*t43986 - 1.*t44302*t45870 - 1.*t27937*t45917 - 1.*t27807*t45925 + t46087 + t46089))*var2[4] + t19303*t46056*var2[5];
  p_output1[51]=t45862 + t43911*var2[0] + t43278*var2[1] + (t2262*t41282 + t27354*t43138)*var2[2] + (t43911*(t46188 - 1.*t27378*t38312*t46219 + t27843*t38312*t46223) + t44427*t46230 + t27378*t38312*(t46206 + t46208 + t43911*t46219 + t43138*t46223 + t44322*t46230 + t44388*t46254))*var2[3] + (t41282*(t46188 - 1.*t38312*t46192) + t44878*t46199 + t40212*(t43986*t45856 + t43046*t46192 + t42891*t46204 + t46206 + t46208 + t44302*t46211))*var2[4] + t45856*t45865*var2[5] + (0.28121*t18499 - 0.27*Power(t18499,2) + t18499*t43956)*var2[16];
  p_output1[52]=(t43911*t44549 + t44595*t46230 + t43911*(t44455 + t44459 + t44465 + t44525*t46219 + t27958*t46223 + t46308) + t44525*(-1.*t43911*t46219 - 1.*t43138*t46223 - 1.*t44322*t46230 - 1.*t44388*t46254 + t46313 + t46315))*var2[3] + (t41282*t45156 + t45242*t46199 + t41282*(t44455 + t45000 + t45001 + t27937*t46192 + t46275 + t46308) + t27233*(-1.*t43046*t46192 - 1.*t44302*t46211 + t46279 + t46281 + t46313 + t46315))*var2[4] + (t42891*t45998 + t45856*t46010 + t42891*(t25399*t27807*t44268 + t15737*t27807*t44292 + t45000 + t19303*t45986*t46183 + t19303*t45989*t46183 + t46275) + t27807*(-1.*t25399*t42891*t44268 - 1.*t15737*t42891*t44292 - 1.*t27807*t45986*t46183 - 1.*t27807*t45989*t46183 + t46279 + t46281))*var2[5] + (t45856*t45961 + t42891*t45974 + t42891*(t27807*t44240 + t45000 + t19303*t46183 + t46275) + t27807*(-1.*t42891*t44240 - 1.*t27807*t46183 + t46279 + t46281))*var2[15];
  p_output1[53]=t46230*var2[0] + (t27354*t46199 - 1.*t2262*t46254)*var2[1] + (t2262*t46199 + t27354*t46254)*var2[2] + (t43911*t44653 + t44525*(t27378*t38312*t46219 - 1.*t27843*t38312*t46223 + t46393) + t27378*t38312*(t44540 + t44543 + t44544 - 1.*t44525*t46219 - 1.*t27958*t46223 + t46408))*var2[3] + (t41282*t45398 + t27233*(t38312*t46192 + t46393) + t40212*(t44540 + t45154 + t45155 - 1.*t27937*t46192 - 1.*t27807*t46204 + t46408))*var2[4] + t42891*t46056*var2[5] + (-0.28121*t19274 + 0.27*t18499*t19274 - 1.*t19274*t43956)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
