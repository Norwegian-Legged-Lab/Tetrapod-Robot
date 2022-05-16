/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:18 GMT+02:00
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
  double t19362;
  double t23316;
  double t24074;
  double t24430;
  double t24590;
  double t24653;
  double t25167;
  double t25573;
  double t5211;
  double t19266;
  double t25688;
  double t25842;
  double t25207;
  double t25695;
  double t25705;
  double t3138;
  double t25914;
  double t26123;
  double t26126;
  double t26135;
  double t26138;
  double t26153;
  double t27182;
  double t27200;
  double t27202;
  double t27204;
  double t27229;
  double t27347;
  double t27352;
  double t27353;
  double t27355;
  double t27363;
  double t27373;
  double t27533;
  double t27541;
  double t27550;
  double t27567;
  double t27574;
  double t27580;
  double t27587;
  double t27592;
  double t27593;
  double t27598;
  double t27631;
  double t27803;
  double t27928;
  double t27929;
  double t27930;
  double t28021;
  double t28032;
  double t28081;
  double t28091;
  double t28142;
  double t28370;
  double t28495;
  double t28525;
  double t28526;
  double t28556;
  double t28557;
  double t28566;
  double t28567;
  double t28572;
  double t28017;
  double t28198;
  double t28282;
  double t28299;
  double t28577;
  double t28583;
  double t28588;
  double t28591;
  double t28592;
  double t28606;
  double t28619;
  double t28647;
  double t28648;
  double t29380;
  double t29388;
  double t29426;
  double t28306;
  double t28649;
  double t29215;
  double t31390;
  double t32035;
  double t32590;
  double t27968;
  double t28000;
  double t28002;
  double t29867;
  double t29868;
  double t30067;
  double t34663;
  double t34703;
  double t34915;
  double t35458;
  double t35459;
  double t35467;
  double t40938;
  double t40949;
  double t40980;
  double t30128;
  double t41091;
  double t41101;
  double t41139;
  double t34973;
  double t41328;
  double t41345;
  double t41469;
  double t30137;
  double t32609;
  double t33812;
  double t41192;
  double t41195;
  double t41196;
  double t41213;
  double t41214;
  double t41297;
  double t41812;
  double t35022;
  double t35039;
  double t35060;
  double t35503;
  double t35579;
  double t43503;
  double t43651;
  double t43707;
  double t43715;
  double t35505;
  double t35511;
  double t35527;
  double t35582;
  double t35633;
  double t35703;
  double t36818;
  double t38544;
  double t37138;
  double t37390;
  double t37776;
  double t43030;
  double t43036;
  double t44510;
  double t44546;
  double t44587;
  double t44630;
  double t39123;
  double t39648;
  double t39686;
  double t40982;
  double t40989;
  double t41001;
  double t41005;
  double t41032;
  double t41033;
  double t41054;
  double t41061;
  double t41067;
  double t41072;
  double t41083;
  double t41086;
  double t44764;
  double t44773;
  double t44780;
  double t44783;
  double t44784;
  double t41216;
  double t44821;
  double t44827;
  double t44832;
  double t44844;
  double t44852;
  double t44853;
  double t41639;
  double t42893;
  double t42896;
  double t42897;
  double t42916;
  double t43020;
  double t44854;
  double t43056;
  double t43062;
  double t44865;
  double t43232;
  double t43236;
  double t43250;
  double t43406;
  double t43409;
  double t43413;
  double t43418;
  double t43421;
  double t43425;
  double t43457;
  double t43459;
  double t43473;
  double t43547;
  double t43679;
  double t43683;
  double t43691;
  double t43695;
  double t43711;
  double t43765;
  double t43770;
  double t43787;
  double t43797;
  double t45025;
  double t43914;
  double t43939;
  double t45037;
  double t44024;
  double t44051;
  double t44185;
  double t44200;
  double t44315;
  double t44327;
  double t44358;
  double t44359;
  double t44360;
  double t44394;
  double t44407;
  double t44470;
  double t44471;
  double t44472;
  double t44487;
  double t44494;
  double t44547;
  double t44606;
  double t44651;
  double t44652;
  double t44654;
  double t44655;
  double t44662;
  double t45132;
  double t44678;
  double t44679;
  double t45142;
  double t44722;
  double t44735;
  double t44750;
  double t45200;
  double t45202;
  double t45205;
  double t45208;
  double t45214;
  double t45215;
  double t45248;
  double t45250;
  double t45253;
  double t45258;
  double t45259;
  double t45262;
  double t45277;
  double t45279;
  double t45280;
  double t45285;
  double t45286;
  double t45289;
  double t45281;
  double t45302;
  double t45306;
  double t45308;
  double t45324;
  double t45331;
  double t45352;
  double t45354;
  double t45356;
  double t45358;
  double t45363;
  double t45364;
  double t45399;
  double t45408;
  double t45447;
  double t45472;
  double t45432;
  double t45207;
  double t45216;
  double t45224;
  double t45540;
  double t45542;
  double t45560;
  double t27241;
  double t27261;
  double t27263;
  double t45630;
  double t45641;
  double t45643;
  double t45239;
  double t45240;
  double t45241;
  double t27860;
  double t27879;
  double t27888;
  double t45720;
  double t45721;
  double t45722;
  double t45727;
  double t45728;
  double t45729;
  double t45731;
  double t45732;
  double t45733;
  double t45747;
  double t45752;
  double t45760;
  double t45730;
  double t45764;
  double t45766;
  double t45785;
  double t45789;
  double t45790;
  double t45780;
  double t45800;
  double t45802;
  double t45803;
  double t45807;
  double t45811;
  double t45812;
  double t45782;
  double t45816;
  double t45818;
  double t45819;
  double t45386;
  double t45389;
  double t45412;
  double t45413;
  double t45428;
  double t45439;
  double t45444;
  double t45445;
  double t45838;
  double t45846;
  double t45524;
  double t45527;
  double t45528;
  double t45874;
  double t45878;
  double t45882;
  double t45824;
  double t45825;
  double t45826;
  double t45597;
  double t45598;
  double t45600;
  double t45603;
  double t45609;
  double t45610;
  double t45612;
  double t45938;
  double t45945;
  t19362 = Cos(var1[7]);
  t23316 = Cos(var1[8]);
  t24074 = t19362*t23316;
  t24430 = Sin(var1[7]);
  t24590 = Sin(var1[8]);
  t24653 = t24430*t24590;
  t25167 = t24074 + t24653;
  t25573 = Cos(var1[5]);
  t5211 = Cos(var1[6]);
  t19266 = Sin(var1[5]);
  t25688 = Sin(var1[6]);
  t25842 = Cos(var1[3]);
  t25207 = t5211*t19266*t25167;
  t25695 = t25573*t25688*t25167;
  t25705 = t25207 + t25695;
  t3138 = Sin(var1[3]);
  t25914 = Cos(var1[4]);
  t26123 = -1.*t23316*t24430;
  t26126 = t19362*t24590;
  t26135 = t26123 + t26126;
  t26138 = t25914*t26135;
  t26153 = Sin(var1[4]);
  t27182 = t25573*t5211*t25167;
  t27200 = -1.*t19266*t25688*t25167;
  t27202 = t27182 + t27200;
  t27204 = -1.*t26153*t27202;
  t27229 = t26138 + t27204;
  t27347 = -1.*t5211*t19266;
  t27352 = -1.*t25573*t25688;
  t27353 = t27347 + t27352;
  t27355 = t25573*t5211;
  t27363 = -1.*t19266*t25688;
  t27373 = t27355 + t27363;
  t27533 = t23316*t24430;
  t27541 = -1.*t19362*t24590;
  t27550 = t27533 + t27541;
  t27567 = t5211*t19266*t27550;
  t27574 = t25573*t25688*t27550;
  t27580 = t27567 + t27574;
  t27587 = t25914*t25167;
  t27592 = t25573*t5211*t27550;
  t27593 = -1.*t19266*t25688*t27550;
  t27598 = t27592 + t27593;
  t27631 = -1.*t26153*t27598;
  t27803 = t27587 + t27631;
  t27928 = -1.*t26153*t26135;
  t27929 = -1.*t25914*t27202;
  t27930 = t27928 + t27929;
  t28021 = -1.*t23316;
  t28032 = 1. + t28021;
  t28081 = 0.50321*t28032;
  t28091 = 0.23321*t23316;
  t28142 = t28081 + t28091;
  t28370 = -1.*t5211;
  t28495 = 1. + t28370;
  t28525 = 0.15121*t28495;
  t28526 = -1.*t19362;
  t28556 = 1. + t28526;
  t28557 = 0.28121*t28556;
  t28566 = t19362*t28142;
  t28567 = -0.27*t24430*t24590;
  t28572 = t28557 + t28566 + t28567;
  t28017 = 0.28121*t24430;
  t28198 = -1.*t28142*t24430;
  t28282 = -0.27*t19362*t24590;
  t28299 = t28017 + t28198 + t28282;
  t28577 = t5211*t28572;
  t28583 = t28525 + t28577;
  t28588 = t25573*t28583;
  t28591 = 0.15121*t5211;
  t28592 = -0.15121*t25688;
  t28606 = t25688*t28572;
  t28619 = t28525 + t28591 + t28592 + t28606;
  t28647 = -1.*t19266*t28619;
  t28648 = t28588 + t28647;
  t29380 = t26153*t28299;
  t29388 = t25914*t28648;
  t29426 = t29380 + t29388;
  t28306 = -1.*t26153*t28299;
  t28649 = -1.*t25914*t28648;
  t29215 = t28306 + t28649;
  t31390 = t25914*t28299;
  t32035 = -1.*t26153*t28648;
  t32590 = t31390 + t32035;
  t27968 = t26153*t25167;
  t28000 = t25914*t27598;
  t28002 = t27968 + t28000;
  t29867 = t19266*t28583;
  t29868 = t25573*t28619;
  t30067 = t29867 + t29868;
  t34663 = -1.*t26153*t25167;
  t34703 = -1.*t25914*t27598;
  t34915 = t34663 + t34703;
  t35458 = t26153*t26135;
  t35459 = t25914*t27202;
  t35467 = t35458 + t35459;
  t40938 = -1.*t5211*t19266*t25167;
  t40949 = -1.*t25573*t25688*t25167;
  t40980 = t40938 + t40949;
  t30128 = -1.*t27373*t30067;
  t41091 = -1.*t19266*t28583;
  t41101 = -1.*t25573*t28619;
  t41139 = t41091 + t41101;
  t34973 = t27580*t30067;
  t41328 = -1.*t5211*t19266*t27550;
  t41345 = -1.*t25573*t25688*t27550;
  t41469 = t41328 + t41345;
  t30137 = -1.*t25914*t27353*t29426;
  t32609 = t26153*t27353*t32590;
  t33812 = t30128 + t30137 + t32609;
  t41192 = -1.*t27353*t30067;
  t41195 = -1.*t27373*t28648;
  t41196 = -1.*t25573*t5211;
  t41213 = t19266*t25688;
  t41214 = t41196 + t41213;
  t41297 = t27598*t30067;
  t41812 = t27580*t28648;
  t35022 = t28002*t29426;
  t35039 = t27803*t32590;
  t35060 = t34973 + t35022 + t35039;
  t35503 = -1.*t27580*t30067;
  t35579 = t25705*t30067;
  t43503 = -1.*t27598*t30067;
  t43651 = -1.*t27580*t28648;
  t43707 = t27202*t30067;
  t43715 = t25705*t28648;
  t35505 = -1.*t28002*t29426;
  t35511 = -1.*t27803*t32590;
  t35527 = t35503 + t35505 + t35511;
  t35582 = t35467*t29426;
  t35633 = t27229*t32590;
  t35703 = t35579 + t35582 + t35633;
  t36818 = t27373*t30067;
  t38544 = -1.*t25705*t30067;
  t37138 = t25914*t27353*t29426;
  t37390 = -1.*t26153*t27353*t32590;
  t37776 = t36818 + t37138 + t37390;
  t43030 = Power(t25914,2);
  t43036 = Power(t26153,2);
  t44510 = t27353*t30067;
  t44546 = t27373*t28648;
  t44587 = -1.*t27202*t30067;
  t44630 = -1.*t25705*t28648;
  t39123 = -1.*t35467*t29426;
  t39648 = -1.*t27229*t32590;
  t39686 = t38544 + t39123 + t39648;
  t40982 = var2[0]*t25914*t40980;
  t40989 = t3138*t26153*t40980;
  t41001 = t25842*t27202;
  t41005 = t40989 + t41001;
  t41032 = var2[1]*t41005;
  t41033 = -1.*t25842*t26153*t40980;
  t41054 = t3138*t27202;
  t41061 = t41033 + t41054;
  t41067 = var2[2]*t41061;
  t41072 = -1.*t27353*t28648;
  t41083 = t30128 + t41072;
  t41086 = t27598*t41083;
  t44764 = -0.15121*t5211;
  t44773 = t44764 + t28577;
  t44780 = 0.15121*t25688;
  t44783 = -1.*t25688*t28572;
  t44784 = t44780 + t44783;
  t41216 = -1.*t41214*t28648;
  t44821 = -1.*t19266*t44773;
  t44827 = t25573*t44784;
  t44832 = t44821 + t44827;
  t44844 = t25573*t44773;
  t44852 = t19266*t44784;
  t44853 = t44844 + t44852;
  t41639 = t41469*t28648;
  t42893 = t28299*t25167;
  t42896 = t27598*t28648;
  t42897 = t42893 + t34973 + t42896;
  t42916 = t27353*t42897;
  t43020 = t25914*t41469*t33812;
  t44854 = -1.*t27373*t44853;
  t43056 = -1.*t25914*t41214*t29426;
  t43062 = t26153*t41214*t32590;
  t44865 = t27580*t44853;
  t43232 = t25914*t41469*t29426;
  t43236 = -1.*t26153*t41469*t32590;
  t43250 = t25914*t41214*t35060;
  t43406 = var2[0]*t25914*t41214;
  t43409 = t3138*t27353;
  t43413 = -1.*t25842*t26153*t41214;
  t43418 = t43409 + t43413;
  t43421 = var2[2]*t43418;
  t43425 = t25842*t27353;
  t43457 = t3138*t26153*t41214;
  t43459 = t43425 + t43457;
  t43473 = var2[1]*t43459;
  t43547 = -1.*t41469*t28648;
  t43679 = -1.*t28299*t25167;
  t43683 = -1.*t27598*t28648;
  t43691 = t43679 + t35503 + t43683;
  t43695 = t27202*t43691;
  t43711 = t40980*t28648;
  t43765 = t28299*t26135;
  t43770 = t27202*t28648;
  t43787 = t43765 + t35579 + t43770;
  t43797 = t27598*t43787;
  t45025 = -1.*t27580*t44853;
  t43914 = -1.*t25914*t41469*t29426;
  t43939 = t26153*t41469*t32590;
  t45037 = t25705*t44853;
  t44024 = t25914*t40980*t29426;
  t44051 = -1.*t26153*t40980*t32590;
  t44185 = t25914*t40980*t35527;
  t44200 = t25914*t41469*t35703;
  t44315 = var2[0]*t25914*t41469;
  t44327 = t3138*t26153*t41469;
  t44358 = t25842*t27598;
  t44359 = t44327 + t44358;
  t44360 = var2[1]*t44359;
  t44394 = -1.*t25842*t26153*t41469;
  t44407 = t3138*t27598;
  t44470 = t44394 + t44407;
  t44471 = var2[2]*t44470;
  t44472 = t27353*t28648;
  t44487 = t36818 + t44472;
  t44494 = t27202*t44487;
  t44547 = t41214*t28648;
  t44606 = -1.*t40980*t28648;
  t44651 = -1.*t28299*t26135;
  t44652 = -1.*t27202*t28648;
  t44654 = t44651 + t38544 + t44652;
  t44655 = t27353*t44654;
  t44662 = t25914*t40980*t37776;
  t45132 = t27373*t44853;
  t44678 = t25914*t41214*t29426;
  t44679 = -1.*t26153*t41214*t32590;
  t45142 = -1.*t25705*t44853;
  t44722 = -1.*t25914*t40980*t29426;
  t44735 = t26153*t40980*t32590;
  t44750 = t25914*t41214*t39686;
  t45200 = -1.*t19362*t23316;
  t45202 = -1.*t24430*t24590;
  t45205 = t45200 + t45202;
  t45208 = t25573*t5211*t26135;
  t45214 = -1.*t19266*t25688*t26135;
  t45215 = t45208 + t45214;
  t45248 = t5211*t19266*t26135;
  t45250 = t25573*t25688*t26135;
  t45253 = t45248 + t45250;
  t45258 = t25914*t45205;
  t45259 = -1.*t26153*t45215;
  t45262 = t45258 + t45259;
  t45277 = t5211*t19266*t28299;
  t45279 = t25573*t25688*t28299;
  t45280 = t45277 + t45279;
  t45285 = t25573*t5211*t28299;
  t45286 = -1.*t19266*t25688*t28299;
  t45289 = t45285 + t45286;
  t45281 = -1.*t27373*t45280;
  t45302 = 0.28121*t19362;
  t45306 = -1.*t19362*t28142;
  t45308 = 0.27*t24430*t24590;
  t45324 = t45302 + t45306 + t45308;
  t45331 = t27580*t45280;
  t45352 = t26153*t45324;
  t45354 = t25914*t45289;
  t45356 = t45352 + t45354;
  t45358 = t25914*t45324;
  t45363 = -1.*t26153*t45289;
  t45364 = t45358 + t45363;
  t45399 = t28299*t45205;
  t45408 = t26135*t45324;
  t45447 = Power(t5211,2);
  t45472 = Power(t25688,2);
  t45432 = -1.*t45324*t25167;
  t45207 = t26153*t45205;
  t45216 = t25914*t45215;
  t45224 = t45207 + t45216;
  t45540 = t45280*t25705;
  t45542 = t45253*t30067;
  t45560 = -1.*t27580*t45280;
  t27241 = t25842*t25705;
  t27261 = -1.*t3138*t27229;
  t27263 = t27241 + t27261;
  t45630 = t27373*t45280;
  t45641 = -1.*t45280*t25705;
  t45643 = -1.*t45253*t30067;
  t45239 = t25688*t28583;
  t45240 = -1.*t5211*t28619;
  t45241 = t45239 + t45240;
  t27860 = t25842*t27580;
  t27879 = -1.*t3138*t27803;
  t27888 = t27860 + t27879;
  t45720 = -0.27*t23316*t24430;
  t45721 = 0.27*t19362*t24590;
  t45722 = t45720 + t45721;
  t45727 = t5211*t19266*t45722;
  t45728 = t25573*t25688*t45722;
  t45729 = t45727 + t45728;
  t45731 = t25573*t5211*t45722;
  t45732 = -1.*t19266*t25688*t45722;
  t45733 = t45731 + t45732;
  t45747 = t5211*t19266*t45205;
  t45752 = t25573*t25688*t45205;
  t45760 = t45747 + t45752;
  t45730 = -1.*t27373*t45729;
  t45764 = -0.27*t19362*t23316;
  t45766 = t45764 + t28567;
  t45785 = t25573*t5211*t45205;
  t45789 = -1.*t19266*t25688*t45205;
  t45790 = t45785 + t45789;
  t45780 = t27580*t45729;
  t45800 = t26153*t45766;
  t45802 = t25914*t45733;
  t45803 = t45800 + t45802;
  t45807 = t25914*t45766;
  t45811 = -1.*t26153*t45733;
  t45812 = t45807 + t45811;
  t45782 = t45760*t30067;
  t45816 = t26153*t27550;
  t45818 = t25914*t45790;
  t45819 = t45816 + t45818;
  t45386 = -1.*t27550*t28572;
  t45389 = t45386 + t43679;
  t45412 = t28572*t25167;
  t45413 = t43765 + t45412;
  t45428 = -1.*t27550*t28299;
  t45439 = -1.*t5211*t27550*t28583;
  t45444 = -1.*t25688*t27550*t28619;
  t45445 = t43679 + t45439 + t45444;
  t45838 = t26135*t45766;
  t45846 = -1.*t45766*t25167;
  t45524 = t5211*t25167*t28583;
  t45527 = t25688*t25167*t28619;
  t45528 = t43765 + t45524 + t45527;
  t45874 = t45729*t25705;
  t45878 = -1.*t27580*t45729;
  t45882 = -1.*t45760*t30067;
  t45824 = t25914*t27550;
  t45825 = -1.*t26153*t45790;
  t45826 = t45824 + t45825;
  t45597 = 0.15121*t45205;
  t45598 = 0.15121*t25167;
  t45600 = t45597 + t45598;
  t45603 = var2[6]*t45600;
  t45609 = -1.*t25688*t28583;
  t45610 = t5211*t28619;
  t45612 = t45609 + t45610;
  t45938 = t27373*t45729;
  t45945 = -1.*t45729*t25705;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t25842*t27229 - 1.*t25705*t3138)*var2[1] + t27263*var2[2];
  p_output1[10]=(t25842*t26153*t27353 - 1.*t27373*t3138)*var2[1] + (t25842*t27373 + t26153*t27353*t3138)*var2[2];
  p_output1[11]=(-1.*t25842*t27803 - 1.*t27580*t3138)*var2[1] + t27888*var2[2];
  p_output1[12]=t27229*var2[0] - 1.*t27930*t3138*var2[1] + t25842*t27930*var2[2] + (t28002*(t26153*t27353*t29215 + t26153*t27353*t29426) + t27803*t33812 + t25914*t27353*(t27803*t29215 + t27803*t29426 + t28002*t32590 + t32590*t34915) - 1.*t26153*t27353*t35060)*var2[3];
  p_output1[13]=-1.*t26153*t27353*var2[0] + t25914*t27353*t3138*var2[1] - 1.*t25842*t25914*t27353*var2[2] + ((-1.*t27803*t29215 - 1.*t27803*t29426 - 1.*t28002*t32590 - 1.*t32590*t34915)*t35467 + t28002*(t27229*t29215 + t27229*t29426 + t27930*t32590 + t32590*t35467) + t27229*t35527 + t27803*t35703)*var2[3];
  p_output1[14]=t27803*var2[0] - 1.*t3138*t34915*var2[1] + t25842*t34915*var2[2] + ((-1.*t26153*t27353*t29215 - 1.*t26153*t27353*t29426)*t35467 + t25914*t27353*(-1.*t27229*t29215 - 1.*t27229*t29426 - 1.*t27930*t32590 - 1.*t32590*t35467) + t27229*t37776 - 1.*t26153*t27353*t39686)*var2[3];
  p_output1[15]=t40982 + t41032 + t41067 + (t43020 + t28002*(t41192 + t41195 - 1.*t27353*t41139*t43030 - 1.*t27353*t41139*t43036 + t43056 + t43062) + t25914*t27353*(-1.*t26153*t27803*t41139 + t25914*t28002*t41139 + t41297 + t41812 + t43232 + t43236) + t43250)*var2[3] + (t41086 + t27580*(-1.*t27353*t41139 + t41192 + t41195 + t41216) + t27373*(t27598*t41139 + t41297 + t41639 + t41812) + t42916)*var2[4];
  p_output1[16]=t43406 + t43421 + t43473 + (t35467*(t26153*t27803*t41139 - 1.*t25914*t28002*t41139 + t43503 + t43651 + t43914 + t43939) + t28002*(-1.*t26153*t27229*t41139 + t25914*t35467*t41139 + t43707 + t43715 + t44024 + t44051) + t44185 + t44200)*var2[3] + (t25705*(-1.*t27598*t41139 + t43503 + t43547 + t43651) + t43695 + t27580*(t27202*t41139 + t43707 + t43711 + t43715) + t43797)*var2[4];
  p_output1[17]=t44315 + t44360 + t44471 + (t44662 + t35467*(t27353*t41139*t43030 + t27353*t41139*t43036 + t44510 + t44546 + t44678 + t44679) + t25914*t27353*(t26153*t27229*t41139 - 1.*t25914*t35467*t41139 + t44587 + t44630 + t44722 + t44735) + t44750)*var2[3] + (t44494 + t25705*(t27353*t41139 + t44510 + t44546 + t44547) + t27373*(-1.*t27202*t41139 + t44587 + t44606 + t44630) + t44655)*var2[4];
  p_output1[18]=t40982 + t41032 + t41067 + (t43020 + t43250 + t28002*(t41192 + t43056 + t43062 - 1.*t27353*t43030*t44832 - 1.*t27353*t43036*t44832 + t44854) + t25914*t27353*(t41297 + t43232 + t43236 - 1.*t26153*t27803*t44832 + t25914*t28002*t44832 + t44865))*var2[3] + (t41086 + t42916 + t27580*(t41192 + t41216 - 1.*t27353*t44832 + t44854) + t27373*(t41297 + t41639 + t27598*t44832 + t44865))*var2[4] + t25167*(t25688*t28619 + t25688*t44784 + t28583*t5211 - 1.*t44773*t5211)*var2[5];
  p_output1[19]=t43406 + t43421 + t43473 + (t44185 + t44200 + t35467*(t43503 + t43914 + t43939 + t26153*t27803*t44832 - 1.*t25914*t28002*t44832 + t45025) + t28002*(t43707 + t44024 + t44051 - 1.*t26153*t27229*t44832 + t25914*t35467*t44832 + t45037))*var2[3] + (t43695 + t43797 + t25705*(t43503 + t43547 - 1.*t27598*t44832 + t45025) + t27580*(t43707 + t43711 + t27202*t44832 + t45037))*var2[4] + (t25167*(-1.*t25167*t25688*t28583 + t25167*t25688*t44773 + t25167*t28619*t5211 + t25167*t44784*t5211) + t26135*(t25688*t27550*t28583 - 1.*t25688*t27550*t44773 - 1.*t27550*t28619*t5211 - 1.*t27550*t44784*t5211))*var2[5];
  p_output1[20]=t44315 + t44360 + t44471 + (t44662 + t44750 + t35467*(t44510 + t44678 + t44679 + t27353*t43030*t44832 + t27353*t43036*t44832 + t45132) + t25914*t27353*(t44587 + t44722 + t44735 + t26153*t27229*t44832 - 1.*t25914*t35467*t44832 + t45142))*var2[3] + (t44494 + t44655 + t25705*(t44510 + t44547 + t27353*t44832 + t45132) + t27373*(t44587 + t44606 - 1.*t27202*t44832 + t45142))*var2[4] + t26135*(-1.*t25688*t28619 - 1.*t25688*t44784 - 1.*t28583*t5211 + t44773*t5211)*var2[5];
  p_output1[21]=t45224*var2[0] + (t25842*t45253 - 1.*t3138*t45262)*var2[1] + (t3138*t45253 + t25842*t45262)*var2[2] + (t33812*t35467 + t28002*(t45281 - 1.*t25914*t27353*t45356 + t26153*t27353*t45364) + t25914*t27353*(t35579 + t35582 + t35633 + t45331 + t28002*t45356 + t27803*t45364))*var2[3] + (t25705*t41083 + t27580*(t45281 - 1.*t27353*t45289) + t27373*(t35579 + t43765 + t43770 + t27598*t45289 + t25167*t45324 + t45331))*var2[4] + t26135*t45241*var2[5];
  p_output1[22]=(t35467*t35703 + t35527*t45224 + t28002*(t29426*t45224 + t32590*t45262 + t35467*t45356 + t27229*t45364 + t45540 + t45542) + t35467*(t38544 + t39123 + t39648 - 1.*t28002*t45356 - 1.*t27803*t45364 + t45560))*var2[3] + (t25705*t43787 + t43691*t45253 + t27580*(t28648*t45215 + t27202*t45289 + t45399 + t45408 + t45540 + t45542) + t25705*(t38544 + t44651 + t44652 - 1.*t27598*t45289 + t45432 + t45560))*var2[4] + (t45205*t45445 + t26135*t45528 + t26135*(-1.*t25167*t25688*t28619 + t44651 + t45432 - 1.*t27550*t28299*t45447 - 1.*t27550*t28299*t45472 - 1.*t25167*t28583*t5211) + t25167*(t25688*t26135*t28619 + t45399 + t45408 + t25167*t28299*t45447 + t25167*t28299*t45472 + t26135*t28583*t5211))*var2[5] + (t45205*t45389 + t25167*(t26135*t28572 + t42893 + t45399 + t45408) + t26135*t45413 + t26135*(-1.*t25167*t28572 + t44651 + t45428 + t45432))*var2[6];
  p_output1[23]=t45603 + t35467*var2[0] + t27263*var2[1] + (t25842*t27229 + t25705*t3138)*var2[2] + (t37776*t45224 + t35467*(t25914*t27353*t45356 - 1.*t26153*t27353*t45364 + t45630) + t25914*t27353*(-1.*t29426*t45224 - 1.*t32590*t45262 - 1.*t35467*t45356 - 1.*t27229*t45364 + t45641 + t45643))*var2[3] + (t44487*t45253 + t25705*(t27353*t45289 + t45630) + t27373*(-1.*t28299*t45205 - 1.*t28648*t45215 - 1.*t27202*t45289 - 1.*t26135*t45324 + t45641 + t45643))*var2[4] + t45205*t45612*var2[5];
  p_output1[24]=t28002*var2[0] + t27888*var2[1] + (t25842*t27803 + t27580*t3138)*var2[2] + (t28002*(t45730 - 1.*t25914*t27353*t45803 + t26153*t27353*t45812) + t33812*t45819 + t25914*t27353*(t45780 + t45782 + t28002*t45803 + t27803*t45812 + t29426*t45819 + t32590*t45826))*var2[3] + (t27580*(t45730 - 1.*t27353*t45733) + t41083*t45760 + t27373*(t27550*t28299 + t27598*t45733 + t25167*t45766 + t45780 + t45782 + t28648*t45790))*var2[4] + t27550*t45241*var2[5] + (0.28121*t23316 - 0.27*Power(t23316,2) - 1.*t23316*t28142)*var2[7];
  p_output1[25]=(t28002*t35527 + t35703*t45819 + t28002*(t34973 + t35022 + t35039 + t35467*t45803 + t27229*t45812 + t45874) + t35467*(-1.*t28002*t45803 - 1.*t27803*t45812 - 1.*t29426*t45819 - 1.*t32590*t45826 + t45878 + t45882))*var2[3] + (t27580*t43691 + t43787*t45760 + t27580*(t34973 + t42893 + t42896 + t27202*t45733 + t45838 + t45874) + t25705*(t45428 - 1.*t27598*t45733 - 1.*t28648*t45790 + t45846 + t45878 + t45882))*var2[4] + (t25167*t45445 + t27550*t45528 + t25167*(t25688*t27550*t28619 + t42893 + t25167*t45447*t45722 + t25167*t45472*t45722 + t45838 + t27550*t28583*t5211) + t26135*(-1.*t25688*t28619*t45205 + t45428 - 1.*t27550*t45447*t45722 - 1.*t27550*t45472*t45722 + t45846 - 1.*t28583*t45205*t5211))*var2[5] + (t25167*t45389 + t27550*t45413 + t25167*(t27550*t28572 + t42893 + t25167*t45722 + t45838) + t26135*(-1.*t28572*t45205 + t45428 - 1.*t27550*t45722 + t45846))*var2[6];
  p_output1[26]=t45603 + t45819*var2[0] + (t25842*t45760 - 1.*t3138*t45826)*var2[1] + (t3138*t45760 + t25842*t45826)*var2[2] + (t28002*t37776 + t35467*(t25914*t27353*t45803 - 1.*t26153*t27353*t45812 + t45938) + t25914*t27353*(t35503 + t35505 + t35511 - 1.*t35467*t45803 - 1.*t27229*t45812 + t45945))*var2[3] + (t27580*t44487 + t25705*(t27353*t45733 + t45938) + t27373*(t35503 + t43679 + t43683 - 1.*t27202*t45733 - 1.*t26135*t45766 + t45945))*var2[4] + t25167*t45612*var2[5] + (-0.28121*t24590 + 0.27*t23316*t24590 + t24590*t28142)*var2[7];
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
