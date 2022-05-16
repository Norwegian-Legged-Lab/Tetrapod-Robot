/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:45 GMT+02:00
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
  double t46;
  double t36;
  double t47;
  double t60;
  double t56;
  double t57;
  double t67;
  double t43;
  double t58;
  double t68;
  double t70;
  double t48;
  double t73;
  double t78;
  double t80;
  double t72;
  double t91;
  double t92;
  double t93;
  double t95;
  double t96;
  double t97;
  double t81;
  double t82;
  double t83;
  double t165;
  double t166;
  double t173;
  double t202;
  double t205;
  double t207;
  double t193;
  double t194;
  double t195;
  double t45;
  double t51;
  double t52;
  double t231;
  double t235;
  double t71;
  double t85;
  double t87;
  double t90;
  double t98;
  double t106;
  double t132;
  double t133;
  double t134;
  double t123;
  double t128;
  double t130;
  double t174;
  double t182;
  double t185;
  double t254;
  double t257;
  double t258;
  double t243;
  double t244;
  double t245;
  double t212;
  double t213;
  double t216;
  double t10769;
  double t10814;
  double t10849;
  double t9102;
  double t9177;
  double t9557;
  double t11824;
  double t11990;
  double t12020;
  double t270;
  double t273;
  double t274;
  double t278;
  double t281;
  double t282;
  double t286;
  double t289;
  double t290;
  double t3601;
  double t3702;
  double t3704;
  double t4058;
  double t4120;
  double t4149;
  double t4421;
  double t4530;
  double t4570;
  double t4946;
  double t4950;
  double t5069;
  double t6648;
  double t8084;
  double t8310;
  double t11284;
  double t11430;
  double t11434;
  double t11688;
  double t11691;
  double t11692;
  double t17939;
  double t17967;
  double t17978;
  double t17697;
  double t17698;
  double t17733;
  double t18083;
  double t18085;
  double t18088;
  double t18116;
  double t18124;
  double t18125;
  double t18126;
  double t18174;
  double t18191;
  double t18081;
  double t18090;
  double t18192;
  double t18199;
  double t18069;
  double t18209;
  double t18210;
  double t18215;
  double t18216;
  double t18236;
  double t18238;
  double t18257;
  double t18258;
  double t18261;
  double t18262;
  double t18265;
  double t18287;
  double t18306;
  double t18313;
  double t18364;
  double t18381;
  double t18424;
  double t226;
  double t227;
  double t228;
  double t18555;
  double t19032;
  double t19073;
  double t18506;
  double t18507;
  double t18519;
  double t18212;
  double t18443;
  double t18485;
  double t21562;
  double t21563;
  double t21689;
  double t24654;
  double t24725;
  double t24803;
  double t21694;
  double t21725;
  double t21732;
  double t21760;
  double t22158;
  double t22225;
  double t22227;
  double t22240;
  double t23225;
  double t23227;
  double t23267;
  double t23285;
  double t23678;
  double t23688;
  double t23711;
  double t23753;
  double t24110;
  double t24138;
  double t24239;
  double t24255;
  double t24389;
  double t24493;
  double t24499;
  double t24503;
  double t151;
  double t152;
  double t153;
  double t29909;
  double t29933;
  double t29935;
  double t30101;
  double t30107;
  double t140;
  double t141;
  double t145;
  double t30110;
  double t30114;
  double t30119;
  double t30640;
  double t30643;
  double t30669;
  double t156;
  double t157;
  double t159;
  double t29864;
  double t35432;
  double t35433;
  double t35454;
  double t35456;
  double t35458;
  double t35459;
  double t35585;
  double t35624;
  double t38240;
  double t35434;
  double t35460;
  double t35474;
  double t35476;
  double t38267;
  double t38269;
  double t38438;
  double t38439;
  double t38444;
  double t164;
  double t187;
  double t188;
  double t211;
  double t217;
  double t221;
  double t44231;
  double t44391;
  double t45380;
  double t43751;
  double t45387;
  double t45747;
  double t45944;
  double t46381;
  double t54078;
  double t54162;
  double t54598;
  double t45795;
  double t46410;
  double t46977;
  double t49303;
  double t54679;
  double t54680;
  double t55078;
  double t55096;
  double t55127;
  double t24908;
  double t25337;
  double t25348;
  double t25988;
  double t26104;
  double t27212;
  double t27347;
  double t27933;
  double t29508;
  double t29535;
  double t56157;
  double t56159;
  double t56217;
  double t29976;
  double t30412;
  double t30912;
  double t30937;
  double t56320;
  double t56324;
  double t56330;
  double t31810;
  double t31898;
  double t56357;
  double t56358;
  double t56507;
  double t32315;
  double t32377;
  double t56513;
  double t56519;
  double t56520;
  double t56550;
  double t56558;
  double t56572;
  double t34847;
  double t56619;
  double t34855;
  double t35269;
  double t35270;
  double t56592;
  double t56593;
  double t56597;
  double t35475;
  double t38464;
  double t57146;
  double t38629;
  double t38831;
  double t38833;
  double t39269;
  double t39351;
  double t39362;
  double t49285;
  double t55180;
  double t55255;
  double t55728;
  double t55734;
  double t55760;
  double t55808;
  double t55880;
  double t56942;
  double t56971;
  double t57065;
  double t57071;
  double t56617;
  double t56618;
  double t56795;
  double t56801;
  double t56861;
  double t56866;
  double t56893;
  double t56912;
  double t58196;
  double t58197;
  double t57351;
  double t57418;
  double t58350;
  double t58352;
  double t57147;
  double t59925;
  double t59679;
  double t59687;
  double t59688;
  double t59764;
  double t59839;
  double t59841;
  double t57200;
  double t57201;
  double t57171;
  double t58318;
  double t58323;
  double t57981;
  double t57664;
  double t57665;
  double t58966;
  double t59185;
  double t57898;
  double t57822;
  double t57884;
  double t58325;
  double t59258;
  double t63450;
  double t63470;
  double t63525;
  double t65351;
  double t65353;
  double t65439;
  double t65442;
  double t65231;
  double t65237;
  double t65244;
  double t65618;
  double t65619;
  t46 = Cos(var1[9]);
  t36 = Cos(var1[4]);
  t47 = Sin(var1[4]);
  t60 = Cos(var1[10]);
  t56 = Cos(var1[11]);
  t57 = Sin(var1[10]);
  t67 = Sin(var1[11]);
  t43 = Sin(var1[9]);
  t58 = t56*t57;
  t68 = -1.*t60*t67;
  t70 = t58 + t68;
  t48 = Sin(var1[5]);
  t73 = t60*t56;
  t78 = t57*t67;
  t80 = t73 + t78;
  t72 = Cos(var1[5]);
  t91 = -1.*t56*t57;
  t92 = t60*t67;
  t93 = t91 + t92;
  t95 = t72*t93;
  t96 = t43*t80*t48;
  t97 = t95 + t96;
  t81 = t72*t80;
  t82 = t43*t70*t48;
  t83 = t81 + t82;
  t165 = -1.*t60*t56;
  t166 = -1.*t57*t67;
  t173 = t165 + t166;
  t202 = t46*t70*t47;
  t205 = t36*t83;
  t207 = t202 + t205;
  t193 = t46*t80*t47;
  t194 = t36*t97;
  t195 = t193 + t194;
  t45 = t36*t43;
  t51 = t46*t47*t48;
  t52 = t45 + t51;
  t231 = Sin(var1[3]);
  t235 = Cos(var1[3]);
  t71 = t46*t36*t70;
  t85 = -1.*t47*t83;
  t87 = t71 + t85;
  t90 = t46*t36*t80;
  t98 = -1.*t47*t97;
  t106 = t90 + t98;
  t132 = t72*t43*t70;
  t133 = -1.*t80*t48;
  t134 = t132 + t133;
  t123 = t72*t43*t80;
  t128 = -1.*t93*t48;
  t130 = t123 + t128;
  t174 = t72*t173;
  t182 = t43*t93*t48;
  t185 = t174 + t182;
  t254 = -1.*t72*t43*t80;
  t257 = t93*t48;
  t258 = t254 + t257;
  t243 = -1.*t72*t43*t70;
  t244 = t80*t48;
  t245 = t243 + t244;
  t212 = t72*t70;
  t213 = t43*t173*t48;
  t216 = t212 + t213;
  t10769 = t235*t245;
  t10814 = -1.*t231*t87;
  t10849 = t10769 + t10814;
  t9102 = t235*t258;
  t9177 = -1.*t231*t106;
  t9557 = t9102 + t9177;
  t11824 = t46*t235*t72;
  t11990 = -1.*t231*t52;
  t12020 = t11824 + t11990;
  t270 = -1.*t43*t47;
  t273 = t46*t36*t48;
  t274 = t270 + t273;
  t278 = -1.*t46*t70*t47;
  t281 = -1.*t36*t83;
  t282 = t278 + t281;
  t286 = -1.*t46*t80*t47;
  t289 = -1.*t36*t97;
  t290 = t286 + t289;
  t3601 = t46*t36;
  t3702 = -1.*t43*t47*t48;
  t3704 = t3601 + t3702;
  t4058 = -1.*t36*t43*t70;
  t4120 = -1.*t46*t70*t47*t48;
  t4149 = t4058 + t4120;
  t4421 = -1.*t36*t43*t80;
  t4530 = -1.*t46*t80*t47*t48;
  t4570 = t4421 + t4530;
  t4946 = -1.*t72*t43*t93;
  t4950 = t173*t48;
  t5069 = t4946 + t4950;
  t6648 = t46*t36*t93;
  t8084 = -1.*t47*t185;
  t8310 = t6648 + t8084;
  t11284 = -1.*t72*t43*t173;
  t11430 = t70*t48;
  t11434 = t11284 + t11430;
  t11688 = t46*t36*t173;
  t11691 = -1.*t47*t216;
  t11692 = t11688 + t11691;
  t17939 = t231*t245;
  t17967 = t235*t87;
  t17978 = t17939 + t17967;
  t17697 = t231*t258;
  t17698 = t235*t106;
  t17733 = t17697 + t17698;
  t18083 = -0.0641*t56;
  t18085 = -0.28*t67;
  t18088 = t18083 + t18085;
  t18116 = -1.*t56;
  t18124 = 1. + t18116;
  t18125 = -0.575*t18124;
  t18126 = -0.295*t56;
  t18174 = -0.0641*t67;
  t18191 = t18125 + t18126 + t18174;
  t18081 = 0.325*t57;
  t18090 = t60*t18088;
  t18192 = t57*t18191;
  t18199 = t18081 + t18090 + t18192;
  t18069 = 0.068*t43;
  t18209 = t46*t18199;
  t18210 = t18069 + t18209;
  t18215 = -1.*t60;
  t18216 = 1. + t18215;
  t18236 = -0.325*t18216;
  t18238 = -1.*t57*t18088;
  t18257 = t60*t18191;
  t18258 = t18236 + t18238 + t18257;
  t18261 = t72*t18258;
  t18262 = -1.*t46;
  t18265 = 1. + t18262;
  t18287 = 0.1575*t18265;
  t18306 = 0.2255*t46;
  t18313 = -1.*t43*t18199;
  t18364 = t18287 + t18306 + t18313;
  t18381 = -1.*t18364*t48;
  t18424 = t18261 + t18381;
  t226 = t43*t47;
  t227 = -1.*t46*t36*t48;
  t228 = t226 + t227;
  t18555 = t36*t18210;
  t19032 = -1.*t47*t18424;
  t19073 = t18555 + t19032;
  t18506 = t18210*t47;
  t18507 = t36*t18424;
  t18519 = t18506 + t18507;
  t18212 = -1.*t18210*t47;
  t18443 = -1.*t36*t18424;
  t18485 = t18212 + t18443;
  t21562 = t72*t18364;
  t21563 = t18258*t48;
  t21689 = t21562 + t21563;
  t24654 = -1.*t72*t18364;
  t24725 = -1.*t18258*t48;
  t24803 = t24654 + t24725;
  t21694 = t46*t72*t21689;
  t21725 = t228*t18519;
  t21732 = t52*t19073;
  t21760 = t21694 + t21725 + t21732;
  t22158 = -1.*t21689*t245;
  t22225 = -1.*t18519*t207;
  t22227 = -1.*t19073*t87;
  t22240 = t22158 + t22225 + t22227;
  t23225 = t21689*t245;
  t23227 = t18519*t207;
  t23267 = t19073*t87;
  t23285 = t23225 + t23227 + t23267;
  t23678 = -1.*t21689*t258;
  t23688 = -1.*t18519*t195;
  t23711 = -1.*t19073*t106;
  t23753 = t23678 + t23688 + t23711;
  t24110 = -1.*t46*t72*t21689;
  t24138 = -1.*t228*t18519;
  t24239 = -1.*t52*t19073;
  t24255 = t24110 + t24138 + t24239;
  t24389 = t21689*t258;
  t24493 = t18519*t195;
  t24499 = t19073*t106;
  t24503 = t24389 + t24493 + t24499;
  t151 = -1.*t43*t70*t47;
  t152 = t46*t36*t70*t48;
  t153 = t151 + t152;
  t29909 = -0.068*t43;
  t29933 = -1.*t46*t18199;
  t29935 = t29909 + t29933;
  t30101 = 0.068*t46;
  t30107 = t30101 + t18313;
  t140 = t46*t47;
  t141 = t36*t43*t48;
  t145 = t140 + t141;
  t30110 = t30107*t47;
  t30114 = -1.*t36*t29935*t48;
  t30119 = t30110 + t30114;
  t30640 = t36*t30107;
  t30643 = t29935*t47*t48;
  t30669 = t30640 + t30643;
  t156 = -1.*t43*t80*t47;
  t157 = t46*t36*t80*t48;
  t159 = t156 + t157;
  t29864 = Power(t72,2);
  t35432 = 0.325*t60;
  t35433 = t35432 + t18238 + t18257;
  t35454 = -0.325*t57;
  t35456 = -1.*t60*t18088;
  t35458 = -1.*t57*t18191;
  t35459 = t35454 + t35456 + t35458;
  t35585 = t72*t35459;
  t35624 = t43*t35433*t48;
  t38240 = t35585 + t35624;
  t35434 = -1.*t72*t43*t35433;
  t35460 = t35459*t48;
  t35474 = t35434 + t35460;
  t35476 = t46*t35433*t47;
  t38267 = t36*t38240;
  t38269 = t35476 + t38267;
  t38438 = t46*t36*t35433;
  t38439 = -1.*t47*t38240;
  t38444 = t38438 + t38439;
  t164 = t46*t93*t47;
  t187 = t36*t185;
  t188 = t164 + t187;
  t211 = t46*t173*t47;
  t217 = t36*t216;
  t221 = t211 + t217;
  t44231 = -0.28*t56;
  t44391 = 0.0641*t67;
  t45380 = t44231 + t44391;
  t43751 = t57*t18088;
  t45387 = t60*t45380;
  t45747 = t43751 + t45387;
  t45944 = -1.*t57*t45380;
  t46381 = t18090 + t45944;
  t54078 = t72*t46381;
  t54162 = t43*t45747*t48;
  t54598 = t54078 + t54162;
  t45795 = -1.*t72*t43*t45747;
  t46410 = t46381*t48;
  t46977 = t45795 + t46410;
  t49303 = t46*t45747*t47;
  t54679 = t36*t54598;
  t54680 = t49303 + t54679;
  t55078 = t46*t36*t45747;
  t55096 = -1.*t47*t54598;
  t55127 = t55078 + t55096;
  t24908 = -1.*t46*t48*t21689;
  t25337 = -1.*t21689*t83;
  t25348 = -1.*t18424*t245;
  t25988 = t21689*t83;
  t26104 = t18424*t245;
  t27212 = -1.*t18424*t258;
  t27347 = -1.*t21689*t97;
  t27933 = t46*t48*t21689;
  t29508 = t18424*t258;
  t29535 = t21689*t97;
  t56157 = t43*t18210;
  t56159 = -1.*t46*t48*t18424;
  t56217 = t56157 + t56159 + t21694;
  t29976 = t46*t29864*t29935;
  t30412 = -1.*t72*t43*t21689;
  t30912 = t46*t72*t70*t21689;
  t30937 = -1.*t72*t29935*t245;
  t56320 = -1.*t46*t18210*t70;
  t56324 = -1.*t18424*t83;
  t56330 = t56320 + t56324 + t22158;
  t31810 = -1.*t46*t72*t70*t21689;
  t31898 = t72*t29935*t245;
  t56357 = t46*t18210*t70;
  t56358 = t18424*t83;
  t56507 = t56357 + t56358 + t23225;
  t32315 = t46*t72*t80*t21689;
  t32377 = -1.*t72*t29935*t258;
  t56513 = -1.*t46*t18210*t80;
  t56519 = -1.*t18424*t97;
  t56520 = t56513 + t23678 + t56519;
  t56550 = -1.*t43*t18210;
  t56558 = t46*t48*t18424;
  t56572 = t56550 + t56558 + t24110;
  t34847 = -1.*t46*t29864*t29935;
  t56619 = Power(t48,2);
  t34855 = t72*t43*t21689;
  t35269 = -1.*t46*t72*t80*t21689;
  t35270 = t72*t29935*t258;
  t56592 = t46*t18210*t80;
  t56593 = t18424*t97;
  t56597 = t56592 + t24389 + t56593;
  t35475 = t46*t72*t35474;
  t38464 = -1.*t35474*t245;
  t57146 = Power(t46,2);
  t38629 = t35474*t245;
  t38831 = -1.*t35474*t258;
  t38833 = -1.*t21689*t5069;
  t39269 = -1.*t46*t72*t35474;
  t39351 = t35474*t258;
  t39362 = t21689*t5069;
  t49285 = t46*t72*t46977;
  t55180 = -1.*t21689*t11434;
  t55255 = -1.*t46977*t245;
  t55728 = t21689*t11434;
  t55734 = t46977*t245;
  t55760 = -1.*t46977*t258;
  t55808 = -1.*t46*t72*t46977;
  t55880 = t46977*t258;
  t56942 = -1.*t46*t18210;
  t56971 = -1.*t43*t30107;
  t57065 = -1.*t43*t18210*t80;
  t57071 = t46*t30107*t80;
  t56617 = t46*t18210;
  t56618 = t43*t30107;
  t56795 = t43*t18210*t70;
  t56801 = -1.*t46*t30107*t70;
  t56861 = -1.*t43*t18210*t70;
  t56866 = t46*t30107*t70;
  t56893 = t43*t18210*t80;
  t56912 = -1.*t46*t30107*t80;
  t58196 = -1.*t46*t18364;
  t58197 = t56550 + t58196;
  t57351 = t46*t18210*t93;
  t57418 = t57146*t35433*t80;
  t58350 = t46*t18364;
  t58352 = t56157 + t58350;
  t57147 = -1.*t57146*t35433*t70;
  t59925 = Power(t43,2);
  t59679 = -1.*t18258*t93;
  t59687 = t43*t18364*t80;
  t59688 = t59679 + t56513 + t59687;
  t59764 = -1.*t43*t18364*t70;
  t59839 = t18258*t80;
  t59841 = t56357 + t59764 + t59839;
  t57200 = -1.*t46*t18210*t93;
  t57201 = -1.*t57146*t35433*t80;
  t57171 = t57146*t35433*t70;
  t58318 = t18258*t93;
  t58323 = -1.*t43*t18364*t80;
  t57981 = t57146*t45747*t80;
  t57664 = -1.*t57146*t45747*t70;
  t57665 = -1.*t46*t18210*t173;
  t58966 = t43*t18364*t70;
  t59185 = -1.*t18258*t80;
  t57898 = -1.*t57146*t45747*t80;
  t57822 = t57146*t45747*t70;
  t57884 = t46*t18210*t173;
  t58325 = t58318 + t56592 + t58323;
  t59258 = t56320 + t58966 + t59185;
  t63450 = -1.*t35459*t93;
  t63470 = -1.*t18258*t173;
  t63525 = t35459*t80;
  t65351 = t18199*t70;
  t65353 = t65351 + t59839;
  t65439 = -1.*t18199*t80;
  t65442 = t59679 + t65439;
  t65231 = -1.*t46381*t93;
  t65237 = t18258*t70;
  t65244 = t46381*t80;
  t65618 = -0.325*t67;
  t65619 = -1.*t18191*t67;
  p_output1[0]=t87*var2[0] + t52*var2[1] + t106*var2[2];
  p_output1[1]=t134*t36*var2[0] - 1.*t36*t46*t72*var2[1] + t130*t36*var2[2];
  p_output1[2]=t153*var2[0] + t145*var2[1] + t159*var2[2];
  p_output1[3]=t195*var2[0] + t188*var2[2];
  p_output1[4]=t221*var2[0] + t207*var2[2];
  p_output1[5]=t207;
  p_output1[6]=t228;
  p_output1[7]=t195;
  p_output1[8]=(-1.*t231*t245 - 1.*t235*t87)*var2[0] + (-1.*t235*t52 - 1.*t231*t46*t72)*var2[1] + (-1.*t106*t235 - 1.*t231*t258)*var2[2];
  p_output1[9]=-1.*t231*t282*var2[0] - 1.*t231*t274*var2[1] - 1.*t231*t290*var2[2];
  p_output1[10]=(t134*t231*t47 + t235*t83)*var2[0] + (-1.*t235*t46*t48 - 1.*t231*t46*t47*t72)*var2[1] + (t130*t231*t47 + t235*t97)*var2[2];
  p_output1[11]=(-1.*t231*t4149 - 1.*t235*t46*t70*t72)*var2[0] + (-1.*t231*t3704 - 1.*t235*t43*t72)*var2[1] + (-1.*t231*t4570 - 1.*t235*t46*t72*t80)*var2[2];
  p_output1[12]=t9557*var2[0] + (t235*t5069 - 1.*t231*t8310)*var2[2];
  p_output1[13]=(-1.*t11692*t231 + t11434*t235)*var2[0] + t10849*var2[2];
  p_output1[14]=t10849;
  p_output1[15]=t12020;
  p_output1[16]=t9557;
  p_output1[17]=t10849*var2[0] + t12020*var2[1] + t9557*var2[2];
  p_output1[18]=t235*t282*var2[0] + t235*t274*var2[1] + t235*t290*var2[2];
  p_output1[19]=(-1.*t134*t235*t47 + t231*t83)*var2[0] + (-1.*t231*t46*t48 + t235*t46*t47*t72)*var2[1] + (-1.*t130*t235*t47 + t231*t97)*var2[2];
  p_output1[20]=(t235*t4149 - 1.*t231*t46*t70*t72)*var2[0] + (t235*t3704 - 1.*t231*t43*t72)*var2[1] + (t235*t4570 - 1.*t231*t46*t72*t80)*var2[2];
  p_output1[21]=t17733*var2[0] + (t231*t5069 + t235*t8310)*var2[2];
  p_output1[22]=(t11434*t231 + t11692*t235)*var2[0] + t17978*var2[2];
  p_output1[23]=t17978;
  p_output1[24]=t235*t52 + t231*t46*t72;
  p_output1[25]=t17733;
  p_output1[26]=(t106*t24255 + t228*(t106*t18485 + t106*t18519 + t19073*t195 + t19073*t290) + t24503*t52 + t195*(-1.*t19073*t228 - 1.*t19073*t274 - 1.*t18485*t52 - 1.*t18519*t52))*var2[0] + (t106*t23285 + t207*(-1.*t106*t18485 - 1.*t106*t18519 - 1.*t19073*t195 - 1.*t19073*t290) + t23753*t87 + t195*(t19073*t207 + t19073*t282 + t18485*t87 + t18519*t87))*var2[1] + (t22240*t52 + t207*(t19073*t228 + t19073*t274 + t18485*t52 + t18519*t52) + t21760*t87 + t228*(-1.*t19073*t207 - 1.*t19073*t282 - 1.*t18485*t87 - 1.*t18519*t87))*var2[2];
  p_output1[27]=(t130*t24255*t36 + t228*(t29508 + t29535 + t130*t18519*t36 + t195*t24803*t36 - 1.*t130*t19073*t47 - 1.*t106*t24803*t47) - 1.*t24503*t36*t46*t72 + t195*(t27933 - 1.*t228*t24803*t36 + t24803*t47*t52 - 1.*t18424*t46*t72 + t18519*t36*t46*t72 - 1.*t19073*t46*t47*t72))*var2[0] + (t130*t23285*t36 + t134*t23753*t36 + t207*(t27212 + t27347 - 1.*t130*t18519*t36 - 1.*t195*t24803*t36 + t130*t19073*t47 + t106*t24803*t47) + t195*(t25988 + t26104 + t134*t18519*t36 + t207*t24803*t36 - 1.*t134*t19073*t47 - 1.*t24803*t47*t87))*var2[1] + (t134*t21760*t36 - 1.*t22240*t36*t46*t72 + t207*(t24908 + t228*t24803*t36 - 1.*t24803*t47*t52 + t18424*t46*t72 - 1.*t18519*t36*t46*t72 + t19073*t46*t47*t72) + t228*(t25337 + t25348 - 1.*t134*t18519*t36 - 1.*t207*t24803*t36 + t134*t19073*t47 + t24803*t47*t87))*var2[2];
  p_output1[28]=(t159*t24255 + t145*t24503 + t228*(t159*t18519 + t195*t30119 + t106*t30669 + t35269 + t35270 + t19073*t4570) + t195*(-1.*t145*t18519 - 1.*t228*t30119 + t34847 + t34855 - 1.*t19073*t3704 - 1.*t30669*t52))*var2[0] + (t159*t23285 + t153*t23753 + t207*(-1.*t159*t18519 - 1.*t195*t30119 - 1.*t106*t30669 + t32315 + t32377 - 1.*t19073*t4570) + t195*(t153*t18519 + t207*t30119 + t31810 + t31898 + t19073*t4149 + t30669*t87))*var2[1] + (t153*t21760 + t145*t22240 + t207*(t145*t18519 + t29976 + t228*t30119 + t30412 + t19073*t3704 + t30669*t52) + t228*(-1.*t153*t18519 - 1.*t207*t30119 + t30912 + t30937 - 1.*t19073*t4149 - 1.*t30669*t87))*var2[2];
  p_output1[29]=(t188*t24255 + t195*(-1.*t228*t38269 + t39269 - 1.*t38444*t52) + t228*(t18519*t188 + t195*t38269 + t106*t38444 + t39351 + t39362 + t19073*t8310))*var2[0] + (t188*t23285 + t195*t23753 + t207*(-1.*t18519*t188 - 1.*t195*t38269 - 1.*t106*t38444 + t38831 + t38833 - 1.*t19073*t8310) + t195*(t24389 + t24493 + t24499 + t207*t38269 + t38629 + t38444*t87))*var2[1] + (t195*t21760 + t207*(t35475 + t228*t38269 + t38444*t52) + t228*(t23678 + t23688 + t23711 - 1.*t207*t38269 + t38464 - 1.*t38444*t87))*var2[2];
  p_output1[30]=(t207*t24255 + t195*(-1.*t228*t54680 - 1.*t52*t55127 + t55808) + t228*(t23225 + t23227 + t23267 + t195*t54680 + t106*t55127 + t55880))*var2[0] + (t207*t23285 + t221*t23753 + t207*(t22158 + t22225 + t22227 - 1.*t195*t54680 - 1.*t106*t55127 + t55760) + t195*(t11692*t19073 + t18519*t221 + t207*t54680 + t55728 + t55734 + t55127*t87))*var2[1] + (t21760*t221 + t207*(t49285 + t228*t54680 + t52*t55127) + t228*(-1.*t11692*t19073 - 1.*t18519*t221 - 1.*t207*t54680 + t55180 + t55255 - 1.*t55127*t87))*var2[2];
  p_output1[31]=t195*t24255 + t228*t24503;
  p_output1[32]=t195*t23285 + t207*t23753;
  p_output1[33]=t207*t21760 + t22240*t228;
  p_output1[34]=(t258*(t27933 + t24803*t46*t48) - 1.*t46*t48*t56597 + t56572*t97 + t46*t72*(t130*t18424 + t29508 + t29535 + t24803*t97))*var2[0] + (t56520*t83 + t258*(t134*t18424 + t25988 + t26104 + t24803*t83) + t56507*t97 + t245*(-1.*t130*t18424 + t27212 + t27347 - 1.*t24803*t97))*var2[1] + (t245*(t24908 - 1.*t24803*t46*t48) - 1.*t46*t48*t56330 + t56217*t83 + t46*t72*(-1.*t134*t18424 + t25337 + t25348 - 1.*t24803*t83))*var2[2];
  p_output1[35]=(t258*(t34847 + t34855 - 1.*t18424*t43*t48 - 1.*t29935*t46*t56619 + t56942 + t56971) - 1.*t43*t56597*t72 - 1.*t46*t56572*t72*t80 + t46*t72*(t35269 + t35270 + t57065 + t57071 + t18424*t46*t48*t80 - 1.*t29935*t48*t97))*var2[0] + (-1.*t46*t56520*t70*t72 - 1.*t46*t56507*t72*t80 + t258*(t31810 + t31898 + t56861 + t56866 + t18424*t46*t48*t70 - 1.*t29935*t48*t83) + t245*(t32315 + t32377 + t56893 + t56912 - 1.*t18424*t46*t48*t80 + t29935*t48*t97))*var2[1] + (t245*(t29976 + t30412 + t18424*t43*t48 + t56617 + t56618 + t29935*t46*t56619) - 1.*t43*t56330*t72 - 1.*t46*t56217*t70*t72 + t46*t72*(t30912 + t30937 + t56795 + t56801 - 1.*t18424*t46*t48*t70 + t29935*t48*t83))*var2[2];
  p_output1[36]=(t258*(t39269 - 1.*t35433*t43*t46 + t38240*t46*t48) + t5069*t56572 + t46*t72*(t18424*t185 + t39351 + t39362 + t57351 + t57418 + t38240*t97))*var2[0] + (t5069*t56507 + t258*t56520 + t258*(t24389 + t38629 + t56592 + t56593 + t57171 + t38240*t83) + t245*(-1.*t18424*t185 + t38831 + t38833 + t57200 + t57201 - 1.*t38240*t97))*var2[1] + (t245*(t35475 + t35433*t43*t46 - 1.*t38240*t46*t48) + t258*t56217 + t46*t72*(t23678 + t38464 + t56513 + t56519 + t57147 - 1.*t38240*t83))*var2[2];
  p_output1[37]=(t258*(-1.*t43*t45747*t46 + t46*t48*t54598 + t55808) + t245*t56572 + t46*t72*(t23225 + t55880 + t56357 + t56358 + t57981 + t54598*t97))*var2[0] + (t245*t56507 + t11434*t56520 + t258*(t18424*t216 + t55728 + t55734 + t57822 + t57884 + t54598*t83) + t245*(t22158 + t55760 + t56320 + t56324 + t57898 - 1.*t54598*t97))*var2[1] + (t245*(t43*t45747*t46 + t49285 - 1.*t46*t48*t54598) + t11434*t56217 + t46*t72*(-1.*t18424*t216 + t55180 + t55255 + t57664 + t57665 - 1.*t54598*t83))*var2[2];
  p_output1[38]=t258*t56572 + t46*t56597*t72;
  p_output1[39]=t258*t56507 + t245*t56520;
  p_output1[40]=t245*t56217 + t46*t56330*t72;
  p_output1[41]=(t46*t58325 + t46*(t18364*t43 - 1.*t29935*t46 + t56942 + t56971)*t80 - 1.*t43*t58197*t80 + t43*(t57065 + t57071 - 1.*t29935*t43*t80 - 1.*t18364*t46*t80))*var2[0] + (-1.*t43*t59688*t70 - 1.*t43*t59841*t80 + t46*(t56861 + t56866 - 1.*t29935*t43*t70 - 1.*t18364*t46*t70)*t80 + t46*t70*(t56893 + t56912 + t29935*t43*t80 + t18364*t46*t80))*var2[1] + (t46*t59258 + t46*(-1.*t18364*t43 + t29935*t46 + t56617 + t56618)*t70 - 1.*t43*t58352*t70 + t43*(t56795 + t56801 + t29935*t43*t70 + t18364*t46*t70))*var2[2];
  p_output1[42]=(t46*t58197*t93 + t43*(t173*t18258 + t57351 + t57418 + t35433*t59925*t80 + t35459*t93 - 1.*t18364*t43*t93))*var2[0] + (t46*t59688*t80 + t46*(t56592 + t57171 + t58318 + t58323 + t63525 + t35433*t59925*t70)*t80 + t46*t59841*t93 + t46*t70*(t57200 + t57201 + t63450 + t63470 - 1.*t35433*t59925*t80 + t18364*t43*t93))*var2[1] + (t46*t58352*t80 + t43*(t56513 + t57147 + t59679 + t59687 - 1.*t35433*t59925*t70 - 1.*t35459*t80))*var2[2];
  p_output1[43]=(t46*t58197*t70 + t43*(t56357 + t57981 + t59764 + t59839 + t45747*t59925*t80 + t46381*t93))*var2[0] + (t173*t46*t59688 + t46*t59841*t70 + t46*(-1.*t173*t18364*t43 + t57822 + t57884 + t65237 + t65244 + t45747*t59925*t70)*t80 + t46*t70*(t56320 + t57898 + t58966 + t59185 + t65231 - 1.*t45747*t59925*t80))*var2[1] + (t173*t46*t58352 + t43*(t173*t18364*t43 + t57664 + t57665 - 1.*t18258*t70 - 1.*t45747*t59925*t70 - 1.*t46381*t80))*var2[2];
  p_output1[44]=t43*t58325 + t46*t58197*t80;
  p_output1[45]=t46*t59688*t70 + t46*t59841*t80;
  p_output1[46]=t43*t59258 + t46*t58352*t70;
  p_output1[47]=(-0.2255*t173 - 0.1575*t80)*var2[0] + (t173*t65353 + t65442*t93 + (t58318 + t63525 + t35433*t70 + t18199*t80)*t93 + t80*(t63450 + t63470 - 1.*t35433*t80 - 1.*t18199*t93))*var2[1] + 0.068*t93*var2[2];
  p_output1[48]=(-0.1575*t173 - 0.2255*t80)*var2[0] + (t65442*t70 + t65353*t80 + t80*(t59185 + t65231 - 1.*t18199*t70 - 1.*t45747*t80) + (t173*t18199 + t65237 + t65244 + t45747*t70)*t93)*var2[1] + 0.068*t70*var2[2];
  p_output1[49]=-0.1575*t70 - 0.2255*t93;
  p_output1[50]=t65442*t80 + t65353*t93;
  p_output1[51]=0.068*t80;
  p_output1[52]=(-0.325*t56 - 1.*t18191*t56 - 1.*t45380*t56)*var2[0] + (t65618 + t65619 - 1.*t45380*t67)*var2[2];
  p_output1[53]=-1.*t18088*t56 + t65618 + t65619;
  p_output1[54]=0.325*t56 + t18191*t56 - 1.*t18088*t67;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
