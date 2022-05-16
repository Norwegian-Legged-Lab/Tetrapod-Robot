/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:19 GMT+02:00
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
  double t46345;
  double t46356;
  double t46360;
  double t46372;
  double t46569;
  double t46571;
  double t46576;
  double t46680;
  double t45900;
  double t46168;
  double t46686;
  double t46865;
  double t46641;
  double t46750;
  double t46815;
  double t45595;
  double t46888;
  double t46894;
  double t46897;
  double t46898;
  double t46899;
  double t46901;
  double t46931;
  double t46932;
  double t46933;
  double t46948;
  double t46958;
  double t46988;
  double t47004;
  double t47005;
  double t47075;
  double t47076;
  double t47077;
  double t47095;
  double t47230;
  double t47239;
  double t47240;
  double t47241;
  double t47242;
  double t47244;
  double t47245;
  double t47248;
  double t47249;
  double t47255;
  double t47063;
  double t47069;
  double t47073;
  double t47074;
  double t47231;
  double t47235;
  double t47237;
  double t47263;
  double t47264;
  double t47265;
  double t47270;
  double t47277;
  double t47289;
  double t47295;
  double t47297;
  double t47313;
  double t47019;
  double t47040;
  double t47041;
  double t47043;
  double t47045;
  double t47052;
  double t47318;
  double t47326;
  double t47329;
  double t47413;
  double t47414;
  double t47417;
  double t47238;
  double t47315;
  double t47316;
  double t47430;
  double t47431;
  double t47432;
  double t47042;
  double t47058;
  double t47059;
  double t47423;
  double t47426;
  double t47427;
  double t47623;
  double t47624;
  double t47625;
  double t47418;
  double t47419;
  double t47420;
  double t47428;
  double t47449;
  double t47514;
  double t47582;
  double t47650;
  double t47653;
  double t47654;
  double t47585;
  double t47674;
  double t47675;
  double t47678;
  double t47429;
  double t47433;
  double t47434;
  double t47658;
  double t47665;
  double t47659;
  double t47661;
  double t47663;
  double t47672;
  double t47682;
  double t47593;
  double t47594;
  double t47607;
  double t47626;
  double t47627;
  double t47628;
  double t47632;
  double t47634;
  double t47635;
  double t47636;
  double t47637;
  double t47643;
  double t47646;
  double t47647;
  double t47649;
  double t47864;
  double t47870;
  double t47872;
  double t47847;
  double t47853;
  double t47664;
  double t47879;
  double t47880;
  double t47883;
  double t47892;
  double t47893;
  double t47897;
  double t47680;
  double t47686;
  double t47687;
  double t47689;
  double t47690;
  double t47693;
  double t47694;
  double t47697;
  double t47898;
  double t47699;
  double t47700;
  double t47906;
  double t47706;
  double t47707;
  double t47796;
  double t47932;
  double t47936;
  double t47938;
  double t47956;
  double t47958;
  double t47959;
  double t47965;
  double t47966;
  double t47967;
  double t47970;
  double t47971;
  double t47972;
  double t48098;
  double t48100;
  double t48108;
  double t48116;
  double t48124;
  double t48126;
  double t48131;
  double t48140;
  double t48141;
  double t48142;
  double t48137;
  double t48150;
  double t48151;
  double t48153;
  double t48155;
  double t48163;
  double t48164;
  double t48165;
  double t48167;
  double t48169;
  double t48171;
  double t48176;
  double t48177;
  double t48179;
  double t47941;
  double t47942;
  double t47944;
  double t47947;
  double t47949;
  double t47951;
  double t47952;
  double t48220;
  double t48221;
  double t48222;
  double t48223;
  double t48224;
  double t48228;
  double t48229;
  double t48230;
  double t48236;
  double t48237;
  double t48238;
  double t48226;
  double t48242;
  double t48243;
  double t48244;
  double t48253;
  double t48255;
  double t48256;
  double t48246;
  double t48252;
  double t48265;
  double t48266;
  double t48267;
  double t48270;
  double t48271;
  double t48272;
  double t48276;
  double t48277;
  double t48279;
  double t46962;
  double t46974;
  double t46978;
  double t47440;
  double t47441;
  double t47442;
  double t48185;
  double t48188;
  double t48364;
  double t48147;
  double t48157;
  double t48534;
  double t48537;
  double t48556;
  double t48561;
  double t48365;
  double t48380;
  double t48412;
  double t48512;
  double t48518;
  double t48520;
  double t48521;
  double t48522;
  double t48525;
  double t48527;
  double t48529;
  double t48530;
  double t48531;
  double t48536;
  double t48541;
  double t48543;
  double t48547;
  double t48554;
  double t48559;
  double t48581;
  double t48582;
  double t48829;
  double t48709;
  double t48787;
  double t48841;
  double t48795;
  double t48796;
  double t48802;
  double t48803;
  double t48910;
  double t48914;
  double t48925;
  double t48937;
  double t48940;
  double t48931;
  double t48977;
  double t48979;
  double t47955;
  double t47960;
  double t47961;
  double t49001;
  double t49004;
  double t48887;
  double t48907;
  double t48921;
  double t48922;
  double t48947;
  double t48948;
  double t48949;
  double t49049;
  double t48958;
  double t48959;
  double t48960;
  double t49053;
  double t49093;
  double t49138;
  double t49145;
  double t49148;
  double t48285;
  double t48286;
  double t48287;
  double t48336;
  double t48337;
  double t48338;
  double t48214;
  double t48215;
  double t48217;
  double t49036;
  double t49037;
  double t49217;
  double t49005;
  double t49218;
  double t49219;
  double t49220;
  double t49252;
  double t49254;
  double t49259;
  double t49263;
  double t49229;
  double t49238;
  double t49239;
  double t49240;
  double t49241;
  double t49242;
  double t49243;
  double t49244;
  double t49245;
  double t49246;
  double t49247;
  double t49248;
  double t49249;
  double t49253;
  double t49260;
  double t49267;
  double t49268;
  double t49272;
  double t49301;
  double t49275;
  double t49276;
  double t49305;
  double t49284;
  double t49286;
  double t49289;
  double t48308;
  double t48309;
  double t48310;
  double t49331;
  double t49338;
  double t49340;
  double t49323;
  double t49324;
  double t49325;
  double t49383;
  double t49390;
  double t48209;
  double t48211;
  double t48212;
  double t48200;
  double t48201;
  t46345 = Cos(var1[16]);
  t46356 = Cos(var1[17]);
  t46360 = -1.*t46345*t46356;
  t46372 = Sin(var1[16]);
  t46569 = Sin(var1[17]);
  t46571 = -1.*t46372*t46569;
  t46576 = t46360 + t46571;
  t46680 = Cos(var1[15]);
  t45900 = Cos(var1[5]);
  t46168 = Sin(var1[15]);
  t46686 = Sin(var1[5]);
  t46865 = Cos(var1[3]);
  t46641 = t45900*t46168*t46576;
  t46750 = t46680*t46576*t46686;
  t46815 = t46641 + t46750;
  t45595 = Sin(var1[3]);
  t46888 = Cos(var1[4]);
  t46894 = -1.*t46356*t46372;
  t46897 = t46345*t46569;
  t46898 = t46894 + t46897;
  t46899 = t46888*t46898;
  t46901 = Sin(var1[4]);
  t46931 = t46680*t45900*t46576;
  t46932 = -1.*t46168*t46576*t46686;
  t46933 = t46931 + t46932;
  t46948 = -1.*t46901*t46933;
  t46958 = t46899 + t46948;
  t46988 = -1.*t46898*t46901;
  t47004 = -1.*t46888*t46933;
  t47005 = t46988 + t47004;
  t47075 = -1.*t46356;
  t47076 = 1. + t47075;
  t47077 = -0.50321*t47076;
  t47095 = -0.23321*t46356;
  t47230 = t47077 + t47095;
  t47239 = -1.*t46680;
  t47240 = 1. + t47239;
  t47241 = -0.15121*t47240;
  t47242 = -1.*t46345;
  t47244 = 1. + t47242;
  t47245 = -0.28121*t47244;
  t47248 = t46345*t47230;
  t47249 = 0.27*t46372*t46569;
  t47255 = t47245 + t47248 + t47249;
  t47063 = t45900*t46168;
  t47069 = t46680*t46686;
  t47073 = t47063 + t47069;
  t47074 = 0.28121*t46372;
  t47231 = t47230*t46372;
  t47235 = -0.27*t46345*t46569;
  t47237 = t47074 + t47231 + t47235;
  t47263 = t46680*t47255;
  t47264 = t47241 + t47263;
  t47265 = t45900*t47264;
  t47270 = -0.15121*t46680;
  t47277 = 0.15121*t46168;
  t47289 = t46168*t47255;
  t47295 = t47241 + t47270 + t47277 + t47289;
  t47297 = -1.*t47295*t46686;
  t47313 = t47265 + t47297;
  t47019 = t46345*t46356;
  t47040 = t46372*t46569;
  t47041 = t47019 + t47040;
  t47043 = t46680*t45900*t46898;
  t47045 = -1.*t46168*t46898*t46686;
  t47052 = t47043 + t47045;
  t47318 = t47237*t46901;
  t47326 = t46888*t47313;
  t47329 = t47318 + t47326;
  t47413 = t46888*t47041;
  t47414 = -1.*t46901*t47052;
  t47417 = t47413 + t47414;
  t47238 = -1.*t47237*t46901;
  t47315 = -1.*t46888*t47313;
  t47316 = t47238 + t47315;
  t47430 = t46888*t47237;
  t47431 = -1.*t46901*t47313;
  t47432 = t47430 + t47431;
  t47042 = t47041*t46901;
  t47058 = t46888*t47052;
  t47059 = t47042 + t47058;
  t47423 = t45900*t47295;
  t47426 = t47264*t46686;
  t47427 = t47423 + t47426;
  t47623 = -1.*t45900*t46168*t46576;
  t47624 = -1.*t46680*t46576*t46686;
  t47625 = t47623 + t47624;
  t47418 = -1.*t46680*t45900;
  t47419 = t46168*t46686;
  t47420 = t47418 + t47419;
  t47428 = -1.*t47420*t47427;
  t47449 = t45900*t46168*t46898;
  t47514 = t46680*t46898*t46686;
  t47582 = t47449 + t47514;
  t47650 = -1.*t45900*t47295;
  t47653 = -1.*t47264*t46686;
  t47654 = t47650 + t47653;
  t47585 = t47582*t47427;
  t47674 = -1.*t45900*t46168*t46898;
  t47675 = -1.*t46680*t46898*t46686;
  t47678 = t47674 + t47675;
  t47429 = -1.*t46888*t47073*t47329;
  t47433 = t46901*t47073*t47432;
  t47434 = t47428 + t47429 + t47433;
  t47658 = -1.*t47073*t47427;
  t47665 = -1.*t47420*t47313;
  t47659 = t46680*t45900;
  t47661 = -1.*t46168*t46686;
  t47663 = t47659 + t47661;
  t47672 = t47052*t47427;
  t47682 = t47582*t47313;
  t47593 = t47059*t47329;
  t47594 = t47417*t47432;
  t47607 = t47585 + t47593 + t47594;
  t47626 = var2[0]*t46888*t47625;
  t47627 = t45595*t46901*t47625;
  t47628 = t46865*t46933;
  t47632 = t47627 + t47628;
  t47634 = var2[1]*t47632;
  t47635 = -1.*t46865*t46901*t47625;
  t47636 = t45595*t46933;
  t47637 = t47635 + t47636;
  t47643 = var2[2]*t47637;
  t47646 = -1.*t47073*t47313;
  t47647 = t47428 + t47646;
  t47649 = t47052*t47647;
  t47864 = -0.15121*t46168;
  t47870 = -1.*t46168*t47255;
  t47872 = t47864 + t47870;
  t47847 = 0.15121*t46680;
  t47853 = t47847 + t47263;
  t47664 = -1.*t47663*t47313;
  t47879 = t45900*t47872;
  t47880 = -1.*t47853*t46686;
  t47883 = t47879 + t47880;
  t47892 = t45900*t47853;
  t47893 = t47872*t46686;
  t47897 = t47892 + t47893;
  t47680 = t47678*t47313;
  t47686 = t47237*t47041;
  t47687 = t47052*t47313;
  t47689 = t47686 + t47585 + t47687;
  t47690 = t47073*t47689;
  t47693 = t46888*t47678*t47434;
  t47694 = Power(t46888,2);
  t47697 = Power(t46901,2);
  t47898 = -1.*t47420*t47897;
  t47699 = -1.*t46888*t47663*t47329;
  t47700 = t46901*t47663*t47432;
  t47906 = t47582*t47897;
  t47706 = t46888*t47678*t47329;
  t47707 = -1.*t46901*t47678*t47432;
  t47796 = t46888*t47663*t47607;
  t47932 = t46356*t46372;
  t47936 = -1.*t46345*t46569;
  t47938 = t47932 + t47936;
  t47956 = t46680*t45900*t47938;
  t47958 = -1.*t46168*t47938*t46686;
  t47959 = t47956 + t47958;
  t47965 = t45900*t46168*t47938;
  t47966 = t46680*t47938*t46686;
  t47967 = t47965 + t47966;
  t47970 = t46888*t46576;
  t47971 = -1.*t46901*t47959;
  t47972 = t47970 + t47971;
  t48098 = -0.28121*t46372;
  t48100 = -1.*t47230*t46372;
  t48108 = 0.27*t46345*t46569;
  t48116 = t48098 + t48100 + t48108;
  t48124 = t45900*t46168*t48116;
  t48126 = t46680*t48116*t46686;
  t48131 = t48124 + t48126;
  t48140 = t46680*t45900*t48116;
  t48141 = -1.*t46168*t48116*t46686;
  t48142 = t48140 + t48141;
  t48137 = -1.*t47420*t48131;
  t48150 = 0.28121*t46345;
  t48151 = t48150 + t47248 + t47249;
  t48153 = t48131*t47582;
  t48155 = t46815*t47427;
  t48163 = t48151*t46901;
  t48164 = t46888*t48142;
  t48165 = t48163 + t48164;
  t48167 = t46888*t48151;
  t48169 = -1.*t46901*t48142;
  t48171 = t48167 + t48169;
  t48176 = t46898*t46901;
  t48177 = t46888*t46933;
  t48179 = t48176 + t48177;
  t47941 = -0.15121*t47938;
  t47942 = -0.15121*t46898;
  t47944 = t47941 + t47942;
  t47947 = var2[15]*t47944;
  t47949 = -1.*t46168*t47264;
  t47951 = t46680*t47295;
  t47952 = t47949 + t47951;
  t48220 = 0.27*t46356*t46372;
  t48221 = t48220 + t47235;
  t48222 = t45900*t46168*t48221;
  t48223 = t46680*t48221*t46686;
  t48224 = t48222 + t48223;
  t48228 = t46680*t45900*t48221;
  t48229 = -1.*t46168*t48221*t46686;
  t48230 = t48228 + t48229;
  t48236 = t45900*t46168*t47041;
  t48237 = t46680*t47041*t46686;
  t48238 = t48236 + t48237;
  t48226 = -1.*t47420*t48224;
  t48242 = -0.27*t46345*t46356;
  t48243 = -0.27*t46372*t46569;
  t48244 = t48242 + t48243;
  t48253 = t46680*t45900*t47041;
  t48255 = -1.*t46168*t47041*t46686;
  t48256 = t48253 + t48255;
  t48246 = t48224*t47582;
  t48252 = t48238*t47427;
  t48265 = t48244*t46901;
  t48266 = t46888*t48230;
  t48267 = t48265 + t48266;
  t48270 = t46888*t48244;
  t48271 = -1.*t46901*t48230;
  t48272 = t48270 + t48271;
  t48276 = t47938*t46901;
  t48277 = t46888*t48256;
  t48279 = t48276 + t48277;
  t46962 = t46865*t46815;
  t46974 = -1.*t45595*t46958;
  t46978 = t46962 + t46974;
  t47440 = -1.*t47041*t46901;
  t47441 = -1.*t46888*t47052;
  t47442 = t47440 + t47441;
  t48185 = t48179*t47329;
  t48188 = t46958*t47432;
  t48364 = -1.*t47582*t47427;
  t48147 = t47237*t46898;
  t48157 = t46933*t47313;
  t48534 = -1.*t47052*t47427;
  t48537 = -1.*t47582*t47313;
  t48556 = t46933*t47427;
  t48561 = t46815*t47313;
  t48365 = -1.*t47059*t47329;
  t48380 = -1.*t47417*t47432;
  t48412 = t48364 + t48365 + t48380;
  t48512 = t48155 + t48185 + t48188;
  t48518 = var2[0]*t46888*t47663;
  t48520 = t45595*t47073;
  t48521 = -1.*t46865*t46901*t47663;
  t48522 = t48520 + t48521;
  t48525 = var2[2]*t48522;
  t48527 = t46865*t47073;
  t48529 = t45595*t46901*t47663;
  t48530 = t48527 + t48529;
  t48531 = var2[1]*t48530;
  t48536 = -1.*t47678*t47313;
  t48541 = -1.*t47237*t47041;
  t48543 = -1.*t47052*t47313;
  t48547 = t48541 + t48364 + t48543;
  t48554 = t46933*t48547;
  t48559 = t47625*t47313;
  t48581 = t48147 + t48155 + t48157;
  t48582 = t47052*t48581;
  t48829 = -1.*t47582*t47897;
  t48709 = -1.*t46888*t47678*t47329;
  t48787 = t46901*t47678*t47432;
  t48841 = t46815*t47897;
  t48795 = t46888*t47625*t47329;
  t48796 = -1.*t46901*t47625*t47432;
  t48802 = t46888*t47625*t48412;
  t48803 = t46888*t47678*t48512;
  t48910 = t47237*t46576;
  t48914 = t46898*t48151;
  t48925 = -1.*t47237*t46898;
  t48937 = Power(t46680,2);
  t48940 = Power(t46168,2);
  t48931 = -1.*t48151*t47041;
  t48977 = t48131*t46815;
  t48979 = t47967*t47427;
  t47955 = t46576*t46901;
  t47960 = t46888*t47959;
  t47961 = t47955 + t47960;
  t49001 = -1.*t48131*t47582;
  t49004 = -1.*t46815*t47427;
  t48887 = t46576*t47255;
  t48907 = t48147 + t48887;
  t48921 = -1.*t46898*t47255;
  t48922 = t48921 + t48541;
  t48947 = -1.*t46680*t46898*t47264;
  t48948 = -1.*t46168*t46898*t47295;
  t48949 = t48541 + t48947 + t48948;
  t49049 = t46898*t48244;
  t48958 = t46680*t46576*t47264;
  t48959 = t46168*t46576*t47295;
  t48960 = t48147 + t48958 + t48959;
  t49053 = -1.*t47938*t47237;
  t49093 = -1.*t48244*t47041;
  t49138 = t48224*t46815;
  t49145 = -1.*t48224*t47582;
  t49148 = -1.*t48238*t47427;
  t48285 = t46888*t47938;
  t48286 = -1.*t46901*t48256;
  t48287 = t48285 + t48286;
  t48336 = t45595*t46901*t47073;
  t48337 = t46865*t47420;
  t48338 = t48336 + t48337;
  t48214 = t46865*t47582;
  t48215 = -1.*t45595*t47417;
  t48217 = t48214 + t48215;
  t49036 = -1.*t48179*t47329;
  t49037 = -1.*t46958*t47432;
  t49217 = t47420*t47427;
  t49005 = -1.*t46933*t47313;
  t49218 = t46888*t47073*t47329;
  t49219 = -1.*t46901*t47073*t47432;
  t49220 = t49217 + t49218 + t49219;
  t49252 = t47073*t47427;
  t49254 = t47420*t47313;
  t49259 = -1.*t46933*t47427;
  t49263 = -1.*t46815*t47313;
  t49229 = t49004 + t49036 + t49037;
  t49238 = var2[0]*t46888*t47678;
  t49239 = t45595*t46901*t47678;
  t49240 = t46865*t47052;
  t49241 = t49239 + t49240;
  t49242 = var2[1]*t49241;
  t49243 = -1.*t46865*t46901*t47678;
  t49244 = t45595*t47052;
  t49245 = t49243 + t49244;
  t49246 = var2[2]*t49245;
  t49247 = t47073*t47313;
  t49248 = t49217 + t49247;
  t49249 = t46933*t49248;
  t49253 = t47663*t47313;
  t49260 = -1.*t47625*t47313;
  t49267 = t48925 + t49004 + t49005;
  t49268 = t47073*t49267;
  t49272 = t46888*t47625*t49220;
  t49301 = t47420*t47897;
  t49275 = t46888*t47663*t47329;
  t49276 = -1.*t46901*t47663*t47432;
  t49305 = -1.*t46815*t47897;
  t49284 = -1.*t46888*t47625*t47329;
  t49286 = t46901*t47625*t47432;
  t49289 = t46888*t47663*t49229;
  t48308 = t45595*t46815;
  t48309 = t46865*t46958;
  t48310 = t48308 + t48309;
  t49331 = t47420*t48131;
  t49338 = -1.*t48131*t46815;
  t49340 = -1.*t47967*t47427;
  t49323 = t46168*t47264;
  t49324 = -1.*t46680*t47295;
  t49325 = t49323 + t49324;
  t49383 = t47420*t48224;
  t49390 = -1.*t48224*t46815;
  t48209 = t45595*t47582;
  t48211 = t46865*t47417;
  t48212 = t48209 + t48211;
  t48200 = 0.28121*t46356;
  t48201 = t47230*t46356;
  p_output1[0]=(-1.*t45595*t46815 - 1.*t46865*t46958)*var2[1] + t46978*var2[2];
  p_output1[1]=t46958*var2[0] - 1.*t45595*t47005*var2[1] + t46865*t47005*var2[2] + (t47059*(t46901*t47073*t47316 + t46901*t47073*t47329) + t47417*t47434 + t46888*t47073*(t47316*t47417 + t47329*t47417 + t47059*t47432 + t47432*t47442) - 1.*t46901*t47073*t47607)*var2[3];
  p_output1[2]=t47626 + t47634 + t47643 + (t47693 + t47059*(t47658 + t47665 - 1.*t47073*t47654*t47694 - 1.*t47073*t47654*t47697 + t47699 + t47700) + t46888*t47073*(t46888*t47059*t47654 - 1.*t46901*t47417*t47654 + t47672 + t47682 + t47706 + t47707) + t47796)*var2[3] + (t47649 + t47582*(-1.*t47073*t47654 + t47658 + t47664 + t47665) + t47420*(t47052*t47654 + t47672 + t47680 + t47682) + t47690)*var2[4];
  p_output1[3]=t47626 + t47634 + t47643 + (t47693 + t47796 + t47059*(t47658 + t47699 + t47700 - 1.*t47073*t47694*t47883 - 1.*t47073*t47697*t47883 + t47898) + t46888*t47073*(t47672 + t47706 + t47707 + t46888*t47059*t47883 - 1.*t46901*t47417*t47883 + t47906))*var2[3] + (t47649 + t47690 + t47582*(t47658 + t47664 - 1.*t47073*t47883 + t47898) + t47420*(t47672 + t47680 + t47052*t47883 + t47906))*var2[4] + t47041*(-1.*t46680*t47264 - 1.*t46168*t47295 + t46680*t47853 - 1.*t46168*t47872)*var2[5];
  p_output1[4]=t47947 + t47961*var2[0] + (t46865*t47967 - 1.*t45595*t47972)*var2[1] + (t45595*t47967 + t46865*t47972)*var2[2] + (t47059*(t48137 - 1.*t46888*t47073*t48165 + t46901*t47073*t48171) + t47434*t48179 + t46888*t47073*(t48153 + t48155 + t47059*t48165 + t47417*t48171 + t48185 + t48188))*var2[3] + (t46815*t47647 + t47582*(t48137 - 1.*t47073*t48142) + t47420*(t47052*t48142 + t48147 + t47041*t48151 + t48153 + t48155 + t48157))*var2[4] + t46898*t47952*var2[5];
  p_output1[5]=t47947 + t47059*var2[0] + t48217*var2[1] + t48212*var2[2] + (t47059*(t48226 - 1.*t46888*t47073*t48267 + t46901*t47073*t48272) + t47434*t48279 + t46888*t47073*(t48246 + t48252 + t47059*t48267 + t47417*t48272 + t47329*t48279 + t47432*t48287))*var2[3] + (t47582*(t48226 - 1.*t47073*t48230) + t47647*t48238 + t47420*(t47237*t47938 + t47052*t48230 + t47041*t48244 + t48246 + t48252 + t47313*t48256))*var2[4] + t47938*t47952*var2[5] + (-0.27*Power(t46356,2) + t48200 + t48201)*var2[16];
  p_output1[6]=t48179;
  p_output1[7]=t46978;
  p_output1[8]=t48310;
  p_output1[9]=t47059*t47434 + t46888*t47073*t47607;
  p_output1[10]=t47582*t47647 + t47420*t47689;
  p_output1[11]=t47041*t47952;
  p_output1[12]=-0.15121*t46576 - 0.15121*t47041;
  p_output1[13]=0.28121*t46569 - 0.27*t46356*t46569 + t46569*t47230;
  p_output1[14]=(t46865*t46901*t47073 - 1.*t45595*t47420)*var2[1] + t48338*var2[2];
  p_output1[15]=-1.*t46901*t47073*var2[0] + t45595*t46888*t47073*var2[1] - 1.*t46865*t46888*t47073*var2[2] + ((-1.*t47316*t47417 - 1.*t47329*t47417 - 1.*t47059*t47432 - 1.*t47432*t47442)*t48179 + t47059*(t46958*t47316 + t46958*t47329 + t47005*t47432 + t47432*t48179) + t46958*t48412 + t47417*t48512)*var2[3];
  p_output1[16]=t48518 + t48525 + t48531 + (t48179*(-1.*t46888*t47059*t47654 + t46901*t47417*t47654 + t48534 + t48537 + t48709 + t48787) + t47059*(-1.*t46901*t46958*t47654 + t46888*t47654*t48179 + t48556 + t48561 + t48795 + t48796) + t48802 + t48803)*var2[3] + (t46815*(-1.*t47052*t47654 + t48534 + t48536 + t48537) + t48554 + t47582*(t46933*t47654 + t48556 + t48559 + t48561) + t48582)*var2[4];
  p_output1[17]=t48518 + t48525 + t48531 + (t48802 + t48803 + t48179*(-1.*t46888*t47059*t47883 + t46901*t47417*t47883 + t48534 + t48709 + t48787 + t48829) + t47059*(-1.*t46901*t46958*t47883 + t46888*t47883*t48179 + t48556 + t48795 + t48796 + t48841))*var2[3] + (t48554 + t48582 + t46815*(-1.*t47052*t47883 + t48534 + t48536 + t48829) + t47582*(t46933*t47883 + t48556 + t48559 + t48841))*var2[4] + (t47041*(-1.*t46168*t46576*t47264 + t46576*t46680*t47295 + t46168*t46576*t47853 + t46576*t46680*t47872) + t46898*(t46168*t46898*t47264 - 1.*t46680*t46898*t47295 - 1.*t46168*t46898*t47853 - 1.*t46680*t46898*t47872))*var2[5];
  p_output1[18]=(t47961*t48412 + t48179*t48512 + t47059*(t47329*t47961 + t47432*t47972 + t46958*t48171 + t48165*t48179 + t48977 + t48979) + t48179*(-1.*t47059*t48165 - 1.*t47417*t48171 + t49001 + t49004 + t49036 + t49037))*var2[3] + (t47967*t48547 + t46815*t48581 + t47582*(t47313*t47959 + t46933*t48142 + t48910 + t48914 + t48977 + t48979) + t46815*(-1.*t47052*t48142 + t48925 + t48931 + t49001 + t49004 + t49005))*var2[4] + (t47041*(t46680*t47264*t47938 + t46168*t47295*t47938 + t48910 + t48914 + t46576*t48116*t48937 + t46576*t48116*t48940) + t46898*(-1.*t46576*t46680*t47264 - 1.*t46168*t46576*t47295 + t48925 + t48931 - 1.*t46898*t48116*t48937 - 1.*t46898*t48116*t48940) + t46576*t48949 + t46898*t48960)*var2[5] + (t46898*t48907 + t47041*(t47255*t47938 + t46576*t48116 + t48910 + t48914) + t46576*t48922 + t46898*(-1.*t46576*t47255 - 1.*t46898*t48116 + t48925 + t48931))*var2[15];
  p_output1[19]=(t47059*t48412 + t48279*t48512 + t47059*(t47585 + t47593 + t47594 + t48179*t48267 + t46958*t48272 + t49138) + t48179*(-1.*t47059*t48267 - 1.*t47417*t48272 - 1.*t47329*t48279 - 1.*t47432*t48287 + t49145 + t49148))*var2[3] + (t47582*t48547 + t48238*t48581 + t47582*(t47585 + t47686 + t47687 + t46933*t48230 + t49049 + t49138) + t46815*(-1.*t47052*t48230 - 1.*t47313*t48256 + t49053 + t49093 + t49145 + t49148))*var2[4] + (t47041*t48949 + t47938*t48960 + t47041*(t46680*t46898*t47264 + t46168*t46898*t47295 + t47686 + t46576*t48221*t48937 + t46576*t48221*t48940 + t49049) + t46898*(-1.*t46680*t47041*t47264 - 1.*t46168*t47041*t47295 - 1.*t46898*t48221*t48937 - 1.*t46898*t48221*t48940 + t49053 + t49093))*var2[5] + (t47938*t48907 + t47041*t48922 + t47041*(t46898*t47255 + t47686 + t46576*t48221 + t49049) + t46898*(-1.*t47041*t47255 - 1.*t46898*t48221 + t49053 + t49093))*var2[15];
  p_output1[20]=t46888*t47073;
  p_output1[21]=t48338;
  p_output1[22]=-1.*t46865*t46901*t47073 + t45595*t47420;
  p_output1[23]=t48179*t48412 + t47059*t48512;
  p_output1[24]=t46815*t48547 + t47582*t48581;
  p_output1[25]=t46898*t48949 + t47041*t48960;
  p_output1[26]=-0.15121 + t47041*t48907 + t46898*t48922;
  p_output1[27]=(-1.*t46865*t47417 - 1.*t45595*t47582)*var2[1] + t48217*var2[2];
  p_output1[28]=t47417*var2[0] - 1.*t45595*t47442*var2[1] + t46865*t47442*var2[2] + ((-1.*t46901*t47073*t47316 - 1.*t46901*t47073*t47329)*t48179 + t46888*t47073*(-1.*t46958*t47316 - 1.*t46958*t47329 - 1.*t47005*t47432 - 1.*t47432*t48179) + t46958*t49220 - 1.*t46901*t47073*t49229)*var2[3];
  p_output1[29]=t49238 + t49242 + t49246 + (t49272 + t48179*(t47073*t47654*t47694 + t47073*t47654*t47697 + t49252 + t49254 + t49275 + t49276) + t46888*t47073*(t46901*t46958*t47654 - 1.*t46888*t47654*t48179 + t49259 + t49263 + t49284 + t49286) + t49289)*var2[3] + (t49249 + t46815*(t47073*t47654 + t49252 + t49253 + t49254) + t47420*(-1.*t46933*t47654 + t49259 + t49260 + t49263) + t49268)*var2[4];
  p_output1[30]=t49238 + t49242 + t49246 + (t49272 + t49289 + t48179*(t47073*t47694*t47883 + t47073*t47697*t47883 + t49252 + t49275 + t49276 + t49301) + t46888*t47073*(t46901*t46958*t47883 - 1.*t46888*t47883*t48179 + t49259 + t49284 + t49286 + t49305))*var2[3] + (t49249 + t49268 + t46815*(t47073*t47883 + t49252 + t49253 + t49301) + t47420*(-1.*t46933*t47883 + t49259 + t49260 + t49305))*var2[4] + t46898*(t46680*t47264 + t46168*t47295 - 1.*t46680*t47853 + t46168*t47872)*var2[5];
  p_output1[31]=t48179*var2[0] + t46978*var2[1] + t48310*var2[2] + (t47961*t49220 + t48179*(t46888*t47073*t48165 - 1.*t46901*t47073*t48171 + t49331) + t46888*t47073*(-1.*t47329*t47961 - 1.*t47432*t47972 - 1.*t46958*t48171 - 1.*t48165*t48179 + t49338 + t49340))*var2[3] + (t47967*t49248 + t46815*(t47073*t48142 + t49331) + t47420*(-1.*t46576*t47237 - 1.*t47313*t47959 - 1.*t46933*t48142 - 1.*t46898*t48151 + t49338 + t49340))*var2[4] + t46576*t49325*var2[5];
  p_output1[32]=t48279*var2[0] + (t46865*t48238 - 1.*t45595*t48287)*var2[1] + (t45595*t48238 + t46865*t48287)*var2[2] + (t47059*t49220 + t48179*(t46888*t47073*t48267 - 1.*t46901*t47073*t48272 + t49383) + t46888*t47073*(-1.*t48179*t48267 - 1.*t46958*t48272 + t48364 + t48365 + t48380 + t49390))*var2[3] + (t47582*t49248 + t46815*(t47073*t48230 + t49383) + t47420*(-1.*t46933*t48230 - 1.*t46898*t48244 + t48364 + t48541 + t48543 + t49390))*var2[4] + t47041*t49325*var2[5] + (-0.28121*t46569 + 0.27*t46356*t46569 - 1.*t46569*t47230)*var2[16];
  p_output1[33]=t47059;
  p_output1[34]=t48217;
  p_output1[35]=t48212;
  p_output1[36]=t48179*t49220 + t46888*t47073*t49229;
  p_output1[37]=t46815*t49248 + t47420*t49267;
  p_output1[38]=t46898*t49325;
  p_output1[39]=0.27*Power(t46569,2) + t48200 + t48201;
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

#include "J_dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
