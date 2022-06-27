/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:02 GMT+02:00
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
  double t9;
  double t16;
  double t18;
  double t24;
  double t26;
  double t48;
  double t40;
  double t43;
  double t45;
  double t51;
  double t46;
  double t52;
  double t53;
  double t61;
  double t62;
  double t65;
  double t95;
  double t97;
  double t100;
  double t105;
  double t107;
  double t135;
  double t136;
  double t137;
  double t140;
  double t141;
  double t23;
  double t35;
  double t55;
  double t56;
  double t58;
  double t66;
  double t70;
  double t74;
  double t77;
  double t80;
  double t81;
  double t82;
  double t183;
  double t185;
  double t192;
  double t102;
  double t108;
  double t111;
  double t113;
  double t114;
  double t116;
  double t117;
  double t119;
  double t121;
  double t124;
  double t125;
  double t126;
  double t220;
  double t226;
  double t143;
  double t144;
  double t147;
  double t148;
  double t151;
  double t152;
  double t153;
  double t155;
  double t159;
  double t167;
  double t170;
  double t171;
  double t251;
  double t258;
  double t187;
  double t78;
  double t193;
  double t198;
  double t199;
  double t205;
  double t209;
  double t210;
  double t280;
  double t290;
  double t302;
  double t303;
  double t306;
  double t221;
  double t122;
  double t232;
  double t233;
  double t236;
  double t237;
  double t239;
  double t240;
  double t346;
  double t353;
  double t354;
  double t357;
  double t358;
  double t253;
  double t160;
  double t263;
  double t264;
  double t269;
  double t270;
  double t273;
  double t274;
  double t371;
  double t381;
  double t384;
  double t385;
  double t386;
  double t437;
  double t448;
  double t449;
  double t453;
  double t454;
  double t456;
  double t457;
  double t458;
  double t460;
  double t463;
  double t479;
  double t480;
  double t482;
  double t483;
  double t488;
  double t489;
  double t492;
  double t671;
  double t678;
  double t486;
  double t674;
  double t675;
  double t677;
  double t680;
  double t681;
  double t682;
  double t683;
  double t687;
  double t693;
  double t695;
  double t702;
  double t703;
  double t753;
  double t756;
  double t757;
  double t759;
  double t763;
  double t775;
  double t777;
  double t779;
  double t786;
  double t787;
  double t789;
  double t792;
  double t793;
  double t811;
  double t814;
  double t815;
  double t824;
  double t825;
  double t929;
  double t930;
  double t931;
  double t1028;
  double t1095;
  double t1106;
  double t1242;
  double t764;
  double t1296;
  double t283;
  double t284;
  double t1314;
  double t1315;
  double t1341;
  double t2848;
  double t2875;
  double t2914;
  double t1378;
  double t810;
  double t1388;
  double t348;
  double t349;
  double t1413;
  double t1414;
  double t1424;
  double t4936;
  double t4985;
  double t5124;
  double t1457;
  double t1013;
  double t1551;
  double t374;
  double t375;
  double t1678;
  double t1804;
  double t1815;
  double t5257;
  double t5283;
  double t5286;
  double t5359;
  double t5364;
  double t5374;
  double t5381;
  double t5389;
  double t5433;
  double t5684;
  double t6290;
  double t5428;
  double t6466;
  double t6521;
  double t688;
  double t690;
  double t6558;
  double t6571;
  double t6573;
  double t6713;
  double t6771;
  double t7400;
  double t8028;
  double t8079;
  double t8101;
  double t8322;
  double t8368;
  double t8381;
  double t8156;
  double t8385;
  double t8401;
  double t8426;
  double t8507;
  double t8607;
  double t8695;
  double t8710;
  double t9398;
  double t9402;
  double t9541;
  double t9195;
  double t9353;
  double t9799;
  double t9815;
  double t9936;
  double t10813;
  double t10819;
  double t10865;
  double t10682;
  double t10701;
  double t11132;
  double t11141;
  double t11143;
  double t8848;
  double t8794;
  double t9628;
  double t10329;
  double t10910;
  double t11299;
  double t12046;
  double t12066;
  double t12080;
  double t12119;
  double t12146;
  double t12227;
  double t12243;
  double t12278;
  double t12393;
  double t12316;
  double t12685;
  double t12799;
  double t12846;
  double t12628;
  double t12649;
  double t12657;
  double t12875;
  double t12878;
  double t12880;
  double t12881;
  double t12891;
  double t12929;
  double t12950;
  double t13135;
  double t12973;
  double t13909;
  double t13917;
  double t13968;
  double t13890;
  double t14130;
  double t14182;
  double t14185;
  double t14208;
  double t14430;
  double t14470;
  double t14569;
  double t14970;
  double t14971;
  double t15044;
  double t15350;
  double t15351;
  double t15359;
  double t15414;
  double t15466;
  double t15469;
  double t15552;
  double t15577;
  double t15608;
  double t15615;
  double t15819;
  double t15660;
  double t15914;
  double t15915;
  double t15916;
  double t15913;
  double t15917;
  double t15918;
  double t15919;
  double t15920;
  double t15926;
  double t15927;
  double t15928;
  double t15939;
  double t15941;
  double t15942;
  double t15953;
  double t15959;
  double t15960;
  double t15954;
  double t15955;
  double t15956;
  double t15957;
  double t15958;
  double t15982;
  double t16140;
  double t15961;
  double t16146;
  double t16160;
  double t16161;
  double t16162;
  double t16159;
  double t16164;
  double t16165;
  double t16166;
  double t16167;
  double t16171;
  double t16172;
  double t16173;
  double t16186;
  double t16187;
  double t16188;
  double t16241;
  double t16260;
  double t16201;
  double t16202;
  double t16203;
  double t16204;
  double t16205;
  double t16227;
  double t16336;
  double t16352;
  double t16318;
  double t16368;
  double t16383;
  double t16384;
  double t16385;
  double t16382;
  double t16386;
  double t16387;
  double t16388;
  double t16389;
  double t16394;
  double t16395;
  double t16396;
  double t16409;
  double t16410;
  double t16411;
  t9 = Cos(var1[9]);
  t16 = -1.*t9;
  t18 = 1. + t16;
  t24 = Sin(var1[9]);
  t26 = 0.15121*t24;
  t48 = Cos(var1[3]);
  t40 = Cos(var1[5]);
  t43 = Sin(var1[3]);
  t45 = Sin(var1[4]);
  t51 = Sin(var1[5]);
  t46 = t40*t43*t45;
  t52 = t48*t51;
  t53 = t46 + t52;
  t61 = t48*t40;
  t62 = -1.*t43*t45*t51;
  t65 = t61 + t62;
  t95 = Cos(var1[12]);
  t97 = -1.*t95;
  t100 = 1. + t97;
  t105 = Sin(var1[12]);
  t107 = -0.15121*t105;
  t135 = Cos(var1[15]);
  t136 = -1.*t135;
  t137 = 1. + t136;
  t140 = -0.15121*t137;
  t141 = Sin(var1[15]);
  t23 = -0.15121*t18;
  t35 = t23 + t26;
  t55 = t35*t53;
  t56 = 0.15121*t18;
  t58 = t56 + t26;
  t66 = t58*t65;
  t70 = -1.*t24*t53;
  t74 = t9*t65;
  t77 = t70 + t74;
  t80 = t9*t53;
  t81 = t24*t65;
  t82 = t80 + t81;
  t183 = Cos(var1[4]);
  t185 = Sin(var1[10]);
  t192 = Cos(var1[10]);
  t102 = 0.15121*t100;
  t108 = t102 + t107;
  t111 = t108*t53;
  t113 = -0.15121*t100;
  t114 = t113 + t107;
  t116 = t114*t65;
  t117 = -1.*t105*t53;
  t119 = t95*t65;
  t121 = t117 + t119;
  t124 = t95*t53;
  t125 = t105*t65;
  t126 = t124 + t125;
  t220 = Sin(var1[13]);
  t226 = Cos(var1[13]);
  t143 = -0.15121*t141;
  t144 = t140 + t143;
  t147 = t144*t53;
  t148 = 0.15121*t141;
  t151 = t140 + t148;
  t152 = t151*t65;
  t153 = -1.*t141*t53;
  t155 = t135*t65;
  t159 = t153 + t155;
  t167 = t135*t53;
  t170 = t141*t65;
  t171 = t167 + t170;
  t251 = Sin(var1[16]);
  t258 = Cos(var1[16]);
  t187 = -0.28121*t183*t185*t43;
  t78 = 0.15121*t77;
  t193 = -1.*t192;
  t198 = 1. + t193;
  t199 = -0.28121*t198*t82;
  t205 = -1.*t183*t185*t43;
  t209 = t192*t82;
  t210 = t205 + t209;
  t280 = Cos(var1[11]);
  t290 = Sin(var1[11]);
  t302 = -1.*t192*t183*t43;
  t303 = -1.*t185*t82;
  t306 = t302 + t303;
  t221 = -0.28121*t183*t220*t43;
  t122 = -0.15121*t121;
  t232 = -1.*t226;
  t233 = 1. + t232;
  t236 = 0.28121*t233*t126;
  t237 = t183*t220*t43;
  t239 = t226*t126;
  t240 = t237 + t239;
  t346 = Cos(var1[14]);
  t353 = Sin(var1[14]);
  t354 = -1.*t226*t183*t43;
  t357 = t220*t126;
  t358 = t354 + t357;
  t253 = -0.28121*t183*t251*t43;
  t160 = -0.15121*t159;
  t263 = -1.*t258;
  t264 = 1. + t263;
  t269 = -0.28121*t264*t171;
  t270 = -1.*t183*t251*t43;
  t273 = t258*t171;
  t274 = t270 + t273;
  t371 = Cos(var1[17]);
  t381 = Sin(var1[17]);
  t384 = -1.*t258*t183*t43;
  t385 = -1.*t251*t171;
  t386 = t384 + t385;
  t437 = Cos(var1[6]);
  t448 = -1.*t437;
  t449 = 1. + t448;
  t453 = 0.15121*t449;
  t454 = Sin(var1[6]);
  t456 = -0.15121*t454;
  t457 = t453 + t456;
  t458 = t65*t457;
  t460 = 0.15121*t454;
  t463 = t453 + t460;
  t479 = t53*t463;
  t480 = t437*t65;
  t482 = -1.*t53*t454;
  t483 = t480 + t482;
  t488 = t437*t53;
  t489 = t65*t454;
  t492 = t488 + t489;
  t671 = Cos(var1[7]);
  t678 = Sin(var1[7]);
  t486 = 0.15121*t483;
  t674 = -1.*t671;
  t675 = 1. + t674;
  t677 = 0.28121*t675*t492;
  t680 = -0.28121*t183*t43*t678;
  t681 = t671*t492;
  t682 = t183*t43*t678;
  t683 = t681 + t682;
  t687 = Cos(var1[8]);
  t693 = -1.*t183*t671*t43;
  t695 = t492*t678;
  t702 = t693 + t695;
  t703 = Sin(var1[8]);
  t753 = -1.*t48*t183*t40*t35;
  t756 = t48*t183*t58*t51;
  t757 = t48*t183*t40*t24;
  t759 = t9*t48*t183*t51;
  t763 = t757 + t759;
  t775 = -1.*t9*t48*t183*t40;
  t777 = t48*t183*t24*t51;
  t779 = t775 + t777;
  t786 = -1.*t48*t183*t40*t108;
  t787 = t48*t183*t114*t51;
  t789 = t48*t183*t40*t105;
  t792 = t95*t48*t183*t51;
  t793 = t789 + t792;
  t811 = -1.*t95*t48*t183*t40;
  t814 = t48*t183*t105*t51;
  t815 = t811 + t814;
  t824 = -1.*t48*t183*t40*t144;
  t825 = t48*t183*t151*t51;
  t929 = t48*t183*t40*t141;
  t930 = t135*t48*t183*t51;
  t931 = t929 + t930;
  t1028 = -1.*t135*t48*t183*t40;
  t1095 = t48*t183*t141*t51;
  t1106 = t1028 + t1095;
  t1242 = -0.28121*t48*t185*t45;
  t764 = 0.15121*t763;
  t1296 = -0.28121*t198*t779;
  t283 = -1.*t280;
  t284 = 1. + t283;
  t1314 = -1.*t48*t185*t45;
  t1315 = t192*t779;
  t1341 = t1314 + t1315;
  t2848 = -1.*t192*t48*t45;
  t2875 = -1.*t185*t779;
  t2914 = t2848 + t2875;
  t1378 = -0.28121*t48*t220*t45;
  t810 = -0.15121*t793;
  t1388 = 0.28121*t233*t815;
  t348 = -1.*t346;
  t349 = 1. + t348;
  t1413 = t48*t220*t45;
  t1414 = t226*t815;
  t1424 = t1413 + t1414;
  t4936 = -1.*t226*t48*t45;
  t4985 = t220*t815;
  t5124 = t4936 + t4985;
  t1457 = -0.28121*t48*t251*t45;
  t1013 = -0.15121*t931;
  t1551 = -0.28121*t264*t1106;
  t374 = -1.*t371;
  t375 = 1. + t374;
  t1678 = -1.*t48*t251*t45;
  t1804 = t258*t1106;
  t1815 = t1678 + t1804;
  t5257 = -1.*t258*t48*t45;
  t5283 = -1.*t251*t1106;
  t5286 = t5257 + t5283;
  t5359 = t48*t183*t51*t457;
  t5364 = -1.*t48*t183*t40*t463;
  t5374 = t48*t183*t437*t51;
  t5381 = t48*t183*t40*t454;
  t5389 = t5374 + t5381;
  t5433 = -1.*t48*t183*t40*t437;
  t5684 = t48*t183*t51*t454;
  t6290 = t5433 + t5684;
  t5428 = 0.15121*t5389;
  t6466 = 0.28121*t675*t6290;
  t6521 = -0.28121*t48*t45*t678;
  t688 = -1.*t687;
  t690 = 1. + t688;
  t6558 = t671*t6290;
  t6571 = t48*t45*t678;
  t6573 = t6558 + t6571;
  t6713 = -1.*t48*t671*t45;
  t6771 = t6290*t678;
  t7400 = t6713 + t6771;
  t8028 = t48*t40*t45;
  t8079 = -1.*t43*t51;
  t8101 = t8028 + t8079;
  t8322 = t40*t43;
  t8368 = t48*t45*t51;
  t8381 = t8322 + t8368;
  t8156 = t58*t8101;
  t8385 = t35*t8381;
  t8401 = t24*t8101;
  t8426 = t9*t8381;
  t8507 = t8401 + t8426;
  t8607 = t9*t8101;
  t8695 = -1.*t24*t8381;
  t8710 = t8607 + t8695;
  t9398 = t105*t8101;
  t9402 = t95*t8381;
  t9541 = t9398 + t9402;
  t9195 = t114*t8101;
  t9353 = t108*t8381;
  t9799 = t95*t8101;
  t9815 = -1.*t105*t8381;
  t9936 = t9799 + t9815;
  t10813 = t141*t8101;
  t10819 = t135*t8381;
  t10865 = t10813 + t10819;
  t10682 = t151*t8101;
  t10701 = t144*t8381;
  t11132 = t135*t8101;
  t11141 = -1.*t141*t8381;
  t11143 = t11132 + t11141;
  t8848 = -0.28121*t198*t8507;
  t8794 = 0.15121*t8710;
  t9628 = 0.28121*t233*t9541;
  t10329 = -0.15121*t9936;
  t10910 = -0.28121*t264*t10865;
  t11299 = -0.15121*t11143;
  t12046 = t8101*t457;
  t12066 = t8381*t463;
  t12080 = t437*t8381;
  t12119 = t8101*t454;
  t12146 = t12080 + t12119;
  t12227 = t437*t8101;
  t12243 = -1.*t8381*t454;
  t12278 = t12227 + t12243;
  t12393 = 0.28121*t675*t12146;
  t12316 = 0.15121*t12278;
  t12685 = -1.*t48*t40*t45;
  t12799 = t43*t51;
  t12846 = t12685 + t12799;
  t12628 = -0.15121*t437;
  t12649 = t12628 + t460;
  t12657 = t8381*t12649;
  t12875 = 0.15121*t437;
  t12878 = t12875 + t460;
  t12880 = t12846*t12878;
  t12881 = -1.*t12846*t454;
  t12891 = t12080 + t12881;
  t12929 = -1.*t437*t12846;
  t12950 = t12929 + t12243;
  t13135 = 0.28121*t675*t12891;
  t12973 = 0.15121*t12950;
  t13909 = t437*t12846;
  t13917 = t8381*t454;
  t13968 = t13909 + t13917;
  t13890 = 0.28121*t48*t183*t671;
  t14130 = 0.28121*t13968*t678;
  t14182 = -1.*t48*t183*t671;
  t14185 = -1.*t13968*t678;
  t14208 = t14182 + t14185;
  t14430 = t671*t13968;
  t14470 = -1.*t48*t183*t678;
  t14569 = t14430 + t14470;
  t14970 = t48*t183*t671;
  t14971 = t13968*t678;
  t15044 = t14970 + t14971;
  t15350 = 0.15121*t9;
  t15351 = -0.15121*t24;
  t15359 = t15350 + t15351;
  t15414 = t15359*t12846;
  t15466 = t15350 + t26;
  t15469 = t15466*t8381;
  t15552 = -1.*t24*t12846;
  t15577 = t15552 + t8426;
  t15608 = -1.*t9*t12846;
  t15615 = t15608 + t8695;
  t15819 = -0.28121*t198*t15577;
  t15660 = 0.15121*t15615;
  t15914 = t9*t12846;
  t15915 = t24*t8381;
  t15916 = t15914 + t15915;
  t15913 = 0.28121*t192*t48*t183;
  t15917 = -0.28121*t185*t15916;
  t15918 = t192*t48*t183;
  t15919 = -1.*t185*t15916;
  t15920 = t15918 + t15919;
  t15926 = -1.*t48*t183*t185;
  t15927 = -1.*t192*t15916;
  t15928 = t15926 + t15927;
  t15939 = t48*t183*t185;
  t15941 = t192*t15916;
  t15942 = t15939 + t15941;
  t15953 = -0.15121*t95;
  t15959 = -1.*t105*t12846;
  t15960 = t15959 + t9402;
  t15954 = 0.15121*t105;
  t15955 = t15953 + t15954;
  t15956 = t15955*t12846;
  t15957 = t15953 + t107;
  t15958 = t15957*t8381;
  t15982 = -1.*t95*t12846;
  t16140 = t15982 + t9815;
  t15961 = 0.28121*t233*t15960;
  t16146 = -0.15121*t16140;
  t16160 = t95*t12846;
  t16161 = t105*t8381;
  t16162 = t16160 + t16161;
  t16159 = 0.28121*t226*t48*t183;
  t16164 = 0.28121*t220*t16162;
  t16165 = -1.*t226*t48*t183;
  t16166 = -1.*t220*t16162;
  t16167 = t16165 + t16166;
  t16171 = -1.*t48*t183*t220;
  t16172 = t226*t16162;
  t16173 = t16171 + t16172;
  t16186 = t226*t48*t183;
  t16187 = t220*t16162;
  t16188 = t16186 + t16187;
  t16241 = -1.*t141*t12846;
  t16260 = t16241 + t10819;
  t16201 = -0.15121*t135;
  t16202 = t16201 + t143;
  t16203 = t16202*t12846;
  t16204 = 0.15121*t135;
  t16205 = t16204 + t143;
  t16227 = t16205*t8381;
  t16336 = -1.*t135*t12846;
  t16352 = t16336 + t11141;
  t16318 = -0.28121*t264*t16260;
  t16368 = -0.15121*t16352;
  t16383 = t135*t12846;
  t16384 = t141*t8381;
  t16385 = t16383 + t16384;
  t16382 = 0.28121*t258*t48*t183;
  t16386 = -0.28121*t251*t16385;
  t16387 = t258*t48*t183;
  t16388 = -1.*t251*t16385;
  t16389 = t16387 + t16388;
  t16394 = -1.*t48*t183*t251;
  t16395 = -1.*t258*t16385;
  t16396 = t16394 + t16395;
  t16409 = t48*t183*t251;
  t16410 = t258*t16385;
  t16411 = t16409 + t16410;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t111 + t116 + t122 + 0.15121*t126) - 11.5758*(t147 + t152 + t160 - 0.15121*t171) - 13.6359*(t111 + t116 - 0.18121*t121 + t221 + t236 + 0.28121*t240) - 13.6359*(t147 + t152 - 0.18121*t159 + t253 + t269 - 0.28121*t274) - 2.7468000000000004*(t111 + t116 + t122 + t221 + t236 + 0.50321*t240*t349 - 0.50321*t353*t358 + 0.50321*(t240*t346 + t353*t358)) - 2.7468000000000004*(t147 + t152 + t160 + t253 + t269 - 0.50321*t274*t375 - 0.50321*t381*t386 - 0.50321*(t274*t371 - 1.*t381*t386)) - 11.5758*(t458 + t479 + t486 + 0.15121*t492) - 13.6359*(t458 + t479 + 0.18121*t483 + t677 + t680 + 0.28121*t683) - 2.7468000000000004*(t458 + t479 + t486 + t677 + t680 + 0.50321*t683*t690 - 0.50321*t702*t703 + 0.50321*(t683*t687 + t702*t703)) - 13.6359*(t187 + t199 - 0.28121*t210 + t55 + t66 + 0.18121*t77) - 2.7468000000000004*(t187 + t199 - 0.50321*t210*t284 - 0.50321*t290*t306 - 0.50321*(t210*t280 - 1.*t290*t306) + t55 + t66 + t78) - 11.5758*(t55 + t66 + t78 - 0.15121*t82);
  p_output1[4]=-11.5758*(t5359 + t5364 + t5428 + 0.15121*t6290) - 13.6359*(t5359 + t5364 + 0.18121*t5389 + t6466 + t6521 + 0.28121*t6573) - 2.7468000000000004*(t5359 + t5364 + t5428 + t6466 + t6521 + 0.50321*t6573*t690 - 0.50321*t703*t7400 + 0.50321*(t6573*t687 + t703*t7400)) - 13.6359*(t1242 + t1296 - 0.28121*t1341 + t753 + t756 + 0.18121*t763) - 2.7468000000000004*(t1242 + t1296 - 0.50321*t1341*t284 - 0.50321*t290*t2914 - 0.50321*(t1341*t280 - 1.*t290*t2914) + t753 + t756 + t764) - 11.5758*(t753 + t756 + t764 - 0.15121*t779) - 13.6359*(t1378 + t1388 + 0.28121*t1424 + t786 + t787 - 0.18121*t793) - 2.7468000000000004*(t1378 + t1388 + 0.50321*t1424*t349 - 0.50321*t353*t5124 + 0.50321*(t1424*t346 + t353*t5124) + t786 + t787 + t810) - 11.5758*(t786 + t787 + t810 + 0.15121*t815) - 11.5758*(t1013 - 0.15121*t1106 + t824 + t825) - 2.7468000000000004*(t1013 + t1457 + t1551 - 0.50321*t1815*t375 - 0.50321*t381*t5286 - 0.50321*(t1815*t371 - 1.*t381*t5286) + t824 + t825) - 13.6359*(t1457 + t1551 - 0.28121*t1815 + t824 + t825 - 0.18121*t931);
  p_output1[5]=-11.5758*(t10682 + t10701 - 0.15121*t10865 + t11299) - 11.5758*(t12046 + t12066 + 0.15121*t12146 + t12316) - 13.6359*(t10682 + t10701 + t10910 - 0.18121*t11143 - 0.28121*t10865*t258) - 2.7468000000000004*(t10682 + t10701 + t10910 + t11299 - 0.50321*t10865*t258*t375 + 0.50321*t10865*t251*t381 - 0.50321*(t10865*t258*t371 + t10865*t251*t381)) - 13.6359*(t12046 + t12066 + 0.18121*t12278 + t12393 + 0.28121*t12146*t671) - 2.7468000000000004*(t12046 + t12066 + t12316 + t12393 + 0.50321*t12146*t671*t690 - 0.50321*t12146*t678*t703 + 0.50321*(t12146*t671*t687 + t12146*t678*t703)) - 11.5758*(t8156 + t8385 - 0.15121*t8507 + t8794) - 13.6359*(t8156 + t8385 - 0.28121*t192*t8507 + 0.18121*t8710 + t8848) - 2.7468000000000004*(t8156 + t8385 - 0.50321*t192*t284*t8507 + 0.50321*t185*t290*t8507 - 0.50321*(t192*t280*t8507 + t185*t290*t8507) + t8794 + t8848) - 11.5758*(t10329 + t9195 + t9353 + 0.15121*t9541) - 2.7468000000000004*(t10329 + t9195 + t9353 + 0.50321*t226*t349*t9541 - 0.50321*t220*t353*t9541 + 0.50321*(t226*t346*t9541 + t220*t353*t9541) + t9628) - 13.6359*(t9195 + t9353 + 0.28121*t226*t9541 + t9628 - 0.18121*t9936);
  p_output1[6]=-11.5758*(t12657 + t12880 + 0.15121*t12891 + t12973) - 13.6359*(t12657 + t12880 + 0.18121*t12950 + t13135 + 0.28121*t12891*t671) - 2.7468000000000004*(t12657 + t12880 + t12973 + t13135 + 0.50321*t12891*t671*t690 - 0.50321*t12891*t678*t703 + 0.50321*(t12891*t671*t687 + t12891*t678*t703));
  p_output1[7]=-13.6359*(t13890 + t14130 + 0.28121*t14208) - 2.7468000000000004*(t13890 + t14130 + 0.50321*t14208*t690 - 0.50321*t14569*t703 + 0.50321*(t14208*t687 + t14569*t703));
  p_output1[8]=-2.7468000000000004*(-0.50321*t15044*t687 + 0.50321*t14569*t703 + 0.50321*(t15044*t687 - 1.*t14569*t703));
  p_output1[9]=-11.5758*(t15414 + t15469 - 0.15121*t15577 + t15660) - 13.6359*(t15414 + t15469 + 0.18121*t15615 + t15819 - 0.28121*t15577*t192) - 2.7468000000000004*(t15414 + t15469 + t15660 + t15819 - 0.50321*t15577*t192*t284 + 0.50321*t15577*t185*t290 - 0.50321*(t15577*t192*t280 + t15577*t185*t290));
  p_output1[10]=-13.6359*(t15913 + t15917 - 0.28121*t15920) - 2.7468000000000004*(t15913 + t15917 - 0.50321*t15920*t284 - 0.50321*t15928*t290 - 0.50321*(t15920*t280 - 1.*t15928*t290));
  p_output1[11]=-2.7468000000000004*(-0.50321*t15920*t280 - 0.50321*t15942*t290 - 0.50321*(-1.*t15920*t280 - 1.*t15942*t290));
  p_output1[12]=-11.5758*(t15956 + t15958 + 0.15121*t15960 + t16146) - 13.6359*(t15956 + t15958 + t15961 - 0.18121*t16140 + 0.28121*t15960*t226) - 2.7468000000000004*(t15956 + t15958 + t15961 + t16146 + 0.50321*t15960*t226*t349 - 0.50321*t15960*t220*t353 + 0.50321*(t15960*t226*t346 + t15960*t220*t353));
  p_output1[13]=-13.6359*(t16159 + t16164 + 0.28121*t16167) - 2.7468000000000004*(t16159 + t16164 + 0.50321*t16167*t349 - 0.50321*t16173*t353 + 0.50321*(t16167*t346 + t16173*t353));
  p_output1[14]=-2.7468000000000004*(-0.50321*t16188*t346 + 0.50321*t16173*t353 + 0.50321*(t16188*t346 - 1.*t16173*t353));
  p_output1[15]=-11.5758*(t16203 + t16227 - 0.15121*t16260 + t16368) - 13.6359*(t16203 + t16227 + t16318 - 0.18121*t16352 - 0.28121*t16260*t258) - 2.7468000000000004*(t16203 + t16227 + t16318 + t16368 - 0.50321*t16260*t258*t375 + 0.50321*t16260*t251*t381 - 0.50321*(t16260*t258*t371 + t16260*t251*t381));
  p_output1[16]=-13.6359*(t16382 + t16386 - 0.28121*t16389) - 2.7468000000000004*(t16382 + t16386 - 0.50321*t16389*t375 - 0.50321*t16396*t381 - 0.50321*(t16389*t371 - 1.*t16396*t381));
  p_output1[17]=-2.7468000000000004*(-0.50321*t16389*t371 - 0.50321*t16411*t381 - 0.50321*(-1.*t16389*t371 - 1.*t16411*t381));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
