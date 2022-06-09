/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:14 GMT+02:00
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
  double t10673;
  double t15037;
  double t12651;
  double t15140;
  double t15223;
  double t15138;
  double t15225;
  double t15032;
  double t15231;
  double t15233;
  double t15234;
  double t15050;
  double t15099;
  double t15162;
  double t15227;
  double t15229;
  double t15453;
  double t15456;
  double t15459;
  double t15461;
  double t15462;
  double t15464;
  double t15466;
  double t15469;
  double t15470;
  double t15473;
  double t15474;
  double t15475;
  double t15478;
  double t15245;
  double t15250;
  double t15251;
  double t15417;
  double t15418;
  double t15441;
  double t15236;
  double t15239;
  double t15240;
  double t15483;
  double t15500;
  double t15511;
  double t15642;
  double t15643;
  double t15645;
  double t15035;
  double t15051;
  double t15053;
  double t15649;
  double t15651;
  double t15652;
  double t15672;
  double t15669;
  double t15230;
  double t15241;
  double t15242;
  double t15409;
  double t15447;
  double t15449;
  double t15719;
  double t15721;
  double t15722;
  double t15723;
  double t15725;
  double t15726;
  double t15727;
  double t15729;
  double t15731;
  double t15732;
  double t15733;
  double t15735;
  double t15736;
  double t15535;
  double t15537;
  double t15538;
  double t15693;
  double t15695;
  double t15696;
  double t15683;
  double t15685;
  double t15686;
  double t15656;
  double t15657;
  double t15659;
  double t15752;
  double t15753;
  double t15755;
  double t15675;
  double t15676;
  double t15677;
  double t15759;
  double t15760;
  double t15762;
  double t15782;
  double t15784;
  double t15785;
  double t15706;
  double t15707;
  double t15709;
  double t15712;
  double t15713;
  double t15715;
  double t15800;
  double t15805;
  double t15816;
  double t15832;
  double t15848;
  double t15854;
  double t15855;
  double t15856;
  double t15868;
  double t15894;
  double t15895;
  double t15897;
  double t15898;
  double t15737;
  double t15739;
  double t15741;
  double t15743;
  double t15745;
  double t15746;
  double t15765;
  double t15768;
  double t15769;
  double t15772;
  double t15774;
  double t15775;
  double t15906;
  double t15907;
  double t15909;
  double t15914;
  double t15915;
  double t15917;
  double t15931;
  double t15933;
  double t15934;
  double t15935;
  double t15937;
  double t15943;
  double t15945;
  double t15947;
  double t15949;
  double t15950;
  double t15951;
  double t15953;
  double t15954;
  double t15930;
  double t15938;
  double t15939;
  double t15941;
  double t15946;
  double t15955;
  double t15957;
  double t15958;
  double t15959;
  double t15961;
  double t15962;
  double t15963;
  double t15965;
  double t15966;
  double t15967;
  double t15973;
  double t15974;
  double t15975;
  double t15942;
  double t15969;
  double t15970;
  double t15987;
  double t15989;
  double t15990;
  double t15981;
  double t15982;
  double t15983;
  double t15985;
  double t15986;
  double t15991;
  double t15993;
  double t16124;
  double t16125;
  double t16127;
  double t16017;
  double t16021;
  double t16022;
  double t16023;
  double t16032;
  double t16033;
  double t16034;
  double t16036;
  double t16123;
  double t16129;
  double t16059;
  double t16060;
  double t16061;
  double t16062;
  double t16073;
  double t16087;
  double t16091;
  double t16092;
  double t16112;
  double t16113;
  double t16114;
  double t16115;
  double t16122;
  double t16131;
  double t16196;
  double t16197;
  double t16198;
  double t16201;
  double t16202;
  double t16203;
  double t16204;
  double t16134;
  double t16135;
  double t16138;
  double t16207;
  double t16208;
  double t16209;
  double t16142;
  double t16144;
  double t16148;
  double t16151;
  double t16154;
  double t16158;
  double t16159;
  double t16162;
  double t16166;
  double t16167;
  double t16170;
  double t16173;
  double t16177;
  double t16178;
  double t16181;
  double t16186;
  double t16188;
  double t16191;
  double t16192;
  double t16252;
  double t16253;
  double t16254;
  double t16255;
  double t16257;
  double t16258;
  double t16259;
  double t15530;
  double t15549;
  double t15639;
  double t16247;
  double t16248;
  double t16250;
  double t16256;
  double t16260;
  double t16262;
  double t16264;
  double t16265;
  double t16266;
  double t16317;
  double t16318;
  double t16319;
  double t16324;
  double t16325;
  double t16328;
  double t16329;
  double t16330;
  double t16320;
  double t16321;
  double t16322;
  double t16326;
  double t16331;
  double t16332;
  double t16334;
  double t16335;
  double t16336;
  double t15655;
  double t15661;
  double t15662;
  double t16132;
  double t16139;
  double t16156;
  double t16163;
  double t16174;
  double t16182;
  double t16395;
  double t16396;
  double t16397;
  double t16210;
  double t16399;
  double t16214;
  double t16403;
  double t16406;
  double t16407;
  double t16408;
  double t16410;
  double t16413;
  double t16414;
  double t16415;
  double t16223;
  double t16417;
  double t16226;
  double t16422;
  double t16425;
  double t16426;
  double t16427;
  double t16428;
  double t16233;
  double t16433;
  double t16436;
  double t16437;
  double t16438;
  double t16439;
  double t16238;
  double t16441;
  double t16445;
  double t16446;
  double t16447;
  double t16448;
  double t16251;
  double t16271;
  double t16272;
  double t16285;
  double t16286;
  double t16293;
  double t16301;
  double t16308;
  double t16323;
  double t16342;
  double t16349;
  double t16355;
  double t16356;
  double t16367;
  double t16372;
  double t16373;
  double t16491;
  double t16492;
  double t16610;
  double t16612;
  double t16498;
  double t16598;
  double t16599;
  double t16600;
  double t16602;
  double t16603;
  double t16604;
  double t16606;
  double t16607;
  double t16608;
  double t16544;
  double t16548;
  double t16549;
  double t16624;
  double t16625;
  double t16626;
  double t16659;
  double t16660;
  double t16661;
  double t16663;
  double t16664;
  double t16665;
  double t16671;
  double t16672;
  double t16703;
  double t16705;
  t10673 = Sin(var1[4]);
  t15037 = Cos(var1[12]);
  t12651 = Cos(var1[5]);
  t15140 = Cos(var1[14]);
  t15223 = Sin(var1[13]);
  t15138 = Cos(var1[13]);
  t15225 = Sin(var1[14]);
  t15032 = Sin(var1[12]);
  t15231 = t15140*t15223;
  t15233 = -1.*t15138*t15225;
  t15234 = t15231 + t15233;
  t15050 = Sin(var1[5]);
  t15099 = Cos(var1[4]);
  t15162 = t15138*t15140;
  t15227 = t15223*t15225;
  t15229 = t15162 + t15227;
  t15453 = -1.*t15037*t12651;
  t15456 = t15032*t15050;
  t15459 = t15453 + t15456;
  t15461 = var2[1]*t15099*t15459;
  t15462 = -1.*t12651*t15032*t15234;
  t15464 = -1.*t15037*t15234*t15050;
  t15466 = t15462 + t15464;
  t15469 = var2[2]*t15099*t15466;
  t15470 = -1.*t12651*t15032*t15229;
  t15473 = -1.*t15037*t15229*t15050;
  t15474 = t15470 + t15473;
  t15475 = var2[0]*t15099*t15474;
  t15478 = t15461 + t15469 + t15475;
  t15245 = -1.*t15140*t15223;
  t15250 = t15138*t15225;
  t15251 = t15245 + t15250;
  t15417 = t15037*t12651*t15229;
  t15418 = -1.*t15032*t15229*t15050;
  t15441 = t15417 + t15418;
  t15236 = t15037*t12651*t15234;
  t15239 = -1.*t15032*t15234*t15050;
  t15240 = t15236 + t15239;
  t15483 = -1.*t15138*t15140;
  t15500 = -1.*t15223*t15225;
  t15511 = t15483 + t15500;
  t15642 = t15251*t10673;
  t15643 = t15099*t15441;
  t15645 = t15642 + t15643;
  t15035 = -1.*t12651*t15032;
  t15051 = -1.*t15037*t15050;
  t15053 = t15035 + t15051;
  t15649 = t15229*t10673;
  t15651 = t15099*t15240;
  t15652 = t15649 + t15651;
  t15672 = Sin(var1[3]);
  t15669 = Cos(var1[3]);
  t15230 = t15099*t15229;
  t15241 = -1.*t10673*t15240;
  t15242 = t15230 + t15241;
  t15409 = t15099*t15251;
  t15447 = -1.*t10673*t15441;
  t15449 = t15409 + t15447;
  t15719 = t15669*t15053;
  t15721 = t15672*t10673*t15459;
  t15722 = t15719 + t15721;
  t15723 = var2[1]*t15722;
  t15725 = t15672*t10673*t15466;
  t15726 = t15669*t15240;
  t15727 = t15725 + t15726;
  t15729 = var2[2]*t15727;
  t15731 = t15672*t10673*t15474;
  t15732 = t15669*t15441;
  t15733 = t15731 + t15732;
  t15735 = var2[0]*t15733;
  t15736 = t15723 + t15729 + t15735;
  t15535 = t15037*t12651*t15251;
  t15537 = -1.*t15032*t15251*t15050;
  t15538 = t15535 + t15537;
  t15693 = t12651*t15032*t15229;
  t15695 = t15037*t15229*t15050;
  t15696 = t15693 + t15695;
  t15683 = t12651*t15032*t15234;
  t15685 = t15037*t15234*t15050;
  t15686 = t15683 + t15685;
  t15656 = t15037*t12651*t15511;
  t15657 = -1.*t15032*t15511*t15050;
  t15659 = t15656 + t15657;
  t15752 = t15669*t15696;
  t15753 = -1.*t15672*t15449;
  t15755 = t15752 + t15753;
  t15675 = t15037*t12651;
  t15676 = -1.*t15032*t15050;
  t15677 = t15675 + t15676;
  t15759 = t15669*t15686;
  t15760 = -1.*t15672*t15242;
  t15762 = t15759 + t15760;
  t15782 = t15672*t10673*t15053;
  t15784 = t15669*t15677;
  t15785 = t15782 + t15784;
  t15706 = -1.*t15229*t10673;
  t15707 = -1.*t15099*t15240;
  t15709 = t15706 + t15707;
  t15712 = -1.*t15251*t10673;
  t15713 = -1.*t15099*t15441;
  t15715 = t15712 + t15713;
  t15800 = t15672*t15053;
  t15805 = -1.*t15669*t10673*t15459;
  t15816 = t15800 + t15805;
  t15832 = var2[1]*t15816;
  t15848 = -1.*t15669*t10673*t15466;
  t15854 = t15672*t15240;
  t15855 = t15848 + t15854;
  t15856 = var2[2]*t15855;
  t15868 = -1.*t15669*t10673*t15474;
  t15894 = t15672*t15441;
  t15895 = t15868 + t15894;
  t15897 = var2[0]*t15895;
  t15898 = t15832 + t15856 + t15897;
  t15737 = t12651*t15032*t15251;
  t15739 = t15037*t15251*t15050;
  t15741 = t15737 + t15739;
  t15743 = t15099*t15511;
  t15745 = -1.*t10673*t15538;
  t15746 = t15743 + t15745;
  t15765 = t12651*t15032*t15511;
  t15768 = t15037*t15511*t15050;
  t15769 = t15765 + t15768;
  t15772 = t15099*t15234;
  t15774 = -1.*t10673*t15659;
  t15775 = t15772 + t15774;
  t15906 = t15672*t15696;
  t15907 = t15669*t15449;
  t15909 = t15906 + t15907;
  t15914 = t15672*t15686;
  t15915 = t15669*t15242;
  t15917 = t15914 + t15915;
  t15931 = -1.*t15140;
  t15933 = 1. + t15931;
  t15934 = 0.50321*t15933;
  t15935 = 0.19821*t15140;
  t15937 = t15934 + t15935;
  t15943 = -1.*t15037;
  t15945 = 1. + t15943;
  t15947 = -1.*t15138;
  t15949 = 1. + t15947;
  t15950 = 0.28121*t15949;
  t15951 = t15138*t15937;
  t15953 = -0.305*t15223*t15225;
  t15954 = t15950 + t15951 + t15953;
  t15930 = 0.28121*t15223;
  t15938 = -1.*t15937*t15223;
  t15939 = -0.305*t15138*t15225;
  t15941 = t15930 + t15938 + t15939;
  t15946 = 0.15121*t15945;
  t15955 = t15037*t15954;
  t15957 = t15946 + t15955;
  t15958 = t12651*t15957;
  t15959 = -0.15121*t15945;
  t15961 = -0.15121*t15037;
  t15962 = -0.15121*t15032;
  t15963 = t15032*t15954;
  t15965 = t15959 + t15961 + t15962 + t15963;
  t15966 = -1.*t15965*t15050;
  t15967 = t15958 + t15966;
  t15973 = t15941*t10673;
  t15974 = t15099*t15967;
  t15975 = t15973 + t15974;
  t15942 = -1.*t15941*t10673;
  t15969 = -1.*t15099*t15967;
  t15970 = t15942 + t15969;
  t15987 = t15099*t15941;
  t15989 = -1.*t10673*t15967;
  t15990 = t15987 + t15989;
  t15981 = t12651*t15965;
  t15982 = t15957*t15050;
  t15983 = t15981 + t15982;
  t15985 = -1.*t15677*t15983;
  t15986 = -1.*t15099*t15053*t15975;
  t15991 = t10673*t15053*t15990;
  t15993 = t15985 + t15986 + t15991;
  t16124 = -1.*t12651*t15965;
  t16125 = -1.*t15957*t15050;
  t16127 = t16124 + t16125;
  t16017 = t15686*t15983;
  t16021 = t15652*t15975;
  t16022 = t15242*t15990;
  t16023 = t16017 + t16021 + t16022;
  t16032 = t15677*t15983;
  t16033 = t15099*t15053*t15975;
  t16034 = -1.*t10673*t15053*t15990;
  t16036 = t16032 + t16033 + t16034;
  t16123 = Power(t15099,2);
  t16129 = Power(t10673,2);
  t16059 = -1.*t15696*t15983;
  t16060 = -1.*t15645*t15975;
  t16061 = -1.*t15449*t15990;
  t16062 = t16059 + t16060 + t16061;
  t16073 = -1.*t15686*t15983;
  t16087 = -1.*t15652*t15975;
  t16091 = -1.*t15242*t15990;
  t16092 = t16073 + t16087 + t16091;
  t16112 = t15696*t15983;
  t16113 = t15645*t15975;
  t16114 = t15449*t15990;
  t16115 = t16112 + t16113 + t16114;
  t16122 = t15099*t15466*t15993;
  t16131 = -1.*t15053*t15983;
  t16196 = 0.15121*t15032;
  t16197 = -1.*t15032*t15954;
  t16198 = t16196 + t16197;
  t16201 = t12651*t16198;
  t16202 = t15961 + t15955;
  t16203 = -1.*t16202*t15050;
  t16204 = t16201 + t16203;
  t16134 = -1.*t15099*t15459*t15975;
  t16135 = t10673*t15459*t15990;
  t16138 = t15240*t15983;
  t16207 = t12651*t16202;
  t16208 = t16198*t15050;
  t16209 = t16207 + t16208;
  t16142 = t15099*t15466*t15975;
  t16144 = -1.*t10673*t15466*t15990;
  t16148 = t15099*t15459*t16023;
  t16151 = t15099*t15474*t16036;
  t16154 = t15053*t15983;
  t16158 = t15099*t15459*t15975;
  t16159 = -1.*t10673*t15459*t15990;
  t16162 = -1.*t15441*t15983;
  t16166 = -1.*t15099*t15474*t15975;
  t16167 = t10673*t15474*t15990;
  t16170 = t15099*t15459*t16062;
  t16173 = -1.*t15240*t15983;
  t16177 = -1.*t15099*t15466*t15975;
  t16178 = t10673*t15466*t15990;
  t16181 = t15441*t15983;
  t16186 = t15099*t15474*t15975;
  t16188 = -1.*t10673*t15474*t15990;
  t16191 = t15099*t15474*t16092;
  t16192 = t15099*t15466*t16115;
  t16252 = 0.28121*t15138;
  t16253 = -1.*t15138*t15937;
  t16254 = 0.305*t15223*t15225;
  t16255 = t16252 + t16253 + t16254;
  t16257 = t15037*t12651*t15941;
  t16258 = -1.*t15032*t15941*t15050;
  t16259 = t16257 + t16258;
  t15530 = t15511*t10673;
  t15549 = t15099*t15538;
  t15639 = t15530 + t15549;
  t16247 = t12651*t15032*t15941;
  t16248 = t15037*t15941*t15050;
  t16250 = t16247 + t16248;
  t16256 = t16255*t10673;
  t16260 = t15099*t16259;
  t16262 = t16256 + t16260;
  t16264 = t15099*t16255;
  t16265 = -1.*t10673*t16259;
  t16266 = t16264 + t16265;
  t16317 = -0.305*t15140*t15223;
  t16318 = 0.305*t15138*t15225;
  t16319 = t16317 + t16318;
  t16324 = -0.305*t15138*t15140;
  t16325 = t16324 + t15953;
  t16328 = t15037*t12651*t16319;
  t16329 = -1.*t15032*t16319*t15050;
  t16330 = t16328 + t16329;
  t16320 = t12651*t15032*t16319;
  t16321 = t15037*t16319*t15050;
  t16322 = t16320 + t16321;
  t16326 = t16325*t10673;
  t16331 = t15099*t16330;
  t16332 = t16326 + t16331;
  t16334 = t15099*t16325;
  t16335 = -1.*t10673*t16330;
  t16336 = t16334 + t16335;
  t15655 = t15234*t10673;
  t15661 = t15099*t15659;
  t15662 = t15655 + t15661;
  t16132 = -1.*t15677*t15967;
  t16139 = t15686*t15967;
  t16156 = t15677*t15967;
  t16163 = -1.*t15696*t15967;
  t16174 = -1.*t15686*t15967;
  t16182 = t15696*t15967;
  t16395 = -1.*t15053*t15967;
  t16396 = t15985 + t16395;
  t16397 = t15240*t16396;
  t16210 = -1.*t15677*t16209;
  t16399 = -1.*t15459*t15967;
  t16214 = t15686*t16209;
  t16403 = t15466*t15967;
  t16406 = t15941*t15229;
  t16407 = t15240*t15967;
  t16408 = t16406 + t16017 + t16407;
  t16410 = t15053*t16408;
  t16413 = t15053*t15967;
  t16414 = t16032 + t16413;
  t16415 = t15441*t16414;
  t16223 = t15677*t16209;
  t16417 = t15459*t15967;
  t16226 = -1.*t15696*t16209;
  t16422 = -1.*t15474*t15967;
  t16425 = -1.*t15941*t15251;
  t16426 = -1.*t15441*t15967;
  t16427 = t16425 + t16059 + t16426;
  t16428 = t15053*t16427;
  t16233 = -1.*t15686*t16209;
  t16433 = -1.*t15466*t15967;
  t16436 = -1.*t15941*t15229;
  t16437 = -1.*t15240*t15967;
  t16438 = t16436 + t16073 + t16437;
  t16439 = t15441*t16438;
  t16238 = t15696*t16209;
  t16441 = t15474*t15967;
  t16445 = t15941*t15251;
  t16446 = t15441*t15967;
  t16447 = t16445 + t16112 + t16446;
  t16448 = t15240*t16447;
  t16251 = t15677*t16250;
  t16271 = -1.*t16250*t15696;
  t16272 = -1.*t15741*t15983;
  t16285 = t16250*t15696;
  t16286 = t15741*t15983;
  t16293 = -1.*t15686*t16250;
  t16301 = -1.*t15677*t16250;
  t16308 = t15686*t16250;
  t16323 = t15677*t16322;
  t16342 = -1.*t16322*t15696;
  t16349 = -1.*t15677*t16322;
  t16355 = t15686*t16322;
  t16356 = t15769*t15983;
  t16367 = t16322*t15696;
  t16372 = -1.*t15686*t16322;
  t16373 = -1.*t15769*t15983;
  t16491 = t15941*t15511;
  t16492 = t15251*t16255;
  t16610 = Power(t15037,2);
  t16612 = Power(t15032,2);
  t16498 = -1.*t16255*t15229;
  t16598 = t15032*t15957;
  t16599 = -1.*t15037*t15965;
  t16600 = t16598 + t16599;
  t16602 = -1.*t15032*t15957;
  t16603 = t15037*t15965;
  t16604 = t16602 + t16603;
  t16606 = -1.*t15037*t15234*t15957;
  t16607 = -1.*t15032*t15234*t15965;
  t16608 = t16436 + t16606 + t16607;
  t16544 = t15251*t16325;
  t16548 = -1.*t15234*t15941;
  t16549 = -1.*t16325*t15229;
  t16624 = t15037*t15229*t15957;
  t16625 = t15032*t15229*t15965;
  t16626 = t16445 + t16624 + t16625;
  t16659 = -0.15121*t15511;
  t16660 = -0.15121*t15229;
  t16661 = t16659 + t16660;
  t16663 = var2[2]*t16661;
  t16664 = -1.*t15234*t15954;
  t16665 = t16664 + t16436;
  t16671 = t15954*t15229;
  t16672 = t16445 + t16671;
  t16703 = 0.28121*t15140;
  t16705 = -1.*t15937*t15140;
  p_output1[0]=t15449*var2[0] - 1.*t10673*t15053*var2[1] + t15242*var2[2];
  p_output1[1]=t15478;
  p_output1[2]=t15478;
  p_output1[3]=t15639*var2[0] + t15645*var2[2];
  p_output1[4]=t15652*var2[0] + t15662*var2[2];
  p_output1[5]=t15645;
  p_output1[6]=t15053*t15099;
  p_output1[7]=t15652;
  p_output1[8]=(-1.*t15449*t15669 - 1.*t15672*t15696)*var2[0] + (t10673*t15053*t15669 - 1.*t15672*t15677)*var2[1] + (-1.*t15242*t15669 - 1.*t15672*t15686)*var2[2];
  p_output1[9]=-1.*t15672*t15715*var2[0] + t15053*t15099*t15672*var2[1] - 1.*t15672*t15709*var2[2];
  p_output1[10]=t15736;
  p_output1[11]=t15736;
  p_output1[12]=(t15669*t15741 - 1.*t15672*t15746)*var2[0] + t15755*var2[2];
  p_output1[13]=t15762*var2[0] + (t15669*t15769 - 1.*t15672*t15775)*var2[2];
  p_output1[14]=t15755;
  p_output1[15]=t15785;
  p_output1[16]=t15762;
  p_output1[17]=t15755*var2[0] + t15785*var2[1] + t15762*var2[2];
  p_output1[18]=t15669*t15715*var2[0] - 1.*t15053*t15099*t15669*var2[1] + t15669*t15709*var2[2];
  p_output1[19]=t15898;
  p_output1[20]=t15898;
  p_output1[21]=(t15672*t15741 + t15669*t15746)*var2[0] + t15909*var2[2];
  p_output1[22]=t15917*var2[0] + (t15672*t15769 + t15669*t15775)*var2[2];
  p_output1[23]=t15909;
  p_output1[24]=-1.*t10673*t15053*t15669 + t15672*t15677;
  p_output1[25]=t15917;
  p_output1[26]=(t15652*(t10673*t15053*t15970 + t10673*t15053*t15975) + t15053*t15099*(t15242*t15970 + t15242*t15975 + t15652*t15990 + t15709*t15990) + t15242*t15993 - 1.*t10673*t15053*t16023)*var2[0] + (t15645*(-1.*t15242*t15970 - 1.*t15242*t15975 - 1.*t15652*t15990 - 1.*t15709*t15990) + t15652*(t15449*t15970 + t15449*t15975 + t15645*t15990 + t15715*t15990) + t15449*t16092 + t15242*t16115)*var2[1] + (t15645*(-1.*t10673*t15053*t15970 - 1.*t10673*t15053*t15975) + t15053*t15099*(-1.*t15449*t15970 - 1.*t15449*t15975 - 1.*t15645*t15990 - 1.*t15715*t15990) + t15449*t16036 - 1.*t10673*t15053*t16062)*var2[2];
  p_output1[27]=(t16122 + t15652*(-1.*t15053*t16123*t16127 - 1.*t15053*t16127*t16129 + t16131 + t16132 + t16134 + t16135) + t15053*t15099*(-1.*t10673*t15242*t16127 + t15099*t15652*t16127 + t16138 + t16139 + t16142 + t16144) + t16148)*var2[0] + (t15645*(t10673*t15242*t16127 - 1.*t15099*t15652*t16127 + t16173 + t16174 + t16177 + t16178) + t15652*(-1.*t10673*t15449*t16127 + t15099*t15645*t16127 + t16181 + t16182 + t16186 + t16188) + t16191 + t16192)*var2[1] + (t16151 + t15645*(t15053*t16123*t16127 + t15053*t16127*t16129 + t16154 + t16156 + t16158 + t16159) + t15053*t15099*(t10673*t15449*t16127 - 1.*t15099*t15645*t16127 + t16162 + t16163 + t16166 + t16167) + t16170)*var2[2];
  p_output1[28]=(t16122 + t16148 + t15652*(t16131 + t16134 + t16135 - 1.*t15053*t16123*t16204 - 1.*t15053*t16129*t16204 + t16210) + t15053*t15099*(t16138 + t16142 + t16144 - 1.*t10673*t15242*t16204 + t15099*t15652*t16204 + t16214))*var2[0] + (t16191 + t16192 + t15645*(t16173 + t16177 + t16178 + t10673*t15242*t16204 - 1.*t15099*t15652*t16204 + t16233) + t15652*(t16181 + t16186 + t16188 - 1.*t10673*t15449*t16204 + t15099*t15645*t16204 + t16238))*var2[1] + (t16151 + t16170 + t15645*(t16154 + t16158 + t16159 + t15053*t16123*t16204 + t15053*t16129*t16204 + t16223) + t15053*t15099*(t16162 + t16166 + t16167 + t10673*t15449*t16204 - 1.*t15099*t15645*t16204 + t16226))*var2[2];
  p_output1[29]=(t15645*t15993 + t15652*(-1.*t15053*t15099*t16262 + t10673*t15053*t16266 + t16301) + t15053*t15099*(t16112 + t16113 + t16114 + t15652*t16262 + t15242*t16266 + t16308))*var2[0] + (t15639*t16092 + t15645*t16115 + t15652*(t15639*t15975 + t15746*t15990 + t15645*t16262 + t15449*t16266 + t16285 + t16286) + t15645*(t16059 + t16060 + t16061 - 1.*t15652*t16262 - 1.*t15242*t16266 + t16293))*var2[1] + (t15639*t16036 + t15645*(t16251 + t15053*t15099*t16262 - 1.*t10673*t15053*t16266) + t15053*t15099*(-1.*t15639*t15975 - 1.*t15746*t15990 - 1.*t15645*t16262 - 1.*t15449*t16266 + t16271 + t16272))*var2[2];
  p_output1[30]=(t15662*t15993 + t15652*(-1.*t15053*t15099*t16332 + t10673*t15053*t16336 + t16349) + t15053*t15099*(t15662*t15975 + t15775*t15990 + t15652*t16332 + t15242*t16336 + t16355 + t16356))*var2[0] + (t15652*t16092 + t15662*t16115 + t15652*(t16017 + t16021 + t16022 + t15645*t16332 + t15449*t16336 + t16367) + t15645*(-1.*t15662*t15975 - 1.*t15775*t15990 - 1.*t15652*t16332 - 1.*t15242*t16336 + t16372 + t16373))*var2[1] + (t15652*t16036 + t15645*(t16323 + t15053*t15099*t16332 - 1.*t10673*t15053*t16336) + t15053*t15099*(t16073 + t16087 + t16091 - 1.*t15645*t16332 - 1.*t15449*t16336 + t16342))*var2[2];
  p_output1[31]=t15652*t15993 + t15053*t15099*t16023;
  p_output1[32]=t15645*t16092 + t15652*t16115;
  p_output1[33]=t15645*t16036 + t15053*t15099*t16062;
  p_output1[34]=(t16397 + t15686*(-1.*t15053*t16127 + t16131 + t16132 + t16399) + t15677*(t15240*t16127 + t16138 + t16139 + t16403) + t16410)*var2[0] + (t15696*(-1.*t15240*t16127 + t16173 + t16174 + t16433) + t16439 + t15686*(t15441*t16127 + t16181 + t16182 + t16441) + t16448)*var2[1] + (t16415 + t15696*(t15053*t16127 + t16154 + t16156 + t16417) + t15677*(-1.*t15441*t16127 + t16162 + t16163 + t16422) + t16428)*var2[2];
  p_output1[35]=(t16397 + t15686*(t16131 - 1.*t15053*t16204 + t16210 + t16399) + t15677*(t16138 + t15240*t16204 + t16214 + t16403) + t16410)*var2[0] + (t15696*(t16173 - 1.*t15240*t16204 + t16233 + t16433) + t16439 + t15686*(t16181 + t15441*t16204 + t16238 + t16441) + t16448)*var2[1] + (t16415 + t15696*(t16154 + t15053*t16204 + t16223 + t16417) + t15677*(t16162 - 1.*t15441*t16204 + t16226 + t16422) + t16428)*var2[2];
  p_output1[36]=(t15686*(-1.*t15053*t16259 + t16301) + t15696*t16396 + t15677*(t16112 + t15229*t16255 + t15240*t16259 + t16308 + t16445 + t16446))*var2[0] + (t15741*t16438 + t15696*t16447 + t15686*(t15538*t15967 + t15441*t16259 + t16285 + t16286 + t16491 + t16492) + t15696*(t16059 - 1.*t15240*t16259 + t16293 + t16425 + t16426 + t16498))*var2[1] + (t15696*(t16251 + t15053*t16259) + t15677*(-1.*t15511*t15941 - 1.*t15538*t15967 - 1.*t15251*t16255 - 1.*t15441*t16259 + t16271 + t16272) + t15741*t16414)*var2[2];
  p_output1[37]=(t15686*(-1.*t15053*t16330 + t16349) + t15677*(t15234*t15941 + t15659*t15967 + t15229*t16325 + t15240*t16330 + t16355 + t16356) + t15769*t16396)*var2[0] + (t15686*t16438 + t15769*t16447 + t15686*(t16017 + t15441*t16330 + t16367 + t16406 + t16407 + t16544) + t15696*(-1.*t15659*t15967 - 1.*t15240*t16330 + t16372 + t16373 + t16548 + t16549))*var2[1] + (t15696*(t16323 + t15053*t16330) + t15686*t16414 + t15677*(t16073 - 1.*t15251*t16325 - 1.*t15441*t16330 + t16342 + t16436 + t16437))*var2[2];
  p_output1[38]=t15686*t16396 + t15677*t16408;
  p_output1[39]=t15696*t16438 + t15686*t16447;
  p_output1[40]=t15696*t16414 + t15677*t16427;
  p_output1[41]=t15229*(t15037*t15957 + t15032*t15965 + t15032*t16198 - 1.*t15037*t16202)*var2[0] + (t15229*(-1.*t15032*t15229*t15957 + t15037*t15229*t15965 + t15037*t15229*t16198 + t15032*t15229*t16202) + t15251*(t15032*t15234*t15957 - 1.*t15037*t15234*t15965 - 1.*t15037*t15234*t16198 - 1.*t15032*t15234*t16202))*var2[1] + t15251*(-1.*t15037*t15957 - 1.*t15032*t15965 - 1.*t15032*t16198 + t15037*t16202)*var2[2];
  p_output1[42]=t15251*t16600*var2[0] + (t15511*t16608 + t15229*(t15037*t15251*t15957 + t15032*t15251*t15965 + t16491 + t16492 + t15229*t15941*t16610 + t15229*t15941*t16612) + t15251*(-1.*t15037*t15229*t15957 - 1.*t15032*t15229*t15965 + t16425 + t16498 - 1.*t15234*t15941*t16610 - 1.*t15234*t15941*t16612) + t15251*t16626)*var2[1] + t15511*t16604*var2[2];
  p_output1[43]=t15234*t16600*var2[0] + (t15229*t16608 + t15229*(t15037*t15234*t15957 + t15032*t15234*t15965 + t16406 + t16544 + t15229*t16319*t16610 + t15229*t16319*t16612) + t15251*(-1.*t15037*t15511*t15957 - 1.*t15032*t15511*t15965 + t16548 + t16549 - 1.*t15234*t16319*t16610 - 1.*t15234*t16319*t16612) + t15234*t16626)*var2[1] + t15229*t16604*var2[2];
  p_output1[44]=t15229*t16600;
  p_output1[45]=t15251*t16608 + t15229*t16626;
  p_output1[46]=t15251*t16604;
  p_output1[47]=t16663 + (t15229*(t15251*t15954 + t16406 + t16491 + t16492) + t15251*(-1.*t15229*t15954 + t16425 + t16498 + t16548) + t15511*t16665 + t15251*t16672)*var2[1];
  p_output1[48]=t16663 + (t15229*(t15234*t15954 + t15229*t16319 + t16406 + t16544) + t15251*(-1.*t15511*t15954 - 1.*t15234*t16319 + t16548 + t16549) + t15229*t16665 + t15234*t16672)*var2[1];
  p_output1[49]=-0.15121 + t15251*t16665 + t15229*t16672;
  p_output1[50]=-0.15121*t15234 - 0.15121*t15251;
  p_output1[51]=(-0.305*Power(t15140,2) + t16703 + t16705)*var2[0] + (-0.28121*t15225 + 0.305*t15140*t15225 + t15225*t15937)*var2[2];
  p_output1[52]=0.28121*t15225 - 0.305*t15140*t15225 - 1.*t15225*t15937;
  p_output1[53]=0.305*Power(t15225,2) + t16703 + t16705;
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

#include "J_fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
