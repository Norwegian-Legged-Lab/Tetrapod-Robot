/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:45 GMT+02:00
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
  double t23581;
  double t23183;
  double t23570;
  double t23583;
  double t23584;
  double t23625;
  double t23626;
  double t23627;
  double t23727;
  double t23728;
  double t23802;
  double t23013;
  double t22160;
  double t22998;
  double t22999;
  double t23001;
  double t23901;
  double t23919;
  double t23017;
  double t23976;
  double t23977;
  double t23999;
  double t24002;
  double t24009;
  double t24012;
  double t23909;
  double t23964;
  double t23975;
  double t24016;
  double t24018;
  double t24021;
  double t24022;
  double t24023;
  double t24027;
  double t24045;
  double t24050;
  double t24057;
  double t14932;
  double t18073;
  double t24073;
  double t24061;
  double t24088;
  double t24090;
  double t24091;
  double t24103;
  double t24104;
  double t24106;
  double t24108;
  double t24113;
  double t24126;
  double t24130;
  double t24134;
  double t24135;
  double t24094;
  double t24095;
  double t24096;
  double t24098;
  double t24099;
  double t24100;
  double t24151;
  double t24153;
  double t24154;
  double t24166;
  double t24168;
  double t24172;
  double t24174;
  double t24176;
  double t24177;
  double t24181;
  double t24185;
  double t24192;
  double t24193;
  double t24194;
  double t24212;
  double t24213;
  double t24214;
  double t24221;
  double t24223;
  double t24226;
  double t24218;
  double t24219;
  double t24220;
  double t24234;
  double t24238;
  double t24259;
  double t24283;
  double t24315;
  double t24377;
  double t24260;
  double t24261;
  double t24266;
  double t24270;
  double t24389;
  double t24393;
  double t24394;
  double t24395;
  double t24399;
  double t24403;
  double t24405;
  double t24406;
  double t24411;
  double t24412;
  double t24413;
  double t24414;
  double t24418;
  double t24424;
  double t24431;
  double t24432;
  double t24460;
  double t24461;
  double t24467;
  double t24480;
  double t24528;
  double t24535;
  double t24549;
  double t24551;
  double t24553;
  double t24537;
  double t24555;
  double t24557;
  double t24559;
  double t24563;
  double t24565;
  double t24567;
  double t24569;
  double t24571;
  double t24575;
  double t24635;
  double t24662;
  double t24667;
  double t24668;
  double t24669;
  double t24676;
  double t24687;
  double t24691;
  double t24775;
  double t24776;
  double t24778;
  double t24794;
  double t24795;
  double t24796;
  double t24811;
  double t24812;
  double t24813;
  double t24800;
  double t24801;
  double t24802;
  double t24803;
  double t24804;
  double t24810;
  double t24819;
  double t24779;
  double t24780;
  double t24782;
  double t24783;
  double t24784;
  double t24785;
  double t24787;
  double t24788;
  double t24791;
  double t24792;
  double t24938;
  double t24939;
  double t24945;
  double t24926;
  double t24805;
  double t24954;
  double t24955;
  double t24957;
  double t24959;
  double t24960;
  double t24962;
  double t24814;
  double t24836;
  double t24853;
  double t24854;
  double t24889;
  double t24963;
  double t24901;
  double t24903;
  double t24972;
  double t24908;
  double t24910;
  double t24914;
  double t25012;
  double t25015;
  double t25016;
  double t25032;
  double t25034;
  double t25035;
  double t25017;
  double t25019;
  double t25023;
  double t25025;
  double t25026;
  double t25027;
  double t25036;
  double t25037;
  double t25038;
  double t25024;
  double t25044;
  double t25045;
  double t25050;
  double t25051;
  double t25053;
  double t25047;
  double t25049;
  double t25059;
  double t25061;
  double t25062;
  double t25064;
  double t25065;
  double t25066;
  double t25071;
  double t25072;
  double t25073;
  double t25098;
  double t25099;
  double t25114;
  double t25125;
  double t25126;
  double t25130;
  double t25133;
  double t25134;
  double t25138;
  double t25150;
  double t25152;
  double t25153;
  double t25155;
  double t25156;
  double t25157;
  double t25154;
  double t25167;
  double t25168;
  double t25169;
  double t25170;
  double t25172;
  double t25174;
  double t25181;
  double t25191;
  double t25192;
  double t25195;
  double t25198;
  double t25199;
  double t25166;
  double t25225;
  double t25226;
  double t25227;
  double t25230;
  double t25231;
  double t25233;
  double t25234;
  double t25235;
  double t25239;
  double t25241;
  double t25242;
  double t25243;
  double t25245;
  double t25246;
  double t25247;
  double t25249;
  double t25250;
  double t23048;
  double t24070;
  double t25270;
  double t25271;
  double t25272;
  double t25276;
  double t25278;
  double t25279;
  double t25258;
  double t25261;
  double t25262;
  double t25264;
  double t25265;
  double t25267;
  double t25176;
  double t25305;
  double t25306;
  double t25307;
  double t25308;
  double t25310;
  double t25311;
  double t25312;
  double t25286;
  double t25288;
  double t25290;
  double t25210;
  double t25213;
  double t25330;
  double t25331;
  double t25332;
  double t25334;
  double t25335;
  double t25337;
  double t25338;
  double t25316;
  double t25317;
  double t25320;
  double t25324;
  double t25327;
  double t25328;
  double t25361;
  double t25364;
  double t25373;
  double t25376;
  double t25347;
  double t25349;
  double t25350;
  double t25352;
  double t25354;
  double t25356;
  double t25357;
  double t25358;
  double t25359;
  double t25362;
  double t25370;
  double t25375;
  double t25380;
  double t25434;
  double t25389;
  double t25390;
  double t25440;
  double t25398;
  double t25400;
  double t25406;
  double t25407;
  double t24719;
  double t24726;
  double t24727;
  double t25493;
  double t25500;
  double t25512;
  double t25514;
  double t25504;
  double t25533;
  double t25537;
  double t25539;
  double t25079;
  double t25080;
  double t25081;
  double t25565;
  double t25567;
  double t25571;
  double t25574;
  double t25097;
  double t25119;
  double t25120;
  double t25605;
  double t25607;
  double t25612;
  double t25615;
  double t24993;
  double t24994;
  double t25649;
  double t25652;
  double t25654;
  double t25657;
  double t25658;
  double t25659;
  double t25663;
  double t25664;
  double t25666;
  double t25001;
  double t25670;
  double t25671;
  double t25672;
  double t25674;
  double t25675;
  double t25676;
  double t25002;
  double t25004;
  double t25005;
  double t25006;
  double t25007;
  double t25008;
  double t25009;
  double t25010;
  double t25616;
  double t25691;
  double t25692;
  double t25693;
  double t25694;
  double t25695;
  double t25696;
  double t25697;
  double t25685;
  double t25686;
  double t25687;
  double t25631;
  double t25632;
  double t25720;
  double t25722;
  double t25723;
  double t25724;
  double t25726;
  double t25727;
  double t25728;
  double t25700;
  double t25701;
  double t25703;
  double t25706;
  double t25708;
  double t25709;
  double t25760;
  double t25766;
  double t25744;
  double t25745;
  double t25746;
  double t25748;
  double t24137;
  double t24188;
  double t24211;
  double t25792;
  double t25799;
  double t25801;
  double t25854;
  double t25855;
  double t25860;
  double t25862;
  double t25841;
  double t25842;
  double t25843;
  double t25844;
  double t25845;
  double t25847;
  double t25848;
  double t25850;
  double t25851;
  double t25852;
  double t25856;
  double t25861;
  double t25866;
  double t25869;
  double t25897;
  double t25872;
  double t25873;
  double t25904;
  double t25878;
  double t25879;
  double t25884;
  t23581 = Cos(var1[14]);
  t23183 = Sin(var1[14]);
  t23570 = 0.28121*t23183;
  t23583 = -1.*t23581;
  t23584 = 1. + t23583;
  t23625 = 0.50321*t23584;
  t23626 = 0.19821*t23581;
  t23627 = t23625 + t23626;
  t23727 = -1.*t23627*t23183;
  t23728 = -0.305*t23581*t23183;
  t23802 = t23570 + t23727 + t23728;
  t23013 = Sin(var1[12]);
  t22160 = Cos(var1[12]);
  t22998 = -1.*t22160;
  t22999 = 1. + t22998;
  t23001 = 0.15121*t22999;
  t23901 = Cos(var1[13]);
  t23919 = Sin(var1[13]);
  t23017 = -0.15121*t23013;
  t23976 = -1.*t23901;
  t23977 = 1. + t23976;
  t23999 = 0.28121*t23977;
  t24002 = t23901*t23627;
  t24009 = -0.305*t23919*t23183;
  t24012 = t23999 + t24002 + t24009;
  t23909 = t23901*t23581;
  t23964 = t23919*t23183;
  t23975 = t23909 + t23964;
  t24016 = t22160*t24012;
  t24018 = t23001 + t24016;
  t24021 = t23013*t24018;
  t24022 = -0.15121*t22999;
  t24023 = -0.15121*t22160;
  t24027 = t23013*t24012;
  t24045 = t24022 + t24023 + t23017 + t24027;
  t24050 = -1.*t22160*t24045;
  t24057 = t24021 + t24050;
  t14932 = Cos(var1[4]);
  t18073 = Cos(var1[5]);
  t24073 = Sin(var1[5]);
  t24061 = Sin(var1[4]);
  t24088 = t22160*t14932*t18073;
  t24090 = -1.*t14932*t23013*t24073;
  t24091 = t24088 + t24090;
  t24103 = -1.*t23581*t23919;
  t24104 = t23901*t23183;
  t24106 = t24103 + t24104;
  t24108 = t24106*t24061;
  t24113 = t22160*t18073*t23975;
  t24126 = -1.*t23013*t23975*t24073;
  t24130 = t24113 + t24126;
  t24134 = t14932*t24130;
  t24135 = t24108 + t24134;
  t24094 = -1.*t23919*t24061;
  t24095 = t23901*t24091;
  t24096 = t24094 + t24095;
  t24098 = t23901*t24061;
  t24099 = t23919*t24091;
  t24100 = t24098 + t24099;
  t24151 = Sin(var1[3]);
  t24153 = t18073*t23013*t23975;
  t24154 = t22160*t23975*t24073;
  t24166 = t24153 + t24154;
  t24168 = t24151*t24166;
  t24172 = Cos(var1[3]);
  t24174 = t14932*t24106;
  t24176 = -1.*t24061*t24130;
  t24177 = t24174 + t24176;
  t24181 = t24172*t24177;
  t24185 = t24168 + t24181;
  t24192 = t24172*t24166;
  t24193 = -1.*t24151*t24177;
  t24194 = t24192 + t24193;
  t24212 = t23581*t23919;
  t24213 = -1.*t23901*t23183;
  t24214 = t24212 + t24213;
  t24221 = t22160*t18073;
  t24223 = -1.*t23013*t24073;
  t24226 = t24221 + t24223;
  t24218 = t18073*t23013*t24214;
  t24219 = t22160*t24214*t24073;
  t24220 = t24218 + t24219;
  t24234 = t18073*t24045;
  t24238 = t24018*t24073;
  t24259 = t24234 + t24238;
  t24283 = t18073*t24018;
  t24315 = -1.*t24045*t24073;
  t24377 = t24283 + t24315;
  t24260 = -1.*t24226*t24259;
  t24261 = -1.*t18073*t23013;
  t24266 = -1.*t22160*t24073;
  t24270 = t24261 + t24266;
  t24389 = -1.*t24270*t24377;
  t24393 = t24260 + t24389;
  t24394 = t24220*t24393;
  t24395 = 0.28121*t23919;
  t24399 = -1.*t23627*t23919;
  t24403 = -0.305*t23901*t23183;
  t24405 = t24395 + t24399 + t24403;
  t24406 = t24405*t23975;
  t24411 = t24220*t24259;
  t24412 = t22160*t18073*t24214;
  t24413 = -1.*t23013*t24214*t24073;
  t24414 = t24412 + t24413;
  t24418 = t24414*t24377;
  t24424 = t24406 + t24411 + t24418;
  t24431 = t24226*t24424;
  t24432 = t24394 + t24431;
  t24460 = t23975*t24061;
  t24461 = t14932*t24414;
  t24467 = t24460 + t24461;
  t24480 = t24405*t24061;
  t24528 = t14932*t24377;
  t24535 = t24480 + t24528;
  t24549 = t14932*t24405;
  t24551 = -1.*t24061*t24377;
  t24553 = t24549 + t24551;
  t24537 = -1.*t14932*t24270*t24535;
  t24555 = t24061*t24270*t24553;
  t24557 = t24260 + t24537 + t24555;
  t24559 = t24467*t24557;
  t24563 = t24467*t24535;
  t24565 = t14932*t23975;
  t24567 = -1.*t24061*t24414;
  t24569 = t24565 + t24567;
  t24571 = t24569*t24553;
  t24575 = t24411 + t24563 + t24571;
  t24635 = t14932*t24270*t24575;
  t24662 = t24559 + t24635;
  t24667 = -1.*t24106*t24061;
  t24668 = -1.*t14932*t24130;
  t24669 = t24667 + t24668;
  t24676 = -1.*t24405*t24061;
  t24687 = -1.*t14932*t24377;
  t24691 = t24676 + t24687;
  t24775 = -1.*t18073*t23013*t23975;
  t24776 = -1.*t22160*t23975*t24073;
  t24778 = t24775 + t24776;
  t24794 = -1.*t18073*t24045;
  t24795 = -1.*t24018*t24073;
  t24796 = t24794 + t24795;
  t24811 = -1.*t18073*t23013*t24214;
  t24812 = -1.*t22160*t24214*t24073;
  t24813 = t24811 + t24812;
  t24800 = -1.*t24270*t24259;
  t24801 = -1.*t24226*t24377;
  t24802 = -1.*t22160*t18073;
  t24803 = t23013*t24073;
  t24804 = t24802 + t24803;
  t24810 = t24414*t24259;
  t24819 = t24220*t24377;
  t24779 = var2[0]*t14932*t24778;
  t24780 = t24151*t24061*t24778;
  t24782 = t24172*t24130;
  t24783 = t24780 + t24782;
  t24784 = var2[1]*t24783;
  t24785 = -1.*t24172*t24061*t24778;
  t24787 = t24151*t24130;
  t24788 = t24785 + t24787;
  t24791 = var2[2]*t24788;
  t24792 = t24414*t24393;
  t24938 = 0.15121*t23013;
  t24939 = -1.*t23013*t24012;
  t24945 = t24938 + t24939;
  t24926 = t24023 + t24016;
  t24805 = -1.*t24804*t24377;
  t24954 = t18073*t24945;
  t24955 = -1.*t24926*t24073;
  t24957 = t24954 + t24955;
  t24959 = t18073*t24926;
  t24960 = t24945*t24073;
  t24962 = t24959 + t24960;
  t24814 = t24813*t24377;
  t24836 = t24270*t24424;
  t24853 = t14932*t24813*t24557;
  t24854 = Power(t14932,2);
  t24889 = Power(t24061,2);
  t24963 = -1.*t24226*t24962;
  t24901 = -1.*t14932*t24804*t24535;
  t24903 = t24061*t24804*t24553;
  t24972 = t24220*t24962;
  t24908 = t14932*t24813*t24535;
  t24910 = -1.*t24061*t24813*t24553;
  t24914 = t14932*t24804*t24575;
  t25012 = -0.305*t23581*t23919;
  t25015 = 0.305*t23901*t23183;
  t25016 = t25012 + t25015;
  t25032 = -1.*t23901*t23581;
  t25034 = -1.*t23919*t23183;
  t25035 = t25032 + t25034;
  t25017 = t18073*t23013*t25016;
  t25019 = t22160*t25016*t24073;
  t25023 = t25017 + t25019;
  t25025 = t22160*t18073*t25016;
  t25026 = -1.*t23013*t25016*t24073;
  t25027 = t25025 + t25026;
  t25036 = t18073*t23013*t25035;
  t25037 = t22160*t25035*t24073;
  t25038 = t25036 + t25037;
  t25024 = -1.*t24226*t25023;
  t25044 = -0.305*t23901*t23581;
  t25045 = t25044 + t24009;
  t25050 = t22160*t18073*t25035;
  t25051 = -1.*t23013*t25035*t24073;
  t25053 = t25050 + t25051;
  t25047 = t24220*t25023;
  t25049 = t25038*t24259;
  t25059 = t25045*t24061;
  t25061 = t14932*t25027;
  t25062 = t25059 + t25061;
  t25064 = t14932*t25045;
  t25065 = -1.*t24061*t25027;
  t25066 = t25064 + t25065;
  t25071 = t24214*t24061;
  t25072 = t14932*t25053;
  t25073 = t25071 + t25072;
  t25098 = t22160*t18073*t24106;
  t25099 = -1.*t23013*t24106*t24073;
  t25114 = t25098 + t25099;
  t25125 = t18073*t23013*t24106;
  t25126 = t22160*t24106*t24073;
  t25130 = t25125 + t25126;
  t25133 = t14932*t25035;
  t25134 = -1.*t24061*t25114;
  t25138 = t25133 + t25134;
  t25150 = t18073*t23013*t24405;
  t25152 = t22160*t24405*t24073;
  t25153 = t25150 + t25152;
  t25155 = t22160*t18073*t24405;
  t25156 = -1.*t23013*t24405*t24073;
  t25157 = t25155 + t25156;
  t25154 = -1.*t24226*t25153;
  t25167 = 0.28121*t23901;
  t25168 = -1.*t23901*t23627;
  t25169 = 0.305*t23919*t23183;
  t25170 = t25167 + t25168 + t25169;
  t25172 = t24220*t25153;
  t25174 = t24166*t24259;
  t25181 = t25170*t24061;
  t25191 = t14932*t25157;
  t25192 = t25181 + t25191;
  t25195 = t14932*t25170;
  t25198 = -1.*t24061*t25157;
  t25199 = t25195 + t25198;
  t25166 = t24405*t24106;
  t25225 = -1.*t24214*t24012;
  t25226 = -1.*t24405*t23975;
  t25227 = t25225 + t25226;
  t25230 = t24106*t25227;
  t25231 = t24012*t23975;
  t25233 = t25166 + t25231;
  t25234 = t23975*t25233;
  t25235 = -0.15121 + t25230 + t25234;
  t25239 = -1.*t22160*t24214*t24018;
  t25241 = -1.*t23013*t24214*t24045;
  t25242 = t25226 + t25239 + t25241;
  t25243 = t24106*t25242;
  t25245 = t22160*t23975*t24018;
  t25246 = t23013*t23975*t24045;
  t25247 = t25166 + t25245 + t25246;
  t25249 = t23975*t25247;
  t25250 = t25243 + t25249;
  t23048 = t23001 + t23017;
  t24070 = t24022 + t23017;
  t25270 = t24151*t24061*t24270;
  t25271 = t24172*t24226;
  t25272 = t25270 + t25271;
  t25276 = -1.*t24172*t24061*t24270;
  t25278 = t24151*t24226;
  t25279 = t25276 + t25278;
  t25258 = t18073*t24151*t24061;
  t25261 = t24172*t24073;
  t25262 = t25258 + t25261;
  t25264 = t24172*t18073;
  t25265 = -1.*t24151*t24061*t24073;
  t25267 = t25264 + t25265;
  t25176 = t24130*t24377;
  t25305 = -1.*t24220*t24259;
  t25306 = -1.*t24414*t24377;
  t25307 = t25226 + t25305 + t25306;
  t25308 = t24166*t25307;
  t25310 = t25166 + t25174 + t25176;
  t25311 = t24220*t25310;
  t25312 = t25308 + t25311;
  t25286 = t22160*t25262;
  t25288 = t23013*t25267;
  t25290 = t25286 + t25288;
  t25210 = t24135*t24535;
  t25213 = t24177*t24553;
  t25330 = -1.*t24467*t24535;
  t25331 = -1.*t24569*t24553;
  t25332 = t25305 + t25330 + t25331;
  t25334 = t24135*t25332;
  t25335 = t25174 + t25210 + t25213;
  t25337 = t24467*t25335;
  t25338 = t25334 + t25337;
  t25316 = t14932*t23919*t24151;
  t25317 = t23901*t25290;
  t25320 = t25316 + t25317;
  t25324 = -1.*t23901*t14932*t24151;
  t25327 = t23919*t25290;
  t25328 = t25324 + t25327;
  t25361 = -1.*t24414*t24259;
  t25364 = -1.*t24220*t24377;
  t25373 = t24130*t24259;
  t25376 = t24166*t24377;
  t25347 = var2[0]*t14932*t24804;
  t25349 = t24151*t24270;
  t25350 = -1.*t24172*t24061*t24804;
  t25352 = t25349 + t25350;
  t25354 = var2[2]*t25352;
  t25356 = t24172*t24270;
  t25357 = t24151*t24061*t24804;
  t25358 = t25356 + t25357;
  t25359 = var2[1]*t25358;
  t25362 = -1.*t24813*t24377;
  t25370 = t24130*t25307;
  t25375 = t24778*t24377;
  t25380 = t24414*t25310;
  t25434 = -1.*t24220*t24962;
  t25389 = -1.*t14932*t24813*t24535;
  t25390 = t24061*t24813*t24553;
  t25440 = t24166*t24962;
  t25398 = t14932*t24778*t24535;
  t25400 = -1.*t24061*t24778*t24553;
  t25406 = t14932*t24778*t25332;
  t25407 = t14932*t24813*t25335;
  t24719 = -1.*t23975*t24061;
  t24726 = -1.*t14932*t24414;
  t24727 = t24719 + t24726;
  t25493 = t24106*t25045;
  t25500 = -1.*t24214*t24405;
  t25512 = Power(t22160,2);
  t25514 = Power(t23013,2);
  t25504 = -1.*t25045*t23975;
  t25533 = t25023*t24166;
  t25537 = -1.*t24220*t25023;
  t25539 = -1.*t25038*t24259;
  t25079 = t14932*t24214;
  t25080 = -1.*t24061*t25053;
  t25081 = t25079 + t25080;
  t25565 = t24405*t25035;
  t25567 = t24106*t25170;
  t25571 = -1.*t24405*t24106;
  t25574 = -1.*t25170*t23975;
  t25097 = t25035*t24061;
  t25119 = t14932*t25114;
  t25120 = t25097 + t25119;
  t25605 = t25153*t24166;
  t25607 = t25130*t24259;
  t25612 = -1.*t24220*t25153;
  t25615 = -1.*t24166*t24259;
  t24993 = 0.28121*t23581;
  t24994 = -1.*t23627*t23581;
  t25649 = Power(t23183,2);
  t25652 = 0.305*t25649;
  t25654 = t24993 + t24994 + t25652;
  t25657 = -0.15121*t24214;
  t25658 = -0.15121*t24106;
  t25659 = t25657 + t25658;
  t25663 = -1.*t23013*t24018;
  t25664 = t22160*t24045;
  t25666 = t25663 + t25664;
  t25001 = var2[0]*t24467;
  t25670 = -1.*t24172*t18073*t24061;
  t25671 = t24151*t24073;
  t25672 = t25670 + t25671;
  t25674 = t18073*t24151;
  t25675 = t24172*t24061*t24073;
  t25676 = t25674 + t25675;
  t25002 = t24151*t24220;
  t25004 = t24172*t24569;
  t25005 = t25002 + t25004;
  t25006 = var2[2]*t25005;
  t25007 = t24172*t24220;
  t25008 = -1.*t24151*t24569;
  t25009 = t25007 + t25008;
  t25010 = var2[1]*t25009;
  t25616 = -1.*t24130*t24377;
  t25691 = t24226*t24259;
  t25692 = t24270*t24377;
  t25693 = t25691 + t25692;
  t25694 = t24166*t25693;
  t25695 = t25571 + t25615 + t25616;
  t25696 = t24226*t25695;
  t25697 = t25694 + t25696;
  t25685 = t22160*t25672;
  t25686 = t23013*t25676;
  t25687 = t25685 + t25686;
  t25631 = -1.*t24135*t24535;
  t25632 = -1.*t24177*t24553;
  t25720 = t14932*t24270*t24535;
  t25722 = -1.*t24061*t24270*t24553;
  t25723 = t25691 + t25720 + t25722;
  t25724 = t24135*t25723;
  t25726 = t25615 + t25631 + t25632;
  t25727 = t14932*t24270*t25726;
  t25728 = t25724 + t25727;
  t25700 = -1.*t24172*t14932*t23919;
  t25701 = t23901*t25687;
  t25703 = t25700 + t25701;
  t25706 = t23901*t24172*t14932;
  t25708 = t23919*t25687;
  t25709 = t25706 + t25708;
  t25760 = t24226*t25023;
  t25766 = -1.*t25023*t24166;
  t25744 = -0.15121*t25035;
  t25745 = -0.15121*t23975;
  t25746 = t25744 + t25745;
  t25748 = var2[12]*t25746;
  t24137 = var2[0]*t24135;
  t24188 = var2[2]*t24185;
  t24211 = var2[1]*t24194;
  t25792 = t24226*t25153;
  t25799 = -1.*t25153*t24166;
  t25801 = -1.*t25130*t24259;
  t25854 = t24270*t24259;
  t25855 = t24226*t24377;
  t25860 = -1.*t24130*t24259;
  t25862 = -1.*t24166*t24377;
  t25841 = var2[0]*t14932*t24813;
  t25842 = t24151*t24061*t24813;
  t25843 = t24172*t24414;
  t25844 = t25842 + t25843;
  t25845 = var2[1]*t25844;
  t25847 = -1.*t24172*t24061*t24813;
  t25848 = t24151*t24414;
  t25850 = t25847 + t25848;
  t25851 = var2[2]*t25850;
  t25852 = t24130*t25693;
  t25856 = t24804*t24377;
  t25861 = -1.*t24778*t24377;
  t25866 = t24270*t25695;
  t25869 = t14932*t24778*t25723;
  t25897 = t24226*t24962;
  t25872 = t14932*t24804*t24535;
  t25873 = -1.*t24061*t24804*t24553;
  t25904 = -1.*t24166*t24962;
  t25878 = -1.*t14932*t24778*t24535;
  t25879 = t24061*t24778*t24553;
  t25884 = t14932*t24804*t25726;
  p_output1[0]=t14932*t18073*t23048 + 0.28121*t23919*t24061 - 1.*t14932*t24070*t24073 - 0.15121*(-1.*t14932*t18073*t23013 - 1.*t14932*t22160*t24073) + 0.28121*t23977*t24091 + 0.50321*t23584*t24096 - 0.50321*t23183*t24100 + 0.19821*(t23581*t24096 + t23183*t24100) + t24137 + t24188 + t24211 + var1[0] + t24662*var2[3] + ((-1.*t24151*t24166 - 1.*t24172*t24177)*var2[1] + t24194*var2[2])*var2[3] + t24432*var2[4] + (t24177*var2[0] - 1.*t24151*t24669*var2[1] + t24172*t24669*var2[2] + (t24557*t24569 - 1.*t24061*t24270*t24575 + t24467*(t24061*t24270*t24535 + t24061*t24270*t24691) + t14932*t24270*(t24467*t24553 + t24535*t24569 + t24569*t24691 + t24553*t24727))*var2[3])*var2[4] + t23975*t24057*var2[5] + (t24779 + t24784 + t24791 + (t24853 + t24467*(t24800 + t24801 - 1.*t24270*t24796*t24854 - 1.*t24270*t24796*t24889 + t24901 + t24903) + t14932*t24270*(t14932*t24467*t24796 - 1.*t24061*t24569*t24796 + t24810 + t24819 + t24908 + t24910) + t24914)*var2[3] + (t24792 + t24220*(-1.*t24270*t24796 + t24800 + t24801 + t24805) + t24226*(t24414*t24796 + t24810 + t24814 + t24819) + t24836)*var2[4])*var2[5] + (t24779 + t24784 + t24791 + (t24853 + t24914 + t24467*(t24800 + t24901 + t24903 - 1.*t24270*t24854*t24957 - 1.*t24270*t24889*t24957 + t24963) + t14932*t24270*(t24810 + t24908 + t24910 + t14932*t24467*t24957 - 1.*t24061*t24569*t24957 + t24972))*var2[3] + (t24792 + t24836 + t24220*(t24800 + t24805 - 1.*t24270*t24957 + t24963) + t24226*(t24810 + t24814 + t24414*t24957 + t24972))*var2[4] + t23975*(t22160*t24018 + t23013*t24045 - 1.*t22160*t24926 + t23013*t24945)*var2[5])*var2[12] + t23802*var2[13] + (t25120*var2[0] + (t24172*t25130 - 1.*t24151*t25138)*var2[1] + (t24151*t25130 + t24172*t25138)*var2[2] + (t24135*t24557 + t24467*(t25154 - 1.*t14932*t24270*t25192 + t24061*t24270*t25199) + t14932*t24270*(t25172 + t25174 + t24467*t25192 + t24569*t25199 + t25210 + t25213))*var2[3] + (t24166*t24393 + t24220*(t25154 - 1.*t24270*t25157) + t24226*(t24414*t25157 + t25166 + t23975*t25170 + t25172 + t25174 + t25176))*var2[4] + t24057*t24106*var2[5])*var2[13] + (t25001 + t25006 + t25010 + (t24467*(t25024 - 1.*t14932*t24270*t25062 + t24061*t24270*t25066) + t24557*t25073 + t14932*t24270*(t25047 + t25049 + t24467*t25062 + t24569*t25066 + t24535*t25073 + t24553*t25081))*var2[3] + (t24220*(t25024 - 1.*t24270*t25027) + t24393*t25038 + t24226*(t24214*t24405 + t24414*t25027 + t23975*t25045 + t25047 + t25049 + t24377*t25053))*var2[4] + t24057*t24214*var2[5] + (-0.305*Power(t23581,2) + t24993 + t24994)*var2[13])*var2[14] + t24135*var3[0] + t24194*var3[1] + t24185*var3[2] + t24662*var3[3] + t24432*var3[4] + t23975*t24057*var3[5] + t23802*var3[13] - 1.*var4[0];
  p_output1[1]=-0.28121*t14932*t23919*t24151 + t23048*t25262 + t24070*t25267 - 0.15121*(-1.*t23013*t25262 + t22160*t25267) + 0.28121*t23977*t25290 + 0.50321*t23584*t25320 - 0.50321*t23183*t25328 + 0.19821*(t23581*t25320 + t23183*t25328) + var1[1] + t14932*t24270*var2[0] + t25272*var2[1] + t25279*var2[2] + t25338*var2[3] + ((-1.*t24151*t24226 + t24061*t24172*t24270)*var2[1] + t25272*var2[2])*var2[3] + t25312*var2[4] + (-1.*t24061*t24270*var2[0] + t14932*t24151*t24270*var2[1] - 1.*t14932*t24172*t24270*var2[2] + (t24467*(t24177*t24535 + t24135*t24553 + t24553*t24669 + t24177*t24691) + t24135*(-1.*t24467*t24553 - 1.*t24535*t24569 - 1.*t24569*t24691 - 1.*t24553*t24727) + t24177*t25332 + t24569*t25335)*var2[3])*var2[4] + t25250*var2[5] + (t25347 + t25354 + t25359 + (t24135*(-1.*t14932*t24467*t24796 + t24061*t24569*t24796 + t25361 + t25364 + t25389 + t25390) + t24467*(t14932*t24135*t24796 - 1.*t24061*t24177*t24796 + t25373 + t25376 + t25398 + t25400) + t25406 + t25407)*var2[3] + (t24166*(-1.*t24414*t24796 + t25361 + t25362 + t25364) + t25370 + t24220*(t24130*t24796 + t25373 + t25375 + t25376) + t25380)*var2[4])*var2[5] + t25235*var2[12] + (t25347 + t25354 + t25359 + (t25406 + t25407 + t24135*(-1.*t14932*t24467*t24957 + t24061*t24569*t24957 + t25361 + t25389 + t25390 + t25434) + t24467*(t14932*t24135*t24957 - 1.*t24061*t24177*t24957 + t25373 + t25398 + t25400 + t25440))*var2[3] + (t25370 + t25380 + t24166*(-1.*t24414*t24957 + t25361 + t25362 + t25434) + t24220*(t24130*t24957 + t25373 + t25375 + t25440))*var2[4] + (t23975*(-1.*t23013*t23975*t24018 + t22160*t23975*t24045 + t23013*t23975*t24926 + t22160*t23975*t24945) + t24106*(t23013*t24018*t24214 - 1.*t22160*t24045*t24214 - 1.*t23013*t24214*t24926 - 1.*t22160*t24214*t24945))*var2[5])*var2[12] + ((t25120*t25332 + t24135*t25335 + t24467*(t24535*t25120 + t24553*t25138 + t24135*t25192 + t24177*t25199 + t25605 + t25607) + t24135*(-1.*t24467*t25192 - 1.*t24569*t25199 + t25612 + t25615 + t25631 + t25632))*var2[3] + (t25130*t25307 + t24166*t25310 + t24220*(t24377*t25114 + t24130*t25157 + t25565 + t25567 + t25605 + t25607) + t24166*(-1.*t24414*t25157 + t25571 + t25574 + t25612 + t25615 + t25616))*var2[4] + (t25035*t25242 + t24106*t25247 + t23975*(t22160*t24018*t24106 + t23013*t24045*t24106 + t23975*t24405*t25512 + t23975*t24405*t25514 + t25565 + t25567) + t24106*(-1.*t22160*t23975*t24018 - 1.*t23013*t23975*t24045 - 1.*t24214*t24405*t25512 - 1.*t24214*t24405*t25514 + t25571 + t25574))*var2[5] + (t25035*t25227 + t24106*t25233 + t23975*(t24012*t24106 + t24406 + t25565 + t25567) + t24106*(-1.*t23975*t24012 + t25500 + t25571 + t25574))*var2[12])*var2[13] + ((t24467*t25332 + t25073*t25335 + t24467*(t24411 + t24563 + t24571 + t24135*t25062 + t24177*t25066 + t25533) + t24135*(-1.*t24467*t25062 - 1.*t24569*t25066 - 1.*t24535*t25073 - 1.*t24553*t25081 + t25537 + t25539))*var2[3] + (t24220*t25307 + t25038*t25310 + t24220*(t24406 + t24411 + t24418 + t24130*t25027 + t25493 + t25533) + t24166*(-1.*t24414*t25027 - 1.*t24377*t25053 + t25500 + t25504 + t25537 + t25539))*var2[4] + (t23975*t25242 + t24214*t25247 + t23975*(t22160*t24018*t24214 + t23013*t24045*t24214 + t24406 + t25493 + t23975*t25016*t25512 + t23975*t25016*t25514) + t24106*(-1.*t22160*t24018*t25035 - 1.*t23013*t24045*t25035 + t25500 + t25504 - 1.*t24214*t25016*t25512 - 1.*t24214*t25016*t25514))*var2[5] + (t23975*t25227 + t24214*t25233 + t23975*(t24012*t24214 + t24406 + t23975*t25016 + t25493) + t24106*(-1.*t24214*t25016 - 1.*t24012*t25035 + t25500 + t25504))*var2[12])*var2[14] + t14932*t24270*var3[0] + t25272*var3[1] + t25279*var3[2] + t25338*var3[3] + t25312*var3[4] + t25250*var3[5] + t25235*var3[12] - 1.*var4[1];
  p_output1[2]=0.28121*t14932*t23919*t24172 + t25001 + t25006 + t25010 + t23048*t25672 + t24070*t25676 - 0.15121*(-1.*t23013*t25672 + t22160*t25676) + 0.28121*t23977*t25687 + 0.50321*t23584*t25703 - 0.50321*t23183*t25709 + 0.19821*(t23581*t25703 + t23183*t25709) + var1[2] + t25728*var2[3] + ((-1.*t24151*t24220 - 1.*t24172*t24569)*var2[1] + t25009*var2[2])*var2[3] + t25697*var2[4] + (t24569*var2[0] - 1.*t24151*t24727*var2[1] + t24172*t24727*var2[2] + (t14932*t24270*(-1.*t24177*t24535 - 1.*t24135*t24553 - 1.*t24553*t24669 - 1.*t24177*t24691) + t24135*(-1.*t24061*t24270*t24535 - 1.*t24061*t24270*t24691) + t24177*t25723 - 1.*t24061*t24270*t25726)*var2[3])*var2[4] + t24106*t25666*var2[5] + (t25841 + t25845 + t25851 + (t25869 + t24135*(t24270*t24796*t24854 + t24270*t24796*t24889 + t25854 + t25855 + t25872 + t25873) + t14932*t24270*(-1.*t14932*t24135*t24796 + t24061*t24177*t24796 + t25860 + t25862 + t25878 + t25879) + t25884)*var2[3] + (t25852 + t24166*(t24270*t24796 + t25854 + t25855 + t25856) + t24226*(-1.*t24130*t24796 + t25860 + t25861 + t25862) + t25866)*var2[4])*var2[5] + t25659*var2[12] + (t25841 + t25845 + t25851 + (t25869 + t25884 + t24135*(t24270*t24854*t24957 + t24270*t24889*t24957 + t25854 + t25872 + t25873 + t25897) + t14932*t24270*(-1.*t14932*t24135*t24957 + t24061*t24177*t24957 + t25860 + t25878 + t25879 + t25904))*var2[3] + (t25852 + t25866 + t24166*(t24270*t24957 + t25854 + t25856 + t25897) + t24226*(-1.*t24130*t24957 + t25860 + t25861 + t25904))*var2[4] + t24106*(-1.*t22160*t24018 - 1.*t23013*t24045 + t22160*t24926 - 1.*t23013*t24945)*var2[5])*var2[12] + t25654*var2[13] + (t24137 + t24188 + t24211 + t25748 + (t25120*t25723 + t24135*(t14932*t24270*t25192 - 1.*t24061*t24270*t25199 + t25792) + t14932*t24270*(-1.*t24535*t25120 - 1.*t24553*t25138 - 1.*t24135*t25192 - 1.*t24177*t25199 + t25799 + t25801))*var2[3] + (t25130*t25693 + t24166*(t24270*t25157 + t25792) + t24226*(-1.*t24405*t25035 - 1.*t24377*t25114 - 1.*t24130*t25157 - 1.*t24106*t25170 + t25799 + t25801))*var2[4] + t25035*t25666*var2[5])*var2[13] - 0.305*var2[14] + (t25748 + t25073*var2[0] + (t24172*t25038 - 1.*t24151*t25081)*var2[1] + (t24151*t25038 + t24172*t25081)*var2[2] + (t24467*t25723 + t24135*(t14932*t24270*t25062 - 1.*t24061*t24270*t25066 + t25760) + t14932*t24270*(-1.*t24135*t25062 - 1.*t24177*t25066 + t25305 + t25330 + t25331 + t25766))*var2[3] + (t24220*t25693 + t24166*(t24270*t25027 + t25760) + t24226*(-1.*t24130*t25027 - 1.*t24106*t25045 + t25226 + t25305 + t25306 + t25766))*var2[4] + t23975*t25666*var2[5] + (-0.28121*t23183 + 0.305*t23183*t23581 + t23183*t23627)*var2[13])*var2[14] + t24467*var3[0] + t25009*var3[1] + t25005*var3[2] + t25728*var3[3] + t25697*var3[4] + t24106*t25666*var3[5] + t25659*var3[12] + t25654*var3[13] - 0.305*var3[14] - 1.*var4[2];
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
